// #anon_enum$GNUTLS_CRD_CERTIFICATE=1$GNUTLS_CRD_ANON=2$GNUTLS_CRD_SRP=3$GNUTLS_CRD_PSK=4$GNUTLS_CRD_IA=5
// file /usr/include/gnutls/gnutls.h line 222
enum anonymous$4 { GNUTLS_CRD_CERTIFICATE=1, GNUTLS_CRD_ANON=2, GNUTLS_CRD_SRP=3, GNUTLS_CRD_PSK=4, GNUTLS_CRD_IA=5 };

// #anon_enum$GNUTLS_SHUT_RDWR=0$GNUTLS_SHUT_WR=1
// file /usr/include/gnutls/gnutls.h line 554
enum anonymous$2 { GNUTLS_SHUT_RDWR=0, GNUTLS_SHUT_WR=1 };

// #anon_enum$GNUTLS_X509_FMT_DER=0$GNUTLS_X509_FMT_PEM=1
// file /usr/include/gnutls/gnutls.h line 613
enum anonymous$15 { GNUTLS_X509_FMT_DER=0, GNUTLS_X509_FMT_PEM=1 };

// #anon_enum$TP_UDP=0$TP_TCP=1$TP_TLS=2
// file tcpflood.c line 185
enum anonymous$20 { TP_UDP=0, TP_TCP=1, TP_TLS=2 };

// tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 121
struct anonymous$18;

// tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 107
struct anonymous$16;

// tag-#anon#ST[ARR16{U64}$U64$'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous$9;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$1;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 74
struct anonymous$13;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 97
struct anonymous$14;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 89
struct anonymous$11;

// tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 62
struct anonymous$0;

// tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 81
struct anonymous$8;

// tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 114
struct anonymous$17;

// tag-#anon#UN[*{V(S32)->V}$V(S32)->V$'sa_handler'||*{V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}$SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#$|*{V}$V$)->V}$V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}$SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#$|*{V}$V$)->V$'sa_sigaction'|]
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 28
union anonymous$7;

// tag-#anon#UN[ARR16{U8}$U8$'__u6_addr8'||ARR8{U16}$U16$'__u6_addr16'||ARR4{U32}$U32$'__u6_addr32'|]
// file /usr/include/netinet/in.h line 211
union anonymous$6;

// tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 69
union anonymous$19;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$5;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$10;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$12;

// tag-#anon#UN[r*{SYM#tag-sockaddr#}$SYM#tag-sockaddr#$'__sockaddr__'||r*{SYM#tag-sockaddr_at#}$SYM#tag-sockaddr_at#$'__sockaddr_at__'||r*{SYM#tag-sockaddr_ax25#}$SYM#tag-sockaddr_ax25#$'__sockaddr_ax25__'||r*{SYM#tag-sockaddr_dl#}$SYM#tag-sockaddr_dl#$'__sockaddr_dl__'||r*{SYM#tag-sockaddr_eon#}$SYM#tag-sockaddr_eon#$'__sockaddr_eon__'||r*{SYM#tag-sockaddr_in#}$SYM#tag-sockaddr_in#$'__sockaddr_in__'||r*{SYM#tag-sockaddr_in6#}$SYM#tag-sockaddr_in6#$'__sockaddr_in6__'||r*{SYM#tag-sockaddr_inarp#}$SYM#tag-sockaddr_inarp#$'__sockaddr_inarp__'||r*{SYM#tag-sockaddr_ipx#}$SYM#tag-sockaddr_ipx#$'__sockaddr_ipx__'||r*{SYM#tag-sockaddr_iso#}$SYM#tag-sockaddr_iso#$'__sockaddr_iso__'||r*{SYM#tag-sockaddr_ns#}$SYM#tag-sockaddr_ns#$'__sockaddr_ns__'||r*{SYM#tag-sockaddr_un#}$SYM#tag-sockaddr_un#$'__sockaddr_un__'||r*{SYM#tag-sockaddr_x25#}$SYM#tag-sockaddr_x25#$'__sockaddr_x25__'|]
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
union anonymous;

// tag-#anon#UN[r*{SYM#tag-sockaddr#}$SYM#tag-sockaddr#$'__sockaddr__'||r*{SYM#tag-sockaddr_at#}$SYM#tag-sockaddr_at#$'__sockaddr_at__'||r*{SYM#tag-sockaddr_ax25#}$SYM#tag-sockaddr_ax25#$'__sockaddr_ax25__'||r*{SYM#tag-sockaddr_dl#}$SYM#tag-sockaddr_dl#$'__sockaddr_dl__'||r*{SYM#tag-sockaddr_eon#}$SYM#tag-sockaddr_eon#$'__sockaddr_eon__'||r*{SYM#tag-sockaddr_in#}$SYM#tag-sockaddr_in#$'__sockaddr_in__'||r*{SYM#tag-sockaddr_in6#}$SYM#tag-sockaddr_in6#$'__sockaddr_in6__'||r*{SYM#tag-sockaddr_inarp#}$SYM#tag-sockaddr_inarp#$'__sockaddr_inarp__'||r*{SYM#tag-sockaddr_ipx#}$SYM#tag-sockaddr_ipx#$'__sockaddr_ipx__'||r*{SYM#tag-sockaddr_iso#}$SYM#tag-sockaddr_iso#$'__sockaddr_iso__'||r*{SYM#tag-sockaddr_ns#}$SYM#tag-sockaddr_ns#$'__sockaddr_ns__'||r*{SYM#tag-sockaddr_un#}$SYM#tag-sockaddr_un#$'__sockaddr_un__'||r*{SYM#tag-sockaddr_x25#}$SYM#tag-sockaddr_x25#$'__sockaddr_x25__'|]$transparent
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
union anonymous$3;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-__rlimit_resource
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 31
enum __rlimit_resource { RLIMIT_CPU=0, RLIMIT_FSIZE=1, RLIMIT_DATA=2, RLIMIT_STACK=3, RLIMIT_CORE=4, __RLIMIT_RSS=5, RLIMIT_NOFILE=7, __RLIMIT_OFILE=7, RLIMIT_AS=9, __RLIMIT_NPROC=6, __RLIMIT_MEMLOCK=8, __RLIMIT_LOCKS=10, __RLIMIT_SIGPENDING=11, __RLIMIT_MSGQUEUE=12, __RLIMIT_NICE=13, __RLIMIT_RTPRIO=14, __RLIMIT_RTTIME=15, __RLIMIT_NLIMITS=16, __RLIM_NLIMITS=16 };

// tag-gnutls_certificate_credentials_st
// file /usr/include/gnutls/gnutls.h line 1399
struct gnutls_certificate_credentials_st;

// tag-gnutls_session_int
// file /usr/include/gnutls/gnutls.h line 782
struct gnutls_session_int;

// tag-in6_addr
// file /usr/include/netinet/in.h line 209
struct in6_addr;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-instdata
// file tcpflood.c line 165
struct instdata;

// tag-linger
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 379
struct linger;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rlimit
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 139
struct rlimit;

// tag-runstats
// file tcpflood.c line 175
struct runstats;

// tag-sigaction
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 24
struct sigaction;

// tag-sigval
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 32
union sigval;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_at
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_at;

// tag-sockaddr_ax25
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_ax25;

// tag-sockaddr_dl
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_dl;

// tag-sockaddr_eon
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_eon;

// tag-sockaddr_in
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_in;

// tag-sockaddr_in6
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_in6;

// tag-sockaddr_inarp
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_inarp;

// tag-sockaddr_ipx
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_ipx;

// tag-sockaddr_iso
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_iso;

// tag-sockaddr_ns
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_ns;

// tag-sockaddr_un
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_un;

// tag-sockaddr_x25
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_x25;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

#ifndef NULL
#define NULL ((void*)0)
#endif

// atof
// file /usr/include/stdlib.h line 144
extern double atof(const char *);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// atoll
// file /usr/include/stdlib.h line 157
extern signed long long int atoll(const char *);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closeConnections
// file tcpflood.c line 312
void closeConnections(void);
// closeTLSSess
// file tcpflood.c line 849
static void closeTLSSess(signed int i);
// connect
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 137
extern signed int connect(signed int, union anonymous$3, unsigned int);
// endTiming
// file tcpflood.c line 641
static inline void endTiming(struct timeval *tvStart, struct runstats *stats);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// genMsg
// file tcpflood.c line 356
static inline void genMsg(char *buf, unsigned long int maxBuf, signed int *pLenBuf, struct instdata *inst);
// genStats
// file tcpflood.c line 676
static inline void genStats(struct runstats *stats);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// gnutls_bye
// file /usr/include/gnutls/gnutls.h line 819
signed int gnutls_bye(struct gnutls_session_int *, enum anonymous$2);
// gnutls_certificate_allocate_credentials
// file /usr/include/gnutls/gnutls.h line 1437
signed int gnutls_certificate_allocate_credentials(struct gnutls_certificate_credentials_st **);
// gnutls_certificate_set_x509_key_file
// file /usr/include/gnutls/gnutls.h line 1519
signed int gnutls_certificate_set_x509_key_file(struct gnutls_certificate_credentials_st *, const char *, const char *, enum anonymous$15);
// gnutls_credentials_set
// file /usr/include/gnutls/gnutls.h line 1367
signed int gnutls_credentials_set(struct gnutls_session_int *, enum anonymous$4, void *);
// gnutls_deinit
// file /usr/include/gnutls/gnutls.h line 816
void gnutls_deinit(struct gnutls_session_int *);
// gnutls_global_init
// file /usr/include/gnutls/gnutls.h line 1607
signed int gnutls_global_init(void);
// gnutls_global_set_log_function
// file /usr/include/gnutls/gnutls.h line 1655
void gnutls_global_set_log_function(void (*)(signed int, const char *));
// gnutls_global_set_log_level
// file /usr/include/gnutls/gnutls.h line 1657
void gnutls_global_set_log_level(signed int);
// gnutls_handshake
// file /usr/include/gnutls/gnutls.h line 821
signed int gnutls_handshake(struct gnutls_session_int *);
// gnutls_init
// file /usr/include/gnutls/gnutls.h line 815
signed int gnutls_init(struct gnutls_session_int **, unsigned int);
// gnutls_perror
// file /usr/include/gnutls/gnutls.h line 938
void gnutls_perror(signed int);
// gnutls_record_send
// file /usr/include/gnutls/gnutls.h line 992
signed long int gnutls_record_send(struct gnutls_session_int *, const void *, unsigned long int);
// gnutls_set_default_priority
// file /usr/include/gnutls/gnutls.h line 1200
signed int gnutls_set_default_priority(struct gnutls_session_int *);
// gnutls_transport_set_ptr
// file /usr/include/gnutls/gnutls.h line 1722
void gnutls_transport_set_ptr(struct gnutls_session_int *, void *);
// htons
// file /usr/include/netinet/in.h line 379
extern unsigned short int htons(unsigned short int);
// inet_aton
// file /usr/include/arpa/inet.h line 73
extern signed int inet_aton(const char *, struct in_addr *);
// initTLS
// file tcpflood.c line 756
static void initTLS(void);
// initTLSSess
// file tcpflood.c line 799
static void initTLSSess(signed int i);
// isatty
// file /usr/include/unistd.h line 779
extern signed int isatty(signed int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// openConn
// file tcpflood.c line 213
signed int openConn(signed int *fd);
// openConnections
// file tcpflood.c line 262
signed int openConnections(void);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// prepareGenerators
// file tcpflood.c line 569
static inline void prepareGenerators();
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous$10 *);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous$10 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous$10 *, const union anonymous$5 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous$10 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous$10 *, union anonymous$12 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous$12 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$12 *, const union anonymous$5 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$12 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$12 *);
// rand
// file /usr/include/stdlib.h line 374
extern signed int rand(void);
// rewind
// file /usr/include/stdio.h line 759
extern void rewind(struct _IO_FILE *);
// runGenerators
// file tcpflood.c line 609
static inline void runGenerators();
// runTests
// file tcpflood.c line 707
static signed int runTests(void);
// send
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 149
extern signed long int send(signed int, const void *, unsigned long int, signed int);
// sendMessages
// file tcpflood.c line 433
signed int sendMessages(struct instdata *inst);
// sendTLS
// file tcpflood.c line 832
static signed int sendTLS(signed int i, char *buf, signed int lenBuf);
// sendto
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 163
extern signed long int sendto(signed int, const void *, unsigned long int, signed int, union anonymous$3, unsigned int);
// setrlimit
// file /usr/include/x86_64-linux-gnu/sys/resource.h line 69
extern signed int setrlimit(enum __rlimit_resource, struct rlimit *);
// setsockopt
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 226
extern signed int setsockopt(signed int, signed int, signed int, const void *, unsigned int);
// setupUDP
// file tcpflood.c line 194
static inline signed int setupUDP(void);
// setvbuf
// file /usr/include/stdio.h line 336
extern signed int setvbuf(struct _IO_FILE *, char *, signed int, unsigned long int);
// sigaction
// file /usr/include/signal.h line 259
extern signed int sigaction(signed int, struct sigaction *, struct sigaction *);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous$9 *);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// srand
// file /usr/include/stdlib.h line 376
extern void srand(unsigned int);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// thrdStarter
// file tcpflood.c line 547
static void * thrdStarter(void *arg);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// tlsLogFunction
// file tcpflood.c line 746
static void tlsLogFunction(signed int level, const char *msg);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// waitGenerators
// file tcpflood.c line 624
static inline void waitGenerators();
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);

struct anonymous$18
{
  // _call_addr
  void *_call_addr;
  // _syscall
  signed int _syscall;
  // _arch
  unsigned int _arch;
};

struct anonymous$16
{
  // si_addr
  void *si_addr;
  // si_addr_lsb
  signed short int si_addr_lsb;
};

struct anonymous$9
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous$1
{
  // __lock
  signed int __lock;
  // __futex
  unsigned int __futex;
  // __total_seq
  unsigned long long int __total_seq;
  // __wakeup_seq
  unsigned long long int __wakeup_seq;
  // __woken_seq
  unsigned long long int __woken_seq;
  // __mutex
  void *__mutex;
  // __nwaiters
  unsigned int __nwaiters;
  // __broadcast_seq
  unsigned int __broadcast_seq;
};

struct anonymous$13
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
};

struct anonymous$14
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

struct anonymous$11
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous$8
{
  // si_tid
  signed int si_tid;
  // si_overrun
  signed int si_overrun;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous$17
{
  // si_band
  signed long int si_band;
  // si_fd
  signed int si_fd;
};

union anonymous$19
{
  // _pad
  signed int _pad[28l];
  // _kill
  struct anonymous$13 _kill;
  // _timer
  struct anonymous$8 _timer;
  // _rt
  struct anonymous$11 _rt;
  // _sigchld
  struct anonymous$14 _sigchld;
  // _sigfault
  struct anonymous$16 _sigfault;
  // _sigpoll
  struct anonymous$17 _sigpoll;
  // _sigsys
  struct anonymous$18 _sigsys;
};

struct anonymous$0
{
  // si_signo
  signed int si_signo;
  // si_errno
  signed int si_errno;
  // si_code
  signed int si_code;
  // _sifields
  union anonymous$19 _sifields;
};

union anonymous$7
{
  // sa_handler
  void (*sa_handler)(signed int);
  // sa_sigaction
  void (*sa_sigaction)(signed int, struct anonymous$0 *, void *);
};

union anonymous$6
{
  // __u6_addr8
  unsigned char __u6_addr8[16l];
  // __u6_addr16
  unsigned short int __u6_addr16[8l];
  // __u6_addr32
  unsigned int __u6_addr32[4l];
};

union anonymous$5
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous$10
{
  // __data
  struct anonymous$1 __data;
  // __size
  char __size[48l];
  // __align
  signed long long int __align;
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

union anonymous$12
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

union anonymous
{
  // __sockaddr__
  struct sockaddr * restrict __sockaddr__;
  // __sockaddr_at__
  struct sockaddr_at * restrict __sockaddr_at__;
  // __sockaddr_ax25__
  struct sockaddr_ax25 * restrict __sockaddr_ax25__;
  // __sockaddr_dl__
  struct sockaddr_dl * restrict __sockaddr_dl__;
  // __sockaddr_eon__
  struct sockaddr_eon * restrict __sockaddr_eon__;
  // __sockaddr_in__
  struct sockaddr_in * restrict __sockaddr_in__;
  // __sockaddr_in6__
  struct sockaddr_in6 * restrict __sockaddr_in6__;
  // __sockaddr_inarp__
  struct sockaddr_inarp * restrict __sockaddr_inarp__;
  // __sockaddr_ipx__
  struct sockaddr_ipx * restrict __sockaddr_ipx__;
  // __sockaddr_iso__
  struct sockaddr_iso * restrict __sockaddr_iso__;
  // __sockaddr_ns__
  struct sockaddr_ns * restrict __sockaddr_ns__;
  // __sockaddr_un__
  struct sockaddr_un * restrict __sockaddr_un__;
  // __sockaddr_x25__
  struct sockaddr_x25 * restrict __sockaddr_x25__;
};

union anonymous$3
{
  // __sockaddr__
  struct sockaddr * restrict __sockaddr__;
  // __sockaddr_at__
  struct sockaddr_at * restrict __sockaddr_at__;
  // __sockaddr_ax25__
  struct sockaddr_ax25 * restrict __sockaddr_ax25__;
  // __sockaddr_dl__
  struct sockaddr_dl * restrict __sockaddr_dl__;
  // __sockaddr_eon__
  struct sockaddr_eon * restrict __sockaddr_eon__;
  // __sockaddr_in__
  struct sockaddr_in * restrict __sockaddr_in__;
  // __sockaddr_in6__
  struct sockaddr_in6 * restrict __sockaddr_in6__;
  // __sockaddr_inarp__
  struct sockaddr_inarp * restrict __sockaddr_inarp__;
  // __sockaddr_ipx__
  struct sockaddr_ipx * restrict __sockaddr_ipx__;
  // __sockaddr_iso__
  struct sockaddr_iso * restrict __sockaddr_iso__;
  // __sockaddr_ns__
  struct sockaddr_ns * restrict __sockaddr_ns__;
  // __sockaddr_un__
  struct sockaddr_un * restrict __sockaddr_un__;
  // __sockaddr_x25__
  struct sockaddr_x25 * restrict __sockaddr_x25__;
} __attribute__ ((__transparent_union__));

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

struct in6_addr
{
  // __in6_u
  union anonymous$6 __in6_u;
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
};

struct instdata
{
  // lower
  unsigned long long int lower;
  // numMsgs
  unsigned long long int numMsgs;
  // numSent
  unsigned long long int numSent;
  // idx
  unsigned int idx;
  // thread
  unsigned long int thread;
};

struct linger
{
  // l_onoff
  signed int l_onoff;
  // l_linger
  signed int l_linger;
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

struct runstats
{
  // totalRuntime
  unsigned long long int totalRuntime;
  // minRuntime
  unsigned long int minRuntime;
  // maxRuntime
  unsigned long int maxRuntime;
  // numRuns
  signed int numRuns;
};

struct sigaction
{
  // __sigaction_handler
  union anonymous$7 __sigaction_handler;
  // sa_mask
  struct anonymous$9 sa_mask;
  // sa_flags
  signed int sa_flags;
  // sa_restorer
  void (*sa_restorer)(void);
};

struct sockaddr
{
  // sa_family
  unsigned short int sa_family;
  // sa_data
  char sa_data[14l];
};

struct sockaddr_in
{
  // sin_family
  unsigned short int sin_family;
  // sin_port
  unsigned short int sin_port;
  // sin_addr
  struct in_addr sin_addr;
  // sin_zero
  unsigned char sin_zero[8l];
};

struct sockaddr_in6
{
  // sin6_family
  unsigned short int sin6_family;
  // sin6_port
  unsigned short int sin6_port;
  // sin6_flowinfo
  unsigned int sin6_flowinfo;
  // sin6_addr
  struct in6_addr sin6_addr;
  // sin6_scope_id
  unsigned int sin6_scope_id;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct timezone
{
  // tz_minuteswest
  signed int tz_minuteswest;
  // tz_dsttime
  signed int tz_dsttime;
};


// MsgToSend
// file tcpflood.c line 132
static char *MsgToSend = (char *)(void *)0;
// bBinaryFile
// file tcpflood.c line 133
static signed int bBinaryFile = 0;
// bCSVoutput
// file tcpflood.c line 142
static signed int bCSVoutput = 0;
// bRandConnDrop
// file tcpflood.c line 130
static signed int bRandConnDrop = 0;
// bRandomizeExtraData
// file tcpflood.c line 122
static signed int bRandomizeExtraData = 0;
// bShowProgress
// file tcpflood.c line 128
static signed int bShowProgress = 1;
// bSilent
// file tcpflood.c line 129
static signed int bSilent = 0;
// bStatsRecords
// file tcpflood.c line 141
static signed int bStatsRecords = 0;
// batchsize
// file tcpflood.c line 143
static signed long long int batchsize = 100000000ll;
// condDoRun
// file tcpflood.c line 162
union anonymous$10 condDoRun;
// condStarted
// file tcpflood.c line 161
union anonymous$10 condStarted;
// dataFP
// file tcpflood.c line 137
struct _IO_FILE *dataFP = (struct _IO_FILE *)(void *)0;
// dataFile
// file tcpflood.c line 134
static char *dataFile = (char *)(void *)0;
// dbRandConnDrop
// file tcpflood.c line 131
static double dbRandConnDrop = 0.95;
// doRun
// file tcpflood.c line 159
signed int doRun;
// dynFileIDs
// file tcpflood.c line 119
static signed int dynFileIDs = 0;
// extraDataLen
// file tcpflood.c line 120
static signed int extraDataLen = 0;
// frameDelim
// file tcpflood.c line 136
static char frameDelim = (char)10;
// instarray
// file tcpflood.c line 172
struct instdata *instarray = (struct instdata *)(void *)0;
// jsonCookie
// file tcpflood.c line 150
static char *jsonCookie = (char *)(void *)0;
// msgNum
// file tcpflood.c line 127
static signed int msgNum = 0;
// msgPRI
// file tcpflood.c line 116
static char *msgPRI = "167";
// nConnDrops
// file tcpflood.c line 138
static signed long int nConnDrops = (signed long int)0;
// numConnections
// file tcpflood.c line 124
static signed int numConnections = 1;
// numFileIterations
// file tcpflood.c line 135
static signed int numFileIterations = 1;
// numMsgsToSend
// file tcpflood.c line 123
static signed int numMsgsToSend;
// numRuns
// file tcpflood.c line 139
static signed int numRuns = 1;
// numTargetPorts
// file tcpflood.c line 118
static signed int numTargetPorts = 1;
// numThrds
// file tcpflood.c line 146
static signed int numThrds = 1;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// runMultithreaded
// file tcpflood.c line 145
static signed int runMultithreaded = 0;
// runningThreads
// file tcpflood.c line 158
signed int runningThreads;
// sessArray
// file tcpflood.c line 153
static struct gnutls_session_int **sessArray;
// sleepBetweenRuns
// file tcpflood.c line 140
static signed int sleepBetweenRuns = 30;
// sockArray
// file tcpflood.c line 126
static signed int *sockArray;
// softLimitConnections
// file tcpflood.c line 125
static signed int softLimitConnections = 0;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// targetIP
// file tcpflood.c line 115
static char *targetIP = "127.0.0.1";
// targetPort
// file tcpflood.c line 117
static signed int targetPort = 13514;
// thrdMgmt
// file tcpflood.c line 160
union anonymous$12 thrdMgmt;
// tlsCertFile
// file tcpflood.c line 147
static char *tlsCertFile = (char *)(void *)0;
// tlsKeyFile
// file tcpflood.c line 148
static char *tlsKeyFile = (char *)(void *)0;
// tlsLogLevel
// file tcpflood.c line 149
static signed int tlsLogLevel = 0;
// tlscred
// file tcpflood.c line 154
static struct gnutls_certificate_credentials_st *tlscred;
// transport
// file tcpflood.c line 185
static enum anonymous$20 transport = (enum anonymous$20)TP_TCP;
// udpRcvr
// file tcpflood.c line 183
static struct sockaddr_in udpRcvr;
// udpsock
// file tcpflood.c line 182
static signed int udpsock;
// useRFC5424Format
// file tcpflood.c line 121
static signed int useRFC5424Format = 0;
// waittime
// file tcpflood.c line 144
static signed int waittime = 0;

// closeConnections
// file tcpflood.c line 312
void closeConnections(void)
{
  signed int i;
  unsigned long int lenMsg;
  struct linger ling;
  char msgBuf[128l];
  signed long int return_value_write$1;
  if(!((signed int)transport == TP_UDP))
  {
    if(!(bShowProgress == 0))
      return_value_write$1=write(1, (const void *)"      close connections", sizeof(char [24l]) /*24ul*/  - (unsigned long int)1);

    i = 0;
    for( ; !(i >= numConnections); i = i + 1)
    {
      if(i % 10 == 0)
      {
        if(!(bShowProgress == 0))
        {
          signed int return_value_sprintf$2;
          return_value_sprintf$2=sprintf(msgBuf, "\r%5.5d", i);
          lenMsg = (unsigned long int)return_value_sprintf$2;
          signed long int return_value_write$3;
          return_value_write$3=write(1, (const void *)msgBuf, lenMsg);
        }

      }

      if(!(sockArray[(signed long int)i] == -1))
      {
        ling.l_onoff = 1;
        ling.l_linger = 1;
        setsockopt(sockArray[(signed long int)i], 1, 13, (const void *)&ling, (unsigned int)sizeof(struct linger) /*8ul*/ );
        if((signed int)transport == TP_TLS)
          closeTLSSess(i);

        close(sockArray[(signed long int)i]);
      }

    }
    if(!(bShowProgress == 0))
    {
      signed int return_value_sprintf$4;
      return_value_sprintf$4=sprintf(msgBuf, "\r%5.5d close connections\n", i);
      lenMsg = (unsigned long int)return_value_sprintf$4;
      signed long int return_value_write$5;
      return_value_write$5=write(1, (const void *)msgBuf, lenMsg);
    }

  }

}

// closeTLSSess
// file tcpflood.c line 849
static void closeTLSSess(signed int i)
{
  gnutls_bye(sessArray[(signed long int)i], (enum anonymous$2)GNUTLS_SHUT_RDWR);
  gnutls_deinit(sessArray[(signed long int)i]);
}

// endTiming
// file tcpflood.c line 641
static inline void endTiming(struct timeval *tvStart, struct runstats *stats)
{
  signed long int sec;
  signed long int usec;
  unsigned long int runtime;
  struct timeval tvEnd;
  gettimeofday(&tvEnd, (struct timezone *)(void *)0);
  if(!(tvEnd.tv_usec >= tvStart->tv_usec))
  {
    tvEnd.tv_sec = tvEnd.tv_sec - 1l;
    tvEnd.tv_usec = tvEnd.tv_usec + (signed long int)1000000;
  }

  sec = tvEnd.tv_sec - tvStart->tv_sec;
  usec = tvEnd.tv_usec - tvStart->tv_usec;
  runtime = (unsigned long int)(sec * (signed long int)1000 + usec / (signed long int)1000);
  stats->totalRuntime = stats->totalRuntime + runtime;
  if(!(runtime >= stats->minRuntime))
    stats->minRuntime = runtime;

  if(!(stats->maxRuntime >= runtime))
    stats->maxRuntime = runtime;

  if(bSilent == 0 || !(bStatsRecords == 0))
  {
    if(!(bCSVoutput == 0))
      printf("%ld.%3.3ld\n", runtime / (unsigned long int)1000, runtime % (unsigned long int)1000);

    else
      printf("runtime: %ld.%3.3ld\n", runtime / (unsigned long int)1000, runtime % (unsigned long int)1000);
  }

}

// genMsg
// file tcpflood.c line 356
static inline void genMsg(char *buf, unsigned long int maxBuf, signed int *pLenBuf, struct instdata *inst)
{
  signed int edLen;
  char extraData[102401l];
  char dynFileIDBuf[128l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  signed int done;
  signed int return_value_rand$3;
  if(!(dataFP == ((struct _IO_FILE *)NULL)))
    do
    {
      done = 1;
      unsigned long int return_value_fread$1;
      return_value_fread$1=fread((void *)buf, (unsigned long int)1, (unsigned long int)(100 * 1024 + 1024), dataFP);
      *pLenBuf = (signed int)return_value_fread$1;
      if(*pLenBuf == 0)
      {
        numFileIterations = numFileIterations - 1;
        if(numFileIterations >= 1)
        {
          rewind(dataFP);
          done = 0;
        }

        else
        {
          *pLenBuf = 0;
          goto finalize_it;
        }
      }

    }
    while(done == 0);

  else
    if(!(jsonCookie == ((char *)NULL)))
    {
      if(!(useRFC5424Format == 0))
        *pLenBuf=snprintf(buf, maxBuf, "<%s>1 2003-03-01T01:00:00.000Z mymachine.example.com tcpflood - tag [tcpflood@32473 MSGNUM=\"%8.8d\"] %s{\"msgnum\":%d}%c", msgPRI, msgNum, jsonCookie, msgNum, frameDelim);

      else
        *pLenBuf=snprintf(buf, maxBuf, "<%s>Mar  1 01:00:00 172.20.245.8 tag %s{\"msgnum\":%d}%c", msgPRI, jsonCookie, msgNum, frameDelim);
    }

    else
      if(MsgToSend == ((char *)NULL))
      {
        if(dynFileIDs >= 1)
        {
          signed int return_value_rand$2;
          return_value_rand$2=rand();
          snprintf(dynFileIDBuf, sizeof(char [128l]) /*128ul*/ , "%d:", return_value_rand$2 % dynFileIDs);
        }

        if(extraDataLen == 0)
        {
          if(!(useRFC5424Format == 0))
            *pLenBuf=snprintf(buf, maxBuf, "<%s>1 2003-03-01T01:00:00.000Z mymachine.example.com tcpflood - tag [tcpflood@32473 MSGNUM=\"%8.8d\"] msgnum:%s%8.8d:%c", msgPRI, msgNum, (const void *)dynFileIDBuf, msgNum, frameDelim);

          else
            *pLenBuf=snprintf(buf, maxBuf, "<%s>Mar  1 01:00:00 172.20.245.8 tag msgnum:%s%8.8d:%c", msgPRI, (const void *)dynFileIDBuf, msgNum, frameDelim);
        }

        else
        {
          if(!(bRandomizeExtraData == 0))
          {
            return_value_rand$3=rand();
            edLen = (signed int)(((unsigned long int)return_value_rand$3 + (unsigned long int)extraDataLen) % (unsigned long int)extraDataLen + (unsigned long int)1);
          }

          else
            edLen = extraDataLen;
          memset((void *)extraData, 88, (unsigned long int)edLen);
          extraData[(signed long int)edLen] = (char)0;
          if(!(useRFC5424Format == 0))
            *pLenBuf=snprintf(buf, maxBuf, "<%s>1 2003-03-01T01:00:00.000Z mymachine.example.com tcpflood - tag [tcpflood@32473 MSGNUM=\"%8.8d\"] msgnum:%s%8.8d:%c", msgPRI, msgNum, (const void *)dynFileIDBuf, msgNum, frameDelim);

          else
            *pLenBuf=snprintf(buf, maxBuf, "<%s>Mar  1 01:00:00 172.20.245.8 tag msgnum:%s%8.8d:%d:%s%c", msgPRI, (const void *)dynFileIDBuf, msgNum, edLen, (const void *)extraData, frameDelim);
        }
      }

      else
        *pLenBuf=snprintf(buf, maxBuf, "%s\n", MsgToSend);
  inst->numSent = inst->numSent + 1ull;

finalize_it:
  ;
}

// genStats
// file tcpflood.c line 676
static inline void genStats(struct runstats *stats)
{
  unsigned long int avg = stats->totalRuntime / (unsigned long int)stats->numRuns;
  if(!(bCSVoutput == 0))
  {
    printf("#numRuns,TotalRuntime,AvgRuntime,MinRuntime,MaxRuntime\n");
    printf("%d,%llu.%3.3d,%lu.%3.3lu,%lu.%3.3lu,%lu.%3.3lu\n", stats->numRuns, stats->totalRuntime / (unsigned long int)1000, (signed int)stats->totalRuntime % 1000, avg / (unsigned long int)1000, avg % (unsigned long int)1000, stats->minRuntime / (unsigned long int)1000, stats->minRuntime % (unsigned long int)1000, stats->maxRuntime / (unsigned long int)1000, stats->maxRuntime % (unsigned long int)1000);
  }

  else
  {
    printf("Runs:     %d\n", stats->numRuns);
    printf("Runtime:\n");
    printf("  total:  %llu.%3.3d\n", stats->totalRuntime / (unsigned long int)1000, (signed int)stats->totalRuntime % 1000);
    printf("  avg:    %lu.%3.3lu\n", avg / (unsigned long int)1000, avg % (unsigned long int)1000);
    printf("  min:    %lu.%3.3lu\n", stats->minRuntime / (unsigned long int)1000, stats->minRuntime % (unsigned long int)1000);
    printf("  max:    %lu.%3.3lu\n", stats->maxRuntime / (unsigned long int)1000, stats->maxRuntime % (unsigned long int)1000);
    printf("All times are wallclock time.\n");
  }
}

// initTLS
// file tcpflood.c line 756
static void initTLS(void)
{
  signed int r;
  gnutls_global_init();
  if(tlsLogLevel >= 1)
  {
    gnutls_global_set_log_function(tlsLogFunction);
    gnutls_global_set_log_level(tlsLogLevel);
  }

  r=gnutls_certificate_allocate_credentials(&tlscred);
  if(!(r == 0))
  {
    printf("error allocating credentials\n");
    gnutls_perror(r);
    exit(1);
  }

  r=gnutls_certificate_set_x509_key_file(tlscred, tlsCertFile, tlsKeyFile, (enum anonymous$15)GNUTLS_X509_FMT_PEM);
  if(!(r == 0))
  {
    printf("error setting certificate files -- have you mixed up key and certificate?\n");
    printf("If in doubt, try swapping the files in -z/-Z\n");
    printf("Certifcate is: '%s'\n", tlsCertFile);
    printf("Key        is: '%s'\n", tlsKeyFile);
    gnutls_perror(r);
    r=gnutls_certificate_set_x509_key_file(tlscred, tlsKeyFile, tlsCertFile, (enum anonymous$15)GNUTLS_X509_FMT_PEM);
    if(r == 0)
      printf("Tried swapping files, this seems to work (but results may be unpredictable!)\n");

    else
      exit(1);
  }

}

// initTLSSess
// file tcpflood.c line 799
static void initTLSSess(signed int i)
{
  signed int r;
  gnutls_init(sessArray + (signed long int)i, (unsigned int)(1 << 1));
  gnutls_set_default_priority(sessArray[(signed long int)i]);
  r=gnutls_credentials_set(sessArray[(signed long int)i], (enum anonymous$4)GNUTLS_CRD_CERTIFICATE, (void *)tlscred);
  if(!(r == 0))
  {
    fprintf(stderr, "Setting credentials failed\n");
    gnutls_perror(r);
    exit(1);
  }

  gnutls_transport_set_ptr(sessArray[(signed long int)i], (void *)sockArray[(signed long int)i]);
  r=gnutls_handshake(sessArray[(signed long int)i]);
  if(!(r >= 0))
  {
    fprintf(stderr, "TLS Handshake failed\n");
    gnutls_perror(r);
    exit(1);
  }

}

// main
// file tcpflood.c line 864
signed int main(signed int argc, char **argv)
{
  signed int ret = 0;
  signed int opt;
  struct sigaction sigAct;
  struct rlimit maxFiles;
  signed long int return_value_time$1;
  return_value_time$1=time((signed long int *)(void *)0);
  srand((unsigned int)return_value_time$1);
  memset((void *)&sigAct, 0, sizeof(struct sigaction) /*152ul*/ );
  sigemptyset(&sigAct.sa_mask);
  sigAct.__sigaction_handler.sa_handler = (void (*)(signed int))1;
  sigaction(13, &sigAct, (struct sigaction *)(void *)0);
  static char buf[1024l];
  setvbuf(stdout, buf, 2, (unsigned long int)48);
  signed int return_value_atoi$2;
  signed int return_value_strcmp$5;
  signed int return_value_strcmp$4;
  signed int return_value_strcmp$3;
  do
  {
    opt=getopt(argc, argv, "b:ef:F:t:p:c:C:m:i:I:P:d:Dn:l:L:M:rsBR:S:T:XW:yYz:Z:j:");
    if(opt == -1)
      break;

    switch(opt)
    {
      case 98:
      {
        batchsize=atoll(optarg);
        break;
      }
      case 116:
      {
        targetIP = optarg;
        break;
      }
      case 112:
      {
        targetPort=atoi(optarg);
        break;
      }
      case 110:
      {
        numTargetPorts=atoi(optarg);
        break;
      }
      case 99:
      {
        numConnections=atoi(optarg);
        if(!(numConnections >= 0))
        {
          numConnections = numConnections * -1;
          softLimitConnections = 1;
        }

        break;
      }
      case 67:
      {
        numFileIterations=atoi(optarg);
        break;
      }
      case 109:
      {
        numMsgsToSend=atoi(optarg);
        break;
      }
      case 105:
      {
        msgNum=atoi(optarg);
        break;
      }
      case 80:
      {
        msgPRI = optarg;
        break;
      }
      case 106:
      {
        jsonCookie = optarg;
        break;
      }
      case 100:
      {
        extraDataLen=atoi(optarg);
        if(extraDataLen >= 102401)
        {
          fprintf(stderr, "-d max is %d!\n", 100 * 1024);
          exit(1);
        }

        break;
      }
      case 68:
      {
        bRandConnDrop = 1;
        break;
      }
      case 108:
      {
        dbRandConnDrop=atof(optarg);
        printf("RandConnDrop Level: '%lf' \n", dbRandConnDrop);
        break;
      }
      case 114:
      {
        bRandomizeExtraData = 1;
        break;
      }
      case 102:
      {
        dynFileIDs=atoi(optarg);
        break;
      }
      case 70:
      {
        return_value_atoi$2=atoi(optarg);
        frameDelim = (char)return_value_atoi$2;
        break;
      }
      case 76:
      {
        tlsLogLevel=atoi(optarg);
        break;
      }
      case 77:
      {
        MsgToSend = optarg;
        break;
      }
      case 73:
      {
        dataFile = optarg;
        numMsgsToSend = 1000000;
        break;
      }
      case 115:
      {
        bSilent = 1;
        break;
      }
      case 66:
      {
        bBinaryFile = 1;
        break;
      }
      case 82:
      {
        numRuns=atoi(optarg);
        break;
      }
      case 83:
      {
        sleepBetweenRuns=atoi(optarg);
        break;
      }
      case 88:
      {
        bStatsRecords = 1;
        break;
      }
      case 101:
      {
        bCSVoutput = 1;
        break;
      }
      case 84:
      {
        return_value_strcmp$5=strcmp(optarg, "udp");
        if(return_value_strcmp$5 == 0)
          transport = (enum anonymous$20)TP_UDP;

        else
        {
          return_value_strcmp$4=strcmp(optarg, "tcp");
          if(return_value_strcmp$4 == 0)
            transport = (enum anonymous$20)TP_TCP;

          else
          {
            return_value_strcmp$3=strcmp(optarg, "tls");
            if(return_value_strcmp$3 == 0)
              transport = (enum anonymous$20)TP_TLS;

            else
            {
              fprintf(stderr, "unknown transport '%s'\n", optarg);
              exit(1);
            }
          }
        }
        break;
      }
      case 87:
      {
        waittime=atoi(optarg);
        break;
      }
      case 89:
      {
        runMultithreaded = 1;
        break;
      }
      case 121:
      {
        useRFC5424Format = 1;
        break;
      }
      case 122:
      {
        tlsKeyFile = optarg;
        break;
      }
      case 90:
      {
        tlsCertFile = optarg;
        break;
      }
      default:
      {
        printf("invalid option '%c' or value missing - terminating...\n", opt);
        exit(1);
      }
    }
  }
  while((_Bool)1);
  if(!(bStatsRecords == 0) && !(waittime == 0))
    fprintf(stderr, "warning: generating performance stats and using a waittime is somewhat contradictory!\n");

  signed int return_value_isatty$6;
  return_value_isatty$6=isatty(1);
  if(return_value_isatty$6 == 0 || !(bSilent == 0))
    bShowProgress = 0;

  if(numConnections >= 21)
  {
    maxFiles.rlim_cur = (unsigned long int)(numConnections + 20);
    maxFiles.rlim_max = (unsigned long int)(numConnections + 20);
    signed int return_value_setrlimit$7;
    return_value_setrlimit$7=setrlimit((enum __rlimit_resource)RLIMIT_NOFILE, &maxFiles);
    if(!(return_value_setrlimit$7 >= 0))
    {
      perror("setrlimit to increase file handles failed");
      fprintf(stderr, "could net set sufficiently large number of open files for required connection count!\n");
      exit(1);
    }

  }

  if(!(dataFile == ((char *)NULL)))
  {
    dataFP=fopen(dataFile, "r");
    if(dataFP == ((struct _IO_FILE *)NULL))
    {
      perror(dataFile);
      exit(1);
    }

  }

  if((signed int)transport == TP_TLS)
    initTLS();

  signed int return_value_openConnections$8;
  return_value_openConnections$8=openConnections();
  if(!(return_value_openConnections$8 == 0))
  {
    printf("error opening connections\n");
    exit(1);
  }

  signed int return_value_runTests$9;
  return_value_runTests$9=runTests();
  if(!(return_value_runTests$9 == 0))
  {
    printf("error running tests\n");
    exit(1);
  }

  closeConnections();
  if(bSilent == 0 && nConnDrops >= 1l)
    printf("-D option initiated %ld connection closures\n", nConnDrops);

  if(bSilent == 0)
    printf("End of tcpflood Run\n");

  exit(ret);
}

// openConn
// file tcpflood.c line 213
signed int openConn(signed int *fd)
{
  signed int sock;
  struct sockaddr_in addr;
  signed int port;
  signed int retries = 0;
  signed int rnd;
  sock=socket(2, 1, 0);
  signed int tmp_post$2;
  if(sock == -1)
  {
    perror("\nsocket()");
    return 1;
  }

  else
  {
    if(numTargetPorts >= 2)
    {
      rnd=rand();
      port = targetPort + rnd % numTargetPorts;
    }

    else
      port = targetPort;
    memset((void *)(char *)&addr, 0, sizeof(struct sockaddr_in) /*16ul*/ );
    addr.sin_family = (unsigned short int)2;
    addr.sin_port=htons((unsigned short int)port);
    signed int return_value_inet_aton$1;
    return_value_inet_aton$1=inet_aton(targetIP, &addr.sin_addr);
    if(return_value_inet_aton$1 == 0)
    {
      fprintf(stderr, "inet_aton() failed\n");
      return 1;
    }

    else
    {
      while((_Bool)1)
      {
        signed int return_value_connect$3;
        return_value_connect$3=connect(sock, (struct sockaddr *)&addr, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
        if(return_value_connect$3 == 0)
          break;

        else
        {
          tmp_post$2 = retries;
          retries = retries + 1;
          if(tmp_post$2 == 50)
          {
            perror("connect()");
            fprintf(stderr, "connect() failed\n");
            return 1;
          }

          else
            usleep((unsigned int)100000);
        }
      }
      *fd = sock;
      return 0;
    }
  }
}

// openConnections
// file tcpflood.c line 262
signed int openConnections(void)
{
  signed int i;
  char msgBuf[128l];
  unsigned long int lenMsg;
  signed int return_value_setupUDP$1;
  signed long int return_value_write$2;
  if((signed int)transport == TP_UDP)
  {
    return_value_setupUDP$1=setupUDP();
    return return_value_setupUDP$1;
  }

  else
  {
    if(!(bShowProgress == 0))
      return_value_write$2=write(1, (const void *)"      open connections", sizeof(char [23l]) /*23ul*/  - (unsigned long int)1);

    void *return_value_calloc$3;
    return_value_calloc$3=calloc((unsigned long int)numConnections, sizeof(struct gnutls_session_int *) /*8ul*/ );
    sessArray = (struct gnutls_session_int **)return_value_calloc$3;
    void *return_value_calloc$4;
    return_value_calloc$4=calloc((unsigned long int)numConnections, sizeof(signed int) /*4ul*/ );
    sockArray = (signed int *)return_value_calloc$4;
    i = 0;
    for( ; !(i >= numConnections); i = i + 1)
    {
      if(i % 10 == 0)
      {
        if(!(bShowProgress == 0))
          printf("\r%5.5d", i);

      }

      signed int return_value_openConn$5;
      return_value_openConn$5=openConn(&sockArray[(signed long int)i]);
      if(!(return_value_openConn$5 == 0))
      {
        printf("error in trying to open connection i=%d\n", i);
        if(!(softLimitConnections == 0))
        {
          numConnections = i - 1;
          printf("Connection limit is soft, continuing with only %d connections.\n", numConnections);
          break;
        }

        return 1;
      }

      if((signed int)transport == TP_TLS)
        initTLSSess(i);

    }
    if(!(bShowProgress == 0))
    {
      signed int return_value_sprintf$6;
      return_value_sprintf$6=sprintf(msgBuf, "\r%5.5d open connections\n", i);
      lenMsg = (unsigned long int)return_value_sprintf$6;
      signed long int return_value_write$7;
      return_value_write$7=write(1, (const void *)msgBuf, lenMsg);
    }

    return 0;
  }
}

// prepareGenerators
// file tcpflood.c line 569
static inline void prepareGenerators()
{
  signed int i;
  signed long long int msgsThrd;
  signed long long int starting = (signed long long int)0;
  if(!(runMultithreaded == 0))
  {
    bSilent = 1;
    numThrds = numConnections;
  }

  else
    numThrds = 1;
  runningThreads = 0;
  doRun = 0;
  pthread_mutex_init(&thrdMgmt, (const union anonymous$5 *)(void *)0);
  pthread_cond_init(&condStarted, (const union anonymous$5 *)(void *)0);
  pthread_cond_init(&condDoRun, (const union anonymous$5 *)(void *)0);
  if(!(instarray == ((struct instdata *)NULL)))
    free((void *)instarray);

  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)numThrds, sizeof(struct instdata) /*40ul*/ );
  instarray = (struct instdata *)return_value_calloc$1;
  msgsThrd = (signed long long int)(numMsgsToSend / numThrds);
  i = 0;
  for( ; !(i >= numThrds); i = i + 1)
  {
    (instarray + (signed long int)i)->lower = (unsigned long long int)starting;
    (instarray + (signed long int)i)->numMsgs = (unsigned long long int)msgsThrd;
    (instarray + (signed long int)i)->numSent = (unsigned long long int)0;
    (instarray + (signed long int)i)->idx = (unsigned int)i;
    pthread_create(&(instarray + (signed long int)i)->thread, (const union pthread_attr_t *)(void *)0, thrdStarter, (void *)(instarray + (signed long int)i));
    starting = starting + msgsThrd;
  }
}

// runGenerators
// file tcpflood.c line 609
static inline void runGenerators()
{
  pthread_mutex_lock(&thrdMgmt);
  while(!(runningThreads == numThrds))
    pthread_cond_wait(&condStarted, &thrdMgmt);
  doRun = 1;
  pthread_cond_broadcast(&condDoRun);
  pthread_mutex_unlock(&thrdMgmt);
}

// runTests
// file tcpflood.c line 707
static signed int runTests(void)
{
  struct timeval tvStart;
  struct runstats stats;
  signed int run;
  stats.totalRuntime = (unsigned long long int)0;
  stats.minRuntime = 0xffffffffllu;
  stats.maxRuntime = (unsigned long int)0;
  stats.numRuns = numRuns;
  run = 1;
  for( ; (_Bool)1; run = run + 1)
  {
    if(bSilent == 0)
      printf("starting run %d\n", run);

    prepareGenerators();
    gettimeofday(&tvStart, (struct timezone *)(void *)0);
    runGenerators();
    waitGenerators();
    endTiming(&tvStart, &stats);
    if(run == numRuns)
      break;

    if(bSilent == 0)
      printf("sleeping %d seconds before next run\n", sleepBetweenRuns);

    sleep((unsigned int)sleepBetweenRuns);
  }
  if(!(bStatsRecords == 0))
    genStats(&stats);

  return 0;
}

// sendMessages
// file tcpflood.c line 433
signed int sendMessages(struct instdata *inst)
{
  unsigned int i = (unsigned int)0;
  signed int socknum;
  signed int lenBuf;
  signed int lenSend = 0;
  char *statusText = "";
  char buf[103424l];
  char sendBuf[204800l];
  signed int offsSendBuf = 0;
  if(bSilent == 0)
  {
    if(dataFile == ((char *)NULL))
    {
      printf("Sending %llu messages.\n", inst->numMsgs);
      statusText = "messages";
    }

    else
    {
      printf("Sending file '%s' %d times.\n", dataFile, numFileIterations);
      statusText = "kb";
    }
  }

  if(!(bShowProgress == 0))
    printf("\r%8.8d %s sent", 0, statusText);

  for( ; !((unsigned long int)i >= inst->numMsgs); i = i + 1u)
  {
    if(!(runMultithreaded == 0))
      socknum = (signed int)inst->idx;

    else
      if(!((signed int)i >= numConnections))
        socknum = (signed int)i;

      else
        if((unsigned long int)i >= inst->numMsgs + -((unsigned long int)numConnections))
          socknum = (signed int)((unsigned long int)i - (inst->numMsgs - (unsigned long int)numConnections));

        else
        {
          signed int rnd;
          rnd=rand();
          socknum = rnd % numConnections;
        }
    genMsg(buf, sizeof(char [103424l]) /*103424ul*/ , &lenBuf, inst);
    if(lenBuf == 0)
      break;

    if((signed int)transport == TP_TCP)
    {
      if(sockArray[(signed long int)socknum] == -1)
      {
        signed int return_value_openConn$1;
        return_value_openConn$1=openConn(&sockArray[(signed long int)socknum]);
        if(!(return_value_openConn$1 == 0))
        {
          printf("error in trying to re-open connection %d\n", socknum);
          exit(1);
        }

      }

      signed long int return_value_send$2;
      return_value_send$2=send(sockArray[(signed long int)socknum], (const void *)buf, (unsigned long int)lenBuf, 0);
      lenSend = (signed int)return_value_send$2;
    }

    else
      if((signed int)transport == TP_UDP)
      {
        signed long int return_value_sendto$3;
        return_value_sendto$3=sendto(udpsock, (const void *)buf, (unsigned long int)lenBuf, 0, &udpRcvr, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
        lenSend = (signed int)return_value_sendto$3;
      }

      else
        if((signed int)transport == TP_TLS)
        {
          if(sockArray[(signed long int)socknum] == -1)
          {
            signed int return_value_openConn$4;
            return_value_openConn$4=openConn(&sockArray[(signed long int)socknum]);
            if(!(return_value_openConn$4 == 0))
            {
              printf("error in trying to re-open connection %d\n", socknum);
              exit(1);
            }

            initTLSSess(socknum);
          }

          if(!(lenBuf + offsSendBuf >= 2))
          {
            memcpy((void *)(sendBuf + (signed long int)offsSendBuf), (const void *)buf, (unsigned long int)lenBuf);
            offsSendBuf = offsSendBuf + lenBuf;
            lenSend = lenBuf;
          }

          else
          {
            lenSend=sendTLS(socknum, sendBuf, offsSendBuf);
            lenSend = lenSend == offsSendBuf ? lenBuf : -1;
            memcpy((void *)sendBuf, (const void *)buf, (unsigned long int)lenBuf);
            offsSendBuf = lenBuf;
          }
        }

    if(!(lenSend == lenBuf))
    {
      printf("\r%5.5d\n", i);
      fflush(stdout);
      perror("send test data");
      printf("send() failed at socket %d, index %d, msgNum %lld\n", sockArray[(signed long int)socknum], i, inst->numSent);
      fflush(stderr);
      return 1;
    }

    if(i % 100u == 0u)
    {
      if(!(bShowProgress == 0))
        printf("\r%8.8d", i);

    }

    if(runMultithreaded == 0 && !(bRandConnDrop == 0))
    {
      signed int return_value_rand$5;
      return_value_rand$5=rand();
      if(!((signed int)(2.147484e+9 * dbRandConnDrop) >= return_value_rand$5))
      {
        nConnDrops = nConnDrops + 1l;
        close(sockArray[(signed long int)socknum]);
        sockArray[(signed long int)socknum] = -1;
      }

    }

    if(inst->numSent % (unsigned long int)batchsize == 0ul)
      usleep((unsigned int)waittime);

    msgNum = msgNum + 1;
  }
  if((signed int)transport == TP_TLS && !(offsSendBuf == 0))
    lenSend=sendTLS(socknum, sendBuf, offsSendBuf);

  if(bSilent == 0)
    printf("\r%8.8d %s sent\n", i, statusText);

  return 0;
}

// sendTLS
// file tcpflood.c line 832
static signed int sendTLS(signed int i, char *buf, signed int lenBuf)
{
  signed int lenSent;
  signed int r;
  lenSent = 0;
  while(!(lenSent == lenBuf))
  {
    signed long int return_value_gnutls_record_send$1;
    return_value_gnutls_record_send$1=gnutls_record_send(sessArray[(signed long int)i], (const void *)(buf + (signed long int)lenSent), (unsigned long int)(lenBuf - lenSent));
    r = (signed int)return_value_gnutls_record_send$1;
    if(!(r >= 0))
      break;

    lenSent = lenSent + r;
  }
  return lenSent;
}

// setupUDP
// file tcpflood.c line 194
static inline signed int setupUDP(void)
{
  udpsock=socket(2, 2, 17);
  if(udpsock == -1)
    return 1;

  else
  {
    memset((void *)(char *)&udpRcvr, 0, sizeof(struct sockaddr_in) /*16ul*/ );
    udpRcvr.sin_family = (unsigned short int)2;
    udpRcvr.sin_port=htons((unsigned short int)targetPort);
    signed int return_value_inet_aton$1;
    return_value_inet_aton$1=inet_aton(targetIP, &udpRcvr.sin_addr);
    if(return_value_inet_aton$1 == 0)
    {
      fprintf(stderr, "inet_aton() failed\n");
      return 1;
    }

    else
      return 0;
  }
}

// thrdStarter
// file tcpflood.c line 547
static void * thrdStarter(void *arg)
{
  struct instdata *inst = (struct instdata *)arg;
  pthread_mutex_lock(&thrdMgmt);
  runningThreads = runningThreads + 1;
  pthread_cond_signal(&condStarted);
  while(doRun == 0)
    pthread_cond_wait(&condDoRun, &thrdMgmt);
  pthread_mutex_unlock(&thrdMgmt);
  signed int return_value_sendMessages$1;
  return_value_sendMessages$1=sendMessages(inst);
  if(!(return_value_sendMessages$1 == 0))
    printf("error sending messages\n");

  return (void *)0;
}

// tlsLogFunction
// file tcpflood.c line 746
static void tlsLogFunction(signed int level, const char *msg)
{
  printf("GnuTLS (level %d): %s", level, msg);
}

// waitGenerators
// file tcpflood.c line 624
static inline void waitGenerators()
{
  signed int i = 0;
  for( ; !(i >= numThrds); i = i + 1)
    pthread_join((instarray + (signed long int)i)->thread, (void **)(void *)0);
  pthread_mutex_destroy(&thrdMgmt);
  pthread_cond_destroy(&condStarted);
  pthread_cond_destroy(&condDoRun);
}

