// #anon_enum$PR_FAILURE=-1$PR_SUCCESS=0
// file /usr/include/nspr/prtypes.h line 483
enum anonymous$13 { PR_FAILURE=-1, PR_SUCCESS=0 };

// #anon_enum$ssl_variant_stream=0$ssl_variant_datagram=1
// file /usr/include/nss/sslt.h line 218
enum anonymous$14 { ssl_variant_stream=0, ssl_variant_datagram=1 };

// tag-#anon#ST[*{S8}$S8$'mech'|*{S8}$S8$'authid'|*{S8}$S8$'username'|*{S8}$S8$'passwd'|*{S8}$S8$'realm']
// file ../ldap/servers/slapd/tools/ldaptool-sasl.c line 53
struct anonymous$15;

// tag-#anon#ST[*{S8}$S8$'type'|S32'length'|U32'$pad0'|*{S8}$S8$'value'|S32'dontFree'|U32'$pad1']
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 381
struct anonymous$16;

// tag-#anon#ST[*{V}$V$'_call_addr'|S32'_syscall'|U32'_arch']
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 126
struct anonymous$9;

// tag-#anon#ST[*{V}$V$'_lower'|*{V}$V$'_upper']
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 111
struct anonymous$6;

// tag-#anon#ST[*{V}$V$'si_addr'|S16'si_addr_lsb'|U48'$pad0'|SYM#tag-#anon#ST[*{V}$V$'_lower'|*{V}$V$'_upper']#'si_addr_bnd']
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 107
struct anonymous$7;

// tag-#anon#ST[ARR16{U64}$U64$'__val']
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous$1;

// tag-#anon#ST[S32'si_pid'|U32'si_uid']
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 74
struct anonymous$2;

// tag-#anon#ST[S32'si_pid'|U32'si_uid'|S32'si_status'|U32'$pad0'|S64'si_utime'|S64'si_stime']
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 97
struct anonymous$5;

// tag-#anon#ST[S32'si_pid'|U32'si_uid'|SYM#tag-sigval#'si_sigval']
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 89
struct anonymous$4;

// tag-#anon#ST[S32'si_signo'|S32'si_errno'|S32'si_code'|U32'$pad0'|SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid']#'_kill'|SYM#tag-#anon#ST[S32'si_tid'|S32'si_overrun'|SYM#tag-sigval#'si_sigval']#'_timer'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|SYM#tag-sigval#'si_sigval']#'_rt'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|S32'si_status'|U32'$pad0'|S64'si_utime'|S64'si_stime']#'_sigchld'|SYM#tag-#anon#ST[*{V}$V$'si_addr'|S16'si_addr_lsb'|U48'$pad0'|SYM#tag-#anon#ST[*{V}$V$'_lower'|*{V}$V$'_upper']#'si_addr_bnd']#'_sigfault'|SYM#tag-#anon#ST[S64'si_band'|S32'si_fd'|U32'$pad0']#'_sigpoll'|SYM#tag-#anon#ST[*{V}$V$'_call_addr'|S32'_syscall'|U32'_arch']#'_sigsys']#'_sifields']
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 62
struct anonymous$11;

// tag-#anon#ST[S32'si_tid'|S32'si_overrun'|SYM#tag-sigval#'si_sigval']
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 81
struct anonymous$3;

// tag-#anon#ST[S64'si_band'|S32'si_fd'|U32'$pad0']
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 119
struct anonymous$8;

// tag-#anon#UN[*{V(S32)->V}$V(S32)->V$'sa_handler'|*{V(S32|*{SYM#tag-#anon#ST[S32'si_signo'|S32'si_errno'|S32'si_code'|U32'$pad0'|SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid']#'_kill'|SYM#tag-#anon#ST[S32'si_tid'|S32'si_overrun'|SYM#tag-sigval#'si_sigval']#'_timer'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|SYM#tag-sigval#'si_sigval']#'_rt'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|S32'si_status'|U32'$pad0'|S64'si_utime'|S64'si_stime']#'_sigchld'|SYM#tag-#anon#ST[*{V}$V$'si_addr'|S16'si_addr_lsb'|U48'$pad0'|SYM#tag-#anon#ST[*{V}$V$'_lower'|*{V}$V$'_upper']#'si_addr_bnd']#'_sigfault'|SYM#tag-#anon#ST[S64'si_band'|S32'si_fd'|U32'$pad0']#'_sigpoll'|SYM#tag-#anon#ST[*{V}$V$'_call_addr'|S32'_syscall'|U32'_arch']#'_sigsys']#'_sifields']#}$SYM#tag-#anon#ST[S32'si_signo'|S32'si_errno'|S32'si_code'|U32'$pad0'|SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid']#'_kill'|SYM#tag-#anon#ST[S32'si_tid'|S32'si_overrun'|SYM#tag-sigval#'si_sigval']#'_timer'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|SYM#tag-sigval#'si_sigval']#'_rt'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|S32'si_status'|U32'$pad0'|S64'si_utime'|S64'si_stime']#'_sigchld'|SYM#tag-#anon#ST[*{V}$V$'si_addr'|S16'si_addr_lsb'|U48'$pad0'|SYM#tag-#anon#ST[*{V}$V$'_lower'|*{V}$V$'_upper']#'si_addr_bnd']#'_sigfault'|SYM#tag-#anon#ST[S64'si_band'|S32'si_fd'|U32'$pad0']#'_sigpoll'|SYM#tag-#anon#ST[*{V}$V$'_call_addr'|S32'_syscall'|U32'_arch']#'_sigsys']#'_sifields']#$|*{V}$V$)->V}$V(S32|*{SYM#tag-#anon#ST[S32'si_signo'|S32'si_errno'|S32'si_code'|U32'$pad0'|SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid']#'_kill'|SYM#tag-#anon#ST[S32'si_tid'|S32'si_overrun'|SYM#tag-sigval#'si_sigval']#'_timer'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|SYM#tag-sigval#'si_sigval']#'_rt'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|S32'si_status'|U32'$pad0'|S64'si_utime'|S64'si_stime']#'_sigchld'|SYM#tag-#anon#ST[*{V}$V$'si_addr'|S16'si_addr_lsb'|U48'$pad0'|SYM#tag-#anon#ST[*{V}$V$'_lower'|*{V}$V$'_upper']#'si_addr_bnd']#'_sigfault'|SYM#tag-#anon#ST[S64'si_band'|S32'si_fd'|U32'$pad0']#'_sigpoll'|SYM#tag-#anon#ST[*{V}$V$'_call_addr'|S32'_syscall'|U32'_arch']#'_sigsys']#'_sifields']#}$SYM#tag-#anon#ST[S32'si_signo'|S32'si_errno'|S32'si_code'|U32'$pad0'|SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid']#'_kill'|SYM#tag-#anon#ST[S32'si_tid'|S32'si_overrun'|SYM#tag-sigval#'si_sigval']#'_timer'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|SYM#tag-sigval#'si_sigval']#'_rt'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|S32'si_status'|U32'$pad0'|S64'si_utime'|S64'si_stime']#'_sigchld'|SYM#tag-#anon#ST[*{V}$V$'si_addr'|S16'si_addr_lsb'|U48'$pad0'|SYM#tag-#anon#ST[*{V}$V$'_lower'|*{V}$V$'_upper']#'si_addr_bnd']#'_sigfault'|SYM#tag-#anon#ST[S64'si_band'|S32'si_fd'|U32'$pad0']#'_sigpoll'|SYM#tag-#anon#ST[*{V}$V$'_call_addr'|S32'_syscall'|U32'_arch']#'_sigsys']#'_sifields']#$|*{V}$V$)->V$'sa_sigaction']
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 28
union anonymous$12;

// tag-#anon#UN[ARR28{S32}$S32$'_pad'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid']#'_kill'|SYM#tag-#anon#ST[S32'si_tid'|S32'si_overrun'|SYM#tag-sigval#'si_sigval']#'_timer'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|SYM#tag-sigval#'si_sigval']#'_rt'|SYM#tag-#anon#ST[S32'si_pid'|U32'si_uid'|S32'si_status'|U32'$pad0'|S64'si_utime'|S64'si_stime']#'_sigchld'|SYM#tag-#anon#ST[*{V}$V$'si_addr'|S16'si_addr_lsb'|U48'$pad0'|SYM#tag-#anon#ST[*{V}$V$'_lower'|*{V}$V$'_upper']#'si_addr_bnd']#'_sigfault'|SYM#tag-#anon#ST[S64'si_band'|S32'si_fd'|U32'$pad0']#'_sigpoll'|SYM#tag-#anon#ST[*{V}$V$'_call_addr'|S32'_syscall'|U32'_arch']#'_sigsys']
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 69
union anonymous$10;

// tag-#anon#UN[ARR4{S8}$S8$'__size'|S32'__align']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'|ARR40{S8}$S8$'__size'|S64'__align']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$0;

// tag-PK11SlotInfoStr
// file /usr/include/nss/secmodt.h line 32
struct PK11SlotInfoStr;

// tag-PRCallOnceType
// file /usr/include/nspr/prinit.h line 191
struct PRCallOnceType;

// tag-PRLock
// file /usr/include/nspr/prlock.h line 34
struct PRLock;

// tag-PRThreadPriority
// file /usr/include/nspr/prthread.h line 70
enum PRThreadPriority { PR_PRIORITY_FIRST=0, PR_PRIORITY_LOW=0, PR_PRIORITY_NORMAL=1, PR_PRIORITY_HIGH=2, PR_PRIORITY_URGENT=3, PR_PRIORITY_LAST=3 };

// tag-PRThreadType
// file /usr/include/nspr/prthread.h line 54
enum PRThreadType { PR_USER_THREAD=0, PR_SYSTEM_THREAD=1 };

// tag-SSLVersionRangeStr
// file /usr/include/nss/sslt.h line 223
struct SSLVersionRangeStr;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 156
struct _IO_marker;

// tag-_SECStatus
// file /usr/include/nss/seccomon.h line 75
enum _SECStatus { SECWouldBlock=-2, SECFailure=-1, SECSuccess=0 };

// tag-__dirstream
// file /usr/include/dirent.h line 127
struct __dirstream;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-__rlimit_resource
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 31
enum __rlimit_resource { RLIMIT_CPU=0, RLIMIT_FSIZE=1, RLIMIT_DATA=2, RLIMIT_STACK=3, RLIMIT_CORE=4, __RLIMIT_RSS=5, RLIMIT_NOFILE=7, __RLIMIT_OFILE=7, RLIMIT_AS=9, __RLIMIT_NPROC=6, __RLIMIT_MEMLOCK=8, __RLIMIT_LOCKS=10, __RLIMIT_SIGPENDING=11, __RLIMIT_MSGQUEUE=12, __RLIMIT_NICE=13, __RLIMIT_RTPRIO=14, __RLIMIT_RTTIME=15, __RLIMIT_NLIMITS=16, __RLIM_NLIMITS=16 };

// tag-_simpl_op
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 410
struct _simpl_op;

// tag-berelement
// file /usr/include/lber.h line 171
struct berelement;

// tag-berval
// file /usr/include/lber.h line 212
struct berval;

// tag-check_context
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 664
struct check_context;

// tag-data_list_file
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 371
struct data_list_file;

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-image
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 362
struct image;

// tag-isp_user
// file ../ldap/servers/slapd/tools/ldclt/scalab01.h line 62
struct isp_user;

// tag-ldap
// file /usr/include/ldap.h line 752
struct ldap;

// tag-ldapcontrol
// file /usr/include/ldap.h line 244
struct ldapcontrol;

// tag-ldapmod
// file /usr/include/ldap.h line 724
struct ldapmod;

// tag-ldapmsg
// file /usr/include/ldap.h line 721
struct ldapmsg;

// tag-main_context
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 482
struct main_context;

// tag-mod_vals_u
// file /usr/include/ldap.h line 739
union mod_vals_u;

// tag-msgid_cell
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 598
struct msgid_cell;

// tag-oper
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 394
struct oper;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rlimit
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 139
struct rlimit;

// tag-sasl_interact
// file /usr/include/sasl/sasl.h line 884
struct sasl_interact;

// tag-scalab01_context
// file ../ldap/servers/slapd/tools/ldclt/scalab01.h line 72
struct scalab01_context;

// tag-sigaction
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 24
struct sigaction;

// tag-sigval
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 32
union sigval;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-thread_context
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 611
struct thread_context;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

// tag-vers_attribute
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 452
struct vers_attribute;

// tag-vers_field
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 435
struct vers_field;

// tag-vers_object
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 468
struct vers_object;

#ifndef NULL
#define NULL ((void*)0)
#endif

// NSS_Initialize
// file /usr/include/nss/nss.h line 242
extern enum _SECStatus NSS_Initialize(const char *, const char *, const char *, const char *, unsigned int);
// NSS_SetDomesticPolicy
// file /usr/include/nss/ssl.h line 1014
extern enum _SECStatus NSS_SetDomesticPolicy(void);
// PK11_Authenticate
// file /usr/include/nss/pk11pub.h line 61
enum _SECStatus PK11_Authenticate(struct PK11SlotInfoStr *, signed int, void *);
// PK11_FindSlotByName
// file /usr/include/nss/pk11pub.h line 68
struct PK11SlotInfoStr * PK11_FindSlotByName(const char *);
// PK11_FreeSlot
// file /usr/include/nss/pk11pub.h line 37
void PK11_FreeSlot(struct PK11SlotInfoStr *);
// PK11_GetInternalKeySlot
// file /usr/include/nss/pk11pub.h line 40
struct PK11SlotInfoStr * PK11_GetInternalKeySlot(void);
// PK11_SetPasswordFunc
// file /usr/include/nss/pk11pub.h line 58
void PK11_SetPasswordFunc(char * (*)(struct PK11SlotInfoStr *, signed int, void *));
// PL_strchr
// file /usr/include/nspr/plstr.h line 237
extern char * PL_strchr(const char *, char);
// PL_strdup
// file /usr/include/nspr/plstr.h line 111
extern char * PL_strdup(const char *);
// PL_strfree
// file /usr/include/nspr/plstr.h line 120
extern void PL_strfree(char *);
// PL_strndup
// file /usr/include/nspr/plstr.h line 135
extern char * PL_strndup(const char *, unsigned int);
// PR_CallOnce
// file /usr/include/nspr/prinit.h line 201
extern enum anonymous$13 PR_CallOnce(struct PRCallOnceType *, enum anonymous$13 (*)(void));
// PR_GetDirectorySeparator
// file /usr/include/nspr/prsystem.h line 22
extern char PR_GetDirectorySeparator(void);
// PR_GetError
// file /usr/include/nspr/prerror.h line 42
extern signed int PR_GetError(void);
// PR_Init
// file /usr/include/nspr/prinit.h line 84
extern void PR_Init(enum PRThreadType, enum PRThreadPriority, unsigned int);
// PR_Lock
// file /usr/include/nspr/prlock.h line 73
extern void PR_Lock(struct PRLock *);
// PR_NewLock
// file /usr/include/nspr/prlock.h line 51
extern struct PRLock * PR_NewLock(void);
// PR_Unlock
// file /usr/include/nspr/prlock.h line 85
extern enum anonymous$13 PR_Unlock(struct PRLock *);
// PR_smprintf
// file /usr/include/nspr/prprf.h line 44
extern char * PR_smprintf(const char *, ...);
// PR_smprintf_free
// file /usr/include/nspr/prprf.h line 49
extern void PR_smprintf_free(char *);
// SSL_VersionRangeGetSupported
// file /usr/include/nss/ssl.h line 437
extern enum _SECStatus SSL_VersionRangeGetSupported(enum anonymous$14, struct SSLVersionRangeStr *);
// SSL_VersionRangeSetDefault
// file /usr/include/nss/ssl.h line 449
extern enum _SECStatus SSL_VersionRangeSetDefault(enum anonymous$14, const struct SSLVersionRangeStr *);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// abs
// file /usr/include/stdlib.h line 774
extern signed int abs(signed int);
// addAttrToList
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 1726
signed int addAttrToList(char *list);
// addAttrib
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 1281
signed int addAttrib(struct ldapmod **attrs, signed int nb, struct ldapmod *newattr);
// addErrorStat
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 703
extern signed int addErrorStat(signed int err);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// basicInit
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 975
signed int basicInit(void);
// ber_alloc_t
// file /usr/include/lber.h line 484
extern struct berelement * ber_alloc_t(signed int);
// ber_bvfree
// file /usr/include/lber.h line 611
extern void ber_bvfree(struct berval *);
// ber_flatten
// file /usr/include/lber.h line 518
extern signed int ber_flatten(struct berelement *, struct berval **);
// ber_free
// file /usr/include/lber.h line 454
extern void ber_free(struct berelement *, signed int);
// ber_printf
// file /usr/include/lber.h line 425
extern signed int ber_printf(struct berelement *, const char *, ...);
// buildArgListString
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 2281
char * buildArgListString(signed int argc, char **argv);
// buildNewBindDN
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 193
signed int buildNewBindDN(struct thread_context *tttctx);
// buildNewEntry
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 1625
signed int buildNewEntry(struct thread_context *tttctx, char *newDn, struct ldapmod **attrs);
// buildNewModAttrib
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 1513
signed int buildNewModAttrib(struct thread_context *tttctx, char *newDn, struct ldapmod **attrs);
// buildNewModAttribFile
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 1439
signed int buildNewModAttribFile(struct thread_context *tttctx, char *newDn, struct ldapmod **attrs);
// buildRandomRdnOrFilter
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 1156
signed int buildRandomRdnOrFilter(struct thread_context *tttctx);
// buildVersatileAttribute
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 991
char * buildVersatileAttribute(struct thread_context *tttctx, struct vers_object *object, struct vers_attribute *attrib);
// buildVersatileObject
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 1562
signed int buildVersatileObject(struct thread_context *tttctx, struct vers_object *object, struct ldapmod **attrs);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// close
// file /usr/include/unistd.h line 356
extern signed int close(signed int);
// closedir
// file /usr/include/dirent.h line 149
extern signed int closedir(struct __dirstream *);
// connectToLDAP
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 473
extern struct ldap * connectToLDAP(struct thread_context *tttctx, const char *bufBindDN, const char *bufPasswd, unsigned int mode, unsigned int mod2);
// connectToServer
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 888
extern signed int connectToServer(struct thread_context *tttctx);
// copyVersAttribute
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 131
signed int copyVersAttribute(struct vers_attribute *srcattr, struct vers_attribute *dstattr);
// copyVersObject
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 182
struct vers_object * copyVersObject(struct vers_object *srcobj);
// createMissingNodes
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 1784
signed int createMissingNodes(struct thread_context *tttctx, char *newDN, struct ldap *cnx);
// ctime
// file /usr/include/time.h line 264
extern char * ctime(const signed long int *);
// dataListFile
// file ../ldap/servers/slapd/tools/ldclt/data.c line 377
extern struct data_list_file * dataListFile(char *fname);
// decodeExecParams
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 1944
signed int decodeExecParams(char *optarg);
// decodeHow
// file ../ldap/servers/slapd/tools/ldclt/parser.c line 71
signed int decodeHow(char *how);
// decodeRdnParam
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 1777
signed int decodeRdnParam(char *value);
// decodeReferralParams
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 1697
signed int decodeReferralParams(char *val);
// decodeScopeParams
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 1563
signed int decodeScopeParams(char *optarg);
// dnFromMessage
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 97
extern char * dnFromMessage(struct thread_context *tttctx, struct ldapmsg *res);
// doAbandon
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 3759
extern signed int doAbandon(struct thread_context *tttctx);
// doAddEntry
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 2651
extern signed int doAddEntry(struct thread_context *tttctx);
// doAttrFileReplace
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 3029
extern signed int doAttrFileReplace(struct thread_context *tttctx);
// doAttrReplace
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 2874
extern signed int doAttrReplace(struct thread_context *tttctx);
// doBindOnly
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 3361
extern signed int doBindOnly(struct thread_context *tttctx);
// doDeleteEntry
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 3185
extern signed int doDeleteEntry(struct thread_context *tttctx);
// doExactSearch
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 3394
extern signed int doExactSearch(struct thread_context *tttctx);
// doGenldif
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 2595
extern signed int doGenldif(struct thread_context *tttctx);
// doRename
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 2261
extern signed int doRename(struct thread_context *tttctx);
// doScalab01
// file ../ldap/servers/slapd/tools/ldclt/scalab01.c line 871
extern signed int doScalab01(struct thread_context *tttctx);
// dumpModeValues
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 1454
void dumpModeValues(void);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fdopen
// file /usr/include/stdio.h line 306
extern struct _IO_FILE * fdopen(signed int, const char *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fputs
// file /usr/include/stdio.h line 689
extern signed int fputs(const char *, struct _IO_FILE *);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// freeAttrib
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 1308
extern signed int freeAttrib(struct ldapmod **attrs);
// fseek
// file /usr/include/stdio.h line 749
extern signed int fseek(struct _IO_FILE *, signed long int, signed int);
// fstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 213
extern signed int fstat(signed int, struct stat *);
// getBindAndPasswdFromFile
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 144
signed int getBindAndPasswdFromFile(struct thread_context *tttctx);
// getExtend
// file ../ldap/servers/slapd/tools/ldclt/data.c line 55
char * getExtend(char *str);
// getFdFromLdapSession
// file ../ldap/servers/slapd/tools/ldclt/workarounds.c line 68
extern signed int getFdFromLdapSession(struct ldap *ld, signed int *fd);
// getImage
// file ../ldap/servers/slapd/tools/ldclt/data.c line 238
extern signed int getImage(struct ldapmod *attribute);
// getPending
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 2003
signed int getPending(struct thread_context *tttctx, struct timeval *timeout);
// getThreadStatus
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 704
extern signed int getThreadStatus(struct thread_context *tttctx, signed int *status);
// get_default
// file ../ldap/servers/slapd/tools/ldaptool-sasl.c line 179
static signed int get_default(struct anonymous$15 *defaults, struct sasl_interact *interact, unsigned int flags);
// get_new_value
// file ../ldap/servers/slapd/tools/ldaptool-sasl.c line 218
static signed int get_new_value(struct sasl_interact *interact, unsigned int flags);
// getlogin
// file /usr/include/unistd.h line 852
extern char * getlogin(void);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// getpass
// file /usr/include/unistd.h line 951
extern char * getpass(const char *);
// getpid
// file /usr/include/unistd.h line 631
extern signed int getpid(void);
// getrlimit
// file /usr/include/x86_64-linux-gnu/sys/resource.h line 50
extern signed int getrlimit(enum __rlimit_resource, struct rlimit *);
// getsubopt
// file /usr/include/stdlib.h line 898
extern signed int getsubopt(char ** restrict , char * const * restrict , char ** restrict );
// ignoreError
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 706
extern signed int ignoreError(signed int err);
// incr_and_wrap
// file ../ldap/servers/slapd/tools/ldclt/utils.h line 50
extern signed int incr_and_wrap(signed int val, signed int min, signed int max, signed int incr);
// incrementCommonCounter
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 707
extern signed int incrementCommonCounter(struct thread_context *tttctx);
// incrementCommonCounterObject
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 708
extern signed int incrementCommonCounterObject(struct thread_context *tttctx, struct vers_field *field);
// incrementNbOpers
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 711
extern signed int incrementNbOpers(struct thread_context *tttctx);
// initMainThread
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 861
signed int initMainThread(void);
// internal_ol_init_init
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 458
static enum anonymous$13 internal_ol_init_init(void);
// ldap_abandon_ext
// file /usr/include/ldap.h line 1114
extern signed int ldap_abandon_ext(struct ldap *, signed int, struct ldapcontrol **, struct ldapcontrol **);
// ldap_add_ext
// file /usr/include/ldap.h line 1131
extern signed int ldap_add_ext(struct ldap *, const char *, struct ldapmod **, struct ldapcontrol **, struct ldapcontrol **, signed int *);
// ldap_add_ext_s
// file /usr/include/ldap.h line 1140
extern signed int ldap_add_ext_s(struct ldap *, const char *, struct ldapmod **, struct ldapcontrol **, struct ldapcontrol **);
// ldap_control_create
// file /usr/include/ldap.h line 1023
extern signed int ldap_control_create(const char *, signed int, struct berval *, signed int, struct ldapcontrol **);
// ldap_control_free
// file /usr/include/ldap.h line 1037
extern void ldap_control_free(struct ldapcontrol *);
// ldap_controls_free
// file /usr/include/ldap.h line 1041
extern void ldap_controls_free(struct ldapcontrol **);
// ldap_delete_ext
// file /usr/include/ldap.h line 1322
extern signed int ldap_delete_ext(struct ldap *, const char *, struct ldapcontrol **, struct ldapcontrol **, signed int *);
// ldap_delete_ext_s
// file /usr/include/ldap.h line 1330
extern signed int ldap_delete_ext_s(struct ldap *, const char *, struct ldapcontrol **, struct ldapcontrol **);
// ldap_err2string
// file /usr/include/ldap.h line 1364
extern char * ldap_err2string(signed int);
// ldap_first_attribute
// file /usr/include/ldap.h line 1784
extern char * ldap_first_attribute(struct ldap *, struct ldapmsg *, struct berelement **);
// ldap_first_entry
// file /usr/include/ldap.h line 1603
extern struct ldapmsg * ldap_first_entry(struct ldap *, struct ldapmsg *);
// ldap_first_message
// file /usr/include/ldap.h line 1558
extern struct ldapmsg * ldap_first_message(struct ldap *, struct ldapmsg *);
// ldap_get_dn
// file /usr/include/ldap.h line 1642
extern char * ldap_get_dn(struct ldap *, struct ldapmsg *);
// ldap_get_entry_controls
// file /usr/include/ldap.h line 1618
extern signed int ldap_get_entry_controls(struct ldap *, struct ldapmsg *, struct ldapcontrol ***);
// ldap_get_option
// file /usr/include/ldap.h line 958
extern signed int ldap_get_option(struct ldap *, signed int, void *);
// ldap_get_values_len
// file /usr/include/ldap.h line 1800
extern struct berval ** ldap_get_values_len(struct ldap *, struct ldapmsg *, const char *);
// ldap_initialize
// file /usr/include/ldap.h line 1521
extern signed int ldap_initialize(struct ldap **, const char *);
// ldap_memfree
// file /usr/include/ldap.h line 1982
extern void ldap_memfree(void *);
// ldap_modify_ext
// file /usr/include/ldap.h line 1401
extern signed int ldap_modify_ext(struct ldap *, const char *, struct ldapmod **, struct ldapcontrol **, struct ldapcontrol **, signed int *);
// ldap_modify_ext_s
// file /usr/include/ldap.h line 1410
extern signed int ldap_modify_ext_s(struct ldap *, const char *, struct ldapmod **, struct ldapcontrol **, struct ldapcontrol **);
// ldap_msgfree
// file /usr/include/ldap.h line 1849
extern signed int ldap_msgfree(struct ldapmsg *);
// ldap_msgid
// file /usr/include/ldap.h line 1845
extern signed int ldap_msgid(struct ldapmsg *);
// ldap_msgtype
// file /usr/include/ldap.h line 1841
extern signed int ldap_msgtype(struct ldapmsg *);
// ldap_next_attribute
// file /usr/include/ldap.h line 1790
extern char * ldap_next_attribute(struct ldap *, struct ldapmsg *, struct berelement *);
// ldap_next_entry
// file /usr/include/ldap.h line 1608
extern struct ldapmsg * ldap_next_entry(struct ldap *, struct ldapmsg *);
// ldap_next_message
// file /usr/include/ldap.h line 1563
extern struct ldapmsg * ldap_next_message(struct ldap *, struct ldapmsg *);
// ldap_parse_result
// file /usr/include/ldap.h line 1353
extern signed int ldap_parse_result(struct ldap *, struct ldapmsg *, signed int *, char **, char **, char ***, struct ldapcontrol ***, signed int);
// ldap_rename
// file /usr/include/ldap.h line 1436
extern signed int ldap_rename(struct ldap *, const char *, const char *, const char *, signed int, struct ldapcontrol **, struct ldapcontrol **, signed int *);
// ldap_rename_s
// file /usr/include/ldap.h line 1447
extern signed int ldap_rename_s(struct ldap *, const char *, const char *, const char *, signed int, struct ldapcontrol **, struct ldapcontrol **);
// ldap_result
// file /usr/include/ldap.h line 1833
extern signed int ldap_result(struct ldap *, signed int, signed int, struct timeval *, struct ldapmsg **);
// ldap_sasl_bind_s
// file /usr/include/ldap.h line 1226
extern signed int ldap_sasl_bind_s(struct ldap *, const char *, const char *, struct berval *, struct ldapcontrol **, struct ldapcontrol **, struct berval **);
// ldap_sasl_interactive_bind_s
// file /usr/include/ldap.h line 1213
extern signed int ldap_sasl_interactive_bind_s(struct ldap *, const char *, const char *, struct ldapcontrol **, struct ldapcontrol **, unsigned int, signed int (*)(struct ldap *, unsigned int, void *, void *), void *);
// ldap_search_ext
// file /usr/include/ldap.h line 1867
extern signed int ldap_search_ext(struct ldap *, const char *, signed int, const char *, char **, signed int, struct ldapcontrol **, struct ldapcontrol **, struct timeval *, signed int, signed int *);
// ldap_search_ext_s
// file /usr/include/ldap.h line 1881
extern signed int ldap_search_ext_s(struct ldap *, const char *, signed int, const char *, char **, signed int, struct ldapcontrol **, struct ldapcontrol **, struct timeval *, signed int, struct ldapmsg **);
// ldap_set_option
// file /usr/include/ldap.h line 964
extern signed int ldap_set_option(struct ldap *, signed int, const void *);
// ldap_set_rebind_proc
// file /usr/include/ldap.h line 976
extern signed int ldap_set_rebind_proc(struct ldap *, signed int (*)(struct ldap *, const char *, unsigned long int, signed int, void *), void *);
// ldap_unbind_ext
// file /usr/include/ldap.h line 1930
extern signed int ldap_unbind_ext(struct ldap *, struct ldapcontrol **, struct ldapcontrol **);
// ldap_value_free_len
// file /usr/include/ldap.h line 1810
extern void ldap_value_free_len(struct berval **);
// ldaptool_free_defaults
// file ../ldap/servers/slapd/tools/ldaptool-sasl.c line 130
void ldaptool_free_defaults(void *defaults);
// ldaptool_getpass
// file ../ldap/servers/slapd/tools/ldaptool-sasl.c line 281
char * ldaptool_getpass(const char *prompt);
// ldaptool_sasl_interact
// file ../ldap/servers/slapd/tools/ldaptool-sasl.c line 152
signed int ldaptool_sasl_interact(struct ldap *ld, unsigned int flags, void *defaults, void *prompts);
// ldaptool_set_sasl_defaults
// file ../ldap/servers/slapd/tools/ldaptool-sasl.c line 72
void * ldaptool_set_sasl_defaults(struct ldap *ld, unsigned int flags, char *mech, char *authid, char *username, char *passwd, char *realm);
// ldcltExit
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 698
extern void ldcltExit(signed int status);
// ldclt_alloc_ber
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 4040
signed int ldclt_alloc_ber(struct ldap *ld, struct berelement **berp);
// ldclt_clientauth
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 387
static signed int ldclt_clientauth(struct thread_context *tttctx, struct ldap *ld, const char *path, const char *certname, const char *pwd);
// ldclt_create_deref_control
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 3922
signed int ldclt_create_deref_control(struct ldap *ld, char *derefAttr, char **attrs, struct ldapcontrol **ctrlp);
// ldclt_dirname
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 366
static char * ldclt_dirname(const char *path);
// ldclt_flush_genldif
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 2549
extern void ldclt_flush_genldif(void);
// ldclt_get_sec_pwd
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 380
static char * ldclt_get_sec_pwd(struct PK11SlotInfoStr *slot, signed int retry, void *arg);
// ldclt_mutex_init
// file ../ldap/servers/slapd/tools/ldclt/port.h line 56
extern signed int ldclt_mutex_init(union anonymous$0 *mutex);
// ldclt_mutex_lock
// file ../ldap/servers/slapd/tools/ldclt/port.h line 57
extern signed int ldclt_mutex_lock(union anonymous$0 *mutex);
// ldclt_mutex_unlock
// file ../ldap/servers/slapd/tools/ldclt/port.h line 58
extern signed int ldclt_mutex_unlock(union anonymous$0 *mutex);
// ldclt_sleep
// file ../ldap/servers/slapd/tools/ldclt/port.h line 59
extern void ldclt_sleep(signed int nseconds);
// ldclt_thread_create
// file ../ldap/servers/slapd/tools/ldclt/port.h line 60
extern signed int ldclt_thread_create(unsigned long int *tid, void * (*fct)(void *), void *param);
// ldclt_thread_create::fct$object
//
void * fct$object(void *);
// ldclt_write_genldif
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 2557
void ldclt_write_genldif(char *str, signed int lgth);
// loadDataListFile
// file ../ldap/servers/slapd/tools/ldclt/data.c line 310
signed int loadDataListFile(struct data_list_file *dlf);
// loadImages
// file ../ldap/servers/slapd/tools/ldclt/data.c line 72
extern signed int loadImages(char *dirpath);
// localtime
// file /usr/include/time.h line 243
extern struct tm * localtime(const signed long int *);
// lrand48
// file /usr/include/stdlib.h line 393
extern signed long int lrand48(void);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 42
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 62
extern void * memset(void *, signed int, unsigned long int);
// mmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 57
extern void * mmap(void *, unsigned long int, signed int, signed int, signed int, signed long int);
// monitorThem
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 487
signed int monitorThem(void);
// msgIdAdd
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 712
extern signed int msgIdAdd(struct thread_context *tttctx, signed int msgid, char *str, char *dn, struct ldapmod **attribs);
// msgIdAttribs
// file ../ldap/servers/slapd/tools/ldclt/threadMain.c line 594
extern struct ldapmod ** msgIdAttribs(struct thread_context *tttctx, signed int msgid);
// msgIdDN
// file ../ldap/servers/slapd/tools/ldclt/threadMain.c line 621
extern char * msgIdDN(struct thread_context *tttctx, signed int msgid);
// msgIdDel
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 715
extern signed int msgIdDel(struct thread_context *tttctx, signed int msgid, signed int freeAttr);
// msgIdStr
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 717
extern char * msgIdStr(struct thread_context *tttctx, signed int msgid);
// my_ldap_err2string
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 76
extern char * my_ldap_err2string(signed int err);
// open
// file /usr/include/fcntl.h line 156
extern signed int open(const char *, signed int, ...);
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// parseAttribValue
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 755
extern signed int parseAttribValue(char *fname, struct vers_object *obj, char *line, struct vers_attribute *attrib);
// parseFilter
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 924
signed int parseFilter(char *src, char **head, char **tail, signed int *ndigits);
// parseLine
// file ../ldap/servers/slapd/tools/ldclt/parser.c line 416
signed int parseLine(char *line, char *fname, struct vers_object *obj);
// parseVariant
// file ../ldap/servers/slapd/tools/ldclt/parser.c line 100
signed int parseVariant(char *variant, char *fname, char *line, struct vers_object *obj, struct vers_field *field);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// printErrorFromLdap
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 1369
signed int printErrorFromLdap(struct thread_context *tttctx, struct ldapmsg *res, signed int errcode, char *errmsg);
// printGlobalStatistics
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 665
extern signed int printGlobalStatistics(void);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_create
// file /usr/include/pthread.h line 233
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_init
// file /usr/include/pthread.h line 749
extern signed int pthread_mutex_init(union anonymous$0 *, const union anonymous *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 762
extern signed int pthread_mutex_lock(union anonymous$0 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 773
extern signed int pthread_mutex_unlock(union anonymous$0 *);
// randomString
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 718
extern signed int randomString(struct thread_context *tttctx, signed int nbDigits);
// readAttrValue
// file ../ldap/servers/slapd/tools/ldclt/scalab01.c line 510
signed int readAttrValue(struct ldap *ldapCtx, char *ident, char *dn, char *attname, char *value);
// readObject
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 758
extern signed int readObject(struct vers_object *obj);
// readdir
// file /usr/include/dirent.h line 162
extern struct dirent * readdir(struct __dirstream *);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// refRebindProc
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 245
signed int refRebindProc(struct ldap *ldapCtx, const char *url, unsigned long int request, signed int msgid, void *arg);
// referralSetup
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 316
signed int referralSetup(struct thread_context *tttctx);
// rnd
// file ../ldap/servers/slapd/tools/ldclt/utils.h line 46
extern void rnd(char *buf, signed int low, signed int high, signed int ndigits);
// rndlim
// file ../ldap/servers/slapd/tools/ldclt/utils.h line 47
extern signed int rndlim(signed int low, signed int high);
// rndstr
// file ../ldap/servers/slapd/tools/ldclt/utils.h line 48
extern void rndstr(char *buf, signed int ndigits);
// runThem
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 298
signed int runThem(void);
// saslSetParam
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 1602
signed int saslSetParam(char *saslarg);
// scalab01Lock
// file ../ldap/servers/slapd/tools/ldclt/scalab01.c line 137
signed int scalab01Lock(struct thread_context *tttctx);
// scalab01Unlock
// file ../ldap/servers/slapd/tools/ldclt/scalab01.c line 204
signed int scalab01Unlock(struct thread_context *tttctx);
// scalab01_addLogin
// file ../ldap/servers/slapd/tools/ldclt/scalab01.c line 351
signed int scalab01_addLogin(struct thread_context *tttctx, char *dn, signed int duration);
// scalab01_connectSuperuser
// file ../ldap/servers/slapd/tools/ldclt/scalab01.c line 467
signed int scalab01_connectSuperuser(void);
// scalab01_control
// file ../ldap/servers/slapd/tools/ldclt/scalab01.h line 91
extern void * scalab01_control(void *arg);
// scalab01_init
// file ../ldap/servers/slapd/tools/ldclt/scalab01.h line 92
extern signed int scalab01_init(void);
// scalab01_modemDecr
// file ../ldap/servers/slapd/tools/ldclt/scalab01.c line 307
signed int scalab01_modemDecr(char *ident);
// scalab01_modemIncr
// file ../ldap/servers/slapd/tools/ldclt/scalab01.c line 258
signed int scalab01_modemIncr(char *ident);
// scalab01_unlock
// file ../ldap/servers/slapd/tools/ldclt/scalab01.c line 663
signed int scalab01_unlock(struct isp_user *user);
// selectRandomAttrList
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 719
extern char ** selectRandomAttrList(struct thread_context *tttctx);
// setThreadStatus
// file ../ldap/servers/slapd/tools/ldclt/threadMain.c line 788
extern signed int setThreadStatus(struct thread_context *tttctx, signed int status);
// setrlimit
// file /usr/include/x86_64-linux-gnu/sys/resource.h line 69
extern signed int setrlimit(enum __rlimit_resource, struct rlimit *);
// shutdownThreads
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 402
signed int shutdownThreads(void);
// sigaction
// file /usr/include/signal.h line 257
extern signed int sigaction(signed int, struct sigaction *, struct sigaction *);
// sigaddset
// file /usr/include/signal.h line 219
extern signed int sigaddset(struct anonymous$1 *, signed int);
// sigemptyset
// file /usr/include/signal.h line 213
extern signed int sigemptyset(struct anonymous$1 *);
// sigfillset
// file /usr/include/signal.h line 216
extern signed int sigfillset(struct anonymous$1 *);
// sleep
// file /usr/include/unistd.h line 447
extern unsigned int sleep(unsigned int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// strList1
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 1340
extern char ** strList1(char *str1);
// strcat
// file /usr/include/string.h line 133
extern char * strcat(char *, const char *);
// strchr
// file /usr/include/string.h line 231
extern char * strchr(const char *, signed int);
// strcmp
// file /usr/include/string.h line 140
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 125
extern char * strcpy(char *, const char *);
// strdup
// file /usr/include/string.h line 171
extern char * strdup(const char *);
// strerror
// file /usr/include/string.h line 408
extern char * strerror(signed int);
// strftime
// file /usr/include/time.h line 205
extern unsigned long int strftime(char *, unsigned long int, const char *, struct tm *);
// strlen
// file /usr/include/string.h line 394
extern unsigned long int strlen(const char *);
// strncasecmp
// file /usr/include/string.h line 533
extern signed int strncasecmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 128
extern char * strncpy(char *, const char *, unsigned long int);
// strrchr
// file /usr/include/string.h line 258
extern char * strrchr(const char *, signed int);
// threadMain
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 722
extern void * threadMain(void *arg);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// trapVector
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 835
void trapVector(signed int sig, struct anonymous$11 *siginfo, void *truc);
// tttctxInit
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 238
signed int tttctxInit(signed int num, struct thread_context *tttctx);
// usage
// file ../ldap/servers/slapd/tools/ldclt/ldcltU.c line 118
void usage();
// utilsInit
// file ../ldap/servers/slapd/tools/ldclt/utils.h line 49
extern signed int utilsInit(void);
// write
// file /usr/include/unistd.h line 369
extern signed long int write(signed int, const void *, unsigned long int);
// writeAttrValue
// file ../ldap/servers/slapd/tools/ldclt/scalab01.c line 615
signed int writeAttrValue(struct ldap *ldapCtx, char *ident, char *dn, char *attname, char *value);

struct anonymous$15
{
  // mech
  char *mech;
  // authid
  char *authid;
  // username
  char *username;
  // passwd
  char *passwd;
  // realm
  char *realm;
};

struct anonymous$16
{
  // type
  char *type;
  // length
  signed int length;
  // value
  char *value;
  // dontFree
  signed int dontFree;
};

struct anonymous$9
{
  // _call_addr
  void *_call_addr;
  // _syscall
  signed int _syscall;
  // _arch
  unsigned int _arch;
};

struct anonymous$6
{
  // _lower
  void *_lower;
  // _upper
  void *_upper;
};

struct anonymous$7
{
  // si_addr
  void *si_addr;
  // si_addr_lsb
  signed short int si_addr_lsb;
  // si_addr_bnd
  struct anonymous$6 si_addr_bnd;
};

struct anonymous$1
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous$2
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
};

struct anonymous$5
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_status
  signed int si_status;
  // si_utime
  signed long int si_utime;
  // si_stime
  signed long int si_stime;
};

union sigval
{
  // sival_int
  signed int sival_int;
  // sival_ptr
  void *sival_ptr;
};

struct anonymous$4
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous$3
{
  // si_tid
  signed int si_tid;
  // si_overrun
  signed int si_overrun;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous$8
{
  // si_band
  signed long int si_band;
  // si_fd
  signed int si_fd;
};

union anonymous$10
{
  // _pad
  signed int _pad[28l];
  // _kill
  struct anonymous$2 _kill;
  // _timer
  struct anonymous$3 _timer;
  // _rt
  struct anonymous$4 _rt;
  // _sigchld
  struct anonymous$5 _sigchld;
  // _sigfault
  struct anonymous$7 _sigfault;
  // _sigpoll
  struct anonymous$8 _sigpoll;
  // _sigsys
  struct anonymous$9 _sigsys;
};

struct anonymous$11
{
  // si_signo
  signed int si_signo;
  // si_errno
  signed int si_errno;
  // si_code
  signed int si_code;
  // _sifields
  union anonymous$10 _sifields;
};

union anonymous$12
{
  // sa_handler
  void (*sa_handler)(signed int);
  // sa_sigaction
  void (*sa_sigaction)(signed int, struct anonymous$11 *, void *);
};

union anonymous
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

struct __pthread_internal_list
{
  // __prev
  struct __pthread_internal_list *__prev;
  // __next
  struct __pthread_internal_list *__next;
};

struct __pthread_mutex_s
{
  // __lock
  signed int __lock;
  // __count
  unsigned int __count;
  // __owner
  signed int __owner;
  // __nusers
  unsigned int __nusers;
  // __kind
  signed int __kind;
  // __spins
  signed short int __spins;
  // __elision
  signed short int __elision;
  // __list
  struct __pthread_internal_list __list;
};

union anonymous$0
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct PRCallOnceType
{
  // initialized
  signed int initialized;
  // inProgress
  signed int inProgress;
  // status
  enum anonymous$13 status;
};

struct SSLVersionRangeStr
{
  // min
  unsigned short int min;
  // max
  unsigned short int max;
};

struct _IO_FILE
{
  // _flags
  signed int _flags;
  // _IO_read_ptr
  char *_IO_read_ptr;
  // _IO_read_end
  char *_IO_read_end;
  // _IO_read_base
  char *_IO_read_base;
  // _IO_write_base
  char *_IO_write_base;
  // _IO_write_ptr
  char *_IO_write_ptr;
  // _IO_write_end
  char *_IO_write_end;
  // _IO_buf_base
  char *_IO_buf_base;
  // _IO_buf_end
  char *_IO_buf_end;
  // _IO_save_base
  char *_IO_save_base;
  // _IO_backup_base
  char *_IO_backup_base;
  // _IO_save_end
  char *_IO_save_end;
  // _markers
  struct _IO_marker *_markers;
  // _chain
  struct _IO_FILE *_chain;
  // _fileno
  signed int _fileno;
  // _flags2
  signed int _flags2;
  // _old_offset
  signed long int _old_offset;
  // _cur_column
  unsigned short int _cur_column;
  // _vtable_offset
  signed char _vtable_offset;
  // _shortbuf
  char _shortbuf[1l];
  // _lock
  void *_lock;
  // _offset
  signed long int _offset;
  // __pad1
  void *__pad1;
  // __pad2
  void *__pad2;
  // __pad3
  void *__pad3;
  // __pad4
  void *__pad4;
  // __pad5
  unsigned long int __pad5;
  // _mode
  signed int _mode;
  // _unused2
  char _unused2[(signed long int)(sizeof(signed int) * 5) /*20l*/ ];
};

struct _IO_marker
{
  // _next
  struct _IO_marker *_next;
  // _sbuf
  struct _IO_FILE *_sbuf;
  // _pos
  signed int _pos;
};

struct _simpl_op
{
  // type
  signed int type;
  // first
  signed int first;
  // dn
  char *dn;
  // attribs
  struct anonymous$16 attribs[40l];
  // newRdn
  char *newRdn;
  // newParent
  char *newParent;
  // next
  struct _simpl_op *next;
};

struct berval
{
  // bv_len
  unsigned long int bv_len;
  // bv_val
  char *bv_val;
};

struct check_context
{
  // headListOp
  struct oper *headListOp;
  // dcOper
  struct _simpl_op *dcOper;
  // slaveName
  char *slaveName;
  // sockfd
  signed int sockfd;
  // status
  signed int status;
  // thrdNum
  signed int thrdNum;
  // calls
  signed int calls;
  // tid
  unsigned long int tid;
  // nbEarly
  signed int nbEarly;
  // nbLate
  signed int nbLate;
  // nbLostOp
  signed int nbLostOp;
  // nbNotOnList
  signed int nbNotOnList;
  // nbOpRecv
  signed int nbOpRecv;
  // nbRepFail32
  signed int nbRepFail32;
  // nbRepFail68
  signed int nbRepFail68;
  // nbRepFailX
  signed int nbRepFailX;
  // nbStillOnQ
  signed int nbStillOnQ;
};

struct data_list_file
{
  // fname
  char *fname;
  // str
  char **str;
  // strNb
  signed int strNb;
  // next
  struct data_list_file *next;
};

struct dirent
{
  // d_ino
  unsigned long int d_ino;
  // d_off
  signed long int d_off;
  // d_reclen
  unsigned short int d_reclen;
  // d_type
  unsigned char d_type;
  // d_name
  char d_name[256l];
};

struct image
{
  // name
  char *name;
  // length
  signed int length;
  // data
  char *data;
};

struct isp_user
{
  // dn
  char dn[1024l];
  // cost
  signed int cost;
  // counter
  signed int counter;
  // next
  struct isp_user *next;
};

struct ldapcontrol
{
  // ldctl_oid
  char *ldctl_oid;
  // ldctl_value
  struct berval ldctl_value;
  // ldctl_iscritical
  char ldctl_iscritical;
};

union mod_vals_u
{
  // modv_strvals
  char **modv_strvals;
  // modv_bvals
  struct berval **modv_bvals;
};

struct ldapmod
{
  // mod_op
  signed int mod_op;
  // mod_type
  char *mod_type;
  // mod_vals
  union mod_vals_u mod_vals;
};

struct vers_attribute
{
  // buf
  char *buf;
  // name
  char *name;
  // src
  char *src;
  // field
  struct vers_field *field;
};

struct vers_object
{
  // attribs
  struct vers_attribute attribs[40l];
  // attribsNb
  signed int attribsNb;
  // rdn
  struct vers_attribute *rdn;
  // rdnName
  char *rdnName;
  // var
  char *var[7l];
  // fname
  char *fname;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct main_context
{
  // asyncMin
  signed int asyncMin;
  // asyncMax
  signed int asyncMax;
  // attrlist
  char *attrlist[40l];
  // attrlistNb
  signed int attrlistNb;
  // attRef
  char *attRef;
  // attRefDef
  char *attRefDef;
  // attrpl
  char *attrpl;
  // attrplFile
  char *attrplFile;
  // attrplFileContent
  char *attrplFileContent;
  // attrplFileSize
  signed int attrplFileSize;
  // attrplHead
  char *attrplHead;
  // attrplName
  char *attrplName;
  // attrplNbDigit
  signed int attrplNbDigit;
  // attrplTail
  char *attrplTail;
  // attrsonly
  signed int attrsonly;
  // baseDN
  char *baseDN;
  // baseDNLow
  signed int baseDNLow;
  // baseDNHigh
  signed int baseDNHigh;
  // baseDNNbDigit
  signed int baseDNNbDigit;
  // baseDNHead
  char *baseDNHead;
  // baseDNTail
  char *baseDNTail;
  // bindDN
  char *bindDN;
  // bindDNLow
  signed int bindDNLow;
  // bindDNHigh
  signed int bindDNHigh;
  // bindDNNbDigit
  signed int bindDNNbDigit;
  // bindDNHead
  char *bindDNHead;
  // bindDNTail
  char *bindDNTail;
  // certfile
  char *certfile;
  // cltcertname
  char *cltcertname;
  // dlf
  struct data_list_file *dlf;
  // negativeErrors
  signed int negativeErrors[19l];
  // errors
  signed int errors[123l];
  // errorsBad
  signed int errorsBad;
  // errors_mutex
  union anonymous$0 errors_mutex;
  // exitStatus
  signed int exitStatus;
  // filter
  char *filter;
  // genldifName
  char *genldifName;
  // genldifFile
  signed int genldifFile;
  // hostname
  char *hostname;
  // globStatsCnt
  signed int globStatsCnt;
  // ignErr
  signed int ignErr[20l];
  // ignErrNb
  signed int ignErrNb;
  // images
  struct image *images;
  // imagesDir
  char *imagesDir;
  // imagesNb
  signed int imagesNb;
  // imagesLast
  signed int imagesLast;
  // imagesLast_mutex
  union anonymous$0 imagesLast_mutex;
  // inactivMax
  signed int inactivMax;
  // incr
  signed int incr;
  // keydbfile
  char *keydbfile;
  // keydbpin
  char *keydbpin;
  // lastVal
  signed int lastVal;
  // lastVal_mutex
  union anonymous$0 lastVal_mutex;
  // ldapauth
  signed int ldapauth;
  // maxErrors
  signed int maxErrors;
  // mode
  unsigned int mode;
  // mod2
  unsigned int mod2;
  // nbNoActivity
  signed int nbNoActivity;
  // nbSamples
  signed int nbSamples;
  // nbThreads
  signed int nbThreads;
  // object
  struct vers_object object;
  // opListTail
  struct oper *opListTail;
  // opListTail_mutex
  union anonymous$0 opListTail_mutex;
  // passwd
  char *passwd;
  // passwdNbDigit
  signed int passwdNbDigit;
  // passwdHead
  char *passwdHead;
  // passwdTail
  char *passwdTail;
  // pid
  signed int pid;
  // port
  signed int port;
  // randomLow
  signed int randomLow;
  // randomHigh
  signed int randomHigh;
  // randomNbDigit
  signed int randomNbDigit;
  // randomHead
  char *randomHead;
  // randomTail
  char *randomTail;
  // rndBindDlf
  struct data_list_file *rndBindDlf;
  // rndBindFname
  char *rndBindFname;
  // referral
  signed int referral;
  // sampling
  signed int sampling;
  // sasl_authid
  char *sasl_authid;
  // sasl_authid_low
  signed int sasl_authid_low;
  // sasl_authid_high
  signed int sasl_authid_high;
  // sasl_authid_nbdigit
  signed int sasl_authid_nbdigit;
  // sasl_authid_head
  char *sasl_authid_head;
  // sasl_authid_tail
  char *sasl_authid_tail;
  // sasl_flags
  unsigned int sasl_flags;
  // sasl_mech
  char *sasl_mech;
  // sasl_realm
  char *sasl_realm;
  // sasl_secprops
  char *sasl_secprops;
  // sasl_username
  char *sasl_username;
  // scope
  signed int scope;
  // slaveConn
  signed int slaveConn;
  // slaves
  char *slaves[20l];
  // slavesNb
  signed int slavesNb;
  // srch_nentries
  signed int srch_nentries;
  // timeout
  signed int timeout;
  // timeval
  struct timeval timeval;
  // timevalZero
  struct timeval timevalZero;
  // totalReq
  signed int totalReq;
  // totNbOpers
  signed int totNbOpers;
  // totNbSamples
  signed int totNbSamples;
  // tsfmt
  char *tsfmt;
  // waitSec
  signed int waitSec;
};

struct msgid_cell
{
  // attribs
  struct ldapmod **attribs;
  // dn
  char dn[1024l];
  // msgid
  signed int msgid;
  // str
  char str[1024l];
  // next
  struct msgid_cell *next;
};

struct oper
{
  // type
  signed int type;
  // dn
  char *dn;
  // attribs
  struct anonymous$16 attribs[40l];
  // newRdn
  char *newRdn;
  // newParent
  char *newParent;
  // skipped
  signed int skipped;
  // skipped_mutex
  union anonymous$0 skipped_mutex;
  // next
  struct oper *next;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct rlimit
{
  // rlim_cur
  unsigned long int rlim_cur;
  // rlim_max
  unsigned long int rlim_max;
};

struct sasl_interact
{
  // id
  unsigned long int id;
  // challenge
  const char *challenge;
  // prompt
  const char *prompt;
  // defresult
  const char *defresult;
  // result
  const void *result;
  // len
  unsigned int len;
};

struct scalab01_context
{
  // cnxduration
  signed int cnxduration;
  // ldapCtx
  struct ldap *ldapCtx;
  // list
  struct isp_user *list;
  // list_mutex
  union anonymous$0 list_mutex;
  // locking
  char *locking[4096l];
  // locking_mutex
  union anonymous$0 locking_mutex;
  // lockingMax
  signed int lockingMax;
  // maxcnxnb
  signed int maxcnxnb;
  // nbcnx
  signed int nbcnx;
  // nbcnx_mutex
  union anonymous$0 nbcnx_mutex;
  // wait
  signed int wait;
};

struct sigaction
{
  // __sigaction_handler
  union anonymous$12 __sigaction_handler;
  // sa_mask
  struct anonymous$1 sa_mask;
  // sa_flags
  signed int sa_flags;
  // sa_restorer
  void (*sa_restorer)(void);
};

struct timespec
{
  // tv_sec
  signed long int tv_sec;
  // tv_nsec
  signed long int tv_nsec;
};

struct stat
{
  // st_dev
  unsigned long int st_dev;
  // st_ino
  unsigned long int st_ino;
  // st_nlink
  unsigned long int st_nlink;
  // st_mode
  unsigned int st_mode;
  // st_uid
  unsigned int st_uid;
  // st_gid
  unsigned int st_gid;
  // __pad0
  signed int __pad0;
  // st_rdev
  unsigned long int st_rdev;
  // st_size
  signed long int st_size;
  // st_blksize
  signed long int st_blksize;
  // st_blocks
  signed long int st_blocks;
  // st_atim
  struct timespec st_atim;
  // st_mtim
  struct timespec st_mtim;
  // st_ctim
  struct timespec st_ctim;
  // __glibc_reserved
  signed long int __glibc_reserved[3l];
};

struct thread_context
{
  // active
  signed int active;
  // asyncHit
  signed int asyncHit;
  // attrlist
  char *attrlist[40l];
  // binded
  signed int binded;
  // exitStatus
  signed int exitStatus;
  // fd
  signed int fd;
  // lastVal
  signed int lastVal;
  // ldapCtx
  struct ldap *ldapCtx;
  // mode
  unsigned int mode;
  // nbInactRow
  signed int nbInactRow;
  // nbInactTot
  signed int nbInactTot;
  // nbOpers
  signed int nbOpers;
  // nbOpers_mutex
  union anonymous$0 nbOpers_mutex;
  // object
  struct vers_object *object;
  // pendingNb
  signed int pendingNb;
  // status
  signed int status;
  // status_mutex
  union anonymous$0 status_mutex;
  // tid
  unsigned long int tid;
  // thrdId
  char thrdId[8l];
  // thrdNum
  signed int thrdNum;
  // totOpers
  signed int totOpers;
  // totalReq
  signed int totalReq;
  // buf2
  char buf2[512l];
  // bufObject1
  char *bufObject1;
  // bufAttrpl
  char *bufAttrpl;
  // bufBaseDN
  char *bufBaseDN;
  // bufBindDN
  char *bufBindDN;
  // bufFilter
  char *bufFilter;
  // bufPasswd
  char *bufPasswd;
  // bufSaslAuthid
  char *bufSaslAuthid;
  // matcheddnp
  char *matcheddnp;
  // startAttrpl
  signed int startAttrpl;
  // startBaseDN
  signed int startBaseDN;
  // startBindDN
  signed int startBindDN;
  // startPasswd
  signed int startPasswd;
  // startRandom
  signed int startRandom;
  // startSaslAuthid
  signed int startSaslAuthid;
  // firstMsgId
  struct msgid_cell *firstMsgId;
  // lastMsgId
  struct msgid_cell *lastMsgId;
};

struct tm
{
  // tm_sec
  signed int tm_sec;
  // tm_min
  signed int tm_min;
  // tm_hour
  signed int tm_hour;
  // tm_mday
  signed int tm_mday;
  // tm_mon
  signed int tm_mon;
  // tm_year
  signed int tm_year;
  // tm_wday
  signed int tm_wday;
  // tm_yday
  signed int tm_yday;
  // tm_isdst
  signed int tm_isdst;
  // tm_gmtoff
  signed long int tm_gmtoff;
  // tm_zone
  const char *tm_zone;
};

struct vers_field
{
  // how
  signed int how;
  // cnt
  signed int cnt;
  // cnt_mutex
  union anonymous$0 cnt_mutex;
  // commonField
  struct vers_field *commonField;
  // cst
  char *cst;
  // dlf
  struct data_list_file *dlf;
  // high
  signed int high;
  // low
  signed int low;
  // nb
  signed int nb;
  // var
  signed int var;
  // next
  struct vers_field *next;
};


// ber_pvt_opt_on
// file /usr/include/lber.h line 164
extern char ber_pvt_opt_on;
// cctx
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 68
struct check_context cctx[20l];
// enabledNSSVersions
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 63
static struct SSLVersionRangeStr enabledNSSVersions;
// execParams
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 1818
char *execParams[57l] = { "esearch", "bindeach", "random", "close", "incr", "add", "person", "delete", "emailPerson", "string", "randombase", "v2", "ascii", "noloop", "rename", "inetOrgPerson", "randombaselow", "randombasehigh", "imagesdir", "smoothshutdown", "attreplace", "cltcertname", "keydbfile", "keydbpin", "counteach", "withnewparent", "noglobalstats", "attrsonly", "randombinddn", "randombinddnhigh", "randombinddnlow", "scalab01", "scalab01_cnxduration", "scalab01_wait", "scalab01_maxcnxnb", "referral", "commoncounter", "dontsleeponserverdown", "attrlist", "randomattrlist", "object", "genldif", "rdn", "append", "randombinddnfromfile", "bindonly", "randomauthid", "randomauthidhigh", "randomauthidlow", "abandon", "deref", "attreplacefile", "srchnentries", "sampinterval", "timestamp", "nozeropad", (char *)(void *)0 };
// ldcltVersion
// file ../ldap/servers/slapd/tools/ldclt/version.c line 1
char *ldcltVersion = "4.23";
// ldclt_write_genldif_buf
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 2544
char *ldclt_write_genldif_buf = (char *)(void *)0;
// ldclt_write_genldif_nb
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 2546
signed int ldclt_write_genldif_nb;
// ldclt_write_genldif_pt
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 2545
char *ldclt_write_genldif_pt;
// masterPort
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 69
signed int masterPort = 16000;
// mctx
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 66
struct main_context mctx;
// ol_init_callOnce
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 454
static struct PRCallOnceType ol_init_callOnce = { .initialized=0, .inProgress=0, .status=(enum anonymous$13)0 };
// ol_init_lock
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 455
static struct PRLock *ol_init_lock = (struct PRLock *)(void *)0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// s1ctx
// file ../ldap/servers/slapd/tools/ldclt/scalab01.c line 76
struct scalab01_context s1ctx;
// scopeParams
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 1542
char *scopeParams[4l] = { "one", "subtree", "base", (char *)(void *)0 };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// tctx
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 67
struct thread_context tctx[1000l];

// addAttrToList
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 1726
signed int addAttrToList(char *list)
{
  signed int start;
  signed int end;
  _Bool tmp_if_expr$2;
  unsigned long int return_value_strlen$1;
  if(list == ((char *)NULL))
    tmp_if_expr$2 = (_Bool)1;

  else
  {
    return_value_strlen$1=strlen(list);
    tmp_if_expr$2 = !(return_value_strlen$1 != 0ul) ? (_Bool)1 : (_Bool)0;
  }
  unsigned long int return_value_strlen$3;
  _Bool tmp_if_expr$4;
  if(tmp_if_expr$2)
  {
    fprintf(stderr, "Error: missing attrlist\n");
    return -1;
  }

  else
  {
    start = 0;
    do
    {
      return_value_strlen$3=strlen(list);
      if((unsigned long int)start >= return_value_strlen$3)
        break;

      if(mctx.attrlistNb == 39)
      {
        fprintf(stderr, "Error : too many attributes in attrlist\n");
        return -1;
      }

      end = start;
      do
      {
        if(!((signed int)list[(signed long int)end] == 0))
          tmp_if_expr$4 = (signed int)list[(signed long int)end] != 58 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$4 = (_Bool)0;
        if(!tmp_if_expr$4)
          break;

        end = end + 1;
      }
      while((_Bool)1);
      void *return_value_malloc$5;
      return_value_malloc$5=malloc((unsigned long int)((1 + end) - start));
      mctx.attrlist[(signed long int)mctx.attrlistNb] = (char *)return_value_malloc$5;
      strncpy(mctx.attrlist[(signed long int)mctx.attrlistNb], &list[(signed long int)start], (unsigned long int)(end - start));
      mctx.attrlist[(signed long int)mctx.attrlistNb][(signed long int)(end - start)] = (char)0;
      mctx.attrlistNb = mctx.attrlistNb + 1;
      start = end + 1;
    }
    while((_Bool)1);
    return 0;
  }
}

// addAttrib
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 1281
signed int addAttrib(struct ldapmod **attrs, signed int nb, struct ldapmod *newattr)
{
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct ldapmod) /*24ul*/ );
  attrs[(signed long int)nb] = (struct ldapmod *)return_value_malloc$1;
  if(attrs[(signed long int)nb] == ((struct ldapmod *)NULL))
  {
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    char *return_value_strerror$4;
    return_value_strerror$4=strerror(*return_value___errno_location$3);
    printf("ldclt[%d]: Txxx: cannot malloc(attrs[%d]), error=%d (%s)\n", mctx.pid, nb, *return_value___errno_location$2, return_value_strerror$4);
    return -1;
  }

  memcpy((void *)attrs[(signed long int)nb], (const void *)newattr, sizeof(struct ldapmod) /*24ul*/ );
  attrs[(signed long int)(nb + 1)] = (struct ldapmod *)(void *)0;
  return 0;
}

// addErrorStat
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 703
extern signed int addErrorStat(signed int err)
{
  signed int ret;
  ret=ldclt_mutex_lock(&mctx.errors_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$1;
    return_value_strerror$1=strerror(ret);
    fprintf(stderr, "ldclt[%d]: Cannot mutex_lock(errors_mutex), error=%d (%s)\n", mctx.pid, ret, return_value_strerror$1);
    fflush(stderr);
    return -1;
  }

  if(err >= 0x7b || !(err >= -18))
  {
    fprintf(stderr, "ldclt[%d]: Illegal error number %d\n", mctx.pid, err);
    fflush(stderr);
    mctx.errorsBad = mctx.errorsBad + 1;
  }

  else
    if(!(err >= 0))
    {
      signed int return_value_abs$2;
      return_value_abs$2=abs(err);
      mctx.negativeErrors[(signed long int)return_value_abs$2] = mctx.negativeErrors[(signed long int)return_value_abs$2] + 1;
    }

    else
      mctx.errors[(signed long int)err] = mctx.errors[(signed long int)err] + 1;
  ret=ldclt_mutex_unlock(&mctx.errors_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$3;
    return_value_strerror$3=strerror(ret);
    fprintf(stderr, "ldclt[%d]: Cannot mutex_unlock(errors_mutex), error=%d (%s)\n", mctx.pid, ret, return_value_strerror$3);
    fflush(stderr);
    return -1;
  }

  signed int return_value_ignoreError$5;
  return_value_ignoreError$5=ignoreError(err);
  if(return_value_ignoreError$5 == 0)
  {
    if(err >= 0x7b || !(err >= -18))
    {
      if(!(mctx.maxErrors >= mctx.errorsBad))
      {
        printf("ldclt[%d]: Max error limit reached - exiting.\n", mctx.pid);
        printGlobalStatistics();
        fflush(stdout);
        ldclt_sleep(5);
        ldcltExit(3);
      }

    }

    else
      if(!(err >= 0))
      {
        signed int return_value_abs$4;
        return_value_abs$4=abs(err);
        if(!(mctx.maxErrors >= mctx.negativeErrors[(signed long int)return_value_abs$4]))
        {
          printf("ldclt[%d]: Max error limit reached - exiting.\n", mctx.pid);
          printGlobalStatistics();
          fflush(stdout);
          ldclt_sleep(5);
          ldcltExit(3);
        }

      }

      else
        if(!(mctx.maxErrors >= mctx.errors[(signed long int)err]))
        {
          printf("ldclt[%d]: Max error limit reached - exiting.\n", mctx.pid);
          printGlobalStatistics();
          fflush(stdout);
          ldclt_sleep(5);
          ldcltExit(3);
        }

  }

  return 0;
}

// basicInit
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 975
signed int basicInit(void)
{
  struct rlimit rlp;
  signed int i;
  signed int ret;
  signed int oflags;
  struct stat file_st;
  signed int fd = -1;
  struct _IO_FILE *attrF;
  char buffer[1024l];
  mctx.timeval.tv_sec = (signed long int)mctx.timeout;
  mctx.timeval.tv_usec = (signed long int)0;
  mctx.timevalZero.tv_sec = (signed long int)0;
  mctx.timevalZero.tv_usec = (signed long int)0;
  signed int return_value_utilsInit$1;
  return_value_utilsInit$1=utilsInit();
  signed int return_value_readObject$7;
  unsigned long int return_value_strlen$13;
  _Bool tmp_if_expr$14;
  unsigned long int return_value_strlen$17;
  _Bool tmp_if_expr$18;
  unsigned long int return_value_strlen$24;
  _Bool tmp_if_expr$25;
  unsigned long int return_value_fread$33;
  signed int return_value_loadImages$36;
  signed int return_value_scalab01_init$46;
  if(!(return_value_utilsInit$1 >= 0))
  {
    fprintf(stderr, "Cannot initialize utilities.\n");
    return -1;
  }

  else
    if(!((16u & mctx.mod2) == 0u))
    {
      mctx.rndBindDlf=dataListFile(mctx.rndBindFname);
      if(!(mctx.rndBindDlf == ((struct data_list_file *)NULL)))
        goto __CPROVER_DUMP_L2;

      fprintf(stderr, "Error : cannot read %s\n", mctx.rndBindFname);
      fflush(stderr);
      return -1;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      if(!((2u & mctx.mod2) == 0u))
      {
        if((8u & mctx.mod2) == 0u)
        {
          mctx.genldifFile=open(mctx.genldifName, 00);
          if(!(mctx.genldifFile == -1))
          {
            fprintf(stderr, "Error: File exits %s\n", mctx.genldifName);
            fflush(stderr);
            return -1;
          }

        }

        if(!((8u & mctx.mod2) == 0u))
          oflags = 02000 | 01 | 0100;

        else
          oflags = 0200 | 01 | 0100;
        mctx.genldifFile=open(mctx.genldifName, oflags, 0666);
        if(mctx.genldifFile == -1)
        {
          signed int *return_value___errno_location$2;
          return_value___errno_location$2=__errno_location();
          char *return_value_strerror$3;
          return_value_strerror$3=strerror(*return_value___errno_location$2);
          fprintf(stderr, "ldclt: %s\n", return_value_strerror$3);
          fprintf(stderr, "Error: cannot create %s\n", mctx.genldifName);
          fflush(stderr);
          return -1;
        }

        mctx.nbThreads = 1;
      }

      if((1u & mctx.mod2) == 0u && !((512u & mctx.mode) == 0u))
      {
        ret=ldclt_mutex_init(&mctx.lastVal_mutex);
        if(!(ret == 0))
        {
          char *return_value_strerror$4;
          return_value_strerror$4=strerror(ret);
          fprintf(stderr, "ldclt: %s\n", return_value_strerror$4);
          fprintf(stderr, "Error: cannot initiate lastVal_mutex\n");
          fflush(stderr);
          return -1;
        }

        mctx.lastVal = mctx.randomLow - mctx.incr;
      }

      if(mctx.nbThreads >= 55)
      {
        signed int return_value_getrlimit$5;
        return_value_getrlimit$5=getrlimit((enum __rlimit_resource)RLIMIT_NOFILE, &rlp);
        if(!(return_value_getrlimit$5 >= 0))
        {
          perror("ldclt");
          fprintf(stderr, "Error: cannot getrlimit()\n");
          fflush(stderr);
          return -1;
        }

        rlp.rlim_cur = rlp.rlim_max;
        signed int return_value_setrlimit$6;
        return_value_setrlimit$6=setrlimit((enum __rlimit_resource)RLIMIT_NOFILE, &rlp);
        if(!(return_value_setrlimit$6 >= 0))
        {
          perror("ldclt");
          fprintf(stderr, "Error: cannot setrlimit()\n");
          fflush(stderr);
          return -1;
        }

        if(!((1u & mctx.mode) == 0u))
          printf("Set file number to %u\n", (unsigned int)rlp.rlim_max);

      }

      if(!((1u & mctx.mod2) == 0u))
      {
        return_value_readObject$7=readObject(&mctx.object);
        if(!(return_value_readObject$7 >= 0))
        {
          printf("Error: cannot parse %s\n", mctx.object.fname);
          return -1;
        }

      }

      if((4u & mctx.mod2) == 0u && !((671088640u & mctx.mode) == 0u))
      {
        signed int return_value_parseFilter$8;
        return_value_parseFilter$8=parseFilter(mctx.filter, &mctx.randomHead, &mctx.randomTail, &mctx.randomNbDigit);
        if(!(return_value_parseFilter$8 >= 0))
        {
          printf("Error: cannot parse filter...\n");
          return -1;
        }

      }

      if(!((2097152u & mctx.mode) == 0u))
      {
        signed int return_value_parseFilter$9;
        return_value_parseFilter$9=parseFilter(mctx.baseDN, &mctx.baseDNHead, &mctx.baseDNTail, &mctx.baseDNNbDigit);
        if(!(return_value_parseFilter$9 >= 0))
        {
          printf("Error: cannot parse base DN...\n");
          return -1;
        }

      }

      if(!((2048u & mctx.mode) == 0u))
      {
        signed int return_value_parseFilter$10;
        return_value_parseFilter$10=parseFilter(mctx.bindDN, &mctx.bindDNHead, &mctx.bindDNTail, &mctx.bindDNNbDigit);
        if(!(return_value_parseFilter$10 >= 0))
        {
          printf("Error: cannot parse bind DN...\n");
          return -1;
        }

        signed int return_value_parseFilter$11;
        return_value_parseFilter$11=parseFilter(mctx.passwd, &mctx.passwdHead, &mctx.passwdTail, &mctx.passwdNbDigit);
        if(!(return_value_parseFilter$11 >= 0))
        {
          printf("Error: cannot parse password...\n");
          return -1;
        }

      }

      if(!((128u & mctx.mod2) == 0u))
      {
        signed int return_value_parseFilter$12;
        return_value_parseFilter$12=parseFilter(mctx.sasl_authid, &mctx.sasl_authid_head, &mctx.sasl_authid_tail, &mctx.sasl_authid_nbdigit);
        if(!(return_value_parseFilter$12 >= 0))
        {
          printf("Error: cannot parse bind DN...\n");
          return -1;
        }

      }

      if(!((16384u & mctx.mode) == 0u))
      {
        i = 0;
        do
        {
          return_value_strlen$13=strlen(mctx.attrpl);
          if(!((unsigned long int)i >= return_value_strlen$13))
            tmp_if_expr$14 = (signed int)mctx.attrpl[(signed long int)i] != 58 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$14 = (_Bool)0;
          if(!tmp_if_expr$14)
            break;

          i = i + 1;
        }
        while((_Bool)1);
        void *return_value_malloc$15;
        return_value_malloc$15=malloc((unsigned long int)(i + 1));
        mctx.attrplName = (char *)return_value_malloc$15;
        strncpy(mctx.attrplName, mctx.attrpl, (unsigned long int)i);
        mctx.attrplName[(signed long int)i] = (char)0;
        signed int return_value_parseFilter$16;
        return_value_parseFilter$16=parseFilter(mctx.attrpl + (signed long int)i + (signed long int)1, &mctx.attrplHead, &mctx.attrplTail, &mctx.attrplNbDigit);
        if(!(return_value_parseFilter$16 >= 0))
        {
          printf("Error: cannot parse attreplace...\n");
          return -1;
        }

      }

      if(!((512u & mctx.mod2) == 0u) && !(mctx.attrpl == ((char *)NULL)))
      {
        i = 0;
        do
        {
          return_value_strlen$17=strlen(mctx.attrpl);
          if(!((unsigned long int)i >= return_value_strlen$17))
            tmp_if_expr$18 = (signed int)mctx.attrpl[(signed long int)i] != 58 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$18 = (_Bool)0;
          if(!tmp_if_expr$18)
            break;

          i = i + 1;
        }
        while((_Bool)1);
        void *return_value_malloc$19;
        return_value_malloc$19=malloc((unsigned long int)(i + 1));
        mctx.attRef = (char *)return_value_malloc$19;
        strncpy(mctx.attRef, mctx.attrpl, (unsigned long int)i);
        mctx.attRef[(signed long int)i] = (char)0;
        unsigned long int return_value_strlen$20;
        return_value_strlen$20=strlen(mctx.attrpl + (signed long int)i);
        void *return_value_malloc$21;
        return_value_malloc$21=malloc(return_value_strlen$20 + (unsigned long int)2);
        mctx.attRefDef = (char *)return_value_malloc$21;
        if(mctx.attRefDef == ((char *)NULL))
        {
          printf("Error: unable to allocate memory for attRefDef\n");
          return -1;
        }

        unsigned long int return_value_strlen$22;
        return_value_strlen$22=strlen(mctx.attrpl + (signed long int)i + (signed long int)1);
        strncpy(mctx.attRefDef, mctx.attrpl + (signed long int)i + (signed long int)1, return_value_strlen$22);
        unsigned long int return_value_strlen$23;
        return_value_strlen$23=strlen(mctx.attrpl + (signed long int)i + (signed long int)1);
        mctx.attRefDef[(signed long int)return_value_strlen$23] = (char)0;
      }

      if(!((1024u & mctx.mod2) == 0u) && !(mctx.attrpl == ((char *)NULL)))
      {
        i = 0;
        do
        {
          return_value_strlen$24=strlen(mctx.attrpl);
          if(!((unsigned long int)i >= return_value_strlen$24))
            tmp_if_expr$25 = (signed int)mctx.attrpl[(signed long int)i] != 58 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$25 = (_Bool)0;
          if(!tmp_if_expr$25)
            break;

          i = i + 1;
        }
        while((_Bool)1);
        void *return_value_malloc$26;
        return_value_malloc$26=malloc((unsigned long int)(i + 1));
        mctx.attrplName = (char *)return_value_malloc$26;
        strncpy(mctx.attrplName, mctx.attrpl, (unsigned long int)i);
        mctx.attrplName[(signed long int)i] = (char)0;
        unsigned long int return_value_strlen$27;
        return_value_strlen$27=strlen(mctx.attrpl + (signed long int)i);
        void *return_value_malloc$28;
        return_value_malloc$28=malloc(return_value_strlen$27 + (unsigned long int)2);
        mctx.attrplFile = (char *)return_value_malloc$28;
        if(mctx.attrplFile == ((char *)NULL))
        {
          printf("Error: unable to allocate memory for attreplfile\n");
          return -1;
        }

        unsigned long int return_value_strlen$29;
        return_value_strlen$29=strlen(mctx.attrpl + (signed long int)i + (signed long int)1);
        strncpy(mctx.attrplFile, mctx.attrpl + (signed long int)i + (signed long int)1, return_value_strlen$29);
        unsigned long int return_value_strlen$30;
        return_value_strlen$30=strlen(mctx.attrpl + (signed long int)i + (signed long int)1);
        mctx.attrplFile[(signed long int)return_value_strlen$30] = (char)0;
        fd=open(mctx.attrplFile, 00);
        if(fd == -1)
        {
          printf("ERROR reading attr file [%s]\n", mctx.attrplFile);
          return -1;
        }

        else
          printf("file opened for reading\n");
        signed int return_value_fstat$31;
        return_value_fstat$31=fstat(fd, &file_st);
        if(!(return_value_fstat$31 >= 0))
        {
          printf("attr replace file [%s] does not exist, exit\n", mctx.attrplFile);
          close(fd);
          return -1;
        }

        else
        {
          mctx.attrplFileSize = (signed int)file_st.st_size;
          printf("file has size [%d] bytes\n", mctx.attrplFileSize);
        }
        attrF=fdopen(fd, "r");
        if(attrF == ((struct _IO_FILE *)NULL))
        {
          printf("ERROR reading attr file [%s]\n", mctx.attrplFile);
          close(fd);
          return -1;
        }

        else
          printf("file opened for reading\n");
        void *return_value_malloc$32;
        return_value_malloc$32=malloc((unsigned long int)(mctx.attrplFileSize + 1));
        mctx.attrplFileContent = (char *)return_value_malloc$32;
        i = 0;
        do
        {
          return_value_fread$33=fread((void *)buffer, (unsigned long int)1024, (unsigned long int)1, attrF);
          ret = (signed int)return_value_fread$33;
          if(ret == 0)
            break;

          memcpy((void *)(mctx.attrplFileContent + (signed long int)i), (const void *)buffer, (unsigned long int)ret);
          memset((void *)buffer, 0, (unsigned long int)1024);
          i = i + ret;
        }
        while((_Bool)1);
        if(!(i >= mctx.attrplFileSize))
        {
          memcpy((void *)(mctx.attrplFileContent + (signed long int)i), (const void *)buffer, (unsigned long int)((mctx.attrplFileSize - 1) - i));
          memset((void *)buffer, 0, (unsigned long int)1024);
        }

        mctx.attrplFileContent[(signed long int)mctx.attrplFileSize] = (char)0;
        signed int return_value_fclose$34;
        return_value_fclose$34=fclose(attrF);
        if(return_value_fclose$34 == -1)
        {
          printf("ERROR closing attr file [%s]\n", mctx.attrplFile);
          return -1;
        }

        else
          printf("file closed\n");
      }

      mctx.totNbOpers = 0;
      mctx.totNbSamples = 0;
      mctx.errorsBad = 0;
      i = 0;
      for( ; !(i >= 0x7b); i = i + 1)
        mctx.errors[(signed long int)i] = 0;
      i = 0;
      for( ; !(i >= 19); i = i + 1)
        mctx.negativeErrors[(signed long int)i] = 0;
      ret=ldclt_mutex_init(&mctx.errors_mutex);
      if(!(ret == 0))
      {
        char *return_value_strerror$35;
        return_value_strerror$35=strerror(ret);
        fprintf(stderr, "ldclt: %s\n", return_value_strerror$35);
        fprintf(stderr, "Error: cannot initiate errors_mutex\n");
        fflush(stderr);
        return -1;
      }

      if(!((8454144u & mctx.mode) == 0u))
      {
        return_value_loadImages$36=loadImages(mctx.imagesDir);
        if(!(return_value_loadImages$36 >= 0))
          return -1;

      }

      if(mctx.slavesNb >= 1)
      {
        ret=ldclt_mutex_init(&mctx.opListTail_mutex);
        if(!(ret == 0))
        {
          char *return_value_strerror$37;
          return_value_strerror$37=strerror(ret);
          fprintf(stderr, "ldclt: %s\n", return_value_strerror$37);
          fprintf(stderr, "Error: cannot initiate opListTail_mutex\n");
          fflush(stderr);
          return -1;
        }

        void *return_value_malloc$38;
        return_value_malloc$38=malloc(sizeof(struct oper) /*1368ul*/ );
        mctx.opListTail = (struct oper *)return_value_malloc$38;
        if(mctx.opListTail == ((struct oper *)NULL))
        {
          signed int *return_value___errno_location$39;
          return_value___errno_location$39=__errno_location();
          signed int *return_value___errno_location$40;
          return_value___errno_location$40=__errno_location();
          char *return_value_strerror$41;
          return_value_strerror$41=strerror(*return_value___errno_location$40);
          printf("Error: cannot malloc(mctx.opListTail), error=%d (%s)\n", *return_value___errno_location$39, return_value_strerror$41);
          return -1;
        }

        mctx.opListTail->dn=strdup("Dummy initial dn");
        if(mctx.opListTail->dn == ((char *)NULL))
        {
          signed int *return_value___errno_location$42;
          return_value___errno_location$42=__errno_location();
          signed int *return_value___errno_location$43;
          return_value___errno_location$43=__errno_location();
          char *return_value_strerror$44;
          return_value_strerror$44=strerror(*return_value___errno_location$43);
          printf("Error: cannot strdup(mctx.opListTail->dn), error=%d (%s)\n", *return_value___errno_location$42, return_value_strerror$44);
          return -1;
        }

        mctx.opListTail->attribs[(signed long int)0].type = (char *)(void *)0;
        mctx.opListTail->newRdn = (char *)(void *)0;
        mctx.opListTail->newParent = (char *)(void *)0;
        mctx.opListTail->skipped = 0;
        mctx.opListTail->next = (struct oper *)(void *)0;
        ret=ldclt_mutex_init(&mctx.opListTail->skipped_mutex);
        if(!(ret == 0))
        {
          char *return_value_strerror$45;
          return_value_strerror$45=strerror(ret);
          fprintf(stderr, "ldclt: %s\n", return_value_strerror$45);
          fprintf(stderr, "Error: cannot initiate opListTail->skipped_mutex\n");
          fflush(stderr);
          return -1;
        }

      }

      if(!((1024u & mctx.mode) == 0u))
      {
        return_value_scalab01_init$46=scalab01_init();
        if(!(return_value_scalab01_init$46 >= 0))
        {
          fprintf(stderr, "ldclt: cannot init scalab01\n");
          fflush(stderr);
          return -1;
        }

      }

      return 0;
    }
}

// buildArgListString
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 2281
char * buildArgListString(signed int argc, char **argv)
{
  char *argvList;
  signed int lgth;
  signed int i;
  lgth = 0;
  i = 0;
  char *return_value_strchr$3;
  for( ; !(i >= argc); i = i + 1)
  {
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(argv[(signed long int)i]);
    lgth = lgth + (signed int)(return_value_strlen$1 + (unsigned long int)1);
    char *return_value_strchr$2;
    return_value_strchr$2=strchr(argv[(signed long int)i], 32);
    _Bool tmp_if_expr$4;
    if(!(return_value_strchr$2 == ((char *)NULL)))
      tmp_if_expr$4 = (_Bool)1;

    else
    {
      return_value_strchr$3=strchr(argv[(signed long int)i], 9);
      tmp_if_expr$4 = return_value_strchr$3 != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$4)
      lgth = lgth + 2;

  }
  void *return_value_malloc$5;
  return_value_malloc$5=malloc((unsigned long int)lgth);
  argvList = (char *)return_value_malloc$5;
  argvList[(signed long int)0] = (char)0;
  strcat(argvList, argv[(signed long int)0]);
  i = 1;
  char *return_value_strchr$7;
  for( ; !(i >= argc); i = i + 1)
  {
    strcat(argvList, " ");
    char *return_value_strchr$6;
    return_value_strchr$6=strchr(argv[(signed long int)i], 32);
    _Bool tmp_if_expr$8;
    if(return_value_strchr$6 == ((char *)NULL))
    {
      return_value_strchr$7=strchr(argv[(signed long int)i], 9);
      tmp_if_expr$8 = return_value_strchr$7 == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$8 = (_Bool)0;
    if(tmp_if_expr$8)
      strcat(argvList, argv[(signed long int)i]);

    else
    {
      strcat(argvList, "\"");
      strcat(argvList, argv[(signed long int)i]);
      strcat(argvList, "\"");
    }
  }
  return argvList;
}

// buildNewBindDN
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 193
signed int buildNewBindDN(struct thread_context *tttctx)
{
  signed int return_value_getBindAndPasswdFromFile$1;
  if(!((16u & mctx.mod2) == 0u))
  {
    return_value_getBindAndPasswdFromFile$1=getBindAndPasswdFromFile(tttctx);
    return return_value_getBindAndPasswdFromFile$1;
  }

  if((2048u & mctx.mode) == 0u)
    return 0;

  else
  {
    if(!((4194304u & mctx.mode) == 0u))
      randomString(tttctx, mctx.bindDNNbDigit);

    else
      rnd(tttctx->buf2, mctx.bindDNLow, mctx.bindDNHigh, (mctx.mod2 & (unsigned int)0x00000800) != 0u ? 0 : mctx.bindDNNbDigit);
    strncpy(&tttctx->bufBindDN[(signed long int)tttctx->startBindDN], tttctx->buf2, (unsigned long int)mctx.bindDNNbDigit);
    if(!((2u & mctx.mode) == 0u))
      printf("ldclt[%d]: T%03d: bind DN=\"%s\"\n", mctx.pid, tttctx->thrdNum, tttctx->bufBindDN);

    strncpy(&tttctx->bufPasswd[(signed long int)tttctx->startPasswd], tttctx->buf2, (unsigned long int)mctx.passwdNbDigit);
    if(!((2u & mctx.mode) == 0u))
      printf("ldclt[%d]: T%03d: bind passwd=\"%s\"\n", mctx.pid, tttctx->thrdNum, tttctx->bufPasswd);

    return 0;
  }
}

// buildNewEntry
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 1625
signed int buildNewEntry(struct thread_context *tttctx, char *newDn, struct ldapmod **attrs)
{
  signed int nbAttribs;
  struct ldapmod attribute;
  signed int i;
  signed int return_value_buildRandomRdnOrFilter$1;
  return_value_buildRandomRdnOrFilter$1=buildRandomRdnOrFilter(tttctx);
  if(!(return_value_buildRandomRdnOrFilter$1 >= 0))
    return -1;

  else
  {
    strcpy(newDn, tttctx->bufFilter);
    strcat(newDn, ",");
    strcat(newDn, tttctx->bufBaseDN);
    if(!((2u & mctx.mode) == 0u))
      printf("ldclt[%d]: %s: tttctx->bufFilter=\"%s\"\n", mctx.pid, (const void *)tttctx->thrdId, tttctx->bufFilter);

    if(!((1u & mctx.mod2) == 0u))
    {
      signed int return_value_buildVersatileObject$2;
      return_value_buildVersatileObject$2=buildVersatileObject(tttctx, tttctx->object, attrs);
      if(!(return_value_buildVersatileObject$2 >= 0))
        return -1;

      if(!((2u & mctx.mode) == 0u))
      {
        i = 0;
        for( ; !(attrs[(signed long int)i] == ((struct ldapmod *)NULL)); i = i + 1)
          printf("ldclt[%d]: %s: attrs[%d]=(\"%s\" , \"%s\")\n", mctx.pid, (const void *)tttctx->thrdId, i, attrs[(signed long int)i]->mod_type, attrs[(signed long int)i]->mod_vals.modv_strvals[(signed long int)0]);
      }

      return 0;
    }

    attrs[(signed long int)0] = (struct ldapmod *)(void *)0;
    nbAttribs = 0;
    attribute.mod_op = 0x0000;
    attribute.mod_type = "objectclass";
    if(!((33554432u & mctx.mode) == 0u))
      attribute.mod_vals.modv_strvals=strList1("person");

    if(!((8388608u & mctx.mode) == 0u))
      attribute.mod_vals.modv_strvals=strList1("emailPerson");

    if(!((65536u & mctx.mode) == 0u))
      attribute.mod_vals.modv_strvals=strList1("inetOrgPerson");

    signed int tmp_post$3 = nbAttribs;
    nbAttribs = nbAttribs + 1;
    signed int return_value_addAttrib$4;
    return_value_addAttrib$4=addAttrib(attrs, tmp_post$3, &attribute);
    if(!(return_value_addAttrib$4 >= 0))
      return -1;

    else
    {
      i = 0;
      for( ; !((signed int)tttctx->bufFilter[(signed long int)i] == 61); i = i + 1)
        tttctx->buf2[(signed long int)i] = tttctx->bufFilter[(signed long int)i];
      tttctx->buf2[(signed long int)i] = (char)0;
      attribute.mod_op = 0x0000;
      attribute.mod_type = tttctx->buf2;
      attribute.mod_vals.modv_strvals=strList1(&tttctx->bufFilter[(signed long int)(i + 1)]);
      signed int tmp_post$5 = nbAttribs;
      nbAttribs = nbAttribs + 1;
      signed int return_value_addAttrib$6;
      return_value_addAttrib$6=addAttrib(attrs, tmp_post$5, &attribute);
      if(!(return_value_addAttrib$6 >= 0))
        return -1;

      else
      {
        if(!((42008576u & mctx.mode) == 0u))
        {
          signed int return_value_strcmp$9;
          return_value_strcmp$9=strcmp(tttctx->buf2, "cn");
          if(!(return_value_strcmp$9 == 0))
          {
            attribute.mod_op = 0x0000;
            attribute.mod_type = "cn";
            attribute.mod_vals.modv_strvals=strList1("toto cn");
            signed int tmp_post$7 = nbAttribs;
            nbAttribs = nbAttribs + 1;
            signed int return_value_addAttrib$8;
            return_value_addAttrib$8=addAttrib(attrs, tmp_post$7, &attribute);
            if(!(return_value_addAttrib$8 >= 0))
              return -1;

          }

          signed int return_value_strcmp$12;
          return_value_strcmp$12=strcmp(tttctx->buf2, "sn");
          if(!(return_value_strcmp$12 == 0))
          {
            attribute.mod_op = 0x0000;
            attribute.mod_type = "sn";
            attribute.mod_vals.modv_strvals=strList1("toto sn");
            signed int tmp_post$10 = nbAttribs;
            nbAttribs = nbAttribs + 1;
            signed int return_value_addAttrib$11;
            return_value_addAttrib$11=addAttrib(attrs, tmp_post$10, &attribute);
            if(!(return_value_addAttrib$11 >= 0))
              return -1;

          }

          if(!((512u & mctx.mod2) == 0u) && !((65536u & mctx.mode) == 0u))
          {
            attribute.mod_op = 0x0000;
            attribute.mod_type = "secretary";
            attribute.mod_vals.modv_strvals=strList1(newDn);
            signed int tmp_post$13 = nbAttribs;
            nbAttribs = nbAttribs + 1;
            signed int return_value_addAttrib$14;
            return_value_addAttrib$14=addAttrib(attrs, tmp_post$13, &attribute);
            if(!(return_value_addAttrib$14 >= 0))
              return -1;

          }

        }

        if(!((8454144u & mctx.mode) == 0u))
        {
          attribute.mod_op = 0x0000 | 0x0080;
          attribute.mod_type = "jpegPhoto";
          signed int return_value_getImage$15;
          return_value_getImage$15=getImage(&attribute);
          if(!(return_value_getImage$15 >= 0))
            return -1;

          signed int tmp_post$16 = nbAttribs;
          nbAttribs = nbAttribs + 1;
          signed int return_value_addAttrib$17;
          return_value_addAttrib$17=addAttrib(attrs, tmp_post$16, &attribute);
          if(!(return_value_addAttrib$17 >= 0))
            return -1;

        }

        if(!((2u & mctx.mode) == 0u))
        {
          i = 0;
          for( ; !(attrs[(signed long int)i] == ((struct ldapmod *)NULL)); i = i + 1)
            printf("ldclt[%d]: T%03d: attrs[%d]=(\"%s\" , \"%s\")\n", mctx.pid, tttctx->thrdNum, i, attrs[(signed long int)i]->mod_type, attrs[(signed long int)i]->mod_vals.modv_strvals[(signed long int)0]);
        }

        return 0;
      }
    }
  }
}

// buildNewModAttrib
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 1513
signed int buildNewModAttrib(struct thread_context *tttctx, char *newDn, struct ldapmod **attrs)
{
  signed int nbAttribs;
  struct ldapmod attribute;
  signed int return_value_buildRandomRdnOrFilter$1;
  return_value_buildRandomRdnOrFilter$1=buildRandomRdnOrFilter(tttctx);
  if(!(return_value_buildRandomRdnOrFilter$1 >= 0))
    return -1;

  else
  {
    strcpy(newDn, tttctx->bufFilter);
    strcat(newDn, ",");
    strcat(newDn, tttctx->bufBaseDN);
    attrs[(signed long int)0] = (struct ldapmod *)(void *)0;
    nbAttribs = 0;
    attribute.mod_op = 0x0002;
    attribute.mod_type = mctx.attrplName;
    attribute.mod_vals.modv_strvals=strList1(tttctx->bufAttrpl);
    signed int tmp_post$2 = nbAttribs;
    nbAttribs = nbAttribs + 1;
    signed int return_value_addAttrib$3;
    return_value_addAttrib$3=addAttrib(attrs, tmp_post$2, &attribute);
    if(!(return_value_addAttrib$3 >= 0))
      return -1;

    else
      return 0;
  }
}

// buildNewModAttribFile
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 1439
signed int buildNewModAttribFile(struct thread_context *tttctx, char *newDn, struct ldapmod **attrs)
{
  signed int nbAttribs;
  struct ldapmod attribute;
  struct berval *bv;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct berval) /*16ul*/ );
  bv = (struct berval *)return_value_malloc$1;
  void *return_value_malloc$2;
  return_value_malloc$2=malloc((unsigned long int)2 * sizeof(struct berval *) /*8ul*/ );
  attribute.mod_vals.modv_bvals = (struct berval **)return_value_malloc$2;
  signed int rc = 0;
  signed int return_value_buildRandomRdnOrFilter$3;
  signed int return_value_addAttrib$5;
  if(attribute.mod_vals.modv_bvals == ((struct berval **)NULL) || bv == ((struct berval *)NULL))
    rc = -1;

  else
  {
    return_value_buildRandomRdnOrFilter$3=buildRandomRdnOrFilter(tttctx);
    if(!(return_value_buildRandomRdnOrFilter$3 >= 0))
      rc = -1;

    else
    {
      strcpy(newDn, tttctx->bufFilter);
      strcat(newDn, ",");
      strcat(newDn, tttctx->bufBaseDN);
      bv->bv_len = (unsigned long int)mctx.attrplFileSize;
      bv->bv_val = mctx.attrplFileContent;
      attrs[(signed long int)0] = (struct ldapmod *)(void *)0;
      nbAttribs = 0;
      attribute.mod_op = 0x0002 | 0x0080;
      attribute.mod_type = mctx.attrplName;
      attribute.mod_vals.modv_bvals[(signed long int)0] = bv;
      attribute.mod_vals.modv_bvals[(signed long int)1] = (struct berval *)(void *)0;
      signed int tmp_post$4 = nbAttribs;
      nbAttribs = nbAttribs + 1;
      return_value_addAttrib$5=addAttrib(attrs, tmp_post$4, &attribute);
      if(!(return_value_addAttrib$5 >= 0))
        rc = -1;

      else
        goto done;
    }
  }

error:
  ;
  if(!(bv == ((struct berval *)NULL)))
    free((void *)bv);

  if(!(attribute.mod_vals.modv_bvals == ((struct berval **)NULL)))
    free((void *)attribute.mod_vals.modv_bvals);


done:
  ;
  return rc;
}

// buildRandomRdnOrFilter
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 1156
signed int buildRandomRdnOrFilter(struct thread_context *tttctx)
{
  if(!((2097152u & mctx.mode) == 0u))
  {
    if(!((4194304u & mctx.mode) == 0u))
      randomString(tttctx, mctx.baseDNNbDigit);

    else
      rnd(tttctx->buf2, mctx.baseDNLow, mctx.baseDNHigh, (mctx.mod2 & (unsigned int)0x00000800) != 0u ? 0 : mctx.baseDNNbDigit);
    strncpy(&tttctx->bufBaseDN[(signed long int)tttctx->startBaseDN], tttctx->buf2, (unsigned long int)mctx.baseDNNbDigit);
    if(!((2u & mctx.mode) == 0u))
      printf("ldclt[%d]: T%03d: base DN=\"%s\"\n", mctx.pid, tttctx->thrdNum, tttctx->bufBaseDN);

  }

  if(!((16384u & mctx.mode) == 0u))
  {
    randomString(tttctx, mctx.attrplNbDigit);
    strncpy(&tttctx->bufAttrpl[(signed long int)tttctx->startAttrpl], tttctx->buf2, (unsigned long int)mctx.attrplNbDigit);
    if(!((2u & mctx.mode) == 0u))
      printf("ldclt[%d]: T%03d: attrib=\"%s\"\n", mctx.pid, tttctx->thrdNum, tttctx->bufAttrpl);

  }

  if(!((4u & mctx.mod2) == 0u))
  {
    char *buf;
    buf=buildVersatileAttribute(tttctx, tttctx->object, tttctx->object->rdn);
    if(buf == ((char *)NULL))
      return -1;

    strcpy(tttctx->bufFilter, tttctx->object->rdnName);
    strcat(tttctx->bufFilter, "=");
    strcat(tttctx->bufFilter, buf);
    if(!((2u & mctx.mode) == 0u))
      printf("ldclt[%d]: %s: rdn variant mode:filter=\"%s\"\n", mctx.pid, (const void *)tttctx->thrdId, tttctx->bufFilter);

  }

  else
  {
    if(!((536870912u & mctx.mode) == 0u))
    {
      if(!((4194304u & mctx.mode) == 0u))
        randomString(tttctx, mctx.randomNbDigit);

      else
        rnd(tttctx->buf2, mctx.randomLow, mctx.randomHigh, (mctx.mod2 & (unsigned int)0x00000800) != 0u ? 0 : mctx.randomNbDigit);
      strncpy(&tttctx->bufFilter[(signed long int)tttctx->startRandom], tttctx->buf2, (unsigned long int)mctx.randomNbDigit);
      if(!((2048u & mctx.mod2) == 0u) && !(mctx.randomTail == ((char *)NULL)))
        strcat(tttctx->bufFilter, mctx.randomTail);

      if(!((2u & mctx.mode) == 0u))
        printf("ldclt[%d]: %s: random mode:filter=\"%s\"\n", mctx.pid, (const void *)tttctx->thrdId, tttctx->bufFilter);

    }

    if(!((134217728u & mctx.mode) == 0u))
    {
      if(!((512u & mctx.mode) == 0u))
      {
        signed int val;
        val=incrementCommonCounter(tttctx);
        if(val == -1)
          return -1;

        sprintf(tttctx->buf2, "%0*d", (mctx.mod2 & (unsigned int)0x00000800) != 0u ? 0 : mctx.randomNbDigit, val);
      }

      else
      {
        _Bool tmp_if_expr$1;
        if(!((262144u & mctx.mode) == 0u))
          tmp_if_expr$1 = tttctx->lastVal + mctx.incr > mctx.randomHigh ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$1 = (_Bool)0;
        if(tmp_if_expr$1)
        {
          printf("ldclt[%d]: %s: Hit top incremental value %d > %d\n", mctx.pid, (const void *)tttctx->thrdId, tttctx->lastVal + mctx.incr, mctx.randomHigh);
          return -1;
        }

        else
        {
          tttctx->lastVal=incr_and_wrap(tttctx->lastVal, mctx.randomLow, mctx.randomHigh, mctx.incr);
          sprintf(tttctx->buf2, "%0*d", (mctx.mod2 & (unsigned int)0x00000800) != 0u ? 0 : mctx.randomNbDigit, tttctx->lastVal);
        }
      }
      strncpy(&tttctx->bufFilter[(signed long int)tttctx->startRandom], tttctx->buf2, (unsigned long int)mctx.randomNbDigit);
      if(!((2048u & mctx.mod2) == 0u) && !(mctx.randomTail == ((char *)NULL)))
        strcat(tttctx->bufFilter, mctx.randomTail);

      if(!((2u & mctx.mode) == 0u))
        printf("ldclt[%d]: %s: incremental mode:filter=\"%s\"\n", mctx.pid, (const void *)tttctx->thrdId, tttctx->bufFilter);

    }

  }
  return 0;
}

// buildVersatileAttribute
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 991
char * buildVersatileAttribute(struct thread_context *tttctx, struct vers_object *object, struct vers_attribute *attrib)
{
  struct vers_field *field;
  signed int num;
  signed long int return_value_lrand48$3;
  if(attrib->buf == ((char *)NULL))
    return attrib->field->cst;

  else
  {
    attrib->buf[(signed long int)0] = (char)0;
    field = attrib->field;
    for( ; !(field == ((struct vers_field *)NULL)); field = field->next)
      switch(field->how)
      {
        case 0:
        {
          strcat(attrib->buf, field->cst);
          break;
        }
        case 1:
        {
          if(!((512u & mctx.mode) == 0u))
          {
            num=incrementCommonCounterObject(tttctx, field->commonField);
            if(!(num >= 0))
              return (char *)(void *)0;

          }

          else
          {
            if(!(field->high >= field->cnt))
              field->cnt = field->low;

            num = field->cnt;
            field->cnt = field->cnt + 1;
          }
          strcat(attrib->buf, field->dlf->str[(signed long int)num]);
          if(!(field->var == -1))
            strcpy(object->var[(signed long int)field->var], field->dlf->str[(signed long int)num]);

          break;
        }
        case 2:
        {
          if(!((512u & mctx.mode) == 0u))
          {
            num=incrementCommonCounterObject(tttctx, field->commonField);
            if(!(num >= 0))
              return (char *)(void *)0;

          }

          else
          {
            if(!(field->high >= field->cnt))
            {
              printf("ldclt[%d]: %s: Hit top incrementeal value\n", mctx.pid, (const void *)tttctx->thrdId);
              return (char *)(void *)0;
            }

            num = field->cnt;
            field->cnt = field->cnt + 1;
          }
          strcat(attrib->buf, field->dlf->str[(signed long int)num]);
          if(!(field->var == -1))
            strcpy(object->var[(signed long int)field->var], tttctx->buf2);

          break;
        }
        case 3:
        {
          if(!((512u & mctx.mode) == 0u))
          {
            num=incrementCommonCounterObject(tttctx, field->commonField);
            if(!(num >= 0))
              return (char *)(void *)0;

          }

          else
          {
            if(!(field->high >= field->cnt))
              field->cnt = field->low;

            num = field->cnt;
            field->cnt = field->cnt + 1;
          }
          signed int tmp_if_expr$1;
          if(!((2048u & mctx.mod2) == 0u))
            tmp_if_expr$1 = 0;

          else
            tmp_if_expr$1 = field->nb;
          sprintf(tttctx->buf2, "%0*d", tmp_if_expr$1, num);
          strcat(attrib->buf, tttctx->buf2);
          if(!(field->var == -1))
            strcpy(object->var[(signed long int)field->var], tttctx->buf2);

          break;
        }
        case 4:
        {
          if(!((512u & mctx.mode) == 0u))
          {
            num=incrementCommonCounterObject(tttctx, field->commonField);
            if(!(num >= 0))
              return (char *)(void *)0;

          }

          else
          {
            if(!(field->high >= field->cnt))
            {
              printf("ldclt[%d]: %s: Hit top incrementeal value\n", mctx.pid, (const void *)tttctx->thrdId);
              return (char *)(void *)0;
            }

            num = field->cnt;
            field->cnt = field->cnt + 1;
          }
          signed int tmp_if_expr$2;
          if(!((2048u & mctx.mod2) == 0u))
            tmp_if_expr$2 = 0;

          else
            tmp_if_expr$2 = field->nb;
          sprintf(tttctx->buf2, "%0*d", tmp_if_expr$2, num);
          strcat(attrib->buf, tttctx->buf2);
          if(!(field->var == -1))
            strcpy(object->var[(signed long int)field->var], tttctx->buf2);

          break;
        }
        case 5:
        {
          return_value_lrand48$3=lrand48();
          num = (signed int)(return_value_lrand48$3 % (signed long int)field->dlf->strNb);
          strcat(attrib->buf, field->dlf->str[(signed long int)num]);
          if(!(field->var == -1))
            strcpy(object->var[(signed long int)field->var], field->dlf->str[(signed long int)num]);

          break;
        }
        case 6:
        {
          signed int tmp_if_expr$4;
          if(!((2048u & mctx.mod2) == 0u))
            tmp_if_expr$4 = 0;

          else
            tmp_if_expr$4 = field->nb;
          rnd(tttctx->buf2, field->low, field->high, tmp_if_expr$4);
          strcat(attrib->buf, tttctx->buf2);
          if(!(field->var == -1))
            strcpy(object->var[(signed long int)field->var], tttctx->buf2);

          break;
        }
        case 7:
        {
          randomString(tttctx, field->nb);
          strcat(attrib->buf, tttctx->buf2);
          if(!(field->var == -1))
            strcpy(object->var[(signed long int)field->var], tttctx->buf2);

          break;
        }
        case 8:
        {
          if(object->var[(signed long int)field->var] == ((char *)NULL))
          {
            printf("ldclt[%d]: %s: Error : unset variable %c in %s\n", mctx.pid, (const void *)tttctx->thrdId, 65 + field->var, attrib->src);
            return (char *)(void *)0;
          }

          strcat(attrib->buf, object->var[(signed long int)field->var]);
          break;
        }
        default:
        {
          field = (struct vers_field *)(void *)0;
          field->how = 22;
        }
      }
    return attrib->buf;
  }
}

// buildVersatileObject
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 1562
signed int buildVersatileObject(struct thread_context *tttctx, struct vers_object *object, struct ldapmod **attrs)
{
  signed int nbAttribs;
  struct ldapmod attribute;
  signed int i;
  char *newValue;
  attrs[(signed long int)0] = (struct ldapmod *)(void *)0;
  nbAttribs = 0;
  i = 0;
  for( ; !((signed int)tttctx->bufFilter[(signed long int)i] == 61); i = i + 1)
    tttctx->buf2[(signed long int)i] = tttctx->bufFilter[(signed long int)i];
  tttctx->buf2[(signed long int)i] = (char)0;
  strcpy(tttctx->bufObject1, tttctx->buf2);
  attribute.mod_op = 0x0000;
  attribute.mod_type = tttctx->bufObject1;
  attribute.mod_vals.modv_strvals=strList1(&tttctx->bufFilter[(signed long int)(i + 1)]);
  signed int tmp_post$1 = nbAttribs;
  nbAttribs = nbAttribs + 1;
  signed int return_value_addAttrib$2;
  return_value_addAttrib$2=addAttrib(attrs, tmp_post$1, &attribute);
  if(!(return_value_addAttrib$2 >= 0))
    return -1;

  else
  {
    i = 0;
    for( ; !(i >= object->attribsNb); i = i + 1)
    {
      attribute.mod_op = 0x0000;
      attribute.mod_type = object->attribs[(signed long int)i].name;
      newValue=buildVersatileAttribute(tttctx, object, &object->attribs[(signed long int)i]);
      if(newValue == ((char *)NULL))
        return -1;

      attribute.mod_vals.modv_strvals=strList1(newValue);
      signed int tmp_post$3 = nbAttribs;
      nbAttribs = nbAttribs + 1;
      signed int return_value_addAttrib$4;
      return_value_addAttrib$4=addAttrib(attrs, tmp_post$3, &attribute);
      if(!(return_value_addAttrib$4 >= 0))
        return -1;

    }
    return 0;
  }
}

// connectToLDAP
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 473
extern struct ldap * connectToLDAP(struct thread_context *tttctx, const char *bufBindDN, const char *bufPasswd, unsigned int mode, unsigned int mod2)
{
  struct ldap *ld = (struct ldap *)(void *)0;
  struct berval cred = { .bv_len=(unsigned long int)0, .bv_val=(char *)(void *)0 };
  signed int v2v3 = 3;
  const char *connectToLDAP$$1$$passwd = (const char *)(void *)0;
  char *ldapurl = (char *)(void *)0;
  signed int thrdNum = 0;
  signed int ret = -1;
  signed int binded = 0;
  struct SSLVersionRangeStr range;
  if(!(tttctx == ((struct thread_context *)NULL)))
    thrdNum = tttctx->thrdNum;

  ldapurl=PR_smprintf("ldap%s://%s:%d/", (mode & (unsigned int)0x00000020) != 0u ? "s" : "", mctx.hostname, mctx.port);
  enum anonymous$13 return_value_PR_CallOnce$1;
  return_value_PR_CallOnce$1=PR_CallOnce(&ol_init_callOnce, internal_ol_init_init);
  signed int return_value_referralSetup$12;
  signed int return_value_buildNewBindDN$19;
  if(!((signed int)return_value_PR_CallOnce$1 == PR_SUCCESS))
    printf("Could not perform internal ol_init init\n");

  else
  {
    PR_Lock(ol_init_lock);
    ret=ldap_initialize(&ld, ldapurl);
    if(!(ret == 0))
    {
      PR_Unlock(ol_init_lock);
      signed int *return_value___errno_location$2;
      return_value___errno_location$2=__errno_location();
      char *return_value_my_ldap_err2string$3;
      return_value_my_ldap_err2string$3=my_ldap_err2string(ret);
      printf("ldclt[%d]: T%03d: Cannot ldap_initialize (%s), errno=%d ldaperror=%d:%s\n", mctx.pid, thrdNum, ldapurl, *return_value___errno_location$2, ret, return_value_my_ldap_err2string$3);
      fflush(stdout);
      goto done;
    }

    PR_Unlock(ol_init_lock);
    PR_smprintf_free(ldapurl);
    ldapurl = (char *)(void *)0;
    if(!((32u & mode) == 0u))
    {
      signed int optval = 0;
      signed int ssl_strength = 0;
      char *certdir;
      certdir=ldclt_dirname(mctx.certfile);
      ret=ldap_set_option(ld, 0x6006, (const void *)&ssl_strength);
      if(!(ret == 0))
      {
        signed int *return_value___errno_location$4;
        return_value___errno_location$4=__errno_location();
        char *return_value_my_ldap_err2string$5;
        return_value_my_ldap_err2string$5=my_ldap_err2string(ret);
        printf("ldclt[%d]: T%03d: Cannot ldap_set_option(ld, LDAP_OPT_X_TLS_REQUIRE_CERT), errno=%d ldaperror=%d:%s\n", mctx.pid, thrdNum, *return_value___errno_location$4, ret, return_value_my_ldap_err2string$5);
        fflush(stdout);
        free((void *)certdir);
        goto done;
      }

      ret=ldap_set_option(ld, 0x6003, (const void *)certdir);
      if(!(ret == 0))
      {
        signed int *return_value___errno_location$6;
        return_value___errno_location$6=__errno_location();
        char *return_value_my_ldap_err2string$7;
        return_value_my_ldap_err2string$7=my_ldap_err2string(ret);
        printf("ldclt[%d]: T%03d: Cannot ldap_set_option(ld, LDAP_OPT_X_CACERTDIR, %s), errno=%d ldaperror=%d:%s\n", mctx.pid, thrdNum, certdir, *return_value___errno_location$6, ret, return_value_my_ldap_err2string$7);
        fflush(stdout);
        free((void *)certdir);
        goto done;
      }

      enum _SECStatus return_value_NSS_Initialize$8;
      return_value_NSS_Initialize$8=NSS_Initialize(certdir, "", "", "secmod.db", (unsigned int)0x1);
      ret = (signed int)return_value_NSS_Initialize$8;
      if(!(ret == SECSuccess))
      {
        signed int return_value_PR_GetError$9;
        return_value_PR_GetError$9=PR_GetError();
        printf("ldclt[%d]: T%03d: Cannot NSS_Initialize(%s) %d\n", mctx.pid, thrdNum, certdir, return_value_PR_GetError$9);
        fflush(stdout);
        goto done;
      }

      SSL_VersionRangeGetSupported((enum anonymous$14)ssl_variant_stream, &enabledNSSVersions);
      range.min = enabledNSSVersions.min;
      range.max = enabledNSSVersions.max;
      SSL_VersionRangeSetDefault((enum anonymous$14)ssl_variant_stream, &range);
      if(!((64u & mode) == 0u))
      {
        ret=ldclt_clientauth(tttctx, ld, certdir, mctx.cltcertname, mctx.keydbpin);
        if(!(ret == 0))
        {
          free((void *)certdir);
          goto done;
        }

      }

      ret=ldap_set_option(ld, 0x600f, (const void *)&optval);
      if(!(ret == 0))
      {
        signed int *return_value___errno_location$10;
        return_value___errno_location$10=__errno_location();
        char *return_value_my_ldap_err2string$11;
        return_value_my_ldap_err2string$11=my_ldap_err2string(ret);
        printf("ldclt[%d]: T%03d: Cannot ldap_set_option(ld, LDAP_OPT_X_TLS_NEWCTX), errno=%d ldaperror=%d:%s\n", mctx.pid, thrdNum, *return_value___errno_location$10, ret, return_value_my_ldap_err2string$11);
        fflush(stdout);
        free((void *)certdir);
        goto done;
      }

      free((void *)certdir);
    }

    if(!((64u & mode) == 0u))
      connectToLDAP$$1$$passwd = (const char *)(void *)0;

    else
    {
      connectToLDAP$$1$$passwd = bufPasswd != ((const char *)NULL) ? bufPasswd : mctx.passwd;
      if(!(connectToLDAP$$1$$passwd == ((const char *)NULL)))
      {
        cred.bv_val = (char *)connectToLDAP$$1$$passwd;
        cred.bv_len=strlen(connectToLDAP$$1$$passwd);
      }

    }
    if(!((1048576u & mode) == 0u))
      v2v3 = 2;

    else
      v2v3 = 3;
    ret=ldap_set_option(ld, 0x0011, (const void *)&v2v3);
    if(!(ret >= 0))
    {
      printf("ldclt[%d]: T%03d: Cannot ldap_set_option(LDAP_OPT_PROTOCOL_VERSION)\n", mctx.pid, thrdNum);
      fflush(stdout);
      ret = -1;
    }

    else
    {
      if(!(tttctx == ((struct thread_context *)NULL)))
      {
        return_value_referralSetup$12=referralSetup(tttctx);
        if(!(return_value_referralSetup$12 >= 0))
        {
          ret = -1;
          goto done;
        }

      }

      if((16u & mod2) == 0u && (64u & mod2) == 0u && mctx.bindDN == ((char *)NULL) && bufBindDN == ((const char *)NULL))
      {
        if(!(tttctx == ((struct thread_context *)NULL)))
          tttctx->binded = 1;

        ret = 0;
      }

      else
      {
        if(!(tttctx == ((struct thread_context *)NULL)))
          binded = tttctx->binded;

        if(!((64u & mode) == 0u) && (binded == 0 || !((1073741824u & mode) == 0u)))
        {
          if(!((2u & mode) == 0u))
            printf("ldclt[%d]: T%03d: Before ldap_sasl_bind_s\n", mctx.pid, thrdNum);

          ret=ldap_sasl_bind_s(ld, "", "EXTERNAL", (struct berval *)(void *)0, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0, (struct berval **)(void *)0);
          if(!((2u & mode) == 0u))
            printf("ldclt[%d]: T%03d: After ldap_sasl_bind_s\n", mctx.pid, thrdNum);

          if(ret == 0x00)
          {
            if(!(tttctx == ((struct thread_context *)NULL)))
              tttctx->binded = 1;

          }

          else
          {
            if(!(tttctx == ((struct thread_context *)NULL)))
              tttctx->binded = 0;

            signed int return_value_ignoreError$16;
            return_value_ignoreError$16=ignoreError(ret);
            if(!(return_value_ignoreError$16 == 0))
            {
              if((8u & mode) == 0u)
              {
                char *return_value_my_ldap_err2string$13;
                return_value_my_ldap_err2string$13=my_ldap_err2string(ret);
                printf("ldclt[%d]: T%03d: Cannot ldap_sasl_bind_s, error=%d (%s)\n", mctx.pid, thrdNum, ret, return_value_my_ldap_err2string$13);
                fflush(stdout);
              }

              signed int return_value_addErrorStat$14;
              return_value_addErrorStat$14=addErrorStat(ret);
              if(!(return_value_addErrorStat$14 >= 0))
                ret = -1;

              else
                ret = 0;
              goto done;
            }

            else
            {
              char *return_value_my_ldap_err2string$15;
              return_value_my_ldap_err2string$15=my_ldap_err2string(ret);
              printf("ldclt[%d]: T%03d: Cannot ldap_sasl_bind_s, error=%d (%s)\n", mctx.pid, thrdNum, ret, return_value_my_ldap_err2string$15);
              fflush(stdout);
              if(!(tttctx == ((struct thread_context *)NULL)))
                tttctx->exitStatus = 4;

              addErrorStat(ret);
              ret = -1;
              goto done;
            }
          }
        }

        else
          if(!((64u & mod2) == 0u) && (binded == 0 || !((1073741824u & mode) == 0u)))
          {
            void *defaults;
            char *my_saslauthid = (char *)(void *)0;
            if(mctx.sasl_mech == ((char *)NULL))
            {
              fprintf(stderr, "Please specify the SASL mechanism name when using SASL options\n");
              ret = -1;
              goto done;
            }

            if(!(mctx.sasl_secprops == ((char *)NULL)))
            {
              ret=ldap_set_option(ld, 0x6106, (void *)mctx.sasl_secprops);
              if(!(ret == 0x00))
              {
                fprintf(stderr, "Unable to set LDAP_OPT_X_SASL_SECPROPS: %s\n", mctx.sasl_secprops);
                goto done;
              }

            }

            if(!((128u & mod2) == 0u) && !(tttctx == ((struct thread_context *)NULL)))
            {
              rnd(tttctx->buf2, mctx.sasl_authid_low, mctx.sasl_authid_high, (mctx.mod2 & (unsigned int)0x00000800) != 0u ? 0 : mctx.sasl_authid_nbdigit);
              strncpy(&tttctx->bufSaslAuthid[(signed long int)tttctx->startSaslAuthid], tttctx->buf2, (unsigned long int)mctx.sasl_authid_nbdigit);
              my_saslauthid = tttctx->bufSaslAuthid;
              if(!((2u & mode) == 0u))
                printf("ldclt[%d]: T%03d: Sasl Authid=\"%s\"\n", mctx.pid, thrdNum, tttctx->bufSaslAuthid);

            }

            else
              my_saslauthid = mctx.sasl_authid;
            defaults=ldaptool_set_sasl_defaults(ld, mctx.sasl_flags, mctx.sasl_mech, my_saslauthid, mctx.sasl_username, mctx.passwd, mctx.sasl_realm);
            if(defaults == NULL)
            {
              perror("malloc");
              exit(-10);
            }

            ret=ldap_sasl_interactive_bind_s(ld, mctx.bindDN, mctx.sasl_mech, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0, mctx.sasl_flags, ldaptool_sasl_interact, defaults);
            if(!(ret == 0x00))
            {
              if(!(tttctx == ((struct thread_context *)NULL)))
                tttctx->binded = 0;

              if((8u & mode) == 0u)
              {
                char *return_value_my_ldap_err2string$17;
                return_value_my_ldap_err2string$17=my_ldap_err2string(ret);
                fprintf(stderr, "Error: could not bind: %d:%s\n", ret, return_value_my_ldap_err2string$17);
              }

              signed int return_value_addErrorStat$18;
              return_value_addErrorStat$18=addErrorStat(ret);
              if(!(return_value_addErrorStat$18 >= 0))
                goto done;

            }

            else
              if(!(tttctx == ((struct thread_context *)NULL)))
                tttctx->binded = 1;

            ldaptool_free_defaults(defaults);
          }

          else
            if((binded == 0 || !((1073741824u & mode) == 0u)) && (!((16u & mod2) == 0u) || !(mctx.bindDN == ((char *)NULL))))
            {
              struct berval *servercredp = (struct berval *)(void *)0;
              const char *binddn = (const char *)(void *)0;
              const char *passwd = (const char *)(void *)0;
              if(!(tttctx == ((struct thread_context *)NULL)))
              {
                return_value_buildNewBindDN$19=buildNewBindDN(tttctx);
                if(!(return_value_buildNewBindDN$19 >= 0))
                {
                  ret = -1;
                  goto done;
                }

              }

              _Bool tmp_if_expr$20;
              if(!(tttctx == ((struct thread_context *)NULL)))
                tmp_if_expr$20 = tttctx->bufPasswd != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr$20 = (_Bool)0;
              if(tmp_if_expr$20)
              {
                binddn = tttctx->bufBindDN;
                passwd = tttctx->bufPasswd;
              }

              else
                if(!(bufPasswd == ((const char *)NULL)))
                {
                  binddn = bufBindDN;
                  passwd = bufPasswd;
                }

                else
                  if(!(mctx.passwd == ((char *)NULL)))
                  {
                    binddn = mctx.bindDN;
                    passwd = mctx.passwd;
                  }

              if(!(passwd == ((const char *)NULL)))
              {
                cred.bv_val = (char *)passwd;
                cred.bv_len=strlen(passwd);
              }

              if(!((2u & mode) == 0u))
                printf("ldclt[%d]: T%03d: Before ldap_simple_bind_s (%s, %s)\n", mctx.pid, thrdNum, binddn, passwd != ((const char *)NULL) ? passwd : "NO PASSWORD PROVIDED");

              ret=ldap_sasl_bind_s(ld, binddn, (char *)0, &cred, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0, &servercredp);
              ber_bvfree(servercredp);
              if(!((2u & mode) == 0u))
                printf("ldclt[%d]: T%03d: After ldap_simple_bind_s (%s, %s)\n", mctx.pid, thrdNum, binddn, passwd != ((const char *)NULL) ? passwd : "NO PASSWORD PROVIDED");

              if(ret == 0x00)
              {
                if(!(tttctx == ((struct thread_context *)NULL)))
                  tttctx->binded = 1;

              }

              else
              {
                if(!(tttctx == ((struct thread_context *)NULL)))
                  tttctx->binded = 0;

                signed int return_value_ignoreError$24;
                return_value_ignoreError$24=ignoreError(ret);
                if(!(return_value_ignoreError$24 == 0))
                {
                  if((8u & mode) == 0u)
                  {
                    char *return_value_my_ldap_err2string$21;
                    return_value_my_ldap_err2string$21=my_ldap_err2string(ret);
                    printf("ldclt[%d]: T%03d: Cannot ldap_simple_bind_s (%s, %s), error=%d (%s)\n", mctx.pid, thrdNum, binddn, passwd != ((const char *)NULL) ? passwd : "NO PASSWORD PROVIDED", ret, return_value_my_ldap_err2string$21);
                    fflush(stdout);
                  }

                  signed int return_value_addErrorStat$22;
                  return_value_addErrorStat$22=addErrorStat(ret);
                  if(!(return_value_addErrorStat$22 >= 0))
                    ret = -1;

                  else
                    ret = 0;
                  goto done;
                }

                else
                {
                  char *return_value_my_ldap_err2string$23;
                  return_value_my_ldap_err2string$23=my_ldap_err2string(ret);
                  printf("ldclt[%d]: T%03d: Cannot ldap_simple_bind_s (%s, %s), error=%d (%s)\n", mctx.pid, thrdNum, binddn, passwd != ((const char *)NULL) ? passwd : "NO PASSWORD PROVIDED", ret, return_value_my_ldap_err2string$23);
                  fflush(stdout);
                  if(!(tttctx == ((struct thread_context *)NULL)))
                    tttctx->exitStatus = 4;

                  addErrorStat(ret);
                  ret = -1;
                  goto done;
                }
              }
            }

      }
    }
  }

done:
  ;
  if(!(ret == 0))
  {
    ldap_unbind_ext(ld, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0);
    ld = (struct ldap *)(void *)0;
  }

  if(!(ldapurl == ((char *)NULL)))
  {
    PR_smprintf_free(ldapurl);
    ldapurl = (char *)(void *)0;
  }

  return ld;
}

// connectToServer
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 888
extern signed int connectToServer(struct thread_context *tttctx)
{
  signed int ret;
  signed int fd;
  if(!((1073741824u & mctx.mode) == 0u))
  {
    if(!(tttctx->ldapCtx == ((struct ldap *)NULL)))
    {
      if(!((268435456u & mctx.mode) == 0u))
      {
        ret=ldap_get_option(tttctx->ldapCtx, 0x0001, (void *)&fd);
        if(!(ret >= 0))
        {
          printf("ldclt[%d]: T%03d: Cannot ldap_get_option(LDAP_OPT_DESC)\n", mctx.pid, tttctx->thrdNum);
          fflush(stdout);
          return -1;
        }

        signed int return_value_close$4;
        return_value_close$4=close((signed int)fd);
        if(!(return_value_close$4 >= 0))
        {
          perror("ldctx");
          signed int *return_value___errno_location$1;
          return_value___errno_location$1=__errno_location();
          signed int *return_value___errno_location$2;
          return_value___errno_location$2=__errno_location();
          char *return_value_strerror$3;
          return_value_strerror$3=strerror(*return_value___errno_location$2);
          printf("ldclt[%d]: T%03d: cannot close(fd=%d), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, (signed int)fd, *return_value___errno_location$1, return_value_strerror$3);
          return -1;
        }

      }

      ret=ldap_unbind_ext(tttctx->ldapCtx, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0);
      if(!(ret == 0x00))
      {
        char *return_value_strerror$5;
        return_value_strerror$5=strerror(ret);
        fprintf(stderr, "ldclt[%d]: T%03d: cannot ldap_unbind(), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, ret, return_value_strerror$5);
        fflush(stderr);
        addErrorStat(ret);
        return -1;
      }

      tttctx->ldapCtx = (struct ldap *)(void *)0;
    }

  }

  if(tttctx->ldapCtx == ((struct ldap *)NULL))
  {
    tttctx->ldapCtx=connectToLDAP(tttctx, tttctx->bufBindDN, tttctx->bufPasswd, mctx.mode, mctx.mod2);
    if(!(tttctx->ldapCtx == ((struct ldap *)NULL)))
      goto __CPROVER_DUMP_L6;

    return -1;
  }

  else
  {

  __CPROVER_DUMP_L6:
    ;
    return 0;
  }
}

// copyVersAttribute
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 131
signed int copyVersAttribute(struct vers_attribute *srcattr, struct vers_attribute *dstattr)
{
  struct vers_field *src;
  struct vers_field *dst;
  dstattr->name = srcattr->name;
  dstattr->src = srcattr->src;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct vers_field) /*96ul*/ );
  dstattr->field = (struct vers_field *)return_value_malloc$1;
  src = srcattr->field;
  dst = dstattr->field;
  while(!(src == ((struct vers_field *)NULL)))
  {
    memcpy((void *)dst, (const void *)src, sizeof(struct vers_field) /*96ul*/ );
    dst->commonField = src;
    src = src->next;
    if(!(src == ((struct vers_field *)NULL)))
    {
      void *return_value_malloc$2;
      return_value_malloc$2=malloc(sizeof(struct vers_field) /*96ul*/ );
      dst->next = (struct vers_field *)return_value_malloc$2;
      dst = dst->next;
    }

  }
  void *return_value_malloc$3;
  if(srcattr->buf == ((char *)NULL))
    dstattr->buf = (char *)(void *)0;

  else
  {
    return_value_malloc$3=malloc((unsigned long int)512);
    dstattr->buf = (char *)return_value_malloc$3;
  }
  return 0;
}

// copyVersObject
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 182
struct vers_object * copyVersObject(struct vers_object *srcobj)
{
  struct vers_object *newobj;
  signed int i;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct vers_object) /*1368ul*/ );
  newobj = (struct vers_object *)return_value_malloc$1;
  newobj->attribsNb = srcobj->attribsNb;
  newobj->fname = srcobj->fname;
  i = 0;
  void *return_value_malloc$2;
  for( ; !(65 + i >= 72); i = i + 1)
    if(srcobj->var[(signed long int)i] == ((char *)NULL))
      newobj->var[(signed long int)i] = (char *)(void *)0;

    else
    {
      return_value_malloc$2=malloc((unsigned long int)512);
      newobj->var[(signed long int)i] = (char *)return_value_malloc$2;
    }
  if(!(srcobj->rdn == ((struct vers_attribute *)NULL)))
  {
    newobj->rdnName=strdup(srcobj->rdnName);
    void *return_value_malloc$3;
    return_value_malloc$3=malloc(sizeof(struct vers_attribute) /*32ul*/ );
    newobj->rdn = (struct vers_attribute *)return_value_malloc$3;
    signed int return_value_copyVersAttribute$4;
    return_value_copyVersAttribute$4=copyVersAttribute(srcobj->rdn, newobj->rdn);
    if(!(return_value_copyVersAttribute$4 >= 0))
      return (struct vers_object *)(void *)0;

  }

  i = 0;
  signed int return_value_copyVersAttribute$5;
  for( ; !(i >= srcobj->attribsNb); i = i + 1)
  {
    return_value_copyVersAttribute$5=copyVersAttribute(&srcobj->attribs[(signed long int)i], &newobj->attribs[(signed long int)i]);
    if(!(return_value_copyVersAttribute$5 >= 0))
      return (struct vers_object *)(void *)0;

  }
  return newobj;
}

// createMissingNodes
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 1784
signed int createMissingNodes(struct thread_context *tttctx, char *newDN, struct ldap *cnx)
{
  signed int i;
  signed int j;
  signed int ret;
  char *nodeDN;
  char attrName[256l];
  char attrVal[256l];
  char *objClass;
  signed int nbAttribs;
  struct ldapmod attribute;
  struct ldapmod *attrs[4l];
  nodeDN = newDN;
  for( ; !((signed int)*nodeDN == 0); nodeDN = nodeDN + 1l)
  {
    if((signed int)*nodeDN == 44)
      break;

    if((signed int)*nodeDN == 92)
    {
      nodeDN = nodeDN + 1l;
      if((signed int)*nodeDN == 0)
        break;

    }

  }
  if((signed int)*nodeDN == 44)
    nodeDN = nodeDN + 1l;

  for( ; (signed int)*nodeDN == 32; nodeDN = nodeDN + 1l)
    if((signed int)*nodeDN == 0)
      break;

  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$2;
  signed int return_value_strcmp$4;
  signed int return_value_strcmp$3;
  if((signed int)*nodeDN == 0)
  {
    printf("ldclt[%d]: T%03d: Reach top of DN for %s\n", mctx.pid, tttctx->thrdNum, newDN);
    fflush(stdout);
    return -1;
  }

  else
  {
    if(!((2u & mctx.mode) == 0u))
      printf("ldclt[%d]: T%03d: nodeDN: %s\n", mctx.pid, tttctx->thrdNum, nodeDN);

    i = 0;
    do
    {
      if(!((signed int)nodeDN[(signed long int)i] == 61))
        tmp_if_expr$1 = (signed int)nodeDN[(signed long int)i] != 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$1 = (_Bool)0;
      if(!tmp_if_expr$1)
        break;

      i = i + 1;
    }
    while((_Bool)1);
    if((signed int)nodeDN[(signed long int)i] == 0)
    {
      printf("ldclt[%d]: T%03d: Cannot extract naming attribute from %s\n", mctx.pid, tttctx->thrdNum, nodeDN);
      fflush(stdout);
      return -1;
    }

    else
    {
      strncpy(attrName, nodeDN, (unsigned long int)i);
      attrName[(signed long int)i] = (char)0;
      j = i;
      do
      {
        if(!((signed int)nodeDN[(signed long int)j] == 44))
          tmp_if_expr$2 = (signed int)nodeDN[(signed long int)j] != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$2 = (_Bool)0;
        if(!tmp_if_expr$2)
          break;

        j = j + 1;
      }
      while((_Bool)1);
      if((signed int)nodeDN[(signed long int)j] == 0)
      {
        printf("ldclt[%d]: T%03d: Cannot extract naming attribute from %s\n", mctx.pid, tttctx->thrdNum, nodeDN);
        fflush(stdout);
        return -1;
      }

      else
      {
        strncpy(attrVal, nodeDN + (signed long int)i + (signed long int)1, (unsigned long int)((j - i) - 1));
        attrVal[(signed long int)((j - i) - 1)] = (char)0;
        signed int return_value_strcmp$5;
        return_value_strcmp$5=strcmp(attrName, "o");
        if(return_value_strcmp$5 == 0)
          objClass = "organization";

        else
        {
          return_value_strcmp$4=strcmp(attrName, "ou");
          if(return_value_strcmp$4 == 0)
            objClass = "organizationalUnit";

          else
          {
            return_value_strcmp$3=strcmp(attrName, "cn");
            if(return_value_strcmp$3 == 0)
              objClass = "organizationalRole";

            else
            {
              printf("ldclt[%d]: T%03d: Don't know how to create entry when rdn is \"%s=%s\"\n", mctx.pid, tttctx->thrdNum, (const void *)attrName, (const void *)attrVal);
              fflush(stdout);
              return -1;
            }
          }
        }
        if(cnx == ((struct ldap *)NULL))
        {
          unsigned int mode = mctx.mode;
          unsigned int mod2 = mctx.mod2;
          mod2 = mod2 & (unsigned int)~0x00000010;
          mod2 = mod2 & (unsigned int)~0x00000040;
          mod2 = mod2 & (unsigned int)~0x00000080;
          mode = mode | (unsigned int)0x40000000;
          if(!((2u & mode) == 0u))
            printf("ldclt[%d]: T%03d: must connect to the server.\n", mctx.pid, tttctx->thrdNum);

          tttctx->ldapCtx=connectToLDAP(tttctx, tttctx->bufBindDN, tttctx->bufPasswd, mode, mod2);
          if(tttctx->ldapCtx == ((struct ldap *)NULL))
            return -1;

          cnx = tttctx->ldapCtx;
        }

        attrs[(signed long int)0] = (struct ldapmod *)(void *)0;
        nbAttribs = 0;
        attribute.mod_op = 0x0000;
        attribute.mod_type = "objectclass";
        attribute.mod_vals.modv_strvals=strList1(objClass);
        signed int tmp_post$6 = nbAttribs;
        nbAttribs = nbAttribs + 1;
        signed int return_value_addAttrib$7;
        return_value_addAttrib$7=addAttrib(attrs, tmp_post$6, &attribute);
        if(!(return_value_addAttrib$7 >= 0))
          return -1;

        else
        {
          attribute.mod_op = 0x0000;
          attribute.mod_type = attrName;
          attribute.mod_vals.modv_strvals=strList1(attrVal);
          signed int tmp_post$8 = nbAttribs;
          nbAttribs = nbAttribs + 1;
          signed int return_value_addAttrib$9;
          return_value_addAttrib$9=addAttrib(attrs, tmp_post$8, &attribute);
          if(!(return_value_addAttrib$9 >= 0))
            return -1;

          else
          {
            ret=ldap_add_ext_s(cnx, nodeDN, attrs, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0);
            if(!(ret == 0x00) && !(ret == 0x44))
            {
              if(ret == 0x20)
              {
                printf("ldclt[%d]: T%03d: Parent of %s doesn't exist, looping\n", mctx.pid, tttctx->thrdNum, nodeDN);
                signed int return_value_createMissingNodes$11;
                return_value_createMissingNodes$11=createMissingNodes(tttctx, nodeDN, cnx);
                if(!(return_value_createMissingNodes$11 >= 0))
                  return -1;

                else
                {
                  cnx = (struct ldap *)(void *)0;
                  signed int return_value_createMissingNodes$10;
                  return_value_createMissingNodes$10=createMissingNodes(tttctx, newDN, cnx);
                  return return_value_createMissingNodes$10;
                }
              }

              char *return_value_my_ldap_err2string$12;
              return_value_my_ldap_err2string$12=my_ldap_err2string(ret);
              printf("ldclt[%d]: T%03d: Cannot add (%s), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, nodeDN, ret, return_value_my_ldap_err2string$12);
              fflush(stdout);
              addErrorStat(ret);
              return -1;
            }

            if(!(ret == 0x44))
            {
              signed int return_value_incrementNbOpers$13;
              return_value_incrementNbOpers$13=incrementNbOpers(tttctx);
              if(!(return_value_incrementNbOpers$13 >= 0))
                return -1;

            }

            else
              if(!((8192u & mctx.mode) == 0u))
              {
                signed int return_value_incrementNbOpers$14;
                return_value_incrementNbOpers$14=incrementNbOpers(tttctx);
                if(!(return_value_incrementNbOpers$14 >= 0))
                  return -1;

              }

            signed int return_value_freeAttrib$15;
            return_value_freeAttrib$15=freeAttrib(attrs);
            if(!(return_value_freeAttrib$15 >= 0))
              return -1;

            else
              return 0;
          }
        }
      }
    }
  }
}

// dataListFile
// file ../ldap/servers/slapd/tools/ldclt/data.c line 377
extern struct data_list_file * dataListFile(char *fname)
{
  struct data_list_file *dlf = mctx.dlf;
  signed int return_value_strcmp$1;
  for( ; !(dlf == ((struct data_list_file *)NULL)); dlf = dlf->next)
  {
    return_value_strcmp$1=strcmp(fname, dlf->fname);
    if(return_value_strcmp$1 == 0)
      return dlf;

  }
  void *return_value_malloc$2;
  return_value_malloc$2=malloc(sizeof(struct data_list_file) /*32ul*/ );
  dlf = (struct data_list_file *)return_value_malloc$2;
  dlf->next = mctx.dlf;
  mctx.dlf = dlf;
  dlf->fname=strdup(fname);
  signed int return_value_loadDataListFile$3;
  return_value_loadDataListFile$3=loadDataListFile(dlf);
  if(!(return_value_loadDataListFile$3 >= 0))
    return (struct data_list_file *)(void *)0;

  else
    return dlf;
}

// decodeExecParams
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 1944
signed int decodeExecParams(char *optarg)
{
  char *suboptions;
  char *subvalue;
  suboptions = optarg;
  signed int return_value_addAttrToList$2;
  signed int return_value_addAttrToList$3;
  signed int return_value_decodeRdnParam$4;
  while(!((signed int)*suboptions == 0))
  {
    signed int return_value_getsubopt$1;
    return_value_getsubopt$1=getsubopt(&suboptions, execParams, &subvalue);
    switch(return_value_getsubopt$1)
    {
      case 5:
      {
        mctx.mode = mctx.mode | (unsigned int)0x04000000;
        break;
      }
      case 43:
      {
        mctx.mod2 = mctx.mod2 | (unsigned int)0x00000008;
        break;
      }
      case 12:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00080000;
        break;
      }
      case 20:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00004000;
        if(subvalue == ((char *)NULL))
        {
          fprintf(stderr, "Error: missing arg attreplace\n");
          return -1;
        }

        mctx.attrpl=strdup(subvalue);
        break;
      }
      case 51:
      {
        mctx.mod2 = mctx.mod2 | (unsigned int)0x00000400;
        if(subvalue == ((char *)NULL))
        {
          fprintf(stderr, "Error: missing arg attreplacefile\n");
          return -1;
        }

        mctx.attrpl=strdup(subvalue);
        break;
      }
      case 38:
      {
        return_value_addAttrToList$2=addAttrToList(subvalue);
        return return_value_addAttrToList$2;
      }
      case 27:
      {
        if(subvalue == ((char *)NULL))
        {
          fprintf(stderr, "Error: missing arg attrsonly\n");
          return -1;
        }

        mctx.attrsonly=atoi(subvalue);
        break;
      }
      case 1:
      {
        mctx.mode = mctx.mode | (unsigned int)0x40000000;
        break;
      }
      case 45:
      {
        mctx.mod2 = mctx.mod2 | (unsigned int)0x00000020;
        break;
      }
      case 3:
      {
        mctx.mode = mctx.mode | (unsigned int)0x10000000;
        break;
      }
      case 21:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00000040;
        if(subvalue == ((char *)NULL))
        {
          fprintf(stderr, "Error: missing arg for cltcertname\n");
          return -1;
        }

        mctx.cltcertname=strdup(subvalue);
        break;
      }
      case 36:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00000200;
        break;
      }
      case 24:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00002000;
        break;
      }
      case 7:
      {
        mctx.mode = mctx.mode | (unsigned int)0x01000000;
        break;
      }
      case 37:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00000100;
        break;
      }
      case 0:
      {
        mctx.mode = mctx.mode | 0x80000000;
        break;
      }
      case 18:
      {
        if(subvalue == ((char *)NULL))
        {
          fprintf(stderr, "Error: missing arg for imagesdir\n");
          return -1;
        }

        mctx.imagesDir=strdup(subvalue);
        break;
      }
      case 4:
      {
        mctx.mode = mctx.mode | (unsigned int)0x08000000;
        if(!(subvalue == ((char *)NULL)))
          mctx.incr=atoi(subvalue);

        break;
      }
      case 22:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00000040;
        if(subvalue == ((char *)NULL))
        {
          fprintf(stderr, "Error: missing arg for keydbfile\n");
          return -1;
        }

        mctx.keydbfile=strdup(subvalue);
        break;
      }
      case 23:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00000040;
        if(subvalue == ((char *)NULL))
        {
          fprintf(stderr, "Error: missing arg for keydbpin\n");
          return -1;
        }

        mctx.keydbpin=strdup(subvalue);
        break;
      }
      case 11:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00100000;
        break;
      }
      case 26:
      {
        mctx.globStatsCnt = -1;
        break;
      }
      case 13:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00040000;
        break;
      }
      case 55:
      {
        mctx.mod2 = mctx.mod2 | (unsigned int)0x00000800;
        break;
      }
      case 40:
      {
        mctx.mod2 = mctx.mod2 | (unsigned int)0x00000001;
        if(subvalue == ((char *)NULL))
        {
          fprintf(stderr, "Error: missing object filename\n");
          return -1;
        }

        mctx.object.fname=strdup(subvalue);
        break;
      }
      case 8:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00800000;
        break;
      }
      case 41:
      {
        mctx.mod2 = mctx.mod2 | (unsigned int)0x00000002;
        if(subvalue == ((char *)NULL))
        {
          fprintf(stderr, "Error: missing genldif filename\n");
          return -1;
        }

        mctx.genldifName=strdup(subvalue);
        break;
      }
      case 15:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00010000;
        break;
      }
      case 6:
      {
        mctx.mode = mctx.mode | (unsigned int)0x02000000;
        break;
      }
      case 2:
      {
        mctx.mode = mctx.mode | (unsigned int)0x20000000;
        break;
      }
      case 10:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00200000;
        break;
      }
      case 17:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00200000;
        if(subvalue == ((char *)NULL))
        {
          fprintf(stderr, "Error: missing arg randombasehigh\n");
          return -1;
        }

        mctx.baseDNHigh=atoi(subvalue);
        break;
      }
      case 16:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00200000;
        if(subvalue == ((char *)NULL))
        {
          fprintf(stderr, "Error: missing arg randombaselow\n");
          return -1;
        }

        mctx.baseDNLow=atoi(subvalue);
        break;
      }
      case 39:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00000080;
        return_value_addAttrToList$3=addAttrToList(subvalue);
        return return_value_addAttrToList$3;
      }
      case 28:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00000800;
        break;
      }
      case 44:
      {
        mctx.mod2 = mctx.mod2 | (unsigned int)0x00000010;
        if(subvalue == ((char *)NULL))
        {
          fprintf(stderr, "Error: missing file name for randombinddnfromfile\n");
          return -1;
        }

        mctx.rndBindFname=strdup(subvalue);
        break;
      }
      case 29:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00000800;
        if(subvalue == ((char *)NULL))
        {
          fprintf(stderr, "Error: missing arg randombindhigh\n");
          return -1;
        }

        mctx.bindDNHigh=atoi(subvalue);
        break;
      }
      case 30:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00000800;
        if(subvalue == ((char *)NULL))
        {
          fprintf(stderr, "Error: missing arg randombindlow\n");
          return -1;
        }

        mctx.bindDNLow=atoi(subvalue);
        break;
      }
      case 46:
      {
        mctx.mod2 = mctx.mod2 | (unsigned int)0x00000080;
        break;
      }
      case 47:
      {
        mctx.mod2 = mctx.mod2 | (unsigned int)0x00000080;
        if(subvalue == ((char *)NULL))
        {
          fprintf(stderr, "Error: missing arg randomauthidhigh\n");
          return -1;
        }

        mctx.sasl_authid_high=atoi(subvalue);
        break;
      }
      case 48:
      {
        mctx.mod2 = mctx.mod2 | (unsigned int)0x00000080;
        if(subvalue == ((char *)NULL))
        {
          fprintf(stderr, "Error: missing arg randomauthidlow\n");
          return -1;
        }

        mctx.sasl_authid_low=atoi(subvalue);
        break;
      }
      case 42:
      {
        return_value_decodeRdnParam$4=decodeRdnParam(subvalue);
        if(!(return_value_decodeRdnParam$4 >= 0))
          return -1;

        mctx.mod2 = mctx.mod2 | (unsigned int)0x00000004;
        break;
      }
      case 35:
      {
        mctx.referral=decodeReferralParams(subvalue);
        if(!(mctx.referral >= 0))
          return -1;

        break;
      }
      case 14:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00020000;
        break;
      }
      case 31:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00000400;
        break;
      }
      case 32:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00000400;
        if(subvalue == ((char *)NULL))
        {
          fprintf(stderr, "Error: missing arg scalab01_cnxduration\n");
          return -1;
        }

        s1ctx.cnxduration=atoi(subvalue);
        break;
      }
      case 34:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00000400;
        if(subvalue == ((char *)NULL))
        {
          fprintf(stderr, "Error: missing arg scalab01_maxcnxnb\n");
          return -1;
        }

        s1ctx.maxcnxnb=atoi(subvalue);
        break;
      }
      case 33:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00000400;
        if(subvalue == ((char *)NULL))
        {
          fprintf(stderr, "Error: missing arg scalab01_wait\n");
          return -1;
        }

        s1ctx.wait=atoi(subvalue);
        break;
      }
      case 19:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00008000;
        break;
      }
      case 9:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00400000;
        break;
      }
      case 25:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00001000;
        break;
      }
      case 49:
      {
        mctx.mod2 = mctx.mod2 | (unsigned int)0x00000100;
        break;
      }
      case 50:
      {
        mctx.mod2 = mctx.mod2 | (unsigned int)0x00000200;
        if(!(subvalue == ((char *)NULL)))
          mctx.attrpl=strdup(subvalue);

        else
          mctx.attrpl = (char *)(void *)0;
        break;
      }
      case 52:
      {
        mctx.srch_nentries=atoi(subvalue);
        break;
      }
      case 53:
      {
        mctx.sampling=atoi(subvalue);
        break;
      }
      case 54:
      {
        if(!(subvalue == ((char *)NULL)))
          mctx.tsfmt=strdup(subvalue);

        else
          mctx.tsfmt=strdup("%s");
        break;
      }
      default:
      {
        fprintf(stderr, "Error: illegal option -e %s\n", subvalue);
        return -1;
      }
    }
  }
  if(!((64u & mctx.mode) == 0u) && !((1048576u & mctx.mode) == 0u))
  {
    fprintf(stderr, "Error: SSL client authentication is supported in LDAPv3 only");
    return -1;
  }

  else
    return 0;
}

// decodeHow
// file ../ldap/servers/slapd/tools/ldclt/parser.c line 71
signed int decodeHow(char *how)
{
  if(!((2u & mctx.mode) == 0u))
    printf("decodeHow: how=\"%s\"\n", how);

  signed int return_value_strcmp$1;
  return_value_strcmp$1=strcmp(how, "INCRFROMFILE");
  if(return_value_strcmp$1 == 0)
    return 1;

  else
  {
    signed int return_value_strcmp$2;
    return_value_strcmp$2=strcmp(how, "INCRFROMFILENOLOOP");
    if(return_value_strcmp$2 == 0)
      return 2;

    else
    {
      signed int return_value_strcmp$3;
      return_value_strcmp$3=strcmp(how, "INCRN");
      if(return_value_strcmp$3 == 0)
        return 3;

      else
      {
        signed int return_value_strcmp$4;
        return_value_strcmp$4=strcmp(how, "INCRNNOLOOP");
        if(return_value_strcmp$4 == 0)
          return 4;

        else
        {
          signed int return_value_strcmp$5;
          return_value_strcmp$5=strcmp(how, "RNDFROMFILE");
          if(return_value_strcmp$5 == 0)
            return 5;

          else
          {
            signed int return_value_strcmp$6;
            return_value_strcmp$6=strcmp(how, "RNDN");
            if(return_value_strcmp$6 == 0)
              return 6;

            else
            {
              signed int return_value_strcmp$7;
              return_value_strcmp$7=strcmp(how, "RNDS");
              if(return_value_strcmp$7 == 0)
                return 7;

              else
                return -1;
            }
          }
        }
      }
    }
  }
}

// decodeRdnParam
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 1777
signed int decodeRdnParam(char *value)
{
  signed int i;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct vers_attribute) /*32ul*/ );
  mctx.object.rdn = (struct vers_attribute *)return_value_malloc$1;
  mctx.object.rdn->buf = (char *)(void *)0;
  i = 0;
  _Bool tmp_if_expr$2;
  do
  {
    if(!((signed int)value[(signed long int)i] == 0))
      tmp_if_expr$2 = (signed int)value[(signed long int)i] != 58 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$2 = (_Bool)0;
    if(!tmp_if_expr$2)
      break;

    i = i + 1;
  }
  while((_Bool)1);
  if((signed int)value[(signed long int)i] == 0)
  {
    fprintf(stderr, "Error: missing rdn attribute name\n");
    return -1;
  }

  else
  {
    void *return_value_malloc$3;
    return_value_malloc$3=malloc((unsigned long int)(i + 1));
    mctx.object.rdnName = (char *)return_value_malloc$3;
    strncpy(mctx.object.rdnName, value, (unsigned long int)i);
    mctx.object.rdnName[(signed long int)i] = (char)0;
    signed int return_value_parseAttribValue$4;
    return_value_parseAttribValue$4=parseAttribValue("-e rdn=", &mctx.object, value + (signed long int)i + (signed long int)1, mctx.object.rdn);
    if(!(return_value_parseAttribValue$4 >= 0))
      return -1;

    else
      return 0;
  }
}

// decodeReferralParams
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 1697
signed int decodeReferralParams(char *val)
{
  if(val == ((char *)NULL))
  {
    fprintf(stderr, "Error: missing arg referral\n");
    return -1;
  }

  else
  {
    signed int return_value_strcmp$1;
    return_value_strcmp$1=strcmp(val, "on");
    if(return_value_strcmp$1 == 0)
      return 1;

    else
    {
      signed int return_value_strcmp$2;
      return_value_strcmp$2=strcmp(val, "off");
      if(return_value_strcmp$2 == 0)
        return 0;

      else
      {
        signed int return_value_strcmp$3;
        return_value_strcmp$3=strcmp(val, "rebind");
        if(return_value_strcmp$3 == 0)
          return 2;

        else
        {
          fprintf(stderr, "Error: illegal arg %s for referral\n", val);
          return -1;
        }
      }
    }
  }
}

// decodeScopeParams
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 1563
signed int decodeScopeParams(char *optarg)
{
  char *suboptions;
  char *subvalue;
  suboptions = optarg;
  while(!((signed int)*suboptions == 0))
  {
    signed int return_value_getsubopt$1;
    return_value_getsubopt$1=getsubopt(&suboptions, scopeParams, &subvalue);
    switch(return_value_getsubopt$1)
    {
      case 2:
      {
        mctx.scope = (signed int)0x0000;
        break;
      }
      case 0:
      {
        mctx.scope = (signed int)0x0001;
        break;
      }
      case 1:
      {
        mctx.scope = (signed int)0x0002;
        break;
      }
      default:
      {
        fprintf(stderr, "Error: illegal option -s %s\n", subvalue);
        return -1;
      }
    }
  }
  return 0;
}

// dnFromMessage
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 97
extern char * dnFromMessage(struct thread_context *tttctx, struct ldapmsg *res)
{
  signed int ret;
  signed int errcodep;
  if(!(tttctx->matcheddnp == ((char *)NULL)))
    ldap_memfree((void *)tttctx->matcheddnp);

  ret=ldap_parse_result(tttctx->ldapCtx, res, &errcodep, &tttctx->matcheddnp, (char **)(void *)0, (char ***)(void *)0, (struct ldapcontrol ***)(void *)0, 0);
  if(!(ret == 0x00) && !(ret == -15))
  {
    if(ret == -14 || ret == -10 || ret == -9 || ret == -4)
      goto __CPROVER_DUMP_L3;

  }

  else
    return tttctx->matcheddnp;

__CPROVER_DUMP_L3:
  ;
  tttctx->matcheddnp = (char *)(void *)0;
  char *return_value_my_ldap_err2string$1;
  return_value_my_ldap_err2string$1=my_ldap_err2string(ret);
  printf("ldclt[%d]: T%03d: Cannot ldap_parse_result(), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, ret, return_value_my_ldap_err2string$1);
  fflush(stdout);
  static char *notFound = "*** not found by ldclt ***";
  return notFound;
}

// doAbandon
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 3759
extern signed int doAbandon(struct thread_context *tttctx)
{
  signed int ret;
  struct ldapmsg *res;
  char **attrlist;
  struct timeval mytimeout;
  signed int msgid;
  signed int return_value_connectToServer$1;
  return_value_connectToServer$1=connectToServer(tttctx);
  signed int return_value_ignoreError$3;
  signed int return_value_ignoreError$7;
  signed int return_value_ignoreError$11;
  if(!(return_value_connectToServer$1 >= 0))
    return -1;

  else
    if(tttctx->binded == 0)
      return 0;

    else
    {
      signed int return_value_buildRandomRdnOrFilter$2;
      return_value_buildRandomRdnOrFilter$2=buildRandomRdnOrFilter(tttctx);
      if(!(return_value_buildRandomRdnOrFilter$2 >= 0))
        return -1;

      else
      {
        attrlist = (char **)(void *)0;
        mctx.asyncMin = 1;
        mctx.asyncMax = 2;
        if(tttctx->pendingNb >= mctx.asyncMin)
        {
          mytimeout.tv_sec = (signed long int)1;
          mytimeout.tv_usec = (signed long int)0;
          ret=ldap_result(tttctx->ldapCtx, -1, 0x00, &mytimeout, &res);
          if(!(ret >= 0))
          {
            _Bool tmp_if_expr$4;
            if(!((8u & mctx.mode) == 0u))
            {
              return_value_ignoreError$3=ignoreError(ret);
              tmp_if_expr$4 = return_value_ignoreError$3 != 0 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr$4 = (_Bool)0;
            if(!tmp_if_expr$4)
              printErrorFromLdap(tttctx, res, ret, "Cannot ldap_result()");

            signed int return_value_addErrorStat$5;
            return_value_addErrorStat$5=addErrorStat(ret);
            if(!(return_value_addErrorStat$5 >= 0))
              return -1;

          }

          else
          {
            tttctx->pendingNb = tttctx->pendingNb - 1;
            ret=ldap_msgfree(res);
            if(!(ret >= 0))
            {
              _Bool tmp_if_expr$8;
              if(!((8u & mctx.mode) == 0u))
              {
                return_value_ignoreError$7=ignoreError(ret);
                tmp_if_expr$8 = return_value_ignoreError$7 != 0 ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr$8 = (_Bool)0;
              if(!tmp_if_expr$8)
              {
                char *return_value_my_ldap_err2string$6;
                return_value_my_ldap_err2string$6=my_ldap_err2string(ret);
                printf("ldclt[%d]: T%03d: Cannot ldap_msgfree(), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, ret, return_value_my_ldap_err2string$6);
                fflush(stdout);
              }

              signed int return_value_addErrorStat$9;
              return_value_addErrorStat$9=addErrorStat(ret);
              if(!(return_value_addErrorStat$9 >= 0))
                return -1;

            }

          }
        }

        if(!(mctx.asyncMax >= tttctx->pendingNb))
        {
          if(!((1u & mctx.mode) == 0u))
          {
            if(tttctx->asyncHit == 1)
            {
              if((16u & mctx.mode) == 0u)
              {
                tttctx->asyncHit = 1;
                printf("ldclt[%d]: T%03d: Max pending request hit.\n", mctx.pid, tttctx->thrdNum);
                fflush(stdout);
              }

            }

          }

        }

        else
        {
          if(!((1u & mctx.mode) == 0u))
          {
            if(tttctx->asyncHit == 1)
            {
              if((16u & mctx.mode) == 0u)
              {
                tttctx->asyncHit = 0;
                printf("ldclt[%d]: T%03d: Restart sending.\n", mctx.pid, tttctx->thrdNum);
                fflush(stdout);
              }

            }

          }

          msgid = -1;
          mytimeout.tv_usec = (signed long int)-1;
          mytimeout.tv_sec = mytimeout.tv_usec;
          ret=ldap_search_ext(tttctx->ldapCtx, tttctx->bufBaseDN, mctx.scope, tttctx->bufFilter, attrlist, mctx.attrsonly, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0, &mytimeout, -1, &msgid);
          if(!((2u & mctx.mode) == 0u))
            printf("ldclt[%d]: T%03d: ldap_search(%s)=>%d\n", mctx.pid, tttctx->thrdNum, tttctx->bufFilter, ret);

          if(!(ret == 0))
          {
            signed int return_value_ldap_get_option$14;
            return_value_ldap_get_option$14=ldap_get_option(tttctx->ldapCtx, 0x0031, (void *)&ret);
            if(!(return_value_ldap_get_option$14 >= 0))
            {
              printf("ldclt[%d]: T%03d: Cannot ldap_get_option(LDAP_OPT_ERROR_NUMBER)\n", mctx.pid, tttctx->thrdNum);
              fflush(stdout);
              return -1;
            }

            else
            {
              _Bool tmp_if_expr$12;
              if(!((8u & mctx.mode) == 0u))
              {
                return_value_ignoreError$11=ignoreError(ret);
                tmp_if_expr$12 = return_value_ignoreError$11 != 0 ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr$12 = (_Bool)0;
              if(!tmp_if_expr$12)
              {
                char *return_value_my_ldap_err2string$10;
                return_value_my_ldap_err2string$10=my_ldap_err2string(ret);
                printf("ldclt[%d]: T%03d: Cannot ldap_search(), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, ret, return_value_my_ldap_err2string$10);
                fflush(stdout);
              }

              signed int return_value_addErrorStat$13;
              return_value_addErrorStat$13=addErrorStat(ret);
              if(!(return_value_addErrorStat$13 >= 0))
                return -1;

            }
          }

          else
          {
            if(msgid >= 0)
              ldap_abandon_ext(tttctx->ldapCtx, msgid, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0);

            signed int return_value_incrementNbOpers$15;
            return_value_incrementNbOpers$15=incrementNbOpers(tttctx);
            if(!(return_value_incrementNbOpers$15 >= 0))
              return -1;

            tttctx->pendingNb = tttctx->pendingNb + 1;
            if(!((2u & mctx.mode) == 0u))
              printf("ldclt[%d]: T%03d: ldap_abandon(%d)\n", mctx.pid, tttctx->thrdNum, msgid);

          }
        }
        if(!((2u & mctx.mode) == 0u))
          printf("ldclt[%d]: T%03d: pendingNb=%d\n", mctx.pid, tttctx->thrdNum, tttctx->pendingNb);

        return 0;
      }
    }
}

// doAddEntry
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 2651
extern signed int doAddEntry(struct thread_context *tttctx)
{
  char newDn[1024l];
  struct ldapmod *attrs[40l];
  signed int ret;
  signed int retry;
  signed int return_value_connectToServer$1;
  return_value_connectToServer$1=connectToServer(tttctx);
  signed int return_value_ignoreError$4;
  signed int return_value_ignoreError$14;
  signed int return_value_createMissingNodes$17;
  if(!(return_value_connectToServer$1 >= 0))
    return -1;

  else
    if(tttctx->binded == 0)
      return 0;

    else
    {
      if((4u & mctx.mode) == 0u)
      {
        signed int return_value_buildNewEntry$2;
        return_value_buildNewEntry$2=buildNewEntry(tttctx, newDn, attrs);
        if(!(return_value_buildNewEntry$2 >= 0))
          return -1;

        retry = 1;
        while(!(retry == 0))
        {
          ret=ldap_add_ext_s(tttctx->ldapCtx, newDn, attrs, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0);
          if(!(ret == 0x00))
          {
            _Bool tmp_if_expr$5;
            if(!((8u & mctx.mode) == 0u))
            {
              return_value_ignoreError$4=ignoreError(ret);
              tmp_if_expr$5 = return_value_ignoreError$4 != 0 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr$5 = (_Bool)0;
            if(!tmp_if_expr$5)
            {
              char *return_value_my_ldap_err2string$3;
              return_value_my_ldap_err2string$3=my_ldap_err2string(ret);
              printf("ldclt[%d]: T%03d: Cannot add (%s), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, (const void *)newDn, ret, return_value_my_ldap_err2string$3);
              fflush(stdout);
            }

            signed int return_value_addErrorStat$6;
            return_value_addErrorStat$6=addErrorStat(ret);
            if(!(return_value_addErrorStat$6 >= 0))
              return -1;

            if(!(ret == 0x20))
            {
              if(ret == 0x44 && !((8192u & mctx.mode) == 0u))
              {
                signed int return_value_incrementNbOpers$7;
                return_value_incrementNbOpers$7=incrementNbOpers(tttctx);
                if(!(return_value_incrementNbOpers$7 >= 0))
                  return -1;

              }

              retry = 0;
            }

            else
            {
              signed int return_value_createMissingNodes$8;
              return_value_createMissingNodes$8=createMissingNodes(tttctx, newDn, (struct ldap *)(void *)0);
              if(!(return_value_createMissingNodes$8 >= 0))
              {
                retry = 0;
                printf("ldclt[%d]: T%03d: Cannot create the intermediate nodes for %s\n", mctx.pid, tttctx->thrdNum, (const void *)newDn);
                fflush(stdout);
                return -1;
              }

              if((8u & mctx.mode) == 0u && !((1u & mctx.mode) == 0u))
              {
                printf("ldclt[%d]: T%03d: Intermediate nodes created for %s\n", mctx.pid, tttctx->thrdNum, (const void *)newDn);
                fflush(stdout);
              }

            }
          }

          else
          {
            retry = 0;
            signed int return_value_incrementNbOpers$9;
            return_value_incrementNbOpers$9=incrementNbOpers(tttctx);
            if(!(return_value_incrementNbOpers$9 >= 0))
              return -1;

          }
        }
        signed int return_value_freeAttrib$10;
        return_value_freeAttrib$10=freeAttrib(attrs);
        if(!(return_value_freeAttrib$10 >= 0))
          return -1;

        return 0;
      }

      signed int return_value_getPending$11;
      return_value_getPending$11=getPending(tttctx, &mctx.timeval);
      if(!(return_value_getPending$11 >= 0))
        return -1;

      else
      {
        if(!(mctx.asyncMax >= tttctx->pendingNb))
        {
          if(!((1u & mctx.mode) == 0u))
          {
            if(tttctx->asyncHit == 1)
            {
              if((16u & mctx.mode) == 0u)
              {
                tttctx->asyncHit = 1;
                printf("ldclt[%d]: T%03d: Max pending request hit.\n", mctx.pid, tttctx->thrdNum);
                fflush(stdout);
              }

            }

          }

        }

        else
        {
          signed int msgid = 0;
          if(!((1u & mctx.mode) == 0u))
          {
            if(tttctx->asyncHit == 1)
            {
              if((16u & mctx.mode) == 0u)
              {
                tttctx->asyncHit = 0;
                printf("ldclt[%d]: T%03d: Restart sending.\n", mctx.pid, tttctx->thrdNum);
                fflush(stdout);
              }

            }

          }

          signed int return_value_buildNewEntry$12;
          return_value_buildNewEntry$12=buildNewEntry(tttctx, newDn, attrs);
          if(!(return_value_buildNewEntry$12 >= 0))
            return -1;

          ret=ldap_add_ext(tttctx->ldapCtx, newDn, attrs, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0, &msgid);
          if(!(ret >= 0))
          {
            signed int return_value_ldap_get_option$19;
            return_value_ldap_get_option$19=ldap_get_option(tttctx->ldapCtx, 0x0031, (void *)&ret);
            if(!(return_value_ldap_get_option$19 >= 0))
            {
              printf("ldclt[%d]: T%03d: Cannot ldap_get_option(LDAP_OPT_ERROR_NUMBER)\n", mctx.pid, tttctx->thrdNum);
              fflush(stdout);
              return -1;
            }

            else
            {
              _Bool tmp_if_expr$15;
              if(!((8u & mctx.mode) == 0u))
              {
                return_value_ignoreError$14=ignoreError(ret);
                tmp_if_expr$15 = return_value_ignoreError$14 != 0 ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr$15 = (_Bool)0;
              if(!tmp_if_expr$15)
              {
                char *return_value_my_ldap_err2string$13;
                return_value_my_ldap_err2string$13=my_ldap_err2string(ret);
                printf("ldclt[%d]: T%03d: Cannot add(), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, ret, return_value_my_ldap_err2string$13);
                fflush(stdout);
              }

              signed int return_value_addErrorStat$16;
              return_value_addErrorStat$16=addErrorStat(ret);
              if(!(return_value_addErrorStat$16 >= 0))
                return -1;

              if(ret == 0x20)
              {
                return_value_createMissingNodes$17=createMissingNodes(tttctx, newDn, (struct ldap *)(void *)0);
                if(!(return_value_createMissingNodes$17 >= 0))
                  return -1;

              }

              if(ret == 0x44 && !((8192u & mctx.mode) == 0u))
              {
                signed int return_value_incrementNbOpers$18;
                return_value_incrementNbOpers$18=incrementNbOpers(tttctx);
                if(!(return_value_incrementNbOpers$18 >= 0))
                  return -1;

              }

            }
          }

          else
          {
            signed int return_value_msgIdAdd$20;
            return_value_msgIdAdd$20=msgIdAdd(tttctx, msgid, newDn, newDn, attrs);
            if(!(return_value_msgIdAdd$20 >= 0))
              return -1;

            signed int return_value_incrementNbOpers$21;
            return_value_incrementNbOpers$21=incrementNbOpers(tttctx);
            if(!(return_value_incrementNbOpers$21 >= 0))
              return -1;

            tttctx->pendingNb = tttctx->pendingNb + 1;
          }
        }
        if(!((2u & mctx.mode) == 0u))
          printf("ldclt[%d]: T%03d: pendingNb=%d\n", mctx.pid, tttctx->thrdNum, tttctx->pendingNb);

        return 0;
      }
    }
}

// doAttrFileReplace
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 3029
extern signed int doAttrFileReplace(struct thread_context *tttctx)
{
  char newDn[1024l];
  struct ldapmod *attrs[40l];
  signed int ret;
  signed int msgid;
  signed int return_value_connectToServer$1;
  return_value_connectToServer$1=connectToServer(tttctx);
  signed int return_value_ignoreError$4;
  signed int return_value_ignoreError$12;
  if(!(return_value_connectToServer$1 >= 0))
    return -1;

  else
    if(tttctx->binded == 0)
      return 0;

    else
    {
      if((4u & mctx.mode) == 0u)
      {
        signed int return_value_buildNewModAttribFile$2;
        return_value_buildNewModAttribFile$2=buildNewModAttribFile(tttctx, newDn, attrs);
        if(!(return_value_buildNewModAttribFile$2 >= 0))
          return -1;

        ret=ldap_modify_ext_s(tttctx->ldapCtx, newDn, attrs, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0);
        if(!(ret == 0x00))
        {
          _Bool tmp_if_expr$5;
          if(!((8u & mctx.mode) == 0u))
          {
            return_value_ignoreError$4=ignoreError(ret);
            tmp_if_expr$5 = return_value_ignoreError$4 != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$5 = (_Bool)0;
          if(!tmp_if_expr$5)
          {
            char *return_value_my_ldap_err2string$3;
            return_value_my_ldap_err2string$3=my_ldap_err2string(ret);
            printf("ldclt[%d]: T%03d: AttriFileReplace Error Cannot modify (%s), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, (const void *)newDn, ret, return_value_my_ldap_err2string$3);
            fflush(stdout);
          }

          signed int return_value_addErrorStat$6;
          return_value_addErrorStat$6=addErrorStat(ret);
          if(!(return_value_addErrorStat$6 >= 0))
            return -1;

        }

        else
        {
          printf("ldclt[%d]: T%03d: AttriFileReplace modify (%s) success ,\n", mctx.pid, tttctx->thrdNum, (const void *)newDn);
          signed int return_value_incrementNbOpers$7;
          return_value_incrementNbOpers$7=incrementNbOpers(tttctx);
          if(!(return_value_incrementNbOpers$7 >= 0))
            return -1;

        }
        signed int return_value_freeAttrib$8;
        return_value_freeAttrib$8=freeAttrib(attrs);
        if(!(return_value_freeAttrib$8 >= 0))
          return -1;

        return 0;
      }

      signed int return_value_getPending$9;
      return_value_getPending$9=getPending(tttctx, &mctx.timeval);
      if(!(return_value_getPending$9 >= 0))
        return -1;

      else
      {
        if(!(mctx.asyncMax >= tttctx->pendingNb))
        {
          if(!((1u & mctx.mode) == 0u))
          {
            if(tttctx->asyncHit == 1)
            {
              if((16u & mctx.mode) == 0u)
              {
                tttctx->asyncHit = 1;
                printf("ldclt[%d]: T%03d: Max pending request hit.\n", mctx.pid, tttctx->thrdNum);
                fflush(stdout);
              }

            }

          }

        }

        else
        {
          if(!((1u & mctx.mode) == 0u))
          {
            if(tttctx->asyncHit == 1)
            {
              if((16u & mctx.mode) == 0u)
              {
                tttctx->asyncHit = 0;
                printf("ldclt[%d]: T%03d: Restart sending.\n", mctx.pid, tttctx->thrdNum);
                fflush(stdout);
              }

            }

          }

          signed int return_value_buildNewModAttrib$10;
          return_value_buildNewModAttrib$10=buildNewModAttrib(tttctx, newDn, attrs);
          if(!(return_value_buildNewModAttrib$10 >= 0))
            return -1;

          ret=ldap_modify_ext(tttctx->ldapCtx, newDn, attrs, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0, &msgid);
          if(!(ret == 0x00))
          {
            _Bool tmp_if_expr$13;
            if(!((8u & mctx.mode) == 0u))
            {
              return_value_ignoreError$12=ignoreError(ret);
              tmp_if_expr$13 = return_value_ignoreError$12 != 0 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr$13 = (_Bool)0;
            if(!tmp_if_expr$13)
            {
              char *return_value_my_ldap_err2string$11;
              return_value_my_ldap_err2string$11=my_ldap_err2string(ret);
              printf("ldclt[%d]: T%03d: Cannot modify(%s), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, (const void *)newDn, ret, return_value_my_ldap_err2string$11);
              fflush(stdout);
            }

            signed int return_value_addErrorStat$14;
            return_value_addErrorStat$14=addErrorStat(ret);
            if(!(return_value_addErrorStat$14 >= 0))
              return -1;

          }

          else
          {
            signed int return_value_msgIdAdd$15;
            return_value_msgIdAdd$15=msgIdAdd(tttctx, msgid, newDn, newDn, attrs);
            if(!(return_value_msgIdAdd$15 >= 0))
              return -1;

            signed int return_value_incrementNbOpers$16;
            return_value_incrementNbOpers$16=incrementNbOpers(tttctx);
            if(!(return_value_incrementNbOpers$16 >= 0))
              return -1;

            tttctx->pendingNb = tttctx->pendingNb + 1;
          }
        }
        if(!((2u & mctx.mode) == 0u))
          printf("ldclt[%d]: T%03d: pendingNb=%d\n", mctx.pid, tttctx->thrdNum, tttctx->pendingNb);

        return 0;
      }
    }
}

// doAttrReplace
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 2874
extern signed int doAttrReplace(struct thread_context *tttctx)
{
  char newDn[1024l];
  struct ldapmod *attrs[40l];
  signed int ret;
  signed int msgid;
  signed int return_value_connectToServer$1;
  return_value_connectToServer$1=connectToServer(tttctx);
  signed int return_value_ignoreError$4;
  signed int return_value_ignoreError$12;
  if(!(return_value_connectToServer$1 >= 0))
    return -1;

  else
    if(tttctx->binded == 0)
      return 0;

    else
    {
      if((4u & mctx.mode) == 0u)
      {
        signed int return_value_buildNewModAttrib$2;
        return_value_buildNewModAttrib$2=buildNewModAttrib(tttctx, newDn, attrs);
        if(!(return_value_buildNewModAttrib$2 >= 0))
          return -1;

        ret=ldap_modify_ext_s(tttctx->ldapCtx, newDn, attrs, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0);
        if(!(ret == 0x00))
        {
          _Bool tmp_if_expr$5;
          if(!((8u & mctx.mode) == 0u))
          {
            return_value_ignoreError$4=ignoreError(ret);
            tmp_if_expr$5 = return_value_ignoreError$4 != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$5 = (_Bool)0;
          if(!tmp_if_expr$5)
          {
            char *return_value_my_ldap_err2string$3;
            return_value_my_ldap_err2string$3=my_ldap_err2string(ret);
            printf("ldclt[%d]: T%03d: Cannot modify (%s), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, (const void *)newDn, ret, return_value_my_ldap_err2string$3);
            fflush(stdout);
          }

          signed int return_value_addErrorStat$6;
          return_value_addErrorStat$6=addErrorStat(ret);
          if(!(return_value_addErrorStat$6 >= 0))
            return -1;

        }

        else
        {
          signed int return_value_incrementNbOpers$7;
          return_value_incrementNbOpers$7=incrementNbOpers(tttctx);
          if(!(return_value_incrementNbOpers$7 >= 0))
            return -1;

        }
        signed int return_value_freeAttrib$8;
        return_value_freeAttrib$8=freeAttrib(attrs);
        if(!(return_value_freeAttrib$8 >= 0))
          return -1;

        return 0;
      }

      signed int return_value_getPending$9;
      return_value_getPending$9=getPending(tttctx, &mctx.timeval);
      if(!(return_value_getPending$9 >= 0))
        return -1;

      else
      {
        if(!(mctx.asyncMax >= tttctx->pendingNb))
        {
          if(!((1u & mctx.mode) == 0u))
          {
            if(tttctx->asyncHit == 1)
            {
              if((16u & mctx.mode) == 0u)
              {
                tttctx->asyncHit = 1;
                printf("ldclt[%d]: T%03d: Max pending request hit.\n", mctx.pid, tttctx->thrdNum);
                fflush(stdout);
              }

            }

          }

        }

        else
        {
          if(!((1u & mctx.mode) == 0u))
          {
            if(tttctx->asyncHit == 1)
            {
              if((16u & mctx.mode) == 0u)
              {
                tttctx->asyncHit = 0;
                printf("ldclt[%d]: T%03d: Restart sending.\n", mctx.pid, tttctx->thrdNum);
                fflush(stdout);
              }

            }

          }

          signed int return_value_buildNewModAttrib$10;
          return_value_buildNewModAttrib$10=buildNewModAttrib(tttctx, newDn, attrs);
          if(!(return_value_buildNewModAttrib$10 >= 0))
            return -1;

          ret=ldap_modify_ext(tttctx->ldapCtx, newDn, attrs, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0, &msgid);
          if(!(ret == 0x00))
          {
            _Bool tmp_if_expr$13;
            if(!((8u & mctx.mode) == 0u))
            {
              return_value_ignoreError$12=ignoreError(ret);
              tmp_if_expr$13 = return_value_ignoreError$12 != 0 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr$13 = (_Bool)0;
            if(!tmp_if_expr$13)
            {
              char *return_value_my_ldap_err2string$11;
              return_value_my_ldap_err2string$11=my_ldap_err2string(ret);
              printf("ldclt[%d]: T%03d: Cannot modify(%s), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, (const void *)newDn, ret, return_value_my_ldap_err2string$11);
              fflush(stdout);
            }

            signed int return_value_addErrorStat$14;
            return_value_addErrorStat$14=addErrorStat(ret);
            if(!(return_value_addErrorStat$14 >= 0))
              return -1;

          }

          else
          {
            signed int return_value_msgIdAdd$15;
            return_value_msgIdAdd$15=msgIdAdd(tttctx, msgid, newDn, newDn, attrs);
            if(!(return_value_msgIdAdd$15 >= 0))
              return -1;

            signed int return_value_incrementNbOpers$16;
            return_value_incrementNbOpers$16=incrementNbOpers(tttctx);
            if(!(return_value_incrementNbOpers$16 >= 0))
              return -1;

            tttctx->pendingNb = tttctx->pendingNb + 1;
          }
        }
        if(!((2u & mctx.mode) == 0u))
          printf("ldclt[%d]: T%03d: pendingNb=%d\n", mctx.pid, tttctx->thrdNum, tttctx->pendingNb);

        return 0;
      }
    }
}

// doBindOnly
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 3361
extern signed int doBindOnly(struct thread_context *tttctx)
{
  signed int return_value_connectToServer$1;
  return_value_connectToServer$1=connectToServer(tttctx);
  if(!(return_value_connectToServer$1 >= 0))
    return -1;

  else
    if(tttctx->binded == 0)
    {
      if(!((8192u & mctx.mode) == 0u))
        goto __CPROVER_DUMP_L2;

      return 0;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      signed int return_value_incrementNbOpers$2;
      return_value_incrementNbOpers$2=incrementNbOpers(tttctx);
      if(!(return_value_incrementNbOpers$2 >= 0))
        return -1;

      else
        return 0;
    }
}

// doDeleteEntry
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 3185
extern signed int doDeleteEntry(struct thread_context *tttctx)
{
  signed int ret;
  char delDn[1024l];
  signed int return_value_connectToServer$1;
  return_value_connectToServer$1=connectToServer(tttctx);
  signed int return_value_ignoreError$4;
  signed int return_value_ignoreError$12;
  if(!(return_value_connectToServer$1 >= 0))
    return -1;

  else
    if(tttctx->binded == 0)
      return 0;

    else
    {
      if((4u & mctx.mode) == 0u)
      {
        signed int return_value_buildRandomRdnOrFilter$2;
        return_value_buildRandomRdnOrFilter$2=buildRandomRdnOrFilter(tttctx);
        if(!(return_value_buildRandomRdnOrFilter$2 >= 0))
          return -1;

        snprintf(delDn, sizeof(char [1024l]) /*1024ul*/ , "%s,%s", tttctx->bufFilter, tttctx->bufBaseDN);
        delDn[(signed long int)(sizeof(char [1024l]) /*1024ul*/  - (unsigned long int)1)] = (char)0;
        ret=ldap_delete_ext_s(tttctx->ldapCtx, delDn, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0);
        if(!(ret == 0x00))
        {
          _Bool tmp_if_expr$5;
          if(!((8u & mctx.mode) == 0u))
          {
            return_value_ignoreError$4=ignoreError(ret);
            tmp_if_expr$5 = return_value_ignoreError$4 != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$5 = (_Bool)0;
          if(!tmp_if_expr$5)
          {
            char *return_value_my_ldap_err2string$3;
            return_value_my_ldap_err2string$3=my_ldap_err2string(ret);
            printf("ldclt[%d]: T%03d: Cannot ldap_delete (%s), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, (const void *)delDn, ret, return_value_my_ldap_err2string$3);
            fflush(stdout);
          }

          signed int return_value_addErrorStat$6;
          return_value_addErrorStat$6=addErrorStat(ret);
          if(!(return_value_addErrorStat$6 >= 0))
            return -1;

          if(ret == 0x20 && !((8192u & mctx.mode) == 0u))
          {
            signed int return_value_incrementNbOpers$7;
            return_value_incrementNbOpers$7=incrementNbOpers(tttctx);
            if(!(return_value_incrementNbOpers$7 >= 0))
              return -1;

          }

        }

        else
        {
          signed int return_value_incrementNbOpers$8;
          return_value_incrementNbOpers$8=incrementNbOpers(tttctx);
          if(!(return_value_incrementNbOpers$8 >= 0))
            return -1;

        }
        return 0;
      }

      signed int return_value_getPending$9;
      return_value_getPending$9=getPending(tttctx, &mctx.timeval);
      if(!(return_value_getPending$9 >= 0))
        return -1;

      else
      {
        if(!(mctx.asyncMax >= tttctx->pendingNb))
        {
          if(!((1u & mctx.mode) == 0u))
          {
            if(tttctx->asyncHit == 1)
            {
              if((16u & mctx.mode) == 0u)
              {
                tttctx->asyncHit = 1;
                printf("ldclt[%d]: T%03d: Max pending request hit.\n", mctx.pid, tttctx->thrdNum);
                fflush(stdout);
              }

            }

          }

        }

        else
        {
          signed int msgid = 0;
          if(!((1u & mctx.mode) == 0u))
          {
            if(tttctx->asyncHit == 1)
            {
              if((16u & mctx.mode) == 0u)
              {
                tttctx->asyncHit = 0;
                printf("ldclt[%d]: T%03d: Restart sending.\n", mctx.pid, tttctx->thrdNum);
                fflush(stdout);
              }

            }

          }

          signed int return_value_buildRandomRdnOrFilter$10;
          return_value_buildRandomRdnOrFilter$10=buildRandomRdnOrFilter(tttctx);
          if(!(return_value_buildRandomRdnOrFilter$10 >= 0))
            return -1;

          snprintf(delDn, sizeof(char [1024l]) /*1024ul*/ , "%s,%s", tttctx->bufFilter, tttctx->bufBaseDN);
          delDn[(signed long int)(sizeof(char [1024l]) /*1024ul*/  - (unsigned long int)1)] = (char)0;
          ret=ldap_delete_ext(tttctx->ldapCtx, delDn, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0, &msgid);
          if(!(ret >= 0))
          {
            signed int return_value_ldap_get_option$16;
            return_value_ldap_get_option$16=ldap_get_option(tttctx->ldapCtx, 0x0031, (void *)&ret);
            if(!(return_value_ldap_get_option$16 >= 0))
            {
              printf("ldclt[%d]: T%03d: Cannot ldap_get_option(LDAP_OPT_ERROR_NUMBER)\n", mctx.pid, tttctx->thrdNum);
              fflush(stdout);
              return -1;
            }

            else
            {
              _Bool tmp_if_expr$13;
              if(!((8u & mctx.mode) == 0u))
              {
                return_value_ignoreError$12=ignoreError(ret);
                tmp_if_expr$13 = return_value_ignoreError$12 != 0 ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr$13 = (_Bool)0;
              if(!tmp_if_expr$13)
              {
                char *return_value_my_ldap_err2string$11;
                return_value_my_ldap_err2string$11=my_ldap_err2string(ret);
                printf("ldclt[%d]: T%03d: Cannot ldap_delete(), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, ret, return_value_my_ldap_err2string$11);
                fflush(stdout);
              }

              signed int return_value_addErrorStat$14;
              return_value_addErrorStat$14=addErrorStat(ret);
              if(!(return_value_addErrorStat$14 >= 0))
                return -1;

              if(ret == 0x20 && !((8192u & mctx.mode) == 0u))
              {
                signed int return_value_incrementNbOpers$15;
                return_value_incrementNbOpers$15=incrementNbOpers(tttctx);
                if(!(return_value_incrementNbOpers$15 >= 0))
                  return -1;

              }

            }
          }

          else
          {
            signed int return_value_incrementNbOpers$17;
            return_value_incrementNbOpers$17=incrementNbOpers(tttctx);
            if(!(return_value_incrementNbOpers$17 >= 0))
              return -1;

            tttctx->pendingNb = tttctx->pendingNb + 1;
          }
        }
        if(!((2u & mctx.mode) == 0u))
          printf("ldclt[%d]: T%03d: pendingNb=%d\n", mctx.pid, tttctx->thrdNum, tttctx->pendingNb);

        return 0;
      }
    }
}

// doExactSearch
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 3394
extern signed int doExactSearch(struct thread_context *tttctx)
{
  signed int ret;
  struct ldapmsg *res;
  struct ldapmsg *e;
  char **attrlist;
  struct ldapcontrol **ctrlsp = (struct ldapcontrol **)(void *)0;
  struct ldapcontrol *ctrls[2l];
  struct ldapcontrol *dctrl = (struct ldapcontrol *)(void *)0;
  signed int msgtype;
  signed int parse_rc;
  signed int rc;
  char *matcheddn;
  char *errmsg;
  char *dn;
  struct ldapcontrol **resctrls;
  struct ldapcontrol **rcp;
  signed int return_value_connectToServer$1;
  return_value_connectToServer$1=connectToServer(tttctx);
  signed int return_value_ignoreError$3;
  signed int return_value_ignoreError$6;
  _Bool tmp_if_expr$10;
  signed int return_value_ignoreError$17;
  signed int return_value_ignoreError$20;
  signed int return_value_ignoreError$24;
  signed int return_value_ignoreError$28;
  if(!(return_value_connectToServer$1 >= 0))
    return -1;

  else
    if(tttctx->binded == 0)
      return 0;

    else
    {
      signed int return_value_buildRandomRdnOrFilter$2;
      return_value_buildRandomRdnOrFilter$2=buildRandomRdnOrFilter(tttctx);
      if(!(return_value_buildRandomRdnOrFilter$2 >= 0))
        return -1;

      else
      {
        if(mctx.attrlistNb == 0)
          attrlist = (char **)(void *)0;

        else
          if(!((128u & mctx.mode) == 0u))
            attrlist=selectRandomAttrList(tttctx);

          else
            attrlist = mctx.attrlist;
        if(!((512u & mctx.mod2) == 0u))
        {
          char *attrs[2l];
          if(mctx.attRef == ((char *)NULL))
            attrs[(signed long int)0] = "cn";

          else
            attrs[(signed long int)0] = mctx.attRefDef;
          attrs[(signed long int)1] = (char *)(void *)0;
          if(mctx.attRef == ((char *)NULL))
            ret=ldclt_create_deref_control(tttctx->ldapCtx, "secretary", attrs, &dctrl);

          else
            ret=ldclt_create_deref_control(tttctx->ldapCtx, mctx.attRef, attrs, &dctrl);
          if(ret == 0x00)
          {
            ctrls[(signed long int)0] = dctrl;
            ctrls[(signed long int)1] = (struct ldapcontrol *)(void *)0;
            ctrlsp = ctrls;
          }

          else
          {
            _Bool tmp_if_expr$4;
            if(!((8u & mctx.mode) == 0u))
            {
              return_value_ignoreError$3=ignoreError(ret);
              tmp_if_expr$4 = return_value_ignoreError$3 != 0 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr$4 = (_Bool)0;
            if(!tmp_if_expr$4)
              fprintf(stderr, "ldclt[%d]: T%03d: ldclt_create_deref_control() failed, error=%d\n", mctx.pid, tttctx->thrdNum, ret);

            if(!(dctrl == ((struct ldapcontrol *)NULL)))
              ldap_control_free(dctrl);

            signed int return_value_addErrorStat$5;
            return_value_addErrorStat$5=addErrorStat(ret);
            if(!(return_value_addErrorStat$5 >= 0))
              return -1;

          }
        }

        if((4u & mctx.mode) == 0u)
        {
          ret=ldap_search_ext_s(tttctx->ldapCtx, tttctx->bufBaseDN, mctx.scope, tttctx->bufFilter, attrlist, mctx.attrsonly, ctrlsp, (struct ldapcontrol **)(void *)0, (struct timeval *)(void *)0, -1, &res);
          if(!(ret == 0x00))
          {
            _Bool tmp_if_expr$7;
            if(!((8u & mctx.mode) == 0u))
            {
              return_value_ignoreError$6=ignoreError(ret);
              tmp_if_expr$7 = return_value_ignoreError$6 != 0 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr$7 = (_Bool)0;
            if(!tmp_if_expr$7)
              printErrorFromLdap(tttctx, res, ret, "Cannot ldap_search()");

            signed int return_value_addErrorStat$8;
            return_value_addErrorStat$8=addErrorStat(ret);
            if(!(return_value_addErrorStat$8 >= 0))
              goto bail;

            if(ret == 0x20 && !((8192u & mctx.mode) == 0u))
            {
              signed int return_value_incrementNbOpers$9;
              return_value_incrementNbOpers$9=incrementNbOpers(tttctx);
              if(!(return_value_incrementNbOpers$9 >= 0))
                goto bail;

            }

          }

          else
          {
            signed int nentries = 0;
            if(!((1u & mctx.mode) == 0u))
            {
              e=ldap_first_message(tttctx->ldapCtx, res);
              while(!(e == ((struct ldapmsg *)NULL)))
              {
                msgtype=ldap_msgtype(e);
                switch(msgtype)
                {
                  case (signed int)(unsigned long int)0x64U:
                  {
                    nentries = nentries + 1;
                    parse_rc=ldap_get_entry_controls(tttctx->ldapCtx, e, &resctrls);
                    if(!(resctrls == ((struct ldapcontrol **)NULL)))
                    {
                      dn=ldap_get_dn(tttctx->ldapCtx, e);
                      if(!(dn == ((char *)NULL)))
                      {
                        rcp = resctrls;
                        do
                        {
                          if(!(rcp == ((struct ldapcontrol **)NULL)))
                            tmp_if_expr$10 = *rcp != ((struct ldapcontrol *)NULL) ? (_Bool)1 : (_Bool)0;

                          else
                            tmp_if_expr$10 = (_Bool)0;
                          if(!tmp_if_expr$10)
                            break;

                          if(!((2u & mctx.mode) == 0u))
                          {
                            char *tmp_if_expr$11;
                            if(!((*rcp)->ldctl_oid == ((char *)NULL)))
                              tmp_if_expr$11 = (*rcp)->ldctl_oid;

                            else
                              tmp_if_expr$11 = "none";
                            char *tmp_if_expr$12;
                            if(!((*rcp)->ldctl_value.bv_val == ((char *)NULL)))
                              tmp_if_expr$12 = (*rcp)->ldctl_value.bv_val;

                            else
                              tmp_if_expr$12 = "none";
                            printf("dn: [%s] -> deref oid: %s, value: %s\n", dn, tmp_if_expr$11, tmp_if_expr$12);
                          }

                          rcp = rcp + 1l;
                        }
                        while((_Bool)1);
                        ldap_controls_free(resctrls);
                        ldap_memfree((void *)dn);
                      }

                    }

                    break;
                  }
                  case (signed int)(unsigned long int)0x73U:
                    break;
                  case (signed int)(unsigned long int)0x65U:
                  {
                    parse_rc=ldap_parse_result(tttctx->ldapCtx, e, &rc, &matcheddn, &errmsg, (char ***)(void *)0, (struct ldapcontrol ***)(void *)0, 0);
                    if(!(parse_rc == 0x00))
                    {
                      char *return_value_ldap_err2string$13;
                      return_value_ldap_err2string$13=ldap_err2string(parse_rc);
                      printf("ldap_parse_result error: [%s]\n", return_value_ldap_err2string$13);
                    }

                    if(!(rc == 0x00))
                    {
                      char *return_value_ldap_err2string$14;
                      return_value_ldap_err2string$14=ldap_err2string(rc);
                      printf("ldap_search_ext_s error: [%s]\n", return_value_ldap_err2string$14);
                    }

                  }
                }
                e=ldap_next_message(tttctx->ldapCtx, e);
              }
            }

            if(mctx.srch_nentries >= 0 && !(mctx.srch_nentries == nentries))
            {
              printf("Error: search returned %d entries not the requested %d entries\n", nentries, mctx.srch_nentries);
              goto bail;
            }

            signed int return_value_incrementNbOpers$15;
            return_value_incrementNbOpers$15=incrementNbOpers(tttctx);
            if(!(return_value_incrementNbOpers$15 >= 0))
              goto bail;

            ret=ldap_msgfree(res);
            if(!(ret >= 0))
            {
              _Bool tmp_if_expr$18;
              if(!((8u & mctx.mode) == 0u))
              {
                return_value_ignoreError$17=ignoreError(ret);
                tmp_if_expr$18 = return_value_ignoreError$17 != 0 ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr$18 = (_Bool)0;
              if(!tmp_if_expr$18)
              {
                char *return_value_my_ldap_err2string$16;
                return_value_my_ldap_err2string$16=my_ldap_err2string(ret);
                printf("ldclt[%d]: T%03d: Cannot ldap_msgfree(), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, ret, return_value_my_ldap_err2string$16);
                fflush(stdout);
              }

              signed int return_value_addErrorStat$19;
              return_value_addErrorStat$19=addErrorStat(ret);
              if(!(return_value_addErrorStat$19 >= 0))
                goto bail;

            }

          }
          if(!(dctrl == ((struct ldapcontrol *)NULL)))
            ldap_control_free(dctrl);

          return 0;
        }

        else
        {
          if(tttctx->pendingNb >= mctx.asyncMin)
          {
            ret=ldap_result(tttctx->ldapCtx, -1, 1, &mctx.timeval, &res);
            if(!(ret >= 0))
            {
              _Bool tmp_if_expr$21;
              if(!((8u & mctx.mode) == 0u))
              {
                return_value_ignoreError$20=ignoreError(ret);
                tmp_if_expr$21 = return_value_ignoreError$20 != 0 ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr$21 = (_Bool)0;
              if(!tmp_if_expr$21)
                printErrorFromLdap(tttctx, res, ret, "Cannot ldap_result()");

              signed int return_value_addErrorStat$22;
              return_value_addErrorStat$22=addErrorStat(ret);
              if(!(return_value_addErrorStat$22 >= 0))
                goto bail;

            }

            else
            {
              tttctx->pendingNb = tttctx->pendingNb - 1;
              ret=ldap_msgfree(res);
              if(!(ret >= 0))
              {
                _Bool tmp_if_expr$25;
                if(!((8u & mctx.mode) == 0u))
                {
                  return_value_ignoreError$24=ignoreError(ret);
                  tmp_if_expr$25 = return_value_ignoreError$24 != 0 ? (_Bool)1 : (_Bool)0;
                }

                else
                  tmp_if_expr$25 = (_Bool)0;
                if(!tmp_if_expr$25)
                {
                  char *return_value_my_ldap_err2string$23;
                  return_value_my_ldap_err2string$23=my_ldap_err2string(ret);
                  printf("ldclt[%d]: T%03d: Cannot ldap_msgfree(), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, ret, return_value_my_ldap_err2string$23);
                  fflush(stdout);
                }

                signed int return_value_addErrorStat$26;
                return_value_addErrorStat$26=addErrorStat(ret);
                if(!(return_value_addErrorStat$26 >= 0))
                  goto bail;

              }

            }
          }

          if(!(mctx.asyncMax >= tttctx->pendingNb))
          {
            if(!((1u & mctx.mode) == 0u))
            {
              if(tttctx->asyncHit == 1)
              {
                if((16u & mctx.mode) == 0u)
                {
                  tttctx->asyncHit = 1;
                  printf("ldclt[%d]: T%03d: Max pending request hit.\n", mctx.pid, tttctx->thrdNum);
                  fflush(stdout);
                }

              }

            }

          }

          else
          {
            signed int msgid = 0;
            if(!((1u & mctx.mode) == 0u))
            {
              if(tttctx->asyncHit == 1)
              {
                if((16u & mctx.mode) == 0u)
                {
                  tttctx->asyncHit = 0;
                  printf("ldclt[%d]: T%03d: Restart sending.\n", mctx.pid, tttctx->thrdNum);
                  fflush(stdout);
                }

              }

            }

            ret=ldap_search_ext(tttctx->ldapCtx, tttctx->bufBaseDN, mctx.scope, tttctx->bufFilter, attrlist, mctx.attrsonly, ctrlsp, (struct ldapcontrol **)(void *)0, (struct timeval *)(void *)0, -1, &msgid);
            if(!(ret >= 0))
            {
              signed int return_value_ldap_get_option$32;
              return_value_ldap_get_option$32=ldap_get_option(tttctx->ldapCtx, 0x0031, (void *)&ret);
              if(!(return_value_ldap_get_option$32 >= 0))
              {
                printf("ldclt[%d]: T%03d: Cannot ldap_get_option(LDAP_OPT_ERROR_NUMBER)\n", mctx.pid, tttctx->thrdNum);
                fflush(stdout);
                goto bail;
              }

              else
              {
                _Bool tmp_if_expr$29;
                if(!((8u & mctx.mode) == 0u))
                {
                  return_value_ignoreError$28=ignoreError(ret);
                  tmp_if_expr$29 = return_value_ignoreError$28 != 0 ? (_Bool)1 : (_Bool)0;
                }

                else
                  tmp_if_expr$29 = (_Bool)0;
                if(!tmp_if_expr$29)
                {
                  char *return_value_my_ldap_err2string$27;
                  return_value_my_ldap_err2string$27=my_ldap_err2string(ret);
                  printf("ldclt[%d]: T%03d: Cannot ldap_search(), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, ret, return_value_my_ldap_err2string$27);
                  fflush(stdout);
                }

                signed int return_value_addErrorStat$30;
                return_value_addErrorStat$30=addErrorStat(ret);
                if(!(return_value_addErrorStat$30 >= 0))
                  return -1;

                if(ret == 0x20 && !((8192u & mctx.mode) == 0u))
                {
                  signed int return_value_incrementNbOpers$31;
                  return_value_incrementNbOpers$31=incrementNbOpers(tttctx);
                  if(!(return_value_incrementNbOpers$31 >= 0))
                    goto bail;

                }

              }
            }

            else
            {
              signed int return_value_incrementNbOpers$33;
              return_value_incrementNbOpers$33=incrementNbOpers(tttctx);
              if(!(return_value_incrementNbOpers$33 >= 0))
                goto bail;

              tttctx->pendingNb = tttctx->pendingNb + 1;
            }
          }
          if(!((2u & mctx.mode) == 0u))
            printf("ldclt[%d]: T%03d: pendingNb=%d\n", mctx.pid, tttctx->thrdNum, tttctx->pendingNb);

          if(!(dctrl == ((struct ldapcontrol *)NULL)))
            ldap_control_free(dctrl);

          return 0;

        bail:
          ;
          if(!(dctrl == ((struct ldapcontrol *)NULL)))
            ldap_control_free(dctrl);

          return -1;
        }
      }
    }
}

// doGenldif
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 2595
extern signed int doGenldif(struct thread_context *tttctx)
{
  char newDn[1024l];
  struct ldapmod *attrs[40l];
  signed int i;
  signed int return_value_buildNewEntry$1;
  return_value_buildNewEntry$1=buildNewEntry(tttctx, newDn, attrs);
  if(!(return_value_buildNewEntry$1 >= 0))
    return -1;

  else
  {
    ldclt_write_genldif("dn: ", 4);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(newDn);
    ldclt_write_genldif(newDn, (signed int)return_value_strlen$2);
    ldclt_write_genldif("\n", 1);
    i = 0;
    for( ; !(attrs[(signed long int)i] == ((struct ldapmod *)NULL)); i = i + 1)
    {
      unsigned long int return_value_strlen$3;
      return_value_strlen$3=strlen(attrs[(signed long int)i]->mod_type);
      ldclt_write_genldif(attrs[(signed long int)i]->mod_type, (signed int)return_value_strlen$3);
      ldclt_write_genldif(": ", 2);
      unsigned long int return_value_strlen$4;
      return_value_strlen$4=strlen(attrs[(signed long int)i]->mod_vals.modv_strvals[(signed long int)0]);
      ldclt_write_genldif(attrs[(signed long int)i]->mod_vals.modv_strvals[(signed long int)0], (signed int)return_value_strlen$4);
      ldclt_write_genldif("\n", 1);
    }
    ldclt_write_genldif("\n", 1);
    signed int return_value_incrementNbOpers$5;
    return_value_incrementNbOpers$5=incrementNbOpers(tttctx);
    if(!(return_value_incrementNbOpers$5 >= 0))
      return -1;

    else
    {
      signed int return_value_freeAttrib$6;
      return_value_freeAttrib$6=freeAttrib(attrs);
      if(!(return_value_freeAttrib$6 >= 0))
        return -1;

      else
        return 0;
    }
  }
}

// doRename
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 2261
extern signed int doRename(struct thread_context *tttctx)
{
  char oldDn[1024l];
  signed int ret;
  signed int retry;
  signed int retryed;
  signed int msgid;
  signed int return_value_connectToServer$1;
  return_value_connectToServer$1=connectToServer(tttctx);
  signed int return_value_ignoreError$6;
  signed int return_value_ignoreError$13;
  if(!(return_value_connectToServer$1 >= 0))
    return -1;

  else
    if(tttctx->binded == 0)
      return 0;

    else
    {
      signed int return_value_buildRandomRdnOrFilter$2;
      return_value_buildRandomRdnOrFilter$2=buildRandomRdnOrFilter(tttctx);
      if(!(return_value_buildRandomRdnOrFilter$2 >= 0))
        return -1;

      else
      {
        snprintf(oldDn, sizeof(char [1024l]) /*1024ul*/ , "%s,%s", tttctx->bufFilter, tttctx->bufBaseDN);
        oldDn[(signed long int)(sizeof(char [1024l]) /*1024ul*/  - (unsigned long int)1)] = (char)0;
        signed int return_value_buildRandomRdnOrFilter$3;
        return_value_buildRandomRdnOrFilter$3=buildRandomRdnOrFilter(tttctx);
        if(!(return_value_buildRandomRdnOrFilter$3 >= 0))
          return -1;

        else
          if((4u & mctx.mode) == 0u)
          {
            retry = 1;
            retryed = 0;
            while(retryed == 0 && !(retry == 0))
            {
              if(!((4096u & mctx.mode) == 0u))
                ret=ldap_rename_s(tttctx->ldapCtx, oldDn, tttctx->bufFilter, tttctx->bufBaseDN, 1, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0);

              else
                ret=ldap_rename_s(tttctx->ldapCtx, oldDn, tttctx->bufFilter, (const char *)(void *)0, 1, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0);
              if(ret == 0x00)
              {
                retry = 0;
                signed int return_value_incrementNbOpers$4;
                return_value_incrementNbOpers$4=incrementNbOpers(tttctx);
                if(!(return_value_incrementNbOpers$4 >= 0))
                  return -1;

              }

              else
              {
                _Bool tmp_if_expr$7;
                if(!((8u & mctx.mode) == 0u))
                {
                  return_value_ignoreError$6=ignoreError(ret);
                  tmp_if_expr$7 = return_value_ignoreError$6 != 0 ? (_Bool)1 : (_Bool)0;
                }

                else
                  tmp_if_expr$7 = (_Bool)0;
                if(!tmp_if_expr$7)
                {
                  char *return_value_my_ldap_err2string$5;
                  return_value_my_ldap_err2string$5=my_ldap_err2string(ret);
                  printf("ldclt[%d]: T%03d: Cannot rename (%s, %s, %s), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, (const void *)oldDn, tttctx->bufFilter, tttctx->bufBaseDN, ret, return_value_my_ldap_err2string$5);
                  fflush(stdout);
                }

                signed int return_value_addErrorStat$8;
                return_value_addErrorStat$8=addErrorStat(ret);
                if(!(return_value_addErrorStat$8 >= 0))
                  return -1;

                if(!((8192u & mctx.mode) == 0u) && (ret == 0x02 || ret == 0x20 || ret == 0x44))
                {
                  signed int return_value_incrementNbOpers$9;
                  return_value_incrementNbOpers$9=incrementNbOpers(tttctx);
                  if(!(return_value_incrementNbOpers$9 >= 0))
                    return -1;

                }

                if(!(ret == 0x02))
                  retry = 0;

                else
                {
                  signed int return_value_createMissingNodes$10;
                  return_value_createMissingNodes$10=createMissingNodes(tttctx, tttctx->bufBaseDN, (struct ldap *)(void *)0);
                  if(!(return_value_createMissingNodes$10 >= 0))
                  {
                    retry = 0;
                    printf("ldclt[%d]: T%03d: Cannot create the intermediate nodes for %s\n", mctx.pid, tttctx->thrdNum, tttctx->bufBaseDN);
                    fflush(stdout);
                    return -1;
                  }

                  if((8u & mctx.mode) == 0u && !((1u & mctx.mode) == 0u))
                  {
                    printf("ldclt[%d]: T%03d: Intermediate nodes created for %s\n", mctx.pid, tttctx->thrdNum, tttctx->bufBaseDN);
                    fflush(stdout);
                  }

                  retryed = 1;
                }
              }
            }
            return 0;
          }

          else
          {
            signed int return_value_getPending$11;
            return_value_getPending$11=getPending(tttctx, &mctx.timeval);
            if(!(return_value_getPending$11 >= 0))
              return -1;

            else
            {
              if(!(mctx.asyncMax >= tttctx->pendingNb))
              {
                if(!((1u & mctx.mode) == 0u))
                {
                  if(tttctx->asyncHit == 1)
                  {
                    if((16u & mctx.mode) == 0u)
                    {
                      tttctx->asyncHit = 1;
                      printf("ldclt[%d]: T%03d: Max pending request hit.\n", mctx.pid, tttctx->thrdNum);
                      fflush(stdout);
                    }

                  }

                }

              }

              else
              {
                if(!((1u & mctx.mode) == 0u))
                {
                  if(tttctx->asyncHit == 1)
                  {
                    if((16u & mctx.mode) == 0u)
                    {
                      tttctx->asyncHit = 0;
                      printf("ldclt[%d]: T%03d: Restart sending.\n", mctx.pid, tttctx->thrdNum);
                      fflush(stdout);
                    }

                  }

                }

                if(!((4096u & mctx.mode) == 0u))
                  ret=ldap_rename(tttctx->ldapCtx, oldDn, tttctx->bufFilter, tttctx->bufBaseDN, 1, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0, &msgid);

                else
                  ret=ldap_rename(tttctx->ldapCtx, oldDn, tttctx->bufFilter, (const char *)(void *)0, 1, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0, &msgid);
                if(!(ret >= 0))
                {
                  signed int return_value_ldap_get_option$18;
                  return_value_ldap_get_option$18=ldap_get_option(tttctx->ldapCtx, 0x0031, (void *)&ret);
                  if(!(return_value_ldap_get_option$18 >= 0))
                  {
                    printf("ldclt[%d]: T%03d: Cannot ldap_get_option(LDAP_OPT_ERROR_NUMBER)\n", mctx.pid, tttctx->thrdNum);
                    fflush(stdout);
                    return -1;
                  }

                  else
                  {
                    _Bool tmp_if_expr$14;
                    if(!((8u & mctx.mode) == 0u))
                    {
                      return_value_ignoreError$13=ignoreError(ret);
                      tmp_if_expr$14 = return_value_ignoreError$13 != 0 ? (_Bool)1 : (_Bool)0;
                    }

                    else
                      tmp_if_expr$14 = (_Bool)0;
                    if(!tmp_if_expr$14)
                    {
                      char *return_value_my_ldap_err2string$12;
                      return_value_my_ldap_err2string$12=my_ldap_err2string(ret);
                      printf("ldclt[%d]: T%03d: Cannot rename (%s, %s, %s), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, (const void *)oldDn, tttctx->bufFilter, tttctx->bufBaseDN, ret, return_value_my_ldap_err2string$12);
                      fflush(stdout);
                    }

                    signed int return_value_addErrorStat$15;
                    return_value_addErrorStat$15=addErrorStat(ret);
                    if(!(return_value_addErrorStat$15 >= 0))
                      return -1;

                    if(!((8192u & mctx.mode) == 0u) && (ret == 0x02 || ret == 0x20 || ret == 0x44))
                    {
                      signed int return_value_incrementNbOpers$16;
                      return_value_incrementNbOpers$16=incrementNbOpers(tttctx);
                      if(!(return_value_incrementNbOpers$16 >= 0))
                        return -1;

                    }

                    if(ret == 0x02)
                    {
                      signed int return_value_createMissingNodes$17;
                      return_value_createMissingNodes$17=createMissingNodes(tttctx, tttctx->bufBaseDN, (struct ldap *)(void *)0);
                      if(!(return_value_createMissingNodes$17 >= 0))
                        return -1;

                    }

                  }
                }

                else
                {
                  signed int return_value_msgIdAdd$19;
                  return_value_msgIdAdd$19=msgIdAdd(tttctx, msgid, tttctx->bufBaseDN, oldDn, (struct ldapmod **)(void *)0);
                  if(!(return_value_msgIdAdd$19 >= 0))
                    return -1;

                  signed int return_value_incrementNbOpers$20;
                  return_value_incrementNbOpers$20=incrementNbOpers(tttctx);
                  if(!(return_value_incrementNbOpers$20 >= 0))
                    return -1;

                  tttctx->pendingNb = tttctx->pendingNb + 1;
                }
              }
              if(!((2u & mctx.mode) == 0u))
                printf("ldclt[%d]: T%03d: pendingNb=%d\n", mctx.pid, tttctx->thrdNum, tttctx->pendingNb);

              return 0;
            }
          }
      }
    }
}

// doScalab01
// file ../ldap/servers/slapd/tools/ldclt/scalab01.c line 871
extern signed int doScalab01(struct thread_context *tttctx)
{
  char buf[32l];
  signed int duration;
  signed int res;
  signed int doloop;
  signed int return_value_rndlim$1;
  do
  {
    res=scalab01_modemIncr(tttctx->thrdId);
    if(res == 1)
      break;

    if(!(res == 0))
    {
      if(res == -1)
        goto __CPROVER_DUMP_L5;

    }

    else
    {
      signed int tmp_if_expr$2;
      if(s1ctx.wait == 0)
        tmp_if_expr$2 = 10;

      else
      {
        return_value_rndlim$1=rndlim(0, s1ctx.wait);
        tmp_if_expr$2 = return_value_rndlim$1;
      }
      ldclt_sleep(tmp_if_expr$2);
      continue;

    __CPROVER_DUMP_L5:
      ;
      return -1;
    }
  }
  while((_Bool)1);
  signed int return_value_connectToServer$3;
  return_value_connectToServer$3=connectToServer(tttctx);
  signed int return_value_rndlim$13;
  if(!(return_value_connectToServer$3 >= 0))
    return -1;

  else
    if(tttctx->binded == 0)
      return 0;

    else
    {
      doloop = 1;
      while(!(doloop == 0))
      {
        signed int return_value_scalab01Lock$4;
        return_value_scalab01Lock$4=scalab01Lock(tttctx);
        if(!(return_value_scalab01Lock$4 == 0))
        {
          if(return_value_scalab01Lock$4 == 1)
            goto __CPROVER_DUMP_L12;

          if(return_value_scalab01Lock$4 == -1)
            goto __CPROVER_DUMP_L13;

        }

        else
        {
          ldclt_sleep(1);
          goto __CPROVER_DUMP_L14;

        __CPROVER_DUMP_L12:
          ;
          doloop = 0;
          goto __CPROVER_DUMP_L14;

        __CPROVER_DUMP_L13:
          ;
          return -1;
        }

      __CPROVER_DUMP_L14:
        ;
      }
      signed int return_value_readAttrValue$5;
      return_value_readAttrValue$5=readAttrValue(tttctx->ldapCtx, tttctx->thrdId, tttctx->bufBindDN, "ntUserFlags", buf);
      if(!(return_value_readAttrValue$5 >= 0))
      {
        printf("ldclt[%d]: %s: Cannot read lock attribute of %s\n", mctx.pid, (const void *)tttctx->thrdId, tttctx->bufBindDN);
        fflush(stdout);
        scalab01_modemDecr(tttctx->thrdId);
        return -1;
      }

      else
      {
        if(!((2u & mctx.mode) == 0u))
          printf("ldclt[%d]: %s: entry %s lock read\n", mctx.pid, (const void *)tttctx->thrdId, tttctx->bufBindDN);

        signed int return_value_strcmp$7;
        return_value_strcmp$7=strcmp(buf, "1");
        if(return_value_strcmp$7 == 0)
        {
          signed int return_value_scalab01_modemDecr$6;
          return_value_scalab01_modemDecr$6=scalab01_modemDecr(tttctx->thrdId);
          if(!(return_value_scalab01_modemDecr$6 >= 0))
            return -1;

          return 0;
        }

        signed int return_value_writeAttrValue$9;
        return_value_writeAttrValue$9=writeAttrValue(tttctx->ldapCtx, tttctx->thrdId, tttctx->bufBindDN, "ntUserFlags", "1");
        if(!(return_value_writeAttrValue$9 >= 0))
        {
          printf("ldclt[%d]: %s: Cannot write lock attribute of %s\n", mctx.pid, (const void *)tttctx->thrdId, tttctx->bufBindDN);
          fflush(stdout);
          signed int return_value_scalab01_modemDecr$8;
          return_value_scalab01_modemDecr$8=scalab01_modemDecr(tttctx->thrdId);
          if(!(return_value_scalab01_modemDecr$8 >= 0))
            return -1;

          return 0;
        }

        if(!((2u & mctx.mode) == 0u))
          printf("ldclt[%d]: %s: entry %s lock written\n", mctx.pid, (const void *)tttctx->thrdId, tttctx->bufBindDN);

        signed int return_value_scalab01Unlock$10;
        return_value_scalab01Unlock$10=scalab01Unlock(tttctx);
        if(!(return_value_scalab01Unlock$10 >= 0))
          return -1;

        else
        {
          duration=rndlim(1, s1ctx.cnxduration);
          signed int return_value_scalab01_addLogin$11;
          return_value_scalab01_addLogin$11=scalab01_addLogin(tttctx, tttctx->bufBindDN, duration);
          if(!(return_value_scalab01_addLogin$11 >= 0))
          {
            printf("ldclt[%d]: %s: Cannot memorize new login of %s\n", mctx.pid, (const void *)tttctx->thrdId, tttctx->bufBindDN);
            fflush(stdout);
            return -1;
          }

          else
          {
            if(!((2u & mctx.mode) == 0u))
              printf("ldclt[%d]: %s: entry %s login added duration %6d\n", mctx.pid, (const void *)tttctx->thrdId, tttctx->bufBindDN, duration);

            signed int return_value_incrementNbOpers$12;
            return_value_incrementNbOpers$12=incrementNbOpers(tttctx);
            if(!(return_value_incrementNbOpers$12 >= 0))
              return -1;

            else
            {
              if(s1ctx.wait >= 1)
              {
                return_value_rndlim$13=rndlim(0, s1ctx.wait);
                ldclt_sleep(return_value_rndlim$13);
              }

              return 0;
            }
          }
        }
      }
    }
}

// dumpModeValues
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 1454
void dumpModeValues(void)
{
  if(!((8u & mctx.mode) == 0u))
    printf(" quiet");

  if(!((16u & mctx.mode) == 0u))
    printf(" super_quiet");

  if(!((1u & mctx.mode) == 0u))
    printf(" verbose");

  if(!((2u & mctx.mode) == 0u))
    printf(" very_verbose");

  if(!((8192u & mctx.mode) == 0u))
    printf(" counteach");

  if(!((1048576u & mctx.mode) == 0u))
    printf(" v2");

  if(!((4u & mctx.mode) == 0u))
    printf(" asynchronous");

  if(!((134217728u & mctx.mode) == 0u))
    printf(" incremental");

  if(!((512u & mctx.mode) == 0u))
    printf(" commoncounter");

  if(!((262144u & mctx.mode) == 0u))
    printf(" noloop");

  if(!((536870912u & mctx.mode) == 0u))
    printf(" random");

  if(!((2097152u & mctx.mode) == 0u))
    printf(" randombase");

  if(!((2048u & mctx.mode) == 0u))
    printf(" randombinddn");

  if(!((4194304u & mctx.mode) == 0u))
    printf(" string");

  if(!((524288u & mctx.mode) == 0u))
    printf(" ascii");

  if(!((268435456u & mctx.mode) == 0u))
    printf(" close_fd");

  if(!((1073741824u & mctx.mode) == 0u))
    printf(" bind_each_operation");

  if(!((32u & mctx.mode) == 0u))
    printf(" ssl");

  if(!((64u & mctx.mode) == 0u))
    printf(" ssl_with_client_authentication");

  if(!((64u & mctx.mod2) == 0u))
    printf(" saslauth");

  if(!((128u & mctx.mod2) == 0u))
    printf(" randomauthid");

  if(!((32768u & mctx.mode) == 0u))
    printf(" smoothshutdown");

  if(!((256u & mctx.mode) == 0u))
    printf(" dontsleeponserverdown");

  if(!((67108864u & mctx.mode) == 0u))
    printf(" add");

  if(!((16384u & mctx.mode) == 0u))
    printf(" attrib_replace");

  if(!((32u & mctx.mod2) == 0u))
    printf(" bindonly");

  if(!((16777216u & mctx.mode) == 0u))
    printf(" delete");

  if(!((0x80000000 & mctx.mode) == 0u))
    printf(" exact_search");

  if(!((128u & mctx.mode) == 0u))
    printf(" randomattrlist");

  if(!((131072u & mctx.mode) == 0u))
    printf(" rename");

  if(!((4096u & mctx.mode) == 0u))
    printf(" withnewparent");

  if(!((2u & mctx.mod2) == 0u))
    printf(" genldif=%s", mctx.genldifName);

  if(!((1024u & mctx.mode) == 0u))
    printf(" scalab01");

  if(!((8388608u & mctx.mode) == 0u))
    printf(" class=emailPerson");

  if(!((33554432u & mctx.mode) == 0u))
    printf(" class=person");

  if(!((65536u & mctx.mode) == 0u))
    printf(" class=inetOrgPerson");

  if(!((1u & mctx.mod2) == 0u))
    printf(" object=%s", mctx.object.fname);

  if(!((16u & mctx.mod2) == 0u))
    printf(" randombinddnfromfile=%s", mctx.rndBindFname);

}

// freeAttrib
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 1308
extern signed int freeAttrib(struct ldapmod **attrs)
{
  signed int i;
  signed int j;
  i = 0;
  for( ; !(attrs[(signed long int)i] == ((struct ldapmod *)NULL)); i = i + 1)
  {
    if(!((0x0080 & attrs[(signed long int)i]->mod_op) == 0))
    {
      j = 0;
      for( ; !(attrs[(signed long int)i]->mod_vals.modv_bvals[(signed long int)j] == ((struct berval *)NULL)); j = j + 1)
        free((void *)attrs[(signed long int)i]->mod_vals.modv_bvals[(signed long int)j]);
      free((void *)attrs[(signed long int)i]->mod_vals.modv_bvals);
    }

    else
      free((void *)attrs[(signed long int)i]->mod_vals.modv_strvals);
    free((void *)attrs[(signed long int)i]);
  }
  return 0;
}

// getBindAndPasswdFromFile
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 144
signed int getBindAndPasswdFromFile(struct thread_context *tttctx)
{
  signed int num;
  signed int i;
  signed long int return_value_lrand48$1;
  return_value_lrand48$1=lrand48();
  num = (signed int)(return_value_lrand48$1 % (signed long int)mctx.rndBindDlf->strNb);
  i = 0;
  _Bool tmp_if_expr$2;
  do
  {
    if(!((signed int)mctx.rndBindDlf->str[(signed long int)num][(signed long int)i] == 0))
      tmp_if_expr$2 = (signed int)mctx.rndBindDlf->str[(signed long int)num][(signed long int)i] != 9 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$2 = (_Bool)0;
    if(!tmp_if_expr$2)
      break;

    i = i + 1;
  }
  while((_Bool)1);
  if((signed int)mctx.rndBindDlf->str[(signed long int)num][(signed long int)i] == 0)
  {
    printf("ldclt[%d]: %s: No bind DN find line %d of %s\n", mctx.pid, (const void *)tttctx->thrdId, num + 1, mctx.rndBindFname);
    return -1;
  }

  else
  {
    strncpy(tttctx->bufBindDN, mctx.rndBindDlf->str[(signed long int)num], (unsigned long int)i);
    tttctx->bufBindDN[(signed long int)i] = (char)0;
    for( ; !((signed int)mctx.rndBindDlf->str[(signed long int)num][(signed long int)i] == 0); i = i + 1)
      if(!((signed int)mctx.rndBindDlf->str[(signed long int)num][(signed long int)i] == 9))
        break;

    if((signed int)mctx.rndBindDlf->str[(signed long int)num][(signed long int)i] == 0)
    {
      printf("ldclt[%d]: %s: No password find line %d of %s\n", mctx.pid, (const void *)tttctx->thrdId, num + 1, mctx.rndBindFname);
      return -1;
    }

    else
    {
      strcpy(tttctx->bufPasswd, &mctx.rndBindDlf->str[(signed long int)num][(signed long int)i]);
      return 0;
    }
  }
}

// getExtend
// file ../ldap/servers/slapd/tools/ldclt/data.c line 55
char * getExtend(char *str)
{
  signed int i;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  i = (signed int)(return_value_strlen$1 - (unsigned long int)1);
  _Bool tmp_if_expr$2;
  do
  {
    if(i >= 0)
      tmp_if_expr$2 = (signed int)str[(signed long int)i] != 46 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$2 = (_Bool)0;
    if(!tmp_if_expr$2)
      break;

    i = i - 1;
  }
  while((_Bool)1);
  return &str[(signed long int)(i + 1)];
}

// getFdFromLdapSession
// file ../ldap/servers/slapd/tools/ldclt/workarounds.c line 68
extern signed int getFdFromLdapSession(struct ldap *ld, signed int *fd)
{
  printf("Error : getFdFromLdapSession() not implemented...\n");
  exit(99);
}

// getImage
// file ../ldap/servers/slapd/tools/ldclt/data.c line 238
extern signed int getImage(struct ldapmod *attribute)
{
  signed int imageNumber;
  signed int ret;
  ret=ldclt_mutex_lock(&mctx.imagesLast_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$1;
    return_value_strerror$1=strerror(ret);
    fprintf(stderr, "Cannot mutex_lock(imagesLast_mutex), error=%d (%s)\n", ret, return_value_strerror$1);
    fflush(stderr);
    return -1;
  }

  mctx.imagesLast = mctx.imagesLast + 1;
  if(mctx.imagesLast == mctx.imagesNb)
    mctx.imagesLast = 0;

  imageNumber = mctx.imagesLast;
  ret=ldclt_mutex_unlock(&mctx.imagesLast_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(ret);
    fprintf(stderr, "Cannot mutex_unlock(imagesLast_mutex), error=%d (%s)\n", ret, return_value_strerror$2);
    fflush(stderr);
    return -1;
  }

  void *return_value_malloc$3;
  return_value_malloc$3=malloc((unsigned long int)2 * sizeof(struct berval *) /*8ul*/ );
  attribute->mod_vals.modv_bvals = (struct berval **)return_value_malloc$3;
  if(attribute->mod_vals.modv_bvals == ((struct berval **)NULL))
  {
    signed int *return_value___errno_location$4;
    return_value___errno_location$4=__errno_location();
    signed int *return_value___errno_location$5;
    return_value___errno_location$5=__errno_location();
    char *return_value_strerror$6;
    return_value_strerror$6=strerror(*return_value___errno_location$5);
    printf("Error: cannot malloc(attribute->mod_bvalues), error=%d (%s)\n", *return_value___errno_location$4, return_value_strerror$6);
    return -1;
  }

  void *return_value_malloc$7;
  return_value_malloc$7=malloc(sizeof(struct berval) /*16ul*/ );
  attribute->mod_vals.modv_bvals[(signed long int)0] = (struct berval *)return_value_malloc$7;
  if(*attribute->mod_vals.modv_bvals == ((struct berval *)NULL))
  {
    signed int *return_value___errno_location$8;
    return_value___errno_location$8=__errno_location();
    signed int *return_value___errno_location$9;
    return_value___errno_location$9=__errno_location();
    char *return_value_strerror$10;
    return_value_strerror$10=strerror(*return_value___errno_location$9);
    printf("Error: cannot malloc(attribute->mod_bvalues[0]), error=%d (%s)\n", *return_value___errno_location$8, return_value_strerror$10);
    return -1;
  }

  attribute->mod_vals.modv_bvals[(signed long int)1] = (struct berval *)(void *)0;
  attribute->mod_vals.modv_bvals[(signed long int)0]->bv_len = (unsigned long int)(mctx.images + (signed long int)imageNumber)->length;
  attribute->mod_vals.modv_bvals[(signed long int)0]->bv_val = (mctx.images + (signed long int)imageNumber)->data;
  return 0;
}

// getPending
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 2003
signed int getPending(struct thread_context *tttctx, struct timeval *timeout)
{
  struct ldapmsg *res;
  signed int ret;
  signed int expected = 0;
  char *verb;
  signed int type;
  signed int errcodep;
  signed int msgid;
  signed int msgOk;
  char *addErrMsg;
  msgOk = 0;
  if(!((67108864u & tttctx->mode) == 0u))
  {
    expected = (signed int)(unsigned long int)0x69U;
    verb = "ldap_add";
  }

  else
    if(!((16777216u & tttctx->mode) == 0u))
    {
      expected = (signed int)(unsigned long int)0x6bU;
      verb = "ldap_delete";
    }

    else
      if(!((131072u & tttctx->mode) == 0u))
      {
        expected = (signed int)(unsigned long int)0x6dU;
        verb = "ldap_rename";
      }

      else
        if(!((16384u & tttctx->mode) == 0u))
        {
          expected = (signed int)(unsigned long int)0x67U;
          verb = "ldap_modify";
        }

        else
          return -1;
  _Bool tmp_if_expr$24;
  if(timeout == &mctx.timevalZero)
    tmp_if_expr$24 = (_Bool)1;

  else
    tmp_if_expr$24 = tttctx->pendingNb >= mctx.asyncMin ? (_Bool)1 : (_Bool)0;
  signed int return_value_ignoreError$21;
  if(tmp_if_expr$24)
  {
    ret=ldap_result(tttctx->ldapCtx, -1, 1, timeout, &res);
    if(!(ret == 0))
    {
      msgOk = 1;
      if(!(ret >= 0))
      {
        signed int return_value_ignoreError$2;
        return_value_ignoreError$2=ignoreError(ret);
        if(return_value_ignoreError$2 == 0)
        {
          msgOk = 0;
          if((8u & mctx.mode) == 0u)
          {
            char *return_value_my_ldap_err2string$1;
            return_value_my_ldap_err2string$1=my_ldap_err2string(ret);
            printf("ldclt[%d]: T%03d: Cannot ldap_result(), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, ret, return_value_my_ldap_err2string$1);
            fflush(stdout);
          }

        }

        signed int return_value_addErrorStat$3;
        return_value_addErrorStat$3=addErrorStat(ret);
        if(!(return_value_addErrorStat$3 >= 0))
          return -1;

      }

      else
      {
        type=ldap_msgtype(res);
        msgid=ldap_msgid(res);
        if(!(type == expected))
        {
          msgOk = 0;
          printf("ldclt[%d]: T%03d: bad result type 0x%02x\n", mctx.pid, tttctx->thrdNum, type);
          fflush(stdout);
          signed int return_value_msgIdDel$4;
          return_value_msgIdDel$4=msgIdDel(tttctx, msgid, 1);
          if(!(return_value_msgIdDel$4 >= 0))
            return -1;

          return 0;
        }

        addErrMsg = (char *)(void *)0;
        ret=ldap_parse_result(tttctx->ldapCtx, res, &errcodep, (char **)(void *)0, &addErrMsg, (char ***)(void *)0, (struct ldapcontrol ***)(void *)0, 0);
        if(!(ret >= 0))
        {
          signed int return_value_ignoreError$7;
          return_value_ignoreError$7=ignoreError(ret);
          if(return_value_ignoreError$7 == 0)
          {
            msgOk = 0;
            if((8u & mctx.mode) == 0u)
            {
              char *return_value_msgIdStr$5;
              return_value_msgIdStr$5=msgIdStr(tttctx, msgid);
              char *return_value_my_ldap_err2string$6;
              return_value_my_ldap_err2string$6=my_ldap_err2string(ret);
              printf("ldclt[%d]: T%03d: Cannot ldap_parse_result(%s), error=%d (%s", mctx.pid, tttctx->thrdNum, return_value_msgIdStr$5, ret, return_value_my_ldap_err2string$6);
              if(!(addErrMsg == ((char *)NULL)))
              {
                if(!((signed int)*addErrMsg == 0))
                {
                  printf(" - %s", addErrMsg);
                  ldap_memfree((void *)addErrMsg);
                }

              }

              printf(")\n");
              fflush(stdout);
            }

          }

          signed int return_value_msgIdDel$8;
          return_value_msgIdDel$8=msgIdDel(tttctx, msgid, 1);
          if(!(return_value_msgIdDel$8 >= 0))
            return -1;

          signed int return_value_addErrorStat$9;
          return_value_addErrorStat$9=addErrorStat(ret);
          if(!(return_value_addErrorStat$9 >= 0))
            return -1;

        }

        if(!(errcodep == 0x00))
        {
          signed int return_value_ignoreError$12;
          return_value_ignoreError$12=ignoreError(ret);
          if(return_value_ignoreError$12 == 0)
          {
            msgOk = 0;
            if((8u & mctx.mode) == 0u)
            {
              char *return_value_msgIdStr$10;
              return_value_msgIdStr$10=msgIdStr(tttctx, msgid);
              char *return_value_my_ldap_err2string$11;
              return_value_my_ldap_err2string$11=my_ldap_err2string(errcodep);
              printf("ldclt[%d]: T%03d: Cannot %s(%s), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, verb, return_value_msgIdStr$10, errcodep, return_value_my_ldap_err2string$11);
              fflush(stdout);
            }

          }

          if(errcodep == 0x20 && ((unsigned long int)expected == 105ul || (unsigned long int)expected == 109ul))
          {
            char *return_value_msgIdStr$14;
            return_value_msgIdStr$14=msgIdStr(tttctx, msgid);
            signed int return_value_createMissingNodes$15;
            return_value_createMissingNodes$15=createMissingNodes(tttctx, return_value_msgIdStr$14, (struct ldap *)(void *)0);
            if(!(return_value_createMissingNodes$15 >= 0))
            {
              char *return_value_msgIdStr$13;
              return_value_msgIdStr$13=msgIdStr(tttctx, msgid);
              printf("ldclt[%d]: T%03d: Cannot create the intermediate nodes for %s\n", mctx.pid, tttctx->thrdNum, return_value_msgIdStr$13);
              fflush(stdout);
              return -1;
            }

            if((8u & mctx.mode) == 0u && !((1u & mctx.mode) == 0u))
            {
              char *return_value_msgIdStr$16;
              return_value_msgIdStr$16=msgIdStr(tttctx, msgid);
              printf("ldclt[%d]: T%03d: Intermediate nodes created for %s\n", mctx.pid, tttctx->thrdNum, return_value_msgIdStr$16);
              fflush(stdout);
            }

          }

          signed int return_value_msgIdDel$17;
          return_value_msgIdDel$17=msgIdDel(tttctx, msgid, 1);
          if(!(return_value_msgIdDel$17 >= 0))
            return -1;

          signed int return_value_addErrorStat$18;
          return_value_addErrorStat$18=addErrorStat(errcodep);
          if(!(return_value_addErrorStat$18 >= 0))
            return -1;

        }

        else
          if(mctx.slavesNb == 0)
          {
            signed int return_value_msgIdDel$19;
            return_value_msgIdDel$19=msgIdDel(tttctx, msgid, 1);
            if(!(return_value_msgIdDel$19 >= 0))
              return -1;

          }

        tttctx->pendingNb = tttctx->pendingNb - 1;
        ret=ldap_msgfree(res);
        if(!(ret >= 0))
        {
          _Bool tmp_if_expr$22;
          if(!((8u & mctx.mode) == 0u))
          {
            return_value_ignoreError$21=ignoreError(ret);
            tmp_if_expr$22 = return_value_ignoreError$21 != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$22 = (_Bool)0;
          if(!tmp_if_expr$22)
          {
            char *return_value_my_ldap_err2string$20;
            return_value_my_ldap_err2string$20=my_ldap_err2string(ret);
            printf("ldclt[%d]: T%03d: Cannot ldap_msgfree(), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, ret, return_value_my_ldap_err2string$20);
            fflush(stdout);
          }

          signed int return_value_addErrorStat$23;
          return_value_addErrorStat$23=addErrorStat(ret);
          if(!(return_value_addErrorStat$23 >= 0))
            return -1;

        }

      }
    }

  }

  signed int return_value_getPending$25;
  if(!(msgOk == 0))
  {
    return_value_getPending$25=getPending(tttctx, &mctx.timevalZero);
    return return_value_getPending$25;
  }

  return 0;
}

// getThreadStatus
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 704
extern signed int getThreadStatus(struct thread_context *tttctx, signed int *status)
{
  signed int ret;
  ret=ldclt_mutex_lock(&tttctx->status_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$1;
    return_value_strerror$1=strerror(ret);
    fprintf(stderr, "ldclt[%d]: Cannot mutex_lock(T%03d), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, ret, return_value_strerror$1);
    fprintf(stderr, "ldclt[%d]: Problem in getThreadStatus()\n", mctx.pid);
    fflush(stderr);
    return -1;
  }

  *status = tttctx->status;
  ret=ldclt_mutex_unlock(&tttctx->status_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(ret);
    fprintf(stderr, "ldclt[%d]: Cannot mutex_unlock(T%03d), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, ret, return_value_strerror$2);
    fprintf(stderr, "ldclt[%d]: Problem in getThreadStatus()\n", mctx.pid);
    fflush(stderr);
    return -1;
  }

  return 0;
}

// get_default
// file ../ldap/servers/slapd/tools/ldaptool-sasl.c line 179
static signed int get_default(struct anonymous$15 *defaults, struct sasl_interact *interact, unsigned int flags)
{
  const char *defvalue = interact->defresult;
  if(!(defaults == ((struct anonymous$15 *)NULL)))
    switch(interact->id)
    {
      case (unsigned long int)0x4002:
      {
        defvalue = defaults->authid;
        break;
      }
      case (unsigned long int)0x4001:
      {
        defvalue = defaults->username;
        break;
      }
      case (unsigned long int)0x4004:
      {
        defvalue = defaults->passwd;
        break;
      }
      case (unsigned long int)0x4008:
        defvalue = defaults->realm;
    }

  if(!(defvalue == ((const char *)NULL)))
  {
    interact->result = (const void *)defvalue;
    if(interact->result == NULL)
      return -10;

    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen((char *)interact->result);
    interact->len = (unsigned int)return_value_strlen$1;
  }

  return 0x00;
}

// get_new_value
// file ../ldap/servers/slapd/tools/ldaptool-sasl.c line 218
static signed int get_new_value(struct sasl_interact *interact, unsigned int flags)
{
  char *newvalue = (char *)(void *)0;
  char str[1024l];
  signed int len = 0;
  _Bool tmp_if_expr$1;
  if(interact->id == 16389ul)
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = interact->id == (unsigned long int)0x4006 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
  {
    if(!(interact->challenge == ((const char *)NULL)))
      fprintf(stderr, "Challenge: %s\n", interact->challenge);

  }

  if(!(interact->result == NULL))
    fprintf(stderr, "Default: %s\n", (char *)interact->result);

  const char *tmp_if_expr$2;
  if(!(interact->prompt == ((const char *)NULL)))
    tmp_if_expr$2 = interact->prompt;

  else
    tmp_if_expr$2 = "Interact";
  snprintf(str, sizeof(char [1024l]) /*1024ul*/ , "%s:", tmp_if_expr$2);
  str[(signed long int)(sizeof(char [1024l]) /*1024ul*/  - (unsigned long int)1)] = (char)0;
  _Bool tmp_if_expr$5;
  if(interact->id == 16388ul)
    tmp_if_expr$5 = (_Bool)1;

  else
    tmp_if_expr$5 = interact->id == (unsigned long int)0x4006 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$5)
  {
    newvalue=ldaptool_getpass(str);
    if(newvalue == ((char *)NULL))
      return 0x34;

    unsigned long int return_value_strlen$3;
    return_value_strlen$3=strlen(newvalue);
    len = (signed int)return_value_strlen$3;
  }

  else
  {
    fputs(str, stderr);
    newvalue=fgets(str, (signed int)sizeof(char [1024l]) /*1024ul*/ , stdin);
    if(newvalue == ((char *)NULL))
      return 0x34;

    unsigned long int return_value_strlen$4;
    return_value_strlen$4=strlen(str);
    len = (signed int)return_value_strlen$4;
    if(len >= 1)
    {
      if((signed int)str[(signed long int)(len + -1)] == 10)
      {
        str[(signed long int)(len - 1)] = (char)0;
        len = len - 1;
      }

    }

  }
  if(len >= 1)
  {
    if(!(interact->result == NULL))
      free((void *)interact->result);

    char *return_value_strdup$6;
    return_value_strdup$6=strdup(newvalue);
    interact->result = (const void *)return_value_strdup$6;
    memset((void *)newvalue, 0, (unsigned long int)len);
    if(interact->result == NULL)
      return -10;

    interact->len = (unsigned int)len;
  }

  else
  {
    if(interact->result == NULL)
      interact->result = (const void *)"";

    unsigned long int return_value_strlen$7;
    return_value_strlen$7=strlen((const char *)interact->result);
    interact->len = (unsigned int)return_value_strlen$7;
  }
  return 0x00;
}

// ignoreError
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 706
extern signed int ignoreError(signed int err)
{
  signed int i = 0;
  for( ; !(i >= mctx.ignErrNb); i = i + 1)
    if(mctx.ignErr[(signed long int)i] == err)
    {
      if((256u & mctx.mode) == 0u && (err == -11 || err == -1))
        ldclt_sleep(1);

      return 1;
    }

  return 0;
}

// incr_and_wrap
// file ../ldap/servers/slapd/tools/ldclt/utils.h line 50
extern signed int incr_and_wrap(signed int val, signed int min, signed int max, signed int incr)
{
  signed int range = (max - min) + 1;
  return ((val + incr) - min) % range + min;
}

// incrementCommonCounter
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 707
extern signed int incrementCommonCounter(struct thread_context *tttctx)
{
  signed int ret;
  signed int val;
  ret=ldclt_mutex_lock(&mctx.lastVal_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$1;
    return_value_strerror$1=strerror(ret);
    fprintf(stderr, "ldclt[%d]: T%03d: cannot mutex_lock(lastVal_mutex), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, ret, return_value_strerror$1);
    fflush(stderr);
    return -1;
  }

  if(!((262144u & mctx.mode) == 0u) && !(mctx.randomHigh >= mctx.incr + mctx.lastVal))
    val = -1;

  else
  {
    mctx.lastVal=incr_and_wrap(mctx.lastVal, mctx.randomLow, mctx.randomHigh, mctx.incr);
    val = mctx.lastVal;
  }
  ret=ldclt_mutex_unlock(&mctx.lastVal_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(ret);
    fprintf(stderr, "ldclt[%d]: T%03d: cannot mutex_unlock(lastVal_mutex), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, ret, return_value_strerror$2);
    fflush(stderr);
    return -1;
  }

  if(!(val >= 0))
    printf("ldclt[%d]: T%03d: Hit top incremental value\n", mctx.pid, tttctx->thrdNum);

  return val;
}

// incrementCommonCounterObject
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 708
extern signed int incrementCommonCounterObject(struct thread_context *tttctx, struct vers_field *field)
{
  signed int ret;
  signed int val;
  ret=ldclt_mutex_lock(&field->cnt_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$1;
    return_value_strerror$1=strerror(ret);
    fprintf(stderr, "ldclt[%d]: %s: cannot mutex_lock(field->cnt_mutex), error=%d (%s)\n", mctx.pid, (const void *)tttctx->thrdId, ret, return_value_strerror$1);
    fflush(stderr);
    return -1;
  }

  switch(field->how)
  {
    case 1:

    case 3:
    {
      if(field->high >= field->cnt)
      {
        val = field->cnt;
        field->cnt = field->cnt + 1;
      }

      else
      {
        val = field->low;
        field->cnt = field->low + 1;
      }
      break;
    }
    case 2:

    case 4:
    {
      if(field->high >= field->cnt)
      {
        val = field->cnt;
        field->cnt = field->cnt + 1;
      }

      else
        val = -1;
      break;
    }
    default:
    {
      printf("ldclt[%d]: %s: Illegal how=%d in incrementCommonCounterObject()\n", mctx.pid, (const void *)tttctx->thrdId, field->how);
      val = -1;
    }
  }
  ret=ldclt_mutex_unlock(&field->cnt_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(ret);
    fprintf(stderr, "ldclt[%d]: %s: cannot mutex_unlock(field->cnt_mutex), error=%d (%s)\n", mctx.pid, (const void *)tttctx->thrdId, ret, return_value_strerror$2);
    fflush(stderr);
    return -1;
  }

  if(!(val >= 0))
    printf("ldclt[%d]: %s: Hit top incrementeal value\n", mctx.pid, (const void *)tttctx->thrdId);

  return val;
}

// incrementNbOpers
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 711
extern signed int incrementNbOpers(struct thread_context *tttctx)
{
  signed int ret;
  ret=ldclt_mutex_lock(&tttctx->nbOpers_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$1;
    return_value_strerror$1=strerror(ret);
    fprintf(stderr, "ldclt[%d]: T%03d: cannot mutex_lock(), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, ret, return_value_strerror$1);
    fflush(stderr);
    return -1;
  }

  tttctx->nbOpers = tttctx->nbOpers + 1;
  ret=ldclt_mutex_unlock(&tttctx->nbOpers_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(ret);
    fprintf(stderr, "ldclt[%d]: T%03d: cannot mutex_unlock(), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, ret, return_value_strerror$2);
    fflush(stderr);
    return -1;
  }

  tttctx->totOpers = tttctx->totOpers + 1;
  if(tttctx->totalReq >= 0)
  {
    if(tttctx->totOpers >= tttctx->totalReq)
    {
      signed int return_value_setThreadStatus$3;
      return_value_setThreadStatus$3=setThreadStatus(tttctx, 10);
      if(!(return_value_setThreadStatus$3 >= 0))
        tttctx->status = 9;

    }

  }

  return 0;
}

// initMainThread
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 861
signed int initMainThread(void)
{
  struct sigaction act;
  act.__sigaction_handler.sa_handler = (void (*)(signed int))trapVector;
  act.__sigaction_handler.sa_sigaction = trapVector;
  act.sa_flags = 0x40000000;
  sigemptyset(&act.sa_mask);
  sigaddset(&act.sa_mask, 2);
  sigfillset(&act.sa_mask);
  signed int return_value_sigaction$1;
  return_value_sigaction$1=sigaction(2, &act, (struct sigaction *)(void *)0);
  if(!(return_value_sigaction$1 >= 0))
  {
    perror("ldclt");
    fprintf(stderr, "ldclt[%d]: Error: cannot sigaction(SIGINT)\n", mctx.pid);
    fflush(stderr);
    return -1;
  }

  else
  {
    act.__sigaction_handler.sa_handler = (void (*)(signed int))trapVector;
    act.__sigaction_handler.sa_sigaction = trapVector;
    act.sa_flags = 0x40000000;
    sigemptyset(&act.sa_mask);
    sigaddset(&act.sa_mask, 3);
    sigfillset(&act.sa_mask);
    signed int return_value_sigaction$2;
    return_value_sigaction$2=sigaction(3, &act, (struct sigaction *)(void *)0);
    if(!(return_value_sigaction$2 >= 0))
    {
      perror("ldclt");
      fprintf(stderr, "ldclt[%d]: Error: cannot sigaction(SIGQUIT)\n", mctx.pid);
      fflush(stderr);
      return -1;
    }

    else
      return 0;
  }
}

// internal_ol_init_init
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 458
static enum anonymous$13 internal_ol_init_init(void)
{
  ol_init_lock=PR_NewLock();
  if(ol_init_lock == ((struct PRLock *)NULL))
  {
    signed int errorCode;
    errorCode=PR_GetError();
    printf("internal_ol_init_init PR_NewLock failed %d\n", errorCode);
    return (enum anonymous$13)PR_FAILURE;
  }

  return (enum anonymous$13)PR_SUCCESS;
}

// ldaptool_free_defaults
// file ../ldap/servers/slapd/tools/ldaptool-sasl.c line 130
void ldaptool_free_defaults(void *defaults)
{
  struct anonymous$15 *sasl_defaults = (struct anonymous$15 *)defaults;
  if(!(sasl_defaults == ((struct anonymous$15 *)NULL)))
  {
    if(!(sasl_defaults->mech == ((char *)NULL)))
      free((void *)sasl_defaults->mech);

    if(!(sasl_defaults->authid == ((char *)NULL)))
      free((void *)sasl_defaults->authid);

    if(!(sasl_defaults->username == ((char *)NULL)))
      free((void *)sasl_defaults->username);

    if(!(sasl_defaults->passwd == ((char *)NULL)))
      free((void *)sasl_defaults->passwd);

    free((void *)sasl_defaults);
    sasl_defaults = (struct anonymous$15 *)(void *)0;
  }

}

// ldaptool_getpass
// file ../ldap/servers/slapd/tools/ldaptool-sasl.c line 281
char * ldaptool_getpass(const char *prompt)
{
  char *pass;
  char *return_value_getpass$1;
  return_value_getpass$1=getpass(prompt);
  pass = (char *)return_value_getpass$1;
  return pass;
}

// ldaptool_sasl_interact
// file ../ldap/servers/slapd/tools/ldaptool-sasl.c line 152
signed int ldaptool_sasl_interact(struct ldap *ld, unsigned int flags, void *defaults, void *prompts)
{
  struct sasl_interact *interact = (struct sasl_interact *)(void *)0;
  struct anonymous$15 *sasldefaults = (struct anonymous$15 *)defaults;
  signed int rc;
  if(prompts == NULL)
    return -9;

  else
  {
    interact = (struct sasl_interact *)prompts;
    for( ; !(interact->id == 0ul); interact = interact + 1l)
    {
      rc=get_default(sasldefaults, interact, flags);
      if(!(rc == 0x00))
        return rc;

      _Bool tmp_if_expr$1;
      if(flags == 1U)
        tmp_if_expr$1 = (_Bool)1;

      else
        tmp_if_expr$1 = (interact->result == (void *)0 ? (flags == 0U ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$1)
      {
        rc=get_new_value(interact, flags);
        if(!(rc == 0x00))
          return rc;

      }

    }
    return 0x00;
  }
}

// ldaptool_set_sasl_defaults
// file ../ldap/servers/slapd/tools/ldaptool-sasl.c line 72
void * ldaptool_set_sasl_defaults(struct ldap *ld, unsigned int flags, char *mech, char *authid, char *username, char *passwd, char *realm)
{
  struct anonymous$15 *defaults;
  char *login = (char *)(void *)0;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc(sizeof(struct anonymous$15) /*40ul*/ , (unsigned long int)1);
  defaults = (struct anonymous$15 *)return_value_calloc$1;
  if(defaults == ((struct anonymous$15 *)NULL))
    return (void *)0;

  else
  {
    login=getlogin();
    if(login == ((char *)NULL))
      login = "";

    if(!(mech == ((char *)NULL)))
      defaults->mech=strdup(mech);

    else
      ldap_get_option(ld, 0x6100, (void *)&defaults->mech);
    if(!(authid == ((char *)NULL)))
      defaults->authid=strdup(authid);

    else
    {
      ldap_get_option(ld, 0x6102, (void *)&defaults->authid);
      if(defaults->authid == ((char *)NULL))
        defaults->authid=strdup(login);

    }
    if(!(username == ((char *)NULL)))
      defaults->username=strdup(username);

    else
    {
      ldap_get_option(ld, 0x6103, (void *)&defaults->username);
      if(defaults->username == ((char *)NULL) && flags == 1U)
        defaults->username=strdup(login);

      else
        if(defaults->username == ((char *)NULL))
          defaults->username=strdup("");

    }
    if(!(passwd == ((char *)NULL)))
      defaults->passwd=strdup(passwd);

    else
      defaults->passwd=strdup("");
    if(!(realm == ((char *)NULL)))
      defaults->realm = realm;

    else
      ldap_get_option(ld, 0x6101, (void *)&defaults->realm);
    return (void *)defaults;
  }
}

// ldcltExit
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 698
extern void ldcltExit(signed int status)
{
  signed long int tim;
  tim=time((signed long int *)(void *)0);
  char *return_value_ctime$1;
  return_value_ctime$1=ctime(&tim);
  printf("ldclt[%d]: Ending at %s", mctx.pid, return_value_ctime$1);
  printf("ldclt[%d]: Exit status %d - ", mctx.pid, status);
  switch(status)
  {
    case 0:
    {
      printf("No problem during execution.\n");
      break;
    }
    case 2:
    {
      printf("Error in parameters.\n");
      break;
    }
    case 3:
    {
      printf("Max errors reached.\n");
      break;
    }
    case 4:
    {
      printf("Cannot bind.\n");
      break;
    }
    case 5:
    {
      printf("Cannot load libssl.\n");
      break;
    }
    case 7:
    {
      printf("Cannot initialize ldclt.\n");
      break;
    }
    case 99:
    {
      printf("Other kind of error.\n");
      break;
    }
    default:
      printf("Undocumented error - update source code.\n");
  }
  exit(status);
}

// ldclt_alloc_ber
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 4040
signed int ldclt_alloc_ber(struct ldap *ld, struct berelement **berp)
{
  signed int err;
  signed int beropt = 0x01;
  *berp=ber_alloc_t(beropt);
  if(*berp == ((struct berelement *)NULL))
    err = -10;

  else
    err = 0x00;
  return err;
}

// ldclt_clientauth
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 387
static signed int ldclt_clientauth(struct thread_context *tttctx, struct ldap *ld, const char *path, const char *certname, const char *pwd)
{
  const char *colon = (const char *)(void *)0;
  char *token_name = (char *)(void *)0;
  struct PK11SlotInfoStr *slot = (struct PK11SlotInfoStr *)(void *)0;
  signed int rc = 0;
  signed int thrdNum = 0;
  if(!(tttctx == ((struct thread_context *)NULL)))
    thrdNum = tttctx->thrdNum;

  colon=PL_strchr(certname, (char)58);
  if(!(colon == ((const char *)NULL)))
    token_name=PL_strndup(certname, (unsigned int)(colon - certname));

  if(!(token_name == ((char *)NULL)))
    slot=PK11_FindSlotByName(token_name);

  else
    slot=PK11_GetInternalKeySlot();
  if(slot == ((struct PK11SlotInfoStr *)NULL))
  {
    signed int return_value_PR_GetError$1;
    return_value_PR_GetError$1=PR_GetError();
    printf("ldclt[%d]: T%03d: Cannot find slot for token %s - %d\n", mctx.pid, thrdNum, token_name != ((char *)NULL) ? token_name : "internal", return_value_PR_GetError$1);
    fflush(stdout);
    goto done;
  }

  NSS_SetDomesticPolicy();
  PK11_SetPasswordFunc(ldclt_get_sec_pwd);
  enum _SECStatus return_value_PK11_Authenticate$2;
  return_value_PK11_Authenticate$2=PK11_Authenticate(slot, 0, (void *)pwd);
  rc = (signed int)return_value_PK11_Authenticate$2;
  if(!(rc == SECSuccess))
  {
    signed int return_value_PR_GetError$3;
    return_value_PR_GetError$3=PR_GetError();
    printf("ldclt[%d]: T%03d: Cannot authenticate to token %s - %d\n", mctx.pid, thrdNum, token_name != ((char *)NULL) ? token_name : "internal", return_value_PR_GetError$3);
    fflush(stdout);
    goto done;
  }

  rc=ldap_set_option(ld, 0x6004, (const void *)certname);
  if(!(rc == 0))
  {
    signed int *return_value___errno_location$4;
    return_value___errno_location$4=__errno_location();
    char *return_value_my_ldap_err2string$5;
    return_value_my_ldap_err2string$5=my_ldap_err2string(rc);
    printf("ldclt[%d]: T%03d: Cannot ldap_set_option(ld, LDAP_OPT_X_CERTFILE, %s), errno=%d ldaperror=%d:%s\n", mctx.pid, thrdNum, certname, *return_value___errno_location$4, rc, return_value_my_ldap_err2string$5);
    fflush(stdout);
    goto done;
  }

  rc=ldap_set_option(ld, 0x6005, (const void *)pwd);
  if(!(rc == 0))
  {
    signed int *return_value___errno_location$6;
    return_value___errno_location$6=__errno_location();
    char *return_value_my_ldap_err2string$7;
    return_value_my_ldap_err2string$7=my_ldap_err2string(rc);
    printf("ldclt[%d]: T%03d: Cannot ldap_set_option(ld, LDAP_OPT_X_KEYFILE, %s), errno=%d ldaperror=%d:%s\n", mctx.pid, thrdNum, pwd, *return_value___errno_location$6, rc, return_value_my_ldap_err2string$7);
    fflush(stdout);
    goto done;
  }


done:
  ;
  PL_strfree(token_name);
  if(!(slot == ((struct PK11SlotInfoStr *)NULL)))
    PK11_FreeSlot(slot);

  return rc;
}

// ldclt_create_deref_control
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 3922
signed int ldclt_create_deref_control(struct ldap *ld, char *derefAttr, char **attrs, struct ldapcontrol **ctrlp)
{
  struct berelement *ber;
  signed int rc;
  struct berval *bv = (struct berval *)(void *)0;
  unsigned long int return_value_strlen$2;
  if(ld == ((struct ldap *)NULL))
    return -9;

  else
  {
    _Bool tmp_if_expr$1;
    if(attrs == ((char **)NULL) || ctrlp == ((struct ldapcontrol **)NULL) || derefAttr == ((char *)NULL))
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = (char *)(void *)0 == *attrs ? (_Bool)1 : (_Bool)0;
    _Bool tmp_if_expr$3;
    if(tmp_if_expr$1)
      tmp_if_expr$3 = (_Bool)1;

    else
    {
      return_value_strlen$2=strlen(*attrs);
      tmp_if_expr$3 = (unsigned long int)0 == return_value_strlen$2 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$3)
      return -9;

    else
    {
      signed int return_value_ldclt_alloc_ber$4;
      return_value_ldclt_alloc_ber$4=ldclt_alloc_ber(ld, &ber);
      if(!(return_value_ldclt_alloc_ber$4 == 0x00))
        return -10;

      else
      {
        signed int return_value_ber_printf$5;
        return_value_ber_printf$5=ber_printf(ber, "{{s{v}}}", derefAttr, attrs);
        if((unsigned long int)return_value_ber_printf$5 == 18446744073709551615ul)
        {
          ber_free(ber, 1);
          return -3;
        }

        else
        {
          signed int return_value_ber_flatten$6;
          return_value_ber_flatten$6=ber_flatten(ber, &bv);
          if((unsigned long int)return_value_ber_flatten$6 == 18446744073709551615ul)
          {
            ber_bvfree(bv);
            ber_free(ber, 1);
            return -3;
          }

          else
            if(bv == ((struct berval *)NULL))
            {
              ber_free(ber, 1);
              return -10;
            }

            else
            {
              rc=ldap_control_create("1.3.6.1.4.1.4203.666.5.16", 1, bv, 1, ctrlp);
              ber_bvfree(bv);
              ber_free(ber, 1);
              return rc;
            }
        }
      }
    }
  }
}

// ldclt_dirname
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 366
static char * ldclt_dirname(const char *path)
{
  char sep;
  sep=PR_GetDirectorySeparator();
  char *ptr = (char *)(void *)0;
  char *ret = (char *)(void *)0;
  _Bool tmp_if_expr$1;
  if(!(path == ((const char *)NULL)))
  {
    ptr=strrchr(path, (signed int)sep);
    tmp_if_expr$1 = ptr != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$1 = (_Bool)0;
  _Bool tmp_if_expr$2;
  if(tmp_if_expr$1)
    tmp_if_expr$2 = ptr[(signed long int)1] != 0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$2 = (_Bool)0;
  if(tmp_if_expr$2)
    ret=PL_strndup(path, (unsigned int)(ptr - path));

  else
    ret=PL_strdup(".");
  return ret;
}

// ldclt_flush_genldif
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 2549
extern void ldclt_flush_genldif(void)
{
  write(mctx.genldifFile, (const void *)ldclt_write_genldif_buf, (unsigned long int)ldclt_write_genldif_nb);
  ldclt_write_genldif_pt = ldclt_write_genldif_buf;
  ldclt_write_genldif_nb = 0;
}

// ldclt_get_sec_pwd
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 380
static char * ldclt_get_sec_pwd(struct PK11SlotInfoStr *slot, signed int retry, void *arg)
{
  char *pwd = (char *)arg;
  char *return_value_PL_strdup$1;
  return_value_PL_strdup$1=PL_strdup(pwd);
  return return_value_PL_strdup$1;
}

// ldclt_mutex_init
// file ../ldap/servers/slapd/tools/ldclt/port.h line 56
extern signed int ldclt_mutex_init(union anonymous$0 *mutex)
{
  signed int return_value_pthread_mutex_init$1;
  return_value_pthread_mutex_init$1=pthread_mutex_init(mutex, (const union anonymous *)(void *)0);
  return return_value_pthread_mutex_init$1;
}

// ldclt_mutex_lock
// file ../ldap/servers/slapd/tools/ldclt/port.h line 57
extern signed int ldclt_mutex_lock(union anonymous$0 *mutex)
{
  signed int return_value_pthread_mutex_lock$1;
  return_value_pthread_mutex_lock$1=pthread_mutex_lock(mutex);
  return return_value_pthread_mutex_lock$1;
}

// ldclt_mutex_unlock
// file ../ldap/servers/slapd/tools/ldclt/port.h line 58
extern signed int ldclt_mutex_unlock(union anonymous$0 *mutex)
{
  signed int return_value_pthread_mutex_unlock$1;
  return_value_pthread_mutex_unlock$1=pthread_mutex_unlock(mutex);
  return return_value_pthread_mutex_unlock$1;
}

// ldclt_sleep
// file ../ldap/servers/slapd/tools/ldclt/port.h line 59
extern void ldclt_sleep(signed int nseconds)
{
  sleep((unsigned int)nseconds);
}

// ldclt_thread_create
// file ../ldap/servers/slapd/tools/ldclt/port.h line 60
extern signed int ldclt_thread_create(unsigned long int *tid, void * (*fct)(void *), void *param)
{
  signed int return_value_pthread_create$1;
  return_value_pthread_create$1=pthread_create(tid, (const union pthread_attr_t *)(void *)0, fct, param);
  return return_value_pthread_create$1;
}

// ldclt_write_genldif
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 2557
void ldclt_write_genldif(char *str, signed int lgth)
{
  if(ldclt_write_genldif_buf == ((char *)NULL))
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc((unsigned long int)65536);
    ldclt_write_genldif_buf = (char *)return_value_malloc$1;
    ldclt_write_genldif_pt = ldclt_write_genldif_buf;
    ldclt_write_genldif_nb = 0;
  }

  if(lgth + ldclt_write_genldif_nb >= 65536)
    ldclt_flush_genldif();

  strncpy(ldclt_write_genldif_pt, str, (unsigned long int)lgth);
  ldclt_write_genldif_pt = ldclt_write_genldif_pt + (signed long int)lgth;
  ldclt_write_genldif_nb = ldclt_write_genldif_nb + lgth;
}

// loadDataListFile
// file ../ldap/servers/slapd/tools/ldclt/data.c line 310
signed int loadDataListFile(struct data_list_file *dlf)
{
  struct _IO_FILE *ifile;
  char line[512l];
  ifile=fopen(dlf->fname, "r");
  char *return_value_fgets$1;
  char *return_value_fgets$4;
  unsigned long int return_value_strlen$6;
  unsigned long int return_value_strlen$5;
  if(ifile == ((struct _IO_FILE *)NULL))
  {
    perror(dlf->fname);
    fprintf(stderr, "Error: cannot open file \"%s\"\n", dlf->fname);
    return -1;
  }

  else
  {
    dlf->strNb = 0;
    do
    {
      return_value_fgets$1=fgets(line, 512, ifile);
      if(return_value_fgets$1 == ((char *)NULL))
        break;

      dlf->strNb = dlf->strNb + 1;
    }
    while((_Bool)1);
    void *return_value_malloc$2;
    return_value_malloc$2=malloc((unsigned long int)dlf->strNb * sizeof(char *) /*8ul*/ );
    dlf->str = (char **)return_value_malloc$2;
    signed int return_value_fseek$3;
    return_value_fseek$3=fseek(ifile, (signed long int)0, 0);
    if(!(return_value_fseek$3 == 0))
    {
      perror(dlf->fname);
      fprintf(stderr, "Error: cannot rewind file \"%s\"\n", dlf->fname);
      fclose(ifile);
      return -1;
    }

    else
    {
      dlf->strNb = 0;
      do
      {
        return_value_fgets$4=fgets(line, 512, ifile);
        if(return_value_fgets$4 == ((char *)NULL))
          break;

        unsigned long int return_value_strlen$7;
        return_value_strlen$7=strlen(line);
        if(return_value_strlen$7 >= 1ul)
        {
          return_value_strlen$6=strlen(line);
          if((signed int)line[-1l + (signed long int)return_value_strlen$6] == 10)
          {
            return_value_strlen$5=strlen(line);
            line[(signed long int)(return_value_strlen$5 - (unsigned long int)1)] = (char)0;
          }

        }

        dlf->str[(signed long int)dlf->strNb]=strdup(line);
        dlf->strNb = dlf->strNb + 1;
      }
      while((_Bool)1);
      signed int return_value_fclose$8;
      return_value_fclose$8=fclose(ifile);
      if(!(return_value_fclose$8 == 0))
      {
        perror(dlf->fname);
        fprintf(stderr, "Error: cannot fclose file \"%s\"\n", dlf->fname);
        return -1;
      }

      else
        return 0;
    }
  }
}

// loadImages
// file ../ldap/servers/slapd/tools/ldclt/data.c line 72
extern signed int loadImages(char *dirpath)
{
  struct __dirstream *dirp = (struct __dirstream *)(void *)0;
  struct dirent *direntp;
  char *fileName;
  char name[1024l];
  struct stat stat_buf;
  signed int fd = -1;
  signed int ret;
  signed int rc = 0;
  mctx.images = (struct image *)(void *)0;
  mctx.imagesNb = 0;
  mctx.imagesLast = -1;
  ret=ldclt_mutex_init(&mctx.imagesLast_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$1;
    return_value_strerror$1=strerror(ret);
    fprintf(stderr, "ldclt: %s\n", return_value_strerror$1);
    fprintf(stderr, "Error: cannot initiate imagesLast_mutex\n");
    fflush(stderr);
    rc = -1;
    goto exit;
  }

  dirp=opendir(dirpath);
  if(dirp == ((struct __dirstream *)NULL))
  {
    perror(dirpath);
    fprintf(stderr, "ldlct: cannot load images from %s\n", dirpath);
    fprintf(stderr, "ldclt: try using -e imagesdir=path\n");
    fflush(stderr);
    rc = -1;
  }

  else
    do
    {
      direntp=readdir(dirp);
      if(direntp == ((struct dirent *)NULL))
        break;

      fileName = direntp->d_name;
      char *return_value_getExtend$14;
      return_value_getExtend$14=getExtend(fileName);
      signed int return_value_strcmp$15;
      return_value_strcmp$15=strcmp(return_value_getExtend$14, "jpg");
      if(return_value_strcmp$15 == 0)
      {
        mctx.imagesNb = mctx.imagesNb + 1;
        void *return_value_realloc$2;
        return_value_realloc$2=realloc((void *)mctx.images, (unsigned long int)mctx.imagesNb * sizeof(struct image) /*24ul*/ );
        mctx.images = (struct image *)return_value_realloc$2;
        if(mctx.images == ((struct image *)NULL))
        {
          signed int *return_value___errno_location$3;
          return_value___errno_location$3=__errno_location();
          signed int *return_value___errno_location$4;
          return_value___errno_location$4=__errno_location();
          char *return_value_strerror$5;
          return_value_strerror$5=strerror(*return_value___errno_location$4);
          printf("Error: cannot realloc(mctx.images), error=%d (%s)\n", *return_value___errno_location$3, return_value_strerror$5);
          rc = -1;
          break;
        }

        unsigned long int return_value_strlen$6;
        return_value_strlen$6=strlen(fileName);
        void *return_value_malloc$7;
        return_value_malloc$7=malloc(return_value_strlen$6 + (unsigned long int)1);
        (mctx.images + (signed long int)(mctx.imagesNb - 1))->name = (char *)return_value_malloc$7;
        if((mctx.images + (signed long int)(mctx.imagesNb + -1))->name == ((char *)NULL))
        {
          signed int *return_value___errno_location$8;
          return_value___errno_location$8=__errno_location();
          signed int *return_value___errno_location$9;
          return_value___errno_location$9=__errno_location();
          char *return_value_strerror$10;
          return_value_strerror$10=strerror(*return_value___errno_location$9);
          printf("Error: cannot malloc(mctx.images[%d]).name, error=%d (%s)\n", mctx.imagesNb - 1, *return_value___errno_location$8, return_value_strerror$10);
          rc = -1;
          break;
        }

        strcpy((mctx.images + (signed long int)(mctx.imagesNb - 1))->name, fileName);
        snprintf(name, sizeof(char [1024l]) /*1024ul*/ , "%s/%s", dirpath, fileName);
        name[(signed long int)(sizeof(char [1024l]) /*1024ul*/  - (unsigned long int)1)] = (char)0;
        fd=open(name, 00);
        if(!(fd >= 0))
        {
          perror(name);
          fprintf(stderr, "Cannot open(%s)\n", (const void *)name);
          fflush(stderr);
          rc = -1;
          break;
        }

        signed int return_value_fstat$11;
        return_value_fstat$11=fstat(fd, &stat_buf);
        if(!(return_value_fstat$11 >= 0))
        {
          perror(name);
          fprintf(stderr, "Cannot stat(%s)\n", (const void *)name);
          fflush(stderr);
          rc = -1;
          break;
        }

        (mctx.images + (signed long int)(mctx.imagesNb - 1))->length = (signed int)stat_buf.st_size;
        void *return_value_mmap$12;
        return_value_mmap$12=mmap(NULL, (unsigned long int)stat_buf.st_size, 0x1, 0x01, fd, (signed long int)0);
        (mctx.images + (signed long int)(mctx.imagesNb - 1))->data = (char *)return_value_mmap$12;
        if((mctx.images + (signed long int)(mctx.imagesNb + -1))->data == (char *)-1)
        {
          perror(name);
          fprintf(stderr, "Cannot mmap(%s)\n", (const void *)name);
          fflush(stderr);
          rc = -1;
          break;
        }

        signed int return_value_close$13;
        return_value_close$13=close(fd);
        if(!(return_value_close$13 >= 0))
        {
          perror(name);
          fprintf(stderr, "Cannot close(%s)\n", (const void *)name);
          fflush(stderr);
          rc = -1;
          break;
        }

        else
          fd = -1;
      }

    }
    while((_Bool)1);

exit:
  ;
  signed int return_value_closedir$16;
  if(!(dirp == ((struct __dirstream *)NULL)))
  {
    return_value_closedir$16=closedir(dirp);
    if(!(return_value_closedir$16 >= 0))
    {
      perror(dirpath);
      fprintf(stderr, "Cannot closedir(%s)\n", dirpath);
      fflush(stderr);
      rc = -1;
    }

  }

  if(!(fd == -1))
    close(fd);

  return rc;
}

// main
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 2329
signed int main(signed int argc, char **argv)
{
  signed int opt_ret;
  signed int i;
  signed long int tim;
  char *argvList;
  signed int found;
  char verStr[40l];
  PR_Init((enum PRThreadType)PR_SYSTEM_THREAD, (enum PRThreadPriority)PR_PRIORITY_NORMAL, (unsigned int)0);
  argvList=buildArgListString(argc, argv);
  sprintf(verStr, "ldclt version %s", ldcltVersion);
  printf("%s\n", (const void *)verStr);
  mctx.attrlistNb = 0;
  mctx.attrsonly = 0;
  mctx.baseDN = "dc=example,dc=com";
  mctx.baseDNLow = -1;
  mctx.baseDNHigh = -1;
  mctx.bindDN = (char *)(void *)0;
  mctx.bindDNLow = -1;
  mctx.bindDNHigh = -1;
  mctx.dlf = (struct data_list_file *)(void *)0;
  mctx.exitStatus = 0;
  mctx.filter = (char *)(void *)0;
  mctx.globStatsCnt = 90;
  mctx.hostname = "localhost";
  mctx.ignErrNb = 0;
  mctx.images = (struct image *)(void *)0;
  mctx.imagesDir = "../../data/ldclt/images";
  mctx.inactivMax = 3;
  mctx.incr = 1;
  mctx.maxErrors = 1000;
  mctx.mode = (unsigned int)0x00000000;
  mctx.mod2 = (unsigned int)0x00000000;
  mctx.nbNoActivity = 0;
  mctx.nbSamples = -1;
  mctx.nbThreads = 10;
  mctx.opListTail = (struct oper *)(void *)0;
  mctx.passwd = (char *)(void *)0;
  mctx.pid=getpid();
  mctx.port = 389;
  mctx.randomLow = -1;
  mctx.randomHigh = -1;
  mctx.referral = 1;
  mctx.sampling = 10;
  mctx.sasl_authid = (char *)(void *)0;
  mctx.sasl_flags = 2U;
  mctx.sasl_mech = (char *)(void *)0;
  mctx.sasl_realm = (char *)(void *)0;
  mctx.sasl_secprops = (char *)(void *)0;
  mctx.sasl_username = (char *)(void *)0;
  mctx.scope = (signed int)0x0002;
  mctx.slaveConn = 0;
  mctx.slavesNb = 0;
  mctx.srch_nentries = -1;
  mctx.timeout = 30;
  mctx.totalReq = -1;
  mctx.waitSec = 0;
  s1ctx.cnxduration = 3600;
  s1ctx.maxcnxnb = 5000;
  s1ctx.wait = 10;
  mctx.object.attribsNb = 0;
  mctx.object.rdn = (struct vers_attribute *)(void *)0;
  i = 0;
  for( ; !(65 + i >= 72); i = i + 1)
    mctx.object.var[(signed long int)i] = (char *)(void *)0;
  signed int return_value_decodeExecParams$1;
  signed int return_value_atoi$2;
  signed int return_value_saslSetParam$4;
  signed int return_value_decodeScopeParams$5;
  do
  {
    opt_ret=getopt(argc, argv, "a:b:D:e:E:f:h:i:I:n:N:o:p:qQr:R:s:S:t:T:vVw:W:Z:H");
    if(opt_ret == -1)
      break;

    switch(opt_ret)
    {
      case 97:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00000004;
        mctx.asyncMax=atoi(optarg);
        mctx.asyncMin = mctx.asyncMax / 2;
        break;
      }
      case 98:
      {
        mctx.baseDN = optarg;
        break;
      }
      case 68:
      {
        mctx.bindDN = optarg;
        break;
      }
      case 101:
      {
        return_value_decodeExecParams$1=decodeExecParams(optarg);
        if(!(return_value_decodeExecParams$1 >= 0))
          ldcltExit(2);

        break;
      }
      case 69:
      {
        mctx.maxErrors=atoi(optarg);
        break;
      }
      case 102:
      {
        mctx.filter = optarg;
        break;
      }
      case 104:
      {
        mctx.hostname = optarg;
        break;
      }
      case 105:
      {
        mctx.inactivMax=atoi(optarg);
        break;
      }
      case 73:
      {
        found = 0;
        i = 0;
        for( ; !(i >= mctx.ignErrNb); i = i + 1)
        {
          return_value_atoi$2=atoi(optarg);
          if(mctx.ignErr[(signed long int)i] == return_value_atoi$2)
            found = 1;

        }
        if(!(found == 0))
          break;

        if(mctx.ignErrNb == 20)
        {
          fprintf(stderr, "Error: too many errors to ignore.\n");
          ldcltExit(2);
        }

        signed int tmp_post$3 = mctx.ignErrNb;
        mctx.ignErrNb = mctx.ignErrNb + 1;
        mctx.ignErr[(signed long int)tmp_post$3]=atoi(optarg);
        break;
      }
      case 110:
      {
        mctx.nbThreads=atoi(optarg);
        break;
      }
      case 78:
      {
        mctx.nbSamples=atoi(optarg);
        break;
      }
      case 111:
      {
        return_value_saslSetParam$4=saslSetParam(optarg);
        if(!(return_value_saslSetParam$4 >= 0))
          ldcltExit(2);

        mctx.mod2 = mctx.mod2 | (unsigned int)0x00000040;
        break;
      }
      case 112:
      {
        mctx.port=atoi(optarg);
        break;
      }
      case 80:
      {
        masterPort=atoi(optarg);
        break;
      }
      case 113:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00000008;
        break;
      }
      case 81:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00000008;
        mctx.mode = mctx.mode | (unsigned int)0x00000010;
        break;
      }
      case 114:
      {
        mctx.randomLow=atoi(optarg);
        break;
      }
      case 82:
      {
        mctx.randomHigh=atoi(optarg);
        break;
      }
      case 115:
      {
        return_value_decodeScopeParams$5=decodeScopeParams(optarg);
        if(!(return_value_decodeScopeParams$5 >= 0))
          ldcltExit(2);

        break;
      }
      case 116:
      {
        mctx.timeout=atoi(optarg);
        break;
      }
      case 83:
      {
        mctx.slaves[(signed long int)mctx.slavesNb] = optarg;
        mctx.slavesNb = mctx.slavesNb + 1;
        break;
      }
      case 84:
      {
        mctx.totalReq=atoi(optarg);
        break;
      }
      case 118:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00000001;
        break;
      }
      case 86:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00000001;
        mctx.mode = mctx.mode | (unsigned int)0x00000002;
        break;
      }
      case 119:
      {
        mctx.passwd = optarg;
        break;
      }
      case 87:
      {
        mctx.waitSec=atoi(optarg);
        break;
      }
      case 90:
      {
        mctx.mode = mctx.mode | (unsigned int)0x00000020;
        mctx.certfile = optarg;
        break;
      }
      case 72:
      {
        usage();
        ldcltExit(0);
        break;
      }
      case 63:
      {
        usage();
        ldcltExit(2);
      }
    }
  }
  while((_Bool)1);
  if(!(optind == argc))
  {
    fprintf(stderr, "Error: unexpected extra arguments.\n");
    ldcltExit(2);
  }

  if(!((1024u & mctx.mode) == 0u))
  {
    mctx.mode = mctx.mode | (unsigned int)0x40000000;
    mctx.mode = mctx.mode | (unsigned int)0x00000800;
  }

  if(!(mctx.nbThreads >= 1))
  {
    fprintf(stderr, "Error: it must be at least 1 thread, not \"%d\"\n", mctx.nbThreads);
    ldcltExit(2);
  }

  if(mctx.nbThreads >= 1001)
  {
    fprintf(stderr, "Error: too many threads %d, maximum is %d\n", mctx.nbThreads, 1000);
    ldcltExit(2);
  }

  if((1826u & mctx.mod2) == 0u && (2231518208u & mctx.mode) == 0u)
  {
    fprintf(stderr, "Error: don't know what to do...\n");
    fprintf(stderr, "Error: please use option -e for this purpose.\n");
    ldcltExit(2);
  }

  if((2u & mctx.mod2) == 0u && !((8u & mctx.mod2) == 0u))
  {
    fprintf(stderr, "Error: -e append requires -e genldif.\n");
    ldcltExit(2);
  }

  if(!((4u & mctx.mod2) == 0u) && !(mctx.filter == ((char *)NULL)))
  {
    fprintf(stderr, "Error: -f and -e rdn= are exclusive.\n");
    ldcltExit(2);
  }

  if(!((4u & mctx.mod2) == 0u) && !((536870912u & mctx.mode) == 0u))
  {
    fprintf(stderr, "Error: exclusive -e random and -e rdn\n");
    ldcltExit(2);
  }

  if(!((4u & mctx.mod2) == 0u) && !((134217728u & mctx.mode) == 0u))
  {
    fprintf(stderr, "Error: exclusive -e incr and -e rdn\n");
    ldcltExit(2);
  }

  if((4u & mctx.mod2) == 0u && mctx.filter == ((char *)NULL) && !((2231518208u & mctx.mode) == 0u))
  {
    fprintf(stderr, "Error: missing filter...\n");
    fprintf(stderr, "Error: use -f or -e rdn=value for this purpose.\n");
    ldcltExit(2);
  }

  if((2u & mctx.mod2) == 0u && (1792u & mctx.mod2) == 0u && (2231518208u & mctx.mode) == 0u && !(mctx.filter == ((char *)NULL)))
  {
    fprintf(stderr, "Error: do not need filter -f\n");
    ldcltExit(2);
  }

  if((2u & mctx.mod2) == 0u && (2231518208u & mctx.mode) == 0u && !((4u & mctx.mod2) == 0u))
  {
    fprintf(stderr, "Error: do not need -e rdn=value\n");
    ldcltExit(2);
  }

  if(!((4u & mctx.mod2) == 0u) && (mctx.randomHigh >= 1 || mctx.randomLow >= 0))
  {
    fprintf(stderr, "Error: -e rdn exclusive with -r or -R\n");
    ldcltExit(2);
  }

  if(!((671088640u & mctx.mode) == 0u))
  {
    if(mctx.randomHigh >= 1 && !(mctx.randomLow >= 0) || mctx.randomLow >= 0 && !(mctx.randomHigh >= 0) || !(mctx.randomHigh >= mctx.randomLow))
    {
      fprintf(stderr, "Error: invalid random levels %d and %d\n", mctx.randomLow, mctx.randomHigh);
      fprintf(stderr, "Error: use both options -r and -R for this purpose.\n");
      ldcltExit(2);
    }

    if(!(mctx.randomHigh >= 0) && !(mctx.randomLow >= 0))
    {
      fprintf(stderr, "Error: missing values range.\n");
      fprintf(stderr, "Error: use both options -r and -R for this purpose.\n");
      ldcltExit(2);
    }

  }

  if(!(mctx.inactivMax >= 0))
  {
    fprintf(stderr, "Error: max times inactivity should not be negative.\n");
    ldcltExit(2);
  }

  if(!(mctx.maxErrors >= 0))
  {
    fprintf(stderr, "Error: max allowed errors should not be negative.\n");
    ldcltExit(2);
  }

  if(!((134217728u & mctx.mode) == 0u) && !((536870912u & mctx.mode) == 0u))
  {
    fprintf(stderr, "Error: modes -e incr and -e random are exclusive.\n");
    ldcltExit(2);
  }

  if((134217728u & mctx.mode) == 0u && !((262144u & mctx.mode) == 0u))
  {
    fprintf(stderr, "Error: mode -e noloop requires mode -e incr.\n");
    ldcltExit(2);
  }

  if((4u & mctx.mod2) == 0u && (671088640u & mctx.mode) == 0u && !((84017152u & mctx.mode) == 0u))
  {
    fprintf(stderr, "Error: -e add requires either -e incr/random/rdn\n");
    ldcltExit(2);
  }

  _Bool tmp_if_expr$6;
  if(!(mctx.filter == ((char *)NULL)))
  {
    i = 0;
    do
    {
      if(!((signed int)mctx.filter[(signed long int)i] == 0))
        tmp_if_expr$6 = (signed int)mctx.filter[(signed long int)i] != 61 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$6 = (_Bool)0;
      if(!tmp_if_expr$6)
        break;

      i = i + 1;
    }
    while((_Bool)1);
    if(!((signed int)mctx.filter[(signed long int)i] == 61))
    {
      fprintf(stderr, "Error: filter must be \"attrib=value\", not \"%s\"\n", mctx.filter);
      ldcltExit(2);
    }

  }

  if((1u & mctx.mod2) == 0u && (42008576u & mctx.mode) == 0u && !((67108864u & mctx.mode) == 0u))
  {
    fprintf(stderr, "Error: missing classes (option -e)\n");
    ldcltExit(2);
  }

  if((536870912u & mctx.mode) == 0u && !((4194304u & mctx.mode) == 0u))
  {
    fprintf(stderr, "Error: -e string is only valid with -e random.\n");
    ldcltExit(2);
  }

  if(!(mctx.waitSec >= 0))
  {
    fprintf(stderr, "Error: -W should have a positive value.\n");
    ldcltExit(2);
  }

  if(!((2097152u & mctx.mode) == 0u) && (!(mctx.baseDNHigh >= 0) || !(mctx.baseDNLow >= 0)))
  {
    fprintf(stderr, "Error: missing ranges for randombase.\n");
    fprintf(stderr, "Error: use option -e randombaselow=\n");
    fprintf(stderr, "Error: use option -e randombasehigh=\n");
    ldcltExit(2);
  }

  if(!((16u & mctx.mod2) == 0u) && !((2048u & mctx.mode) == 0u))
  {
    fprintf(stderr, "Error : exclusive -e randombinddn and -e randombinddnfromfile\n");
    ldcltExit(2);
  }

  if(!((2048u & mctx.mode) == 0u) && (!(mctx.bindDNHigh >= 0) || !(mctx.bindDNLow >= 0)))
  {
    fprintf(stderr, "Error: missing ranges for randombinddn.\n");
    fprintf(stderr, "Error: use option -e randombinddnlow=\n");
    fprintf(stderr, "Error: use option -e randombinddnhigh=\n");
    ldcltExit(2);
  }

  if(!((128u & mctx.mod2) == 0u) && (!(mctx.sasl_authid_high >= 0) || !(mctx.sasl_authid_low >= 0)))
  {
    fprintf(stderr, "Error: missing ranges for randomauthid.\n");
    fprintf(stderr, "Error: use option -e randomauthidlow=\n");
    fprintf(stderr, "Error: use option -e randomauthidhigh=\n");
    ldcltExit(2);
  }

  if(!((64u & mctx.mode) == 0u))
  {
    if((32u & mctx.mode) == 0u)
    {
      fprintf(stderr, "Error: no certificate DB specified.\n");
      fprintf(stderr, "Error: use -Z certfile.\n");
      ldcltExit(2);
    }

    if(mctx.cltcertname == ((char *)NULL))
    {
      fprintf(stderr, "Error: no client certificate name specified.\n");
      fprintf(stderr, "Error: use option -e cltcertname=\n");
      ldcltExit(2);
    }

    if(mctx.keydbfile == ((char *)NULL))
    {
      fprintf(stderr, "Error: no key database file specified.\n");
      fprintf(stderr, "Error: use option -e keydbfile=\n");
      ldcltExit(2);
    }

    if(mctx.keydbpin == ((char *)NULL))
    {
      fprintf(stderr, "Error: no key database password specified.\n");
      fprintf(stderr, "Error: use option -e keydbpin=\n");
      ldcltExit(2);
    }

  }

  if((131072u & mctx.mode) == 0u && !((4096u & mctx.mode) == 0u))
  {
    fprintf(stderr, "Error : option -e withnewparent needs -e rename\n");
    ldcltExit(2);
  }

  if(!(mctx.attrsonly == 0) && !(mctx.attrsonly == 1))
  {
    fprintf(stderr, "Error : option -e attrsonly=%d not 0|1\n", mctx.attrsonly);
    ldcltExit(2);
  }

  if(!((1024u & mctx.mode) == 0u))
  {
    if(!(s1ctx.cnxduration >= 1))
    {
      fprintf(stderr, "Error : -e scalab01_cnxduration=%d <= 0\n", s1ctx.cnxduration);
      ldcltExit(2);
    }

    if(!(s1ctx.maxcnxnb >= 1))
    {
      fprintf(stderr, "Error : -e scalab01_maxcnxnb=%d <= 0\n", s1ctx.maxcnxnb);
      ldcltExit(2);
    }

    if(!(s1ctx.wait >= 1))
    {
      fprintf(stderr, "Error : -e scalab01_wait=%d <= 0\n", s1ctx.wait);
      ldcltExit(2);
    }

  }

  if(mctx.referral == 2 && (mctx.bindDN == ((char *)NULL) || mctx.passwd == ((char *)NULL)))
  {
    fprintf(stderr, "Error: -e referral=rebind needs -D and -w\n");
    ldcltExit(2);
  }

  if((1u & mctx.mod2) == 0u && (134217728u & mctx.mode) == 0u && !((512u & mctx.mode) == 0u))
  {
    fprintf(stderr, "Error: -e commoncounter needs -e incr or -e object\n");
    ldcltExit(2);
  }

  if((0x80000000 & mctx.mode) == 0u && !(mctx.attrlistNb == 0))
  {
    fprintf(stderr, "Error : -e attrlist requires -e esearch\n");
    ldcltExit(2);
  }

  if(!((2u & mctx.mod2) == 0u) && !((2231518208u & mctx.mode) == 0u))
  {
    fprintf(stderr, "Error : -e genldif is exclusive.\n");
    ldcltExit(2);
  }

  if((1u & mctx.mod2) == 0u && !((4u & mctx.mod2) == 0u))
  {
    fprintf(stderr, "Error : -e rdn needs -e object.\n");
    ldcltExit(2);
  }

  signed int return_value_basicInit$7;
  return_value_basicInit$7=basicInit();
  if(!(return_value_basicInit$7 >= 0))
    ldcltExit(7);

  char *return_value_my_ldap_err2string$8;
  if(!((1u & mctx.mode) == 0u))
  {
    printf("%s\n", argvList);
    printf("Process ID         = %d\n", mctx.pid);
    printf("Host to connect    = %s\n", mctx.hostname);
    printf("Port number        = %d\n", mctx.port);
    if(mctx.bindDN == ((char *)NULL))
      printf("Bind DN            = NULL\n");

    else
      printf("Bind DN            = %s\n", mctx.bindDN);
    if(mctx.passwd == ((char *)NULL))
      printf("Passwd             = NULL\n");

    else
      printf("Passwd             = %s\n", mctx.passwd);
    switch(mctx.referral)
    {
      case 0:
      {
        printf("Referral           = off\n");
        break;
      }
      case 1:
      {
        printf("Referral           = on\n");
        break;
      }
      case 2:
        printf("Referral           = rebind\n");
    }
    printf("Base DN            = %s\n", mctx.baseDN);
    if(mctx.filter == ((char *)NULL))
      printf("Filter             = NULL\n");

    else
      printf("Filter             = \"%s\"\n", mctx.filter);
    if(mctx.attrlistNb >= 1)
    {
      printf("Attributes list    =");
      i = 0;
      for( ; !(i >= mctx.attrlistNb); i = i + 1)
        printf(" %s", mctx.attrlist[(signed long int)i]);
      printf("\n");
    }

    printf("Max times inactive = %d\n", mctx.inactivMax);
    printf("Max allowed errors = %d\n", mctx.maxErrors);
    printf("Number of samples  = %d\n", mctx.nbSamples);
    printf("Number of threads  = %d\n", mctx.nbThreads);
    printf("Total op. req.     = %d\n", mctx.totalReq);
    printf("Running mode       = 0x%08x\n", mctx.mode);
    printf("Running mode       =");
    dumpModeValues();
    printf("\n");
    if(!((1024u & mctx.mode) == 0u))
    {
      printf("Scalab01 cnx dur.  = %d sec\n", s1ctx.cnxduration);
      printf("Scalab01 max nb cnx= %d\n", s1ctx.maxcnxnb);
      printf("Scalab01 wait time = %d sec\n", s1ctx.wait);
    }

    printf("LDAP oper. timeout = %d sec\n", mctx.timeout);
    printf("Sampling interval  = %d sec\n", mctx.sampling);
    if(!((0x80000000 & mctx.mode) == 0u))
    {
      switch(mctx.scope)
      {
        case (signed int)0x0000:
        {
          printf("Scope              = base\n");
          break;
        }
        case (signed int)0x0001:
        {
          printf("Scope              = one level\n");
          break;
        }
        case (signed int)0x0002:
          printf("Scope              = subtree\n");
      }
      printf("Attrsonly          = %d\n", mctx.attrsonly);
    }

    if(!(mctx.images == ((struct image *)NULL)))
      printf("Images directory   = %s\n", mctx.imagesDir);

    if(mctx.randomLow >= 0 && !((671088640u & mctx.mode) == 0u))
      printf("Values range       = [%d , %d]\n", mctx.randomLow, mctx.randomHigh);

    if((4u & mctx.mod2) == 0u && !((671088640u & mctx.mode) == 0u))
    {
      printf("Filter's head      = \"%s\"\n", mctx.randomHead);
      printf("Filter's tail      = \"%s\"\n", mctx.randomTail);
    }

    if(!((2097152u & mctx.mode) == 0u))
    {
      printf("Base DN's head     = \"%s\"\n", mctx.baseDNHead);
      printf("Base DN's tail     = \"%s\"\n", mctx.baseDNTail);
      printf("Base DN's range    = [%d , %d]\n", mctx.baseDNLow, mctx.baseDNHigh);
    }

    if(!((2048u & mctx.mode) == 0u))
    {
      printf("Bind DN's head     = \"%s\"\n", mctx.bindDNHead);
      printf("Bind DN's tail     = \"%s\"\n", mctx.bindDNTail);
      printf("Bind DN's range    = [%d , %d]\n", mctx.bindDNLow, mctx.bindDNHigh);
      printf("Bind passwd's head = \"%s\"\n", mctx.passwdHead);
      printf("Bind passwd's tail = \"%s\"\n", mctx.passwdTail);
    }

    if(!((128u & mctx.mod2) == 0u))
    {
      printf("Bind Authid's head     = \"%s\"\n", mctx.sasl_authid_head);
      printf("Bind Authid's tail     = \"%s\"\n", mctx.sasl_authid_tail);
      printf("Bind Authid's range    = [%d , %d]\n", mctx.sasl_authid_low, mctx.sasl_authid_high);
    }

    if(!((16384u & mctx.mode) == 0u))
    {
      printf("Attribute's head   = \"%s\"\n", mctx.attrplHead);
      printf("Attribute's tail   = \"%s\"\n", mctx.attrplTail);
    }

    if(!((1024u & mctx.mod2) == 0u))
    {
      printf("Attribute to replace  = \"%s\"\n", mctx.attrplName);
      printf("Attribute value file  = \"%s\"\n", mctx.attrplFile);
    }

    if(!((512u & mctx.mod2) == 0u))
    {
      printf("  Referenced Attribute = \"%s\"\n", mctx.attRef);
      printf("Dereferenced Attribute = \"%s\"\n", mctx.attRefDef);
    }

    if(!((4u & mctx.mode) == 0u))
    {
      printf("Async max pending  = %d\n", mctx.asyncMax);
      printf("Async min pending  = %d\n", mctx.asyncMin);
    }

    i = 0;
    for( ; !(i >= mctx.ignErrNb); i = i + 1)
    {
      return_value_my_ldap_err2string$8=my_ldap_err2string(mctx.ignErr[(signed long int)i]);
      printf("Ignore error       = %d (%s)\n", mctx.ignErr[(signed long int)i], return_value_my_ldap_err2string$8);
    }
    fflush(stdout);
    if(mctx.slavesNb >= 1)
    {
      printf("Slave(s) to check  =");
      i = 0;
      for( ; !(i >= mctx.slavesNb); i = i + 1)
        printf(" %s", mctx.slaves[(signed long int)i]);
      printf("\n");
    }

  }

  tim=time((signed long int *)(void *)0);
  char *return_value_ctime$9;
  return_value_ctime$9=ctime(&tim);
  printf("ldclt[%d]: Starting at %s\n", mctx.pid, return_value_ctime$9);
  signed int return_value_runThem$10;
  return_value_runThem$10=runThem();
  if(!(return_value_runThem$10 >= 0))
    ldcltExit(99);

  signed int return_value_initMainThread$11;
  return_value_initMainThread$11=initMainThread();
  if(!(return_value_initMainThread$11 >= 0))
    ldcltExit(99);

  signed int return_value_monitorThem$12;
  return_value_monitorThem$12=monitorThem();
  if(!(return_value_monitorThem$12 >= 0))
    ldcltExit(99);

  signed int return_value_printGlobalStatistics$13;
  return_value_printGlobalStatistics$13=printGlobalStatistics();
  if(!(return_value_printGlobalStatistics$13 >= 0))
    ldcltExit(99);

  ldcltExit(mctx.exitStatus);
  return mctx.exitStatus;
}

// monitorThem
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 487
signed int monitorThem(void)
{
  signed int i;
  signed int ret;
  signed int nbOpers;
  signed int nbOpersTot;
  signed int allDead = 0;
  signed int status;
  signed long int t;
  struct tm *tmstr;
  char timestamp[128l];
  while(allDead == 0)
  {
    ldclt_sleep(mctx.sampling);
    if(!(mctx.tsfmt == ((char *)NULL)))
    {
      t=time((signed long int *)(void *)0);
      tmstr=localtime(&t);
      strftime(timestamp, sizeof(char [128l]) /*128ul*/ , mctx.tsfmt, tmstr);
    }

    else
      timestamp[(signed long int)0] = (char)0;
    nbOpersTot = 0;
    allDead = 1;
    i = 0;
    for( ; !(i >= mctx.nbThreads); i = i + 1)
    {
      status = 2;
      ret=ldclt_mutex_lock(&tctx[(signed long int)i].nbOpers_mutex);
      if(!(ret == 0))
      {
        char *return_value_strerror$1;
        return_value_strerror$1=strerror(ret);
        fprintf(stderr, "ldclt[%d]: Cannot mutex_lock(T%03d), error=%d (%s)\n", mctx.pid, tctx[(signed long int)i].thrdNum, ret, return_value_strerror$1);
        fflush(stderr);
        return -1;
      }

      nbOpers = tctx[(signed long int)i].nbOpers;
      tctx[(signed long int)i].nbOpers = 0;
      ret=ldclt_mutex_unlock(&tctx[(signed long int)i].nbOpers_mutex);
      if(!(ret == 0))
      {
        char *return_value_strerror$2;
        return_value_strerror$2=strerror(ret);
        fprintf(stderr, "ldclt[%d]: Cannot mutex_unlock(T%03d), error=%d (%s)\n", mctx.pid, tctx[(signed long int)i].thrdNum, ret, return_value_strerror$2);
        fflush(stderr);
        return -1;
      }

      if(!((2u & mctx.mode) == 0u))
        printf("ldclt[%d]: T%03d: nbOpers = %d\n", mctx.pid, tctx[(signed long int)i].thrdNum, nbOpers);

      if(!(nbOpers == 0))
      {
        tctx[(signed long int)i].active = mctx.inactivMax + 1;
        tctx[(signed long int)i].nbInactRow = 0;
        nbOpersTot = nbOpersTot + nbOpers;
      }

      else
      {
        tctx[(signed long int)i].active = tctx[(signed long int)i].active - 1;
        signed int return_value_getThreadStatus$3;
        return_value_getThreadStatus$3=getThreadStatus(&tctx[(signed long int)i], &status);
        if(!(return_value_getThreadStatus$3 >= 0))
        {
          printf("ldclt[%d]: T%03d: Cannot get status\n", mctx.pid, tctx[(signed long int)i].thrdNum);
          status = 2;
        }

        if(tctx[(signed long int)i].active == 0)
        {
          if(!(status == 9))
          {
            tctx[(signed long int)i].nbInactRow = tctx[(signed long int)i].nbInactRow + 1;
            tctx[(signed long int)i].nbInactTot = tctx[(signed long int)i].nbInactTot + 1;
            if((16u & mctx.mode) == 0u)
            {
              printf("ldclt[%d]: T%03d: No activity for %d seconds -- %5d in row, total %5d\n", mctx.pid, tctx[(signed long int)i].thrdNum, (mctx.inactivMax + 1) * mctx.sampling, tctx[(signed long int)i].nbInactRow, tctx[(signed long int)i].nbInactTot);
              fflush(stdout);
            }

            tctx[(signed long int)i].active = mctx.inactivMax + 1;
            mctx.nbNoActivity = mctx.nbNoActivity + 1;
          }

        }

      }
      if(!(status == 9))
        allDead = 0;

    }
    printf("%s%sldclt[%d]: Average rate: %7.2f/thr  (%7.2f/sec), total: %6d\n", (const void *)timestamp, mctx.tsfmt != ((char *)NULL) ? "|" : "", mctx.pid, (float)nbOpersTot / (float)mctx.nbThreads, (float)nbOpersTot / (float)mctx.sampling, nbOpersTot);
    fflush(stdout);
    mctx.totNbOpers = mctx.totNbOpers + nbOpersTot;
    mctx.totNbSamples = mctx.totNbSamples + 1;
    mctx.nbSamples = mctx.nbSamples - 1;
    if(mctx.nbSamples == 0)
    {
      signed int return_value_shutdownThreads$4;
      return_value_shutdownThreads$4=shutdownThreads();
      if(!(return_value_shutdownThreads$4 >= 0))
        printf("ldclt[%d]: Problem while shutting down threads,\n", mctx.pid);

      allDead = 1;
      printf("ldclt[%d]: Number of samples achieved. Bye-bye...\n", mctx.pid);
    }

    if(allDead == 0)
    {
      mctx.globStatsCnt = mctx.globStatsCnt - 1;
      if(mctx.globStatsCnt == 0)
      {
        signed int return_value_printGlobalStatistics$5;
        return_value_printGlobalStatistics$5=printGlobalStatistics();
        if(!(return_value_printGlobalStatistics$5 >= 0))
        {
          printf("ldclt[%d]: Cannot print global statistics...\n", mctx.pid);
          printf("ldclt[%d]: Bye-bye...", mctx.pid);
          ldcltExit(99);
        }

        mctx.globStatsCnt = 90;
      }

    }

  }
  i = 0;
  for( ; !(i >= mctx.nbThreads); i = i + 1)
    if(!(mctx.exitStatus >= tctx[(signed long int)i].exitStatus))
      mctx.exitStatus = tctx[(signed long int)i].exitStatus;

  printf("ldclt[%d]: All threads are dead - exit.\n", mctx.pid);
  fflush(stdout);
  return 0;
}

// msgIdAdd
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 712
extern signed int msgIdAdd(struct thread_context *tttctx, signed int msgid, char *str, char *dn, struct ldapmod **attribs)
{
  if(!((2u & mctx.mode) == 0u))
    printf("ldclt[%d]: T%03d: msgIdAdd (%d, %s)\n", mctx.pid, tttctx->thrdNum, msgid, str);

  if(tttctx->firstMsgId == ((struct msgid_cell *)NULL))
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct msgid_cell) /*2072ul*/ );
    tttctx->firstMsgId = (struct msgid_cell *)return_value_malloc$1;
    if(tttctx->firstMsgId == ((struct msgid_cell *)NULL))
    {
      signed int *return_value___errno_location$2;
      return_value___errno_location$2=__errno_location();
      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      char *return_value_strerror$4;
      return_value_strerror$4=strerror(*return_value___errno_location$3);
      printf("ldclt[%d]: T%03d: cannot malloc(tttctx->firstMsgId), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, *return_value___errno_location$2, return_value_strerror$4);
      return -1;
    }

    tttctx->lastMsgId = tttctx->firstMsgId;
  }

  else
  {
    void *return_value_malloc$5;
    return_value_malloc$5=malloc(sizeof(struct msgid_cell) /*2072ul*/ );
    tttctx->lastMsgId->next = (struct msgid_cell *)return_value_malloc$5;
    if(tttctx->lastMsgId->next == ((struct msgid_cell *)NULL))
    {
      signed int *return_value___errno_location$6;
      return_value___errno_location$6=__errno_location();
      signed int *return_value___errno_location$7;
      return_value___errno_location$7=__errno_location();
      char *return_value_strerror$8;
      return_value_strerror$8=strerror(*return_value___errno_location$7);
      printf("ldclt[%d]: T%03d: cannot malloc(tttctx->lastMsgId->next), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, *return_value___errno_location$6, return_value_strerror$8);
      return -1;
    }

    tttctx->lastMsgId = tttctx->lastMsgId->next;
  }
  tttctx->lastMsgId->next = (struct msgid_cell *)(void *)0;
  tttctx->lastMsgId->msgid = msgid;
  strncpy(tttctx->lastMsgId->str, str, sizeof(char [1024l]) /*1024ul*/ );
  tttctx->lastMsgId->str[(signed long int)(sizeof(char [1024l]) /*1024ul*/  - (unsigned long int)1)] = (char)0;
  strncpy(tttctx->lastMsgId->dn, dn, sizeof(char [1024l]) /*1024ul*/ );
  tttctx->lastMsgId->dn[(signed long int)(sizeof(char [1024l]) /*1024ul*/  - (unsigned long int)1)] = (char)0;
  tttctx->lastMsgId->attribs = attribs;
  return 0;
}

// msgIdAttribs
// file ../ldap/servers/slapd/tools/ldclt/threadMain.c line 594
extern struct ldapmod ** msgIdAttribs(struct thread_context *tttctx, signed int msgid)
{
  struct msgid_cell *pt;
  if(!((2u & mctx.mode) == 0u))
    printf("ldclt[%d]: T%03d: msgIdAttribs (%d)\n", mctx.pid, tttctx->thrdNum, msgid);

  pt = tttctx->firstMsgId;
  for( ; !(pt == ((struct msgid_cell *)NULL)); pt = pt->next)
    if(pt->msgid == msgid)
      return pt->attribs;

  return (struct ldapmod **)(void *)0;
}

// msgIdDN
// file ../ldap/servers/slapd/tools/ldclt/threadMain.c line 621
extern char * msgIdDN(struct thread_context *tttctx, signed int msgid)
{
  struct msgid_cell *pt;
  if(!((2u & mctx.mode) == 0u))
    printf("ldclt[%d]: T%03d: msgIdDN (%d)\n", mctx.pid, tttctx->thrdNum, msgid);

  pt = tttctx->firstMsgId;
  for( ; !(pt == ((struct msgid_cell *)NULL)); pt = pt->next)
    if(pt->msgid == msgid)
      return pt->dn;

  return (char *)(void *)0;
}

// msgIdDel
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 715
extern signed int msgIdDel(struct thread_context *tttctx, signed int msgid, signed int freeAttr)
{
  struct msgid_cell *pt;
  struct msgid_cell *ptToFree;
  if(!((2u & mctx.mode) == 0u))
    printf("ldclt[%d]: T%03d: msgIdDel (%d)\n", mctx.pid, tttctx->thrdNum, msgid);

  signed int return_value_freeAttrib$1;
  if(!(tttctx->firstMsgId == ((struct msgid_cell *)NULL)))
  {
    if(tttctx->firstMsgId->msgid == msgid)
    {
      ptToFree = tttctx->firstMsgId;
      tttctx->firstMsgId = tttctx->firstMsgId->next;
      if(tttctx->firstMsgId == ((struct msgid_cell *)NULL))
        tttctx->lastMsgId = (struct msgid_cell *)(void *)0;

      free((void *)ptToFree);
      return 0;
    }

    pt = tttctx->firstMsgId;
    for( ; !(pt->next == ((struct msgid_cell *)NULL)); pt = pt->next)
      if(pt->next->msgid == msgid)
      {
        if(pt->next->next == ((struct msgid_cell *)NULL))
          tttctx->lastMsgId = pt;

        ptToFree = pt->next;
        pt->next = ptToFree->next;
        if(!(freeAttr == 0))
        {
          return_value_freeAttrib$1=freeAttrib(ptToFree->attribs);
          if(!(return_value_freeAttrib$1 >= 0))
            return -1;

        }

        free((void *)ptToFree);
        return 0;
      }

  }

  printf("ldclt[%d]: T%03d: message %d not found.\n", mctx.pid, tttctx->thrdNum, msgid);
  fflush(stdout);
  return -1;
}

// msgIdStr
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 717
extern char * msgIdStr(struct thread_context *tttctx, signed int msgid)
{
  struct msgid_cell *pt;
  if(!((2u & mctx.mode) == 0u))
    printf("ldclt[%d]: T%03d: msgIdStr (%d)\n", mctx.pid, tttctx->thrdNum, msgid);

  pt = tttctx->firstMsgId;
  for( ; !(pt == ((struct msgid_cell *)NULL)); pt = pt->next)
    if(pt->msgid == msgid)
      return pt->str;

  return "Error: msgid not found";
}

// my_ldap_err2string
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 76
extern char * my_ldap_err2string(signed int err)
{
  char *return_value_ldap_err2string$2;
  return_value_ldap_err2string$2=ldap_err2string(err);
  char *return_value_ldap_err2string$1;
  if(return_value_ldap_err2string$2 == ((char *)NULL))
    return "ldap_err2string() returns a NULL pointer !!!";

  else
  {
    return_value_ldap_err2string$1=ldap_err2string(err);
    return return_value_ldap_err2string$1;
  }
}

// parseAttribValue
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 755
extern signed int parseAttribValue(char *fname, struct vers_object *obj, char *line, struct vers_attribute *attrib)
{
  char variant[512l];
  signed int start;
  signed int end;
  struct vers_field *field;
  if(!((2u & mctx.mode) == 0u))
    printf("parseAttribValue: line=\"%s\"\n", line);

  field = (struct vers_field *)(void *)0;
  start = 0;
  end = start;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$6;
  while(!((signed int)line[(signed long int)end] == 0))
  {
    if(field == ((struct vers_field *)NULL))
    {
      void *return_value_malloc$1;
      return_value_malloc$1=malloc(sizeof(struct vers_field) /*96ul*/ );
      field = (struct vers_field *)return_value_malloc$1;
      field->next = (struct vers_field *)(void *)0;
      attrib->field = field;
    }

    else
    {
      void *return_value_malloc$2;
      return_value_malloc$2=malloc(sizeof(struct vers_field) /*96ul*/ );
      field->next = (struct vers_field *)return_value_malloc$2;
      field = field->next;
      field->next = (struct vers_field *)(void *)0;
    }
    if((signed int)line[(signed long int)end] == 91)
    {
      end = end + 1;
      start = end;
      do
      {
        if(!((signed int)line[(signed long int)end] == 0))
          tmp_if_expr$3 = (signed int)line[(signed long int)end] != 93 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$3 = (_Bool)0;
        if(!tmp_if_expr$3)
          break;

        end = end + 1;
      }
      while((_Bool)1);
      strncpy(variant, line + (signed long int)start, (unsigned long int)(end - start));
      variant[(signed long int)(end - start)] = (char)0;
      if((signed int)line[(signed long int)end] == 0)
      {
        fprintf(stderr, "Error: missing ']' in %s : \"%s\"\n", fname, line);
        return -1;
      }

      signed int return_value_parseVariant$4;
      return_value_parseVariant$4=parseVariant(variant, fname, line, obj, field);
      if(!(return_value_parseVariant$4 >= 0))
        return -1;

      end = end + 1;
      if(attrib->buf == ((char *)NULL))
      {
        void *return_value_malloc$5;
        return_value_malloc$5=malloc((unsigned long int)512);
        attrib->buf = (char *)return_value_malloc$5;
        if(!((2u & mctx.mode) == 0u))
          printf("parseAttribValue: buffer allocated\n");

      }

    }

    else
    {
      start = end;
      do
      {
        if(!((signed int)line[(signed long int)end] == 0))
          tmp_if_expr$6 = (signed int)line[(signed long int)end] != 91 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$6 = (_Bool)0;
        if(!tmp_if_expr$6)
          break;

        end = end + 1;
      }
      while((_Bool)1);
      field->how = 0;
      void *return_value_malloc$7;
      return_value_malloc$7=malloc((unsigned long int)((1 + end) - start));
      field->cst = (char *)return_value_malloc$7;
      strncpy(field->cst, line + (signed long int)start, (unsigned long int)(end - start));
      field->cst[(signed long int)(end - start)] = (char)0;
    }
  }
  return 0;
}

// parseFilter
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 924
signed int parseFilter(char *src, char **head, char **tail, signed int *ndigits)
{
  signed int i;
  signed int j;
  unsigned long int return_value_strlen$1;
  _Bool tmp_if_expr$2;
  unsigned long int return_value_strlen$7;
  _Bool tmp_if_expr$8;
  if(src == ((char *)NULL))
  {
    printf("Error: NULL source string is passed.\n");
    return -1;
  }

  else
  {
    i = 0;
    do
    {
      return_value_strlen$1=strlen(src);
      if(!((unsigned long int)i >= return_value_strlen$1))
        tmp_if_expr$2 = (signed int)src[(signed long int)i] != 88 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$2 = (_Bool)0;
      if(!tmp_if_expr$2)
        break;

      i = i + 1;
    }
    while((_Bool)1);
    void *return_value_malloc$3;
    return_value_malloc$3=malloc((unsigned long int)(i + 1));
    *head = (char *)return_value_malloc$3;
    if(*head == ((char *)NULL))
    {
      signed int *return_value___errno_location$4;
      return_value___errno_location$4=__errno_location();
      signed int *return_value___errno_location$5;
      return_value___errno_location$5=__errno_location();
      char *return_value_strerror$6;
      return_value_strerror$6=strerror(*return_value___errno_location$5);
      printf("Error: cannot malloc(*head), error=%d (%s)\n", *return_value___errno_location$4, return_value_strerror$6);
      return -1;
    }

    strncpy(*head, src, (unsigned long int)i);
    (*head)[(signed long int)i] = (char)0;
    j = i;
    do
    {
      return_value_strlen$7=strlen(src);
      if(!((unsigned long int)i >= return_value_strlen$7))
        tmp_if_expr$8 = (signed int)src[(signed long int)j] == 88 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$8 = (_Bool)0;
      if(!tmp_if_expr$8)
        break;

      j = j + 1;
    }
    while((_Bool)1);
    unsigned long int return_value_strlen$9;
    return_value_strlen$9=strlen(src);
    void *return_value_malloc$10;
    return_value_malloc$10=malloc((return_value_strlen$9 - (unsigned long int)j) + (unsigned long int)1);
    *tail = (char *)return_value_malloc$10;
    if(*tail == ((char *)NULL))
    {
      signed int *return_value___errno_location$11;
      return_value___errno_location$11=__errno_location();
      signed int *return_value___errno_location$12;
      return_value___errno_location$12=__errno_location();
      char *return_value_strerror$13;
      return_value_strerror$13=strerror(*return_value___errno_location$12);
      printf("Error: cannot malloc(*tail), error=%d (%s)\n", *return_value___errno_location$11, return_value_strerror$13);
      return -1;
    }

    strcpy(*tail, &src[(signed long int)j]);
    *ndigits = j - i;
    return 0;
  }
}

// parseLine
// file ../ldap/servers/slapd/tools/ldclt/parser.c line 416
signed int parseLine(char *line, char *fname, struct vers_object *obj)
{
  signed int end;
  if(!((2u & mctx.mode) == 0u))
    printf("parseLine: line=\"%s\"\n", line);

  _Bool tmp_if_expr$1;
  if((signed int)*line == 0)
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)line[(signed long int)0] == 35 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$2;
  if(tmp_if_expr$1)
    return 0;

  else
    if(obj->attribsNb == 40)
    {
      fprintf(stderr, "Error: too many attributes in %s, max is %d\n", fname, 40);
      return -1;
    }

    else
    {
      end = 0;
      do
      {
        if(!((signed int)line[(signed long int)end] == 0))
          tmp_if_expr$2 = (signed int)line[(signed long int)end] != 58 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$2 = (_Bool)0;
        if(!tmp_if_expr$2)
          break;

        end = end + 1;
      }
      while((_Bool)1);
      if(!((signed int)line[(signed long int)end] == 58))
      {
        fprintf(stderr, "Error: can't find attribute name in %s : \"%s\"\n", fname, line);
        return -1;
      }

      else
      {
        obj->attribs[(signed long int)obj->attribsNb].buf = (char *)(void *)0;
        obj->attribs[(signed long int)obj->attribsNb].src=strdup(line);
        void *return_value_malloc$3;
        return_value_malloc$3=malloc((unsigned long int)(1 + end));
        obj->attribs[(signed long int)obj->attribsNb].name = (char *)return_value_malloc$3;
        strncpy(obj->attribs[(signed long int)obj->attribsNb].name, line, (unsigned long int)end);
        obj->attribs[(signed long int)obj->attribsNb].name[(signed long int)end] = (char)0;
        end = end + 1;
        for( ; (signed int)line[(signed long int)end] == 32; end = end + 1)
          ;
        signed int return_value_parseAttribValue$4;
        return_value_parseAttribValue$4=parseAttribValue(fname, obj, line + (signed long int)end, &obj->attribs[(signed long int)obj->attribsNb]);
        if(!(return_value_parseAttribValue$4 >= 0))
          return -1;

        else
        {
          obj->attribsNb = obj->attribsNb + 1;
          return 0;
        }
      }
    }
}

// parseVariant
// file ../ldap/servers/slapd/tools/ldclt/parser.c line 100
signed int parseVariant(char *variant, char *fname, char *line, struct vers_object *obj, struct vers_field *field)
{
  signed int start;
  signed int end;
  char how[512l];
  char first[512l];
  char second[512l];
  char third[512l];
  signed int ret;
  if(!((2u & mctx.mode) == 0u))
    printf("parseVariant: variant=\"%s\"\n", variant);

  void *return_value_malloc$3;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$9;
  if((signed int)variant[1l] == 0)
  {
    _Bool tmp_if_expr$1;
    if(!((signed int)*variant >= 65))
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = (signed int)variant[(signed long int)0] > 72 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$1)
    {
      fprintf(stderr, "Error: bad variable in %s : \"%s\"\n", fname, line);
      fprintf(stderr, "Error: must be in [%c-%c]\n", 65, 72);
      return -1;
    }

    field->how = 8;
    field->var = (signed int)variant[(signed long int)0] - 65;
    return 0;
  }

  else
  {
    if(!((signed int)variant[1l] == 61))
      field->var = -1;

    else
    {
      _Bool tmp_if_expr$2;
      if(!((signed int)*variant >= 65))
        tmp_if_expr$2 = (_Bool)1;

      else
        tmp_if_expr$2 = (signed int)variant[(signed long int)0] > 72 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$2)
      {
        fprintf(stderr, "Error: bad variable in %s : \"%s\"\n", fname, line);
        fprintf(stderr, "Error: must be in [%c-%c]\n", 65, 72);
        return -1;
      }

      field->var = (signed int)variant[(signed long int)0] - 65;
      variant = variant + 1l;
      variant = variant + 1l;
      if(obj->var[(signed long int)field->var] == ((char *)NULL))
      {
        return_value_malloc$3=malloc((unsigned long int)512);
        obj->var[(signed long int)field->var] = (char *)return_value_malloc$3;
      }

    }
    end = 0;
    do
    {
      if(!((signed int)variant[(signed long int)end] == 0))
        tmp_if_expr$4 = (signed int)variant[(signed long int)end] != 40 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$4 = (_Bool)0;
      if(!tmp_if_expr$4)
        break;

      end = end + 1;
    }
    while((_Bool)1);
    if((signed int)variant[(signed long int)end] == 0)
    {
      fprintf(stderr, "Error: bad variant in %s : \"%s\"\n", fname, line);
      fprintf(stderr, "Error: missing '('\n");
      return -1;
    }

    else
    {
      strncpy(how, variant, (unsigned long int)end);
      how[(signed long int)end] = (char)0;
      end = end + 1;
      start = end;
      do
      {
        if(!((signed int)variant[(signed long int)end] == 0))
          tmp_if_expr$5 = (signed int)variant[(signed long int)end] != 59 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$5 = (_Bool)0;
        if(tmp_if_expr$5)
          tmp_if_expr$6 = (signed int)variant[(signed long int)end] != 41 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$6 = (_Bool)0;
        if(!tmp_if_expr$6)
          break;

        end = end + 1;
      }
      while((_Bool)1);
      if((signed int)variant[(signed long int)end] == 0)
      {
        fprintf(stderr, "Error: bad variant in %s : \"%s\"\n", fname, line);
        fprintf(stderr, "Error: missing ')'\n");
        return -1;
      }

      else
      {
        strncpy(first, variant + (signed long int)start, (unsigned long int)(end - start));
        first[(signed long int)(end - start)] = (char)0;
        if((signed int)variant[(signed long int)end] == 41)
          second[(signed long int)0] = (char)0;

        else
        {
          end = end + 1;
          start = end;
          do
          {
            if(!((signed int)variant[(signed long int)end] == 0))
              tmp_if_expr$7 = (signed int)variant[(signed long int)end] != 59 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$7 = (_Bool)0;
            if(tmp_if_expr$7)
              tmp_if_expr$8 = (signed int)variant[(signed long int)end] != 41 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$8 = (_Bool)0;
            if(!tmp_if_expr$8)
              break;

            end = end + 1;
          }
          while((_Bool)1);
          if((signed int)variant[(signed long int)end] == 0)
          {
            fprintf(stderr, "Error: bad variant in %s : \"%s\"\n", fname, line);
            fprintf(stderr, "Error: missing ')'\n");
            return -1;
          }

          strncpy(second, variant + (signed long int)start, (unsigned long int)(end - start));
          second[(signed long int)(end - start)] = (char)0;
        }
        if((signed int)variant[(signed long int)end] == 41)
          third[(signed long int)0] = (char)0;

        else
        {
          end = end + 1;
          start = end;
          do
          {
            if(!((signed int)variant[(signed long int)end] == 0))
              tmp_if_expr$9 = (signed int)variant[(signed long int)end] != 41 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$9 = (_Bool)0;
            if(!tmp_if_expr$9)
              break;

            end = end + 1;
          }
          while((_Bool)1);
          if((signed int)variant[(signed long int)end] == 0)
          {
            fprintf(stderr, "Error: bad variant in %s : \"%s\"\n", fname, line);
            fprintf(stderr, "Error: missing ')'\n");
            return -1;
          }

          strncpy(third, variant + (signed long int)start, (unsigned long int)(end - start));
          third[(signed long int)(end - start)] = (char)0;
        }
        field->how=decodeHow(how);
        if(!(field->how == 1) && !(field->how == 2) && !(field->how == 5))
        {
          if(field->how == 3 || field->how == 4 || field->how == 6)
            goto __CPROVER_DUMP_L46;

          if(field->how == 7)
            goto __CPROVER_DUMP_L52;

          if(field->how == -1)
            goto __CPROVER_DUMP_L53;

        }

        else
        {
          field->dlf=dataListFile(first);
          if(field->dlf == ((struct data_list_file *)NULL))
          {
            fprintf(stderr, "Error : bad file in %s : \"%s\"\n", fname, line);
            return -1;
          }

          field->cnt = 0;
          field->low = 0;
          field->high = field->dlf->strNb - 1;
          if(!((512u & mctx.mode) == 0u))
          {
            _Bool tmp_if_expr$11;
            if(field->how == 1)
              tmp_if_expr$11 = (_Bool)1;

            else
              tmp_if_expr$11 = field->how == 2 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr$11)
            {
              ret=ldclt_mutex_init(&field->cnt_mutex);
              if(!(ret == 0))
              {
                char *return_value_strerror$10;
                return_value_strerror$10=strerror(ret);
                fprintf(stderr, "ldclt: %s\n", return_value_strerror$10);
                fprintf(stderr, "Error: cannot initiate cnt_mutex in %s for %s\n", fname, line);
                fflush(stderr);
                return -1;
              }

            }

          }

          goto __CPROVER_DUMP_L54;

        __CPROVER_DUMP_L46:
          ;
          if((signed int)third[0l] == 0)
          {
            fprintf(stderr, "Error : missing parameters in %s : \"%s\"\n", fname, line);
            return -1;
          }

          field->cnt=atoi(first);
          field->low=atoi(first);
          field->high=atoi(second);
          field->nb=atoi(third);
          if(!((512u & mctx.mode) == 0u))
          {
            _Bool tmp_if_expr$13;
            if(field->how == 3)
              tmp_if_expr$13 = (_Bool)1;

            else
              tmp_if_expr$13 = field->how == 4 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr$13)
            {
              ret=ldclt_mutex_init(&field->cnt_mutex);
              if(!(ret == 0))
              {
                char *return_value_strerror$12;
                return_value_strerror$12=strerror(ret);
                fprintf(stderr, "ldclt: %s\n", return_value_strerror$12);
                fprintf(stderr, "Error: cannot initiate cnt_mutex in %s for %s\n", fname, line);
                fflush(stderr);
                return -1;
              }

            }

          }

          goto __CPROVER_DUMP_L54;

        __CPROVER_DUMP_L52:
          ;
          field->nb=atoi(first);
          goto __CPROVER_DUMP_L54;

        __CPROVER_DUMP_L53:
          ;
          fprintf(stderr, "Error: illegal keyword \"%s\" in %s : \"%s\"\n", (const void *)how, fname, line);
          return -1;
        }

      __CPROVER_DUMP_L54:
        ;
        return 0;
      }
    }
  }
}

// printErrorFromLdap
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 1369
signed int printErrorFromLdap(struct thread_context *tttctx, struct ldapmsg *res, signed int errcode, char *errmsg)
{
  signed int ret;
  char *addErrMsg;
  signed int errcodep;
  char *return_value_my_ldap_err2string$1;
  return_value_my_ldap_err2string$1=my_ldap_err2string(errcode);
  printf("ldclt[%d]: T%03d: %s, error=%d (%s", mctx.pid, tttctx->thrdNum, errmsg, errcode, return_value_my_ldap_err2string$1);
  char *return_value_my_ldap_err2string$3;
  if(res == ((struct ldapmsg *)NULL))
  {
    printf(") -- NULL result\n");
    return -1;
  }

  else
  {
    ret=ldap_parse_result(tttctx->ldapCtx, res, &errcodep, (char **)(void *)0, &addErrMsg, (char ***)(void *)0, (struct ldapcontrol ***)(void *)0, 0);
    if(!(ret == 0x00))
    {
      printf(")\n");
      printf("ldclt[%d]: T%03d: errcodep = %d\n", mctx.pid, tttctx->thrdNum, errcodep);
      char *return_value_my_ldap_err2string$2;
      return_value_my_ldap_err2string$2=my_ldap_err2string(ret);
      printf("ldclt[%d]: T%03d: Cannot ldap_parse_result(), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, ret, return_value_my_ldap_err2string$2);
      return -1;
    }

    if(!(errcodep == errcode))
    {
      return_value_my_ldap_err2string$3=my_ldap_err2string(errcodep);
      printf("ldclt[%d]: errcodep=%d (%s)", mctx.pid, errcodep, return_value_my_ldap_err2string$3);
    }

    if(!(addErrMsg == ((char *)NULL)))
    {
      if(!((signed int)*addErrMsg == 0))
      {
        printf(" - %s", addErrMsg);
        ldap_memfree((void *)addErrMsg);
      }

    }

    printf(")\n");
    fflush(stdout);
    return 0;
  }
}

// printGlobalStatistics
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 665
extern signed int printGlobalStatistics(void)
{
  signed int i;
  char buf[256l];
  signed int found;
  signed int total;
  if(!((4u & mctx.mode) == 0u))
  {
    total = 0;
    i = 0;
    for( ; !(i >= mctx.nbThreads); i = i + 1)
    {
      printf("ldclt[%d]: T%03d: pendingNb=%d\n", mctx.pid, tctx[(signed long int)i].thrdNum, tctx[(signed long int)i].pendingNb);
      total = total + tctx[(signed long int)i].pendingNb;
    }
    printf("ldclt[%d]: Global total pending operations: %d\n", mctx.pid, total);
  }

  printf("ldclt[%d]: Global average rate: %7.2f/thr  (%6.2f/sec), total: %6d\n", mctx.pid, (float)mctx.totNbOpers / (float)mctx.nbThreads, (float)mctx.totNbOpers / (float)(mctx.sampling * mctx.totNbSamples), mctx.totNbOpers);
  if(mctx.nbNoActivity == 0)
    printf("ldclt[%d]: Global number times \"no activity\" reports: never\n", mctx.pid);

  else
    printf("ldclt[%d]: Global number times \"no activity\" reports: %d\n", mctx.pid, mctx.nbNoActivity);
  total = 0;
  i = 0;
  for( ; !(i >= mctx.nbThreads); i = i + 1)
    if(tctx[(signed long int)i].status == 9)
      total = total + 1;

  if(!(total == 0))
    printf("ldclt[%d]: Global number of dead threads: %d\n", mctx.pid, total);

  found = 0;
  i = 0;
  for( ; !(i >= 0x7b); i = i + 1)
    if(mctx.errors[(signed long int)i] >= 1)
    {
      found = 1;
      char *return_value_my_ldap_err2string$1;
      return_value_my_ldap_err2string$1=my_ldap_err2string(i);
      sprintf(buf, "(%s)", return_value_my_ldap_err2string$1);
      printf("ldclt[%d]: Global error %2d %s occurs %5d times\n", mctx.pid, i, (const void *)buf, mctx.errors[(signed long int)i]);
    }

  i = 0;
  for( ; !(i >= 19); i = i + 1)
    if(mctx.negativeErrors[(signed long int)i] >= 1)
    {
      found = 1;
      char *return_value_my_ldap_err2string$2;
      return_value_my_ldap_err2string$2=my_ldap_err2string(-i);
      sprintf(buf, "(%s)", return_value_my_ldap_err2string$2);
      printf("ldclt[%d]: Global error %2d %s occurs %5d times\n", mctx.pid, -i, (const void *)buf, mctx.negativeErrors[(signed long int)i]);
    }

  if(mctx.errorsBad >= 1)
  {
    found = 1;
    printf("ldclt[%d]: Global illegal errors (codes not in [%d, %d]) occurs %5d times\n", mctx.pid, -18 - 1, 0x7b - 1, mctx.errorsBad);
  }

  if(found == 0)
    printf("ldclt[%d]: Global no error occurs during this session.\n", mctx.pid);

  if(mctx.slavesNb >= 1)
  {
    if(mctx.slaveConn == 0)
      printf("ldclt[%d]: Problem: slave never connected !!!!\n", mctx.pid);

    else
    {
      total = 0;
      i = 0;
      for( ; !(i >= mctx.slavesNb); i = i + 1)
        total = total + cctx[(signed long int)i].nbOpRecv;
      printf("ldclt[%d]: Global number of replication operations received: %5d\n", mctx.pid, total);
      total = 0;
      i = 0;
      for( ; !(i >= mctx.slavesNb); i = i + 1)
        total = total + cctx[(signed long int)i].nbEarly;
      printf("ldclt[%d]: Global number of early replication:               %5d\n", mctx.pid, total);
      total = 0;
      i = 0;
      for( ; !(i >= mctx.slavesNb); i = i + 1)
        total = total + cctx[(signed long int)i].nbLate;
      printf("ldclt[%d]: Global number of late replication:                %5d\n", mctx.pid, total);
      total = 0;
      i = 0;
      for( ; !(i >= mctx.slavesNb); i = i + 1)
        total = total + cctx[(signed long int)i].nbLostOp;
      printf("ldclt[%d]: Global number of lost operation:                  %5d\n", mctx.pid, total);
      total = 0;
      i = 0;
      for( ; !(i >= mctx.slavesNb); i = i + 1)
        total = total + cctx[(signed long int)i].nbNotOnList;
      printf("ldclt[%d]: Global number of not on list replication op.:     %5d\n", mctx.pid, total);
      total = 0;
      i = 0;
      for( ; !(i >= mctx.slavesNb); i = i + 1)
        total = total + cctx[(signed long int)i].nbRepFail32;
      printf("ldclt[%d]: Global number of repl failed LDAP_NO_SUCH_OBJECT: %5d\n", mctx.pid, total);
      total = 0;
      i = 0;
      for( ; !(i >= mctx.slavesNb); i = i + 1)
        total = total + cctx[(signed long int)i].nbRepFail68;
      printf("ldclt[%d]: Global number of repl failed LDAP_ALREADY_EXISTS: %5d\n", mctx.pid, total);
      total = 0;
      i = 0;
      for( ; !(i >= mctx.slavesNb); i = i + 1)
        total = total + cctx[(signed long int)i].nbRepFailX;
      printf("ldclt[%d]: Global number of repl failed other error:         %5d\n", mctx.pid, total);
      total = 0;
      i = 0;
      for( ; !(i >= mctx.slavesNb); i = i + 1)
        total = total + cctx[(signed long int)i].nbStillOnQ;
      printf("ldclt[%d]: Global number of repl still on Queue:             %5d\n", mctx.pid, total);
    }
  }

  fflush(stdout);
  return 0;
}

// randomString
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 718
extern signed int randomString(struct thread_context *tttctx, signed int nbDigits)
{
  rndstr(tttctx->buf2, nbDigits);
  return 0;
}

// readAttrValue
// file ../ldap/servers/slapd/tools/ldclt/scalab01.c line 510
signed int readAttrValue(struct ldap *ldapCtx, char *ident, char *dn, char *attname, char *value)
{
  signed int ret;
  char *attrs[2l];
  struct ldapmsg *res;
  struct ldapmsg *cur;
  struct berelement *ber;
  char *aname;
  char *filter;
  attrs[(signed long int)0] = attname;
  attrs[(signed long int)1] = (char *)(void *)0;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(attname);
  void *return_value_malloc$2;
  return_value_malloc$2=malloc(((unsigned long int)4 + return_value_strlen$1) * sizeof(char) /*1ul*/ );
  filter = (char *)return_value_malloc$2;
  if(filter == ((char *)NULL))
  {
    printf("ldclt[%d]: %s: Out of memory\n", mctx.pid, ident);
    fflush(stdout);
    return -1;
  }

  else
  {
    sprintf(filter, "(%s=*)", attname);
    ret=ldap_search_ext_s(ldapCtx, dn, (signed int)0x0000, filter, attrs, 0, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0, (struct timeval *)(void *)0, -1, &res);
    free((void *)filter);
    if(!(ret == 0x00))
    {
      char *return_value_my_ldap_err2string$3;
      return_value_my_ldap_err2string$3=my_ldap_err2string(ret);
      printf("ldclt[%d]: %s: Cannot ldap_search (%s in %s), error=%d (%s)\n", mctx.pid, ident, attname, dn, ret, return_value_my_ldap_err2string$3);
      fflush(stdout);
      return -1;
    }

    value[(signed long int)0] = (char)0;
    cur=ldap_first_entry(ldapCtx, res);
    while(*value == 0)
    {
      if(cur == ((struct ldapmsg *)NULL))
        break;

      aname=ldap_first_attribute(ldapCtx, cur, &ber);
      while(*value == 0)
      {
        if(aname == ((char *)NULL))
          break;

        signed int return_value_strcmp$4;
        return_value_strcmp$4=strcmp(aname, attname);
        if(return_value_strcmp$4 == 0)
        {
          struct berval **vals;
          vals=ldap_get_values_len(ldapCtx, cur, aname);
          if(vals == ((struct berval **)NULL))
          {
            printf("ldclt[%d]: %s: no value for %s in %s\n", mctx.pid, ident, dn, attname);
            fflush(stdout);
            return -1;
          }

          strncpy(value, vals[(signed long int)0]->bv_val, vals[(signed long int)0]->bv_len);
          value[(signed long int)vals[(signed long int)0]->bv_len] = (char)0;
          ldap_value_free_len(vals);
        }

        ldap_memfree((void *)aname);
        if(*value == 0)
          aname=ldap_next_attribute(ldapCtx, cur, ber);

      }
      if(!(ber == ((struct berelement *)NULL)))
        ber_free(ber, 0);

      cur=ldap_next_entry(ldapCtx, cur);
    }
    ldap_msgfree(res);
    return 0;
  }
}

// readObject
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 758
extern signed int readObject(struct vers_object *obj)
{
  struct _IO_FILE *ifile;
  char line[512l];
  signed int rc = 0;
  ifile=fopen(obj->fname, "r");
  char *return_value_fgets$1;
  unsigned long int return_value_strlen$3;
  unsigned long int return_value_strlen$2;
  if(ifile == ((struct _IO_FILE *)NULL))
  {
    perror(obj->fname);
    fprintf(stderr, "Error: cannot open file \"%s\"\n", obj->fname);
    rc = -1;
  }

  else
    do
    {
      return_value_fgets$1=fgets(line, 512, ifile);
      if(return_value_fgets$1 == ((char *)NULL))
        break;

      unsigned long int return_value_strlen$4;
      return_value_strlen$4=strlen(line);
      if(return_value_strlen$4 >= 1ul)
      {
        return_value_strlen$3=strlen(line);
        if((signed int)line[-1l + (signed long int)return_value_strlen$3] == 10)
        {
          return_value_strlen$2=strlen(line);
          line[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
        }

      }

      signed int return_value_parseLine$5;
      return_value_parseLine$5=parseLine(line, obj->fname, obj);
      if(!(return_value_parseLine$5 >= 0))
      {
        rc = -1;
        goto done;
      }

    }
    while((_Bool)1);

done:
  ;
  signed int return_value_fclose$6;
  if(!(ifile == ((struct _IO_FILE *)NULL)))
  {
    return_value_fclose$6=fclose(ifile);
    if(!(return_value_fclose$6 == 0))
    {
      perror(obj->fname);
      fprintf(stderr, "Error: cannot fclose file \"%s\"\n", obj->fname);
      rc = -1;
    }

  }

  if(obj->attribsNb == 0)
  {
    fprintf(stderr, "Error: no object found in \"%s\"\n", obj->fname);
    rc = -1;
  }

  return rc;
}

// refRebindProc
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 245
signed int refRebindProc(struct ldap *ldapCtx, const char *url, unsigned long int request, signed int msgid, void *arg)
{
  struct thread_context *tttctx;
  struct berval cred;
  tttctx = (struct thread_context *)arg;
  cred.bv_val = tttctx->bufPasswd;
  cred.bv_len=strlen(tttctx->bufPasswd);
  signed int return_value_ldap_sasl_bind_s$1;
  return_value_ldap_sasl_bind_s$1=ldap_sasl_bind_s(ldapCtx, tttctx->bufBindDN, (char *)0, &cred, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0, (struct berval **)(void *)0);
  return return_value_ldap_sasl_bind_s$1;
}

// referralSetup
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 316
signed int referralSetup(struct thread_context *tttctx)
{
  signed int ret;
  void *ref;
  if(mctx.referral == 0)
    ref = (void *)0;

  else
    ref = (void *)&ber_pvt_opt_on;
  ret=ldap_set_option(tttctx->ldapCtx, 0x0008, (const void *)&ref);
  if(!(ret >= 0))
  {
    printf("ldclt[%d]: %s: Cannot ldap_set_option(LDAP_OPT_REFERRALS)\n", mctx.pid, (const void *)tttctx->thrdId);
    fflush(stdout);
    return -1;
  }

  else
  {
    if(mctx.referral == 2)
      ldap_set_rebind_proc(tttctx->ldapCtx, refRebindProc, (void *)tttctx);

    return 0;
  }
}

// rnd
// file ../ldap/servers/slapd/tools/ldclt/utils.h line 46
extern void rnd(char *buf, signed int low, signed int high, signed int ndigits)
{
  signed long int return_value_lrand48$1;
  return_value_lrand48$1=lrand48();
  sprintf(buf, "%0*d", ndigits, (signed int)((signed long int)low + return_value_lrand48$1 % (signed long int)((high - low) + 1)));
}

// rndlim
// file ../ldap/servers/slapd/tools/ldclt/utils.h line 47
extern signed int rndlim(signed int low, signed int high)
{
  signed long int return_value_lrand48$1;
  return_value_lrand48$1=lrand48();
  return (signed int)((signed long int)low + return_value_lrand48$1 % (signed long int)((high - low) + 1));
}

// rndstr
// file ../ldap/servers/slapd/tools/ldclt/utils.h line 48
extern void rndstr(char *buf, signed int ndigits)
{
  unsigned int rndNum;
  signed int charNum;
  signed int byteNum;
  char newChar;
  char *rndArray;
  charNum = 0;
  byteNum = 4;
  rndArray = (char *)&rndNum;
  const unsigned short int **return_value___ctype_b_loc$9;
  for( ; !(charNum >= ndigits); byteNum = byteNum + 1)
  {
    if(byteNum == 4)
    {
      signed long int return_value_lrand48$1;
      return_value_lrand48$1=lrand48();
      rndNum = (unsigned int)return_value_lrand48$1;
      byteNum = 0;
    }

    newChar = rndArray[(signed long int)byteNum];
    if(!(1 + charNum == ndigits) || !((signed int)newChar == 32) && !((signed int)newChar == 92))
    {
      if((signed int)newChar == 34 || (signed int)newChar == 35 || (signed int)newChar == 43 || (signed int)newChar == 44 || (signed int)newChar == 59 || (signed int)newChar == 60 || (signed int)newChar == 61 || (signed int)newChar == 62)
      {
        _Bool tmp_if_expr$7;
        if(charNum >= 1)
          tmp_if_expr$7 = (signed int)buf[(signed long int)(charNum - 1)] == 92 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$7 = (_Bool)0;
        if(tmp_if_expr$7)
        {
          if(!(3 + charNum >= ndigits))
          {
            signed int tmp_post$2 = charNum;
            charNum = charNum + 1;
            buf[(signed long int)tmp_post$2] = (char)92;
            signed int tmp_post$3 = charNum;
            charNum = charNum + 1;
            buf[(signed long int)tmp_post$3] = (char)92;
            signed int tmp_post$4 = charNum;
            charNum = charNum + 1;
            buf[(signed long int)tmp_post$4] = newChar;
          }

        }

        else
          if(!(2 + charNum >= ndigits))
          {
            signed int tmp_post$5 = charNum;
            charNum = charNum + 1;
            buf[(signed long int)tmp_post$5] = (char)92;
            signed int tmp_post$6 = charNum;
            charNum = charNum + 1;
            buf[(signed long int)tmp_post$6] = newChar;
          }

      }

      else
        if((-128 & (signed int)newChar) == 0)
        {
          return_value___ctype_b_loc$9=__ctype_b_loc();
          if((2 & (signed int)(*return_value___ctype_b_loc$9)[(signed long int)(signed int)newChar]) == 0)
          {
            signed int tmp_post$8 = charNum;
            charNum = charNum + 1;
            buf[(signed long int)tmp_post$8] = newChar;
          }

        }

    }

  }
  buf[(signed long int)charNum] = (char)0;
}

// runThem
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 298
signed int runThem(void)
{
  signed int i;
  signed int ret;
  if(!((1024u & mctx.mode) == 0u))
  {
    unsigned long int dummy;
    ret=ldclt_thread_create(&dummy, scalab01_control, (void *)0);
    if(!(ret == 0))
    {
      char *return_value_strerror$1;
      return_value_strerror$1=strerror(ret);
      fprintf(stderr, "ldclt[%d]: %s\n", mctx.pid, return_value_strerror$1);
      fprintf(stderr, "ldclt[%d]: Error: cannot create thread scalab01_control\n", mctx.pid);
      fflush(stderr);
      return -1;
    }

    ldclt_sleep(2);
  }

  i = 0;
  for( ; !(i >= mctx.nbThreads); i = i + 1)
  {
    if(!((2u & mctx.mode) == 0u))
      printf("ldclt[%d]: Creating thread T%03d\n", mctx.pid, i);

    signed int return_value_tttctxInit$2;
    return_value_tttctxInit$2=tttctxInit(i, &tctx[(signed long int)i]);
    if(!(return_value_tttctxInit$2 >= 0))
      return -1;

    ret=ldclt_thread_create(&tctx[(signed long int)i].tid, threadMain, (void *)&tctx[(signed long int)i]);
    if(!(ret == 0))
    {
      char *return_value_strerror$3;
      return_value_strerror$3=strerror(ret);
      fprintf(stderr, "ldclt[%d]: %s\n", mctx.pid, return_value_strerror$3);
      fprintf(stderr, "ldclt[%d]: Error: cannot create thread T%03d\n", mctx.pid, i);
      fflush(stderr);
      return -1;
    }

  }
  return 0;
}

// saslSetParam
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 1602
signed int saslSetParam(char *saslarg)
{
  char *attr = (char *)(void *)0;
  signed int argnamelen;
  signed int return_value_strncasecmp$12;
  signed int return_value_strncasecmp$11;
  signed int return_value_strncasecmp$10;
  signed int return_value_strncasecmp$9;
  signed int return_value_strncasecmp$8;
  signed int return_value_strncasecmp$6;
  signed int return_value_strncasecmp$4;
  signed int return_value_strncasecmp$2;
  if(saslarg == ((char *)NULL))
  {
    fprintf(stderr, "Error: missing SASL argument\n");
    return -1;
  }

  else
  {
    attr=strchr(saslarg, 61);
    if(attr == ((char *)NULL))
    {
      fprintf(stderr, "Didn't find \"=\" character in %s\n", saslarg);
      return -1;
    }

    else
    {
      argnamelen = (signed int)(attr - saslarg);
      attr = attr + 1l;
      signed int return_value_strncasecmp$13;
      return_value_strncasecmp$13=strncasecmp(saslarg, "secProp", (unsigned long int)argnamelen);
      if(return_value_strncasecmp$13 == 0)
      {
        if(!(mctx.sasl_secprops == ((char *)NULL)))
        {
          fprintf(stderr, "secProp previously specified\n");
          return -1;
        }

        mctx.sasl_secprops=strdup(attr);
        if(mctx.sasl_secprops == ((char *)NULL))
        {
          perror("malloc");
          exit(-10);
        }

      }

      else
      {
        return_value_strncasecmp$12=strncasecmp(saslarg, "realm", (unsigned long int)argnamelen);
        if(return_value_strncasecmp$12 == 0)
        {
          if(!(mctx.sasl_realm == ((char *)NULL)))
          {
            fprintf(stderr, "Realm previously specified\n");
            return -1;
          }

          mctx.sasl_realm=strdup(attr);
          if(mctx.sasl_realm == ((char *)NULL))
          {
            perror("malloc");
            exit(-10);
          }

        }

        else
        {
          return_value_strncasecmp$11=strncasecmp(saslarg, "authzid", (unsigned long int)argnamelen);
          if(return_value_strncasecmp$11 == 0)
          {
            if(!(mctx.sasl_username == ((char *)NULL)))
            {
              fprintf(stderr, "Authorization name previously specified\n");
              return -1;
            }

            mctx.sasl_username=strdup(attr);
            if(mctx.sasl_username == ((char *)NULL))
            {
              perror("malloc");
              exit(-10);
            }

          }

          else
          {
            return_value_strncasecmp$10=strncasecmp(saslarg, "authid", (unsigned long int)argnamelen);
            if(return_value_strncasecmp$10 == 0)
            {
              if(!(mctx.sasl_authid == ((char *)NULL)))
              {
                fprintf(stderr, "Authentication name previously specified\n");
                return -1;
              }

              mctx.sasl_authid=strdup(attr);
              if(mctx.sasl_authid == ((char *)NULL))
              {
                perror("malloc");
                exit(-10);
              }

            }

            else
            {
              return_value_strncasecmp$9=strncasecmp(saslarg, "mech", (unsigned long int)argnamelen);
              if(return_value_strncasecmp$9 == 0)
              {
                if(!(mctx.sasl_mech == ((char *)NULL)))
                {
                  fprintf(stderr, "Mech previously specified\n");
                  return -1;
                }

                mctx.sasl_mech=strdup(attr);
                if(mctx.sasl_mech == ((char *)NULL))
                {
                  perror("malloc");
                  exit(-10);
                }

              }

              else
              {
                return_value_strncasecmp$8=strncasecmp(saslarg, "flags", (unsigned long int)argnamelen);
                if(return_value_strncasecmp$8 == 0)
                {
                  signed int len;
                  unsigned long int return_value_strlen$1;
                  return_value_strlen$1=strlen(attr);
                  len = (signed int)return_value_strlen$1;
                  _Bool tmp_if_expr$7;
                  if(!(len == 0))
                  {
                    return_value_strncasecmp$6=strncasecmp(attr, "automatic", (unsigned long int)len);
                    tmp_if_expr$7 = !(return_value_strncasecmp$6 != 0) ? (_Bool)1 : (_Bool)0;
                  }

                  else
                    tmp_if_expr$7 = (_Bool)0;
                  if(tmp_if_expr$7)
                    mctx.sasl_flags = 0U;

                  else
                  {
                    _Bool tmp_if_expr$5;
                    if(!(len == 0))
                    {
                      return_value_strncasecmp$4=strncasecmp(attr, "interactive", (unsigned long int)len);
                      tmp_if_expr$5 = !(return_value_strncasecmp$4 != 0) ? (_Bool)1 : (_Bool)0;
                    }

                    else
                      tmp_if_expr$5 = (_Bool)0;
                    if(tmp_if_expr$5)
                      mctx.sasl_flags = 1U;

                    else
                    {
                      _Bool tmp_if_expr$3;
                      if(!(len == 0))
                      {
                        return_value_strncasecmp$2=strncasecmp(attr, "quiet", (unsigned long int)len);
                        tmp_if_expr$3 = !(return_value_strncasecmp$2 != 0) ? (_Bool)1 : (_Bool)0;
                      }

                      else
                        tmp_if_expr$3 = (_Bool)0;
                      if(tmp_if_expr$3)
                        mctx.sasl_flags = 2U;

                      else
                      {
                        fprintf(stderr, "Invalid SASL flags value [%s]: must be one of automatic, interactive, or quiet\n", attr);
                        return -1;
                      }
                    }
                  }
                }

                else
                {
                  fprintf(stderr, "Invalid SASL attribute name %s\n", saslarg);
                  return -1;
                }
              }
            }
          }
        }
      }
      return 0;
    }
  }
}

// scalab01Lock
// file ../ldap/servers/slapd/tools/ldclt/scalab01.c line 137
signed int scalab01Lock(struct thread_context *tttctx)
{
  signed int i;
  signed int ret;
  signed int res;
  ret=ldclt_mutex_lock(&s1ctx.locking_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$1;
    return_value_strerror$1=strerror(ret);
    fprintf(stderr, "ldclt[%d]: %s: cannot mutex_lock(), error=%d (%s)\n", mctx.pid, (const void *)tttctx->thrdId, ret, return_value_strerror$1);
    fflush(stderr);
    return -1;
  }

  res = 1;
  i = 0;
  signed int return_value_strcmp$2;
  for( ; !(i >= s1ctx.lockingMax); i = i + 1)
    if(!(s1ctx.locking[(signed long int)i] == ((char *)NULL)))
    {
      return_value_strcmp$2=strcmp(s1ctx.locking[(signed long int)i], tttctx->bufBindDN);
      if(return_value_strcmp$2 == 0)
      {
        res = 0;
        break;
      }

    }

  _Bool tmp_if_expr$3;
  if(res == 1)
  {
    i = 0;
    do
    {
      if(!(i >= s1ctx.lockingMax))
        tmp_if_expr$3 = s1ctx.locking[(signed long int)i] != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$3 = (_Bool)0;
      if(!tmp_if_expr$3)
        break;

      i = i + 1;
    }
    while((_Bool)1);
    if(i == s1ctx.lockingMax)
    {
      if(s1ctx.lockingMax == 4096)
        res = 0;

      else
        s1ctx.lockingMax = s1ctx.lockingMax + 1;
    }

    if(!(res == 0))
      s1ctx.locking[(signed long int)i] = tttctx->bufBindDN;

  }

  ret=ldclt_mutex_unlock(&s1ctx.locking_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$4;
    return_value_strerror$4=strerror(ret);
    fprintf(stderr, "ldclt[%d]: %s: cannot mutex_unlock(), error=%d (%s)\n", mctx.pid, (const void *)tttctx->thrdId, ret, return_value_strerror$4);
    fflush(stderr);
    return -1;
  }

  return res;
}

// scalab01Unlock
// file ../ldap/servers/slapd/tools/ldclt/scalab01.c line 204
signed int scalab01Unlock(struct thread_context *tttctx)
{
  signed int i;
  signed int ret;
  ret=ldclt_mutex_lock(&s1ctx.locking_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$1;
    return_value_strerror$1=strerror(ret);
    fprintf(stderr, "ldclt[%d]: %s: cannot mutex_lock(), error=%d (%s)\n", mctx.pid, (const void *)tttctx->thrdId, ret, return_value_strerror$1);
    fflush(stderr);
    return -1;
  }

  i = 0;
  signed int return_value_strcmp$2;
  for( ; !(i >= s1ctx.lockingMax); i = i + 1)
    if(!(s1ctx.locking[(signed long int)i] == ((char *)NULL)))
    {
      return_value_strcmp$2=strcmp(s1ctx.locking[(signed long int)i], tttctx->bufBindDN);
      if(return_value_strcmp$2 == 0)
      {
        s1ctx.locking[(signed long int)i] = (char *)(void *)0;
        break;
      }

    }

  ret=ldclt_mutex_unlock(&s1ctx.locking_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$3;
    return_value_strerror$3=strerror(ret);
    fprintf(stderr, "ldclt[%d]: %s: cannot mutex_unlock(), error=%d (%s)\n", mctx.pid, (const void *)tttctx->thrdId, ret, return_value_strerror$3);
    fflush(stderr);
    return -1;
  }

  return 0;
}

// scalab01_addLogin
// file ../ldap/servers/slapd/tools/ldclt/scalab01.c line 351
signed int scalab01_addLogin(struct thread_context *tttctx, char *dn, signed int duration)
{
  signed int ret;
  struct isp_user *new;
  struct isp_user *cur;
  signed int rc = 0;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct isp_user) /*1040ul*/ );
  new = (struct isp_user *)return_value_malloc$1;
  if(new == ((struct isp_user *)NULL))
  {
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    char *return_value_strerror$4;
    return_value_strerror$4=strerror(*return_value___errno_location$3);
    fprintf(stderr, "ldclt[%d]: %s: cannot malloc(isp_user), error=%d (%s)\n", mctx.pid, (const void *)tttctx->thrdId, *return_value___errno_location$2, return_value_strerror$4);
    fflush(stderr);
    return -1;
  }

  strncpy(new->dn, dn, sizeof(char [1024l]) /*1024ul*/ );
  new->dn[(signed long int)(sizeof(char [1024l]) /*1024ul*/  - (unsigned long int)1)] = (char)0;
  new->counter = duration;
  new->cost = new->counter;
  new->next = (struct isp_user *)(void *)0;
  ret=ldclt_mutex_lock(&s1ctx.list_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$5;
    return_value_strerror$5=strerror(ret);
    fprintf(stderr, "ldclt[%d]: %s: cannot mutex_lock(), error=%d (%s)\n", mctx.pid, (const void *)tttctx->thrdId, ret, return_value_strerror$5);
    fflush(stderr);
    rc = -1;
    goto error;
  }

  if(s1ctx.list == ((struct isp_user *)NULL))
    s1ctx.list = new;

  else
    if(s1ctx.list->counter >= duration)
    {
      new->next = s1ctx.list;
      s1ctx.list = new;
    }

    else
    {
      cur = s1ctx.list;
      if(cur == ((struct isp_user *)NULL))
        goto error;

      while(!(cur == ((struct isp_user *)NULL)))
        if(cur->next == ((struct isp_user *)NULL))
        {
          cur->next = new;
          cur = (struct isp_user *)(void *)0;
        }

        else
          if(cur->next->counter >= duration)
          {
            new->next = cur->next;
            cur->next = new;
            cur = (struct isp_user *)(void *)0;
          }

          else
            cur = cur->next;
    }
  goto done;

error:
  ;
  if(!(new == ((struct isp_user *)NULL)))
    free((void *)new);


done:
  ;
  ret=ldclt_mutex_unlock(&s1ctx.list_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$6;
    return_value_strerror$6=strerror(ret);
    fprintf(stderr, "ldclt[%d]: %s: cannot mutex_unlock(), error=%d (%s)\n", mctx.pid, (const void *)tttctx->thrdId, ret, return_value_strerror$6);
    fflush(stderr);
    rc = -1;
  }

  return rc;
}

// scalab01_connectSuperuser
// file ../ldap/servers/slapd/tools/ldclt/scalab01.c line 467
signed int scalab01_connectSuperuser(void)
{
  char bindDN[1024l] = { (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  unsigned int mode = mctx.mode;
  unsigned int mod2 = mctx.mod2;
  if((64u & mode) == 0u)
  {
    snprintf(bindDN, sizeof(char [1024l]) /*1024ul*/ , "%s,%s", (const void *)"cn=super user", mctx.baseDN);
    bindDN[(signed long int)(sizeof(char [1024l]) /*1024ul*/  - (unsigned long int)1)] = (char)0;
  }

  mod2 = mod2 & (unsigned int)~0x00000010;
  mod2 = mod2 & (unsigned int)~0x00000040;
  mod2 = mod2 & (unsigned int)~0x00000080;
  mode = mode | (unsigned int)0x40000000;
  s1ctx.ldapCtx=connectToLDAP((struct thread_context *)(void *)0, bindDN, "super user password", mode, mod2);
  if(s1ctx.ldapCtx == ((struct ldap *)NULL))
    return -1;

  else
    return 0;
}

// scalab01_control
// file ../ldap/servers/slapd/tools/ldclt/scalab01.h line 91
extern void * scalab01_control(void *arg)
{
  struct isp_user *cur;
  struct isp_user *head;
  signed int ret;
  signed int nbTot;
  signed int nbU;
  signed int return_value_scalab01_connectSuperuser$1;
  return_value_scalab01_connectSuperuser$1=scalab01_connectSuperuser();
  if(!(return_value_scalab01_connectSuperuser$1 >= 0))
    ldcltExit(4);

  while((_Bool)1)
  {
    ldclt_sleep(1);
    nbU = 0;
    nbTot = nbU;
    ret=ldclt_mutex_lock(&s1ctx.list_mutex);
    if(!(ret == 0))
    {
      char *return_value_strerror$2;
      return_value_strerror$2=strerror(ret);
      fprintf(stderr, "ldclt[%d]: ctrl: cannot mutex_lock(), error=%d (%s)\n", mctx.pid, ret, return_value_strerror$2);
      fflush(stderr);
      ldcltExit(99);
    }

    cur = s1ctx.list;
    for( ; !(cur == ((struct isp_user *)NULL)); cur = cur->next)
    {
      cur->counter = cur->counter - 1;
      nbTot = nbTot + 1;
    }
    _Bool tmp_if_expr$3;
    if(s1ctx.list == ((struct isp_user *)NULL))
      tmp_if_expr$3 = (_Bool)1;

    else
      tmp_if_expr$3 = s1ctx.list->counter > 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$3)
      head = (struct isp_user *)(void *)0;

    else
    {
      cur = s1ctx.list;
      head = cur;
      for( ; !(cur == ((struct isp_user *)NULL)); cur = cur->next)
        if(!(cur->counter == 0))
          break;

      s1ctx.list = cur;
    }
    ret=ldclt_mutex_unlock(&s1ctx.list_mutex);
    if(!(ret == 0))
    {
      char *return_value_strerror$4;
      return_value_strerror$4=strerror(ret);
      fprintf(stderr, "ldclt[%d]: ctrl: cannot mutex_unlock(), error=%d (%s)\n", mctx.pid, ret, return_value_strerror$4);
      fflush(stderr);
      ldcltExit(99);
    }

    while(!(head == ((struct isp_user *)NULL)))
    {
      signed int return_value_scalab01_unlock$5;
      return_value_scalab01_unlock$5=scalab01_unlock(head);
      if(!(return_value_scalab01_unlock$5 >= 0))
      {
        printf("ldclt[%d]: ctrl: cannot unlock %s\n", mctx.pid, (const void *)head->dn);
        ldcltExit(99);
      }

      nbU = nbU + 1;
      cur = head;
      if(head->next == ((struct isp_user *)NULL))
        head = (struct isp_user *)(void *)0;

      else
        if(!(head->next->counter == 0))
          head = (struct isp_user *)(void *)0;

        else
          head = head->next;
      free((void *)cur);
    }
    if(!((1u & mctx.mode) == 0u))
      printf("ldclt[%d]: ctrl: nb entries unlocked / total : %3d / %5d\n", mctx.pid, nbU, nbTot);

  }
}

// scalab01_init
// file ../ldap/servers/slapd/tools/ldclt/scalab01.h line 92
extern signed int scalab01_init(void)
{
  signed int ret;
  s1ctx.nbcnx = 0;
  s1ctx.list = (struct isp_user *)(void *)0;
  s1ctx.lockingMax = 0;
  ret=ldclt_mutex_init(&s1ctx.list_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$1;
    return_value_strerror$1=strerror(ret);
    fprintf(stderr, "ldclt[%d]: %s\n", mctx.pid, return_value_strerror$1);
    fprintf(stderr, "ldclt[%d]: Error: cannot initiate s1ctx.list_mutex\n", mctx.pid);
    fflush(stderr);
    return -1;
  }

  ret=ldclt_mutex_init(&s1ctx.locking_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(ret);
    fprintf(stderr, "ldclt[%d]: %s\n", mctx.pid, return_value_strerror$2);
    fprintf(stderr, "ldclt[%d]: Error: cannot initiate s1ctx.locking_mutex\n", mctx.pid);
    fflush(stderr);
    return -1;
  }

  ret=ldclt_mutex_init(&s1ctx.nbcnx_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$3;
    return_value_strerror$3=strerror(ret);
    fprintf(stderr, "ldclt[%d]: %s\n", mctx.pid, return_value_strerror$3);
    fprintf(stderr, "ldclt[%d]: Error: cannot initiate s1ctx.nbcnx_mutex\n", mctx.pid);
    fflush(stderr);
    return -1;
  }

  return 0;
}

// scalab01_modemDecr
// file ../ldap/servers/slapd/tools/ldclt/scalab01.c line 307
signed int scalab01_modemDecr(char *ident)
{
  signed int ret;
  ret=ldclt_mutex_lock(&s1ctx.nbcnx_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$1;
    return_value_strerror$1=strerror(ret);
    fprintf(stderr, "ldclt[%d]: %s: cannot mutex_lock(), error=%d (%s)\n", mctx.pid, ident, ret, return_value_strerror$1);
    fflush(stderr);
    return -1;
  }

  s1ctx.nbcnx = s1ctx.nbcnx - 1;
  ret=ldclt_mutex_unlock(&s1ctx.nbcnx_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(ret);
    fprintf(stderr, "ldclt[%d]: %s: cannot mutex_unlock(), error=%d (%s)\n", mctx.pid, ident, ret, return_value_strerror$2);
    fflush(stderr);
    return -1;
  }

  return 0;
}

// scalab01_modemIncr
// file ../ldap/servers/slapd/tools/ldclt/scalab01.c line 258
signed int scalab01_modemIncr(char *ident)
{
  signed int ret;
  signed int res;
  ret=ldclt_mutex_lock(&s1ctx.nbcnx_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$1;
    return_value_strerror$1=strerror(ret);
    fprintf(stderr, "ldclt[%d]: %s: cannot mutex_lock(), error=%d (%s)\n", mctx.pid, ident, ret, return_value_strerror$1);
    fflush(stderr);
    return -1;
  }

  if(s1ctx.nbcnx >= s1ctx.maxcnxnb)
    res = 0;

  else
  {
    res = 1;
    s1ctx.nbcnx = s1ctx.nbcnx + 1;
  }
  ret=ldclt_mutex_unlock(&s1ctx.nbcnx_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(ret);
    fprintf(stderr, "ldclt[%d]: %s: cannot mutex_unlock(), error=%d (%s)\n", mctx.pid, ident, ret, return_value_strerror$2);
    fflush(stderr);
    return -1;
  }

  return res;
}

// scalab01_unlock
// file ../ldap/servers/slapd/tools/ldclt/scalab01.c line 663
signed int scalab01_unlock(struct isp_user *user)
{
  signed int account;
  char buf[20l];
  signed int return_value_readAttrValue$1;
  return_value_readAttrValue$1=readAttrValue(s1ctx.ldapCtx, "ctrl", user->dn, "ntUserUnitsPerWeek", buf);
  if(!(return_value_readAttrValue$1 >= 0))
  {
    printf("ldclt[%d]: ctrl: Cannot read accounting attribute of %s\n", mctx.pid, (const void *)user->dn);
    fflush(stdout);
    return -1;
  }

  else
  {
    if(!((signed int)buf[0l] == 0))
      account=atoi(buf);

    else
    {
      printf("ldclt[%d]: ctrl: No accounting attribute for %s - assume it is 0\n", mctx.pid, (const void *)user->dn);
      fflush(stdout);
      account = 0;
    }
    sprintf(buf, "%d", account + user->cost);
    signed int return_value_writeAttrValue$2;
    return_value_writeAttrValue$2=writeAttrValue(s1ctx.ldapCtx, "ctrl", user->dn, "ntUserUnitsPerWeek", buf);
    if(!(return_value_writeAttrValue$2 >= 0))
    {
      printf("ldclt[%d]: ctrl: Cannot write accounting attribute of %s\n", mctx.pid, (const void *)user->dn);
      fflush(stdout);
      return -1;
    }

    else
    {
      signed int return_value_writeAttrValue$3;
      return_value_writeAttrValue$3=writeAttrValue(s1ctx.ldapCtx, "ctrl", user->dn, "ntUserFlags", "0");
      if(!(return_value_writeAttrValue$3 >= 0))
      {
        printf("ldclt[%d]: ctrl: Cannot write lock (unlock) attribute of %s\n", mctx.pid, (const void *)user->dn);
        fflush(stdout);
        return -1;
      }

      else
      {
        if(!((2u & mctx.mode) == 0u))
          printf("ldclt[%d]: ctrl: entry %s unlocked\n", mctx.pid, (const void *)user->dn);

        signed int return_value_scalab01_modemDecr$4;
        return_value_scalab01_modemDecr$4=scalab01_modemDecr("ctrl");
        if(!(return_value_scalab01_modemDecr$4 >= 0))
          return -1;

        else
          return 0;
      }
    }
  }
}

// selectRandomAttrList
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 719
extern char ** selectRandomAttrList(struct thread_context *tttctx)
{
  signed int return_value_rndlim$1;
  return_value_rndlim$1=rndlim(0, mctx.attrlistNb - 1);
  tttctx->attrlist[(signed long int)0] = mctx.attrlist[(signed long int)return_value_rndlim$1];
  return tttctx->attrlist;
}

// setThreadStatus
// file ../ldap/servers/slapd/tools/ldclt/threadMain.c line 788
extern signed int setThreadStatus(struct thread_context *tttctx, signed int status)
{
  signed int ret;
  ret=ldclt_mutex_lock(&tttctx->status_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$1;
    return_value_strerror$1=strerror(ret);
    fprintf(stderr, "ldclt[%d]: Cannot mutex_lock(T%03d), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, ret, return_value_strerror$1);
    fprintf(stderr, "ldclt[%d]: Problem in setThreadStatus()\n", mctx.pid);
    fflush(stderr);
    return -1;
  }

  tttctx->status = status;
  ret=ldclt_mutex_unlock(&tttctx->status_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(ret);
    fprintf(stderr, "ldclt[%d]: Cannot mutex_unlock(T%03d), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, ret, return_value_strerror$2);
    fprintf(stderr, "ldclt[%d]: Problem in setThreadStatus()\n", mctx.pid);
    fflush(stderr);
    return -1;
  }

  return 0;
}

// shutdownThreads
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 402
signed int shutdownThreads(void)
{
  signed int i;
  signed int status;
  signed int allDead;
  signed int maxLoops;
  signed int ret;
  i = 0;
  for( ; !(i >= mctx.nbThreads); i = i + 1)
  {
    ret=ldclt_mutex_lock(&tctx[(signed long int)i].status_mutex);
    if(!(ret == 0))
    {
      char *return_value_strerror$1;
      return_value_strerror$1=strerror(ret);
      fprintf(stderr, "Cannot mutex_lock(T%03d), error=%d (%s)\n", tctx[(signed long int)i].thrdNum, ret, return_value_strerror$1);
      printf("Cannot command shutdwon to thread %d\n", tctx[(signed long int)i].thrdNum);
      return -1;
    }

    if(!(tctx[(signed long int)i].status == 9))
      tctx[(signed long int)i].status = 10;

    ret=ldclt_mutex_unlock(&tctx[(signed long int)i].status_mutex);
    if(!(ret == 0))
    {
      char *return_value_strerror$2;
      return_value_strerror$2=strerror(ret);
      fprintf(stderr, "Cannot mutex_unlock(T%03d), error=%d (%s)\n", tctx[(signed long int)i].thrdNum, ret, return_value_strerror$2);
      printf("Cannot command shutdwon to thread %d\n", tctx[(signed long int)i].thrdNum);
      return -1;
    }

  }
  if(!((32768u & mctx.mode) == 0u))
  {
    signed int alivecnt;
    allDead = 0;
    maxLoops = 20;
    while(allDead == 0 && !(maxLoops == 0))
    {
      allDead = 1;
      alivecnt = 0;
      i = 0;
      for( ; !(i >= mctx.nbThreads); i = i + 1)
      {
        signed int return_value_getThreadStatus$3;
        return_value_getThreadStatus$3=getThreadStatus(&tctx[(signed long int)i], &status);
        if(!(return_value_getThreadStatus$3 >= 0))
        {
          printf("Cannot command shutdown to thread %d\n", tctx[(signed long int)i].thrdNum);
          return -1;
        }

        if(!(status == 9))
        {
          allDead = 0;
          alivecnt = alivecnt + 1;
        }

      }
      maxLoops = maxLoops - 1;
      if(allDead == 0)
        ldclt_sleep(1);

    }
    if(maxLoops == 0)
    {
      printf("%d thread(s) don't die...\n", alivecnt);
      return -1;
    }

  }

  return 0;
}

// strList1
// file ../ldap/servers/slapd/tools/ldclt/ldapfct.c line 1340
extern char ** strList1(char *str1)
{
  char **p;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)2 * sizeof(char *) /*8ul*/ );
  p = (char **)return_value_malloc$1;
  if(p == ((char **)NULL))
  {
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    char *return_value_strerror$4;
    return_value_strerror$4=strerror(*return_value___errno_location$3);
    printf("ldclt[%d]: Txxx: cannot malloc(p), error=%d (%s)\n", mctx.pid, *return_value___errno_location$2, return_value_strerror$4);
    ldcltExit(8);
  }

  p[(signed long int)0] = str1;
  p[(signed long int)1] = (char *)(void *)0;
  return p;
}

// threadMain
// file ../ldap/servers/slapd/tools/ldclt/ldclt.h line 722
extern void * threadMain(void *arg)
{
  struct thread_context *tttctx;
  signed int go = 1;
  signed int status;
  tttctx = (struct thread_context *)arg;
  signed int return_value_setThreadStatus$1;
  return_value_setThreadStatus$1=setThreadStatus(tttctx, 0);
  void *return_value_malloc$2;
  signed int return_value_doAddEntry$46;
  signed int return_value_doAttrReplace$47;
  signed int return_value_doAttrFileReplace$48;
  signed int return_value_doDeleteEntry$49;
  signed int return_value_doBindOnly$50;
  signed int return_value_doExactSearch$51;
  signed int return_value_doRename$52;
  signed int return_value_doScalab01$53;
  signed int return_value_doGenldif$54;
  if(!(return_value_setThreadStatus$1 >= 0))
  {
    tttctx->status = 9;
    return (void *)0;
  }

  else
  {
    tttctx->asyncHit = 0;
    tttctx->binded = 0;
    tttctx->fd = -1;
    tttctx->lastVal = mctx.randomLow - 1;
    tttctx->ldapCtx = (struct ldap *)(void *)0;
    tttctx->matcheddnp = (char *)(void *)0;
    tttctx->nbOpers = 0;
    tttctx->totOpers = 0;
    tttctx->pendingNb = 0;
    tttctx->firstMsgId = (struct msgid_cell *)(void *)0;
    tttctx->lastMsgId = (struct msgid_cell *)(void *)0;
    if(!((1794u & mctx.mod2) == 0u) || !((2231518208u & mctx.mode) == 0u))
    {
      if(!((4u & mctx.mod2) == 0u))
      {
        return_value_malloc$2=malloc((unsigned long int)512);
        tttctx->bufFilter = (char *)return_value_malloc$2;
      }

      else
      {
        unsigned long int return_value_strlen$3;
        return_value_strlen$3=strlen(mctx.filter);
        void *return_value_malloc$4;
        return_value_malloc$4=malloc(return_value_strlen$3 + (unsigned long int)1);
        tttctx->bufFilter = (char *)return_value_malloc$4;
        if(tttctx->bufFilter == ((char *)NULL))
        {
          signed int *return_value___errno_location$5;
          return_value___errno_location$5=__errno_location();
          signed int *return_value___errno_location$6;
          return_value___errno_location$6=__errno_location();
          char *return_value_strerror$7;
          return_value_strerror$7=strerror(*return_value___errno_location$6);
          printf("ldclt[%d]: %s: cannot malloc(tttctx->bufFilter), error=%d (%s)\n", mctx.pid, (const void *)tttctx->thrdId, *return_value___errno_location$5, return_value_strerror$7);
          ldcltExit(7);
        }

        if((671088640u & mctx.mode) == 0u)
          strcpy(tttctx->bufFilter, mctx.filter);

        else
        {
          unsigned long int return_value_strlen$8;
          return_value_strlen$8=strlen(mctx.randomHead);
          tttctx->startRandom = (signed int)return_value_strlen$8;
          strcpy(tttctx->bufFilter, mctx.randomHead);
          strcpy(&tttctx->bufFilter[(signed long int)(tttctx->startRandom + mctx.randomNbDigit)], mctx.randomTail);
          if(!((2u & mctx.mode) == 0u))
          {
            printf("ldclt[%d]: %s: startRandom = %d\n", mctx.pid, (const void *)tttctx->thrdId, tttctx->startRandom);
            printf("ldclt[%d]: %s: randomHead = \"%s\", randomTail = \"%s\"\n", mctx.pid, (const void *)tttctx->thrdId, mctx.randomHead, mctx.randomTail);
          }

        }
      }
      unsigned long int return_value_strlen$9;
      return_value_strlen$9=strlen(mctx.baseDN);
      void *return_value_malloc$10;
      return_value_malloc$10=malloc(return_value_strlen$9 + (unsigned long int)1);
      tttctx->bufBaseDN = (char *)return_value_malloc$10;
      if(tttctx->bufBaseDN == ((char *)NULL))
      {
        signed int *return_value___errno_location$11;
        return_value___errno_location$11=__errno_location();
        signed int *return_value___errno_location$12;
        return_value___errno_location$12=__errno_location();
        char *return_value_strerror$13;
        return_value_strerror$13=strerror(*return_value___errno_location$12);
        printf("ldclt[%d]: T%03d: cannot malloc(tttctx->bufBaseDN), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, *return_value___errno_location$11, return_value_strerror$13);
        ldcltExit(7);
      }

      if((2097152u & mctx.mode) == 0u)
        strcpy(tttctx->bufBaseDN, mctx.baseDN);

      else
      {
        unsigned long int return_value_strlen$14;
        return_value_strlen$14=strlen(mctx.baseDNHead);
        tttctx->startBaseDN = (signed int)return_value_strlen$14;
        strcpy(tttctx->bufBaseDN, mctx.baseDNHead);
        strcpy(&tttctx->bufBaseDN[(signed long int)(tttctx->startBaseDN + mctx.baseDNNbDigit)], mctx.baseDNTail);
      }
      if(!(mctx.bindDN == ((char *)NULL)))
      {
        unsigned long int return_value_strlen$15;
        return_value_strlen$15=strlen(mctx.bindDN);
        void *return_value_malloc$16;
        return_value_malloc$16=malloc(return_value_strlen$15 + (unsigned long int)1);
        tttctx->bufBindDN = (char *)return_value_malloc$16;
        if(tttctx->bufBindDN == ((char *)NULL))
        {
          signed int *return_value___errno_location$17;
          return_value___errno_location$17=__errno_location();
          signed int *return_value___errno_location$18;
          return_value___errno_location$18=__errno_location();
          char *return_value_strerror$19;
          return_value_strerror$19=strerror(*return_value___errno_location$18);
          printf("ldclt[%d]: T%03d: cannot malloc(tttctx->bufBindDN), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, *return_value___errno_location$17, return_value_strerror$19);
          ldcltExit(7);
        }

        if((2048u & mctx.mode) == 0u)
          strcpy(tttctx->bufBindDN, mctx.bindDN);

        else
        {
          unsigned long int return_value_strlen$20;
          return_value_strlen$20=strlen(mctx.bindDNHead);
          tttctx->startBindDN = (signed int)return_value_strlen$20;
          strcpy(tttctx->bufBindDN, mctx.bindDNHead);
          strcpy(&tttctx->bufBindDN[(signed long int)(tttctx->startBindDN + mctx.bindDNNbDigit)], mctx.bindDNTail);
        }
      }

      if(!(mctx.passwd == ((char *)NULL)))
      {
        unsigned long int return_value_strlen$21;
        return_value_strlen$21=strlen(mctx.passwd);
        void *return_value_malloc$22;
        return_value_malloc$22=malloc(return_value_strlen$21 + (unsigned long int)1);
        tttctx->bufPasswd = (char *)return_value_malloc$22;
        if(tttctx->bufPasswd == ((char *)NULL))
        {
          signed int *return_value___errno_location$23;
          return_value___errno_location$23=__errno_location();
          signed int *return_value___errno_location$24;
          return_value___errno_location$24=__errno_location();
          char *return_value_strerror$25;
          return_value_strerror$25=strerror(*return_value___errno_location$24);
          printf("ldclt[%d]: T%03d: cannot malloc(tttctx->bufPasswd), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, *return_value___errno_location$23, return_value_strerror$25);
          ldcltExit(7);
        }

        if((2048u & mctx.mode) == 0u)
          strcpy(tttctx->bufPasswd, mctx.passwd);

        else
        {
          unsigned long int return_value_strlen$26;
          return_value_strlen$26=strlen(mctx.passwdHead);
          tttctx->startPasswd = (signed int)return_value_strlen$26;
          strcpy(tttctx->bufPasswd, mctx.passwdHead);
          strcpy(&tttctx->bufPasswd[(signed long int)(tttctx->startPasswd + mctx.passwdNbDigit)], mctx.passwdTail);
        }
      }

    }

    if(!((16u & mctx.mod2) == 0u))
    {
      void *return_value_malloc$27;
      return_value_malloc$27=malloc((unsigned long int)1024);
      tttctx->bufBindDN = (char *)return_value_malloc$27;
      void *return_value_malloc$28;
      return_value_malloc$28=malloc((unsigned long int)1024);
      tttctx->bufPasswd = (char *)return_value_malloc$28;
      mctx.passwd = "foo bar";
    }

    if(!(mctx.sasl_authid == ((char *)NULL)))
    {
      unsigned long int return_value_strlen$29;
      return_value_strlen$29=strlen(mctx.sasl_authid);
      void *return_value_malloc$30;
      return_value_malloc$30=malloc(return_value_strlen$29 + (unsigned long int)1);
      tttctx->bufSaslAuthid = (char *)return_value_malloc$30;
      if(tttctx->bufSaslAuthid == ((char *)NULL))
      {
        signed int *return_value___errno_location$31;
        return_value___errno_location$31=__errno_location();
        signed int *return_value___errno_location$32;
        return_value___errno_location$32=__errno_location();
        char *return_value_strerror$33;
        return_value_strerror$33=strerror(*return_value___errno_location$32);
        printf("ldclt[%d]: T%03d: cannot malloc(tttctx->bufSaslAuthid), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, *return_value___errno_location$31, return_value_strerror$33);
        ldcltExit(7);
      }

      if((128u & mctx.mod2) == 0u)
        strcpy(tttctx->bufSaslAuthid, mctx.sasl_authid);

      else
      {
        unsigned long int return_value_strlen$34;
        return_value_strlen$34=strlen(mctx.sasl_authid_head);
        tttctx->startSaslAuthid = (signed int)return_value_strlen$34;
        strcpy(tttctx->bufSaslAuthid, mctx.sasl_authid_head);
        strcpy(&tttctx->bufSaslAuthid[(signed long int)(tttctx->startSaslAuthid + mctx.sasl_authid_nbdigit)], mctx.sasl_authid_tail);
      }
    }

    if(!((16384u & mctx.mode) == 0u))
    {
      unsigned long int return_value_strlen$35;
      return_value_strlen$35=strlen(mctx.attrpl);
      void *return_value_malloc$36;
      return_value_malloc$36=malloc(return_value_strlen$35 + (unsigned long int)1);
      tttctx->bufAttrpl = (char *)return_value_malloc$36;
      if(tttctx->bufAttrpl == ((char *)NULL))
      {
        signed int *return_value___errno_location$37;
        return_value___errno_location$37=__errno_location();
        signed int *return_value___errno_location$38;
        return_value___errno_location$38=__errno_location();
        char *return_value_strerror$39;
        return_value_strerror$39=strerror(*return_value___errno_location$38);
        printf("ldclt[%d]: T%03d: cannot malloc(tttctx->bufAttrpl), error=%d (%s)\n", mctx.pid, tttctx->thrdNum, *return_value___errno_location$37, return_value_strerror$39);
        ldcltExit(7);
      }

      unsigned long int return_value_strlen$40;
      return_value_strlen$40=strlen(mctx.attrplHead);
      tttctx->startAttrpl = (signed int)return_value_strlen$40;
      strcpy(tttctx->bufAttrpl, mctx.attrplHead);
      strcpy(&tttctx->bufAttrpl[(signed long int)(tttctx->startAttrpl + mctx.attrplNbDigit)], mctx.attrplTail);
    }

    if(!((1024u & mctx.mod2) == 0u))
    {
      tttctx->bufAttrpl = mctx.attrplFileContent;
      if(tttctx->bufAttrpl == ((char *)NULL))
      {
        signed int *return_value___errno_location$41;
        return_value___errno_location$41=__errno_location();
        signed int *return_value___errno_location$42;
        return_value___errno_location$42=__errno_location();
        char *return_value_strerror$43;
        return_value_strerror$43=strerror(*return_value___errno_location$42);
        printf("ldclt[%d]: T%03d: cannot malloc(tttctx->bufAttrpl), error=%d (%s), can we read file [%s]\n", mctx.pid, tttctx->thrdNum, *return_value___errno_location$41, return_value_strerror$43, mctx.attrplFile);
        ldcltExit(7);
      }

    }

    status = 2;
    signed int return_value_setThreadStatus$44;
    return_value_setThreadStatus$44=setThreadStatus(tttctx, 2);
    if(!(return_value_setThreadStatus$44 >= 0))
      status = 9;

    while(!(go == 0) && !(status == 9) && !(status == 10))
    {
      if(mctx.waitSec >= 1)
      {
        ldclt_sleep(mctx.waitSec);
        signed int return_value_getThreadStatus$45;
        return_value_getThreadStatus$45=getThreadStatus(tttctx, &status);
        if(!(return_value_getThreadStatus$45 >= 0))
          break;

        if(status == 10)
          break;

      }

      if(!((67108864u & tttctx->mode) == 0u))
      {
        return_value_doAddEntry$46=doAddEntry(tttctx);
        if(!(return_value_doAddEntry$46 >= 0))
        {
          go = 0;
          continue;
        }

      }

      if(!((16384u & tttctx->mode) == 0u))
      {
        return_value_doAttrReplace$47=doAttrReplace(tttctx);
        if(!(return_value_doAttrReplace$47 >= 0))
        {
          go = 0;
          continue;
        }

      }

      if(!((1024u & mctx.mod2) == 0u))
      {
        return_value_doAttrFileReplace$48=doAttrFileReplace(tttctx);
        if(!(return_value_doAttrFileReplace$48 >= 0))
        {
          go = 0;
          continue;
        }

      }

      if(!((16777216u & tttctx->mode) == 0u))
      {
        return_value_doDeleteEntry$49=doDeleteEntry(tttctx);
        if(!(return_value_doDeleteEntry$49 >= 0))
        {
          go = 0;
          continue;
        }

      }

      if(!((32u & mctx.mod2) == 0u))
      {
        return_value_doBindOnly$50=doBindOnly(tttctx);
        if(!(return_value_doBindOnly$50 >= 0))
        {
          go = 0;
          continue;
        }

      }

      if(!((0x80000000 & tttctx->mode) == 0u))
      {
        return_value_doExactSearch$51=doExactSearch(tttctx);
        if(!(return_value_doExactSearch$51 >= 0))
        {
          go = 0;
          continue;
        }

      }

      if(!((131072u & tttctx->mode) == 0u))
      {
        return_value_doRename$52=doRename(tttctx);
        if(!(return_value_doRename$52 >= 0))
        {
          go = 0;
          continue;
        }

      }

      if(!((1024u & tttctx->mode) == 0u))
      {
        return_value_doScalab01$53=doScalab01(tttctx);
        if(!(return_value_doScalab01$53 >= 0))
        {
          go = 0;
          continue;
        }

      }

      if(!((2u & mctx.mod2) == 0u))
      {
        return_value_doGenldif$54=doGenldif(tttctx);
        if(!(return_value_doGenldif$54 >= 0))
        {
          ldclt_flush_genldif();
          go = 0;
          continue;
        }

      }

      if(!((256u & mctx.mod2) == 0u))
      {
        signed int return_value_doAbandon$55;
        return_value_doAbandon$55=doAbandon(tttctx);
        if(!(return_value_doAbandon$55 >= 0))
        {
          go = 0;
          continue;
        }

      }

      signed int return_value_getThreadStatus$56;
      return_value_getThreadStatus$56=getThreadStatus(tttctx, &status);
      if(!(return_value_getThreadStatus$56 >= 0))
        break;

    }
    printf("ldclt[%d]: T%03d: thread is dead.\n", mctx.pid, tttctx->thrdNum);
    fflush(stdout);
    signed int return_value_setThreadStatus$57;
    return_value_setThreadStatus$57=setThreadStatus(tttctx, 9);
    if(!(return_value_setThreadStatus$57 >= 0))
    {
      ldclt_sleep(1);
      tttctx->status = 9;
    }

    return arg;
  }
}

// trapVector
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 835
void trapVector(signed int sig, struct anonymous$11 *siginfo, void *truc)
{
  printf("\n");
  printGlobalStatistics();
  if(sig == 2)
  {
    printf("Catch SIGINT - exit...\n");
    fflush(stdout);
    ldcltExit(mctx.exitStatus);
  }

}

// tttctxInit
// file ../ldap/servers/slapd/tools/ldclt/ldclt.c line 238
signed int tttctxInit(signed int num, struct thread_context *tttctx)
{
  signed int ret;
  tttctx->active = mctx.inactivMax + 1;
  tttctx->attrlist[(signed long int)0] = (char *)(void *)0;
  tttctx->exitStatus = 0;
  tttctx->nbInactRow = 0;
  tttctx->nbInactTot = 0;
  tttctx->mode = mctx.mode;
  tttctx->status = -1;
  tttctx->thrdNum = num;
  tttctx->totalReq = mctx.totalReq;
  sprintf(tttctx->thrdId, "T%03d", tttctx->thrdNum);
  if(!((1u & mctx.mod2) == 0u))
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc((unsigned long int)512);
    tttctx->bufObject1 = (char *)return_value_malloc$1;
    tttctx->object=copyVersObject(&mctx.object);
    if(tttctx->object == ((struct vers_object *)NULL))
      return -1;

  }

  ret=ldclt_mutex_init(&tttctx->nbOpers_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(ret);
    fprintf(stderr, "ldclt: %s\n", return_value_strerror$2);
    fprintf(stderr, "Error: cannot initiate nbOpers_mutex %s\n", (const void *)tttctx->thrdId);
    fflush(stderr);
    return -1;
  }

  ret=ldclt_mutex_init(&tttctx->status_mutex);
  if(!(ret == 0))
  {
    char *return_value_strerror$3;
    return_value_strerror$3=strerror(ret);
    fprintf(stderr, "ldclt: %s\n", return_value_strerror$3);
    fprintf(stderr, "Error: cannot initiate status_mutex %s\n", (const void *)tttctx->thrdId);
    fflush(stderr);
    return -1;
  }

  return 0;
}

// usage
// file ../ldap/servers/slapd/tools/ldclt/ldcltU.c line 118
void usage()
{
  printf("\n");
  printf("usage: ldclt [-qQvV] [-E <max errors>]\n");
  printf("             [-b <base DN>] [-h <host>] [-p <port>] [-t <timeout>]\n");
  printf("             [-D <bind DN>] [-w <passwd>] [-o <SASL option>]\n");
  printf("             [-e <execParams>] [-a <max pending>]\n");
  printf("\t     [-n <nb threads>] [-i <nb times>] [-N <nb samples>]\n");
  printf("\t     [-I <err number>] [-T <total>]\n");
  printf("\t     [-r <low> -R <high>]\n");
  printf("\t     [-f <filter>] [-s <scope>]\n");
  printf("\t     [-S <slave>] [-P<master port>]\n");
  printf("\t     [-W <waitsec>] [-Z <certfile>]\n");
  printf("\n");
  printf("\tThis tool is a ldap client targeted to validate the reliability of\n");
  printf("\tthe product under test under hard use.\n");
  printf("\n");
  printf("\tThe valid options are:\n");
  printf("\t -a  Asynchronous mode, with max pending operations.\n");
  printf("\t -b  Give the base DN to use. Default \"o=sun,c=us\".\n");
  printf("\t -D  Bind DN. See -w\n");
  printf("\t -E  Max errors allowed.                   Default 1000.\n");
  printf("\t -e  Execution parameters:\n");
  printf("\t\tabandon           : abandon async search requests.\n");
  printf("\t\tadd               : ldap_add() entries.\n");
  printf("\t\tappend            : append entries to the genldif file.\n");
  printf("\t\tascii             : ascii 7-bits strings.\n");
  printf("\t\tattreplacefile=attrname:<file name> : replace attribute with given file content.\n");
  printf("\t\tattreplace=name:mask    : replace attribute of existing entry.\n");
  printf("\t\tattrlist=name:name:name : specify list of attribs to retrieve\n");
  printf("\t\tattrsonly=0|1     : ldap_search() parameter. Set 0 to read values.\n");
  printf("\t\tbindeach          : ldap_bind() for each operation.\n");
  printf("\t\tbindonly          : only bind/unbind, no other operation is performed.\n");
  printf("\t\tclose             : will close() the fd, rather than ldap_unbind().\n");
  printf("\t\tcltcertname=name  : name of the SSL client certificate\n");
  printf("\t\tcommoncounter     : all threads share the same counter.\n");
  printf("\t\tcounteach         : count each operation not only successful ones.\n");
  printf("\t\tdelete            : ldap_delete() entries.\n");
  printf("\t\tderef[=deref:attr]: This option works with -e add and esearch.\n");
  printf("\t\t                  : With -e esearch:\n");
  printf("\t\t                  : adds dereference control.\n");
  printf("\t\t                  : if =deref:attr is given, the deref and attr\n");
  printf("\t\t                  : pair is set to the control request.\n");
  printf("\t\t                  : if not given, \"secretary:cn\" is set.\n");
  printf("\t\t                  : With -e add:\n");
  printf("\t\t                  : adds \"secretary\" attr to the inetOrgPerson\n");
  printf("\t\t                  : entries to prepare for -e esearch using\n");
  printf("\t\t                  : the default deref attr pair.\n");
  printf("\t\tdontsleeponserverdown : will loop very fast if server down.\n");
  printf("\t\temailPerson       : objectclass=emailPerson (-e add only).\n");
  printf("\t\tesearch           : exact search.\n");
  printf("\t\tgenldif=filename  : generates a ldif file\n");
  printf("\t\timagesdir=path    : specify where are the images.\n");
  printf("\t\tincr              : incremental values.\n");
  printf("\t\tinetOrgPerson     : objectclass=inetOrgPerson (-e add only).\n");
  printf("\t\tkeydbfile=file    : filename of the key database\n");
  printf("\t\tkeydbpin=password : password for accessing the key database\n");
  printf("\t\tnoglobalstats     : don't print periodical global statistics\n");
  printf("\t\tnoloop            : does not loop the incremental numbers.\n");
  printf("\t\tobject=filename   : build object from input file\n");
  printf("\t\tperson            : objectclass=person (-e add only).\n");
  printf("\t\trandom            : random filters, etc...\n");
  printf("\t\trandomattrlist=name:name:name : random select attrib in the list\n");
  printf("\t\trandombase        : random base DN.\n");
  printf("\t\trandombaselow=value    : low value for random generator.\n");
  printf("\t\trandombasehigh=value   : high value for random generator.\n");
  printf("\t\trandombinddn           : random bind DN.\n");
  printf("\t\trandombinddnfromfile=file : retrieve bind DN & passwd from file\n");
  printf("\t\trandombinddnlow=value  : low value for random generator.\n");
  printf("\t\trandombinddnhigh=value : high value for random generator.\n");
  printf("\t\trdn=attrname:value     : alternate for -f.\n");
  printf("\t\treferral=on|off|rebind : change referral behaviour.\n");
  printf("\t\tscalab01               : activates scalab01 scenario.\n");
  printf("\t\tscalab01_cnxduration   : maximum connection duration.\n");
  printf("\t\tscalab01_maxcnxnb      : modem pool size.\n");
  printf("\t\tscalab01_wait          : sleep() between 2 attempts to connect.\n");
  printf("\t\tsmoothshutdown         : main thread waits till the worker threads exit.\n");
  printf("\t\tstring                 : create random strings rather than random numbers.\n");
  printf("\t\tv2                     : ldap v2.\n");
  printf("\t\twithnewparent : rename with newparent specified as argument.\n");
  printf("\t\trandomauthid           : random SASL Authid.\n");
  printf("\t\trandomauthidlow=value  : low value for random SASL Authid.\n");
  printf("\t\trandomauthidhigh=value : high value for random SASL Authid.\n");
  printf("\t -f  Filter for searches.\n");
  printf("\t -h  Host to connect.                      Default \"localhost\".\n");
  printf("\t -i  Number of times inactivity allowed.   Default 3 (30 seconds)\n");
  printf("\t -I  Ignore errors (cf. -E).               Default none.\n");
  printf("\t -n  Number of threads.                    Default 10.\n");
  printf("\t -N  Number of samples (10 seconds each).  Default infinite.\n");
  printf("\t -o  SASL Option.\n");
  printf("\t -p  Server port.                          Default 389.\n");
  printf("\t -P  Master port (to check replication).   Default 16000.\n");
  printf("\t -q  Quiet mode. See option -I.\n");
  printf("\t -Q  Super quiet mode.\n");
  printf("\t -r  Range's low value.\n");
  printf("\t -R  Range's high value.\n");
  printf("\t -s  Scope. May be base, subtree or one.   Default subtree.\n");
  printf("\t -S  Slave to check.\n");
  printf("\t -t  LDAP operations timeout. Default 30 seconds.\n");
  printf("\t -T  Total number of operations per thread.\t   Default infinite.\n");
  printf("\t -v  Verbose.\n");
  printf("\t -V  Very verbose.\n");
  printf("\t -w  Bind passwd. See -D.\n");
  printf("\t -W  Wait between two operations.          Default 0 seconds.\n");
  printf("\t -Z  certfile. Turn on SSL and use certfile as the certificate DB\n");
  printf("\n");
}

// utilsInit
// file ../ldap/servers/slapd/tools/ldclt/utils.h line 49
extern signed int utilsInit(void)
{
  return 0;
}

// writeAttrValue
// file ../ldap/servers/slapd/tools/ldclt/scalab01.c line 615
signed int writeAttrValue(struct ldap *ldapCtx, char *ident, char *dn, char *attname, char *value)
{
  signed int ret;
  struct ldapmod attribute;
  struct ldapmod *attrsmod[2l];
  char *pvalues[2l];
  pvalues[(signed long int)0] = value;
  pvalues[(signed long int)1] = (char *)(void *)0;
  attribute.mod_op = 0x0002;
  attribute.mod_type = attname;
  attribute.mod_vals.modv_strvals = pvalues;
  attrsmod[(signed long int)0] = &attribute;
  attrsmod[(signed long int)1] = (struct ldapmod *)(void *)0;
  ret=ldap_modify_ext_s(ldapCtx, dn, attrsmod, (struct ldapcontrol **)(void *)0, (struct ldapcontrol **)(void *)0);
  if(!(ret == 0x00))
  {
    char *return_value_my_ldap_err2string$1;
    return_value_my_ldap_err2string$1=my_ldap_err2string(ret);
    printf("ldclt[%d]: %s: Cannot ldap_modify_ext_s (%s in %s), error=%d (%s)\n", mctx.pid, ident, attname, dn, ret, return_value_my_ldap_err2string$1);
    fflush(stdout);
    return -1;
  }

  return 0;
}

