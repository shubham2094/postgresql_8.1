/*-------------------------------------------------------------------------
 *
 * parse_target.c
 *	  handle target lists
 *
 * Portions Copyright (c) 1996-2005, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 *
 * IDENTIFICATION
 *	  $PostgreSQL: pgsql/src/backend/parser/parse_target.c,v 1.138.2.1 2005/11/22 18:23:14 momjian Exp $
 *
 *-------------------------------------------------------------------------
 */
#include "postgres.h"

#include "commands/dbcommands.h"
#include "funcapi.h"
#include "miscadmin.h"
#include "nodes/bitmapset.h"
#include "nodes/makefuncs.h"
#include "parser/parsetree.h"
#include "parser/parse_coerce.h"
#include "parser/parse_expr.h"
#include "parser/parse_func.h"
#include "parser/parse_relation.h"
#include "parser/parse_target.h"
#include "parser/parse_type.h"
#include "utils/builtins.h"
#include "utils/lsyscache.h"
#include "utils/typcache.h"


static void markTargetListOrigin(ParseState *pstate, TargetEntry *tle,
					 Var *var, int levelsup);
static Node *transformAssignmentIndirection(ParseState *pstate,
							   Node *basenode,
							   const char *targetName,
							   bool targetIsArray,
							   Oid targetTypeId,
							   int32 targetTypMod,
							   ListCell *indirection,
							   Node *rhs);
static List *ExpandColumnRefStar(ParseState *pstate, ColumnRef *cref);
static List *ExpandAllTables(ParseState *pstate);
static List *ExpandIndirectionStar(ParseState *pstate, A_Indirection *ind);
static int	FigureColnameInternal(Node *node, char **name);


/*
 * transformTargetEntry()
 *	Transform any ordinary "expression-type" node into a targetlist entry.
 *	This is exported so that parse_clause.c can generate targetlist entries
 *	for ORDER/GROUP BY items that are not already in the targetlist.
 *
 * node		the (untransformed) parse tree for the value expression.
 * expr		the transformed expression, or NULL if caller didn't do it yet.
 * colname	the column name to be assigned, or NULL if none yet set.
 * resjunk	true if the target should be marked resjunk, ie, it is not
 *			wanted in the final projected tuple.
 */
TargetEntry *
transformTargetEntry(ParseState *pstate,
					 Node *node,
					 Node *expr,
					 char *colname,
					 bool resjunk)
{
	/* Transform the node if caller didn't do it already */
	if (expr == NULL)
		expr = transformExpr(pstate, node);

	if (colname == NULL && !resjunk)
	{
		/*
		 * Generate a suitable column name for a column without any explicit
		 * 'AS ColumnName' clause.
		 */
		colname = FigureColname(node);
	}

	return makeTargetEntry((Expr *) expr,
						   (AttrNumber) pstate->p_next_resno++,
						   colname,
						   resjunk);
}


/*
 * transformTargetList()
 * Turns a list of ResTarget's into a list of TargetEntry's.
 *
 * At this point, we don't care whether we are doing SELECT, INSERT,
 * or UPDATE; we just transform the given expressions (the "val" fields).
 */
List *
transformTargetList(ParseState *pstate, List *targetlist)
{
	List	   *p_target = NIL;
	ListCell   *o_target;

	foreach(o_target, targetlist)
	{
		ResTarget  *res = (ResTarget *) lfirst(o_target);

		/*
		 * Check for "something.*".  Depending on the complexity of the
		 * "something", the star could appear as the last name in ColumnRef,
		 * or as the last indirection item in A_Indirection.
		 */
		if (IsA(res->val, ColumnRef))
		{
			ColumnRef  *cref = (ColumnRef *) res->val;

			if (strcmp(strVal(llast(cref->fields)), "*") == 0)
			{
				/* It is something.*, expand into multiple items */
				p_target = list_concat(p_target,
									   ExpandColumnRefStar(pstate, cref));
				continue;
			}
		}
		else if (IsA(res->val, A_Indirection))
		{
			A_Indirection *ind = (A_Indirection *) res->val;
			Node	   *lastitem = llast(ind->indirection);

			if (IsA(lastitem, String) &&
				strcmp(strVal(lastitem), "*") == 0)
			{
				/* It is something.*, expand into multiple items */
				p_target = list_concat(p_target,
									   ExpandIndirectionStar(pstate, ind));
				continue;
			}
		}

		/*
		 * Not "something.*", so transform as a single expression
		 */
		p_target = lappend(p_target,
						   transformTargetEntry(pstate,
												res->val,
												NULL,
												res->name,
												false));
	}

	return p_target;
}


/*
 * markTargetListOrigins()
 *		Mark targetlist columns that are simple Vars with the source
 *		table's OID and column number.
 *
 * Currently, this is done only for SELECT targetlists, since we only
 * need the info if we are going to send it to the frontend.
 */
void
markTargetListOrigins(ParseState *pstate, List *targetlist)
{
	ListCell   *l;

	foreach(l, targetlist)
	{
		TargetEntry *tle = (TargetEntry *) lfirst(l);

		markTargetListOrigin(pstate, tle, (Var *) tle->expr, 0);
	}
}

/*
 * markTargetListOrigin()
 *		If 'var' is a Var of a plain relation, mark 'tle' with its origin
 *
 * levelsup is an extra offset to interpret the Var's varlevelsup correctly.
 *
 * This is split out so it can recurse for join references.  Note that we
 * do not drill down into views, but report the view as the column owner.
 */
static void
markTargetListOrigin(ParseState *pstate, TargetEntry *tle,
					 Var *var, int levelsup)
{
	int			netlevelsup;
	RangeTblEntry *rte;
	AttrNumber	attnum;

	if (var == NULL || !IsA(var, Var))
		return;
	netlevelsup = var->varlevelsup + levelsup;
	rte = GetRTEByRangeTablePosn(pstate, var->varno, netlevelsup);
	attnum = var->varattno;

	switch (rte->rtekind)
	{
		case RTE_RELATION:
			/* It's a table or view, report it */
			tle->resorigtbl = rte->relid;
			tle->resorigcol = attnum;
			break;
		case RTE_SUBQUERY:
			/* Subselect-in-FROM: copy up from the subselect */
			if (attnum != InvalidAttrNumber)
			{
				TargetEntry *ste = get_tle_by_resno(rte->subquery->targetList,
													attnum);

				if (ste == NULL || ste->resjunk)
					elog(ERROR, "subquery %s does not have attribute %d",
						 rte->eref->aliasname, attnum);
				tle->resorigtbl = ste->resorigtbl;
				tle->resorigcol = ste->resorigcol;
			}
			break;
		case RTE_JOIN:
			/* Join RTE --- recursively inspect the alias variable */
			if (attnum != InvalidAttrNumber)
			{
				Var		   *aliasvar;

				Assert(attnum > 0 && attnum <= list_length(rte->joinaliasvars));
				aliasvar = (Var *) list_nth(rte->joinaliasvars, attnum - 1);
				markTargetListOrigin(pstate, tle, aliasvar, netlevelsup);
			}
			break;
		case RTE_SPECIAL:
		case RTE_FUNCTION:
			/* not a simple relation, leave it unmarked */
			break;
	}
}


/*
 * updateTargetListEntry()
 *	This is used in INSERT and UPDATE statements only.	It prepares a
 *	TargetEntry for assignment to a column of the target table.
 *	This includes coercing the given value to the target column's type
 *	(if necessary), and dealing with any subfield names or subscripts
 *	attached to the target column itself.
 *
 * pstate		parse state
 * tle			target list entry to be modified
 * colname		target column name (ie, name of attribute to be assigned to)
 * attrno		target attribute number
 * indirection	subscripts/field names for target column, if any
 */
void
updateTargetListEntry(ParseState *pstate,
					  TargetEntry *tle,
					  char *colname,
					  int attrno,
					  List *indirection)
{
	Oid			type_id;		/* type of value provided */
	Oid			attrtype;		/* type of target column */
	int32		attrtypmod;
	Relation	rd = pstate->p_target_relation;

	Assert(rd != NULL);
	if (attrno <= 0)
		ereport(ERROR,
				(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
				 errmsg("cannot assign to system column \"%s\"",
						colname)));
	attrtype = attnumTypeId(rd, attrno);
	attrtypmod = rd->rd_att->attrs[attrno - 1]->atttypmod;

	/*
	 * If the expression is a DEFAULT placeholder, insert the attribute's
	 * type/typmod into it so that exprType will report the right things. (We
	 * expect that the eventually substituted default expression will in fact
	 * have this type and typmod.)	Also, reject trying to update a subfield
	 * or array element with DEFAULT, since there can't be any default for
	 * portions of a column.
	 */
	if (tle->expr && IsA(tle->expr, SetToDefault))
	{
		SetToDefault *def = (SetToDefault *) tle->expr;

		def->typeId = attrtype;
		def->typeMod = attrtypmod;
		if (indirection)
		{
			if (IsA(linitial(indirection), A_Indices))
				ereport(ERROR,
						(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
						 errmsg("cannot set an array element to DEFAULT")));
			else
				ereport(ERROR,
						(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
						 errmsg("cannot set a subfield to DEFAULT")));
		}
	}

	/* Now we can use exprType() safely. */
	type_id = exprType((Node *) tle->expr);

	/*
	 * If there is indirection on the target column, prepare an array or
	 * subfield assignment expression.	This will generate a new column value
	 * that the source value has been inserted into, which can then be placed
	 * in the new tuple constructed by INSERT or UPDATE.
	 */
	if (indirection)
	{
		Node	   *colVar;

		if (pstate->p_is_insert)
		{
			/*
			 * The command is INSERT INTO table (col.something) ... so there
			 * is not really a source value to work with. Insert a NULL
			 * constant as the source value.
			 */
			colVar = (Node *) makeNullConst(attrtype);
		}
		else
		{
			/*
			 * Build a Var for the column to be updated.
			 */
			colVar = (Node *) make_var(pstate,
									   pstate->p_target_rangetblentry,
									   attrno);
		}

		tle->expr = (Expr *)
			transformAssignmentIndirection(pstate,
										   colVar,
										   colname,
										   false,
										   attrtype,
										   attrtypmod,
										   list_head(indirection),
										   (Node *) tle->expr);
	}
	else
	{
		/*
		 * For normal non-qualified target column, do type checking and
		 * coercion.
		 */
		tle->expr = (Expr *)
			coerce_to_target_type(pstate,
								  (Node *) tle->expr, type_id,
								  attrtype, attrtypmod,
								  COERCION_ASSIGNMENT,
								  COERCE_IMPLICIT_CAST);
		if (tle->expr == NULL)
			ereport(ERROR,
					(errcode(ERRCODE_DATATYPE_MISMATCH),
					 errmsg("column \"%s\" is of type %s"
							" but expression is of type %s",
							colname,
							format_type_be(attrtype),
							format_type_be(type_id)),
			   errhint("You will need to rewrite or cast the expression.")));
	}

	/*
	 * Set the resno to identify the target column --- the rewriter and
	 * planner depend on this.	We also set the resname to identify the target
	 * column, but this is only for debugging purposes; it should not be
	 * relied on.  (In particular, it might be out of date in a stored rule.)
	 */
	tle->resno = (AttrNumber) attrno;
	tle->resname = colname;
}

/*
 * Process indirection (field selection or subscripting) of the target
 * column in INSERT/UPDATE.  This routine recurses for multiple levels
 * of indirection --- but note that several adjacent A_Indices nodes in
 * the indirection list are treated as a single multidimensional subscript
 * operation.
 *
 * In the initial call, basenode is a Var for the target column in UPDATE,
 * or a null Const of the target's type in INSERT.  In recursive calls,
 * basenode is NULL, indicating that a substitute node should be consed up if
 * needed.
 *
 * targetName is the name of the field or subfield we're assigning to, and
 * targetIsArray is true if we're subscripting it.  These are just for
 * error reporting.
 *
 * targetTypeId and targetTypMod indicate the datatype of the object to
 * be assigned to (initially the target column, later some subobject).
 *
 * indirection is the sublist remaining to process.  When it's NULL, we're
 * done recursing and can just coerce and return the RHS.
 *
 * rhs is the already-transformed value to be assigned; note it has not been
 * coerced to any particular type.
 */
static Node *
transformAssignmentIndirection(ParseState *pstate,
							   Node *basenode,
							   const char *targetName,
							   bool targetIsArray,
							   Oid targetTypeId,
							   int32 targetTypMod,
							   ListCell *indirection,
							   Node *rhs)
{
	Node	   *result;
	List	   *subscripts = NIL;
	bool		isSlice = false;
	ListCell   *i;

	if (indirection && !basenode)
	{
		/* Set up a substitution.  We reuse CaseTestExpr for this. */
		CaseTestExpr *ctest = makeNode(CaseTestExpr);

		ctest->typeId = targetTypeId;
		ctest->typeMod = targetTypMod;
		basenode = (Node *) ctest;
	}

	/*
	 * We have to split any field-selection operations apart from
	 * subscripting.  Adjacent A_Indices nodes have to be treated as a single
	 * multidimensional subscript operation.
	 */
	for_each_cell(i, indirection)
	{
		Node	   *n = lfirst(i);

		if (IsA(n, A_Indices))
		{
			subscripts = lappend(subscripts, n);
			if (((A_Indices *) n)->lidx != NULL)
				isSlice = true;
		}
		else
		{
			FieldStore *fstore;
			Oid			typrelid;
			AttrNumber	attnum;
			Oid			fieldTypeId;
			int32		fieldTypMod;

			Assert(IsA(n, String));

			/* process subscripts before this field selection */
			if (subscripts)
			{
				Oid			elementTypeId = transformArrayType(targetTypeId);
				Oid			typeNeeded = isSlice ? targetTypeId : elementTypeId;

				/* recurse to create appropriate RHS for array assign */
				rhs = transformAssignmentIndirection(pstate,
													 NULL,
													 targetName,
													 true,
													 typeNeeded,
													 targetTypMod,
													 i,
													 rhs);
				/* process subscripts */
				return (Node *) transformArraySubscripts(pstate,
														 basenode,
														 targetTypeId,
														 elementTypeId,
														 targetTypMod,
														 subscripts,
														 rhs);
			}

			/* No subscripts, so can process field selection here */

			typrelid = typeidTypeRelid(targetTypeId);
			if (!typrelid)
				ereport(ERROR,
						(errcode(ERRCODE_DATATYPE_MISMATCH),
						 errmsg("cannot assign to field \"%s\" of column \"%s\" because its type %s is not a composite type",
								strVal(n), targetName,
								format_type_be(targetTypeId))));

			attnum = get_attnum(typrelid, strVal(n));
			if (attnum == InvalidAttrNumber)
				ereport(ERROR,
						(errcode(ERRCODE_UNDEFINED_COLUMN),
						 errmsg("cannot assign to field \"%s\" of column \"%s\" because there is no such column in data type %s",
								strVal(n), targetName,
								format_type_be(targetTypeId))));
			if (attnum < 0)
				ereport(ERROR,
						(errcode(ERRCODE_UNDEFINED_COLUMN),
						 errmsg("cannot assign to system column \"%s\"",
								strVal(n))));

			get_atttypetypmod(typrelid, attnum,
							  &fieldTypeId, &fieldTypMod);

			/* recurse to create appropriate RHS for field assign */
			rhs = transformAssignmentIndirection(pstate,
												 NULL,
												 strVal(n),
												 false,
												 fieldTypeId,
												 fieldTypMod,
												 lnext(i),
												 rhs);

			/* and build a FieldStore node */
			fstore = makeNode(FieldStore);
			fstore->arg = (Expr *) basenode;
			fstore->newvals = list_make1(rhs);
			fstore->fieldnums = list_make1_int(attnum);
			fstore->resulttype = targetTypeId;

			return (Node *) fstore;
		}
	}

	/* process trailing subscripts, if any */
	if (subscripts)
	{
		Oid			elementTypeId = transformArrayType(targetTypeId);
		Oid			typeNeeded = isSlice ? targetTypeId : elementTypeId;

		/* recurse to create appropriate RHS for array assign */
		rhs = transformAssignmentIndirection(pstate,
											 NULL,
											 targetName,
											 true,
											 typeNeeded,
											 targetTypMod,
											 NULL,
											 rhs);
		/* process subscripts */
		return (Node *) transformArraySubscripts(pstate,
												 basenode,
												 targetTypeId,
												 elementTypeId,
												 targetTypMod,
												 subscripts,
												 rhs);
	}

	/* base case: just coerce RHS to match target type ID */

	result = coerce_to_target_type(pstate,
								   rhs, exprType(rhs),
								   targetTypeId, targetTypMod,
								   COERCION_ASSIGNMENT,
								   COERCE_IMPLICIT_CAST);
	if (result == NULL)
	{
		if (targetIsArray)
			ereport(ERROR,
					(errcode(ERRCODE_DATATYPE_MISMATCH),
					 errmsg("array assignment to \"%s\" requires type %s"
							" but expression is of type %s",
							targetName,
							format_type_be(targetTypeId),
							format_type_be(exprType(rhs))),
			   errhint("You will need to rewrite or cast the expression.")));
		else
			ereport(ERROR,
					(errcode(ERRCODE_DATATYPE_MISMATCH),
					 errmsg("subfield \"%s\" is of type %s"
							" but expression is of type %s",
							targetName,
							format_type_be(targetTypeId),
							format_type_be(exprType(rhs))),
			   errhint("You will need to rewrite or cast the expression.")));
	}

	return result;
}


/*
 * checkInsertTargets -
 *	  generate a list of INSERT column targets if not supplied, or
 *	  test supplied column names to make sure they are in target table.
 *	  Also return an integer list of the columns' attribute numbers.
 */
List *
checkInsertTargets(ParseState *pstate, List *cols, List **attrnos)
{
	*attrnos = NIL;

	if (cols == NIL)
	{
		/*
		 * Generate default column list for INSERT.
		 */
		Form_pg_attribute *attr = pstate->p_target_relation->rd_att->attrs;
		int			numcol = pstate->p_target_relation->rd_rel->relnatts;
		int			i;

		for (i = 0; i < numcol; i++)
		{
			ResTarget  *col;

			if (attr[i]->attisdropped)
				continue;

			col = makeNode(ResTarget);
			col->name = pstrdup(NameStr(attr[i]->attname));
			col->indirection = NIL;
			col->val = NULL;
			cols = lappend(cols, col);
			*attrnos = lappend_int(*attrnos, i + 1);
		}
	}
	else
	{
		/*
		 * Do initial validation of user-supplied INSERT column list.
		 */
		Bitmapset  *wholecols = NULL;
		Bitmapset  *partialcols = NULL;
		ListCell   *tl;

		foreach(tl, cols)
		{
			ResTarget  *col = (ResTarget *) lfirst(tl);
			char	   *name = col->name;
			int			attrno;

			/* Lookup column name, ereport on failure */
			attrno = attnameAttNum(pstate->p_target_relation, name, false);

			/*
			 * Check for duplicates, but only of whole columns --- we allow
			 * INSERT INTO foo (col.subcol1, col.subcol2)
			 */
			if (col->indirection == NIL)
			{
				/* whole column; must not have any other assignment */
				if (bms_is_member(attrno, wholecols) ||
					bms_is_member(attrno, partialcols))
					ereport(ERROR,
							(errcode(ERRCODE_DUPLICATE_COLUMN),
							 errmsg("column \"%s\" specified more than once",
									name)));
				wholecols = bms_add_member(wholecols, attrno);
			}
			else
			{
				/* partial column; must not have any whole assignment */
				if (bms_is_member(attrno, wholecols))
					ereport(ERROR,
							(errcode(ERRCODE_DUPLICATE_COLUMN),
							 errmsg("column \"%s\" specified more than once",
									name)));
				partialcols = bms_add_member(partialcols, attrno);
			}

			*attrnos = lappend_int(*attrnos, attrno);
		}
	}

	return cols;
}

/*
 * ExpandColumnRefStar()
 *		Turns foo.* (in the target list) into a list of targetlist entries.
 *
 * This handles the case where '*' appears as the last or only name in a
 * ColumnRef.
 */
static List *
ExpandColumnRefStar(ParseState *pstate, ColumnRef *cref)
{
	List	   *fields = cref->fields;
	int			numnames = list_length(fields);

	if (numnames == 1)
	{
		/*
		 * Target item is a bare '*', expand all tables
		 *
		 * (e.g., SELECT * FROM emp, dept)
		 */
		return ExpandAllTables(pstate);
	}
	else
	{
		/*
		 * Target item is relation.*, expand that table
		 *
		 * (e.g., SELECT emp.*, dname FROM emp, dept)
		 */
		char	   *schemaname;
		char	   *relname;
		RangeTblEntry *rte;
		int			sublevels_up;
		int			rtindex;

		switch (numnames)
		{
			case 2:
				schemaname = NULL;
				relname = strVal(linitial(fields));
				break;
			case 3:
				schemaname = strVal(linitial(fields));
				relname = strVal(lsecond(fields));
				break;
			case 4:
				{
					char	   *name1 = strVal(linitial(fields));

					/*
					 * We check the catalog name and then ignore it.
					 */
					if (strcmp(name1, get_database_name(MyDatabaseId)) != 0)
						ereport(ERROR,
								(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
								 errmsg("cross-database references are not implemented: %s",
										NameListToString(fields))));
					schemaname = strVal(lsecond(fields));
					relname = strVal(lthird(fields));
					break;
				}
			default:
				ereport(ERROR,
						(errcode(ERRCODE_SYNTAX_ERROR),
				errmsg("improper qualified name (too many dotted names): %s",
					   NameListToString(fields))));
				schemaname = NULL;		/* keep compiler quiet */
				relname = NULL;
				break;
		}

		rte = refnameRangeTblEntry(pstate, schemaname, relname,
								   &sublevels_up);
		if (rte == NULL)
			rte = addImplicitRTE(pstate, makeRangeVar(schemaname,
													  relname));

		rtindex = RTERangeTablePosn(pstate, rte, &sublevels_up);

		return expandRelAttrs(pstate, rte, rtindex, sublevels_up);
	}
}

/*
 * ExpandAllTables()
 *		Turns '*' (in the target list) into a list of targetlist entries.
 *
 * tlist entries are generated for each relation appearing in the query's
 * varnamespace.  We do not consider relnamespace because that would include
 * input tables of aliasless JOINs, NEW/OLD pseudo-entries, implicit RTEs,
 * etc.
 */
static List *
ExpandAllTables(ParseState *pstate)
{
	List	   *target = NIL;
	ListCell   *l;

	/* Check for SELECT *; */
	if (!pstate->p_varnamespace)
		ereport(ERROR,
				(errcode(ERRCODE_SYNTAX_ERROR),
				 errmsg("SELECT * with no tables specified is not valid")));

	foreach(l, pstate->p_varnamespace)
	{
		RangeTblEntry *rte = (RangeTblEntry *) lfirst(l);
		int			rtindex = RTERangeTablePosn(pstate, rte, NULL);

		target = list_concat(target,
							 expandRelAttrs(pstate, rte, rtindex, 0));
	}

	return target;
}

/*
 * ExpandIndirectionStar()
 *		Turns foo.* (in the target list) into a list of targetlist entries.
 *
 * This handles the case where '*' appears as the last item in A_Indirection.
 */
static List *
ExpandIndirectionStar(ParseState *pstate, A_Indirection *ind)
{
	Node	   *expr;
	TupleDesc	tupleDesc;
	int			numAttrs;
	int			i;
	List	   *te_list = NIL;

	/* Strip off the '*' to create a reference to the rowtype object */
	ind = copyObject(ind);
	ind->indirection = list_truncate(ind->indirection,
									 list_length(ind->indirection) - 1);

	/* And transform that */
	expr = transformExpr(pstate, (Node *) ind);

	/*
	 * Verify it's a composite type, and get the tupdesc.  We use
	 * get_expr_result_type() because that can handle references to functions
	 * returning anonymous record types.  If that fails, use
	 * lookup_rowtype_tupdesc(), which will almost certainly fail as well, but
	 * it will give an appropriate error message.
	 *
	 * If it's a Var of type RECORD, we have to work even harder: we have to
	 * find what the Var refers to, and pass that to get_expr_result_type.
	 * That task is handled by expandRecordVariable().
	 */
	if (IsA(expr, Var) &&
		((Var *) expr)->vartype == RECORDOID)
		tupleDesc = expandRecordVariable(pstate, (Var *) expr, 0);
	else if (get_expr_result_type(expr, NULL, &tupleDesc) != TYPEFUNC_COMPOSITE)
		tupleDesc = lookup_rowtype_tupdesc(exprType(expr), exprTypmod(expr));
	Assert(tupleDesc);

	/* Generate a list of references to the individual fields */
	numAttrs = tupleDesc->natts;
	for (i = 0; i < numAttrs; i++)
	{
		Form_pg_attribute att = tupleDesc->attrs[i];
		Node	   *fieldnode;
		TargetEntry *te;

		if (att->attisdropped)
			continue;

		/*
		 * If we got a whole-row Var from the rowtype reference, we can expand
		 * the fields as simple Vars.  Otherwise we must generate multiple
		 * copies of the rowtype reference and do FieldSelects.
		 */
		if (IsA(expr, Var) &&
			((Var *) expr)->varattno == InvalidAttrNumber)
		{
			Var		   *var = (Var *) expr;

			fieldnode = (Node *) makeVar(var->varno,
										 i + 1,
										 att->atttypid,
										 att->atttypmod,
										 var->varlevelsup);
		}
		else
		{
			FieldSelect *fselect = makeNode(FieldSelect);

			fselect->arg = (Expr *) copyObject(expr);
			fselect->fieldnum = i + 1;
			fselect->resulttype = att->atttypid;
			fselect->resulttypmod = att->atttypmod;

			fieldnode = (Node *) fselect;
		}

		te = makeTargetEntry((Expr *) fieldnode,
							 (AttrNumber) pstate->p_next_resno++,
							 pstrdup(NameStr(att->attname)),
							 false);
		te_list = lappend(te_list, te);
	}

	return te_list;
}

/*
 * expandRecordVariable
 *		Get the tuple descriptor for a Var of type RECORD, if possible.
 *
 * Since no actual table or view column is allowed to have type RECORD, such
 * a Var must refer to a JOIN or FUNCTION RTE or to a subquery output.	We
 * drill down to find the ultimate defining expression and attempt to infer
 * the tupdesc from it.  We ereport if we can't determine the tupdesc.
 *
 * levelsup is an extra offset to interpret the Var's varlevelsup correctly.
 */
TupleDesc
expandRecordVariable(ParseState *pstate, Var *var, int levelsup)
{
	TupleDesc	tupleDesc;
	int			netlevelsup;
	RangeTblEntry *rte;
	AttrNumber	attnum;
	Node	   *expr;

	/* Check my caller didn't mess up */
	Assert(IsA(var, Var));
	Assert(var->vartype == RECORDOID);

	netlevelsup = var->varlevelsup + levelsup;
	rte = GetRTEByRangeTablePosn(pstate, var->varno, netlevelsup);
	attnum = var->varattno;

	if (attnum == InvalidAttrNumber)
	{
		/* Whole-row reference to an RTE, so expand the known fields */
		List	   *names,
				   *vars;
		ListCell   *lname,
				   *lvar;
		int			i;

		expandRTE(rte, var->varno, 0, false,
				  &names, &vars);

		tupleDesc = CreateTemplateTupleDesc(list_length(vars), false);
		i = 1;
		forboth(lname, names, lvar, vars)
		{
			char	   *label = strVal(lfirst(lname));
			Node	   *varnode = (Node *) lfirst(lvar);

			TupleDescInitEntry(tupleDesc, i,
							   label,
							   exprType(varnode),
							   exprTypmod(varnode),
							   0);
			i++;
		}
		Assert(lname == NULL && lvar == NULL);	/* lists same length? */

		return tupleDesc;
	}

	expr = (Node *) var;		/* default if we can't drill down */

	switch (rte->rtekind)
	{
		case RTE_RELATION:
		case RTE_SPECIAL:

			/*
			 * This case should not occur: a column of a table shouldn't have
			 * type RECORD.  Fall through and fail (most likely) at the
			 * bottom.
			 */
			break;
		case RTE_SUBQUERY:
			{
				/* Subselect-in-FROM: examine sub-select's output expr */
				TargetEntry *ste = get_tle_by_resno(rte->subquery->targetList,
													attnum);

				if (ste == NULL || ste->resjunk)
					elog(ERROR, "subquery %s does not have attribute %d",
						 rte->eref->aliasname, attnum);
				expr = (Node *) ste->expr;
				if (IsA(expr, Var))
				{
					/*
					 * Recurse into the sub-select to see what its Var refers
					 * to.	We have to build an additional level of ParseState
					 * to keep in step with varlevelsup in the subselect.
					 */
					ParseState	mypstate;

					MemSet(&mypstate, 0, sizeof(mypstate));
					mypstate.parentParseState = pstate;
					mypstate.p_rtable = rte->subquery->rtable;
					/* don't bother filling the rest of the fake pstate */

					return expandRecordVariable(&mypstate, (Var *) expr, 0);
				}
				/* else fall through to inspect the expression */
			}
			break;
		case RTE_JOIN:
			/* Join RTE --- recursively inspect the alias variable */
			Assert(attnum > 0 && attnum <= list_length(rte->joinaliasvars));
			expr = (Node *) list_nth(rte->joinaliasvars, attnum - 1);
			if (IsA(expr, Var))
				return expandRecordVariable(pstate, (Var *) expr, netlevelsup);
			/* else fall through to inspect the expression */
			break;
		case RTE_FUNCTION:

			/*
			 * We couldn't get here unless a function is declared with one of
			 * its result columns as RECORD, which is not allowed.
			 */
			break;
	}

	/*
	 * We now have an expression we can't expand any more, so see if
	 * get_expr_result_type() can do anything with it.	If not, pass to
	 * lookup_rowtype_tupdesc() which will probably fail, but will give an
	 * appropriate error message while failing.
	 */
	if (get_expr_result_type(expr, NULL, &tupleDesc) != TYPEFUNC_COMPOSITE)
		tupleDesc = lookup_rowtype_tupdesc(exprType(expr), exprTypmod(expr));

	return tupleDesc;
}


/*
 * FigureColname -
 *	  if the name of the resulting column is not specified in the target
 *	  list, we have to guess a suitable name.  The SQL spec provides some
 *	  guidance, but not much...
 *
 * Note that the argument is the *untransformed* parse tree for the target
 * item.  This is a shade easier to work with than the transformed tree.
 */
char *
FigureColname(Node *node)
{
	char	   *name = NULL;

	FigureColnameInternal(node, &name);
	if (name != NULL)
		return name;
	/* default result if we can't guess anything */
	return "?column?";
}

static int
FigureColnameInternal(Node *node, char **name)
{
	int			strength = 0;

	if (node == NULL)
		return strength;

	switch (nodeTag(node))
	{
		case T_ColumnRef:
			{
				char	   *fname = NULL;
				ListCell   *l;

				/* find last field name, if any, ignoring "*" */
				foreach(l, ((ColumnRef *) node)->fields)
				{
					Node	   *i = lfirst(l);

					if (strcmp(strVal(i), "*") != 0)
						fname = strVal(i);
				}
				if (fname)
				{
					*name = fname;
					return 2;
				}
			}
			break;
		case T_A_Indirection:
			{
				A_Indirection *ind = (A_Indirection *) node;
				char	   *fname = NULL;
				ListCell   *l;

				/* find last field name, if any, ignoring "*" */
				foreach(l, ind->indirection)
				{
					Node	   *i = lfirst(l);

					if (IsA(i, String) &&
						strcmp(strVal(i), "*") != 0)
						fname = strVal(i);
				}
				if (fname)
				{
					*name = fname;
					return 2;
				}
				return FigureColnameInternal(ind->arg, name);
			}
			break;
		case T_FuncCall:
			*name = strVal(llast(((FuncCall *) node)->funcname));
			return 2;
		case T_A_Expr:
			/* make nullif() act like a regular function */
			if (((A_Expr *) node)->kind == AEXPR_NULLIF)
			{
				*name = "nullif";
				return 2;
			}
			break;
		case T_A_Const:
			if (((A_Const *) node)->typename != NULL)
			{
				*name = strVal(llast(((A_Const *) node)->typename->names));
				return 1;
			}
			break;
		case T_TypeCast:
			strength = FigureColnameInternal(((TypeCast *) node)->arg,
											 name);
			if (strength <= 1)
			{
				if (((TypeCast *) node)->typename != NULL)
				{
					*name = strVal(llast(((TypeCast *) node)->typename->names));
					return 1;
				}
			}
			break;
		case T_CaseExpr:
			strength = FigureColnameInternal((Node *) ((CaseExpr *) node)->defresult,
											 name);
			if (strength <= 1)
			{
				*name = "case";
				return 1;
			}
			break;
		case T_ArrayExpr:
			/* make ARRAY[] act like a function */
			*name = "array";
			return 2;
		case T_RowExpr:
			/* make ROW() act like a function */
			*name = "row";
			return 2;
		case T_CoalesceExpr:
			/* make coalesce() act like a regular function */
			*name = "coalesce";
			return 2;
		case T_MinMaxExpr:
			/* make greatest/least act like a regular function */
			switch (((MinMaxExpr *) node)->op)
			{
				case IS_GREATEST:
					*name = "greatest";
					return 2;
				case IS_LEAST:
					*name = "least";
					return 2;
			}
			break;
		default:
			break;
	}

	return strength;
}
