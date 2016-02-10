/* A Bison parser, made by GNU Bison 1.875.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABORT_P = 258,
     ABSOLUTE_P = 259,
     ACCESS = 260,
     ACTION = 261,
     ADD = 262,
     ADMIN = 263,
     AFTER = 264,
     AGGREGATE = 265,
     ALL = 266,
     ALSO = 267,
     ALTER = 268,
     ANALYSE = 269,
     ANALYZE = 270,
     AND = 271,
     ANY = 272,
     ARRAY = 273,
     AS = 274,
     ASC = 275,
     ASSERTION = 276,
     ASSIGNMENT = 277,
     ASYMMETRIC = 278,
     AT = 279,
     AUTHORIZATION = 280,
     BACKWARD = 281,
     BEFORE = 282,
     BEGIN_P = 283,
     BETWEEN = 284,
     BIGINT = 285,
     BINARY = 286,
     BIT = 287,
     BOOLEAN_P = 288,
     BOTH = 289,
     BY = 290,
     CACHE = 291,
     CALLED = 292,
     CASCADE = 293,
     CASE = 294,
     CAST = 295,
     CHAIN = 296,
     CHAR_P = 297,
     CHARACTER = 298,
     CHARACTERISTICS = 299,
     CHECK = 300,
     CHECKPOINT = 301,
     CLASS = 302,
     CLOSE = 303,
     CLUSTER = 304,
     COALESCE = 305,
     COLLATE = 306,
     COLUMN = 307,
     COMMENT = 308,
     COMMIT = 309,
     COMMITTED = 310,
     CONNECTION = 311,
     CONSTRAINT = 312,
     CONSTRAINTS = 313,
     CONVERSION_P = 314,
     CONVERT = 315,
     COPY = 316,
     CREATE = 317,
     CREATEDB = 318,
     CREATEROLE = 319,
     CREATEUSER = 320,
     CROSS = 321,
     CSV = 322,
     CURRENT_DATE = 323,
     CURRENT_ROLE = 324,
     CURRENT_TIME = 325,
     CURRENT_TIMESTAMP = 326,
     CURRENT_USER = 327,
     CURSOR = 328,
     CYCLE = 329,
     DATABASE = 330,
     DAY_P = 331,
     DEALLOCATE = 332,
     DEC = 333,
     DECIMAL_P = 334,
     DECLARE = 335,
     DEFAULT = 336,
     DEFAULTS = 337,
     DEFERRABLE = 338,
     DEFERRED = 339,
     DEFINER = 340,
     DELETE_P = 341,
     DELIMITER = 342,
     DELIMITERS = 343,
     DESC = 344,
     DISABLE_P = 345,
     DISTINCT = 346,
     DO = 347,
     DOMAIN_P = 348,
     DOUBLE_P = 349,
     DROP = 350,
     EACH = 351,
     ELSE = 352,
     ENABLE_P = 353,
     ENCODING = 354,
     ENCRYPTED = 355,
     END_P = 356,
     ESCAPE = 357,
     EXCEPT = 358,
     EXCLUDING = 359,
     EXCLUSIVE = 360,
     EXECUTE = 361,
     EXISTS = 362,
     EXPLAIN = 363,
     EXTERNAL = 364,
     EXTRACT = 365,
     FALSE_P = 366,
     FETCH = 367,
     FIRST_P = 368,
     FLOAT_P = 369,
     FOR = 370,
     FORCE = 371,
     FOREIGN = 372,
     FORWARD = 373,
     FREEZE = 374,
     FROM = 375,
     FULL = 376,
     FUNCTION = 377,
     GLOBAL = 378,
     GRANT = 379,
     GRANTED = 380,
     GREATEST = 381,
     GROUP_P = 382,
     HANDLER = 383,
     HAVING = 384,
     HEADER = 385,
     HOLD = 386,
     HOUR_P = 387,
     ILIKE = 388,
     IMMEDIATE = 389,
     IMMUTABLE = 390,
     IMPLICIT_P = 391,
     IN_P = 392,
     INCLUDING = 393,
     INCREMENT = 394,
     INDEX = 395,
     INHERIT = 396,
     INHERITS = 397,
     INITIALLY = 398,
     INNER_P = 399,
     INOUT = 400,
     INPUT_P = 401,
     INSENSITIVE = 402,
     INSERT = 403,
     INSTEAD = 404,
     INT_P = 405,
     INTEGER = 406,
     INTERSECT = 407,
     INTERVAL = 408,
     INTO = 409,
     INVOKER = 410,
     IS = 411,
     ISNULL = 412,
     ISOLATION = 413,
     JOIN = 414,
     KEY = 415,
     LANCOMPILER = 416,
     LANGUAGE = 417,
     LARGE_P = 418,
     LAST_P = 419,
     LEADING = 420,
     LEAST = 421,
     LEFT = 422,
     LEVEL = 423,
     LIKE = 424,
     LIMIT = 425,
     LISTEN = 426,
     LOAD = 427,
     LOCAL = 428,
     LOCALTIME = 429,
     LOCALTIMESTAMP = 430,
     LOCATION = 431,
     LOCK_P = 432,
     LOGIN_P = 433,
     MATCH = 434,
     MAXVALUE = 435,
     MINUTE_P = 436,
     MINVALUE = 437,
     MODE = 438,
     MONTH_P = 439,
     MOVE = 440,
     NAMES = 441,
     NATIONAL = 442,
     NATURAL = 443,
     NCHAR = 444,
     NEW = 445,
     NEXT = 446,
     NO = 447,
     NOCREATEDB = 448,
     NOCREATEROLE = 449,
     NOCREATEUSER = 450,
     NOINHERIT = 451,
     NOLOGIN_P = 452,
     NONE = 453,
     NOSUPERUSER = 454,
     NOT = 455,
     NOTHING = 456,
     NOTIFY = 457,
     NOTNULL = 458,
     NOWAIT = 459,
     NULL_P = 460,
     NULLIF = 461,
     NUMERIC = 462,
     OBJECT_P = 463,
     OF = 464,
     OFF = 465,
     OFFSET = 466,
     OIDS = 467,
     OLD = 468,
     ON = 469,
     ONLY = 470,
     OPERATOR = 471,
     OPTION = 472,
     OR = 473,
     ORDER = 474,
     OUT_P = 475,
     OUTER_P = 476,
     OVERLAPS = 477,
     OVERLAY = 478,
     OWNER = 479,
     PARTIAL = 480,
     PASSWORD = 481,
     PLACING = 482,
     POSITION = 483,
     PRECISION = 484,
     PRESERVE = 485,
     PREPARE = 486,
     PREPARED = 487,
     PRIMARY = 488,
     PRIOR = 489,
     PRIVILEGES = 490,
     PROCEDURAL = 491,
     PROCEDURE = 492,
     QUOTE = 493,
     READ = 494,
     REAL = 495,
     RECHECK = 496,
     REFERENCES = 497,
     REINDEX = 498,
     RELATIVE_P = 499,
     RELEASE = 500,
     RENAME = 501,
     REPEATABLE = 502,
     REPLACE = 503,
     RESET = 504,
     RESTART = 505,
     RESTRICT = 506,
     RETURNS = 507,
     REVOKE = 508,
     RIGHT = 509,
     ROLE = 510,
     ROLLBACK = 511,
     ROW = 512,
     ROWS = 513,
     RULE = 514,
     SAVEPOINT = 515,
     SCHEMA = 516,
     SCROLL = 517,
     SECOND_P = 518,
     SECURITY = 519,
     SELECT = 520,
     SEQUENCE = 521,
     SERIALIZABLE = 522,
     SESSION = 523,
     SESSION_USER = 524,
     SET = 525,
     SETOF = 526,
     SHARE = 527,
     SHOW = 528,
     SIMILAR = 529,
     SIMPLE = 530,
     SMALLINT = 531,
     SOME = 532,
     STABLE = 533,
     START = 534,
     STATEMENT = 535,
     STATISTICS = 536,
     STDIN = 537,
     STDOUT = 538,
     STORAGE = 539,
     STRICT_P = 540,
     SUBSTRING = 541,
     SUPERUSER_P = 542,
     SYMMETRIC = 543,
     SYSID = 544,
     SYSTEM_P = 545,
     TABLE = 546,
     TABLESPACE = 547,
     TEMP = 548,
     TEMPLATE = 549,
     TEMPORARY = 550,
     THEN = 551,
     TIME = 552,
     TIMESTAMP = 553,
     TO = 554,
     TOAST = 555,
     TRAILING = 556,
     TRANSACTION = 557,
     TREAT = 558,
     TRIGGER = 559,
     TRIM = 560,
     TRUE_P = 561,
     TRUNCATE = 562,
     TRUSTED = 563,
     TYPE_P = 564,
     UNCOMMITTED = 565,
     UNENCRYPTED = 566,
     UNION = 567,
     UNIQUE = 568,
     UNKNOWN = 569,
     UNLISTEN = 570,
     UNTIL = 571,
     UPDATE = 572,
     USER = 573,
     USING = 574,
     VACUUM = 575,
     VALID = 576,
     VALIDATOR = 577,
     VALUES = 578,
     VARCHAR = 579,
     VARYING = 580,
     VERBOSE = 581,
     VIEW = 582,
     VOLATILE = 583,
     WHEN = 584,
     WHERE = 585,
     WITH = 586,
     WITHOUT = 587,
     WORK = 588,
     WRITE = 589,
     YEAR_P = 590,
     ZONE = 591,
     UNIONJOIN = 592,
     IDENT = 593,
     FCONST = 594,
     SCONST = 595,
     BCONST = 596,
     XCONST = 597,
     Op = 598,
     ICONST = 599,
     PARAM = 600,
     POSTFIXOP = 601,
     UMINUS = 602,
     TYPECAST = 603
   };
#endif
#define ABORT_P 258
#define ABSOLUTE_P 259
#define ACCESS 260
#define ACTION 261
#define ADD 262
#define ADMIN 263
#define AFTER 264
#define AGGREGATE 265
#define ALL 266
#define ALSO 267
#define ALTER 268
#define ANALYSE 269
#define ANALYZE 270
#define AND 271
#define ANY 272
#define ARRAY 273
#define AS 274
#define ASC 275
#define ASSERTION 276
#define ASSIGNMENT 277
#define ASYMMETRIC 278
#define AT 279
#define AUTHORIZATION 280
#define BACKWARD 281
#define BEFORE 282
#define BEGIN_P 283
#define BETWEEN 284
#define BIGINT 285
#define BINARY 286
#define BIT 287
#define BOOLEAN_P 288
#define BOTH 289
#define BY 290
#define CACHE 291
#define CALLED 292
#define CASCADE 293
#define CASE 294
#define CAST 295
#define CHAIN 296
#define CHAR_P 297
#define CHARACTER 298
#define CHARACTERISTICS 299
#define CHECK 300
#define CHECKPOINT 301
#define CLASS 302
#define CLOSE 303
#define CLUSTER 304
#define COALESCE 305
#define COLLATE 306
#define COLUMN 307
#define COMMENT 308
#define COMMIT 309
#define COMMITTED 310
#define CONNECTION 311
#define CONSTRAINT 312
#define CONSTRAINTS 313
#define CONVERSION_P 314
#define CONVERT 315
#define COPY 316
#define CREATE 317
#define CREATEDB 318
#define CREATEROLE 319
#define CREATEUSER 320
#define CROSS 321
#define CSV 322
#define CURRENT_DATE 323
#define CURRENT_ROLE 324
#define CURRENT_TIME 325
#define CURRENT_TIMESTAMP 326
#define CURRENT_USER 327
#define CURSOR 328
#define CYCLE 329
#define DATABASE 330
#define DAY_P 331
#define DEALLOCATE 332
#define DEC 333
#define DECIMAL_P 334
#define DECLARE 335
#define DEFAULT 336
#define DEFAULTS 337
#define DEFERRABLE 338
#define DEFERRED 339
#define DEFINER 340
#define DELETE_P 341
#define DELIMITER 342
#define DELIMITERS 343
#define DESC 344
#define DISABLE_P 345
#define DISTINCT 346
#define DO 347
#define DOMAIN_P 348
#define DOUBLE_P 349
#define DROP 350
#define EACH 351
#define ELSE 352
#define ENABLE_P 353
#define ENCODING 354
#define ENCRYPTED 355
#define END_P 356
#define ESCAPE 357
#define EXCEPT 358
#define EXCLUDING 359
#define EXCLUSIVE 360
#define EXECUTE 361
#define EXISTS 362
#define EXPLAIN 363
#define EXTERNAL 364
#define EXTRACT 365
#define FALSE_P 366
#define FETCH 367
#define FIRST_P 368
#define FLOAT_P 369
#define FOR 370
#define FORCE 371
#define FOREIGN 372
#define FORWARD 373
#define FREEZE 374
#define FROM 375
#define FULL 376
#define FUNCTION 377
#define GLOBAL 378
#define GRANT 379
#define GRANTED 380
#define GREATEST 381
#define GROUP_P 382
#define HANDLER 383
#define HAVING 384
#define HEADER 385
#define HOLD 386
#define HOUR_P 387
#define ILIKE 388
#define IMMEDIATE 389
#define IMMUTABLE 390
#define IMPLICIT_P 391
#define IN_P 392
#define INCLUDING 393
#define INCREMENT 394
#define INDEX 395
#define INHERIT 396
#define INHERITS 397
#define INITIALLY 398
#define INNER_P 399
#define INOUT 400
#define INPUT_P 401
#define INSENSITIVE 402
#define INSERT 403
#define INSTEAD 404
#define INT_P 405
#define INTEGER 406
#define INTERSECT 407
#define INTERVAL 408
#define INTO 409
#define INVOKER 410
#define IS 411
#define ISNULL 412
#define ISOLATION 413
#define JOIN 414
#define KEY 415
#define LANCOMPILER 416
#define LANGUAGE 417
#define LARGE_P 418
#define LAST_P 419
#define LEADING 420
#define LEAST 421
#define LEFT 422
#define LEVEL 423
#define LIKE 424
#define LIMIT 425
#define LISTEN 426
#define LOAD 427
#define LOCAL 428
#define LOCALTIME 429
#define LOCALTIMESTAMP 430
#define LOCATION 431
#define LOCK_P 432
#define LOGIN_P 433
#define MATCH 434
#define MAXVALUE 435
#define MINUTE_P 436
#define MINVALUE 437
#define MODE 438
#define MONTH_P 439
#define MOVE 440
#define NAMES 441
#define NATIONAL 442
#define NATURAL 443
#define NCHAR 444
#define NEW 445
#define NEXT 446
#define NO 447
#define NOCREATEDB 448
#define NOCREATEROLE 449
#define NOCREATEUSER 450
#define NOINHERIT 451
#define NOLOGIN_P 452
#define NONE 453
#define NOSUPERUSER 454
#define NOT 455
#define NOTHING 456
#define NOTIFY 457
#define NOTNULL 458
#define NOWAIT 459
#define NULL_P 460
#define NULLIF 461
#define NUMERIC 462
#define OBJECT_P 463
#define OF 464
#define OFF 465
#define OFFSET 466
#define OIDS 467
#define OLD 468
#define ON 469
#define ONLY 470
#define OPERATOR 471
#define OPTION 472
#define OR 473
#define ORDER 474
#define OUT_P 475
#define OUTER_P 476
#define OVERLAPS 477
#define OVERLAY 478
#define OWNER 479
#define PARTIAL 480
#define PASSWORD 481
#define PLACING 482
#define POSITION 483
#define PRECISION 484
#define PRESERVE 485
#define PREPARE 486
#define PREPARED 487
#define PRIMARY 488
#define PRIOR 489
#define PRIVILEGES 490
#define PROCEDURAL 491
#define PROCEDURE 492
#define QUOTE 493
#define READ 494
#define REAL 495
#define RECHECK 496
#define REFERENCES 497
#define REINDEX 498
#define RELATIVE_P 499
#define RELEASE 500
#define RENAME 501
#define REPEATABLE 502
#define REPLACE 503
#define RESET 504
#define RESTART 505
#define RESTRICT 506
#define RETURNS 507
#define REVOKE 508
#define RIGHT 509
#define ROLE 510
#define ROLLBACK 511
#define ROW 512
#define ROWS 513
#define RULE 514
#define SAVEPOINT 515
#define SCHEMA 516
#define SCROLL 517
#define SECOND_P 518
#define SECURITY 519
#define SELECT 520
#define SEQUENCE 521
#define SERIALIZABLE 522
#define SESSION 523
#define SESSION_USER 524
#define SET 525
#define SETOF 526
#define SHARE 527
#define SHOW 528
#define SIMILAR 529
#define SIMPLE 530
#define SMALLINT 531
#define SOME 532
#define STABLE 533
#define START 534
#define STATEMENT 535
#define STATISTICS 536
#define STDIN 537
#define STDOUT 538
#define STORAGE 539
#define STRICT_P 540
#define SUBSTRING 541
#define SUPERUSER_P 542
#define SYMMETRIC 543
#define SYSID 544
#define SYSTEM_P 545
#define TABLE 546
#define TABLESPACE 547
#define TEMP 548
#define TEMPLATE 549
#define TEMPORARY 550
#define THEN 551
#define TIME 552
#define TIMESTAMP 553
#define TO 554
#define TOAST 555
#define TRAILING 556
#define TRANSACTION 557
#define TREAT 558
#define TRIGGER 559
#define TRIM 560
#define TRUE_P 561
#define TRUNCATE 562
#define TRUSTED 563
#define TYPE_P 564
#define UNCOMMITTED 565
#define UNENCRYPTED 566
#define UNION 567
#define UNIQUE 568
#define UNKNOWN 569
#define UNLISTEN 570
#define UNTIL 571
#define UPDATE 572
#define USER 573
#define USING 574
#define VACUUM 575
#define VALID 576
#define VALIDATOR 577
#define VALUES 578
#define VARCHAR 579
#define VARYING 580
#define VERBOSE 581
#define VIEW 582
#define VOLATILE 583
#define WHEN 584
#define WHERE 585
#define WITH 586
#define WITHOUT 587
#define WORK 588
#define WRITE 589
#define YEAR_P 590
#define ZONE 591
#define UNIONJOIN 592
#define IDENT 593
#define FCONST 594
#define SCONST 595
#define BCONST 596
#define XCONST 597
#define Op 598
#define ICONST 599
#define PARAM 600
#define POSTFIXOP 601
#define UMINUS 602
#define TYPECAST 603




/* Copy the first part of user declarations.  */
#line 1 "gram.y"


/*#define YYDEBUG 1*/
/*-------------------------------------------------------------------------
 *
 * gram.y
 *	  POSTGRES SQL YACC rules/actions
 *
 * Portions Copyright (c) 1996-2005, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 *
 * IDENTIFICATION
 *	  $PostgreSQL: pgsql/src/backend/parser/gram.y,v 2.511.2.1 2005/11/13 19:11:45 tgl Exp $
 *
 * HISTORY
 *	  AUTHOR			DATE			MAJOR EVENT
 *	  Andrew Yu			Sept, 1994		POSTQUEL to SQL conversion
 *	  Andrew Yu			Oct, 1994		lispy code conversion
 *
 * NOTES
 *	  CAPITALS are used to represent terminal symbols.
 *	  non-capitals are used to represent non-terminals.
 *	  SQL92-specific syntax is separated from plain SQL/Postgres syntax
 *	  to help isolate the non-extensible portions of the parser.
 *
 *	  In general, nothing in this file should initiate database accesses
 *	  nor depend on changeable state (such as SET variables).  If you do
 *	  database accesses, your code will fail when we have aborted the
 *	  current transaction and are just parsing commands to find the next
 *	  ROLLBACK or COMMIT.  If you make use of SET variables, then you
 *	  will do the wrong thing in multi-query strings like this:
 *			SET SQL_inheritance TO off; SELECT * FROM foo;
 *	  because the entire string is parsed by gram.y before the SET gets
 *	  executed.  Anything that depends on the database or changeable state
 *	  should be handled inside parse_analyze() so that it happens at the
 *	  right time not the wrong time.  The handling of SQL_inheritance is
 *	  a good example.
 *
 * WARNINGS
 *	  If you use a list, make sure the datum is a node so that the printing
 *	  routines work.
 *
 *	  Sometimes we assign constants to makeStrings. Make sure we don't free
 *	  those.
 *
 *-------------------------------------------------------------------------
 */
#include "postgres.h"

#include <ctype.h>
#include <limits.h>

#include "catalog/index.h"
#include "catalog/namespace.h"
#include "nodes/makefuncs.h"
#include "parser/gramparse.h"
#include "storage/lmgr.h"
#include "utils/date.h"
#include "utils/datetime.h"
#include "utils/numeric.h"


extern List *parsetree;			/* final parse result is delivered here */

static bool QueryIsRule = FALSE;

/*
 * If you need access to certain yacc-generated variables and find that
 * they're static by default, uncomment the next line.  (this is not a
 * problem, yet.)
 */
/*#define __YYSCLASS*/

static Node *makeColumnRef(char *relname, List *indirection);
static Node *makeTypeCast(Node *arg, TypeName *typename);
static Node *makeStringConst(char *str, TypeName *typename);
static Node *makeIntConst(int val);
static Node *makeFloatConst(char *str);
static Node *makeAConst(Value *v);
static Node *makeRowNullTest(NullTestType test, RowExpr *row);
static DefElem *makeDefElem(char *name, Node *arg);
static A_Const *makeBoolAConst(bool state);
static FuncCall *makeOverlaps(List *largs, List *rargs);
static void check_qualified_name(List *names);
static List *check_func_name(List *names);
static List *extractArgTypes(List *parameters);
static SelectStmt *findLeftmostSelect(SelectStmt *node);
static void insertSelectOptions(SelectStmt *stmt,
								List *sortClause, Node *lockingClause,
								Node *limitOffset, Node *limitCount);
static Node *makeSetOp(SetOperation op, bool all, Node *larg, Node *rarg);
static Node *doNegate(Node *n);
static void doNegateFloat(Value *v);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 100 "gram.y"
typedef union YYSTYPE {
	int					ival;
	char				chr;
	char				*str;
	const char			*keyword;
	bool				boolean;
	JoinType			jtype;
	DropBehavior		dbehavior;
	OnCommitAction		oncommit;
	ContainsOids		withoids;
	List				*list;
	Node				*node;
	Value				*value;
	ObjectType			objtype;

	TypeName			*typnam;
	FunctionParameter   *fun_param;
	FunctionParameterMode fun_param_mode;
	FuncWithArgs		*funwithargs;
	DefElem				*defelt;
	SortBy				*sortby;
	JoinExpr			*jexpr;
	IndexElem			*ielem;
	Alias				*alias;
	RangeVar			*range;
	A_Indices			*aind;
	ResTarget			*target;
	PrivTarget			*privtarget;

	InsertStmt			*istmt;
	VariableSetStmt		*vsetstmt;
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 901 "y.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 913 "y.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  555
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   34674

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  366
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  391
/* YYNRULES -- Number of rules. */
#define YYNRULES  1612
/* YYNRULES -- Number of states. */
#define YYNSTATES  2802

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   603

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   354,     2,     2,
     359,   360,   352,   350,   364,   351,   362,   353,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   365,   363,
     347,   346,   348,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   357,     2,   358,   355,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   349,   356,   361
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     5,     9,    11,    13,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    33,    35,    37,    39,
      41,    43,    45,    47,    49,    51,    53,    55,    57,    59,
      61,    63,    65,    67,    69,    71,    73,    75,    77,    79,
      81,    83,    85,    87,    89,    91,    93,    95,    97,    99,
     101,   103,   105,   107,   109,   111,   113,   115,   117,   119,
     121,   123,   125,   127,   129,   131,   133,   135,   137,   139,
     141,   143,   145,   147,   149,   151,   153,   155,   157,   159,
     161,   163,   165,   167,   169,   171,   173,   175,   177,   178,
     184,   186,   187,   190,   191,   194,   198,   202,   204,   206,
     208,   210,   212,   214,   216,   218,   220,   222,   224,   226,
     230,   234,   237,   240,   243,   246,   250,   254,   260,   266,
     272,   277,   283,   289,   294,   298,   302,   308,   315,   317,
     319,   323,   330,   335,   337,   338,   341,   342,   344,   346,
     348,   350,   352,   354,   357,   361,   365,   369,   373,   377,
     380,   386,   389,   392,   396,   400,   402,   406,   408,   410,
     412,   416,   418,   420,   422,   425,   428,   431,   433,   435,
     437,   439,   441,   443,   445,   449,   456,   458,   460,   462,
     464,   466,   467,   469,   471,   474,   478,   483,   487,   490,
     493,   497,   502,   506,   509,   514,   516,   518,   520,   522,
     524,   529,   534,   536,   540,   544,   549,   556,   563,   570,
     577,   582,   589,   592,   597,   601,   605,   609,   613,   617,
     621,   625,   629,   633,   637,   639,   641,   645,   649,   653,
     657,   660,   662,   664,   665,   668,   669,   672,   683,   685,
     687,   689,   691,   693,   696,   697,   699,   701,   705,   709,
     711,   713,   717,   721,   725,   730,   732,   733,   736,   737,
     741,   742,   744,   745,   757,   770,   772,   774,   777,   780,
     783,   786,   787,   789,   790,   792,   796,   798,   800,   802,
     806,   809,   810,   814,   816,   818,   821,   823,   826,   830,
     835,   838,   844,   846,   849,   852,   855,   859,   862,   865,
     866,   870,   872,   877,   883,   890,   902,   906,   907,   909,
     913,   915,   918,   921,   924,   925,   927,   929,   932,   935,
     936,   940,   944,   947,   949,   951,   954,   957,   962,   963,
     966,   969,   970,   974,   979,   984,   985,   988,   989,   994,
     995,  1003,  1007,  1011,  1013,  1017,  1018,  1020,  1024,  1026,
    1032,  1037,  1040,  1041,  1044,  1046,  1049,  1053,  1056,  1059,
    1062,  1065,  1069,  1073,  1075,  1076,  1078,  1080,  1082,  1085,
    1087,  1093,  1103,  1105,  1106,  1108,  1111,  1114,  1115,  1118,
    1119,  1125,  1127,  1128,  1135,  1138,  1139,  1143,  1158,  1178,
    1180,  1182,  1184,  1188,  1194,  1196,  1198,  1200,  1204,  1205,
    1207,  1208,  1210,  1212,  1214,  1218,  1219,  1221,  1223,  1225,
    1227,  1229,  1231,  1234,  1235,  1237,  1240,  1242,  1245,  1246,
    1249,  1251,  1254,  1257,  1264,  1273,  1278,  1283,  1288,  1293,
    1301,  1305,  1307,  1311,  1315,  1317,  1319,  1321,  1323,  1325,
    1338,  1340,  1344,  1349,  1357,  1362,  1365,  1367,  1368,  1370,
    1371,  1379,  1384,  1386,  1388,  1390,  1392,  1394,  1396,  1398,
    1400,  1402,  1406,  1408,  1411,  1414,  1418,  1422,  1429,  1439,
    1447,  1457,  1466,  1475,  1482,  1491,  1501,  1509,  1520,  1528,
    1530,  1532,  1534,  1536,  1538,  1540,  1542,  1544,  1546,  1548,
    1550,  1552,  1557,  1560,  1565,  1568,  1569,  1571,  1573,  1575,
    1577,  1580,  1583,  1585,  1587,  1589,  1592,  1595,  1597,  1600,
    1603,  1605,  1607,  1615,  1623,  1634,  1636,  1638,  1641,  1643,
    1647,  1649,  1651,  1653,  1655,  1657,  1660,  1663,  1666,  1669,
    1672,  1675,  1677,  1681,  1683,  1686,  1690,  1691,  1693,  1697,
    1700,  1707,  1714,  1724,  1728,  1729,  1733,  1734,  1747,  1749,
    1750,  1753,  1754,  1756,  1760,  1763,  1766,  1771,  1773,  1776,
    1777,  1787,  1795,  1798,  1799,  1803,  1806,  1808,  1812,  1816,
    1820,  1823,  1826,  1828,  1830,  1832,  1834,  1837,  1839,  1841,
    1843,  1848,  1850,  1853,  1858,  1864,  1866,  1868,  1870,  1872,
    1876,  1880,  1883,  1886,  1889,  1892,  1894,  1896,  1900,  1903,
    1904,  1910,  1912,  1915,  1917,  1918,  1924,  1932,  1934,  1936,
    1944,  1946,  1950,  1954,  1958,  1960,  1964,  1976,  1987,  1990,
    1993,  1994,  2003,  2008,  2013,  2018,  2020,  2022,  2024,  2025,
    2035,  2042,  2049,  2057,  2064,  2071,  2081,  2088,  2095,  2102,
    2111,  2120,  2127,  2134,  2141,  2143,  2144,  2154,  2161,  2169,
    2176,  2183,  2190,  2200,  2207,  2214,  2221,  2229,  2239,  2249,
    2256,  2263,  2270,  2271,  2286,  2288,  2290,  2294,  2298,  2300,
    2302,  2304,  2306,  2308,  2310,  2312,  2313,  2315,  2317,  2319,
    2321,  2323,  2325,  2326,  2333,  2336,  2339,  2342,  2345,  2348,
    2352,  2356,  2359,  2362,  2365,  2368,  2372,  2375,  2381,  2386,
    2390,  2394,  2398,  2400,  2402,  2403,  2407,  2410,  2413,  2415,
    2419,  2422,  2424,  2425,  2433,  2443,  2446,  2452,  2455,  2456,
    2460,  2464,  2468,  2472,  2476,  2480,  2484,  2488,  2492,  2497,
    2501,  2505,  2507,  2508,  2514,  2520,  2525,  2528,  2529,  2534,
    2538,  2545,  2550,  2557,  2564,  2570,  2578,  2580,  2581,  2592,
    2597,  2600,  2602,  2607,  2613,  2619,  2622,  2627,  2629,  2631,
    2633,  2634,  2636,  2637,  2639,  2640,  2644,  2645,  2650,  2652,
    2654,  2656,  2658,  2660,  2662,  2664,  2665,  2671,  2675,  2676,
    2678,  2682,  2684,  2686,  2688,  2690,  2694,  2704,  2708,  2709,
    2712,  2716,  2721,  2726,  2729,  2731,  2739,  2744,  2746,  2750,
    2753,  2759,  2762,  2763,  2769,  2773,  2774,  2777,  2780,  2783,
    2787,  2789,  2793,  2795,  2798,  2800,  2801,  2808,  2816,  2817,
    2821,  2824,  2827,  2830,  2831,  2834,  2837,  2839,  2841,  2845,
    2849,  2851,  2854,  2859,  2864,  2866,  2868,  2877,  2882,  2887,
    2892,  2895,  2896,  2900,  2904,  2909,  2914,  2919,  2924,  2927,
    2929,  2931,  2932,  2934,  2936,  2937,  2939,  2945,  2947,  2948,
    2950,  2951,  2955,  2957,  2961,  2965,  2968,  2971,  2973,  2978,
    2983,  2986,  2989,  2994,  2996,  2997,  2999,  3001,  3003,  3007,
    3008,  3011,  3012,  3017,  3022,  3026,  3028,  3029,  3032,  3033,
    3036,  3037,  3039,  3043,  3045,  3048,  3050,  3053,  3059,  3066,
    3072,  3074,  3077,  3079,  3084,  3088,  3093,  3097,  3103,  3108,
    3114,  3119,  3125,  3128,  3133,  3135,  3138,  3141,  3144,  3146,
    3148,  3149,  3154,  3157,  3159,  3162,  3165,  3170,  3172,  3175,
    3176,  3178,  3182,  3185,  3188,  3192,  3198,  3205,  3209,  3214,
    3215,  3217,  3219,  3221,  3223,  3225,  3228,  3234,  3237,  3239,
    3241,  3243,  3245,  3247,  3249,  3251,  3253,  3255,  3257,  3259,
    3262,  3265,  3268,  3271,  3274,  3276,  3280,  3281,  3287,  3291,
    3292,  3298,  3302,  3303,  3305,  3307,  3309,  3311,  3317,  3320,
    3322,  3324,  3326,  3328,  3334,  3337,  3340,  3343,  3345,  3349,
    3353,  3356,  3358,  3359,  3363,  3364,  3370,  3373,  3379,  3382,
    3384,  3388,  3392,  3393,  3395,  3397,  3399,  3401,  3403,  3405,
    3409,  3413,  3417,  3421,  3425,  3429,  3433,  3434,  3436,  3440,
    3446,  3449,  3452,  3456,  3460,  3464,  3468,  3472,  3476,  3480,
    3484,  3488,  3492,  3495,  3498,  3502,  3506,  3509,  3513,  3519,
    3524,  3531,  3535,  3541,  3546,  3553,  3558,  3565,  3571,  3579,
    3582,  3586,  3589,  3594,  3598,  3602,  3607,  3611,  3616,  3620,
    3625,  3631,  3638,  3646,  3653,  3661,  3668,  3676,  3680,  3685,
    3690,  3697,  3700,  3702,  3706,  3709,  3712,  3716,  3720,  3724,
    3728,  3732,  3736,  3740,  3744,  3748,  3752,  3755,  3758,  3764,
    3771,  3779,  3781,  3783,  3786,  3791,  3793,  3795,  3797,  3800,
    3803,  3806,  3808,  3812,  3817,  3823,  3829,  3834,  3836,  3838,
    3843,  3845,  3850,  3852,  3857,  3859,  3864,  3866,  3868,  3870,
    3872,  3879,  3884,  3889,  3894,  3899,  3906,  3912,  3918,  3924,
    3929,  3936,  3941,  3948,  3953,  3958,  3963,  3968,  3972,  3978,
    3980,  3982,  3984,  3986,  3988,  3990,  3992,  3994,  3996,  3998,
    4000,  4002,  4004,  4006,  4008,  4013,  4015,  4020,  4022,  4027,
    4029,  4032,  4034,  4037,  4039,  4043,  4047,  4048,  4052,  4054,
    4056,  4060,  4064,  4068,  4070,  4072,  4074,  4076,  4078,  4080,
    4082,  4084,  4089,  4093,  4096,  4100,  4101,  4105,  4109,  4112,
    4115,  4117,  4118,  4121,  4124,  4128,  4131,  4133,  4135,  4139,
    4145,  4147,  4150,  4155,  4158,  4159,  4161,  4162,  4164,  4167,
    4170,  4173,  4177,  4183,  4185,  4188,  4189,  4192,  4194,  4195,
    4197,  4201,  4205,  4207,  4209,  4211,  4215,  4220,  4225,  4227,
    4231,  4233,  4235,  4237,  4239,  4241,  4245,  4247,  4250,  4252,
    4256,  4258,  4260,  4262,  4264,  4266,  4268,  4270,  4273,  4275,
    4277,  4279,  4281,  4283,  4286,  4290,  4297,  4299,  4301,  4303,
    4305,  4307,  4309,  4311,  4314,  4316,  4318,  4320,  4322,  4324,
    4326,  4328,  4330,  4332,  4334,  4336,  4338,  4340,  4342,  4344,
    4346,  4348,  4350,  4352,  4354,  4356,  4358,  4360,  4362,  4364,
    4366,  4368,  4370,  4372,  4374,  4376,  4378,  4380,  4382,  4384,
    4386,  4388,  4390,  4392,  4394,  4396,  4398,  4400,  4402,  4404,
    4406,  4408,  4410,  4412,  4414,  4416,  4418,  4420,  4422,  4424,
    4426,  4428,  4430,  4432,  4434,  4436,  4438,  4440,  4442,  4444,
    4446,  4448,  4450,  4452,  4454,  4456,  4458,  4460,  4462,  4464,
    4466,  4468,  4470,  4472,  4474,  4476,  4478,  4480,  4482,  4484,
    4486,  4488,  4490,  4492,  4494,  4496,  4498,  4500,  4502,  4504,
    4506,  4508,  4510,  4512,  4514,  4516,  4518,  4520,  4522,  4524,
    4526,  4528,  4530,  4532,  4534,  4536,  4538,  4540,  4542,  4544,
    4546,  4548,  4550,  4552,  4554,  4556,  4558,  4560,  4562,  4564,
    4566,  4568,  4570,  4572,  4574,  4576,  4578,  4580,  4582,  4584,
    4586,  4588,  4590,  4592,  4594,  4596,  4598,  4600,  4602,  4604,
    4606,  4608,  4610,  4612,  4614,  4616,  4618,  4620,  4622,  4624,
    4626,  4628,  4630,  4632,  4634,  4636,  4638,  4640,  4642,  4644,
    4646,  4648,  4650,  4652,  4654,  4656,  4658,  4660,  4662,  4664,
    4666,  4668,  4670,  4672,  4674,  4676,  4678,  4680,  4682,  4684,
    4686,  4688,  4690,  4692,  4694,  4696,  4698,  4700,  4702,  4704,
    4706,  4708,  4710,  4712,  4714,  4716,  4718,  4720,  4722,  4724,
    4726,  4728,  4730,  4732,  4734,  4736,  4738,  4740,  4742,  4744,
    4746,  4748,  4750,  4752,  4754,  4756,  4758,  4760,  4762,  4764,
    4766,  4768,  4770,  4772,  4774,  4776,  4778,  4780,  4782,  4784,
    4786,  4788,  4790,  4792,  4794,  4796,  4798,  4800,  4802,  4804,
    4806,  4808,  4810,  4812,  4814,  4816,  4818,  4820,  4822,  4824,
    4826,  4828,  4830,  4832,  4834,  4836,  4838,  4840,  4842,  4844,
    4846,  4848,  4850,  4852,  4854,  4856,  4858,  4860,  4862,  4864,
    4866,  4868,  4870,  4872,  4874,  4876,  4878,  4880,  4882,  4884,
    4886,  4888,  4890,  4892,  4894,  4896,  4898,  4900,  4902,  4904,
    4906,  4908,  4910,  4912,  4914,  4916,  4918,  4920,  4922,  4924,
    4926,  4928,  4930,  4932,  4934,  4936,  4938,  4940,  4942,  4944,
    4946,  4948,  4950,  4952,  4954,  4956,  4958,  4960,  4962,  4964,
    4966,  4968,  4970,  4972,  4974,  4976,  4978,  4980,  4982,  4984,
    4986,  4988,  4990,  4992,  4994,  4996,  4998,  5000,  5002,  5004,
    5006,  5008,  5010
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     367,     0,    -1,   368,    -1,   368,   363,   369,    -1,   369,
      -1,   590,    -1,   591,    -1,   596,    -1,   548,    -1,   382,
      -1,   565,    -1,   566,    -1,   457,    -1,   406,    -1,   376,
      -1,   375,    -1,   378,    -1,   377,    -1,   601,    -1,   405,
      -1,   414,    -1,   599,    -1,   507,    -1,   402,    -1,   415,
      -1,   451,    -1,   488,    -1,   557,    -1,   598,    -1,   595,
      -1,   534,    -1,   381,    -1,   495,    -1,   464,    -1,   385,
      -1,   456,    -1,   424,    -1,   471,    -1,   474,    -1,   370,
      -1,   374,    -1,   586,    -1,   616,    -1,   628,    -1,   490,
      -1,   621,    -1,   489,    -1,   559,    -1,   384,    -1,   500,
      -1,   469,    -1,   575,    -1,   501,    -1,   473,    -1,   487,
      -1,   379,    -1,   380,    -1,   594,    -1,   614,    -1,   607,
      -1,   510,    -1,   513,    -1,   524,    -1,   528,    -1,   617,
      -1,   577,    -1,   585,    -1,   623,    -1,   576,    -1,   610,
      -1,   560,    -1,   552,    -1,   551,    -1,   554,    -1,   563,
      -1,   514,    -1,   525,    -1,   567,    -1,   631,    -1,   579,
      -1,   506,    -1,   578,    -1,   627,    -1,   600,    -1,   401,
      -1,   389,    -1,   400,    -1,   584,    -1,    -1,    62,   255,
     746,   371,   372,    -1,   331,    -1,    -1,   372,   373,    -1,
      -1,   226,   745,    -1,   100,   226,   745,    -1,   311,   226,
     745,    -1,   287,    -1,   199,    -1,   141,    -1,   196,    -1,
      63,    -1,   193,    -1,    64,    -1,   194,    -1,    65,    -1,
     195,    -1,   178,    -1,   197,    -1,    56,   170,   747,    -1,
     321,   316,   745,    -1,   318,   735,    -1,   289,   744,    -1,
       8,   735,    -1,   255,   735,    -1,   137,   255,   735,    -1,
     137,   127,   735,    -1,    62,   318,   746,   371,   372,    -1,
      13,   255,   746,   371,   372,    -1,    13,   255,   746,   270,
     390,    -1,    13,   255,   746,   401,    -1,    13,   318,   746,
     371,   372,    -1,    13,   318,   746,   270,   390,    -1,    13,
     318,   746,   401,    -1,    95,   255,   735,    -1,    95,   318,
     735,    -1,    62,   127,   746,   371,   372,    -1,    13,   127,
     746,   383,   318,   735,    -1,     7,    -1,    95,    -1,    95,
     127,   735,    -1,    62,   261,   386,    25,   746,   387,    -1,
      62,   261,   748,   387,    -1,   748,    -1,    -1,   387,   388,
      -1,    -1,   424,    -1,   528,    -1,   456,    -1,   474,    -1,
     513,    -1,   584,    -1,   270,   390,    -1,   270,   173,   390,
      -1,   270,   268,   390,    -1,   391,   299,   392,    -1,   391,
     346,   392,    -1,   297,   336,   397,    -1,   302,   582,    -1,
     268,    44,    19,   302,   582,    -1,   186,   398,    -1,   255,
     399,    -1,   268,    25,   399,    -1,   268,    25,    81,    -1,
     748,    -1,   391,   362,   748,    -1,   393,    -1,    81,    -1,
     394,    -1,   393,   364,   394,    -1,   396,    -1,   399,    -1,
     461,    -1,   239,   310,    -1,   239,    55,    -1,   247,   239,
      -1,   267,    -1,   306,    -1,   111,    -1,   214,    -1,   210,
      -1,   745,    -1,   338,    -1,   688,   745,   690,    -1,   688,
     359,   744,   360,   745,   690,    -1,   461,    -1,    81,    -1,
     173,    -1,   745,    -1,    81,    -1,    -1,   748,    -1,   340,
      -1,   273,   391,    -1,   273,   297,   336,    -1,   273,   302,
     158,   168,    -1,   273,   268,    25,    -1,   273,    11,    -1,
     249,   391,    -1,   249,   297,   336,    -1,   249,   302,   158,
     168,    -1,   249,   268,    25,    -1,   249,    11,    -1,   270,
      58,   403,   404,    -1,    11,    -1,   735,    -1,    84,    -1,
     134,    -1,    46,    -1,    13,   291,   662,   407,    -1,    13,
     140,   662,   409,    -1,   408,    -1,   407,   364,   408,    -1,
       7,   564,   429,    -1,    13,   564,   748,   411,    -1,    13,
     564,   748,    95,   200,   205,    -1,    13,   564,   748,   270,
     200,   205,    -1,    13,   564,   748,   270,   281,   463,    -1,
      13,   564,   748,   270,   284,   748,    -1,    95,   564,   748,
     412,    -1,    13,   564,   748,   309,   667,   413,    -1,     7,
     436,    -1,    95,    57,   736,   412,    -1,   270,   332,   212,
      -1,    62,   300,   291,    -1,    49,   214,   736,    -1,   270,
     332,    49,    -1,    98,   304,   736,    -1,    98,   304,    11,
      -1,    98,   304,   318,    -1,    90,   304,   736,    -1,    90,
     304,    11,    -1,    90,   304,   318,    -1,   410,    -1,   410,
      -1,   409,   364,   410,    -1,   224,   299,   746,    -1,   270,
     292,   736,    -1,   270,    81,   691,    -1,    95,    81,    -1,
      38,    -1,   251,    -1,    -1,   319,   691,    -1,    -1,    48,
     736,    -1,    61,   420,   734,   438,   421,   416,   417,   422,
     371,   418,    -1,   120,    -1,   299,    -1,   745,    -1,   282,
      -1,   283,    -1,   418,   419,    -1,    -1,    31,    -1,   212,
      -1,    87,   597,   745,    -1,   205,   597,   745,    -1,    67,
      -1,   130,    -1,   238,   597,   745,    -1,   102,   597,   745,
      -1,   116,   238,   439,    -1,   116,   200,   205,   439,    -1,
      31,    -1,    -1,   331,   212,    -1,    -1,   423,    88,   745,
      -1,    -1,   319,    -1,    -1,    62,   425,   291,   734,   359,
     426,   360,   446,   447,   448,   449,    -1,    62,   425,   291,
     734,   209,   734,   359,   426,   360,   447,   448,   449,    -1,
     295,    -1,   293,    -1,   173,   295,    -1,   173,   293,    -1,
     123,   295,    -1,   123,   293,    -1,    -1,   427,    -1,    -1,
     428,    -1,   427,   364,   428,    -1,   429,    -1,   434,    -1,
     436,    -1,   748,   667,   430,    -1,   430,   431,    -1,    -1,
      57,   736,   432,    -1,   432,    -1,   433,    -1,   200,   205,
      -1,   205,    -1,   313,   450,    -1,   233,   160,   450,    -1,
      45,   359,   691,   360,    -1,    81,   692,    -1,   242,   734,
     438,   441,   442,    -1,    83,    -1,   200,    83,    -1,   143,
      84,    -1,   143,   134,    -1,   169,   734,   435,    -1,   138,
      82,    -1,   104,    82,    -1,    -1,    57,   736,   437,    -1,
     437,    -1,    45,   359,   691,   360,    -1,   313,   359,   439,
     360,   450,    -1,   233,   160,   359,   439,   360,   450,    -1,
     117,   160,   359,   439,   360,   242,   734,   438,   441,   442,
     484,    -1,   359,   439,   360,    -1,    -1,   440,    -1,   439,
     364,   440,    -1,   748,    -1,   179,   121,    -1,   179,   225,
      -1,   179,   275,    -1,    -1,   443,    -1,   444,    -1,   443,
     444,    -1,   444,   443,    -1,    -1,   214,   317,   445,    -1,
     214,    86,   445,    -1,   192,     6,    -1,   251,    -1,    38,
      -1,   270,   205,    -1,   270,    81,    -1,   142,   359,   733,
     360,    -1,    -1,   331,   212,    -1,   332,   212,    -1,    -1,
     214,    54,    95,    -1,   214,    54,    86,   258,    -1,   214,
      54,   230,   258,    -1,    -1,   292,   736,    -1,    -1,   319,
     140,   292,   736,    -1,    -1,    62,   425,   291,   734,   453,
     452,   631,    -1,   331,   212,    19,    -1,   332,   212,    19,
      -1,    19,    -1,   359,   454,   360,    -1,    -1,   455,    -1,
     454,   364,   455,    -1,   748,    -1,    62,   425,   266,   734,
     458,    -1,    13,   266,   734,   458,    -1,   458,   459,    -1,
      -1,    36,   461,    -1,    74,    -1,   192,    74,    -1,   139,
     460,   461,    -1,   180,   461,    -1,   182,   461,    -1,   192,
     180,    -1,   192,   182,    -1,   279,   371,   461,    -1,   250,
     371,   461,    -1,    35,    -1,    -1,   462,    -1,   463,    -1,
     339,    -1,   351,   339,    -1,   747,    -1,    62,   465,   470,
     162,   399,    -1,    62,   465,   470,   162,   399,   128,   466,
     467,   468,    -1,   308,    -1,    -1,   736,    -1,   736,   505,
      -1,   322,   466,    -1,    -1,   161,   745,    -1,    -1,    95,
     470,   162,   399,   412,    -1,   236,    -1,    -1,    62,   292,
     736,   472,   176,   745,    -1,   224,   736,    -1,    -1,    95,
     292,   736,    -1,    62,   304,   736,   475,   476,   214,   734,
     478,   106,   237,   742,   359,   481,   360,    -1,    62,    57,
     304,   736,     9,   476,   214,   734,   483,   484,   115,    96,
     257,   106,   237,   742,   359,   481,   360,    -1,    27,    -1,
       9,    -1,   477,    -1,   477,   218,   477,    -1,   477,   218,
     477,   218,   477,    -1,   148,    -1,    86,    -1,   317,    -1,
     115,   479,   480,    -1,    -1,    96,    -1,    -1,   257,    -1,
     280,    -1,   482,    -1,   481,   364,   482,    -1,    -1,   344,
      -1,   339,    -1,   745,    -1,   341,    -1,   342,    -1,   748,
      -1,   120,   734,    -1,    -1,   485,    -1,   485,   486,    -1,
     486,    -1,   486,   485,    -1,    -1,   200,    83,    -1,    83,
      -1,   143,   134,    -1,   143,    84,    -1,    95,   304,   736,
     214,   734,   412,    -1,    62,    21,   736,    45,   359,   691,
     360,   484,    -1,    95,    21,   736,   412,    -1,    62,    10,
     742,   491,    -1,    62,   216,   556,   491,    -1,    62,   309,
     504,   491,    -1,    62,   309,   504,    19,   359,   665,   360,
      -1,   359,   492,   360,    -1,   493,    -1,   492,   364,   493,
      -1,   751,   346,   494,    -1,   751,    -1,   542,    -1,   700,
      -1,   461,    -1,   745,    -1,    62,   216,    47,   504,   498,
     115,   309,   667,   319,   738,    19,   496,    -1,   497,    -1,
     496,   364,   497,    -1,   216,   744,   556,   499,    -1,   216,
     744,   556,   359,   555,   360,   499,    -1,   122,   744,   742,
     536,    -1,   284,   667,    -1,    81,    -1,    -1,   241,    -1,
      -1,    95,   216,    47,   504,   319,   738,   412,    -1,    95,
     502,   503,   412,    -1,   291,    -1,   266,    -1,   327,    -1,
     140,    -1,   309,    -1,    93,    -1,    59,    -1,   261,    -1,
     504,    -1,   503,   364,   504,    -1,   748,    -1,   748,   505,
      -1,   362,   739,    -1,   505,   362,   739,    -1,   307,   638,
     733,    -1,    53,   214,   508,   504,   156,   509,    -1,    53,
     214,    10,   742,   359,   553,   360,   156,   509,    -1,    53,
     214,   122,   742,   536,   156,   509,    -1,    53,   214,   216,
     556,   359,   555,   360,   156,   509,    -1,    53,   214,    57,
     736,   214,   504,   156,   509,    -1,    53,   214,   259,   736,
     214,   504,   156,   509,    -1,    53,   214,   259,   736,   156,
     509,    -1,    53,   214,   304,   736,   214,   504,   156,   509,
      -1,    53,   214,   216,    47,   504,   319,   738,   156,   509,
      -1,    53,   214,   163,   208,   461,   156,   509,    -1,    53,
     214,    40,   359,   667,    19,   667,   360,   156,   509,    -1,
      53,   214,   470,   162,   504,   156,   509,    -1,    52,    -1,
      75,    -1,   261,    -1,   140,    -1,   266,    -1,   291,    -1,
      93,    -1,   309,    -1,   327,    -1,    59,    -1,   745,    -1,
     205,    -1,   112,   511,   512,   736,    -1,   112,   736,    -1,
     185,   511,   512,   736,    -1,   185,   736,    -1,    -1,   191,
      -1,   234,    -1,   113,    -1,   164,    -1,     4,   747,    -1,
     244,   747,    -1,   747,    -1,    11,    -1,   118,    -1,   118,
     747,    -1,   118,    11,    -1,    26,    -1,    26,   747,    -1,
      26,    11,    -1,   120,    -1,   137,    -1,   124,   515,   214,
     518,   299,   519,   521,    -1,   253,   515,   214,   518,   120,
     519,   412,    -1,   253,   124,   217,   115,   515,   214,   518,
     120,   519,   412,    -1,   516,    -1,    11,    -1,    11,   235,
      -1,   517,    -1,   516,   364,   517,    -1,   265,    -1,   242,
      -1,    62,    -1,   748,    -1,   733,    -1,   291,   733,    -1,
     122,   522,    -1,    75,   735,    -1,   162,   735,    -1,   261,
     735,    -1,   292,   735,    -1,   520,    -1,   519,   364,   520,
      -1,   746,    -1,   127,   746,    -1,   331,   124,   217,    -1,
      -1,   523,    -1,   522,   364,   523,    -1,   742,   536,    -1,
     124,   516,   299,   735,   526,   527,    -1,   253,   516,   120,
     735,   527,   412,    -1,   253,     8,   217,   115,   516,   120,
     735,   527,   412,    -1,   331,     8,   217,    -1,    -1,   125,
      35,   746,    -1,    -1,    62,   529,   140,   740,   214,   734,
     530,   359,   531,   360,   449,   664,    -1,   313,    -1,    -1,
     319,   738,    -1,    -1,   532,    -1,   531,   364,   532,    -1,
     748,   533,    -1,   694,   533,    -1,   359,   691,   360,   533,
      -1,   504,    -1,   319,   504,    -1,    -1,    62,   535,   122,
     742,   536,   252,   541,   543,   547,    -1,    62,   535,   122,
     742,   536,   543,   547,    -1,   218,   248,    -1,    -1,   359,
     537,   360,    -1,   359,   360,    -1,   538,    -1,   537,   364,
     538,    -1,   539,   540,   542,    -1,   540,   539,   542,    -1,
     540,   542,    -1,   539,   542,    -1,   542,    -1,   137,    -1,
     220,    -1,   145,    -1,   137,   220,    -1,   750,    -1,   542,
      -1,   667,    -1,   749,   505,   354,   309,    -1,   545,    -1,
     543,   545,    -1,    37,   214,   205,   146,    -1,   252,   205,
     214,   205,   146,    -1,   285,    -1,   135,    -1,   278,    -1,
     328,    -1,   109,   264,    85,    -1,   109,   264,   155,    -1,
     264,    85,    -1,   264,   155,    -1,    19,   546,    -1,   162,
     399,    -1,   544,    -1,   745,    -1,   745,   364,   745,    -1,
     331,   491,    -1,    -1,    13,   122,   523,   549,   550,    -1,
     544,    -1,   549,   544,    -1,   251,    -1,    -1,    95,   122,
     742,   536,   412,    -1,    95,    10,   742,   359,   553,   360,
     412,    -1,   667,    -1,   352,    -1,    95,   216,   556,   359,
     555,   360,   412,    -1,   667,    -1,   667,   364,   667,    -1,
     198,   364,   667,    -1,   667,   364,   198,    -1,   697,    -1,
     748,   362,   556,    -1,    62,    40,   359,   667,    19,   667,
     360,   331,   122,   523,   558,    -1,    62,    40,   359,   667,
      19,   667,   360,   332,   122,   558,    -1,    19,   136,    -1,
      19,    22,    -1,    -1,    95,    40,   359,   667,    19,   667,
     360,   412,    -1,   243,   561,   734,   562,    -1,   243,   290,
     736,   562,    -1,   243,    75,   736,   562,    -1,   140,    -1,
     291,    -1,   116,    -1,    -1,    13,    10,   742,   359,   553,
     360,   246,   299,   736,    -1,    13,    59,   504,   246,   299,
     736,    -1,    13,    75,   737,   246,   299,   737,    -1,    13,
     122,   742,   536,   246,   299,   736,    -1,    13,   127,   746,
     246,   299,   746,    -1,    13,   162,   736,   246,   299,   736,
      -1,    13,   216,    47,   504,   319,   738,   246,   299,   736,
      -1,    13,   261,   736,   246,   299,   736,    -1,    13,   291,
     662,   246,   299,   736,    -1,    13,   140,   662,   246,   299,
     736,    -1,    13,   291,   662,   246,   564,   736,   299,   736,
      -1,    13,   304,   736,   214,   662,   246,   299,   736,    -1,
      13,   255,   746,   246,   299,   746,    -1,    13,   318,   746,
     246,   299,   746,    -1,    13,   292,   736,   246,   299,   736,
      -1,    52,    -1,    -1,    13,    10,   742,   359,   553,   360,
     270,   261,   736,    -1,    13,    93,   504,   270,   261,   736,
      -1,    13,   122,   742,   536,   270,   261,   736,    -1,    13,
     266,   662,   270,   261,   736,    -1,    13,   291,   662,   270,
     261,   736,    -1,    13,   309,   504,   270,   261,   736,    -1,
      13,    10,   742,   359,   553,   360,   224,   299,   746,    -1,
      13,    59,   504,   224,   299,   746,    -1,    13,    75,   737,
     224,   299,   746,    -1,    13,    93,   504,   224,   299,   746,
      -1,    13,   122,   742,   536,   224,   299,   746,    -1,    13,
     216,   556,   359,   555,   360,   224,   299,   746,    -1,    13,
     216,    47,   504,   319,   738,   224,   299,   746,    -1,    13,
     261,   736,   224,   299,   746,    -1,    13,   309,   504,   224,
     299,   746,    -1,    13,   292,   736,   224,   299,   746,    -1,
      -1,    62,   535,   259,   736,    19,   568,   214,   573,   299,
     734,   664,    92,   574,   569,    -1,   201,    -1,   571,    -1,
     359,   570,   360,    -1,   570,   363,   572,    -1,   572,    -1,
     631,    -1,   617,    -1,   627,    -1,   621,    -1,   576,    -1,
     571,    -1,    -1,   265,    -1,   317,    -1,    86,    -1,   148,
      -1,   149,    -1,    12,    -1,    -1,    95,   259,   736,   214,
     734,   412,    -1,   202,   734,    -1,   171,   734,    -1,   315,
     734,    -1,   315,   352,    -1,     3,   580,    -1,    28,   580,
     583,    -1,   279,   302,   583,    -1,    54,   580,    -1,   101,
     580,    -1,   256,   580,    -1,   260,   748,    -1,   245,   260,
     748,    -1,   245,   748,    -1,   256,   580,   299,   260,   748,
      -1,   256,   580,   299,   748,    -1,   231,   302,   745,    -1,
      54,   232,   745,    -1,   256,   232,   745,    -1,   333,    -1,
     302,    -1,    -1,   158,   168,   395,    -1,   239,   215,    -1,
     239,   334,    -1,   581,    -1,   582,   364,   581,    -1,   582,
     581,    -1,   582,    -1,    -1,    62,   425,   327,   734,   438,
      19,   631,    -1,    62,   218,   248,   425,   327,   734,   438,
      19,   631,    -1,   172,   741,    -1,    62,    75,   737,   371,
     587,    -1,   587,   588,    -1,    -1,   292,   589,   736,    -1,
     292,   589,    81,    -1,   176,   589,   745,    -1,   176,   589,
      81,    -1,   294,   589,   736,    -1,   294,   589,    81,    -1,
      99,   589,   745,    -1,    99,   589,   744,    -1,    99,   589,
      81,    -1,    56,   170,   589,   747,    -1,   224,   589,   736,
      -1,   224,   589,    81,    -1,   346,    -1,    -1,    13,    75,
     737,   371,   592,    -1,    13,    75,   737,   270,   390,    -1,
      13,    75,   737,   401,    -1,   592,   593,    -1,    -1,    56,
     170,   589,   747,    -1,    95,    75,   737,    -1,    62,    93,
     504,   597,   667,   430,    -1,    13,    93,   504,   411,    -1,
      13,    93,   504,    95,   200,   205,    -1,    13,    93,   504,
     270,   200,   205,    -1,    13,    93,   504,     7,   436,    -1,
      13,    93,   504,    95,    57,   736,   412,    -1,    19,    -1,
      -1,    62,   498,    59,   504,   115,   745,   299,   745,   120,
     504,    -1,    49,   740,   214,   734,    -1,    49,   734,    -1,
      49,    -1,   320,   604,   605,   603,    -1,   320,   604,   605,
     603,   734,    -1,   320,   604,   605,   603,   601,    -1,   602,
     603,    -1,   602,   603,   734,   606,    -1,    15,    -1,    14,
      -1,   326,    -1,    -1,   121,    -1,    -1,   119,    -1,    -1,
     359,   735,   360,    -1,    -1,   108,   609,   603,   608,    -1,
     631,    -1,   617,    -1,   627,    -1,   621,    -1,   628,    -1,
     614,    -1,   602,    -1,    -1,   231,   736,   611,    19,   613,
      -1,   359,   612,   360,    -1,    -1,   667,    -1,   612,   364,
     667,    -1,   631,    -1,   617,    -1,   627,    -1,   621,    -1,
     106,   736,   615,    -1,    62,   425,   291,   734,   453,    19,
     106,   736,   615,    -1,   359,   702,   360,    -1,    -1,    77,
     736,    -1,    77,   231,   736,    -1,   148,   154,   734,   618,
      -1,   323,   359,   730,   360,    -1,    81,   323,    -1,   631,
      -1,   359,   619,   360,   323,   359,   730,   360,    -1,   359,
     619,   360,   631,    -1,   620,    -1,   619,   364,   620,    -1,
     748,   724,    -1,    86,   120,   662,   622,   664,    -1,   319,
     655,    -1,    -1,   177,   638,   733,   624,   626,    -1,   137,
     625,   183,    -1,    -1,     5,   272,    -1,   257,   272,    -1,
     257,   105,    -1,   272,   317,   105,    -1,   272,    -1,   272,
     257,   105,    -1,   105,    -1,     5,   105,    -1,   204,    -1,
      -1,   317,   662,   270,   728,   654,   664,    -1,    80,   736,
     629,    73,   630,   115,   631,    -1,    -1,   629,   192,   262,
      -1,   629,   262,    -1,   629,    31,    -1,   629,   147,    -1,
      -1,   331,   131,    -1,   332,   131,    -1,   633,    -1,   632,
      -1,   359,   633,   360,    -1,   359,   632,   360,    -1,   635,
      -1,   634,   642,    -1,   634,   641,   651,   646,    -1,   634,
     641,   645,   652,    -1,   635,    -1,   632,    -1,   265,   640,
     726,   636,   654,   664,   649,   650,    -1,   634,   312,   639,
     634,    -1,   634,   152,   639,   634,    -1,   634,   103,   639,
     634,    -1,   154,   637,    -1,    -1,   295,   638,   734,    -1,
     293,   638,   734,    -1,   173,   295,   638,   734,    -1,   173,
     293,   638,   734,    -1,   123,   295,   638,   734,    -1,   123,
     293,   638,   734,    -1,   291,   734,    -1,   734,    -1,   291,
      -1,    -1,    11,    -1,    91,    -1,    -1,    91,    -1,    91,
     214,   359,   702,   360,    -1,    11,    -1,    -1,   642,    -1,
      -1,   219,    35,   643,    -1,   644,    -1,   643,   364,   644,
      -1,   691,   319,   700,    -1,   691,    20,    -1,   691,    89,
      -1,   691,    -1,   170,   647,   211,   648,    -1,   211,   648,
     170,   647,    -1,   170,   647,    -1,   211,   648,    -1,   170,
     647,   364,   648,    -1,   645,    -1,    -1,   691,    -1,    11,
      -1,   691,    -1,   127,    35,   702,    -1,    -1,   129,   691,
      -1,    -1,   115,   317,   653,   626,    -1,   115,   272,   653,
     626,    -1,   115,   239,   215,    -1,   651,    -1,    -1,   209,
     735,    -1,    -1,   120,   655,    -1,    -1,   656,    -1,   655,
     364,   656,    -1,   662,    -1,   662,   658,    -1,   663,    -1,
     663,   658,    -1,   663,    19,   359,   665,   360,    -1,   663,
      19,   748,   359,   665,   360,    -1,   663,   748,   359,   665,
     360,    -1,   632,    -1,   632,   658,    -1,   657,    -1,   359,
     657,   360,   658,    -1,   359,   657,   360,    -1,   656,    66,
     159,   656,    -1,   656,   337,   656,    -1,   656,   659,   159,
     656,   661,    -1,   656,   159,   656,   661,    -1,   656,   188,
     659,   159,   656,    -1,   656,   188,   159,   656,    -1,    19,
     748,   359,   735,   360,    -1,    19,   748,    -1,   748,   359,
     735,   360,    -1,   748,    -1,   121,   660,    -1,   167,   660,
      -1,   254,   660,    -1,   144,    -1,   221,    -1,    -1,   319,
     359,   735,   360,    -1,   214,   691,    -1,   734,    -1,   734,
     352,    -1,   215,   734,    -1,   215,   359,   734,   360,    -1,
     694,    -1,   330,   691,    -1,    -1,   666,    -1,   665,   364,
     666,    -1,   748,   667,    -1,   669,   668,    -1,   271,   669,
     668,    -1,   669,    18,   357,   744,   358,    -1,   271,   669,
      18,   357,   744,   358,    -1,   668,   357,   358,    -1,   668,
     357,   744,   358,    -1,    -1,   671,    -1,   672,    -1,   676,
      -1,   680,    -1,   687,    -1,   688,   690,    -1,   688,   359,
     744,   360,   690,    -1,   749,   505,    -1,   671,    -1,   672,
      -1,   677,    -1,   681,    -1,   687,    -1,   749,    -1,   150,
      -1,   151,    -1,   276,    -1,    30,    -1,   240,    -1,   114,
     673,    -1,    94,   229,    -1,    79,   675,    -1,    78,   675,
      -1,   207,   674,    -1,    33,    -1,   359,   744,   360,    -1,
      -1,   359,   744,   364,   744,   360,    -1,   359,   744,   360,
      -1,    -1,   359,   744,   364,   744,   360,    -1,   359,   744,
     360,    -1,    -1,   678,    -1,   679,    -1,   678,    -1,   679,
      -1,    32,   685,   359,   744,   360,    -1,    32,   685,    -1,
     682,    -1,   683,    -1,   682,    -1,   683,    -1,   684,   359,
     744,   360,   686,    -1,   684,   686,    -1,    43,   685,    -1,
      42,   685,    -1,   324,    -1,   187,    43,   685,    -1,   187,
      42,   685,    -1,   189,   685,    -1,   325,    -1,    -1,    43,
     270,   748,    -1,    -1,   298,   359,   744,   360,   689,    -1,
     298,   689,    -1,   297,   359,   744,   360,   689,    -1,   297,
     689,    -1,   153,    -1,   331,   297,   336,    -1,   332,   297,
     336,    -1,    -1,   335,    -1,   184,    -1,    76,    -1,   132,
      -1,   181,    -1,   263,    -1,   335,   299,   184,    -1,    76,
     299,   132,    -1,    76,   299,   181,    -1,    76,   299,   263,
      -1,   132,   299,   181,    -1,   132,   299,   263,    -1,   181,
     299,   263,    -1,    -1,   693,    -1,   691,   361,   667,    -1,
     691,    24,   297,   336,   691,    -1,   350,   691,    -1,   351,
     691,    -1,   691,   350,   691,    -1,   691,   351,   691,    -1,
     691,   352,   691,    -1,   691,   353,   691,    -1,   691,   354,
     691,    -1,   691,   355,   691,    -1,   691,   347,   691,    -1,
     691,   348,   691,    -1,   691,   346,   691,    -1,   691,   699,
     691,    -1,   699,   691,    -1,   691,   699,    -1,   691,    16,
     691,    -1,   691,   218,   691,    -1,   200,   691,    -1,   691,
     169,   691,    -1,   691,   169,   691,   102,   691,    -1,   691,
     200,   169,   691,    -1,   691,   200,   169,   691,   102,   691,
      -1,   691,   133,   691,    -1,   691,   133,   691,   102,   691,
      -1,   691,   200,   133,   691,    -1,   691,   200,   133,   691,
     102,   691,    -1,   691,   274,   299,   691,    -1,   691,   274,
     299,   691,   102,   691,    -1,   691,   200,   274,   299,   691,
      -1,   691,   200,   274,   299,   691,   102,   691,    -1,   691,
     157,    -1,   691,   156,   205,    -1,   691,   203,    -1,   691,
     156,   200,   205,    -1,   695,   222,   695,    -1,   691,   156,
     306,    -1,   691,   156,   200,   306,    -1,   691,   156,   111,
      -1,   691,   156,   200,   111,    -1,   691,   156,   314,    -1,
     691,   156,   200,   314,    -1,   691,   156,    91,   120,   691,
      -1,   691,   156,   209,   359,   704,   360,    -1,   691,   156,
     200,   209,   359,   704,   360,    -1,   691,    29,   725,   692,
      16,   692,    -1,   691,   200,    29,   725,   692,    16,   692,
      -1,   691,    29,   288,   692,    16,   692,    -1,   691,   200,
      29,   288,   692,    16,   692,    -1,   691,   137,   715,    -1,
     691,   200,   137,   715,    -1,   691,   701,   696,   632,    -1,
     691,   701,   696,   359,   691,   360,    -1,   313,   632,    -1,
     693,    -1,   692,   361,   667,    -1,   350,   692,    -1,   351,
     692,    -1,   692,   350,   692,    -1,   692,   351,   692,    -1,
     692,   352,   692,    -1,   692,   353,   692,    -1,   692,   354,
     692,    -1,   692,   355,   692,    -1,   692,   347,   692,    -1,
     692,   348,   692,    -1,   692,   346,   692,    -1,   692,   699,
     692,    -1,   699,   692,    -1,   692,   699,    -1,   692,   156,
      91,   120,   692,    -1,   692,   156,   209,   359,   704,   360,
      -1,   692,   156,   200,   209,   359,   704,   360,    -1,   721,
      -1,   743,    -1,   345,   724,    -1,   359,   691,   360,   724,
      -1,   716,    -1,   694,    -1,   632,    -1,   107,   632,    -1,
      18,   632,    -1,    18,   706,    -1,   695,    -1,   742,   359,
     360,    -1,   742,   359,   702,   360,    -1,   742,   359,    11,
     702,   360,    -1,   742,   359,    91,   702,   360,    -1,   742,
     359,   352,   360,    -1,    68,    -1,    70,    -1,    70,   359,
     744,   360,    -1,    71,    -1,    71,   359,   744,   360,    -1,
     174,    -1,   174,   359,   744,   360,    -1,   175,    -1,   175,
     359,   744,   360,    -1,    69,    -1,    72,    -1,   269,    -1,
     318,    -1,    40,   359,   691,    19,   667,   360,    -1,   110,
     359,   703,   360,    -1,   223,   359,   708,   360,    -1,   228,
     359,   710,   360,    -1,   286,   359,   711,   360,    -1,   303,
     359,   691,    19,   667,   360,    -1,   305,   359,    34,   714,
     360,    -1,   305,   359,   165,   714,   360,    -1,   305,   359,
     301,   714,   360,    -1,   305,   359,   714,   360,    -1,    60,
     359,   691,   319,   504,   360,    -1,    60,   359,   702,   360,
      -1,   206,   359,   691,   364,   691,   360,    -1,    50,   359,
     702,   360,    -1,   126,   359,   702,   360,    -1,   166,   359,
     702,   360,    -1,   257,   359,   702,   360,    -1,   257,   359,
     360,    -1,   359,   702,   364,   691,   360,    -1,    17,    -1,
     277,    -1,    11,    -1,   343,    -1,   698,    -1,   350,    -1,
     351,    -1,   352,    -1,   353,    -1,   354,    -1,   355,    -1,
     347,    -1,   348,    -1,   346,    -1,   343,    -1,   216,   359,
     556,   360,    -1,   697,    -1,   216,   359,   556,   360,    -1,
     697,    -1,   216,   359,   556,   360,    -1,   169,    -1,   200,
     169,    -1,   133,    -1,   200,   133,    -1,   691,    -1,   702,
     364,   691,    -1,   707,   120,   691,    -1,    -1,   704,   364,
     667,    -1,   667,    -1,   706,    -1,   705,   364,   706,    -1,
     357,   702,   358,    -1,   357,   705,   358,    -1,   338,    -1,
     335,    -1,   184,    -1,    76,    -1,   132,    -1,   181,    -1,
     263,    -1,   340,    -1,   691,   709,   712,   713,    -1,   691,
     709,   712,    -1,   227,   691,    -1,   692,   137,   692,    -1,
      -1,   691,   712,   713,    -1,   691,   713,   712,    -1,   691,
     712,    -1,   691,   713,    -1,   702,    -1,    -1,   120,   691,
      -1,   115,   691,    -1,   691,   120,   702,    -1,   120,   702,
      -1,   702,    -1,   632,    -1,   359,   702,   360,    -1,    39,
     720,   717,   719,   101,    -1,   718,    -1,   717,   718,    -1,
     329,   691,   296,   691,    -1,    97,   691,    -1,    -1,   691,
      -1,    -1,   732,    -1,   732,   723,    -1,   362,   739,    -1,
     362,   352,    -1,   357,   691,   358,    -1,   357,   691,   365,
     691,   358,    -1,   722,    -1,   723,   722,    -1,    -1,   724,
     722,    -1,    23,    -1,    -1,   727,    -1,   726,   364,   727,
      -1,   691,    19,   751,    -1,   691,    -1,   352,    -1,   729,
      -1,   728,   364,   729,    -1,   748,   724,   346,   691,    -1,
     748,   724,   346,    81,    -1,   731,    -1,   730,   364,   731,
      -1,   691,    -1,    81,    -1,   756,    -1,   748,    -1,   734,
      -1,   733,   364,   734,    -1,   732,    -1,   732,   723,    -1,
     736,    -1,   735,   364,   736,    -1,   748,    -1,   748,    -1,
     748,    -1,   751,    -1,   748,    -1,   745,    -1,   750,    -1,
     732,   723,    -1,   744,    -1,   339,    -1,   745,    -1,   341,
      -1,   342,    -1,   670,   745,    -1,   688,   745,   690,    -1,
     688,   359,   744,   360,   745,   690,    -1,   306,    -1,   111,
      -1,   205,    -1,   344,    -1,   340,    -1,   748,    -1,   344,
      -1,   351,   344,    -1,   338,    -1,   752,    -1,   753,    -1,
     338,    -1,   752,    -1,   338,    -1,   752,    -1,   754,    -1,
     338,    -1,   752,    -1,   753,    -1,   754,    -1,   755,    -1,
       3,    -1,     4,    -1,     5,    -1,     6,    -1,     7,    -1,
       8,    -1,     9,    -1,    10,    -1,    12,    -1,    13,    -1,
      21,    -1,    22,    -1,    24,    -1,    26,    -1,    27,    -1,
      28,    -1,    35,    -1,    36,    -1,    37,    -1,    38,    -1,
      41,    -1,    44,    -1,    46,    -1,    47,    -1,    48,    -1,
      49,    -1,    53,    -1,    54,    -1,    55,    -1,    56,    -1,
      58,    -1,    59,    -1,    61,    -1,    63,    -1,    64,    -1,
      65,    -1,    67,    -1,    73,    -1,    74,    -1,    75,    -1,
      76,    -1,    77,    -1,    80,    -1,    82,    -1,    84,    -1,
      85,    -1,    86,    -1,    87,    -1,    88,    -1,    90,    -1,
      93,    -1,    94,    -1,    95,    -1,    96,    -1,    98,    -1,
      99,    -1,   100,    -1,   102,    -1,   104,    -1,   105,    -1,
     106,    -1,   108,    -1,   109,    -1,   112,    -1,   113,    -1,
     116,    -1,   118,    -1,   122,    -1,   123,    -1,   125,    -1,
     128,    -1,   130,    -1,   131,    -1,   132,    -1,   134,    -1,
     135,    -1,   136,    -1,   138,    -1,   139,    -1,   140,    -1,
     141,    -1,   142,    -1,   146,    -1,   147,    -1,   148,    -1,
     149,    -1,   155,    -1,   158,    -1,   160,    -1,   161,    -1,
     162,    -1,   163,    -1,   164,    -1,   168,    -1,   171,    -1,
     172,    -1,   173,    -1,   176,    -1,   177,    -1,   178,    -1,
     179,    -1,   180,    -1,   181,    -1,   182,    -1,   183,    -1,
     184,    -1,   185,    -1,   186,    -1,   191,    -1,   192,    -1,
     193,    -1,   194,    -1,   195,    -1,   196,    -1,   197,    -1,
     199,    -1,   201,    -1,   202,    -1,   204,    -1,   208,    -1,
     209,    -1,   212,    -1,   216,    -1,   217,    -1,   224,    -1,
     225,    -1,   226,    -1,   231,    -1,   232,    -1,   230,    -1,
     234,    -1,   235,    -1,   236,    -1,   237,    -1,   238,    -1,
     239,    -1,   241,    -1,   243,    -1,   244,    -1,   245,    -1,
     246,    -1,   247,    -1,   248,    -1,   249,    -1,   250,    -1,
     251,    -1,   252,    -1,   253,    -1,   255,    -1,   256,    -1,
     258,    -1,   259,    -1,   260,    -1,   261,    -1,   262,    -1,
     263,    -1,   264,    -1,   266,    -1,   267,    -1,   268,    -1,
     270,    -1,   272,    -1,   273,    -1,   275,    -1,   278,    -1,
     279,    -1,   280,    -1,   281,    -1,   282,    -1,   283,    -1,
     284,    -1,   287,    -1,   289,    -1,   290,    -1,   285,    -1,
     292,    -1,   293,    -1,   294,    -1,   295,    -1,   300,    -1,
     302,    -1,   304,    -1,   307,    -1,   308,    -1,   309,    -1,
     310,    -1,   311,    -1,   314,    -1,   315,    -1,   316,    -1,
     317,    -1,   320,    -1,   321,    -1,   322,    -1,   323,    -1,
     325,    -1,   327,    -1,   328,    -1,   331,    -1,   332,    -1,
     333,    -1,   334,    -1,   335,    -1,   336,    -1,    30,    -1,
      32,    -1,    33,    -1,    42,    -1,    43,    -1,    50,    -1,
      60,    -1,    78,    -1,    79,    -1,   107,    -1,   110,    -1,
     114,    -1,   126,    -1,   145,    -1,   150,    -1,   151,    -1,
     153,    -1,   166,    -1,   187,    -1,   189,    -1,   198,    -1,
     206,    -1,   207,    -1,   220,    -1,   223,    -1,   228,    -1,
     229,    -1,   240,    -1,   257,    -1,   271,    -1,   276,    -1,
     286,    -1,   297,    -1,   298,    -1,   303,    -1,   305,    -1,
     324,    -1,    25,    -1,    29,    -1,    31,    -1,    66,    -1,
     119,    -1,   121,    -1,   133,    -1,   144,    -1,   156,    -1,
     157,    -1,   159,    -1,   167,    -1,   169,    -1,   188,    -1,
     203,    -1,   221,    -1,   222,    -1,   254,    -1,   274,    -1,
     326,    -1,    11,    -1,    14,    -1,    15,    -1,    16,    -1,
      17,    -1,    18,    -1,    19,    -1,    20,    -1,    23,    -1,
      34,    -1,    39,    -1,    40,    -1,    45,    -1,    51,    -1,
      52,    -1,    57,    -1,    62,    -1,    68,    -1,    69,    -1,
      70,    -1,    71,    -1,    72,    -1,    81,    -1,    83,    -1,
      89,    -1,    91,    -1,    92,    -1,    97,    -1,   101,    -1,
     103,    -1,   111,    -1,   115,    -1,   117,    -1,   120,    -1,
     124,    -1,   127,    -1,   129,    -1,   137,    -1,   143,    -1,
     152,    -1,   154,    -1,   165,    -1,   170,    -1,   174,    -1,
     175,    -1,   190,    -1,   200,    -1,   205,    -1,   210,    -1,
     211,    -1,   213,    -1,   214,    -1,   215,    -1,   218,    -1,
     219,    -1,   227,    -1,   233,    -1,   242,    -1,   265,    -1,
     269,    -1,   277,    -1,   288,    -1,   291,    -1,   296,    -1,
     299,    -1,   301,    -1,   306,    -1,   312,    -1,   313,    -1,
     318,    -1,   319,    -1,   329,    -1,   330,    -1,   213,    -1,
     190,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   472,   472,   476,   482,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   563,   564,   565,
     566,   567,   568,   569,   570,   571,   572,   573,   575,   585,
     596,   597,   606,   607,   611,   616,   621,   626,   630,   634,
     638,   642,   646,   650,   654,   658,   663,   667,   671,   675,
     679,   684,   689,   693,   697,   701,   705,   719,   737,   748,
     756,   774,   786,   794,   815,   833,   849,   867,   878,   879,
     891,   907,   919,   931,   932,   936,   937,   945,   946,   947,
     948,   949,   950,   964,   970,   976,   984,   991,   998,  1006,
    1013,  1020,  1028,  1035,  1042,  1052,  1053,  1065,  1066,  1069,
    1070,  1073,  1075,  1077,  1081,  1082,  1083,  1084,  1088,  1089,
    1090,  1091,  1103,  1107,  1111,  1124,  1151,  1152,  1153,  1157,
    1158,  1159,  1163,  1164,  1169,  1175,  1181,  1187,  1193,  1202,
    1208,  1214,  1220,  1226,  1236,  1246,  1247,  1251,  1252,  1260,
    1275,  1283,  1294,  1295,  1301,  1309,  1318,  1326,  1334,  1343,
    1352,  1364,  1374,  1382,  1391,  1398,  1405,  1413,  1421,  1429,
    1436,  1443,  1451,  1458,  1464,  1471,  1472,  1478,  1486,  1496,
    1504,  1508,  1509,  1510,  1514,  1515,  1528,  1547,  1571,  1572,
    1581,  1582,  1583,  1589,  1590,  1595,  1599,  1603,  1607,  1611,
    1615,  1619,  1623,  1627,  1631,  1640,  1644,  1648,  1652,  1657,
    1661,  1665,  1666,  1677,  1691,  1717,  1718,  1719,  1720,  1721,
    1722,  1723,  1727,  1728,  1732,  1736,  1743,  1744,  1745,  1748,
    1760,  1761,  1765,  1786,  1787,  1806,  1817,  1828,  1839,  1850,
    1861,  1880,  1908,  1914,  1920,  1926,  1944,  1955,  1956,  1957,
    1966,  1987,  1991,  2001,  2012,  2023,  2041,  2042,  2046,  2047,
    2050,  2056,  2060,  2067,  2072,  2084,  2086,  2088,  2090,  2093,
    2096,  2099,  2103,  2104,  2105,  2106,  2107,  2110,  2111,  2115,
    2116,  2117,  2120,  2121,  2122,  2123,  2126,  2127,  2130,  2131,
    2141,  2170,  2171,  2172,  2176,  2177,  2181,  2182,  2186,  2212,
    2223,  2232,  2233,  2236,  2240,  2244,  2248,  2252,  2256,  2260,
    2264,  2268,  2272,  2278,  2279,  2283,  2284,  2287,  2288,  2295,
    2307,  2317,  2331,  2332,  2340,  2341,  2345,  2346,  2350,  2351,
    2355,  2365,  2366,  2376,  2386,  2387,  2400,  2417,  2435,  2459,
    2460,  2464,  2470,  2476,  2485,  2486,  2487,  2491,  2496,  2506,
    2507,  2511,  2512,  2516,  2517,  2518,  2522,  2528,  2529,  2530,
    2531,  2532,  2536,  2537,  2541,  2543,  2551,  2558,  2567,  2571,
    2572,  2576,  2577,  2582,  2603,  2622,  2645,  2653,  2661,  2669,
    2705,  2708,  2709,  2712,  2716,  2723,  2724,  2725,  2726,  2739,
    2753,  2754,  2758,  2768,  2778,  2787,  2796,  2797,  2800,  2801,
    2806,  2825,  2835,  2836,  2837,  2838,  2839,  2840,  2841,  2842,
    2846,  2847,  2850,  2851,  2854,  2856,  2869,  2895,  2904,  2914,
    2923,  2933,  2942,  2951,  2961,  2970,  2979,  2988,  2997,  3009,
    3010,  3011,  3012,  3013,  3014,  3015,  3016,  3017,  3018,  3022,
    3023,  3033,  3040,  3049,  3056,  3069,  3075,  3082,  3089,  3096,
    3103,  3110,  3117,  3124,  3131,  3138,  3145,  3152,  3159,  3166,
    3175,  3176,  3186,  3201,  3214,  3240,  3242,  3244,  3248,  3250,
    3254,  3255,  3256,  3257,  3265,  3272,  3279,  3286,  3293,  3300,
    3307,  3318,  3319,  3322,  3332,  3346,  3347,  3351,  3352,  3357,
    3373,  3386,  3396,  3408,  3409,  3412,  3413,  3428,  3444,  3445,
    3449,  3450,  3453,  3454,  3462,  3469,  3476,  3485,  3486,  3487,
    3502,  3514,  3529,  3530,  3533,  3534,  3538,  3539,  3553,  3561,
    3569,  3577,  3585,  3596,  3597,  3598,  3599,  3605,  3609,  3623,
    3624,  3636,  3637,  3644,  3648,  3652,  3656,  3660,  3664,  3668,
    3672,  3676,  3680,  3687,  3691,  3695,  3701,  3702,  3709,  3710,
    3722,  3733,  3734,  3739,  3740,  3755,  3766,  3777,  3778,  3782,
    3793,  3800,  3802,  3804,  3809,  3811,  3822,  3832,  3844,  3845,
    3846,  3850,  3872,  3880,  3890,  3903,  3904,  3907,  3908,  3918,
    3927,  3935,  3943,  3952,  3960,  3968,  3977,  3985,  3994,  4003,
    4012,  4021,  4029,  4037,  4047,  4048,  4058,  4067,  4075,  4084,
    4092,  4100,  4116,  4125,  4133,  4141,  4149,  4158,  4167,  4176,
    4184,  4192,  4210,  4209,  4228,  4229,  4230,  4235,  4241,  4250,
    4251,  4252,  4253,  4254,  4258,  4259,  4263,  4264,  4265,  4266,
    4270,  4271,  4272,  4277,  4297,  4305,  4314,  4320,  4341,  4348,
    4355,  4362,  4369,  4376,  4383,  4391,  4399,  4407,  4415,  4423,
    4430,  4437,  4446,  4447,  4448,  4452,  4455,  4458,  4465,  4467,
    4469,  4474,  4476,  4487,  4498,  4518,  4534,  4544,  4545,  4549,
    4553,  4557,  4561,  4565,  4569,  4573,  4577,  4581,  4585,  4589,
    4593,  4603,  4604,  4615,  4625,  4633,  4645,  4646,  4650,  4664,
    4680,  4692,  4701,  4709,  4717,  4726,  4737,  4738,  4752,  4775,
    4782,  4789,  4806,  4818,  4830,  4842,  4854,  4869,  4870,  4874,
    4875,  4878,  4879,  4882,  4883,  4887,  4888,  4899,  4910,  4911,
    4912,  4913,  4914,  4915,  4919,  4920,  4930,  4940,  4941,  4944,
    4945,  4950,  4951,  4952,  4953,  4963,  4971,  4987,  4988,  4998,
    5004,  5020,  5028,  5035,  5042,  5049,  5056,  5066,  5068,  5073,
    5090,  5101,  5102,  5105,  5116,  5117,  5120,  5121,  5122,  5123,
    5124,  5125,  5126,  5127,  5130,  5131,  5142,  5163,  5175,  5176,
    5177,  5178,  5179,  5182,  5183,  5184,  5232,  5233,  5237,  5238,
    5248,  5249,  5255,  5261,  5270,  5271,  5298,  5314,  5318,  5322,
    5329,  5330,  5338,  5343,  5348,  5353,  5358,  5363,  5368,  5373,
    5380,  5381,  5384,  5385,  5386,  5393,  5394,  5395,  5396,  5400,
    5401,  5405,  5409,  5410,  5413,  5420,  5427,  5434,  5445,  5447,
    5449,  5451,  5453,  5464,  5466,  5470,  5471,  5481,  5485,  5486,
    5490,  5491,  5495,  5503,  5511,  5515,  5516,  5520,  5521,  5533,
    5534,  5538,  5539,  5549,  5553,  5558,  5565,  5573,  5580,  5590,
    5600,  5619,  5626,  5630,  5656,  5660,  5672,  5686,  5699,  5713,
    5724,  5739,  5745,  5750,  5756,  5763,  5764,  5765,  5766,  5770,
    5771,  5783,  5784,  5789,  5796,  5803,  5810,  5820,  5825,  5826,
    5831,  5835,  5841,  5862,  5867,  5873,  5879,  5889,  5891,  5894,
    5906,  5907,  5908,  5909,  5910,  5911,  5917,  5935,  5953,  5954,
    5955,  5956,  5957,  5961,  5972,  5976,  5980,  5984,  5988,  5992,
    5996,  6000,  6005,  6010,  6015,  6021,  6037,  6043,  6058,  6069,
    6076,  6091,  6102,  6113,  6117,  6125,  6129,  6137,  6158,  6179,
    6183,  6189,  6193,  6206,  6241,  6264,  6266,  6268,  6270,  6272,
    6274,  6279,  6280,  6284,  6285,  6289,  6315,  6326,  6348,  6358,
    6362,  6363,  6364,  6368,  6369,  6370,  6371,  6372,  6373,  6374,
    6376,  6378,  6381,  6384,  6386,  6389,  6391,  6417,  6418,  6420,
    6438,  6440,  6442,  6444,  6446,  6448,  6450,  6452,  6454,  6456,
    6458,  6461,  6463,  6465,  6468,  6470,  6472,  6475,  6477,  6486,
    6488,  6497,  6499,  6508,  6510,  6520,  6531,  6540,  6551,  6570,
    6582,  6594,  6606,  6618,  6622,  6629,  6636,  6643,  6650,  6657,
    6664,  6668,  6672,  6676,  6682,  6688,  6698,  6708,  6738,  6770,
    6782,  6789,  6815,  6817,  6819,  6821,  6823,  6825,  6827,  6829,
    6831,  6833,  6835,  6837,  6839,  6841,  6843,  6845,  6847,  6851,
    6855,  6869,  6870,  6871,  6885,  6897,  6899,  6901,  6910,  6919,
    6928,  6930,  6947,  6956,  6965,  6978,  6987,  7012,  7040,  7057,
    7087,  7100,  7131,  7148,  7178,  7195,  7226,  7235,  7244,  7253,
    7262,  7264,  7273,  7287,  7297,  7309,  7325,  7337,  7346,  7355,
    7364,  7378,  7387,  7391,  7397,  7404,  7423,  7424,  7425,  7428,
    7429,  7430,  7433,  7434,  7437,  7438,  7439,  7440,  7441,  7442,
    7443,  7444,  7445,  7448,  7450,  7455,  7457,  7462,  7464,  7466,
    7468,  7470,  7472,  7484,  7488,  7495,  7502,  7505,  7509,  7515,
    7517,  7521,  7527,  7540,  7541,  7542,  7543,  7544,  7545,  7546,
    7547,  7556,  7560,  7567,  7574,  7575,  7591,  7595,  7600,  7604,
    7619,  7624,  7628,  7631,  7634,  7635,  7636,  7639,  7646,  7656,
    7669,  7670,  7674,  7684,  7685,  7688,  7689,  7697,  7701,  7708,
    7712,  7716,  7723,  7733,  7734,  7738,  7739,  7742,  7743,  7754,
    7755,  7759,  7766,  7773,  7786,  7787,  7791,  7798,  7809,  7810,
    7814,  7821,  7838,  7839,  7843,  7844,  7855,  7862,  7888,  7890,
    7895,  7898,  7901,  7903,  7905,  7907,  7917,  7919,  7927,  7934,
    7941,  7948,  7955,  7967,  7975,  7986,  8009,  8013,  8017,  8025,
    8026,  8027,  8029,  8030,  8046,  8047,  8048,  8053,  8054,  8060,
    8061,  8062,  8068,  8069,  8070,  8071,  8072,  8088,  8089,  8090,
    8091,  8092,  8093,  8094,  8095,  8096,  8097,  8098,  8099,  8100,
    8101,  8102,  8103,  8104,  8105,  8106,  8107,  8108,  8109,  8110,
    8111,  8112,  8113,  8114,  8115,  8116,  8117,  8118,  8119,  8120,
    8121,  8122,  8123,  8124,  8125,  8126,  8127,  8128,  8129,  8130,
    8131,  8132,  8133,  8134,  8135,  8136,  8137,  8138,  8139,  8140,
    8141,  8142,  8143,  8144,  8145,  8146,  8147,  8148,  8149,  8150,
    8151,  8152,  8153,  8154,  8155,  8156,  8157,  8158,  8159,  8160,
    8161,  8162,  8163,  8164,  8165,  8166,  8167,  8168,  8169,  8170,
    8171,  8172,  8173,  8174,  8175,  8176,  8177,  8178,  8179,  8180,
    8181,  8182,  8183,  8184,  8185,  8186,  8187,  8188,  8189,  8190,
    8191,  8192,  8193,  8194,  8195,  8196,  8197,  8198,  8199,  8200,
    8201,  8202,  8203,  8204,  8205,  8206,  8207,  8208,  8209,  8210,
    8211,  8212,  8213,  8214,  8215,  8216,  8217,  8218,  8219,  8220,
    8221,  8222,  8223,  8224,  8225,  8226,  8227,  8228,  8229,  8230,
    8231,  8232,  8233,  8234,  8235,  8236,  8237,  8238,  8239,  8240,
    8241,  8242,  8243,  8244,  8245,  8246,  8247,  8248,  8249,  8250,
    8251,  8252,  8253,  8254,  8255,  8256,  8257,  8258,  8259,  8260,
    8261,  8262,  8263,  8264,  8265,  8266,  8267,  8268,  8269,  8270,
    8271,  8272,  8273,  8274,  8275,  8276,  8277,  8278,  8279,  8280,
    8281,  8282,  8283,  8284,  8285,  8286,  8287,  8288,  8289,  8290,
    8291,  8305,  8306,  8307,  8308,  8309,  8310,  8311,  8312,  8313,
    8314,  8315,  8316,  8317,  8318,  8319,  8320,  8321,  8322,  8323,
    8324,  8325,  8326,  8327,  8328,  8329,  8330,  8331,  8332,  8333,
    8334,  8335,  8336,  8337,  8338,  8339,  8340,  8341,  8355,  8356,
    8357,  8358,  8359,  8360,  8361,  8362,  8363,  8364,  8365,  8366,
    8367,  8368,  8369,  8370,  8371,  8372,  8373,  8374,  8384,  8385,
    8386,  8387,  8388,  8389,  8390,  8391,  8392,  8393,  8394,  8395,
    8396,  8397,  8398,  8399,  8400,  8401,  8402,  8403,  8404,  8405,
    8406,  8407,  8408,  8409,  8410,  8411,  8412,  8413,  8414,  8415,
    8416,  8417,  8418,  8419,  8420,  8421,  8422,  8423,  8424,  8425,
    8426,  8427,  8428,  8429,  8430,  8431,  8432,  8433,  8434,  8435,
    8436,  8437,  8438,  8439,  8440,  8441,  8442,  8443,  8444,  8445,
    8446,  8447,  8448,  8449,  8450,  8451,  8452,  8453,  8454,  8455,
    8456,  8461,  8470
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABORT_P", "ABSOLUTE_P", "ACCESS", 
  "ACTION", "ADD", "ADMIN", "AFTER", "AGGREGATE", "ALL", "ALSO", "ALTER", 
  "ANALYSE", "ANALYZE", "AND", "ANY", "ARRAY", "AS", "ASC", "ASSERTION", 
  "ASSIGNMENT", "ASYMMETRIC", "AT", "AUTHORIZATION", "BACKWARD", "BEFORE", 
  "BEGIN_P", "BETWEEN", "BIGINT", "BINARY", "BIT", "BOOLEAN_P", "BOTH", 
  "BY", "CACHE", "CALLED", "CASCADE", "CASE", "CAST", "CHAIN", "CHAR_P", 
  "CHARACTER", "CHARACTERISTICS", "CHECK", "CHECKPOINT", "CLASS", "CLOSE", 
  "CLUSTER", "COALESCE", "COLLATE", "COLUMN", "COMMENT", "COMMIT", 
  "COMMITTED", "CONNECTION", "CONSTRAINT", "CONSTRAINTS", "CONVERSION_P", 
  "CONVERT", "COPY", "CREATE", "CREATEDB", "CREATEROLE", "CREATEUSER", 
  "CROSS", "CSV", "CURRENT_DATE", "CURRENT_ROLE", "CURRENT_TIME", 
  "CURRENT_TIMESTAMP", "CURRENT_USER", "CURSOR", "CYCLE", "DATABASE", 
  "DAY_P", "DEALLOCATE", "DEC", "DECIMAL_P", "DECLARE", "DEFAULT", 
  "DEFAULTS", "DEFERRABLE", "DEFERRED", "DEFINER", "DELETE_P", 
  "DELIMITER", "DELIMITERS", "DESC", "DISABLE_P", "DISTINCT", "DO", 
  "DOMAIN_P", "DOUBLE_P", "DROP", "EACH", "ELSE", "ENABLE_P", "ENCODING", 
  "ENCRYPTED", "END_P", "ESCAPE", "EXCEPT", "EXCLUDING", "EXCLUSIVE", 
  "EXECUTE", "EXISTS", "EXPLAIN", "EXTERNAL", "EXTRACT", "FALSE_P", 
  "FETCH", "FIRST_P", "FLOAT_P", "FOR", "FORCE", "FOREIGN", "FORWARD", 
  "FREEZE", "FROM", "FULL", "FUNCTION", "GLOBAL", "GRANT", "GRANTED", 
  "GREATEST", "GROUP_P", "HANDLER", "HAVING", "HEADER", "HOLD", "HOUR_P", 
  "ILIKE", "IMMEDIATE", "IMMUTABLE", "IMPLICIT_P", "IN_P", "INCLUDING", 
  "INCREMENT", "INDEX", "INHERIT", "INHERITS", "INITIALLY", "INNER_P", 
  "INOUT", "INPUT_P", "INSENSITIVE", "INSERT", "INSTEAD", "INT_P", 
  "INTEGER", "INTERSECT", "INTERVAL", "INTO", "INVOKER", "IS", "ISNULL", 
  "ISOLATION", "JOIN", "KEY", "LANCOMPILER", "LANGUAGE", "LARGE_P", 
  "LAST_P", "LEADING", "LEAST", "LEFT", "LEVEL", "LIKE", "LIMIT", 
  "LISTEN", "LOAD", "LOCAL", "LOCALTIME", "LOCALTIMESTAMP", "LOCATION", 
  "LOCK_P", "LOGIN_P", "MATCH", "MAXVALUE", "MINUTE_P", "MINVALUE", 
  "MODE", "MONTH_P", "MOVE", "NAMES", "NATIONAL", "NATURAL", "NCHAR", 
  "NEW", "NEXT", "NO", "NOCREATEDB", "NOCREATEROLE", "NOCREATEUSER", 
  "NOINHERIT", "NOLOGIN_P", "NONE", "NOSUPERUSER", "NOT", "NOTHING", 
  "NOTIFY", "NOTNULL", "NOWAIT", "NULL_P", "NULLIF", "NUMERIC", 
  "OBJECT_P", "OF", "OFF", "OFFSET", "OIDS", "OLD", "ON", "ONLY", 
  "OPERATOR", "OPTION", "OR", "ORDER", "OUT_P", "OUTER_P", "OVERLAPS", 
  "OVERLAY", "OWNER", "PARTIAL", "PASSWORD", "PLACING", "POSITION", 
  "PRECISION", "PRESERVE", "PREPARE", "PREPARED", "PRIMARY", "PRIOR", 
  "PRIVILEGES", "PROCEDURAL", "PROCEDURE", "QUOTE", "READ", "REAL", 
  "RECHECK", "REFERENCES", "REINDEX", "RELATIVE_P", "RELEASE", "RENAME", 
  "REPEATABLE", "REPLACE", "RESET", "RESTART", "RESTRICT", "RETURNS", 
  "REVOKE", "RIGHT", "ROLE", "ROLLBACK", "ROW", "ROWS", "RULE", 
  "SAVEPOINT", "SCHEMA", "SCROLL", "SECOND_P", "SECURITY", "SELECT", 
  "SEQUENCE", "SERIALIZABLE", "SESSION", "SESSION_USER", "SET", "SETOF", 
  "SHARE", "SHOW", "SIMILAR", "SIMPLE", "SMALLINT", "SOME", "STABLE", 
  "START", "STATEMENT", "STATISTICS", "STDIN", "STDOUT", "STORAGE", 
  "STRICT_P", "SUBSTRING", "SUPERUSER_P", "SYMMETRIC", "SYSID", 
  "SYSTEM_P", "TABLE", "TABLESPACE", "TEMP", "TEMPLATE", "TEMPORARY", 
  "THEN", "TIME", "TIMESTAMP", "TO", "TOAST", "TRAILING", "TRANSACTION", 
  "TREAT", "TRIGGER", "TRIM", "TRUE_P", "TRUNCATE", "TRUSTED", "TYPE_P", 
  "UNCOMMITTED", "UNENCRYPTED", "UNION", "UNIQUE", "UNKNOWN", "UNLISTEN", 
  "UNTIL", "UPDATE", "USER", "USING", "VACUUM", "VALID", "VALIDATOR", 
  "VALUES", "VARCHAR", "VARYING", "VERBOSE", "VIEW", "VOLATILE", "WHEN", 
  "WHERE", "WITH", "WITHOUT", "WORK", "WRITE", "YEAR_P", "ZONE", 
  "UNIONJOIN", "IDENT", "FCONST", "SCONST", "BCONST", "XCONST", "Op", 
  "ICONST", "PARAM", "'='", "'<'", "'>'", "POSTFIXOP", "'+'", "'-'", 
  "'*'", "'/'", "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", 
  "TYPECAST", "'.'", "';'", "','", "':'", "$accept", "stmtblock", 
  "stmtmulti", "stmt", "CreateRoleStmt", "opt_with", "OptRoleList", 
  "OptRoleElem", "CreateUserStmt", "AlterRoleStmt", "AlterRoleSetStmt", 
  "AlterUserStmt", "AlterUserSetStmt", "DropRoleStmt", "DropUserStmt", 
  "CreateGroupStmt", "AlterGroupStmt", "add_drop", "DropGroupStmt", 
  "CreateSchemaStmt", "OptSchemaName", "OptSchemaEltList", "schema_stmt", 
  "VariableSetStmt", "set_rest", "var_name", "var_list_or_default", 
  "var_list", "var_value", "iso_level", "opt_boolean", "zone_value", 
  "opt_encoding", "ColId_or_Sconst", "VariableShowStmt", 
  "VariableResetStmt", "ConstraintsSetStmt", "constraints_set_list", 
  "constraints_set_mode", "CheckPointStmt", "AlterTableStmt", 
  "alter_table_cmds", "alter_table_cmd", "alter_rel_cmds", 
  "alter_rel_cmd", "alter_column_default", "opt_drop_behavior", 
  "alter_using", "ClosePortalStmt", "CopyStmt", "copy_from", 
  "copy_file_name", "copy_opt_list", "copy_opt_item", "opt_binary", 
  "opt_oids", "copy_delimiter", "opt_using", "CreateStmt", "OptTemp", 
  "OptTableElementList", "TableElementList", "TableElement", "columnDef", 
  "ColQualList", "ColConstraint", "ColConstraintElem", "ConstraintAttr", 
  "TableLikeClause", "like_including_defaults", "TableConstraint", 
  "ConstraintElem", "opt_column_list", "columnList", "columnElem", 
  "key_match", "key_actions", "key_update", "key_delete", "key_action", 
  "OptInherit", "OptWithOids", "OnCommitOption", "OptTableSpace", 
  "OptConsTableSpace", "CreateAsStmt", "WithOidsAs", "OptCreateAs", 
  "CreateAsList", "CreateAsElement", "CreateSeqStmt", "AlterSeqStmt", 
  "OptSeqList", "OptSeqElem", "opt_by", "NumericOnly", "FloatOnly", 
  "IntegerOnly", "CreatePLangStmt", "opt_trusted", "handler_name", 
  "opt_validator", "opt_lancompiler", "DropPLangStmt", "opt_procedural", 
  "CreateTableSpaceStmt", "OptTableSpaceOwner", "DropTableSpaceStmt", 
  "CreateTrigStmt", "TriggerActionTime", "TriggerEvents", 
  "TriggerOneEvent", "TriggerForSpec", "TriggerForOpt", "TriggerForType", 
  "TriggerFuncArgs", "TriggerFuncArg", "OptConstrFromTable", 
  "ConstraintAttributeSpec", "ConstraintDeferrabilitySpec", 
  "ConstraintTimeSpec", "DropTrigStmt", "CreateAssertStmt", 
  "DropAssertStmt", "DefineStmt", "definition", "def_list", "def_elem", 
  "def_arg", "CreateOpClassStmt", "opclass_item_list", "opclass_item", 
  "opt_default", "opt_recheck", "DropOpClassStmt", "DropStmt", 
  "drop_type", "any_name_list", "any_name", "attrs", "TruncateStmt", 
  "CommentStmt", "comment_type", "comment_text", "FetchStmt", 
  "fetch_direction", "from_in", "GrantStmt", "RevokeStmt", "privileges", 
  "privilege_list", "privilege", "privilege_target", "grantee_list", 
  "grantee", "opt_grant_grant_option", "function_with_argtypes_list", 
  "function_with_argtypes", "GrantRoleStmt", "RevokeRoleStmt", 
  "opt_grant_admin_option", "opt_granted_by", "IndexStmt", 
  "index_opt_unique", "access_method_clause", "index_params", 
  "index_elem", "opt_class", "CreateFunctionStmt", "opt_or_replace", 
  "func_args", "func_args_list", "func_arg", "arg_class", "param_name", 
  "func_return", "func_type", "createfunc_opt_list", 
  "common_func_opt_item", "createfunc_opt_item", "func_as", 
  "opt_definition", "AlterFunctionStmt", "alterfunc_opt_list", 
  "opt_restrict", "RemoveFuncStmt", "RemoveAggrStmt", "aggr_argtype", 
  "RemoveOperStmt", "oper_argtypes", "any_operator", "CreateCastStmt", 
  "cast_context", "DropCastStmt", "ReindexStmt", "reindex_type", 
  "opt_force", "RenameStmt", "opt_column", "AlterObjectSchemaStmt", 
  "AlterOwnerStmt", "RuleStmt", "@1", "RuleActionList", "RuleActionMulti", 
  "RuleActionStmt", "RuleActionStmtOrEmpty", "event", "opt_instead", 
  "DropRuleStmt", "NotifyStmt", "ListenStmt", "UnlistenStmt", 
  "TransactionStmt", "opt_transaction", "transaction_mode_item", 
  "transaction_mode_list", "transaction_mode_list_or_empty", "ViewStmt", 
  "LoadStmt", "CreatedbStmt", "createdb_opt_list", "createdb_opt_item", 
  "opt_equal", "AlterDatabaseStmt", "AlterDatabaseSetStmt", 
  "alterdb_opt_list", "alterdb_opt_item", "DropdbStmt", 
  "CreateDomainStmt", "AlterDomainStmt", "opt_as", "CreateConversionStmt", 
  "ClusterStmt", "VacuumStmt", "AnalyzeStmt", "analyze_keyword", 
  "opt_verbose", "opt_full", "opt_freeze", "opt_name_list", "ExplainStmt", 
  "ExplainableStmt", "opt_analyze", "PrepareStmt", "prep_type_clause", 
  "prep_type_list", "PreparableStmt", "ExecuteStmt", 
  "execute_param_clause", "DeallocateStmt", "InsertStmt", "insert_rest", 
  "insert_column_list", "insert_column_item", "DeleteStmt", 
  "using_clause", "LockStmt", "opt_lock", "lock_type", "opt_nowait", 
  "UpdateStmt", "DeclareCursorStmt", "cursor_options", "opt_hold", 
  "SelectStmt", "select_with_parens", "select_no_parens", "select_clause", 
  "simple_select", "into_clause", "OptTempTableName", "opt_table", 
  "opt_all", "opt_distinct", "opt_sort_clause", "sort_clause", 
  "sortby_list", "sortby", "select_limit", "opt_select_limit", 
  "select_limit_value", "select_offset_value", "group_clause", 
  "having_clause", "for_locking_clause", "opt_for_locking_clause", 
  "locked_rels_list", "from_clause", "from_list", "table_ref", 
  "joined_table", "alias_clause", "join_type", "join_outer", "join_qual", 
  "relation_expr", "func_table", "where_clause", "TableFuncElementList", 
  "TableFuncElement", "Typename", "opt_array_bounds", "SimpleTypename", 
  "ConstTypename", "GenericType", "Numeric", "opt_float", "opt_numeric", 
  "opt_decimal", "Bit", "ConstBit", "BitWithLength", "BitWithoutLength", 
  "Character", "ConstCharacter", "CharacterWithLength", 
  "CharacterWithoutLength", "character", "opt_varying", "opt_charset", 
  "ConstDatetime", "ConstInterval", "opt_timezone", "opt_interval", 
  "a_expr", "b_expr", "c_expr", "func_expr", "row", "sub_type", "all_Op", 
  "MathOp", "qual_Op", "qual_all_Op", "subquery_Op", "expr_list", 
  "extract_list", "type_list", "array_expr_list", "array_expr", 
  "extract_arg", "overlay_list", "overlay_placing", "position_list", 
  "substr_list", "substr_from", "substr_for", "trim_list", "in_expr", 
  "case_expr", "when_clause_list", "when_clause", "case_default", 
  "case_arg", "columnref", "indirection_el", "indirection", 
  "opt_indirection", "opt_asymmetric", "target_list", "target_el", 
  "update_target_list", "update_target_el", "insert_target_list", 
  "insert_target_el", "relation_name", "qualified_name_list", 
  "qualified_name", "name_list", "name", "database_name", "access_method", 
  "attr_name", "index_name", "file_name", "func_name", "AexprConst", 
  "Iconst", "Sconst", "RoleId", "SignedIconst", "ColId", "type_name", 
  "function_name", "ColLabel", "unreserved_keyword", "col_name_keyword", 
  "func_name_keyword", "reserved_keyword", "SpecialRuleRelation", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,    61,    60,    62,   601,
      43,    45,    42,    47,    37,    94,   602,    91,    93,    40,
      41,   603,    46,    59,    44,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   366,   367,   368,   368,   369,   369,   369,   369,   369,
     369,   369,   369,   369,   369,   369,   369,   369,   369,   369,
     369,   369,   369,   369,   369,   369,   369,   369,   369,   369,
     369,   369,   369,   369,   369,   369,   369,   369,   369,   369,
     369,   369,   369,   369,   369,   369,   369,   369,   369,   369,
     369,   369,   369,   369,   369,   369,   369,   369,   369,   369,
     369,   369,   369,   369,   369,   369,   369,   369,   369,   369,
     369,   369,   369,   369,   369,   369,   369,   369,   369,   369,
     369,   369,   369,   369,   369,   369,   369,   369,   369,   370,
     371,   371,   372,   372,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   373,   374,   375,   376,
     376,   377,   378,   378,   379,   380,   381,   382,   383,   383,
     384,   385,   385,   386,   386,   387,   387,   388,   388,   388,
     388,   388,   388,   389,   389,   389,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   391,   391,   392,   392,   393,
     393,   394,   394,   394,   395,   395,   395,   395,   396,   396,
     396,   396,   397,   397,   397,   397,   397,   397,   397,   398,
     398,   398,   399,   399,   400,   400,   400,   400,   400,   401,
     401,   401,   401,   401,   402,   403,   403,   404,   404,   405,
     406,   406,   407,   407,   408,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   409,   409,   410,   410,   411,
     411,   412,   412,   412,   413,   413,   414,   415,   416,   416,
     417,   417,   417,   418,   418,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   420,   420,   421,   421,   422,
     422,   423,   423,   424,   424,   425,   425,   425,   425,   425,
     425,   425,   426,   426,   427,   427,   428,   428,   428,   429,
     430,   430,   431,   431,   431,   432,   432,   432,   432,   432,
     432,   432,   433,   433,   433,   433,   434,   435,   435,   435,
     436,   436,   437,   437,   437,   437,   438,   438,   439,   439,
     440,   441,   441,   441,   441,   442,   442,   442,   442,   442,
     443,   444,   445,   445,   445,   445,   445,   446,   446,   447,
     447,   447,   448,   448,   448,   448,   449,   449,   450,   450,
     451,   452,   452,   452,   453,   453,   454,   454,   455,   456,
     457,   458,   458,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   460,   460,   461,   461,   462,   462,   463,
     464,   464,   465,   465,   466,   466,   467,   467,   468,   468,
     469,   470,   470,   471,   472,   472,   473,   474,   474,   475,
     475,   476,   476,   476,   477,   477,   477,   478,   478,   479,
     479,   480,   480,   481,   481,   481,   482,   482,   482,   482,
     482,   482,   483,   483,   484,   484,   484,   484,   484,   485,
     485,   486,   486,   487,   488,   489,   490,   490,   490,   490,
     491,   492,   492,   493,   493,   494,   494,   494,   494,   495,
     496,   496,   497,   497,   497,   497,   498,   498,   499,   499,
     500,   501,   502,   502,   502,   502,   502,   502,   502,   502,
     503,   503,   504,   504,   505,   505,   506,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   509,
     509,   510,   510,   510,   510,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     512,   512,   513,   514,   514,   515,   515,   515,   516,   516,
     517,   517,   517,   517,   518,   518,   518,   518,   518,   518,
     518,   519,   519,   520,   520,   521,   521,   522,   522,   523,
     524,   525,   525,   526,   526,   527,   527,   528,   529,   529,
     530,   530,   531,   531,   532,   532,   532,   533,   533,   533,
     534,   534,   535,   535,   536,   536,   537,   537,   538,   538,
     538,   538,   538,   539,   539,   539,   539,   540,   541,   542,
     542,   543,   543,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   545,   545,   545,   546,   546,   547,   547,
     548,   549,   549,   550,   550,   551,   552,   553,   553,   554,
     555,   555,   555,   555,   556,   556,   557,   557,   558,   558,
     558,   559,   560,   560,   560,   561,   561,   562,   562,   563,
     563,   563,   563,   563,   563,   563,   563,   563,   563,   563,
     563,   563,   563,   563,   564,   564,   565,   565,   565,   565,
     565,   565,   566,   566,   566,   566,   566,   566,   566,   566,
     566,   566,   568,   567,   569,   569,   569,   570,   570,   571,
     571,   571,   571,   571,   572,   572,   573,   573,   573,   573,
     574,   574,   574,   575,   576,   577,   578,   578,   579,   579,
     579,   579,   579,   579,   579,   579,   579,   579,   579,   579,
     579,   579,   580,   580,   580,   581,   581,   581,   582,   582,
     582,   583,   583,   584,   584,   585,   586,   587,   587,   588,
     588,   588,   588,   588,   588,   588,   588,   588,   588,   588,
     588,   589,   589,   590,   591,   591,   592,   592,   593,   594,
     595,   596,   596,   596,   596,   596,   597,   597,   598,   599,
     599,   599,   600,   600,   600,   601,   601,   602,   602,   603,
     603,   604,   604,   605,   605,   606,   606,   607,   608,   608,
     608,   608,   608,   608,   609,   609,   610,   611,   611,   612,
     612,   613,   613,   613,   613,   614,   614,   615,   615,   616,
     616,   617,   618,   618,   618,   618,   618,   619,   619,   620,
     621,   622,   622,   623,   624,   624,   625,   625,   625,   625,
     625,   625,   625,   625,   626,   626,   627,   628,   629,   629,
     629,   629,   629,   630,   630,   630,   631,   631,   632,   632,
     633,   633,   633,   633,   634,   634,   635,   635,   635,   635,
     636,   636,   637,   637,   637,   637,   637,   637,   637,   637,
     638,   638,   639,   639,   639,   640,   640,   640,   640,   641,
     641,   642,   643,   643,   644,   644,   644,   644,   645,   645,
     645,   645,   645,   646,   646,   647,   647,   648,   649,   649,
     650,   650,   651,   651,   651,   652,   652,   653,   653,   654,
     654,   655,   655,   656,   656,   656,   656,   656,   656,   656,
     656,   656,   656,   656,   657,   657,   657,   657,   657,   657,
     657,   658,   658,   658,   658,   659,   659,   659,   659,   660,
     660,   661,   661,   662,   662,   662,   662,   663,   664,   664,
     665,   665,   666,   667,   667,   667,   667,   668,   668,   668,
     669,   669,   669,   669,   669,   669,   669,   669,   670,   670,
     670,   670,   670,   671,   672,   672,   672,   672,   672,   672,
     672,   672,   672,   672,   672,   673,   673,   674,   674,   674,
     675,   675,   675,   676,   676,   677,   677,   678,   679,   680,
     680,   681,   681,   682,   683,   684,   684,   684,   684,   684,
     684,   685,   685,   686,   686,   687,   687,   687,   687,   688,
     689,   689,   689,   690,   690,   690,   690,   690,   690,   690,
     690,   690,   690,   690,   690,   690,   690,   691,   691,   691,
     691,   691,   691,   691,   691,   691,   691,   691,   691,   691,
     691,   691,   691,   691,   691,   691,   691,   691,   691,   691,
     691,   691,   691,   691,   691,   691,   691,   691,   691,   691,
     691,   691,   691,   691,   691,   691,   691,   691,   691,   691,
     691,   691,   691,   691,   691,   691,   691,   691,   691,   691,
     691,   691,   692,   692,   692,   692,   692,   692,   692,   692,
     692,   692,   692,   692,   692,   692,   692,   692,   692,   692,
     692,   693,   693,   693,   693,   693,   693,   693,   693,   693,
     693,   693,   694,   694,   694,   694,   694,   694,   694,   694,
     694,   694,   694,   694,   694,   694,   694,   694,   694,   694,
     694,   694,   694,   694,   694,   694,   694,   694,   694,   694,
     694,   694,   694,   694,   694,   694,   695,   695,   695,   696,
     696,   696,   697,   697,   698,   698,   698,   698,   698,   698,
     698,   698,   698,   699,   699,   700,   700,   701,   701,   701,
     701,   701,   701,   702,   702,   703,   703,   704,   704,   705,
     705,   706,   706,   707,   707,   707,   707,   707,   707,   707,
     707,   708,   708,   709,   710,   710,   711,   711,   711,   711,
     711,   711,   712,   713,   714,   714,   714,   715,   715,   716,
     717,   717,   718,   719,   719,   720,   720,   721,   721,   722,
     722,   722,   722,   723,   723,   724,   724,   725,   725,   726,
     726,   727,   727,   727,   728,   728,   729,   729,   730,   730,
     731,   731,   732,   732,   733,   733,   734,   734,   735,   735,
     736,   737,   738,   739,   740,   741,   742,   742,   743,   743,
     743,   743,   743,   743,   743,   743,   743,   743,   743,   744,
     745,   746,   747,   747,   748,   748,   748,   749,   749,   750,
     750,   750,   751,   751,   751,   751,   751,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   752,   752,   752,   752,   752,   752,   752,   752,   752,
     752,   753,   753,   753,   753,   753,   753,   753,   753,   753,
     753,   753,   753,   753,   753,   753,   753,   753,   753,   753,
     753,   753,   753,   753,   753,   753,   753,   753,   753,   753,
     753,   753,   753,   753,   753,   753,   753,   753,   754,   754,
     754,   754,   754,   754,   754,   754,   754,   754,   754,   754,
     754,   754,   754,   754,   754,   754,   754,   754,   755,   755,
     755,   755,   755,   755,   755,   755,   755,   755,   755,   755,
     755,   755,   755,   755,   755,   755,   755,   755,   755,   755,
     755,   755,   755,   755,   755,   755,   755,   755,   755,   755,
     755,   755,   755,   755,   755,   755,   755,   755,   755,   755,
     755,   755,   755,   755,   755,   755,   755,   755,   755,   755,
     755,   755,   755,   755,   755,   755,   755,   755,   755,   755,
     755,   755,   755,   755,   755,   755,   755,   755,   755,   755,
     755,   756,   756
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     5,
       1,     0,     2,     0,     2,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     2,     2,     2,     2,     3,     3,     5,     5,     5,
       4,     5,     5,     4,     3,     3,     5,     6,     1,     1,
       3,     6,     4,     1,     0,     2,     0,     1,     1,     1,
       1,     1,     1,     2,     3,     3,     3,     3,     3,     2,
       5,     2,     2,     3,     3,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     6,     1,     1,     1,     1,
       1,     0,     1,     1,     2,     3,     4,     3,     2,     2,
       3,     4,     3,     2,     4,     1,     1,     1,     1,     1,
       4,     4,     1,     3,     3,     4,     6,     6,     6,     6,
       4,     6,     2,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     3,     3,     3,     3,
       2,     1,     1,     0,     2,     0,     2,    10,     1,     1,
       1,     1,     1,     2,     0,     1,     1,     3,     3,     1,
       1,     3,     3,     3,     4,     1,     0,     2,     0,     3,
       0,     1,     0,    11,    12,     1,     1,     2,     2,     2,
       2,     0,     1,     0,     1,     3,     1,     1,     1,     3,
       2,     0,     3,     1,     1,     2,     1,     2,     3,     4,
       2,     5,     1,     2,     2,     2,     3,     2,     2,     0,
       3,     1,     4,     5,     6,    11,     3,     0,     1,     3,
       1,     2,     2,     2,     0,     1,     1,     2,     2,     0,
       3,     3,     2,     1,     1,     2,     2,     4,     0,     2,
       2,     0,     3,     4,     4,     0,     2,     0,     4,     0,
       7,     3,     3,     1,     3,     0,     1,     3,     1,     5,
       4,     2,     0,     2,     1,     2,     3,     2,     2,     2,
       2,     3,     3,     1,     0,     1,     1,     1,     2,     1,
       5,     9,     1,     0,     1,     2,     2,     0,     2,     0,
       5,     1,     0,     6,     2,     0,     3,    14,    19,     1,
       1,     1,     3,     5,     1,     1,     1,     3,     0,     1,
       0,     1,     1,     1,     3,     0,     1,     1,     1,     1,
       1,     1,     2,     0,     1,     2,     1,     2,     0,     2,
       1,     2,     2,     6,     8,     4,     4,     4,     4,     7,
       3,     1,     3,     3,     1,     1,     1,     1,     1,    12,
       1,     3,     4,     7,     4,     2,     1,     0,     1,     0,
       7,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     2,     2,     3,     3,     6,     9,     7,
       9,     8,     8,     6,     8,     9,     7,    10,     7,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     2,     4,     2,     0,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     2,     2,     1,     2,     2,
       1,     1,     7,     7,    10,     1,     1,     2,     1,     3,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     1,     3,     1,     2,     3,     0,     1,     3,     2,
       6,     6,     9,     3,     0,     3,     0,    12,     1,     0,
       2,     0,     1,     3,     2,     2,     4,     1,     2,     0,
       9,     7,     2,     0,     3,     2,     1,     3,     3,     3,
       2,     2,     1,     1,     1,     1,     2,     1,     1,     1,
       4,     1,     2,     4,     5,     1,     1,     1,     1,     3,
       3,     2,     2,     2,     2,     1,     1,     3,     2,     0,
       5,     1,     2,     1,     0,     5,     7,     1,     1,     7,
       1,     3,     3,     3,     1,     3,    11,    10,     2,     2,
       0,     8,     4,     4,     4,     1,     1,     1,     0,     9,
       6,     6,     7,     6,     6,     9,     6,     6,     6,     8,
       8,     6,     6,     6,     1,     0,     9,     6,     7,     6,
       6,     6,     9,     6,     6,     6,     7,     9,     9,     6,
       6,     6,     0,    14,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     0,     6,     2,     2,     2,     2,     2,     3,
       3,     2,     2,     2,     2,     3,     2,     5,     4,     3,
       3,     3,     1,     1,     0,     3,     2,     2,     1,     3,
       2,     1,     0,     7,     9,     2,     5,     2,     0,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       3,     1,     0,     5,     5,     4,     2,     0,     4,     3,
       6,     4,     6,     6,     5,     7,     1,     0,    10,     4,
       2,     1,     4,     5,     5,     2,     4,     1,     1,     1,
       0,     1,     0,     1,     0,     3,     0,     4,     1,     1,
       1,     1,     1,     1,     1,     0,     5,     3,     0,     1,
       3,     1,     1,     1,     1,     3,     9,     3,     0,     2,
       3,     4,     4,     2,     1,     7,     4,     1,     3,     2,
       5,     2,     0,     5,     3,     0,     2,     2,     2,     3,
       1,     3,     1,     2,     1,     0,     6,     7,     0,     3,
       2,     2,     2,     0,     2,     2,     1,     1,     3,     3,
       1,     2,     4,     4,     1,     1,     8,     4,     4,     4,
       2,     0,     3,     3,     4,     4,     4,     4,     2,     1,
       1,     0,     1,     1,     0,     1,     5,     1,     0,     1,
       0,     3,     1,     3,     3,     2,     2,     1,     4,     4,
       2,     2,     4,     1,     0,     1,     1,     1,     3,     0,
       2,     0,     4,     4,     3,     1,     0,     2,     0,     2,
       0,     1,     3,     1,     2,     1,     2,     5,     6,     5,
       1,     2,     1,     4,     3,     4,     3,     5,     4,     5,
       4,     5,     2,     4,     1,     2,     2,     2,     1,     1,
       0,     4,     2,     1,     2,     2,     4,     1,     2,     0,
       1,     3,     2,     2,     3,     5,     6,     3,     4,     0,
       1,     1,     1,     1,     1,     2,     5,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     1,     3,     0,     5,     3,     0,
       5,     3,     0,     1,     1,     1,     1,     5,     2,     1,
       1,     1,     1,     5,     2,     2,     2,     1,     3,     3,
       2,     1,     0,     3,     0,     5,     2,     5,     2,     1,
       3,     3,     0,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     0,     1,     3,     5,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     3,     3,     2,     3,     5,     4,
       6,     3,     5,     4,     6,     4,     6,     5,     7,     2,
       3,     2,     4,     3,     3,     4,     3,     4,     3,     4,
       5,     6,     7,     6,     7,     6,     7,     3,     4,     4,
       6,     2,     1,     3,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     5,     6,
       7,     1,     1,     2,     4,     1,     1,     1,     2,     2,
       2,     1,     3,     4,     5,     5,     4,     1,     1,     4,
       1,     4,     1,     4,     1,     4,     1,     1,     1,     1,
       6,     4,     4,     4,     4,     6,     5,     5,     5,     4,
       6,     4,     6,     4,     4,     4,     4,     3,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     4,     1,     4,     1,
       2,     1,     2,     1,     3,     3,     0,     3,     1,     1,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     3,     2,     3,     0,     3,     3,     2,     2,
       1,     0,     2,     2,     3,     2,     1,     1,     3,     5,
       1,     2,     4,     2,     0,     1,     0,     1,     2,     2,
       2,     3,     5,     1,     2,     0,     2,     1,     0,     1,
       3,     3,     1,     1,     1,     3,     4,     4,     1,     3,
       1,     1,     1,     1,     1,     3,     1,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     2,     3,     6,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
      88,   704,     0,   758,   757,   704,   199,     0,   751,     0,
     704,   256,   271,     0,     0,     0,   382,   704,     0,   775,
     495,     0,     0,     0,     0,   851,   495,     0,     0,     0,
       0,     0,     0,   704,     0,   858,     0,     0,     0,   851,
       0,     0,   762,     0,     0,     2,     4,    39,    40,    15,
      14,    17,    16,    55,    56,    31,     9,    48,    34,    85,
      86,    84,    23,    19,    13,    20,    24,    36,    25,    35,
      12,    33,    50,    37,    53,    38,    54,    26,    46,    44,
      32,    49,    52,    80,    22,    60,    61,    75,    62,    76,
      63,    30,     8,    72,    71,    73,    27,    47,    70,    74,
      10,    11,    77,    51,    68,    65,    81,    79,    87,    66,
      41,     5,     6,    57,    29,     7,    28,    21,    83,    18,
     760,    59,    69,    58,    42,    64,    45,    67,    82,    43,
      78,   835,   826,   860,   834,   703,   702,   688,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   712,  1277,  1278,  1279,  1280,
    1281,  1282,  1283,  1284,  1285,  1286,  1287,  1288,  1289,  1290,
    1291,  1292,  1481,  1482,  1483,  1293,  1294,  1295,  1296,  1297,
    1484,  1485,  1298,  1299,  1300,  1301,  1302,  1486,  1303,  1304,
    1305,  1306,  1307,  1308,  1487,  1309,  1310,  1311,  1312,  1313,
    1314,  1315,  1316,  1317,  1318,  1488,  1489,  1319,  1320,  1321,
    1322,  1323,  1324,  1325,  1326,  1327,  1328,  1329,  1330,  1331,
    1332,  1333,  1334,  1335,  1336,  1337,  1490,  1338,  1339,  1491,
    1340,  1341,  1492,  1342,  1343,  1344,  1345,  1346,  1493,  1347,
    1348,  1349,  1350,  1351,  1352,  1353,  1354,  1355,  1356,  1357,
    1358,  1494,  1359,  1360,  1361,  1362,  1495,  1496,  1497,  1363,
    1364,  1365,  1366,  1367,  1368,  1369,  1498,  1370,  1371,  1372,
    1373,  1374,  1375,  1376,  1377,  1378,  1379,  1380,  1381,  1382,
    1383,  1384,  1499,  1500,  1385,  1386,  1387,  1388,  1389,  1390,
    1391,  1501,  1392,  1393,  1394,  1395,  1502,  1503,  1396,  1397,
    1398,  1399,  1400,  1504,  1505,  1401,  1402,  1403,  1506,  1507,
    1406,  1404,  1405,  1407,  1408,  1409,  1410,  1411,  1412,  1508,
    1413,  1414,  1415,  1416,  1417,  1418,  1419,  1420,  1421,  1422,
    1423,  1424,  1425,  1426,  1509,  1427,  1428,  1429,  1430,  1431,
    1432,  1433,  1434,  1435,  1436,  1437,  1510,  1438,  1439,  1440,
    1511,  1441,  1442,  1443,  1444,  1445,  1446,  1447,  1451,  1512,
    1448,  1449,  1450,  1452,  1453,  1454,  1455,  1513,  1514,  1456,
    1457,  1515,  1458,  1516,  1459,  1460,  1461,  1462,  1463,  1464,
    1465,  1466,  1467,  1468,  1469,  1470,  1471,  1517,  1472,  1473,
    1474,  1475,  1476,  1477,  1478,  1479,  1480,  1264,   236,  1240,
    1265,  1266,  1612,  1611,  1236,   750,     0,  1233,  1232,   382,
       0,   691,   255,     0,     0,     0,     0,     0,     0,   446,
       0,     0,     0,     0,     0,     0,     0,   134,     0,   266,
     265,     0,   372,     0,   548,     0,     0,   382,     0,     0,
       0,  1404,   789,   818,     0,     0,     0,     0,   458,     0,
     457,     0,     0,   455,     0,   381,     0,     0,   459,   453,
     452,     0,     0,   456,     0,   454,     0,     0,   692,   788,
     774,   760,  1278,   503,   507,   498,   504,   499,   496,   497,
    1415,  1262,     0,     0,   492,   502,   516,   522,   521,   520,
       0,   515,   518,   523,     0,   685,  1233,  1260,   715,  1245,
     850,     0,     0,   494,   684,  1457,   778,     0,   625,     0,
     626,     0,  1429,   696,   193,  1436,  1513,  1457,   189,   155,
    1282,     0,     0,   515,     0,   693,   694,   857,   855,     0,
    1307,  1373,  1384,  1425,  1436,  1513,  1457,   143,     0,   188,
    1436,  1513,  1457,   184,   712,     0,   687,   686,     0,     0,
     923,   761,   764,   835,     0,     1,    88,   759,   755,   854,
     854,     0,   854,     0,   831,  1518,  1519,  1520,  1521,  1522,
    1523,  1524,  1525,  1526,  1527,  1528,  1529,  1530,  1531,  1532,
    1533,  1534,  1535,  1536,  1537,  1264,     0,     0,  1246,  1265,
    1271,     0,   462,    91,  1241,     0,     0,     0,     0,  1261,
       0,     0,  1300,  1142,  1152,  1150,  1151,  1144,  1145,  1146,
    1147,  1148,  1149,     0,   614,  1143,     0,    91,     0,     0,
     352,     0,     0,     0,     0,    91,     0,     0,   708,   711,
     689,     0,     0,  1213,  1237,     0,     0,     0,   479,     0,
     488,   480,   485,     0,   482,     0,     0,     0,   481,   483,
     484,     0,   486,   487,     0,     0,   700,   307,     0,     0,
       0,     0,    91,   747,   270,   269,    91,   268,   267,  1300,
       0,   562,    91,     0,   136,   385,     0,     0,    91,     0,
       0,     0,     0,     0,     0,     0,     0,   790,     0,   802,
       0,   233,     0,   739,     0,   130,  1238,  1300,     0,   124,
       0,   386,     0,   125,     0,   233,   460,     0,   785,     0,
     500,   509,   508,   506,   505,   501,  1263,   510,   511,     0,
     517,     0,     0,     0,     0,   805,  1234,     0,   699,     0,
       0,   628,   628,   628,   695,   192,   190,     0,     0,     0,
       0,     0,     0,   701,     0,     0,     0,  1481,  1482,  1483,
    1206,     0,  1484,  1485,  1486,  1487,  1107,  1116,  1108,  1110,
    1117,  1488,  1489,  1328,  1490,  1491,  1257,  1492,  1493,  1495,
    1496,  1497,  1498,  1112,  1114,  1499,  1500,     0,  1258,  1502,
    1503,  1399,  1505,  1506,  1508,  1509,  1118,  1511,  1512,  1513,
    1514,  1515,  1516,  1256,     0,  1119,  1517,  1264,  1249,  1251,
    1252,  1153,  1259,  1215,     0,     0,  1223,     0,  1097,     0,
     948,   949,   950,   975,   976,   951,   981,   982,   994,   952,
       0,  1222,  1017,  1096,  1101,     0,  1095,  1091,   841,  1219,
    1207,     0,  1092,  1248,  1250,   953,  1265,   195,     0,   196,
    1436,   144,   180,   151,   179,   183,   152,   182,     0,  1298,
     145,     0,   149,     0,     0,   187,   185,     0,   690,   466,
       0,   925,     0,   924,   763,   760,   829,   828,     3,   766,
     852,   853,     0,     0,     0,     0,     0,     0,     0,   886,
     874,  1247,     0,     0,     0,     0,   463,     0,     0,     0,
      90,   737,   735,     0,     0,     0,     0,   741,     0,     0,
     586,     0,     0,   587,   585,   588,   601,   604,     0,   539,
     128,   129,     0,     0,     0,     0,     0,   201,   225,     0,
       0,     0,     0,     0,     0,    93,   120,     0,     0,     0,
     350,   645,   645,     0,     0,     0,   645,     0,   645,     0,
     200,   202,   224,     0,     0,     0,     0,     0,     0,     0,
      93,   123,     0,   706,   707,     0,   710,     0,  1538,  1539,
    1540,  1541,  1542,  1543,  1544,  1545,  1546,  1547,  1548,  1549,
    1550,  1551,  1552,  1553,  1554,  1555,  1556,  1557,  1558,  1559,
    1560,  1561,  1562,  1563,  1564,  1565,  1566,  1567,  1568,  1569,
    1570,  1571,  1572,  1573,  1574,  1575,  1576,  1577,  1578,  1579,
    1580,  1581,  1582,  1583,  1584,  1585,  1586,  1587,  1588,  1589,
    1590,  1591,  1592,  1593,  1594,  1595,  1596,  1597,  1598,  1599,
    1600,  1601,  1602,  1603,  1604,  1605,  1606,  1607,  1608,  1609,
    1610,  1272,  1210,  1209,  1243,  1273,  1274,  1275,  1276,  1214,
     749,     0,     0,     0,     0,     0,  1300,     0,     0,     0,
       0,     0,     0,   258,     0,   426,     0,   957,   992,   964,
     992,   992,   972,   972,   966,   954,   955,   999,     0,   992,
     969,   958,     0,   956,  1002,  1002,   987,  1267,     0,   939,
     940,   941,   942,   973,   974,   943,   979,   980,   944,  1016,
     953,  1268,     0,   718,   746,     0,    93,   447,   427,     0,
      93,     0,   132,     0,     0,   390,   389,     0,     0,   428,
      93,   352,   345,   307,     0,     0,     0,  1244,     0,     0,
     821,   823,   822,     0,   820,     0,   929,     0,   231,   232,
     425,     0,   233,     0,     0,     0,     0,     0,   233,     0,
     451,  1163,     0,   271,   767,   773,   769,   771,   770,   772,
     768,   491,  1316,  1344,  1367,  1430,     0,  1452,     0,   524,
     544,   519,     0,     0,     0,   791,   794,     0,     0,   815,
     493,     0,   779,     0,   627,   624,   623,   622,   191,   156,
       0,     0,     0,   546,  1429,   698,     0,     0,  1099,  1100,
     991,   978,  1205,     0,     0,   986,   985,     0,     0,     0,
       0,     0,   962,   961,   960,  1098,  1166,     0,   959,     0,
       0,     0,     0,   992,   992,   990,  1036,     0,     0,   963,
       0,     0,  1185,     0,  1191,     0,     0,     0,   998,     0,
     996,     0,     0,  1071,  1093,  1020,  1021,  1097,  1163,     0,
    1253,     0,     0,   984,     0,  1016,     0,     0,     0,  1218,
    1161,     0,     0,  1049,  1159,     0,  1051,     0,     0,     0,
    1153,  1152,  1150,  1151,  1144,  1145,  1146,  1147,  1148,  1149,
       0,  1157,  1033,     0,     0,  1032,     0,     0,   890,  1208,
       0,   197,   198,   194,     0,   154,   153,     0,   177,   178,
     173,   367,     0,   148,   176,   365,   366,     0,   172,   369,
     158,   169,   171,   170,   168,   146,   157,   159,   161,   162,
     163,   147,   186,     0,   890,  1224,  1215,   752,     0,   756,
     835,   839,   834,   838,   861,   862,   867,   837,     0,   888,
     888,   876,   870,   875,   871,   877,   885,   833,   873,   832,
     608,     0,   607,     0,     0,   464,     0,     0,     0,   734,
     733,     0,     0,     0,     0,     0,   744,   301,     0,   230,
       0,     0,     0,     0,     0,     0,     0,     0,   591,   592,
     603,   602,   600,   573,   575,   574,  1269,   565,     0,   566,
       0,     0,   572,   579,   953,   577,  1270,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     610,   615,     0,   119,   118,     0,     0,     0,     0,   354,
     364,     0,     0,     0,    91,    91,   351,   644,   212,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   121,
       0,     0,   167,   705,   709,  1211,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     308,   310,     0,     0,     0,   431,   434,     0,   939,     0,
       0,   933,  1005,  1006,  1007,  1004,  1008,  1003,     0,   945,
     947,     0,   716,   281,   126,     0,     0,    89,   136,   271,
       0,   135,   137,   139,   140,   141,   138,   142,   384,     0,
     395,   394,   396,     0,   391,     0,   117,   349,     0,   273,
       0,     0,   370,     0,     0,     0,   662,     0,     0,     0,
     819,     0,   900,   801,   891,   902,   893,   895,   927,  1236,
       0,   800,     0,     0,   605,  1239,     0,     0,   233,   233,
     380,   461,   787,     0,     0,   527,   526,   537,     0,   528,
     529,   525,   530,     0,     0,   546,   793,     0,     0,   797,
    1215,     0,   812,     0,   810,     0,  1235,   814,   803,   777,
       0,   776,   782,   784,   783,   781,     0,     0,   515,     0,
       0,   233,   697,     0,     0,     0,  1169,     0,     0,  1204,
    1200,     0,     0,  1163,     0,     0,     0,     0,  1176,  1177,
    1178,  1175,  1179,  1174,  1173,  1180,     0,     0,     0,     0,
       0,     0,     0,   989,   988,     0,     0,     0,     0,     0,
       0,     0,     0,  1072,  1101,     0,     0,  1137,     0,  1163,
    1190,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1163,  1196,     0,  1216,  1215,     0,     0,     0,     0,
    1254,  1034,  1221,     0,  1217,     0,     0,  1041,     0,  1197,
    1067,     0,  1056,     0,  1050,     0,  1054,  1058,  1037,  1218,
    1162,     0,  1160,     0,     0,  1035,     0,  1030,  1028,  1029,
    1022,  1023,  1024,  1025,  1026,  1027,  1018,  1031,  1141,  1139,
    1140,     0,     0,     0,  1053,  1345,  1373,     0,   851,   851,
     840,   849,  1220,     0,   929,     0,     0,     0,  1102,     0,
       0,   368,     0,  1016,     0,   926,     0,   929,     0,   754,
     753,     0,     0,   865,   866,     0,   884,     0,   815,   815,
       0,     0,     0,     0,   653,   630,   465,   654,   631,     0,
     736,     0,     0,     0,     0,     0,   233,   742,   655,   229,
     743,   647,     0,   589,   590,     0,   576,   564,     0,     0,
     571,     0,   570,   947,     0,     0,     0,   633,   127,   227,
     638,   228,   226,   634,     0,  1242,     0,     0,     0,   641,
       0,     0,   101,   103,   105,     0,     0,    99,   107,   102,
     104,   106,   100,   108,    98,     0,     0,    97,     0,     0,
       0,     0,    92,   659,   636,   649,   353,   363,     0,   357,
     358,   355,   359,   360,     0,     0,   204,     0,     0,   216,
     215,   222,   223,   221,   233,   233,   219,   220,   218,   637,
       0,   650,   217,   214,     0,   203,   661,   643,     0,   660,
     651,   642,   165,   164,   166,     0,     0,     0,     0,     0,
       0,     0,     0,   490,   473,   489,     0,     0,     0,   467,
     306,     0,   257,   238,   239,     0,   430,     0,     0,     0,
       0,   934,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   732,   732,   732,   732,   732,   717,   740,     0,
     307,   131,     0,     0,   383,     0,     0,     0,   930,     0,
       0,     0,     0,   272,   274,   276,   277,   278,     0,   346,
     348,   343,     0,     0,     0,     0,     0,     0,   551,     0,
       0,     0,   599,   595,   581,     0,   824,   825,     0,   900,
       0,   902,     0,   901,   914,     0,     0,   920,   918,     0,
     920,     0,   920,     0,     0,   894,     0,   896,   914,  1237,
     928,   233,     0,   233,   233,   683,   423,  1164,     0,     0,
     539,     0,   536,   531,   533,     0,   540,  1231,  1230,     0,
    1228,     0,     0,   799,   813,   806,   808,   807,     0,     0,
     804,   780,     0,     0,   233,     0,   541,   856,  1171,  1172,
       0,     0,     0,     0,  1201,     0,     0,  1133,     0,  1131,
    1109,  1111,   971,     0,  1121,     0,   965,  1134,  1135,  1113,
    1115,     0,   968,     0,  1154,     0,     0,  1122,  1074,  1075,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1087,  1086,  1123,  1136,     0,     0,  1188,
    1189,  1124,  1000,  1001,  1002,  1002,     0,     0,  1195,     0,
       0,     0,  1129,  1094,  1164,   993,   994,     0,     0,     0,
       0,     0,     0,     0,  1057,  1052,     0,  1055,  1059,     0,
       0,     0,     0,  1043,  1068,  1039,     0,     0,  1045,     0,
    1069,   851,   851,   851,   851,   848,     0,     0,   889,   879,
       0,     0,  1106,  1103,   150,     0,   174,   160,  1225,   816,
       0,   765,   863,     0,  1155,   864,   887,   883,   882,   868,
     872,   869,     0,     0,     0,   732,     0,   300,     0,     0,
       0,   745,   583,     0,   567,   568,   569,     0,   656,   632,
     648,     0,     0,   612,     0,   613,   611,   113,     0,     0,
       0,     0,    94,   114,   112,     0,   111,     0,   356,   362,
     361,   281,     0,     0,     0,   205,   213,   210,     0,     0,
    1212,     0,     0,     0,   469,   476,     0,     0,     0,     0,
     478,   309,   241,   242,   260,   240,   432,  1399,  1145,   437,
     433,   435,   436,   438,   418,     0,     0,     0,   937,     0,
    1010,  1011,  1012,  1013,  1014,  1015,  1009,  1016,     0,   732,
     731,     0,     0,     0,     0,     0,     0,     0,     0,   292,
       0,     0,   286,     0,     0,   339,   280,   283,   284,     0,
       0,   271,     0,   398,   392,   429,     0,   932,   273,   299,
     328,     0,   344,     0,     0,     0,     0,   340,   713,   377,
     374,     0,     0,     0,   593,   596,   594,     0,   578,     0,
     582,   561,     0,   817,   904,   912,     0,   892,     0,   919,
     915,     0,   916,     0,     0,   917,   906,     0,     0,   912,
       0,   606,   233,   450,   609,   345,   538,   534,     0,     0,
     512,   543,   792,     0,     0,   796,   798,   811,   809,   546,
       0,   513,   545,  1170,   977,     0,  1203,  1199,     0,     0,
       0,  1165,     0,     0,  1183,  1182,  1184,     0,     0,     0,
    1084,  1082,  1083,  1076,  1077,  1078,  1079,  1080,  1081,  1073,
    1085,  1193,  1192,  1186,  1187,   997,   995,     0,  1126,  1127,
    1128,  1194,  1138,   983,  1016,  1019,     0,     0,  1042,  1198,
    1060,     0,  1168,     0,  1038,     0,     0,     0,     0,  1047,
    1154,     0,     0,     0,     0,     0,     0,   843,   842,     0,
     881,  1104,  1105,     0,  1227,  1226,     0,     0,     0,     0,
       0,   302,     0,     0,   339,   584,   580,     0,     0,     0,
     109,    95,   116,   115,    96,   110,   279,     0,     0,     0,
       0,   235,   639,   640,     0,     0,   471,     0,     0,   472,
     474,   261,    91,     0,   420,     0,     0,   424,   414,   416,
       0,     0,     0,   935,   938,   946,   413,     0,   727,   726,
     725,   722,   721,   730,   729,   720,   719,   724,   723,     0,
       0,   290,   294,   295,   293,   285,   339,   307,     0,   287,
       0,     0,     0,   400,     0,     0,   931,     0,     0,     0,
     296,     0,   331,   275,   347,   348,   788,   341,   342,     0,
     379,   375,     0,   550,     0,     0,   599,   598,   678,   679,
     676,   677,     0,   903,     0,     0,   905,     0,     0,   908,
     910,     0,     0,     0,     0,     0,  1240,   621,     0,     0,
       0,   532,  1229,     0,   233,     0,  1202,  1120,  1130,   970,
    1132,   967,  1181,     0,     0,     0,  1125,  1255,  1065,  1063,
       0,  1061,     0,     0,     0,  1044,  1040,     0,  1046,  1070,
     847,   846,   845,   844,     0,     0,   836,  1016,     0,   652,
     629,   646,   738,     0,   339,   303,   658,   635,   657,   206,
     207,   208,   209,     0,   211,   468,     0,   475,   470,   244,
       0,   422,   421,   419,   415,   417,   936,     0,   620,     0,
     418,   728,     0,     0,   282,   288,   314,     0,     0,   714,
     273,   399,     0,     0,   393,   331,   298,   297,     0,     0,
       0,   335,   786,   376,     0,   371,     0,     0,     0,   552,
     559,   559,   597,   560,     0,     0,   913,   922,     0,   909,
     907,   897,     0,   899,     0,   535,     0,   542,   233,  1088,
       0,     0,  1062,  1167,  1066,  1064,  1048,   878,   880,   175,
    1156,     0,   304,   234,   477,   237,   259,   620,     0,   617,
     412,     0,   289,     0,   319,     0,     0,   401,   402,   397,
       0,   335,     0,   329,   330,     0,   337,   378,   748,     0,
     337,     0,     0,   557,   555,   554,   929,   911,     0,   898,
     795,   514,     0,  1089,   307,   245,   249,   747,   747,     0,
     250,   747,   246,   747,   243,   616,   619,   618,     0,   311,
     312,   313,     0,   291,   315,   316,   338,     0,     0,   337,
     327,     0,     0,   263,   559,   929,   553,   558,     0,   921,
    1090,   314,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   317,     0,   318,     0,     0,     0,   439,   440,
     405,   264,     0,   332,     0,   336,   556,   547,   682,   319,
     247,   252,     0,   253,   248,   251,     0,   324,     0,   323,
       0,   321,   320,     0,     0,   445,     0,   407,   409,   410,
     406,     0,   403,   408,   411,   333,   334,   681,   680,     0,
     418,   254,     0,   322,   326,   325,     0,   449,   441,   387,
       0,   664,   675,   663,   665,   673,   670,   672,   671,   669,
     305,     0,   444,   448,     0,   442,   404,     0,   674,   668,
     835,   826,     0,     0,   666,   675,   405,   449,   667,     0,
     443,   388
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    44,    45,    46,    47,   891,  1404,  1802,    48,    49,
      50,    51,    52,    53,    54,    55,    56,   913,    57,    58,
     673,  1102,  1491,    59,   537,   538,  1305,  1306,  1307,  1443,
    1308,  1293,   843,  1309,    60,    61,    62,   838,  1283,    63,
      64,   940,   941,   917,   942,   897,  1130,  2544,    65,    66,
    1865,  2174,  2625,  2674,   413,  1463,  2402,  2403,    67,  1099,
    1902,  1903,  1904,  1905,  1888,  2216,  2217,  2218,  1906,  2450,
    1907,  1357,  1053,  1459,  1460,  2634,  2683,  2684,  2685,  2741,
    2452,  2581,  2646,  2693,  2439,    68,  1914,  1510,  1908,  1909,
      69,    70,   930,  1416,  1808,  1310,  1295,  1296,    71,   437,
    2239,  2460,  2585,    72,   466,    73,  1104,    74,    75,  1107,
    1503,  1504,  2444,  2572,  2639,  2751,  2752,  2560,  2407,  2408,
    2409,    76,    77,    78,    79,  1055,  1464,  1465,  2180,    80,
    2718,  2719,   438,  2785,    81,    82,   467,   705,  2653,   886,
      83,    84,   655,  1854,    85,   483,   719,    86,    87,   490,
    1578,   492,  1158,  1962,  1963,  2280,  1546,   596,    88,    89,
    1555,  1581,    90,   439,  2243,  2588,  2589,  2654,    91,   440,
     909,  1378,  1379,  1380,  1381,  2247,  1382,  1922,  1923,  1924,
    2244,  2251,    92,   907,  1372,    93,    94,  1341,    95,  1399,
     613,    96,  2629,    97,    98,   511,  1175,    99,  1419,   100,
     101,   102,  1925,  2773,  2787,  2788,  2789,  2472,  2759,   103,
    2775,   105,   106,   107,   137,   628,   629,   630,   108,   109,
     110,  1482,  1887,  2201,   111,   112,  1350,  1740,   113,   114,
     115,  1095,   116,   117,   118,   119,   120,   558,   552,   865,
    1319,   121,  1144,   471,   122,   730,  1171,  1571,   123,   708,
     124,  2776,  1165,  1558,  1559,  2777,  1126,   127,  1169,  1565,
    1568,  2778,   129,   688,  1519,  2779,   808,   132,   133,   134,
    1278,  1700,   501,   872,   529,   563,   564,  1324,  1325,   879,
    1339,  1332,  1334,  2360,  2526,   880,  1337,  1728,  1704,  1523,
    1524,  1525,  1933,  1944,  2260,  2479,  1526,  1527,  1531,  1897,
    1898,  1383,  1471,  1079,   809,   810,   811,  1208,  1219,  1202,
    1082,   812,   813,   814,  1085,   815,   816,   817,   818,  1191,
    1243,   819,   820,  1228,  1479,  1141,  1622,   822,   823,   824,
    1691,  1271,   615,   825,  2105,  1273,  1642,  1606,  2343,  1585,
    1189,  1607,  1619,  2016,  1626,  1631,  2039,  2040,  1643,  1660,
     826,  1589,  1590,  1995,  1193,   827,   633,   634,  1234,  1656,
     828,   829,  1314,  1315,  1969,  1970,   830,  1159,   550,  2475,
     696,   593,  1774,  1033,   406,   498,   831,   832,   833,   834,
    1964,  1299,   496,   835,   588,  1034,   400,   401,   590,  1038,
     408
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2391
static const int yypact[] =
{
    5422,   400,  1415, -2391, -2391,   400, -2391, 30016, 25312,    36,
      -8,   232, 34356, 30352, 30016,   270,  2883,   400, 30016,   946,
   19169, 22960,   268, 25312,   225,   317, 19169, 25312, 30688,   506,
   31024, 26320, 22624,   335, 30016,   269, 31360, 26656,   370,   317,
   17799, 23632,   618,   298,   825,   435, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
     519, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391,    89, -2391,   448,    90, -2391, -2391, -2391, 21616, 30016,
   30016, 30016, 21616, 30016, 23632, 30016, 15345, 30016, 30016, 23632,
   23632, 30016, 30016, 30016, 30016,   412, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391,   572, -2391,   647,   667, -2391,  2461,
     225, -2391, -2391, 25312, 21616, 30016,   554,   669, 30016, -2391,
   30016,   813, 30016,   994, 15698,   793, 30016, 30016, 30016, -2391,
   -2391, 30016, -2391, 30016, -2391, 30016,   409,   812,  1005,   915,
      65, 30016, -2391, -2391, 23632, 21616, 30016,   713, -2391, 30016,
   -2391, 21616, 30016, -2391, 16051, -2391, 30016, 30016, -2391, -2391,
   -2391, 30016, 30016, -2391, 30016, -2391,   919, 30016, -2391,   733,
   -2391,   519,   -91, -2391,    94,    67,   103,   109,   110,   119,
     -91, -2391,   784,   128, -2391, -2391,   904, -2391, -2391, -2391,
     936,   296, -2391, -2391, 25312, -2391, -2391, -2391, -2391, -2391,
   -2391, 25312,   128, -2391, -2391,   225,   810, 30016, -2391, 30016,
   -2391, 25312, 30016, -2391, -2391,  1153,   865,  1029,   848, -2391,
    1015,  1021,  1007,    19,   225,   956, -2391, -2391,  1047,  9402,
   26992, 31696,   145, 20586, 27328,   940,   412, -2391,   255, -2391,
    1259,   955,  1159,   848,   412, 25312, -2391, -2391, 14337,  1059,
     971, -2391,  1219,   988,   991, -2391,  5422, -2391, 25312,   579,
     579,  1322,   579,   468,   484, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391,  1003,   572,  1006, -2391,  1035,
   -2391,   462,  1038,   789, -2391,   123,   541,  1085,   152, -2391,
     464,  1201, 30016, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391,  1102, -2391, -2391,  1103,   482,   475,  1215,
     -55,   967,   655,  1281,   337,   708,  1333,     2, -2391,    35,
   -2391, 11901, 17463, -2391,   572, 25312, 21616,  1145, -2391, 30016,
   -2391, -2391, -2391, 21616, -2391,  1297, 16404, 30016, -2391, -2391,
   -2391, 30016, -2391, -2391,  1347, 30016, -2391,  1152,  1155,  1467,
   33712, 30016,  1184,  1497, -2391, -2391,  1184, -2391, -2391, 30016,
    1155,   449,  1184,  1492,  1493,  1296,   911,    81,  1184, 25312,
   25312, 25312,  1360, 30016, 30016, 21616, 30016, -2391,   596,  1204,
    1167,   126, 33712, -2391,  1085,  1166, -2391, 30016,  1172,  1166,
    1318, -2391,  1320,  1166, 20586,    91, -2391, 11901, -2391,   507,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, 30016,
   -2391, 23968, 30016, 24304,    27,     9, -2391, 30016, -2391, 33712,
    1517,  1423,  1423,  1423, -2391, -2391, -2391,  1377, 30016,  1431,
    1438, 23968, 30016, -2391, 32032,  1198,   863,  1220,   528,  1222,
   11901,  1202,   188,   188,  1205,  1209, -2391, -2391,  1212,  1213,
   -2391,   628,   628,  1344,  1216,  1217, -2391,   650,  1223,  1238,
    1241,   671,  1226,  1227,  1228,  1203,   188, 11901, -2391,  1230,
     674,  1231,  1232,  1233,  1253,  1235, -2391,  1257,  1240,   686,
     773,  1242,  1249, -2391,  1216, -2391,   177,   681, -2391, -2391,
   -2391, -2391, -2391, -2391, 11901, 11901, -2391,  9759, -2391,   225,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,    84, -2391,
     694,  3362, -2391, -2391,  1387, 11901, -2391, -2391,     1, -2391,
     572,  1251, -2391, -2391, -2391, -2391,   726, -2391,   127,  1166,
    1053, -2391, -2391, -2391, -2391, -2391, -2391, -2391, 20248,  1592,
   -2391,   584,    35, 18471, 18471, -2391, -2391,  1446, -2391,  1255,
   25312, -2391, 30016, -2391, -2391,   519, -2391, -2391, -2391,  1256,
   -2391, -2391,   298,   298, 11901,   298,   510, 10116, 11901,  1501,
      59,   572, 18135,  1321,  1324, 21280,  1262,  1326,  1328, 31696,
   -2391, -2391, -2391,    99,   505,  1329,    98, -2391,  1418,  1365,
   -2391,  1442,   149, -2391, -2391, -2391, -2391,    97,  8708,   718,
   -2391, -2391,  1351,  1325,  1352,  1354,  1363,  1295, -2391,  1361,
    1353, 32704, 16757,  1364, 31696, -2391, -2391,  1375,  1376,  1416,
    1367,   673,  1628,  1470,  1385,  1382,   869,  1383,   194,   531,
    1331, -2391, -2391,  1390,  1394, 23632,  1397,  1436,  1399, 31696,
   -2391, -2391,   780, -2391, -2391,   412, -2391,  1990, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391,  1340, 33712,  1474,  1085,   707, 30016,  1343,   497,  1490,
   30016,  1553, 30016,  1379, 21280, -2391,  1355, -2391,  1386, -2391,
    1386,  1386,  1357,  1357,  1359, -2391, -2391, -2391,  1203,  1386,
    1362, -2391, 34048, -2391,   624,   759, -2391, -2391,  1693,  1695,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,    44,
    1038, -2391,  1720, -2391, -2391, 33712, -2391,  1651, -2391,  1408,
   -2391, 30016,   542, 30016,  1560, -2391, -2391,   192,  1378, -2391,
   -2391, -2391,    -1,  1152, 20586,  1623,  1525, -2391,  1085,  1722,
   -2391,   968, -2391,  1481, -2391, 13665,  1426, 18135, -2391, -2391,
   -2391,  1739,   126, 30016,  1441, 32704, 25312, 25312,   126, 30016,
   -2391, 19530,   411,    48, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, 30016, 21616, 30016, 30016, 25312, 30016,  1462,  1255,
     391, -2391,  1440,  1405, 14673, -2391, -2391,   130, 25312,  1561,
   -2391,   524, -2391,   303, -2391, -2391, -2391, -2391, -2391, -2391,
   24304, 22960,  1647,   142, 30016, -2391, 11901, 10473, -2391, -2391,
   -2391,  1409, 19530,  1448, 11901, -2391, -2391, 11901, 11901,  1425,
    1425,  1425, -2391, -2391, -2391, -2391,   631,  1425, -2391, 11901,
   11901,  1425,  1425,  1386,  1386, -2391, 20831, 11901,  1425, -2391,
   16757, 11901, 12258,  8013, 11901,  1487,  1489,  1425, -2391,  1425,
   -2391, 11901,  9045, -2391,   572,  1430,  1430,  1033,  4951,  1433,
   -2391,  1528,  1425, -2391,  1425,   627, 11901, 21280,  1498,   125,
   11901,  1447,   586, -2391, 11901,   107, -2391,  1451, 11901,  1488,
     120, 11901, 11901, 11901, 11901, 11901, 11901, 11901, 11901, 11901,
   33712, -2391, 12615,   143,   -53,   597, 24640,  9402,  1679,   757,
    7655, -2391, -2391, -2391,  1592, -2391, -2391,  1499, -2391, -2391,
   -2391, -2391,   782, -2391, -2391, -2391, -2391,   756, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391,  1449, -2391, -2391, -2391,
   -2391, -2391, -2391,  1444,    20, -2391, -2391, 23296, 30016, -2391,
   -2391,  1648, -2391, -2391,  1450, -2391,  2861,  1648,  1590,  1603,
    1603, -2391,   -46, 19530,  1649, 19530, -2391, -2391, -2391, -2391,
   -2391,  1457, -2391, 30016, 30016, -2391, 21280, 30016, 30016, -2391,
    1762,  1463, 30016,  1661,  1665,  1469, -2391, -2391, 30016, -2391,
    1621, 30016, 11901,  1625, 30016,  1627,   158,  1619, -2391, -2391,
   -2391, -2391, -2391,  1615, -2391, -2391,   163, -2391,   770, -2391,
   24976, 32368, -2391, -2391,  1038, -2391,   184,  1537,  1541,  1580,
   30016, 30016, 30016, 30016, 30016,   559, 30016, 30016,  1478,  1485,
    1486, -2391, 30016, -2391,  4679, 30016, 30016, 30016,   707, -2391,
    1814,   707,   707,   511,  1184,  1184, -2391, -2391, -2391, 30016,
   30016, 30016,  1565, 25648, 30016, 30016, 25984, 30016, 30016, 30016,
     160,  1445, 30016, 30016,  1605, 30016, 30016, 30016, -2391,  4679,
      58,  1618, -2391, -2391, -2391, -2391, 11901, 18135,  1839, 30016,
    1705,  1707,  1545, 32704,    -6, 30016, 30016,  1710,    -6,   785,
   -2391, -2391,  1655,    72,   791, -2391,  1523, 11901,  1853, 33712,
    1516,  1518,  1577,  1578,  1581, -2391, -2391,  1585,  1425, -2391,
    1262,   192,    86, -2391,  4679,  1764, 25312,  4679, -2391,  1427,
   22960, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,   225,
   -2391, -2391, -2391,  1671,  1668, 30016,  4679,  1367, 25312, 21952,
     211,  1868,  1760,   225, 25312,   890, -2391,  1758,  1766,  1776,
   -2391, 13329, 27664,  1529,   935, -2391, 27664, 28000, -2391,   572,
   11901, -2391,  1532, 33712, -2391, -2391, 30016,  1539,   126,   126,
   -2391, -2391, -2391, 11901,  1612,  1166,  1542, -2391,  1085,  1166,
    1166,  1255,  1166, 28336,  1897,  1783, -2391, 10830,   798, -2391,
   -2391,    42, -2391,    95,   -34,  1727, -2391, -2391, -2391, -2391,
   33712, -2391, -2391, -2391, -2391, -2391,    21,  1698,  1549, 28336,
    1885,   126, -2391,   807,   476,   612, -2391,  1425, 11901,   174,
   -2391,  5620,   819,  5739,   820,  1566,  1567,   828, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391,  1571,  1801,  1572,   842,
     844,  1573,  1582, -2391, -2391,  2761,   851,  1584,  5779,  1586,
   12258, 12258,  2035, -2391, -2391, 12258,  1589, -2391,   893,  3312,
    1574,  1591,  1614,  1616,  1593,  1594,  6080, 11187, 11901, 11187,
   11187,  6222,  1574,  1595, -2391, -2391, 11901, 30016,  1597,  1598,
   -2391, 20831, -2391,  1624, -2391, 12258, 12258,  2914,  9759, -2391,
   -2391,  1805, -2391,   736, -2391,  1606, -2391, -2391,  4208,   187,
   11901,  1447, 11901,  1663, 16757, 19547, 11901,  4168,  3472,  3472,
      80,    80,    87,    87,    87,    75, -2391,   597, -2391, -2391,
   -2391,  1607,  1235, 11901, -2391,  1031,  1193, 25312,  1700,  2005,
   -2391, -2391, -2391, 13665,  1426, 11901, 11901,  1608, -2391,   896,
     412, -2391,  1425,   627, 18820, -2391, 30016,  1426,   776, -2391,
   -2391,   907, 11901, -2391, -2391,  2105, -2391, 30016,  1561,  1561,
   11901, 11901, 10116,   735, -2391, -2391, -2391, -2391, -2391,  1797,
   -2391, 11901,   105,  1610,  1617, 30016,   126, -2391, -2391, 19530,
   -2391, -2391,  1824, -2391, -2391,  1768, -2391, -2391, 22288, 33712,
   -2391, 33712, -2391,  -103, 30016, 30016, 30016, -2391,  1166, -2391,
   -2391, -2391, -2391, -2391,   662, -2391, 33712,  1750, 33040, -2391,
   30016,  1808, -2391, -2391, -2391,  1754,    53, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391,   225, 30016, -2391,  1425,  1756,
   30016,  1667, -2391, -2391, -2391, -2391, -2391, -2391,   707, -2391,
   -2391, -2391, -2391, -2391,   707,   707, -2391, 33712,    83, -2391,
   -2391, -2391, -2391, -2391,   126,   126, -2391, -2391, -2391, -2391,
    1685, -2391, -2391, -2391,   -37, -2391, -2391, -2391,  1686, -2391,
   -2391, -2391, -2391, -2391, -2391,  6249,  1626, 33712,  1831,    -6,
      -6, 30016,  1630, -2391, -2391, -2391,  1832,  1836,    -6, -2391,
   -2391, 30016, -2391, -2391, -2391,   553, -2391, 21280, 17110,  6457,
    1636,  1518,  1634,  1425,   654,   101,    68,  1733,  1813,  1638,
    1785,  1830,  1656,  1656,  1656,  1656,  1656, -2391,  1611,  1692,
    1152,   542,  1755,   537, -2391, 25312,   192,   926, -2391, 33712,
    1652, 25312,  1650,  1643, -2391, -2391, -2391, -2391,   932, -2391,
   33712,  1902,  1804,  1809,   298,   298, 30016,  1714,  1701,   225,
   20586, 33376,   552, -2391, -2391,  1803, -2391, -2391,   298,  8371,
     935,  1662, 30016, -2391,  1664, 13665,  1867,  1806, -2391, 13665,
    1806,   504,  1806, 13665,  1870, -2391, 15009, -2391,  1672,   757,
   19530,   126,  1673,   126,   126, -2391, -2391, 19530, 25312, 21616,
   -2391, 30016,   425, -2391, -2391,  1817, -2391, -2391, 19530,   937,
   -2391,   -20, 30016,   572, -2391, -2391, -2391, -2391,  1930,  1931,
   -2391, -2391, 30016, 23968,   100, 30016, -2391, -2391, -2391, -2391,
    1680,  1678,  6482, 11901, -2391,  1939, 33712, -2391, 30016, -2391,
   -2391, -2391, -2391,  1425, -2391, 11901, -2391, -2391, -2391, -2391,
   -2391, 11901, -2391,  1425, -2391, 11901,  1922, -2391,  1682,  1682,
   12258,   443,  1231, 12258, 12258, 12258, 12258, 12258, 12258, 12258,
   12258, 12258, 33712, 12972,  1252, -2391, -2391, 11901, 11901,  1929,
    1922, -2391, -2391, -2391,  1050,  1050, 33712,  1687,  1574,  1696,
    1704, 11901, -2391,   572,  6511, -2391,  2002,   225, 11901,   564,
     927, 11901,   942, 11901, -2391, -2391,  1694, -2391, -2391, 33712,
   11901, 12258, 12258,  6351, -2391, 20853, 11901,  1706, 20906,  9759,
   -2391,   317,   317,   317,   317, -2391, 25312, 25312,  1529,  1919,
     972,   975, -2391, -2391,    35,  1711, -2391, -2391, -2391, -2391,
   11544, -2391, -2391,  1702, -2391, -2391,  1166, -2391, -2391, -2391,
   -2391, -2391,  1753,  1773,  1794,  1656,  6736, -2391, 30016, 30016,
     977, -2391, -2391,  1927, -2391, -2391, -2391,  1767, -2391, -2391,
   -2391,  1778,  1779, -2391,  1781, -2391, -2391,  1166,   -91,   225,
   30016, 30016, -2391,  1166, -2391,   225,  1166,   225, -2391, -2391,
   -2391, -2391,   200,    85, 33712, -2391, -2391, -2391, 30016, 30016,
   -2391,  1909,  1715,    -6, -2391, -2391,  1926,  1928,    -6,    -6,
   -2391, -2391, -2391, -2391,   203, -2391, -2391,  1702,   782, -2391,
   -2391, -2391, -2391, -2391,   513,  1425,  1057,  1725, -2391,  1728,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391,   627, 25312,  1656,
   -2391,    77,    51, 28672, 29008, 29344,  1730, 30016, 12258, -2391,
     168,   124, -2391,  1934, 25312,  1771, -2391, -2391, -2391, 33712,
    2068,    48, 25312,  1986,  1884, -2391, 30016, -2391, 21952,   480,
    1963, 21952, -2391, 30016, 30016,  2090,  2098, -2391, -2391,  1796,
    1038,   225, 30016,  1765, -2391,  1757, -2391,   965, -2391,  1155,
   -2391, -2391,    57, -2391, 27664,  1769, 30016,   935, 13665, -2391,
   -2391,  1407, -2391, 13665,  1960, -2391, -2391, 13665, 30016,  1772,
   30016, -2391,   126, -2391, -2391,  1774, -2391, -2391,  2011, 28336,
   -2391, -2391, -2391, 10830,  1780, -2391, -2391, -2391, -2391,   142,
    2006, -2391, -2391, -2391, -2391, 11901, 19530, -2391,  1777,  1788,
    1789, 19530,  6765,  1790, 19530,  1929,  1428,  2018,  1932,  1784,
    1428,  1745,  1745,   966,   966,   543,   543,   543,  1682, -2391,
    1252, 19530, 19530, -2391, -2391, -2391, -2391,  1791, -2391, -2391,
   -2391,  1574, -2391, -2391,   627,  1430, 12258, 12258,  1761, -2391,
     281, 33712, -2391,   980,  1761,   961,  1287, 11901, 11901, 20921,
     146, 11901, 19441, 25312, 25312, 25312, 25312, -2391, -2391,  2117,
    2024, -2391, -2391,   225, -2391, 19530, 16757, 30016, 30016, 30016,
     -91, -2391,   986,   989,  1771, -2391, -2391, 30016, 30016, 30016,
   -2391, -2391,  1166,  1166, -2391, -2391,  1611,  1935,  1949,   -91,
   30016,  1837, -2391, -2391,    -6,  1999, -2391,    -6,    -6, -2391,
   -2391, -2391,  1184,  2070, -2391,   540,  2080, -2391,  2021,   496,
    1812,  2052,  2054, -2391, -2391, -2391,  2057,   -91, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, 11901,
      88,  1428, -2391, -2391, -2391, -2391,  1771,  1152,  2038, -2391,
    1860,   298,    29,  2084,  2076,   192, -2391,  1825,  2104,  2106,
   -2391,  1828,  1089, -2391, -2391, -2391,   733, -2391, -2391, 30016,
    2028,  1262,  2072, -2391, 14001,   225,   552, -2391, -2391, -2391,
   -2391, -2391,  1895, -2391, 30016,   996, -2391, 11901,  1838, -2391,
   -2391, 13665,  1407,   999, 30016,  1004, 33712, -2391, 30016,  2176,
    1979, -2391, -2391, 10830,   126, 28336, 19530, -2391, -2391, -2391,
   -2391, -2391, -2391, 12258,  1841, 33712, -2391, -2391,  1951,  1951,
    1010, -2391, 33712, 12258, 12258,  1761,  1761, 11901,  1761, -2391,
   -2391, -2391, -2391, -2391, 11901, 11901, -2391,   627,  1843, -2391,
   -2391, -2391, -2391,  1962,  1771, -2391, -2391, -2391, -2391, -2391,
   -2391, -2391, -2391, 11901, -2391, -2391,    -6, -2391, -2391, -2391,
     225, -2391, -2391, -2391, -2391, -2391, -2391, 21616,  2186, 25312,
     513, -2391, 19482,  2004, -2391, -2391,  2032,  1915, 30016, -2391,
   21952, -2391,   494,  1973, -2391,  1089, -2391, -2391, 25312,  2000,
    2001,  2003, -2391, -2391,   225, -2391, 30016, 11901,  1011, -2391,
   29680,  7313, -2391, -2391, 25312,  1016, -2391, 19530, 30016, -2391,
   -2391, -2391,  1019, -2391,  1902, -2391,  1045, -2391,   100,  1876,
   33712,  1046, -2391, -2391,  1951,  1951,  1761,  1574, 19530, -2391,
   -2391, 25312, -2391, 19530, -2391,  1496, -2391,  2186,   176, -2391,
   -2391,  2099, -2391,   398,  2008, 30016,  2196, -2391, -2391, -2391,
   21616,  2003,  1051, -2391, -2391,  2164,  1940, -2391, -2391, 19509,
    1940, 14001, 30016, -2391, -2391, -2391,  1426, -2391,  1062, -2391,
   -2391, -2391,  1063, -2391,  1152, -2391, -2391,  1497,  1497,   481,
   -2391,  1497, -2391,  1497, -2391, -2391, -2391, -2391,  2123, -2391,
   -2391, -2391,   214, -2391,  2009,  2019, -2391,   431,  1861,  1940,
   -2391,   471, 30016, -2391, 29680,  1426, -2391, -2391,  2142, -2391,
   -2391,  2032,   225,   225,  2034, 30016,   225,   225,  1983,   324,
     324,  2155, -2391,  1925, -2391,  1425,  1425, 33712,  1879, -2391,
   19906, -2391,  1987, -2391,  1994, -2391, -2391, -2391,   207,  2008,
   -2391, -2391, 30016,  1880, -2391, -2391,  2147, -2391,  2248, -2391,
     122, -2391, -2391, 21616, 16757, -2391,   431, -2391, -2391, -2391,
   -2391,  1068, -2391, -2391, -2391, -2391, -2391, -2391, -2391,   951,
     513,  1880,  2020, -2391, -2391, -2391,  1085,    -4, -2391, -2391,
   19906, -2391,   620, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, 21616, -2391, -2391, 32704, -2391, -2391,   640, -2391, -2391,
     849,   991,  1896,  1899, -2391,   620, 19906,  2015, -2391,  1082,
   -2391, -2391
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
   -2391, -2391, -2391,  1709, -2391,  -571,   -90, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391,   774, -2391, -2391,  -409,  1070,  1412, -2391,   547, -2391,
   -2391, -2391, -2391,  -503, -2391,   278, -2391, -2391, -2391, -2391,
   -2391, -2391,   837, -2391,  -538,   455,  -599, -2391, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391, -1032,    -2,
      47, -2391,    50,   859,   131, -2391,  -144, -2391, -2391, -2391,
    -170,   545, -1106, -1710,   427,  -408,  -438,  -393,  -386,  -403,
   -2391,  -275,  -333, -2378, -2197, -2391, -2391,    34, -2391,    92,
   -1026, -2391,  1199, -2391, -2391,  -728, -2391,   -73, -2391, -2391,
    -141, -2391, -2391, -2391,   441, -2391, -2391, -2391, -1024, -2391,
     838, -1815, -2391, -2391, -2391,  -476,  -444, -2391, -2390,   -81,
     -79, -2391, -2391, -2391, -2391,  -661, -2391,   463, -2391, -2391,
   -2391,  -414,  1260,  -458, -2391, -2391, -2391, -2391,   -57, -1068,
   -2391, -2391, -2391, -1390, -2391,  2323,  1848, -1017, -2391,    -7,
      10,  1629,  -721, -1542,    74, -2391, -2391, -1138, -2391, -2391,
   -2391, -1490, -1015, -2391, -2391, -2391,  -295, -2337, -2391, -2391,
    -692, -2391,   600,   978,   981, -2391, -1263,   116,  -480, -1856,
   -2391,  -102, -2391, -2391, -2391, -2391, -2391, -1003, -2391, -1130,
    -410, -2391,  -261, -2391, -2391, -2391,   698, -2391,   199, -2391,
   -2391, -2391, -2391, -2391, -2391,  -390,  -425, -2391, -2391, -2391,
      60, -2391, -2391, -2391,  1044,  -611,  -524,  1829, -1014, -2391,
   -2391, -2391, -2391, -1711, -2391, -2391, -2391, -2391, -2391, -2391,
   -2391, -1508, -2391, -2391, -2391,  1055,  2355,  -388, -2391, -2391,
   -2391, -2391, -2391, -2391, -2391, -2391, -2391, -2391,  1666,   -80,
   -2391,    26, -2391, -2391,   407,    32, -2391, -2391, -2391, -2391,
    -315,    41,  1675, -2391, -2391,     8,     0,   -40,   321,   358,
   -2391, -2391,   -33,   929, -2391, -2391, -2391, -2391,   658,  1512,
   -2391,   661,  -277, -2391, -2391,  1519, -2391,  1067,  1086,   696,
   -1449,   880, -1434,   461,  -440,   -78,    18, -2391, -1659, -1935,
     179,   -51,   938,  1335, -2391,  2432,  2850, -2391, -2391,  -647,
   -2391, -2391,  2885,  3126, -2391, -2391,  3294,  3319, -2391,  -655,
     347,  3559,  2312,  -779, -1222,  4616,   817,   659, -1097,  -278,
   -2391,  -145, -2391,  4715,   546, -2391,  -595, -2391, -2215, -2391,
   -1149, -2391, -2391, -2391, -2391, -2391, -1324, -1911,  -180,   737,
   -2391, -2391,   824, -2391, -2391, -2391,  -615,  -557, -1214,   746,
   -2391,  1139, -2391,   701,   -75,   136,   388,  -497,  1389,  -303,
    1221,  -363, -1497,  -832,  1741, -2391,  -125, -2391,  -943,    -3,
    -107,     7,    43,  3798,  -856, -1005,  2031,  -608,  -598, -2391,
   -2391
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1456
static const short yytable[] =
{
     131,   614,  1132,   554,   725,  1537,   545,  1511,   130,  1098,
     436,  1230,   852,   587,   670,  1547,  1109,   597,   956,  1039,
    1182,   499,  1480,  1650,  1036,   522,   125,   485,  1528,   881,
     846,   491,   126,   485,  1037,  2120,   598,  1984,  1586,  1953,
     617,   128,   523,   553,   698,  2089,   925,   625,   859,  1466,
     399,   407,  1385,  1345,   950,   662,   399,   399,  2099,   549,
     104,   399,   918,   399,   493,  1966,  2250, -1341,  1859,   399,
    1492,   399,  1930,   513,   519,   493,  1493,   526,  1494,   519,
     519,  2224,   591,   709,   595,  1495,   693,  1496,  1497,  -827,
    -830,  1093,  1945,  1947, -1290,  1096,   624,  1195,  1196,  1248,
    1108,  1100,  1718, -1343,  1248,   711,  1140,  1110,  1162, -1369,
   -1385,  1248,  1142,  1842,   713,  1203,   906,  1760,  1762, -1407,
    1472,  1215,   841,  1294,  1532,   850,  2510,  1241,  2323,  1128,
     893, -1142,  2421,  2206,   898,  1561,  1669, -1142,  1128,   742,
    1703,  1982,  1881,  2468,  1351,  -181,  1167,  1974,  1654,   695,
    1351,  -827,  -830,   699,  1688,  1276,  1352, -1158,  2418,   910,
    1689,   703,   600, -1158,  1128,  1730,  1362,   619,   621,  2208,
    2631,   421,  2202,  2203,  2204,  2205,  1473,  2535,  2152,  1362,
    2140, -1267,   592,   594,   592,  1882,   599,   685,   399,   616,
     599,   399,  1863,   626,   399,   399,   592,   599,  2676,  1853,
    1976,  1138, -1268,  2764,  1692,  2469,   899,  2434,  1508,  1832,
    1654,  1281,  1239,  -827,  -830,  -923,  1353,   953,   894,  2757,
    -987,   423,  1353,  1978,   410,  1474,   842,   839,  1475,   877,
    1911,  -992,   900,  2190,  1368,  1562,  1047,  2783,  1508,  2565,
    1670,   956,  1652,  1753,  1671,    35,  1417,   911,   717,  2193,
     409,  2127,  2432,   481,  2655,  1394,  1595,  1596,  1597,  1346,
     482,  1282,  1883,   412,  1608,   718,  1039,  1580,  1611,  1612,
     878,  1993,  2695,  1279,   627,  1616,  1672,  1036,  1500,   614,
     527,  1359,  2191,  1979,  1634,  2388,  1635,  1037,  2563,   658,
    2611,  -262,    35,  2212,   135,  1430,  1230,   863,  1363,  1648,
    2709,  1649,  2433,  2284,  1369,  1248,  1693,  1476,  2141,   614,
    1884,  2721,  2677,  1754,  1975,   666,  1763,  1451,  1731,   672,
     690,  2213,  2470,  1852,   686,   136,   694,  2765,   678,  2435,
    2214,  2194,  1354,  2483,   497,  2485,   954,  2622,  1354,    43,
    1501,   429,  1129,   430,  1444,  1286,  1973,   895,  1370,   901,
    1163,  1129,  1450,  2153,  2166,  2784,  2758,  2726,  1509,  1364,
     528,   902,  2737,   663,  2192,  1277,  2389,  1977,  1843,  2390,
    2780,  1864,  1833,  1168,  2471,   903,   677,  1129,  1885,  1477,
    1886,  1673,   904,   723,  1716,   723,  1164,  1563,  2570,    15,
     444,   497,  2154,   896,  2502,  2662,   404, -1142,   912,   955,
    2387,  2215,  1564,  1478,  2370,  1195,  1196,   656,  2372,  2373,
     706,   404,  1355,  1655,  1215,   404,  1203,   497,  1355,  1160,
    1690,   802,   494, -1158,  1528,   905,  1515,  1371,   404,   404,
   -1341,  2053,  1266,  1267,  1268,  1269,  1270, -1456,   481,  1183,
    1054,  1270,  1269,  1242,  1846,   482,  1036,   481,  1270,  -827,
    -830,    22,  -827,  -830,   482,  1139,  1037, -1290,   399,  2164,
    2165,   594,   689,   592,  2279,   599, -1343,   616,  2170,   599,
     674,   399, -1369, -1385,   399,  2071,   592,  1317,   599,   710,
    1349,   712, -1407,   714,   399,   497,  2257,   715,  2417,   399,
    2261,  2096,   594,  1427,  2266,   399,  2125,   616,  2126,   399,
     399,   614,   728,  1588,   399,   399,  1133,   399,  -181,  1502,
     592,  1041,  1401,  1190,  1736,  1403,  2738,  -987,  1044,  2679,
   -1267,   743,  2401, -1267,  1385, -1267,   586, -1267,  -992,   844,
     586,  2710,   404,  1534,  2307,  1879,  -987,   404,   404,  1540,
    1438, -1268,  1912,  1913, -1268,   920, -1268,  -992, -1268,  2602,
     399,   559,   399,  2715,   853,   734,   131,  2722,  1613,  1614,
    1118,   946,  1358,    35,   130,   497,  2723,   524,    35,  1143,
     626,  1919,   421,   399,   519,  2739,   847,   519,   898,  2404,
    2336,   507,   125,   876,  2448,  1811,  1359,    14,   126,   898,
     870,  1583,  1584,    15,  2740,   722,  2404,   128,  1051,  -859,
     560,   854,  1592,  1594,  1489,  2181,  1528,   947,   500,  1078,
    2250,  1512,  1097,    18,  1609,  1610,   104,   738,  2449,  1644,
      41,  1248,   423,  2680,  2551,  1937,  1115,  1120,  1628,  1630,
    2574,  1264,  1265,  1266,  1267,  1268,  1269,   135,   877,  1036,
    1134,  1131,  1270,  2308,  1991,   592,   508,  2716,  1938,  1037,
     899,   627,  2309,  1454,  -859,    22,  2405,    43,  2248,  1551,
     723,   899,    43,  2263,  1039,  1288,  1490,   561,   136,  1121,
     871,  1940,   544,  2681,  2552,   679,   900,  1661,  1172,   878,
    1806,  2704,   399,  1809,  1810,  1709,   883,   900,   914,   616,
     399,  1812,  2305,  1813,   399,  -859,  2406,  1662,   592,   927,
     680,  2724,   135,  1472,   399,  1360,    15,  1598,   884,   131,
     915,  1455,   592,  2406,  1920,  2717,  2324,  1150,  1351,  2705,
    2021,   928,  1554,  1356,   131,  1417,   592,  1117,   923,   399,
    1352,    31,  1166,   136,   916,  1146,   681,  1067,  1036,   551,
     592,  1147,   429,  1122,   430,  2463,  1188,   847,  1037,  1328,
    1148,  2637,   924,  1252,  1253,  1133,  2278,  1289,  1942,  1473,
     562,  1418,   399,  1599,  1205,   399,   493,   554,    22,  2095,
     399,  1542,    35,  2396,  2638,  1543,  -271,   614,  2399,  2400,
    2022,  1179,  1329,   914,  2220,   399,  1663,  1185,  1123,  2279,
    1353,  1664,  1429,   901,  1233,  1665,   509,   510,   556,  2494,
    1256,   404,   586,   679,   901,   902,  1240,  1237,  1474,  2476,
    1617,  1475,  1600,   890,  2480,  1601,   902,  1245,  2482,   903,
    2473,  2276,    27,  1394,    41,   555,   904,  1330,  2222,   916,
     903,  1342,   404,   586,  1988,  2172,  2173,   904,  1528,   586,
    1543,  2293,  1528,  1814,  1815,   557,  1528,  2064,  1298,  1545,
     654,  1549,  1550,  1190,  1552,  2144,  1960,  1772,  1124,  1492,
    1439,   635,  1466,  1430,   681,  1493,    43,  1494,  -992,   905,
    1400,   892,  1320,  1320,  1495,  1320,  1496,  1497,   682,   943,
     905, -1244,   404,  2249,  1569,    35,  2131,  -992,  1570,   404,
    1476,   847,  1666,   497,  1602,   926,   847,   847,  2031,   404,
    1667,   944,  1385,   951,  2032,  1316,  1354,   801,  2132,  1919,
    2023,  2024,  2025,   660,  2026,  2027,  2028,  2029,  2030,  2031,
    1105,  1417,  1290,  1291,   497,  2032,  1424,   898,   481,   631,
    2187,  2189,   519,   404,   632,  1292,   404,    41,  1106,  1955,
    1956,  2065,  1387,  2337,  1624,  2066,   404,  1264,  1265,  1266,
    1267,  1268,  1269,  2608,   948,  1225,  1226,    31,  1270,  2112,
       3,     4,  1477,  1434,  1388,   616,  1603,   519,  -972,  1604,
    1989,  1605,  1949,   661,   931,  2415,  1990,  2513,   949,    43,
     932,  2113,  1986,  1227,  1919,  1738,  1355,  1201,  1389,  1452,
    -966,  1448,   519,  1457,  1488,  2733,  1694,  2698,   802,   899,
    2794,  1936,   898,  2795,  2545,  2114,  1484,  2547,  2548,  1207,
    1487,  -999,  2188,   887,  -969,  1721,   933,  1225,  1226,  1440,
    1506, -1267,  2761,   404,   586,   900, -1002,  1441,  1548,   934,
    -999,   586,  2599,  1218,   497,   888,  2727,    15,    31,   890,
   -1269,   671,  2067,  2048,  1483,  1227,  1291,  1442,   455,   155,
    2068,   481,  1920,  1244,   411,   684,  1937,   935,  1292,   889,
    2300,   468,   936,  2062,   683,   937, -1268,   404,   404,   404,
    2303,  2636,   692,   586,   899,   614,  1342,   525,   848,  1938,
    2148,   704,  1541,  2021,  1400, -1270,  2149,  2150,  1768,   592,
    1225,  1226,   707,   592,  1939,  1461,   497,  1284,  1239,    22,
     900,   518,  1940,  1644,  1225,  1226,   664,   543,   665,   404,
    2090,  2091,  2507, -1002,   631,  1712, -1247,  2021,  1229,   632,
     890,  1711,  2100,  1941,   554,  1522,   716,  1920,   716,   404,
    1757,  1420,  1229,   631,  1758,  1425,  -835,  1428,   632,   720,
    2179,  1544,  1921,  2022,   599,  1860,   399,  2121,  -835,  1861,
     721,  1866,  2771,    27,   902,  1867,  2624,   847,  1971,  2702,
    2703,  1528,  1972,  2706,   553,  2707,  1528,  1987,   903,   729,
    1528,  1543,  2461,   131,  1577,   904,   399,  2022,   735,  1997,
    1999,  1575,   592,  1543,  1543,  -835,  2094,   737,  2002,  1942,
    1576,   914,  2003,  1321,  1323,   399,  1327,   399,   399,  1572,
     399,   736,  2007,  -835,  2008,  1573,  1543,  1560,  1543,   866,
     738,  2012,  -827,   938,  1574,  2013,    35,   901,   905,  1686,
    1187,   741,    43,   493,   493,  2156,  2157,  1582,   398,   902,
    1322,  1322,   739,  1322,   442,   443,  1734,   939,   740,   469,
    1737,   484,  2410,   903,  -835,  1213,  1214,   503,   404,   506,
     904,  1659,  -835,  2036,  1748,   744,  2093,  1543,  2419,  1036,
    1543,   745,  2290,   616,  2077,  2325,  2326,  2101,    41,  1037,
     801,  1133,  1943,  2023,  2024,  2025,   851,  2026,  2027,  2028,
    2029,  2030,  2031,  1767,   855,  1769,  2225,   667,  2032,   668,
    2226,   856,  2232,   905,  1713,  1779,  2233,  2282,  1803,  1517,
    1518,  2283,  2339,  2514,   801,  2619,  1543,  2023,  2024,  2025,
    2772,  2026,  2027,  2028,  2029,  2030,  2031,   857,  2028,  2029,
    2030,  2031,  2032,   863,  2081,  1836,  2082,  2032,  1839,   862,
    1841,  2566,  2361,   404,  1039,  2362,  1543,  2374,   864,  1543,
    2511,  1861,  1624,  1624,  2512,  -835,  2533,  1624,   866,  2534,
    1861,   867,  2271,  1861,  2273,  2274,  2596,   874,  1644,  2601,
    1133,   399, -1269,  2226,  2603,   882,   601,  2590,  2226,   618,
    2612,  2650,   622,   623,  2512,  2651,  2657,  1624,  1624,  2659,
    1133,  1225,  1226,  2226,  1528,  2291,   599,   399,  2411,  2412,
     599,   594,  1848,   866, -1270,   399,  1342,   405,  1856,  1857,
     885,   399,  1400,  1408,   599,  2660,  2663,   399,  2021,  2283,
    2512,  2690,   495,  2107,  2108,  1168,   504,  2246,  1872,  2627,
    2579,  2580,  2699,  2700,  2106,   138,  1133,  2512,  2769,   547,
    1176,  1177,  2770,   599,   399,   599,   399,   399,  1644,   399,
    1775,  1409,  2801,  2021,   908,   599,  2770,   919,   599,   399,
     399,  1855,   931,  2109,  2110,  1855,  2331,  2047,   932,  2049,
    2050,   921,  1817,  1818,   399,   922,   399,   399,  1825,   399,
     399,   399,   399,  1936,   139,   599,   399,  2137,   599,   399,
     599,   554,  1952,   956,   417,   929,  2083,  1893,  2084,   873,
     140,   875,   592,  2143,   933,   945,  1894,  2146,   592,   592,
    2262,   952,  2265,  2022,  1042,  1045,  1410,   934,   141,  1050,
    1917,  1052,  1056,  1529,  1054,   890,  1094,  1101,  -133,  1981,
    1103,  1929,  1114,  1125,   404,   404,  1127,  2665,  1937,   614,
    1133,  1135,  1136,   493,  1137,   935,  1173,   142,   620,  1174,
     936,   586,   143,   937,   404,  1178,  1180,  1411,  1899,  1412,
     421,  1938,  1910,  1181,  2590,   144,   404,  1186,  2701,  1413,
    -957,  1194,  -964,  2666,  1197,  1934,  1939,  -549,  1198,  1934,
    1948,  1199,  1200,  1204,  1940,    43,  1206,   145,  -954,  1775,
    2104,  -955,  1209,  2667,  2021,  1210,  1211,  1212,  2467,  1217,
    1220,  1221,  1222,  -958,  1223,  1941,   599,  -956,  2668,  1224,
     423,  1231,  2026,  2027,  2028,  2029,  2030,  2031,  1232,  1274,
    1280,  1287,  2669,  2032,  1312,  1318,   876,  1414,   554,  1168,
    1343,  2477,   599,  1344,  1346,  1347,  2670,  1348,  1361,  1366,
     801,   146,  1365,  2023,  2024,  2025,   659,  2026,  2027,  2028,
    2029,  2030,  2031,  1391,  2022,  1892,  1415,  1367,  2032,   675,
    1390,  1392,   676,  1393,  2793,  1394,  2206,  2128,  1237,  1395,
    1396,  1942,   687,  1402,   404,  2086,  2087,   691,  2207,   914,
     147,  1659,  1397,  2487,  1405,  1406,   148,  1407,   700,  2289,
    1417,   149,   701,   702,  1421,  1422,  1423,  1426,  1449,  1432,
    2055,  2080,  2208,  1433,  2209,  1431,  1435,  1436,  1437,  1447,
   -1453,  2671,  1453,  1522,  1456,   404,   150,   151,  2672,  1458,
    1462,  1190,  1469,  1470,  1467,  1834,  1201,   616,  1207,   152,
     429,  1218,   430,  2104,   153,  2133,  2478,  2136,   731,  1481,
     732,   431,   419,   154,  2673,  1486,  1499,  1505,  1513,  1514,
     434,  1516,  1624,  1520,  1943,  1624,  1624,  1624,  1624,  1624,
    1624,  1624,  1624,  1624,  2210,  1624,  1530,   847,  1533,  1316,
    1536,  1553, -1453,  1556,  1557,  1567,  2151,  1579,  1587,   802,
     399,   801,  2743,  2744,  2023,  2024,  2025,  1588,  2026,  2027,
    2028,  2029,  2030,  2031,  1632,  1248,  1633,  1676,  1461,  2032,
    1249,  1270,  2142,  1624,  1624,  1653,  2162,  1646,  1647,  1703,
     560,  1710,   657, -1453,  1715,  1726,  1658,   599,   399,   399,
    1674,  2211,  1727,  1714,  1722, -1453,  2212,  1733,  1739,  1732,
   -1453,  1743,  1741,   399, -1453,  1744,  1747, -1453,  1745, -1453,
    1750,  2549,  1752,  1755,  1548,  1756,  1764,  2382,  2383,   399,
    1765,  1766,  1776,   399,  2213,  1777,  1855,  1855,  2227,  1807,
    1778,  1838, -1453,  2214,  2277,  1855,  1820,  1844,  1847,  2151,
    1043,  1849,  2175,  1850,  1851,  2183,  1858,  1862,  1048,  1868,
   -1453,  1870,  1049,  1873,   404,  1874,  1875,  1876,  2292,  1889,
    1877,  1623,  1092,   724,  1878,  1895,  1896,  1915,  1916,  1926,
     726,  1928,  1951,  1935,  1775,  2607,   404,  1927,  1251,  1954,
     733,  2021,   404,  1958,  1461,  1965,  1959,  1119,  1580,  1529,
    1980, -1453,  1983,   723,   131,   131,  2245,  1252,  1253, -1453,
    1985,  2005,  2237,  2238,  2215,  2063,  2000,  2001,   131,  2617,
    1624,  2004,  2006,  2009,   726,  1522,  2253,   861,  1543,  1522,
    1151,  2299,  2010,  1522,  2014,  2298,  2017,   869,  1170,  2035,
    2042,  2041,  2043,  2044,  2045,  2052,  2528,  2056,  2057,   399,
    2058,  2022,  2076,   847,  1256,  2069,  2079,  2115,  2092,  2118,
    2122,   131,  1934,  2123,  2134,  2255,  2119,  1257,  2138,  2285,
    2139,  2319,  2145,  2147,  2158,  2159,  2161,  2163,  2168,  2269,
    2167,   500,  2169,  2185,  2186,  2327,  2195,  2196,  2197,  2198,
    2199,  2219,  2200,  2221,   599, -1455,  1246,  2231,  2234,  2661,
    2230,  2228, -1453,  2241,  1248,  1560,  2235,  2252,  2342,  1249,
    2242,  2236,  2254,  2256,  1040,   399,  2258,  2259,   599,  2267,
   -1453,  2270, -1456,  2272,  2281,  2287,  2288,  1187,  2294,   554,
    2297,   592,  2038,  2032,  2037,  1241,  2359,  2328,  2353,  2354,
    2355,  2356,  2367,  2341,  2334,  2369,  2329, -1453,  1624,  1624,
   -1453,  2366, -1453, -1453,  2330,  2394,  2350, -1455,  1111,  1112,
    1113,  2363,  2368,  2375,  2782,  2395,  2376,  2377,  2378,  1237,
    2379,  2642,  2397,  2413,  2398,   404,  2414,  2441,   801,  2429,
    2438,  1529, -1456, -1456,  2436,  2026,  2027,  2028,  2029,  2030,
    2031,  2443,  2445,  2391,  1260,  2451,  2032,  2021, -1455,  2457,
     726,  1264,  1265,  1266,  1267,  1268,  1269,  2458,  2459,  2481,
   -1455,  2465,  1270,  1250,  2464, -1455,  2495,  1251,  2474, -1455,
     726,  2484, -1455,  2488, -1455,  2490,  2381,  2497,  2503,  2493,
    2539,  2504,  2384,  2505,  2385,  2380,  1252,  1253,  2498,  2499,
    2501,  2506,  2524,  2525,  2540,  2546,  2543, -1455,  2550,  1254,
    1855,  1461,  1461,  2553,  2405,  1855,  1855,  2022,  2440,   589,
    2556,  2595,  2020,   589,  2557, -1455,  2558,  2559,  2567,  2568,
    2571,  2595,  2573,   399,   399,  2575,  2576,  2578,  2577,  2584,
    1255,  2021,  2586,  1256,  2594,  2604,  2605,  2598,  2420,  2422,
    2610,   399,   399,  2620,  2621,  2628,  1257,  2635,  1258,  2435,
    2640,  2633,  2643,  2644,  2678,  2687, -1455,  2645,  2691,  2708,
    2720,   614,  2682,  2711, -1455,  1624,  2026,  2027,  2028,  2029,
    2030,  2031,  2692,  2713,  2728,  1624,  1624,  2032,  2462,  2732,
    2736,  2709,  2710,  2746,  1861,  2755,   399,   399,   399,  1313,
     399,  2022,  2756,  2762,  2763,  2796,  2783,  2781,  1522,  2797,
    2529,  2097,  1891,  1522,  1259,   868,  1311,  1522,  1835,  1899,
    2536,  1817,  2538,  2155,  1817,  2447,  2455,   399,  1816,  1623,
    1623,  2453,  2386,   404,  1623,  1775,  2564,  2117,  2171,   404,
    2342,  2760,  2714,  2729,   801,  2658,   500,  1934,  2712,   399,
    2641,  2026,  2027,  2028,  2029,  2030,  2031,  2742,  2689,  2489,
    1507,  1899,  2032,  2486,  1623,  1623,  2541, -1455,  2583,  1880,
    2799,  2103,   599,  1529,  1498,  2454,  2786,  1529,  2555,  2554,
    2176,  1529,  2768,  1260,  2767, -1455,  1261,  1262,  1263,  2800,
    1264,  1265,  1266,  1267,  1268,  1269,   404,   586,  1445,   502,
     727,  1270,  1161,  2491,  1535,  1446,  2696,  1485,  2124,  1761,
    2527,  1759, -1455,  2466,  2593, -1455,  2675, -1455, -1455,  2774,
    2798,   404,  1719,   858,   470,  1145,  2582,  2532,   801,  2286,
    2102,  2023,  2024,  2025,  1149,  2026,  2027,  2028,  2029,  2030,
    2031,  1855,  1338,  2111,  1855,  1855,  2032,  1729,  1336,  2088,
    1717,  1931,  2264,  2333,  2600,  2446,  1871,  1468,  2074,   616,
     599,   399,   399,  1994,  2182,  2072,  1702,  2098,  2606,  2492,
     599,   399,   599,     0,  2561,  1116,     0,     0,     0,     0,
       0,     0,  1548,  2542,     0,  2227,     0,  2018,  2019,     0,
       0,   131,  2034,     0,     0,   589,     0,     0,   603,  2569,
       0,   604,   605,   606,  2342,   607,   608,   609,   610,   611,
     612,  2613,  2592,     0,     0,     0,     0,     0,     0,     0,
       0,   636,  2059,  2060,   404,   404,   589,     0,     0,     0,
       0,  1522,   589,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   637,   399,     0,     0,     0,     0,  2591,     0,     0,
       0,     0,     0,   638,     0,  2688,     0,   399,   639,     0,
     640,     0,     0,     0,     0,  1538,  1539,  2486,     0,  2648,
       0,  2455,     0,     0,     0,     0,   641,     0,   599,     0,
       0,     0,     0,  1855,     0,   726,     0,  2626,     0,     0,
       0,     0,     0,     0,   642,     0,     0,  1566,     0,  2342,
     836,     0,     0,     0,     0,  1735,     0,     0,     0,     0,
       0,     0,     0,  1742,     0,     0,     0,     0,     0,  1746,
       0,  2647,     0,   643,     0,  1751,   404,     0,     0,     0,
       0,     0,     0,     0,     0,  2697,     0,     0,     0,   614,
       0,   644,   404,     0,     0,     0,     0,     0,     0,     0,
     404,  1775,     0,  1817,  1770,  1771,     0,  1773,  2766,     0,
       0,     0,     0,     0,   645,     0,     0,  1804,  1805,   592,
       0,     0,     0,   592,   592,     0,     0,     0,     0,     0,
       0,   399,  1819,     0,  1823,  1824,  1529,  1828,  1829,  1830,
    1831,  1529,     0,     0,  1837,  1529,  2792,  1840,     0,     0,
       0,     0,   836,  1035,     0,  1701,  2745,   589,     0,     0,
       0,     0,     0,     0,   589,     0,     0,   646,   399,  1623,
       0,     0,  1623,  1623,  1623,  1623,  1623,  1623,  1623,  1623,
    1623,  1091,  1623,     0,  2591,   592,     0,   455,     0,  2730,
    2731,     0,     0,  2734,  2735,     0,  1720,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   589,  2753,     0,     0,
     647,     0,   648,  1091,     0,     0,     0,   649,     0,     0,
    1623,  1623,  2791,  1400,     0,   399,     0,   592,   836,     0,
       0,   404,   404,   404,   404,     0,     0,     0,  1461,     0,
       0,     0,   650,     0,     0,     0,     0,     0,     0,   131,
    1091,     0,     0,  2754,     0,   651,     0,  2753,     0,     0,
     652,     0,  2790,     0,     0,  1461,     0,  1246,     0,     0,
       0,   836,     0,     0,     0,  1248,     0,   616,   653,     0,
    1249,     0,     0,  2753,     0,   131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   836,     0,
       0,     0,     0,  2754,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   836,   836,  2306,   836,  2754,
    2310,  2311,  2312,  2313,  2314,  2315,  2316,  2317,  2318,     0,
    2320,     0,   586,     0,     0,     0,   836,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1623,     0,  1529,
       0,     0,     0,     0,     0,  1890,     0,  1246,     0,     0,
       0,  1723,     0,     0,     0,  1248,     0,     0,  2345,  2346,
    1249,     0,     0,   445,  1250,     0,     0,  1900,  1251,     0,
       0,     0,     0,  1918,   446,   836,     0,     0,   836,   836,
       0,     0,     0,  1091,     0,     0,  1035,  1252,  1253,     0,
       0,     0,     0,   447,     0,     0,     0,     0,     0,     0,
    1254,     0,     0,     0,     0,     0,     0,     0,  1248,  1386,
       0,     0,   448,  1249,     0,   586,     0,   404,     0,     0,
    1724,     0,  1091,     0,     0,     0,     0,     0,   449,     0,
       0,  1255,     0,     0,  1256,     0,   404,     0,     0,     0,
       0,     0,  1089,     0,     0,     0,   450,  1257,     0,  1258,
       0,     0,   404,     0,     0,     0,  2129,  2130,     0,     0,
       0,     0,     0,     0,  1250,  1623,  1623,     0,  1251,     0,
       0,     0,     0,     0,  1089,   451,     0,     0,     0,   404,
     452,     0,     0,     0,     0,     0,  2061,  1252,  1253,     0,
       0,     0,     0,   453,     0,  2431,     0,     0,   586,     0,
    1254,     0,     0,     0,     0,  1259,     0,     0,     0,   586,
       0,  1089,     0,     0,     0,     0,     0, -1456,     0,     0,
       0,  1251,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1255,     0,     0,  1256,     0,     0,     0,     0,     0,
    1252,  1253,     0,  1091,     0,     0,     0,  1257,     0,  1258,
       0,     0,     0, -1456,     0,  1035,  2085,     0,     0,     0,
       0,     0,  1080,     0,     0,     0,     0,     0,     0,   454,
       0,     0,     0,  1091,  1260,     0,     0,  1261,  1262,  1263,
       0,  1264,  1265,  1266,  1267,  1268,  1269,  1256,     0,   455,
       0,     0,  1270,     0,  1080,  2011,  1091,     0,     0,     0,
    1257,   586,     0,     0,     0,  1259,     0,  2240,   456,     0,
       0,     0,   457,     0,   458,     0,     0,     0,     0,   459,
       0,     0,     0,  2508,  2509,     0,   589,     0,  1091,     0,
       0,  1080,  1623,  1297,     0,     0,  1091,     0,     0,   586,
       0,     0,  1623,  1623,   460,   461,     0,     0,     0,     0,
    1725,     0,     0,     0,   589,     0,     0,   462, -1456,     0,
       0,     0,   463,     0,  1089,     0,     0,     0,     0,     0,
       0,   464,     0,     0,  1260,     0,     0,  1261,  1262,  1263,
     465,  1264,  1265,  1266,  1267,  1268,  1269,   836,   836,     0,
    1089,     0,  1270,     0,     0,   836,     0,     0,   836,   836,
       0,     0,     0,  1089,     0,     0,     0,     0,     0,     0,
     836,   836,     0,     0,     0,     0,     0,     0,   836,     0,
       0,     0,   836,   836,   836,   836,     0,  1260,     0,     0,
       0,     0,   836,   836,  1264,  1265,  1266,  1267,  1268,  1269,
       0,     0,     0,     0,     0,  1270,     0,   836,  1035,     0,
       0,   836,     0,     0,  2223,   836,     0,     0,     0,   836,
    2229,     0,   836,   836,   836,   836,   836,   836,   836,   836,
     836,  1091,     0,   836,     0,     0,     0,     0,   836,     0,
       0,   836,     0,     0,  1080,     0,     0,     0,     0,     0,
    2609,     0,     0,     0,     0,     0,     0,     0,  1246,     0,
    2614,  2615,     0,     0,     0,     0,  1248,     0,     0,     0,
    1080,  1249,     0,     0,     0,     0,     0,  2275,     0,     0,
       0,     0,     0,  1080,  1089,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   726,     0,     0,     0,     0,  1035,  1246,  2392,
    2393,  1247,     0,     0,  1089,     0,  1248,     0,     0,     0,
       0,  1249,     0,   836,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1089,     0,     0,
       0,  1386,  1091,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2424,  2426,  2428,  2037,  2430,     0,
       0,     0,  2038,     0,     0,     0,     0,     0,     0,  1089,
       0,     0,     0,     0,     0,  1250,     0,  1089,     0,  1251,
       0,     0,     0,     0,     0,  2456,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1252,  1253,
       0,     0,     0,     0,  1080,  2357,  2358,   836,  1091,     0,
       0,  1254,     0,     0,  1091,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1250,  1248,     0,   836,  1251,
    1091,  1249,     0,     0,  1080,     0,     0,     0,     0,     0,
    1081,     0,  1255,     0,     0,  1256,     0,     0,  1252,  1253,
       0,     0,     0,     0,     0,     0,     0,  1080,  1257,     0,
    1258,  1254,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1081,     0,     0,  1083,     0,     0,     0,     0,
       0,     0,   589,     0,     0,     0,     0,     0,     0,  1080,
       0,   836,  1255,     0,  1091,  1256,     0,  1080,     0,     0,
       0,     0,     0,     0,   836,     0,     0,  1083,  1257,  1081,
    1258,     0,  1089,     0,     0,     0,  1259,  2416,   836,  2530,
    2531,     0,     0,     0,     0,     0,     0,     0,     0,  2537,
       0,  1091,     0,  2437,     0,  1250,     0,     0,     0,  1251,
       0,  2442,     0,     0,  1083,     0,     0,     0,     0,   836,
       0,     0,     0,     0,     0,     0,     0,     0,  1252,  1253,
       0,     0,     0,     0,     0,     0,  1259,     0,     0,     0,
       0,  1254,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   836,   836,     0,     0,  1260,   836,     0,  1261,  1262,
    1263,     0,  1264,  1265,  1266,  1267,  1268,  1269,   836,   836,
     836,   836,     0,  1270,     0,  1256,     0,   836,     0,     0,
    2240,     0,     0,     0,     0,     0,   836,   836,  1257,   836,
       0,     0,  1089,  1089,     0,     0,     0,     0,     0,     0,
       0,   836,  1080,   836,     0,  1260,     0,   836,  1261,  1262,
    1263,     0,  1264,  1265,  1266,  1267,  1268,  1269,     0,     0,
       0,     0,     0,  1270,   836,     0,     0,     0,     0,     0,
       0,     0,  1081,     0,   589,     0,   836,   836,     0,     0,
       0,     0,  2520,  2521,  2522,  2523,  1259,     0,     0,     0,
       0,     0,     0,   836,     0,     0,     0,     0,  1081,  1089,
       0,   836,   836,   836,     0,  1089,     0,  1083,     0,     0,
       0,  1081,   836,     0,     0,     0,     0,     0,     0,     0,
       0,  1089,     0,     0,     0,     0,  1084,     0,     0,  1386,
    1091,     0,  1091,  1083,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1083,  1091,     0,  1091,
       0,     0,  1080,  1080,     0,  1260,     0,     0,  1084, -1456,
   -1456,     0,  1264,  1265,  1266,  1267,  1268,  1269,     0,     0,
       0,     0,     0,  1270,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1089,     0,     0,  1091,     0,
       0,     0,     0,     0,     0,  1084,  2686,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1091,  1080,
       0,     0,  1089,     0,     0,  1080,     0,     0,     0,     0,
       0,     0,  1081,     0,     0,     0,     0,     0,  1035,  1091,
       0,  1080,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2725,     0,     0,     0,     0,     0,     0,
       0,     0,  1081,     0,     0,     0,     0,  1083,     0,     0,
    1091,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1091,     0,     0,     0,  1081,     0,     0,  2630,     0,
       0,     0,  1091,     0,  1086,     0,     0,  1083,     0,     0,
       0,     0,     0,     0,     0,  1080,   589,   726,     0,     0,
     589,     0,     0,     0,   589,     0,     0,  1081,     0,  1087,
    1083,     0,     0,  2656,     0,  1081,  1086,     0,     0,     0,
     589,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1080,     0,     0,     0,     0,     0,  1084,     0,
    2664,  1087,  1083,     0,     0,     0,     0,     0,     0,     0,
    1083,     0,     0,  1086,   836,     0,     0,  1091,     0,     0,
       0,     0,     0,     0,  1084,     0,   836,     0,     0,     0,
       0,     0,   836,     0,     0,     0,   836,  1084,  1087,     0,
       0,   836,     0,     0,   836,   836,   836,   836,   836,   836,
     836,   836,   836,  1091,   836,     0,     0,     0,   836,   836,
    1089,  1089,     0,  1089,     0,     0,     0,  1091,     0,     0,
       0,     0,   836,     0,     0,     0,     0,     0,  1089,   836,
    1089,     0,   836,     0,   836,     0,     0,     0,     0,     0,
    1091,   836,   836,   836,     0,     0,     0,   836,     0,     0,
     836,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1081,     0,     0,     0,     0,     0,     0,     0,     0,  1089,
       0,   836,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1083,     0,     0,     0,  1089,
       0,     0,     0,     0,     0,     0,     0,     0,  1084,     0,
       0,     0,     0,     0,     0,     0,  1086,     0,     0,     0,
    1089,     0,     0,     0,     0,  1091,     0,     0,     0,     0,
    1080,  1080,  1248,  1080,     0,     0,     0,  1249,  1084,     0,
       0,  1087,  1086,     0,     0,     0,     0,     0,  1080,     0,
    1080,  1089,     0,     0,     0,  1086,     0,     0,     0,  1088,
       0,  1084,  1089,     0,     0,     0,     0,  1087,     0,     0,
    1081,  1081,  1248,  1089,     0,     0,     0,  1249,     0,   836,
    1087,     0,     0,     0,     0,     0,     0,     0,     0,  1080,
    1091,  1088,     0,  1084,     0,     0,     0,     0,     0,     0,
       0,  1084,     0,     0,     0,  1083,  1083,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1080,
       0,     0,     0,     0,     0,     0,     0,     0,  1088,   589,
       0,     0,     0,     0,   589,     0,     0,  1081,   589,     0,
    1080,  1250,     0,  1081,     0,  1251,     0,     0,  1089,     0,
    2070,     0,     0,     0,   836,     0,     0,     0,     0,  1081,
       0,     0,     0,     0,  1252,  1253,   836,     0,     0,     0,
       0,  1080,  1083,     0,     0,     0,  1086,  1254,  1083,     0,
       0, -1456,  1080,     0,  1089,  1251,     0,     0,     0,     0,
       0,     0,     0,  1080,  1083,     0,     0,     0,  1089,     0,
       0,  1087,     0,     0,  1252,  1253,  1086,   836,   836,     0,
       0,  1256,  1091,     0,     0,     0,     0, -1456,   836,   836,
       0,  1089,   836,  1081,  1257,     0,     0,     0,     0,  1086,
       0,  1087,     0,     0,     0,     0,  1084,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1256,     0,     0,  1087,     0,     0,     0,  1083,     0,
    1081,  1086,     0,     0,  1257,     0,     0,     0,  1080,  1086,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1088,  1259,     0,     0,     0,  1087,     0,     0,     0,
       0,     0,     0,     0,  1087,  1083,     0,     0,  1090,     0,
     836,     0,     0,     0,  1080,     0,  1089,  1088,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1080,     0,
    1088,     0, -1456,     0,     0,     0,     0,     0,     0,     0,
    1090,     0,     0,     0,     0,   589,     0,     0,     0,     0,
       0,  1080,     0,     0,     0,     0,  1084,  1084,   836,     0,
       0,  1260,   589,     0,  1261,  1262,  1263,  1091,  1264,  1265,
    1266,  1267,  1268,  1269,   836,     0,     0,  1090,     0,  1270,
       0,  1089,     0,     0,   836,     0,  1091,     0,     0,     0,
       0,     0,     0,  1091,   836,   836,     0,     0,   836,     0,
       0,  1260,     0,     0,     0,   836,   836,     0,  1264,  1265,
    1266,  1267,  1268,  1269,  1086,     0,     0,     0,     0,  1270,
       0,     0,     0,  1084,   836,     0,     0,     0,     0,  1084,
       0,     0,     0,     0,     0,     0,  1080,     0,   589,  1087,
       0,     0,     0,     0,     0,  1084,     0,     0,     0,     0,
       0,  1088,     0,     0,     0,     0,     0,     0,  1081,  1081,
       0,  1081,     0,     0,     0,     0,     0,     0,   836,     0,
       0,     0,     0,     0,     0,     0,  1081,     0,  1081,     0,
       0,  1088,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1091,     0,  1083,  1083,     0,  1083,     0,     0,     0,
       0,  1080,     0,  1089,  1088,     0,     0,     0,     0,  1084,
       0,  1083,     0,  1083,     0,     0,     0,  1081,     0,     0,
       0,   589,     0,     0,  1086,  1086,     0,     0,     0,     0,
    1090,     0,   589,     0,     0,     0,  1088,  1780,     0,     0,
       0,     0,     0,     0,  1088,     0,  1084,  1081,     0,  1087,
    1087,     0,  1083,     0,     0,     0,  1384,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1081,  1090,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1083,     0,     0,  1781,     0,     0,     0,     0,
       0,  1086,  1782,  1783,  1784,     0,     0,  1086,  1091,  1081,
       0,     0,     0,  1083,     0,     0,     0,     0,     0,     0,
    1081,     0,     0,  1086,     0,     0,  1087,     0,     0,     0,
       0,  1081,  1087,  1080,   589,     0,     0,     0,     0,  1785,
       0,     0,     0,     0,  1083,     0,     0,     0,  1087,     0,
       0,     0,     0,     0,     0,  1083,     0,     0,  1089,     0,
       0,     0,     0,     0,     0,     0,  1083,     0,     0,     0,
       0,     0,   589,     0,     0,  1091,  1786,  1089,     0,     0,
    1787,     0,     0,     0,  1089,     0,     0,  1086,     0,  1088,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1090,     0,     0,     0,     0,     0,  1081,     0,     0,     0,
       0,     0,  1087,     0,     0,     0,     0,  1788,     0,     0,
       0,     0,     0,     0,  1086,     0,     0,     0,     0,     0,
    1090,     0,  1789,  1790,  1791,  1792,  1793,     0,  1794,     0,
       0,  1083,  1081,     0,  1084,  1084,     0,  1084,     0,  1087,
       0,     0,     0,  1090,     0,     0,  1081,     0,     0,     0,
       0,     0,  1084,     0,  1084,  1795,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1083,  1080,  1081,
       0,     0,  1089,     0,     0,  1090,     0,     0,     0,     0,
       0,  1083,     0,  1090,  1796,     0,     0,  1080,     0,  1088,
    1088,     0,     0,  1084,  1080,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1083,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1797,  1246,  1798,     0,
       0,     0,     0,  1084,     0,  1248,     0,     0,     0,     0,
    1249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1799,     0,     0,     0,  1084,     0,     0,  1800,     0,     0,
    1801,     0,     0,     0,  1081,     0,  1088,     0,     0,     0,
       0,     0,  1088,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1084,     0,     0,  1088,  1089,
       0,     0,     0,     0,     0,     0,  1084,     0,     0,  1083,
       0,     0,  1080,     0,     0,     0,     0,  1084,     0,     0,
       0,     0,  1086,  1086,     0,  1086,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1090,  1081,
    1086,     0,  1086,     0,     0,     0,     0,  1087,  1087,     0,
    1087,     0,     0,     0,  1250,     0,     0,     0,  1251,     0,
       0,     0,  1088,     0,     0,  1087,  1089,  1087,     0,     0,
       0,     0,     0,     0,  1083,     0,     0,  1252,  1253,     0,
       0,  1086,     0,     0,     0,     0,     0,     0,     0,     0,
    1254,     0,  1084,     0,     0,     0,     0,     0,     0,  1088,
       0,     0,     0,     0,     0,     0,  1087,     0,     0,     0,
       0,  1086,     0,     0,     0,   821,     0,     0,     0,  1080,
       0,  1255,     0,     0,  1256,     0,     0,     0,  1084,     0,
       0,     0,  1086,     0,     0,     0,  1087,  1257,     0,  1258,
       0,     0,  1084,     0,     0,     0,     0,     0,  1384,  1384,
       0,     0,     0,     0,     0,     0,     0,  1087,     0,     0,
       0,  1081,     0,  1086,     0,  1084,     0,     0,     0,     0,
       0,     0,     0,     0,  1086,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1086,  1080,     0,  1087,     0,
       0,     0,     0,     0,     0,  1259,  1083,     0,     0,  1087,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1087,     0,     0,     0,     0,  1090,     0,   957,     0,     0,
       0,  1090,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1090,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1084,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1086,     0,     0,     0,  1260,     0,     0,  1261,  1262,  1263,
       0,  1264,  1265,  1266,  1267,  1268,  1269,     0,     0,     0,
       0,  1645,  1270,     0,     0,  1087,     0,  1088,  1088,     0,
    1088,     0,     0,     0,     0,     0,  1086,     0,     0,     0,
       0,  1090,     0,     0,     0,  1088,  1081,  1088,     0,     0,
    1086,     0,     0,     0,     0,  1084,     0,     0,     0,     0,
       0,  1087,     0,     0,     0,  1081,     0,     0,     0,     0,
       0,     0,  1081,  1086,     0,  1087,  1192,     0,  1090,     0,
       0,  1083,     0,     0,     0,     0,  1088,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1087,     0,
    1083,     0,     0,  1216,     0,     0,     0,  1083,     0,     0,
       0,     0,     0,     0,     0,     0,  1088,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1235,  1236,     0,  1238,     0,     1,     0,  1088,     0,     0,
       0,     0,     0,     0,     0,     2,     3,     4,     0,     0,
       0,  1275,     0,     0,     0,     0,     0,     0,  1086,     0,
       5,     0,     0,     0,     0,     0,     0,     0,  1088,     0,
    1081,     0,     0,     0,     0,     0,     0,  1084,     6,  1088,
       7,     8,     0,  1087,     0,     9,    10,     0,     0,     0,
    1088,     0,     0,    11,    12,     0,     0,     0,     0,     0,
    1326,     0,     0,  1333,  1335,  1083,     0,     0,     0,    13,
       0,     0,    14,     0,     0,     0,     0,     0,    15,     0,
       0,     0,     0,  1086,     0,     0,     0,    16,     0,     0,
       0,     0,     0,    17,     0,     0,     0,     0,    18,     0,
      19,     0,     0,     0,    20,     0,  1272,     0,  1087,     0,
       0,     0,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,  1088,  1384,  1384,     0,  1384,
       0,     0,     0,     0,     0,     0,     0,  1081,     0,     0,
      22,     0,     0,     0,  1090,     0,  1090,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1088,     0,    23,    24,     0,     0,     0,     0,    25,
       0,     0,  1083,     0,     0,  1088,     0,    26,     0,     0,
       0,     0,  1084,     0,     0,  1090,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,     0,     0,  1088,     0,
       0,  1084,     0,     0,  1081,  1086,  1246,     0,  1084,  1996,
       0,     0,     0,     0,  1248,  1090,     0,     0,     0,  1249,
       0,     0,     0,    28,     0,     0,     0,     0,     0,     0,
    1087,     0,     0,     0,     0,    29,  1384,    30,     0,  1083,
       0,    31,  1272,     0,     0,    32,     0,     0,    33,     0,
       0,     0,    34,     0,     0,     0,     0,    35,     0,     0,
       0,     0,    36,     0,     0,    37,     0,  1090,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,  1090,     0,
       0,     0,     0,  1088,     0,     0,     0,     0,     0,  1384,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
       0,     0,     0,     0,     0,     0,  1084,    40,     0,    41,
       0,     0,    42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1250,     0,  1246,     0,  1251,     0,     0,
       0,     0,     0,  1248,     0,     0,     0,     0,  1249,     0,
       0,     0,     0,     0,     0,     0,  1252,  1253,  1088,     0,
    1086,    43,     0,     0,     0,     0,     0,     0,     0,  1254,
       0,     0,     0,     0,  1090,  1246,     0,     0,     0,  1086,
       0,     0,     0,  1248,     0,  1087,  1086,     0,  1249,     0,
    1591,     0,     0,     0,  1593,     0,     0,     0,     0,     0,
    1255,     0,     0,  1256,  1087,     0,     0,     0,     0,     0,
    1090,  1087,     0,  1615,     0,     0,  1257,  1618,  1258,     0,
    1629,     0,     0,  1084,  1090,     0,     0,  1636,  1641,     0,
       0,     0,     0,     0,     0,     0,  1272,     0,     0,     0,
       0,     0,  1651,     0,     0,     0,  1657,  1090,     0,     0,
    1668,     0,  1250,     0,  1675,     0,  1251,  1677,  1678,  1679,
    1680,  1681,  1682,  1683,  1684,  1685,     0,     0,  1687,     0,
       0,     0,     0,   821,  1259,  1252,  1253,     0,     0,     0,
    1088,     0,     0,     0,  1086,     0,     0,  1272,  1254,     0,
    1084,     0,  1250,     0,     0,     0,  1251,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1087,
       0,  1272,     0,     0,     0,  1252,  1253,  1625,     0,  1255,
       0,     0,  1256,     0,     0,     0,     0,     0,  1254,     0,
    1272,  1272,  1090,  1272,     0,  1257,     0,  1258,     0,     0,
       0,     0,     0,  1260,     0,     0,  1261,  1262,  1263,     0,
    1264,  1265,  1266,  1267,  1268,  1269,     0,     0,  1749,  1255,
       0,  1270,  1256,     0,     0,     0,     0,     0,     0,     0,
    1272,     0,     0,     0,     0,  1257,     0,  1258,     0,     0,
       0,     0,     0,     0,     0,     0,  2015,     0,     0,     0,
       0,  1086,     0,  1259,     0,     0,     0,  1090,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1087,     0,     0,     0,
       0,  1272,     0,     0,     0,  1088,     0,     0,  1272,     0,
    1272,     0,     0,  1259,     0,     0,     0,     0,  1998,     0,
       0,     0,  1845,     0,  1088,     0,     0,     0,     0,     0,
       0,  1088,     0,     0,     0,     0,     0,     0,  1086,     0,
       0,     0,  1260,  1869,     0,  1261,  1262,  1263,     0,  1264,
    1265,  1266,  1267,  1268,  1269,     0,  1246,     0,     0,  2046,
    1270,     0,     0,  1087,  1248,     0,     0,     0,     0,  1249,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1260,     0,     0,  1261,  1262,  1263,     0,  1264,
    1265,  1266,  1267,  1268,  1269,     0,     0,     0,     0,  1090,
    1270,     0,     0,     0,     0,     0,  1950,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1957,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1088,
       0,     0,     0,  1968,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1992,     0,     0,     0,     0,     0,
       0,     0,     0,  1250,     0,     0,     0,  1251,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1252,  1253,  1246,     0,
       0,     0,     0,     0,     0,     0,  1248,     0,     0,  1254,
       0,  1249,     0,  1641,     0,  1641,  1641,     0,     0,     0,
       0,     0,  2054,     0,     0,  1246,     0,     0,     0,     0,
       0,     0,     0,  1248,     0,     0,  1088,     0,  1249,     0,
    1255,     0,     0,  1256,  1090,     0,  2073,     0,  2075,     0,
       0,     0,  2078,     0,     0,     0,  1257,     0,  1258,     0,
       0,     0,     0,  1090,     0,     0,  1272,     0,  1272,     0,
    1090,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1272,     0,     0,  1272,     0,  1625,  1625,  2033,  1326,     0,
    1625,     0,  2051,  1088,  1272,     0,  1335,  1335,  1333,     0,
       0,  1272,     0,     0,  1259,  1250,  1272,  2116,     0,  1251,
       0,     0,     0,     0,     0,     0,  1272,     0,     0,     0,
    1625,  1625,  1272,     0,     0,  1248,     0,     0,  1252,  1253,
    1249,     0,  1250,  1272,     0,     0,  1251,     0,     0,     0,
    1272,  1254,  1272,  1272,  1272,  1272,  1272,  1272,  1272,  1272,
    1272,     0,  1272,     0,     0,  1252,  1253,     0,  1090,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1254,     0,
       0,     0,  1255,  1260,     0,  1256,  1261,  1262,  1263,     0,
    1264,  1265,  1266,  1267,  1268,  1269,     0,     0,  1257,     0,
    1258,  1270,     0,     0,     0,     0,     0,     0,     0,  1255,
       0,     0,  1256,  2347,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1272,  1257,     0,  1258,     0,     0,
       0,     0,     0,  1246,     0,     0,     0,     0,     0,     0,
       0,  1248,     0,     0, -1456,     0,  1249,     0,  1251,     0,
       0,     0,     0,     0,     0,     0,  1259,     0,  1246,     0,
       0,     0,     0,     0,     0,     0,  1248,  1252,  1253,     0,
       0,  1249,     0,     0,     0,  1090,     0,     0,     0,     0,
   -1456,     0,     0,  1259,     0,     0,     0,  1246,     0,     0,
       0,     0,     0,     0,     0,  1248,     0,     0,     0,     0,
    1249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1256,     0,     0,     0,     0,     0,
    1272,     0,     0,     0,     0,  1260,     0,  1257,  1261,  1262,
    1263,     0,  1264,  1265,  1266,  1267,  1268,  1269,     0,     0,
       0,     0,  1090,  1270,  1272,     0,     0,     0,     0,     0,
    1250,     0,  1260,     0,  1251,  1261,  1262,  1263,     0,  1264,
    1265,  1266,  1267,  1268,  1269,     0,     0,  2160,     0,  2296,
    1270,     0,     0,  1252,  1253,  1250,     0,     0,     0,  1251,
       0,  2301,     0,     0,     0, -1456,  1254,  2302,     0,     0,
       0,  2304,     0,     0,     0,     0,     0,     0,  1252,  1253,
       0,     0,     0,     0,  1250,     0,     0,     0,  1251,     0,
       0,  1254,     0,  2321,  2322,     0,     0,  1255,     0,     0,
    1256,     0,     0,     0,     0,  1272,     0,  1252,  1253,     0,
       0,     0,  1272,  1257,  2335,  1258,     0,  2338,     0,  2340,
    1254,     0,  1255,  1272,     0,  1256,  2344,     0,     0,     0,
       0,     0,  2349,     0,  1260,  2352,     0,     0,  1257,     0,
    1258,  1264,  1265,  1266,  1267,  1268,  1269,  1272,     0,     0,
       0,  1255,  1270,     0,  1256,     0,  2365,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1257,     0,  1258,
       0,  1259,     0,  2033,  2033,  1625,     0,     0,  1625,  1625,
    1625,  1625,  1625,  1625,  1625,  1625,  1625,     0,  1625,  2033,
       0,     0,  1246,     0,     0,     0,  1259,     0,     0,     0,
    1248,     0,     0,     0,     0,  1249,     0,     0,     0,  1272,
       0,     0,     0,     0,  2033,  2033,     0,     0,  2295,     0,
       0,  1246,     0,     0,     0,  1259,  1625,  1625,  1272,  1248,
    1272,     0,     0,  1272,  1249,     0,     0,     0,     0,     0,
    1260,     0,     0,  1261,  1262,  1263,     0,  1264,  1265,  1266,
    1267,  1268,  1269,     0,     0,     0,     0,  2184,  1270,     0,
       0,     0,     0,     0,     0,  1260,     0,     0,  1261,  1262,
    1263,  1272,  1264,  1265,  1266,  1267,  1268,  1269,     0,     0,
       0,     0,     0,  1270,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1260,     0,     0,  1261,  1262,  1263,
       0,  1264,  1265,  1266,  1267,  1268,  1269,     0,     0,  1250,
       0,  2332,  1270,  1251,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1252,  1253,     0,     0,     0,     0,  1250,  1968,
       0,     0,  1251,     0,     0,  1254,     0,     0,     0,     0,
       0,  2496,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1252,  1253,  1625,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1254,     0,  1255,     0,     0,  1256,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1257,     0,  1258,     0,     0,     0,     0,     0,
       0,     0,     0,  2515,  2516,  1255,     0,  2518,  1256,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1257,     0,  1258,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1259,  1272,     0,     0,     0,     0,  1272,  1272,     0,  1272,
       0,  2033,     0,     0,     0,  2033,  2033,  2033,  2033,  2033,
    2033,  2033,  2033,  2033,     0,  2033,  1272,  1272,     0,  1259,
       0,     0,     0,     0,     0,  2562,     0,     0,     0,     0,
    1272,  1625,  1625,  1272,     0,  1272,     0,     0,     0,  1272,
    2033,  2033,     0,     0,  1272,     0,     0,  1272,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1260,
    1272,     0,  1261,  1262,  1263,     0,  1264,  1265,  1266,  1267,
    1268,  1269,     0,  2597,     0,     0,  2371,  1270,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1260,  1968,
       0,  1261,  1262,  1263,     0,  1264,  1265,  1266,  1267,  1268,
    1269,     0,     0,     0,     0,  2500,  1270,     0,     0,     0,
       0,     0,     0,  2616,     0,     0,     0,     0,     0,     0,
       0,  2618,     0,     0,     0,     0,  2033,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2623,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2649,     0,     0,     0,     0,     0,     0,
       0,  1272,     0,     0,     0,     0,     0,     0,  1625,     0,
       0,     0,     0,  2033,  2033,     0,     0,     0,  1625,  1625,
    1272,  1272,     0,  1272,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1272,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1272,     0,     0,     0,   156,   157,   158,   159,
     160,   161,   162,   163,  2033,   164,   165,     0,     0,  2033,
    2033,  1272,     0,  1272,   166,   167,     0,   168,  1272,   169,
     170,   171,     0,   172,     0,   173,   174,     0,   175,   176,
     177,   178,     0,     0,   179,   180,   181,   182,     0,   183,
     184,   185,   186,   187,  1272,     0,   188,   189,   190,   191,
       0,   192,   193,   194,   195,     0,   196,   197,   198,     0,
     199,     0,     0,     0,     0,     0,   200,   201,   202,   203,
     204,   205,   206,   207,     0,   208,     0,   209,   210,   211,
     212,   213,     0,   214,     0,     0,   215,   216,   217,   218,
       0,   219,   220,   221,     0,   222,     0,   223,   224,   225,
     226,   227,   228,   229,     0,   230,   231,   232,     0,   233,
       0,   234,     0,     0,     0,   235,   236,     0,   237,   238,
       0,   239,     0,   240,   241,   242,     0,   243,   244,   245,
       0,   246,   247,   248,   249,   250,     0,     0,   251,   252,
     253,   254,   255,   256,   257,     0,   258,     0,   259,     0,
       0,   260,     0,   261,   262,   263,   264,   265,     0,   266,
       0,   267,     0,     0,   268,   269,   270,     0,     0,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,     0,   283,     0,   284,   285,   286,   287,   288,   289,
     290,   291,   292,     0,   293,   294,     0,   295,     0,   296,
     297,   298,   299,     0,     0,   300,     0,     0,     0,   301,
     302,     0,     0,   303,     0,     0,   304,   305,   306,   307,
       0,   308,   309,   310,   311,   312,     0,   313,   314,   315,
     316,   317,   318,   319,   320,     0,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,     0,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,     0,   342,
     343,   344,     0,   345,   346,   347,   348,     0,   349,   350,
       0,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,     0,   361,   362,     0,   363,   364,   365,   366,     0,
     367,   368,     0,   369,     0,   370,   371,   372,   373,     0,
     374,   375,   376,   377,   378,     0,     0,   379,   380,   381,
     382,     0,  2652,   383,   384,   385,   386,   387,   388,     0,
     389,   390,     0,     0,   391,   392,   393,   394,   395,   396,
       0,   397,     0,     0,     0,     0,     0,     0,   156,   157,
     158,   159,   160,   161,   162,   163,  1705,   164,   165,     0,
   -1233,     0,     0,   746,     0, -1233,   166,   167,     0,   168,
     565,   169,   170,   171,   566,   747,   567,   748,   749,     0,
     175,   176,   177,   178,   750,   751,   179,   752,   753,   182,
       0,   183,   184,   185,   186,   754,     0,     0,   188,   189,
     190,   191,     0,   192,   193,   755,   195,     0,   196,   197,
     198,   568,   199,   756,   757,   758,   759,   760,   200,   201,
     202,   203,   204,   761,   762,   207,     0,   208,     0,   209,
     210,   211,   212,   213,     0,   214,  1706,     0,   215,   763,
     217,   218,     0,   219,   220,   221,     0,   222,     0,   223,
     224,   225,   764,   227,   228,   765,   766,   230,   231,   767,
       0,   233,     0,   234,   569,     0,   570,   235,   236,     0,
     237,   768,     0,   239,     0,   240,   241,   242,   571,   243,
     244,   245,     0,   246,   247,   248,   249,   250,     0,   572,
     251,   252,   253,   254,   255,   769,   770,     0,   771,     0,
     259,   573,   574,   260,   575,   261,   262,   263,   264,   265,
       0,   772,   576,   267,   577,     0,   268,   269,   270,   773,
     774,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   775,   578,   776,   402,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   777,   293,   294,   579,   295,
     778,   779,   780,   298,   299,     0,     0,   300,   403,     0,
       0,   781,   302,     0,     0,   303,   580,   581,   782,   305,
     306,   307,     0,   783,   309,   310,   311,   312,     0,   313,
     314,   315,   316,   317,   318,   784,   320,     0,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   582,
     332,   333,   785,   335,   336,   337,   338,   339,   340,   341,
       0,   342,   343,   344,   786,   345,   346,   347,   348,   583,
     349,   787,     0,   351,   352,   353,   354,   355,   356,   357,
     358,   788,   360,     0,   361,   362,     0,   363,   364,   365,
     366,     0,   789,   790,     0,   369,     0,   370,   791,   372,
     792,   793,   374,   375,   376,   377,   378,     0,   794,   379,
     380,   381,   382,   795,     0,   383,   384,   385,   386,   796,
     388,   584,   389,   390,     0,     0,   391,   392,   393,   394,
     395,   396,     0,   797,   798,   497,   799,   800,   801,   802,
     803,     0,     0,     0,     0,   804,   805,  1707,     0,     0,
       0,     0,     0,     0,   807,  1708,   156,   157,   158,   159,
     160,   161,   162,   163,     0,   164,   165,     0,     0,     0,
       0,   746,     0,     0,   166,   167,     0,   168,   565,   169,
     170,   171,   566,   747,   567,   748,   749,     0,   175,   176,
     177,   178,   750,   751,   179,   752,   753,   182,     0,   183,
     184,   185,   186,   754,     0,     0,   188,   189,   190,   191,
       0,   192,   193,   755,   195,     0,   196,   197,   198,   568,
     199,   756,   757,   758,   759,   760,   200,   201,   202,   203,
     204,   761,   762,   207,     0,   208,     0,   209,   210,   211,
     212,   213,     0,   214,     0,     0,   215,   763,   217,   218,
       0,   219,   220,   221,     0,   222,     0,   223,   224,   225,
     764,   227,   228,   765,   766,   230,   231,   767,     0,   233,
       0,   234,   569,     0,   570,   235,   236,     0,   237,   768,
       0,   239,     0,   240,   241,   242,   571,   243,   244,   245,
       0,   246,   247,   248,   249,   250,     0,   572,   251,   252,
     253,   254,   255,   769,   770,     0,   771,     0,   259,   573,
     574,   260,   575,   261,   262,   263,   264,   265,     0,   772,
     576,   267,   577,     0,   268,   269,   270,   773,   774,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     775,   578,   776,   402,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   777,   293,   294,   579,   295,   778,   779,
     780,   298,   299,     0,     0,   300,   403,     0,     0,   781,
     302,     0,     0,   303,   580,   581,   782,   305,   306,   307,
       0,   783,   309,   310,   311,   312,     0,   313,   314,   315,
     316,   317,   318,   784,   320,     0,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   582,   332,   333,
     785,   335,   336,   337,   338,   339,   340,   341,     0,   342,
     343,   344,   786,   345,   346,   347,   348,   583,   349,   787,
       0,   351,   352,   353,   354,   355,   356,   357,   358,   788,
     360,     0,   361,   362,     0,   363,   364,   365,   366,     0,
     789,   790,     0,   369,     0,   370,   791,   372,   792,   793,
     374,   375,   376,   377,   378,     0,   794,   379,   380,   381,
     382,   795,     0,   383,   384,   385,   386,   796,   388,   584,
     389,   390,     0,     0,   391,   392,   393,   394,   395,   396,
       0,   797,   798,   497,   799,   800,   801,   802,   803,     0,
       0,     0,     0,   804,   805,     0,     0,     0,     0,     0,
       0,     0,   807,  1627,   156,   157,   158,   159,   160,   161,
     162,   163,     0,   164,   165,     0,     0,     0,     0,     0,
    1932,     0,   166,   167,     0,   168,     0,   169,   170,   171,
       0,   172,     0,   173,   174,     0,   175,   176,   177,   178,
       0,     0,   179,   180,   181,   182,     0,   183,   184,   185,
     186,   187,     0,     0,   188,   189,   190,   191,     0,   192,
     193,   194,   195,     0,   196,   197,   198,     0,   199,     0,
       0,     0,     0,     0,   200,   201,   202,   203,   204,   205,
     206,   207,     0,   208,     0,   209,   210,   211,   212,   213,
       0,   214,     0,     0,   215,   216,   217,   218,     0,   219,
     220,   221,     0,   222,  -835,   223,   224,   225,   226,   227,
     228,   229,     0,   230,   231,   232,  -835,   233,     0,   234,
       0,     0,     0,   235,   236,     0,   237,   238,     0,   239,
       0,   240,   241,   242,     0,   243,   244,   245,     0,   246,
     247,   248,   249,   250,     0,     0,   251,   252,   253,   254,
     255,   256,   257,  -835,   258,     0,   259,     0,     0,   260,
       0,   261,   262,   263,   264,   265,     0,   266,     0,   267,
       0,  -835,   268,   269,   270,     0,     0,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,     0,
     283,     0,   284,   285,   286,   287,   288,   289,   290,   291,
     292,     0,   293,   294,     0,   295,     0,   296,   297,   298,
     299,     0,  -835,   300,     0,     0,     0,   301,   302,     0,
    -835,   303,     0,     0,   304,   305,   306,   307,     0,   308,
     309,   310,   311,   312,     0,   313,   314,   315,   316,   317,
     318,   319,   320,     0,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,     0,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,     0,   342,   343,   344,
       0,   345,   346,   347,   348,     0,   349,   350,     0,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,     0,
     361,   362,     0,   363,   364,   365,   366,     0,   367,   368,
       0,   369,     0,   370,   371,   372,   373,     0,   374,   375,
     376,   377,   378,  -835,     0,   379,   380,   381,   382,     0,
       0,   383,   384,   385,   386,   387,   388,     0,   389,   390,
       0,     0,   391,   392,   393,   394,   395,   396,     0,   397,
       0,   156,   157,   158,   159,   160,   161,   162,   163,     0,
     164,   165,     0,     0,     0,     0,     0,     0,     0,   166,
     167,   866,   168,   565,   169,   170,   171,   566,  1057,   567,
    1058,  1059,     0,   175,   176,   177,   178,     0,     0,   179,
    1060,  1061,   182,     0,   183,   184,   185,   186,     0,     0,
       0,   188,   189,   190,   191,     0,   192,   193,     0,   195,
       0,   196,   197,   198,   568,   199,     0,     0,     0,     0,
       0,   200,   201,   202,   203,   204,  1062,  1063,   207,     0,
     208,     0,   209,   210,   211,   212,   213,     0,   214,     0,
       0,   215,   763,   217,   218,     0,   219,   220,   221,     0,
     222,     0,   223,   224,   225,     0,   227,   228,     0,     0,
     230,   231,  1064,     0,   233,     0,   234,   569,     0,   570,
     235,   236,     0,   237,     0,     0,   239,     0,   240,   241,
     242,   571,   243,   244,   245,  1373,   246,   247,   248,   249,
     250,     0,   572,  1374,   252,   253,   254,   255,  1065,  1066,
       0,  1067,     0,   259,   573,   574,   260,   575,   261,   262,
     263,   264,   265,     0,     0,   576,   267,   577,     0,   268,
     269,   270,     0,     0,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,  1068,   578,  1069,     0,   284,
     285,   286,   287,   288,   289,   290,     0,   292,     0,   293,
     294,   579,   295,     0,     0,  1070,   298,   299,     0,     0,
     300,     0,     0,     0,   301,   302,     0,     0,  1375,   580,
     581,     0,   305,   306,   307,     0,     0,     0,   310,   311,
     312,     0,   313,   314,   315,   316,   317,   318,  1071,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   582,   332,   333,     0,   335,   336,   337,   338,
     339,   340,   341,     0,   342,   343,   344,     0,   345,  1072,
     347,   348,   583,   349,  1073,     0,   351,   352,   353,   354,
     355,   356,   357,   358,     0,   360,     0,   361,   362,     0,
     363,   364,   365,   366,     0,  1074,  1075,     0,   369,     0,
     370,     0,   372,     0,     0,   374,   375,   376,   377,   378,
       0,     0,   379,   380,   381,   382,     0,     0,   383,   384,
     385,   386,  1076,   388,   584,   389,   390,     0,     0,   391,
     392,   393,   394,   395,   396,     0,  1376,     0,   156,   157,
     158,   159,   160,   161,   162,   163,     0,   164,   165,     0,
       0,     0,     0,   746,     0,     0,   166,   167,  1377,   168,
     565,   169,   170,   171,   566,   747,   567,   748,   749,  1637,
     175,   176,   177,   178,   750,   751,   179,   752,   753,   182,
       0,   183,   184,   185,   186,   754,     0,     0,   188,   189,
     190,   191,     0,   192,   193,   755,   195,     0,   196,   197,
     198,   568,   199,   756,   757,   758,   759,   760,   200,   201,
     202,   203,   204,   761,   762,   207,     0,   208,     0,   209,
     210,   211,   212,   213,     0,   214,     0,     0,   215,   763,
     217,   218,     0,   219,   220,   221,     0,   222,     0,   223,
     224,   225,   764,   227,   228,   765,   766,   230,   231,   767,
       0,   233,     0,   234,   569,  1638,   570,   235,   236,     0,
     237,   768,     0,   239,     0,   240,   241,   242,   571,   243,
     244,   245,     0,   246,   247,   248,   249,   250,     0,   572,
     251,   252,   253,   254,   255,   769,   770,     0,   771,     0,
     259,   573,   574,   260,   575,   261,   262,   263,   264,   265,
    1639,   772,   576,   267,   577,     0,   268,   269,   270,   773,
     774,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   775,   578,   776,   402,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   777,   293,   294,   579,   295,
     778,   779,   780,   298,   299,     0,     0,   300,   403,     0,
       0,   781,   302,     0,     0,   303,   580,   581,   782,   305,
     306,   307,     0,   783,   309,   310,   311,   312,     0,   313,
     314,   315,   316,   317,   318,   784,   320,     0,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   582,
     332,   333,   785,   335,   336,   337,   338,   339,   340,   341,
       0,   342,   343,   344,   786,   345,   346,   347,   348,   583,
     349,   787,     0,   351,   352,   353,   354,   355,   356,   357,
     358,   788,   360,     0,   361,   362,     0,   363,   364,   365,
     366,     0,   789,   790,     0,   369,  1640,   370,   791,   372,
     792,   793,   374,   375,   376,   377,   378,     0,   794,   379,
     380,   381,   382,   795,     0,   383,   384,   385,   386,   796,
     388,   584,   389,   390,     0,     0,   391,   392,   393,   394,
     395,   396,     0,   797,   798,   497,   799,   800,   801,   802,
     803,     0,     0,     0,     0,   804,   805,     0,     0,     0,
       0,     0,     0,     0,   807,   156,   157,   158,   159,   160,
     161,   162,   163,     0,   164,   165,     0,     0,     0,     0,
     746,     0,     0,   166,   167,     0,   168,   565,   169,   170,
     171,   566,   747,   567,   748,   749,     0,   175,   176,   177,
     178,   750,   751,   179,   752,   753,   182,     0,   183,   184,
     185,   186,   754,     0,     0,   188,   189,   190,   191,     0,
     192,   193,   755,   195,     0,   196,   197,   198,   568,   199,
     756,   757,   758,   759,   760,   200,   201,   202,   203,   204,
     761,   762,   207,     0,   208,     0,   209,   210,   211,   212,
     213,     0,   214,     0,     0,   215,   763,   217,   218,     0,
     219,   220,   221,     0,   222,     0,   223,   224,   225,   764,
     227,   228,   765,   766,   230,   231,   767,     0,   233,     0,
     234,   569,     0,   570,   235,   236,     0,   237,   768,     0,
     239,     0,   240,   241,   242,   571,   243,   244,   245,     0,
     246,   247,   248,   249,   250,     0,   572,   251,   252,   253,
     254,   255,   769,   770,     0,   771,     0,   259,   573,   574,
     260,   575,   261,   262,   263,   264,   265,     0,   772,   576,
     267,   577,     0,   268,   269,   270,   773,   774,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   775,
     578,   776,   402,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   777,   293,   294,   579,   295,   778,   779,   780,
     298,   299,     0,     0,   300,   403,     0,     0,   781,   302,
       0,     0,   303,   580,   581,   782,   305,   306,   307,     0,
     783,   309,   310,   311,   312,     0,   313,   314,   315,   316,
     317,   318,   784,   320,     0,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   582,   332,   333,   785,
     335,   336,   337,   338,   339,   340,   341,     0,   342,   343,
     344,   786,   345,   346,   347,   348,   583,   349,   787,     0,
     351,   352,   353,   354,   355,   356,   357,   358,   788,   360,
       0,   361,   362,     0,   363,   364,   365,   366,     0,   789,
     790,     0,   369,     0,   370,   791,   372,   792,   793,   374,
     375,   376,   377,   378,     0,   794,   379,   380,   381,   382,
     795,     0,   383,   384,   385,   386,   796,   388,   584,   389,
     390,     0,     0,   391,   392,   393,   394,   395,   396,     0,
     797,   798,   497,   799,   800,   801,   802,   803,     0,     0,
       0,     0,   804,   805,   806,     0,     0,     0,     0,     0,
       0,   807,   156,   157,   158,   159,   160,   161,   162,   163,
       0,   164,   165,     0,     0,     0,     0,   746,     0,     0,
     166,   167,     0,   168,   565,   169,   170,   171,   566,   747,
     567,   748,   749,     0,   175,   176,   177,   178,   750,   751,
     179,   752,   753,   182,     0,   183,   184,   185,   186,   754,
       0,     0,   188,   189,   190,   191,     0,   192,   193,   755,
     195,     0,   196,   197,   198,   568,   199,   756,   757,   758,
     759,   760,   200,   201,   202,   203,   204,   761,   762,   207,
       0,   208,     0,   209,   210,   211,   212,   213,     0,   214,
       0,     0,   215,   763,   217,   218,     0,   219,   220,   221,
       0,   222,     0,   223,   224,   225,   764,   227,   228,   765,
     766,   230,   231,   767,     0,   233,     0,   234,   569,     0,
     570,   235,   236,     0,   237,   768,     0,   239,     0,   240,
     241,   242,   571,   243,   244,   245,     0,   246,   247,   248,
     249,   250,     0,   572,   251,   252,   253,   254,   255,   769,
     770,     0,   771,     0,   259,   573,   574,   260,   575,   261,
     262,   263,   264,   265,     0,   772,   576,   267,   577,     0,
     268,   269,   270,   773,   774,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   775,   578,   776,   402,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   777,
     293,   294,   579,   295,   778,   779,   780,   298,   299,     0,
       0,   300,   403,     0,     0,   781,   302,     0,     0,   303,
     580,   581,   782,   305,   306,   307,     0,   783,   309,   310,
     311,   312,     0,   313,   314,   315,   316,   317,   318,   784,
     320,     0,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   582,   332,   333,   785,   335,   336,   337,
     338,   339,   340,   341,    35,   342,   343,   344,   786,   345,
     346,   347,   348,   583,   349,   787,     0,   351,   352,   353,
     354,   355,   356,   357,   358,   788,   360,     0,   361,   362,
       0,   363,   364,   365,   366,     0,   789,   790,     0,   369,
       0,   370,   791,   372,   792,   793,   374,   375,   376,   377,
     378,     0,   794,   379,   380,   381,   382,   795,     0,   383,
     384,   385,   386,   796,   388,   584,   389,   390,     0,     0,
     391,   392,   393,   394,   395,   396,     0,   797,   798,   497,
     799,   800,   801,   802,   803,     0,     0,     0,     0,   804,
     805,     0,     0,     0,     0,     0,     0,     0,   807,   156,
     157,   158,   159,   160,   161,   162,   163,  1331,   164,   165,
       0,     0,     0,     0,   746,     0,     0,   166,   167,     0,
     168,   565,   169,   170,   171,   566,   747,   567,   748,   749,
       0,   175,   176,   177,   178,   750,   751,   179,   752,   753,
     182,     0,   183,   184,   185,   186,   754,     0,     0,   188,
     189,   190,   191,     0,   192,   193,   755,   195,     0,   196,
     197,   198,   568,   199,   756,   757,   758,   759,   760,   200,
     201,   202,   203,   204,   761,   762,   207,     0,   208,     0,
     209,   210,   211,   212,   213,     0,   214,     0,     0,   215,
     763,   217,   218,     0,   219,   220,   221,     0,   222,     0,
     223,   224,   225,   764,   227,   228,   765,   766,   230,   231,
     767,     0,   233,     0,   234,   569,     0,   570,   235,   236,
       0,   237,   768,     0,   239,     0,   240,   241,   242,   571,
     243,   244,   245,     0,   246,   247,   248,   249,   250,     0,
     572,   251,   252,   253,   254,   255,   769,   770,     0,   771,
       0,   259,   573,   574,   260,   575,   261,   262,   263,   264,
     265,     0,   772,   576,   267,   577,     0,   268,   269,   270,
     773,   774,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   775,   578,   776,   402,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   777,   293,   294,   579,
     295,   778,   779,   780,   298,   299,     0,     0,   300,   403,
       0,     0,   781,   302,     0,     0,   303,   580,   581,   782,
     305,   306,   307,     0,   783,   309,   310,   311,   312,     0,
     313,   314,   315,   316,   317,   318,   784,   320,     0,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     582,   332,   333,   785,   335,   336,   337,   338,   339,   340,
     341,     0,   342,   343,   344,   786,   345,   346,   347,   348,
     583,   349,   787,     0,   351,   352,   353,   354,   355,   356,
     357,   358,   788,   360,     0,   361,   362,     0,   363,   364,
     365,   366,     0,   789,   790,     0,   369,     0,   370,   791,
     372,   792,   793,   374,   375,   376,   377,   378,     0,   794,
     379,   380,   381,   382,   795,     0,   383,   384,   385,   386,
     796,   388,   584,   389,   390,     0,     0,   391,   392,   393,
     394,   395,   396,     0,   797,   798,   497,   799,   800,   801,
     802,   803,     0,     0,     0,     0,   804,   805,     0,     0,
       0,     0,     0,     0,     0,   807,   156,   157,   158,   159,
     160,   161,   162,   163,     0,   164,   165,     0,     0,     0,
       0,   746,     0,     0,   166,   167,     0,   168,   565,   169,
     170,   171,   566,   747,   567,   748,   749,     0,   175,   176,
     177,   178,   750,   751,   179,   752,   753,   182,     0,   183,
     184,   185,   186,   754,     0,     0,   188,   189,   190,   191,
       0,   192,   193,   755,   195,     0,   196,   197,   198,   568,
     199,   756,   757,   758,   759,   760,   200,   201,   202,   203,
     204,   761,   762,   207,     0,   208,     0,   209,   210,   211,
     212,   213,     0,   214,     0,     0,   215,   763,   217,   218,
       0,   219,   220,   221,     0,   222,     0,   223,   224,   225,
     764,   227,   228,   765,   766,   230,   231,   767,     0,   233,
       0,   234,   569,     0,   570,   235,   236,     0,   237,   768,
       0,   239,     0,   240,   241,   242,   571,   243,   244,   245,
       0,   246,   247,   248,   249,   250,     0,   572,   251,   252,
     253,   254,   255,   769,   770,     0,   771,     0,   259,   573,
     574,   260,   575,   261,   262,   263,   264,   265,     0,   772,
     576,   267,   577,     0,   268,   269,   270,   773,   774,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     775,   578,   776,   402,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   777,   293,   294,   579,   295,   778,   779,
     780,   298,   299,     0,     0,   300,   403,     0,     0,   781,
     302,     0,     0,   303,   580,   581,   782,   305,   306,   307,
       0,   783,   309,   310,   311,   312,     0,   313,   314,   315,
     316,   317,   318,   784,   320,     0,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   582,   332,   333,
     785,   335,   336,   337,   338,   339,   340,   341,     0,   342,
     343,   344,   786,   345,   346,   347,   348,   583,   349,   787,
       0,   351,   352,   353,   354,   355,   356,   357,   358,   788,
     360,     0,   361,   362,     0,   363,   364,   365,   366,     0,
     789,   790,     0,   369,     0,   370,   791,   372,   792,   793,
     374,   375,   376,   377,   378,     0,   794,   379,   380,   381,
     382,   795,     0,   383,   384,   385,   386,   796,   388,   584,
     389,   390,     0,     0,   391,   392,   393,   394,   395,   396,
       0,   797,   798,   497,   799,   800,   801,   802,   803,     0,
       0,     0,     0,   804,   805,     0,     0,     0,     0,     0,
    1187,     0,   807,   156,   157,   158,   159,   160,   161,   162,
     163,     0,   164,   165,     0,     0,     0,     0,   746,     0,
       0,   166,   167,     0,   168,   565,   169,   170,   171,   566,
     747,   567,   748,   749,     0,   175,   176,   177,   178,   750,
     751,   179,   752,   753,   182,     0,   183,   184,   185,   186,
     754,     0,     0,   188,   189,   190,   191,     0,   192,   193,
     755,   195,     0,   196,   197,   198,   568,   199,   756,   757,
     758,   759,   760,   200,   201,   202,   203,   204,   761,   762,
     207,  1967,   208,     0,   209,   210,   211,   212,   213,     0,
     214,     0,     0,   215,   763,   217,   218,     0,   219,   220,
     221,     0,   222,     0,   223,   224,   225,   764,   227,   228,
     765,   766,   230,   231,   767,     0,   233,     0,   234,   569,
       0,   570,   235,   236,     0,   237,   768,     0,   239,     0,
     240,   241,   242,   571,   243,   244,   245,     0,   246,   247,
     248,   249,   250,     0,   572,   251,   252,   253,   254,   255,
     769,   770,     0,   771,     0,   259,   573,   574,   260,   575,
     261,   262,   263,   264,   265,     0,   772,   576,   267,   577,
       0,   268,   269,   270,   773,   774,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   775,   578,   776,
     402,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     777,   293,   294,   579,   295,   778,   779,   780,   298,   299,
       0,     0,   300,   403,     0,     0,   781,   302,     0,     0,
     303,   580,   581,   782,   305,   306,   307,     0,   783,   309,
     310,   311,   312,     0,   313,   314,   315,   316,   317,   318,
     784,   320,     0,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   582,   332,   333,   785,   335,   336,
     337,   338,   339,   340,   341,     0,   342,   343,   344,   786,
     345,   346,   347,   348,   583,   349,   787,     0,   351,   352,
     353,   354,   355,   356,   357,   358,   788,   360,     0,   361,
     362,     0,   363,   364,   365,   366,     0,   789,   790,     0,
     369,     0,   370,   791,   372,   792,   793,   374,   375,   376,
     377,   378,     0,   794,   379,   380,   381,   382,   795,     0,
     383,   384,   385,   386,   796,   388,   584,   389,   390,     0,
       0,   391,   392,   393,   394,   395,   396,     0,   797,   798,
     497,   799,   800,   801,   802,   803,     0,     0,     0,     0,
     804,   805,     0,     0,     0,     0,     0,     0,     0,   807,
     156,   157,   158,   159,   160,   161,   162,   163,     0,   164,
     165,     0,     0,     0,     0,   746,     0,     0,   166,   167,
       0,   168,   565,   169,   170,   171,   566,   747,   567,   748,
     749,     0,   175,   176,   177,   178,   750,   751,   179,   752,
     753,   182,     0,   183,   184,   185,   186,   754,     0,     0,
     188,   189,   190,   191,     0,   192,   193,   755,   195,     0,
     196,   197,   198,   568,   199,   756,   757,   758,   759,   760,
     200,   201,   202,   203,   204,   761,   762,   207,     0,   208,
       0,   209,   210,   211,   212,   213,     0,   214,     0,     0,
     215,   763,   217,   218,     0,   219,   220,   221,     0,   222,
       0,   223,   224,   225,   764,   227,   228,   765,   766,   230,
     231,   767,     0,   233,     0,   234,   569,  1638,   570,   235,
     236,     0,   237,   768,     0,   239,     0,   240,   241,   242,
     571,   243,   244,   245,     0,   246,   247,   248,   249,   250,
       0,   572,   251,   252,   253,   254,   255,   769,   770,     0,
     771,     0,   259,   573,   574,   260,   575,   261,   262,   263,
     264,   265,     0,   772,   576,   267,   577,     0,   268,   269,
     270,   773,   774,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   775,   578,   776,   402,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   777,   293,   294,
     579,   295,   778,   779,   780,   298,   299,     0,     0,   300,
     403,     0,     0,   781,   302,     0,     0,   303,   580,   581,
     782,   305,   306,   307,     0,   783,   309,   310,   311,   312,
       0,   313,   314,   315,   316,   317,   318,   784,   320,     0,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   582,   332,   333,   785,   335,   336,   337,   338,   339,
     340,   341,     0,   342,   343,   344,   786,   345,   346,   347,
     348,   583,   349,   787,     0,   351,   352,   353,   354,   355,
     356,   357,   358,   788,   360,     0,   361,   362,     0,   363,
     364,   365,   366,     0,   789,   790,     0,   369,     0,   370,
     791,   372,   792,   793,   374,   375,   376,   377,   378,     0,
     794,   379,   380,   381,   382,   795,     0,   383,   384,   385,
     386,   796,   388,   584,   389,   390,     0,     0,   391,   392,
     393,   394,   395,   396,     0,   797,   798,   497,   799,   800,
     801,   802,   803,     0,     0,     0,     0,   804,   805,     0,
       0,     0,     0,     0,     0,     0,   807,   156,   157,   158,
     159,   160,   161,   162,   163,     0,   164,   165,     0,     0,
       0,     0,   746,     0,     0,   166,   167,     0,   168,   565,
     169,   170,   171,   566,   747,   567,   748,   749,     0,   175,
     176,   177,   178,   750,   751,   179,   752,   753,   182,     0,
     183,   184,   185,   186,   754,     0,     0,   188,   189,   190,
     191,     0,   192,   193,   755,   195,     0,   196,   197,   198,
     568,   199,   756,   757,   758,   759,   760,   200,   201,   202,
     203,   204,   761,   762,   207,  2364,   208,     0,   209,   210,
     211,   212,   213,     0,   214,     0,     0,   215,   763,   217,
     218,     0,   219,   220,   221,     0,   222,     0,   223,   224,
     225,   764,   227,   228,   765,   766,   230,   231,   767,     0,
     233,     0,   234,   569,     0,   570,   235,   236,     0,   237,
     768,     0,   239,     0,   240,   241,   242,   571,   243,   244,
     245,     0,   246,   247,   248,   249,   250,     0,   572,   251,
     252,   253,   254,   255,   769,   770,     0,   771,     0,   259,
     573,   574,   260,   575,   261,   262,   263,   264,   265,     0,
     772,   576,   267,   577,     0,   268,   269,   270,   773,   774,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   775,   578,   776,   402,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   777,   293,   294,   579,   295,   778,
     779,   780,   298,   299,     0,     0,   300,   403,     0,     0,
     781,   302,     0,     0,   303,   580,   581,   782,   305,   306,
     307,     0,   783,   309,   310,   311,   312,     0,   313,   314,
     315,   316,   317,   318,   784,   320,     0,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   582,   332,
     333,   785,   335,   336,   337,   338,   339,   340,   341,     0,
     342,   343,   344,   786,   345,   346,   347,   348,   583,   349,
     787,     0,   351,   352,   353,   354,   355,   356,   357,   358,
     788,   360,     0,   361,   362,     0,   363,   364,   365,   366,
       0,   789,   790,     0,   369,     0,   370,   791,   372,   792,
     793,   374,   375,   376,   377,   378,     0,   794,   379,   380,
     381,   382,   795,     0,   383,   384,   385,   386,   796,   388,
     584,   389,   390,     0,     0,   391,   392,   393,   394,   395,
     396,     0,   797,   798,   497,   799,   800,   801,   802,   803,
       0,     0,     0,     0,   804,   805,     0,     0,     0,     0,
       0,     0,     0,   807,   156,   157,   158,   159,   160,   161,
     162,   163,     0,   164,   165,     0,     0,     0,     0,   746,
       0,     0,   166,   167,     0,   168,   565,   169,   170,   171,
     566,   747,   567,   748,   749,     0,   175,   176,   177,   178,
     750,   751,   179,   752,   753,   182,     0,   183,   184,   185,
     186,   754,     0,     0,   188,   189,   190,   191,     0,   192,
     193,   755,   195,     0,   196,   197,   198,   568,   199,   756,
     757,   758,   759,   760,   200,   201,   202,   203,   204,   761,
     762,   207,     0,   208,     0,   209,   210,   211,   212,   213,
       0,   214,     0,     0,   215,   763,   217,   218,     0,   219,
     220,   221,     0,   222,     0,   223,   224,   225,   764,   227,
     228,   765,   766,   230,   231,   767,     0,   233,     0,   234,
     569,     0,   570,   235,   236,     0,   237,   768,     0,   239,
       0,   240,   241,   242,   571,   243,   244,   245,     0,   246,
     247,   248,   249,   250,     0,   572,   251,   252,   253,   254,
     255,   769,   770,     0,   771,     0,   259,   573,   574,   260,
     575,   261,   262,   263,   264,   265,     0,   772,   576,   267,
     577,     0,   268,   269,   270,   773,   774,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   775,   578,
     776,   402,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   777,   293,   294,   579,   295,   778,   779,   780,   298,
     299,     0,     0,   300,   403,     0,     0,   781,   302,     0,
       0,   303,   580,   581,   782,   305,   306,   307,     0,   783,
     309,   310,   311,   312,     0,   313,   314,   315,   316,   317,
     318,   784,   320,     0,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   582,   332,   333,   785,   335,
     336,   337,   338,   339,   340,   341,     0,   342,   343,   344,
     786,   345,   346,   347,   348,   583,   349,   787,     0,   351,
     352,   353,   354,   355,   356,   357,   358,   788,   360,     0,
     361,   362,     0,   363,   364,   365,   366,     0,   789,   790,
       0,   369,     0,   370,   791,   372,   792,   793,   374,   375,
     376,   377,   378,     0,   794,   379,   380,   381,   382,   795,
       0,   383,   384,   385,   386,   796,   388,   584,   389,   390,
       0,     0,   391,   392,   393,   394,   395,   396,     0,   797,
     798,   497,   799,   800,   801,   802,   803,     0,     0,     0,
       0,   804,   805,     0,     0,     0,     0,     0,     0,     0,
     807,   156,   157,   158,   159,   160,   161,   162,   163,     0,
     164,   165,     0,     0,     0,     0,   746,     0,     0,   166,
     167,     0,   168,   565,   169,   170,   171,   566,   747,   567,
     748,   749,     0,   175,   176,   177,   178,   750,   751,   179,
     752,   753,   182,     0,   183,   184,   185,   186,   754,     0,
       0,   188,   189,   190,   191,     0,   192,   193,   755,   195,
       0,   196,   197,   198,   568,   199,   756,   757,   758,   759,
     760,   200,   201,   202,   203,   204,   761,   762,   207,     0,
     208,     0,   209,   210,   211,   212,   213,     0,   214,     0,
       0,   215,   763,   217,   218,     0,   219,   220,   221,     0,
     222,     0,   223,   224,   225,   764,   227,   228,   765,   766,
     230,   231,   767,     0,   233,     0,   234,   569,     0,   570,
     235,   236,     0,   237,   768,     0,   239,     0,   240,   241,
     242,   571,   243,   244,   245,     0,   246,   247,   248,   249,
     250,     0,   572,   251,   252,   253,   254,   255,   769,   770,
       0,   771,     0,   259,   573,   574,   260,   575,   261,   262,
     263,   264,   265,     0,   772,   576,   267,   577,     0,   268,
     269,   270,   773,   774,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   775,   578,   776,   402,   284,
     285,   286,   287,   288,   289,   290,   291,   292,     0,   293,
     294,   579,   295,   778,   779,   780,   298,   299,     0,     0,
     300,   403,     0,     0,   781,   302,     0,     0,   303,   580,
     581,   782,   305,   306,   307,     0,   783,   309,   310,   311,
     312,     0,   313,   314,   315,   316,   317,   318,   784,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   582,   332,   333,   785,   335,   336,   337,   338,
     339,   340,   341,     0,   342,   343,   344,   786,   345,   346,
     347,   348,   583,   349,   787,     0,   351,   352,   353,   354,
     355,   356,   357,   358,   788,   360,     0,   361,   362,     0,
     363,   364,   365,   366,     0,   789,   790,     0,   369,     0,
     370,   791,   372,   792,   793,   374,   375,   376,   377,   378,
       0,     0,   379,   380,   381,   382,   795,     0,   383,   384,
     385,   386,   796,   388,   584,   389,   390,     0,     0,   391,
     392,   393,   394,   395,   396,     0,   797,   798,   497,   799,
     800,   801,   802,   803,     0,     0,     0,     0,  1620,  1621,
       0,     0,     0,     0,     0,     0,     0,   807,   156,   157,
     158,   159,   160,   161,   162,   163,     0,   164,   165,     0,
       0,     0,     0,   746,     0,     0,   166,   167,     0,   168,
     565,   169,   170,   171,     0,   747,   567,   748,   749,     0,
     175,   176,   177,   178,   750,   751,   179,   752,   753,   182,
       0,   183,   184,   185,   186,   754,     0,     0,   188,   189,
     190,   191,     0,   192,   193,   755,   195,     0,   196,   197,
     198,   568,   199,   756,   757,   758,   759,   760,   200,   201,
     202,   203,   204,   761,   762,   207,     0,   208,     0,   209,
     210,   211,   212,   213,     0,   214,     0,     0,   215,   763,
     217,   218,     0,   219,   220,   221,     0,     0,     0,   223,
     224,   225,   764,   227,   228,   765,   766,   230,   231,   767,
       0,   233,     0,   234,   569,     0,   570,   235,   236,     0,
     237,   768,     0,   239,     0,   240,   241,   242,     0,   243,
     244,   245,     0,   246,   247,   248,   249,   250,     0,   572,
     251,   252,   253,   254,   255,   769,   770,     0,   771,     0,
     259,   573,   574,   260,   575,   261,   262,   263,   264,   265,
       0,   772,   576,   267,     0,     0,   268,   269,   270,   773,
     774,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   775,   578,   776,   402,   284,   285,   286,   287,
     288,   289,   290,   291,   292,     0,   293,   294,   579,   295,
     778,   779,   780,   298,   299,     0,     0,   300,   403,     0,
       0,   781,   302,     0,     0,   303,   580,   581,   782,   305,
     306,   307,     0,   783,   309,   310,   311,   312,     0,   313,
     314,   315,   316,   317,   318,   784,   320,     0,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   582,
     332,   333,   785,   335,   336,   337,   338,   339,   340,   341,
       0,   342,   343,   344,   786,   345,   346,   347,   348,     0,
     349,   787,     0,   351,   352,   353,   354,   355,   356,   357,
     358,   788,   360,     0,   361,   362,     0,   363,   364,   365,
     366,     0,   789,   790,     0,   369,     0,   370,   791,   372,
     792,   793,   374,   375,   376,   377,   378,     0,   794,   379,
     380,   381,   382,   795,     0,   383,   384,   385,   386,   796,
     388,   584,   389,   390,     0,     0,   391,   392,   393,   394,
     395,   396,     0,   797,   798,   497,   799,   800,   801,   802,
     803,     0,     0,     0,     0,   804,   805,     0,     0,     0,
       0,     0,     0,     0,   807,   156,   157,   158,   159,   160,
     161,   162,   163,     0,   164,   165,     0,     0,     0,     0,
     746,     0,     0,   166,   167,     0,   168,   565,   169,   170,
     171,     0,   747,   567,   748,   749,     0,   175,   176,   177,
     178,   750,   751,   179,   752,   753,   182,     0,   183,   184,
     185,   186,   754,     0,     0,   188,   189,   190,   191,     0,
     192,   193,   755,   195,     0,   196,   197,   198,   568,   199,
     756,   757,   758,   759,   760,   200,   201,   202,   203,   204,
     761,   762,   207,     0,   208,     0,   209,   210,   211,   212,
     213,     0,   214,     0,     0,   215,   763,   217,   218,     0,
     219,   220,   221,     0,     0,     0,   223,   224,   225,   764,
     227,   228,   765,   766,   230,   231,   767,     0,   233,     0,
     234,   569,     0,   570,   235,   236,     0,   237,   768,     0,
     239,     0,   240,   241,   242,     0,   243,   244,   245,     0,
     246,   247,   248,   249,   250,     0,   572,   251,   252,   253,
     254,   255,   769,   770,     0,   771,     0,   259,   573,   574,
     260,   575,   261,   262,   263,   264,   265,     0,   772,   576,
     267,     0,     0,   268,   269,   270,   773,   774,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   775,
     578,   776,   402,   284,   285,   286,   287,   288,   289,   290,
     291,   292,     0,   293,   294,   579,   295,   778,   779,   780,
     298,   299,     0,     0,   300,   403,     0,     0,   781,   302,
       0,     0,   303,   580,   581,   782,   305,   306,   307,     0,
     783,   309,   310,   311,   312,     0,   313,   314,   315,   316,
     317,   318,   784,   320,     0,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   582,   332,   333,   785,
     335,   336,   337,   338,   339,   340,   341,     0,   342,   343,
     344,   786,   345,   346,   347,   348,     0,   349,   787,     0,
     351,   352,   353,   354,   355,   356,   357,   358,   788,   360,
       0,   361,   362,     0,   363,   364,   365,   366,     0,   789,
     790,     0,   369,     0,   370,   791,   372,   792,   793,   374,
     375,   376,   377,   378,     0,     0,   379,   380,   381,   382,
     795,     0,   383,   384,   385,   386,   796,   388,   584,   389,
     390,     0,     0,   391,   392,   393,   394,   395,   396,     0,
     797,   798,   497,   799,   800,   801,   802,   803,     0,     0,
       0,     0,  1620,  1621,     0,     0,     0,     0,     0,     0,
       0,   807,   156,   157,   158,   159,   160,   161,   162,   163,
       0,   164,   165,     0,     0,     0,     0,     0,     0,     0,
     166,   167,     0,   168,   565,   169,   170,   171,   566,   172,
     567,   173,   174,     0,   175,   176,   177,   178,     0,   751,
     179,   180,   181,   182,     0,   183,   184,   185,   186,   754,
       0,     0,   188,   189,   190,   191,     0,   192,   193,   755,
     195,     0,   196,   197,   198,   568,   199,   756,   757,   758,
     759,   760,   200,   201,   202,   203,   204,   205,   206,   207,
       0,   208,     0,   209,   210,   211,   212,   213,     0,   214,
       0,     0,   215,   216,   217,   218,     0,   219,   220,   221,
       0,   222,     0,   223,   224,   225,   226,   227,   228,   765,
       0,   230,   231,   232,     0,   233,     0,   234,   569,     0,
     570,   235,   236,     0,   237,   768,     0,   239,     0,   240,
     241,   242,   571,   243,   244,   245,     0,   246,   247,   248,
     249,   250,     0,   572,   251,   252,   253,   254,   255,   256,
     257,     0,   258,     0,   259,   573,   574,   260,   575,   261,
     262,   263,   264,   265,     0,   772,   576,   267,   577,     0,
     268,   269,   270,   773,   774,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   578,   283,   402,
     284,   285,   286,   287,   288,   289,   290,   291,   292,     0,
     293,   294,   579,   295,     0,   779,   297,   298,   299,     0,
       0,   300,   403,     0,   548,   301,   302,     0,     0,   303,
     580,   581,   782,   305,   306,   307,     0,   783,   309,   310,
     311,   312,     0,   313,   314,   315,   316,   317,   318,   319,
     320,     0,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   582,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,    35,   342,   343,   344,   786,   345,
     346,   347,   348,   583,   349,   350,     0,   351,   352,   353,
     354,   355,   356,   357,   358,   788,   360,     0,   361,   362,
       0,   363,   364,   365,   366,     0,   367,   368,     0,   369,
       0,   370,   791,   372,   792,     0,   374,   375,   376,   377,
     378,     0,     0,   379,   380,   381,   382,   795,     0,   383,
     384,   385,   386,   387,   388,   584,   389,   390,     0,     0,
     391,   392,   393,   394,   395,   396,     0,   585,   156,   157,
     158,   159,   160,   161,   162,   163,     0,   164,   165,     0,
       0,     0,     0,     0,     0,     0,   166,   167,  1521,   168,
     565,   169,   170,   171,   566,   172,   567,   173,   174,     0,
     175,   176,   177,   178,     0,   751,   179,   180,   181,   182,
       0,   183,   184,   185,   186,   754,     0,     0,   188,   189,
     190,   191,     0,   192,   193,   755,   195,     0,   196,   197,
     198,   568,   199,   756,   757,   758,   759,   760,   200,   201,
     202,   203,   204,   205,   206,   207,     0,   208,     0,   209,
     210,   211,   212,   213,     0,   214,     0,     0,   215,   216,
     217,   218,     0,   219,   220,   221,     0,   222,     0,   223,
     224,   225,   226,   227,   228,   765,     0,   230,   231,   232,
       0,   233,     0,   234,   569,     0,   570,   235,   236,     0,
     237,   768,     0,   239,     0,   240,   241,   242,   571,   243,
     244,   245,     0,   246,   247,   248,   249,   250,     0,   572,
     251,   252,   253,   254,   255,   256,   257,     0,   258,     0,
     259,   573,   574,   260,   575,   261,   262,   263,   264,   265,
       0,   772,   576,   267,   577,     0,   268,   269,   270,   773,
     774,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   578,   283,   402,   284,   285,   286,   287,
     288,   289,   290,   291,   292,     0,   293,   294,   579,   295,
       0,   779,   297,   298,   299,     0,     0,   300,   403,     0,
     548,   301,   302,     0,     0,   303,   580,   581,   782,   305,
     306,   307,     0,   783,   309,   310,   311,   312,     0,   313,
     314,   315,   316,   317,   318,   319,   320,     0,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   582,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
       0,   342,   343,   344,   786,   345,   346,   347,   348,   583,
     349,   350,     0,   351,   352,   353,   354,   355,   356,   357,
     358,   788,   360,     0,   361,   362,     0,   363,   364,   365,
     366,     0,   367,   368,     0,   369,     0,   370,   791,   372,
     792,     0,   374,   375,   376,   377,   378,     0,     0,   379,
     380,   381,   382,   795,     0,   383,   384,   385,   386,   387,
     388,   584,   389,   390,     0,     0,   391,   392,   393,   394,
     395,   396,     0,   585,   156,   157,   158,   159,   160,   161,
     162,   163,     0,   164,   165,     0,     0,     0,     0,     0,
       0,     0,   166,   167,  1521,   168,   565,   169,   170,   171,
     566,   172,   567,   173,   174,     0,   175,   176,   177,   178,
       0,   751,   179,   180,   181,   182,     0,   183,   184,   185,
     186,   754,     0,     0,   188,   189,   190,   191,     0,   192,
     193,   755,   195,     0,   196,   197,   198,   568,   199,   756,
     757,   758,   759,   760,   200,   201,   202,   203,   204,   205,
     206,   207,     0,   208,     0,   209,   210,   211,   212,   213,
       0,   214,     0,     0,   215,   216,   217,   218,     0,   219,
     220,   221,     0,   222,     0,   223,   224,   225,   226,   227,
     228,   765,     0,   230,   231,   232,     0,   233,     0,   234,
     569,     0,   570,   235,   236,     0,   237,   768,     0,   239,
       0,   240,   241,   242,   571,   243,   244,   245,     0,   246,
     247,   248,   249,   250,     0,   572,   251,   252,   253,   254,
     255,   256,   257,     0,   258,     0,   259,   573,   574,   260,
     575,   261,   262,   263,   264,   265,     0,   772,   576,   267,
     577,     0,   268,   269,   270,   773,   774,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   578,
     283,   402,   284,   285,   286,   287,   288,   289,   290,   291,
     292,     0,   293,   294,   579,   295,     0,   779,   297,   298,
     299,     0,     0,   300,   403,     0,     0,   301,   302,     0,
       0,   303,   580,   581,   782,   305,   306,   307,     0,   783,
     309,   310,   311,   312,     0,   313,   314,   315,   316,   317,
     318,   319,   320,     0,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   582,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,     0,   342,   343,   344,
     786,   345,   346,   347,   348,   583,   349,   350,     0,   351,
     352,   353,   354,   355,   356,   357,   358,   788,   360,     0,
     361,   362,     0,   363,   364,   365,   366,     0,   367,   368,
       0,   369,     0,   370,   791,   372,   792,     0,   374,   375,
     376,   377,   378,     0,     0,   379,   380,   381,   382,   795,
       0,   383,   384,   385,   386,   387,   388,   584,   389,   390,
       0,     0,   391,   392,   393,   394,   395,   396,     0,   585,
     156,   157,   158,   159,   160,   161,   162,   163,     0,   164,
     165,     0,     0,     0,     0,     0,     0,     0,   166,   167,
    2587,   168,     0,   169,   170,   171,     0,   172,     0,   173,
     174,     0,   175,   176,   177,   178,     0,     0,   179,   180,
     181,   182,     0,   183,   184,   185,   186,   187,     0,     0,
     188,   189,   190,   191,     0,   192,   193,   194,   195,     0,
     196,   197,   198,     0,   199,     0,     0,     0,     0,     0,
     200,   201,   202,   203,   204,   205,   206,   207,     0,   208,
       0,   209,   210,   211,   212,   213,     0,   214,     0,     0,
     215,   216,   217,   218,     0,   219,   220,   221,     0,   222,
       0,   223,   224,   225,   226,   227,   228,   229,     0,   230,
     231,   232,     0,   233,     0,   234,     0,     0,     0,   235,
     236,     0,   237,   238,     0,   239,     0,   240,   241,   242,
       0,   243,   244,   245,     0,   246,   247,   248,   249,   250,
       0,     0,   251,   252,   253,   254,   255,   256,   257,     0,
     258,     0,   259,     0,     0,   260,     0,   261,   262,   263,
     264,   265,     0,   266,     0,   267,     0,     0,   268,   269,
     270,     0,     0,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,     0,   283,   402,   284,   285,
     286,   287,   288,   289,   290,   291,   292,     0,   293,   294,
       0,   295,     0,   296,   297,   298,   299,     0,     0,   300,
     403,     0,     0,   301,   302,     0,     0,   303,     0,     0,
     304,   305,   306,   307,     0,   308,   309,   310,   311,   312,
       0,   313,   314,   315,   316,   317,   318,   319,   320,     0,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,     0,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,     0,   342,   343,   344,     0,   345,   346,   347,
     348,     0,   349,   350,     0,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,     0,   361,   362,     0,   363,
     364,   365,   366,     0,   367,   368,     0,   369,     0,   370,
     371,   372,   373,     0,   374,   375,   376,   377,   378,     0,
       0,   379,   380,   381,   382,     0,     0,   383,   384,   385,
     386,   387,   388,     0,   389,   390,     0,     0,   391,   392,
     393,   394,   395,   396,     0,   397,   156,   157,   158,   159,
     160,   161,   162,   163,     0,   164,   165,     0,     0,     0,
       0,     0,     0,     0,   166,   167,   860,   168,     0,   169,
     170,   171,     0,   172,     0,   173,   174,     0,   175,   176,
     177,   178,     0,     0,   179,   180,   181,   182,     0,   183,
     184,   185,   186,   187,     0,     0,   188,   189,   190,   191,
       0,   192,   193,   194,   195,     0,   196,   197,   198,     0,
     199,     0,     0,     0,     0,     0,   200,   201,   202,   203,
     204,   205,   206,   207,     0,   208,     0,   209,   210,   211,
     212,   213,     0,   214,     0,     0,   215,   216,   217,   218,
       0,   219,   220,   221,     0,   222,     0,   223,   224,   225,
     226,   227,   228,   229,     0,   230,   231,   232,     0,   233,
       0,   234,     0,     0,     0,   235,   236,     0,   237,   238,
       0,   239,     0,   240,   241,   242,     0,   243,   244,   245,
       0,   246,   247,   248,   249,   250,     0,     0,   251,   252,
     253,   254,   255,   256,   257,     0,   258,     0,   259,     0,
       0,   260,     0,   261,   262,   263,   264,   265,     0,   266,
       0,   267,     0,     0,   268,   269,   270,     0,     0,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,     0,   283,     0,   284,   285,   286,   287,   288,   289,
     290,   291,   292,     0,   293,   294,     0,   295,     0,   296,
     297,   298,   299,     0,     0,   300,     0,     0,     0,   301,
     302,     0,     0,   303,     0,     0,   304,   305,   306,   307,
       0,   308,   309,   310,   311,   312,     0,   313,   314,   315,
     316,   317,   318,   319,   320,     0,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,     0,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,    35,   342,
     343,   344,     0,   345,   346,   347,   348,     0,   349,   350,
       0,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,     0,   361,   362,     0,   363,   364,   365,   366,     0,
     367,   368,     0,   369,     0,   370,   371,   372,   373,     0,
     374,   375,   376,   377,   378,     0,     0,   379,   380,   381,
     382,     0,     0,   383,   384,   385,   386,   387,   388,     0,
     389,   390,     0,     0,   391,   392,   393,   394,   395,   396,
       0,   397,   156,   157,   158,   159,   160,   161,   162,   163,
       0,   164,   165,     0,     0,     0,     0,     0,     0,     0,
     166,   167,    43,   168,     0,   169,   170,   171,     0,   172,
       0,   173,   174,     0,   175,   176,   177,   178,     0,     0,
     179,   180,   181,   182,     0,   183,   184,   185,   186,   187,
       0,     0,   188,   189,   190,   191,     0,   192,   193,   194,
     195,     0,   196,   197,   198,     0,   199,     0,     0,     0,
       0,     0,   200,   201,   202,   203,   204,   205,   206,   207,
       0,   208,     0,   209,   210,   211,   212,   213,     0,   214,
       0,     0,   215,   216,   217,   218,     0,   219,   220,   221,
       0,   222,     0,   223,   224,   225,   226,   227,   228,   229,
       0,   230,   231,   232,     0,   233,     0,   234,     0,     0,
       0,   235,   236,     0,   237,   238,     0,   239,     0,   240,
     241,   242,     0,   243,   244,   245,     0,   246,   247,   248,
     249,   250,     0,     0,   251,   252,   253,   254,   255,   256,
     257,     0,   258,     0,   259,     0,     0,   260,     0,   261,
     262,   263,   264,   265,     0,   266,     0,   267,     0,     0,
     268,   269,   270,     0,     0,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,     0,   283,     0,
     284,   285,   286,   287,   288,   289,   290,   291,   292,     0,
     293,   294,     0,   295,     0,   296,   297,   298,   299,     0,
       0,   300,     0,     0,     0,   301,   302,     0,     0,   303,
       0,     0,   304,   305,   306,   307,     0,   308,   309,   310,
     311,   312,     0,   313,   314,   315,   316,   317,   318,   319,
     320,     0,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,     0,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,     0,   342,   343,   344,     0,   345,
     346,   347,   348,     0,   349,   350,     0,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,     0,   361,   362,
       0,   363,   364,   365,   366,     0,   367,   368,     0,   369,
       0,   370,   371,   372,   373,     0,   374,   375,   376,   377,
     378,     0,     0,   379,   380,   381,   382,     0,     0,   383,
     384,   385,   386,   387,   388,     0,   389,   390,     0,     0,
     391,   392,   393,   394,   395,   396,     0,   397,   156,   157,
     158,   159,   160,   161,   162,   163,     0,   164,   165,     0,
       0,     0,     0,     0,     0,     0,   166,   167,  2268,   168,
       0,   169,   170,   171,     0,   172,     0,   173,   174,     0,
     175,   176,   177,   178,     0,     0,   179,   180,   181,   182,
       0,   183,   602,   185,   186,   187,     0,     0,   188,   189,
     190,   191,     0,   192,   193,   194,   195,     0,   196,   197,
     198,     0,   199,     0,     0,     0,     0,     0,   200,   201,
     202,   203,   204,   205,   206,   207,     0,   208,     0,   209,
     210,   211,   212,   213,     0,   214,     0,     0,   215,   216,
     217,   218,     0,   219,   220,   221,     0,   222,     0,   223,
     224,   225,   226,   227,   228,   229,     0,   230,   231,   232,
       0,   233,     0,   234,     0,     0,     0,   235,   236,     0,
     237,   238,     0,   239,     0,   240,   241,   242,     0,   243,
     244,   245,     0,   246,   247,   248,   249,   250,     0,     0,
     251,   252,   253,   254,   255,   256,   257,     0,   258,     0,
     259,     0,     0,   260,     0,   261,   262,   263,   264,   265,
       0,   266,     0,   267,     0,     0,   268,   269,   270,     0,
       0,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,     0,   283,     0,   284,   285,   286,   287,
     288,   289,   290,   291,   292,     0,   293,   294,     0,   295,
       0,   296,   297,   298,   299,     0,     0,   300,     0,     0,
       0,   301,   302,     0,     0,   303,     0,     0,   304,   305,
     306,   307,     0,   308,   309,   310,   311,   312,     0,   313,
     314,   315,   316,   317,   318,   319,   320,     0,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,     0,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
       0,   342,   343,   344,     0,   345,   346,   347,   348,     0,
     349,   350,     0,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,     0,   361,   362,     0,   363,   364,   365,
     366,     0,   367,   368,     0,   369,     0,   370,   371,   372,
     373,     0,   374,   375,   376,   377,   378,     0,     0,   379,
     380,   381,   382,     0,     0,   383,   384,   385,   386,   387,
     388,     0,   389,   390,     0,     0,   391,   392,   393,   394,
     395,   396,     0,   397,     0,     0,     0,     0,   603,     0,
       0,   604,   605,   606,     0,   607,   608,   609,   610,   611,
     612,   156,   157,   158,   159,   160,   161,   162,   163,     0,
     164,   165,     0,     0,     0,     0,     0,     0,     0,   166,
     167,     0,   168,     0,   169,   170,   171,     0,   172,     0,
     173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
     180,   181,   182,     0,   183,   669,   185,   186,   187,     0,
       0,   188,   189,   190,   191,     0,   192,   193,   194,   195,
       0,   196,   197,   198,     0,   199,     0,     0,     0,     0,
       0,   200,   201,   202,   203,   204,   205,   206,   207,     0,
     208,     0,   209,   210,   211,   212,   213,     0,   214,     0,
       0,   215,   216,   217,   218,     0,   219,   220,   221,     0,
     222,     0,   223,   224,   225,   226,   227,   228,   229,     0,
     230,   231,   232,     0,   233,     0,   234,     0,     0,     0,
     235,   236,     0,   237,   238,     0,   239,     0,   240,   241,
     242,     0,   243,   244,   245,     0,   246,   247,   248,   249,
     250,     0,     0,   251,   252,   253,   254,   255,   256,   257,
       0,   258,     0,   259,     0,     0,   260,     0,   261,   262,
     263,   264,   265,     0,   266,     0,   267,     0,     0,   268,
     269,   270,     0,     0,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,     0,   283,     0,   284,
     285,   286,   287,   288,   289,   290,   291,   292,     0,   293,
     294,     0,   295,     0,   296,   297,   298,   299,     0,     0,
     300,     0,     0,     0,   301,   302,     0,     0,   303,     0,
       0,   304,   305,   306,   307,     0,   308,   309,   310,   311,
     312,     0,   313,   314,   315,   316,   317,   318,   319,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,     0,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,     0,   342,   343,   344,     0,   345,   346,
     347,   348,     0,   349,   350,     0,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,     0,   361,   362,     0,
     363,   364,   365,   366,     0,   367,   368,     0,   369,     0,
     370,   371,   372,   373,     0,   374,   375,   376,   377,   378,
       0,     0,   379,   380,   381,   382,     0,     0,   383,   384,
     385,   386,   387,   388,     0,   389,   390,     0,     0,   391,
     392,   393,   394,   395,   396,     0,   397,     0,     0,     0,
       0,   603,     0,     0,   604,   605,   606,     0,   607,   608,
     609,   610,   611,   612,   156,   157,   158,   159,   160,   161,
     162,   163,     0,   164,   165,     0,     0,     0,     0,     0,
       0,     0,   166,   167,     0,   168,     0,   169,   170,   171,
       0,   172,     0,   173,   174,     0,   175,   176,   177,   178,
       0,     0,   179,   180,   181,   182,     0,   183,   697,   185,
     186,   187,     0,     0,   188,   189,   190,   191,     0,   192,
     193,   194,   195,     0,   196,   197,   198,     0,   199,     0,
       0,     0,     0,     0,   200,   201,   202,   203,   204,   205,
     206,   207,     0,   208,     0,   209,   210,   211,   212,   213,
       0,   214,     0,     0,   215,   216,   217,   218,     0,   219,
     220,   221,     0,   222,     0,   223,   224,   225,   226,   227,
     228,   229,     0,   230,   231,   232,     0,   233,     0,   234,
       0,     0,     0,   235,   236,     0,   237,   238,     0,   239,
       0,   240,   241,   242,     0,   243,   244,   245,     0,   246,
     247,   248,   249,   250,     0,     0,   251,   252,   253,   254,
     255,   256,   257,     0,   258,     0,   259,     0,     0,   260,
       0,   261,   262,   263,   264,   265,     0,   266,     0,   267,
       0,     0,   268,   269,   270,     0,     0,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,     0,
     283,     0,   284,   285,   286,   287,   288,   289,   290,   291,
     292,     0,   293,   294,     0,   295,     0,   296,   297,   298,
     299,     0,     0,   300,     0,     0,     0,   301,   302,     0,
       0,   303,     0,     0,   304,   305,   306,   307,     0,   308,
     309,   310,   311,   312,     0,   313,   314,   315,   316,   317,
     318,   319,   320,     0,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,     0,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,     0,   342,   343,   344,
       0,   345,   346,   347,   348,     0,   349,   350,     0,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,     0,
     361,   362,     0,   363,   364,   365,   366,     0,   367,   368,
       0,   369,     0,   370,   371,   372,   373,     0,   374,   375,
     376,   377,   378,     0,     0,   379,   380,   381,   382,     0,
       0,   383,   384,   385,   386,   387,   388,     0,   389,   390,
       0,     0,   391,   392,   393,   394,   395,   396,     0,   397,
       0,     0,     0,     0,   603,     0,     0,   604,   605,   606,
       0,   607,   608,   609,   610,   611,   612,   156,   157,   158,
     159,   160,   161,   162,   163,     0,   164,   165,     0,     0,
       0,     0,     0,     0,     0,   166,   167,     0,   168,     0,
     169,   170,   171,     0,   172,     0,   173,   174,     0,   175,
     176,   177,   178,     0,     0,   179,   180,   181,   182,     0,
     183,  1046,   185,   186,   187,     0,     0,   188,   189,   190,
     191,     0,   192,   193,   194,   195,     0,   196,   197,   198,
       0,   199,     0,     0,     0,     0,     0,   200,   201,   202,
     203,   204,   205,   206,   207,     0,   208,     0,   209,   210,
     211,   212,   213,     0,   214,     0,     0,   215,   216,   217,
     218,     0,   219,   220,   221,     0,   222,     0,   223,   224,
     225,   226,   227,   228,   229,     0,   230,   231,   232,     0,
     233,     0,   234,     0,     0,     0,   235,   236,     0,   237,
     238,     0,   239,     0,   240,   241,   242,     0,   243,   244,
     245,     0,   246,   247,   248,   249,   250,     0,     0,   251,
     252,   253,   254,   255,   256,   257,     0,   258,     0,   259,
       0,     0,   260,     0,   261,   262,   263,   264,   265,     0,
     266,     0,   267,     0,     0,   268,   269,   270,     0,     0,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,     0,   283,     0,   284,   285,   286,   287,   288,
     289,   290,   291,   292,     0,   293,   294,     0,   295,     0,
     296,   297,   298,   299,     0,     0,   300,     0,     0,     0,
     301,   302,     0,     0,   303,     0,     0,   304,   305,   306,
     307,     0,   308,   309,   310,   311,   312,     0,   313,   314,
     315,   316,   317,   318,   319,   320,     0,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,     0,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,     0,
     342,   343,   344,     0,   345,   346,   347,   348,     0,   349,
     350,     0,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,     0,   361,   362,     0,   363,   364,   365,   366,
       0,   367,   368,     0,   369,     0,   370,   371,   372,   373,
       0,   374,   375,   376,   377,   378,     0,     0,   379,   380,
     381,   382,     0,     0,   383,   384,   385,   386,   387,   388,
       0,   389,   390,     0,     0,   391,   392,   393,   394,   395,
     396,     0,   397,     0,     0,     0,     0,   603,     0,     0,
     604,   605,   606,     0,   607,   608,   609,   610,   611,   612,
     156,   157,   158,   159,   160,   161,   162,   163,     0,   164,
     165,     0,     0,     0,     0,     0,     0,     0,   166,   167,
       0,   168,     0,   169,   170,   171,     0,   172,     0,   173,
     174,     0,   175,   176,   177,   178,     0,     0,   179,   180,
     181,   182,     0,   183,   184,   185,   186,   187,     0,     0,
     188,   189,   190,   191,     0,   192,   193,   194,   195,     0,
     196,   197,   198,     0,   199,     0,     0,     0,     0,     0,
     200,   201,   202,   203,   204,   205,   206,   207,     0,   208,
       0,   209,   210,   211,   212,   213,     0,   214,     0,     0,
     215,   216,   217,   218,     0,   219,   220,   221,     0,   222,
       0,   223,   224,   225,   226,   227,   228,   229,     0,   230,
     231,   232,     0,   233,     0,   234,     0,     0,     0,   235,
     236,     0,   237,   238,     0,   239,     0,   240,   241,   242,
       0,   243,   244,   245,     0,   246,   247,   248,   249,   250,
       0,     0,   251,   252,   253,   254,   255,   256,   257,     0,
     258,     0,   259,     0,     0,   260,     0,   261,   262,   263,
     264,   265,     0,   266,     0,   267,     0,     0,   268,   269,
     270,     0,     0,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,     0,   283,     0,   284,   285,
     286,   287,   288,   289,   290,   291,   292,     0,   293,   294,
       0,   295,     0,   296,   297,   298,   299,     0,     0,   300,
       0,     0,     0,   301,   302,     0,     0,   303,     0,     0,
     304,   305,   306,   307,     0,   308,   309,   310,   311,   312,
       0,   313,   314,   315,   316,   317,   318,   319,   320,     0,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,     0,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,     0,   342,   343,   344,     0,   345,   346,   347,
     348,     0,   349,   350,     0,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,     0,   361,   362,     0,   363,
     364,   365,   366,     0,   367,   368,     0,   369,     0,   370,
     371,   372,   373,     0,   374,   375,   376,   377,   378,     0,
       0,   379,   380,   381,   382,     0,     0,   383,   384,   385,
     386,   387,   388,     0,   389,   390,     0,     0,   391,   392,
     393,   394,   395,   396,     0,   397,     0,     0,     0,     0,
     603,     0,     0,   604,   605,   606,     0,   607,   608,   609,
     610,   611,   612,   156,   157,   158,   159,   160,   161,   162,
     163,     0,   164,   165,     0,     0,     0,     0,     0,     0,
       0,   166,   167,     0,   168,     0,   169,   170,   171,     0,
    1057,     0,  1058,  1059,     0,   175,   176,   177,   178,     0,
       0,   179,  1060,  1061,   182,     0,   183,   184,   185,   186,
       0,     0,     0,   188,   189,   190,   191,     0,   192,   193,
       0,   195,     0,   196,   197,   198,     0,   199,     0,     0,
       0,     0,     0,   200,   201,   202,   203,   204,  1062,  1063,
     207,     0,   208,     0,   209,   210,   211,   212,   213,     0,
     214,     0,     0,   215,   763,   217,   218,     0,   219,   220,
     221,     0,   222,     0,   223,   224,   225,     0,   227,   228,
       0,     0,   230,   231,  1064,     0,   233,     0,   234,     0,
       0,     0,   235,   236,     0,   237,     0,     0,   239,     0,
     240,   241,   242,     0,   243,   244,   245,     0,   246,   247,
     248,   249,   250,     0,     0,     0,   252,   253,   254,   255,
    1065,  1066,     0,  1067,     0,   259,     0,     0,   260,     0,
     261,   262,   263,   264,   265,     0,     0,     0,   267,     0,
       0,   268,   269,   270,     0,     0,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,  1068,     0,  1069,
       0,   284,   285,   286,   287,   288,   289,   290,     0,   292,
       0,   293,   294,     0,   295,     0,     0,  1070,   298,   299,
       0,     0,   300,     0,     0,     0,  2177,   302,     0,     0,
       0,     0,     0,     0,   305,   306,   307,     0,     0,     0,
     310,   311,   312,     0,   313,   314,   315,   316,   317,   318,
    1071,   320,     0,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,     0,   332,   333,     0,   335,   336,
     337,   338,   339,   340,   341,     0,   342,   343,   344,     0,
     345,  1072,   347,   348,     0,   349,  1073,     0,   351,   352,
     353,   354,   355,   356,   357,   358,     0,   360,     0,   361,
     362,     0,   363,   364,   365,   366,     0,  1074,  1075,     0,
     369,     0,   370,     0,   372,     0,     0,   374,   375,   376,
     377,   378,     0,     0,   379,   380,   381,   382,     0,     0,
     383,   384,   385,   386,  1076,   388,     0,   389,   390,     0,
       0,   391,   392,   393,   394,   395,   396,     0,  1077,  1291,
     497,     0,     0,   603,   481,     0,   604,   605,   606,     0,
     607,  2178,   609,   610,   611,   612,   156,   157,   158,   159,
     160,   161,   162,   163,   958,   164,   165,   959,   960,   961,
     962,   963,   964,   965,   166,   167,   966,   168,   565,   169,
     170,   171,   566,   172,   567,   173,   174,   967,   175,   176,
     177,   178,   968,   969,   179,   180,   181,   182,   970,   183,
     184,   185,   186,   187,   971,   972,   188,   189,   190,   191,
     973,   192,   193,   194,   195,   974,   196,   197,   198,   568,
     199,   975,   976,   977,   978,   979,   200,   201,   202,   203,
     204,   205,   206,   207,   980,   208,   981,   209,   210,   211,
     212,   213,   982,   214,   983,   984,   215,   216,   217,   218,
     985,   219,   220,   221,   986,   222,   987,   223,   224,   225,
     226,   227,   228,   229,   988,   230,   231,   232,   989,   233,
     990,   234,   569,   991,   570,   235,   236,   992,   237,   238,
     993,   239,   994,   240,   241,   242,   571,   243,   244,   245,
     995,   246,   247,   248,   249,   250,   996,   572,   251,   252,
     253,   254,   255,   256,   257,   997,   258,   998,   259,   573,
     574,   260,   575,   261,   262,   263,   264,   265,   999,   266,
     576,   267,   577,  1000,   268,   269,   270,  1001,  1002,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   578,   283,  1003,   284,   285,   286,   287,   288,   289,
     290,   291,   292,  1004,   293,   294,   579,   295,  1005,   296,
     297,   298,   299,  1006,  1007,   300,  1008,  1009,  1010,   301,
     302,  1011,  1012,   303,   580,   581,   304,   305,   306,   307,
    1013,   308,   309,   310,   311,   312,  1014,   313,   314,   315,
     316,   317,   318,   319,   320,  1015,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   582,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,  1016,   342,
     343,   344,  1017,   345,   346,   347,   348,   583,   349,   350,
    1018,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,  1019,   361,   362,  1020,   363,   364,   365,   366,  1021,
     367,   368,  1022,   369,  1023,   370,   371,   372,   373,  1024,
     374,   375,   376,   377,   378,  1025,  1026,   379,   380,   381,
     382,  1027,  1028,   383,   384,   385,   386,   387,   388,   584,
     389,   390,  1029,  1030,   391,   392,   393,   394,   395,   396,
       0,  1031,   156,   157,   158,   159,   160,   161,   162,   163,
       0,   164,   165,     0,     0,  1032,     0,     0,     0,     0,
     166,   167,     0,   168,     0,   169,   170,   171,     0,   172,
       0,   173,   174,     0,   175,   176,   177,   178,     0,     0,
     179,   180,   181,   182,     0,   183,   184,   185,   186,   187,
       0,     0,   188,   189,   190,   191,     0,   192,   193,   194,
     195,     0,   196,   197,   198,     0,   199,     0,     0,     0,
       0,     0,   200,   201,   202,   203,   204,   205,   206,   207,
       0,   208,     0,   209,   210,   211,   212,   213,     0,   214,
       0,     0,   215,   216,   217,   218,     0,   219,   220,   221,
       0,   222,     0,   223,   224,   225,   226,   227,   228,   229,
       0,   230,   231,   232,     0,   233,     0,   234,     0,     0,
       0,   235,   236,     0,   237,   238,     0,   239,     0,   240,
     241,   242,     0,   243,   244,   245,     0,   246,   247,   248,
     249,   250,     0,     0,   251,   252,   253,   254,   255,   256,
     257,     0,   258,     0,   259,     0,     0,   260,     0,   261,
     262,   263,   264,   265,     0,   266,     0,   267,     0,     0,
     268,   269,   270,     0,     0,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,     0,   283,   402,
     284,   285,   286,   287,   288,   289,   290,   291,   292,     0,
     293,   294,     0,   295,     0,   296,   297,   298,   299,     0,
       0,   300,   403,     0,     0,   301,   302,     0,     0,   303,
       0,     0,   304,   305,   306,   307,     0,   308,   309,   310,
     311,   312,     0,   313,   314,   315,   316,   317,   318,   319,
     320,     0,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,     0,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,     0,   342,   343,   344,     0,   345,
     346,   347,   348,     0,   349,   350,     0,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,     0,   361,   362,
       0,   363,   364,   365,   366,     0,   367,   368,     0,   369,
       0,   370,   371,   372,   373,     0,   374,   375,   376,   377,
     378,     0,     0,   379,   380,   381,   382,     0,     0,   383,
     384,   385,   386,   387,   388,     0,   389,   390,     0,     0,
     391,   392,   393,   394,   395,   396,     0,   397,   156,   157,
     158,   159,   160,   161,   162,   163,     0,   164,   165,     0,
       0,   546,     0,     0,     0,     0,   166,   167,     0,   168,
       0,   169,   170,   171,     0,  1057,     0,  1058,  1059,     0,
     175,   176,   177,   178,     0,     0,   179,  1060,  1061,   182,
       0,   183,   184,   185,   186,     0,     0,     0,   188,   189,
     190,   191,     0,   192,   193,     0,   195,     0,   196,   197,
     198,     0,   199,     0,     0,     0,     0,     0,   200,   201,
     202,   203,   204,  1062,  1063,   207,     0,   208,     0,   209,
     210,   211,   212,   213,     0,   214,     0,     0,   215,   763,
     217,   218,     0,   219,   220,   221,     0,   222,     0,   223,
     224,   225,     0,   227,   228,     0,     0,   230,   231,  1064,
       0,   233,     0,   234,     0,     0,     0,   235,   236,     0,
     237,     0,     0,   239,     0,   240,   241,   242,     0,   243,
     244,   245,     0,   246,   247,   248,   249,   250,     0,     0,
       0,   252,   253,   254,   255,  1065,  1066,     0,  1067,     0,
     259,     0,     0,   260,     0,   261,   262,   263,   264,   265,
       0,     0,     0,   267,     0,     0,   268,   269,   270,     0,
       0,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,  1068,     0,  1069,     0,   284,   285,   286,   287,
     288,   289,   290,     0,   292,     0,   293,   294,     0,   295,
       0,     0,  1070,   298,   299,     0,     0,   300,     0,     0,
       0,   301,   302,     0,     0,     0,     0,     0,     0,   305,
     306,   307,     0,     0,     0,   310,   311,   312,     0,   313,
     314,   315,   316,   317,   318,  1071,   320,     0,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,     0,
     332,   333,     0,   335,   336,   337,   338,   339,   340,   341,
       0,   342,   343,   344,     0,   345,  1072,   347,   348,     0,
     349,  1073,     0,   351,   352,   353,   354,   355,   356,   357,
     358,     0,   360,     0,   361,   362,     0,   363,   364,   365,
     366,     0,  1074,  1075,     0,   369,     0,   370,     0,   372,
       0,     0,   374,   375,   376,   377,   378,     0,     0,   379,
     380,   381,   382,     0,     0,   383,   384,   385,   386,  1076,
     388,     0,   389,   390,     0,     0,   391,   392,   393,   394,
     395,   396,     0,  1077,   156,   157,   158,   159,   160,   161,
     162,   163,     0,   164,   165,     0,     0,  1340,     0,     0,
       0,     0,   166,   167,     0,   168,     0,   169,   170,   171,
       0,   172,     0,   173,   174,     0,   175,   176,   177,   178,
       0,     0,   179,   180,   181,   182,     0,   183,   184,   185,
     186,   187,     0,     0,   188,   189,   190,   191,     0,   192,
     193,   194,   195,     0,   196,   197,   198,     0,   199,     0,
       0,     0,     0,     0,   200,   201,   202,   203,   204,   205,
     206,   207,  1300,   208,     0,   209,   210,   211,   212,   213,
       0,   214,     0,     0,   215,   216,   217,   218,     0,   219,
     220,   221,     0,   222,     0,   223,   224,   225,   226,   227,
     228,   229,  1301,   230,   231,   232,     0,   233,     0,   234,
       0,     0,     0,   235,   236,     0,   237,   238,     0,   239,
       0,   240,   241,   242,     0,   243,   244,   245,     0,   246,
     247,   248,   249,   250,     0,     0,   251,   252,   253,   254,
     255,   256,   257,     0,   258,     0,   259,     0,     0,   260,
       0,   261,   262,   263,   264,   265,     0,   266,     0,   267,
       0,     0,   268,   269,   270,     0,     0,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,     0,
     283,     0,   284,   285,   286,   287,   288,   289,   290,   291,
     292,     0,   293,   294,     0,   295,     0,   296,   297,   298,
     299,  1302,     0,   300,     0,  1303,     0,   301,   302,     0,
       0,   303,     0,     0,   304,   305,   306,   307,     0,   308,
     309,   310,   311,   312,     0,   313,   314,   315,   316,   317,
     318,   319,   320,     0,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,     0,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,     0,   342,   343,   344,
       0,   345,   346,   347,   348,     0,   349,   350,     0,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,     0,
     361,   362,     0,   363,   364,   365,   366,     0,   367,   368,
       0,   369,     0,   370,   371,   372,   373,  1304,   374,   375,
     376,   377,   378,     0,     0,   379,   380,   381,   382,     0,
       0,   383,   384,   385,   386,   387,   388,     0,   389,   390,
       0,     0,   391,   392,   393,   394,   395,   396,     0,   397,
    1291,   845,     0,     0,     0,   481,     0,     0,     0,     0,
       0,     0,  1292,   156,   157,   158,   159,   160,   161,   162,
     163,     0,   164,   165,     0,     0,     0,     0,     0,     0,
       0,   166,   167,     0,   168,     0,   169,   170,   171,     0,
     172,     0,   173,   174,     0,   175,   176,   177,   178,     0,
       0,   179,   180,   181,   182,     0,   183,   184,   185,   186,
     187,     0,     0,   188,   189,   190,   191,     0,   192,   193,
     194,   195,     0,   196,   197,   198,     0,   199,     0,     0,
       0,     0,     0,   200,   201,   202,   203,   204,   205,   206,
     207,     0,   208,     0,   209,   210,   211,   212,   213,     0,
     214,     0,     0,   215,   216,   217,   218,     0,   219,   220,
     221,     0,   222,     0,   223,   224,   225,   226,   227,   228,
     229,  1301,   230,   231,   232,     0,   233,     0,   234,     0,
       0,     0,   235,   236,     0,   237,   238,     0,   239,     0,
     240,   241,   242,     0,   243,   244,   245,     0,   246,   247,
     248,   249,   250,     0,     0,   251,   252,   253,   254,   255,
     256,   257,     0,   258,     0,   259,     0,     0,   260,     0,
     261,   262,   263,   264,   265,     0,   266,     0,   267,     0,
       0,   268,   269,   270,     0,     0,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,     0,   283,
       0,   284,   285,   286,   287,   288,   289,   290,   291,   292,
       0,   293,   294,     0,   295,     0,   296,   297,   298,   299,
    1302,     0,   300,     0,  1303,     0,   301,   302,     0,     0,
     303,     0,     0,   304,   305,   306,   307,     0,   308,   309,
     310,   311,   312,     0,   313,   314,   315,   316,   317,   318,
     319,   320,     0,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,     0,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,     0,   342,   343,   344,     0,
     345,   346,   347,   348,     0,   349,   350,     0,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,     0,   361,
     362,     0,   363,   364,   365,   366,     0,   367,   368,     0,
     369,     0,   370,   371,   372,   373,  1304,   374,   375,   376,
     377,   378,     0,     0,   379,   380,   381,   382,     0,     0,
     383,   384,   385,   386,   387,   388,     0,   389,   390,     0,
       0,   391,   392,   393,   394,   395,   396,     0,   397,  1291,
     845,     0,     0,     0,   481,     0,     0,     0,     0,     0,
       0,  1292,   156,   472,   158,   159,   160,   161,   162,   163,
     473,   164,   165,     0,     0,     0,     0,     0,     0,     0,
     166,   167,     0,   168,     0,   474,   170,   171,     0,   172,
       0,   173,   174,     0,   175,   176,   177,   178,     0,     0,
     179,   180,   181,   182,     0,   183,   184,   185,   186,   187,
       0,     0,   188,   189,   190,   191,     0,   192,   193,   194,
     195,     0,   196,   197,   198,     0,   199,     0,     0,     0,
       0,     0,   200,   201,   202,   203,   204,   205,   206,   207,
       0,   208,     0,   209,   210,   211,   212,   213,     0,   214,
       0,     0,   215,   216,   217,   218,     0,   219,   220,   221,
       0,   222,     0,   223,   224,   225,   226,   227,   228,   229,
       0,   230,   475,   232,     0,   233,     0,   476,     0,     0,
       0,   235,   236,     0,   237,   238,     0,   239,     0,   240,
     241,   242,     0,   243,   244,   245,     0,   246,   247,   248,
     249,   250,     0,     0,   251,   252,   253,   254,   255,   256,
     257,     0,   258,     0,   259,     0,     0,   260,     0,   261,
     262,   263,   264,   477,     0,   266,     0,   267,     0,     0,
     268,   269,   270,     0,     0,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,     0,   283,     0,
     478,   285,   286,   287,   288,   289,   290,   291,   292,     0,
     293,   294,     0,   295,     0,   296,   297,   298,   299,     0,
       0,   300,     0,     0,     0,   301,   302,     0,     0,   303,
       0,     0,   304,   305,   306,   307,     0,   308,   309,   310,
     311,   312,     0,   479,   314,   315,   316,   317,   318,   319,
     320,     0,   321,   480,   323,   324,   325,   326,   327,   328,
     329,   330,   331,     0,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,     0,   342,   343,   344,     0,   345,
     346,   347,   348,     0,   349,   350,     0,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,  1246,   361,   362,
       0,   363,   364,   365,   366,  1248,   367,   368,     0,   369,
    1249,   370,   371,   372,   373,     0,   374,   375,   376,   377,
     378,     0,     0,   379,   380,   381,   382,     0,     0,   383,
     384,   385,   386,   387,   388,     0,   389,   390,  1246,     0,
     391,   392,   393,   394,   395,   396,  1248,   397,     0,     0,
       0,  1249,     0,   481,     0,     0,     0,     0,     0,     0,
     482,     0,     0,     0,     0,  1246,     0,     0,     0,     0,
       0,     0,     0,  1248,     0,     0,     0,     0,  1249,     0,
       0,     0,     0,     0,     0,     0,  1246,     0,     0,     0,
       0,     0,     0,     0,  1248,     0,     0,     0,     0,  1249,
       0,     0,     0,  1246,     0,     0,     0,     0,     0,     0,
       0,  1248,     0,     0,  1250,     0,  1249,     0,  1251,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1252,  1253,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1254,     0,     0,     0,     0,  1250,     0,     0,     0,  1251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1252,  1253,
       0,  1255,  1250,     0,  1256,     0,  1251,     0,     0,     0,
       0,  1254,     0,     0,     0,     0,     0,  1257,     0,  1258,
       0,     0,     0,  1250,     0,  1252,  1253,  1251,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1254,     0,
    1250,     0,  1255,     0,  1251,  1256,  1252,  1253,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1257,  1254,
    1258,     0,     0,  1252,  1253,     0,     0,     0,     0,  1255,
       0,     0,  1256,     0,     0,  1259,  1254,     0,     0,     0,
       0,     0,     0,     0,     0,  1257,     0,  1258,     0,     0,
    1255,     0,     0,  1256,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1257,  1255,  1258,     0,
    1256,     0,     0,     0,     0,     0,  1259,     0,     0,     0,
       0,     0,     0,  1257,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1259,  1260,     0,     0,  1261,  1262,  1263,
       0,  1264,  1265,  1266,  1267,  1268,  1269,     0,     0,     0,
       0,  2519,  1270,     0,  1259,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1259,     0,     0,     0,  1260,     0,     0,  1261,  1262,
    1263,     0,  1264,  1265,  1266,  1267,  1268,  1269,     0,     0,
       0,     0,  2632,  1270,     0,     0,     0,     0,     0,     0,
       0,     0,  1260,     0,     0,  1261,  1262,  1263,     0,  1264,
    1265,  1266,  1267,  1268,  1269,     0,     0,     0,     0,  2694,
    1270,     0,     0,  1260,     0,     0,  1261,  1262,  1263,     0,
    1264,  1265,  1266,  1267,  1268,  1269,     0,     0,     0,     0,
    1260,  1270,     0,  1261,  1262,  1263,     0,  1264,  1265,  1266,
    1267,  1268,  1269,     0,     0,     0,     0,     0,  1270,   156,
     157,   158,   159,   160,   161,   162,   163,     0,   164,   165,
       0,     0,     0,     0,     0,     0,     0,   166,   167,     0,
     168,     0,   169,   170,   171,     0,   172,     0,   173,   174,
       0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
     182,     0,   183,   184,   185,   186,   187,     0,     0,   188,
     189,   190,   191,     0,   192,   193,   194,   195,     0,   196,
     197,   198,     0,   199,     0,     0,     0,     0,     0,   200,
     201,   202,   203,   204,   205,   206,   207,     0,   208,     0,
     209,   210,   211,   212,   213,     0,   214,     0,     0,   215,
     216,   217,   218,     0,   219,   220,   221,     0,   222,     0,
     223,   224,   225,   226,   227,   228,   229,     0,   230,   231,
     232,     0,   233,     0,   234,     0,     0,     0,   235,   236,
       0,   237,   238,     0,   239,     0,   240,   241,   242,     0,
     243,   244,   245,     0,   246,   247,   248,   249,   250,     0,
       0,   251,   252,   253,   254,   255,   256,   257,     0,   258,
       0,   259,     0,     0,   260,     0,   261,   262,   263,   264,
     265,     0,   266,     0,   267,     0,     0,   268,   269,   270,
       0,     0,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,     0,   283,     0,   284,   285,   286,
     287,   288,   289,   290,   291,   292,     0,   293,   294,     0,
     295,     0,   296,   297,   298,   299,     0,     0,   300,     0,
       0,     0,   301,   302,     0,     0,   303,     0,     0,   304,
     305,   306,   307,     0,   308,   309,   310,   311,   312,     0,
     313,   314,   315,   316,   317,   318,   319,   320,     0,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
       0,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,     0,   342,   343,   344,     0,   345,   346,   347,   348,
       0,   349,   350,     0,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,     0,   361,   362,     0,   363,   364,
     365,   366,     0,   367,   368,     0,   369,     0,   370,   371,
     372,   373,     0,   374,   375,   376,   377,   378,     0,     0,
     379,   380,   381,   382,     0,     0,   383,   384,   385,   386,
     387,   388,     0,   389,   390,     0,     0,   391,   392,   393,
     394,   395,   396,     0,   397,  2747,   497,  2748,  2749,     0,
    2750,   156,   157,   158,   159,   160,   161,   162,   163,     0,
     164,   165,     0,     0,     0,     0,     0,     0,     0,   166,
     167,     0,   168,     0,   169,   170,   171,     0,   172,     0,
     173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
     180,   181,   182,     0,   183,   184,   185,   186,   187,     0,
       0,   188,   189,   190,   191,     0,   192,   193,   194,   195,
       0,   196,   197,   198,     0,   199,     0,     0,     0,     0,
       0,   200,   201,   202,   203,   204,   205,   206,   207,  1285,
     208,     0,   209,   210,   211,   212,   213,     0,   214,     0,
       0,   215,   216,   217,   218,     0,   219,   220,   221,     0,
     222,     0,   223,   224,   225,   226,   227,   228,   229,     0,
     230,   231,   232,     0,   233,     0,   234,     0,     0,     0,
     235,   236,     0,   237,   238,     0,   239,     0,   240,   241,
     242,     0,   243,   244,   245,     0,   246,   247,   248,   249,
     250,     0,     0,   251,   252,   253,   254,   255,   256,   257,
       0,   258,     0,   259,     0,     0,   260,     0,   261,   262,
     263,   264,   265,     0,   266,     0,   267,     0,     0,   268,
     269,   270,     0,     0,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,     0,   283,     0,   284,
     285,   286,   287,   288,   289,   290,   291,   292,     0,   293,
     294,     0,   295,     0,   296,   297,   298,   299,     0,     0,
     300,     0,     0,     0,   301,   302,     0,     0,   303,     0,
       0,   304,   305,   306,   307,     0,   308,   309,   310,   311,
     312,     0,   313,   314,   315,   316,   317,   318,   319,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,     0,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,     0,   342,   343,   344,     0,   345,   346,
     347,   348,     0,   349,   350,     0,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,     0,   361,   362,     0,
     363,   364,   365,   366,     0,   367,   368,     0,   369,     0,
     370,   371,   372,   373,     0,   374,   375,   376,   377,   378,
       0,     0,   379,   380,   381,   382,     0,     0,   383,   384,
     385,   386,   387,   388,     0,   389,   390,     0,     0,   391,
     392,   393,   394,   395,   396,     0,   397,     0,   845,   156,
     157,   158,   159,   160,   161,   162,   163,     0,   164,   165,
       0,     0,     0,     0,     0,     0,     0,   166,   167,     0,
     168,     0,   169,   170,   171,     0,   172,     0,   173,   174,
       0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
     182,     0,   183,   184,   185,   186,   187,     0,     0,   188,
     189,   190,   191,     0,   192,   193,   194,   195,     0,   196,
     197,   198,     0,   199,     0,     0,     0,     0,     0,   200,
     201,   202,   203,   204,   205,   206,   207,     0,   208,     0,
     209,   210,   211,   212,   213,     0,   214,     0,     0,   215,
     216,   217,   218,     0,   219,   220,   221,     0,   222,     0,
     223,   224,   225,   226,   227,   228,   229,     0,   230,   231,
     232,     0,   233,     0,   234,     0,     0,     0,   235,   236,
       0,   237,   238,     0,   239,     0,   240,   241,   242,     0,
     243,   244,   245,     0,   246,   247,   248,   249,   250,     0,
       0,   251,   252,   253,   254,   255,   256,   257,     0,   258,
       0,   259,     0,     0,   260,     0,   261,   262,   263,   264,
     265,     0,   266,     0,   267,     0,     0,   268,   269,   270,
       0,     0,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,     0,   283,     0,   284,   285,   286,
     287,   288,   289,   290,   291,   292,     0,   293,   294,     0,
     295,     0,   296,   297,   298,   299,     0,     0,   300,     0,
       0,     0,   301,   302,     0,     0,   303,     0,     0,   304,
     305,   306,   307,     0,   308,   309,   310,   311,   312,     0,
     313,   314,   315,   316,   317,   318,   319,   320,     0,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
       0,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,     0,   342,   343,   344,  1248,   345,   346,   347,   348,
    1249,   349,   350,     0,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,     0,   361,   362,  1248,   363,   364,
     365,   366,  1249,   367,   368,     0,   369,     0,   370,   371,
     372,   373,     0,   374,   375,   376,   377,   378,     0,     0,
     379,   380,   381,   382,     0,     0,   383,   384,   385,   386,
     387,   388,     0,   389,   390,     0,     0,   391,   392,   393,
     394,   395,   396,     0,   397,     0,   845,     0,     0,     0,
    1248,     0,     0,     0,     0,  1249,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1248,     0,     0,     0,     0,
    1249,     0,     0,     0,     0,  2348,     0,     0,     0,     0,
       0,     0,     0,     0,  1250,     0,     0,     0,  1251,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0, -1456,  1252,  1253,     0,
    1251,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1254,     0,     0,     0,     0,     0,     0,     0,  2351,  1252,
    1253,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0, -1456,  2517,     0,     0,     0,     0,     0,     0,
       0,  1255,     0,     0,  1256,     0,     0,     0,     0, -1456,
       0,     0,     0,  1251,     0,     0,     0,  1257,     0,     0,
       0,     0,     0,     0, -1456,     0,  1256,     0,  1251,     0,
       0,     0,  1252,  1253,     0,     0,     0,     0,     0,  1257,
       0,     0,     0,     0,     0, -1456,     0,  1252,  1253,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   -1456,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1259,     0,     0,     0,  1256,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1257,     0,  1256,     0,     0, -1456,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1257,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1260,     0,     0,  1261,  1262,  1263,
   -1456,  1264,  1265,  1266,  1267,  1268,  1269,     0,     0,     0,
       0,     0,  1270,     0,     0, -1456,  1260,     0,     0,     0,
       0,     0,     0,  1264,  1265,  1266,  1267,  1268,  1269,     0,
       0,     0,     0,     0,  1270,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1260,
       0,     0,     0,     0,     0,     0,  1264,  1265,  1266,  1267,
    1268,  1269,     0,     0,  1260,     0,     0,  1270,     0,     0,
       0,  1264,  1265,  1266,  1267,  1268,  1269,     0,     0,     0,
       0,     0,  1270,   156,   157,   158,   159,   160,   161,   162,
     163,   958,   164,   165,   959,   960,   961,   962,   963,   964,
     965,   166,   167,   966,   168,   565,   169,   170,   171,   566,
     172,   567,   173,   174,   967,   175,   176,   177,   178,   968,
     969,   179,   180,   181,   182,   970,   183,   184,   185,   186,
     187,   971,   972,   188,   189,   190,   191,   973,   192,   193,
     194,   195,   974,   196,   197,   198,   568,   199,   975,   976,
     977,   978,   979,   200,   201,   202,   203,   204,   205,   206,
     207,   980,   208,   981,   209,   210,   211,   212,   213,   982,
     214,   983,   984,   215,   216,   217,   218,   985,   219,   220,
     221,   986,   222,   987,   223,   224,   225,   226,   227,   228,
     229,   988,   230,   231,   232,   989,   233,   990,   234,   569,
     991,   570,   235,   236,   992,   237,   238,   993,   239,   994,
     240,   241,   242,   571,   243,   244,   245,   995,   246,   247,
     248,   249,   250,   996,   572,   251,   252,   253,   254,   255,
     256,   257,   997,   258,   998,   259,   573,   574,   260,   575,
     261,   262,   263,   264,   265,   999,   266,   576,   267,   577,
    1000,   268,   269,   270,  1001,  1002,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   578,   283,
    1003,   284,   285,   286,   287,   288,   289,   290,   291,   292,
    1004,   293,   294,   579,   295,  1005,   296,   297,   298,   299,
    1006,  1007,   300,  1008,  1009,  1010,   301,   302,  1011,  1012,
     303,   580,   581,   304,   305,   306,   307,  1013,   308,   309,
     310,   311,   312,  1014,   313,   314,   315,   316,   317,   318,
     319,   320,  1015,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   582,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,  1016,   342,   343,   344,  1017,
     345,   346,   347,   348,   583,   349,   350,  1018,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,  1019,   361,
     362,  1020,   363,   364,   365,   366,  1021,   367,   368,  1022,
     369,  1023,   370,   371,   372,   373,  1024,   374,   375,   376,
     377,   378,  1025,  1026,   379,   380,   381,   382,  1027,  1028,
     383,   384,   385,   386,   387,   388,   584,   389,   390,  1029,
    1030,   391,   392,   393,   394,   395,   396,     0,  1031,   156,
     157,   158,   159,   160,   161,   162,   163,     0,   164,   165,
       0,     0,     0,     0,     0,     0,     0,   166,   167,     0,
     168,   565,   169,   170,   171,   566,   172,   567,   173,   174,
       0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
     182,     0,   183,   184,   185,   186,   187,     0,     0,   188,
     189,   190,   191,     0,   192,   193,   194,   195,     0,   196,
     197,   198,   568,   199,     0,     0,     0,     0,     0,   200,
     201,   202,   203,   204,   205,   206,   207,     0,   208,     0,
     209,   210,   211,   212,   213,     0,   214,     0,     0,   215,
     216,   217,   218,     0,   219,   220,   221,     0,   222,     0,
     223,   224,   225,   226,   227,   228,   229,     0,   230,   231,
     232,     0,   233,     0,   234,   569,     0,   570,   235,   236,
       0,   237,   238,     0,   239,     0,   240,   241,   242,   571,
     243,   244,   245,     0,   246,   247,   248,   249,   250,     0,
     572,   251,   252,   253,   254,   255,   256,   257,     0,   258,
       0,   259,   573,   574,   260,   575,   261,   262,   263,   264,
     265,     0,   266,   576,   267,   577,     0,   268,   269,   270,
       0,     0,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   578,   283,   402,   284,   285,   286,
     287,   288,   289,   290,   291,   292,     0,   293,   294,   579,
     295,     0,   296,   297,   298,   299,     0,     0,   300,   403,
       0,     0,   301,   302,     0,     0,   303,   580,   581,   304,
     305,   306,   307,     0,   308,   309,   310,   311,   312,     0,
     313,   314,   315,   316,   317,   318,   319,   320,     0,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     582,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,     0,   342,   343,   344,     0,   345,   346,   347,   348,
     583,   349,   350,     0,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,     0,   361,   362,     0,   363,   364,
     365,   366,     0,   367,   368,     0,   369,     0,   370,   371,
     372,   373,     0,   374,   375,   376,   377,   378,     0,     0,
     379,   380,   381,   382,     0,     0,   383,   384,   385,   386,
     387,   388,   584,   389,   390,     0,     0,   391,   392,   393,
     394,   395,   396,     0,   585,   156,   157,   158,   159,   160,
     161,   162,   163,     0,   164,   165,     0,     0,     0,     0,
       0,     0,     0,   166,   167,     0,   168,     0,   169,   170,
     171,     0,   172,     0,   173,   174,     0,   175,   176,   177,
     178,     0,     0,   179,   180,   181,   182,  1351,   183,   184,
     185,   186,   187,     0,     0,   188,   189,   190,   191,  1352,
     192,   193,   194,   195,     0,   196,   197,   198,     0,   199,
       0,     0,     0,     0,     0,   200,   201,   202,   203,   204,
     205,   206,   207,     0,   208,     0,   209,   210,   211,   212,
     213,     0,   214,     0,     0,   215,   216,   217,   218,     0,
     219,   220,   221,     0,   222,     0,   223,   224,   225,   226,
     227,   228,   229,     0,   230,   231,   232,     0,   233,  1353,
     234,     0,     0,     0,   235,   236,     0,   237,   238,     0,
     239,     0,   240,   241,   242,     0,   243,   244,   245,     0,
     246,   247,   248,   249,   250,     0,     0,   251,   252,   253,
     254,   255,   256,   257,     0,   258,     0,   259,     0,     0,
     260,     0,   261,   262,   263,   264,   265,     0,   266,     0,
     267,  1901,     0,   268,   269,   270,     0,     0,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
       0,   283,     0,   284,   285,   286,   287,   288,   289,   290,
     291,   292,     0,   293,   294,     0,   295,     0,   296,   297,
     298,   299,     0,     0,   300,     0,     0,     0,   301,   302,
       0,     0,   303,     0,     0,   304,   305,   306,   307,     0,
     308,   309,   310,   311,   312,  1354,   313,   314,   315,   316,
     317,   318,   319,   320,     0,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,     0,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,     0,   342,   343,
     344,     0,   345,   346,   347,   348,     0,   349,   350,     0,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
       0,   361,   362,     0,   363,   364,   365,   366,     0,   367,
     368,     0,   369,     0,   370,   371,   372,   373,     0,   374,
     375,   376,   377,   378,     0,  1355,   379,   380,   381,   382,
       0,     0,   383,   384,   385,   386,   387,   388,     0,   389,
     390,     0,     0,   391,   392,   393,   394,   395,   396,     0,
     397,   156,   157,   158,   159,   160,   161,   162,   163,     0,
     164,   165,     0,     0,     0,     0,     0,     0,     0,   166,
     167,     0,   168,   565,   169,   170,   171,   566,  1057,   567,
    1058,  1059,     0,   175,   176,   177,   178,     0,     0,   179,
    1060,  1061,   182,     0,   183,   184,   185,   186,     0,     0,
       0,   188,   189,   190,   191,     0,   192,   193,     0,   195,
       0,   196,   197,   198,   568,   199,     0,     0,     0,     0,
       0,   200,   201,   202,   203,   204,  1062,  1063,   207,     0,
     208,     0,   209,   210,   211,   212,   213,     0,   214,     0,
       0,   215,   763,   217,   218,     0,   219,   220,   221,     0,
     222,     0,   223,   224,   225,     0,   227,   228,     0,     0,
     230,   231,  1064,     0,   233,     0,   234,   569,     0,   570,
     235,   236,     0,   237,     0,     0,   239,     0,   240,   241,
     242,   571,   243,   244,   245,  1373,   246,   247,   248,   249,
     250,     0,   572,  1374,   252,   253,   254,   255,  1065,  1066,
       0,  1067,     0,   259,   573,   574,   260,   575,   261,   262,
     263,   264,   265,     0,     0,   576,   267,   577,     0,   268,
     269,   270,     0,     0,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,  1068,   578,  1069,     0,   284,
     285,   286,   287,   288,   289,   290,     0,   292,     0,   293,
     294,   579,   295,     0,     0,  1070,   298,   299,     0,     0,
     300,     0,     0,     0,   301,   302,     0,     0,  1375,   580,
     581,     0,   305,   306,   307,     0,     0,     0,   310,   311,
     312,     0,   313,   314,   315,   316,   317,   318,  1071,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   582,   332,   333,     0,   335,   336,   337,   338,
     339,   340,   341,     0,   342,   343,   344,     0,   345,  1072,
     347,   348,   583,   349,  1073,     0,   351,   352,   353,   354,
     355,   356,   357,   358,     0,   360,     0,   361,   362,     0,
     363,   364,   365,   366,     0,  1074,  1075,     0,   369,     0,
     370,     0,   372,     0,     0,   374,   375,   376,   377,   378,
       0,     0,   379,   380,   381,   382,     0,     0,   383,   384,
     385,   386,  1076,   388,   584,   389,   390,     0,     0,   391,
     392,   393,   394,   395,   396,     0,  1376,   156,   157,   158,
     159,   160,   520,   162,   163,   486,   164,   165,     0,     0,
       0,     0,     0,     0,     0,   166,   167,     0,   168,     0,
     169,   170,   171,     0,   172,     0,   173,   174,     0,   175,
     176,   177,   178,     0,     0,   179,   180,   181,   182,     0,
     183,   184,   185,   186,   187,     0,     0,   188,   189,   190,
     191,     0,   192,   193,   194,   195,   487,   196,   197,   198,
       0,   199,     0,     0,     0,     0,     0,   200,   201,   202,
     203,   204,   205,   206,   207,     0,   208,     0,   209,   210,
     211,   212,   213,     0,   214,     0,     0,   215,   216,   217,
     218,     0,   219,   220,   221,     0,   222,     0,   223,   224,
     225,   226,   227,   228,   229,     0,   230,   231,   232,     0,
     233,     0,   234,     0,     0,     0,   235,   236,   521,   237,
     238,     0,   239,     0,   240,   241,   242,     0,   243,   244,
     245,     0,   246,   247,   248,   249,   250,     0,     0,   251,
     252,   253,   254,   255,   256,   257,     0,   258,     0,   259,
       0,     0,   260,     0,   261,   262,   263,   264,   265,     0,
     266,     0,   267,     0,     0,   268,   269,   270,     0,     0,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,     0,   283,     0,   284,   285,   286,   287,   288,
     289,   290,   291,   292,     0,   293,   294,     0,   295,     0,
     296,   297,   298,   299,     0,     0,   300,     0,     0,     0,
     301,   302,     0,     0,   303,     0,     0,   304,   305,   306,
     307,     0,   308,   309,   310,   311,   312,     0,   313,   314,
     315,   316,   317,   318,   319,   320,   488,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,     0,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   489,
     342,   343,   344,     0,   345,   346,   347,   348,     0,   349,
     350,     0,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,     0,   361,   362,     0,   363,   364,   365,   366,
       0,   367,   368,     0,   369,     0,   370,   371,   372,   373,
       0,   374,   375,   376,   377,   378,     0,     0,   379,   380,
     381,   382,     0,     0,   383,   384,   385,   386,   387,   388,
       0,   389,   390,     0,     0,   391,   392,   393,   394,   395,
     396,     0,   397,   156,   157,   158,   159,   160,   161,   162,
     163,   486,   164,   165,     0,     0,     0,     0,     0,     0,
       0,   166,   167,     0,   168,     0,   169,   170,   171,     0,
     172,     0,   173,   174,     0,   175,   176,   177,   178,     0,
       0,   179,   180,   181,   182,     0,   183,   184,   185,   186,
     187,     0,     0,   188,   189,   190,   191,     0,   192,   193,
     194,   195,   487,   196,   197,   198,     0,   199,     0,     0,
       0,     0,     0,   200,   201,   202,   203,   204,   205,   206,
     207,     0,   208,     0,   209,   210,   211,   212,   213,     0,
     214,     0,     0,   215,   216,   217,   218,     0,   219,   220,
     221,     0,   222,     0,   223,   224,   225,   226,   227,   228,
     229,     0,   230,   231,   232,     0,   233,     0,   234,     0,
       0,     0,   235,   236,     0,   237,   238,     0,   239,     0,
     240,   241,   242,     0,   243,   244,   245,     0,   246,   247,
     248,   249,   250,     0,     0,   251,   252,   253,   254,   255,
     256,   257,     0,   258,     0,   259,     0,     0,   260,     0,
     261,   262,   263,   264,   265,     0,   266,     0,   267,     0,
       0,   268,   269,   270,     0,     0,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,     0,   283,
       0,   284,   285,   286,   287,   288,   289,   290,   291,   292,
       0,   293,   294,     0,   295,     0,   296,   297,   298,   299,
       0,     0,   300,     0,     0,     0,   301,   302,     0,     0,
     303,     0,     0,   304,   305,   306,   307,     0,   308,   309,
     310,   311,   312,     0,   313,   314,   315,   316,   317,   318,
     319,   320,   488,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,     0,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   489,   342,   343,   344,     0,
     345,   346,   347,   348,     0,   349,   350,     0,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,     0,   361,
     362,     0,   363,   364,   365,   366,     0,   367,   368,     0,
     369,     0,   370,   371,   372,   373,     0,   374,   375,   376,
     377,   378,     0,     0,   379,   380,   381,   382,     0,     0,
     383,   384,   385,   386,   387,   388,     0,   389,   390,     0,
       0,   391,   392,   393,   394,   395,   396,     0,   397,   156,
     157,   158,   159,   160,   161,   162,   163,     0,   164,   165,
       3,     4,     0,     0,     0,     0,     0,   166,   167,     0,
     168,     0,   169,   170,   171,     0,   172,     0,   173,   174,
       0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
     182,     0,   183,   184,   185,   186,   187,     0,     0,   188,
     189,   190,   191,     0,   192,   193,   194,   195,     0,   196,
     197,   198,     0,   199,     0,     0,     0,     0,     0,   200,
     201,   202,   203,   204,   205,   206,   207,     0,   208,     0,
     209,   210,   211,   212,   213,     0,   214,     0,     0,   215,
     216,   217,   218,     0,   219,   220,   221,     0,   222,     0,
     223,   224,   225,   226,   227,   228,   229,     0,   230,   231,
     232,     0,   233,     0,   234,     0,     0,     0,   235,   236,
       0,   237,   238,     0,   239,     0,   240,   241,   242,     0,
     243,   244,   245,     0,   246,   247,   248,   249,   250,     0,
       0,   251,   252,   253,   254,   255,   256,   257,     0,   258,
       0,   259,     0,     0,   260,     0,   261,   262,   263,   264,
     265,     0,   266,     0,   267,     0,     0,   268,   269,   270,
       0,     0,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,     0,   283,   402,   284,   285,   286,
     287,   288,   289,   290,   291,   292,     0,   293,   294,     0,
     295,     0,   296,   297,   298,   299,     0,     0,   300,   403,
       0,     0,   301,   302,     0,     0,   303,     0,     0,   304,
     305,   306,   307,     0,   308,   309,   310,   311,   312,     0,
     313,   314,   315,   316,   317,   318,   319,   320,     0,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
       0,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,     0,   342,   343,   344,     0,   345,   346,   347,   348,
       0,   349,   350,     0,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,     0,   361,   362,     0,   363,   364,
     365,   366,     0,   367,   368,     0,   369,     0,   370,   371,
     372,   373,     0,   374,   375,   376,   377,   378,     0,     0,
     379,   380,   381,   382,     0,     0,   383,   384,   385,   386,
     387,   388,     0,   389,   390,     0,     0,   391,   392,   393,
     394,   395,   396,     0,   397,   156,   157,   158,   159,   160,
     161,   162,   163,     0,   164,   165,     0,     0,     0,     0,
       0,     0,     0,   166,   167,     0,   168,     0,   169,   170,
     171,     0,   172,     0,   173,   174,     0,   175,   176,   177,
     178,     0,     0,   179,   180,   181,   182,     0,   183,   184,
     185,   186,   187,     0,     0,   188,   189,   190,   191,     0,
     192,   193,   194,   195,     0,   196,   197,   198,     0,   199,
       0,     0,     0,     0,     0,   200,   201,   202,   203,   204,
     205,   206,   207,     0,   208,     0,   209,   210,   211,   212,
     213,     0,   214,     0,     0,   215,   216,   217,   218,     0,
     219,   220,   221,     0,   222,     0,   223,   224,   225,   226,
     227,   228,   229,     0,   230,   231,   232,     0,   233,     0,
     234,     0,     0,     0,   235,   236,     0,   237,   238,     0,
     239,     0,   240,   241,   242,     0,   243,   244,   245,     0,
     246,   247,   248,   249,   250,     0,     0,   251,   252,   253,
     254,   255,   256,   257,     0,   258,     0,   259,     0,     0,
     260,     0,   261,   262,   263,   264,   265,     0,   266,     0,
     267,     0,     0,   268,   269,   270,     0,     0,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
       0,   283,   402,   284,   285,   286,   287,   288,   289,   290,
     291,   292,     0,   293,   294,     0,   295,     0,   296,   297,
     298,   299,     0,     0,   300,   403,     0,   548,   301,   302,
       0,     0,   303,     0,     0,   304,   305,   306,   307,     0,
     308,   309,   310,   311,   312,     0,   313,   314,   315,   316,
     317,   318,   319,   320,     0,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,     0,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,     0,   342,   343,
     344,     0,   345,   346,   347,   348,     0,   349,   350,     0,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
       0,   361,   362,     0,   363,   364,   365,   366,     0,   367,
     368,     0,   369,     0,   370,   371,   372,   373,     0,   374,
     375,   376,   377,   378,     0,     0,   379,   380,   381,   382,
       0,     0,   383,   384,   385,   386,   387,   388,     0,   389,
     390,     0,     0,   391,   392,   393,   394,   395,   396,     0,
     397,   156,   157,   158,   159,   160,   161,   162,   163,     0,
     164,   165,     0,     0,     0,     0,     0,     0,     0,   166,
     167,     0,   168,     0,   169,   170,   171,     0,   172,     0,
     173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
     180,   181,   182,     0,   183,   184,   185,   186,   187,     0,
       0,   188,   189,   190,   191,     0,   192,   193,   194,   195,
       0,   196,   197,   198,     0,   199,     0,     0,     0,     0,
       0,   200,   201,  1152,   203,   204,   205,   206,   207,     0,
     208,     0,   209,   210,   211,   212,   213,     0,   214,     0,
       0,   215,   216,   217,   218,     0,   219,   220,   221,     0,
     222,     0,   223,   224,   225,   226,   227,   228,   229,     0,
     230,   231,   232,     0,   233,     0,   234,     0,     0,     0,
    1153,   236,     0,   237,   238,     0,   239,     0,   240,   241,
     242,     0,   243,   244,   245,     0,   246,   247,   248,   249,
     250,     0,     0,   251,   252,   253,   254,   255,   256,   257,
       0,   258,     0,   259,     0,     0,   260,     0,   261,   262,
    1154,   264,   265,     0,   266,     0,   267,     0,     0,   268,
     269,   270,     0,     0,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,     0,   283,   402,   284,
     285,   286,   287,   288,   289,   290,   291,   292,     0,   293,
     294,     0,   295,     0,   296,   297,   298,   299,     0,     0,
     300,   403,     0,     0,   301,   302,     0,     0,   303,     0,
       0,   304,   305,   306,   307,     0,   308,   309,   310,   311,
     312,     0,   313,   314,   315,   316,   317,   318,   319,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,     0,   332,   333,   334,   335,   336,   337,  1155,
     339,   340,   341,     0,   342,   343,   344,     0,   345,   346,
     347,   348,     0,   349,   350,     0,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,     0,   361,   362,  1156,
    1157,   364,   365,   366,     0,   367,   368,     0,   369,     0,
     370,   371,   372,   373,     0,   374,   375,   376,   377,   378,
       0,     0,   379,   380,   381,   382,     0,     0,   383,   384,
     385,   386,   387,   388,     0,   389,   390,     0,     0,   391,
     392,   393,   394,   395,   396,     0,   397,   156,   157,   158,
     159,   160,   161,   162,   163,     0,   164,   165,     0,     0,
       0,     0,     0,     0,     0,   166,   167,     0,   168,     0,
     169,   170,   171,     0,   172,     0,   173,   174,     0,   175,
     176,   177,   178,     0,     0,   179,   180,   181,   182,     0,
     183,   184,   185,   186,   187,     0,     0,   188,   189,   190,
     191,     0,   192,   193,   194,   195,   487,   196,   197,   198,
       0,   199,     0,     0,     0,     0,     0,   200,   201,   202,
     203,   204,   205,   206,   207,     0,   208,     0,   209,   210,
     211,   212,   213,     0,   214,     0,     0,   215,   216,   217,
     218,     0,   219,   220,   221,     0,   222,     0,   223,   224,
     225,   226,   227,   228,   229,     0,   230,   231,   232,     0,
     233,     0,   234,     0,     0,     0,   235,   236,     0,   237,
     238,     0,   239,     0,   240,   241,   242,     0,   243,   244,
     245,     0,   246,   247,   248,   249,   250,     0,     0,   251,
     252,   253,   254,   255,   256,   257,     0,   258,     0,   259,
       0,     0,   260,     0,   261,   262,   263,   264,   265,     0,
     266,     0,   267,     0,     0,   268,   269,   270,     0,     0,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,     0,   283,     0,   284,   285,   286,   287,   288,
     289,   290,   291,   292,     0,   293,   294,     0,   295,     0,
     296,   297,   298,   299,     0,     0,   300,     0,     0,     0,
     301,   302,     0,     0,   303,     0,     0,   304,   305,   306,
     307,     0,   308,   309,   310,   311,   312,     0,   313,   314,
     315,   316,   317,   318,   319,   320,   488,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,     0,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   489,
     342,   343,   344,     0,   345,   346,   347,   348,     0,   349,
     350,     0,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,     0,   361,   362,     0,   363,   364,   365,   366,
       0,   367,   368,     0,   369,     0,   370,   371,   372,   373,
       0,   374,   375,   376,   377,   378,     0,     0,   379,   380,
     381,   382,     0,     0,   383,   384,   385,   386,   387,   388,
       0,   389,   390,     0,     0,   391,   392,   393,   394,   395,
     396,     0,   397,   156,   157,   158,   159,   160,   161,   162,
     163,     0,   164,   165,     0,     0,     0,     0,     0,     0,
       0,   166,   167,     0,   168,     0,   169,   170,   171,     0,
     172,     0,   173,   174,     0,   175,   176,   177,   178,     0,
       0,   179,   180,   181,   182,     0,   183,   184,   185,   186,
     187,     0,     0,   188,   189,   190,   191,     0,   192,   193,
     194,   195,     0,   196,   197,   198,     0,   199,     0,     0,
       0,     0,     0,   200,   201,   202,   203,   204,   205,   206,
     207,     0,   208,     0,   209,   210,   211,   212,   213,     0,
     214,     0,     0,   215,   216,   217,   218,     0,   219,   220,
     221,     0,   222,     0,   223,   224,   225,   226,   227,   228,
     229,     0,   230,   231,   232,     0,   233,     0,   234,     0,
       0,     0,   235,  1695,     0,   237,   238,     0,   239,     0,
     240,   241,   242,     0,   243,   244,   245,     0,   246,   247,
     248,   249,   250,     0,     0,   251,   252,   253,   254,   255,
     256,   257,     0,   258,     0,   259,     0,     0,   260,     0,
     261,   262,   263,   264,   265,     0,   266,     0,   267,     0,
       0,   268,   269,  1696,     0,     0,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,     0,   283,
     402,   284,   285,   286,   287,   288,   289,   290,   291,   292,
       0,   293,   294,     0,   295,     0,   296,   297,   298,   299,
       0,     0,   300,   403,     0,     0,   301,   302,     0,     0,
     303,     0,     0,   304,   305,   306,   307,     0,   308,   309,
     310,   311,   312,     0,   313,   314,   315,   316,   317,   318,
     319,   320,     0,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,     0,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,     0,   342,   343,   344,     0,
     345,   346,   347,   348,     0,   349,   350,     0,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,     0,   361,
     362,  1697,   363,  1698,   365,  1699,     0,   367,   368,     0,
     369,     0,   370,   371,   372,   373,     0,   374,   375,   376,
     377,   378,     0,     0,   379,   380,   381,   382,     0,     0,
     383,   384,   385,   386,   387,   388,     0,   389,   390,     0,
       0,   391,   392,   393,   394,   395,   396,     0,   397,   156,
     157,   158,   159,   160,   161,   162,   163,     0,   164,   165,
       0,     0,     0,     0,     0,     0,     0,   166,   167,     0,
     168,   565,   169,   170,   171,   566,  1057,   567,  1058,  1059,
       0,   175,   176,   177,   178,     0,     0,   179,  1060,  1061,
     182,     0,   183,   184,   185,   186,     0,     0,     0,   188,
     189,   190,   191,     0,   192,   193,     0,   195,     0,   196,
     197,   198,   568,   199,     0,     0,     0,     0,     0,   200,
     201,   202,   203,   204,  1062,  1063,   207,     0,   208,     0,
     209,   210,   211,   212,   213,     0,   214,     0,     0,   215,
     763,   217,   218,     0,   219,   220,   221,     0,   222,     0,
     223,   224,   225,     0,   227,   228,     0,     0,   230,   231,
    1064,     0,   233,     0,   234,   569,     0,   570,   235,   236,
       0,   237,     0,     0,   239,     0,   240,   241,   242,   571,
     243,   244,   245,     0,   246,   247,   248,   249,   250,     0,
     572,     0,   252,   253,   254,   255,  1065,  1066,     0,  1067,
       0,   259,   573,   574,   260,   575,   261,   262,   263,   264,
     265,     0,     0,   576,   267,   577,     0,   268,   269,   270,
       0,     0,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,  1068,   578,  1069,     0,   284,   285,   286,
     287,   288,   289,   290,     0,   292,     0,   293,   294,   579,
     295,     0,     0,  1070,   298,   299,     0,     0,   300,     0,
       0,     0,   301,   302,     0,     0,     0,   580,   581,     0,
     305,   306,   307,     0,     0,     0,   310,   311,   312,     0,
     313,   314,   315,   316,   317,   318,  1071,   320,     0,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     582,   332,   333,     0,   335,   336,   337,   338,   339,   340,
     341,     0,   342,   343,   344,     0,   345,  1072,   347,   348,
     583,   349,  1073,     0,   351,   352,   353,   354,   355,   356,
     357,   358,     0,   360,     0,   361,   362,     0,   363,   364,
     365,   366,     0,  1074,  1075,     0,   369,     0,   370,     0,
     372,     0,     0,   374,   375,   376,   377,   378,     0,     0,
     379,   380,   381,   382,     0,     0,   383,   384,   385,   386,
    1076,   388,   584,   389,   390,     0,     0,   391,   392,   393,
     394,   395,   396,     0,  1376,   156,   157,   158,   159,   160,
     161,   162,   163,     0,   164,   165,     0,     0,     0,     0,
       0,     0,     0,   166,   167,     0,   168,     0,   169,   170,
     171,     0,   172,     0,   173,   174,     0,   175,   176,   177,
     178,     0,     0,   179,   180,   181,   182,     0,   183,   184,
     185,   186,   187,     0,     0,   188,   189,   190,   191,     0,
     192,   193,   194,   195,     0,   196,   197,   198,     0,   199,
       0,     0,     0,     0,     0,   200,   201,   202,   203,   204,
     205,   206,   207,     0,   208,     0,   209,   210,   211,   212,
     213,     0,   214,     0,     0,   215,   216,   217,   218,     0,
     219,   220,   221,     0,   222,     0,   223,   224,   225,   226,
     227,   228,   229,     0,   230,   231,   232,     0,   233,     0,
     234,     0,     0,     0,   235,   236,     0,   237,   238,     0,
     239,     0,   240,   241,   242,     0,   243,   244,   245,     0,
     246,   247,   248,   249,   250,     0,     0,   251,   252,   253,
     254,   255,   256,   257,     0,   258,     0,   259,     0,     0,
     260,     0,   261,   262,   263,   264,   265,     0,   266,     0,
     267,     0,     0,   268,   269,   270,     0,     0,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
       0,   283,   402,   284,   285,   286,   287,   288,   289,   290,
     291,   292,     0,   293,   294,     0,   295,     0,   296,   297,
     298,   299,     0,     0,   300,   403,     0,     0,   301,   302,
       0,     0,   303,     0,     0,   304,   305,   306,   307,     0,
     308,   309,   310,   311,   312,     0,   313,   314,   315,   316,
     317,   318,   319,   320,     0,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,     0,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,     0,   342,   343,
     344,     0,   345,   346,   347,   348,     0,   349,   350,     0,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
       0,   361,   362,     0,   363,   364,   365,   366,     0,   367,
     368,     0,   369,     0,   370,   371,   372,   373,     0,   374,
     375,   376,   377,   378,     0,     0,   379,   380,   381,   382,
       0,     0,   383,   384,   385,   386,   387,   388,     0,   389,
     390,     0,     0,   391,   392,   393,   394,   395,   396,     0,
     397,   156,   157,   158,   159,   160,   161,   162,   163,  1821,
     164,   165,     0,     0,     0,     0,     0,     0,     0,   166,
     167,     0,   168,     0,   169,   170,   171,     0,   172,     0,
     173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
     180,   181,   182,     0,   183,   184,   185,   186,   187,     0,
       0,   188,   189,   190,   191,     0,   192,   193,   194,   195,
       0,   196,   197,   198,     0,   199,     0,     0,     0,     0,
       0,   200,   201,   202,   203,   204,   205,   206,   207,     0,
     208,     0,   209,   210,   211,   212,   213,     0,   214,     0,
       0,   215,   216,   217,   218,     0,   219,   220,   221,     0,
     222,     0,   223,   224,   225,   226,   227,   228,   229,     0,
     230,   231,   232,     0,   233,     0,   234,     0,     0,     0,
     235,   236,     0,   237,   238,     0,   239,     0,   240,   241,
     242,     0,   243,   244,   245,     0,   246,   247,   248,   249,
     250,     0,     0,   251,   252,   253,   254,   255,   256,   257,
       0,   258,     0,   259,     0,     0,   260,     0,   261,   262,
     263,   264,   265,     0,   266,     0,   267,     0,     0,   268,
     269,   270,     0,     0,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,     0,   283,     0,   284,
     285,   286,   287,   288,   289,   290,   291,   292,     0,   293,
     294,     0,   295,     0,   296,   297,   298,   299,     0,     0,
     300,     0,     0,     0,   301,   302,     0,     0,   303,     0,
       0,   304,   305,   306,   307,     0,   308,   309,   310,   311,
     312,     0,   313,   314,   315,   316,   317,   318,   319,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,     0,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,     0,   342,   343,   344,     0,   345,   346,
     347,   348,     0,   349,   350,     0,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,     0,   361,   362,     0,
     363,   364,   365,   366,     0,   367,   368,     0,   369,     0,
     370,   371,   372,   373,     0,   374,   375,   376,   377,   378,
       0,     0,   379,   380,   381,   382,  1822,     0,   383,   384,
     385,   386,   387,   388,     0,   389,   390,     0,     0,   391,
     392,   393,   394,   395,   396,     0,   397,   156,   157,   158,
     159,   160,   161,   162,   163,  1826,   164,   165,     0,     0,
       0,     0,     0,     0,     0,   166,   167,     0,   168,     0,
     169,   170,   171,     0,   172,     0,   173,   174,     0,   175,
     176,   177,   178,     0,     0,   179,   180,   181,   182,     0,
     183,   184,   185,   186,   187,     0,     0,   188,   189,   190,
     191,     0,   192,   193,   194,   195,     0,   196,   197,   198,
       0,   199,     0,     0,     0,     0,     0,   200,   201,   202,
     203,   204,   205,   206,   207,     0,   208,     0,   209,   210,
     211,   212,   213,     0,   214,     0,     0,   215,   216,   217,
     218,     0,   219,   220,   221,     0,   222,     0,   223,   224,
     225,   226,   227,   228,   229,     0,   230,   231,   232,     0,
     233,     0,   234,     0,     0,     0,   235,   236,     0,   237,
     238,     0,   239,     0,   240,   241,   242,     0,   243,   244,
     245,     0,   246,   247,   248,   249,   250,     0,     0,   251,
     252,   253,   254,   255,   256,   257,     0,   258,     0,   259,
       0,     0,   260,     0,   261,   262,   263,   264,   265,     0,
     266,     0,   267,     0,     0,   268,   269,   270,     0,     0,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,     0,   283,     0,   284,   285,   286,   287,   288,
     289,   290,   291,   292,     0,   293,   294,     0,   295,     0,
     296,   297,   298,   299,     0,     0,   300,     0,     0,     0,
     301,   302,     0,     0,   303,     0,     0,   304,   305,   306,
     307,     0,   308,   309,   310,   311,   312,     0,   313,   314,
     315,   316,   317,   318,   319,   320,     0,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,     0,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,     0,
     342,   343,   344,     0,   345,   346,   347,   348,     0,   349,
     350,     0,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,     0,   361,   362,     0,   363,   364,   365,   366,
       0,   367,   368,     0,   369,     0,   370,   371,   372,   373,
       0,   374,   375,   376,   377,   378,     0,     0,   379,   380,
     381,   382,  1827,     0,   383,   384,   385,   386,   387,   388,
       0,   389,   390,     0,     0,   391,   392,   393,   394,   395,
     396,     0,   397,   156,   157,   158,   159,   160,   161,   162,
     163,   514,   164,   165,     0,     0,     0,     0,     0,     0,
       0,   166,   167,     0,   168,     0,   169,   170,   171,     0,
     172,     0,   173,   174,     0,   175,   176,   177,   178,     0,
       0,   179,   180,   181,   182,     0,   183,   184,   185,   186,
     187,     0,     0,   188,   189,   190,   191,     0,   192,   193,
     194,   195,     0,   196,   197,   198,     0,   199,     0,     0,
       0,     0,     0,   200,   201,   202,   203,   204,   205,   206,
     207,     0,   208,     0,   209,   210,   211,   212,   213,     0,
     214,     0,     0,   215,   216,   217,   218,     0,   219,   220,
     221,     0,   222,     0,   223,   224,   225,   226,   227,   228,
     229,     0,   230,   231,   232,     0,   233,     0,   234,     0,
       0,     0,   235,   236,     0,   237,   238,     0,   239,     0,
     240,   241,   242,     0,   243,   244,   245,     0,   246,   247,
     248,   249,   250,     0,     0,   251,   252,   253,   254,   255,
     256,   257,     0,   258,     0,   259,     0,     0,   260,     0,
     261,   262,   263,   264,   265,     0,   266,     0,   267,     0,
       0,   268,   269,   270,     0,     0,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,     0,   283,
       0,   284,   285,   286,   287,   288,   289,   290,   291,   292,
       0,   293,   294,     0,   295,     0,   296,   297,   298,   299,
       0,     0,   300,     0,     0,     0,   301,   302,     0,     0,
     303,     0,     0,   304,   305,   306,   307,     0,   308,   309,
     310,   311,   312,     0,   313,   314,   315,   316,   317,   318,
     319,   320,     0,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,     0,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,     0,   342,   343,   515,     0,
     345,   346,   347,   348,     0,   349,   350,     0,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,     0,   361,
     362,     0,   363,   364,   365,   366,     0,   516,   368,     0,
     369,     0,   517,   371,   372,   373,     0,   374,   375,   376,
     377,   378,     0,     0,   379,   380,   381,   382,     0,     0,
     383,   384,   385,   386,   387,   388,     0,   389,   390,     0,
       0,   391,   392,   393,   394,   395,   396,     0,   397,   156,
     157,   158,   159,   160,   161,   162,   163,   539,   164,   165,
       0,     0,     0,     0,     0,     0,     0,   166,   167,     0,
     168,     0,   169,   170,   171,     0,   172,     0,   173,   174,
       0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
     182,     0,   183,   184,   185,   186,   187,     0,     0,   188,
     189,   190,   191,     0,   192,   193,   194,   195,     0,   196,
     197,   198,     0,   199,     0,     0,     0,     0,     0,   200,
     201,   202,   203,   204,   205,   206,   207,     0,   208,     0,
     209,   210,   211,   212,   213,     0,   214,     0,     0,   215,
     216,   217,   218,     0,   219,   220,   221,     0,   222,     0,
     223,   224,   225,   226,   227,   228,   229,     0,   230,   231,
     232,     0,   233,     0,   234,     0,     0,     0,   235,   236,
       0,   237,   238,     0,   239,     0,   240,   241,   242,     0,
     243,   244,   245,     0,   246,   247,   248,   249,   250,     0,
       0,   251,   252,   253,   254,   255,   256,   257,     0,   258,
       0,   259,     0,     0,   260,     0,   261,   262,   263,   264,
     265,     0,   266,     0,   267,     0,     0,   268,   269,   270,
       0,     0,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,     0,   283,     0,   284,   285,   286,
     287,   288,   289,   290,   291,   292,     0,   293,   294,     0,
     295,     0,   296,   297,   298,   299,     0,     0,   300,     0,
       0,     0,   301,   302,     0,     0,   303,     0,     0,   304,
     305,   306,   307,     0,   308,   309,   310,   311,   312,     0,
     313,   314,   315,   316,   317,   318,   319,   320,     0,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
       0,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,     0,   342,   343,   540,     0,   345,   346,   347,   348,
       0,   349,   350,     0,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,     0,   361,   362,     0,   363,   364,
     365,   366,     0,   541,   368,     0,   369,     0,   542,   371,
     372,   373,     0,   374,   375,   376,   377,   378,     0,     0,
     379,   380,   381,   382,     0,     0,   383,   384,   385,   386,
     387,   388,     0,   389,   390,     0,     0,   391,   392,   393,
     394,   395,   396,     0,   397,   156,   157,   158,   159,   160,
     161,   162,   163,   837,   164,   165,     0,     0,     0,     0,
       0,     0,     0,   166,   167,     0,   168,     0,   169,   170,
     171,     0,   172,     0,   173,   174,     0,   175,   176,   177,
     178,     0,     0,   179,   180,   181,   182,     0,   183,   184,
     185,   186,   187,     0,     0,   188,   189,   190,   191,     0,
     192,   193,   194,   195,     0,   196,   197,   198,     0,   199,
       0,     0,     0,     0,     0,   200,   201,   202,   203,   204,
     205,   206,   207,     0,   208,     0,   209,   210,   211,   212,
     213,     0,   214,     0,     0,   215,   216,   217,   218,     0,
     219,   220,   221,     0,   222,     0,   223,   224,   225,   226,
     227,   228,   229,     0,   230,   231,   232,     0,   233,     0,
     234,     0,     0,     0,   235,   236,     0,   237,   238,     0,
     239,     0,   240,   241,   242,     0,   243,   244,   245,     0,
     246,   247,   248,   249,   250,     0,     0,   251,   252,   253,
     254,   255,   256,   257,     0,   258,     0,   259,     0,     0,
     260,     0,   261,   262,   263,   264,   265,     0,   266,     0,
     267,     0,     0,   268,   269,   270,     0,     0,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
       0,   283,     0,   284,   285,   286,   287,   288,   289,   290,
     291,   292,     0,   293,   294,     0,   295,     0,   296,   297,
     298,   299,     0,     0,   300,     0,     0,     0,   301,   302,
       0,     0,   303,     0,     0,   304,   305,   306,   307,     0,
     308,   309,   310,   311,   312,     0,   313,   314,   315,   316,
     317,   318,   319,   320,     0,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,     0,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,     0,   342,   343,
     344,     0,   345,   346,   347,   348,     0,   349,   350,     0,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
       0,   361,   362,     0,   363,   364,   365,   366,     0,   367,
     368,     0,   369,     0,   370,   371,   372,   373,     0,   374,
     375,   376,   377,   378,     0,     0,   379,   380,   381,   382,
       0,     0,   383,   384,   385,   386,   387,   388,     0,   389,
     390,     0,     0,   391,   392,   393,   394,   395,   396,     0,
     397,   156,   157,   158,   159,   160,   161,   162,   163,     0,
     164,   165,     0,     0,     0,     0,     0,     0,     0,   166,
     167,     0,   168,   848,   169,   170,   171,     0,   172,     0,
     173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
     180,   181,   849,     0,   183,   184,   185,   186,   187,     0,
       0,   188,   189,   190,   191,     0,   192,   193,   194,   195,
       0,   196,   197,   198,     0,   199,     0,     0,     0,     0,
       0,   200,   201,   202,   203,   204,   205,   206,   207,     0,
     208,     0,   209,   210,   211,   212,   213,     0,   214,     0,
       0,   215,   216,   217,   218,     0,   219,   220,   221,     0,
     222,     0,   223,   224,   225,   226,   227,   228,   229,     0,
     230,   231,   232,     0,   233,     0,   234,     0,     0,     0,
     235,   236,     0,   237,   238,     0,   239,     0,   240,   241,
     242,     0,   243,   244,   245,     0,   246,   247,   248,   249,
     250,     0,     0,   251,   252,   253,   254,   255,   256,   257,
       0,   258,     0,   259,     0,     0,   260,     0,   261,   262,
     263,   264,   265,     0,   266,     0,   267,     0,     0,   268,
     269,   270,     0,     0,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   532,   282,     0,   283,     0,   284,
     285,   286,   287,   288,   289,   290,   291,   292,     0,   293,
     294,     0,   295,     0,   296,   297,   298,   299,     0,     0,
     300,     0,     0,     0,   301,   302,     0,     0,   303,     0,
       0,   304,   305,   306,   307,     0,   308,   309,   310,   311,
     312,     0,   313,   314,   315,   316,   317,   318,   319,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,     0,   533,   333,   334,   335,   336,   337,   338,
     339,   340,   341,     0,   342,   343,   840,     0,   345,   346,
     347,   348,     0,   349,   350,     0,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,     0,   361,   362,     0,
     363,   364,   365,   366,     0,   535,   368,     0,   369,     0,
     536,   371,   372,   373,     0,   374,   375,   376,   377,   378,
       0,     0,   379,   380,   381,   382,     0,     0,   383,   384,
     385,   386,   387,   388,     0,   389,   390,     0,     0,   391,
     392,   393,   394,   395,   396,     0,   397,   156,   157,   158,
     159,   160,   161,   162,   163,     0,   164,   165,     0,     0,
       0,     0,     0,  1932,     0,   166,   167,     0,   168,     0,
     169,   170,   171,     0,   172,     0,   173,   174,     0,   175,
     176,   177,   178,     0,     0,   179,   180,   181,   182,     0,
     183,   184,   185,   186,   187,     0,     0,   188,   189,   190,
     191,     0,   192,   193,   194,   195,     0,   196,   197,   198,
       0,   199,     0,     0,     0,     0,     0,   200,   201,   202,
     203,   204,   205,   206,   207,     0,   208,     0,   209,   210,
     211,   212,   213,     0,   214,     0,     0,   215,   216,   217,
     218,     0,   219,   220,   221,     0,   222,     0,   223,   224,
     225,   226,   227,   228,   229,     0,   230,   231,   232,     0,
     233,     0,   234,     0,     0,     0,   235,   236,     0,   237,
     238,     0,   239,     0,   240,   241,   242,     0,   243,   244,
     245,     0,   246,   247,   248,   249,   250,     0,     0,   251,
     252,   253,   254,   255,   256,   257,     0,   258,     0,   259,
       0,     0,   260,     0,   261,   262,   263,   264,   265,     0,
     266,     0,   267,     0,     0,   268,   269,   270,     0,     0,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,     0,   283,     0,   284,   285,   286,   287,   288,
     289,   290,   291,   292,     0,   293,   294,     0,   295,     0,
     296,   297,   298,   299,     0,     0,   300,     0,     0,     0,
     301,   302,     0,     0,   303,     0,     0,   304,   305,   306,
     307,     0,   308,   309,   310,   311,   312,     0,   313,   314,
     315,   316,   317,   318,   319,   320,     0,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,     0,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,     0,
     342,   343,   344,     0,   345,   346,   347,   348,     0,   349,
     350,     0,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,     0,   361,   362,     0,   363,   364,   365,   366,
       0,   367,   368,     0,   369,     0,   370,   371,   372,   373,
       0,   374,   375,   376,   377,   378,     0,     0,   379,   380,
     381,   382,     0,     0,   383,   384,   385,   386,   387,   388,
       0,   389,   390,     0,     0,   391,   392,   393,   394,   395,
     396,     0,   397,   156,   157,   158,   159,   160,   161,   162,
     163,     0,   164,   165,     0,     0,     0,     0,     0,  1946,
       0,   166,   167,     0,   168,     0,   169,   170,   171,     0,
     172,     0,   173,   174,     0,   175,   176,   177,   178,     0,
       0,   179,   180,   181,   182,     0,   183,   184,   185,   186,
     187,     0,     0,   188,   189,   190,   191,     0,   192,   193,
     194,   195,     0,   196,   197,   198,     0,   199,     0,     0,
       0,     0,     0,   200,   201,   202,   203,   204,   205,   206,
     207,     0,   208,     0,   209,   210,   211,   212,   213,     0,
     214,     0,     0,   215,   216,   217,   218,     0,   219,   220,
     221,     0,   222,     0,   223,   224,   225,   226,   227,   228,
     229,     0,   230,   231,   232,     0,   233,     0,   234,     0,
       0,     0,   235,   236,     0,   237,   238,     0,   239,     0,
     240,   241,   242,     0,   243,   244,   245,     0,   246,   247,
     248,   249,   250,     0,     0,   251,   252,   253,   254,   255,
     256,   257,     0,   258,     0,   259,     0,     0,   260,     0,
     261,   262,   263,   264,   265,     0,   266,     0,   267,     0,
       0,   268,   269,   270,     0,     0,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,     0,   283,
       0,   284,   285,   286,   287,   288,   289,   290,   291,   292,
       0,   293,   294,     0,   295,     0,   296,   297,   298,   299,
       0,     0,   300,     0,     0,     0,   301,   302,     0,     0,
     303,     0,     0,   304,   305,   306,   307,     0,   308,   309,
     310,   311,   312,     0,   313,   314,   315,   316,   317,   318,
     319,   320,     0,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,     0,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,     0,   342,   343,   344,     0,
     345,   346,   347,   348,     0,   349,   350,     0,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,     0,   361,
     362,     0,   363,   364,   365,   366,     0,   367,   368,     0,
     369,     0,   370,   371,   372,   373,     0,   374,   375,   376,
     377,   378,     0,     0,   379,   380,   381,   382,     0,     0,
     383,   384,   385,   386,   387,   388,     0,   389,   390,     0,
       0,   391,   392,   393,   394,   395,   396,     0,   397,   156,
     157,   158,   159,   160,   161,   162,   163,     0,   164,   165,
       0,     0,     0,     0,     0,     0,     0,   166,   167,     0,
     168,     0,   169,   170,   171,     0,   172,     0,   173,   174,
       0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
     182,     0,   183,   184,   185,   186,   187,     0,     0,   188,
     189,   190,   191,     0,   192,   193,   194,   195,     0,   196,
     197,   198,     0,   199,     0,     0,     0,     0,     0,   200,
     201,   202,   203,   204,   205,   206,   207,     0,   208,     0,
     209,   210,   211,   212,   213,     0,   214,     0,     0,   215,
     216,   217,   218,     0,   219,   220,   221,     0,   222,     0,
     223,   224,   225,   226,   227,   228,   229,     0,   230,   231,
     232,     0,   233,     0,   234,     0,     0,     0,   235,   236,
       0,   237,   238,  1961,   239,     0,   240,   241,   242,     0,
     243,   244,   245,     0,   246,   247,   248,   249,   250,     0,
       0,   251,   252,   253,   254,   255,   256,   257,     0,   258,
       0,   259,     0,     0,   260,     0,   261,   262,   263,   264,
     265,     0,   266,     0,   267,     0,     0,   268,   269,   270,
       0,     0,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,     0,   283,     0,   284,   285,   286,
     287,   288,   289,   290,   291,   292,     0,   293,   294,     0,
     295,     0,   296,   297,   298,   299,     0,     0,   300,     0,
       0,     0,   301,   302,     0,     0,   303,     0,     0,   304,
     305,   306,   307,     0,   308,   309,   310,   311,   312,     0,
     313,   314,   315,   316,   317,   318,   319,   320,     0,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
       0,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,     0,   342,   343,   344,     0,   345,   346,   347,   348,
       0,   349,   350,     0,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,     0,   361,   362,     0,   363,   364,
     365,   366,     0,   367,   368,     0,   369,     0,   370,   371,
     372,   373,     0,   374,   375,   376,   377,   378,     0,     0,
     379,   380,   381,   382,     0,     0,   383,   384,   385,   386,
     387,   388,     0,   389,   390,     0,     0,   391,   392,   393,
     394,   395,   396,     0,   397,   156,   157,   158,   159,   160,
     161,   162,   163,     0,   164,   165,     0,     0,     0,     0,
       0,     0,     0,   166,   167,     0,   168,     0,   169,   170,
     171,     0,   172,     0,   173,   174,     0,   175,   176,   177,
     178,     0,     0,   179,   180,   181,   182,     0,   183,   184,
     185,   186,   187,     0,     0,   188,   189,   190,   191,     0,
     192,   193,   194,   195,     0,   196,   197,   198,     0,   199,
       0,     0,     0,     0,     0,   200,   201,   202,   203,   204,
     205,   206,   207,  2423,   208,     0,   209,   210,   211,   212,
     213,     0,   214,     0,     0,   215,   216,   217,   218,     0,
     219,   220,   221,     0,   222,     0,   223,   224,   225,   226,
     227,   228,   229,     0,   230,   231,   232,     0,   233,     0,
     234,     0,     0,     0,   235,   236,     0,   237,   238,     0,
     239,     0,   240,   241,   242,     0,   243,   244,   245,     0,
     246,   247,   248,   249,   250,     0,     0,   251,   252,   253,
     254,   255,   256,   257,     0,   258,     0,   259,     0,     0,
     260,     0,   261,   262,   263,   264,   265,     0,   266,     0,
     267,     0,     0,   268,   269,   270,     0,     0,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
       0,   283,     0,   284,   285,   286,   287,   288,   289,   290,
     291,   292,     0,   293,   294,     0,   295,     0,   296,   297,
     298,   299,     0,     0,   300,     0,     0,     0,   301,   302,
       0,     0,   303,     0,     0,   304,   305,   306,   307,     0,
     308,   309,   310,   311,   312,     0,   313,   314,   315,   316,
     317,   318,   319,   320,     0,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,     0,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,     0,   342,   343,
     344,     0,   345,   346,   347,   348,     0,   349,   350,     0,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
       0,   361,   362,     0,   363,   364,   365,   366,     0,   367,
     368,     0,   369,     0,   370,   371,   372,   373,     0,   374,
     375,   376,   377,   378,     0,     0,   379,   380,   381,   382,
       0,     0,   383,   384,   385,   386,   387,   388,     0,   389,
     390,     0,     0,   391,   392,   393,   394,   395,   396,     0,
     397,   156,   157,   158,   159,   160,   161,   162,   163,     0,
     164,   165,     0,     0,     0,     0,     0,     0,     0,   166,
     167,     0,   168,     0,   169,   170,   171,     0,   172,     0,
     173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
     180,   181,   182,     0,   183,   184,   185,   186,   187,     0,
       0,   188,   189,   190,   191,     0,   192,   193,   194,   195,
       0,   196,   197,   198,     0,   199,     0,     0,     0,     0,
       0,   200,   201,   202,   203,   204,   205,   206,   207,  2425,
     208,     0,   209,   210,   211,   212,   213,     0,   214,     0,
       0,   215,   216,   217,   218,     0,   219,   220,   221,     0,
     222,     0,   223,   224,   225,   226,   227,   228,   229,     0,
     230,   231,   232,     0,   233,     0,   234,     0,     0,     0,
     235,   236,     0,   237,   238,     0,   239,     0,   240,   241,
     242,     0,   243,   244,   245,     0,   246,   247,   248,   249,
     250,     0,     0,   251,   252,   253,   254,   255,   256,   257,
       0,   258,     0,   259,     0,     0,   260,     0,   261,   262,
     263,   264,   265,     0,   266,     0,   267,     0,     0,   268,
     269,   270,     0,     0,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,     0,   283,     0,   284,
     285,   286,   287,   288,   289,   290,   291,   292,     0,   293,
     294,     0,   295,     0,   296,   297,   298,   299,     0,     0,
     300,     0,     0,     0,   301,   302,     0,     0,   303,     0,
       0,   304,   305,   306,   307,     0,   308,   309,   310,   311,
     312,     0,   313,   314,   315,   316,   317,   318,   319,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,     0,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,     0,   342,   343,   344,     0,   345,   346,
     347,   348,     0,   349,   350,     0,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,     0,   361,   362,     0,
     363,   364,   365,   366,     0,   367,   368,     0,   369,     0,
     370,   371,   372,   373,     0,   374,   375,   376,   377,   378,
       0,     0,   379,   380,   381,   382,     0,     0,   383,   384,
     385,   386,   387,   388,     0,   389,   390,     0,     0,   391,
     392,   393,   394,   395,   396,     0,   397,   156,   157,   158,
     159,   160,   161,   162,   163,     0,   164,   165,     0,     0,
       0,     0,     0,     0,     0,   166,   167,     0,   168,     0,
     169,   170,   171,     0,   172,     0,   173,   174,     0,   175,
     176,   177,   178,     0,     0,   179,   180,   181,   182,     0,
     183,   184,   185,   186,   187,     0,     0,   188,   189,   190,
     191,     0,   192,   193,   194,   195,     0,   196,   197,   198,
       0,   199,     0,     0,     0,     0,     0,   200,   201,   202,
     203,   204,   205,   206,   207,  2427,   208,     0,   209,   210,
     211,   212,   213,     0,   214,     0,     0,   215,   216,   217,
     218,     0,   219,   220,   221,     0,   222,     0,   223,   224,
     225,   226,   227,   228,   229,     0,   230,   231,   232,     0,
     233,     0,   234,     0,     0,     0,   235,   236,     0,   237,
     238,     0,   239,     0,   240,   241,   242,     0,   243,   244,
     245,     0,   246,   247,   248,   249,   250,     0,     0,   251,
     252,   253,   254,   255,   256,   257,     0,   258,     0,   259,
       0,     0,   260,     0,   261,   262,   263,   264,   265,     0,
     266,     0,   267,     0,     0,   268,   269,   270,     0,     0,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,     0,   283,     0,   284,   285,   286,   287,   288,
     289,   290,   291,   292,     0,   293,   294,     0,   295,     0,
     296,   297,   298,   299,     0,     0,   300,     0,     0,     0,
     301,   302,     0,     0,   303,     0,     0,   304,   305,   306,
     307,     0,   308,   309,   310,   311,   312,     0,   313,   314,
     315,   316,   317,   318,   319,   320,     0,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,     0,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,     0,
     342,   343,   344,     0,   345,   346,   347,   348,     0,   349,
     350,     0,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,     0,   361,   362,     0,   363,   364,   365,   366,
       0,   367,   368,     0,   369,     0,   370,   371,   372,   373,
       0,   374,   375,   376,   377,   378,     0,     0,   379,   380,
     381,   382,     0,     0,   383,   384,   385,   386,   387,   388,
       0,   389,   390,     0,     0,   391,   392,   393,   394,   395,
     396,     0,   397,   156,   157,   158,   159,   160,   161,   162,
     163,     0,   164,   165,     0,     0,     0,     0,     0,     0,
       0,   166,   167,     0,   168,     0,   169,   170,   171,     0,
     172,     0,   173,   174,     0,   175,   176,   177,   178,     0,
       0,   179,   180,   181,   182,     0,   183,   184,   185,   186,
     187,     0,     0,   188,   189,   190,   191,     0,   192,   193,
     194,   195,     0,   196,   197,   198,     0,   199,     0,     0,
       0,     0,     0,   200,   201,   202,   203,   204,   205,   206,
     207,     0,   208,     0,   209,   210,   211,   212,   213,     0,
     214,     0,     0,   215,   216,   217,   218,     0,   219,   220,
     221,     0,   222,     0,   223,   224,   225,   226,   227,   228,
     229,     0,   230,   231,   232,     0,   233,     0,   234,     0,
       0,     0,   235,   236,     0,   237,   238,     0,   239,     0,
     240,   241,   242,     0,   243,   244,   245,     0,   246,   247,
     248,   249,   250,     0,     0,   251,   252,   253,   254,   255,
     256,   257,     0,   258,     0,   259,     0,     0,   260,     0,
     261,   262,   263,   264,   265,     0,   266,     0,   267,     0,
       0,   268,   269,   270,     0,     0,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,     0,   283,
       0,   284,   285,   286,   287,   288,   289,   290,   291,   292,
       0,   293,   294,     0,   295,     0,   296,   297,   298,   299,
       0,     0,   300,     0,     0,     0,   301,   302,     0,     0,
     303,     0,     0,   304,   305,   306,   307,     0,   308,   309,
     310,   311,   312,     0,   313,   314,   315,   316,   317,   318,
     319,   320,     0,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,     0,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,     0,   342,   343,   344,     0,
     345,   346,   347,   348,     0,   349,   350,     0,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,     0,   361,
     362,     0,   363,   364,   365,   366,     0,   367,   368,     0,
     369,     0,   370,   371,   372,   373,     0,   374,   375,   376,
     377,   378,     0,     0,   379,   380,   381,   382,     0,  2652,
     383,   384,   385,   386,   387,   388,     0,   389,   390,     0,
       0,   391,   392,   393,   394,   395,   396,     0,   397,   156,
     157,   158,   159,   160,   161,   162,   163,     0,   164,   165,
       0,     0,     0,     0,     0,     0,     0,   166,   167,     0,
     168,     0,   169,   170,   171,     0,   172,     0,   173,   174,
       0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
     182,     0,   183,   184,   185,   186,   187,     0,     0,   188,
     189,   190,   191,     0,   192,   193,   194,   195,     0,   196,
     197,   198,     0,   199,     0,     0,     0,     0,     0,   200,
     201,   202,   203,   204,   205,   206,   207,     0,   208,     0,
     209,   210,   211,   212,   213,     0,   214,     0,     0,   215,
     216,   217,   218,     0,   219,   220,   221,     0,   222,     0,
     223,   224,   225,   226,   227,   228,   229,     0,   230,   231,
     232,     0,   233,     0,   234,     0,     0,     0,   235,   236,
       0,   237,   238,     0,   239,     0,   240,   241,   242,     0,
     243,   244,   245,     0,   246,   247,   248,   249,   250,     0,
       0,   251,   252,   253,   254,   255,   256,   257,     0,   258,
       0,   259,     0,     0,   260,     0,   261,   262,   263,   264,
     265,     0,   266,     0,   267,     0,     0,   268,   269,   270,
       0,     0,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,     0,   283,     0,   284,   285,   286,
     287,   288,   289,   290,   291,   292,     0,   293,   294,     0,
     295,     0,   296,   297,   298,   299,     0,     0,   300,     0,
       0,     0,   301,   302,     0,     0,   303,     0,     0,   304,
     305,   306,   307,     0,   308,   309,   310,   311,   312,     0,
     313,   314,   315,   316,   317,   318,   319,   320,     0,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
       0,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,     0,   342,   343,   344,     0,   345,   346,   347,   348,
       0,   349,   350,     0,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,     0,   361,   362,     0,   363,   364,
     365,   366,     0,   367,   368,     0,   369,     0,   370,   371,
     372,   373,     0,   374,   375,   376,   377,   378,     0,     0,
     379,   380,   381,   382,     0,     0,   383,   384,   385,   386,
     387,   388,     0,   389,   390,     0,     0,   391,   392,   393,
     394,   395,   396,     0,   397,   156,   157,   158,   159,   160,
     161,   162,   163,     0,   164,   165,     0,     0,     0,     0,
       0,     0,     0,   166,   167,     0,   168,     0,   169,   170,
     171,     0,   172,     0,   173,   174,     0,   175,   176,   177,
     178,     0,     0,   179,   180,   181,   182,     0,   183,   184,
     185,   186,   187,     0,     0,   188,   189,   190,   191,     0,
     192,   193,   194,   195,     0,   196,   197,   198,     0,   199,
       0,     0,     0,     0,     0,   200,   201,   202,   203,   204,
     205,   206,   207,     0,   208,     0,   209,   210,   211,   212,
     213,     0,   214,     0,     0,   215,   216,   217,   218,     0,
     219,   220,   221,     0,   222,     0,   223,   224,   225,   226,
     227,   228,   229,     0,   230,   231,   232,     0,   233,     0,
     234,     0,     0,     0,   235,   236,     0,   237,   238,     0,
     239,     0,   240,   241,   242,     0,   243,   244,   245,     0,
     246,   247,   248,   249,   250,     0,     0,   251,   252,   253,
     254,   255,   256,   257,     0,   258,     0,   259,     0,     0,
     260,     0,   261,   262,   263,   264,   265,     0,   266,     0,
     267,     0,     0,   268,   269,   270,     0,     0,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
       0,   283,     0,   284,   285,   286,   287,   288,   289,   290,
     291,   292,     0,   293,   294,     0,   295,     0,   296,   297,
     298,   299,     0,     0,   300,     0,     0,     0,   301,   302,
       0,     0,   303,     0,     0,   304,   305,   306,   307,     0,
     308,   309,   310,   441,   312,     0,   313,   314,   315,   316,
     317,   318,   319,   320,     0,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,     0,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,     0,   342,   343,
     344,     0,   345,   346,   347,   348,     0,   349,   350,     0,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
       0,   361,   362,     0,   363,   364,   365,   366,     0,   367,
     368,     0,   369,     0,   370,   371,   372,   373,     0,   374,
     375,   376,   377,   378,     0,     0,   379,   380,   381,   382,
       0,     0,   383,   384,   385,   386,   387,   388,     0,   389,
     390,     0,     0,   391,   392,   393,   394,   395,   396,     0,
     397,   156,   157,   158,   159,   160,   161,   162,   163,     0,
     164,   165,     0,     0,     0,     0,     0,     0,     0,   166,
     167,     0,   168,     0,   169,   170,   171,     0,   172,     0,
     173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
     180,   181,   182,     0,   183,   184,   185,   186,   187,     0,
       0,   188,   189,   190,   191,     0,   192,   193,   194,   195,
       0,   196,   197,   198,     0,   199,     0,     0,     0,     0,
       0,   200,   201,   202,   203,   204,   205,   206,   207,     0,
     208,     0,   209,   210,   211,   212,   213,     0,   214,     0,
       0,   215,   216,   217,   218,     0,   219,   220,   221,     0,
     222,     0,   223,   224,   225,   226,   227,   228,   229,     0,
     230,   231,   232,     0,   233,     0,   234,     0,     0,     0,
     235,   236,     0,   237,   238,     0,   239,     0,   240,   241,
     242,     0,   243,   244,   245,     0,   246,   247,   248,   249,
     250,     0,     0,   251,   252,   253,   254,   255,   256,   257,
       0,   258,     0,   259,     0,     0,   260,     0,   261,   262,
     263,   264,   265,     0,   266,     0,   267,     0,     0,   268,
     269,   270,     0,     0,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,     0,   283,     0,   284,
     285,   286,   287,   288,   289,   290,   291,   292,     0,   293,
     294,     0,   295,     0,   296,   297,   298,   299,     0,     0,
     300,     0,     0,     0,   301,   302,     0,     0,   303,     0,
       0,   304,   305,   306,   307,     0,   308,   309,   310,   311,
     312,     0,   313,   314,   315,   316,   317,   318,   319,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,     0,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,     0,   342,   343,   344,     0,   345,   346,
     347,   348,     0,   349,   350,     0,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,     0,   361,   362,     0,
     363,   364,   365,   366,     0,   367,   368,     0,   369,     0,
     505,   371,   372,   373,     0,   374,   375,   376,   377,   378,
       0,     0,   379,   380,   381,   382,     0,     0,   383,   384,
     385,   386,   387,   388,     0,   389,   390,     0,     0,   391,
     392,   393,   394,   395,   396,     0,   397,   156,   157,   158,
     159,   160,   161,   162,   163,     0,   164,   165,     0,     0,
       0,     0,     0,     0,     0,   166,   167,     0,   168,     0,
     169,   170,   171,     0,   172,     0,   173,   174,     0,   175,
     176,   177,   178,     0,     0,   179,   180,   181,   182,     0,
     183,   184,   185,   186,   187,     0,     0,   188,   189,   190,
     191,     0,   192,   193,   194,   195,     0,   196,   197,   198,
       0,   199,     0,     0,     0,     0,     0,   200,   201,   202,
     203,   204,   205,   206,   207,     0,   208,     0,   209,   210,
     211,   212,   213,     0,   214,     0,     0,   215,   216,   217,
     218,     0,   219,   220,   221,     0,   222,     0,   223,   224,
     225,   226,   227,   228,   229,     0,   230,   231,   232,     0,
     233,     0,   234,     0,     0,     0,   235,   236,     0,   237,
     238,     0,   239,     0,   240,   241,   242,     0,   243,   244,
     245,     0,   246,   247,   248,   249,   250,     0,     0,   251,
     252,   253,   254,   255,   256,   257,     0,   258,     0,   259,
       0,     0,   260,     0,   261,   262,   263,   264,   265,     0,
     266,     0,   267,     0,     0,   268,   269,   270,     0,     0,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,     0,   283,     0,   284,   285,   286,   287,   288,
     289,   290,   291,   292,     0,   293,   294,     0,   295,     0,
     296,   297,   298,   299,     0,     0,   300,     0,     0,     0,
     301,   302,     0,     0,   303,     0,     0,   304,   305,   306,
     307,     0,   308,   309,   310,   311,   312,     0,   313,   314,
     315,   316,   317,   318,   319,   320,     0,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,     0,   332,
     333,   334,   335,   336,   512,   338,   339,   340,   341,     0,
     342,   343,   344,     0,   345,   346,   347,   348,     0,   349,
     350,     0,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,     0,   361,   362,     0,   363,   364,   365,   366,
       0,   367,   368,     0,   369,     0,   370,   371,   372,   373,
       0,   374,   375,   376,   377,   378,     0,     0,   379,   380,
     381,   382,     0,     0,   383,   384,   385,   386,   387,   388,
       0,   389,   390,     0,     0,   391,   392,   393,   394,   395,
     396,     0,   397,   156,   157,   158,   159,   160,   161,   162,
     163,     0,   164,   165,     0,     0,     0,     0,     0,     0,
       0,   166,   167,     0,   168,     0,   169,   170,   171,     0,
     172,     0,   173,   174,     0,   175,   176,   177,   178,     0,
       0,   179,   180,   181,   182,     0,   183,   184,   185,   186,
     187,     0,     0,   188,   189,   190,   191,     0,   530,   193,
     194,   195,     0,   196,   197,   198,     0,   199,     0,     0,
       0,     0,     0,   200,   201,   202,   203,   204,   205,   206,
     207,     0,   208,     0,   209,   210,   211,   212,   213,     0,
     214,     0,     0,   215,   216,   217,   218,     0,   219,   220,
     221,     0,   222,     0,   223,   224,   225,   226,   227,   228,
     229,     0,   230,   231,   232,     0,   233,     0,   234,     0,
       0,     0,   235,   236,     0,   237,   238,     0,   239,     0,
     240,   241,   242,     0,   243,   244,   245,     0,   246,   247,
     248,   249,   250,     0,     0,   251,   252,   253,   254,   255,
     256,   257,     0,   258,     0,   259,     0,     0,   260,     0,
     261,   262,   263,   264,   265,     0,   266,     0,   267,     0,
       0,   268,   269,   531,     0,     0,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   532,   282,     0,   283,
       0,   284,   285,   286,   287,   288,   289,   290,   291,   292,
       0,   293,   294,     0,   295,     0,   296,   297,   298,   299,
       0,     0,   300,     0,     0,     0,   301,   302,     0,     0,
     303,     0,     0,   304,   305,   306,   307,     0,   308,   309,
     310,   311,   312,     0,   313,   314,   315,   316,   317,   318,
     319,   320,     0,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,     0,   533,   333,   334,   335,   336,
     337,   338,   339,   340,   341,     0,   342,   343,   534,     0,
     345,   346,   347,   348,     0,   349,   350,     0,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,     0,   361,
     362,     0,   363,   364,   365,   366,     0,   535,   368,     0,
     369,     0,   536,   371,   372,   373,     0,   374,   375,   376,
     377,   378,     0,     0,   379,   380,   381,   382,     0,     0,
     383,   384,   385,   386,   387,   388,     0,   389,   390,     0,
       0,   391,   392,   393,   394,   395,   396,     0,   397,   156,
     157,   158,   159,   160,   161,   162,   163,     0,   164,   165,
       0,     0,     0,     0,     0,     0,     0,   166,   167,     0,
     168,     0,   169,   170,   171,     0,   172,     0,   173,   174,
       0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
     182,     0,   183,   184,   185,   186,   187,     0,     0,   188,
     189,   190,   191,     0,   192,   193,   194,   195,     0,   196,
     197,   198,     0,   199,     0,     0,     0,     0,     0,   200,
     201,   202,   203,   204,   205,   206,   207,     0,   208,     0,
     209,   210,   211,   212,   213,     0,   214,     0,     0,   215,
     216,   217,   218,     0,   219,   220,   221,     0,   222,     0,
     223,   224,   225,   226,   227,   228,   229,     0,   230,   231,
     232,     0,   233,     0,   234,     0,     0,     0,   235,   236,
       0,   237,   238,     0,   239,     0,   240,   241,   242,     0,
     243,   244,   245,     0,   246,   247,   248,   249,   250,     0,
       0,   251,   252,   253,   254,   255,   256,   257,     0,   258,
       0,   259,     0,     0,   260,     0,   261,   262,   263,   264,
     265,     0,   266,     0,   267,     0,     0,   268,   269,   270,
       0,     0,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   532,   282,     0,   283,     0,   284,   285,   286,
     287,   288,   289,   290,   291,   292,     0,   293,   294,     0,
     295,     0,   296,   297,   298,   299,     0,     0,   300,     0,
       0,     0,   301,   302,     0,     0,   303,     0,     0,   304,
     305,   306,   307,     0,   308,   309,   310,   311,   312,     0,
     313,   314,   315,   316,   317,   318,   319,   320,     0,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
       0,   533,   333,   334,   335,   336,   337,   338,   339,   340,
     341,     0,   342,   343,   840,     0,   345,   346,   347,   348,
       0,   349,   350,     0,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,     0,   361,   362,     0,   363,   364,
     365,   366,     0,   535,   368,     0,   369,     0,   536,   371,
     372,   373,     0,   374,   375,   376,   377,   378,     0,     0,
     379,   380,   381,   382,     0,     0,   383,   384,   385,   386,
     387,   388,     0,   389,   390,     0,     0,   391,   392,   393,
     394,   395,   396,     0,   397,   156,   157,   158,   159,   160,
     161,   162,   163,     0,   164,   165,     0,     0,     0,     0,
       0,     0,     0,   166,   167,     0,   168,     0,   169,   170,
     171,     0,   172,     0,   173,   174,     0,   175,   176,   177,
     178,     0,     0,   179,   180,   181,   182,     0,   183,   184,
     185,   186,   187,     0,     0,   188,   189,   190,   191,     0,
     192,   193,   194,   195,     0,   196,   197,   198,     0,   199,
       0,     0,     0,     0,     0,   200,   201,   202,   203,   204,
     205,   206,   207,     0,   208,     0,   209,   210,   211,   212,
     213,     0,   214,     0,     0,   215,   216,   217,   218,     0,
     219,   220,   221,     0,   222,     0,   223,   224,   225,   226,
     227,   228,   229,     0,   230,   231,   232,     0,   233,     0,
     234,     0,     0,     0,   235,   236,     0,   237,   238,     0,
     239,     0,   240,   241,   242,     0,   243,   244,   245,     0,
     246,   247,   248,   249,   250,     0,     0,   251,   252,   253,
     254,   255,   256,   257,     0,   258,     0,   259,     0,     0,
     260,     0,   261,   262,   263,   264,   265,     0,   266,     0,
     267,     0,     0,   268,   269,   270,     0,     0,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
       0,   283,     0,   284,   285,   286,   287,   288,   289,   290,
     291,   292,     0,   293,   294,     0,   295,     0,   296,   297,
     298,   299,     0,     0,   300,     0,     0,     0,   301,   302,
       0,     0,   303,     0,     0,   304,   305,   306,   307,     0,
     308,   309,   310,   311,   312,     0,   313,   314,   315,   316,
     317,   318,   319,   320,     0,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,     0,   332,   333,   334,
     335,   336,  1184,   338,   339,   340,   341,     0,   342,   343,
     344,     0,   345,   346,   347,   348,     0,   349,   350,     0,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
       0,   361,   362,     0,   363,   364,   365,   366,     0,   367,
     368,     0,   369,     0,   370,   371,   372,   373,     0,   374,
     375,   376,   377,   378,     0,     0,   379,   380,   381,   382,
       0,     0,   383,   384,   385,   386,   387,   388,     0,   389,
     390,     0,     0,   391,   392,   393,   394,   395,   396,     0,
     397,   156,   157,   158,   159,   160,   161,   162,   163,     0,
     164,   165,     0,     0,     0,     0,     0,     0,     0,   166,
     167,     0,   168,     0,   169,   170,   171,     0,  1057,     0,
    1058,  1059,     0,   175,   176,   177,   178,     0,     0,   179,
    1060,  1061,   182,     0,   183,   184,   185,   186,     0,     0,
       0,   188,   189,   190,   191,     0,   192,   193,     0,   195,
       0,   196,   197,   198,     0,   199,     0,     0,     0,     0,
       0,   200,   201,   202,   203,   204,  1062,  1063,   207,     0,
     208,     0,   209,   210,   211,   212,   213,     0,   214,     0,
       0,   215,   763,   217,   218,     0,   219,   220,   221,     0,
     222,     0,   223,   224,   225,     0,   227,   228,     0,     0,
     230,   231,  1064,     0,   233,     0,   234,     0,     0,     0,
     235,   236,     0,   237,     0,     0,   239,     0,   240,   241,
     242,     0,   243,   244,   245,  1373,   246,   247,   248,   249,
     250,     0,     0,  1374,   252,   253,   254,   255,  1065,  1066,
       0,  1067,     0,   259,     0,     0,   260,     0,   261,   262,
     263,   264,   265,     0,     0,     0,   267,     0,     0,   268,
     269,   270,     0,     0,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,  1068,     0,  1069,     0,   284,
     285,   286,   287,   288,   289,   290,     0,   292,     0,   293,
     294,     0,   295,     0,     0,  1070,   298,   299,     0,     0,
     300,     0,     0,     0,   301,   302,     0,     0,  1375,     0,
       0,     0,   305,   306,   307,     0,     0,     0,   310,   311,
     312,     0,   313,   314,   315,   316,   317,   318,  1071,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,     0,   332,   333,     0,   335,   336,   337,   338,
     339,   340,   341,     0,   342,   343,   344,     0,   345,  1072,
     347,   348,     0,   349,  1073,     0,   351,   352,   353,   354,
     355,   356,   357,   358,     0,   360,     0,   361,   362,     0,
     363,   364,   365,   366,     0,  1074,  1075,     0,   369,     0,
     370,     0,   372,     0,     0,   374,   375,   376,   377,   378,
       0,     0,   379,   380,   381,   382,     0,     0,   383,   384,
     385,   386,  1076,   388,     0,   389,   390,     0,     0,   391,
     392,   393,   394,   395,   396,     0,  1077,   156,   157,   158,
     159,   160,   161,   162,   163,     0,   164,   165,     0,     0,
       0,     0,     0,     0,     0,   166,   167,     0,   168,     0,
     169,   170,   171,     0,  1057,     0,  1058,  1059,     0,   175,
     176,   177,   178,     0,     0,   179,  1060,  1061,   182,     0,
     183,   184,   185,   186,     0,     0,     0,   188,   189,   190,
     191,     0,   192,   193,     0,   195,     0,   196,   197,   198,
       0,   199,     0,     0,     0,     0,     0,   200,   201,   202,
     203,   204,  1062,  1063,   207,     0,   208,     0,   209,   210,
     211,   212,   213,     0,   214,     0,     0,   215,   763,   217,
     218,     0,   219,   220,   221,     0,   222,     0,   223,   224,
     225,     0,   227,   228,     0,     0,   230,   231,  1064,     0,
     233,     0,   234,     0,     0,     0,   235,   236,     0,   237,
       0,     0,   239,     0,   240,   241,   242,     0,   243,   244,
     245,     0,   246,   247,   248,   249,   250,     0,     0,     0,
     252,   253,   254,   255,  1065,  1066,     0,  1067,     0,   259,
       0,     0,   260,     0,   261,   262,   263,   264,   265,     0,
       0,     0,   267,     0,     0,   268,   269,   270,     0,     0,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,  1068,     0,  1069,     0,   284,   285,   286,   287,   288,
     289,   290,  1398,   292,     0,   293,   294,     0,   295,     0,
       0,  1070,   298,   299,     0,     0,   300,     0,     0,     0,
     301,   302,     0,     0,     0,     0,     0,     0,   305,   306,
     307,     0,     0,     0,   310,   311,   312,     0,   313,   314,
     315,   316,   317,   318,  1071,   320,     0,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,     0,   332,
     333,     0,   335,   336,   337,   338,   339,   340,   341,     0,
     342,   343,   344,     0,   345,  1072,   347,   348,     0,   349,
    1073,     0,   351,   352,   353,   354,   355,   356,   357,   358,
       0,   360,     0,   361,   362,     0,   363,   364,   365,   366,
       0,  1074,  1075,     0,   369,     0,   370,     0,   372,     0,
       0,   374,   375,   376,   377,   378,     0,     0,   379,   380,
     381,   382,     0,     0,   383,   384,   385,   386,  1076,   388,
       0,   389,   390,     0,     0,   391,   392,   393,   394,   395,
     396,     0,  1077,   156,   157,   158,   159,   160,   161,   162,
     163,     0,   164,   165,     0,     0,     0,     0,     0,     0,
       0,   166,   167,     0,   168,     0,   169,   170,   171,     0,
    1057,     0,  1058,  1059,     0,   175,   176,   177,   178,     0,
       0,   179,  1060,  1061,   182,     0,   183,   184,   185,   186,
       0,     0,     0,   188,   189,   190,   191,     0,   192,   193,
       0,   195,     0,   196,   197,   198,     0,   199,     0,     0,
       0,     0,     0,   200,   201,   202,   203,   204,  1062,  1063,
     207,     0,   208,     0,   209,   210,   211,   212,   213,     0,
     214,     0,     0,   215,   763,   217,   218,     0,   219,   220,
     221,     0,   222,     0,   223,   224,   225,     0,   227,   228,
       0,     0,   230,   231,  1064,     0,   233,     0,   234,     0,
       0,     0,   235,   236,     0,   237,     0,     0,   239,     0,
     240,   241,   242,     0,   243,   244,   245,     0,   246,   247,
     248,   249,   250,     0,     0,     0,   252,   253,   254,   255,
    1065,  1066,     0,  1067,     0,   259,     0,     0,   260,     0,
     261,   262,   263,   264,   265,     0,     0,     0,   267,     0,
       0,   268,   269,   270,     0,     0,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,  1068,     0,  1069,
       0,   284,   285,   286,   287,   288,   289,   290,  2135,   292,
       0,   293,   294,     0,   295,     0,     0,  1070,   298,   299,
       0,     0,   300,     0,     0,     0,   301,   302,     0,     0,
       0,     0,     0,     0,   305,   306,   307,     0,     0,     0,
     310,   311,   312,     0,   313,   314,   315,   316,   317,   318,
    1071,   320,     0,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,     0,   332,   333,     0,   335,   336,
     337,   338,   339,   340,   341,     0,   342,   343,   344,     0,
     345,  1072,   347,   348,     0,   349,  1073,     0,   351,   352,
     353,   354,   355,   356,   357,   358,     0,   360,     0,   361,
     362,     0,   363,   364,   365,   366,     0,  1074,  1075,     0,
     369,     0,   370,     0,   372,     0,     0,   374,   375,   376,
     377,   378,     0,     0,   379,   380,   381,   382,     0,     0,
     383,   384,   385,   386,  1076,   388,     0,   389,   390,     0,
       0,   391,   392,   393,   394,   395,   396,     0,  1077,   156,
     157,   158,   159,   160,   161,   162,   163,     0,   164,   165,
       0,     0,     0,     0,     0,     0,     0,   166,   167,     0,
     168,     0,   169,   170,   171,     0,  1057,     0,  1058,  1059,
       0,   175,   176,   177,   178,     0,     0,   179,  1060,  1061,
     182,     0,   183,   184,   185,   186,     0,     0,     0,   188,
     189,   190,   191,     0,   192,   193,     0,   195,     0,   196,
     197,   198,     0,   199,     0,     0,     0,     0,     0,   200,
     201,   202,   203,   204,  1062,  1063,   207,     0,   208,     0,
     209,   210,   211,   212,   213,     0,   214,     0,     0,   215,
     763,   217,   218,     0,   219,   220,   221,     0,   222,     0,
     223,   224,   225,     0,   227,   228,     0,     0,   230,   231,
    1064,     0,   233,     0,   234,     0,     0,     0,   235,   236,
       0,   237,     0,     0,   239,     0,   240,   241,   242,     0,
     243,   244,   245,     0,   246,   247,   248,   249,   250,     0,
       0,     0,   252,   253,   254,   255,  1065,  1066,     0,  1067,
       0,   259,     0,     0,   260,     0,   261,   262,   263,   264,
     265,     0,     0,     0,   267,     0,     0,   268,   269,   270,
       0,     0,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,  1068,     0,  1069,     0,   284,   285,   286,
     287,   288,   289,   290,     0,   292,     0,   293,   294,     0,
     295,  1367,     0,  1070,   298,   299,     0,     0,   300,     0,
       0,     0,   301,   302,     0,     0,     0,     0,     0,     0,
     305,   306,   307,     0,     0,     0,   310,   311,   312,     0,
     313,   314,   315,   316,   317,   318,  1071,   320,     0,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
       0,   332,   333,     0,   335,   336,   337,   338,   339,   340,
     341,     0,   342,   343,   344,     0,   345,  1072,   347,   348,
       0,   349,  1073,     0,   351,   352,   353,   354,   355,   356,
     357,   358,     0,   360,     0,   361,   362,     0,   363,   364,
     365,   366,     0,  1074,  1075,     0,   369,     0,   370,     0,
     372,     0,     0,   374,   375,   376,   377,   378,     0,     0,
     379,   380,   381,   382,     0,     0,   383,   384,   385,   386,
    1076,   388,     0,   389,   390,     0,     0,   391,   392,   393,
     394,   395,   396,     0,  1077,   156,   157,   158,   159,   160,
     161,   162,   163,     0,   164,   165,     0,     0,     0,     0,
       0,     0,     0,   166,   167,     0,   168,     0,   169,   170,
     171,     0,  1057,     0,  1058,  1059,     0,   175,   176,   177,
     178,     0,     0,   179,  1060,  1061,   182,     0,   183,   184,
     185,   186,     0,     0,     0,   188,   189,   190,   191,     0,
     192,   193,     0,   195,     0,   196,   197,   198,     0,   199,
       0,     0,     0,     0,     0,   200,   201,   202,   203,   204,
    1062,  1063,   207,     0,   208,     0,   209,   210,   211,   212,
     213,     0,   214,     0,     0,   215,   763,   217,   218,     0,
     219,   220,   221,     0,   222,     0,   223,   224,   225,     0,
     227,   228,     0,     0,   230,   231,  1064,     0,   233,     0,
     234,     0,     0,     0,   235,   236,     0,   237,     0,     0,
     239,     0,   240,   241,   242,     0,   243,   244,   245,     0,
     246,   247,   248,   249,   250,     0,     0,     0,   252,   253,
     254,   255,  1065,  1066,     0,  1067,     0,   259,     0,     0,
     260,     0,   261,   262,   263,   264,   265,     0,     0,     0,
     267,     0,     0,   268,   269,   270,     0,     0,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,  1068,
       0,  1069,     0,   284,   285,   286,   287,   288,   289,   290,
       0,   292,     0,   293,   294,     0,   295,     0,     0,  1070,
     298,   299,     0,     0,   300,     0,     0,     0,   301,   302,
       0,     0,     0,     0,     0,     0,   305,   306,   307,     0,
       0,     0,   310,   311,   312,     0,   313,   314,   315,   316,
     317,   318,  1071,   320,     0,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,     0,   332,   333,     0,
     335,   336,   337,   338,   339,   340,   341,     0,   342,   343,
     344,     0,   345,  1072,   347,   348,     0,   349,  1073,     0,
     351,   352,   353,   354,   355,   356,   357,   358,     0,   360,
       0,   361,   362,     0,   363,   364,   365,   366,     0,  1074,
    1075,     0,   369,     0,   370,     0,   372,     0,     0,   374,
     375,   376,   377,   378,     0,     0,   379,   380,   381,   382,
       0,     0,   383,   384,   385,   386,  1076,   388,     0,   389,
     390,     0,     0,   391,   392,   393,   394,   395,   396,     0,
    1077,   156,   157,   158,   159,   160,   161,   162,   163,     0,
     164,   165,     0,     0,     0,     0,     0,     0,     0,   166,
     167,     0,   168,     0,   169,   170,   171,     0,  1057,     0,
    1058,  1059,     0,   175,   176,   177,   178,     0,     0,   179,
    1060,  1061,   182,     0,   183,   184,   185,   186,     0,     0,
       0,   188,   189,   190,   191,     0,   192,   193,     0,   195,
       0,   196,   197,   198,     0,   199,     0,     0,     0,     0,
       0,   200,   201,   202,   203,   204,  1062,  1063,   207,     0,
     208,     0,   209,   210,   211,   212,   213,     0,   214,     0,
       0,   215,   763,   217,   218,     0,   219,   220,   221,     0,
     222,     0,   223,   224,   225,     0,   227,   228,     0,     0,
     230,   231,  1064,     0,   233,     0,   234,     0,     0,     0,
     235,   236,     0,   237,     0,     0,   239,     0,   240,   241,
     242,     0,   243,   244,   245,     0,   246,   247,   248,   249,
     250,     0,     0,     0,   252,   253,   254,   255,  1065,  1066,
       0,  1067,     0,   259,     0,     0,   260,     0,   261,   262,
     263,   264,   265,     0,     0,     0,   267,     0,     0,   268,
     269,   270,     0,     0,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,  1068,     0,  1069,     0,   284,
     285,   286,   287,   288,   289,   290,     0,   292,     0,   293,
     294,     0,   295,     0,     0,  1070,   298,   299,     0,     0,
     300,     0,     0,     0,   301,   302,     0,     0,     0,     0,
       0,     0,   305,   306,   307,     0,     0,     0,   310,   311,
     312,     0,   313,   314,   315,   316,   317,   318,  1071,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,     0,   332,   333,     0,   335,   336,   337,   338,
     339,   340,   341,     0,   342,   343,   344,     0,   345,     0,
     347,   348,     0,   349,  1073,     0,   351,   352,   353,   354,
     355,   356,   357,   358,     0,   360,     0,   361,   362,     0,
     363,   364,   365,   366,     0,  1074,  1075,     0,   369,     0,
     370,     0,   372,     0,     0,   374,   375,   376,   377,   378,
       0,     0,   379,   380,   381,   382,   414,     0,   383,   384,
     385,   386,  1076,   388,     0,   389,   390,   415,     0,   391,
     392,   393,   394,   395,   396,     0,  1077,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   416,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   417,     0,  -447,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   418,     0,     0,     0,     0,     0,   419,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   420,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -563,   421,
       0,     0,     0,   422,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -549,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -373,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   423,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   424,     0,   425,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -373,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   426,     0,     0,     0,  -563,     0,   427,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   428,   429,
       0,   430,     0,     0,     0,     0,     0,     0,     0,     0,
     431,     0,     0,     0,   432,   433,     0,     0,     0,   434,
       0,     0,     0,     0,   435
};

static const short yycheck[] =
{
       0,   146,   694,    43,   501,  1135,    39,  1113,     0,   670,
      12,   790,   536,   138,   424,  1153,   677,   142,   629,   634,
     741,    24,  1090,  1245,   632,    32,     0,    20,  1125,   586,
     533,    21,     0,    26,   632,  1745,   143,  1579,  1187,  1536,
     147,     0,    32,    43,   454,  1704,   617,   154,   545,  1054,
       7,     8,   908,   885,   625,   418,    13,    14,  1717,    41,
       0,    18,   600,    20,    21,  1555,  1922,     0,  1458,    26,
    1102,    28,  1521,    30,    31,    32,  1102,    34,  1102,    36,
      37,  1896,   139,   471,   141,  1102,   449,  1102,  1102,     0,
       0,   662,  1526,  1527,     0,   666,   153,   752,   753,    24,
      19,   672,  1316,     0,    24,    11,   705,   678,    81,     0,
       0,    24,   707,    55,    11,   762,   596,  1380,  1381,     0,
      76,   776,   531,   851,  1127,   534,  2341,    43,  2039,    38,
       7,    11,    81,    45,    37,     5,    29,    17,    38,   120,
     120,   120,    56,    86,    45,     0,   137,   105,    23,   452,
      45,    62,    62,   456,    11,   154,    57,    11,    81,     7,
      17,   464,   144,    17,    38,   211,    81,   149,   150,    81,
    2560,   123,  1883,  1884,  1885,  1886,   132,  2374,    95,    81,
     127,    18,   139,   140,   141,    99,   143,   122,   145,   146,
     147,   148,   120,   158,   151,   152,   153,   154,    22,   205,
     105,   704,    18,    81,   257,   148,   109,    83,   209,    49,
      23,    84,   807,   124,   124,   270,   117,   215,    95,    12,
      43,   173,   117,   257,   232,   181,    81,   530,   184,   170,
      19,    43,   135,   132,    85,   105,   646,   241,   209,  2436,
     133,   852,  1247,    85,   137,   265,    52,    95,   120,   181,
     214,   354,    84,   344,  2591,   292,  1199,  1200,  1201,   362,
     351,   134,   176,    31,  1207,   137,   881,   125,  1211,  1212,
     211,    97,  2650,   830,   239,  1218,   169,   885,    86,   424,
      11,    81,   181,   317,  1227,   200,  1229,   885,   200,   414,
    2505,    88,   265,   205,   302,   332,  1075,   352,   200,  1242,
      86,  1244,   134,   323,   155,    24,   359,   263,   255,   454,
     224,  2689,   136,   155,   272,   422,  1384,  1045,   364,   426,
     445,   233,   265,  1453,   259,   333,   451,   205,   435,   205,
     242,   263,   233,  2268,   340,  2270,   334,  2534,   233,   359,
     148,   293,   251,   295,   955,   848,  1560,   224,   251,   252,
     323,   251,  1044,   270,  1851,   359,   149,  2694,   359,   261,
      91,   264,    38,   420,   263,   364,   281,   272,   310,   284,
    2760,   299,   212,   364,   317,   278,   433,   251,   292,   335,
     294,   274,   285,   364,   364,   364,   359,   257,   359,    86,
     120,   340,   309,   270,  2305,  2610,     8,   277,   246,   364,
     200,   313,   272,   359,  2115,  1060,  1061,   410,  2118,  2119,
     467,    23,   313,   288,  1069,    27,  1063,   340,   313,   722,
     277,   344,   154,   277,  1521,   328,  1118,   907,    40,    41,
     363,  1645,   352,   353,   354,   355,   361,   156,   344,   742,
     359,   361,   355,   359,  1447,   351,  1054,   344,   361,   360,
     360,   148,   363,   363,   351,   364,  1054,   363,   415,  1849,
    1850,   418,   444,   420,   364,   422,   363,   424,  1858,   426,
     427,   428,   363,   363,   431,   288,   433,   865,   435,   472,
     889,   474,   363,   476,   441,   340,  1935,   480,  2199,   446,
    1939,  1713,   449,   299,  1943,   452,  1759,   454,  1761,   456,
     457,   646,   505,   329,   461,   462,   364,   464,   363,   317,
     467,   636,   922,   325,  1346,   924,   192,   340,   643,   121,
     357,   524,   319,   360,  1380,   362,   138,   364,   340,   532,
     142,   317,   144,  1132,    91,  1478,   359,   149,   150,  1138,
     949,   357,   331,   332,   360,   602,   362,   359,   364,  2484,
     507,   103,   509,   122,   299,   512,   556,    86,  1213,  1214,
     685,   224,    57,   265,   556,   340,    95,   232,   265,    62,
     158,    19,   123,   530,   531,   251,   533,   534,    37,    83,
      16,    75,   556,   115,   104,    74,    81,    80,   556,    37,
      11,  1186,  1187,    86,   270,   299,    83,   556,   655,   115,
     152,   346,  1197,  1198,    62,  1868,  1703,   270,   291,   660,
    2466,  1114,   669,   106,  1209,  1210,   556,   362,   138,  1234,
     317,    24,   173,   225,    84,   121,   683,    31,  1223,  1224,
    2445,   350,   351,   352,   353,   354,   355,   302,   170,  1247,
     697,   692,   361,   200,  1587,   602,   140,   216,   144,  1247,
     109,   239,   209,   156,   170,   148,   143,   359,  1921,  1156,
     364,   109,   359,   159,  1279,    81,   124,   219,   333,    73,
      91,   167,   302,   275,   134,   266,   135,    91,   729,   211,
    1408,   200,   639,  1411,  1412,  1280,   224,   135,   224,   646,
     647,   180,  2016,   182,   651,   211,   200,   111,   655,   224,
     291,   230,   302,    76,   661,   200,    86,    76,   246,   709,
     246,   214,   669,   200,   162,   284,  2040,   709,    45,   238,
     156,   246,   331,   893,   724,    52,   683,   684,   246,   686,
      57,   249,   724,   333,   270,   709,   327,   153,  1346,   121,
     697,   709,   293,   147,   295,  2242,   746,   704,  1346,   239,
     709,   257,   270,   156,   157,   364,   331,   173,   254,   132,
     312,   931,   719,   132,   764,   722,   723,   807,   148,  1712,
     727,   360,   265,  2163,   280,   364,   327,   922,  2168,  2169,
     216,   738,   272,   224,  1890,   742,   200,   744,   192,   364,
     117,   205,   261,   252,   794,   209,   290,   291,   363,  2289,
     203,   413,   414,   266,   252,   264,   809,   807,   181,  2258,
    1220,   184,   181,   331,  2263,   184,   264,   820,  2267,   278,
    2254,  1959,   202,   292,   317,     0,   285,   317,   291,   270,
     278,   882,   444,   445,   358,   282,   283,   285,  1935,   451,
     364,  1990,  1939,  1414,  1415,   326,  1943,   111,   851,  1152,
     409,  1154,  1155,   325,  1157,  1798,  1548,  1395,   262,  1891,
     950,   214,  1867,   332,   327,  1891,   359,  1891,   340,   328,
     921,   593,   872,   873,  1891,   875,  1891,  1891,   437,   224,
     328,   214,   494,   331,   360,   265,   224,   359,   364,   501,
     263,   848,   306,   340,   263,   617,   853,   854,   355,   511,
     314,   246,  1758,   625,   361,   862,   233,   343,   246,    19,
     346,   347,   348,   359,   350,   351,   352,   353,   354,   355,
       9,    52,   338,   339,   340,   361,    57,    37,   344,   357,
    1873,  1874,   889,   545,   362,   351,   548,   317,    27,  1538,
    1539,   205,   224,    16,  1222,   209,   558,   350,   351,   352,
     353,   354,   355,  2495,   246,   331,   332,   249,   361,   224,
      14,    15,   335,   945,   246,   922,   335,   924,   340,   338,
     358,   340,  1529,   304,     7,  2197,   364,    16,   270,   359,
      13,   246,  1581,   359,    19,  1348,   313,   359,   270,  1046,
     340,  1042,   949,  1050,  1101,  2705,  1274,  2656,   344,   109,
     360,    66,    37,   363,  2394,   270,  1096,  2397,  2398,   359,
    1100,   340,   358,   224,   340,  1318,    49,   331,   332,   239,
    1110,   340,  2732,   635,   636,   135,   340,   247,  1153,    62,
     359,   643,  2481,   359,   340,   246,  2695,    86,   249,   331,
     359,   248,   306,  1638,  1095,   359,   339,   267,   236,     5,
     314,   344,   162,   359,    10,   140,   121,    90,   351,   270,
    2003,    17,    95,  1658,    59,    98,   340,   679,   680,   681,
    2013,  2568,   359,   685,   109,  1220,  1127,    33,    25,   144,
    1808,   162,  1139,   156,  1135,   359,  1814,  1815,  1391,  1046,
     331,   332,   359,  1050,   159,  1052,   340,    44,  1693,   148,
     135,    31,   167,  1718,   331,   332,   293,    37,   295,   721,
    1705,  1706,  2334,   340,   357,   359,   359,   156,   359,   362,
     331,   339,   346,   188,  1164,  1125,   344,   162,   344,   741,
     360,   932,   359,   357,   364,   936,   103,   938,   362,   235,
    1868,  1143,   252,   216,  1101,   360,  1103,  1746,   115,   364,
     214,   360,   201,   202,   264,   364,  2546,  1114,   360,  2667,
    2668,  2258,   364,  2671,  1164,  2673,  2263,   360,   278,   359,
    2267,   364,  2240,  1173,  1181,   285,  1133,   216,    25,   360,
     360,  1173,  1139,   364,   364,   152,  1710,   158,   360,   254,
    1180,   224,   364,   872,   873,  1152,   875,  1154,  1155,  1173,
    1157,   336,   360,   170,   360,  1173,   364,  1164,   364,   360,
     362,   360,   363,   246,  1173,   364,   265,   252,   328,  1270,
     357,   214,   359,  1180,  1181,  1824,  1825,  1184,     7,   264,
     872,   873,   217,   875,    13,    14,  1343,   270,   217,    18,
    1347,    20,  2185,   278,   211,    42,    43,    26,   860,    28,
     285,  1251,   219,   360,  1361,   299,   360,   364,  2201,  1867,
     364,   214,  1983,  1220,  1674,  2044,  2045,   360,   317,  1867,
     343,   364,   337,   346,   347,   348,   336,   350,   351,   352,
     353,   354,   355,  1390,    25,  1392,   360,   293,   361,   295,
     364,   336,   360,   328,  1297,  1402,   364,   360,  1405,   331,
     332,   364,   360,    16,   343,  2527,   364,   346,   347,   348,
     359,   350,   351,   352,   353,   354,   355,   158,   352,   353,
     354,   355,   361,   352,   293,  1432,   295,   361,  1435,   270,
    1437,  2437,   360,   945,  1949,   360,   364,   360,   119,   364,
     360,   364,  1620,  1621,   364,   312,   360,  1625,   360,   360,
     364,   360,  1951,   364,  1953,  1954,   360,    35,  1973,   360,
     364,  1318,   359,   364,   360,   359,   145,  2464,   364,   148,
     360,   360,   151,   152,   364,   364,   360,  1655,  1656,   360,
     364,   331,   332,   364,  2481,  1984,  1343,  1344,   331,   332,
    1347,  1348,  1449,   360,   359,  1352,  1447,     8,  1455,  1456,
     362,  1358,  1453,    36,  1361,   360,   360,  1364,   156,   364,
     364,   360,    23,  1728,  1729,   364,    27,  1920,  1469,  2557,
     331,   332,   360,   360,  1727,    10,   364,   364,   360,    40,
     732,   733,   364,  1390,  1391,  1392,  1393,  1394,  2053,  1396,
    1397,    74,   360,   156,   359,  1402,   364,   246,  1405,  1406,
    1407,  1454,     7,  1730,  1731,  1458,  2051,  1637,    13,  1639,
    1640,   359,  1419,  1420,  1421,   362,  1423,  1424,  1425,  1426,
    1427,  1428,  1429,    66,    59,  1432,  1433,  1780,  1435,  1436,
    1437,  1521,  1533,  2094,    57,   270,   293,  1489,   295,   560,
      75,   562,  1449,  1796,    49,   214,  1499,  1800,  1455,  1456,
    1940,   168,  1942,   216,   359,   208,   139,    62,    93,   162,
    1513,   359,    45,  1125,   359,   331,    19,    25,    25,  1570,
     224,  1521,   162,   319,  1136,  1137,   359,    31,   121,  1674,
     364,   359,   214,  1490,   214,    90,    19,   122,   149,   116,
      95,  1153,   127,    98,  1156,   168,   115,   180,  1505,   182,
     123,   144,  1509,   115,  2651,   140,  1168,   359,  2664,   192,
     340,   359,   340,    67,   359,  1522,   159,   140,   359,  1526,
    1527,   359,   359,   229,   167,   359,   359,   162,   340,  1536,
    1725,   340,   359,    87,   156,   359,   359,   359,  2249,   359,
     359,   359,   359,   340,   359,   188,  1553,   340,   102,   359,
     173,   359,   350,   351,   352,   353,   354,   355,   359,   222,
     359,    19,   116,   361,   168,   359,   115,   250,  1658,   364,
     299,   214,  1579,   299,   362,   299,   130,   299,   299,   264,
     343,   216,   214,   346,   347,   348,   415,   350,   351,   352,
     353,   354,   355,   318,   216,   218,   279,   205,   361,   428,
     299,   299,   431,   299,  2784,   292,    45,  1764,  1658,   364,
     299,   254,   441,   299,  1276,  1698,  1699,   446,    57,   224,
     255,  1671,   319,  2272,   299,   299,   261,   261,   457,  1982,
      52,   266,   461,   462,   214,   300,   304,   304,   214,   299,
    1647,  1691,    81,   299,    83,   364,   299,   261,   299,   359,
       0,   205,   359,  1703,   214,  1317,   291,   292,   212,   156,
     331,   325,    19,    18,   359,   270,   359,  1674,   359,   304,
     293,   359,   295,  1868,   309,  1776,   319,  1778,   507,     9,
     509,   304,    81,   318,   238,   327,   176,   359,   115,   214,
     313,    19,  2020,   262,   337,  2023,  2024,  2025,  2026,  2027,
    2028,  2029,  2030,  2031,   143,  2033,   330,  1714,    19,  1716,
     319,   299,    62,   323,   359,   204,  1817,   120,   359,   344,
    1727,   343,  2715,  2716,   346,   347,   348,   329,   350,   351,
     352,   353,   354,   355,   297,    24,   297,   299,  1745,   361,
      29,   361,  1795,  2071,  2072,   297,  1847,   364,   270,   120,
     152,   302,   413,   103,   360,   215,   359,  1764,  1765,  1766,
     359,   200,   209,   364,   364,   115,   205,   360,    56,   170,
     120,   160,   359,  1780,   124,   160,   205,   127,   359,   129,
     205,  2402,   205,   214,  1959,   220,   299,  2140,  2141,  1796,
     299,   261,   364,  1800,   233,   360,  1849,  1850,  1899,    35,
     364,   246,   152,   242,  1961,  1858,   291,   239,    19,  1910,
     639,   156,  1865,   156,   319,  1868,   156,   212,   647,   346,
     170,    18,   651,   357,  1486,   357,   299,   299,  1985,   115,
     299,  1222,   661,   494,   299,   214,   218,    19,   128,   131,
     501,   115,   360,   364,  1851,  2494,  1508,   131,   137,   360,
     511,   156,  1514,   291,  1861,     8,   364,   686,   125,  1521,
     183,   211,   214,   364,  1914,  1915,  1919,   156,   157,   219,
      35,   120,  1914,  1915,   313,   120,   360,   360,  1928,  2524,
    2208,   360,   360,   360,   545,  1935,  1928,   548,   364,  1939,
     719,  1998,   360,  1943,   360,  1996,   360,   558,   727,   360,
     336,   360,   336,   360,   360,   360,  2366,   360,   360,  1916,
     336,   216,   299,  1920,   203,   359,   359,   170,   360,   359,
     146,  1971,  1929,   205,   224,  1932,   359,   216,   170,  1971,
     226,  2032,   226,   316,   299,   299,   360,   156,   156,  1946,
     360,   291,   156,   357,   360,  2046,   263,   184,   360,   214,
     170,   309,   346,   248,  1961,     0,    16,   364,   106,  2608,
     360,   359,   312,   299,    24,  1972,   212,   214,  2069,    29,
     319,   212,   360,   359,   635,  1982,   159,   221,  1985,   159,
     330,   359,   156,   360,   217,   105,   105,   357,   360,  2079,
     101,  1998,   120,   361,   115,    43,   127,   360,  2081,  2082,
    2083,  2084,   299,   359,  2057,   261,   360,   357,  2336,  2337,
     360,   359,   362,   363,   360,   156,   360,    62,   679,   680,
     681,   360,   299,   146,  2766,   360,   309,   299,   299,  2079,
     299,  2578,   156,   358,   156,  1697,   358,    19,   343,   359,
     319,  1703,   347,   348,   160,   350,   351,   352,   353,   354,
     355,   115,   218,  2154,   343,   142,   361,   156,   103,    19,
     721,   350,   351,   352,   353,   354,   355,    19,   322,   159,
     115,   364,   361,   133,   359,   120,   120,   137,   359,   124,
     741,   359,   127,   359,   129,   124,  2139,   360,   120,   359,
     205,   209,  2145,   359,  2147,  2138,   156,   157,   360,   360,
     360,   360,    35,   129,   205,   156,   319,   152,    88,   169,
    2163,  2118,  2119,    83,   143,  2168,  2169,   216,  2219,   138,
     358,  2474,   137,   142,   122,   170,   122,   120,   140,   319,
      96,  2484,   106,  2140,  2141,   360,    82,   359,    82,   161,
     200,   156,   120,   203,   299,    19,   217,   359,  2201,  2202,
     359,  2158,  2159,   360,   242,    19,   216,   292,   218,   205,
     237,   179,   212,   212,   115,    19,   211,   214,    54,    96,
     359,  2366,   214,   214,   219,  2503,   350,   351,   352,   353,
     354,   355,   292,   214,    92,  2513,  2514,   361,  2241,   205,
     257,    86,   317,   364,   364,   258,  2203,  2204,  2205,   860,
    2207,   216,   258,   106,     6,   359,   241,   237,  2258,   360,
    2367,  1714,  1488,  2263,   274,   556,   854,  2267,  1431,  2226,
    2377,  2228,  2379,  1818,  2231,  2228,  2233,  2234,  1419,  1620,
    1621,  2231,  2151,  1895,  1625,  2242,  2430,  1742,  1861,  1901,
    2341,  2729,  2685,  2701,   343,  2598,   291,  2254,  2684,  2256,
    2575,   350,   351,   352,   353,   354,   355,  2710,  2641,  2275,
    1111,  2268,   361,  2270,  1655,  1656,  2389,   312,  2459,  1481,
    2796,   216,  2279,  1935,  1103,  2233,  2770,  1939,  2409,  2408,
    1867,  1943,  2746,   343,  2744,   330,   346,   347,   348,  2797,
     350,   351,   352,   353,   354,   355,  1958,  1959,   358,    26,
     502,   361,   723,  2279,  1133,   365,  2651,  1097,  1758,  1381,
    2363,  1380,   357,  2247,  2466,   360,  2627,   362,   363,  2759,
    2795,  1983,  1317,   544,    19,   709,  2456,  2370,   343,  1972,
    1722,   346,   347,   348,   709,   350,   351,   352,   353,   354,
     355,  2394,   880,  1732,  2397,  2398,   361,  1330,   879,  1703,
    1314,  1521,  1941,  2056,  2482,  2226,  1468,  1072,  1671,  2366,
    2367,  2368,  2369,  1589,  1868,  1669,  1277,  1716,  2493,  2283,
    2377,  2378,  2379,    -1,  2417,   684,    -1,    -1,    -1,    -1,
      -1,    -1,  2557,  2390,    -1,  2486,    -1,  1620,  1621,    -1,
      -1,  2441,  1625,    -1,    -1,   414,    -1,    -1,   343,  2441,
      -1,   346,   347,   348,  2505,   350,   351,   352,   353,   354,
     355,  2512,  2465,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    10,  1655,  1656,  2086,  2087,   445,    -1,    -1,    -1,
      -1,  2481,   451,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,  2459,    -1,    -1,    -1,    -1,  2464,    -1,    -1,
      -1,    -1,    -1,    52,    -1,  2640,    -1,  2474,    57,    -1,
      59,    -1,    -1,    -1,    -1,  1136,  1137,  2484,    -1,  2586,
      -1,  2488,    -1,    -1,    -1,    -1,    75,    -1,  2495,    -1,
      -1,    -1,    -1,  2546,    -1,  1156,    -1,  2550,    -1,    -1,
      -1,    -1,    -1,    -1,    93,    -1,    -1,  1168,    -1,  2610,
     529,    -1,    -1,    -1,    -1,  1344,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1352,    -1,    -1,    -1,    -1,    -1,  1358,
      -1,  2584,    -1,   122,    -1,  1364,  2198,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2652,    -1,    -1,    -1,  2744,
      -1,   140,  2214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2222,  2568,    -1,  2570,  1393,  1394,    -1,  1396,  2743,    -1,
      -1,    -1,    -1,    -1,   163,    -1,    -1,  1406,  1407,  2586,
      -1,    -1,    -1,  2590,  2591,    -1,    -1,    -1,    -1,    -1,
      -1,  2598,  1421,    -1,  1423,  1424,  2258,  1426,  1427,  1428,
    1429,  2263,    -1,    -1,  1433,  2267,  2781,  1436,    -1,    -1,
      -1,    -1,   631,   632,    -1,  1276,  2717,   636,    -1,    -1,
      -1,    -1,    -1,    -1,   643,    -1,    -1,   216,  2635,  2020,
      -1,    -1,  2023,  2024,  2025,  2026,  2027,  2028,  2029,  2030,
    2031,   660,  2033,    -1,  2651,  2652,    -1,   236,    -1,  2702,
    2703,    -1,    -1,  2706,  2707,    -1,  1317,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   685,  2720,    -1,    -1,
     259,    -1,   261,   692,    -1,    -1,    -1,   266,    -1,    -1,
    2071,  2072,  2772,  2784,    -1,  2692,    -1,  2694,   707,    -1,
      -1,  2353,  2354,  2355,  2356,    -1,    -1,    -1,  2705,    -1,
      -1,    -1,   291,    -1,    -1,    -1,    -1,    -1,    -1,  2759,
     729,    -1,    -1,  2720,    -1,   304,    -1,  2770,    -1,    -1,
     309,    -1,  2772,    -1,    -1,  2732,    -1,    16,    -1,    -1,
      -1,   750,    -1,    -1,    -1,    24,    -1,  2744,   327,    -1,
      29,    -1,    -1,  2796,    -1,  2795,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   777,    -1,
      -1,    -1,    -1,  2770,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   804,   805,  2020,   807,  2796,
    2023,  2024,  2025,  2026,  2027,  2028,  2029,  2030,  2031,    -1,
    2033,    -1,  2464,    -1,    -1,    -1,   825,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2208,    -1,  2481,
      -1,    -1,    -1,    -1,    -1,  1486,    -1,    16,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    24,    -1,    -1,  2071,  2072,
      29,    -1,    -1,    10,   133,    -1,    -1,  1508,   137,    -1,
      -1,    -1,    -1,  1514,    21,   874,    -1,    -1,   877,   878,
      -1,    -1,    -1,   882,    -1,    -1,   885,   156,   157,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
     169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,   908,
      -1,    -1,    59,    29,    -1,  2557,    -1,  2559,    -1,    -1,
      89,    -1,   921,    -1,    -1,    -1,    -1,    -1,    75,    -1,
      -1,   200,    -1,    -1,   203,    -1,  2578,    -1,    -1,    -1,
      -1,    -1,   660,    -1,    -1,    -1,    93,   216,    -1,   218,
      -1,    -1,  2594,    -1,    -1,    -1,  1765,  1766,    -1,    -1,
      -1,    -1,    -1,    -1,   133,  2336,  2337,    -1,   137,    -1,
      -1,    -1,    -1,    -1,   692,   122,    -1,    -1,    -1,  2621,
     127,    -1,    -1,    -1,    -1,    -1,   102,   156,   157,    -1,
      -1,    -1,    -1,   140,    -1,  2208,    -1,    -1,  2640,    -1,
     169,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,  2651,
      -1,   729,    -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,
      -1,   137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   200,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,
     156,   157,    -1,  1042,    -1,    -1,    -1,   216,    -1,   218,
      -1,    -1,    -1,   169,    -1,  1054,  1697,    -1,    -1,    -1,
      -1,    -1,   660,    -1,    -1,    -1,    -1,    -1,    -1,   216,
      -1,    -1,    -1,  1072,   343,    -1,    -1,   346,   347,   348,
      -1,   350,   351,   352,   353,   354,   355,   203,    -1,   236,
      -1,    -1,   361,    -1,   692,   364,  1095,    -1,    -1,    -1,
     216,  2743,    -1,    -1,    -1,   274,    -1,  1916,   255,    -1,
      -1,    -1,   259,    -1,   261,    -1,    -1,    -1,    -1,   266,
      -1,    -1,    -1,  2336,  2337,    -1,  1125,    -1,  1127,    -1,
      -1,   729,  2503,   851,    -1,    -1,  1135,    -1,    -1,  2781,
      -1,    -1,  2513,  2514,   291,   292,    -1,    -1,    -1,    -1,
     319,    -1,    -1,    -1,  1153,    -1,    -1,   304,   274,    -1,
      -1,    -1,   309,    -1,   882,    -1,    -1,    -1,    -1,    -1,
      -1,   318,    -1,    -1,   343,    -1,    -1,   346,   347,   348,
     327,   350,   351,   352,   353,   354,   355,  1186,  1187,    -1,
     908,    -1,   361,    -1,    -1,  1194,    -1,    -1,  1197,  1198,
      -1,    -1,    -1,   921,    -1,    -1,    -1,    -1,    -1,    -1,
    1209,  1210,    -1,    -1,    -1,    -1,    -1,    -1,  1217,    -1,
      -1,    -1,  1221,  1222,  1223,  1224,    -1,   343,    -1,    -1,
      -1,    -1,  1231,  1232,   350,   351,   352,   353,   354,   355,
      -1,    -1,    -1,    -1,    -1,   361,    -1,  1246,  1247,    -1,
      -1,  1250,    -1,    -1,  1895,  1254,    -1,    -1,    -1,  1258,
    1901,    -1,  1261,  1262,  1263,  1264,  1265,  1266,  1267,  1268,
    1269,  1270,    -1,  1272,    -1,    -1,    -1,    -1,  1277,    -1,
      -1,  1280,    -1,    -1,   882,    -1,    -1,    -1,    -1,    -1,
    2503,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,
    2513,  2514,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
     908,    29,    -1,    -1,    -1,    -1,    -1,  1958,    -1,    -1,
      -1,    -1,    -1,   921,  1042,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1983,    -1,    -1,    -1,    -1,  1346,    16,  2158,
    2159,    19,    -1,    -1,  1072,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,  1362,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1095,    -1,    -1,
      -1,  1380,  1381,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2203,  2204,  2205,   115,  2207,    -1,
      -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,  1127,
      -1,    -1,    -1,    -1,    -1,   133,    -1,  1135,    -1,   137,
      -1,    -1,    -1,    -1,    -1,  2234,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,   157,
      -1,    -1,    -1,    -1,  1042,  2086,  2087,  1446,  1447,    -1,
      -1,   169,    -1,    -1,  1453,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   133,    24,    -1,  1467,   137,
    1469,    29,    -1,    -1,  1072,    -1,    -1,    -1,    -1,    -1,
     660,    -1,   200,    -1,    -1,   203,    -1,    -1,   156,   157,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1095,   216,    -1,
     218,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   692,    -1,    -1,   660,    -1,    -1,    -1,    -1,
      -1,    -1,  1521,    -1,    -1,    -1,    -1,    -1,    -1,  1127,
      -1,  1530,   200,    -1,  1533,   203,    -1,  1135,    -1,    -1,
      -1,    -1,    -1,    -1,  1543,    -1,    -1,   692,   216,   729,
     218,    -1,  1270,    -1,    -1,    -1,   274,  2198,  1557,  2368,
    2369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2378,
      -1,  1570,    -1,  2214,    -1,   133,    -1,    -1,    -1,   137,
      -1,  2222,    -1,    -1,   729,    -1,    -1,    -1,    -1,  1588,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,   157,
      -1,    -1,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1620,  1621,    -1,    -1,   343,  1625,    -1,   346,   347,
     348,    -1,   350,   351,   352,   353,   354,   355,  1637,  1638,
    1639,  1640,    -1,   361,    -1,   203,    -1,  1646,    -1,    -1,
    2459,    -1,    -1,    -1,    -1,    -1,  1655,  1656,   216,  1658,
      -1,    -1,  1380,  1381,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1670,  1270,  1672,    -1,   343,    -1,  1676,   346,   347,
     348,    -1,   350,   351,   352,   353,   354,   355,    -1,    -1,
      -1,    -1,    -1,   361,  1693,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   882,    -1,  1703,    -1,  1705,  1706,    -1,    -1,
      -1,    -1,  2353,  2354,  2355,  2356,   274,    -1,    -1,    -1,
      -1,    -1,    -1,  1722,    -1,    -1,    -1,    -1,   908,  1447,
      -1,  1730,  1731,  1732,    -1,  1453,    -1,   882,    -1,    -1,
      -1,   921,  1741,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1469,    -1,    -1,    -1,    -1,   660,    -1,    -1,  1758,
    1759,    -1,  1761,   908,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   921,  1776,    -1,  1778,
      -1,    -1,  1380,  1381,    -1,   343,    -1,    -1,   692,   347,
     348,    -1,   350,   351,   352,   353,   354,   355,    -1,    -1,
      -1,    -1,    -1,   361,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1533,    -1,    -1,  1817,    -1,
      -1,    -1,    -1,    -1,    -1,   729,  2635,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1847,  1447,
      -1,    -1,  1570,    -1,    -1,  1453,    -1,    -1,    -1,    -1,
      -1,    -1,  1042,    -1,    -1,    -1,    -1,    -1,  1867,  1868,
      -1,  1469,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2692,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1072,    -1,    -1,    -1,    -1,  1042,    -1,    -1,
    1899,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1910,    -1,    -1,    -1,  1095,    -1,    -1,  2559,    -1,
      -1,    -1,  1921,    -1,   660,    -1,    -1,  1072,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1533,  1935,  2578,    -1,    -1,
    1939,    -1,    -1,    -1,  1943,    -1,    -1,  1127,    -1,   660,
    1095,    -1,    -1,  2594,    -1,  1135,   692,    -1,    -1,    -1,
    1959,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1570,    -1,    -1,    -1,    -1,    -1,   882,    -1,
    2621,   692,  1127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1135,    -1,    -1,   729,  1993,    -1,    -1,  1996,    -1,    -1,
      -1,    -1,    -1,    -1,   908,    -1,  2005,    -1,    -1,    -1,
      -1,    -1,  2011,    -1,    -1,    -1,  2015,   921,   729,    -1,
      -1,  2020,    -1,    -1,  2023,  2024,  2025,  2026,  2027,  2028,
    2029,  2030,  2031,  2032,  2033,    -1,    -1,    -1,  2037,  2038,
    1758,  1759,    -1,  1761,    -1,    -1,    -1,  2046,    -1,    -1,
      -1,    -1,  2051,    -1,    -1,    -1,    -1,    -1,  1776,  2058,
    1778,    -1,  2061,    -1,  2063,    -1,    -1,    -1,    -1,    -1,
    2069,  2070,  2071,  2072,    -1,    -1,    -1,  2076,    -1,    -1,
    2079,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1270,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1817,
      -1,  2100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1270,    -1,    -1,    -1,  1847,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1042,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   882,    -1,    -1,    -1,
    1868,    -1,    -1,    -1,    -1,  2154,    -1,    -1,    -1,    -1,
    1758,  1759,    24,  1761,    -1,    -1,    -1,    29,  1072,    -1,
      -1,   882,   908,    -1,    -1,    -1,    -1,    -1,  1776,    -1,
    1778,  1899,    -1,    -1,    -1,   921,    -1,    -1,    -1,   660,
      -1,  1095,  1910,    -1,    -1,    -1,    -1,   908,    -1,    -1,
    1380,  1381,    24,  1921,    -1,    -1,    -1,    29,    -1,  2208,
     921,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1817,
    2219,   692,    -1,  1127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1135,    -1,    -1,    -1,  1380,  1381,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1847,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   729,  2258,
      -1,    -1,    -1,    -1,  2263,    -1,    -1,  1447,  2267,    -1,
    1868,   133,    -1,  1453,    -1,   137,    -1,    -1,  1996,    -1,
     102,    -1,    -1,    -1,  2283,    -1,    -1,    -1,    -1,  1469,
      -1,    -1,    -1,    -1,   156,   157,  2295,    -1,    -1,    -1,
      -1,  1899,  1447,    -1,    -1,    -1,  1042,   169,  1453,    -1,
      -1,   133,  1910,    -1,  2032,   137,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1921,  1469,    -1,    -1,    -1,  2046,    -1,
      -1,  1042,    -1,    -1,   156,   157,  1072,  2336,  2337,    -1,
      -1,   203,  2341,    -1,    -1,    -1,    -1,   169,  2347,  2348,
      -1,  2069,  2351,  1533,   216,    -1,    -1,    -1,    -1,  1095,
      -1,  1072,    -1,    -1,    -1,    -1,  1270,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   203,    -1,    -1,  1095,    -1,    -1,    -1,  1533,    -1,
    1570,  1127,    -1,    -1,   216,    -1,    -1,    -1,  1996,  1135,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   882,   274,    -1,    -1,    -1,  1127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1135,  1570,    -1,    -1,   660,    -1,
    2429,    -1,    -1,    -1,  2032,    -1,  2154,   908,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2046,    -1,
     921,    -1,   274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     692,    -1,    -1,    -1,    -1,  2464,    -1,    -1,    -1,    -1,
      -1,  2069,    -1,    -1,    -1,    -1,  1380,  1381,  2477,    -1,
      -1,   343,  2481,    -1,   346,   347,   348,  2486,   350,   351,
     352,   353,   354,   355,  2493,    -1,    -1,   729,    -1,   361,
      -1,  2219,    -1,    -1,  2503,    -1,  2505,    -1,    -1,    -1,
      -1,    -1,    -1,  2512,  2513,  2514,    -1,    -1,  2517,    -1,
      -1,   343,    -1,    -1,    -1,  2524,  2525,    -1,   350,   351,
     352,   353,   354,   355,  1270,    -1,    -1,    -1,    -1,   361,
      -1,    -1,    -1,  1447,  2543,    -1,    -1,    -1,    -1,  1453,
      -1,    -1,    -1,    -1,    -1,    -1,  2154,    -1,  2557,  1270,
      -1,    -1,    -1,    -1,    -1,  1469,    -1,    -1,    -1,    -1,
      -1,  1042,    -1,    -1,    -1,    -1,    -1,    -1,  1758,  1759,
      -1,  1761,    -1,    -1,    -1,    -1,    -1,    -1,  2587,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1776,    -1,  1778,    -1,
      -1,  1072,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2610,    -1,  1758,  1759,    -1,  1761,    -1,    -1,    -1,
      -1,  2219,    -1,  2341,  1095,    -1,    -1,    -1,    -1,  1533,
      -1,  1776,    -1,  1778,    -1,    -1,    -1,  1817,    -1,    -1,
      -1,  2640,    -1,    -1,  1380,  1381,    -1,    -1,    -1,    -1,
     882,    -1,  2651,    -1,    -1,    -1,  1127,     8,    -1,    -1,
      -1,    -1,    -1,    -1,  1135,    -1,  1570,  1847,    -1,  1380,
    1381,    -1,  1817,    -1,    -1,    -1,   908,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1868,   921,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1847,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,  1447,    63,    64,    65,    -1,    -1,  1453,  2717,  1899,
      -1,    -1,    -1,  1868,    -1,    -1,    -1,    -1,    -1,    -1,
    1910,    -1,    -1,  1469,    -1,    -1,  1447,    -1,    -1,    -1,
      -1,  1921,  1453,  2341,  2743,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,  1899,    -1,    -1,    -1,  1469,    -1,
      -1,    -1,    -1,    -1,    -1,  1910,    -1,    -1,  2486,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1921,    -1,    -1,    -1,
      -1,    -1,  2781,    -1,    -1,  2784,   137,  2505,    -1,    -1,
     141,    -1,    -1,    -1,  2512,    -1,    -1,  1533,    -1,  1270,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1042,    -1,    -1,    -1,    -1,    -1,  1996,    -1,    -1,    -1,
      -1,    -1,  1533,    -1,    -1,    -1,    -1,   178,    -1,    -1,
      -1,    -1,    -1,    -1,  1570,    -1,    -1,    -1,    -1,    -1,
    1072,    -1,   193,   194,   195,   196,   197,    -1,   199,    -1,
      -1,  1996,  2032,    -1,  1758,  1759,    -1,  1761,    -1,  1570,
      -1,    -1,    -1,  1095,    -1,    -1,  2046,    -1,    -1,    -1,
      -1,    -1,  1776,    -1,  1778,   226,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2032,  2486,  2069,
      -1,    -1,  2610,    -1,    -1,  1127,    -1,    -1,    -1,    -1,
      -1,  2046,    -1,  1135,   255,    -1,    -1,  2505,    -1,  1380,
    1381,    -1,    -1,  1817,  2512,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2069,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   287,    16,   289,    -1,
      -1,    -1,    -1,  1847,    -1,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     311,    -1,    -1,    -1,  1868,    -1,    -1,   318,    -1,    -1,
     321,    -1,    -1,    -1,  2154,    -1,  1447,    -1,    -1,    -1,
      -1,    -1,  1453,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1899,    -1,    -1,  1469,  2717,
      -1,    -1,    -1,    -1,    -1,    -1,  1910,    -1,    -1,  2154,
      -1,    -1,  2610,    -1,    -1,    -1,    -1,  1921,    -1,    -1,
      -1,    -1,  1758,  1759,    -1,  1761,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1270,  2219,
    1776,    -1,  1778,    -1,    -1,    -1,    -1,  1758,  1759,    -1,
    1761,    -1,    -1,    -1,   133,    -1,    -1,    -1,   137,    -1,
      -1,    -1,  1533,    -1,    -1,  1776,  2784,  1778,    -1,    -1,
      -1,    -1,    -1,    -1,  2219,    -1,    -1,   156,   157,    -1,
      -1,  1817,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     169,    -1,  1996,    -1,    -1,    -1,    -1,    -1,    -1,  1570,
      -1,    -1,    -1,    -1,    -1,    -1,  1817,    -1,    -1,    -1,
      -1,  1847,    -1,    -1,    -1,   529,    -1,    -1,    -1,  2717,
      -1,   200,    -1,    -1,   203,    -1,    -1,    -1,  2032,    -1,
      -1,    -1,  1868,    -1,    -1,    -1,  1847,   216,    -1,   218,
      -1,    -1,  2046,    -1,    -1,    -1,    -1,    -1,  1380,  1381,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1868,    -1,    -1,
      -1,  2341,    -1,  1899,    -1,  2069,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1910,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1921,  2784,    -1,  1899,    -1,
      -1,    -1,    -1,    -1,    -1,   274,  2341,    -1,    -1,  1910,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1921,    -1,    -1,    -1,    -1,  1447,    -1,   631,    -1,    -1,
      -1,  1453,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1469,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1996,    -1,    -1,    -1,   343,    -1,    -1,   346,   347,   348,
      -1,   350,   351,   352,   353,   354,   355,    -1,    -1,    -1,
      -1,   360,   361,    -1,    -1,  1996,    -1,  1758,  1759,    -1,
    1761,    -1,    -1,    -1,    -1,    -1,  2032,    -1,    -1,    -1,
      -1,  1533,    -1,    -1,    -1,  1776,  2486,  1778,    -1,    -1,
    2046,    -1,    -1,    -1,    -1,  2219,    -1,    -1,    -1,    -1,
      -1,  2032,    -1,    -1,    -1,  2505,    -1,    -1,    -1,    -1,
      -1,    -1,  2512,  2069,    -1,  2046,   750,    -1,  1570,    -1,
      -1,  2486,    -1,    -1,    -1,    -1,  1817,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2069,    -1,
    2505,    -1,    -1,   777,    -1,    -1,    -1,  2512,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1847,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     804,   805,    -1,   807,    -1,     3,    -1,  1868,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    -1,
      -1,   825,    -1,    -1,    -1,    -1,    -1,    -1,  2154,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1899,    -1,
    2610,    -1,    -1,    -1,    -1,    -1,    -1,  2341,    46,  1910,
      48,    49,    -1,  2154,    -1,    53,    54,    -1,    -1,    -1,
    1921,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
     874,    -1,    -1,   877,   878,  2610,    -1,    -1,    -1,    77,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,  2219,    -1,    -1,    -1,    95,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,   106,    -1,
     108,    -1,    -1,    -1,   112,    -1,   821,    -1,  2219,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1996,  1758,  1759,    -1,  1761,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2717,    -1,    -1,
     148,    -1,    -1,    -1,  1776,    -1,  1778,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2032,    -1,   171,   172,    -1,    -1,    -1,    -1,   177,
      -1,    -1,  2717,    -1,    -1,  2046,    -1,   185,    -1,    -1,
      -1,    -1,  2486,    -1,    -1,  1817,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   202,    -1,    -1,    -1,  2069,    -1,
      -1,  2505,    -1,    -1,  2784,  2341,    16,    -1,  2512,    19,
      -1,    -1,    -1,    -1,    24,  1847,    -1,    -1,    -1,    29,
      -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,
    2341,    -1,    -1,    -1,    -1,   243,  1868,   245,    -1,  2784,
      -1,   249,   957,    -1,    -1,   253,    -1,    -1,   256,    -1,
      -1,    -1,   260,    -1,    -1,    -1,    -1,   265,    -1,    -1,
      -1,    -1,   270,    -1,    -1,   273,    -1,  1899,    -1,    -1,
      -1,   279,    -1,    -1,    -1,    -1,    -1,    -1,  1910,    -1,
      -1,    -1,    -1,  2154,    -1,    -1,    -1,    -1,    -1,  1921,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,
      -1,    -1,    -1,    -1,    -1,    -1,  2610,   315,    -1,   317,
      -1,    -1,   320,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   133,    -1,    16,    -1,   137,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   156,   157,  2219,    -1,
    2486,   359,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   169,
      -1,    -1,    -1,    -1,  1996,    16,    -1,    -1,    -1,  2505,
      -1,    -1,    -1,    24,    -1,  2486,  2512,    -1,    29,    -1,
    1194,    -1,    -1,    -1,  1198,    -1,    -1,    -1,    -1,    -1,
     200,    -1,    -1,   203,  2505,    -1,    -1,    -1,    -1,    -1,
    2032,  2512,    -1,  1217,    -1,    -1,   216,  1221,   218,    -1,
    1224,    -1,    -1,  2717,  2046,    -1,    -1,  1231,  1232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1141,    -1,    -1,    -1,
      -1,    -1,  1246,    -1,    -1,    -1,  1250,  2069,    -1,    -1,
    1254,    -1,   133,    -1,  1258,    -1,   137,  1261,  1262,  1263,
    1264,  1265,  1266,  1267,  1268,  1269,    -1,    -1,  1272,    -1,
      -1,    -1,    -1,  1277,   274,   156,   157,    -1,    -1,    -1,
    2341,    -1,    -1,    -1,  2610,    -1,    -1,  1192,   169,    -1,
    2784,    -1,   133,    -1,    -1,    -1,   137,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2610,
      -1,  1216,    -1,    -1,    -1,   156,   157,  1222,    -1,   200,
      -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,   169,    -1,
    1235,  1236,  2154,  1238,    -1,   216,    -1,   218,    -1,    -1,
      -1,    -1,    -1,   343,    -1,    -1,   346,   347,   348,    -1,
     350,   351,   352,   353,   354,   355,    -1,    -1,  1362,   200,
      -1,   361,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1275,    -1,    -1,    -1,    -1,   216,    -1,   218,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,
      -1,  2717,    -1,   274,    -1,    -1,    -1,  2219,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2717,    -1,    -1,    -1,
      -1,  1326,    -1,    -1,    -1,  2486,    -1,    -1,  1333,    -1,
    1335,    -1,    -1,   274,    -1,    -1,    -1,    -1,   319,    -1,
      -1,    -1,  1446,    -1,  2505,    -1,    -1,    -1,    -1,    -1,
      -1,  2512,    -1,    -1,    -1,    -1,    -1,    -1,  2784,    -1,
      -1,    -1,   343,  1467,    -1,   346,   347,   348,    -1,   350,
     351,   352,   353,   354,   355,    -1,    16,    -1,    -1,    19,
     361,    -1,    -1,  2784,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   343,    -1,    -1,   346,   347,   348,    -1,   350,
     351,   352,   353,   354,   355,    -1,    -1,    -1,    -1,  2341,
     361,    -1,    -1,    -1,    -1,    -1,  1530,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1543,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2610,
      -1,    -1,    -1,  1557,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1588,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   133,    -1,    -1,    -1,   137,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   156,   157,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,   169,
      -1,    29,    -1,  1637,    -1,  1639,  1640,    -1,    -1,    -1,
      -1,    -1,  1646,    -1,    -1,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,  2717,    -1,    29,    -1,
     200,    -1,    -1,   203,  2486,    -1,  1670,    -1,  1672,    -1,
      -1,    -1,  1676,    -1,    -1,    -1,   216,    -1,   218,    -1,
      -1,    -1,    -1,  2505,    -1,    -1,  1591,    -1,  1593,    -1,
    2512,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1615,    -1,    -1,  1618,    -1,  1620,  1621,  1622,  1722,    -1,
    1625,    -1,   120,  2784,  1629,    -1,  1730,  1731,  1732,    -1,
      -1,  1636,    -1,    -1,   274,   133,  1641,  1741,    -1,   137,
      -1,    -1,    -1,    -1,    -1,    -1,  1651,    -1,    -1,    -1,
    1655,  1656,  1657,    -1,    -1,    24,    -1,    -1,   156,   157,
      29,    -1,   133,  1668,    -1,    -1,   137,    -1,    -1,    -1,
    1675,   169,  1677,  1678,  1679,  1680,  1681,  1682,  1683,  1684,
    1685,    -1,  1687,    -1,    -1,   156,   157,    -1,  2610,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,
      -1,    -1,   200,   343,    -1,   203,   346,   347,   348,    -1,
     350,   351,   352,   353,   354,   355,    -1,    -1,   216,    -1,
     218,   361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,
      -1,    -1,   203,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1749,   216,    -1,   218,    -1,    -1,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,   133,    -1,    29,    -1,   137,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   274,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,   156,   157,    -1,
      -1,    29,    -1,    -1,    -1,  2717,    -1,    -1,    -1,    -1,
     169,    -1,    -1,   274,    -1,    -1,    -1,    16,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,
    1845,    -1,    -1,    -1,    -1,   343,    -1,   216,   346,   347,
     348,    -1,   350,   351,   352,   353,   354,   355,    -1,    -1,
      -1,    -1,  2784,   361,  1869,    -1,    -1,    -1,    -1,    -1,
     133,    -1,   343,    -1,   137,   346,   347,   348,    -1,   350,
     351,   352,   353,   354,   355,    -1,    -1,   358,    -1,  1993,
     361,    -1,    -1,   156,   157,   133,    -1,    -1,    -1,   137,
      -1,  2005,    -1,    -1,    -1,   274,   169,  2011,    -1,    -1,
      -1,  2015,    -1,    -1,    -1,    -1,    -1,    -1,   156,   157,
      -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,   137,    -1,
      -1,   169,    -1,  2037,  2038,    -1,    -1,   200,    -1,    -1,
     203,    -1,    -1,    -1,    -1,  1950,    -1,   156,   157,    -1,
      -1,    -1,  1957,   216,  2058,   218,    -1,  2061,    -1,  2063,
     169,    -1,   200,  1968,    -1,   203,  2070,    -1,    -1,    -1,
      -1,    -1,  2076,    -1,   343,  2079,    -1,    -1,   216,    -1,
     218,   350,   351,   352,   353,   354,   355,  1992,    -1,    -1,
      -1,   200,   361,    -1,   203,    -1,  2100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,   218,
      -1,   274,    -1,  2018,  2019,  2020,    -1,    -1,  2023,  2024,
    2025,  2026,  2027,  2028,  2029,  2030,  2031,    -1,  2033,  2034,
      -1,    -1,    16,    -1,    -1,    -1,   274,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,  2054,
      -1,    -1,    -1,    -1,  2059,  2060,    -1,    -1,   296,    -1,
      -1,    16,    -1,    -1,    -1,   274,  2071,  2072,  2073,    24,
    2075,    -1,    -1,  2078,    29,    -1,    -1,    -1,    -1,    -1,
     343,    -1,    -1,   346,   347,   348,    -1,   350,   351,   352,
     353,   354,   355,    -1,    -1,    -1,    -1,   360,   361,    -1,
      -1,    -1,    -1,    -1,    -1,   343,    -1,    -1,   346,   347,
     348,  2116,   350,   351,   352,   353,   354,   355,    -1,    -1,
      -1,    -1,    -1,   361,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   343,    -1,    -1,   346,   347,   348,
      -1,   350,   351,   352,   353,   354,   355,    -1,    -1,   133,
      -1,   360,   361,   137,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   156,   157,    -1,    -1,    -1,    -1,   133,  2283,
      -1,    -1,   137,    -1,    -1,   169,    -1,    -1,    -1,    -1,
      -1,  2295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   156,   157,  2208,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   169,    -1,   200,    -1,    -1,   203,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   216,    -1,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2347,  2348,   200,    -1,  2351,   203,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   216,    -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     274,  2296,    -1,    -1,    -1,    -1,  2301,  2302,    -1,  2304,
      -1,  2306,    -1,    -1,    -1,  2310,  2311,  2312,  2313,  2314,
    2315,  2316,  2317,  2318,    -1,  2320,  2321,  2322,    -1,   274,
      -1,    -1,    -1,    -1,    -1,  2429,    -1,    -1,    -1,    -1,
    2335,  2336,  2337,  2338,    -1,  2340,    -1,    -1,    -1,  2344,
    2345,  2346,    -1,    -1,  2349,    -1,    -1,  2352,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   343,
    2365,    -1,   346,   347,   348,    -1,   350,   351,   352,   353,
     354,   355,    -1,  2477,    -1,    -1,   360,   361,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   343,  2493,
      -1,   346,   347,   348,    -1,   350,   351,   352,   353,   354,
     355,    -1,    -1,    -1,    -1,   360,   361,    -1,    -1,    -1,
      -1,    -1,    -1,  2517,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2525,    -1,    -1,    -1,    -1,  2431,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2543,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2587,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2496,    -1,    -1,    -1,    -1,    -1,    -1,  2503,    -1,
      -1,    -1,    -1,  2508,  2509,    -1,    -1,    -1,  2513,  2514,
    2515,  2516,    -1,  2518,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2562,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2597,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,  2609,    12,    13,    -1,    -1,  2614,
    2615,  2616,    -1,  2618,    21,    22,    -1,    24,  2623,    26,
      27,    28,    -1,    30,    -1,    32,    33,    -1,    35,    36,
      37,    38,    -1,    -1,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    50,  2649,    -1,    53,    54,    55,    56,
      -1,    58,    59,    60,    61,    -1,    63,    64,    65,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    82,    -1,    84,    85,    86,
      87,    88,    -1,    90,    -1,    -1,    93,    94,    95,    96,
      -1,    98,    99,   100,    -1,   102,    -1,   104,   105,   106,
     107,   108,   109,   110,    -1,   112,   113,   114,    -1,   116,
      -1,   118,    -1,    -1,    -1,   122,   123,    -1,   125,   126,
      -1,   128,    -1,   130,   131,   132,    -1,   134,   135,   136,
      -1,   138,   139,   140,   141,   142,    -1,    -1,   145,   146,
     147,   148,   149,   150,   151,    -1,   153,    -1,   155,    -1,
      -1,   158,    -1,   160,   161,   162,   163,   164,    -1,   166,
      -1,   168,    -1,    -1,   171,   172,   173,    -1,    -1,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,    -1,   189,    -1,   191,   192,   193,   194,   195,   196,
     197,   198,   199,    -1,   201,   202,    -1,   204,    -1,   206,
     207,   208,   209,    -1,    -1,   212,    -1,    -1,    -1,   216,
     217,    -1,    -1,   220,    -1,    -1,   223,   224,   225,   226,
      -1,   228,   229,   230,   231,   232,    -1,   234,   235,   236,
     237,   238,   239,   240,   241,    -1,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,    -1,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,    -1,   266,
     267,   268,    -1,   270,   271,   272,   273,    -1,   275,   276,
      -1,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,    -1,   289,   290,    -1,   292,   293,   294,   295,    -1,
     297,   298,    -1,   300,    -1,   302,   303,   304,   305,    -1,
     307,   308,   309,   310,   311,    -1,    -1,   314,   315,   316,
     317,    -1,   319,   320,   321,   322,   323,   324,   325,    -1,
     327,   328,    -1,    -1,   331,   332,   333,   334,   335,   336,
      -1,   338,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
     357,    -1,    -1,    18,    -1,   362,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    46,    47,    48,    49,    50,    -1,    -1,    53,    54,
      55,    56,    -1,    58,    59,    60,    61,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    -1,    84,
      85,    86,    87,    88,    -1,    90,    91,    -1,    93,    94,
      95,    96,    -1,    98,    99,   100,    -1,   102,    -1,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,    -1,   118,   119,    -1,   121,   122,   123,    -1,
     125,   126,    -1,   128,    -1,   130,   131,   132,   133,   134,
     135,   136,    -1,   138,   139,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      -1,   166,   167,   168,   169,    -1,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,    -1,    -1,   212,   213,    -1,
      -1,   216,   217,    -1,    -1,   220,   221,   222,   223,   224,
     225,   226,    -1,   228,   229,   230,   231,   232,    -1,   234,
     235,   236,   237,   238,   239,   240,   241,    -1,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      -1,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,    -1,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    -1,   289,   290,    -1,   292,   293,   294,
     295,    -1,   297,   298,    -1,   300,    -1,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,    -1,   313,   314,
     315,   316,   317,   318,    -1,   320,   321,   322,   323,   324,
     325,   326,   327,   328,    -1,    -1,   331,   332,   333,   334,
     335,   336,    -1,   338,   339,   340,   341,   342,   343,   344,
     345,    -1,    -1,    -1,    -1,   350,   351,   352,    -1,    -1,
      -1,    -1,    -1,    -1,   359,   360,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    50,    -1,    -1,    53,    54,    55,    56,
      -1,    58,    59,    60,    61,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    82,    -1,    84,    85,    86,
      87,    88,    -1,    90,    -1,    -1,    93,    94,    95,    96,
      -1,    98,    99,   100,    -1,   102,    -1,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    -1,   116,
      -1,   118,   119,    -1,   121,   122,   123,    -1,   125,   126,
      -1,   128,    -1,   130,   131,   132,   133,   134,   135,   136,
      -1,   138,   139,   140,   141,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,    -1,   153,    -1,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,    -1,   166,
     167,   168,   169,    -1,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,    -1,    -1,   212,   213,    -1,    -1,   216,
     217,    -1,    -1,   220,   221,   222,   223,   224,   225,   226,
      -1,   228,   229,   230,   231,   232,    -1,   234,   235,   236,
     237,   238,   239,   240,   241,    -1,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,    -1,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
      -1,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,    -1,   289,   290,    -1,   292,   293,   294,   295,    -1,
     297,   298,    -1,   300,    -1,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,    -1,   313,   314,   315,   316,
     317,   318,    -1,   320,   321,   322,   323,   324,   325,   326,
     327,   328,    -1,    -1,   331,   332,   333,   334,   335,   336,
      -1,   338,   339,   340,   341,   342,   343,   344,   345,    -1,
      -1,    -1,    -1,   350,   351,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   359,   360,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    21,    22,    -1,    24,    -1,    26,    27,    28,
      -1,    30,    -1,    32,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    41,    42,    43,    44,    -1,    46,    47,    48,
      49,    50,    -1,    -1,    53,    54,    55,    56,    -1,    58,
      59,    60,    61,    -1,    63,    64,    65,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    82,    -1,    84,    85,    86,    87,    88,
      -1,    90,    -1,    -1,    93,    94,    95,    96,    -1,    98,
      99,   100,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,    -1,   112,   113,   114,   115,   116,    -1,   118,
      -1,    -1,    -1,   122,   123,    -1,   125,   126,    -1,   128,
      -1,   130,   131,   132,    -1,   134,   135,   136,    -1,   138,
     139,   140,   141,   142,    -1,    -1,   145,   146,   147,   148,
     149,   150,   151,   152,   153,    -1,   155,    -1,    -1,   158,
      -1,   160,   161,   162,   163,   164,    -1,   166,    -1,   168,
      -1,   170,   171,   172,   173,    -1,    -1,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,    -1,
     189,    -1,   191,   192,   193,   194,   195,   196,   197,   198,
     199,    -1,   201,   202,    -1,   204,    -1,   206,   207,   208,
     209,    -1,   211,   212,    -1,    -1,    -1,   216,   217,    -1,
     219,   220,    -1,    -1,   223,   224,   225,   226,    -1,   228,
     229,   230,   231,   232,    -1,   234,   235,   236,   237,   238,
     239,   240,   241,    -1,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,    -1,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,    -1,   266,   267,   268,
      -1,   270,   271,   272,   273,    -1,   275,   276,    -1,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,    -1,
     289,   290,    -1,   292,   293,   294,   295,    -1,   297,   298,
      -1,   300,    -1,   302,   303,   304,   305,    -1,   307,   308,
     309,   310,   311,   312,    -1,   314,   315,   316,   317,    -1,
      -1,   320,   321,   322,   323,   324,   325,    -1,   327,   328,
      -1,    -1,   331,   332,   333,   334,   335,   336,    -1,   338,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,   360,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,    44,    -1,    46,    47,    48,    49,    -1,    -1,
      -1,    53,    54,    55,    56,    -1,    58,    59,    -1,    61,
      -1,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    -1,    84,    85,    86,    87,    88,    -1,    90,    -1,
      -1,    93,    94,    95,    96,    -1,    98,    99,   100,    -1,
     102,    -1,   104,   105,   106,    -1,   108,   109,    -1,    -1,
     112,   113,   114,    -1,   116,    -1,   118,   119,    -1,   121,
     122,   123,    -1,   125,    -1,    -1,   128,    -1,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,   153,    -1,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,    -1,    -1,   167,   168,   169,    -1,   171,
     172,   173,    -1,    -1,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,    -1,   191,
     192,   193,   194,   195,   196,   197,    -1,   199,    -1,   201,
     202,   203,   204,    -1,    -1,   207,   208,   209,    -1,    -1,
     212,    -1,    -1,    -1,   216,   217,    -1,    -1,   220,   221,
     222,    -1,   224,   225,   226,    -1,    -1,    -1,   230,   231,
     232,    -1,   234,   235,   236,   237,   238,   239,   240,   241,
      -1,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,    -1,   258,   259,   260,   261,
     262,   263,   264,    -1,   266,   267,   268,    -1,   270,   271,
     272,   273,   274,   275,   276,    -1,   278,   279,   280,   281,
     282,   283,   284,   285,    -1,   287,    -1,   289,   290,    -1,
     292,   293,   294,   295,    -1,   297,   298,    -1,   300,    -1,
     302,    -1,   304,    -1,    -1,   307,   308,   309,   310,   311,
      -1,    -1,   314,   315,   316,   317,    -1,    -1,   320,   321,
     322,   323,   324,   325,   326,   327,   328,    -1,    -1,   331,
     332,   333,   334,   335,   336,    -1,   338,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    21,    22,   360,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    46,    47,    48,    49,    50,    -1,    -1,    53,    54,
      55,    56,    -1,    58,    59,    60,    61,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    -1,    84,
      85,    86,    87,    88,    -1,    90,    -1,    -1,    93,    94,
      95,    96,    -1,    98,    99,   100,    -1,   102,    -1,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,    -1,   118,   119,   120,   121,   122,   123,    -1,
     125,   126,    -1,   128,    -1,   130,   131,   132,   133,   134,
     135,   136,    -1,   138,   139,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,    -1,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,    -1,    -1,   212,   213,    -1,
      -1,   216,   217,    -1,    -1,   220,   221,   222,   223,   224,
     225,   226,    -1,   228,   229,   230,   231,   232,    -1,   234,
     235,   236,   237,   238,   239,   240,   241,    -1,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      -1,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,    -1,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    -1,   289,   290,    -1,   292,   293,   294,
     295,    -1,   297,   298,    -1,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,    -1,   313,   314,
     315,   316,   317,   318,    -1,   320,   321,   322,   323,   324,
     325,   326,   327,   328,    -1,    -1,   331,   332,   333,   334,
     335,   336,    -1,   338,   339,   340,   341,   342,   343,   344,
     345,    -1,    -1,    -1,    -1,   350,   351,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   359,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    21,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    47,
      48,    49,    50,    -1,    -1,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    -1,    84,    85,    86,    87,
      88,    -1,    90,    -1,    -1,    93,    94,    95,    96,    -1,
      98,    99,   100,    -1,   102,    -1,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,    -1,   116,    -1,
     118,   119,    -1,   121,   122,   123,    -1,   125,   126,    -1,
     128,    -1,   130,   131,   132,   133,   134,   135,   136,    -1,
     138,   139,   140,   141,   142,    -1,   144,   145,   146,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,    -1,   166,   167,
     168,   169,    -1,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,    -1,    -1,   212,   213,    -1,    -1,   216,   217,
      -1,    -1,   220,   221,   222,   223,   224,   225,   226,    -1,
     228,   229,   230,   231,   232,    -1,   234,   235,   236,   237,
     238,   239,   240,   241,    -1,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,    -1,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,    -1,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
      -1,   289,   290,    -1,   292,   293,   294,   295,    -1,   297,
     298,    -1,   300,    -1,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,    -1,   313,   314,   315,   316,   317,
     318,    -1,   320,   321,   322,   323,   324,   325,   326,   327,
     328,    -1,    -1,   331,   332,   333,   334,   335,   336,    -1,
     338,   339,   340,   341,   342,   343,   344,   345,    -1,    -1,
      -1,    -1,   350,   351,   352,    -1,    -1,    -1,    -1,    -1,
      -1,   359,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      21,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    46,    47,    48,    49,    50,
      -1,    -1,    53,    54,    55,    56,    -1,    58,    59,    60,
      61,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    82,    -1,    84,    85,    86,    87,    88,    -1,    90,
      -1,    -1,    93,    94,    95,    96,    -1,    98,    99,   100,
      -1,   102,    -1,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    -1,   116,    -1,   118,   119,    -1,
     121,   122,   123,    -1,   125,   126,    -1,   128,    -1,   130,
     131,   132,   133,   134,   135,   136,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,    -1,   166,   167,   168,   169,    -1,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,    -1,
      -1,   212,   213,    -1,    -1,   216,   217,    -1,    -1,   220,
     221,   222,   223,   224,   225,   226,    -1,   228,   229,   230,
     231,   232,    -1,   234,   235,   236,   237,   238,   239,   240,
     241,    -1,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,    -1,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,    -1,   289,   290,
      -1,   292,   293,   294,   295,    -1,   297,   298,    -1,   300,
      -1,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,    -1,   313,   314,   315,   316,   317,   318,    -1,   320,
     321,   322,   323,   324,   325,   326,   327,   328,    -1,    -1,
     331,   332,   333,   334,   335,   336,    -1,   338,   339,   340,
     341,   342,   343,   344,   345,    -1,    -1,    -1,    -1,   350,
     351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   359,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    47,    48,    49,    50,    -1,    -1,    53,
      54,    55,    56,    -1,    58,    59,    60,    61,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    85,    86,    87,    88,    -1,    90,    -1,    -1,    93,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,    -1,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    -1,   116,    -1,   118,   119,    -1,   121,   122,   123,
      -1,   125,   126,    -1,   128,    -1,   130,   131,   132,   133,
     134,   135,   136,    -1,   138,   139,   140,   141,   142,    -1,
     144,   145,   146,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,    -1,   166,   167,   168,   169,    -1,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,    -1,    -1,   212,   213,
      -1,    -1,   216,   217,    -1,    -1,   220,   221,   222,   223,
     224,   225,   226,    -1,   228,   229,   230,   231,   232,    -1,
     234,   235,   236,   237,   238,   239,   240,   241,    -1,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,    -1,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,    -1,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,    -1,   289,   290,    -1,   292,   293,
     294,   295,    -1,   297,   298,    -1,   300,    -1,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,    -1,   313,
     314,   315,   316,   317,   318,    -1,   320,   321,   322,   323,
     324,   325,   326,   327,   328,    -1,    -1,   331,   332,   333,
     334,   335,   336,    -1,   338,   339,   340,   341,   342,   343,
     344,   345,    -1,    -1,    -1,    -1,   350,   351,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   359,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    21,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    50,    -1,    -1,    53,    54,    55,    56,
      -1,    58,    59,    60,    61,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    82,    -1,    84,    85,    86,
      87,    88,    -1,    90,    -1,    -1,    93,    94,    95,    96,
      -1,    98,    99,   100,    -1,   102,    -1,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    -1,   116,
      -1,   118,   119,    -1,   121,   122,   123,    -1,   125,   126,
      -1,   128,    -1,   130,   131,   132,   133,   134,   135,   136,
      -1,   138,   139,   140,   141,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,    -1,   153,    -1,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,    -1,   166,
     167,   168,   169,    -1,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,    -1,    -1,   212,   213,    -1,    -1,   216,
     217,    -1,    -1,   220,   221,   222,   223,   224,   225,   226,
      -1,   228,   229,   230,   231,   232,    -1,   234,   235,   236,
     237,   238,   239,   240,   241,    -1,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,    -1,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
      -1,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,    -1,   289,   290,    -1,   292,   293,   294,   295,    -1,
     297,   298,    -1,   300,    -1,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,    -1,   313,   314,   315,   316,
     317,   318,    -1,   320,   321,   322,   323,   324,   325,   326,
     327,   328,    -1,    -1,   331,   332,   333,   334,   335,   336,
      -1,   338,   339,   340,   341,   342,   343,   344,   345,    -1,
      -1,    -1,    -1,   350,   351,    -1,    -1,    -1,    -1,    -1,
     357,    -1,   359,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    21,    22,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    46,    47,    48,    49,
      50,    -1,    -1,    53,    54,    55,    56,    -1,    58,    59,
      60,    61,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    85,    86,    87,    88,    -1,
      90,    -1,    -1,    93,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,    -1,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    -1,   116,    -1,   118,   119,
      -1,   121,   122,   123,    -1,   125,   126,    -1,   128,    -1,
     130,   131,   132,   133,   134,   135,   136,    -1,   138,   139,
     140,   141,   142,    -1,   144,   145,   146,   147,   148,   149,
     150,   151,    -1,   153,    -1,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,    -1,   166,   167,   168,   169,
      -1,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
      -1,    -1,   212,   213,    -1,    -1,   216,   217,    -1,    -1,
     220,   221,   222,   223,   224,   225,   226,    -1,   228,   229,
     230,   231,   232,    -1,   234,   235,   236,   237,   238,   239,
     240,   241,    -1,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,    -1,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,    -1,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,    -1,   289,
     290,    -1,   292,   293,   294,   295,    -1,   297,   298,    -1,
     300,    -1,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,    -1,   313,   314,   315,   316,   317,   318,    -1,
     320,   321,   322,   323,   324,   325,   326,   327,   328,    -1,
      -1,   331,   332,   333,   334,   335,   336,    -1,   338,   339,
     340,   341,   342,   343,   344,   345,    -1,    -1,    -1,    -1,
     350,   351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   359,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    18,    -1,    -1,    21,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    46,    47,    48,    49,    50,    -1,    -1,
      53,    54,    55,    56,    -1,    58,    59,    60,    61,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    82,
      -1,    84,    85,    86,    87,    88,    -1,    90,    -1,    -1,
      93,    94,    95,    96,    -1,    98,    99,   100,    -1,   102,
      -1,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    -1,   116,    -1,   118,   119,   120,   121,   122,
     123,    -1,   125,   126,    -1,   128,    -1,   130,   131,   132,
     133,   134,   135,   136,    -1,   138,   139,   140,   141,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,    -1,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,    -1,   166,   167,   168,   169,    -1,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,    -1,    -1,   212,
     213,    -1,    -1,   216,   217,    -1,    -1,   220,   221,   222,
     223,   224,   225,   226,    -1,   228,   229,   230,   231,   232,
      -1,   234,   235,   236,   237,   238,   239,   240,   241,    -1,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,    -1,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,    -1,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,    -1,   289,   290,    -1,   292,
     293,   294,   295,    -1,   297,   298,    -1,   300,    -1,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,    -1,
     313,   314,   315,   316,   317,   318,    -1,   320,   321,   322,
     323,   324,   325,   326,   327,   328,    -1,    -1,   331,   332,
     333,   334,   335,   336,    -1,   338,   339,   340,   341,   342,
     343,   344,   345,    -1,    -1,    -1,    -1,   350,   351,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   359,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,    18,    -1,    -1,    21,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      46,    47,    48,    49,    50,    -1,    -1,    53,    54,    55,
      56,    -1,    58,    59,    60,    61,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    84,    85,
      86,    87,    88,    -1,    90,    -1,    -1,    93,    94,    95,
      96,    -1,    98,    99,   100,    -1,   102,    -1,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    -1,
     116,    -1,   118,   119,    -1,   121,   122,   123,    -1,   125,
     126,    -1,   128,    -1,   130,   131,   132,   133,   134,   135,
     136,    -1,   138,   139,   140,   141,   142,    -1,   144,   145,
     146,   147,   148,   149,   150,   151,    -1,   153,    -1,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,    -1,
     166,   167,   168,   169,    -1,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,    -1,    -1,   212,   213,    -1,    -1,
     216,   217,    -1,    -1,   220,   221,   222,   223,   224,   225,
     226,    -1,   228,   229,   230,   231,   232,    -1,   234,   235,
     236,   237,   238,   239,   240,   241,    -1,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,    -1,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,    -1,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,    -1,   289,   290,    -1,   292,   293,   294,   295,
      -1,   297,   298,    -1,   300,    -1,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,    -1,   313,   314,   315,
     316,   317,   318,    -1,   320,   321,   322,   323,   324,   325,
     326,   327,   328,    -1,    -1,   331,   332,   333,   334,   335,
     336,    -1,   338,   339,   340,   341,   342,   343,   344,   345,
      -1,    -1,    -1,    -1,   350,   351,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   359,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,    18,
      -1,    -1,    21,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    46,    47,    48,
      49,    50,    -1,    -1,    53,    54,    55,    56,    -1,    58,
      59,    60,    61,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    82,    -1,    84,    85,    86,    87,    88,
      -1,    90,    -1,    -1,    93,    94,    95,    96,    -1,    98,
      99,   100,    -1,   102,    -1,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,    -1,   118,
     119,    -1,   121,   122,   123,    -1,   125,   126,    -1,   128,
      -1,   130,   131,   132,   133,   134,   135,   136,    -1,   138,
     139,   140,   141,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,    -1,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,    -1,   166,   167,   168,
     169,    -1,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,    -1,    -1,   212,   213,    -1,    -1,   216,   217,    -1,
      -1,   220,   221,   222,   223,   224,   225,   226,    -1,   228,
     229,   230,   231,   232,    -1,   234,   235,   236,   237,   238,
     239,   240,   241,    -1,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,    -1,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,    -1,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,    -1,
     289,   290,    -1,   292,   293,   294,   295,    -1,   297,   298,
      -1,   300,    -1,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,    -1,   313,   314,   315,   316,   317,   318,
      -1,   320,   321,   322,   323,   324,   325,   326,   327,   328,
      -1,    -1,   331,   332,   333,   334,   335,   336,    -1,   338,
     339,   340,   341,   342,   343,   344,   345,    -1,    -1,    -1,
      -1,   350,   351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     359,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    18,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    -1,    84,    85,    86,    87,    88,    -1,    90,    -1,
      -1,    93,    94,    95,    96,    -1,    98,    99,   100,    -1,
     102,    -1,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    -1,   116,    -1,   118,   119,    -1,   121,
     122,   123,    -1,   125,   126,    -1,   128,    -1,   130,   131,
     132,   133,   134,   135,   136,    -1,   138,   139,   140,   141,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,   153,    -1,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,    -1,   166,   167,   168,   169,    -1,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,    -1,   201,
     202,   203,   204,   205,   206,   207,   208,   209,    -1,    -1,
     212,   213,    -1,    -1,   216,   217,    -1,    -1,   220,   221,
     222,   223,   224,   225,   226,    -1,   228,   229,   230,   231,
     232,    -1,   234,   235,   236,   237,   238,   239,   240,   241,
      -1,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,    -1,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,    -1,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,    -1,   289,   290,    -1,
     292,   293,   294,   295,    -1,   297,   298,    -1,   300,    -1,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
      -1,    -1,   314,   315,   316,   317,   318,    -1,   320,   321,
     322,   323,   324,   325,   326,   327,   328,    -1,    -1,   331,
     332,   333,   334,   335,   336,    -1,   338,   339,   340,   341,
     342,   343,   344,   345,    -1,    -1,    -1,    -1,   350,   351,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   359,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    21,    22,    -1,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    46,    47,    48,    49,    50,    -1,    -1,    53,    54,
      55,    56,    -1,    58,    59,    60,    61,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    -1,    84,
      85,    86,    87,    88,    -1,    90,    -1,    -1,    93,    94,
      95,    96,    -1,    98,    99,   100,    -1,    -1,    -1,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,    -1,   118,   119,    -1,   121,   122,   123,    -1,
     125,   126,    -1,   128,    -1,   130,   131,   132,    -1,   134,
     135,   136,    -1,   138,   139,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      -1,   166,   167,   168,    -1,    -1,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,   209,    -1,    -1,   212,   213,    -1,
      -1,   216,   217,    -1,    -1,   220,   221,   222,   223,   224,
     225,   226,    -1,   228,   229,   230,   231,   232,    -1,   234,
     235,   236,   237,   238,   239,   240,   241,    -1,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      -1,   266,   267,   268,   269,   270,   271,   272,   273,    -1,
     275,   276,    -1,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    -1,   289,   290,    -1,   292,   293,   294,
     295,    -1,   297,   298,    -1,   300,    -1,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,    -1,   313,   314,
     315,   316,   317,   318,    -1,   320,   321,   322,   323,   324,
     325,   326,   327,   328,    -1,    -1,   331,   332,   333,   334,
     335,   336,    -1,   338,   339,   340,   341,   342,   343,   344,
     345,    -1,    -1,    -1,    -1,   350,   351,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   359,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    21,    22,    -1,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    46,    47,
      48,    49,    50,    -1,    -1,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    -1,    84,    85,    86,    87,
      88,    -1,    90,    -1,    -1,    93,    94,    95,    96,    -1,
      98,    99,   100,    -1,    -1,    -1,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,    -1,   116,    -1,
     118,   119,    -1,   121,   122,   123,    -1,   125,   126,    -1,
     128,    -1,   130,   131,   132,    -1,   134,   135,   136,    -1,
     138,   139,   140,   141,   142,    -1,   144,   145,   146,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,    -1,   166,   167,
     168,    -1,    -1,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,    -1,   201,   202,   203,   204,   205,   206,   207,
     208,   209,    -1,    -1,   212,   213,    -1,    -1,   216,   217,
      -1,    -1,   220,   221,   222,   223,   224,   225,   226,    -1,
     228,   229,   230,   231,   232,    -1,   234,   235,   236,   237,
     238,   239,   240,   241,    -1,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,    -1,   266,   267,
     268,   269,   270,   271,   272,   273,    -1,   275,   276,    -1,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
      -1,   289,   290,    -1,   292,   293,   294,   295,    -1,   297,
     298,    -1,   300,    -1,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,    -1,    -1,   314,   315,   316,   317,
     318,    -1,   320,   321,   322,   323,   324,   325,   326,   327,
     328,    -1,    -1,   331,   332,   333,   334,   335,   336,    -1,
     338,   339,   340,   341,   342,   343,   344,   345,    -1,    -1,
      -1,    -1,   350,   351,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   359,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    -1,    40,
      41,    42,    43,    44,    -1,    46,    47,    48,    49,    50,
      -1,    -1,    53,    54,    55,    56,    -1,    58,    59,    60,
      61,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    82,    -1,    84,    85,    86,    87,    88,    -1,    90,
      -1,    -1,    93,    94,    95,    96,    -1,    98,    99,   100,
      -1,   102,    -1,   104,   105,   106,   107,   108,   109,   110,
      -1,   112,   113,   114,    -1,   116,    -1,   118,   119,    -1,
     121,   122,   123,    -1,   125,   126,    -1,   128,    -1,   130,
     131,   132,   133,   134,   135,   136,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,    -1,   166,   167,   168,   169,    -1,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,    -1,
     201,   202,   203,   204,    -1,   206,   207,   208,   209,    -1,
      -1,   212,   213,    -1,   215,   216,   217,    -1,    -1,   220,
     221,   222,   223,   224,   225,   226,    -1,   228,   229,   230,
     231,   232,    -1,   234,   235,   236,   237,   238,   239,   240,
     241,    -1,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,    -1,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,    -1,   289,   290,
      -1,   292,   293,   294,   295,    -1,   297,   298,    -1,   300,
      -1,   302,   303,   304,   305,    -1,   307,   308,   309,   310,
     311,    -1,    -1,   314,   315,   316,   317,   318,    -1,   320,
     321,   322,   323,   324,   325,   326,   327,   328,    -1,    -1,
     331,   332,   333,   334,   335,   336,    -1,   338,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,   359,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    -1,    40,    41,    42,    43,    44,
      -1,    46,    47,    48,    49,    50,    -1,    -1,    53,    54,
      55,    56,    -1,    58,    59,    60,    61,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    -1,    84,
      85,    86,    87,    88,    -1,    90,    -1,    -1,    93,    94,
      95,    96,    -1,    98,    99,   100,    -1,   102,    -1,   104,
     105,   106,   107,   108,   109,   110,    -1,   112,   113,   114,
      -1,   116,    -1,   118,   119,    -1,   121,   122,   123,    -1,
     125,   126,    -1,   128,    -1,   130,   131,   132,   133,   134,
     135,   136,    -1,   138,   139,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
      -1,   166,   167,   168,   169,    -1,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,    -1,   201,   202,   203,   204,
      -1,   206,   207,   208,   209,    -1,    -1,   212,   213,    -1,
     215,   216,   217,    -1,    -1,   220,   221,   222,   223,   224,
     225,   226,    -1,   228,   229,   230,   231,   232,    -1,   234,
     235,   236,   237,   238,   239,   240,   241,    -1,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      -1,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,    -1,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    -1,   289,   290,    -1,   292,   293,   294,
     295,    -1,   297,   298,    -1,   300,    -1,   302,   303,   304,
     305,    -1,   307,   308,   309,   310,   311,    -1,    -1,   314,
     315,   316,   317,   318,    -1,   320,   321,   322,   323,   324,
     325,   326,   327,   328,    -1,    -1,   331,   332,   333,   334,
     335,   336,    -1,   338,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,   359,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    40,    41,    42,    43,    44,    -1,    46,    47,    48,
      49,    50,    -1,    -1,    53,    54,    55,    56,    -1,    58,
      59,    60,    61,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    82,    -1,    84,    85,    86,    87,    88,
      -1,    90,    -1,    -1,    93,    94,    95,    96,    -1,    98,
      99,   100,    -1,   102,    -1,   104,   105,   106,   107,   108,
     109,   110,    -1,   112,   113,   114,    -1,   116,    -1,   118,
     119,    -1,   121,   122,   123,    -1,   125,   126,    -1,   128,
      -1,   130,   131,   132,   133,   134,   135,   136,    -1,   138,
     139,   140,   141,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,    -1,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,    -1,   166,   167,   168,
     169,    -1,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,    -1,   201,   202,   203,   204,    -1,   206,   207,   208,
     209,    -1,    -1,   212,   213,    -1,    -1,   216,   217,    -1,
      -1,   220,   221,   222,   223,   224,   225,   226,    -1,   228,
     229,   230,   231,   232,    -1,   234,   235,   236,   237,   238,
     239,   240,   241,    -1,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,    -1,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,    -1,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,    -1,
     289,   290,    -1,   292,   293,   294,   295,    -1,   297,   298,
      -1,   300,    -1,   302,   303,   304,   305,    -1,   307,   308,
     309,   310,   311,    -1,    -1,   314,   315,   316,   317,   318,
      -1,   320,   321,   322,   323,   324,   325,   326,   327,   328,
      -1,    -1,   331,   332,   333,   334,   335,   336,    -1,   338,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
     359,    24,    -1,    26,    27,    28,    -1,    30,    -1,    32,
      33,    -1,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,    44,    -1,    46,    47,    48,    49,    50,    -1,    -1,
      53,    54,    55,    56,    -1,    58,    59,    60,    61,    -1,
      63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    82,
      -1,    84,    85,    86,    87,    88,    -1,    90,    -1,    -1,
      93,    94,    95,    96,    -1,    98,    99,   100,    -1,   102,
      -1,   104,   105,   106,   107,   108,   109,   110,    -1,   112,
     113,   114,    -1,   116,    -1,   118,    -1,    -1,    -1,   122,
     123,    -1,   125,   126,    -1,   128,    -1,   130,   131,   132,
      -1,   134,   135,   136,    -1,   138,   139,   140,   141,   142,
      -1,    -1,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,    -1,   155,    -1,    -1,   158,    -1,   160,   161,   162,
     163,   164,    -1,   166,    -1,   168,    -1,    -1,   171,   172,
     173,    -1,    -1,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,    -1,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,    -1,   201,   202,
      -1,   204,    -1,   206,   207,   208,   209,    -1,    -1,   212,
     213,    -1,    -1,   216,   217,    -1,    -1,   220,    -1,    -1,
     223,   224,   225,   226,    -1,   228,   229,   230,   231,   232,
      -1,   234,   235,   236,   237,   238,   239,   240,   241,    -1,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,    -1,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,    -1,   266,   267,   268,    -1,   270,   271,   272,
     273,    -1,   275,   276,    -1,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,    -1,   289,   290,    -1,   292,
     293,   294,   295,    -1,   297,   298,    -1,   300,    -1,   302,
     303,   304,   305,    -1,   307,   308,   309,   310,   311,    -1,
      -1,   314,   315,   316,   317,    -1,    -1,   320,   321,   322,
     323,   324,   325,    -1,   327,   328,    -1,    -1,   331,   332,
     333,   334,   335,   336,    -1,   338,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,   359,    24,    -1,    26,
      27,    28,    -1,    30,    -1,    32,    33,    -1,    35,    36,
      37,    38,    -1,    -1,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    50,    -1,    -1,    53,    54,    55,    56,
      -1,    58,    59,    60,    61,    -1,    63,    64,    65,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    82,    -1,    84,    85,    86,
      87,    88,    -1,    90,    -1,    -1,    93,    94,    95,    96,
      -1,    98,    99,   100,    -1,   102,    -1,   104,   105,   106,
     107,   108,   109,   110,    -1,   112,   113,   114,    -1,   116,
      -1,   118,    -1,    -1,    -1,   122,   123,    -1,   125,   126,
      -1,   128,    -1,   130,   131,   132,    -1,   134,   135,   136,
      -1,   138,   139,   140,   141,   142,    -1,    -1,   145,   146,
     147,   148,   149,   150,   151,    -1,   153,    -1,   155,    -1,
      -1,   158,    -1,   160,   161,   162,   163,   164,    -1,   166,
      -1,   168,    -1,    -1,   171,   172,   173,    -1,    -1,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,    -1,   189,    -1,   191,   192,   193,   194,   195,   196,
     197,   198,   199,    -1,   201,   202,    -1,   204,    -1,   206,
     207,   208,   209,    -1,    -1,   212,    -1,    -1,    -1,   216,
     217,    -1,    -1,   220,    -1,    -1,   223,   224,   225,   226,
      -1,   228,   229,   230,   231,   232,    -1,   234,   235,   236,
     237,   238,   239,   240,   241,    -1,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,    -1,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,    -1,   270,   271,   272,   273,    -1,   275,   276,
      -1,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,    -1,   289,   290,    -1,   292,   293,   294,   295,    -1,
     297,   298,    -1,   300,    -1,   302,   303,   304,   305,    -1,
     307,   308,   309,   310,   311,    -1,    -1,   314,   315,   316,
     317,    -1,    -1,   320,   321,   322,   323,   324,   325,    -1,
     327,   328,    -1,    -1,   331,   332,   333,   334,   335,   336,
      -1,   338,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,   359,    24,    -1,    26,    27,    28,    -1,    30,
      -1,    32,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,    44,    -1,    46,    47,    48,    49,    50,
      -1,    -1,    53,    54,    55,    56,    -1,    58,    59,    60,
      61,    -1,    63,    64,    65,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    82,    -1,    84,    85,    86,    87,    88,    -1,    90,
      -1,    -1,    93,    94,    95,    96,    -1,    98,    99,   100,
      -1,   102,    -1,   104,   105,   106,   107,   108,   109,   110,
      -1,   112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,
      -1,   122,   123,    -1,   125,   126,    -1,   128,    -1,   130,
     131,   132,    -1,   134,   135,   136,    -1,   138,   139,   140,
     141,   142,    -1,    -1,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,    -1,   155,    -1,    -1,   158,    -1,   160,
     161,   162,   163,   164,    -1,   166,    -1,   168,    -1,    -1,
     171,   172,   173,    -1,    -1,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,    -1,   189,    -1,
     191,   192,   193,   194,   195,   196,   197,   198,   199,    -1,
     201,   202,    -1,   204,    -1,   206,   207,   208,   209,    -1,
      -1,   212,    -1,    -1,    -1,   216,   217,    -1,    -1,   220,
      -1,    -1,   223,   224,   225,   226,    -1,   228,   229,   230,
     231,   232,    -1,   234,   235,   236,   237,   238,   239,   240,
     241,    -1,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    -1,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,    -1,   266,   267,   268,    -1,   270,
     271,   272,   273,    -1,   275,   276,    -1,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,    -1,   289,   290,
      -1,   292,   293,   294,   295,    -1,   297,   298,    -1,   300,
      -1,   302,   303,   304,   305,    -1,   307,   308,   309,   310,
     311,    -1,    -1,   314,   315,   316,   317,    -1,    -1,   320,
     321,   322,   323,   324,   325,    -1,   327,   328,    -1,    -1,
     331,   332,   333,   334,   335,   336,    -1,   338,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,   359,    24,
      -1,    26,    27,    28,    -1,    30,    -1,    32,    33,    -1,
      35,    36,    37,    38,    -1,    -1,    41,    42,    43,    44,
      -1,    46,    47,    48,    49,    50,    -1,    -1,    53,    54,
      55,    56,    -1,    58,    59,    60,    61,    -1,    63,    64,
      65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    -1,    84,
      85,    86,    87,    88,    -1,    90,    -1,    -1,    93,    94,
      95,    96,    -1,    98,    99,   100,    -1,   102,    -1,   104,
     105,   106,   107,   108,   109,   110,    -1,   112,   113,   114,
      -1,   116,    -1,   118,    -1,    -1,    -1,   122,   123,    -1,
     125,   126,    -1,   128,    -1,   130,   131,   132,    -1,   134,
     135,   136,    -1,   138,   139,   140,   141,   142,    -1,    -1,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,    -1,
     155,    -1,    -1,   158,    -1,   160,   161,   162,   163,   164,
      -1,   166,    -1,   168,    -1,    -1,   171,   172,   173,    -1,
      -1,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,    -1,   189,    -1,   191,   192,   193,   194,
     195,   196,   197,   198,   199,    -1,   201,   202,    -1,   204,
      -1,   206,   207,   208,   209,    -1,    -1,   212,    -1,    -1,
      -1,   216,   217,    -1,    -1,   220,    -1,    -1,   223,   224,
     225,   226,    -1,   228,   229,   230,   231,   232,    -1,   234,
     235,   236,   237,   238,   239,   240,   241,    -1,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,    -1,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
      -1,   266,   267,   268,    -1,   270,   271,   272,   273,    -1,
     275,   276,    -1,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    -1,   289,   290,    -1,   292,   293,   294,
     295,    -1,   297,   298,    -1,   300,    -1,   302,   303,   304,
     305,    -1,   307,   308,   309,   310,   311,    -1,    -1,   314,
     315,   316,   317,    -1,    -1,   320,   321,   322,   323,   324,
     325,    -1,   327,   328,    -1,    -1,   331,   332,   333,   334,
     335,   336,    -1,   338,    -1,    -1,    -1,    -1,   343,    -1,
      -1,   346,   347,   348,    -1,   350,   351,   352,   353,   354,
     355,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    -1,    24,    -1,    26,    27,    28,    -1,    30,    -1,
      32,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,    44,    -1,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      -1,    63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    -1,    84,    85,    86,    87,    88,    -1,    90,    -1,
      -1,    93,    94,    95,    96,    -1,    98,    99,   100,    -1,
     102,    -1,   104,   105,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,    -1,
     122,   123,    -1,   125,   126,    -1,   128,    -1,   130,   131,
     132,    -1,   134,   135,   136,    -1,   138,   139,   140,   141,
     142,    -1,    -1,   145,   146,   147,   148,   149,   150,   151,
      -1,   153,    -1,   155,    -1,    -1,   158,    -1,   160,   161,
     162,   163,   164,    -1,   166,    -1,   168,    -1,    -1,   171,
     172,   173,    -1,    -1,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    -1,   189,    -1,   191,
     192,   193,   194,   195,   196,   197,   198,   199,    -1,   201,
     202,    -1,   204,    -1,   206,   207,   208,   209,    -1,    -1,
     212,    -1,    -1,    -1,   216,   217,    -1,    -1,   220,    -1,
      -1,   223,   224,   225,   226,    -1,   228,   229,   230,   231,
     232,    -1,   234,   235,   236,   237,   238,   239,   240,   241,
      -1,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,    -1,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,    -1,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,    -1,   289,   290,    -1,
     292,   293,   294,   295,    -1,   297,   298,    -1,   300,    -1,
     302,   303,   304,   305,    -1,   307,   308,   309,   310,   311,
      -1,    -1,   314,   315,   316,   317,    -1,    -1,   320,   321,
     322,   323,   324,   325,    -1,   327,   328,    -1,    -1,   331,
     332,   333,   334,   335,   336,    -1,   338,    -1,    -1,    -1,
      -1,   343,    -1,    -1,   346,   347,   348,    -1,   350,   351,
     352,   353,   354,   355,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    -1,    24,    -1,    26,    27,    28,
      -1,    30,    -1,    32,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    41,    42,    43,    44,    -1,    46,    47,    48,
      49,    50,    -1,    -1,    53,    54,    55,    56,    -1,    58,
      59,    60,    61,    -1,    63,    64,    65,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    82,    -1,    84,    85,    86,    87,    88,
      -1,    90,    -1,    -1,    93,    94,    95,    96,    -1,    98,
      99,   100,    -1,   102,    -1,   104,   105,   106,   107,   108,
     109,   110,    -1,   112,   113,   114,    -1,   116,    -1,   118,
      -1,    -1,    -1,   122,   123,    -1,   125,   126,    -1,   128,
      -1,   130,   131,   132,    -1,   134,   135,   136,    -1,   138,
     139,   140,   141,   142,    -1,    -1,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,    -1,   155,    -1,    -1,   158,
      -1,   160,   161,   162,   163,   164,    -1,   166,    -1,   168,
      -1,    -1,   171,   172,   173,    -1,    -1,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,    -1,
     189,    -1,   191,   192,   193,   194,   195,   196,   197,   198,
     199,    -1,   201,   202,    -1,   204,    -1,   206,   207,   208,
     209,    -1,    -1,   212,    -1,    -1,    -1,   216,   217,    -1,
      -1,   220,    -1,    -1,   223,   224,   225,   226,    -1,   228,
     229,   230,   231,   232,    -1,   234,   235,   236,   237,   238,
     239,   240,   241,    -1,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,    -1,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,    -1,   266,   267,   268,
      -1,   270,   271,   272,   273,    -1,   275,   276,    -1,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,    -1,
     289,   290,    -1,   292,   293,   294,   295,    -1,   297,   298,
      -1,   300,    -1,   302,   303,   304,   305,    -1,   307,   308,
     309,   310,   311,    -1,    -1,   314,   315,   316,   317,    -1,
      -1,   320,   321,   322,   323,   324,   325,    -1,   327,   328,
      -1,    -1,   331,   332,   333,   334,   335,   336,    -1,   338,
      -1,    -1,    -1,    -1,   343,    -1,    -1,   346,   347,   348,
      -1,   350,   351,   352,   353,   354,   355,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    24,    -1,
      26,    27,    28,    -1,    30,    -1,    32,    33,    -1,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,    44,    -1,
      46,    47,    48,    49,    50,    -1,    -1,    53,    54,    55,
      56,    -1,    58,    59,    60,    61,    -1,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    -1,    84,    85,
      86,    87,    88,    -1,    90,    -1,    -1,    93,    94,    95,
      96,    -1,    98,    99,   100,    -1,   102,    -1,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
     116,    -1,   118,    -1,    -1,    -1,   122,   123,    -1,   125,
     126,    -1,   128,    -1,   130,   131,   132,    -1,   134,   135,
     136,    -1,   138,   139,   140,   141,   142,    -1,    -1,   145,
     146,   147,   148,   149,   150,   151,    -1,   153,    -1,   155,
      -1,    -1,   158,    -1,   160,   161,   162,   163,   164,    -1,
     166,    -1,   168,    -1,    -1,   171,   172,   173,    -1,    -1,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,    -1,   189,    -1,   191,   192,   193,   194,   195,
     196,   197,   198,   199,    -1,   201,   202,    -1,   204,    -1,
     206,   207,   208,   209,    -1,    -1,   212,    -1,    -1,    -1,
     216,   217,    -1,    -1,   220,    -1,    -1,   223,   224,   225,
     226,    -1,   228,   229,   230,   231,   232,    -1,   234,   235,
     236,   237,   238,   239,   240,   241,    -1,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,    -1,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,    -1,
     266,   267,   268,    -1,   270,   271,   272,   273,    -1,   275,
     276,    -1,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,    -1,   289,   290,    -1,   292,   293,   294,   295,
      -1,   297,   298,    -1,   300,    -1,   302,   303,   304,   305,
      -1,   307,   308,   309,   310,   311,    -1,    -1,   314,   315,
     316,   317,    -1,    -1,   320,   321,   322,   323,   324,   325,
      -1,   327,   328,    -1,    -1,   331,   332,   333,   334,   335,
     336,    -1,   338,    -1,    -1,    -1,    -1,   343,    -1,    -1,
     346,   347,   348,    -1,   350,   351,   352,   353,   354,   355,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      -1,    24,    -1,    26,    27,    28,    -1,    30,    -1,    32,
      33,    -1,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,    44,    -1,    46,    47,    48,    49,    50,    -1,    -1,
      53,    54,    55,    56,    -1,    58,    59,    60,    61,    -1,
      63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    82,
      -1,    84,    85,    86,    87,    88,    -1,    90,    -1,    -1,
      93,    94,    95,    96,    -1,    98,    99,   100,    -1,   102,
      -1,   104,   105,   106,   107,   108,   109,   110,    -1,   112,
     113,   114,    -1,   116,    -1,   118,    -1,    -1,    -1,   122,
     123,    -1,   125,   126,    -1,   128,    -1,   130,   131,   132,
      -1,   134,   135,   136,    -1,   138,   139,   140,   141,   142,
      -1,    -1,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,    -1,   155,    -1,    -1,   158,    -1,   160,   161,   162,
     163,   164,    -1,   166,    -1,   168,    -1,    -1,   171,   172,
     173,    -1,    -1,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,    -1,   189,    -1,   191,   192,
     193,   194,   195,   196,   197,   198,   199,    -1,   201,   202,
      -1,   204,    -1,   206,   207,   208,   209,    -1,    -1,   212,
      -1,    -1,    -1,   216,   217,    -1,    -1,   220,    -1,    -1,
     223,   224,   225,   226,    -1,   228,   229,   230,   231,   232,
      -1,   234,   235,   236,   237,   238,   239,   240,   241,    -1,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,    -1,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,    -1,   266,   267,   268,    -1,   270,   271,   272,
     273,    -1,   275,   276,    -1,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,    -1,   289,   290,    -1,   292,
     293,   294,   295,    -1,   297,   298,    -1,   300,    -1,   302,
     303,   304,   305,    -1,   307,   308,   309,   310,   311,    -1,
      -1,   314,   315,   316,   317,    -1,    -1,   320,   321,   322,
     323,   324,   325,    -1,   327,   328,    -1,    -1,   331,   332,
     333,   334,   335,   336,    -1,   338,    -1,    -1,    -1,    -1,
     343,    -1,    -1,   346,   347,   348,    -1,   350,   351,   352,
     353,   354,   355,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    -1,    24,    -1,    26,    27,    28,    -1,
      30,    -1,    32,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,    44,    -1,    46,    47,    48,    49,
      -1,    -1,    -1,    53,    54,    55,    56,    -1,    58,    59,
      -1,    61,    -1,    63,    64,    65,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    -1,    84,    85,    86,    87,    88,    -1,
      90,    -1,    -1,    93,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,    -1,   104,   105,   106,    -1,   108,   109,
      -1,    -1,   112,   113,   114,    -1,   116,    -1,   118,    -1,
      -1,    -1,   122,   123,    -1,   125,    -1,    -1,   128,    -1,
     130,   131,   132,    -1,   134,   135,   136,    -1,   138,   139,
     140,   141,   142,    -1,    -1,    -1,   146,   147,   148,   149,
     150,   151,    -1,   153,    -1,   155,    -1,    -1,   158,    -1,
     160,   161,   162,   163,   164,    -1,    -1,    -1,   168,    -1,
      -1,   171,   172,   173,    -1,    -1,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,    -1,   189,
      -1,   191,   192,   193,   194,   195,   196,   197,    -1,   199,
      -1,   201,   202,    -1,   204,    -1,    -1,   207,   208,   209,
      -1,    -1,   212,    -1,    -1,    -1,   216,   217,    -1,    -1,
      -1,    -1,    -1,    -1,   224,   225,   226,    -1,    -1,    -1,
     230,   231,   232,    -1,   234,   235,   236,   237,   238,   239,
     240,   241,    -1,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,    -1,   255,   256,    -1,   258,   259,
     260,   261,   262,   263,   264,    -1,   266,   267,   268,    -1,
     270,   271,   272,   273,    -1,   275,   276,    -1,   278,   279,
     280,   281,   282,   283,   284,   285,    -1,   287,    -1,   289,
     290,    -1,   292,   293,   294,   295,    -1,   297,   298,    -1,
     300,    -1,   302,    -1,   304,    -1,    -1,   307,   308,   309,
     310,   311,    -1,    -1,   314,   315,   316,   317,    -1,    -1,
     320,   321,   322,   323,   324,   325,    -1,   327,   328,    -1,
      -1,   331,   332,   333,   334,   335,   336,    -1,   338,   339,
     340,    -1,    -1,   343,   344,    -1,   346,   347,   348,    -1,
     350,   351,   352,   353,   354,   355,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
      -1,   338,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    -1,    -1,   352,    -1,    -1,    -1,    -1,
      21,    22,    -1,    24,    -1,    26,    27,    28,    -1,    30,
      -1,    32,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,    44,    -1,    46,    47,    48,    49,    50,
      -1,    -1,    53,    54,    55,    56,    -1,    58,    59,    60,
      61,    -1,    63,    64,    65,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    82,    -1,    84,    85,    86,    87,    88,    -1,    90,
      -1,    -1,    93,    94,    95,    96,    -1,    98,    99,   100,
      -1,   102,    -1,   104,   105,   106,   107,   108,   109,   110,
      -1,   112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,
      -1,   122,   123,    -1,   125,   126,    -1,   128,    -1,   130,
     131,   132,    -1,   134,   135,   136,    -1,   138,   139,   140,
     141,   142,    -1,    -1,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,    -1,   155,    -1,    -1,   158,    -1,   160,
     161,   162,   163,   164,    -1,   166,    -1,   168,    -1,    -1,
     171,   172,   173,    -1,    -1,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,    -1,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,    -1,
     201,   202,    -1,   204,    -1,   206,   207,   208,   209,    -1,
      -1,   212,   213,    -1,    -1,   216,   217,    -1,    -1,   220,
      -1,    -1,   223,   224,   225,   226,    -1,   228,   229,   230,
     231,   232,    -1,   234,   235,   236,   237,   238,   239,   240,
     241,    -1,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    -1,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,    -1,   266,   267,   268,    -1,   270,
     271,   272,   273,    -1,   275,   276,    -1,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,    -1,   289,   290,
      -1,   292,   293,   294,   295,    -1,   297,   298,    -1,   300,
      -1,   302,   303,   304,   305,    -1,   307,   308,   309,   310,
     311,    -1,    -1,   314,   315,   316,   317,    -1,    -1,   320,
     321,   322,   323,   324,   325,    -1,   327,   328,    -1,    -1,
     331,   332,   333,   334,   335,   336,    -1,   338,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    -1,
      -1,   352,    -1,    -1,    -1,    -1,    21,    22,    -1,    24,
      -1,    26,    27,    28,    -1,    30,    -1,    32,    33,    -1,
      35,    36,    37,    38,    -1,    -1,    41,    42,    43,    44,
      -1,    46,    47,    48,    49,    -1,    -1,    -1,    53,    54,
      55,    56,    -1,    58,    59,    -1,    61,    -1,    63,    64,
      65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    -1,    84,
      85,    86,    87,    88,    -1,    90,    -1,    -1,    93,    94,
      95,    96,    -1,    98,    99,   100,    -1,   102,    -1,   104,
     105,   106,    -1,   108,   109,    -1,    -1,   112,   113,   114,
      -1,   116,    -1,   118,    -1,    -1,    -1,   122,   123,    -1,
     125,    -1,    -1,   128,    -1,   130,   131,   132,    -1,   134,
     135,   136,    -1,   138,   139,   140,   141,   142,    -1,    -1,
      -1,   146,   147,   148,   149,   150,   151,    -1,   153,    -1,
     155,    -1,    -1,   158,    -1,   160,   161,   162,   163,   164,
      -1,    -1,    -1,   168,    -1,    -1,   171,   172,   173,    -1,
      -1,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,    -1,   189,    -1,   191,   192,   193,   194,
     195,   196,   197,    -1,   199,    -1,   201,   202,    -1,   204,
      -1,    -1,   207,   208,   209,    -1,    -1,   212,    -1,    -1,
      -1,   216,   217,    -1,    -1,    -1,    -1,    -1,    -1,   224,
     225,   226,    -1,    -1,    -1,   230,   231,   232,    -1,   234,
     235,   236,   237,   238,   239,   240,   241,    -1,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,    -1,
     255,   256,    -1,   258,   259,   260,   261,   262,   263,   264,
      -1,   266,   267,   268,    -1,   270,   271,   272,   273,    -1,
     275,   276,    -1,   278,   279,   280,   281,   282,   283,   284,
     285,    -1,   287,    -1,   289,   290,    -1,   292,   293,   294,
     295,    -1,   297,   298,    -1,   300,    -1,   302,    -1,   304,
      -1,    -1,   307,   308,   309,   310,   311,    -1,    -1,   314,
     315,   316,   317,    -1,    -1,   320,   321,   322,   323,   324,
     325,    -1,   327,   328,    -1,    -1,   331,   332,   333,   334,
     335,   336,    -1,   338,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    -1,    -1,   352,    -1,    -1,
      -1,    -1,    21,    22,    -1,    24,    -1,    26,    27,    28,
      -1,    30,    -1,    32,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    41,    42,    43,    44,    -1,    46,    47,    48,
      49,    50,    -1,    -1,    53,    54,    55,    56,    -1,    58,
      59,    60,    61,    -1,    63,    64,    65,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    84,    85,    86,    87,    88,
      -1,    90,    -1,    -1,    93,    94,    95,    96,    -1,    98,
      99,   100,    -1,   102,    -1,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,    -1,   118,
      -1,    -1,    -1,   122,   123,    -1,   125,   126,    -1,   128,
      -1,   130,   131,   132,    -1,   134,   135,   136,    -1,   138,
     139,   140,   141,   142,    -1,    -1,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,    -1,   155,    -1,    -1,   158,
      -1,   160,   161,   162,   163,   164,    -1,   166,    -1,   168,
      -1,    -1,   171,   172,   173,    -1,    -1,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,    -1,
     189,    -1,   191,   192,   193,   194,   195,   196,   197,   198,
     199,    -1,   201,   202,    -1,   204,    -1,   206,   207,   208,
     209,   210,    -1,   212,    -1,   214,    -1,   216,   217,    -1,
      -1,   220,    -1,    -1,   223,   224,   225,   226,    -1,   228,
     229,   230,   231,   232,    -1,   234,   235,   236,   237,   238,
     239,   240,   241,    -1,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,    -1,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,    -1,   266,   267,   268,
      -1,   270,   271,   272,   273,    -1,   275,   276,    -1,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,    -1,
     289,   290,    -1,   292,   293,   294,   295,    -1,   297,   298,
      -1,   300,    -1,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,    -1,    -1,   314,   315,   316,   317,    -1,
      -1,   320,   321,   322,   323,   324,   325,    -1,   327,   328,
      -1,    -1,   331,   332,   333,   334,   335,   336,    -1,   338,
     339,   340,    -1,    -1,    -1,   344,    -1,    -1,    -1,    -1,
      -1,    -1,   351,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    -1,    24,    -1,    26,    27,    28,    -1,
      30,    -1,    32,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,    44,    -1,    46,    47,    48,    49,
      50,    -1,    -1,    53,    54,    55,    56,    -1,    58,    59,
      60,    61,    -1,    63,    64,    65,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    -1,    84,    85,    86,    87,    88,    -1,
      90,    -1,    -1,    93,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,    -1,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    -1,   116,    -1,   118,    -1,
      -1,    -1,   122,   123,    -1,   125,   126,    -1,   128,    -1,
     130,   131,   132,    -1,   134,   135,   136,    -1,   138,   139,
     140,   141,   142,    -1,    -1,   145,   146,   147,   148,   149,
     150,   151,    -1,   153,    -1,   155,    -1,    -1,   158,    -1,
     160,   161,   162,   163,   164,    -1,   166,    -1,   168,    -1,
      -1,   171,   172,   173,    -1,    -1,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,    -1,   189,
      -1,   191,   192,   193,   194,   195,   196,   197,   198,   199,
      -1,   201,   202,    -1,   204,    -1,   206,   207,   208,   209,
     210,    -1,   212,    -1,   214,    -1,   216,   217,    -1,    -1,
     220,    -1,    -1,   223,   224,   225,   226,    -1,   228,   229,
     230,   231,   232,    -1,   234,   235,   236,   237,   238,   239,
     240,   241,    -1,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,    -1,   266,   267,   268,    -1,
     270,   271,   272,   273,    -1,   275,   276,    -1,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,    -1,   289,
     290,    -1,   292,   293,   294,   295,    -1,   297,   298,    -1,
     300,    -1,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,    -1,    -1,   314,   315,   316,   317,    -1,    -1,
     320,   321,   322,   323,   324,   325,    -1,   327,   328,    -1,
      -1,   331,   332,   333,   334,   335,   336,    -1,   338,   339,
     340,    -1,    -1,    -1,   344,    -1,    -1,    -1,    -1,    -1,
      -1,   351,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    -1,    24,    -1,    26,    27,    28,    -1,    30,
      -1,    32,    33,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,    44,    -1,    46,    47,    48,    49,    50,
      -1,    -1,    53,    54,    55,    56,    -1,    58,    59,    60,
      61,    -1,    63,    64,    65,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    82,    -1,    84,    85,    86,    87,    88,    -1,    90,
      -1,    -1,    93,    94,    95,    96,    -1,    98,    99,   100,
      -1,   102,    -1,   104,   105,   106,   107,   108,   109,   110,
      -1,   112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,
      -1,   122,   123,    -1,   125,   126,    -1,   128,    -1,   130,
     131,   132,    -1,   134,   135,   136,    -1,   138,   139,   140,
     141,   142,    -1,    -1,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,    -1,   155,    -1,    -1,   158,    -1,   160,
     161,   162,   163,   164,    -1,   166,    -1,   168,    -1,    -1,
     171,   172,   173,    -1,    -1,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,    -1,   189,    -1,
     191,   192,   193,   194,   195,   196,   197,   198,   199,    -1,
     201,   202,    -1,   204,    -1,   206,   207,   208,   209,    -1,
      -1,   212,    -1,    -1,    -1,   216,   217,    -1,    -1,   220,
      -1,    -1,   223,   224,   225,   226,    -1,   228,   229,   230,
     231,   232,    -1,   234,   235,   236,   237,   238,   239,   240,
     241,    -1,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    -1,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,    -1,   266,   267,   268,    -1,   270,
     271,   272,   273,    -1,   275,   276,    -1,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,    16,   289,   290,
      -1,   292,   293,   294,   295,    24,   297,   298,    -1,   300,
      29,   302,   303,   304,   305,    -1,   307,   308,   309,   310,
     311,    -1,    -1,   314,   315,   316,   317,    -1,    -1,   320,
     321,   322,   323,   324,   325,    -1,   327,   328,    16,    -1,
     331,   332,   333,   334,   335,   336,    24,   338,    -1,    -1,
      -1,    29,    -1,   344,    -1,    -1,    -1,    -1,    -1,    -1,
     351,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,   133,    -1,    29,    -1,   137,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,   157,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     169,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,   137,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,   157,
      -1,   200,   133,    -1,   203,    -1,   137,    -1,    -1,    -1,
      -1,   169,    -1,    -1,    -1,    -1,    -1,   216,    -1,   218,
      -1,    -1,    -1,   133,    -1,   156,   157,   137,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,
     133,    -1,   200,    -1,   137,   203,   156,   157,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,   169,
     218,    -1,    -1,   156,   157,    -1,    -1,    -1,    -1,   200,
      -1,    -1,   203,    -1,    -1,   274,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   216,    -1,   218,    -1,    -1,
     200,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   216,   200,   218,    -1,
     203,    -1,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,
      -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   274,   343,    -1,    -1,   346,   347,   348,
      -1,   350,   351,   352,   353,   354,   355,    -1,    -1,    -1,
      -1,   360,   361,    -1,   274,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   274,    -1,    -1,    -1,   343,    -1,    -1,   346,   347,
     348,    -1,   350,   351,   352,   353,   354,   355,    -1,    -1,
      -1,    -1,   360,   361,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   343,    -1,    -1,   346,   347,   348,    -1,   350,
     351,   352,   353,   354,   355,    -1,    -1,    -1,    -1,   360,
     361,    -1,    -1,   343,    -1,    -1,   346,   347,   348,    -1,
     350,   351,   352,   353,   354,   355,    -1,    -1,    -1,    -1,
     343,   361,    -1,   346,   347,   348,    -1,   350,   351,   352,
     353,   354,   355,    -1,    -1,    -1,    -1,    -1,   361,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,
      24,    -1,    26,    27,    28,    -1,    30,    -1,    32,    33,
      -1,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
      44,    -1,    46,    47,    48,    49,    50,    -1,    -1,    53,
      54,    55,    56,    -1,    58,    59,    60,    61,    -1,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    85,    86,    87,    88,    -1,    90,    -1,    -1,    93,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,    -1,
     104,   105,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,    -1,   116,    -1,   118,    -1,    -1,    -1,   122,   123,
      -1,   125,   126,    -1,   128,    -1,   130,   131,   132,    -1,
     134,   135,   136,    -1,   138,   139,   140,   141,   142,    -1,
      -1,   145,   146,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,    -1,    -1,   158,    -1,   160,   161,   162,   163,
     164,    -1,   166,    -1,   168,    -1,    -1,   171,   172,   173,
      -1,    -1,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,    -1,   189,    -1,   191,   192,   193,
     194,   195,   196,   197,   198,   199,    -1,   201,   202,    -1,
     204,    -1,   206,   207,   208,   209,    -1,    -1,   212,    -1,
      -1,    -1,   216,   217,    -1,    -1,   220,    -1,    -1,   223,
     224,   225,   226,    -1,   228,   229,   230,   231,   232,    -1,
     234,   235,   236,   237,   238,   239,   240,   241,    -1,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
      -1,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,    -1,   266,   267,   268,    -1,   270,   271,   272,   273,
      -1,   275,   276,    -1,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,    -1,   289,   290,    -1,   292,   293,
     294,   295,    -1,   297,   298,    -1,   300,    -1,   302,   303,
     304,   305,    -1,   307,   308,   309,   310,   311,    -1,    -1,
     314,   315,   316,   317,    -1,    -1,   320,   321,   322,   323,
     324,   325,    -1,   327,   328,    -1,    -1,   331,   332,   333,
     334,   335,   336,    -1,   338,   339,   340,   341,   342,    -1,
     344,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    -1,    24,    -1,    26,    27,    28,    -1,    30,    -1,
      32,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,    44,    -1,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      -1,    63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    84,    85,    86,    87,    88,    -1,    90,    -1,
      -1,    93,    94,    95,    96,    -1,    98,    99,   100,    -1,
     102,    -1,   104,   105,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,    -1,
     122,   123,    -1,   125,   126,    -1,   128,    -1,   130,   131,
     132,    -1,   134,   135,   136,    -1,   138,   139,   140,   141,
     142,    -1,    -1,   145,   146,   147,   148,   149,   150,   151,
      -1,   153,    -1,   155,    -1,    -1,   158,    -1,   160,   161,
     162,   163,   164,    -1,   166,    -1,   168,    -1,    -1,   171,
     172,   173,    -1,    -1,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    -1,   189,    -1,   191,
     192,   193,   194,   195,   196,   197,   198,   199,    -1,   201,
     202,    -1,   204,    -1,   206,   207,   208,   209,    -1,    -1,
     212,    -1,    -1,    -1,   216,   217,    -1,    -1,   220,    -1,
      -1,   223,   224,   225,   226,    -1,   228,   229,   230,   231,
     232,    -1,   234,   235,   236,   237,   238,   239,   240,   241,
      -1,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,    -1,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,    -1,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,    -1,   289,   290,    -1,
     292,   293,   294,   295,    -1,   297,   298,    -1,   300,    -1,
     302,   303,   304,   305,    -1,   307,   308,   309,   310,   311,
      -1,    -1,   314,   315,   316,   317,    -1,    -1,   320,   321,
     322,   323,   324,   325,    -1,   327,   328,    -1,    -1,   331,
     332,   333,   334,   335,   336,    -1,   338,    -1,   340,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,
      24,    -1,    26,    27,    28,    -1,    30,    -1,    32,    33,
      -1,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
      44,    -1,    46,    47,    48,    49,    50,    -1,    -1,    53,
      54,    55,    56,    -1,    58,    59,    60,    61,    -1,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    85,    86,    87,    88,    -1,    90,    -1,    -1,    93,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,    -1,
     104,   105,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,    -1,   116,    -1,   118,    -1,    -1,    -1,   122,   123,
      -1,   125,   126,    -1,   128,    -1,   130,   131,   132,    -1,
     134,   135,   136,    -1,   138,   139,   140,   141,   142,    -1,
      -1,   145,   146,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,    -1,    -1,   158,    -1,   160,   161,   162,   163,
     164,    -1,   166,    -1,   168,    -1,    -1,   171,   172,   173,
      -1,    -1,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,    -1,   189,    -1,   191,   192,   193,
     194,   195,   196,   197,   198,   199,    -1,   201,   202,    -1,
     204,    -1,   206,   207,   208,   209,    -1,    -1,   212,    -1,
      -1,    -1,   216,   217,    -1,    -1,   220,    -1,    -1,   223,
     224,   225,   226,    -1,   228,   229,   230,   231,   232,    -1,
     234,   235,   236,   237,   238,   239,   240,   241,    -1,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
      -1,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,    -1,   266,   267,   268,    24,   270,   271,   272,   273,
      29,   275,   276,    -1,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,    -1,   289,   290,    24,   292,   293,
     294,   295,    29,   297,   298,    -1,   300,    -1,   302,   303,
     304,   305,    -1,   307,   308,   309,   310,   311,    -1,    -1,
     314,   315,   316,   317,    -1,    -1,   320,   321,   322,   323,
     324,   325,    -1,   327,   328,    -1,    -1,   331,   332,   333,
     334,   335,   336,    -1,   338,    -1,   340,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,   137,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   133,   156,   157,    -1,
     137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   156,
     157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   169,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   200,    -1,    -1,   203,    -1,    -1,    -1,    -1,   133,
      -1,    -1,    -1,   137,    -1,    -1,    -1,   216,    -1,    -1,
      -1,    -1,    -1,    -1,   133,    -1,   203,    -1,   137,    -1,
      -1,    -1,   156,   157,    -1,    -1,    -1,    -1,    -1,   216,
      -1,    -1,    -1,    -1,    -1,   169,    -1,   156,   157,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,   203,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   216,    -1,   203,    -1,    -1,   274,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   343,    -1,    -1,   346,   347,   348,
     274,   350,   351,   352,   353,   354,   355,    -1,    -1,    -1,
      -1,    -1,   361,    -1,    -1,   274,   343,    -1,    -1,    -1,
      -1,    -1,    -1,   350,   351,   352,   353,   354,   355,    -1,
      -1,    -1,    -1,    -1,   361,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   343,
      -1,    -1,    -1,    -1,    -1,    -1,   350,   351,   352,   353,
     354,   355,    -1,    -1,   343,    -1,    -1,   361,    -1,    -1,
      -1,   350,   351,   352,   353,   354,   355,    -1,    -1,    -1,
      -1,    -1,   361,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,    -1,   338,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
      44,    -1,    46,    47,    48,    49,    50,    -1,    -1,    53,
      54,    55,    56,    -1,    58,    59,    60,    61,    -1,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    85,    86,    87,    88,    -1,    90,    -1,    -1,    93,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,    -1,
     104,   105,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,    -1,   116,    -1,   118,   119,    -1,   121,   122,   123,
      -1,   125,   126,    -1,   128,    -1,   130,   131,   132,   133,
     134,   135,   136,    -1,   138,   139,   140,   141,   142,    -1,
     144,   145,   146,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,    -1,   166,   167,   168,   169,    -1,   171,   172,   173,
      -1,    -1,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,    -1,   201,   202,   203,
     204,    -1,   206,   207,   208,   209,    -1,    -1,   212,   213,
      -1,    -1,   216,   217,    -1,    -1,   220,   221,   222,   223,
     224,   225,   226,    -1,   228,   229,   230,   231,   232,    -1,
     234,   235,   236,   237,   238,   239,   240,   241,    -1,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,    -1,   266,   267,   268,    -1,   270,   271,   272,   273,
     274,   275,   276,    -1,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,    -1,   289,   290,    -1,   292,   293,
     294,   295,    -1,   297,   298,    -1,   300,    -1,   302,   303,
     304,   305,    -1,   307,   308,   309,   310,   311,    -1,    -1,
     314,   315,   316,   317,    -1,    -1,   320,   321,   322,   323,
     324,   325,   326,   327,   328,    -1,    -1,   331,   332,   333,
     334,   335,   336,    -1,   338,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    -1,    24,    -1,    26,    27,
      28,    -1,    30,    -1,    32,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    -1,    84,    85,    86,    87,
      88,    -1,    90,    -1,    -1,    93,    94,    95,    96,    -1,
      98,    99,   100,    -1,   102,    -1,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,   116,   117,
     118,    -1,    -1,    -1,   122,   123,    -1,   125,   126,    -1,
     128,    -1,   130,   131,   132,    -1,   134,   135,   136,    -1,
     138,   139,   140,   141,   142,    -1,    -1,   145,   146,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,    -1,    -1,
     158,    -1,   160,   161,   162,   163,   164,    -1,   166,    -1,
     168,   169,    -1,   171,   172,   173,    -1,    -1,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
      -1,   189,    -1,   191,   192,   193,   194,   195,   196,   197,
     198,   199,    -1,   201,   202,    -1,   204,    -1,   206,   207,
     208,   209,    -1,    -1,   212,    -1,    -1,    -1,   216,   217,
      -1,    -1,   220,    -1,    -1,   223,   224,   225,   226,    -1,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,    -1,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,    -1,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,    -1,   266,   267,
     268,    -1,   270,   271,   272,   273,    -1,   275,   276,    -1,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
      -1,   289,   290,    -1,   292,   293,   294,   295,    -1,   297,
     298,    -1,   300,    -1,   302,   303,   304,   305,    -1,   307,
     308,   309,   310,   311,    -1,   313,   314,   315,   316,   317,
      -1,    -1,   320,   321,   322,   323,   324,   325,    -1,   327,
     328,    -1,    -1,   331,   332,   333,   334,   335,   336,    -1,
     338,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,    44,    -1,    46,    47,    48,    49,    -1,    -1,
      -1,    53,    54,    55,    56,    -1,    58,    59,    -1,    61,
      -1,    63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    -1,    84,    85,    86,    87,    88,    -1,    90,    -1,
      -1,    93,    94,    95,    96,    -1,    98,    99,   100,    -1,
     102,    -1,   104,   105,   106,    -1,   108,   109,    -1,    -1,
     112,   113,   114,    -1,   116,    -1,   118,   119,    -1,   121,
     122,   123,    -1,   125,    -1,    -1,   128,    -1,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,   153,    -1,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,    -1,    -1,   167,   168,   169,    -1,   171,
     172,   173,    -1,    -1,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,    -1,   191,
     192,   193,   194,   195,   196,   197,    -1,   199,    -1,   201,
     202,   203,   204,    -1,    -1,   207,   208,   209,    -1,    -1,
     212,    -1,    -1,    -1,   216,   217,    -1,    -1,   220,   221,
     222,    -1,   224,   225,   226,    -1,    -1,    -1,   230,   231,
     232,    -1,   234,   235,   236,   237,   238,   239,   240,   241,
      -1,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,    -1,   258,   259,   260,   261,
     262,   263,   264,    -1,   266,   267,   268,    -1,   270,   271,
     272,   273,   274,   275,   276,    -1,   278,   279,   280,   281,
     282,   283,   284,   285,    -1,   287,    -1,   289,   290,    -1,
     292,   293,   294,   295,    -1,   297,   298,    -1,   300,    -1,
     302,    -1,   304,    -1,    -1,   307,   308,   309,   310,   311,
      -1,    -1,   314,   315,   316,   317,    -1,    -1,   320,   321,
     322,   323,   324,   325,   326,   327,   328,    -1,    -1,   331,
     332,   333,   334,   335,   336,    -1,   338,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    24,    -1,
      26,    27,    28,    -1,    30,    -1,    32,    33,    -1,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,    44,    -1,
      46,    47,    48,    49,    50,    -1,    -1,    53,    54,    55,
      56,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    -1,    84,    85,
      86,    87,    88,    -1,    90,    -1,    -1,    93,    94,    95,
      96,    -1,    98,    99,   100,    -1,   102,    -1,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
     116,    -1,   118,    -1,    -1,    -1,   122,   123,   124,   125,
     126,    -1,   128,    -1,   130,   131,   132,    -1,   134,   135,
     136,    -1,   138,   139,   140,   141,   142,    -1,    -1,   145,
     146,   147,   148,   149,   150,   151,    -1,   153,    -1,   155,
      -1,    -1,   158,    -1,   160,   161,   162,   163,   164,    -1,
     166,    -1,   168,    -1,    -1,   171,   172,   173,    -1,    -1,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,    -1,   189,    -1,   191,   192,   193,   194,   195,
     196,   197,   198,   199,    -1,   201,   202,    -1,   204,    -1,
     206,   207,   208,   209,    -1,    -1,   212,    -1,    -1,    -1,
     216,   217,    -1,    -1,   220,    -1,    -1,   223,   224,   225,
     226,    -1,   228,   229,   230,   231,   232,    -1,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,    -1,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,    -1,   270,   271,   272,   273,    -1,   275,
     276,    -1,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,    -1,   289,   290,    -1,   292,   293,   294,   295,
      -1,   297,   298,    -1,   300,    -1,   302,   303,   304,   305,
      -1,   307,   308,   309,   310,   311,    -1,    -1,   314,   315,
     316,   317,    -1,    -1,   320,   321,   322,   323,   324,   325,
      -1,   327,   328,    -1,    -1,   331,   332,   333,   334,   335,
     336,    -1,   338,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    -1,    24,    -1,    26,    27,    28,    -1,
      30,    -1,    32,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,    44,    -1,    46,    47,    48,    49,
      50,    -1,    -1,    53,    54,    55,    56,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    -1,    84,    85,    86,    87,    88,    -1,
      90,    -1,    -1,    93,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,    -1,   104,   105,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,    -1,   116,    -1,   118,    -1,
      -1,    -1,   122,   123,    -1,   125,   126,    -1,   128,    -1,
     130,   131,   132,    -1,   134,   135,   136,    -1,   138,   139,
     140,   141,   142,    -1,    -1,   145,   146,   147,   148,   149,
     150,   151,    -1,   153,    -1,   155,    -1,    -1,   158,    -1,
     160,   161,   162,   163,   164,    -1,   166,    -1,   168,    -1,
      -1,   171,   172,   173,    -1,    -1,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,    -1,   189,
      -1,   191,   192,   193,   194,   195,   196,   197,   198,   199,
      -1,   201,   202,    -1,   204,    -1,   206,   207,   208,   209,
      -1,    -1,   212,    -1,    -1,    -1,   216,   217,    -1,    -1,
     220,    -1,    -1,   223,   224,   225,   226,    -1,   228,   229,
     230,   231,   232,    -1,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,    -1,
     270,   271,   272,   273,    -1,   275,   276,    -1,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,    -1,   289,
     290,    -1,   292,   293,   294,   295,    -1,   297,   298,    -1,
     300,    -1,   302,   303,   304,   305,    -1,   307,   308,   309,
     310,   311,    -1,    -1,   314,   315,   316,   317,    -1,    -1,
     320,   321,   322,   323,   324,   325,    -1,   327,   328,    -1,
      -1,   331,   332,   333,   334,   335,   336,    -1,   338,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,
      24,    -1,    26,    27,    28,    -1,    30,    -1,    32,    33,
      -1,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
      44,    -1,    46,    47,    48,    49,    50,    -1,    -1,    53,
      54,    55,    56,    -1,    58,    59,    60,    61,    -1,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    85,    86,    87,    88,    -1,    90,    -1,    -1,    93,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,    -1,
     104,   105,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,    -1,   116,    -1,   118,    -1,    -1,    -1,   122,   123,
      -1,   125,   126,    -1,   128,    -1,   130,   131,   132,    -1,
     134,   135,   136,    -1,   138,   139,   140,   141,   142,    -1,
      -1,   145,   146,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,    -1,    -1,   158,    -1,   160,   161,   162,   163,
     164,    -1,   166,    -1,   168,    -1,    -1,   171,   172,   173,
      -1,    -1,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,    -1,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,    -1,   201,   202,    -1,
     204,    -1,   206,   207,   208,   209,    -1,    -1,   212,   213,
      -1,    -1,   216,   217,    -1,    -1,   220,    -1,    -1,   223,
     224,   225,   226,    -1,   228,   229,   230,   231,   232,    -1,
     234,   235,   236,   237,   238,   239,   240,   241,    -1,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
      -1,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,    -1,   266,   267,   268,    -1,   270,   271,   272,   273,
      -1,   275,   276,    -1,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,    -1,   289,   290,    -1,   292,   293,
     294,   295,    -1,   297,   298,    -1,   300,    -1,   302,   303,
     304,   305,    -1,   307,   308,   309,   310,   311,    -1,    -1,
     314,   315,   316,   317,    -1,    -1,   320,   321,   322,   323,
     324,   325,    -1,   327,   328,    -1,    -1,   331,   332,   333,
     334,   335,   336,    -1,   338,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    -1,    24,    -1,    26,    27,
      28,    -1,    30,    -1,    32,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,    44,    -1,    46,    47,
      48,    49,    50,    -1,    -1,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    -1,    84,    85,    86,    87,
      88,    -1,    90,    -1,    -1,    93,    94,    95,    96,    -1,
      98,    99,   100,    -1,   102,    -1,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,   116,    -1,
     118,    -1,    -1,    -1,   122,   123,    -1,   125,   126,    -1,
     128,    -1,   130,   131,   132,    -1,   134,   135,   136,    -1,
     138,   139,   140,   141,   142,    -1,    -1,   145,   146,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,    -1,    -1,
     158,    -1,   160,   161,   162,   163,   164,    -1,   166,    -1,
     168,    -1,    -1,   171,   172,   173,    -1,    -1,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
      -1,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,    -1,   201,   202,    -1,   204,    -1,   206,   207,
     208,   209,    -1,    -1,   212,   213,    -1,   215,   216,   217,
      -1,    -1,   220,    -1,    -1,   223,   224,   225,   226,    -1,
     228,   229,   230,   231,   232,    -1,   234,   235,   236,   237,
     238,   239,   240,   241,    -1,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,    -1,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,    -1,   266,   267,
     268,    -1,   270,   271,   272,   273,    -1,   275,   276,    -1,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
      -1,   289,   290,    -1,   292,   293,   294,   295,    -1,   297,
     298,    -1,   300,    -1,   302,   303,   304,   305,    -1,   307,
     308,   309,   310,   311,    -1,    -1,   314,   315,   316,   317,
      -1,    -1,   320,   321,   322,   323,   324,   325,    -1,   327,
     328,    -1,    -1,   331,   332,   333,   334,   335,   336,    -1,
     338,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    -1,    24,    -1,    26,    27,    28,    -1,    30,    -1,
      32,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,    44,    -1,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      -1,    63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    -1,    84,    85,    86,    87,    88,    -1,    90,    -1,
      -1,    93,    94,    95,    96,    -1,    98,    99,   100,    -1,
     102,    -1,   104,   105,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,    -1,
     122,   123,    -1,   125,   126,    -1,   128,    -1,   130,   131,
     132,    -1,   134,   135,   136,    -1,   138,   139,   140,   141,
     142,    -1,    -1,   145,   146,   147,   148,   149,   150,   151,
      -1,   153,    -1,   155,    -1,    -1,   158,    -1,   160,   161,
     162,   163,   164,    -1,   166,    -1,   168,    -1,    -1,   171,
     172,   173,    -1,    -1,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    -1,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,    -1,   201,
     202,    -1,   204,    -1,   206,   207,   208,   209,    -1,    -1,
     212,   213,    -1,    -1,   216,   217,    -1,    -1,   220,    -1,
      -1,   223,   224,   225,   226,    -1,   228,   229,   230,   231,
     232,    -1,   234,   235,   236,   237,   238,   239,   240,   241,
      -1,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,    -1,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,    -1,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,    -1,   289,   290,   291,
     292,   293,   294,   295,    -1,   297,   298,    -1,   300,    -1,
     302,   303,   304,   305,    -1,   307,   308,   309,   310,   311,
      -1,    -1,   314,   315,   316,   317,    -1,    -1,   320,   321,
     322,   323,   324,   325,    -1,   327,   328,    -1,    -1,   331,
     332,   333,   334,   335,   336,    -1,   338,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    24,    -1,
      26,    27,    28,    -1,    30,    -1,    32,    33,    -1,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,    44,    -1,
      46,    47,    48,    49,    50,    -1,    -1,    53,    54,    55,
      56,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    -1,    84,    85,
      86,    87,    88,    -1,    90,    -1,    -1,    93,    94,    95,
      96,    -1,    98,    99,   100,    -1,   102,    -1,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
     116,    -1,   118,    -1,    -1,    -1,   122,   123,    -1,   125,
     126,    -1,   128,    -1,   130,   131,   132,    -1,   134,   135,
     136,    -1,   138,   139,   140,   141,   142,    -1,    -1,   145,
     146,   147,   148,   149,   150,   151,    -1,   153,    -1,   155,
      -1,    -1,   158,    -1,   160,   161,   162,   163,   164,    -1,
     166,    -1,   168,    -1,    -1,   171,   172,   173,    -1,    -1,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,    -1,   189,    -1,   191,   192,   193,   194,   195,
     196,   197,   198,   199,    -1,   201,   202,    -1,   204,    -1,
     206,   207,   208,   209,    -1,    -1,   212,    -1,    -1,    -1,
     216,   217,    -1,    -1,   220,    -1,    -1,   223,   224,   225,
     226,    -1,   228,   229,   230,   231,   232,    -1,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,    -1,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,    -1,   270,   271,   272,   273,    -1,   275,
     276,    -1,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,    -1,   289,   290,    -1,   292,   293,   294,   295,
      -1,   297,   298,    -1,   300,    -1,   302,   303,   304,   305,
      -1,   307,   308,   309,   310,   311,    -1,    -1,   314,   315,
     316,   317,    -1,    -1,   320,   321,   322,   323,   324,   325,
      -1,   327,   328,    -1,    -1,   331,   332,   333,   334,   335,
     336,    -1,   338,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    -1,    24,    -1,    26,    27,    28,    -1,
      30,    -1,    32,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,    44,    -1,    46,    47,    48,    49,
      50,    -1,    -1,    53,    54,    55,    56,    -1,    58,    59,
      60,    61,    -1,    63,    64,    65,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    -1,    84,    85,    86,    87,    88,    -1,
      90,    -1,    -1,    93,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,    -1,   104,   105,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,    -1,   116,    -1,   118,    -1,
      -1,    -1,   122,   123,    -1,   125,   126,    -1,   128,    -1,
     130,   131,   132,    -1,   134,   135,   136,    -1,   138,   139,
     140,   141,   142,    -1,    -1,   145,   146,   147,   148,   149,
     150,   151,    -1,   153,    -1,   155,    -1,    -1,   158,    -1,
     160,   161,   162,   163,   164,    -1,   166,    -1,   168,    -1,
      -1,   171,   172,   173,    -1,    -1,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,    -1,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
      -1,   201,   202,    -1,   204,    -1,   206,   207,   208,   209,
      -1,    -1,   212,   213,    -1,    -1,   216,   217,    -1,    -1,
     220,    -1,    -1,   223,   224,   225,   226,    -1,   228,   229,
     230,   231,   232,    -1,   234,   235,   236,   237,   238,   239,
     240,   241,    -1,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,    -1,   266,   267,   268,    -1,
     270,   271,   272,   273,    -1,   275,   276,    -1,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,    -1,   289,
     290,   291,   292,   293,   294,   295,    -1,   297,   298,    -1,
     300,    -1,   302,   303,   304,   305,    -1,   307,   308,   309,
     310,   311,    -1,    -1,   314,   315,   316,   317,    -1,    -1,
     320,   321,   322,   323,   324,   325,    -1,   327,   328,    -1,
      -1,   331,   332,   333,   334,   335,   336,    -1,   338,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
      44,    -1,    46,    47,    48,    49,    -1,    -1,    -1,    53,
      54,    55,    56,    -1,    58,    59,    -1,    61,    -1,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    85,    86,    87,    88,    -1,    90,    -1,    -1,    93,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,    -1,
     104,   105,   106,    -1,   108,   109,    -1,    -1,   112,   113,
     114,    -1,   116,    -1,   118,   119,    -1,   121,   122,   123,
      -1,   125,    -1,    -1,   128,    -1,   130,   131,   132,   133,
     134,   135,   136,    -1,   138,   139,   140,   141,   142,    -1,
     144,    -1,   146,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,    -1,    -1,   167,   168,   169,    -1,   171,   172,   173,
      -1,    -1,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,    -1,   191,   192,   193,
     194,   195,   196,   197,    -1,   199,    -1,   201,   202,   203,
     204,    -1,    -1,   207,   208,   209,    -1,    -1,   212,    -1,
      -1,    -1,   216,   217,    -1,    -1,    -1,   221,   222,    -1,
     224,   225,   226,    -1,    -1,    -1,   230,   231,   232,    -1,
     234,   235,   236,   237,   238,   239,   240,   241,    -1,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,    -1,   258,   259,   260,   261,   262,   263,
     264,    -1,   266,   267,   268,    -1,   270,   271,   272,   273,
     274,   275,   276,    -1,   278,   279,   280,   281,   282,   283,
     284,   285,    -1,   287,    -1,   289,   290,    -1,   292,   293,
     294,   295,    -1,   297,   298,    -1,   300,    -1,   302,    -1,
     304,    -1,    -1,   307,   308,   309,   310,   311,    -1,    -1,
     314,   315,   316,   317,    -1,    -1,   320,   321,   322,   323,
     324,   325,   326,   327,   328,    -1,    -1,   331,   332,   333,
     334,   335,   336,    -1,   338,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    -1,    24,    -1,    26,    27,
      28,    -1,    30,    -1,    32,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,    44,    -1,    46,    47,
      48,    49,    50,    -1,    -1,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    -1,    84,    85,    86,    87,
      88,    -1,    90,    -1,    -1,    93,    94,    95,    96,    -1,
      98,    99,   100,    -1,   102,    -1,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,   116,    -1,
     118,    -1,    -1,    -1,   122,   123,    -1,   125,   126,    -1,
     128,    -1,   130,   131,   132,    -1,   134,   135,   136,    -1,
     138,   139,   140,   141,   142,    -1,    -1,   145,   146,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,    -1,    -1,
     158,    -1,   160,   161,   162,   163,   164,    -1,   166,    -1,
     168,    -1,    -1,   171,   172,   173,    -1,    -1,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
      -1,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,    -1,   201,   202,    -1,   204,    -1,   206,   207,
     208,   209,    -1,    -1,   212,   213,    -1,    -1,   216,   217,
      -1,    -1,   220,    -1,    -1,   223,   224,   225,   226,    -1,
     228,   229,   230,   231,   232,    -1,   234,   235,   236,   237,
     238,   239,   240,   241,    -1,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,    -1,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,    -1,   266,   267,
     268,    -1,   270,   271,   272,   273,    -1,   275,   276,    -1,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
      -1,   289,   290,    -1,   292,   293,   294,   295,    -1,   297,
     298,    -1,   300,    -1,   302,   303,   304,   305,    -1,   307,
     308,   309,   310,   311,    -1,    -1,   314,   315,   316,   317,
      -1,    -1,   320,   321,   322,   323,   324,   325,    -1,   327,
     328,    -1,    -1,   331,   332,   333,   334,   335,   336,    -1,
     338,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    -1,    24,    -1,    26,    27,    28,    -1,    30,    -1,
      32,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,    44,    -1,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      -1,    63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    -1,    84,    85,    86,    87,    88,    -1,    90,    -1,
      -1,    93,    94,    95,    96,    -1,    98,    99,   100,    -1,
     102,    -1,   104,   105,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,    -1,
     122,   123,    -1,   125,   126,    -1,   128,    -1,   130,   131,
     132,    -1,   134,   135,   136,    -1,   138,   139,   140,   141,
     142,    -1,    -1,   145,   146,   147,   148,   149,   150,   151,
      -1,   153,    -1,   155,    -1,    -1,   158,    -1,   160,   161,
     162,   163,   164,    -1,   166,    -1,   168,    -1,    -1,   171,
     172,   173,    -1,    -1,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    -1,   189,    -1,   191,
     192,   193,   194,   195,   196,   197,   198,   199,    -1,   201,
     202,    -1,   204,    -1,   206,   207,   208,   209,    -1,    -1,
     212,    -1,    -1,    -1,   216,   217,    -1,    -1,   220,    -1,
      -1,   223,   224,   225,   226,    -1,   228,   229,   230,   231,
     232,    -1,   234,   235,   236,   237,   238,   239,   240,   241,
      -1,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,    -1,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,    -1,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,    -1,   289,   290,    -1,
     292,   293,   294,   295,    -1,   297,   298,    -1,   300,    -1,
     302,   303,   304,   305,    -1,   307,   308,   309,   310,   311,
      -1,    -1,   314,   315,   316,   317,   318,    -1,   320,   321,
     322,   323,   324,   325,    -1,   327,   328,    -1,    -1,   331,
     332,   333,   334,   335,   336,    -1,   338,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    24,    -1,
      26,    27,    28,    -1,    30,    -1,    32,    33,    -1,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,    44,    -1,
      46,    47,    48,    49,    50,    -1,    -1,    53,    54,    55,
      56,    -1,    58,    59,    60,    61,    -1,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    -1,    84,    85,
      86,    87,    88,    -1,    90,    -1,    -1,    93,    94,    95,
      96,    -1,    98,    99,   100,    -1,   102,    -1,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
     116,    -1,   118,    -1,    -1,    -1,   122,   123,    -1,   125,
     126,    -1,   128,    -1,   130,   131,   132,    -1,   134,   135,
     136,    -1,   138,   139,   140,   141,   142,    -1,    -1,   145,
     146,   147,   148,   149,   150,   151,    -1,   153,    -1,   155,
      -1,    -1,   158,    -1,   160,   161,   162,   163,   164,    -1,
     166,    -1,   168,    -1,    -1,   171,   172,   173,    -1,    -1,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,    -1,   189,    -1,   191,   192,   193,   194,   195,
     196,   197,   198,   199,    -1,   201,   202,    -1,   204,    -1,
     206,   207,   208,   209,    -1,    -1,   212,    -1,    -1,    -1,
     216,   217,    -1,    -1,   220,    -1,    -1,   223,   224,   225,
     226,    -1,   228,   229,   230,   231,   232,    -1,   234,   235,
     236,   237,   238,   239,   240,   241,    -1,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,    -1,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,    -1,
     266,   267,   268,    -1,   270,   271,   272,   273,    -1,   275,
     276,    -1,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,    -1,   289,   290,    -1,   292,   293,   294,   295,
      -1,   297,   298,    -1,   300,    -1,   302,   303,   304,   305,
      -1,   307,   308,   309,   310,   311,    -1,    -1,   314,   315,
     316,   317,   318,    -1,   320,   321,   322,   323,   324,   325,
      -1,   327,   328,    -1,    -1,   331,   332,   333,   334,   335,
     336,    -1,   338,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    -1,    24,    -1,    26,    27,    28,    -1,
      30,    -1,    32,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,    44,    -1,    46,    47,    48,    49,
      50,    -1,    -1,    53,    54,    55,    56,    -1,    58,    59,
      60,    61,    -1,    63,    64,    65,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    -1,    84,    85,    86,    87,    88,    -1,
      90,    -1,    -1,    93,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,    -1,   104,   105,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,    -1,   116,    -1,   118,    -1,
      -1,    -1,   122,   123,    -1,   125,   126,    -1,   128,    -1,
     130,   131,   132,    -1,   134,   135,   136,    -1,   138,   139,
     140,   141,   142,    -1,    -1,   145,   146,   147,   148,   149,
     150,   151,    -1,   153,    -1,   155,    -1,    -1,   158,    -1,
     160,   161,   162,   163,   164,    -1,   166,    -1,   168,    -1,
      -1,   171,   172,   173,    -1,    -1,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,    -1,   189,
      -1,   191,   192,   193,   194,   195,   196,   197,   198,   199,
      -1,   201,   202,    -1,   204,    -1,   206,   207,   208,   209,
      -1,    -1,   212,    -1,    -1,    -1,   216,   217,    -1,    -1,
     220,    -1,    -1,   223,   224,   225,   226,    -1,   228,   229,
     230,   231,   232,    -1,   234,   235,   236,   237,   238,   239,
     240,   241,    -1,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,    -1,   266,   267,   268,    -1,
     270,   271,   272,   273,    -1,   275,   276,    -1,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,    -1,   289,
     290,    -1,   292,   293,   294,   295,    -1,   297,   298,    -1,
     300,    -1,   302,   303,   304,   305,    -1,   307,   308,   309,
     310,   311,    -1,    -1,   314,   315,   316,   317,    -1,    -1,
     320,   321,   322,   323,   324,   325,    -1,   327,   328,    -1,
      -1,   331,   332,   333,   334,   335,   336,    -1,   338,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,
      24,    -1,    26,    27,    28,    -1,    30,    -1,    32,    33,
      -1,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
      44,    -1,    46,    47,    48,    49,    50,    -1,    -1,    53,
      54,    55,    56,    -1,    58,    59,    60,    61,    -1,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    85,    86,    87,    88,    -1,    90,    -1,    -1,    93,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,    -1,
     104,   105,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,    -1,   116,    -1,   118,    -1,    -1,    -1,   122,   123,
      -1,   125,   126,    -1,   128,    -1,   130,   131,   132,    -1,
     134,   135,   136,    -1,   138,   139,   140,   141,   142,    -1,
      -1,   145,   146,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,    -1,    -1,   158,    -1,   160,   161,   162,   163,
     164,    -1,   166,    -1,   168,    -1,    -1,   171,   172,   173,
      -1,    -1,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,    -1,   189,    -1,   191,   192,   193,
     194,   195,   196,   197,   198,   199,    -1,   201,   202,    -1,
     204,    -1,   206,   207,   208,   209,    -1,    -1,   212,    -1,
      -1,    -1,   216,   217,    -1,    -1,   220,    -1,    -1,   223,
     224,   225,   226,    -1,   228,   229,   230,   231,   232,    -1,
     234,   235,   236,   237,   238,   239,   240,   241,    -1,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
      -1,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,    -1,   266,   267,   268,    -1,   270,   271,   272,   273,
      -1,   275,   276,    -1,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,    -1,   289,   290,    -1,   292,   293,
     294,   295,    -1,   297,   298,    -1,   300,    -1,   302,   303,
     304,   305,    -1,   307,   308,   309,   310,   311,    -1,    -1,
     314,   315,   316,   317,    -1,    -1,   320,   321,   322,   323,
     324,   325,    -1,   327,   328,    -1,    -1,   331,   332,   333,
     334,   335,   336,    -1,   338,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    -1,    24,    -1,    26,    27,
      28,    -1,    30,    -1,    32,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,    44,    -1,    46,    47,
      48,    49,    50,    -1,    -1,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    -1,    84,    85,    86,    87,
      88,    -1,    90,    -1,    -1,    93,    94,    95,    96,    -1,
      98,    99,   100,    -1,   102,    -1,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,   116,    -1,
     118,    -1,    -1,    -1,   122,   123,    -1,   125,   126,    -1,
     128,    -1,   130,   131,   132,    -1,   134,   135,   136,    -1,
     138,   139,   140,   141,   142,    -1,    -1,   145,   146,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,    -1,    -1,
     158,    -1,   160,   161,   162,   163,   164,    -1,   166,    -1,
     168,    -1,    -1,   171,   172,   173,    -1,    -1,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
      -1,   189,    -1,   191,   192,   193,   194,   195,   196,   197,
     198,   199,    -1,   201,   202,    -1,   204,    -1,   206,   207,
     208,   209,    -1,    -1,   212,    -1,    -1,    -1,   216,   217,
      -1,    -1,   220,    -1,    -1,   223,   224,   225,   226,    -1,
     228,   229,   230,   231,   232,    -1,   234,   235,   236,   237,
     238,   239,   240,   241,    -1,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,    -1,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,    -1,   266,   267,
     268,    -1,   270,   271,   272,   273,    -1,   275,   276,    -1,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
      -1,   289,   290,    -1,   292,   293,   294,   295,    -1,   297,
     298,    -1,   300,    -1,   302,   303,   304,   305,    -1,   307,
     308,   309,   310,   311,    -1,    -1,   314,   315,   316,   317,
      -1,    -1,   320,   321,   322,   323,   324,   325,    -1,   327,
     328,    -1,    -1,   331,   332,   333,   334,   335,   336,    -1,
     338,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    -1,    24,    25,    26,    27,    28,    -1,    30,    -1,
      32,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,    44,    -1,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      -1,    63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    -1,    84,    85,    86,    87,    88,    -1,    90,    -1,
      -1,    93,    94,    95,    96,    -1,    98,    99,   100,    -1,
     102,    -1,   104,   105,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,    -1,
     122,   123,    -1,   125,   126,    -1,   128,    -1,   130,   131,
     132,    -1,   134,   135,   136,    -1,   138,   139,   140,   141,
     142,    -1,    -1,   145,   146,   147,   148,   149,   150,   151,
      -1,   153,    -1,   155,    -1,    -1,   158,    -1,   160,   161,
     162,   163,   164,    -1,   166,    -1,   168,    -1,    -1,   171,
     172,   173,    -1,    -1,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    -1,   189,    -1,   191,
     192,   193,   194,   195,   196,   197,   198,   199,    -1,   201,
     202,    -1,   204,    -1,   206,   207,   208,   209,    -1,    -1,
     212,    -1,    -1,    -1,   216,   217,    -1,    -1,   220,    -1,
      -1,   223,   224,   225,   226,    -1,   228,   229,   230,   231,
     232,    -1,   234,   235,   236,   237,   238,   239,   240,   241,
      -1,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,    -1,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,    -1,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,    -1,   289,   290,    -1,
     292,   293,   294,   295,    -1,   297,   298,    -1,   300,    -1,
     302,   303,   304,   305,    -1,   307,   308,   309,   310,   311,
      -1,    -1,   314,   315,   316,   317,    -1,    -1,   320,   321,
     322,   323,   324,   325,    -1,   327,   328,    -1,    -1,   331,
     332,   333,   334,   335,   336,    -1,   338,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    21,    22,    -1,    24,    -1,
      26,    27,    28,    -1,    30,    -1,    32,    33,    -1,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,    44,    -1,
      46,    47,    48,    49,    50,    -1,    -1,    53,    54,    55,
      56,    -1,    58,    59,    60,    61,    -1,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    -1,    84,    85,
      86,    87,    88,    -1,    90,    -1,    -1,    93,    94,    95,
      96,    -1,    98,    99,   100,    -1,   102,    -1,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
     116,    -1,   118,    -1,    -1,    -1,   122,   123,    -1,   125,
     126,    -1,   128,    -1,   130,   131,   132,    -1,   134,   135,
     136,    -1,   138,   139,   140,   141,   142,    -1,    -1,   145,
     146,   147,   148,   149,   150,   151,    -1,   153,    -1,   155,
      -1,    -1,   158,    -1,   160,   161,   162,   163,   164,    -1,
     166,    -1,   168,    -1,    -1,   171,   172,   173,    -1,    -1,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,    -1,   189,    -1,   191,   192,   193,   194,   195,
     196,   197,   198,   199,    -1,   201,   202,    -1,   204,    -1,
     206,   207,   208,   209,    -1,    -1,   212,    -1,    -1,    -1,
     216,   217,    -1,    -1,   220,    -1,    -1,   223,   224,   225,
     226,    -1,   228,   229,   230,   231,   232,    -1,   234,   235,
     236,   237,   238,   239,   240,   241,    -1,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,    -1,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,    -1,
     266,   267,   268,    -1,   270,   271,   272,   273,    -1,   275,
     276,    -1,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,    -1,   289,   290,    -1,   292,   293,   294,   295,
      -1,   297,   298,    -1,   300,    -1,   302,   303,   304,   305,
      -1,   307,   308,   309,   310,   311,    -1,    -1,   314,   315,
     316,   317,    -1,    -1,   320,   321,   322,   323,   324,   325,
      -1,   327,   328,    -1,    -1,   331,   332,   333,   334,   335,
     336,    -1,   338,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    21,    22,    -1,    24,    -1,    26,    27,    28,    -1,
      30,    -1,    32,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,    44,    -1,    46,    47,    48,    49,
      50,    -1,    -1,    53,    54,    55,    56,    -1,    58,    59,
      60,    61,    -1,    63,    64,    65,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    -1,    84,    85,    86,    87,    88,    -1,
      90,    -1,    -1,    93,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,    -1,   104,   105,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,    -1,   116,    -1,   118,    -1,
      -1,    -1,   122,   123,    -1,   125,   126,    -1,   128,    -1,
     130,   131,   132,    -1,   134,   135,   136,    -1,   138,   139,
     140,   141,   142,    -1,    -1,   145,   146,   147,   148,   149,
     150,   151,    -1,   153,    -1,   155,    -1,    -1,   158,    -1,
     160,   161,   162,   163,   164,    -1,   166,    -1,   168,    -1,
      -1,   171,   172,   173,    -1,    -1,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,    -1,   189,
      -1,   191,   192,   193,   194,   195,   196,   197,   198,   199,
      -1,   201,   202,    -1,   204,    -1,   206,   207,   208,   209,
      -1,    -1,   212,    -1,    -1,    -1,   216,   217,    -1,    -1,
     220,    -1,    -1,   223,   224,   225,   226,    -1,   228,   229,
     230,   231,   232,    -1,   234,   235,   236,   237,   238,   239,
     240,   241,    -1,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,    -1,   266,   267,   268,    -1,
     270,   271,   272,   273,    -1,   275,   276,    -1,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,    -1,   289,
     290,    -1,   292,   293,   294,   295,    -1,   297,   298,    -1,
     300,    -1,   302,   303,   304,   305,    -1,   307,   308,   309,
     310,   311,    -1,    -1,   314,   315,   316,   317,    -1,    -1,
     320,   321,   322,   323,   324,   325,    -1,   327,   328,    -1,
      -1,   331,   332,   333,   334,   335,   336,    -1,   338,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,
      24,    -1,    26,    27,    28,    -1,    30,    -1,    32,    33,
      -1,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
      44,    -1,    46,    47,    48,    49,    50,    -1,    -1,    53,
      54,    55,    56,    -1,    58,    59,    60,    61,    -1,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    85,    86,    87,    88,    -1,    90,    -1,    -1,    93,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,    -1,
     104,   105,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,    -1,   116,    -1,   118,    -1,    -1,    -1,   122,   123,
      -1,   125,   126,   127,   128,    -1,   130,   131,   132,    -1,
     134,   135,   136,    -1,   138,   139,   140,   141,   142,    -1,
      -1,   145,   146,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,    -1,    -1,   158,    -1,   160,   161,   162,   163,
     164,    -1,   166,    -1,   168,    -1,    -1,   171,   172,   173,
      -1,    -1,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,    -1,   189,    -1,   191,   192,   193,
     194,   195,   196,   197,   198,   199,    -1,   201,   202,    -1,
     204,    -1,   206,   207,   208,   209,    -1,    -1,   212,    -1,
      -1,    -1,   216,   217,    -1,    -1,   220,    -1,    -1,   223,
     224,   225,   226,    -1,   228,   229,   230,   231,   232,    -1,
     234,   235,   236,   237,   238,   239,   240,   241,    -1,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
      -1,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,    -1,   266,   267,   268,    -1,   270,   271,   272,   273,
      -1,   275,   276,    -1,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,    -1,   289,   290,    -1,   292,   293,
     294,   295,    -1,   297,   298,    -1,   300,    -1,   302,   303,
     304,   305,    -1,   307,   308,   309,   310,   311,    -1,    -1,
     314,   315,   316,   317,    -1,    -1,   320,   321,   322,   323,
     324,   325,    -1,   327,   328,    -1,    -1,   331,   332,   333,
     334,   335,   336,    -1,   338,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    -1,    24,    -1,    26,    27,
      28,    -1,    30,    -1,    32,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,    44,    -1,    46,    47,
      48,    49,    50,    -1,    -1,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    -1,    84,    85,    86,    87,
      88,    -1,    90,    -1,    -1,    93,    94,    95,    96,    -1,
      98,    99,   100,    -1,   102,    -1,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,   116,    -1,
     118,    -1,    -1,    -1,   122,   123,    -1,   125,   126,    -1,
     128,    -1,   130,   131,   132,    -1,   134,   135,   136,    -1,
     138,   139,   140,   141,   142,    -1,    -1,   145,   146,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,    -1,    -1,
     158,    -1,   160,   161,   162,   163,   164,    -1,   166,    -1,
     168,    -1,    -1,   171,   172,   173,    -1,    -1,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
      -1,   189,    -1,   191,   192,   193,   194,   195,   196,   197,
     198,   199,    -1,   201,   202,    -1,   204,    -1,   206,   207,
     208,   209,    -1,    -1,   212,    -1,    -1,    -1,   216,   217,
      -1,    -1,   220,    -1,    -1,   223,   224,   225,   226,    -1,
     228,   229,   230,   231,   232,    -1,   234,   235,   236,   237,
     238,   239,   240,   241,    -1,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,    -1,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,    -1,   266,   267,
     268,    -1,   270,   271,   272,   273,    -1,   275,   276,    -1,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
      -1,   289,   290,    -1,   292,   293,   294,   295,    -1,   297,
     298,    -1,   300,    -1,   302,   303,   304,   305,    -1,   307,
     308,   309,   310,   311,    -1,    -1,   314,   315,   316,   317,
      -1,    -1,   320,   321,   322,   323,   324,   325,    -1,   327,
     328,    -1,    -1,   331,   332,   333,   334,   335,   336,    -1,
     338,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    -1,    24,    -1,    26,    27,    28,    -1,    30,    -1,
      32,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,    44,    -1,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      -1,    63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    84,    85,    86,    87,    88,    -1,    90,    -1,
      -1,    93,    94,    95,    96,    -1,    98,    99,   100,    -1,
     102,    -1,   104,   105,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,    -1,
     122,   123,    -1,   125,   126,    -1,   128,    -1,   130,   131,
     132,    -1,   134,   135,   136,    -1,   138,   139,   140,   141,
     142,    -1,    -1,   145,   146,   147,   148,   149,   150,   151,
      -1,   153,    -1,   155,    -1,    -1,   158,    -1,   160,   161,
     162,   163,   164,    -1,   166,    -1,   168,    -1,    -1,   171,
     172,   173,    -1,    -1,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    -1,   189,    -1,   191,
     192,   193,   194,   195,   196,   197,   198,   199,    -1,   201,
     202,    -1,   204,    -1,   206,   207,   208,   209,    -1,    -1,
     212,    -1,    -1,    -1,   216,   217,    -1,    -1,   220,    -1,
      -1,   223,   224,   225,   226,    -1,   228,   229,   230,   231,
     232,    -1,   234,   235,   236,   237,   238,   239,   240,   241,
      -1,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,    -1,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,    -1,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,    -1,   289,   290,    -1,
     292,   293,   294,   295,    -1,   297,   298,    -1,   300,    -1,
     302,   303,   304,   305,    -1,   307,   308,   309,   310,   311,
      -1,    -1,   314,   315,   316,   317,    -1,    -1,   320,   321,
     322,   323,   324,   325,    -1,   327,   328,    -1,    -1,   331,
     332,   333,   334,   335,   336,    -1,   338,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    24,    -1,
      26,    27,    28,    -1,    30,    -1,    32,    33,    -1,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,    44,    -1,
      46,    47,    48,    49,    50,    -1,    -1,    53,    54,    55,
      56,    -1,    58,    59,    60,    61,    -1,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    -1,    84,    85,
      86,    87,    88,    -1,    90,    -1,    -1,    93,    94,    95,
      96,    -1,    98,    99,   100,    -1,   102,    -1,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
     116,    -1,   118,    -1,    -1,    -1,   122,   123,    -1,   125,
     126,    -1,   128,    -1,   130,   131,   132,    -1,   134,   135,
     136,    -1,   138,   139,   140,   141,   142,    -1,    -1,   145,
     146,   147,   148,   149,   150,   151,    -1,   153,    -1,   155,
      -1,    -1,   158,    -1,   160,   161,   162,   163,   164,    -1,
     166,    -1,   168,    -1,    -1,   171,   172,   173,    -1,    -1,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,    -1,   189,    -1,   191,   192,   193,   194,   195,
     196,   197,   198,   199,    -1,   201,   202,    -1,   204,    -1,
     206,   207,   208,   209,    -1,    -1,   212,    -1,    -1,    -1,
     216,   217,    -1,    -1,   220,    -1,    -1,   223,   224,   225,
     226,    -1,   228,   229,   230,   231,   232,    -1,   234,   235,
     236,   237,   238,   239,   240,   241,    -1,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,    -1,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,    -1,
     266,   267,   268,    -1,   270,   271,   272,   273,    -1,   275,
     276,    -1,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,    -1,   289,   290,    -1,   292,   293,   294,   295,
      -1,   297,   298,    -1,   300,    -1,   302,   303,   304,   305,
      -1,   307,   308,   309,   310,   311,    -1,    -1,   314,   315,
     316,   317,    -1,    -1,   320,   321,   322,   323,   324,   325,
      -1,   327,   328,    -1,    -1,   331,   332,   333,   334,   335,
     336,    -1,   338,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    -1,    24,    -1,    26,    27,    28,    -1,
      30,    -1,    32,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,    44,    -1,    46,    47,    48,    49,
      50,    -1,    -1,    53,    54,    55,    56,    -1,    58,    59,
      60,    61,    -1,    63,    64,    65,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    -1,    84,    85,    86,    87,    88,    -1,
      90,    -1,    -1,    93,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,    -1,   104,   105,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,    -1,   116,    -1,   118,    -1,
      -1,    -1,   122,   123,    -1,   125,   126,    -1,   128,    -1,
     130,   131,   132,    -1,   134,   135,   136,    -1,   138,   139,
     140,   141,   142,    -1,    -1,   145,   146,   147,   148,   149,
     150,   151,    -1,   153,    -1,   155,    -1,    -1,   158,    -1,
     160,   161,   162,   163,   164,    -1,   166,    -1,   168,    -1,
      -1,   171,   172,   173,    -1,    -1,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,    -1,   189,
      -1,   191,   192,   193,   194,   195,   196,   197,   198,   199,
      -1,   201,   202,    -1,   204,    -1,   206,   207,   208,   209,
      -1,    -1,   212,    -1,    -1,    -1,   216,   217,    -1,    -1,
     220,    -1,    -1,   223,   224,   225,   226,    -1,   228,   229,
     230,   231,   232,    -1,   234,   235,   236,   237,   238,   239,
     240,   241,    -1,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,    -1,   266,   267,   268,    -1,
     270,   271,   272,   273,    -1,   275,   276,    -1,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,    -1,   289,
     290,    -1,   292,   293,   294,   295,    -1,   297,   298,    -1,
     300,    -1,   302,   303,   304,   305,    -1,   307,   308,   309,
     310,   311,    -1,    -1,   314,   315,   316,   317,    -1,   319,
     320,   321,   322,   323,   324,   325,    -1,   327,   328,    -1,
      -1,   331,   332,   333,   334,   335,   336,    -1,   338,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,
      24,    -1,    26,    27,    28,    -1,    30,    -1,    32,    33,
      -1,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
      44,    -1,    46,    47,    48,    49,    50,    -1,    -1,    53,
      54,    55,    56,    -1,    58,    59,    60,    61,    -1,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    85,    86,    87,    88,    -1,    90,    -1,    -1,    93,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,    -1,
     104,   105,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,    -1,   116,    -1,   118,    -1,    -1,    -1,   122,   123,
      -1,   125,   126,    -1,   128,    -1,   130,   131,   132,    -1,
     134,   135,   136,    -1,   138,   139,   140,   141,   142,    -1,
      -1,   145,   146,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,    -1,    -1,   158,    -1,   160,   161,   162,   163,
     164,    -1,   166,    -1,   168,    -1,    -1,   171,   172,   173,
      -1,    -1,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,    -1,   189,    -1,   191,   192,   193,
     194,   195,   196,   197,   198,   199,    -1,   201,   202,    -1,
     204,    -1,   206,   207,   208,   209,    -1,    -1,   212,    -1,
      -1,    -1,   216,   217,    -1,    -1,   220,    -1,    -1,   223,
     224,   225,   226,    -1,   228,   229,   230,   231,   232,    -1,
     234,   235,   236,   237,   238,   239,   240,   241,    -1,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
      -1,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,    -1,   266,   267,   268,    -1,   270,   271,   272,   273,
      -1,   275,   276,    -1,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,    -1,   289,   290,    -1,   292,   293,
     294,   295,    -1,   297,   298,    -1,   300,    -1,   302,   303,
     304,   305,    -1,   307,   308,   309,   310,   311,    -1,    -1,
     314,   315,   316,   317,    -1,    -1,   320,   321,   322,   323,
     324,   325,    -1,   327,   328,    -1,    -1,   331,   332,   333,
     334,   335,   336,    -1,   338,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    -1,    24,    -1,    26,    27,
      28,    -1,    30,    -1,    32,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,    44,    -1,    46,    47,
      48,    49,    50,    -1,    -1,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    -1,    84,    85,    86,    87,
      88,    -1,    90,    -1,    -1,    93,    94,    95,    96,    -1,
      98,    99,   100,    -1,   102,    -1,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,   116,    -1,
     118,    -1,    -1,    -1,   122,   123,    -1,   125,   126,    -1,
     128,    -1,   130,   131,   132,    -1,   134,   135,   136,    -1,
     138,   139,   140,   141,   142,    -1,    -1,   145,   146,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,    -1,    -1,
     158,    -1,   160,   161,   162,   163,   164,    -1,   166,    -1,
     168,    -1,    -1,   171,   172,   173,    -1,    -1,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
      -1,   189,    -1,   191,   192,   193,   194,   195,   196,   197,
     198,   199,    -1,   201,   202,    -1,   204,    -1,   206,   207,
     208,   209,    -1,    -1,   212,    -1,    -1,    -1,   216,   217,
      -1,    -1,   220,    -1,    -1,   223,   224,   225,   226,    -1,
     228,   229,   230,   231,   232,    -1,   234,   235,   236,   237,
     238,   239,   240,   241,    -1,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,    -1,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,    -1,   266,   267,
     268,    -1,   270,   271,   272,   273,    -1,   275,   276,    -1,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
      -1,   289,   290,    -1,   292,   293,   294,   295,    -1,   297,
     298,    -1,   300,    -1,   302,   303,   304,   305,    -1,   307,
     308,   309,   310,   311,    -1,    -1,   314,   315,   316,   317,
      -1,    -1,   320,   321,   322,   323,   324,   325,    -1,   327,
     328,    -1,    -1,   331,   332,   333,   334,   335,   336,    -1,
     338,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    -1,    24,    -1,    26,    27,    28,    -1,    30,    -1,
      32,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,    44,    -1,    46,    47,    48,    49,    50,    -1,
      -1,    53,    54,    55,    56,    -1,    58,    59,    60,    61,
      -1,    63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    -1,    84,    85,    86,    87,    88,    -1,    90,    -1,
      -1,    93,    94,    95,    96,    -1,    98,    99,   100,    -1,
     102,    -1,   104,   105,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,    -1,
     122,   123,    -1,   125,   126,    -1,   128,    -1,   130,   131,
     132,    -1,   134,   135,   136,    -1,   138,   139,   140,   141,
     142,    -1,    -1,   145,   146,   147,   148,   149,   150,   151,
      -1,   153,    -1,   155,    -1,    -1,   158,    -1,   160,   161,
     162,   163,   164,    -1,   166,    -1,   168,    -1,    -1,   171,
     172,   173,    -1,    -1,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    -1,   189,    -1,   191,
     192,   193,   194,   195,   196,   197,   198,   199,    -1,   201,
     202,    -1,   204,    -1,   206,   207,   208,   209,    -1,    -1,
     212,    -1,    -1,    -1,   216,   217,    -1,    -1,   220,    -1,
      -1,   223,   224,   225,   226,    -1,   228,   229,   230,   231,
     232,    -1,   234,   235,   236,   237,   238,   239,   240,   241,
      -1,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,    -1,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,    -1,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,    -1,   289,   290,    -1,
     292,   293,   294,   295,    -1,   297,   298,    -1,   300,    -1,
     302,   303,   304,   305,    -1,   307,   308,   309,   310,   311,
      -1,    -1,   314,   315,   316,   317,    -1,    -1,   320,   321,
     322,   323,   324,   325,    -1,   327,   328,    -1,    -1,   331,
     332,   333,   334,   335,   336,    -1,   338,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    24,    -1,
      26,    27,    28,    -1,    30,    -1,    32,    33,    -1,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,    44,    -1,
      46,    47,    48,    49,    50,    -1,    -1,    53,    54,    55,
      56,    -1,    58,    59,    60,    61,    -1,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    -1,    84,    85,
      86,    87,    88,    -1,    90,    -1,    -1,    93,    94,    95,
      96,    -1,    98,    99,   100,    -1,   102,    -1,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
     116,    -1,   118,    -1,    -1,    -1,   122,   123,    -1,   125,
     126,    -1,   128,    -1,   130,   131,   132,    -1,   134,   135,
     136,    -1,   138,   139,   140,   141,   142,    -1,    -1,   145,
     146,   147,   148,   149,   150,   151,    -1,   153,    -1,   155,
      -1,    -1,   158,    -1,   160,   161,   162,   163,   164,    -1,
     166,    -1,   168,    -1,    -1,   171,   172,   173,    -1,    -1,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,    -1,   189,    -1,   191,   192,   193,   194,   195,
     196,   197,   198,   199,    -1,   201,   202,    -1,   204,    -1,
     206,   207,   208,   209,    -1,    -1,   212,    -1,    -1,    -1,
     216,   217,    -1,    -1,   220,    -1,    -1,   223,   224,   225,
     226,    -1,   228,   229,   230,   231,   232,    -1,   234,   235,
     236,   237,   238,   239,   240,   241,    -1,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,    -1,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,    -1,
     266,   267,   268,    -1,   270,   271,   272,   273,    -1,   275,
     276,    -1,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,    -1,   289,   290,    -1,   292,   293,   294,   295,
      -1,   297,   298,    -1,   300,    -1,   302,   303,   304,   305,
      -1,   307,   308,   309,   310,   311,    -1,    -1,   314,   315,
     316,   317,    -1,    -1,   320,   321,   322,   323,   324,   325,
      -1,   327,   328,    -1,    -1,   331,   332,   333,   334,   335,
     336,    -1,   338,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    -1,    24,    -1,    26,    27,    28,    -1,
      30,    -1,    32,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,    44,    -1,    46,    47,    48,    49,
      50,    -1,    -1,    53,    54,    55,    56,    -1,    58,    59,
      60,    61,    -1,    63,    64,    65,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    -1,    84,    85,    86,    87,    88,    -1,
      90,    -1,    -1,    93,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,    -1,   104,   105,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,    -1,   116,    -1,   118,    -1,
      -1,    -1,   122,   123,    -1,   125,   126,    -1,   128,    -1,
     130,   131,   132,    -1,   134,   135,   136,    -1,   138,   139,
     140,   141,   142,    -1,    -1,   145,   146,   147,   148,   149,
     150,   151,    -1,   153,    -1,   155,    -1,    -1,   158,    -1,
     160,   161,   162,   163,   164,    -1,   166,    -1,   168,    -1,
      -1,   171,   172,   173,    -1,    -1,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,    -1,   189,
      -1,   191,   192,   193,   194,   195,   196,   197,   198,   199,
      -1,   201,   202,    -1,   204,    -1,   206,   207,   208,   209,
      -1,    -1,   212,    -1,    -1,    -1,   216,   217,    -1,    -1,
     220,    -1,    -1,   223,   224,   225,   226,    -1,   228,   229,
     230,   231,   232,    -1,   234,   235,   236,   237,   238,   239,
     240,   241,    -1,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,    -1,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,    -1,   266,   267,   268,    -1,
     270,   271,   272,   273,    -1,   275,   276,    -1,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,    -1,   289,
     290,    -1,   292,   293,   294,   295,    -1,   297,   298,    -1,
     300,    -1,   302,   303,   304,   305,    -1,   307,   308,   309,
     310,   311,    -1,    -1,   314,   315,   316,   317,    -1,    -1,
     320,   321,   322,   323,   324,   325,    -1,   327,   328,    -1,
      -1,   331,   332,   333,   334,   335,   336,    -1,   338,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,
      24,    -1,    26,    27,    28,    -1,    30,    -1,    32,    33,
      -1,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
      44,    -1,    46,    47,    48,    49,    50,    -1,    -1,    53,
      54,    55,    56,    -1,    58,    59,    60,    61,    -1,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    85,    86,    87,    88,    -1,    90,    -1,    -1,    93,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,    -1,
     104,   105,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,    -1,   116,    -1,   118,    -1,    -1,    -1,   122,   123,
      -1,   125,   126,    -1,   128,    -1,   130,   131,   132,    -1,
     134,   135,   136,    -1,   138,   139,   140,   141,   142,    -1,
      -1,   145,   146,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,    -1,    -1,   158,    -1,   160,   161,   162,   163,
     164,    -1,   166,    -1,   168,    -1,    -1,   171,   172,   173,
      -1,    -1,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,    -1,   189,    -1,   191,   192,   193,
     194,   195,   196,   197,   198,   199,    -1,   201,   202,    -1,
     204,    -1,   206,   207,   208,   209,    -1,    -1,   212,    -1,
      -1,    -1,   216,   217,    -1,    -1,   220,    -1,    -1,   223,
     224,   225,   226,    -1,   228,   229,   230,   231,   232,    -1,
     234,   235,   236,   237,   238,   239,   240,   241,    -1,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
      -1,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,    -1,   266,   267,   268,    -1,   270,   271,   272,   273,
      -1,   275,   276,    -1,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,    -1,   289,   290,    -1,   292,   293,
     294,   295,    -1,   297,   298,    -1,   300,    -1,   302,   303,
     304,   305,    -1,   307,   308,   309,   310,   311,    -1,    -1,
     314,   315,   316,   317,    -1,    -1,   320,   321,   322,   323,
     324,   325,    -1,   327,   328,    -1,    -1,   331,   332,   333,
     334,   335,   336,    -1,   338,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    -1,    24,    -1,    26,    27,
      28,    -1,    30,    -1,    32,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,    44,    -1,    46,    47,
      48,    49,    50,    -1,    -1,    53,    54,    55,    56,    -1,
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    -1,    84,    85,    86,    87,
      88,    -1,    90,    -1,    -1,    93,    94,    95,    96,    -1,
      98,    99,   100,    -1,   102,    -1,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,   116,    -1,
     118,    -1,    -1,    -1,   122,   123,    -1,   125,   126,    -1,
     128,    -1,   130,   131,   132,    -1,   134,   135,   136,    -1,
     138,   139,   140,   141,   142,    -1,    -1,   145,   146,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,    -1,    -1,
     158,    -1,   160,   161,   162,   163,   164,    -1,   166,    -1,
     168,    -1,    -1,   171,   172,   173,    -1,    -1,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
      -1,   189,    -1,   191,   192,   193,   194,   195,   196,   197,
     198,   199,    -1,   201,   202,    -1,   204,    -1,   206,   207,
     208,   209,    -1,    -1,   212,    -1,    -1,    -1,   216,   217,
      -1,    -1,   220,    -1,    -1,   223,   224,   225,   226,    -1,
     228,   229,   230,   231,   232,    -1,   234,   235,   236,   237,
     238,   239,   240,   241,    -1,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,    -1,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,    -1,   266,   267,
     268,    -1,   270,   271,   272,   273,    -1,   275,   276,    -1,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
      -1,   289,   290,    -1,   292,   293,   294,   295,    -1,   297,
     298,    -1,   300,    -1,   302,   303,   304,   305,    -1,   307,
     308,   309,   310,   311,    -1,    -1,   314,   315,   316,   317,
      -1,    -1,   320,   321,   322,   323,   324,   325,    -1,   327,
     328,    -1,    -1,   331,   332,   333,   334,   335,   336,    -1,
     338,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    -1,    24,    -1,    26,    27,    28,    -1,    30,    -1,
      32,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,    44,    -1,    46,    47,    48,    49,    -1,    -1,
      -1,    53,    54,    55,    56,    -1,    58,    59,    -1,    61,
      -1,    63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    -1,    84,    85,    86,    87,    88,    -1,    90,    -1,
      -1,    93,    94,    95,    96,    -1,    98,    99,   100,    -1,
     102,    -1,   104,   105,   106,    -1,   108,   109,    -1,    -1,
     112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,    -1,
     122,   123,    -1,   125,    -1,    -1,   128,    -1,   130,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,   140,   141,
     142,    -1,    -1,   145,   146,   147,   148,   149,   150,   151,
      -1,   153,    -1,   155,    -1,    -1,   158,    -1,   160,   161,
     162,   163,   164,    -1,    -1,    -1,   168,    -1,    -1,   171,
     172,   173,    -1,    -1,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    -1,   189,    -1,   191,
     192,   193,   194,   195,   196,   197,    -1,   199,    -1,   201,
     202,    -1,   204,    -1,    -1,   207,   208,   209,    -1,    -1,
     212,    -1,    -1,    -1,   216,   217,    -1,    -1,   220,    -1,
      -1,    -1,   224,   225,   226,    -1,    -1,    -1,   230,   231,
     232,    -1,   234,   235,   236,   237,   238,   239,   240,   241,
      -1,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,    -1,   255,   256,    -1,   258,   259,   260,   261,
     262,   263,   264,    -1,   266,   267,   268,    -1,   270,   271,
     272,   273,    -1,   275,   276,    -1,   278,   279,   280,   281,
     282,   283,   284,   285,    -1,   287,    -1,   289,   290,    -1,
     292,   293,   294,   295,    -1,   297,   298,    -1,   300,    -1,
     302,    -1,   304,    -1,    -1,   307,   308,   309,   310,   311,
      -1,    -1,   314,   315,   316,   317,    -1,    -1,   320,   321,
     322,   323,   324,   325,    -1,   327,   328,    -1,    -1,   331,
     332,   333,   334,   335,   336,    -1,   338,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    24,    -1,
      26,    27,    28,    -1,    30,    -1,    32,    33,    -1,    35,
      36,    37,    38,    -1,    -1,    41,    42,    43,    44,    -1,
      46,    47,    48,    49,    -1,    -1,    -1,    53,    54,    55,
      56,    -1,    58,    59,    -1,    61,    -1,    63,    64,    65,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    -1,    84,    85,
      86,    87,    88,    -1,    90,    -1,    -1,    93,    94,    95,
      96,    -1,    98,    99,   100,    -1,   102,    -1,   104,   105,
     106,    -1,   108,   109,    -1,    -1,   112,   113,   114,    -1,
     116,    -1,   118,    -1,    -1,    -1,   122,   123,    -1,   125,
      -1,    -1,   128,    -1,   130,   131,   132,    -1,   134,   135,
     136,    -1,   138,   139,   140,   141,   142,    -1,    -1,    -1,
     146,   147,   148,   149,   150,   151,    -1,   153,    -1,   155,
      -1,    -1,   158,    -1,   160,   161,   162,   163,   164,    -1,
      -1,    -1,   168,    -1,    -1,   171,   172,   173,    -1,    -1,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,    -1,   189,    -1,   191,   192,   193,   194,   195,
     196,   197,   198,   199,    -1,   201,   202,    -1,   204,    -1,
      -1,   207,   208,   209,    -1,    -1,   212,    -1,    -1,    -1,
     216,   217,    -1,    -1,    -1,    -1,    -1,    -1,   224,   225,
     226,    -1,    -1,    -1,   230,   231,   232,    -1,   234,   235,
     236,   237,   238,   239,   240,   241,    -1,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,    -1,   255,
     256,    -1,   258,   259,   260,   261,   262,   263,   264,    -1,
     266,   267,   268,    -1,   270,   271,   272,   273,    -1,   275,
     276,    -1,   278,   279,   280,   281,   282,   283,   284,   285,
      -1,   287,    -1,   289,   290,    -1,   292,   293,   294,   295,
      -1,   297,   298,    -1,   300,    -1,   302,    -1,   304,    -1,
      -1,   307,   308,   309,   310,   311,    -1,    -1,   314,   315,
     316,   317,    -1,    -1,   320,   321,   322,   323,   324,   325,
      -1,   327,   328,    -1,    -1,   331,   332,   333,   334,   335,
     336,    -1,   338,     3,     4,     5,     6,     7,     8,     9,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    -1,    24,    -1,    26,    27,    28,    -1,
      30,    -1,    32,    33,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,    44,    -1,    46,    47,    48,    49,
      -1,    -1,    -1,    53,    54,    55,    56,    -1,    58,    59,
      -1,    61,    -1,    63,    64,    65,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    -1,    84,    85,    86,    87,    88,    -1,
      90,    -1,    -1,    93,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,    -1,   104,   105,   106,    -1,   108,   109,
      -1,    -1,   112,   113,   114,    -1,   116,    -1,   118,    -1,
      -1,    -1,   122,   123,    -1,   125,    -1,    -1,   128,    -1,
     130,   131,   132,    -1,   134,   135,   136,    -1,   138,   139,
     140,   141,   142,    -1,    -1,    -1,   146,   147,   148,   149,
     150,   151,    -1,   153,    -1,   155,    -1,    -1,   158,    -1,
     160,   161,   162,   163,   164,    -1,    -1,    -1,   168,    -1,
      -1,   171,   172,   173,    -1,    -1,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,    -1,   189,
      -1,   191,   192,   193,   194,   195,   196,   197,   198,   199,
      -1,   201,   202,    -1,   204,    -1,    -1,   207,   208,   209,
      -1,    -1,   212,    -1,    -1,    -1,   216,   217,    -1,    -1,
      -1,    -1,    -1,    -1,   224,   225,   226,    -1,    -1,    -1,
     230,   231,   232,    -1,   234,   235,   236,   237,   238,   239,
     240,   241,    -1,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,    -1,   255,   256,    -1,   258,   259,
     260,   261,   262,   263,   264,    -1,   266,   267,   268,    -1,
     270,   271,   272,   273,    -1,   275,   276,    -1,   278,   279,
     280,   281,   282,   283,   284,   285,    -1,   287,    -1,   289,
     290,    -1,   292,   293,   294,   295,    -1,   297,   298,    -1,
     300,    -1,   302,    -1,   304,    -1,    -1,   307,   308,   309,
     310,   311,    -1,    -1,   314,   315,   316,   317,    -1,    -1,
     320,   321,   322,   323,   324,   325,    -1,   327,   328,    -1,
      -1,   331,   332,   333,   334,   335,   336,    -1,   338,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,
      24,    -1,    26,    27,    28,    -1,    30,    -1,    32,    33,
      -1,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
      44,    -1,    46,    47,    48,    49,    -1,    -1,    -1,    53,
      54,    55,    56,    -1,    58,    59,    -1,    61,    -1,    63,
      64,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    85,    86,    87,    88,    -1,    90,    -1,    -1,    93,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,    -1,
     104,   105,   106,    -1,   108,   109,    -1,    -1,   112,   113,
     114,    -1,   116,    -1,   118,    -1,    -1,    -1,   122,   123,
      -1,   125,    -1,    -1,   128,    -1,   130,   131,   132,    -1,
     134,   135,   136,    -1,   138,   139,   140,   141,   142,    -1,
      -1,    -1,   146,   147,   148,   149,   150,   151,    -1,   153,
      -1,   155,    -1,    -1,   158,    -1,   160,   161,   162,   163,
     164,    -1,    -1,    -1,   168,    -1,    -1,   171,   172,   173,
      -1,    -1,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,    -1,   189,    -1,   191,   192,   193,
     194,   195,   196,   197,    -1,   199,    -1,   201,   202,    -1,
     204,   205,    -1,   207,   208,   209,    -1,    -1,   212,    -1,
      -1,    -1,   216,   217,    -1,    -1,    -1,    -1,    -1,    -1,
     224,   225,   226,    -1,    -1,    -1,   230,   231,   232,    -1,
     234,   235,   236,   237,   238,   239,   240,   241,    -1,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
      -1,   255,   256,    -1,   258,   259,   260,   261,   262,   263,
     264,    -1,   266,   267,   268,    -1,   270,   271,   272,   273,
      -1,   275,   276,    -1,   278,   279,   280,   281,   282,   283,
     284,   285,    -1,   287,    -1,   289,   290,    -1,   292,   293,
     294,   295,    -1,   297,   298,    -1,   300,    -1,   302,    -1,
     304,    -1,    -1,   307,   308,   309,   310,   311,    -1,    -1,
     314,   315,   316,   317,    -1,    -1,   320,   321,   322,   323,
     324,   325,    -1,   327,   328,    -1,    -1,   331,   332,   333,
     334,   335,   336,    -1,   338,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    -1,    24,    -1,    26,    27,
      28,    -1,    30,    -1,    32,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    41,    42,    43,    44,    -1,    46,    47,
      48,    49,    -1,    -1,    -1,    53,    54,    55,    56,    -1,
      58,    59,    -1,    61,    -1,    63,    64,    65,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    -1,    84,    85,    86,    87,
      88,    -1,    90,    -1,    -1,    93,    94,    95,    96,    -1,
      98,    99,   100,    -1,   102,    -1,   104,   105,   106,    -1,
     108,   109,    -1,    -1,   112,   113,   114,    -1,   116,    -1,
     118,    -1,    -1,    -1,   122,   123,    -1,   125,    -1,    -1,
     128,    -1,   130,   131,   132,    -1,   134,   135,   136,    -1,
     138,   139,   140,   141,   142,    -1,    -1,    -1,   146,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,    -1,    -1,
     158,    -1,   160,   161,   162,   163,   164,    -1,    -1,    -1,
     168,    -1,    -1,   171,   172,   173,    -1,    -1,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
      -1,   189,    -1,   191,   192,   193,   194,   195,   196,   197,
      -1,   199,    -1,   201,   202,    -1,   204,    -1,    -1,   207,
     208,   209,    -1,    -1,   212,    -1,    -1,    -1,   216,   217,
      -1,    -1,    -1,    -1,    -1,    -1,   224,   225,   226,    -1,
      -1,    -1,   230,   231,   232,    -1,   234,   235,   236,   237,
     238,   239,   240,   241,    -1,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,    -1,   255,   256,    -1,
     258,   259,   260,   261,   262,   263,   264,    -1,   266,   267,
     268,    -1,   270,   271,   272,   273,    -1,   275,   276,    -1,
     278,   279,   280,   281,   282,   283,   284,   285,    -1,   287,
      -1,   289,   290,    -1,   292,   293,   294,   295,    -1,   297,
     298,    -1,   300,    -1,   302,    -1,   304,    -1,    -1,   307,
     308,   309,   310,   311,    -1,    -1,   314,   315,   316,   317,
      -1,    -1,   320,   321,   322,   323,   324,   325,    -1,   327,
     328,    -1,    -1,   331,   332,   333,   334,   335,   336,    -1,
     338,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    -1,    24,    -1,    26,    27,    28,    -1,    30,    -1,
      32,    33,    -1,    35,    36,    37,    38,    -1,    -1,    41,
      42,    43,    44,    -1,    46,    47,    48,    49,    -1,    -1,
      -1,    53,    54,    55,    56,    -1,    58,    59,    -1,    61,
      -1,    63,    64,    65,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    -1,    84,    85,    86,    87,    88,    -1,    90,    -1,
      -1,    93,    94,    95,    96,    -1,    98,    99,   100,    -1,
     102,    -1,   104,   105,   106,    -1,   108,   109,    -1,    -1,
     112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,    -1,
     122,   123,    -1,   125,    -1,    -1,   128,    -1,   130,   131,
     132,    -1,   134,   135,   136,    -1,   138,   139,   140,   141,
     142,    -1,    -1,    -1,   146,   147,   148,   149,   150,   151,
      -1,   153,    -1,   155,    -1,    -1,   158,    -1,   160,   161,
     162,   163,   164,    -1,    -1,    -1,   168,    -1,    -1,   171,
     172,   173,    -1,    -1,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    -1,   189,    -1,   191,
     192,   193,   194,   195,   196,   197,    -1,   199,    -1,   201,
     202,    -1,   204,    -1,    -1,   207,   208,   209,    -1,    -1,
     212,    -1,    -1,    -1,   216,   217,    -1,    -1,    -1,    -1,
      -1,    -1,   224,   225,   226,    -1,    -1,    -1,   230,   231,
     232,    -1,   234,   235,   236,   237,   238,   239,   240,   241,
      -1,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,    -1,   255,   256,    -1,   258,   259,   260,   261,
     262,   263,   264,    -1,   266,   267,   268,    -1,   270,    -1,
     272,   273,    -1,   275,   276,    -1,   278,   279,   280,   281,
     282,   283,   284,   285,    -1,   287,    -1,   289,   290,    -1,
     292,   293,   294,   295,    -1,   297,   298,    -1,   300,    -1,
     302,    -1,   304,    -1,    -1,   307,   308,   309,   310,   311,
      -1,    -1,   314,   315,   316,   317,    10,    -1,   320,   321,
     322,   323,   324,   325,    -1,   327,   328,    21,    -1,   331,
     332,   333,   334,   335,   336,    -1,   338,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,
      -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   216,    -1,   218,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   236,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   255,    -1,    -1,    -1,   259,    -1,   261,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,   293,
      -1,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     304,    -1,    -1,    -1,   308,   309,    -1,    -1,    -1,   313,
      -1,    -1,    -1,    -1,   318
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,     3,    13,    14,    15,    28,    46,    48,    49,    53,
      54,    61,    62,    77,    80,    86,    95,   101,   106,   108,
     112,   124,   148,   171,   172,   177,   185,   202,   231,   243,
     245,   249,   253,   256,   260,   265,   270,   273,   279,   307,
     315,   317,   320,   359,   367,   368,   369,   370,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   384,   385,   389,
     400,   401,   402,   405,   406,   414,   415,   424,   451,   456,
     457,   464,   469,   471,   473,   474,   487,   488,   489,   490,
     495,   500,   501,   506,   507,   510,   513,   514,   524,   525,
     528,   534,   548,   551,   552,   554,   557,   559,   560,   563,
     565,   566,   567,   575,   576,   577,   578,   579,   584,   585,
     586,   590,   591,   594,   595,   596,   598,   599,   600,   601,
     602,   607,   610,   614,   616,   617,   621,   623,   627,   628,
     631,   632,   633,   634,   635,   302,   333,   580,    10,    59,
      75,    93,   122,   127,   140,   162,   216,   255,   261,   266,
     291,   292,   304,   309,   318,   580,     3,     4,     5,     6,
       7,     8,     9,    10,    12,    13,    21,    22,    24,    26,
      27,    28,    30,    32,    33,    35,    36,    37,    38,    41,
      42,    43,    44,    46,    47,    48,    49,    50,    53,    54,
      55,    56,    58,    59,    60,    61,    63,    64,    65,    67,
      73,    74,    75,    76,    77,    78,    79,    80,    82,    84,
      85,    86,    87,    88,    90,    93,    94,    95,    96,    98,
      99,   100,   102,   104,   105,   106,   107,   108,   109,   110,
     112,   113,   114,   116,   118,   122,   123,   125,   126,   128,
     130,   131,   132,   134,   135,   136,   138,   139,   140,   141,
     142,   145,   146,   147,   148,   149,   150,   151,   153,   155,
     158,   160,   161,   162,   163,   164,   166,   168,   171,   172,
     173,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   189,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   201,   202,   204,   206,   207,   208,   209,
     212,   216,   217,   220,   223,   224,   225,   226,   228,   229,
     230,   231,   232,   234,   235,   236,   237,   238,   239,   240,
     241,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   266,   267,   268,   270,   271,   272,   273,   275,
     276,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   289,   290,   292,   293,   294,   295,   297,   298,   300,
     302,   303,   304,   305,   307,   308,   309,   310,   311,   314,
     315,   316,   317,   320,   321,   322,   323,   324,   325,   327,
     328,   331,   332,   333,   334,   335,   336,   338,   736,   748,
     752,   753,   190,   213,   732,   734,   740,   748,   756,   214,
     232,   580,    31,   420,    10,    21,    40,    57,    75,    81,
      93,   123,   127,   173,   216,   218,   255,   261,   292,   293,
     295,   304,   308,   309,   313,   318,   425,   465,   498,   529,
     535,   231,   736,   736,   120,    10,    21,    40,    59,    75,
      93,   122,   127,   140,   216,   236,   255,   259,   261,   266,
     291,   292,   304,   309,   318,   327,   470,   502,   580,   736,
     602,   609,     4,    11,    26,   113,   118,   164,   191,   234,
     244,   344,   351,   511,   736,   747,    11,    62,   242,   265,
     515,   516,   517,   748,   154,   734,   748,   340,   741,   745,
     291,   638,   511,   736,   734,   302,   736,    75,   140,   290,
     291,   561,   260,   748,    11,   268,   297,   302,   391,   748,
       8,   124,   515,   516,   232,   580,   748,    11,    91,   640,
      58,   173,   186,   255,   268,   297,   302,   390,   391,    11,
     268,   297,   302,   391,   302,   638,   352,   734,   215,   662,
     734,   121,   604,   632,   633,     0,   363,   326,   603,   103,
     152,   219,   312,   641,   642,    25,    29,    31,    66,   119,
     121,   133,   144,   156,   157,   159,   167,   169,   188,   203,
     221,   222,   254,   274,   326,   338,   732,   742,   750,   752,
     754,   504,   748,   737,   748,   504,   523,   742,   746,   748,
     662,   736,    47,   343,   346,   347,   348,   350,   351,   352,
     353,   354,   355,   556,   697,   698,   748,   746,   736,   662,
     734,   662,   736,   736,   504,   746,   158,   239,   581,   582,
     583,   357,   362,   722,   723,   214,    10,    40,    52,    57,
      59,    75,    93,   122,   140,   163,   216,   259,   261,   266,
     291,   304,   309,   327,   470,   508,   745,   734,   742,   736,
     359,   304,   737,   504,   293,   295,   746,   293,   295,    47,
     556,   248,   746,   386,   748,   736,   736,   504,   746,   266,
     291,   327,   470,    59,   140,   122,   259,   736,   629,   662,
     742,   736,   359,   737,   742,   735,   736,    47,   556,   735,
     736,   736,   736,   735,   162,   503,   504,   359,   615,   603,
     747,    11,   747,    11,   747,   747,   344,   120,   137,   512,
     235,   214,   299,   364,   734,   733,   734,   512,   745,   359,
     611,   736,   736,   734,   748,    25,   336,   158,   362,   217,
     217,   214,   120,   745,   299,   214,    18,    30,    32,    33,
      39,    40,    42,    43,    50,    60,    68,    69,    70,    71,
      72,    78,    79,    94,   107,   110,   111,   114,   126,   150,
     151,   153,   166,   174,   175,   187,   189,   200,   205,   206,
     207,   216,   223,   228,   240,   257,   269,   276,   286,   297,
     298,   303,   305,   306,   313,   318,   324,   338,   339,   341,
     342,   343,   344,   345,   350,   351,   352,   359,   632,   670,
     671,   672,   677,   678,   679,   681,   682,   683,   684,   687,
     688,   691,   693,   694,   695,   699,   716,   721,   726,   727,
     732,   742,   743,   744,   745,   749,   752,    11,   403,   735,
     268,   390,    81,   398,   745,   340,   399,   748,    25,    44,
     390,   336,   582,   299,   346,    25,   336,   158,   583,   733,
     359,   734,   270,   352,   119,   605,   360,   360,   369,   734,
      11,    91,   639,   639,    35,   639,   115,   170,   211,   645,
     651,   723,   359,   224,   246,   362,   505,   224,   246,   270,
     331,   371,   401,     7,    95,   224,   270,   411,    37,   109,
     135,   252,   264,   278,   285,   328,   544,   549,   359,   536,
       7,    95,   246,   383,   224,   246,   270,   409,   410,   246,
     504,   359,   362,   246,   270,   371,   401,   224,   246,   270,
     458,     7,    13,    49,    62,    90,    95,    98,   246,   270,
     407,   408,   410,   224,   246,   214,   224,   270,   246,   270,
     371,   401,   168,   215,   334,   364,   581,   691,    11,    14,
      15,    16,    17,    18,    19,    20,    23,    34,    39,    40,
      45,    51,    52,    57,    62,    68,    69,    70,    71,    72,
      81,    83,    89,    91,    92,    97,   101,   103,   111,   115,
     117,   120,   124,   127,   129,   137,   143,   152,   154,   165,
     170,   174,   175,   190,   200,   205,   210,   211,   213,   214,
     215,   218,   219,   227,   233,   242,   265,   269,   277,   288,
     291,   296,   299,   301,   306,   312,   313,   318,   319,   329,
     330,   338,   352,   739,   751,   752,   753,   754,   755,   722,
     734,   742,   359,   736,   742,   208,    47,   556,   736,   736,
     162,   504,   359,   438,   359,   491,    45,    30,    32,    33,
      42,    43,    78,    79,   114,   150,   151,   153,   187,   189,
     207,   240,   271,   276,   297,   298,   324,   338,   667,   669,
     671,   672,   676,   678,   679,   680,   682,   683,   687,   688,
     749,   752,   736,   371,    19,   597,   371,   504,   491,   425,
     371,    25,   387,   224,   472,     9,    27,   475,    19,   491,
     371,   734,   734,   734,   162,   504,   740,   748,   742,   736,
      31,    73,   147,   192,   262,   319,   622,   359,    38,   251,
     412,   667,   536,   364,   504,   359,   214,   214,   399,   364,
     412,   691,   702,    62,   608,   614,   617,   621,   627,   628,
     631,   736,    75,   122,   162,   261,   291,   292,   518,   733,
     735,   517,    81,   323,   359,   618,   631,   137,   364,   624,
     736,   612,   667,    19,   116,   562,   562,   562,   168,   748,
     115,   115,   518,   735,   260,   748,   359,   357,   632,   706,
     325,   685,   691,   720,   359,   685,   685,   359,   359,   359,
     359,   359,   675,   675,   229,   632,   359,   359,   673,   359,
     359,   359,   359,    42,    43,   685,   691,   359,   359,   674,
     359,   359,   359,   359,   359,   331,   332,   359,   689,   359,
     689,   359,   359,   632,   724,   691,   691,   632,   691,   702,
     745,    43,   359,   686,   359,   745,    16,    19,    24,    29,
     133,   137,   156,   157,   169,   200,   203,   216,   218,   274,
     343,   346,   347,   348,   350,   351,   352,   353,   354,   355,
     361,   697,   699,   701,   222,   691,   154,   364,   636,   723,
     359,    84,   134,   404,    44,    81,   399,    19,    81,   173,
     338,   339,   351,   397,   461,   462,   463,   688,   745,   747,
      81,   111,   210,   214,   306,   392,   393,   394,   396,   399,
     461,   392,   168,   734,   728,   729,   748,   603,   359,   606,
     632,   634,   635,   634,   643,   644,   691,   634,   239,   272,
     317,    11,   647,   691,   648,   691,   651,   652,   645,   646,
     352,   553,   667,   299,   299,   739,   362,   299,   299,   390,
     592,    45,    57,   117,   233,   313,   436,   437,    57,    81,
     200,   299,    81,   200,   261,   214,   264,   205,    85,   155,
     251,   544,   550,   137,   145,   220,   338,   360,   537,   538,
     539,   540,   542,   667,   749,   750,   752,   224,   246,   270,
     299,   318,   299,   299,   292,   364,   299,   319,   198,   555,
     667,   556,   299,   390,   372,   299,   299,   261,    36,    74,
     139,   180,   182,   192,   250,   279,   459,    52,   436,   564,
     564,   214,   300,   304,    57,   564,   304,   299,   564,   261,
     332,   364,   299,   299,   662,   299,   261,   299,   390,   372,
     239,   247,   267,   395,   581,   358,   365,   359,   667,   214,
     536,   461,   504,   359,   156,   214,   214,   504,   156,   439,
     440,   748,   331,   421,   492,   493,   751,   359,   669,    19,
      18,   668,    76,   132,   181,   184,   263,   335,   359,   690,
     505,     9,   587,   667,   372,   498,   327,   372,   746,    62,
     124,   388,   424,   456,   474,   513,   528,   584,   736,   176,
      86,   148,   317,   476,   477,   359,   372,   458,   209,   359,
     453,   438,   399,   115,   214,   536,    19,   331,   332,   630,
     262,   359,   632,   655,   656,   657,   662,   663,   694,   732,
     330,   664,   553,    19,   412,   736,   319,   555,   734,   734,
     412,   504,   360,   364,   425,   735,   522,   523,   742,   735,
     735,   733,   735,   299,   331,   526,   323,   359,   619,   620,
     748,     5,   105,   257,   272,   625,   734,   204,   626,   360,
     364,   613,   617,   621,   627,   631,   516,   515,   516,   120,
     125,   527,   748,   702,   702,   705,   706,   359,   329,   717,
     718,   691,   702,   691,   702,   744,   744,   744,    76,   132,
     181,   184,   263,   335,   338,   340,   703,   707,   744,   702,
     702,   744,   744,   685,   685,   691,   744,   556,   691,   708,
     350,   351,   692,   693,   695,   699,   710,   360,   702,   691,
     702,   711,   297,   297,   744,   744,   691,    34,   120,   165,
     301,   691,   702,   714,   722,   360,   364,   270,   744,   744,
     690,   691,   751,   297,    23,   288,   725,   691,   359,   632,
     715,    91,   111,   200,   205,   209,   306,   314,   691,    29,
     133,   137,   169,   274,   359,   691,   299,   691,   691,   691,
     691,   691,   691,   691,   691,   691,   667,   691,    11,    17,
     277,   696,   257,   359,   695,   123,   173,   291,   293,   295,
     637,   734,   727,   120,   654,    11,    91,   352,   360,   702,
     302,   339,   359,   745,   364,   360,   364,   654,   724,   601,
     734,   735,   364,    20,    89,   319,   215,   209,   653,   653,
     211,   364,   170,   360,   746,   736,   739,   746,   737,    56,
     593,   359,   736,   160,   160,   359,   736,   205,   746,   691,
     205,   736,   205,    85,   155,   214,   220,   360,   364,   540,
     542,   539,   542,   505,   299,   299,   261,   746,   735,   746,
     736,   736,   410,   736,   738,   748,   364,   360,   364,   746,
       8,    56,    63,    64,    65,   100,   137,   141,   178,   193,
     194,   195,   196,   197,   199,   226,   255,   287,   289,   311,
     318,   321,   373,   746,   736,   736,   461,    35,   460,   461,
     461,    74,   180,   182,   371,   371,   429,   748,   748,   736,
     291,    11,   318,   736,   736,   748,    11,   318,   736,   736,
     736,   736,    49,   212,   270,   408,   746,   736,   246,   746,
     736,   746,    55,   310,   239,   691,   553,    19,   504,   156,
     156,   319,   555,   205,   509,   745,   504,   504,   156,   509,
     360,   364,   212,   120,   299,   416,   360,   364,   346,   691,
      18,   668,   667,   357,   357,   299,   299,   299,   299,   744,
     476,    56,    99,   176,   224,   292,   294,   588,   430,   115,
     734,   387,   218,   425,   745,   214,   218,   665,   666,   748,
     734,   169,   426,   427,   428,   429,   434,   436,   454,   455,
     748,    19,   331,   332,   452,    19,   128,   745,   734,    19,
     162,   252,   543,   544,   545,   568,   131,   131,   115,   632,
     656,   657,    19,   658,   748,   364,    66,   121,   144,   159,
     167,   188,   254,   337,   659,   658,    19,   658,   748,   723,
     691,   360,   667,   738,   360,   412,   412,   691,   291,   364,
     536,   127,   519,   520,   746,     8,   527,    81,   691,   730,
     731,   360,   364,   724,   105,   272,   105,   272,   257,   317,
     183,   667,   120,   214,   519,    35,   412,   360,   358,   358,
     364,   744,   691,    97,   718,   719,    19,   360,   319,   360,
     360,   360,   360,   364,   360,   120,   360,   360,   360,   360,
     360,   364,   360,   364,   360,   227,   709,   360,   692,   692,
     137,   156,   216,   346,   347,   348,   350,   351,   352,   353,
     354,   355,   361,   699,   692,   360,   360,   115,   120,   712,
     713,   360,   336,   336,   360,   360,    19,   714,   702,   714,
     714,   120,   360,   724,   691,   748,   360,   360,   336,   692,
     692,   102,   702,   120,   111,   205,   209,   306,   314,   359,
     102,   288,   725,   691,   715,   691,   299,   556,   691,   359,
     632,   293,   295,   293,   295,   734,   638,   638,   655,   664,
     702,   702,   360,   360,   582,   744,   690,   394,   729,   664,
     346,   360,   644,   216,   697,   700,   735,   626,   626,   648,
     648,   647,   224,   246,   270,   170,   691,   437,   359,   359,
     439,   412,   146,   205,   538,   542,   542,   354,   746,   736,
     736,   224,   246,   667,   224,   198,   667,   735,   170,   226,
     127,   255,   745,   735,   744,   226,   735,   316,   461,   461,
     461,   667,    95,   270,   309,   411,   412,   412,   299,   299,
     358,   360,   667,   156,   509,   509,   738,   360,   156,   156,
     509,   440,   282,   283,   417,   745,   493,   216,   351,   461,
     494,   542,   700,   745,   360,   357,   360,   744,   358,   744,
     132,   181,   263,   181,   263,   263,   184,   360,   214,   170,
     346,   589,   589,   589,   589,   589,    45,    57,    81,    83,
     143,   200,   205,   233,   242,   313,   431,   432,   433,   309,
     438,   248,   291,   734,   477,   360,   364,   667,   359,   734,
     360,   364,   360,   364,   106,   212,   212,   631,   631,   466,
     736,   299,   319,   530,   546,   745,   399,   541,   542,   331,
     545,   547,   214,   631,   360,   748,   359,   656,   159,   221,
     660,   656,   660,   159,   659,   660,   656,   159,   359,   748,
     359,   412,   360,   412,   412,   734,   523,   746,   331,   364,
     521,   217,   360,   364,   323,   631,   620,   105,   105,   735,
     518,   412,   746,   706,   360,   296,   691,   101,   667,   504,
     744,   691,   691,   744,   691,   712,   692,    91,   200,   209,
     692,   692,   692,   692,   692,   692,   692,   692,   692,   667,
     692,   691,   691,   713,   712,   689,   689,   667,   360,   360,
     360,   702,   360,   686,   745,   691,    16,    16,   691,   360,
     691,   359,   667,   704,   691,   692,   692,   102,   102,   691,
     360,   102,   691,   638,   638,   638,   638,   734,   734,   127,
     649,   360,   360,   360,    81,   691,   359,   299,   299,   261,
     589,   360,   439,   439,   360,   146,   309,   299,   299,   299,
     747,   745,   735,   735,   745,   745,   430,   200,   200,   281,
     284,   667,   736,   736,   156,   360,   509,   156,   156,   509,
     509,   319,   422,   423,    83,   143,   200,   484,   485,   486,
     744,   331,   332,   358,   358,   690,   734,   589,    81,   744,
     745,    81,   745,    81,   736,    81,   736,    81,   736,   359,
     736,   692,    84,   134,    83,   205,   160,   734,   319,   450,
     667,    19,   734,   115,   478,   218,   666,   426,   104,   138,
     435,   142,   446,   428,   455,   748,   736,    19,    19,   322,
     467,   505,   745,   738,   359,   364,   543,   491,    86,   148,
     265,   317,   573,   658,   359,   735,   656,   214,   319,   661,
     656,   159,   656,   665,   359,   665,   748,   412,   359,   453,
     124,   520,   731,   359,   527,   120,   691,   360,   360,   360,
     360,   360,   713,   120,   209,   359,   360,   690,   692,   692,
     704,   360,   364,    16,    16,   691,   691,   102,   691,   360,
     734,   734,   734,   734,    35,   129,   650,   745,   556,   746,
     736,   736,   747,   360,   360,   450,   746,   736,   746,   205,
     205,   463,   748,   319,   413,   509,   156,   509,   509,   371,
      88,    84,   134,    83,   486,   485,   358,   122,   122,   120,
     483,   747,   691,   200,   432,   450,   438,   140,   319,   631,
     359,    96,   479,   106,   477,   360,    82,    82,   359,   331,
     332,   447,   615,   466,   161,   468,   120,   359,   531,   532,
     694,   748,   745,   547,   299,   735,   360,   691,   359,   656,
     661,   360,   665,   360,    19,   217,   730,   412,   519,   692,
     359,   704,   360,   667,   692,   692,   691,   702,   691,   690,
     360,   242,   450,   691,   509,   418,   745,   523,    19,   558,
     734,   484,   360,   179,   441,   292,   738,   257,   280,   480,
     237,   447,   733,   212,   212,   214,   448,   745,   504,   691,
     360,   364,   319,   504,   533,   533,   734,   360,   735,   360,
     360,   412,   704,   360,   734,    31,    67,    87,   102,   116,
     130,   205,   212,   238,   419,   558,    22,   136,   115,   121,
     225,   275,   214,   442,   443,   444,   736,    19,   742,   448,
     360,    54,   292,   449,   360,   449,   532,   504,   664,   360,
     360,   438,   597,   597,   200,   238,   597,   597,    96,    86,
     317,   214,   444,   214,   443,   122,   216,   284,   496,   497,
     359,   449,    86,    95,   230,   736,   533,   664,    92,   441,
     745,   745,   205,   439,   745,   745,   257,    38,   192,   251,
     270,   445,   445,   744,   744,   667,   364,   339,   341,   342,
     344,   481,   482,   745,   748,   258,   258,    12,   149,   574,
     442,   439,   106,     6,    81,   205,   742,   556,   497,   360,
     364,   201,   359,   569,   571,   576,   617,   621,   627,   631,
     484,   237,   536,   241,   359,   499,   482,   570,   571,   572,
     632,   633,   742,   555,   360,   363,   359,   360,   572,   481,
     499,   360
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1

/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 472 "gram.y"
    { parsetree = yyvsp[0].list; }
    break;

  case 3:
#line 477 "gram.y"
    { if (yyvsp[0].node != NULL)
					yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node);
				  else
					yyval.list = yyvsp[-2].list;
				}
    break;

  case 4:
#line 483 "gram.y"
    { if (yyvsp[0].node != NULL)
						yyval.list = list_make1(yyvsp[0].node);
					  else
						yyval.list = NIL;
					}
    break;

  case 88:
#line 575 "gram.y"
    { yyval.node = NULL; }
    break;

  case 89:
#line 586 "gram.y"
    {
					CreateRoleStmt *n = makeNode(CreateRoleStmt);
					n->stmt_type = ROLESTMT_ROLE;
					n->role = yyvsp[-2].str;
					n->options = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 90:
#line 596 "gram.y"
    {}
    break;

  case 91:
#line 597 "gram.y"
    {}
    break;

  case 92:
#line 606 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].defelt); }
    break;

  case 93:
#line 607 "gram.y"
    { yyval.list = NIL; }
    break;

  case 94:
#line 612 "gram.y"
    {
					yyval.defelt = makeDefElem("password",
									 (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 95:
#line 617 "gram.y"
    {
					yyval.defelt = makeDefElem("encryptedPassword",
									 (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 96:
#line 622 "gram.y"
    {
					yyval.defelt = makeDefElem("unencryptedPassword",
									 (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 97:
#line 627 "gram.y"
    {
					yyval.defelt = makeDefElem("superuser", (Node *)makeInteger(TRUE));
				}
    break;

  case 98:
#line 631 "gram.y"
    {
					yyval.defelt = makeDefElem("superuser", (Node *)makeInteger(FALSE));
				}
    break;

  case 99:
#line 635 "gram.y"
    {
					yyval.defelt = makeDefElem("inherit", (Node *)makeInteger(TRUE));
				}
    break;

  case 100:
#line 639 "gram.y"
    {
					yyval.defelt = makeDefElem("inherit", (Node *)makeInteger(FALSE));
				}
    break;

  case 101:
#line 643 "gram.y"
    {
					yyval.defelt = makeDefElem("createdb", (Node *)makeInteger(TRUE));
				}
    break;

  case 102:
#line 647 "gram.y"
    {
					yyval.defelt = makeDefElem("createdb", (Node *)makeInteger(FALSE));
				}
    break;

  case 103:
#line 651 "gram.y"
    {
					yyval.defelt = makeDefElem("createrole", (Node *)makeInteger(TRUE));
				}
    break;

  case 104:
#line 655 "gram.y"
    {
					yyval.defelt = makeDefElem("createrole", (Node *)makeInteger(FALSE));
				}
    break;

  case 105:
#line 659 "gram.y"
    {
					/* For backwards compatibility, synonym for SUPERUSER */
					yyval.defelt = makeDefElem("superuser", (Node *)makeInteger(TRUE));
				}
    break;

  case 106:
#line 664 "gram.y"
    {
					yyval.defelt = makeDefElem("superuser", (Node *)makeInteger(FALSE));
				}
    break;

  case 107:
#line 668 "gram.y"
    {
					yyval.defelt = makeDefElem("canlogin", (Node *)makeInteger(TRUE));
				}
    break;

  case 108:
#line 672 "gram.y"
    {
					yyval.defelt = makeDefElem("canlogin", (Node *)makeInteger(FALSE));
				}
    break;

  case 109:
#line 676 "gram.y"
    {
					yyval.defelt = makeDefElem("connectionlimit", (Node *)makeInteger(yyvsp[0].ival));
				}
    break;

  case 110:
#line 680 "gram.y"
    {
					yyval.defelt = makeDefElem("validUntil", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 111:
#line 685 "gram.y"
    {
					yyval.defelt = makeDefElem("rolemembers", (Node *)yyvsp[0].list);
				}
    break;

  case 112:
#line 690 "gram.y"
    {
					yyval.defelt = makeDefElem("sysid", (Node *)makeInteger(yyvsp[0].ival));
				}
    break;

  case 113:
#line 694 "gram.y"
    {
					yyval.defelt = makeDefElem("adminmembers", (Node *)yyvsp[0].list);
				}
    break;

  case 114:
#line 698 "gram.y"
    {
					yyval.defelt = makeDefElem("rolemembers", (Node *)yyvsp[0].list);
				}
    break;

  case 115:
#line 702 "gram.y"
    {
					yyval.defelt = makeDefElem("addroleto", (Node *)yyvsp[0].list);
				}
    break;

  case 116:
#line 706 "gram.y"
    {
					yyval.defelt = makeDefElem("addroleto", (Node *)yyvsp[0].list);
				}
    break;

  case 117:
#line 720 "gram.y"
    {
					CreateRoleStmt *n = makeNode(CreateRoleStmt);
					n->stmt_type = ROLESTMT_USER;
					n->role = yyvsp[-2].str;
					n->options = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 118:
#line 738 "gram.y"
    {
					AlterRoleStmt *n = makeNode(AlterRoleStmt);
					n->role = yyvsp[-2].str;
					n->action = +1;	/* add, if there are members */
					n->options = yyvsp[0].list;
					yyval.node = (Node *)n;
				 }
    break;

  case 119:
#line 749 "gram.y"
    {
					AlterRoleSetStmt *n = makeNode(AlterRoleSetStmt);
					n->role = yyvsp[-2].str;
					n->variable = yyvsp[0].vsetstmt->name;
					n->value = yyvsp[0].vsetstmt->args;
					yyval.node = (Node *)n;
				}
    break;

  case 120:
#line 757 "gram.y"
    {
					AlterRoleSetStmt *n = makeNode(AlterRoleSetStmt);
					n->role = yyvsp[-1].str;
					n->variable = ((VariableResetStmt *)yyvsp[0].node)->name;
					n->value = NIL;
					yyval.node = (Node *)n;
				}
    break;

  case 121:
#line 775 "gram.y"
    {
					AlterRoleStmt *n = makeNode(AlterRoleStmt);
					n->role = yyvsp[-2].str;
					n->action = +1;	/* add, if there are members */
					n->options = yyvsp[0].list;
					yyval.node = (Node *)n;
				 }
    break;

  case 122:
#line 787 "gram.y"
    {
					AlterRoleSetStmt *n = makeNode(AlterRoleSetStmt);
					n->role = yyvsp[-2].str;
					n->variable = yyvsp[0].vsetstmt->name;
					n->value = yyvsp[0].vsetstmt->args;
					yyval.node = (Node *)n;
				}
    break;

  case 123:
#line 795 "gram.y"
    {
					AlterRoleSetStmt *n = makeNode(AlterRoleSetStmt);
					n->role = yyvsp[-1].str;
					n->variable = ((VariableResetStmt *)yyvsp[0].node)->name;
					n->value = NIL;
					yyval.node = (Node *)n;
				}
    break;

  case 124:
#line 816 "gram.y"
    {
					DropRoleStmt *n = makeNode(DropRoleStmt);
					n->roles = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 125:
#line 834 "gram.y"
    {
					DropRoleStmt *n = makeNode(DropRoleStmt);
					n->roles = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 126:
#line 850 "gram.y"
    {
					CreateRoleStmt *n = makeNode(CreateRoleStmt);
					n->stmt_type = ROLESTMT_GROUP;
					n->role = yyvsp[-2].str;
					n->options = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 127:
#line 868 "gram.y"
    {
					AlterRoleStmt *n = makeNode(AlterRoleStmt);
					n->role = yyvsp[-3].str;
					n->action = yyvsp[-2].ival;
					n->options = list_make1(makeDefElem("rolemembers",
														(Node *)yyvsp[0].list));
					yyval.node = (Node *)n;
				}
    break;

  case 128:
#line 878 "gram.y"
    { yyval.ival = +1; }
    break;

  case 129:
#line 879 "gram.y"
    { yyval.ival = -1; }
    break;

  case 130:
#line 892 "gram.y"
    {
					DropRoleStmt *n = makeNode(DropRoleStmt);
					n->roles = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 131:
#line 908 "gram.y"
    {
					CreateSchemaStmt *n = makeNode(CreateSchemaStmt);
					/* One can omit the schema name or the authorization id. */
					if (yyvsp[-3].str != NULL)
						n->schemaname = yyvsp[-3].str;
					else
						n->schemaname = yyvsp[-1].str;
					n->authid = yyvsp[-1].str;
					n->schemaElts = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 132:
#line 920 "gram.y"
    {
					CreateSchemaStmt *n = makeNode(CreateSchemaStmt);
					/* ...but not both */
					n->schemaname = yyvsp[-1].str;
					n->authid = NULL;
					n->schemaElts = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 133:
#line 931 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 134:
#line 932 "gram.y"
    { yyval.str = NULL; }
    break;

  case 135:
#line 936 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].node); }
    break;

  case 136:
#line 937 "gram.y"
    { yyval.list = NIL; }
    break;

  case 143:
#line 965 "gram.y"
    {
					VariableSetStmt *n = yyvsp[0].vsetstmt;
					n->is_local = false;
					yyval.node = (Node *) n;
				}
    break;

  case 144:
#line 971 "gram.y"
    {
					VariableSetStmt *n = yyvsp[0].vsetstmt;
					n->is_local = true;
					yyval.node = (Node *) n;
				}
    break;

  case 145:
#line 977 "gram.y"
    {
					VariableSetStmt *n = yyvsp[0].vsetstmt;
					n->is_local = false;
					yyval.node = (Node *) n;
				}
    break;

  case 146:
#line 985 "gram.y"
    {
					VariableSetStmt *n = makeNode(VariableSetStmt);
					n->name = yyvsp[-2].str;
					n->args = yyvsp[0].list;
					yyval.vsetstmt = n;
				}
    break;

  case 147:
#line 992 "gram.y"
    {
					VariableSetStmt *n = makeNode(VariableSetStmt);
					n->name = yyvsp[-2].str;
					n->args = yyvsp[0].list;
					yyval.vsetstmt = n;
				}
    break;

  case 148:
#line 999 "gram.y"
    {
					VariableSetStmt *n = makeNode(VariableSetStmt);
					n->name = "timezone";
					if (yyvsp[0].node != NULL)
						n->args = list_make1(yyvsp[0].node);
					yyval.vsetstmt = n;
				}
    break;

  case 149:
#line 1007 "gram.y"
    {
					VariableSetStmt *n = makeNode(VariableSetStmt);
					n->name = "TRANSACTION";
					n->args = yyvsp[0].list;
					yyval.vsetstmt = n;
				}
    break;

  case 150:
#line 1014 "gram.y"
    {
					VariableSetStmt *n = makeNode(VariableSetStmt);
					n->name = "SESSION CHARACTERISTICS";
					n->args = yyvsp[0].list;
					yyval.vsetstmt = n;
				}
    break;

  case 151:
#line 1021 "gram.y"
    {
					VariableSetStmt *n = makeNode(VariableSetStmt);
					n->name = "client_encoding";
					if (yyvsp[0].str != NULL)
						n->args = list_make1(makeStringConst(yyvsp[0].str, NULL));
					yyval.vsetstmt = n;
				}
    break;

  case 152:
#line 1029 "gram.y"
    {
					VariableSetStmt *n = makeNode(VariableSetStmt);
					n->name = "role";
					n->args = list_make1(makeStringConst(yyvsp[0].str, NULL));
					yyval.vsetstmt = n;
				}
    break;

  case 153:
#line 1036 "gram.y"
    {
					VariableSetStmt *n = makeNode(VariableSetStmt);
					n->name = "session_authorization";
					n->args = list_make1(makeStringConst(yyvsp[0].str, NULL));
					yyval.vsetstmt = n;
				}
    break;

  case 154:
#line 1043 "gram.y"
    {
					VariableSetStmt *n = makeNode(VariableSetStmt);
					n->name = "session_authorization";
					n->args = NIL;
					yyval.vsetstmt = n;
				}
    break;

  case 155:
#line 1052 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 156:
#line 1054 "gram.y"
    {
					int qLen = strlen(yyvsp[-2].str);
					char* qualName = palloc(qLen + strlen(yyvsp[0].str) + 2);
					strcpy(qualName, yyvsp[-2].str);
					qualName[qLen] = '.';
					strcpy(qualName + qLen + 1, yyvsp[0].str);
					yyval.str = qualName;
				}
    break;

  case 157:
#line 1065 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 158:
#line 1066 "gram.y"
    { yyval.list = NIL; }
    break;

  case 159:
#line 1069 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 160:
#line 1070 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node); }
    break;

  case 161:
#line 1074 "gram.y"
    { yyval.node = makeStringConst(yyvsp[0].str, NULL); }
    break;

  case 162:
#line 1076 "gram.y"
    { yyval.node = makeStringConst(yyvsp[0].str, NULL); }
    break;

  case 163:
#line 1078 "gram.y"
    { yyval.node = makeAConst(yyvsp[0].value); }
    break;

  case 164:
#line 1081 "gram.y"
    { yyval.str = "read uncommitted"; }
    break;

  case 165:
#line 1082 "gram.y"
    { yyval.str = "read committed"; }
    break;

  case 166:
#line 1083 "gram.y"
    { yyval.str = "repeatable read"; }
    break;

  case 167:
#line 1084 "gram.y"
    { yyval.str = "serializable"; }
    break;

  case 168:
#line 1088 "gram.y"
    { yyval.str = "true"; }
    break;

  case 169:
#line 1089 "gram.y"
    { yyval.str = "false"; }
    break;

  case 170:
#line 1090 "gram.y"
    { yyval.str = "on"; }
    break;

  case 171:
#line 1091 "gram.y"
    { yyval.str = "off"; }
    break;

  case 172:
#line 1104 "gram.y"
    {
					yyval.node = makeStringConst(yyvsp[0].str, NULL);
				}
    break;

  case 173:
#line 1108 "gram.y"
    {
					yyval.node = makeStringConst(yyvsp[0].str, NULL);
				}
    break;

  case 174:
#line 1112 "gram.y"
    {
					A_Const *n = (A_Const *) makeStringConst(yyvsp[-1].str, yyvsp[-2].typnam);
					if (yyvsp[0].ival != INTERVAL_FULL_RANGE)
					{
						if ((yyvsp[0].ival & ~(INTERVAL_MASK(HOUR) | INTERVAL_MASK(MINUTE))) != 0)
							ereport(ERROR,
									(errcode(ERRCODE_SYNTAX_ERROR),
									 errmsg("time zone interval must be HOUR or HOUR TO MINUTE")));
						n->typename->typmod = INTERVAL_TYPMOD(INTERVAL_FULL_PRECISION, yyvsp[0].ival);
					}
					yyval.node = (Node *)n;
				}
    break;

  case 175:
#line 1125 "gram.y"
    {
					A_Const *n = (A_Const *) makeStringConst(yyvsp[-1].str, yyvsp[-5].typnam);
					if (yyvsp[-3].ival < 0)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("INTERVAL(%d) precision must not be negative",
										yyvsp[-3].ival)));
					if (yyvsp[-3].ival > MAX_INTERVAL_PRECISION)
					{
						ereport(WARNING,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("INTERVAL(%d) precision reduced to maximum allowed, %d",
										yyvsp[-3].ival, MAX_INTERVAL_PRECISION)));
						yyvsp[-3].ival = MAX_INTERVAL_PRECISION;
					}

					if ((yyvsp[0].ival != INTERVAL_FULL_RANGE)
						&& ((yyvsp[0].ival & ~(INTERVAL_MASK(HOUR) | INTERVAL_MASK(MINUTE))) != 0))
						ereport(ERROR,
								(errcode(ERRCODE_SYNTAX_ERROR),
								 errmsg("time zone interval must be HOUR or HOUR TO MINUTE")));

					n->typename->typmod = INTERVAL_TYPMOD(yyvsp[-3].ival, yyvsp[0].ival);

					yyval.node = (Node *)n;
				}
    break;

  case 176:
#line 1151 "gram.y"
    { yyval.node = makeAConst(yyvsp[0].value); }
    break;

  case 177:
#line 1152 "gram.y"
    { yyval.node = NULL; }
    break;

  case 178:
#line 1153 "gram.y"
    { yyval.node = NULL; }
    break;

  case 179:
#line 1157 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 180:
#line 1158 "gram.y"
    { yyval.str = NULL; }
    break;

  case 181:
#line 1159 "gram.y"
    { yyval.str = NULL; }
    break;

  case 182:
#line 1163 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 183:
#line 1164 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 184:
#line 1170 "gram.y"
    {
					VariableShowStmt *n = makeNode(VariableShowStmt);
					n->name = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 185:
#line 1176 "gram.y"
    {
					VariableShowStmt *n = makeNode(VariableShowStmt);
					n->name = "timezone";
					yyval.node = (Node *) n;
				}
    break;

  case 186:
#line 1182 "gram.y"
    {
					VariableShowStmt *n = makeNode(VariableShowStmt);
					n->name = "transaction_isolation";
					yyval.node = (Node *) n;
				}
    break;

  case 187:
#line 1188 "gram.y"
    {
					VariableShowStmt *n = makeNode(VariableShowStmt);
					n->name = "session_authorization";
					yyval.node = (Node *) n;
				}
    break;

  case 188:
#line 1194 "gram.y"
    {
					VariableShowStmt *n = makeNode(VariableShowStmt);
					n->name = "all";
					yyval.node = (Node *) n;
				}
    break;

  case 189:
#line 1203 "gram.y"
    {
					VariableResetStmt *n = makeNode(VariableResetStmt);
					n->name = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 190:
#line 1209 "gram.y"
    {
					VariableResetStmt *n = makeNode(VariableResetStmt);
					n->name = "timezone";
					yyval.node = (Node *) n;
				}
    break;

  case 191:
#line 1215 "gram.y"
    {
					VariableResetStmt *n = makeNode(VariableResetStmt);
					n->name = "transaction_isolation";
					yyval.node = (Node *) n;
				}
    break;

  case 192:
#line 1221 "gram.y"
    {
					VariableResetStmt *n = makeNode(VariableResetStmt);
					n->name = "session_authorization";
					yyval.node = (Node *) n;
				}
    break;

  case 193:
#line 1227 "gram.y"
    {
					VariableResetStmt *n = makeNode(VariableResetStmt);
					n->name = "all";
					yyval.node = (Node *) n;
				}
    break;

  case 194:
#line 1237 "gram.y"
    {
					ConstraintsSetStmt *n = makeNode(ConstraintsSetStmt);
					n->constraints = yyvsp[-1].list;
					n->deferred    = yyvsp[0].boolean;
					yyval.node = (Node *) n;
				}
    break;

  case 195:
#line 1246 "gram.y"
    { yyval.list = NIL; }
    break;

  case 196:
#line 1247 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 197:
#line 1251 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 198:
#line 1252 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 199:
#line 1261 "gram.y"
    {
					CheckPointStmt *n = makeNode(CheckPointStmt);
					yyval.node = (Node *)n;
				}
    break;

  case 200:
#line 1276 "gram.y"
    {
					AlterTableStmt *n = makeNode(AlterTableStmt);
					n->relation = yyvsp[-1].range;
					n->cmds = yyvsp[0].list;
					n->relkind = OBJECT_TABLE;
					yyval.node = (Node *)n;
				}
    break;

  case 201:
#line 1284 "gram.y"
    {
					AlterTableStmt *n = makeNode(AlterTableStmt);
					n->relation = yyvsp[-1].range;
					n->cmds = yyvsp[0].list;
					n->relkind = OBJECT_INDEX;
					yyval.node = (Node *)n;
				}
    break;

  case 202:
#line 1294 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 203:
#line 1295 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node); }
    break;

  case 204:
#line 1302 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_AddColumn;
					n->def = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 205:
#line 1310 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_ColumnDefault;
					n->name = yyvsp[-1].str;
					n->def = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 206:
#line 1319 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_DropNotNull;
					n->name = yyvsp[-3].str;
					yyval.node = (Node *)n;
				}
    break;

  case 207:
#line 1327 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_SetNotNull;
					n->name = yyvsp[-3].str;
					yyval.node = (Node *)n;
				}
    break;

  case 208:
#line 1335 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_SetStatistics;
					n->name = yyvsp[-3].str;
					n->def = (Node *) yyvsp[0].value;
					yyval.node = (Node *)n;
				}
    break;

  case 209:
#line 1344 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_SetStorage;
					n->name = yyvsp[-3].str;
					n->def = (Node *) makeString(yyvsp[0].str);
					yyval.node = (Node *)n;
				}
    break;

  case 210:
#line 1353 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_DropColumn;
					n->name = yyvsp[-1].str;
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node *)n;
				}
    break;

  case 211:
#line 1365 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_AlterColumnType;
					n->name = yyvsp[-3].str;
					n->def = (Node *) yyvsp[-1].typnam;
					n->transform = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 212:
#line 1375 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_AddConstraint;
					n->def = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 213:
#line 1383 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_DropConstraint;
					n->name = yyvsp[-1].str;
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node *)n;
				}
    break;

  case 214:
#line 1392 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_DropOids;
					yyval.node = (Node *)n;
				}
    break;

  case 215:
#line 1399 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_ToastTable;
					yyval.node = (Node *)n;
				}
    break;

  case 216:
#line 1406 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_ClusterOn;
					n->name = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 217:
#line 1414 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_DropCluster;
					n->name = NULL;
					yyval.node = (Node *)n;
				}
    break;

  case 218:
#line 1422 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_EnableTrig;
					n->name = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 219:
#line 1430 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_EnableTrigAll;
					yyval.node = (Node *)n;
				}
    break;

  case 220:
#line 1437 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_EnableTrigUser;
					yyval.node = (Node *)n;
				}
    break;

  case 221:
#line 1444 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_DisableTrig;
					n->name = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 222:
#line 1452 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_DisableTrigAll;
					yyval.node = (Node *)n;
				}
    break;

  case 223:
#line 1459 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_DisableTrigUser;
					yyval.node = (Node *)n;
				}
    break;

  case 224:
#line 1465 "gram.y"
    {
					yyval.node = yyvsp[0].node;
				}
    break;

  case 225:
#line 1471 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 226:
#line 1472 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node); }
    break;

  case 227:
#line 1479 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_ChangeOwner;
					n->name = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 228:
#line 1487 "gram.y"
    {
					AlterTableCmd *n = makeNode(AlterTableCmd);
					n->subtype = AT_SetTableSpace;
					n->name = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 229:
#line 1497 "gram.y"
    {
					/* Treat SET DEFAULT NULL the same as DROP DEFAULT */
					if (exprIsNullConstant(yyvsp[0].node))
						yyval.node = NULL;
					else
						yyval.node = yyvsp[0].node;
				}
    break;

  case 230:
#line 1504 "gram.y"
    { yyval.node = NULL; }
    break;

  case 231:
#line 1508 "gram.y"
    { yyval.dbehavior = DROP_CASCADE; }
    break;

  case 232:
#line 1509 "gram.y"
    { yyval.dbehavior = DROP_RESTRICT; }
    break;

  case 233:
#line 1510 "gram.y"
    { yyval.dbehavior = DROP_RESTRICT; /* default */ }
    break;

  case 234:
#line 1514 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 235:
#line 1515 "gram.y"
    { yyval.node = NULL; }
    break;

  case 236:
#line 1529 "gram.y"
    {
					ClosePortalStmt *n = makeNode(ClosePortalStmt);
					n->portalname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 237:
#line 1549 "gram.y"
    {
					CopyStmt *n = makeNode(CopyStmt);
					n->relation = yyvsp[-7].range;
					n->attlist = yyvsp[-6].list;
					n->is_from = yyvsp[-4].boolean;
					n->filename = yyvsp[-3].str;

					n->options = NIL;
					/* Concatenate user-supplied flags */
					if (yyvsp[-8].defelt)
						n->options = lappend(n->options, yyvsp[-8].defelt);
					if (yyvsp[-5].defelt)
						n->options = lappend(n->options, yyvsp[-5].defelt);
					if (yyvsp[-2].defelt)
						n->options = lappend(n->options, yyvsp[-2].defelt);
					if (yyvsp[0].list)
						n->options = list_concat(n->options, yyvsp[0].list);
					yyval.node = (Node *)n;
				}
    break;

  case 238:
#line 1571 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 239:
#line 1572 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 240:
#line 1581 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 241:
#line 1582 "gram.y"
    { yyval.str = NULL; }
    break;

  case 242:
#line 1583 "gram.y"
    { yyval.str = NULL; }
    break;

  case 243:
#line 1589 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].defelt); }
    break;

  case 244:
#line 1590 "gram.y"
    { yyval.list = NIL; }
    break;

  case 245:
#line 1596 "gram.y"
    {
					yyval.defelt = makeDefElem("binary", (Node *)makeInteger(TRUE));
				}
    break;

  case 246:
#line 1600 "gram.y"
    {
					yyval.defelt = makeDefElem("oids", (Node *)makeInteger(TRUE));
				}
    break;

  case 247:
#line 1604 "gram.y"
    {
					yyval.defelt = makeDefElem("delimiter", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 248:
#line 1608 "gram.y"
    {
					yyval.defelt = makeDefElem("null", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 249:
#line 1612 "gram.y"
    {
					yyval.defelt = makeDefElem("csv", (Node *)makeInteger(TRUE));
				}
    break;

  case 250:
#line 1616 "gram.y"
    {
					yyval.defelt = makeDefElem("header", (Node *)makeInteger(TRUE));
				}
    break;

  case 251:
#line 1620 "gram.y"
    {
					yyval.defelt = makeDefElem("quote", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 252:
#line 1624 "gram.y"
    {
					yyval.defelt = makeDefElem("escape", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 253:
#line 1628 "gram.y"
    {
					yyval.defelt = makeDefElem("force_quote", (Node *)yyvsp[0].list);
				}
    break;

  case 254:
#line 1632 "gram.y"
    {
					yyval.defelt = makeDefElem("force_notnull", (Node *)yyvsp[0].list);
				}
    break;

  case 255:
#line 1641 "gram.y"
    {
					yyval.defelt = makeDefElem("binary", (Node *)makeInteger(TRUE));
				}
    break;

  case 256:
#line 1644 "gram.y"
    { yyval.defelt = NULL; }
    break;

  case 257:
#line 1649 "gram.y"
    {
					yyval.defelt = makeDefElem("oids", (Node *)makeInteger(TRUE));
				}
    break;

  case 258:
#line 1652 "gram.y"
    { yyval.defelt = NULL; }
    break;

  case 259:
#line 1658 "gram.y"
    {
					yyval.defelt = makeDefElem("delimiter", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 260:
#line 1661 "gram.y"
    { yyval.defelt = NULL; }
    break;

  case 261:
#line 1665 "gram.y"
    {}
    break;

  case 262:
#line 1666 "gram.y"
    {}
    break;

  case 263:
#line 1679 "gram.y"
    {
					CreateStmt *n = makeNode(CreateStmt);
					yyvsp[-7].range->istemp = yyvsp[-9].boolean;
					n->relation = yyvsp[-7].range;
					n->tableElts = yyvsp[-5].list;
					n->inhRelations = yyvsp[-3].list;
					n->constraints = NIL;
					n->hasoids = yyvsp[-2].withoids;
					n->oncommit = yyvsp[-1].oncommit;
					n->tablespacename = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 264:
#line 1693 "gram.y"
    {
					/* SQL99 CREATE TABLE OF <UDT> (cols) seems to be satisfied
					 * by our inheritance capabilities. Let's try it...
					 */
					CreateStmt *n = makeNode(CreateStmt);
					yyvsp[-8].range->istemp = yyvsp[-10].boolean;
					n->relation = yyvsp[-8].range;
					n->tableElts = yyvsp[-4].list;
					n->inhRelations = list_make1(yyvsp[-6].range);
					n->constraints = NIL;
					n->hasoids = yyvsp[-2].withoids;
					n->oncommit = yyvsp[-1].oncommit;
					n->tablespacename = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 265:
#line 1717 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 266:
#line 1718 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 267:
#line 1719 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 268:
#line 1720 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 269:
#line 1721 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 270:
#line 1722 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 271:
#line 1723 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 272:
#line 1727 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 273:
#line 1728 "gram.y"
    { yyval.list = NIL; }
    break;

  case 274:
#line 1733 "gram.y"
    {
					yyval.list = list_make1(yyvsp[0].node);
				}
    break;

  case 275:
#line 1737 "gram.y"
    {
					yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node);
				}
    break;

  case 276:
#line 1743 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 277:
#line 1744 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 278:
#line 1745 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 279:
#line 1749 "gram.y"
    {
					ColumnDef *n = makeNode(ColumnDef);
					n->colname = yyvsp[-2].str;
					n->typename = yyvsp[-1].typnam;
					n->constraints = yyvsp[0].list;
					n->is_local = true;
					yyval.node = (Node *)n;
				}
    break;

  case 280:
#line 1760 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].node); }
    break;

  case 281:
#line 1761 "gram.y"
    { yyval.list = NIL; }
    break;

  case 282:
#line 1766 "gram.y"
    {
					switch (nodeTag(yyvsp[0].node))
					{
						case T_Constraint:
							{
								Constraint *n = (Constraint *)yyvsp[0].node;
								n->name = yyvsp[-1].str;
							}
							break;
						case T_FkConstraint:
							{
								FkConstraint *n = (FkConstraint *)yyvsp[0].node;
								n->constr_name = yyvsp[-1].str;
							}
							break;
						default:
							break;
					}
					yyval.node = yyvsp[0].node;
				}
    break;

  case 283:
#line 1786 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 284:
#line 1787 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 285:
#line 1807 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_NOTNULL;
					n->name = NULL;
					n->raw_expr = NULL;
					n->cooked_expr = NULL;
					n->keys = NULL;
					n->indexspace = NULL;
					yyval.node = (Node *)n;
				}
    break;

  case 286:
#line 1818 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_NULL;
					n->name = NULL;
					n->raw_expr = NULL;
					n->cooked_expr = NULL;
					n->keys = NULL;
					n->indexspace = NULL;
					yyval.node = (Node *)n;
				}
    break;

  case 287:
#line 1829 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_UNIQUE;
					n->name = NULL;
					n->raw_expr = NULL;
					n->cooked_expr = NULL;
					n->keys = NULL;
					n->indexspace = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 288:
#line 1840 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_PRIMARY;
					n->name = NULL;
					n->raw_expr = NULL;
					n->cooked_expr = NULL;
					n->keys = NULL;
					n->indexspace = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 289:
#line 1851 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_CHECK;
					n->name = NULL;
					n->raw_expr = yyvsp[-1].node;
					n->cooked_expr = NULL;
					n->keys = NULL;
					n->indexspace = NULL;
					yyval.node = (Node *)n;
				}
    break;

  case 290:
#line 1862 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_DEFAULT;
					n->name = NULL;
					if (exprIsNullConstant(yyvsp[0].node))
					{
						/* DEFAULT NULL should be reported as empty expr */
						n->raw_expr = NULL;
					}
					else
					{
						n->raw_expr = yyvsp[0].node;
					}
					n->cooked_expr = NULL;
					n->keys = NULL;
					n->indexspace = NULL;
					yyval.node = (Node *)n;
				}
    break;

  case 291:
#line 1881 "gram.y"
    {
					FkConstraint *n = makeNode(FkConstraint);
					n->constr_name		= NULL;
					n->pktable			= yyvsp[-3].range;
					n->fk_attrs			= NIL;
					n->pk_attrs			= yyvsp[-2].list;
					n->fk_matchtype		= yyvsp[-1].ival;
					n->fk_upd_action	= (char) (yyvsp[0].ival >> 8);
					n->fk_del_action	= (char) (yyvsp[0].ival & 0xFF);
					n->deferrable		= FALSE;
					n->initdeferred		= FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 292:
#line 1909 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_ATTR_DEFERRABLE;
					yyval.node = (Node *)n;
				}
    break;

  case 293:
#line 1915 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_ATTR_NOT_DEFERRABLE;
					yyval.node = (Node *)n;
				}
    break;

  case 294:
#line 1921 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_ATTR_DEFERRED;
					yyval.node = (Node *)n;
				}
    break;

  case 295:
#line 1927 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_ATTR_IMMEDIATE;
					yyval.node = (Node *)n;
				}
    break;

  case 296:
#line 1945 "gram.y"
    {
					InhRelation *n = makeNode(InhRelation);
					n->relation = yyvsp[-1].range;
					n->including_defaults = yyvsp[0].boolean;

					yyval.node = (Node *)n;
				}
    break;

  case 297:
#line 1955 "gram.y"
    { yyval.boolean = true; }
    break;

  case 298:
#line 1956 "gram.y"
    { yyval.boolean = false; }
    break;

  case 299:
#line 1957 "gram.y"
    { yyval.boolean = false; }
    break;

  case 300:
#line 1967 "gram.y"
    {
					switch (nodeTag(yyvsp[0].node))
					{
						case T_Constraint:
							{
								Constraint *n = (Constraint *)yyvsp[0].node;
								n->name = yyvsp[-1].str;
							}
							break;
						case T_FkConstraint:
							{
								FkConstraint *n = (FkConstraint *)yyvsp[0].node;
								n->constr_name = yyvsp[-1].str;
							}
							break;
						default:
							break;
					}
					yyval.node = yyvsp[0].node;
				}
    break;

  case 301:
#line 1987 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 302:
#line 1992 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_CHECK;
					n->name = NULL;
					n->raw_expr = yyvsp[-1].node;
					n->cooked_expr = NULL;
					n->indexspace = NULL;
					yyval.node = (Node *)n;
				}
    break;

  case 303:
#line 2002 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_UNIQUE;
					n->name = NULL;
					n->raw_expr = NULL;
					n->cooked_expr = NULL;
					n->keys = yyvsp[-2].list;
					n->indexspace = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 304:
#line 2013 "gram.y"
    {
					Constraint *n = makeNode(Constraint);
					n->contype = CONSTR_PRIMARY;
					n->name = NULL;
					n->raw_expr = NULL;
					n->cooked_expr = NULL;
					n->keys = yyvsp[-2].list;
					n->indexspace = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 305:
#line 2025 "gram.y"
    {
					FkConstraint *n = makeNode(FkConstraint);
					n->constr_name		= NULL;
					n->pktable			= yyvsp[-4].range;
					n->fk_attrs			= yyvsp[-7].list;
					n->pk_attrs			= yyvsp[-3].list;
					n->fk_matchtype		= yyvsp[-2].ival;
					n->fk_upd_action	= (char) (yyvsp[-1].ival >> 8);
					n->fk_del_action	= (char) (yyvsp[-1].ival & 0xFF);
					n->deferrable		= (yyvsp[0].ival & 1) != 0;
					n->initdeferred		= (yyvsp[0].ival & 2) != 0;
					yyval.node = (Node *)n;
				}
    break;

  case 306:
#line 2041 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 307:
#line 2042 "gram.y"
    { yyval.list = NIL; }
    break;

  case 308:
#line 2046 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 309:
#line 2047 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node); }
    break;

  case 310:
#line 2051 "gram.y"
    {
					yyval.node = (Node *) makeString(yyvsp[0].str);
				}
    break;

  case 311:
#line 2057 "gram.y"
    {
				yyval.ival = FKCONSTR_MATCH_FULL;
			}
    break;

  case 312:
#line 2061 "gram.y"
    {
				ereport(ERROR,
						(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
						 errmsg("MATCH PARTIAL not yet implemented")));
				yyval.ival = FKCONSTR_MATCH_PARTIAL;
			}
    break;

  case 313:
#line 2068 "gram.y"
    {
				yyval.ival = FKCONSTR_MATCH_UNSPECIFIED;
			}
    break;

  case 314:
#line 2072 "gram.y"
    {
				yyval.ival = FKCONSTR_MATCH_UNSPECIFIED;
			}
    break;

  case 315:
#line 2085 "gram.y"
    { yyval.ival = (yyvsp[0].ival << 8) | (FKCONSTR_ACTION_NOACTION & 0xFF); }
    break;

  case 316:
#line 2087 "gram.y"
    { yyval.ival = (FKCONSTR_ACTION_NOACTION << 8) | (yyvsp[0].ival & 0xFF); }
    break;

  case 317:
#line 2089 "gram.y"
    { yyval.ival = (yyvsp[-1].ival << 8) | (yyvsp[0].ival & 0xFF); }
    break;

  case 318:
#line 2091 "gram.y"
    { yyval.ival = (yyvsp[0].ival << 8) | (yyvsp[-1].ival & 0xFF); }
    break;

  case 319:
#line 2093 "gram.y"
    { yyval.ival = (FKCONSTR_ACTION_NOACTION << 8) | (FKCONSTR_ACTION_NOACTION & 0xFF); }
    break;

  case 320:
#line 2096 "gram.y"
    { yyval.ival = yyvsp[0].ival; }
    break;

  case 321:
#line 2099 "gram.y"
    { yyval.ival = yyvsp[0].ival; }
    break;

  case 322:
#line 2103 "gram.y"
    { yyval.ival = FKCONSTR_ACTION_NOACTION; }
    break;

  case 323:
#line 2104 "gram.y"
    { yyval.ival = FKCONSTR_ACTION_RESTRICT; }
    break;

  case 324:
#line 2105 "gram.y"
    { yyval.ival = FKCONSTR_ACTION_CASCADE; }
    break;

  case 325:
#line 2106 "gram.y"
    { yyval.ival = FKCONSTR_ACTION_SETNULL; }
    break;

  case 326:
#line 2107 "gram.y"
    { yyval.ival = FKCONSTR_ACTION_SETDEFAULT; }
    break;

  case 327:
#line 2110 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 328:
#line 2111 "gram.y"
    { yyval.list = NIL; }
    break;

  case 329:
#line 2115 "gram.y"
    { yyval.withoids = MUST_HAVE_OIDS; }
    break;

  case 330:
#line 2116 "gram.y"
    { yyval.withoids = MUST_NOT_HAVE_OIDS; }
    break;

  case 331:
#line 2117 "gram.y"
    { yyval.withoids = DEFAULT_OIDS; }
    break;

  case 332:
#line 2120 "gram.y"
    { yyval.oncommit = ONCOMMIT_DROP; }
    break;

  case 333:
#line 2121 "gram.y"
    { yyval.oncommit = ONCOMMIT_DELETE_ROWS; }
    break;

  case 334:
#line 2122 "gram.y"
    { yyval.oncommit = ONCOMMIT_PRESERVE_ROWS; }
    break;

  case 335:
#line 2123 "gram.y"
    { yyval.oncommit = ONCOMMIT_NOOP; }
    break;

  case 336:
#line 2126 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 337:
#line 2127 "gram.y"
    { yyval.str = NULL; }
    break;

  case 338:
#line 2130 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 339:
#line 2131 "gram.y"
    { yyval.str = NULL; }
    break;

  case 340:
#line 2142 "gram.y"
    {
					/*
					 * When the SelectStmt is a set-operation tree, we must
					 * stuff the INTO information into the leftmost component
					 * Select, because that's where analyze.c will expect
					 * to find it.	Similarly, the output column names must
					 * be attached to that Select's target list.
					 */
					SelectStmt *n = findLeftmostSelect((SelectStmt *) yyvsp[0].node);
					if (n->into != NULL)
						ereport(ERROR,
								(errcode(ERRCODE_SYNTAX_ERROR),
								 errmsg("CREATE TABLE AS may not specify INTO")));
					yyvsp[-3].range->istemp = yyvsp[-5].boolean;
					n->into = yyvsp[-3].range;
					n->intoColNames = yyvsp[-2].list;
					n->intoHasOids = yyvsp[-1].withoids;
					yyval.node = yyvsp[0].node;
				}
    break;

  case 341:
#line 2170 "gram.y"
    { yyval.withoids = MUST_HAVE_OIDS; }
    break;

  case 342:
#line 2171 "gram.y"
    { yyval.withoids = MUST_NOT_HAVE_OIDS; }
    break;

  case 343:
#line 2172 "gram.y"
    { yyval.withoids = DEFAULT_OIDS; }
    break;

  case 344:
#line 2176 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 345:
#line 2177 "gram.y"
    { yyval.list = NIL; }
    break;

  case 346:
#line 2181 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 347:
#line 2182 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node); }
    break;

  case 348:
#line 2187 "gram.y"
    {
					ColumnDef *n = makeNode(ColumnDef);
					n->colname = yyvsp[0].str;
					n->typename = NULL;
					n->inhcount = 0;
					n->is_local = true;
					n->is_not_null = false;
					n->raw_default = NULL;
					n->cooked_default = NULL;
					n->constraints = NIL;
					n->support = NULL;
					yyval.node = (Node *)n;
				}
    break;

  case 349:
#line 2213 "gram.y"
    {
					CreateSeqStmt *n = makeNode(CreateSeqStmt);
					yyvsp[-1].range->istemp = yyvsp[-3].boolean;
					n->sequence = yyvsp[-1].range;
					n->options = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 350:
#line 2224 "gram.y"
    {
					AlterSeqStmt *n = makeNode(AlterSeqStmt);
					n->sequence = yyvsp[-1].range;
					n->options = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 351:
#line 2232 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].defelt); }
    break;

  case 352:
#line 2233 "gram.y"
    { yyval.list = NIL; }
    break;

  case 353:
#line 2237 "gram.y"
    {
					yyval.defelt = makeDefElem("cache", (Node *)yyvsp[0].value);
				}
    break;

  case 354:
#line 2241 "gram.y"
    {
					yyval.defelt = makeDefElem("cycle", (Node *)makeInteger(TRUE));
				}
    break;

  case 355:
#line 2245 "gram.y"
    {
					yyval.defelt = makeDefElem("cycle", (Node *)makeInteger(FALSE));
				}
    break;

  case 356:
#line 2249 "gram.y"
    {
					yyval.defelt = makeDefElem("increment", (Node *)yyvsp[0].value);
				}
    break;

  case 357:
#line 2253 "gram.y"
    {
					yyval.defelt = makeDefElem("maxvalue", (Node *)yyvsp[0].value);
				}
    break;

  case 358:
#line 2257 "gram.y"
    {
					yyval.defelt = makeDefElem("minvalue", (Node *)yyvsp[0].value);
				}
    break;

  case 359:
#line 2261 "gram.y"
    {
					yyval.defelt = makeDefElem("maxvalue", NULL);
				}
    break;

  case 360:
#line 2265 "gram.y"
    {
					yyval.defelt = makeDefElem("minvalue", NULL);
				}
    break;

  case 361:
#line 2269 "gram.y"
    {
					yyval.defelt = makeDefElem("start", (Node *)yyvsp[0].value);
				}
    break;

  case 362:
#line 2273 "gram.y"
    {
					yyval.defelt = makeDefElem("restart", (Node *)yyvsp[0].value);
				}
    break;

  case 363:
#line 2278 "gram.y"
    {}
    break;

  case 364:
#line 2279 "gram.y"
    {}
    break;

  case 365:
#line 2283 "gram.y"
    { yyval.value = yyvsp[0].value; }
    break;

  case 366:
#line 2284 "gram.y"
    { yyval.value = yyvsp[0].value; }
    break;

  case 367:
#line 2287 "gram.y"
    { yyval.value = makeFloat(yyvsp[0].str); }
    break;

  case 368:
#line 2289 "gram.y"
    {
					yyval.value = makeFloat(yyvsp[0].str);
					doNegateFloat(yyval.value);
				}
    break;

  case 369:
#line 2295 "gram.y"
    { yyval.value = makeInteger(yyvsp[0].ival); }
    break;

  case 370:
#line 2308 "gram.y"
    {
				CreatePLangStmt *n = makeNode(CreatePLangStmt);
				n->plname = yyvsp[0].str;
				/* parameters are all to be supplied by system */
				n->plhandler = NIL;
				n->plvalidator = NIL;
				n->pltrusted = false;
				yyval.node = (Node *)n;
			}
    break;

  case 371:
#line 2319 "gram.y"
    {
				CreatePLangStmt *n = makeNode(CreatePLangStmt);
				n->plname = yyvsp[-4].str;
				n->plhandler = yyvsp[-2].list;
				n->plvalidator = yyvsp[-1].list;
				n->pltrusted = yyvsp[-7].boolean;
				/* LANCOMPILER is now ignored entirely */
				yyval.node = (Node *)n;
			}
    break;

  case 372:
#line 2331 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 373:
#line 2332 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 374:
#line 2340 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 375:
#line 2341 "gram.y"
    { yyval.list = lcons(makeString(yyvsp[-1].str), yyvsp[0].list); }
    break;

  case 376:
#line 2345 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 377:
#line 2346 "gram.y"
    { yyval.list = NIL; }
    break;

  case 378:
#line 2350 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 379:
#line 2351 "gram.y"
    { yyval.str = NULL; }
    break;

  case 380:
#line 2356 "gram.y"
    {
					DropPLangStmt *n = makeNode(DropPLangStmt);
					n->plname = yyvsp[-1].str;
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node *)n;
				}
    break;

  case 381:
#line 2365 "gram.y"
    {}
    break;

  case 382:
#line 2366 "gram.y"
    {}
    break;

  case 383:
#line 2377 "gram.y"
    {
					CreateTableSpaceStmt *n = makeNode(CreateTableSpaceStmt);
					n->tablespacename = yyvsp[-3].str;
					n->owner = yyvsp[-2].str;
					n->location = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 384:
#line 2386 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 385:
#line 2387 "gram.y"
    { yyval.str = NULL; }
    break;

  case 386:
#line 2401 "gram.y"
    {
					DropTableSpaceStmt *n = makeNode(DropTableSpaceStmt);
					n->tablespacename = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 387:
#line 2420 "gram.y"
    {
					CreateTrigStmt *n = makeNode(CreateTrigStmt);
					n->trigname = yyvsp[-11].str;
					n->relation = yyvsp[-7].range;
					n->funcname = yyvsp[-3].list;
					n->args = yyvsp[-1].list;
					n->before = yyvsp[-10].boolean;
					n->row = yyvsp[-6].boolean;
					memcpy(n->actions, yyvsp[-9].str, 4);
					n->isconstraint  = FALSE;
					n->deferrable	 = FALSE;
					n->initdeferred  = FALSE;
					n->constrrel = NULL;
					yyval.node = (Node *)n;
				}
    break;

  case 388:
#line 2440 "gram.y"
    {
					CreateTrigStmt *n = makeNode(CreateTrigStmt);
					n->trigname = yyvsp[-15].str;
					n->relation = yyvsp[-11].range;
					n->funcname = yyvsp[-3].list;
					n->args = yyvsp[-1].list;
					n->before = FALSE;
					n->row = TRUE;
					memcpy(n->actions, yyvsp[-13].str, 4);
					n->isconstraint  = TRUE;
					n->deferrable = (yyvsp[-9].ival & 1) != 0;
					n->initdeferred = (yyvsp[-9].ival & 2) != 0;

					n->constrrel = yyvsp[-10].range;
					yyval.node = (Node *)n;
				}
    break;

  case 389:
#line 2459 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 390:
#line 2460 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 391:
#line 2465 "gram.y"
    {
					char *e = palloc(4);
					e[0] = yyvsp[0].chr; e[1] = '\0';
					yyval.str = e;
				}
    break;

  case 392:
#line 2471 "gram.y"
    {
					char *e = palloc(4);
					e[0] = yyvsp[-2].chr; e[1] = yyvsp[0].chr; e[2] = '\0';
					yyval.str = e;
				}
    break;

  case 393:
#line 2477 "gram.y"
    {
					char *e = palloc(4);
					e[0] = yyvsp[-4].chr; e[1] = yyvsp[-2].chr; e[2] = yyvsp[0].chr; e[3] = '\0';
					yyval.str = e;
				}
    break;

  case 394:
#line 2485 "gram.y"
    { yyval.chr = 'i'; }
    break;

  case 395:
#line 2486 "gram.y"
    { yyval.chr = 'd'; }
    break;

  case 396:
#line 2487 "gram.y"
    { yyval.chr = 'u'; }
    break;

  case 397:
#line 2492 "gram.y"
    {
					yyval.boolean = yyvsp[0].boolean;
				}
    break;

  case 398:
#line 2496 "gram.y"
    {
					/*
					 * If ROW/STATEMENT not specified, default to
					 * STATEMENT, per SQL
					 */
					yyval.boolean = FALSE;
				}
    break;

  case 399:
#line 2506 "gram.y"
    {}
    break;

  case 400:
#line 2507 "gram.y"
    {}
    break;

  case 401:
#line 2511 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 402:
#line 2512 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 403:
#line 2516 "gram.y"
    { yyval.list = list_make1(yyvsp[0].value); }
    break;

  case 404:
#line 2517 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].value); }
    break;

  case 405:
#line 2518 "gram.y"
    { yyval.list = NIL; }
    break;

  case 406:
#line 2523 "gram.y"
    {
					char buf[64];
					snprintf(buf, sizeof(buf), "%d", yyvsp[0].ival);
					yyval.value = makeString(pstrdup(buf));
				}
    break;

  case 407:
#line 2528 "gram.y"
    { yyval.value = makeString(yyvsp[0].str); }
    break;

  case 408:
#line 2529 "gram.y"
    { yyval.value = makeString(yyvsp[0].str); }
    break;

  case 409:
#line 2530 "gram.y"
    { yyval.value = makeString(yyvsp[0].str); }
    break;

  case 410:
#line 2531 "gram.y"
    { yyval.value = makeString(yyvsp[0].str); }
    break;

  case 411:
#line 2532 "gram.y"
    { yyval.value = makeString(yyvsp[0].str); }
    break;

  case 412:
#line 2536 "gram.y"
    { yyval.range = yyvsp[0].range; }
    break;

  case 413:
#line 2537 "gram.y"
    { yyval.range = NULL; }
    break;

  case 414:
#line 2542 "gram.y"
    { yyval.ival = yyvsp[0].ival; }
    break;

  case 415:
#line 2544 "gram.y"
    {
					if (yyvsp[-1].ival == 0 && yyvsp[0].ival != 0)
						ereport(ERROR,
								(errcode(ERRCODE_SYNTAX_ERROR),
								 errmsg("constraint declared INITIALLY DEFERRED must be DEFERRABLE")));
					yyval.ival = yyvsp[-1].ival | yyvsp[0].ival;
				}
    break;

  case 416:
#line 2552 "gram.y"
    {
					if (yyvsp[0].ival != 0)
						yyval.ival = 3;
					else
						yyval.ival = 0;
				}
    break;

  case 417:
#line 2559 "gram.y"
    {
					if (yyvsp[0].ival == 0 && yyvsp[-1].ival != 0)
						ereport(ERROR,
								(errcode(ERRCODE_SYNTAX_ERROR),
								 errmsg("constraint declared INITIALLY DEFERRED must be DEFERRABLE")));
					yyval.ival = yyvsp[-1].ival | yyvsp[0].ival;
				}
    break;

  case 418:
#line 2567 "gram.y"
    { yyval.ival = 0; }
    break;

  case 419:
#line 2571 "gram.y"
    { yyval.ival = 0; }
    break;

  case 420:
#line 2572 "gram.y"
    { yyval.ival = 1; }
    break;

  case 421:
#line 2576 "gram.y"
    { yyval.ival = 0; }
    break;

  case 422:
#line 2577 "gram.y"
    { yyval.ival = 2; }
    break;

  case 423:
#line 2583 "gram.y"
    {
					DropPropertyStmt *n = makeNode(DropPropertyStmt);
					n->relation = yyvsp[-1].range;
					n->property = yyvsp[-3].str;
					n->behavior = yyvsp[0].dbehavior;
					n->removeType = OBJECT_TRIGGER;
					yyval.node = (Node *) n;
				}
    break;

  case 424:
#line 2605 "gram.y"
    {
					CreateTrigStmt *n = makeNode(CreateTrigStmt);
					n->trigname = yyvsp[-5].str;
					n->args = list_make1(yyvsp[-2].node);
					n->isconstraint  = TRUE;
					n->deferrable = (yyvsp[0].ival & 1) != 0;
					n->initdeferred = (yyvsp[0].ival & 2) != 0;

					ereport(ERROR,
							(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
							 errmsg("CREATE ASSERTION is not yet implemented")));

					yyval.node = (Node *)n;
				}
    break;

  case 425:
#line 2623 "gram.y"
    {
					DropPropertyStmt *n = makeNode(DropPropertyStmt);
					n->relation = NULL;
					n->property = yyvsp[-1].str;
					n->behavior = yyvsp[0].dbehavior;
					n->removeType = OBJECT_TRIGGER; /* XXX */
					ereport(ERROR,
							(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
							 errmsg("DROP ASSERTION is not yet implemented")));
					yyval.node = (Node *) n;
				}
    break;

  case 426:
#line 2646 "gram.y"
    {
					DefineStmt *n = makeNode(DefineStmt);
					n->kind = OBJECT_AGGREGATE;
					n->defnames = yyvsp[-1].list;
					n->definition = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 427:
#line 2654 "gram.y"
    {
					DefineStmt *n = makeNode(DefineStmt);
					n->kind = OBJECT_OPERATOR;
					n->defnames = yyvsp[-1].list;
					n->definition = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 428:
#line 2662 "gram.y"
    {
					DefineStmt *n = makeNode(DefineStmt);
					n->kind = OBJECT_TYPE;
					n->defnames = yyvsp[-1].list;
					n->definition = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 429:
#line 2670 "gram.y"
    {
					CompositeTypeStmt *n = makeNode(CompositeTypeStmt);
					RangeVar *r = makeNode(RangeVar);

					/* can't use qualified_name, sigh */
					switch (list_length(yyvsp[-4].list))
					{
						case 1:
							r->catalogname = NULL;
							r->schemaname = NULL;
							r->relname = strVal(linitial(yyvsp[-4].list));
							break;
						case 2:
							r->catalogname = NULL;
							r->schemaname = strVal(linitial(yyvsp[-4].list));
							r->relname = strVal(lsecond(yyvsp[-4].list));
							break;
						case 3:
							r->catalogname = strVal(linitial(yyvsp[-4].list));
							r->schemaname = strVal(lsecond(yyvsp[-4].list));
							r->relname = strVal(lthird(yyvsp[-4].list));
							break;
						default:
							ereport(ERROR,
									(errcode(ERRCODE_SYNTAX_ERROR),
									 errmsg("improper qualified name (too many dotted names): %s",
											NameListToString(yyvsp[-4].list))));
							break;
					}
					n->typevar = r;
					n->coldeflist = yyvsp[-1].list;
					yyval.node = (Node *)n;
				}
    break;

  case 430:
#line 2705 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 431:
#line 2708 "gram.y"
    { yyval.list = list_make1(yyvsp[0].defelt); }
    break;

  case 432:
#line 2709 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].defelt); }
    break;

  case 433:
#line 2713 "gram.y"
    {
					yyval.defelt = makeDefElem(yyvsp[-2].str, (Node *)yyvsp[0].node);
				}
    break;

  case 434:
#line 2717 "gram.y"
    {
					yyval.defelt = makeDefElem(yyvsp[0].str, NULL);
				}
    break;

  case 435:
#line 2723 "gram.y"
    { yyval.node = (Node *)yyvsp[0].typnam; }
    break;

  case 436:
#line 2724 "gram.y"
    { yyval.node = (Node *)yyvsp[0].list; }
    break;

  case 437:
#line 2725 "gram.y"
    { yyval.node = (Node *)yyvsp[0].value; }
    break;

  case 438:
#line 2726 "gram.y"
    { yyval.node = (Node *)makeString(yyvsp[0].str); }
    break;

  case 439:
#line 2741 "gram.y"
    {
					CreateOpClassStmt *n = makeNode(CreateOpClassStmt);
					n->opclassname = yyvsp[-8].list;
					n->isDefault = yyvsp[-7].boolean;
					n->datatype = yyvsp[-4].typnam;
					n->amname = yyvsp[-2].str;
					n->items = yyvsp[0].list;
					yyval.node = (Node *) n;
				}
    break;

  case 440:
#line 2753 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 441:
#line 2754 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node); }
    break;

  case 442:
#line 2759 "gram.y"
    {
					CreateOpClassItem *n = makeNode(CreateOpClassItem);
					n->itemtype = OPCLASS_ITEM_OPERATOR;
					n->name = yyvsp[-1].list;
					n->args = NIL;
					n->number = yyvsp[-2].ival;
					n->recheck = yyvsp[0].boolean;
					yyval.node = (Node *) n;
				}
    break;

  case 443:
#line 2769 "gram.y"
    {
					CreateOpClassItem *n = makeNode(CreateOpClassItem);
					n->itemtype = OPCLASS_ITEM_OPERATOR;
					n->name = yyvsp[-4].list;
					n->args = yyvsp[-2].list;
					n->number = yyvsp[-5].ival;
					n->recheck = yyvsp[0].boolean;
					yyval.node = (Node *) n;
				}
    break;

  case 444:
#line 2779 "gram.y"
    {
					CreateOpClassItem *n = makeNode(CreateOpClassItem);
					n->itemtype = OPCLASS_ITEM_FUNCTION;
					n->name = yyvsp[-1].list;
					n->args = extractArgTypes(yyvsp[0].list);
					n->number = yyvsp[-2].ival;
					yyval.node = (Node *) n;
				}
    break;

  case 445:
#line 2788 "gram.y"
    {
					CreateOpClassItem *n = makeNode(CreateOpClassItem);
					n->itemtype = OPCLASS_ITEM_STORAGETYPE;
					n->storedtype = yyvsp[0].typnam;
					yyval.node = (Node *) n;
				}
    break;

  case 446:
#line 2796 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 447:
#line 2797 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 448:
#line 2800 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 449:
#line 2801 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 450:
#line 2807 "gram.y"
    {
					RemoveOpClassStmt *n = makeNode(RemoveOpClassStmt);
					n->opclassname = yyvsp[-3].list;
					n->amname = yyvsp[-1].str;
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node *) n;
				}
    break;

  case 451:
#line 2826 "gram.y"
    {
					DropStmt *n = makeNode(DropStmt);
					n->removeType = yyvsp[-2].objtype;
					n->objects = yyvsp[-1].list;
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node *)n;
				}
    break;

  case 452:
#line 2835 "gram.y"
    { yyval.objtype = OBJECT_TABLE; }
    break;

  case 453:
#line 2836 "gram.y"
    { yyval.objtype = OBJECT_SEQUENCE; }
    break;

  case 454:
#line 2837 "gram.y"
    { yyval.objtype = OBJECT_VIEW; }
    break;

  case 455:
#line 2838 "gram.y"
    { yyval.objtype = OBJECT_INDEX; }
    break;

  case 456:
#line 2839 "gram.y"
    { yyval.objtype = OBJECT_TYPE; }
    break;

  case 457:
#line 2840 "gram.y"
    { yyval.objtype = OBJECT_DOMAIN; }
    break;

  case 458:
#line 2841 "gram.y"
    { yyval.objtype = OBJECT_CONVERSION; }
    break;

  case 459:
#line 2842 "gram.y"
    { yyval.objtype = OBJECT_SCHEMA; }
    break;

  case 460:
#line 2846 "gram.y"
    { yyval.list = list_make1(yyvsp[0].list); }
    break;

  case 461:
#line 2847 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].list); }
    break;

  case 462:
#line 2850 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 463:
#line 2851 "gram.y"
    { yyval.list = lcons(makeString(yyvsp[-1].str), yyvsp[0].list); }
    break;

  case 464:
#line 2855 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 465:
#line 2857 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, makeString(yyvsp[0].str)); }
    break;

  case 466:
#line 2870 "gram.y"
    {
					TruncateStmt *n = makeNode(TruncateStmt);
					n->relations = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 467:
#line 2896 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = yyvsp[-3].objtype;
					n->objname = yyvsp[-2].list;
					n->objargs = NIL;
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 468:
#line 2906 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_AGGREGATE;
					n->objname = yyvsp[-5].list;
					n->objargs = list_make1(yyvsp[-3].typnam);
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 469:
#line 2915 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_FUNCTION;
					n->objname = yyvsp[-3].list;
					n->objargs = extractArgTypes(yyvsp[-2].list);
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 470:
#line 2925 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_OPERATOR;
					n->objname = yyvsp[-5].list;
					n->objargs = yyvsp[-3].list;
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 471:
#line 2934 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_CONSTRAINT;
					n->objname = lappend(yyvsp[-2].list, makeString(yyvsp[-4].str));
					n->objargs = NIL;
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 472:
#line 2943 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_RULE;
					n->objname = lappend(yyvsp[-2].list, makeString(yyvsp[-4].str));
					n->objargs = NIL;
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 473:
#line 2952 "gram.y"
    {
					/* Obsolete syntax supported for awhile for compatibility */
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_RULE;
					n->objname = list_make1(makeString(yyvsp[-2].str));
					n->objargs = NIL;
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 474:
#line 2962 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_TRIGGER;
					n->objname = lappend(yyvsp[-2].list, makeString(yyvsp[-4].str));
					n->objargs = NIL;
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 475:
#line 2971 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_OPCLASS;
					n->objname = yyvsp[-4].list;
					n->objargs = list_make1(makeString(yyvsp[-2].str));
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 476:
#line 2980 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_LARGEOBJECT;
					n->objname = list_make1(yyvsp[-2].value);
					n->objargs = NIL;
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 477:
#line 2989 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_CAST;
					n->objname = list_make1(yyvsp[-5].typnam);
					n->objargs = list_make1(yyvsp[-3].typnam);
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 478:
#line 2998 "gram.y"
    {
					CommentStmt *n = makeNode(CommentStmt);
					n->objtype = OBJECT_LANGUAGE;
					n->objname = yyvsp[-2].list;
					n->objargs = NIL;
					n->comment = yyvsp[0].str;
					yyval.node = (Node *) n;
				}
    break;

  case 479:
#line 3009 "gram.y"
    { yyval.objtype = OBJECT_COLUMN; }
    break;

  case 480:
#line 3010 "gram.y"
    { yyval.objtype = OBJECT_DATABASE; }
    break;

  case 481:
#line 3011 "gram.y"
    { yyval.objtype = OBJECT_SCHEMA; }
    break;

  case 482:
#line 3012 "gram.y"
    { yyval.objtype = OBJECT_INDEX; }
    break;

  case 483:
#line 3013 "gram.y"
    { yyval.objtype = OBJECT_SEQUENCE; }
    break;

  case 484:
#line 3014 "gram.y"
    { yyval.objtype = OBJECT_TABLE; }
    break;

  case 485:
#line 3015 "gram.y"
    { yyval.objtype = OBJECT_TYPE; }
    break;

  case 486:
#line 3016 "gram.y"
    { yyval.objtype = OBJECT_TYPE; }
    break;

  case 487:
#line 3017 "gram.y"
    { yyval.objtype = OBJECT_VIEW; }
    break;

  case 488:
#line 3018 "gram.y"
    { yyval.objtype = OBJECT_CONVERSION; }
    break;

  case 489:
#line 3022 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 490:
#line 3023 "gram.y"
    { yyval.str = NULL; }
    break;

  case 491:
#line 3034 "gram.y"
    {
					FetchStmt *n = (FetchStmt *) yyvsp[-2].node;
					n->portalname = yyvsp[0].str;
					n->ismove = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 492:
#line 3041 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_FORWARD;
					n->howMany = 1;
					n->portalname = yyvsp[0].str;
					n->ismove = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 493:
#line 3050 "gram.y"
    {
					FetchStmt *n = (FetchStmt *) yyvsp[-2].node;
					n->portalname = yyvsp[0].str;
					n->ismove = TRUE;
					yyval.node = (Node *)n;
				}
    break;

  case 494:
#line 3057 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_FORWARD;
					n->howMany = 1;
					n->portalname = yyvsp[0].str;
					n->ismove = TRUE;
					yyval.node = (Node *)n;
				}
    break;

  case 495:
#line 3069 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_FORWARD;
					n->howMany = 1;
					yyval.node = (Node *)n;
				}
    break;

  case 496:
#line 3076 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_FORWARD;
					n->howMany = 1;
					yyval.node = (Node *)n;
				}
    break;

  case 497:
#line 3083 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_BACKWARD;
					n->howMany = 1;
					yyval.node = (Node *)n;
				}
    break;

  case 498:
#line 3090 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_ABSOLUTE;
					n->howMany = 1;
					yyval.node = (Node *)n;
				}
    break;

  case 499:
#line 3097 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_ABSOLUTE;
					n->howMany = -1;
					yyval.node = (Node *)n;
				}
    break;

  case 500:
#line 3104 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_ABSOLUTE;
					n->howMany = yyvsp[0].ival;
					yyval.node = (Node *)n;
				}
    break;

  case 501:
#line 3111 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_RELATIVE;
					n->howMany = yyvsp[0].ival;
					yyval.node = (Node *)n;
				}
    break;

  case 502:
#line 3118 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_FORWARD;
					n->howMany = yyvsp[0].ival;
					yyval.node = (Node *)n;
				}
    break;

  case 503:
#line 3125 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_FORWARD;
					n->howMany = FETCH_ALL;
					yyval.node = (Node *)n;
				}
    break;

  case 504:
#line 3132 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_FORWARD;
					n->howMany = 1;
					yyval.node = (Node *)n;
				}
    break;

  case 505:
#line 3139 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_FORWARD;
					n->howMany = yyvsp[0].ival;
					yyval.node = (Node *)n;
				}
    break;

  case 506:
#line 3146 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_FORWARD;
					n->howMany = FETCH_ALL;
					yyval.node = (Node *)n;
				}
    break;

  case 507:
#line 3153 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_BACKWARD;
					n->howMany = 1;
					yyval.node = (Node *)n;
				}
    break;

  case 508:
#line 3160 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_BACKWARD;
					n->howMany = yyvsp[0].ival;
					yyval.node = (Node *)n;
				}
    break;

  case 509:
#line 3167 "gram.y"
    {
					FetchStmt *n = makeNode(FetchStmt);
					n->direction = FETCH_BACKWARD;
					n->howMany = FETCH_ALL;
					yyval.node = (Node *)n;
				}
    break;

  case 510:
#line 3175 "gram.y"
    {}
    break;

  case 511:
#line 3176 "gram.y"
    {}
    break;

  case 512:
#line 3188 "gram.y"
    {
					GrantStmt *n = makeNode(GrantStmt);
					n->is_grant = true;
					n->privileges = yyvsp[-5].list;
					n->objtype = (yyvsp[-3].privtarget)->objtype;
					n->objects = (yyvsp[-3].privtarget)->objs;
					n->grantees = yyvsp[-1].list;
					n->grant_option = yyvsp[0].boolean;
					yyval.node = (Node*)n;
				}
    break;

  case 513:
#line 3203 "gram.y"
    {
					GrantStmt *n = makeNode(GrantStmt);
					n->is_grant = false;
					n->grant_option = false;
					n->privileges = yyvsp[-5].list;
					n->objtype = (yyvsp[-3].privtarget)->objtype;
					n->objects = (yyvsp[-3].privtarget)->objs;
					n->grantees = yyvsp[-1].list;
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node *)n;
				}
    break;

  case 514:
#line 3216 "gram.y"
    {
					GrantStmt *n = makeNode(GrantStmt);
					n->is_grant = false;
					n->grant_option = true;
					n->privileges = yyvsp[-5].list;
					n->objtype = (yyvsp[-3].privtarget)->objtype;
					n->objects = (yyvsp[-3].privtarget)->objs;
					n->grantees = yyvsp[-1].list;
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node *)n;
				}
    break;

  case 515:
#line 3241 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 516:
#line 3243 "gram.y"
    { yyval.list = NIL; }
    break;

  case 517:
#line 3245 "gram.y"
    { yyval.list = NIL; }
    break;

  case 518:
#line 3249 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 519:
#line 3251 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, makeString(yyvsp[0].str)); }
    break;

  case 520:
#line 3254 "gram.y"
    { yyval.str = pstrdup(yyvsp[0].keyword); }
    break;

  case 521:
#line 3255 "gram.y"
    { yyval.str = pstrdup(yyvsp[0].keyword); }
    break;

  case 522:
#line 3256 "gram.y"
    { yyval.str = pstrdup(yyvsp[0].keyword); }
    break;

  case 523:
#line 3257 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 524:
#line 3266 "gram.y"
    {
					PrivTarget *n = makeNode(PrivTarget);
					n->objtype = ACL_OBJECT_RELATION;
					n->objs = yyvsp[0].list;
					yyval.privtarget = n;
				}
    break;

  case 525:
#line 3273 "gram.y"
    {
					PrivTarget *n = makeNode(PrivTarget);
					n->objtype = ACL_OBJECT_RELATION;
					n->objs = yyvsp[0].list;
					yyval.privtarget = n;
				}
    break;

  case 526:
#line 3280 "gram.y"
    {
					PrivTarget *n = makeNode(PrivTarget);
					n->objtype = ACL_OBJECT_FUNCTION;
					n->objs = yyvsp[0].list;
					yyval.privtarget = n;
				}
    break;

  case 527:
#line 3287 "gram.y"
    {
					PrivTarget *n = makeNode(PrivTarget);
					n->objtype = ACL_OBJECT_DATABASE;
					n->objs = yyvsp[0].list;
					yyval.privtarget = n;
				}
    break;

  case 528:
#line 3294 "gram.y"
    {
					PrivTarget *n = makeNode(PrivTarget);
					n->objtype = ACL_OBJECT_LANGUAGE;
					n->objs = yyvsp[0].list;
					yyval.privtarget = n;
				}
    break;

  case 529:
#line 3301 "gram.y"
    {
					PrivTarget *n = makeNode(PrivTarget);
					n->objtype = ACL_OBJECT_NAMESPACE;
					n->objs = yyvsp[0].list;
					yyval.privtarget = n;
				}
    break;

  case 530:
#line 3308 "gram.y"
    {
					PrivTarget *n = makeNode(PrivTarget);
					n->objtype = ACL_OBJECT_TABLESPACE;
					n->objs = yyvsp[0].list;
					yyval.privtarget = n;
				}
    break;

  case 531:
#line 3318 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 532:
#line 3319 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node); }
    break;

  case 533:
#line 3323 "gram.y"
    {
					PrivGrantee *n = makeNode(PrivGrantee);
					/* This hack lets us avoid reserving PUBLIC as a keyword*/
					if (strcmp(yyvsp[0].str, "public") == 0)
						n->rolname = NULL;
					else
						n->rolname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 534:
#line 3333 "gram.y"
    {
					PrivGrantee *n = makeNode(PrivGrantee);
					/* Treat GROUP PUBLIC as a synonym for PUBLIC */
					if (strcmp(yyvsp[0].str, "public") == 0)
						n->rolname = NULL;
					else
						n->rolname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 535:
#line 3346 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 536:
#line 3347 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 537:
#line 3351 "gram.y"
    { yyval.list = list_make1(yyvsp[0].funwithargs); }
    break;

  case 538:
#line 3353 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].funwithargs); }
    break;

  case 539:
#line 3358 "gram.y"
    {
					FuncWithArgs *n = makeNode(FuncWithArgs);
					n->funcname = yyvsp[-1].list;
					n->funcargs = extractArgTypes(yyvsp[0].list);
					yyval.funwithargs = n;
				}
    break;

  case 540:
#line 3374 "gram.y"
    {
					GrantRoleStmt *n = makeNode(GrantRoleStmt);
					n->is_grant = true;
					n->granted_roles = yyvsp[-4].list;
					n->grantee_roles = yyvsp[-2].list;
					n->admin_opt = yyvsp[-1].boolean;
					n->grantor = yyvsp[0].str;
					yyval.node = (Node*)n;
				}
    break;

  case 541:
#line 3387 "gram.y"
    {
					GrantRoleStmt *n = makeNode(GrantRoleStmt);
					n->is_grant = false;
					n->admin_opt = false;
					n->granted_roles = yyvsp[-4].list;
					n->grantee_roles = yyvsp[-2].list;
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node*)n;
				}
    break;

  case 542:
#line 3397 "gram.y"
    {
					GrantRoleStmt *n = makeNode(GrantRoleStmt);
					n->is_grant = false;
					n->admin_opt = true;
					n->granted_roles = yyvsp[-4].list;
					n->grantee_roles = yyvsp[-2].list;
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node*)n;
				}
    break;

  case 543:
#line 3408 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 544:
#line 3409 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 545:
#line 3412 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 546:
#line 3413 "gram.y"
    { yyval.str = NULL; }
    break;

  case 547:
#line 3430 "gram.y"
    {
					IndexStmt *n = makeNode(IndexStmt);
					n->unique = yyvsp[-10].boolean;
					n->idxname = yyvsp[-8].str;
					n->relation = yyvsp[-6].range;
					n->accessMethod = yyvsp[-5].str;
					n->indexParams = yyvsp[-3].list;
					n->tableSpace = yyvsp[-1].str;
					n->whereClause = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 548:
#line 3444 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 549:
#line 3445 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 550:
#line 3449 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 551:
#line 3450 "gram.y"
    { yyval.str = DEFAULT_INDEX_TYPE; }
    break;

  case 552:
#line 3453 "gram.y"
    { yyval.list = list_make1(yyvsp[0].ielem); }
    break;

  case 553:
#line 3454 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].ielem); }
    break;

  case 554:
#line 3463 "gram.y"
    {
					yyval.ielem = makeNode(IndexElem);
					yyval.ielem->name = yyvsp[-1].str;
					yyval.ielem->expr = NULL;
					yyval.ielem->opclass = yyvsp[0].list;
				}
    break;

  case 555:
#line 3470 "gram.y"
    {
					yyval.ielem = makeNode(IndexElem);
					yyval.ielem->name = NULL;
					yyval.ielem->expr = yyvsp[-1].node;
					yyval.ielem->opclass = yyvsp[0].list;
				}
    break;

  case 556:
#line 3477 "gram.y"
    {
					yyval.ielem = makeNode(IndexElem);
					yyval.ielem->name = NULL;
					yyval.ielem->expr = yyvsp[-2].node;
					yyval.ielem->opclass = yyvsp[0].list;
				}
    break;

  case 557:
#line 3485 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 558:
#line 3486 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 559:
#line 3487 "gram.y"
    { yyval.list = NIL; }
    break;

  case 560:
#line 3504 "gram.y"
    {
					CreateFunctionStmt *n = makeNode(CreateFunctionStmt);
					n->replace = yyvsp[-7].boolean;
					n->funcname = yyvsp[-5].list;
					n->parameters = yyvsp[-4].list;
					n->returnType = yyvsp[-2].typnam;
					n->options = yyvsp[-1].list;
					n->withClause = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 561:
#line 3516 "gram.y"
    {
					CreateFunctionStmt *n = makeNode(CreateFunctionStmt);
					n->replace = yyvsp[-5].boolean;
					n->funcname = yyvsp[-3].list;
					n->parameters = yyvsp[-2].list;
					n->returnType = NULL;
					n->options = yyvsp[-1].list;
					n->withClause = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 562:
#line 3529 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 563:
#line 3530 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 564:
#line 3533 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 565:
#line 3534 "gram.y"
    { yyval.list = NIL; }
    break;

  case 566:
#line 3538 "gram.y"
    { yyval.list = list_make1(yyvsp[0].fun_param); }
    break;

  case 567:
#line 3539 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].fun_param); }
    break;

  case 568:
#line 3554 "gram.y"
    {
					FunctionParameter *n = makeNode(FunctionParameter);
					n->name = yyvsp[-1].str;
					n->argType = yyvsp[0].typnam;
					n->mode = yyvsp[-2].fun_param_mode;
					yyval.fun_param = n;
				}
    break;

  case 569:
#line 3562 "gram.y"
    {
					FunctionParameter *n = makeNode(FunctionParameter);
					n->name = yyvsp[-2].str;
					n->argType = yyvsp[0].typnam;
					n->mode = yyvsp[-1].fun_param_mode;
					yyval.fun_param = n;
				}
    break;

  case 570:
#line 3570 "gram.y"
    {
					FunctionParameter *n = makeNode(FunctionParameter);
					n->name = yyvsp[-1].str;
					n->argType = yyvsp[0].typnam;
					n->mode = FUNC_PARAM_IN;
					yyval.fun_param = n;
				}
    break;

  case 571:
#line 3578 "gram.y"
    {
					FunctionParameter *n = makeNode(FunctionParameter);
					n->name = NULL;
					n->argType = yyvsp[0].typnam;
					n->mode = yyvsp[-1].fun_param_mode;
					yyval.fun_param = n;
				}
    break;

  case 572:
#line 3586 "gram.y"
    {
					FunctionParameter *n = makeNode(FunctionParameter);
					n->name = NULL;
					n->argType = yyvsp[0].typnam;
					n->mode = FUNC_PARAM_IN;
					yyval.fun_param = n;
				}
    break;

  case 573:
#line 3596 "gram.y"
    { yyval.fun_param_mode = FUNC_PARAM_IN; }
    break;

  case 574:
#line 3597 "gram.y"
    { yyval.fun_param_mode = FUNC_PARAM_OUT; }
    break;

  case 575:
#line 3598 "gram.y"
    { yyval.fun_param_mode = FUNC_PARAM_INOUT; }
    break;

  case 576:
#line 3599 "gram.y"
    { yyval.fun_param_mode = FUNC_PARAM_INOUT; }
    break;

  case 578:
#line 3610 "gram.y"
    {
					/* We can catch over-specified results here if we want to,
					 * but for now better to silently swallow typmod, etc.
					 * - thomas 2000-03-22
					 */
					yyval.typnam = yyvsp[0].typnam;
				}
    break;

  case 579:
#line 3623 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 580:
#line 3625 "gram.y"
    {
					yyval.typnam = makeNode(TypeName);
					yyval.typnam->names = lcons(makeString(yyvsp[-3].str), yyvsp[-2].list);
					yyval.typnam->pct_type = true;
					yyval.typnam->typmod = -1;
				}
    break;

  case 581:
#line 3636 "gram.y"
    { yyval.list = list_make1(yyvsp[0].defelt); }
    break;

  case 582:
#line 3637 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].defelt); }
    break;

  case 583:
#line 3645 "gram.y"
    {
					yyval.defelt = makeDefElem("strict", (Node *)makeInteger(FALSE));
				}
    break;

  case 584:
#line 3649 "gram.y"
    {
					yyval.defelt = makeDefElem("strict", (Node *)makeInteger(TRUE));
				}
    break;

  case 585:
#line 3653 "gram.y"
    {
					yyval.defelt = makeDefElem("strict", (Node *)makeInteger(TRUE));
				}
    break;

  case 586:
#line 3657 "gram.y"
    {
					yyval.defelt = makeDefElem("volatility", (Node *)makeString("immutable"));
				}
    break;

  case 587:
#line 3661 "gram.y"
    {
					yyval.defelt = makeDefElem("volatility", (Node *)makeString("stable"));
				}
    break;

  case 588:
#line 3665 "gram.y"
    {
					yyval.defelt = makeDefElem("volatility", (Node *)makeString("volatile"));
				}
    break;

  case 589:
#line 3669 "gram.y"
    {
					yyval.defelt = makeDefElem("security", (Node *)makeInteger(TRUE));
				}
    break;

  case 590:
#line 3673 "gram.y"
    {
					yyval.defelt = makeDefElem("security", (Node *)makeInteger(FALSE));
				}
    break;

  case 591:
#line 3677 "gram.y"
    {
					yyval.defelt = makeDefElem("security", (Node *)makeInteger(TRUE));
				}
    break;

  case 592:
#line 3681 "gram.y"
    {
					yyval.defelt = makeDefElem("security", (Node *)makeInteger(FALSE));
				}
    break;

  case 593:
#line 3688 "gram.y"
    {
					yyval.defelt = makeDefElem("as", (Node *)yyvsp[0].list);
				}
    break;

  case 594:
#line 3692 "gram.y"
    {
					yyval.defelt = makeDefElem("language", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 595:
#line 3696 "gram.y"
    {
					yyval.defelt = yyvsp[0].defelt;
				}
    break;

  case 596:
#line 3701 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 597:
#line 3703 "gram.y"
    {
					yyval.list = list_make2(makeString(yyvsp[-2].str), makeString(yyvsp[0].str));
				}
    break;

  case 598:
#line 3709 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 599:
#line 3710 "gram.y"
    { yyval.list = NIL; }
    break;

  case 600:
#line 3723 "gram.y"
    {
					AlterFunctionStmt *n = makeNode(AlterFunctionStmt);
					n->func = yyvsp[-2].funwithargs;
					n->actions = yyvsp[-1].list;
					yyval.node = (Node *) n;
				}
    break;

  case 601:
#line 3733 "gram.y"
    { yyval.list = list_make1(yyvsp[0].defelt); }
    break;

  case 602:
#line 3734 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].defelt); }
    break;

  case 605:
#line 3756 "gram.y"
    {
					RemoveFuncStmt *n = makeNode(RemoveFuncStmt);
					n->funcname = yyvsp[-2].list;
					n->args = extractArgTypes(yyvsp[-1].list);
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node *)n;
				}
    break;

  case 606:
#line 3767 "gram.y"
    {
						RemoveAggrStmt *n = makeNode(RemoveAggrStmt);
						n->aggname = yyvsp[-4].list;
						n->aggtype = yyvsp[-2].typnam;
						n->behavior = yyvsp[0].dbehavior;
						yyval.node = (Node *)n;
				}
    break;

  case 607:
#line 3777 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 608:
#line 3778 "gram.y"
    { yyval.typnam = NULL; }
    break;

  case 609:
#line 3783 "gram.y"
    {
					RemoveOperStmt *n = makeNode(RemoveOperStmt);
					n->opname = yyvsp[-4].list;
					n->args = yyvsp[-2].list;
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node *)n;
				}
    break;

  case 610:
#line 3794 "gram.y"
    {
				   ereport(ERROR,
						   (errcode(ERRCODE_SYNTAX_ERROR),
							errmsg("missing argument"),
							errhint("Use NONE to denote the missing argument of a unary operator.")));
				}
    break;

  case 611:
#line 3801 "gram.y"
    { yyval.list = list_make2(yyvsp[-2].typnam, yyvsp[0].typnam); }
    break;

  case 612:
#line 3803 "gram.y"
    { yyval.list = list_make2(NULL, yyvsp[0].typnam); }
    break;

  case 613:
#line 3805 "gram.y"
    { yyval.list = list_make2(yyvsp[-2].typnam, NULL); }
    break;

  case 614:
#line 3810 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 615:
#line 3812 "gram.y"
    { yyval.list = lcons(makeString(yyvsp[-2].str), yyvsp[0].list); }
    break;

  case 616:
#line 3824 "gram.y"
    {
					CreateCastStmt *n = makeNode(CreateCastStmt);
					n->sourcetype = yyvsp[-7].typnam;
					n->targettype = yyvsp[-5].typnam;
					n->func = yyvsp[-1].funwithargs;
					n->context = (CoercionContext) yyvsp[0].ival;
					yyval.node = (Node *)n;
				}
    break;

  case 617:
#line 3834 "gram.y"
    {
					CreateCastStmt *n = makeNode(CreateCastStmt);
					n->sourcetype = yyvsp[-6].typnam;
					n->targettype = yyvsp[-4].typnam;
					n->func = NULL;
					n->context = (CoercionContext) yyvsp[0].ival;
					yyval.node = (Node *)n;
				}
    break;

  case 618:
#line 3844 "gram.y"
    { yyval.ival = COERCION_IMPLICIT; }
    break;

  case 619:
#line 3845 "gram.y"
    { yyval.ival = COERCION_ASSIGNMENT; }
    break;

  case 620:
#line 3846 "gram.y"
    { yyval.ival = COERCION_EXPLICIT; }
    break;

  case 621:
#line 3851 "gram.y"
    {
					DropCastStmt *n = makeNode(DropCastStmt);
					n->sourcetype = yyvsp[-4].typnam;
					n->targettype = yyvsp[-2].typnam;
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node *)n;
				}
    break;

  case 622:
#line 3873 "gram.y"
    {
					ReindexStmt *n = makeNode(ReindexStmt);
					n->kind = yyvsp[-2].objtype;
					n->relation = yyvsp[-1].range;
					n->name = NULL;
					yyval.node = (Node *)n;
				}
    break;

  case 623:
#line 3881 "gram.y"
    {
					ReindexStmt *n = makeNode(ReindexStmt);
					n->kind = OBJECT_DATABASE;
					n->name = yyvsp[-1].str;
					n->relation = NULL;
					n->do_system = true;
					n->do_user = false;
					yyval.node = (Node *)n;
				}
    break;

  case 624:
#line 3891 "gram.y"
    {
					ReindexStmt *n = makeNode(ReindexStmt);
					n->kind = OBJECT_DATABASE;
					n->name = yyvsp[-1].str;
					n->relation = NULL;
					n->do_system = true;
					n->do_user = true;
					yyval.node = (Node *)n;
				}
    break;

  case 625:
#line 3903 "gram.y"
    { yyval.objtype = OBJECT_INDEX; }
    break;

  case 626:
#line 3904 "gram.y"
    { yyval.objtype = OBJECT_TABLE; }
    break;

  case 627:
#line 3907 "gram.y"
    {  yyval.boolean = TRUE; }
    break;

  case 628:
#line 3908 "gram.y"
    {  yyval.boolean = FALSE; }
    break;

  case 629:
#line 3919 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_AGGREGATE;
					n->object = yyvsp[-6].list;
					n->objarg = list_make1(yyvsp[-4].typnam);
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 630:
#line 3928 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_CONVERSION;
					n->object = yyvsp[-3].list;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 631:
#line 3936 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_DATABASE;
					n->subname = yyvsp[-3].str;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 632:
#line 3944 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_FUNCTION;
					n->object = yyvsp[-4].list;
					n->objarg = extractArgTypes(yyvsp[-3].list);
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 633:
#line 3953 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_ROLE;
					n->subname = yyvsp[-3].str;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 634:
#line 3961 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_LANGUAGE;
					n->subname = yyvsp[-3].str;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 635:
#line 3969 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_OPCLASS;
					n->object = yyvsp[-5].list;
					n->subname = yyvsp[-3].str;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 636:
#line 3978 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_SCHEMA;
					n->subname = yyvsp[-3].str;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 637:
#line 3986 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_TABLE;
					n->relation = yyvsp[-3].range;
					n->subname = NULL;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 638:
#line 3995 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_INDEX;
					n->relation = yyvsp[-3].range;
					n->subname = NULL;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 639:
#line 4004 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_COLUMN;
					n->relation = yyvsp[-5].range;
					n->subname = yyvsp[-2].str;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 640:
#line 4013 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_TRIGGER;
					n->relation = yyvsp[-3].range;
					n->subname = yyvsp[-5].str;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 641:
#line 4022 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_ROLE;
					n->subname = yyvsp[-3].str;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 642:
#line 4030 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_ROLE;
					n->subname = yyvsp[-3].str;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 643:
#line 4038 "gram.y"
    {
					RenameStmt *n = makeNode(RenameStmt);
					n->renameType = OBJECT_TABLESPACE;
					n->subname = yyvsp[-3].str;
					n->newname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 644:
#line 4047 "gram.y"
    { yyval.ival = COLUMN; }
    break;

  case 645:
#line 4048 "gram.y"
    { yyval.ival = 0; }
    break;

  case 646:
#line 4059 "gram.y"
    {
					AlterObjectSchemaStmt *n = makeNode(AlterObjectSchemaStmt);
					n->objectType = OBJECT_AGGREGATE;
					n->object = yyvsp[-6].list;
					n->objarg = list_make1(yyvsp[-4].typnam);
					n->newschema = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 647:
#line 4068 "gram.y"
    {
					AlterObjectSchemaStmt *n = makeNode(AlterObjectSchemaStmt);
					n->objectType = OBJECT_DOMAIN;
					n->object = yyvsp[-3].list;
					n->newschema = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 648:
#line 4076 "gram.y"
    {
					AlterObjectSchemaStmt *n = makeNode(AlterObjectSchemaStmt);
					n->objectType = OBJECT_FUNCTION;
					n->object = yyvsp[-4].list;
					n->objarg = extractArgTypes(yyvsp[-3].list);
					n->newschema = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 649:
#line 4085 "gram.y"
    {
					AlterObjectSchemaStmt *n = makeNode(AlterObjectSchemaStmt);
					n->objectType = OBJECT_SEQUENCE;
					n->relation = yyvsp[-3].range;
					n->newschema = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 650:
#line 4093 "gram.y"
    {
					AlterObjectSchemaStmt *n = makeNode(AlterObjectSchemaStmt);
					n->objectType = OBJECT_TABLE;
					n->relation = yyvsp[-3].range;
					n->newschema = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 651:
#line 4101 "gram.y"
    {
					AlterObjectSchemaStmt *n = makeNode(AlterObjectSchemaStmt);
					n->objectType = OBJECT_TYPE;
					n->object = yyvsp[-3].list;
					n->newschema = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 652:
#line 4117 "gram.y"
    {
					AlterOwnerStmt *n = makeNode(AlterOwnerStmt);
					n->objectType = OBJECT_AGGREGATE;
					n->object = yyvsp[-6].list;
					n->objarg = list_make1(yyvsp[-4].typnam);
					n->newowner = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 653:
#line 4126 "gram.y"
    {
					AlterOwnerStmt *n = makeNode(AlterOwnerStmt);
					n->objectType = OBJECT_CONVERSION;
					n->object = yyvsp[-3].list;
					n->newowner = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 654:
#line 4134 "gram.y"
    {
					AlterOwnerStmt *n = makeNode(AlterOwnerStmt);
					n->objectType = OBJECT_DATABASE;
					n->object = list_make1(yyvsp[-3].str);
					n->newowner = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 655:
#line 4142 "gram.y"
    {
					AlterOwnerStmt *n = makeNode(AlterOwnerStmt);
					n->objectType = OBJECT_DOMAIN;
					n->object = yyvsp[-3].list;
					n->newowner = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 656:
#line 4150 "gram.y"
    {
					AlterOwnerStmt *n = makeNode(AlterOwnerStmt);
					n->objectType = OBJECT_FUNCTION;
					n->object = yyvsp[-4].list;
					n->objarg = extractArgTypes(yyvsp[-3].list);
					n->newowner = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 657:
#line 4159 "gram.y"
    {
					AlterOwnerStmt *n = makeNode(AlterOwnerStmt);
					n->objectType = OBJECT_OPERATOR;
					n->object = yyvsp[-6].list;
					n->objarg = yyvsp[-4].list;
					n->newowner = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 658:
#line 4168 "gram.y"
    {
					AlterOwnerStmt *n = makeNode(AlterOwnerStmt);
					n->objectType = OBJECT_OPCLASS;
					n->object = yyvsp[-5].list;
					n->addname = yyvsp[-3].str;
					n->newowner = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 659:
#line 4177 "gram.y"
    {
					AlterOwnerStmt *n = makeNode(AlterOwnerStmt);
					n->objectType = OBJECT_SCHEMA;
					n->object = list_make1(yyvsp[-3].str);
					n->newowner = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 660:
#line 4185 "gram.y"
    {
					AlterOwnerStmt *n = makeNode(AlterOwnerStmt);
					n->objectType = OBJECT_TYPE;
					n->object = yyvsp[-3].list;
					n->newowner = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 661:
#line 4193 "gram.y"
    {
					AlterOwnerStmt *n = makeNode(AlterOwnerStmt);
					n->objectType = OBJECT_TABLESPACE;
					n->object = list_make1(yyvsp[-3].str);
					n->newowner = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 662:
#line 4210 "gram.y"
    { QueryIsRule=TRUE; }
    break;

  case 663:
#line 4213 "gram.y"
    {
					RuleStmt *n = makeNode(RuleStmt);
					n->replace = yyvsp[-12].boolean;
					n->relation = yyvsp[-4].range;
					n->rulename = yyvsp[-10].str;
					n->whereClause = yyvsp[-3].node;
					n->event = yyvsp[-6].ival;
					n->instead = yyvsp[-1].boolean;
					n->actions = yyvsp[0].list;
					yyval.node = (Node *)n;
					QueryIsRule=FALSE;
				}
    break;

  case 664:
#line 4228 "gram.y"
    { yyval.list = NIL; }
    break;

  case 665:
#line 4229 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 666:
#line 4230 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 667:
#line 4236 "gram.y"
    { if (yyvsp[0].node != NULL)
					yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node);
				  else
					yyval.list = yyvsp[-2].list;
				}
    break;

  case 668:
#line 4242 "gram.y"
    { if (yyvsp[0].node != NULL)
					yyval.list = list_make1(yyvsp[0].node);
				  else
					yyval.list = NIL;
				}
    break;

  case 674:
#line 4258 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 675:
#line 4259 "gram.y"
    { yyval.node = NULL; }
    break;

  case 676:
#line 4263 "gram.y"
    { yyval.ival = CMD_SELECT; }
    break;

  case 677:
#line 4264 "gram.y"
    { yyval.ival = CMD_UPDATE; }
    break;

  case 678:
#line 4265 "gram.y"
    { yyval.ival = CMD_DELETE; }
    break;

  case 679:
#line 4266 "gram.y"
    { yyval.ival = CMD_INSERT; }
    break;

  case 680:
#line 4270 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 681:
#line 4271 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 682:
#line 4272 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 683:
#line 4278 "gram.y"
    {
					DropPropertyStmt *n = makeNode(DropPropertyStmt);
					n->relation = yyvsp[-1].range;
					n->property = yyvsp[-3].str;
					n->behavior = yyvsp[0].dbehavior;
					n->removeType = OBJECT_RULE;
					yyval.node = (Node *) n;
				}
    break;

  case 684:
#line 4298 "gram.y"
    {
					NotifyStmt *n = makeNode(NotifyStmt);
					n->relation = yyvsp[0].range;
					yyval.node = (Node *)n;
				}
    break;

  case 685:
#line 4306 "gram.y"
    {
					ListenStmt *n = makeNode(ListenStmt);
					n->relation = yyvsp[0].range;
					yyval.node = (Node *)n;
				}
    break;

  case 686:
#line 4315 "gram.y"
    {
					UnlistenStmt *n = makeNode(UnlistenStmt);
					n->relation = yyvsp[0].range;
					yyval.node = (Node *)n;
				}
    break;

  case 687:
#line 4321 "gram.y"
    {
					UnlistenStmt *n = makeNode(UnlistenStmt);
					n->relation = makeNode(RangeVar);
					n->relation->relname = "*";
					n->relation->schemaname = NULL;
					yyval.node = (Node *)n;
				}
    break;

  case 688:
#line 4342 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_ROLLBACK;
					n->options = NIL;
					yyval.node = (Node *)n;
				}
    break;

  case 689:
#line 4349 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_BEGIN;
					n->options = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 690:
#line 4356 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_START;
					n->options = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 691:
#line 4363 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_COMMIT;
					n->options = NIL;
					yyval.node = (Node *)n;
				}
    break;

  case 692:
#line 4370 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_COMMIT;
					n->options = NIL;
					yyval.node = (Node *)n;
				}
    break;

  case 693:
#line 4377 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_ROLLBACK;
					n->options = NIL;
					yyval.node = (Node *)n;
				}
    break;

  case 694:
#line 4384 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_SAVEPOINT;
					n->options = list_make1(makeDefElem("savepoint_name",
														(Node *)makeString(yyvsp[0].str)));
					yyval.node = (Node *)n;
				}
    break;

  case 695:
#line 4392 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_RELEASE;
					n->options = list_make1(makeDefElem("savepoint_name",
														(Node *)makeString(yyvsp[0].str)));
					yyval.node = (Node *)n;
				}
    break;

  case 696:
#line 4400 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_RELEASE;
					n->options = list_make1(makeDefElem("savepoint_name",
														(Node *)makeString(yyvsp[0].str)));
					yyval.node = (Node *)n;
				}
    break;

  case 697:
#line 4408 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_ROLLBACK_TO;
					n->options = list_make1(makeDefElem("savepoint_name",
														(Node *)makeString(yyvsp[0].str)));
					yyval.node = (Node *)n;
				}
    break;

  case 698:
#line 4416 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_ROLLBACK_TO;
					n->options = list_make1(makeDefElem("savepoint_name",
														(Node *)makeString(yyvsp[0].str)));
					yyval.node = (Node *)n;
				}
    break;

  case 699:
#line 4424 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_PREPARE;
					n->gid = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 700:
#line 4431 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_COMMIT_PREPARED;
					n->gid = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 701:
#line 4438 "gram.y"
    {
					TransactionStmt *n = makeNode(TransactionStmt);
					n->kind = TRANS_STMT_ROLLBACK_PREPARED;
					n->gid = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 702:
#line 4446 "gram.y"
    {}
    break;

  case 703:
#line 4447 "gram.y"
    {}
    break;

  case 704:
#line 4448 "gram.y"
    {}
    break;

  case 705:
#line 4453 "gram.y"
    { yyval.defelt = makeDefElem("transaction_isolation",
									   makeStringConst(yyvsp[0].str, NULL)); }
    break;

  case 706:
#line 4456 "gram.y"
    { yyval.defelt = makeDefElem("transaction_read_only",
									   makeIntConst(TRUE)); }
    break;

  case 707:
#line 4459 "gram.y"
    { yyval.defelt = makeDefElem("transaction_read_only",
									   makeIntConst(FALSE)); }
    break;

  case 708:
#line 4466 "gram.y"
    { yyval.list = list_make1(yyvsp[0].defelt); }
    break;

  case 709:
#line 4468 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].defelt); }
    break;

  case 710:
#line 4470 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].defelt); }
    break;

  case 712:
#line 4476 "gram.y"
    { yyval.list = NIL; }
    break;

  case 713:
#line 4489 "gram.y"
    {
					ViewStmt *n = makeNode(ViewStmt);
					n->replace = false;
					n->view = yyvsp[-3].range;
					n->view->istemp = yyvsp[-5].boolean;
					n->aliases = yyvsp[-2].list;
					n->query = (Query *) yyvsp[0].node;
					yyval.node = (Node *) n;
				}
    break;

  case 714:
#line 4500 "gram.y"
    {
					ViewStmt *n = makeNode(ViewStmt);
					n->replace = true;
					n->view = yyvsp[-3].range;
					n->view->istemp = yyvsp[-5].boolean;
					n->aliases = yyvsp[-2].list;
					n->query = (Query *) yyvsp[0].node;
					yyval.node = (Node *) n;
				}
    break;

  case 715:
#line 4519 "gram.y"
    {
					LoadStmt *n = makeNode(LoadStmt);
					n->filename = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 716:
#line 4535 "gram.y"
    {
					CreatedbStmt *n = makeNode(CreatedbStmt);
					n->dbname = yyvsp[-2].str;
					n->options = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 717:
#line 4544 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].defelt); }
    break;

  case 718:
#line 4545 "gram.y"
    { yyval.list = NIL; }
    break;

  case 719:
#line 4550 "gram.y"
    {
					yyval.defelt = makeDefElem("tablespace", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 720:
#line 4554 "gram.y"
    {
					yyval.defelt = makeDefElem("tablespace", NULL);
				}
    break;

  case 721:
#line 4558 "gram.y"
    {
					yyval.defelt = makeDefElem("location", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 722:
#line 4562 "gram.y"
    {
					yyval.defelt = makeDefElem("location", NULL);
				}
    break;

  case 723:
#line 4566 "gram.y"
    {
					yyval.defelt = makeDefElem("template", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 724:
#line 4570 "gram.y"
    {
					yyval.defelt = makeDefElem("template", NULL);
				}
    break;

  case 725:
#line 4574 "gram.y"
    {
					yyval.defelt = makeDefElem("encoding", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 726:
#line 4578 "gram.y"
    {
					yyval.defelt = makeDefElem("encoding", (Node *)makeInteger(yyvsp[0].ival));
				}
    break;

  case 727:
#line 4582 "gram.y"
    {
					yyval.defelt = makeDefElem("encoding", NULL);
				}
    break;

  case 728:
#line 4586 "gram.y"
    {
					yyval.defelt = makeDefElem("connectionlimit", (Node *)makeInteger(yyvsp[0].ival));
				}
    break;

  case 729:
#line 4590 "gram.y"
    {
					yyval.defelt = makeDefElem("owner", (Node *)makeString(yyvsp[0].str));
				}
    break;

  case 730:
#line 4594 "gram.y"
    {
					yyval.defelt = makeDefElem("owner", NULL);
				}
    break;

  case 731:
#line 4603 "gram.y"
    {}
    break;

  case 732:
#line 4604 "gram.y"
    {}
    break;

  case 733:
#line 4616 "gram.y"
    {
					AlterDatabaseStmt *n = makeNode(AlterDatabaseStmt);
					n->dbname = yyvsp[-2].str;
					n->options = yyvsp[0].list;
					yyval.node = (Node *)n;
				 }
    break;

  case 734:
#line 4626 "gram.y"
    {
					AlterDatabaseSetStmt *n = makeNode(AlterDatabaseSetStmt);
					n->dbname = yyvsp[-2].str;
					n->variable = yyvsp[0].vsetstmt->name;
					n->value = yyvsp[0].vsetstmt->args;
					yyval.node = (Node *)n;
				}
    break;

  case 735:
#line 4634 "gram.y"
    {
					AlterDatabaseSetStmt *n = makeNode(AlterDatabaseSetStmt);
					n->dbname = yyvsp[-1].str;
					n->variable = ((VariableResetStmt *)yyvsp[0].node)->name;
					n->value = NIL;
					yyval.node = (Node *)n;
				}
    break;

  case 736:
#line 4645 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].defelt); }
    break;

  case 737:
#line 4646 "gram.y"
    { yyval.list = NIL; }
    break;

  case 738:
#line 4651 "gram.y"
    {
					yyval.defelt = makeDefElem("connectionlimit", (Node *)makeInteger(yyvsp[0].ival));
				}
    break;

  case 739:
#line 4665 "gram.y"
    {
					DropdbStmt *n = makeNode(DropdbStmt);
					n->dbname = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 740:
#line 4681 "gram.y"
    {
					CreateDomainStmt *n = makeNode(CreateDomainStmt);
					n->domainname = yyvsp[-3].list;
					n->typename = yyvsp[-1].typnam;
					n->constraints = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 741:
#line 4693 "gram.y"
    {
					AlterDomainStmt *n = makeNode(AlterDomainStmt);
					n->subtype = 'T';
					n->typename = yyvsp[-1].list;
					n->def = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 742:
#line 4702 "gram.y"
    {
					AlterDomainStmt *n = makeNode(AlterDomainStmt);
					n->subtype = 'N';
					n->typename = yyvsp[-3].list;
					yyval.node = (Node *)n;
				}
    break;

  case 743:
#line 4710 "gram.y"
    {
					AlterDomainStmt *n = makeNode(AlterDomainStmt);
					n->subtype = 'O';
					n->typename = yyvsp[-3].list;
					yyval.node = (Node *)n;
				}
    break;

  case 744:
#line 4718 "gram.y"
    {
					AlterDomainStmt *n = makeNode(AlterDomainStmt);
					n->subtype = 'C';
					n->typename = yyvsp[-2].list;
					n->def = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 745:
#line 4727 "gram.y"
    {
					AlterDomainStmt *n = makeNode(AlterDomainStmt);
					n->subtype = 'X';
					n->typename = yyvsp[-4].list;
					n->name = yyvsp[-1].str;
					n->behavior = yyvsp[0].dbehavior;
					yyval.node = (Node *)n;
				}
    break;

  case 746:
#line 4737 "gram.y"
    {}
    break;

  case 747:
#line 4738 "gram.y"
    {}
    break;

  case 748:
#line 4754 "gram.y"
    {
			  CreateConversionStmt *n = makeNode(CreateConversionStmt);
			  n->conversion_name = yyvsp[-6].list;
			  n->for_encoding_name = yyvsp[-4].str;
			  n->to_encoding_name = yyvsp[-2].str;
			  n->func_name = yyvsp[0].list;
			  n->def = yyvsp[-8].boolean;
			  yyval.node = (Node *)n;
			}
    break;

  case 749:
#line 4776 "gram.y"
    {
				   ClusterStmt *n = makeNode(ClusterStmt);
				   n->relation = yyvsp[0].range;
				   n->indexname = yyvsp[-2].str;
				   yyval.node = (Node*)n;
				}
    break;

  case 750:
#line 4783 "gram.y"
    {
			       ClusterStmt *n = makeNode(ClusterStmt);
				   n->relation = yyvsp[0].range;
				   n->indexname = NULL;
				   yyval.node = (Node*)n;
				}
    break;

  case 751:
#line 4790 "gram.y"
    {
				   ClusterStmt *n = makeNode(ClusterStmt);
				   n->relation = NULL;
				   n->indexname = NULL;
				   yyval.node = (Node*)n;
				}
    break;

  case 752:
#line 4807 "gram.y"
    {
					VacuumStmt *n = makeNode(VacuumStmt);
					n->vacuum = true;
					n->analyze = false;
					n->full = yyvsp[-2].boolean;
					n->freeze = yyvsp[-1].boolean;
					n->verbose = yyvsp[0].boolean;
					n->relation = NULL;
					n->va_cols = NIL;
					yyval.node = (Node *)n;
				}
    break;

  case 753:
#line 4819 "gram.y"
    {
					VacuumStmt *n = makeNode(VacuumStmt);
					n->vacuum = true;
					n->analyze = false;
					n->full = yyvsp[-3].boolean;
					n->freeze = yyvsp[-2].boolean;
					n->verbose = yyvsp[-1].boolean;
					n->relation = yyvsp[0].range;
					n->va_cols = NIL;
					yyval.node = (Node *)n;
				}
    break;

  case 754:
#line 4831 "gram.y"
    {
					VacuumStmt *n = (VacuumStmt *) yyvsp[0].node;
					n->vacuum = true;
					n->full = yyvsp[-3].boolean;
					n->freeze = yyvsp[-2].boolean;
					n->verbose |= yyvsp[-1].boolean;
					yyval.node = (Node *)n;
				}
    break;

  case 755:
#line 4843 "gram.y"
    {
					VacuumStmt *n = makeNode(VacuumStmt);
					n->vacuum = false;
					n->analyze = true;
					n->full = false;
					n->freeze = false;
					n->verbose = yyvsp[0].boolean;
					n->relation = NULL;
					n->va_cols = NIL;
					yyval.node = (Node *)n;
				}
    break;

  case 756:
#line 4855 "gram.y"
    {
					VacuumStmt *n = makeNode(VacuumStmt);
					n->vacuum = false;
					n->analyze = true;
					n->full = false;
					n->freeze = false;
					n->verbose = yyvsp[-2].boolean;
					n->relation = yyvsp[-1].range;
					n->va_cols = yyvsp[0].list;
					yyval.node = (Node *)n;
				}
    break;

  case 757:
#line 4869 "gram.y"
    {}
    break;

  case 758:
#line 4870 "gram.y"
    {}
    break;

  case 759:
#line 4874 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 760:
#line 4875 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 761:
#line 4878 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 762:
#line 4879 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 763:
#line 4882 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 764:
#line 4883 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 765:
#line 4887 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 766:
#line 4888 "gram.y"
    { yyval.list = NIL; }
    break;

  case 767:
#line 4900 "gram.y"
    {
					ExplainStmt *n = makeNode(ExplainStmt);
					n->analyze = yyvsp[-2].boolean;
					n->verbose = yyvsp[-1].boolean;
					n->query = (Query*)yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 774:
#line 4919 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 775:
#line 4920 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 776:
#line 4931 "gram.y"
    {
					PrepareStmt *n = makeNode(PrepareStmt);
					n->name = yyvsp[-3].str;
					n->argtypes = yyvsp[-2].list;
					n->query = (Query *) yyvsp[0].node;
					yyval.node = (Node *) n;
				}
    break;

  case 777:
#line 4940 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 778:
#line 4941 "gram.y"
    { yyval.list = NIL; }
    break;

  case 779:
#line 4944 "gram.y"
    { yyval.list = list_make1(yyvsp[0].typnam); }
    break;

  case 780:
#line 4946 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].typnam); }
    break;

  case 785:
#line 4964 "gram.y"
    {
					ExecuteStmt *n = makeNode(ExecuteStmt);
					n->name = yyvsp[-1].str;
					n->params = yyvsp[0].list;
					n->into = NULL;
					yyval.node = (Node *) n;
				}
    break;

  case 786:
#line 4972 "gram.y"
    {
					ExecuteStmt *n = makeNode(ExecuteStmt);
					n->name = yyvsp[-1].str;
					n->params = yyvsp[0].list;
					yyvsp[-5].range->istemp = yyvsp[-7].boolean;
					n->into = yyvsp[-5].range;
					if (yyvsp[-4].list)
						ereport(ERROR,
								(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
								 errmsg("column name list not allowed in CREATE TABLE / AS EXECUTE")));
					/* ... because it's not implemented, but it could be */
					yyval.node = (Node *) n;
				}
    break;

  case 787:
#line 4987 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 788:
#line 4988 "gram.y"
    { yyval.list = NIL; }
    break;

  case 789:
#line 4999 "gram.y"
    {
						DeallocateStmt *n = makeNode(DeallocateStmt);
						n->name = yyvsp[0].str;
						yyval.node = (Node *) n;
					}
    break;

  case 790:
#line 5005 "gram.y"
    {
						DeallocateStmt *n = makeNode(DeallocateStmt);
						n->name = yyvsp[0].str;
						yyval.node = (Node *) n;
					}
    break;

  case 791:
#line 5021 "gram.y"
    {
					yyvsp[0].istmt->relation = yyvsp[-1].range;
					yyval.node = (Node *) yyvsp[0].istmt;
				}
    break;

  case 792:
#line 5029 "gram.y"
    {
					yyval.istmt = makeNode(InsertStmt);
					yyval.istmt->cols = NIL;
					yyval.istmt->targetList = yyvsp[-1].list;
					yyval.istmt->selectStmt = NULL;
				}
    break;

  case 793:
#line 5036 "gram.y"
    {
					yyval.istmt = makeNode(InsertStmt);
					yyval.istmt->cols = NIL;
					yyval.istmt->targetList = NIL;
					yyval.istmt->selectStmt = NULL;
				}
    break;

  case 794:
#line 5043 "gram.y"
    {
					yyval.istmt = makeNode(InsertStmt);
					yyval.istmt->cols = NIL;
					yyval.istmt->targetList = NIL;
					yyval.istmt->selectStmt = yyvsp[0].node;
				}
    break;

  case 795:
#line 5050 "gram.y"
    {
					yyval.istmt = makeNode(InsertStmt);
					yyval.istmt->cols = yyvsp[-5].list;
					yyval.istmt->targetList = yyvsp[-1].list;
					yyval.istmt->selectStmt = NULL;
				}
    break;

  case 796:
#line 5057 "gram.y"
    {
					yyval.istmt = makeNode(InsertStmt);
					yyval.istmt->cols = yyvsp[-2].list;
					yyval.istmt->targetList = NIL;
					yyval.istmt->selectStmt = yyvsp[0].node;
				}
    break;

  case 797:
#line 5067 "gram.y"
    { yyval.list = list_make1(yyvsp[0].target); }
    break;

  case 798:
#line 5069 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].target); }
    break;

  case 799:
#line 5074 "gram.y"
    {
					yyval.target = makeNode(ResTarget);
					yyval.target->name = yyvsp[-1].str;
					yyval.target->indirection = yyvsp[0].list;
					yyval.target->val = NULL;
				}
    break;

  case 800:
#line 5091 "gram.y"
    {
					DeleteStmt *n = makeNode(DeleteStmt);
					n->relation = yyvsp[-2].range;
					n->usingClause = yyvsp[-1].list;
					n->whereClause = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 801:
#line 5101 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 802:
#line 5102 "gram.y"
    { yyval.list = NIL; }
    break;

  case 803:
#line 5106 "gram.y"
    {
					LockStmt *n = makeNode(LockStmt);

					n->relations = yyvsp[-2].list;
					n->mode = yyvsp[-1].ival;
					n->nowait = yyvsp[0].boolean;
					yyval.node = (Node *)n;
				}
    break;

  case 804:
#line 5116 "gram.y"
    { yyval.ival = yyvsp[-1].ival; }
    break;

  case 805:
#line 5117 "gram.y"
    { yyval.ival = AccessExclusiveLock; }
    break;

  case 806:
#line 5120 "gram.y"
    { yyval.ival = AccessShareLock; }
    break;

  case 807:
#line 5121 "gram.y"
    { yyval.ival = RowShareLock; }
    break;

  case 808:
#line 5122 "gram.y"
    { yyval.ival = RowExclusiveLock; }
    break;

  case 809:
#line 5123 "gram.y"
    { yyval.ival = ShareUpdateExclusiveLock; }
    break;

  case 810:
#line 5124 "gram.y"
    { yyval.ival = ShareLock; }
    break;

  case 811:
#line 5125 "gram.y"
    { yyval.ival = ShareRowExclusiveLock; }
    break;

  case 812:
#line 5126 "gram.y"
    { yyval.ival = ExclusiveLock; }
    break;

  case 813:
#line 5127 "gram.y"
    { yyval.ival = AccessExclusiveLock; }
    break;

  case 814:
#line 5130 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 815:
#line 5131 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 816:
#line 5146 "gram.y"
    {
					UpdateStmt *n = makeNode(UpdateStmt);
					n->relation = yyvsp[-4].range;
					n->targetList = yyvsp[-2].list;
					n->fromClause = yyvsp[-1].list;
					n->whereClause = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 817:
#line 5164 "gram.y"
    {
					DeclareCursorStmt *n = makeNode(DeclareCursorStmt);
					n->portalname = yyvsp[-5].str;
					n->options = yyvsp[-4].ival;
					n->query = yyvsp[0].node;
					if (yyvsp[-2].boolean)
						n->options |= CURSOR_OPT_HOLD;
					yyval.node = (Node *)n;
				}
    break;

  case 818:
#line 5175 "gram.y"
    { yyval.ival = 0; }
    break;

  case 819:
#line 5176 "gram.y"
    { yyval.ival = yyvsp[-2].ival | CURSOR_OPT_NO_SCROLL; }
    break;

  case 820:
#line 5177 "gram.y"
    { yyval.ival = yyvsp[-1].ival | CURSOR_OPT_SCROLL; }
    break;

  case 821:
#line 5178 "gram.y"
    { yyval.ival = yyvsp[-1].ival | CURSOR_OPT_BINARY; }
    break;

  case 822:
#line 5179 "gram.y"
    { yyval.ival = yyvsp[-1].ival | CURSOR_OPT_INSENSITIVE; }
    break;

  case 823:
#line 5182 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 824:
#line 5183 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 825:
#line 5184 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 828:
#line 5237 "gram.y"
    { yyval.node = yyvsp[-1].node; }
    break;

  case 829:
#line 5238 "gram.y"
    { yyval.node = yyvsp[-1].node; }
    break;

  case 830:
#line 5248 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 831:
#line 5250 "gram.y"
    {
					insertSelectOptions((SelectStmt *) yyvsp[-1].node, yyvsp[0].list, NULL,
										NULL, NULL);
					yyval.node = yyvsp[-1].node;
				}
    break;

  case 832:
#line 5256 "gram.y"
    {
					insertSelectOptions((SelectStmt *) yyvsp[-3].node, yyvsp[-2].list, yyvsp[-1].node,
										list_nth(yyvsp[0].list, 0), list_nth(yyvsp[0].list, 1));
					yyval.node = yyvsp[-3].node;
				}
    break;

  case 833:
#line 5262 "gram.y"
    {
					insertSelectOptions((SelectStmt *) yyvsp[-3].node, yyvsp[-2].list, yyvsp[0].node,
										list_nth(yyvsp[-1].list, 0), list_nth(yyvsp[-1].list, 1));
					yyval.node = yyvsp[-3].node;
				}
    break;

  case 834:
#line 5270 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 835:
#line 5271 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 836:
#line 5301 "gram.y"
    {
					SelectStmt *n = makeNode(SelectStmt);
					n->distinctClause = yyvsp[-6].list;
					n->targetList = yyvsp[-5].list;
					n->into = yyvsp[-4].range;
					n->intoColNames = NIL;
					n->intoHasOids = DEFAULT_OIDS;
					n->fromClause = yyvsp[-3].list;
					n->whereClause = yyvsp[-2].node;
					n->groupClause = yyvsp[-1].list;
					n->havingClause = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 837:
#line 5315 "gram.y"
    {
					yyval.node = makeSetOp(SETOP_UNION, yyvsp[-1].boolean, yyvsp[-3].node, yyvsp[0].node);
				}
    break;

  case 838:
#line 5319 "gram.y"
    {
					yyval.node = makeSetOp(SETOP_INTERSECT, yyvsp[-1].boolean, yyvsp[-3].node, yyvsp[0].node);
				}
    break;

  case 839:
#line 5323 "gram.y"
    {
					yyval.node = makeSetOp(SETOP_EXCEPT, yyvsp[-1].boolean, yyvsp[-3].node, yyvsp[0].node);
				}
    break;

  case 840:
#line 5329 "gram.y"
    { yyval.range = yyvsp[0].range; }
    break;

  case 841:
#line 5330 "gram.y"
    { yyval.range = NULL; }
    break;

  case 842:
#line 5339 "gram.y"
    {
					yyval.range = yyvsp[0].range;
					yyval.range->istemp = true;
				}
    break;

  case 843:
#line 5344 "gram.y"
    {
					yyval.range = yyvsp[0].range;
					yyval.range->istemp = true;
				}
    break;

  case 844:
#line 5349 "gram.y"
    {
					yyval.range = yyvsp[0].range;
					yyval.range->istemp = true;
				}
    break;

  case 845:
#line 5354 "gram.y"
    {
					yyval.range = yyvsp[0].range;
					yyval.range->istemp = true;
				}
    break;

  case 846:
#line 5359 "gram.y"
    {
					yyval.range = yyvsp[0].range;
					yyval.range->istemp = true;
				}
    break;

  case 847:
#line 5364 "gram.y"
    {
					yyval.range = yyvsp[0].range;
					yyval.range->istemp = true;
				}
    break;

  case 848:
#line 5369 "gram.y"
    {
					yyval.range = yyvsp[0].range;
					yyval.range->istemp = false;
				}
    break;

  case 849:
#line 5374 "gram.y"
    {
					yyval.range = yyvsp[0].range;
					yyval.range->istemp = false;
				}
    break;

  case 850:
#line 5380 "gram.y"
    {}
    break;

  case 851:
#line 5381 "gram.y"
    {}
    break;

  case 852:
#line 5384 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 853:
#line 5385 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 854:
#line 5386 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 855:
#line 5393 "gram.y"
    { yyval.list = list_make1(NIL); }
    break;

  case 856:
#line 5394 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 857:
#line 5395 "gram.y"
    { yyval.list = NIL; }
    break;

  case 858:
#line 5396 "gram.y"
    { yyval.list = NIL; }
    break;

  case 859:
#line 5400 "gram.y"
    { yyval.list = yyvsp[0].list;}
    break;

  case 860:
#line 5401 "gram.y"
    { yyval.list = NIL; }
    break;

  case 861:
#line 5405 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 862:
#line 5409 "gram.y"
    { yyval.list = list_make1(yyvsp[0].sortby); }
    break;

  case 863:
#line 5410 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].sortby); }
    break;

  case 864:
#line 5414 "gram.y"
    {
					yyval.sortby = makeNode(SortBy);
					yyval.sortby->node = yyvsp[-2].node;
					yyval.sortby->sortby_kind = SORTBY_USING;
					yyval.sortby->useOp = yyvsp[0].list;
				}
    break;

  case 865:
#line 5421 "gram.y"
    {
					yyval.sortby = makeNode(SortBy);
					yyval.sortby->node = yyvsp[-1].node;
					yyval.sortby->sortby_kind = SORTBY_ASC;
					yyval.sortby->useOp = NIL;
				}
    break;

  case 866:
#line 5428 "gram.y"
    {
					yyval.sortby = makeNode(SortBy);
					yyval.sortby->node = yyvsp[-1].node;
					yyval.sortby->sortby_kind = SORTBY_DESC;
					yyval.sortby->useOp = NIL;
				}
    break;

  case 867:
#line 5435 "gram.y"
    {
					yyval.sortby = makeNode(SortBy);
					yyval.sortby->node = yyvsp[0].node;
					yyval.sortby->sortby_kind = SORTBY_ASC;	/* default */
					yyval.sortby->useOp = NIL;
				}
    break;

  case 868:
#line 5446 "gram.y"
    { yyval.list = list_make2(yyvsp[0].node, yyvsp[-2].node); }
    break;

  case 869:
#line 5448 "gram.y"
    { yyval.list = list_make2(yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 870:
#line 5450 "gram.y"
    { yyval.list = list_make2(NULL, yyvsp[0].node); }
    break;

  case 871:
#line 5452 "gram.y"
    { yyval.list = list_make2(yyvsp[0].node, NULL); }
    break;

  case 872:
#line 5454 "gram.y"
    {
					/* Disabled because it was too confusing, bjm 2002-02-18 */
					ereport(ERROR,
							(errcode(ERRCODE_SYNTAX_ERROR),
							 errmsg("LIMIT #,# syntax is not supported"),
							 errhint("Use separate LIMIT and OFFSET clauses.")));
				}
    break;

  case 873:
#line 5464 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 874:
#line 5466 "gram.y"
    { yyval.list = list_make2(NULL,NULL); }
    break;

  case 875:
#line 5470 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 876:
#line 5472 "gram.y"
    {
					/* LIMIT ALL is represented as a NULL constant */
					A_Const *n = makeNode(A_Const);
					n->val.type = T_Null;
					yyval.node = (Node *)n;
				}
    break;

  case 877:
#line 5481 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 878:
#line 5485 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 879:
#line 5486 "gram.y"
    { yyval.list = NIL; }
    break;

  case 880:
#line 5490 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 881:
#line 5491 "gram.y"
    { yyval.node = NULL; }
    break;

  case 882:
#line 5496 "gram.y"
    {
					LockingClause *n = makeNode(LockingClause);
					n->lockedRels = yyvsp[-1].list;
					n->forUpdate = TRUE;
					n->nowait = yyvsp[0].boolean;
					yyval.node = (Node *) n;
				}
    break;

  case 883:
#line 5504 "gram.y"
    {
					LockingClause *n = makeNode(LockingClause);
					n->lockedRels = yyvsp[-1].list;
					n->forUpdate = FALSE;
					n->nowait = yyvsp[0].boolean;
					yyval.node = (Node *) n;
				}
    break;

  case 884:
#line 5511 "gram.y"
    { yyval.node = NULL; }
    break;

  case 885:
#line 5515 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 886:
#line 5516 "gram.y"
    { yyval.node = NULL; }
    break;

  case 887:
#line 5520 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 888:
#line 5521 "gram.y"
    { yyval.list = NIL; }
    break;

  case 889:
#line 5533 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 890:
#line 5534 "gram.y"
    { yyval.list = NIL; }
    break;

  case 891:
#line 5538 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 892:
#line 5539 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node); }
    break;

  case 893:
#line 5550 "gram.y"
    {
					yyval.node = (Node *) yyvsp[0].range;
				}
    break;

  case 894:
#line 5554 "gram.y"
    {
					yyvsp[-1].range->alias = yyvsp[0].alias;
					yyval.node = (Node *) yyvsp[-1].range;
				}
    break;

  case 895:
#line 5559 "gram.y"
    {
					RangeFunction *n = makeNode(RangeFunction);
					n->funccallnode = yyvsp[0].node;
					n->coldeflist = NIL;
					yyval.node = (Node *) n;
				}
    break;

  case 896:
#line 5566 "gram.y"
    {
					RangeFunction *n = makeNode(RangeFunction);
					n->funccallnode = yyvsp[-1].node;
					n->alias = yyvsp[0].alias;
					n->coldeflist = NIL;
					yyval.node = (Node *) n;
				}
    break;

  case 897:
#line 5574 "gram.y"
    {
					RangeFunction *n = makeNode(RangeFunction);
					n->funccallnode = yyvsp[-4].node;
					n->coldeflist = yyvsp[-1].list;
					yyval.node = (Node *) n;
				}
    break;

  case 898:
#line 5581 "gram.y"
    {
					RangeFunction *n = makeNode(RangeFunction);
					Alias *a = makeNode(Alias);
					n->funccallnode = yyvsp[-5].node;
					a->aliasname = yyvsp[-3].str;
					n->alias = a;
					n->coldeflist = yyvsp[-1].list;
					yyval.node = (Node *) n;
				}
    break;

  case 899:
#line 5591 "gram.y"
    {
					RangeFunction *n = makeNode(RangeFunction);
					Alias *a = makeNode(Alias);
					n->funccallnode = yyvsp[-4].node;
					a->aliasname = yyvsp[-3].str;
					n->alias = a;
					n->coldeflist = yyvsp[-1].list;
					yyval.node = (Node *) n;
				}
    break;

  case 900:
#line 5601 "gram.y"
    {
					/*
					 * The SQL spec does not permit a subselect
					 * (<derived_table>) without an alias clause,
					 * so we don't either.  This avoids the problem
					 * of needing to invent a unique refname for it.
					 * That could be surmounted if there's sufficient
					 * popular demand, but for now let's just implement
					 * the spec and see if anyone complains.
					 * However, it does seem like a good idea to emit
					 * an error message that's better than "syntax error".
					 */
					ereport(ERROR,
							(errcode(ERRCODE_SYNTAX_ERROR),
							 errmsg("subquery in FROM must have an alias"),
							 errhint("For example, FROM (SELECT ...) [AS] foo.")));
					yyval.node = NULL;
				}
    break;

  case 901:
#line 5620 "gram.y"
    {
					RangeSubselect *n = makeNode(RangeSubselect);
					n->subquery = yyvsp[-1].node;
					n->alias = yyvsp[0].alias;
					yyval.node = (Node *) n;
				}
    break;

  case 902:
#line 5627 "gram.y"
    {
					yyval.node = (Node *) yyvsp[0].jexpr;
				}
    break;

  case 903:
#line 5631 "gram.y"
    {
					yyvsp[-2].jexpr->alias = yyvsp[0].alias;
					yyval.node = (Node *) yyvsp[-2].jexpr;
				}
    break;

  case 904:
#line 5657 "gram.y"
    {
					yyval.jexpr = yyvsp[-1].jexpr;
				}
    break;

  case 905:
#line 5661 "gram.y"
    {
					/* CROSS JOIN is same as unqualified inner join */
					JoinExpr *n = makeNode(JoinExpr);
					n->jointype = JOIN_INNER;
					n->isNatural = FALSE;
					n->larg = yyvsp[-3].node;
					n->rarg = yyvsp[0].node;
					n->using = NIL;
					n->quals = NULL;
					yyval.jexpr = n;
				}
    break;

  case 906:
#line 5673 "gram.y"
    {
					/* UNION JOIN is made into 1 token to avoid shift/reduce
					 * conflict against regular UNION keyword.
					 */
					JoinExpr *n = makeNode(JoinExpr);
					n->jointype = JOIN_UNION;
					n->isNatural = FALSE;
					n->larg = yyvsp[-2].node;
					n->rarg = yyvsp[0].node;
					n->using = NIL;
					n->quals = NULL;
					yyval.jexpr = n;
				}
    break;

  case 907:
#line 5687 "gram.y"
    {
					JoinExpr *n = makeNode(JoinExpr);
					n->jointype = yyvsp[-3].jtype;
					n->isNatural = FALSE;
					n->larg = yyvsp[-4].node;
					n->rarg = yyvsp[-1].node;
					if (yyvsp[0].node != NULL && IsA(yyvsp[0].node, List))
						n->using = (List *) yyvsp[0].node; /* USING clause */
					else
						n->quals = yyvsp[0].node; /* ON clause */
					yyval.jexpr = n;
				}
    break;

  case 908:
#line 5700 "gram.y"
    {
					/* letting join_type reduce to empty doesn't work */
					JoinExpr *n = makeNode(JoinExpr);
					n->jointype = JOIN_INNER;
					n->isNatural = FALSE;
					n->larg = yyvsp[-3].node;
					n->rarg = yyvsp[-1].node;
					if (yyvsp[0].node != NULL && IsA(yyvsp[0].node, List))
						n->using = (List *) yyvsp[0].node; /* USING clause */
					else
						n->quals = yyvsp[0].node; /* ON clause */
					yyval.jexpr = n;
				}
    break;

  case 909:
#line 5714 "gram.y"
    {
					JoinExpr *n = makeNode(JoinExpr);
					n->jointype = yyvsp[-2].jtype;
					n->isNatural = TRUE;
					n->larg = yyvsp[-4].node;
					n->rarg = yyvsp[0].node;
					n->using = NIL; /* figure out which columns later... */
					n->quals = NULL; /* fill later */
					yyval.jexpr = n;
				}
    break;

  case 910:
#line 5725 "gram.y"
    {
					/* letting join_type reduce to empty doesn't work */
					JoinExpr *n = makeNode(JoinExpr);
					n->jointype = JOIN_INNER;
					n->isNatural = TRUE;
					n->larg = yyvsp[-3].node;
					n->rarg = yyvsp[0].node;
					n->using = NIL; /* figure out which columns later... */
					n->quals = NULL; /* fill later */
					yyval.jexpr = n;
				}
    break;

  case 911:
#line 5740 "gram.y"
    {
					yyval.alias = makeNode(Alias);
					yyval.alias->aliasname = yyvsp[-3].str;
					yyval.alias->colnames = yyvsp[-1].list;
				}
    break;

  case 912:
#line 5746 "gram.y"
    {
					yyval.alias = makeNode(Alias);
					yyval.alias->aliasname = yyvsp[0].str;
				}
    break;

  case 913:
#line 5751 "gram.y"
    {
					yyval.alias = makeNode(Alias);
					yyval.alias->aliasname = yyvsp[-3].str;
					yyval.alias->colnames = yyvsp[-1].list;
				}
    break;

  case 914:
#line 5757 "gram.y"
    {
					yyval.alias = makeNode(Alias);
					yyval.alias->aliasname = yyvsp[0].str;
				}
    break;

  case 915:
#line 5763 "gram.y"
    { yyval.jtype = JOIN_FULL; }
    break;

  case 916:
#line 5764 "gram.y"
    { yyval.jtype = JOIN_LEFT; }
    break;

  case 917:
#line 5765 "gram.y"
    { yyval.jtype = JOIN_RIGHT; }
    break;

  case 918:
#line 5766 "gram.y"
    { yyval.jtype = JOIN_INNER; }
    break;

  case 919:
#line 5770 "gram.y"
    { yyval.node = NULL; }
    break;

  case 920:
#line 5771 "gram.y"
    { yyval.node = NULL; }
    break;

  case 921:
#line 5783 "gram.y"
    { yyval.node = (Node *) yyvsp[-1].list; }
    break;

  case 922:
#line 5784 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 923:
#line 5790 "gram.y"
    {
					/* default inheritance */
					yyval.range = yyvsp[0].range;
					yyval.range->inhOpt = INH_DEFAULT;
					yyval.range->alias = NULL;
				}
    break;

  case 924:
#line 5797 "gram.y"
    {
					/* inheritance query */
					yyval.range = yyvsp[-1].range;
					yyval.range->inhOpt = INH_YES;
					yyval.range->alias = NULL;
				}
    break;

  case 925:
#line 5804 "gram.y"
    {
					/* no inheritance */
					yyval.range = yyvsp[0].range;
					yyval.range->inhOpt = INH_NO;
					yyval.range->alias = NULL;
				}
    break;

  case 926:
#line 5811 "gram.y"
    {
					/* no inheritance, SQL99-style syntax */
					yyval.range = yyvsp[-1].range;
					yyval.range->inhOpt = INH_NO;
					yyval.range->alias = NULL;
				}
    break;

  case 927:
#line 5820 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 928:
#line 5825 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 929:
#line 5826 "gram.y"
    { yyval.node = NULL; }
    break;

  case 930:
#line 5832 "gram.y"
    {
					yyval.list = list_make1(yyvsp[0].node);
				}
    break;

  case 931:
#line 5836 "gram.y"
    {
					yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node);
				}
    break;

  case 932:
#line 5842 "gram.y"
    {
					ColumnDef *n = makeNode(ColumnDef);
					n->colname = yyvsp[-1].str;
					n->typename = yyvsp[0].typnam;
					n->constraints = NIL;
					n->is_local = true;
					yyval.node = (Node *)n;
				}
    break;

  case 933:
#line 5863 "gram.y"
    {
					yyval.typnam = yyvsp[-1].typnam;
					yyval.typnam->arrayBounds = yyvsp[0].list;
				}
    break;

  case 934:
#line 5868 "gram.y"
    {
					yyval.typnam = yyvsp[-1].typnam;
					yyval.typnam->arrayBounds = yyvsp[0].list;
					yyval.typnam->setof = TRUE;
				}
    break;

  case 935:
#line 5874 "gram.y"
    {
					/* SQL99's redundant syntax */
					yyval.typnam = yyvsp[-4].typnam;
					yyval.typnam->arrayBounds = list_make1(makeInteger(yyvsp[-1].ival));
				}
    break;

  case 936:
#line 5880 "gram.y"
    {
					/* SQL99's redundant syntax */
					yyval.typnam = yyvsp[-4].typnam;
					yyval.typnam->arrayBounds = list_make1(makeInteger(yyvsp[-1].ival));
					yyval.typnam->setof = TRUE;
				}
    break;

  case 937:
#line 5890 "gram.y"
    {  yyval.list = lappend(yyvsp[-2].list, makeInteger(-1)); }
    break;

  case 938:
#line 5892 "gram.y"
    {  yyval.list = lappend(yyvsp[-3].list, makeInteger(yyvsp[-1].ival)); }
    break;

  case 939:
#line 5894 "gram.y"
    {  yyval.list = NIL; }
    break;

  case 940:
#line 5906 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 941:
#line 5907 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 942:
#line 5908 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 943:
#line 5909 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 944:
#line 5910 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 945:
#line 5912 "gram.y"
    {
					yyval.typnam = yyvsp[-1].typnam;
					if (yyvsp[0].ival != INTERVAL_FULL_RANGE)
						yyval.typnam->typmod = INTERVAL_TYPMOD(INTERVAL_FULL_PRECISION, yyvsp[0].ival);
				}
    break;

  case 946:
#line 5918 "gram.y"
    {
					yyval.typnam = yyvsp[-4].typnam;
					if (yyvsp[-2].ival < 0)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("INTERVAL(%d) precision must not be negative",
										yyvsp[-2].ival)));
					if (yyvsp[-2].ival > MAX_INTERVAL_PRECISION)
					{
						ereport(WARNING,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("INTERVAL(%d) precision reduced to maximum allowed, %d",
										yyvsp[-2].ival, MAX_INTERVAL_PRECISION)));
						yyvsp[-2].ival = MAX_INTERVAL_PRECISION;
					}
					yyval.typnam->typmod = INTERVAL_TYPMOD(yyvsp[-2].ival, yyvsp[0].ival);
				}
    break;

  case 947:
#line 5936 "gram.y"
    {
					yyval.typnam = makeNode(TypeName);
					yyval.typnam->names = lcons(makeString(yyvsp[-1].str), yyvsp[0].list);
					yyval.typnam->typmod = -1;
				}
    break;

  case 948:
#line 5953 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 949:
#line 5954 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 950:
#line 5955 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 951:
#line 5956 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 952:
#line 5957 "gram.y"
    { yyval.typnam = yyvsp[0].typnam; }
    break;

  case 953:
#line 5962 "gram.y"
    {
					yyval.typnam = makeTypeName(yyvsp[0].str);
				}
    break;

  case 954:
#line 5973 "gram.y"
    {
					yyval.typnam = SystemTypeName("int4");
				}
    break;

  case 955:
#line 5977 "gram.y"
    {
					yyval.typnam = SystemTypeName("int4");
				}
    break;

  case 956:
#line 5981 "gram.y"
    {
					yyval.typnam = SystemTypeName("int2");
				}
    break;

  case 957:
#line 5985 "gram.y"
    {
					yyval.typnam = SystemTypeName("int8");
				}
    break;

  case 958:
#line 5989 "gram.y"
    {
					yyval.typnam = SystemTypeName("float4");
				}
    break;

  case 959:
#line 5993 "gram.y"
    {
					yyval.typnam = yyvsp[0].typnam;
				}
    break;

  case 960:
#line 5997 "gram.y"
    {
					yyval.typnam = SystemTypeName("float8");
				}
    break;

  case 961:
#line 6001 "gram.y"
    {
					yyval.typnam = SystemTypeName("numeric");
					yyval.typnam->typmod = yyvsp[0].ival;
				}
    break;

  case 962:
#line 6006 "gram.y"
    {
					yyval.typnam = SystemTypeName("numeric");
					yyval.typnam->typmod = yyvsp[0].ival;
				}
    break;

  case 963:
#line 6011 "gram.y"
    {
					yyval.typnam = SystemTypeName("numeric");
					yyval.typnam->typmod = yyvsp[0].ival;
				}
    break;

  case 964:
#line 6016 "gram.y"
    {
					yyval.typnam = SystemTypeName("bool");
				}
    break;

  case 965:
#line 6022 "gram.y"
    {
					if (yyvsp[-1].ival < 1)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("precision for type float must be at least 1 bit")));
					else if (yyvsp[-1].ival <= 24)
						yyval.typnam = SystemTypeName("float4");
					else if (yyvsp[-1].ival <= 53)
						yyval.typnam = SystemTypeName("float8");
					else
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("precision for type float must be less than 54 bits")));
				}
    break;

  case 966:
#line 6037 "gram.y"
    {
					yyval.typnam = SystemTypeName("float8");
				}
    break;

  case 967:
#line 6044 "gram.y"
    {
					if (yyvsp[-3].ival < 1 || yyvsp[-3].ival > NUMERIC_MAX_PRECISION)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("NUMERIC precision %d must be between 1 and %d",
										yyvsp[-3].ival, NUMERIC_MAX_PRECISION)));
					if (yyvsp[-1].ival < 0 || yyvsp[-1].ival > yyvsp[-3].ival)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("NUMERIC scale %d must be between 0 and precision %d",
										yyvsp[-1].ival, yyvsp[-3].ival)));

					yyval.ival = ((yyvsp[-3].ival << 16) | yyvsp[-1].ival) + VARHDRSZ;
				}
    break;

  case 968:
#line 6059 "gram.y"
    {
					if (yyvsp[-1].ival < 1 || yyvsp[-1].ival > NUMERIC_MAX_PRECISION)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("NUMERIC precision %d must be between 1 and %d",
										yyvsp[-1].ival, NUMERIC_MAX_PRECISION)));

					yyval.ival = (yyvsp[-1].ival << 16) + VARHDRSZ;
				}
    break;

  case 969:
#line 6069 "gram.y"
    {
					/* Insert "-1" meaning "no limit" */
					yyval.ival = -1;
				}
    break;

  case 970:
#line 6077 "gram.y"
    {
					if (yyvsp[-3].ival < 1 || yyvsp[-3].ival > NUMERIC_MAX_PRECISION)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("DECIMAL precision %d must be between 1 and %d",
										yyvsp[-3].ival, NUMERIC_MAX_PRECISION)));
					if (yyvsp[-1].ival < 0 || yyvsp[-1].ival > yyvsp[-3].ival)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("DECIMAL scale %d must be between 0 and precision %d",
										yyvsp[-1].ival, yyvsp[-3].ival)));

					yyval.ival = ((yyvsp[-3].ival << 16) | yyvsp[-1].ival) + VARHDRSZ;
				}
    break;

  case 971:
#line 6092 "gram.y"
    {
					if (yyvsp[-1].ival < 1 || yyvsp[-1].ival > NUMERIC_MAX_PRECISION)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("DECIMAL precision %d must be between 1 and %d",
										yyvsp[-1].ival, NUMERIC_MAX_PRECISION)));

					yyval.ival = (yyvsp[-1].ival << 16) + VARHDRSZ;
				}
    break;

  case 972:
#line 6102 "gram.y"
    {
					/* Insert "-1" meaning "no limit" */
					yyval.ival = -1;
				}
    break;

  case 973:
#line 6114 "gram.y"
    {
					yyval.typnam = yyvsp[0].typnam;
				}
    break;

  case 974:
#line 6118 "gram.y"
    {
					yyval.typnam = yyvsp[0].typnam;
				}
    break;

  case 975:
#line 6126 "gram.y"
    {
					yyval.typnam = yyvsp[0].typnam;
				}
    break;

  case 976:
#line 6130 "gram.y"
    {
					yyval.typnam = yyvsp[0].typnam;
					yyval.typnam->typmod = -1;
				}
    break;

  case 977:
#line 6138 "gram.y"
    {
					char *typname;

					typname = yyvsp[-3].boolean ? "varbit" : "bit";
					yyval.typnam = SystemTypeName(typname);
					if (yyvsp[-1].ival < 1)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("length for type %s must be at least 1",
										typname)));
					else if (yyvsp[-1].ival > (MaxAttrSize * BITS_PER_BYTE))
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("length for type %s cannot exceed %d",
										typname, MaxAttrSize * BITS_PER_BYTE)));
					yyval.typnam->typmod = yyvsp[-1].ival;
				}
    break;

  case 978:
#line 6159 "gram.y"
    {
					/* bit defaults to bit(1), varbit to no limit */
					if (yyvsp[0].boolean)
					{
						yyval.typnam = SystemTypeName("varbit");
						yyval.typnam->typmod = -1;
					}
					else
					{
						yyval.typnam = SystemTypeName("bit");
						yyval.typnam->typmod = 1;
					}
				}
    break;

  case 979:
#line 6180 "gram.y"
    {
					yyval.typnam = yyvsp[0].typnam;
				}
    break;

  case 980:
#line 6184 "gram.y"
    {
					yyval.typnam = yyvsp[0].typnam;
				}
    break;

  case 981:
#line 6190 "gram.y"
    {
					yyval.typnam = yyvsp[0].typnam;
				}
    break;

  case 982:
#line 6194 "gram.y"
    {
					/* Length was not specified so allow to be unrestricted.
					 * This handles problems with fixed-length (bpchar) strings
					 * which in column definitions must default to a length
					 * of one, but should not be constrained if the length
					 * was not specified.
					 */
					yyval.typnam = yyvsp[0].typnam;
					yyval.typnam->typmod = -1;
				}
    break;

  case 983:
#line 6207 "gram.y"
    {
					if ((yyvsp[0].str != NULL) && (strcmp(yyvsp[0].str, "sql_text") != 0))
					{
						char *type;

						type = palloc(strlen(yyvsp[-4].str) + 1 + strlen(yyvsp[0].str) + 1);
						strcpy(type, yyvsp[-4].str);
						strcat(type, "_");
						strcat(type, yyvsp[0].str);
						yyvsp[-4].str = type;
					}

					yyval.typnam = SystemTypeName(yyvsp[-4].str);

					if (yyvsp[-2].ival < 1)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("length for type %s must be at least 1",
										yyvsp[-4].str)));
					else if (yyvsp[-2].ival > MaxAttrSize)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("length for type %s cannot exceed %d",
										yyvsp[-4].str, MaxAttrSize)));

					/* we actually implement these like a varlen, so
					 * the first 4 bytes is the length. (the difference
					 * between these and "text" is that we blank-pad and
					 * truncate where necessary)
					 */
					yyval.typnam->typmod = VARHDRSZ + yyvsp[-2].ival;
				}
    break;

  case 984:
#line 6242 "gram.y"
    {
					if ((yyvsp[0].str != NULL) && (strcmp(yyvsp[0].str, "sql_text") != 0))
					{
						char *type;

						type = palloc(strlen(yyvsp[-1].str) + 1 + strlen(yyvsp[0].str) + 1);
						strcpy(type, yyvsp[-1].str);
						strcat(type, "_");
						strcat(type, yyvsp[0].str);
						yyvsp[-1].str = type;
					}

					yyval.typnam = SystemTypeName(yyvsp[-1].str);

					/* char defaults to char(1), varchar to no limit */
					if (strcmp(yyvsp[-1].str, "bpchar") == 0)
						yyval.typnam->typmod = VARHDRSZ + 1;
					else
						yyval.typnam->typmod = -1;
				}
    break;

  case 985:
#line 6265 "gram.y"
    { yyval.str = yyvsp[0].boolean ? "varchar": "bpchar"; }
    break;

  case 986:
#line 6267 "gram.y"
    { yyval.str = yyvsp[0].boolean ? "varchar": "bpchar"; }
    break;

  case 987:
#line 6269 "gram.y"
    { yyval.str = "varchar"; }
    break;

  case 988:
#line 6271 "gram.y"
    { yyval.str = yyvsp[0].boolean ? "varchar": "bpchar"; }
    break;

  case 989:
#line 6273 "gram.y"
    { yyval.str = yyvsp[0].boolean ? "varchar": "bpchar"; }
    break;

  case 990:
#line 6275 "gram.y"
    { yyval.str = yyvsp[0].boolean ? "varchar": "bpchar"; }
    break;

  case 991:
#line 6279 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 992:
#line 6280 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 993:
#line 6284 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 994:
#line 6285 "gram.y"
    { yyval.str = NULL; }
    break;

  case 995:
#line 6290 "gram.y"
    {
					if (yyvsp[0].boolean)
						yyval.typnam = SystemTypeName("timestamptz");
					else
						yyval.typnam = SystemTypeName("timestamp");
					/* XXX the timezone field seems to be unused
					 * - thomas 2001-09-06
					 */
					yyval.typnam->timezone = yyvsp[0].boolean;
					if (yyvsp[-2].ival < 0)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("TIMESTAMP(%d)%s precision must not be negative",
										yyvsp[-2].ival, (yyvsp[0].boolean ? " WITH TIME ZONE": ""))));
					if (yyvsp[-2].ival > MAX_TIMESTAMP_PRECISION)
					{
						ereport(WARNING,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("TIMESTAMP(%d)%s precision reduced to maximum allowed, %d",
										yyvsp[-2].ival, (yyvsp[0].boolean ? " WITH TIME ZONE": ""),
										MAX_TIMESTAMP_PRECISION)));
						yyvsp[-2].ival = MAX_TIMESTAMP_PRECISION;
					}
					yyval.typnam->typmod = yyvsp[-2].ival;
				}
    break;

  case 996:
#line 6316 "gram.y"
    {
					if (yyvsp[0].boolean)
						yyval.typnam = SystemTypeName("timestamptz");
					else
						yyval.typnam = SystemTypeName("timestamp");
					/* XXX the timezone field seems to be unused
					 * - thomas 2001-09-06
					 */
					yyval.typnam->timezone = yyvsp[0].boolean;
				}
    break;

  case 997:
#line 6327 "gram.y"
    {
					if (yyvsp[0].boolean)
						yyval.typnam = SystemTypeName("timetz");
					else
						yyval.typnam = SystemTypeName("time");
					if (yyvsp[-2].ival < 0)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("TIME(%d)%s precision must not be negative",
										yyvsp[-2].ival, (yyvsp[0].boolean ? " WITH TIME ZONE": ""))));
					if (yyvsp[-2].ival > MAX_TIME_PRECISION)
					{
						ereport(WARNING,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("TIME(%d)%s precision reduced to maximum allowed, %d",
										yyvsp[-2].ival, (yyvsp[0].boolean ? " WITH TIME ZONE": ""),
										MAX_TIME_PRECISION)));
						yyvsp[-2].ival = MAX_TIME_PRECISION;
					}
					yyval.typnam->typmod = yyvsp[-2].ival;
				}
    break;

  case 998:
#line 6349 "gram.y"
    {
					if (yyvsp[0].boolean)
						yyval.typnam = SystemTypeName("timetz");
					else
						yyval.typnam = SystemTypeName("time");
				}
    break;

  case 999:
#line 6358 "gram.y"
    { yyval.typnam = SystemTypeName("interval"); }
    break;

  case 1000:
#line 6362 "gram.y"
    { yyval.boolean = TRUE; }
    break;

  case 1001:
#line 6363 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 1002:
#line 6364 "gram.y"
    { yyval.boolean = FALSE; }
    break;

  case 1003:
#line 6368 "gram.y"
    { yyval.ival = INTERVAL_MASK(YEAR); }
    break;

  case 1004:
#line 6369 "gram.y"
    { yyval.ival = INTERVAL_MASK(MONTH); }
    break;

  case 1005:
#line 6370 "gram.y"
    { yyval.ival = INTERVAL_MASK(DAY); }
    break;

  case 1006:
#line 6371 "gram.y"
    { yyval.ival = INTERVAL_MASK(HOUR); }
    break;

  case 1007:
#line 6372 "gram.y"
    { yyval.ival = INTERVAL_MASK(MINUTE); }
    break;

  case 1008:
#line 6373 "gram.y"
    { yyval.ival = INTERVAL_MASK(SECOND); }
    break;

  case 1009:
#line 6375 "gram.y"
    { yyval.ival = INTERVAL_MASK(YEAR) | INTERVAL_MASK(MONTH); }
    break;

  case 1010:
#line 6377 "gram.y"
    { yyval.ival = INTERVAL_MASK(DAY) | INTERVAL_MASK(HOUR); }
    break;

  case 1011:
#line 6379 "gram.y"
    { yyval.ival = INTERVAL_MASK(DAY) | INTERVAL_MASK(HOUR)
						| INTERVAL_MASK(MINUTE); }
    break;

  case 1012:
#line 6382 "gram.y"
    { yyval.ival = INTERVAL_MASK(DAY) | INTERVAL_MASK(HOUR)
						| INTERVAL_MASK(MINUTE) | INTERVAL_MASK(SECOND); }
    break;

  case 1013:
#line 6385 "gram.y"
    { yyval.ival = INTERVAL_MASK(HOUR) | INTERVAL_MASK(MINUTE); }
    break;

  case 1014:
#line 6387 "gram.y"
    { yyval.ival = INTERVAL_MASK(HOUR) | INTERVAL_MASK(MINUTE)
						| INTERVAL_MASK(SECOND); }
    break;

  case 1015:
#line 6390 "gram.y"
    { yyval.ival = INTERVAL_MASK(MINUTE) | INTERVAL_MASK(SECOND); }
    break;

  case 1016:
#line 6391 "gram.y"
    { yyval.ival = INTERVAL_FULL_RANGE; }
    break;

  case 1017:
#line 6417 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 1018:
#line 6419 "gram.y"
    { yyval.node = makeTypeCast(yyvsp[-2].node, yyvsp[0].typnam); }
    break;

  case 1019:
#line 6421 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("timezone");
					n->args = list_make2(yyvsp[0].node, yyvsp[-4].node);
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *) n;
				}
    break;

  case 1020:
#line 6439 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "+", NULL, yyvsp[0].node); }
    break;

  case 1021:
#line 6441 "gram.y"
    { yyval.node = doNegate(yyvsp[0].node); }
    break;

  case 1022:
#line 6443 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "+", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1023:
#line 6445 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "-", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1024:
#line 6447 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "*", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1025:
#line 6449 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "/", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1026:
#line 6451 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "%", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1027:
#line 6453 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "^", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1028:
#line 6455 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "<", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1029:
#line 6457 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, ">", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1030:
#line 6459 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "=", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1031:
#line 6462 "gram.y"
    { yyval.node = (Node *) makeA_Expr(AEXPR_OP, yyvsp[-1].list, yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1032:
#line 6464 "gram.y"
    { yyval.node = (Node *) makeA_Expr(AEXPR_OP, yyvsp[-1].list, NULL, yyvsp[0].node); }
    break;

  case 1033:
#line 6466 "gram.y"
    { yyval.node = (Node *) makeA_Expr(AEXPR_OP, yyvsp[0].list, yyvsp[-1].node, NULL); }
    break;

  case 1034:
#line 6469 "gram.y"
    { yyval.node = (Node *) makeA_Expr(AEXPR_AND, NIL, yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1035:
#line 6471 "gram.y"
    { yyval.node = (Node *) makeA_Expr(AEXPR_OR, NIL, yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1036:
#line 6473 "gram.y"
    { yyval.node = (Node *) makeA_Expr(AEXPR_NOT, NIL, NULL, yyvsp[0].node); }
    break;

  case 1037:
#line 6476 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "~~", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1038:
#line 6478 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("like_escape");
					n->args = list_make2(yyvsp[-2].node, yyvsp[0].node);
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "~~", yyvsp[-4].node, (Node *) n);
				}
    break;

  case 1039:
#line 6487 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "!~~", yyvsp[-3].node, yyvsp[0].node); }
    break;

  case 1040:
#line 6489 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("like_escape");
					n->args = list_make2(yyvsp[-2].node, yyvsp[0].node);
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "!~~", yyvsp[-5].node, (Node *) n);
				}
    break;

  case 1041:
#line 6498 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "~~*", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1042:
#line 6500 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("like_escape");
					n->args = list_make2(yyvsp[-2].node, yyvsp[0].node);
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "~~*", yyvsp[-4].node, (Node *) n);
				}
    break;

  case 1043:
#line 6509 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "!~~*", yyvsp[-3].node, yyvsp[0].node); }
    break;

  case 1044:
#line 6511 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("like_escape");
					n->args = list_make2(yyvsp[-2].node, yyvsp[0].node);
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "!~~*", yyvsp[-5].node, (Node *) n);
				}
    break;

  case 1045:
#line 6521 "gram.y"
    {
					A_Const *c = makeNode(A_Const);
					FuncCall *n = makeNode(FuncCall);
					c->val.type = T_Null;
					n->funcname = SystemFuncName("similar_escape");
					n->args = list_make2(yyvsp[0].node, (Node *) c);
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "~", yyvsp[-3].node, (Node *) n);
				}
    break;

  case 1046:
#line 6532 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("similar_escape");
					n->args = list_make2(yyvsp[-2].node, yyvsp[0].node);
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "~", yyvsp[-5].node, (Node *) n);
				}
    break;

  case 1047:
#line 6541 "gram.y"
    {
					A_Const *c = makeNode(A_Const);
					FuncCall *n = makeNode(FuncCall);
					c->val.type = T_Null;
					n->funcname = SystemFuncName("similar_escape");
					n->args = list_make2(yyvsp[0].node, (Node *) c);
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "!~", yyvsp[-4].node, (Node *) n);
				}
    break;

  case 1048:
#line 6552 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("similar_escape");
					n->args = list_make2(yyvsp[-2].node, yyvsp[0].node);
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "!~", yyvsp[-6].node, (Node *) n);
				}
    break;

  case 1049:
#line 6571 "gram.y"
    {
					if (IsA(yyvsp[-1].node, RowExpr))
						yyval.node = makeRowNullTest(IS_NULL, (RowExpr *) yyvsp[-1].node);
					else
					{
						NullTest *n = makeNode(NullTest);
						n->arg = (Expr *) yyvsp[-1].node;
						n->nulltesttype = IS_NULL;
						yyval.node = (Node *)n;
					}
				}
    break;

  case 1050:
#line 6583 "gram.y"
    {
					if (IsA(yyvsp[-2].node, RowExpr))
						yyval.node = makeRowNullTest(IS_NULL, (RowExpr *) yyvsp[-2].node);
					else
					{
						NullTest *n = makeNode(NullTest);
						n->arg = (Expr *) yyvsp[-2].node;
						n->nulltesttype = IS_NULL;
						yyval.node = (Node *)n;
					}
				}
    break;

  case 1051:
#line 6595 "gram.y"
    {
					if (IsA(yyvsp[-1].node, RowExpr))
						yyval.node = makeRowNullTest(IS_NOT_NULL, (RowExpr *) yyvsp[-1].node);
					else
					{
						NullTest *n = makeNode(NullTest);
						n->arg = (Expr *) yyvsp[-1].node;
						n->nulltesttype = IS_NOT_NULL;
						yyval.node = (Node *)n;
					}
				}
    break;

  case 1052:
#line 6607 "gram.y"
    {
					if (IsA(yyvsp[-3].node, RowExpr))
						yyval.node = makeRowNullTest(IS_NOT_NULL, (RowExpr *) yyvsp[-3].node);
					else
					{
						NullTest *n = makeNode(NullTest);
						n->arg = (Expr *) yyvsp[-3].node;
						n->nulltesttype = IS_NOT_NULL;
						yyval.node = (Node *)n;
					}
				}
    break;

  case 1053:
#line 6619 "gram.y"
    {
					yyval.node = (Node *)makeOverlaps(yyvsp[-2].list, yyvsp[0].list);
				}
    break;

  case 1054:
#line 6623 "gram.y"
    {
					BooleanTest *b = makeNode(BooleanTest);
					b->arg = (Expr *) yyvsp[-2].node;
					b->booltesttype = IS_TRUE;
					yyval.node = (Node *)b;
				}
    break;

  case 1055:
#line 6630 "gram.y"
    {
					BooleanTest *b = makeNode(BooleanTest);
					b->arg = (Expr *) yyvsp[-3].node;
					b->booltesttype = IS_NOT_TRUE;
					yyval.node = (Node *)b;
				}
    break;

  case 1056:
#line 6637 "gram.y"
    {
					BooleanTest *b = makeNode(BooleanTest);
					b->arg = (Expr *) yyvsp[-2].node;
					b->booltesttype = IS_FALSE;
					yyval.node = (Node *)b;
				}
    break;

  case 1057:
#line 6644 "gram.y"
    {
					BooleanTest *b = makeNode(BooleanTest);
					b->arg = (Expr *) yyvsp[-3].node;
					b->booltesttype = IS_NOT_FALSE;
					yyval.node = (Node *)b;
				}
    break;

  case 1058:
#line 6651 "gram.y"
    {
					BooleanTest *b = makeNode(BooleanTest);
					b->arg = (Expr *) yyvsp[-2].node;
					b->booltesttype = IS_UNKNOWN;
					yyval.node = (Node *)b;
				}
    break;

  case 1059:
#line 6658 "gram.y"
    {
					BooleanTest *b = makeNode(BooleanTest);
					b->arg = (Expr *) yyvsp[-3].node;
					b->booltesttype = IS_NOT_UNKNOWN;
					yyval.node = (Node *)b;
				}
    break;

  case 1060:
#line 6665 "gram.y"
    {
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_DISTINCT, "=", yyvsp[-4].node, yyvsp[0].node);
				}
    break;

  case 1061:
#line 6669 "gram.y"
    {
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OF, "=", yyvsp[-5].node, (Node *) yyvsp[-1].list);
				}
    break;

  case 1062:
#line 6673 "gram.y"
    {
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OF, "!=", yyvsp[-6].node, (Node *) yyvsp[-1].list);
				}
    break;

  case 1063:
#line 6677 "gram.y"
    {
					yyval.node = (Node *) makeA_Expr(AEXPR_AND, NIL,
						(Node *) makeSimpleA_Expr(AEXPR_OP, ">=", yyvsp[-5].node, yyvsp[-2].node),
						(Node *) makeSimpleA_Expr(AEXPR_OP, "<=", yyvsp[-5].node, yyvsp[0].node));
				}
    break;

  case 1064:
#line 6683 "gram.y"
    {
					yyval.node = (Node *) makeA_Expr(AEXPR_OR, NIL,
						(Node *) makeSimpleA_Expr(AEXPR_OP, "<", yyvsp[-6].node, yyvsp[-2].node),
						(Node *) makeSimpleA_Expr(AEXPR_OP, ">", yyvsp[-6].node, yyvsp[0].node));
				}
    break;

  case 1065:
#line 6689 "gram.y"
    {
					yyval.node = (Node *) makeA_Expr(AEXPR_OR, NIL,
						(Node *) makeA_Expr(AEXPR_AND, NIL,
						    (Node *) makeSimpleA_Expr(AEXPR_OP, ">=", yyvsp[-5].node, yyvsp[-2].node),
						    (Node *) makeSimpleA_Expr(AEXPR_OP, "<=", yyvsp[-5].node, yyvsp[0].node)),
						(Node *) makeA_Expr(AEXPR_AND, NIL,
						    (Node *) makeSimpleA_Expr(AEXPR_OP, ">=", yyvsp[-5].node, yyvsp[0].node),
						    (Node *) makeSimpleA_Expr(AEXPR_OP, "<=", yyvsp[-5].node, yyvsp[-2].node)));
				}
    break;

  case 1066:
#line 6699 "gram.y"
    {
					yyval.node = (Node *) makeA_Expr(AEXPR_AND, NIL,
						(Node *) makeA_Expr(AEXPR_OR, NIL,
						    (Node *) makeSimpleA_Expr(AEXPR_OP, "<", yyvsp[-6].node, yyvsp[-2].node),
						    (Node *) makeSimpleA_Expr(AEXPR_OP, ">", yyvsp[-6].node, yyvsp[0].node)),
						(Node *) makeA_Expr(AEXPR_OR, NIL,
						    (Node *) makeSimpleA_Expr(AEXPR_OP, "<", yyvsp[-6].node, yyvsp[0].node),
						    (Node *) makeSimpleA_Expr(AEXPR_OP, ">", yyvsp[-6].node, yyvsp[-2].node)));
				}
    break;

  case 1067:
#line 6709 "gram.y"
    {
					/* in_expr returns a SubLink or a list of a_exprs */
					if (IsA(yyvsp[0].node, SubLink))
					{
							SubLink *n = (SubLink *)yyvsp[0].node;
							n->subLinkType = ANY_SUBLINK;
							if (IsA(yyvsp[-2].node, RowExpr))
								n->lefthand = ((RowExpr *) yyvsp[-2].node)->args;
							else
								n->lefthand = list_make1(yyvsp[-2].node);
							n->operName = list_make1(makeString("="));
							yyval.node = (Node *)n;
					}
					else
					{
						Node *n = NULL;
						ListCell *l;
						foreach(l, (List *) yyvsp[0].node)
						{
							Node *cmp;
							cmp = (Node *) makeSimpleA_Expr(AEXPR_OP, "=", yyvsp[-2].node, lfirst(l));
							if (n == NULL)
								n = cmp;
							else
								n = (Node *) makeA_Expr(AEXPR_OR, NIL, n, cmp);
						}
						yyval.node = n;
					}
				}
    break;

  case 1068:
#line 6739 "gram.y"
    {
					/* in_expr returns a SubLink or a list of a_exprs */
					if (IsA(yyvsp[0].node, SubLink))
					{
						/* Make an IN node */
						SubLink *n = (SubLink *)yyvsp[0].node;
						n->subLinkType = ANY_SUBLINK;
						if (IsA(yyvsp[-3].node, RowExpr))
							n->lefthand = ((RowExpr *) yyvsp[-3].node)->args;
						else
							n->lefthand = list_make1(yyvsp[-3].node);
						n->operName = list_make1(makeString("="));
						/* Stick a NOT on top */
						yyval.node = (Node *) makeA_Expr(AEXPR_NOT, NIL, NULL, (Node *) n);
					}
					else
					{
						Node *n = NULL;
						ListCell *l;
						foreach(l, (List *) yyvsp[0].node)
						{
							Node *cmp;
							cmp = (Node *) makeSimpleA_Expr(AEXPR_OP, "<>", yyvsp[-3].node, lfirst(l));
							if (n == NULL)
								n = cmp;
							else
								n = (Node *) makeA_Expr(AEXPR_AND, NIL, n, cmp);
						}
						yyval.node = n;
					}
				}
    break;

  case 1069:
#line 6771 "gram.y"
    {
					SubLink *n = makeNode(SubLink);
					n->subLinkType = yyvsp[-1].ival;
					if (IsA(yyvsp[-3].node, RowExpr))
						n->lefthand = ((RowExpr *) yyvsp[-3].node)->args;
					else
						n->lefthand = list_make1(yyvsp[-3].node);
					n->operName = yyvsp[-2].list;
					n->subselect = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 1070:
#line 6783 "gram.y"
    {
					if (yyvsp[-3].ival == ANY_SUBLINK)
						yyval.node = (Node *) makeA_Expr(AEXPR_OP_ANY, yyvsp[-4].list, yyvsp[-5].node, yyvsp[-1].node);
					else
						yyval.node = (Node *) makeA_Expr(AEXPR_OP_ALL, yyvsp[-4].list, yyvsp[-5].node, yyvsp[-1].node);
				}
    break;

  case 1071:
#line 6790 "gram.y"
    {
					/* Not sure how to get rid of the parentheses
					 * but there are lots of shift/reduce errors without them.
					 *
					 * Should be able to implement this by plopping the entire
					 * select into a node, then transforming the target expressions
					 * from whatever they are into count(*), and testing the
					 * entire result equal to one.
					 * But, will probably implement a separate node in the executor.
					 */
					ereport(ERROR,
							(errcode(ERRCODE_FEATURE_NOT_SUPPORTED),
							 errmsg("UNIQUE predicate is not yet implemented")));
				}
    break;

  case 1072:
#line 6816 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 1073:
#line 6818 "gram.y"
    { yyval.node = makeTypeCast(yyvsp[-2].node, yyvsp[0].typnam); }
    break;

  case 1074:
#line 6820 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "+", NULL, yyvsp[0].node); }
    break;

  case 1075:
#line 6822 "gram.y"
    { yyval.node = doNegate(yyvsp[0].node); }
    break;

  case 1076:
#line 6824 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "+", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1077:
#line 6826 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "-", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1078:
#line 6828 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "*", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1079:
#line 6830 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "/", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1080:
#line 6832 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "%", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1081:
#line 6834 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "^", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1082:
#line 6836 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "<", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1083:
#line 6838 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, ">", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1084:
#line 6840 "gram.y"
    { yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OP, "=", yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1085:
#line 6842 "gram.y"
    { yyval.node = (Node *) makeA_Expr(AEXPR_OP, yyvsp[-1].list, yyvsp[-2].node, yyvsp[0].node); }
    break;

  case 1086:
#line 6844 "gram.y"
    { yyval.node = (Node *) makeA_Expr(AEXPR_OP, yyvsp[-1].list, NULL, yyvsp[0].node); }
    break;

  case 1087:
#line 6846 "gram.y"
    { yyval.node = (Node *) makeA_Expr(AEXPR_OP, yyvsp[0].list, yyvsp[-1].node, NULL); }
    break;

  case 1088:
#line 6848 "gram.y"
    {
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_DISTINCT, "=", yyvsp[-4].node, yyvsp[0].node);
				}
    break;

  case 1089:
#line 6852 "gram.y"
    {
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OF, "=", yyvsp[-5].node, (Node *) yyvsp[-1].list);
				}
    break;

  case 1090:
#line 6856 "gram.y"
    {
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_OF, "!=", yyvsp[-6].node, (Node *) yyvsp[-1].list);
				}
    break;

  case 1091:
#line 6869 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 1092:
#line 6870 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 1093:
#line 6872 "gram.y"
    {
					ParamRef *p = makeNode(ParamRef);
					p->number = yyvsp[-1].ival;
					if (yyvsp[0].list)
					{
						A_Indirection *n = makeNode(A_Indirection);
						n->arg = (Node *) p;
						n->indirection = yyvsp[0].list;
						yyval.node = (Node *) n;
					}
					else
						yyval.node = (Node *) p;
				}
    break;

  case 1094:
#line 6886 "gram.y"
    {
					if (yyvsp[0].list)
					{
						A_Indirection *n = makeNode(A_Indirection);
						n->arg = yyvsp[-2].node;
						n->indirection = yyvsp[0].list;
						yyval.node = (Node *)n;
					}
					else
						yyval.node = yyvsp[-2].node;
				}
    break;

  case 1095:
#line 6898 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 1096:
#line 6900 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 1097:
#line 6902 "gram.y"
    {
					SubLink *n = makeNode(SubLink);
					n->subLinkType = EXPR_SUBLINK;
					n->lefthand = NIL;
					n->operName = NIL;
					n->subselect = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 1098:
#line 6911 "gram.y"
    {
					SubLink *n = makeNode(SubLink);
					n->subLinkType = EXISTS_SUBLINK;
					n->lefthand = NIL;
					n->operName = NIL;
					n->subselect = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 1099:
#line 6920 "gram.y"
    {
					SubLink *n = makeNode(SubLink);
					n->subLinkType = ARRAY_SUBLINK;
					n->lefthand = NIL;
					n->operName = NIL;
					n->subselect = yyvsp[0].node;
					yyval.node = (Node *)n;
				}
    break;

  case 1100:
#line 6929 "gram.y"
    {	yyval.node = yyvsp[0].node;	}
    break;

  case 1101:
#line 6931 "gram.y"
    {
					RowExpr *r = makeNode(RowExpr);
					r->args = yyvsp[0].list;
					r->row_typeid = InvalidOid;	/* not analyzed yet */
					yyval.node = (Node *)r;
				}
    break;

  case 1102:
#line 6948 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = yyvsp[-2].list;
					n->args = NIL;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1103:
#line 6957 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = yyvsp[-3].list;
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1104:
#line 6966 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = yyvsp[-4].list;
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					/* Ideally we'd mark the FuncCall node to indicate
					 * "must be an aggregate", but there's no provision
					 * for that in FuncCall at the moment.
					 */
					yyval.node = (Node *)n;
				}
    break;

  case 1105:
#line 6979 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = yyvsp[-4].list;
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = TRUE;
					yyval.node = (Node *)n;
				}
    break;

  case 1106:
#line 6988 "gram.y"
    {
					/*
					 * For now, we transform AGGREGATE(*) into AGGREGATE(1).
					 *
					 * This does the right thing for COUNT(*) (in fact,
					 * any certainly-non-null expression would do for COUNT),
					 * and there are no other aggregates in SQL92 that accept
					 * '*' as parameter.
					 *
					 * The FuncCall node is also marked agg_star = true,
					 * so that later processing can detect what the argument
					 * really was.
					 */
					FuncCall *n = makeNode(FuncCall);
					A_Const *star = makeNode(A_Const);

					star->val.type = T_Integer;
					star->val.val.ival = 1;
					n->funcname = yyvsp[-3].list;
					n->args = list_make1(star);
					n->agg_star = TRUE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1107:
#line 7013 "gram.y"
    {
					/*
					 * Translate as "'now'::text::date".
					 *
					 * We cannot use "'now'::date" because coerce_type() will
					 * immediately reduce that to a constant representing
					 * today's date.  We need to delay the conversion until
					 * runtime, else the wrong things will happen when
					 * CURRENT_DATE is used in a column default value or rule.
					 *
					 * This could be simplified if we had a way to generate
					 * an expression tree representing runtime application
					 * of type-input conversion functions.  (As of PG 7.3
					 * that is actually possible, but not clear that we want
					 * to rely on it.)
					 */
					A_Const *s = makeNode(A_Const);
					TypeName *d;

					s->val.type = T_String;
					s->val.val.str = "now";
					s->typename = SystemTypeName("text");

					d = SystemTypeName("date");

					yyval.node = (Node *)makeTypeCast((Node *)s, d);
				}
    break;

  case 1108:
#line 7041 "gram.y"
    {
					/*
					 * Translate as "'now'::text::timetz".
					 * See comments for CURRENT_DATE.
					 */
					A_Const *s = makeNode(A_Const);
					TypeName *d;

					s->val.type = T_String;
					s->val.val.str = "now";
					s->typename = SystemTypeName("text");

					d = SystemTypeName("timetz");

					yyval.node = (Node *)makeTypeCast((Node *)s, d);
				}
    break;

  case 1109:
#line 7058 "gram.y"
    {
					/*
					 * Translate as "'now'::text::timetz(n)".
					 * See comments for CURRENT_DATE.
					 */
					A_Const *s = makeNode(A_Const);
					TypeName *d;

					s->val.type = T_String;
					s->val.val.str = "now";
					s->typename = SystemTypeName("text");
					d = SystemTypeName("timetz");
					if (yyvsp[-1].ival < 0)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("CURRENT_TIME(%d) precision must not be negative",
										yyvsp[-1].ival)));
					if (yyvsp[-1].ival > MAX_TIME_PRECISION)
					{
						ereport(WARNING,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("CURRENT_TIME(%d) precision reduced to maximum allowed, %d",
										yyvsp[-1].ival, MAX_TIME_PRECISION)));
						yyvsp[-1].ival = MAX_TIME_PRECISION;
					}
					d->typmod = yyvsp[-1].ival;

					yyval.node = (Node *)makeTypeCast((Node *)s, d);
				}
    break;

  case 1110:
#line 7088 "gram.y"
    {
					/*
					 * Translate as "now()", since we have a function that
					 * does exactly what is needed.
					 */
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("now");
					n->args = NIL;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1111:
#line 7101 "gram.y"
    {
					/*
					 * Translate as "'now'::text::timestamptz(n)".
					 * See comments for CURRENT_DATE.
					 */
					A_Const *s = makeNode(A_Const);
					TypeName *d;

					s->val.type = T_String;
					s->val.val.str = "now";
					s->typename = SystemTypeName("text");

					d = SystemTypeName("timestamptz");
					if (yyvsp[-1].ival < 0)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("CURRENT_TIMESTAMP(%d) precision must not be negative",
										yyvsp[-1].ival)));
					if (yyvsp[-1].ival > MAX_TIMESTAMP_PRECISION)
					{
						ereport(WARNING,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("CURRENT_TIMESTAMP(%d) precision reduced to maximum allowed, %d",
										yyvsp[-1].ival, MAX_TIMESTAMP_PRECISION)));
						yyvsp[-1].ival = MAX_TIMESTAMP_PRECISION;
					}
					d->typmod = yyvsp[-1].ival;

					yyval.node = (Node *)makeTypeCast((Node *)s, d);
				}
    break;

  case 1112:
#line 7132 "gram.y"
    {
					/*
					 * Translate as "'now'::text::time".
					 * See comments for CURRENT_DATE.
					 */
					A_Const *s = makeNode(A_Const);
					TypeName *d;

					s->val.type = T_String;
					s->val.val.str = "now";
					s->typename = SystemTypeName("text");

					d = SystemTypeName("time");

					yyval.node = (Node *)makeTypeCast((Node *)s, d);
				}
    break;

  case 1113:
#line 7149 "gram.y"
    {
					/*
					 * Translate as "'now'::text::time(n)".
					 * See comments for CURRENT_DATE.
					 */
					A_Const *s = makeNode(A_Const);
					TypeName *d;

					s->val.type = T_String;
					s->val.val.str = "now";
					s->typename = SystemTypeName("text");
					d = SystemTypeName("time");
					if (yyvsp[-1].ival < 0)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("LOCALTIME(%d) precision must not be negative",
										yyvsp[-1].ival)));
					if (yyvsp[-1].ival > MAX_TIME_PRECISION)
					{
						ereport(WARNING,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("LOCALTIME(%d) precision reduced to maximum allowed, %d",
										yyvsp[-1].ival, MAX_TIME_PRECISION)));
						yyvsp[-1].ival = MAX_TIME_PRECISION;
					}
					d->typmod = yyvsp[-1].ival;

					yyval.node = (Node *)makeTypeCast((Node *)s, d);
				}
    break;

  case 1114:
#line 7179 "gram.y"
    {
					/*
					 * Translate as "'now'::text::timestamp".
					 * See comments for CURRENT_DATE.
					 */
					A_Const *s = makeNode(A_Const);
					TypeName *d;

					s->val.type = T_String;
					s->val.val.str = "now";
					s->typename = SystemTypeName("text");

					d = SystemTypeName("timestamp");

					yyval.node = (Node *)makeTypeCast((Node *)s, d);
				}
    break;

  case 1115:
#line 7196 "gram.y"
    {
					/*
					 * Translate as "'now'::text::timestamp(n)".
					 * See comments for CURRENT_DATE.
					 */
					A_Const *s = makeNode(A_Const);
					TypeName *d;

					s->val.type = T_String;
					s->val.val.str = "now";
					s->typename = SystemTypeName("text");

					d = SystemTypeName("timestamp");
					if (yyvsp[-1].ival < 0)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("LOCALTIMESTAMP(%d) precision must not be negative",
										yyvsp[-1].ival)));
					if (yyvsp[-1].ival > MAX_TIMESTAMP_PRECISION)
					{
						ereport(WARNING,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("LOCALTIMESTAMP(%d) precision reduced to maximum allowed, %d",
										yyvsp[-1].ival, MAX_TIMESTAMP_PRECISION)));
						yyvsp[-1].ival = MAX_TIMESTAMP_PRECISION;
					}
					d->typmod = yyvsp[-1].ival;

					yyval.node = (Node *)makeTypeCast((Node *)s, d);
				}
    break;

  case 1116:
#line 7227 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("current_user");
					n->args = NIL;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1117:
#line 7236 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("current_user");
					n->args = NIL;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1118:
#line 7245 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("session_user");
					n->args = NIL;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1119:
#line 7254 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("current_user");
					n->args = NIL;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1120:
#line 7263 "gram.y"
    { yyval.node = makeTypeCast(yyvsp[-3].node, yyvsp[-1].typnam); }
    break;

  case 1121:
#line 7265 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("date_part");
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1122:
#line 7274 "gram.y"
    {
					/* overlay(A PLACING B FROM C FOR D) is converted to
					 * substring(A, 1, C-1) || B || substring(A, C+1, C+D)
					 * overlay(A PLACING B FROM C) is converted to
					 * substring(A, 1, C-1) || B || substring(A, C+1, C+char_length(B))
					 */
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("overlay");
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1123:
#line 7288 "gram.y"
    {
					/* position(A in B) is converted to position(B, A) */
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("position");
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1124:
#line 7298 "gram.y"
    {
					/* substring(A from B for C) is converted to
					 * substring(A, B, C) - thomas 2000-11-28
					 */
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("substring");
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1125:
#line 7310 "gram.y"
    {
					/* TREAT(expr AS target) converts expr of a particular type to target,
					 * which is defined to be a subtype of the original expression.
					 * In SQL99, this is intended for use with structured UDTs,
					 * but let's make this a generally useful form allowing stronger
					 * coersions than are handled by implicit casting.
					 */
					FuncCall *n = makeNode(FuncCall);
					/* Convert SystemTypeName() to SystemFuncName() even though
					 * at the moment they result in the same thing.
					 */
					n->funcname = SystemFuncName(((Value *)llast(yyvsp[-1].typnam->names))->val.str);
					n->args = list_make1(yyvsp[-3].node);
					yyval.node = (Node *)n;
				}
    break;

  case 1126:
#line 7326 "gram.y"
    {
					/* various trim expressions are defined in SQL92
					 * - thomas 1997-07-19
					 */
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("btrim");
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1127:
#line 7338 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("ltrim");
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1128:
#line 7347 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("rtrim");
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1129:
#line 7356 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("btrim");
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1130:
#line 7365 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					A_Const *c = makeNode(A_Const);

					c->val.type = T_String;
					c->val.val.str = NameListToQuotedString(yyvsp[-1].list);

					n->funcname = SystemFuncName("convert_using");
					n->args = list_make2(yyvsp[-3].node, c);
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1131:
#line 7379 "gram.y"
    {
					FuncCall *n = makeNode(FuncCall);
					n->funcname = SystemFuncName("convert");
					n->args = yyvsp[-1].list;
					n->agg_star = FALSE;
					n->agg_distinct = FALSE;
					yyval.node = (Node *)n;
				}
    break;

  case 1132:
#line 7388 "gram.y"
    {
					yyval.node = (Node *) makeSimpleA_Expr(AEXPR_NULLIF, "=", yyvsp[-3].node, yyvsp[-1].node);
				}
    break;

  case 1133:
#line 7392 "gram.y"
    {
					CoalesceExpr *c = makeNode(CoalesceExpr);
					c->args = yyvsp[-1].list;
					yyval.node = (Node *)c;
				}
    break;

  case 1134:
#line 7398 "gram.y"
    {
					MinMaxExpr *v = makeNode(MinMaxExpr);
					v->args = yyvsp[-1].list;
					v->op = IS_GREATEST;
					yyval.node = (Node *)v;
				}
    break;

  case 1135:
#line 7405 "gram.y"
    {
					MinMaxExpr *v = makeNode(MinMaxExpr);
					v->args = yyvsp[-1].list;
					v->op = IS_LEAST;
					yyval.node = (Node *)v;
				}
    break;

  case 1136:
#line 7423 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 1137:
#line 7424 "gram.y"
    { yyval.list = NIL; }
    break;

  case 1138:
#line 7425 "gram.y"
    { yyval.list = lappend(yyvsp[-3].list, yyvsp[-1].node); }
    break;

  case 1139:
#line 7428 "gram.y"
    { yyval.ival = ANY_SUBLINK; }
    break;

  case 1140:
#line 7429 "gram.y"
    { yyval.ival = ANY_SUBLINK; }
    break;

  case 1141:
#line 7430 "gram.y"
    { yyval.ival = ALL_SUBLINK; }
    break;

  case 1142:
#line 7433 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1143:
#line 7434 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1144:
#line 7437 "gram.y"
    { yyval.str = "+"; }
    break;

  case 1145:
#line 7438 "gram.y"
    { yyval.str = "-"; }
    break;

  case 1146:
#line 7439 "gram.y"
    { yyval.str = "*"; }
    break;

  case 1147:
#line 7440 "gram.y"
    { yyval.str = "/"; }
    break;

  case 1148:
#line 7441 "gram.y"
    { yyval.str = "%"; }
    break;

  case 1149:
#line 7442 "gram.y"
    { yyval.str = "^"; }
    break;

  case 1150:
#line 7443 "gram.y"
    { yyval.str = "<"; }
    break;

  case 1151:
#line 7444 "gram.y"
    { yyval.str = ">"; }
    break;

  case 1152:
#line 7445 "gram.y"
    { yyval.str = "="; }
    break;

  case 1153:
#line 7449 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 1154:
#line 7451 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 1155:
#line 7456 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 1156:
#line 7458 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 1157:
#line 7463 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 1158:
#line 7465 "gram.y"
    { yyval.list = yyvsp[-1].list; }
    break;

  case 1159:
#line 7467 "gram.y"
    { yyval.list = list_make1(makeString("~~")); }
    break;

  case 1160:
#line 7469 "gram.y"
    { yyval.list = list_make1(makeString("!~~")); }
    break;

  case 1161:
#line 7471 "gram.y"
    { yyval.list = list_make1(makeString("~~*")); }
    break;

  case 1162:
#line 7473 "gram.y"
    { yyval.list = list_make1(makeString("!~~*")); }
    break;

  case 1163:
#line 7485 "gram.y"
    {
					yyval.list = list_make1(yyvsp[0].node);
				}
    break;

  case 1164:
#line 7489 "gram.y"
    {
					yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node);
				}
    break;

  case 1165:
#line 7496 "gram.y"
    {
					A_Const *n = makeNode(A_Const);
					n->val.type = T_String;
					n->val.val.str = yyvsp[-2].str;
					yyval.list = list_make2((Node *) n, yyvsp[0].node);
				}
    break;

  case 1166:
#line 7502 "gram.y"
    { yyval.list = NIL; }
    break;

  case 1167:
#line 7506 "gram.y"
    {
					yyval.list = lappend(yyvsp[-2].list, yyvsp[0].typnam);
				}
    break;

  case 1168:
#line 7510 "gram.y"
    {
					yyval.list = list_make1(yyvsp[0].typnam);
				}
    break;

  case 1169:
#line 7516 "gram.y"
    {	yyval.list = list_make1(yyvsp[0].node);		}
    break;

  case 1170:
#line 7518 "gram.y"
    {	yyval.list = lappend(yyvsp[-2].list, yyvsp[0].node);	}
    break;

  case 1171:
#line 7522 "gram.y"
    {
					ArrayExpr *n = makeNode(ArrayExpr);
					n->elements = yyvsp[-1].list;
					yyval.node = (Node *)n;
				}
    break;

  case 1172:
#line 7528 "gram.y"
    {
					ArrayExpr *n = makeNode(ArrayExpr);
					n->elements = yyvsp[-1].list;
					yyval.node = (Node *)n;
				}
    break;

  case 1173:
#line 7540 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1174:
#line 7541 "gram.y"
    { yyval.str = "year"; }
    break;

  case 1175:
#line 7542 "gram.y"
    { yyval.str = "month"; }
    break;

  case 1176:
#line 7543 "gram.y"
    { yyval.str = "day"; }
    break;

  case 1177:
#line 7544 "gram.y"
    { yyval.str = "hour"; }
    break;

  case 1178:
#line 7545 "gram.y"
    { yyval.str = "minute"; }
    break;

  case 1179:
#line 7546 "gram.y"
    { yyval.str = "second"; }
    break;

  case 1180:
#line 7547 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1181:
#line 7557 "gram.y"
    {
					yyval.list = list_make4(yyvsp[-3].node, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
				}
    break;

  case 1182:
#line 7561 "gram.y"
    {
					yyval.list = list_make3(yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
				}
    break;

  case 1183:
#line 7568 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 1184:
#line 7574 "gram.y"
    { yyval.list = list_make2(yyvsp[0].node, yyvsp[-2].node); }
    break;

  case 1185:
#line 7575 "gram.y"
    { yyval.list = NIL; }
    break;

  case 1186:
#line 7592 "gram.y"
    {
					yyval.list = list_make3(yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node);
				}
    break;

  case 1187:
#line 7596 "gram.y"
    {
					/* not legal per SQL99, but might as well allow it */
					yyval.list = list_make3(yyvsp[-2].node, yyvsp[0].node, yyvsp[-1].node);
				}
    break;

  case 1188:
#line 7601 "gram.y"
    {
					yyval.list = list_make2(yyvsp[-1].node, yyvsp[0].node);
				}
    break;

  case 1189:
#line 7605 "gram.y"
    {
					/*
					 * Since there are no cases where this syntax allows
					 * a textual FOR value, we forcibly cast the argument
					 * to int4.  This is a kluge to avoid surprising results
					 * when the argument is, say, int8.  It'd be better if
					 * there were not an implicit cast from int8 to text ...
					 */
					A_Const *n = makeNode(A_Const);
					n->val.type = T_Integer;
					n->val.val.ival = 1;
					yyval.list = list_make3(yyvsp[-1].node, (Node *) n,
									makeTypeCast(yyvsp[0].node, SystemTypeName("int4")));
				}
    break;

  case 1190:
#line 7620 "gram.y"
    {
					yyval.list = yyvsp[0].list;
				}
    break;

  case 1191:
#line 7624 "gram.y"
    { yyval.list = NIL; }
    break;

  case 1192:
#line 7628 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 1193:
#line 7631 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 1194:
#line 7634 "gram.y"
    { yyval.list = lappend(yyvsp[0].list, yyvsp[-2].node); }
    break;

  case 1195:
#line 7635 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 1196:
#line 7636 "gram.y"
    { yyval.list = yyvsp[0].list; }
    break;

  case 1197:
#line 7640 "gram.y"
    {
					SubLink *n = makeNode(SubLink);
					n->subselect = yyvsp[0].node;
					/* other fields will be filled later */
					yyval.node = (Node *)n;
				}
    break;

  case 1198:
#line 7646 "gram.y"
    { yyval.node = (Node *)yyvsp[-1].list; }
    break;

  case 1199:
#line 7657 "gram.y"
    {
					CaseExpr *c = makeNode(CaseExpr);
					c->casetype = InvalidOid; /* not analyzed yet */
					c->arg = (Expr *) yyvsp[-3].node;
					c->args = yyvsp[-2].list;
					c->defresult = (Expr *) yyvsp[-1].node;
					yyval.node = (Node *)c;
				}
    break;

  case 1200:
#line 7669 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 1201:
#line 7670 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].node); }
    break;

  case 1202:
#line 7675 "gram.y"
    {
					CaseWhen *w = makeNode(CaseWhen);
					w->expr = (Expr *) yyvsp[-2].node;
					w->result = (Expr *) yyvsp[0].node;
					yyval.node = (Node *)w;
				}
    break;

  case 1203:
#line 7684 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 1204:
#line 7685 "gram.y"
    { yyval.node = NULL; }
    break;

  case 1205:
#line 7688 "gram.y"
    { yyval.node = yyvsp[0].node; }
    break;

  case 1206:
#line 7689 "gram.y"
    { yyval.node = NULL; }
    break;

  case 1207:
#line 7698 "gram.y"
    {
					yyval.node = makeColumnRef(yyvsp[0].str, NIL);
				}
    break;

  case 1208:
#line 7702 "gram.y"
    {
					yyval.node = makeColumnRef(yyvsp[-1].str, yyvsp[0].list);
				}
    break;

  case 1209:
#line 7709 "gram.y"
    {
					yyval.node = (Node *) makeString(yyvsp[0].str);
				}
    break;

  case 1210:
#line 7713 "gram.y"
    {
					yyval.node = (Node *) makeString("*");
				}
    break;

  case 1211:
#line 7717 "gram.y"
    {
					A_Indices *ai = makeNode(A_Indices);
					ai->lidx = NULL;
					ai->uidx = yyvsp[-1].node;
					yyval.node = (Node *) ai;
				}
    break;

  case 1212:
#line 7724 "gram.y"
    {
					A_Indices *ai = makeNode(A_Indices);
					ai->lidx = yyvsp[-3].node;
					ai->uidx = yyvsp[-1].node;
					yyval.node = (Node *) ai;
				}
    break;

  case 1213:
#line 7733 "gram.y"
    { yyval.list = list_make1(yyvsp[0].node); }
    break;

  case 1214:
#line 7734 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].node); }
    break;

  case 1215:
#line 7738 "gram.y"
    { yyval.list = NIL; }
    break;

  case 1216:
#line 7739 "gram.y"
    { yyval.list = lappend(yyvsp[-1].list, yyvsp[0].node); }
    break;

  case 1219:
#line 7754 "gram.y"
    { yyval.list = list_make1(yyvsp[0].target); }
    break;

  case 1220:
#line 7755 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].target); }
    break;

  case 1221:
#line 7760 "gram.y"
    {
					yyval.target = makeNode(ResTarget);
					yyval.target->name = yyvsp[0].str;
					yyval.target->indirection = NIL;
					yyval.target->val = (Node *)yyvsp[-2].node;
				}
    break;

  case 1222:
#line 7767 "gram.y"
    {
					yyval.target = makeNode(ResTarget);
					yyval.target->name = NULL;
					yyval.target->indirection = NIL;
					yyval.target->val = (Node *)yyvsp[0].node;
				}
    break;

  case 1223:
#line 7774 "gram.y"
    {
					ColumnRef *n = makeNode(ColumnRef);
					n->fields = list_make1(makeString("*"));

					yyval.target = makeNode(ResTarget);
					yyval.target->name = NULL;
					yyval.target->indirection = NIL;
					yyval.target->val = (Node *)n;
				}
    break;

  case 1224:
#line 7786 "gram.y"
    { yyval.list = list_make1(yyvsp[0].target); }
    break;

  case 1225:
#line 7787 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list,yyvsp[0].target); }
    break;

  case 1226:
#line 7792 "gram.y"
    {
					yyval.target = makeNode(ResTarget);
					yyval.target->name = yyvsp[-3].str;
					yyval.target->indirection = yyvsp[-2].list;
					yyval.target->val = (Node *) yyvsp[0].node;
				}
    break;

  case 1227:
#line 7799 "gram.y"
    {
					yyval.target = makeNode(ResTarget);
					yyval.target->name = yyvsp[-3].str;
					yyval.target->indirection = yyvsp[-2].list;
					yyval.target->val = (Node *) makeNode(SetToDefault);
				}
    break;

  case 1228:
#line 7809 "gram.y"
    { yyval.list = list_make1(yyvsp[0].target); }
    break;

  case 1229:
#line 7810 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].target); }
    break;

  case 1230:
#line 7815 "gram.y"
    {
					yyval.target = makeNode(ResTarget);
					yyval.target->name = NULL;
					yyval.target->indirection = NIL;
					yyval.target->val = (Node *)yyvsp[0].node;
				}
    break;

  case 1231:
#line 7822 "gram.y"
    {
					yyval.target = makeNode(ResTarget);
					yyval.target->name = NULL;
					yyval.target->indirection = NIL;
					yyval.target->val = (Node *) makeNode(SetToDefault);
				}
    break;

  case 1232:
#line 7838 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1233:
#line 7839 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1234:
#line 7843 "gram.y"
    { yyval.list = list_make1(yyvsp[0].range); }
    break;

  case 1235:
#line 7844 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, yyvsp[0].range); }
    break;

  case 1236:
#line 7856 "gram.y"
    {
					yyval.range = makeNode(RangeVar);
					yyval.range->catalogname = NULL;
					yyval.range->schemaname = NULL;
					yyval.range->relname = yyvsp[0].str;
				}
    break;

  case 1237:
#line 7863 "gram.y"
    {
					check_qualified_name(yyvsp[0].list);
					yyval.range = makeNode(RangeVar);
					switch (list_length(yyvsp[0].list))
					{
						case 1:
							yyval.range->catalogname = NULL;
							yyval.range->schemaname = yyvsp[-1].str;
							yyval.range->relname = strVal(linitial(yyvsp[0].list));
							break;
						case 2:
							yyval.range->catalogname = yyvsp[-1].str;
							yyval.range->schemaname = strVal(linitial(yyvsp[0].list));
							yyval.range->relname = strVal(lsecond(yyvsp[0].list));
							break;
						default:
							ereport(ERROR,
									(errcode(ERRCODE_SYNTAX_ERROR),
									 errmsg("improper qualified name (too many dotted names): %s",
											NameListToString(lcons(makeString(yyvsp[-1].str), yyvsp[0].list)))));
							break;
					}
				}
    break;

  case 1238:
#line 7889 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 1239:
#line 7891 "gram.y"
    { yyval.list = lappend(yyvsp[-2].list, makeString(yyvsp[0].str)); }
    break;

  case 1240:
#line 7895 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1241:
#line 7898 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1242:
#line 7901 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1243:
#line 7903 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1244:
#line 7905 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1245:
#line 7907 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1246:
#line 7918 "gram.y"
    { yyval.list = list_make1(makeString(yyvsp[0].str)); }
    break;

  case 1247:
#line 7920 "gram.y"
    { yyval.list = check_func_name(lcons(makeString(yyvsp[-1].str), yyvsp[0].list)); }
    break;

  case 1248:
#line 7928 "gram.y"
    {
					A_Const *n = makeNode(A_Const);
					n->val.type = T_Integer;
					n->val.val.ival = yyvsp[0].ival;
					yyval.node = (Node *)n;
				}
    break;

  case 1249:
#line 7935 "gram.y"
    {
					A_Const *n = makeNode(A_Const);
					n->val.type = T_Float;
					n->val.val.str = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 1250:
#line 7942 "gram.y"
    {
					A_Const *n = makeNode(A_Const);
					n->val.type = T_String;
					n->val.val.str = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 1251:
#line 7949 "gram.y"
    {
					A_Const *n = makeNode(A_Const);
					n->val.type = T_BitString;
					n->val.val.str = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 1252:
#line 7956 "gram.y"
    {
					/* This is a bit constant per SQL99:
					 * Without Feature F511, "BIT data type",
					 * a <general literal> shall not be a
					 * <bit string literal> or a <hex string literal>.
					 */
					A_Const *n = makeNode(A_Const);
					n->val.type = T_BitString;
					n->val.val.str = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 1253:
#line 7968 "gram.y"
    {
					A_Const *n = makeNode(A_Const);
					n->typename = yyvsp[-1].typnam;
					n->val.type = T_String;
					n->val.val.str = yyvsp[0].str;
					yyval.node = (Node *)n;
				}
    break;

  case 1254:
#line 7976 "gram.y"
    {
					A_Const *n = makeNode(A_Const);
					n->typename = yyvsp[-2].typnam;
					n->val.type = T_String;
					n->val.val.str = yyvsp[-1].str;
					/* precision is not specified, but fields may be... */
					if (yyvsp[0].ival != INTERVAL_FULL_RANGE)
						n->typename->typmod = INTERVAL_TYPMOD(INTERVAL_FULL_PRECISION, yyvsp[0].ival);
					yyval.node = (Node *)n;
				}
    break;

  case 1255:
#line 7987 "gram.y"
    {
					A_Const *n = makeNode(A_Const);
					n->typename = yyvsp[-5].typnam;
					n->val.type = T_String;
					n->val.val.str = yyvsp[-1].str;
					/* precision specified, and fields may be... */
					if (yyvsp[-3].ival < 0)
						ereport(ERROR,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("INTERVAL(%d) precision must not be negative",
										yyvsp[-3].ival)));
					if (yyvsp[-3].ival > MAX_INTERVAL_PRECISION)
					{
						ereport(WARNING,
								(errcode(ERRCODE_INVALID_PARAMETER_VALUE),
								 errmsg("INTERVAL(%d) precision reduced to maximum allowed, %d",
										yyvsp[-3].ival, MAX_INTERVAL_PRECISION)));
						yyvsp[-3].ival = MAX_INTERVAL_PRECISION;
					}
					n->typename->typmod = INTERVAL_TYPMOD(yyvsp[-3].ival, yyvsp[0].ival);
					yyval.node = (Node *)n;
				}
    break;

  case 1256:
#line 8010 "gram.y"
    {
					yyval.node = (Node *)makeBoolAConst(TRUE);
				}
    break;

  case 1257:
#line 8014 "gram.y"
    {
					yyval.node = (Node *)makeBoolAConst(FALSE);
				}
    break;

  case 1258:
#line 8018 "gram.y"
    {
					A_Const *n = makeNode(A_Const);
					n->val.type = T_Null;
					yyval.node = (Node *)n;
				}
    break;

  case 1259:
#line 8025 "gram.y"
    { yyval.ival = yyvsp[0].ival; }
    break;

  case 1260:
#line 8026 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1261:
#line 8027 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1262:
#line 8029 "gram.y"
    { yyval.ival = yyvsp[0].ival; }
    break;

  case 1263:
#line 8030 "gram.y"
    { yyval.ival = - yyvsp[0].ival; }
    break;

  case 1264:
#line 8046 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1265:
#line 8047 "gram.y"
    { yyval.str = pstrdup(yyvsp[0].keyword); }
    break;

  case 1266:
#line 8048 "gram.y"
    { yyval.str = pstrdup(yyvsp[0].keyword); }
    break;

  case 1267:
#line 8053 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1268:
#line 8054 "gram.y"
    { yyval.str = pstrdup(yyvsp[0].keyword); }
    break;

  case 1269:
#line 8060 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1270:
#line 8061 "gram.y"
    { yyval.str = pstrdup(yyvsp[0].keyword); }
    break;

  case 1271:
#line 8062 "gram.y"
    { yyval.str = pstrdup(yyvsp[0].keyword); }
    break;

  case 1272:
#line 8068 "gram.y"
    { yyval.str = yyvsp[0].str; }
    break;

  case 1273:
#line 8069 "gram.y"
    { yyval.str = pstrdup(yyvsp[0].keyword); }
    break;

  case 1274:
#line 8070 "gram.y"
    { yyval.str = pstrdup(yyvsp[0].keyword); }
    break;

  case 1275:
#line 8071 "gram.y"
    { yyval.str = pstrdup(yyvsp[0].keyword); }
    break;

  case 1276:
#line 8072 "gram.y"
    { yyval.str = pstrdup(yyvsp[0].keyword); }
    break;

  case 1611:
#line 8462 "gram.y"
    {
					if (QueryIsRule)
						yyval.str = "*OLD*";
					else
						ereport(ERROR,
								(errcode(ERRCODE_SYNTAX_ERROR),
								 errmsg("OLD used in query that is not in a rule")));
				}
    break;

  case 1612:
#line 8471 "gram.y"
    {
					if (QueryIsRule)
						yyval.str = "*NEW*";
					else
						ereport(ERROR,
								(errcode(ERRCODE_SYNTAX_ERROR),
								 errmsg("NEW used in query that is not in a rule")));
				}
    break;


    }

/* Line 991 of yacc.c.  */
#line 20400 "y.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab2;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:

  /* Suppress GCC warning that yyerrlab1 is unused when no action
     invokes YYERROR.  */
#if defined (__GNUC_MINOR__) && 2093 <= (__GNUC__ * 1000 + __GNUC_MINOR__)
  __attribute__ ((__unused__))
#endif


  goto yyerrlab2;


/*---------------------------------------------------------------.
| yyerrlab2 -- pop states until the error token can be shifted.  |
`---------------------------------------------------------------*/
yyerrlab2:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 8481 "gram.y"


static Node *
makeColumnRef(char *relname, List *indirection)
{
	/*
	 * Generate a ColumnRef node, with an A_Indirection node added if there
	 * is any subscripting in the specified indirection list.  However,
	 * any field selection at the start of the indirection list must be
	 * transposed into the "fields" part of the ColumnRef node.
	 */
	ColumnRef  *c = makeNode(ColumnRef);
	int		nfields = 0;
	ListCell *l;

	foreach(l, indirection)
	{
		if (IsA(lfirst(l), A_Indices))
		{
			A_Indirection *i = makeNode(A_Indirection);

			if (nfields == 0)
			{
				/* easy case - all indirection goes to A_Indirection */
				c->fields = list_make1(makeString(relname));
				i->indirection = indirection;
			}
			else
			{
				/* got to split the list in two */
				i->indirection = list_copy_tail(indirection, nfields);
				indirection = list_truncate(indirection, nfields);
				c->fields = lcons(makeString(relname), indirection);
			}
			i->arg = (Node *) c;
			return (Node *) i;
		}
		nfields++;
	}
	/* No subscripting, so all indirection gets added to field list */
	c->fields = lcons(makeString(relname), indirection);
	return (Node *) c;
}

static Node *
makeTypeCast(Node *arg, TypeName *typename)
{
	/*
	 * Simply generate a TypeCast node.
	 *
	 * Earlier we would determine whether an A_Const would
	 * be acceptable, however Domains require coerce_type()
	 * to process them -- applying constraints as required.
	 */
	TypeCast *n = makeNode(TypeCast);
	n->arg = arg;
	n->typename = typename;
	return (Node *) n;
}

static Node *
makeStringConst(char *str, TypeName *typename)
{
	A_Const *n = makeNode(A_Const);

	n->val.type = T_String;
	n->val.val.str = str;
	n->typename = typename;

	return (Node *)n;
}

static Node *
makeIntConst(int val)
{
	A_Const *n = makeNode(A_Const);
	n->val.type = T_Integer;
	n->val.val.ival = val;
	n->typename = SystemTypeName("int4");

	return (Node *)n;
}

static Node *
makeFloatConst(char *str)
{
	A_Const *n = makeNode(A_Const);

	n->val.type = T_Float;
	n->val.val.str = str;
	n->typename = SystemTypeName("float8");

	return (Node *)n;
}

static Node *
makeAConst(Value *v)
{
	Node *n;

	switch (v->type)
	{
		case T_Float:
			n = makeFloatConst(v->val.str);
			break;

		case T_Integer:
			n = makeIntConst(v->val.ival);
			break;

		case T_String:
		default:
			n = makeStringConst(v->val.str, NULL);
			break;
	}

	return n;
}

/* makeDefElem()
 * Create a DefElem node and set contents.
 * Could be moved to nodes/makefuncs.c if this is useful elsewhere.
 */
static DefElem *
makeDefElem(char *name, Node *arg)
{
	DefElem *f = makeNode(DefElem);
	f->defname = name;
	f->arg = arg;
	return f;
}

/* makeBoolAConst()
 * Create an A_Const node and initialize to a boolean constant.
 */
static A_Const *
makeBoolAConst(bool state)
{
	A_Const *n = makeNode(A_Const);
	n->val.type = T_String;
	n->val.val.str = (state? "t": "f");
	n->typename = SystemTypeName("bool");
	return n;
}

/* makeRowNullTest()
 * Generate separate operator nodes for a single row descriptor test.
 *
 * Eventually this should be eliminated in favor of making the NullTest
 * node type capable of handling it directly.
 */
static Node *
makeRowNullTest(NullTestType test, RowExpr *row)
{
	Node		*result = NULL;
	ListCell	*arg;

	foreach(arg, row->args)
	{
		NullTest *n;

		n = makeNode(NullTest);
		n->arg = (Expr *) lfirst(arg);
		n->nulltesttype = test;

		if (result == NULL)
			result = (Node *) n;
		else if (test == IS_NOT_NULL)
			result = (Node *) makeA_Expr(AEXPR_OR, NIL, result, (Node *)n);
		else
			result = (Node *) makeA_Expr(AEXPR_AND, NIL, result, (Node *)n);
	}

	if (result == NULL)
	{
		/* zero-length rows?  Generate constant TRUE or FALSE */
		result = (Node *) makeBoolAConst(test == IS_NULL);
	}

	return result;
}

/* makeOverlaps()
 * Create and populate a FuncCall node to support the OVERLAPS operator.
 */
static FuncCall *
makeOverlaps(List *largs, List *rargs)
{
	FuncCall *n = makeNode(FuncCall);
	n->funcname = SystemFuncName("overlaps");
	if (list_length(largs) == 1)
		largs = lappend(largs, largs);
	else if (list_length(largs) != 2)
		ereport(ERROR,
				(errcode(ERRCODE_SYNTAX_ERROR),
				 errmsg("wrong number of parameters on left side of OVERLAPS expression")));
	if (list_length(rargs) == 1)
		rargs = lappend(rargs, rargs);
	else if (list_length(rargs) != 2)
		ereport(ERROR,
				(errcode(ERRCODE_SYNTAX_ERROR),
				 errmsg("wrong number of parameters on right side of OVERLAPS expression")));
	n->args = list_concat(largs, rargs);
	n->agg_star = FALSE;
	n->agg_distinct = FALSE;
	return n;
}

/* check_qualified_name --- check the result of qualified_name production
 *
 * It's easiest to let the grammar production for qualified_name allow
 * subscripts and '*', which we then must reject here.
 */
static void
check_qualified_name(List *names)
{
	ListCell   *i;

	foreach(i, names)
	{
		if (!IsA(lfirst(i), String))
			yyerror("syntax error");
		else if (strcmp(strVal(lfirst(i)), "*") == 0)
			yyerror("syntax error");
	}
}

/* check_func_name --- check the result of func_name production
 *
 * It's easiest to let the grammar production for func_name allow subscripts
 * and '*', which we then must reject here.
 */
static List *
check_func_name(List *names)
{
	ListCell   *i;

	foreach(i, names)
	{
		if (!IsA(lfirst(i), String))
			yyerror("syntax error");
		else if (strcmp(strVal(lfirst(i)), "*") == 0)
			yyerror("syntax error");
	}
	return names;
}

/* extractArgTypes()
 * Given a list of FunctionParameter nodes, extract a list of just the
 * argument types (TypeNames) for input parameters only.  This is what
 * is needed to look up an existing function, which is what is wanted by
 * the productions that use this call.
 */
static List *
extractArgTypes(List *parameters)
{
	List	   *result = NIL;
	ListCell   *i;

	foreach(i, parameters)
	{
		FunctionParameter *p = (FunctionParameter *) lfirst(i);

		if (p->mode != FUNC_PARAM_OUT)			/* keep if IN or INOUT */
			result = lappend(result, p->argType);
	}
	return result;
}

/* findLeftmostSelect()
 * Find the leftmost component SelectStmt in a set-operation parsetree.
 */
static SelectStmt *
findLeftmostSelect(SelectStmt *node)
{
	while (node && node->op != SETOP_NONE)
		node = node->larg;
	Assert(node && IsA(node, SelectStmt) && node->larg == NULL);
	return node;
}

/* insertSelectOptions()
 * Insert ORDER BY, etc into an already-constructed SelectStmt.
 *
 * This routine is just to avoid duplicating code in SelectStmt productions.
 */
static void
insertSelectOptions(SelectStmt *stmt,
					List *sortClause, Node *lockingClause,
					Node *limitOffset, Node *limitCount)
{
	/*
	 * Tests here are to reject constructs like
	 *	(SELECT foo ORDER BY bar) ORDER BY baz
	 */
	if (sortClause)
	{
		if (stmt->sortClause)
			ereport(ERROR,
					(errcode(ERRCODE_SYNTAX_ERROR),
					 errmsg("multiple ORDER BY clauses not allowed")));
		stmt->sortClause = sortClause;
	}
	if (lockingClause)
	{
		if (stmt->lockingClause)
			ereport(ERROR,
					(errcode(ERRCODE_SYNTAX_ERROR),
					 errmsg("multiple FOR UPDATE/FOR SHARE clauses not allowed")));
		stmt->lockingClause = (LockingClause *) lockingClause;
	}
	if (limitOffset)
	{
		if (stmt->limitOffset)
			ereport(ERROR,
					(errcode(ERRCODE_SYNTAX_ERROR),
					 errmsg("multiple OFFSET clauses not allowed")));
		stmt->limitOffset = limitOffset;
	}
	if (limitCount)
	{
		if (stmt->limitCount)
			ereport(ERROR,
					(errcode(ERRCODE_SYNTAX_ERROR),
					 errmsg("multiple LIMIT clauses not allowed")));
		stmt->limitCount = limitCount;
	}
}

static Node *
makeSetOp(SetOperation op, bool all, Node *larg, Node *rarg)
{
	SelectStmt *n = makeNode(SelectStmt);

	n->op = op;
	n->all = all;
	n->larg = (SelectStmt *) larg;
	n->rarg = (SelectStmt *) rarg;
	return (Node *) n;
}

/* SystemFuncName()
 * Build a properly-qualified reference to a built-in function.
 */
List *
SystemFuncName(char *name)
{
	return list_make2(makeString("pg_catalog"), makeString(name));
}

/* SystemTypeName()
 * Build a properly-qualified reference to a built-in type.
 *
 * typmod is defaulted, but may be changed afterwards by caller.
 */
TypeName *
SystemTypeName(char *name)
{
	TypeName   *n = makeNode(TypeName);

	n->names = list_make2(makeString("pg_catalog"), makeString(name));
	n->typmod = -1;
	return n;
}

/* parser_init()
 * Initialize to parse one query string
 */
void
parser_init(void)
{
	QueryIsRule = FALSE;
}

/* exprIsNullConstant()
 * Test whether an a_expr is a plain NULL constant or not.
 */
bool
exprIsNullConstant(Node *arg)
{
	if (arg && IsA(arg, A_Const))
	{
		A_Const *con = (A_Const *) arg;

		if (con->val.type == T_Null &&
			con->typename == NULL)
			return TRUE;
	}
	return FALSE;
}

/* doNegate()
 * Handle negation of a numeric constant.
 *
 * Formerly, we did this here because the optimizer couldn't cope with
 * indexquals that looked like "var = -4" --- it wants "var = const"
 * and a unary minus operator applied to a constant didn't qualify.
 * As of Postgres 7.0, that problem doesn't exist anymore because there
 * is a constant-subexpression simplifier in the optimizer.  However,
 * there's still a good reason for doing this here, which is that we can
 * postpone committing to a particular internal representation for simple
 * negative constants.	It's better to leave "-123.456" in string form
 * until we know what the desired type is.
 */
static Node *
doNegate(Node *n)
{
	if (IsA(n, A_Const))
	{
		A_Const *con = (A_Const *)n;

		if (con->val.type == T_Integer)
		{
			con->val.val.ival = -con->val.val.ival;
			return n;
		}
		if (con->val.type == T_Float)
		{
			doNegateFloat(&con->val);
			return n;
		}
	}

	return (Node *) makeSimpleA_Expr(AEXPR_OP, "-", NULL, n);
}

static void
doNegateFloat(Value *v)
{
	char   *oldval = v->val.str;

	Assert(IsA(v, Float));
	if (*oldval == '+')
		oldval++;
	if (*oldval == '-')
		v->val.str = oldval+1;	/* just strip the '-' */
	else
	{
		char   *newval = (char *) palloc(strlen(oldval) + 2);

		*newval = '-';
		strcpy(newval+1, oldval);
		v->val.str = newval;
	}
}

#include "scan.c"

