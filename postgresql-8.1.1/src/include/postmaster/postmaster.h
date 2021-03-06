/*-------------------------------------------------------------------------
 *
 * postmaster.h
 *	  Exports from postmaster/postmaster.c.
 *
 * Portions Copyright (c) 1996-2005, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $PostgreSQL: pgsql/src/include/postmaster/postmaster.h,v 1.11 2005/08/20 23:26:33 tgl Exp $
 *
 *-------------------------------------------------------------------------
 */
#ifndef _POSTMASTER_H
#define _POSTMASTER_H

/* GUC options */
extern bool EnableSSL;
extern bool SilentMode;
extern int	ReservedBackends;
extern int	PostPortNumber;
extern int	Unix_socket_permissions;
extern char *Unix_socket_group;
extern char *UnixSocketDir;
extern char *ListenAddresses;
extern bool ClientAuthInProgress;
extern int	PreAuthDelay;
extern int	AuthenticationTimeout;
extern char *preload_libraries_string;
extern bool Log_connections;
extern bool log_hostname;
extern char *bonjour_name;

#ifdef WIN32
extern HANDLE PostmasterHandle;
#endif


extern int	PostmasterMain(int argc, char *argv[]);
extern void ClosePostmasterPorts(bool am_syslogger);

#ifdef EXEC_BACKEND
extern pid_t postmaster_forkexec(int argc, char *argv[]);
extern int	SubPostmasterMain(int argc, char *argv[]);

extern Size ShmemBackendArraySize(void);
extern void ShmemBackendArrayAllocation(void);
#endif

#endif   /* _POSTMASTER_H */
