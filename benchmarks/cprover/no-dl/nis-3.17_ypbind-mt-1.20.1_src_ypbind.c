// #anon_enum_DBUS_BUS_SESSION=0_DBUS_BUS_SYSTEM=1_DBUS_BUS_STARTER=2
// file /usr/include/dbus-1.0/dbus/dbus-shared.h line 56
enum anonymous_22 { DBUS_BUS_SESSION=0, DBUS_BUS_SYSTEM=1, DBUS_BUS_STARTER=2 };

// #anon_enum_DBUS_HANDLER_RESULT_HANDLED=0_DBUS_HANDLER_RESULT_NOT_YET_HANDLED=1_DBUS_HANDLER_RESULT_NEED_MEMORY=2
// file /usr/include/dbus-1.0/dbus/dbus-shared.h line 66
enum anonymous_18 { DBUS_HANDLER_RESULT_HANDLED=0, DBUS_HANDLER_RESULT_NOT_YET_HANDLED=1, DBUS_HANDLER_RESULT_NEED_MEMORY=2 };

// #anon_enum_NM_STATE_UNKNOWN=0_NM_STATE_ASLEEP=10_NM_STATE_DISCONNECTED=20_NM_STATE_DISCONNECTING=30_NM_STATE_CONNECTING=40_NM_STATE_CONNECTED_LOCAL=50_NM_STATE_CONNECTED_SITE=60_NM_STATE_CONNECTED_GLOBAL=70
// file /usr/include/NetworkManager/NetworkManager.h line 96
enum anonymous_21 { NM_STATE_UNKNOWN=0, NM_STATE_ASLEEP=10, NM_STATE_DISCONNECTED=20, NM_STATE_DISCONNECTING=30, NM_STATE_CONNECTING=40, NM_STATE_CONNECTED_LOCAL=50, NM_STATE_CONNECTED_SITE=60, NM_STATE_CONNECTED_GLOBAL=70 };

// #anon_enum_SLP_FALSE=0_SLP_TRUE=1
// file /usr/include/slp.h line 231
enum anonymous_15 { SLP_FALSE=0, SLP_TRUE=1 };

// tag-#anon#ST[*{S8}_S8_'where'||*{S32(*{SYM#tag-XDR#}_SYM#tag-XDR#_|*{V}_V_|...)->S32}_S32(*{SYM#tag-XDR#}_SYM#tag-XDR#_|*{V}_V_|...)->S32_'proc'|]
// file /usr/include/rpc/rpc_msg.h line 95
struct anonymous_6;

// tag-#anon#ST[ARR16{U64}_U64_'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous_11;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 140
struct anonymous_25;

// tag-#anon#ST[S32'readers'||S32'writers'||S32'wishwrite'||U32'_pad0'||SYM#tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]#'mutex'||SYM#tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]#'lock_free'|]
// file pthread_np.h line 27
struct anonymous_14;

// tag-#anon#ST[S64's1'||S64's2'|]
// file /usr/include/rpc/clnt.h line 112
struct anonymous_23;

// tag-#anon#ST[U32'high'||U32'low'|]
// file /usr/include/rpc/auth.h line 70
struct anonymous_16;

// tag-#anon#ST[U64'low'||U64'high'|]
// file /usr/include/rpc/clnt.h line 108
struct anonymous_5;

// tag-#anon#UN[ARR16{U8}_U8_'__u6_addr8'||ARR8{U16}_U16_'__u6_addr16'||ARR4{U32}_U32_'__u6_addr32'|]
// file /usr/include/netinet/in.h line 211
union anonymous_4;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 129
union anonymous_12;

// tag-#anon#UN[S32'RE_errno'||ENtag-auth_stat#{U32}_U32_'RE_why'||SYM#tag-#anon#ST[U64'low'||U64'high'|]#'RE_vers'||SYM#tag-#anon#ST[S64's1'||S64's2'|]#'RE_lb'|]
// file /usr/include/rpc/clnt.h line 105
union anonymous_20;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 138
union anonymous_13;

// tag-#anon#UN[SYM#tag-#anon#ST[U64'low'||U64'high'|]#'AR_versions'||SYM#tag-#anon#ST[*{S8}_S8_'where'||*{S32(*{SYM#tag-XDR#}_SYM#tag-XDR#_|*{V}_V_|...)->S32}_S32(*{SYM#tag-XDR#}_SYM#tag-XDR#_|*{V}_V_|...)->S32_'proc'|]#'AR_results'|]
// file /usr/include/rpc/rpc_msg.h line 90
union anonymous_7;

// tag-#anon#UN[SYM#tag-#anon#ST[U64'low'||U64'high'|]#'RJ_versions'||ENtag-auth_stat#{U32}_U32_'RJ_why'|]
// file /usr/include/rpc/rpc_msg.h line 110
union anonymous_8;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_10;

// tag-#anon#UN[SYM#tag-accepted_reply#'RP_ar'||SYM#tag-rejected_reply#'RP_dr'|]
// file /usr/include/rpc/rpc_msg.h line 126
union anonymous_9;

// tag-#anon#UN[SYM#tag-call_body#'RM_cmb'||SYM#tag-reply_body#'RM_rmb'|]
// file /usr/include/rpc/rpc_msg.h line 152
union anonymous;

// tag-#anon#UN[U32'ypbind_error'||SYM#tag-ypbind_binding#'ypbind_bindinfo'||U64'_pad'|]
// file ypbind.h line 59
union anonymous_24;

// tag-#anon#UN[r*{SYM#tag-sockaddr#}_SYM#tag-sockaddr#_'__sockaddr__'||r*{SYM#tag-sockaddr_at#}_SYM#tag-sockaddr_at#_'__sockaddr_at__'||r*{SYM#tag-sockaddr_ax25#}_SYM#tag-sockaddr_ax25#_'__sockaddr_ax25__'||r*{SYM#tag-sockaddr_dl#}_SYM#tag-sockaddr_dl#_'__sockaddr_dl__'||r*{SYM#tag-sockaddr_eon#}_SYM#tag-sockaddr_eon#_'__sockaddr_eon__'||r*{SYM#tag-sockaddr_in#}_SYM#tag-sockaddr_in#_'__sockaddr_in__'||r*{SYM#tag-sockaddr_in6#}_SYM#tag-sockaddr_in6#_'__sockaddr_in6__'||r*{SYM#tag-sockaddr_inarp#}_SYM#tag-sockaddr_inarp#_'__sockaddr_inarp__'||r*{SYM#tag-sockaddr_ipx#}_SYM#tag-sockaddr_ipx#_'__sockaddr_ipx__'||r*{SYM#tag-sockaddr_iso#}_SYM#tag-sockaddr_iso#_'__sockaddr_iso__'||r*{SYM#tag-sockaddr_ns#}_SYM#tag-sockaddr_ns#_'__sockaddr_ns__'||r*{SYM#tag-sockaddr_un#}_SYM#tag-sockaddr_un#_'__sockaddr_un__'||r*{SYM#tag-sockaddr_x25#}_SYM#tag-sockaddr_x25#_'__sockaddr_x25__'|]
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
union anonymous_17;

// tag-#anon#UN[r*{SYM#tag-sockaddr#}_SYM#tag-sockaddr#_'__sockaddr__'||r*{SYM#tag-sockaddr_at#}_SYM#tag-sockaddr_at#_'__sockaddr_at__'||r*{SYM#tag-sockaddr_ax25#}_SYM#tag-sockaddr_ax25#_'__sockaddr_ax25__'||r*{SYM#tag-sockaddr_dl#}_SYM#tag-sockaddr_dl#_'__sockaddr_dl__'||r*{SYM#tag-sockaddr_eon#}_SYM#tag-sockaddr_eon#_'__sockaddr_eon__'||r*{SYM#tag-sockaddr_in#}_SYM#tag-sockaddr_in#_'__sockaddr_in__'||r*{SYM#tag-sockaddr_in6#}_SYM#tag-sockaddr_in6#_'__sockaddr_in6__'||r*{SYM#tag-sockaddr_inarp#}_SYM#tag-sockaddr_inarp#_'__sockaddr_inarp__'||r*{SYM#tag-sockaddr_ipx#}_SYM#tag-sockaddr_ipx#_'__sockaddr_ipx__'||r*{SYM#tag-sockaddr_iso#}_SYM#tag-sockaddr_iso#_'__sockaddr_iso__'||r*{SYM#tag-sockaddr_ns#}_SYM#tag-sockaddr_ns#_'__sockaddr_ns__'||r*{SYM#tag-sockaddr_un#}_SYM#tag-sockaddr_un#_'__sockaddr_un__'||r*{SYM#tag-sockaddr_x25#}_SYM#tag-sockaddr_x25#_'__sockaddr_x25__'|]_transparent
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
union anonymous_19;

// tag-AUTH
// file /usr/include/rpc/auth.h line 91
struct AUTH;

// tag-CLIENT
// file /usr/include/rpc/clnt.h line 129
struct CLIENT;

// tag-DBusConnection
// file /usr/include/dbus-1.0/dbus/dbus-connection.h line 51
struct DBusConnection;

// tag-DBusError
// file /usr/include/dbus-1.0/dbus/dbus-errors.h line 43
struct DBusError;

// tag-DBusMessage
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 44
struct DBusMessage;

// tag-SVCXPRT
// file /usr/include/rpc/svc.h line 90
struct SVCXPRT;

// tag-XDR
// file /usr/include/rpc/xdr.h line 109
struct XDR;

// tag-_GMainContext
// file /usr/include/glib-2.0/glib/gmain.h line 48
struct _GMainContext;

// tag-_GMainLoop
// file /usr/include/glib-2.0/glib/gmain.h line 56
struct _GMainLoop;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__dirstream
// file /usr/include/dirent.h line 127
struct __dirstream;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-accept_stat
// file /usr/include/rpc/rpc_msg.h line 64
enum accept_stat { SUCCESS=0, PROG_UNAVAIL=1, PROG_MISMATCH=2, PROC_UNAVAIL=3, GARBAGE_ARGS=4, SYSTEM_ERR=5 };

// tag-accepted_reply
// file /usr/include/rpc/rpc_msg.h line 87
struct accepted_reply;

// tag-auth_ops
// file /usr/include/rpc/auth.h line 96
struct auth_ops;

// tag-auth_stat
// file /usr/include/rpc/auth.h line 52
enum auth_stat { AUTH_OK=0, AUTH_BADCRED=1, AUTH_REJECTEDCRED=2, AUTH_BADVERF=3, AUTH_REJECTEDVERF=4, AUTH_TOOWEAK=5, AUTH_INVALIDRESP=6, AUTH_FAILED=7 };

// tag-binding
// file serv_list.c line 74
struct binding;

// tag-bound_server
// file serv_list.c line 66
struct bound_server;

// tag-call_body
// file /usr/include/rpc/rpc_msg.h line 137
struct call_body;

// tag-clnt_ops
// file /usr/include/rpc/clnt.h line 132
struct clnt_ops;

// tag-clnt_stat
// file /usr/include/rpc/clnt.h line 50
enum clnt_stat { RPC_SUCCESS=0, RPC_CANTENCODEARGS=1, RPC_CANTDECODERES=2, RPC_CANTSEND=3, RPC_CANTRECV=4, RPC_TIMEDOUT=5, RPC_VERSMISMATCH=6, RPC_AUTHERROR=7, RPC_PROGUNAVAIL=8, RPC_PROGVERSMISMATCH=9, RPC_PROCUNAVAIL=10, RPC_CANTDECODEARGS=11, RPC_SYSTEMERROR=12, RPC_NOBROADCAST=21, RPC_UNKNOWNHOST=13, RPC_UNKNOWNPROTO=17, RPC_UNKNOWNADDR=19, RPC_RPCBFAILURE=14, RPC_PROGNOTREGISTERED=15, RPC_N2AXLATEFAILURE=22, RPC_FAILED=16, RPC_INTR=18, RPC_TLIERROR=20, RPC_UDERROR=23, RPC_INPROGRESS=24, RPC_STALERACHANDLE=25 };

// tag-cu_data
// file serv_list.c line 722
struct cu_data;

// tag-des_block
// file /usr/include/rpc/auth.h line 69
union des_block;

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-findserv_req
// file serv_list.c line 740
struct findserv_req;

// tag-flock
// file /usr/include/x86_64-linux-gnu/bits/fcntl.h line 35
struct flock;

// tag-hostent
// file /usr/include/netdb.h line 100
struct hostent;

// tag-in6_addr
// file /usr/include/netinet/in.h line 209
struct in6_addr;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-iovec
// file /usr/include/x86_64-linux-gnu/bits/uio.h line 43
struct iovec;

// tag-msg_type
// file /usr/include/rpc/rpc_msg.h line 54
enum msg_type { CALL=0, REPLY=1 };

// tag-opaque_auth
// file /usr/include/rpc/auth.h line 82
struct opaque_auth;

// tag-pmap
// file /usr/include/rpc/pmap_prot.h line 87
struct pmap;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-reject_stat
// file /usr/include/rpc/rpc_msg.h line 73
enum reject_stat { RPC_MISMATCH=0, AUTH_ERROR=1 };

// tag-rejected_reply
// file /usr/include/rpc/rpc_msg.h line 108
struct rejected_reply;

// tag-reply_body
// file /usr/include/rpc/rpc_msg.h line 124
struct reply_body;

// tag-reply_stat
// file /usr/include/rpc/rpc_msg.h line 59
enum reply_stat { MSG_ACCEPTED=0, MSG_DENIED=1 };

// tag-rpc_createerr
// file /usr/include/rpc/clnt.h line 387
struct rpc_createerr;

// tag-rpc_err
// file /usr/include/rpc/clnt.h line 103
struct rpc_err;

// tag-rpc_msg
// file /usr/include/rpc/rpc_msg.h line 149
struct rpc_msg;

// tag-slpcb
// file ypbind_slp.c line 41
struct slpcb;

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

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-svc_req
// file /usr/include/rpc/svc.h line 164
struct svc_req;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-xdr_op
// file /usr/include/rpc/xdr.h line 81
enum xdr_op { XDR_ENCODE=0, XDR_DECODE=1, XDR_FREE=2 };

// tag-xdr_ops
// file /usr/include/rpc/xdr.h line 113
struct xdr_ops;

// tag-xp_ops
// file /usr/include/rpc/svc.h line 94
struct xp_ops;

// tag-xprt_stat
// file /usr/include/rpc/svc.h line 81
enum xprt_stat { XPRT_DIED=0, XPRT_MOREREQS=1, XPRT_IDLE=2 };

// tag-ypbind_binding
// file ypbind.h line 51
struct ypbind_binding;

// tag-ypbind_oldsetdom
// file ypbind.h line 75
struct ypbind_oldsetdom;

// tag-ypbind_resp
// file ypbind.h line 57
struct ypbind_resp;

// tag-ypbind_resptype
// file ypbind.h line 45
enum ypbind_resptype { YPBIND_SUCC_VAL=1, YPBIND_FAIL_VAL=2 };

// tag-ypbind_setdom
// file ypbind.h line 83
struct ypbind_setdom;

#ifndef NULL
#define NULL ((void*)0)
#endif

// MySLPSrvURLCallback
// file ypbind_slp.c line 48
static enum anonymous_15 MySLPSrvURLCallback(void *hslp, const char *srvurl, unsigned short int lifetime, signed int errcode, void *cookie);
// SLPClose
// file /usr/include/slp.h line 472
void SLPClose(void *);
// SLPFindSrvs
// file /usr/include/slp.h line 694
signed int SLPFindSrvs(void *, const char *, const char *, const char *, enum anonymous_15 (*)(void *, const char *, unsigned short int, signed int, void *), void *);
// SLPOpen
// file /usr/include/slp.h line 431
signed int SLPOpen(const char *, enum anonymous_15, void **);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __h_errno_location
// file /usr/include/netdb.h line 61
extern signed int * __h_errno_location(void);
// __nss_configure_lookup
// file /usr/include/nss.h line 58
extern signed int __nss_configure_lookup(const char *, const char *);
// __pmap_getport
// file serv_list.c line 682
static unsigned short int __pmap_getport(struct sockaddr_in *address, unsigned long int program, unsigned long int version, unsigned int protocol);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// add_server
// file local.h line 14
extern signed int add_server(const char *domain, const char *host, signed int check_syntax);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// authunix_create_default
// file /usr/include/rpc/auth.h line 160
extern struct AUTH * authunix_create_default(void);
// bind
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 123
extern signed int bind(signed int, union anonymous_19, unsigned int);
// bindtextdomain
// file /usr/include/libintl.h line 86
extern char * bindtextdomain(const char *, const char *);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// change_binding
// file local.h line 16
extern void change_binding(const char *domain, struct ypbind_binding *binding);
// chdir
// file /usr/include/unistd.h line 497
extern signed int chdir(const char *);
// check_for_nm
// file ypbind_dbus_nm.c line 220
static signed int check_for_nm(struct DBusConnection *connection);
// check_online
// file ypbind_dbus_nm.c line 191
static signed int check_online(struct DBusConnection *connection);
// clear_server
// file local.h line 13
extern void clear_server(void);
// clnt_broadcast
// file /usr/include/rpc/pmap_clnt.h line 82
extern enum clnt_stat clnt_broadcast(const unsigned long int, const unsigned long int, const unsigned long int, signed int (*)(struct XDR *, void *, ...), char *, signed int (*)(struct XDR *, void *, ...), char *, signed int (*)(char *, struct sockaddr_in *));
// clnt_sperrno
// file /usr/include/rpc/clnt.h line 399
extern char * clnt_sperrno(enum clnt_stat);
// clntudp_bufcreate
// file /usr/include/rpc/clnt.h line 335
extern struct CLIENT * clntudp_bufcreate(struct sockaddr_in *, unsigned long int, unsigned long int, struct timeval, signed int *, unsigned int, unsigned int);
// clntudp_create
// file /usr/include/rpc/clnt.h line 332
extern struct CLIENT * clntudp_create(struct sockaddr_in *, unsigned long int, unsigned long int, struct timeval, signed int *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closedir
// file /usr/include/dirent.h line 149
extern signed int closedir(struct __dirstream *);
// create_pidfile
// file ypbind-mt.c line 302
static void create_pidfile(void);
// dbus_bus_add_match
// file /usr/include/dbus-1.0/dbus/dbus-bus.h line 83
void dbus_bus_add_match(struct DBusConnection *, const char *, struct DBusError *);
// dbus_bus_get
// file /usr/include/dbus-1.0/dbus/dbus-bus.h line 40
struct DBusConnection * dbus_bus_get(enum anonymous_22, struct DBusError *);
// dbus_bus_name_has_owner
// file /usr/include/dbus-1.0/dbus/dbus-bus.h line 71
unsigned int dbus_bus_name_has_owner(struct DBusConnection *, const char *, struct DBusError *);
// dbus_connection_add_filter
// file /usr/include/dbus-1.0/dbus/dbus-connection.h line 295
unsigned int dbus_connection_add_filter(struct DBusConnection *, enum anonymous_18 (*)(struct DBusConnection *, struct DBusMessage *, void *), void *, void (*)(void *));
// dbus_connection_close
// file /usr/include/dbus-1.0/dbus/dbus-connection.h line 183
void dbus_connection_close(struct DBusConnection *);
// dbus_connection_send_with_reply_and_block
// file /usr/include/dbus-1.0/dbus/dbus-connection.h line 233
struct DBusMessage * dbus_connection_send_with_reply_and_block(struct DBusConnection *, struct DBusMessage *, signed int, struct DBusError *);
// dbus_connection_set_exit_on_disconnect
// file /usr/include/dbus-1.0/dbus/dbus-connection.h line 197
void dbus_connection_set_exit_on_disconnect(struct DBusConnection *, unsigned int);
// dbus_connection_setup_with_g_main
// file /usr/include/dbus-1.0/dbus/dbus-glib-lowlevel.h line 40
void dbus_connection_setup_with_g_main(struct DBusConnection *, struct _GMainContext *);
// dbus_connection_unref
// file /usr/include/dbus-1.0/dbus/dbus-connection.h line 181
void dbus_connection_unref(struct DBusConnection *);
// dbus_error_free
// file /usr/include/dbus-1.0/dbus/dbus-errors.h line 67
void dbus_error_free(struct DBusError *);
// dbus_error_init
// file /usr/include/dbus-1.0/dbus/dbus-errors.h line 65
void dbus_error_init(struct DBusError *);
// dbus_error_is_set
// file /usr/include/dbus-1.0/dbus/dbus-errors.h line 84
unsigned int dbus_error_is_set(const struct DBusError *);
// dbus_filter
// file ypbind_dbus_nm.c line 108
static enum anonymous_18 dbus_filter(struct DBusConnection *connection, struct DBusMessage *message, void *user_data);
// dbus_init
// file ypbind_dbus_nm.c line 239
static signed int dbus_init(void);
// dbus_message_get_args
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 197
unsigned int dbus_message_get_args(struct DBusMessage *, struct DBusError *, signed int, ...);
// dbus_message_get_interface
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 113
const char * dbus_message_get_interface(struct DBusMessage *);
// dbus_message_get_member
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 121
const char * dbus_message_get_member(struct DBusMessage *);
// dbus_message_get_path
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 105
const char * dbus_message_get_path(struct DBusMessage *);
// dbus_message_is_signal
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 152
unsigned int dbus_message_is_signal(struct DBusMessage *, const char *, const char *);
// dbus_message_new_method_call
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 72
struct DBusMessage * dbus_message_new_method_call(const char *, const char *, const char *, const char *);
// dbus_message_unref
// file /usr/include/dbus-1.0/dbus/dbus-message.h line 98
void dbus_message_unref(struct DBusMessage *);
// dbus_reconnect
// file ypbind_dbus_nm.c line 96
static signed int dbus_reconnect(void *user_data);
// do_binding
// file local.h line 32
extern void do_binding(void);
// do_broadcast
// file serv_list.c line 618
static void do_broadcast(struct binding *list);
// dup
// file /usr/include/unistd.h line 531
extern signed int dup(signed int);
// eachresult
// file serv_list.c line 530
static signed int eachresult(signed int *out, struct sockaddr_in *addr);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// feof
// file /usr/include/stdio.h line 828
extern signed int feof(struct _IO_FILE *);
// find_domain
// file local.h line 12
extern void find_domain(const char *domain, struct ypbind_resp *result);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fputc
// file /usr/include/stdio.h line 573
extern signed int fputc(signed int, struct _IO_FILE *);
// fputs
// file /usr/include/stdio.h line 689
extern signed int fputs(const char *, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// g_main_loop_new
// file /usr/include/glib-2.0/glib/gmain.h line 400
extern struct _GMainLoop * g_main_loop_new(struct _GMainContext *, signed int);
// g_main_loop_run
// file /usr/include/glib-2.0/glib/gmain.h line 403
extern void g_main_loop_run(struct _GMainLoop *);
// g_timeout_add
// file /usr/include/glib-2.0/glib/gmain.h line 560
extern unsigned int g_timeout_add(unsigned int, signed int (*)(void *), void *);
// g_type_init
// file /usr/include/glib-2.0/gobject/gtype.h line 681
extern void g_type_init(void);
// get_entry
// file serv_list.c line 357
static signed int get_entry(const char *domain, struct binding **entry);
// getdtablesize
// file /usr/include/unistd.h line 983
extern signed int getdtablesize(void);
// gethostbyaddr_r
// file /usr/include/netdb.h line 172
extern signed int gethostbyaddr_r(const void *, unsigned int, signed int, struct hostent *, char *, unsigned long int, struct hostent ** restrict , signed int *);
// gethostbyname_r
// file /usr/include/netdb.h line 179
extern signed int gethostbyname_r(const char *, struct hostent *, char *, unsigned long int, struct hostent ** restrict , signed int *);
// getline
// file /usr/include/stdio.h line 678
extern signed long int getline(char ** restrict , unsigned long int *, struct _IO_FILE *);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// gettext
// file /usr/include/libintl.h line 39
extern char * gettext(const char *);
// gettid
// file log_msg.c line 34
static signed int gettid(void);
// getuid
// file /usr/include/unistd.h line 675
extern unsigned int getuid(void);
// go_offline
// file ypbind_dbus_nm.c line 52
static void go_offline(void);
// go_online
// file ypbind_dbus_nm.c line 65
static void go_online(void);
// htonl
// file /usr/include/netinet/in.h line 377
extern unsigned int htonl(unsigned int);
// htons
// file /usr/include/netinet/in.h line 379
extern unsigned short int htons(unsigned short int);
// inet_ntoa
// file /usr/include/arpa/inet.h line 53
extern char * inet_ntoa(struct in_addr);
// ioctl
// file /usr/include/x86_64-linux-gnu/sys/ioctl.h line 41
extern signed int ioctl(signed int, unsigned long int, ...);
// load_config
// file ypbind-mt.c line 105
extern signed int load_config(signed int check_syntax);
// log_msg
// file log_msg.h line 8
extern void log_msg(signed int type, const char *fmt, ...);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mkdir
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 321
extern signed int mkdir(const char *, unsigned int);
// ntohs
// file /usr/include/netinet/in.h line 375
extern unsigned short int ntohs(unsigned short int);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// openlog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 181
extern void openlog(const char *, signed int, signed int);
// ping_all
// file serv_list.c line 750
static signed int ping_all(struct binding *list);
// pmap_set
// file /usr/include/rpc/pmap_clnt.h line 69
extern signed int pmap_set(const unsigned long int, const unsigned long int, signed int, unsigned short int);
// pmap_unset
// file /usr/include/rpc/pmap_clnt.h line 71
extern signed int pmap_unset(const unsigned long int, const unsigned long int);
// portmapper_connect
// file ypbind-mt.c line 501
signed int portmapper_connect(void);
// portmapper_disconnect
// file ypbind-mt.c line 491
void portmapper_disconnect(void);
// portmapper_register
// file ypbind-mt.c line 511
static signed int portmapper_register(void);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 992
extern signed int pthread_cond_broadcast(union anonymous_13 *);
// pthread_cond_init
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_init(union anonymous_13 *, const union anonymous_12 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 988
extern signed int pthread_cond_signal(union anonymous_13 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 1000
extern signed int pthread_cond_wait(union anonymous_13 *, union anonymous_10 *);
// pthread_create
// file /usr/include/pthread.h line 244
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_exit
// file /usr/include/pthread.h line 253
extern void pthread_exit(void *);
// pthread_mutex_init
// file /usr/include/pthread.h line 760
extern signed int pthread_mutex_init(union anonymous_10 *, const union anonymous_12 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 773
extern signed int pthread_mutex_lock(union anonymous_10 *);
// pthread_mutex_trylock
// file /usr/include/pthread.h line 769
extern signed int pthread_mutex_trylock(union anonymous_10 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 784
extern signed int pthread_mutex_unlock(union anonymous_10 *);
// pthread_rdwr_init_np
// file pthread_np.c line 25
signed int pthread_rdwr_init_np(struct anonymous_14 *rdwrp);
// pthread_rdwr_rlock_np
// file pthread_np.h line 39
signed int pthread_rdwr_rlock_np(struct anonymous_14 *rdwrp);
// pthread_rdwr_runlock_np
// file pthread_np.h line 41
signed int pthread_rdwr_runlock_np(struct anonymous_14 *rdwrp);
// pthread_rdwr_wlock_np
// file pthread_np.h line 40
signed int pthread_rdwr_wlock_np(struct anonymous_14 *rdwrp);
// pthread_rdwr_wunlock_np
// file pthread_np.h line 42
signed int pthread_rdwr_wunlock_np(struct anonymous_14 *rdwrp);
// pthread_sigmask
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 30
extern signed int pthread_sigmask(signed int, const struct anonymous_11 *, struct anonymous_11 *);
// query_slp
// file local.h line 19
extern signed int query_slp(const char *domain);
// readdir
// file /usr/include/dirent.h line 162
extern struct dirent * readdir(struct __dirstream *);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// remove_bindingfile
// file serv_list.c line 93
static void remove_bindingfile(const char *domain_name);
// setlocale
// file /usr/include/locale.h line 124
extern char * setlocale(signed int, const char *);
// setsid
// file /usr/include/unistd.h line 667
extern signed int setsid(void);
// sig_handler
// file ypbind-mt.c line 383
static void * sig_handler(void *v_param);
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous_11 *, signed int);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous_11 *);
// sigwait
// file /usr/include/signal.h line 270
extern signed int sigwait(const struct anonymous_11 *, signed int *);
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
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 209
extern signed int stat(const char *, struct stat *);
// strchr
// file /usr/include/string.h line 236
extern char * strchr(const char *, signed int);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strdup
// file /usr/include/string.h line 176
extern char * strdup(const char *);
// strerror
// file /usr/include/string.h line 413
extern char * strerror(signed int);
// strlen
// file /usr/include/string.h line 399
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strrchr
// file /usr/include/string.h line 263
extern char * strrchr(const char *, signed int);
// strstr
// file /usr/include/string.h line 342
extern char * strstr(const char *, const char *);
// svc_register
// file /usr/include/rpc/svc.h line 188
extern signed int svc_register(struct SVCXPRT *, unsigned long int, unsigned long int, void (*)(struct svc_req *, struct SVCXPRT *), unsigned long int);
// svc_run
// file /usr/include/rpc/svc.h line 292
extern void svc_run(void);
// svc_sendreply
// file /usr/include/rpc/svc.h line 244
extern signed int svc_sendreply(struct SVCXPRT *, signed int (*)(struct XDR *, void *, ...), char *);
// svcerr_decode
// file /usr/include/rpc/svc.h line 247
extern void svcerr_decode(struct SVCXPRT *);
// svcerr_noproc
// file /usr/include/rpc/svc.h line 251
extern void svcerr_noproc(struct SVCXPRT *);
// svcerr_systemerr
// file /usr/include/rpc/svc.h line 260
extern void svcerr_systemerr(struct SVCXPRT *);
// svctcp_create
// file /usr/include/rpc/svc.h line 318
extern struct SVCXPRT * svctcp_create(signed int, unsigned int, unsigned int);
// svcudp_create
// file /usr/include/rpc/svc.h line 311
extern struct SVCXPRT * svcudp_create(signed int);
// syscall
// file /usr/include/unistd.h line 1058
extern signed long int syscall(signed long int, ...);
// test_bindings
// file local.h line 21
extern void * test_bindings(void *param);
// test_bindings_once
// file local.h line 22
extern signed int test_bindings_once(signed int lastcheck, const char *req_domain);
// textdomain
// file /usr/include/libintl.h line 82
extern char * textdomain(const char *);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// umask
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 312
extern unsigned int umask(unsigned int);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// unlink_bindingdir
// file ypbind-mt.c line 83
static void unlink_bindingdir(void);
// update_bindingfile
// file serv_list.c line 106
static void update_bindingfile(struct binding *entry);
// usage
// file ypbind-mt.c line 471
static void usage(signed int ret);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// vsyslog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 200
extern void vsyslog(signed int, const char *, void **);
// watch_dbus_nm
// file local.h line 25
extern void * watch_dbus_nm(void *param);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// writev
// file /usr/include/x86_64-linux-gnu/sys/uio.h line 50
extern signed long int writev(signed int, struct iovec *, signed int);
// xdr_bool
// file /usr/include/rpc/xdr.h line 306
extern signed int xdr_bool(struct XDR *, signed int *);
// xdr_char
// file /usr/include/rpc/xdr.h line 318
extern signed int xdr_char(struct XDR *, char *);
// xdr_enum
// file /usr/include/rpc/xdr.h line 307
extern signed int xdr_enum(struct XDR *, signed int *);
// xdr_free
// file /usr/include/rpc/xdr.h line 373
extern void xdr_free(signed int (*)(struct XDR *, void *, ...), char *);
// xdr_opaque
// file /usr/include/rpc/xdr.h line 313
extern signed int xdr_opaque(struct XDR *, char *, unsigned int);
// xdr_pmap
// file /usr/include/rpc/pmap_prot.h line 94
extern signed int xdr_pmap(struct XDR *, struct pmap *);
// xdr_string
// file /usr/include/rpc/xdr.h line 314
extern signed int xdr_string(struct XDR *, char **, unsigned int);
// xdr_u_int
// file /usr/include/rpc/xdr.h line 289
extern signed int xdr_u_int(struct XDR *, unsigned int *);
// xdr_u_short
// file /usr/include/rpc/xdr.h line 287
extern signed int xdr_u_short(struct XDR *, unsigned short int *);
// xdr_vector
// file /usr/include/rpc/xdr.h line 320
extern signed int xdr_vector(struct XDR *, char *, unsigned int, unsigned int, signed int (*)(struct XDR *, void *, ...));
// xdr_void
// file /usr/include/rpc/xdr.h line 285
extern signed int xdr_void(void);
// yp_get_default_domain
// file /usr/include/rpcsvc/ypclnt.h line 63
extern signed int yp_get_default_domain(char **);
// ypbind_xdr_binding
// file ypbind_xdr.c line 21
extern signed int ypbind_xdr_binding(struct XDR *xdrs, struct ypbind_binding *objp);
// ypbind_xdr_domainname
// file ypbind_xdr.c line 5
extern signed int ypbind_xdr_domainname(struct XDR *xdrs, char **objp);
// ypbind_xdr_oldsetdom
// file ypbind_xdr.c line 52
extern signed int ypbind_xdr_oldsetdom(struct XDR *xdrs, struct ypbind_oldsetdom *objp);
// ypbind_xdr_resp
// file ypbind_xdr.c line 31
extern signed int ypbind_xdr_resp(struct XDR *xdrs, struct ypbind_resp *objp);
// ypbind_xdr_resptype
// file ypbind_xdr.c line 13
extern signed int ypbind_xdr_resptype(struct XDR *xdrs, enum ypbind_resptype *objp);
// ypbind_xdr_setdom
// file ypbind_xdr.c line 63
extern signed int ypbind_xdr_setdom(struct XDR *xdrs, struct ypbind_setdom *objp);
// ypbindproc_domain
// file ypbind_server.c line 58
static signed int ypbindproc_domain(char *domain_name, struct ypbind_resp *result, struct svc_req *rqstp);
// ypbindproc_domain_2_svc
// file ypbind.h line 111
extern signed int ypbindproc_domain_2_svc(char **argp, struct ypbind_resp *result, struct svc_req *rqstp);
// ypbindproc_null_2_svc
// file ypbind.h line 109
extern signed int ypbindproc_null_2_svc(void *argp, void *result, struct svc_req *rqstp);
// ypbindproc_olddomain_1_svc
// file ypbind.h line 102
extern signed int ypbindproc_olddomain_1_svc(char **argp, struct ypbind_resp *result, struct svc_req *rqstp);
// ypbindproc_oldnull_1_svc
// file ypbind.h line 100
extern signed int ypbindproc_oldnull_1_svc(void *argp, void *result, struct svc_req *rqstp);
// ypbindproc_oldsetdom_1_svc
// file ypbind.h line 104
extern signed int ypbindproc_oldsetdom_1_svc(struct ypbind_oldsetdom *argp, void *result, struct svc_req *rqstp);
// ypbindproc_setdom
// file ypbind_server.c line 106
static signed int ypbindproc_setdom(const char *domain_name, struct ypbind_binding *binding, struct sockaddr_in *fromhost);
// ypbindproc_setdom_2_svc
// file ypbind.h line 113
extern signed int ypbindproc_setdom_2_svc(struct ypbind_setdom *argp, void *result, struct svc_req *rqstp);
// ypbindprog_1
// file local.h line 34
extern void ypbindprog_1(struct svc_req *rqstp, struct SVCXPRT *transp);
// ypbindprog_1::1::local_object
//
signed int local_object(char *, void *, struct svc_req *);
// ypbindprog_1::1::xdr_argument_object
//
signed int xdr_argument_object(struct XDR *, void *, ...);
// ypbindprog_1::1::xdr_result_object
//
signed int xdr_result_object(struct XDR *, void *, ...);
// ypbindprog_1_freeresult
// file ypbind.h line 105
extern signed int ypbindprog_1_freeresult(struct SVCXPRT *transp, signed int (*xdr_result)(struct XDR *, void *, ...), char *result);
// ypbindprog_1_freeresult::xdr_result_object
//
signed int xdr_result_object(struct XDR *, void *, ...);
// ypbindprog_2
// file local.h line 35
extern void ypbindprog_2(struct svc_req *rqstp, struct SVCXPRT *transp);
// ypbindprog_2::1::local_object
//
signed int local_object(char *, void *, struct svc_req *);
// ypbindprog_2::1::xdr_argument_object
//
signed int xdr_argument_object(struct XDR *, void *, ...);
// ypbindprog_2::1::xdr_result_object
//
signed int xdr_result_object(struct XDR *, void *, ...);
// ypbindprog_2_freeresult
// file ypbind.h line 114
extern signed int ypbindprog_2_freeresult(struct SVCXPRT *transp, signed int (*xdr_result)(struct XDR *, void *, ...), char *result);
// ypbindprog_2_freeresult::xdr_result_object
//
signed int xdr_result_object(struct XDR *, void *, ...);

struct anonymous_6
{
  // where
  char *where;
  // proc
  signed int (*proc)(struct XDR *, void *, ...);
};

struct anonymous_11
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous_25
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

union anonymous_10
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

union anonymous_13
{
  // __data
  struct anonymous_25 __data;
  // __size
  char __size[48l];
  // __align
  signed long long int __align;
};

struct anonymous_14
{
  // readers
  signed int readers;
  // writers
  signed int writers;
  // wishwrite
  signed int wishwrite;
  // mutex
  union anonymous_10 mutex;
  // lock_free
  union anonymous_13 lock_free;
};

struct anonymous_23
{
  // s1
  signed long int s1;
  // s2
  signed long int s2;
};

struct anonymous_16
{
  // high
  unsigned int high;
  // low
  unsigned int low;
};

struct anonymous_5
{
  // low
  unsigned long int low;
  // high
  unsigned long int high;
};

union anonymous_4
{
  // __u6_addr8
  unsigned char __u6_addr8[16l];
  // __u6_addr16
  unsigned short int __u6_addr16[8l];
  // __u6_addr32
  unsigned int __u6_addr32[4l];
};

union anonymous_12
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_20
{
  // RE_errno
  signed int RE_errno;
  // RE_why
  enum auth_stat RE_why;
  // RE_vers
  struct anonymous_5 RE_vers;
  // RE_lb
  struct anonymous_23 RE_lb;
};

union anonymous_7
{
  // AR_versions
  struct anonymous_5 AR_versions;
  // AR_results
  struct anonymous_6 AR_results;
};

union anonymous_8
{
  // RJ_versions
  struct anonymous_5 RJ_versions;
  // RJ_why
  enum auth_stat RJ_why;
};

struct opaque_auth
{
  // oa_flavor
  signed int oa_flavor;
  // oa_base
  char *oa_base;
  // oa_length
  unsigned int oa_length;
};

struct accepted_reply
{
  // ar_verf
  struct opaque_auth ar_verf;
  // ar_stat
  enum accept_stat ar_stat;
  // ru
  union anonymous_7 ru;
};

struct rejected_reply
{
  // rj_stat
  enum reject_stat rj_stat;
  // ru
  union anonymous_8 ru;
};

union anonymous_9
{
  // RP_ar
  struct accepted_reply RP_ar;
  // RP_dr
  struct rejected_reply RP_dr;
};

struct call_body
{
  // cb_rpcvers
  unsigned long int cb_rpcvers;
  // cb_prog
  unsigned long int cb_prog;
  // cb_vers
  unsigned long int cb_vers;
  // cb_proc
  unsigned long int cb_proc;
  // cb_cred
  struct opaque_auth cb_cred;
  // cb_verf
  struct opaque_auth cb_verf;
};

struct reply_body
{
  // rp_stat
  enum reply_stat rp_stat;
  // ru
  union anonymous_9 ru;
};

union anonymous
{
  // RM_cmb
  struct call_body RM_cmb;
  // RM_rmb
  struct reply_body RM_rmb;
};

struct ypbind_binding
{
  // ypbind_binding_addr
  char ypbind_binding_addr[4l];
  // ypbind_binding_port
  char ypbind_binding_port[2l];
};

union anonymous_24
{
  // ypbind_error
  unsigned int ypbind_error;
  // ypbind_bindinfo
  struct ypbind_binding ypbind_bindinfo;
};

union anonymous_17
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

union anonymous_19
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

union des_block
{
  // key
  struct anonymous_16 key;
  // c
  char c[8l];
};

struct AUTH
{
  // ah_cred
  struct opaque_auth ah_cred;
  // ah_verf
  struct opaque_auth ah_verf;
  // ah_key
  union des_block ah_key;
  // ah_ops
  struct auth_ops *ah_ops;
  // ah_private
  char *ah_private;
};

struct CLIENT
{
  // cl_auth
  struct AUTH *cl_auth;
  // cl_ops
  struct clnt_ops *cl_ops;
  // cl_private
  char *cl_private;
};

struct DBusError
{
  // name
  const char *name;
  // message
  const char *message;
  // dummy1
  unsigned int dummy1 : 1;
  // dummy2
  unsigned int dummy2 : 1;
  // dummy3
  unsigned int dummy3 : 1;
  // dummy4
  unsigned int dummy4 : 1;
  // dummy5
  unsigned int dummy5 : 1;
  // padding1
  void *padding1;
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
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

struct SVCXPRT
{
  // xp_sock
  signed int xp_sock;
  // xp_port
  unsigned short int xp_port;
  // xp_ops
  struct xp_ops *xp_ops;
  // xp_addrlen
  signed int xp_addrlen;
  // xp_raddr
  struct sockaddr_in xp_raddr;
  // xp_verf
  struct opaque_auth xp_verf;
  // xp_p1
  char *xp_p1;
  // xp_p2
  char *xp_p2;
  // xp_pad
  char xp_pad[256l];
};

struct XDR
{
  // x_op
  enum xdr_op x_op;
  // x_ops
  struct xdr_ops *x_ops;
  // x_public
  char *x_public;
  // x_private
  char *x_private;
  // x_base
  char *x_base;
  // x_handy
  unsigned int x_handy;
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

struct auth_ops
{
  // ah_nextverf
  void (*ah_nextverf)(struct AUTH *);
  // ah_marshal
  signed int (*ah_marshal)(struct AUTH *, struct XDR *);
  // ah_validate
  signed int (*ah_validate)(struct AUTH *, struct opaque_auth *);
  // ah_refresh
  signed int (*ah_refresh)(struct AUTH *);
  // ah_destroy
  void (*ah_destroy)(struct AUTH *);
};

struct bound_server
{
  // host
  char *host;
  // family
  unsigned short int family;
  // addr
  struct in_addr addr;
  // port
  unsigned short int port;
};

struct binding
{
  // domain
  char domain[257l];
  // active
  signed int active;
  // use_broadcast
  signed int use_broadcast;
  // server
  struct bound_server server[30l];
  // ypset
  struct bound_server ypset;
  // client_handle
  struct CLIENT *client_handle;
};

struct clnt_ops
{
  // cl_call
  enum clnt_stat (*cl_call)(struct CLIENT *, unsigned long int, signed int (*)(struct XDR *, void *, ...), char *, signed int (*)(struct XDR *, void *, ...), char *, struct timeval);
  // cl_abort
  void (*cl_abort)(void);
  // cl_geterr
  void (*cl_geterr)(struct CLIENT *, struct rpc_err *);
  // cl_freeres
  signed int (*cl_freeres)(struct CLIENT *, signed int (*)(struct XDR *, void *, ...), char *);
  // cl_destroy
  void (*cl_destroy)(struct CLIENT *);
  // cl_control
  signed int (*cl_control)(struct CLIENT *, signed int, char *);
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct rpc_err
{
  // re_status
  enum clnt_stat re_status;
  // ru
  union anonymous_20 ru;
};

struct cu_data
{
  // cu_sock
  signed int cu_sock;
  // cu_closeit
  signed int cu_closeit;
  // cu_raddr
  struct sockaddr_in cu_raddr;
  // cu_rlen
  signed int cu_rlen;
  // cu_wait
  struct timeval cu_wait;
  // cu_total
  struct timeval cu_total;
  // cu_error
  struct rpc_err cu_error;
  // cu_outxdrs
  struct XDR cu_outxdrs;
  // cu_xdrpos
  unsigned int cu_xdrpos;
  // cu_sendsz
  unsigned int cu_sendsz;
  // cu_outbuf
  char *cu_outbuf;
  // cu_recvsz
  unsigned int cu_recvsz;
  // cu_inbuf
  char cu_inbuf[1l];
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

struct findserv_req
{
  // xid
  unsigned int xid;
  // server_nr
  unsigned int server_nr;
  // sin
  struct sockaddr_in sin;
};

struct flock
{
  // l_type
  signed short int l_type;
  // l_whence
  signed short int l_whence;
  // l_start
  signed long int l_start;
  // l_len
  signed long int l_len;
  // l_pid
  signed int l_pid;
};

struct hostent
{
  // h_name
  char *h_name;
  // h_aliases
  char **h_aliases;
  // h_addrtype
  signed int h_addrtype;
  // h_length
  signed int h_length;
  // h_addr_list
  char **h_addr_list;
};

struct in6_addr
{
  // __in6_u
  union anonymous_4 __in6_u;
};

struct iovec
{
  // iov_base
  void *iov_base;
  // iov_len
  unsigned long int iov_len;
};

struct pmap
{
  // pm_prog
  unsigned long int pm_prog;
  // pm_vers
  unsigned long int pm_vers;
  // pm_prot
  unsigned long int pm_prot;
  // pm_port
  unsigned long int pm_port;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct rpc_createerr
{
  // cf_stat
  enum clnt_stat cf_stat;
  // cf_error
  struct rpc_err cf_error;
};

struct rpc_msg
{
  // rm_xid
  unsigned long int rm_xid;
  // rm_direction
  enum msg_type rm_direction;
  // ru
  union anonymous ru;
};

struct slpcb
{
  // srvurl
  char *srvurl;
  // err
  signed int err;
  // next
  struct slpcb *next;
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

struct sockaddr_un
{
  // sun_family
  unsigned short int sun_family;
  // sun_path
  char sun_path[108l];
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

struct svc_req
{
  // rq_prog
  unsigned long int rq_prog;
  // rq_vers
  unsigned long int rq_vers;
  // rq_proc
  unsigned long int rq_proc;
  // rq_cred
  struct opaque_auth rq_cred;
  // rq_clntcred
  char *rq_clntcred;
  // rq_xprt
  struct SVCXPRT *rq_xprt;
};

struct xdr_ops
{
  // x_getlong
  signed int (*x_getlong)(struct XDR *, signed long int *);
  // x_putlong
  signed int (*x_putlong)(struct XDR *, const signed long int *);
  // x_getbytes
  signed int (*x_getbytes)(struct XDR *, char *, unsigned int);
  // x_putbytes
  signed int (*x_putbytes)(struct XDR *, const char *, unsigned int);
  // x_getpostn
  unsigned int (*x_getpostn)(const struct XDR *);
  // x_setpostn
  signed int (*x_setpostn)(struct XDR *, unsigned int);
  // x_inline
  signed int * (*x_inline)(struct XDR *, unsigned int);
  // x_destroy
  void (*x_destroy)(struct XDR *);
  // x_getint32
  signed int (*x_getint32)(struct XDR *, signed int *);
  // x_putint32
  signed int (*x_putint32)(struct XDR *, const signed int *);
};

struct xp_ops
{
  // xp_recv
  signed int (*xp_recv)(struct SVCXPRT *, struct rpc_msg *);
  // xp_stat
  enum xprt_stat (*xp_stat)(struct SVCXPRT *);
  // xp_getargs
  signed int (*xp_getargs)(struct SVCXPRT *, signed int (*)(struct XDR *, void *, ...), char *);
  // xp_reply
  signed int (*xp_reply)(struct SVCXPRT *, struct rpc_msg *);
  // xp_freeargs
  signed int (*xp_freeargs)(struct SVCXPRT *, signed int (*)(struct XDR *, void *, ...), char *);
  // xp_destroy
  void (*xp_destroy)(struct SVCXPRT *);
};

struct ypbind_oldsetdom
{
  // ypoldsetdom_domain
  char ypoldsetdom_domain[256l];
  // ypoldsetdom_binding
  struct ypbind_binding ypoldsetdom_binding;
};

struct ypbind_resp
{
  // ypbind_status
  enum ypbind_resptype ypbind_status;
  // ypbind_resp_u
  union anonymous_24 ypbind_resp_u;
};

struct ypbind_setdom
{
  // ypsetdom_domain
  char *ypsetdom_domain;
  // ypsetdom_binding
  struct ypbind_binding ypsetdom_binding;
  // ypsetdom_vers
  unsigned int ypsetdom_vers;
};


// broken_server
// file ypbind-mt.c line 73
signed int broken_server = 0;
// cond_dbus
// file ypbind_dbus_nm.c line 48
union anonymous_13 cond_dbus = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// cond_pid
// file ypbind-mt.c line 80
static union anonymous_13 cond_pid = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// configfile
// file ypbind-mt.c line 70
const char *configfile = "/etc/yp.conf";
// dbus_is_initialized
// file ypbind_dbus_nm.c line 46
signed int dbus_is_initialized = 0;
// debug_flag
// file log_msg.c line 46
signed int debug_flag = 0;
// domain
// file ypbind-mt.c line 69
char *domain = (char *)(void *)0;
// domainlist
// file serv_list.c line 84
static struct binding *domainlist = (struct binding *)(void *)0;
// domainlock
// file serv_list.c line 86
static struct anonymous_14 domainlock = { .readers=0, .writers=0, .wishwrite=0, .mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } }, .lock_free={ .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } } };
// in_use
// file serv_list.c line 527
static struct binding *in_use = (struct binding *)(void *)0;
// is_online
// file ypbind_dbus_nm.c line 44
signed int is_online = 0;
// local_only
// file ypbind-mt.c line 75
signed int local_only = 0;
// lock_fd
// file ypbind-mt.c line 77
static signed int lock_fd;
// max_domains
// file serv_list.c line 85
static signed int max_domains = 0;
// mutex_dbus
// file ypbind_dbus_nm.c line 47
union anonymous_10 mutex_dbus = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// mutex_pid
// file ypbind-mt.c line 79
static union anonymous_10 mutex_pid = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// pid_is_written
// file ypbind-mt.c line 78
static signed int pid_is_written = 0;
// ping_interval
// file ypbind-mt.c line 74
signed int ping_interval = 20;
// port
// file ypbind-mt.c line 76
signed int port = -1;
// portmapper_tcp_port
// file ypbind-mt.c line 498
static signed int portmapper_tcp_port;
// portmapper_udp_port
// file ypbind-mt.c line 497
static signed int portmapper_udp_port;
// rpc_createerr
// file /usr/include/rpc/clnt.h line 392
extern struct rpc_createerr rpc_createerr;
// search_lock
// file serv_list.c line 87
static union anonymous_10 search_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// timeout
// file serv_list.c line 673
static struct timeval timeout = { .tv_sec=(signed long int)1, .tv_usec=(signed long int)0 };
// tottimeout
// file serv_list.c line 674
static struct timeval tottimeout = { .tv_sec=(signed long int)1, .tv_usec=(signed long int)0 };
// use_broadcast
// file ypbind-mt.c line 72
signed int use_broadcast = 0;
// ypset
// file ypbind-mt.c line 71
signed int ypset = 0;

// MySLPSrvURLCallback
// file ypbind_slp.c line 48
static enum anonymous_15 MySLPSrvURLCallback(void *hslp, const char *srvurl, unsigned short int lifetime, signed int errcode, void *cookie)
{
  struct slpcb *cb = (struct slpcb *)cookie;
  if(errcode == 0)
  {
    if(!(cb->srvurl == ((char *)NULL)))
    {
      struct slpcb *cbt;
      void *return_value_malloc_1;
      return_value_malloc_1=malloc(sizeof(struct slpcb) /*24ul*/ );
      cbt = (struct slpcb *)return_value_malloc_1;
      if(cbt == ((struct slpcb *)NULL))
        return (enum anonymous_15)SLP_FALSE;

      cbt->srvurl = cb->srvurl;
      cbt->err = cb->err;
      cbt->next = cb->next;
      cb->next = cbt;
    }

    cb->srvurl=strdup(srvurl);
    cb->err = 0;
    return (enum anonymous_15)SLP_TRUE;
  }

  else
    if(!(errcode == 1))
      cb->err = errcode;

  return (enum anonymous_15)SLP_FALSE;
}

// __pmap_getport
// file serv_list.c line 682
static unsigned short int __pmap_getport(struct sockaddr_in *address, unsigned long int program, unsigned long int version, unsigned int protocol)
{
  unsigned short int rport = (unsigned short int)0;
  signed int sock = -1;
  struct CLIENT *client;
  struct pmap parms;
  address->sin_port=htons((unsigned short int)111);
  client=clntudp_bufcreate(address, (unsigned long int)100000, (unsigned long int)2, timeout, &sock, (unsigned int)400, (unsigned int)400);
  if(!(client == ((struct CLIENT *)NULL)))
  {
    parms.pm_prog = program;
    parms.pm_vers = version;
    parms.pm_prot = (unsigned long int)protocol;
    parms.pm_port = (unsigned long int)0;
    enum clnt_stat return_value;
    return_value=client->cl_ops->cl_call(client, (unsigned long int)3, (signed int (*)(struct XDR *, void *, ...))xdr_pmap, (char *)&parms, (signed int (*)(struct XDR *, void *, ...))xdr_u_short, (char *)&rport, tottimeout);
    if(!((signed int)return_value == RPC_SUCCESS))
    {
      rpc_createerr.cf_stat = (enum clnt_stat)RPC_RPCBFAILURE;
      client->cl_ops->cl_geterr(client, &rpc_createerr.cf_error);
    }

    else
      if((signed int)rport == 0)
        rpc_createerr.cf_stat = (enum clnt_stat)RPC_PROGNOTREGISTERED;

    client->cl_ops->cl_destroy(client);
  }

  if(!(sock == -1))
    close(sock);

  address->sin_port = (unsigned short int)0;
  return rport;
}

// add_server
// file local.h line 14
extern signed int add_server(const char *domain, const char *host, signed int check_syntax)
{
  struct binding *entry;
  signed int active;
  signed int res = 0;
  if(domain == ((const char *)NULL))
  {
    char *return_value_gettext_1;
    return_value_gettext_1=gettext("internal error: add_server called with NULL domain.");
    log_msg(3, return_value_gettext_1);
    abort();
  }

  pthread_rdwr_wlock_np(&domainlock);
  get_entry(domain, &entry);
  char *return_value_gettext_2;
  char *return_value_gettext_3;
  char *return_value_gettext_4;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_8;
  signed int *return_value___errno_location_7;
  char *return_value_gettext_11;
  char *return_value_gettext_12;
  char *return_value_gettext_13;
  char *return_value_gettext_14;
  char *return_value_gettext_15;
  char *return_value_gettext_16;
  char *return_value_gettext_17;
  char *return_value_gettext_18;
  char *return_value_gettext_19;
  char *return_value_gettext_20;
  if(host == ((const char *)NULL))
  {
    entry->use_broadcast = 1;
    res = 1;
    if(!(debug_flag == 0))
    {
      return_value_gettext_2=gettext("add_server() domain: %s, broadcast");
      log_msg(7, return_value_gettext_2, domain);
    }

  }

  else
  {
    struct hostent *hent;
    struct hostent hostbuf;
    unsigned long int hstbuflen;
    char *hsttmpbuf;
    signed int herr;
    signed int error;
    active = 0;
    for( ; !(active >= 30); active = active + 1)
      if(entry->server[(signed long int)active].host == ((char *)NULL))
        break;

    if(!(entry->server[(signed long int)active].host == ((char *)NULL)))
    {
      if(!(debug_flag == 0))
      {
        return_value_gettext_3=gettext("add_server() domain: %s, host: %s, NO SLOT FREE!");
        log_msg(7, return_value_gettext_3, domain, host);
      }

      goto exit;
    }

    if(!(debug_flag == 0))
    {
      return_value_gettext_4=gettext("add_server() domain: %s, host: %s, slot: %d");
      log_msg(7, return_value_gettext_4, domain, host, active);
    }

    hstbuflen = (unsigned long int)1024;
    void *return_value___builtin_alloca_5;
    return_value___builtin_alloca_5=__builtin_alloca(hstbuflen);
    hsttmpbuf = (char *)return_value___builtin_alloca_5;
    do
    {
      error=gethostbyname_r(host, &hostbuf, hsttmpbuf, hstbuflen, &hent, &herr);
      if(error == 0)
        break;

      if(herr == -1)
        tmp_if_expr_9 = (_Bool)1;

      else
      {
        if(error == -1)
        {
          return_value___errno_location_7=__errno_location();
          tmp_if_expr_8 = *return_value___errno_location_7 == 34 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_8 = (_Bool)0;
        tmp_if_expr_9 = tmp_if_expr_8 ? (_Bool)1 : (_Bool)0;
      }
      if(error == 34 || tmp_if_expr_9)
      {
        hstbuflen = hstbuflen * (unsigned long int)2;
        void *return_value___builtin_alloca_6;
        return_value___builtin_alloca_6=__builtin_alloca(hstbuflen);
        hsttmpbuf = (char *)return_value___builtin_alloca_6;
      }

      else
        break;
    }
    while((_Bool)1);
    if(hent == ((struct hostent *)NULL))
    {
      signed int *return_value___h_errno_location_10;
      return_value___h_errno_location_10=__h_errno_location();
      switch(*return_value___h_errno_location_10)
      {
        case 1:
        {
          if(!(check_syntax == 0))
          {
            return_value_gettext_11=gettext("Unknown host:");
            fprintf(stderr, "%s %s\n", return_value_gettext_11, host);
          }

          else
          {
            return_value_gettext_12=gettext("Unknown host:");
            log_msg(3, "%s %s", return_value_gettext_12, host);
          }
          break;
        }
        case 2:
        {
          if(!(check_syntax == 0))
          {
            return_value_gettext_13=gettext("Host name lookup failure");
            fprintf(stderr, "%s\n", return_value_gettext_13);
          }

          else
          {
            return_value_gettext_14=gettext("Host name lookup failure");
            log_msg(3, return_value_gettext_14);
          }
          break;
        }
        case 4:
        {
          if(!(check_syntax == 0))
          {
            return_value_gettext_15=gettext("No address associated with name:");
            fprintf(stderr, "%s %s\n", return_value_gettext_15, host);
          }

          else
          {
            return_value_gettext_16=gettext("No address associated with name:");
            log_msg(3, "%s %s", return_value_gettext_16, host);
          }
          break;
        }
        case 3:
        {
          if(!(check_syntax == 0))
          {
            return_value_gettext_17=gettext("Unknown server error");
            fprintf(stderr, "%s\n", return_value_gettext_17);
          }

          else
          {
            return_value_gettext_18=gettext("Unknown server error");
            log_msg(3, return_value_gettext_18);
          }
          break;
        }
        default:
          if(!(check_syntax == 0))
          {
            return_value_gettext_19=gettext("gethostbyname: Unknown error");
            fprintf(stderr, "%s\n", return_value_gettext_19);
          }

          else
          {
            return_value_gettext_20=gettext("gethostbyname: Unknown error");
            log_msg(3, return_value_gettext_20);
          }
      }
      goto exit;
    }

    if(!(*hent->h_addr_list == ((char *)NULL)))
    {
      entry->server[(signed long int)active].host=strdup(host);
      entry->server[(signed long int)active].family = (unsigned short int)hent->h_addrtype;
      memcpy((void *)&entry->server[(signed long int)active].addr, (const void *)hent->h_addr_list[(signed long int)0], (unsigned long int)hent->h_length);
      res = 1;
    }

  }

exit:
  ;
  pthread_rdwr_wunlock_np(&domainlock);
  return res;
}

// change_binding
// file local.h line 16
extern void change_binding(const char *domain, struct ypbind_binding *binding)
{
  signed int i;
  pthread_rdwr_rlock_np(&domainlock);
  i = 0;
  for( ; !(i >= max_domains); i = i + 1)
  {
    signed int return_value_strcmp_1;
    return_value_strcmp_1=strcmp((domainlist + (signed long int)i)->domain, domain);
    if(return_value_strcmp_1 == 0)
    {
      struct sockaddr_in addr;
      struct timeval change_binding__1__1__1__timeout;
      signed int sock;
      pthread_rdwr_runlock_np(&domainlock);
      pthread_rdwr_wlock_np(&domainlock);
      if(!((domainlist + (signed long int)i)->client_handle == ((struct CLIENT *)NULL)))
        (domainlist + (signed long int)i)->client_handle->cl_ops->cl_destroy((domainlist + (signed long int)i)->client_handle);

      (domainlist + (signed long int)i)->active = -2;
      memcpy((void *)&(domainlist + (signed long int)i)->ypset.addr, (const void *)&binding->ypbind_binding_addr, sizeof(struct in_addr) /*4ul*/ );
      memcpy((void *)&(domainlist + (signed long int)i)->ypset.port, (const void *)&binding->ypbind_binding_port, sizeof(unsigned short int) /*2ul*/ );
      (domainlist + (signed long int)i)->ypset.family = (unsigned short int)2;
      sock = -1;
      change_binding__1__1__1__timeout.tv_sec = (signed long int)1;
      change_binding__1__1__1__timeout.tv_usec = (signed long int)0;
      memset((void *)&addr, 0, sizeof(struct sockaddr_in) /*16ul*/ );
      memcpy((void *)&addr.sin_addr, (const void *)&(domainlist + (signed long int)i)->ypset.addr, sizeof(struct in_addr) /*4ul*/ );
      memcpy((void *)&addr.sin_port, (const void *)&(domainlist + (signed long int)i)->ypset.port, sizeof(unsigned short int) /*2ul*/ );
      addr.sin_family = (domainlist + (signed long int)i)->ypset.family;
      (domainlist + (signed long int)i)->client_handle=clntudp_create(&addr, (unsigned long int)100004, (unsigned long int)2, change_binding__1__1__1__timeout, &sock);
      if((domainlist + (signed long int)i)->client_handle == ((struct CLIENT *)NULL))
      {
        (domainlist + (signed long int)i)->active = -1;
        remove_bindingfile(domain);
      }

      pthread_rdwr_wunlock_np(&domainlock);
      pthread_rdwr_rlock_np(&domainlock);
      update_bindingfile(&domainlist[(signed long int)i]);
      pthread_rdwr_runlock_np(&domainlock);
      goto __CPROVER_DUMP_L6;
    }

  }
  pthread_rdwr_runlock_np(&domainlock);
  goto __CPROVER_DUMP_L6;

__CPROVER_DUMP_L6:
  ;
}

// check_for_nm
// file ypbind_dbus_nm.c line 220
static signed int check_for_nm(struct DBusConnection *connection)
{
  unsigned int return_value_dbus_bus_name_has_owner_1;
  return_value_dbus_bus_name_has_owner_1=dbus_bus_name_has_owner(connection, "org.freedesktop.NetworkManager", (struct DBusError *)(void *)0);
  if(!(return_value_dbus_bus_name_has_owner_1 == 0u))
  {
    if(!(debug_flag == 0))
      log_msg(7, "NetworkManager is running.\n");

    return 1;
  }

  else
  {
    if(!(debug_flag == 0))
      log_msg(7, "NetworkManager is not running.\n");

    return 0;
  }
}

// check_online
// file ypbind_dbus_nm.c line 191
static signed int check_online(struct DBusConnection *connection)
{
  struct DBusMessage *message;
  struct DBusMessage *reply;
  struct DBusError error;
  unsigned int state;
  message=dbus_message_new_method_call("org.freedesktop.NetworkManager", "/org/freedesktop/NetworkManager", "org.freedesktop.NetworkManager", "state");
  if(message == ((struct DBusMessage *)NULL))
    return -1;

  else
  {
    dbus_error_init(&error);
    reply=dbus_connection_send_with_reply_and_block(connection, message, -1, &error);
    dbus_message_unref(message);
    if(reply == ((struct DBusMessage *)NULL))
      return 0;

    else
    {
      unsigned int return_value_dbus_message_get_args_1;
      return_value_dbus_message_get_args_1=dbus_message_get_args(reply, (struct DBusError *)(void *)0, (signed int)117, &state, (signed int)0);
      if(return_value_dbus_message_get_args_1 == 0u)
        return -1;

      else
        if(!(state == 70u))
          return 0;

        else
          return 1;
    }
  }
}

// clear_server
// file local.h line 13
extern void clear_server(void)
{
  signed int i;
  signed int j;
  pthread_rdwr_wlock_np(&domainlock);
  if(!(domainlist == ((struct binding *)NULL)))
  {
    i = 0;
    for( ; !(i >= max_domains); i = i + 1)
      if(!((domainlist + (signed long int)i)->active == -1))
      {
        remove_bindingfile((domainlist + (signed long int)i)->domain);
        j = 0;
        for( ; !(j >= 30); j = j + 1)
          if(!((domainlist + (signed long int)i)->server[(signed long int)j].host == ((char *)NULL)))
            free((void *)(domainlist + (signed long int)i)->server[(signed long int)j].host);

        if(!((domainlist + (signed long int)i)->ypset.host == ((char *)NULL)))
          free((void *)(domainlist + (signed long int)i)->ypset.host);

        if(!((domainlist + (signed long int)i)->client_handle == ((struct CLIENT *)NULL)))
          (domainlist + (signed long int)i)->client_handle->cl_ops->cl_destroy((domainlist + (signed long int)i)->client_handle);

        (domainlist + (signed long int)i)->active = -1;
      }

    free((void *)domainlist);
  }

  domainlist = (struct binding *)(void *)0;
  max_domains = 0;
  pthread_rdwr_wunlock_np(&domainlock);
}

// create_pidfile
// file ypbind-mt.c line 302
static void create_pidfile(void)
{
  struct flock lock;
  signed int left;
  signed int written;
  signed int pid;
  char pbuf[10l];
  char *ptr;
  signed int flags;
  lock_fd=open("/var/run/ypbind.pid", 0100 | 02, 0400 | 0200 | 0400 >> 3 | (0400 >> 3) >> 3);
  char *return_value_gettext_1;
  if(!(lock_fd >= 0))
  {
    return_value_gettext_1=gettext("cannot create pidfile %s");
    log_msg(3, return_value_gettext_1, (const void *)"/var/run/ypbind.pid");
  }

  flags=fcntl(lock_fd, 1, 0);
  char *return_value_gettext_9;
  if(flags == -1)
    close(lock_fd);

  else
  {
    flags = flags | 1;
    signed int return_value_fcntl_2;
    return_value_fcntl_2=fcntl(lock_fd, 2, flags);
    if(!(return_value_fcntl_2 >= 0))
      close(lock_fd);

    else
    {
      lock.l_type = (signed short int)1;
      lock.l_start = (signed long int)0;
      lock.l_whence = (signed short int)0;
      lock.l_len = (signed long int)0;
      signed int return_value_fcntl_7;
      return_value_fcntl_7=fcntl(lock_fd, 5, &lock);
      if(!(return_value_fcntl_7 >= 0))
      {
        signed int *return_value___errno_location_6;
        return_value___errno_location_6=__errno_location();
        if(!(*return_value___errno_location_6 == 37))
        {
          char *return_value_gettext_3;
          return_value_gettext_3=gettext("fcntl error: %s");
          signed int *return_value___errno_location_4;
          return_value___errno_location_4=__errno_location();
          char *return_value_strerror_5;
          return_value_strerror_5=strerror(*return_value___errno_location_4);
          log_msg(3, return_value_gettext_3, return_value_strerror_5);
        }

        pid = 0;
      }

      else
        if((signed int)lock.l_type == 2)
          pid = 0;

        else
          pid = lock.l_pid;
      if(!(pid == 0))
      {
        char *return_value_gettext_8;
        return_value_gettext_8=gettext("ypbind-mt already running (pid %d) - exiting");
        log_msg(3, return_value_gettext_8, pid);
        exit(1);
      }

      lock.l_type = (signed short int)1;
      lock.l_start = (signed long int)0;
      lock.l_whence = (signed short int)0;
      lock.l_len = (signed long int)0;
      signed int return_value_fcntl_10;
      return_value_fcntl_10=fcntl(lock_fd, 6, &lock);
      if(!(return_value_fcntl_10 == 0))
      {
        return_value_gettext_9=gettext("cannot lock pidfile");
        log_msg(3, return_value_gettext_9);
      }

      signed int return_value_getpid_11;
      return_value_getpid_11=getpid();
      sprintf(pbuf, "%ld\n", (signed long int)return_value_getpid_11);
      unsigned long int return_value_strlen_12;
      return_value_strlen_12=strlen(pbuf);
      left = (signed int)return_value_strlen_12;
      ptr = pbuf;
      while(left >= 1)
      {
        signed long int return_value_write_13;
        return_value_write_13=write(lock_fd, (const void *)ptr, (unsigned long int)left);
        written = (signed int)return_value_write_13;
        if(!(written >= 1))
          goto __CPROVER_DUMP_L13;

        left = left - written;
        ptr = ptr + (signed long int)written;
      }
      goto __CPROVER_DUMP_L13;
    }
  }

__CPROVER_DUMP_L13:
  ;
}

// dbus_filter
// file ypbind_dbus_nm.c line 108
static enum anonymous_18 dbus_filter(struct DBusConnection *connection, struct DBusMessage *message, void *user_data)
{
  enum anonymous_18 handled = (enum anonymous_18)DBUS_HANDLER_RESULT_NOT_YET_HANDLED;
  unsigned int return_value_dbus_message_is_signal_14;
  return_value_dbus_message_is_signal_14=dbus_message_is_signal(message, "org.freedesktop.DBus.Local", "Disconnected");
  unsigned int return_value_dbus_message_is_signal_13;
  unsigned int return_value_dbus_message_is_signal_12;
  unsigned int return_value_dbus_message_is_signal_11;
  _Bool tmp_if_expr_3;
  unsigned long int return_value_strlen_2;
  _Bool tmp_if_expr_5;
  unsigned long int return_value_strlen_4;
  if(!(return_value_dbus_message_is_signal_14 == 0u))
  {
    log_msg(6, "Lost connection to D-Bus\n");
    dbus_connection_unref(connection);
    connection = (struct DBusConnection *)(void *)0;
    g_timeout_add((unsigned int)1000, dbus_reconnect, (void *)0);
    handled = (enum anonymous_18)DBUS_HANDLER_RESULT_HANDLED;
  }

  else
  {
    return_value_dbus_message_is_signal_13=dbus_message_is_signal(message, "org.freedesktop.NetworkManager", "StateChange");
    if(!(return_value_dbus_message_is_signal_13 == 0u))
    {
      enum anonymous_21 state = (enum anonymous_21)NM_STATE_UNKNOWN;
      unsigned int return_value_dbus_message_get_args_1;
      return_value_dbus_message_get_args_1=dbus_message_get_args(message, (struct DBusError *)(void *)0, (signed int)117, &state, (signed int)0);
      if(!(return_value_dbus_message_get_args_1 == 0u))
      {
        if((signed int)state == NM_STATE_CONNECTED_GLOBAL)
          go_online();

        else
          if((signed int)state == NM_STATE_DISCONNECTED)
            go_offline();

      }

      handled = (enum anonymous_18)DBUS_HANDLER_RESULT_HANDLED;
    }

    else
    {
      return_value_dbus_message_is_signal_12=dbus_message_is_signal(message, "org.freedesktop.NetworkManager", "DeviceNoLongerActive");
      if(!(return_value_dbus_message_is_signal_12 == 0u))
      {
        go_offline();
        handled = (enum anonymous_18)DBUS_HANDLER_RESULT_HANDLED;
      }

      else
      {
        return_value_dbus_message_is_signal_11=dbus_message_is_signal(message, "org.freedesktop.DBus", "NameOwnerChanged");
        if(!(return_value_dbus_message_is_signal_11 == 0u))
        {
          if(!(debug_flag == 0))
          {
            char *service = (char *)(void *)0;
            char *old_owner = (char *)(void *)0;
            char *new_owner = (char *)(void *)0;
            unsigned int return_value_dbus_message_get_args_7;
            return_value_dbus_message_get_args_7=dbus_message_get_args(message, (struct DBusError *)(void *)0, (signed int)115, &service, (signed int)115, &old_owner, (signed int)115, &new_owner, (signed int)0);
            if(!(return_value_dbus_message_get_args_7 == 0u))
            {
              signed int return_value_strcmp_6;
              return_value_strcmp_6=strcmp(service, "org.freedesktop.NetworkManager");
              if(return_value_strcmp_6 == 0)
              {
                signed int old_owner_good;
                if(!(old_owner == ((char *)NULL)))
                {
                  return_value_strlen_2=strlen(old_owner);
                  tmp_if_expr_3 = return_value_strlen_2 > (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
                }

                else
                  tmp_if_expr_3 = (_Bool)0;
                old_owner_good = (signed int)tmp_if_expr_3;
                signed int new_owner_good;
                if(!(new_owner == ((char *)NULL)))
                {
                  return_value_strlen_4=strlen(new_owner);
                  tmp_if_expr_5 = return_value_strlen_4 > (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
                }

                else
                  tmp_if_expr_5 = (_Bool)0;
                new_owner_good = (signed int)tmp_if_expr_5;
                if(old_owner_good == 0 && !(new_owner_good == 0))
                  log_msg(7, "NetworkManager is on the system bus");

                else
                  if(new_owner_good == 0 && !(old_owner_good == 0))
                    log_msg(7, "NetworkManager left the system bus");

              }

            }

            handled = (enum anonymous_18)DBUS_HANDLER_RESULT_HANDLED;
          }

        }

        else
          if(!(debug_flag == 0))
          {
            const char *return_value_dbus_message_get_interface_8;
            return_value_dbus_message_get_interface_8=dbus_message_get_interface(message);
            const char *return_value_dbus_message_get_path_9;
            return_value_dbus_message_get_path_9=dbus_message_get_path(message);
            const char *return_value_dbus_message_get_member_10;
            return_value_dbus_message_get_member_10=dbus_message_get_member(message);
            log_msg(7, "interface: %s, object path: %s, method: %s", return_value_dbus_message_get_interface_8, return_value_dbus_message_get_path_9, return_value_dbus_message_get_member_10);
          }

      }
    }
  }
  return handled;
}

// dbus_init
// file ypbind_dbus_nm.c line 239
static signed int dbus_init(void)
{
  struct DBusConnection *connection = (struct DBusConnection *)(void *)0;
  struct DBusError error;
  dbus_error_init(&error);
  connection=dbus_bus_get((enum anonymous_22)DBUS_BUS_SYSTEM, &error);
  _Bool tmp_if_expr_2;
  unsigned int return_value_dbus_error_is_set_1;
  if(connection == ((struct DBusConnection *)NULL))
    tmp_if_expr_2 = (_Bool)1;

  else
  {
    return_value_dbus_error_is_set_1=dbus_error_is_set(&error);
    tmp_if_expr_2 = return_value_dbus_error_is_set_1 != 0u ? (_Bool)1 : (_Bool)0;
  }
  unsigned int return_value_dbus_connection_add_filter_3;
  unsigned int return_value_dbus_error_is_set_4;
  unsigned int return_value_dbus_error_is_set_5;
  if(tmp_if_expr_2)
  {
    log_msg(3, "Connection to D-BUS system message bus failed: %s.", error.message);
    dbus_error_free(&error);
  }

  else
  {
    dbus_connection_set_exit_on_disconnect(connection, (unsigned int)0);
    return_value_dbus_connection_add_filter_3=dbus_connection_add_filter(connection, dbus_filter, (void *)0, (void (*)(void *))(void *)0);
    if(!(return_value_dbus_connection_add_filter_3 == 0u))
    {
      dbus_bus_add_match(connection, "type='signal',interface='org.freedesktop.DBus',sender='org.freedesktop.DBus'", &error);
      return_value_dbus_error_is_set_4=dbus_error_is_set(&error);
      if(!(return_value_dbus_error_is_set_4 == 0u))
      {
        log_msg(3, "Error adding match, %s: %s", error.name, error.message);
        dbus_error_free(&error);
      }

      else
      {
        dbus_bus_add_match(connection, "type='signal',interface='org.freedesktop.NetworkManager',sender='org.freedesktop.NetworkManager',path='/org/freedesktop/NetworkManager'", &error);
        return_value_dbus_error_is_set_5=dbus_error_is_set(&error);
        if(!(return_value_dbus_error_is_set_5 == 0u))
        {
          log_msg(3, "Error adding match, %s: %s", error.name, error.message);
          dbus_error_free(&error);
        }

        else
          dbus_connection_setup_with_g_main(connection, (struct _GMainContext *)(void *)0);
      }
    }

  }

out:
  ;
  if(!(connection == ((struct DBusConnection *)NULL)))
  {
    signed int return_value_check_for_nm_6;
    return_value_check_for_nm_6=check_for_nm(connection);
    if(return_value_check_for_nm_6 == 0)
    {
      dbus_connection_close(connection);
      is_online = 1;
      return 0;
    }

    signed int return_value_check_online_7;
    return_value_check_online_7=check_online(connection);
    if(return_value_check_online_7 == 1)
    {
      if(!(debug_flag == 0))
        log_msg(7, "Are already online");

      is_online = 1;
    }

    else
    {
      if(!(debug_flag == 0))
        log_msg(7, "Are offline");

      is_online = 0;
    }
    return 1;
  }

  else
    return 0;
}

// dbus_reconnect
// file ypbind_dbus_nm.c line 96
static signed int dbus_reconnect(void *user_data)
{
  signed int status;
  status=dbus_init();
  if(!(debug_flag == 0))
    log_msg(7, "Reconnect %s", status != 0 ? "successful" : "failed");

  return (signed int)!(status != 0);
}

// do_binding
// file local.h line 32
extern void do_binding(void)
{
  signed int i;
  pthread_mutex_lock(&search_lock);
  i = 0;
  for( ; !(i >= max_domains); i = i + 1)
  {
    signed int return_value_ping_all_1;
    return_value_ping_all_1=ping_all(&domainlist[(signed long int)i]);
    if(return_value_ping_all_1 == 0)
    {
      if(!((domainlist + (signed long int)i)->use_broadcast == 0))
        do_broadcast(&domainlist[(signed long int)i]);

    }

  }
  pthread_mutex_unlock(&search_lock);
}

// do_broadcast
// file serv_list.c line 618
static void do_broadcast(struct binding *list)
{
  char *do_broadcast__1__domain;
  signed int out;
  enum clnt_stat status;
  pthread_rdwr_rlock_np(&domainlock);
  char *tmp_statement_expression_1;
  const char *__old = list->domain;
  unsigned long int __len;
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(__old);
  __len = return_value_strlen_2 + (unsigned long int)1;
  char *__new;
  void *return_value___builtin_alloca_3;
  return_value___builtin_alloca_3=__builtin_alloca(__len);
  __new = (char *)return_value___builtin_alloca_3;
  void *return_value_memcpy_4;
  return_value_memcpy_4=memcpy((void *)__new, (const void *)__old, __len);
  tmp_statement_expression_1 = (char *)return_value_memcpy_4;
  do_broadcast__1__domain = tmp_statement_expression_1;
  pthread_rdwr_runlock_np(&domainlock);
  char *return_value_gettext_5;
  if(!(debug_flag == 0))
  {
    return_value_gettext_5=gettext("do_broadcast() for domain '%s' is called");
    log_msg(7, return_value_gettext_5, do_broadcast__1__domain);
  }

  pthread_rdwr_wlock_np(&domainlock);
  list->active = -1;
  pthread_rdwr_wunlock_np(&domainlock);
  pthread_rdwr_rlock_np(&domainlock);
  in_use = list;
  status=clnt_broadcast((unsigned long int)100004, (unsigned long int)2, (unsigned long int)2, (signed int (*)(struct XDR *, void *, ...))ypbind_xdr_domainname, (char *)(void *)&do_broadcast__1__domain, (signed int (*)(struct XDR *, void *, ...))xdr_bool, (char *)(void *)&out, (signed int (*)(char *, struct sockaddr_in *))eachresult);
  if(!((signed int)status == RPC_SUCCESS))
  {
    remove_bindingfile(do_broadcast__1__domain);
    char *return_value_clnt_sperrno_6;
    return_value_clnt_sperrno_6=clnt_sperrno(status);
    log_msg(3, "broadcast: %s.", return_value_clnt_sperrno_6);
  }

  else
    update_bindingfile(list);
  pthread_rdwr_runlock_np(&domainlock);
  char *return_value_gettext_7;
  if(!(debug_flag == 0))
  {
    return_value_gettext_7=gettext("leave do_broadcast() for domain '%s'");
    log_msg(7, return_value_gettext_7, do_broadcast__1__domain);
  }

}

// eachresult
// file serv_list.c line 530
static signed int eachresult(signed int *out, struct sockaddr_in *addr)
{
  struct timeval eachresult__1__timeout;
  signed int sock;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_4;
  signed int *return_value___errno_location_3;
  char *return_value_gettext_6;
  char *return_value_gettext_7;
  char *return_value_inet_ntoa_8;
  unsigned short int return_value_ntohs_12;
  if(!(*out == 0))
  {
    if(!(debug_flag == 0))
    {
      struct hostent hostbuf;
      struct hostent *host;
      unsigned long int hstbuflen;
      char *hsttmpbuf;
      signed int herr;
      signed int error;
      hstbuflen = (unsigned long int)1024;
      void *return_value___builtin_alloca_1;
      return_value___builtin_alloca_1=__builtin_alloca(hstbuflen);
      hsttmpbuf = (char *)return_value___builtin_alloca_1;
      do
      {
        error=gethostbyaddr_r((const void *)(char *)&addr->sin_addr.s_addr, (unsigned int)sizeof(unsigned int) /*4ul*/ , 2, &hostbuf, hsttmpbuf, hstbuflen, &host, &herr);
        if(error >= 0)
          break;

        if(herr == -1)
          tmp_if_expr_5 = (_Bool)1;

        else
        {
          if(error == -1)
          {
            return_value___errno_location_3=__errno_location();
            tmp_if_expr_4 = *return_value___errno_location_3 == 34 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_4 = (_Bool)0;
          tmp_if_expr_5 = tmp_if_expr_4 ? (_Bool)1 : (_Bool)0;
        }
        if(error == 34 || tmp_if_expr_5)
        {
          hstbuflen = hstbuflen * (unsigned long int)2;
          void *return_value___builtin_alloca_2;
          return_value___builtin_alloca_2=__builtin_alloca(hstbuflen);
          hsttmpbuf = (char *)return_value___builtin_alloca_2;
        }

        else
          break;
      }
      while((_Bool)1);
      if(!(host == ((struct hostent *)NULL)))
      {
        return_value_gettext_6=gettext("Answer for domain '%s' from server '%s'");
        log_msg(7, return_value_gettext_6, (const void *)in_use->domain, host->h_name);
      }

      else
      {
        return_value_gettext_7=gettext("Answer for domain '%s' from unknown server '%s'");
        return_value_inet_ntoa_8=inet_ntoa(addr->sin_addr);
        log_msg(7, return_value_gettext_7, (const void *)in_use->domain, return_value_inet_ntoa_8);
      }
    }

    if(broken_server == 0)
    {
      return_value_ntohs_12=ntohs(addr->sin_port);
      if((signed int)return_value_ntohs_12 >= 1024)
      {
        char *return_value_gettext_9;
        return_value_gettext_9=gettext("Answer for domain '%s' from '%s' on illegal port %d.");
        char *return_value_inet_ntoa_10;
        return_value_inet_ntoa_10=inet_ntoa(addr->sin_addr);
        unsigned short int return_value_ntohs_11;
        return_value_ntohs_11=ntohs(addr->sin_port);
        log_msg(3, return_value_gettext_9, (const void *)in_use->domain, return_value_inet_ntoa_10, return_value_ntohs_11);
        return 0;
      }

    }

    memcpy((void *)&in_use->server[(signed long int)0].addr, (const void *)&addr->sin_addr, sizeof(struct in_addr) /*4ul*/ );
    memcpy((void *)&in_use->server[(signed long int)0].port, (const void *)&addr->sin_port, sizeof(unsigned short int) /*2ul*/ );
    sock = -1;
    eachresult__1__timeout.tv_sec = (signed long int)1;
    eachresult__1__timeout.tv_usec = (signed long int)0;
    in_use->client_handle=clntudp_create(addr, (unsigned long int)100004, (unsigned long int)2, eachresult__1__timeout, &sock);
    if(in_use->client_handle == ((struct CLIENT *)NULL))
      return 0;

    in_use->active = 0;
    return 1;
  }

  else
    return 0;
}

// find_domain
// file local.h line 12
extern void find_domain(const char *domain, struct ypbind_resp *result)
{
  signed int i;
  signed int count = 0;
  signed int return_value_strcmp_1;
  char *return_value_inet_ntoa_2;
  unsigned short int return_value_ntohs_3;
  char *return_value_inet_ntoa_4;
  unsigned short int return_value_ntohs_5;
  signed int return_value_pthread_mutex_trylock_7;
  if(!(domainlist == ((struct binding *)NULL)))
  {
    pthread_rdwr_rlock_np(&domainlock);
    i = 0;
    for( ; !(i >= max_domains); i = i + 1)
    {
      return_value_strcmp_1=strcmp((domainlist + (signed long int)i)->domain, domain);
      if(return_value_strcmp_1 == 0)
        break;

    }
    if(i >= max_domains)
      pthread_rdwr_runlock_np(&domainlock);

    else
    {
      do
      {

      again:
        ;
        count = count + 1;
        if((domainlist + (signed long int)i)->active >= 0)
        {
          result->ypbind_status = (enum ypbind_resptype)YPBIND_SUCC_VAL;
          memcpy((void *)&result->ypbind_resp_u.ypbind_bindinfo.ypbind_binding_addr, (const void *)&(domainlist + (signed long int)i)->server[(signed long int)(domainlist + (signed long int)i)->active].addr, sizeof(struct in_addr) /*4ul*/ );
          memcpy((void *)&result->ypbind_resp_u.ypbind_bindinfo.ypbind_binding_port, (const void *)&(domainlist + (signed long int)i)->server[(signed long int)(domainlist + (signed long int)i)->active].port, sizeof(unsigned short int) /*2ul*/ );
          if(!(debug_flag == 0))
          {
            return_value_inet_ntoa_2=inet_ntoa((domainlist + (signed long int)i)->server[(signed long int)(domainlist + (signed long int)i)->active].addr);
            return_value_ntohs_3=ntohs((domainlist + (signed long int)i)->server[(signed long int)(domainlist + (signed long int)i)->active].port);
            log_msg(7, "YPBINDPROC_DOMAIN: server '%s', port %d", return_value_inet_ntoa_2, return_value_ntohs_3);
          }

          break;
        }

        if((domainlist + (signed long int)i)->active == -2)
        {
          result->ypbind_status = (enum ypbind_resptype)YPBIND_SUCC_VAL;
          memcpy((void *)&result->ypbind_resp_u.ypbind_bindinfo.ypbind_binding_addr, (const void *)&(domainlist + (signed long int)i)->ypset.addr, sizeof(struct in_addr) /*4ul*/ );
          memcpy((void *)&result->ypbind_resp_u.ypbind_bindinfo.ypbind_binding_port, (const void *)&(domainlist + (signed long int)i)->ypset.port, sizeof(unsigned short int) /*2ul*/ );
          if(!(debug_flag == 0))
          {
            return_value_inet_ntoa_4=inet_ntoa((domainlist + (signed long int)i)->ypset.addr);
            return_value_ntohs_5=ntohs((domainlist + (signed long int)i)->ypset.port);
            log_msg(7, "YPBINDPROC_DOMAIN: server '%s', port %d", return_value_inet_ntoa_4, return_value_ntohs_5);
          }

          break;
        }

        pthread_rdwr_runlock_np(&domainlock);
        if(count >= 3)
          goto __CPROVER_DUMP_L16;

        return_value_pthread_mutex_trylock_7=pthread_mutex_trylock(&search_lock);
        if(return_value_pthread_mutex_trylock_7 == 0)
        {
          if(!(debug_flag == 0))
            log_msg(7, "trylock = success");

          signed int return_value_ping_all_6;
          return_value_ping_all_6=ping_all(&domainlist[(signed long int)i]);
          if(return_value_ping_all_6 == 0)
          {
            if(!((domainlist + (signed long int)i)->use_broadcast == 0))
              do_broadcast(&domainlist[(signed long int)i]);

          }

        }

        else
        {
          if(!(debug_flag == 0))
            log_msg(7, "trylock = failed");

          pthread_mutex_lock(&search_lock);
        }
        pthread_mutex_unlock(&search_lock);
        pthread_rdwr_rlock_np(&domainlock);
      }
      while((_Bool)1);
      pthread_rdwr_runlock_np(&domainlock);
      goto __CPROVER_DUMP_L16;
    }
  }


__CPROVER_DUMP_L16:
  ;
}

// get_entry
// file serv_list.c line 357
static signed int get_entry(const char *domain, struct binding **entry)
{
  signed int i;
  *entry = (struct binding *)(void *)0;
  i = 0;
  for( ; !(i >= max_domains); i = i + 1)
  {
    signed int return_value_strcmp_1;
    return_value_strcmp_1=strcmp((domainlist + (signed long int)i)->domain, domain);
    if(return_value_strcmp_1 == 0)
      *entry = &domainlist[(signed long int)i];

  }
  if(*entry == ((struct binding *)NULL))
  {
    max_domains = max_domains + 1;
    void *return_value_realloc_2;
    return_value_realloc_2=realloc((void *)domainlist, (unsigned long int)max_domains * sizeof(struct binding) /*1024ul*/ );
    domainlist = (struct binding *)return_value_realloc_2;
    if(domainlist == ((struct binding *)NULL))
    {
      char *return_value_gettext_3;
      return_value_gettext_3=gettext("Not enough memory !");
      log_msg(3, return_value_gettext_3);
      exit(1);
    }

    strcpy((domainlist + (signed long int)(max_domains - 1))->domain, domain);
    (domainlist + (signed long int)(max_domains - 1))->ypset.host = (char *)(void *)0;
    (domainlist + (signed long int)(max_domains - 1))->active = -1;
    (domainlist + (signed long int)(max_domains - 1))->use_broadcast = 0;
    memset((void *)(domainlist + (signed long int)(max_domains - 1))->server, 0, (unsigned long int)30 * sizeof(struct bound_server) /*24ul*/ );
    *entry = &domainlist[(signed long int)(max_domains - 1)];
  }

  return 0;
}

// gettid
// file log_msg.c line 34
static signed int gettid(void)
{
  signed long int return_value_syscall_1;
  return_value_syscall_1=syscall((signed long int)186);
  return (signed int)return_value_syscall_1;
}

// go_offline
// file ypbind_dbus_nm.c line 52
static void go_offline(void)
{
  char *return_value_gettext_1;
  if(!(is_online == 0))
  {
    if(!(debug_flag == 0))
    {
      return_value_gettext_1=gettext("Switch to offline mode");
      log_msg(7, return_value_gettext_1);
    }

    is_online = 0;
    portmapper_disconnect();
    clear_server();
  }

}

// go_online
// file ypbind_dbus_nm.c line 65
static void go_online(void)
{
  char *return_value_gettext_1;
  char *return_value_gettext_2;
  if(is_online == 0)
  {
    if(!(debug_flag == 0))
    {
      return_value_gettext_1=gettext("Switch to online mode");
      log_msg(7, return_value_gettext_1);
    }

    is_online = 1;
    if(!(debug_flag == 0))
    {
      return_value_gettext_2=gettext("Going online, reloading config file.");
      log_msg(7, return_value_gettext_2);
    }

    clear_server();
    if(!(use_broadcast == 0))
      add_server(domain, (const char *)(void *)0, 0);

    else
      load_config(0);
    signed int return_value_portmapper_connect_3;
    return_value_portmapper_connect_3=portmapper_connect();
    if(!(return_value_portmapper_connect_3 == 0))
      go_offline();

    do_binding();
  }

}

// load_config
// file ypbind-mt.c line 105
extern signed int load_config(signed int check_syntax)
{
  struct _IO_FILE *fp;
  char *buf = (char *)(void *)0;
  unsigned long int buflen = (unsigned long int)0;
  signed int have_entries = 0;
  signed int bad_entries = 0;
  fp=fopen(configfile, "r");
  signed int return_value_feof_1;
  const unsigned short int **return_value___ctype_b_loc_2;
  unsigned long int return_value_strlen_3;
  char *return_value_gettext_5;
  char *return_value_gettext_6;
  _Bool tmp_if_expr_27;
  const unsigned short int **return_value___ctype_b_loc_26;
  char *return_value_gettext_7;
  char *return_value_gettext_10;
  char *return_value_gettext_13;
  signed int return_value_strncmp_22;
  _Bool tmp_if_expr_24;
  const unsigned short int **return_value___ctype_b_loc_23;
  char *return_value_gettext_15;
  signed int return_value_strncmp_21;
  const unsigned short int **return_value___ctype_b_loc_19;
  _Bool tmp_if_expr_20;
  char *return_value_gettext_17;
  char *return_value_gettext_29;
  char *return_value_gettext_32;
  if(fp == ((struct _IO_FILE *)NULL))
    return 1;

  else
  {
    if(!(debug_flag == 0))
      log_msg(7, "parsing config file");

    do
    {
      return_value_feof_1=feof(fp);
      if(!(return_value_feof_1 == 0))
        break;

      char tmpserver[81l];
      char tmpdomain[257l];
      signed int count;
      char *tmp;
      char *cp;
      signed long int n;
      n=getline(&buf, &buflen, fp);
      cp = buf;
      if(!(n >= 1l))
        break;

      tmp=strchr(cp, 35);
      if(!(tmp == ((char *)NULL)))
        *tmp = (char)0;

      do
      {
        return_value___ctype_b_loc_2=__ctype_b_loc();
        if((8192 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)*cp]) == 0)
          break;

        cp = cp + 1l;
      }
      while((_Bool)1);
      if(!((signed int)*cp == 0))
      {
        unsigned long int return_value_strlen_4;
        return_value_strlen_4=strlen(cp);
        if((signed int)cp[-1l + (signed long int)return_value_strlen_4] == 10)
        {
          return_value_strlen_3=strlen(cp);
          cp[(signed long int)(return_value_strlen_3 - (unsigned long int)1)] = (char)0;
        }

        if(!(debug_flag == 0))
        {
          return_value_gettext_5=gettext("Trying entry:");
          log_msg(7, "%s %s", return_value_gettext_5, cp);
        }

        if(!(check_syntax == 0))
        {
          return_value_gettext_6=gettext("Trying entry:");
          printf("%s %s\n", return_value_gettext_6, cp);
        }

        signed int return_value_strncmp_25;
        return_value_strncmp_25=strncmp(cp, "domain", (unsigned long int)6);
        if(return_value_strncmp_25 == 0)
        {
          return_value___ctype_b_loc_26=__ctype_b_loc();
          tmp_if_expr_27 = ((signed int)(*return_value___ctype_b_loc_26)[(signed long int)(signed int)cp[(signed long int)6]] & (signed int)(unsigned short int)8192) != 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_27 = (_Bool)0;
        if(tmp_if_expr_27)
        {
          char *return_value_strstr_9;
          return_value_strstr_9=strstr(cp, "server");
          if(!(return_value_strstr_9 == ((char *)NULL)))
          {
            count=sscanf(cp, "domain %64s server %80s", (const void *)tmpdomain, (const void *)tmpserver);
            if(count == 2)
            {
              if(!(debug_flag == 0))
              {
                return_value_gettext_7=gettext("parsed domain '%s' server '%s'");
                log_msg(7, return_value_gettext_7, (const void *)tmpdomain, (const void *)tmpserver);
              }

              signed int return_value_add_server_8;
              return_value_add_server_8=add_server(tmpdomain, tmpserver, check_syntax);
              if(!(return_value_add_server_8 == 0))
                have_entries = have_entries + 1;

              else
                bad_entries = bad_entries + 1;
              continue;
            }

          }

          char *return_value_strstr_12;
          return_value_strstr_12=strstr(cp, "broadcast");
          if(!(return_value_strstr_12 == ((char *)NULL)))
          {
            count=sscanf(cp, "domain %s broadcast", (const void *)tmpdomain);
            if(count == 1)
            {
              if(!(debug_flag == 0))
              {
                return_value_gettext_10=gettext("parsed domain '%s' broadcast");
                log_msg(7, return_value_gettext_10, (const void *)tmpdomain);
              }

              signed int return_value_add_server_11;
              return_value_add_server_11=add_server(tmpdomain, (const char *)(void *)0, check_syntax);
              if(!(return_value_add_server_11 == 0))
                have_entries = have_entries + 1;

              else
                bad_entries = bad_entries + 1;
              continue;
            }

          }

          char *return_value_strstr_14;
          return_value_strstr_14=strstr(cp, "slp");
          if(!(return_value_strstr_14 == ((char *)NULL)))
          {
            count=sscanf(cp, "domain %s slp", (const void *)tmpdomain);
            if(count == 1)
            {
              signed int i;
              if(!(debug_flag == 0))
              {
                return_value_gettext_13=gettext("parsed domain '%s' slp");
                log_msg(7, return_value_gettext_13, (const void *)tmpdomain);
              }

              i=query_slp(tmpdomain);
              if(i >= 1)
                have_entries = have_entries + 1;

              else
                bad_entries = bad_entries + 1;
              continue;
            }

          }

        }

        else
        {
          return_value_strncmp_22=strncmp(cp, "ypserver", (unsigned long int)8);
          if(return_value_strncmp_22 == 0)
          {
            return_value___ctype_b_loc_23=__ctype_b_loc();
            tmp_if_expr_24 = ((signed int)(*return_value___ctype_b_loc_23)[(signed long int)(signed int)cp[(signed long int)8]] & (signed int)(unsigned short int)8192) != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_24 = (_Bool)0;
          if(tmp_if_expr_24)
          {
            count=sscanf(cp, "ypserver %80s", (const void *)tmpserver);
            if(count == 1)
            {
              if(!(debug_flag == 0))
              {
                return_value_gettext_15=gettext("parsed ypserver %s");
                log_msg(7, return_value_gettext_15, (const void *)tmpserver);
              }

              signed int return_value_add_server_16;
              return_value_add_server_16=add_server(domain, tmpserver, check_syntax);
              if(!(return_value_add_server_16 == 0))
                have_entries = have_entries + 1;

              else
                bad_entries = bad_entries + 1;
              continue;
            }

          }

          else
          {
            return_value_strncmp_21=strncmp(cp, "broadcast", (unsigned long int)9);
            if(return_value_strncmp_21 == 0)
            {
              return_value___ctype_b_loc_19=__ctype_b_loc();
              if(!((8192 & (signed int)(*return_value___ctype_b_loc_19)[(signed long int)(signed int)cp[9l]]) == 0))
                tmp_if_expr_20 = (_Bool)1;

              else
                tmp_if_expr_20 = (signed int)cp[(signed long int)9] == 0 ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr_20)
              {
                if(!(debug_flag == 0))
                {
                  return_value_gettext_17=gettext("parsed broadcast");
                  log_msg(7, return_value_gettext_17);
                }

                signed int return_value_add_server_18;
                return_value_add_server_18=add_server(domain, (const char *)(void *)0, check_syntax);
                if(!(return_value_add_server_18 == 0))
                  have_entries = have_entries + 1;

                else
                  bad_entries = bad_entries + 1;
                continue;
              }

            }

          }
        }
        if(!(check_syntax == 0))
        {
          char *return_value_gettext_28;
          return_value_gettext_28=gettext("Entry \"%s\" is not valid!\n");
          fprintf(stderr, return_value_gettext_28, cp);
          bad_entries = bad_entries + 1;
        }

        else
        {
          return_value_gettext_29=gettext("Entry \"%s\" is not valid, ignore it!");
          log_msg(3, return_value_gettext_29, cp);
        }
      }

    }
    while((_Bool)1);
    fclose(fp);
    if(!(buf == ((char *)NULL)))
      free((void *)buf);

    if(!(check_syntax == 0))
    {
      if(!(bad_entries == 0))
      {
        char *return_value_gettext_30;
        return_value_gettext_30=gettext("Bad entries found.\n");
        fprintf(stderr, return_value_gettext_30);
        return 1;
      }

      if(have_entries == 0)
      {
        char *return_value_gettext_31;
        return_value_gettext_31=gettext("No entry found.\n");
        fprintf(stderr, return_value_gettext_31);
        return 1;
      }

    }

    if(have_entries == 0)
    {
      if(!(debug_flag == 0))
      {
        return_value_gettext_32=gettext("No entry found.");
        log_msg(7, return_value_gettext_32);
      }

      return 1;
    }

    return 0;
  }
}

// log_msg
// file log_msg.h line 8
extern void log_msg(signed int type, const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  if(!(debug_flag == 0))
  {
    signed int return_value_gettid_1;
    return_value_gettid_1=gettid();
    fprintf(stderr, "%d: ", return_value_gettid_1);
    vfprintf(stderr, fmt, ap);
    fputc(10, stderr);
  }

  else
    vsyslog(type, fmt, ap);
  ap = ((void **)NULL);
}

// main
// file ypbind-mt.c line 627
signed int main(signed int argc, char **argv)
{
  signed int i;
  struct anonymous_11 sigs_to_block;
  unsigned long int sig_thread;
  unsigned long int ping_thread;
  unsigned long int dbus_thread;
  signed int disable_dbus = 0;
  struct stat st;
  signed int configcheck_only = 0;
  setlocale(5, "");
  setlocale(0, "");
  bindtextdomain("ypbind-mt", "/usr/share/locale");
  textdomain("ypbind-mt");
  i = 1;
  signed int return_value_strcmp_28;
  signed int return_value_strcmp_27;
  signed int return_value_strcmp_24;
  _Bool tmp_if_expr_26;
  signed int return_value_strcmp_25;
  signed int return_value_strcmp_21;
  _Bool tmp_if_expr_23;
  signed int return_value_strcmp_22;
  signed int return_value_strcmp_18;
  _Bool tmp_if_expr_20;
  signed int return_value_strcmp_19;
  signed int return_value_strcmp_17;
  signed int return_value_strcmp_14;
  _Bool tmp_if_expr_16;
  signed int return_value_strcmp_15;
  signed int return_value_strcmp_13;
  _Bool tmp_if_expr_1;
  signed int return_value_strcmp_12;
  _Bool tmp_if_expr_2;
  signed int return_value_strcmp_7;
  _Bool tmp_if_expr_9;
  signed int return_value_strcmp_8;
  _Bool tmp_if_expr_11;
  signed int return_value_strcmp_10;
  _Bool tmp_if_expr_3;
  signed int return_value_strcmp_6;
  signed int return_value_strcmp_5;
  signed int return_value_strcmp_4;
  for( ; !(i >= argc); i = i + 1)
  {
    signed int return_value_strcmp_29;
    return_value_strcmp_29=strcmp("--version", argv[(signed long int)i]);
    if(return_value_strcmp_29 == 0)
    {
      fprintf(stdout, "ypbind (%s) %s\n", (const void *)"ypbind-mt", (const void *)"1.20.1");
      exit(0);
    }

    else
    {
      return_value_strcmp_28=strcmp("-ypset", argv[(signed long int)i]);
      if(return_value_strcmp_28 == 0)
        ypset = 1;

      else
      {
        return_value_strcmp_27=strcmp("-ypsetme", argv[(signed long int)i]);
        if(return_value_strcmp_27 == 0)
          ypset = 2;

        else
        {
          return_value_strcmp_24=strcmp("-d", argv[(signed long int)i]);
          if(return_value_strcmp_24 == 0)
            tmp_if_expr_26 = (_Bool)1;

          else
          {
            return_value_strcmp_25=strcmp("-debug", argv[(signed long int)i]);
            tmp_if_expr_26 = return_value_strcmp_25 == 0 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_26)
            debug_flag = 1;

          else
          {
            return_value_strcmp_21=strcmp("-broken-server", argv[(signed long int)i]);
            if(return_value_strcmp_21 == 0)
              tmp_if_expr_23 = (_Bool)1;

            else
            {
              return_value_strcmp_22=strcmp("-broken_server", argv[(signed long int)i]);
              tmp_if_expr_23 = return_value_strcmp_22 == 0 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr_23)
              broken_server = 1;

            else
            {
              return_value_strcmp_18=strcmp("-no-ping", argv[(signed long int)i]);
              if(return_value_strcmp_18 == 0)
                tmp_if_expr_20 = (_Bool)1;

              else
              {
                return_value_strcmp_19=strcmp("-no_ping", argv[(signed long int)i]);
                tmp_if_expr_20 = return_value_strcmp_19 == 0 ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr_20)
                ping_interval = 0;

              else
              {
                return_value_strcmp_17=strcmp("-broadcast", argv[(signed long int)i]);
                if(return_value_strcmp_17 == 0)
                  use_broadcast = 1;

                else
                {
                  return_value_strcmp_14=strcmp("-local-only", argv[(signed long int)i]);
                  if(return_value_strcmp_14 == 0)
                    tmp_if_expr_16 = (_Bool)1;

                  else
                  {
                    return_value_strcmp_15=strcmp("-local_only", argv[(signed long int)i]);
                    tmp_if_expr_16 = return_value_strcmp_15 == 0 ? (_Bool)1 : (_Bool)0;
                  }
                  if(tmp_if_expr_16)
                    local_only = 1;

                  else
                  {
                    return_value_strcmp_13=strcmp("-f", argv[(signed long int)i]);
                    if(return_value_strcmp_13 == 0)
                    {
                      if(1 + i == argc)
                        tmp_if_expr_1 = (_Bool)1;

                      else
                        tmp_if_expr_1 = (signed int)argv[(signed long int)(i + 1)][(signed long int)0] == 45 ? (_Bool)1 : (_Bool)0;
                      if(tmp_if_expr_1)
                        usage(1);

                      i = i + 1;
                      configfile = argv[(signed long int)i];
                    }

                    else
                    {
                      return_value_strcmp_12=strcmp("-p", argv[(signed long int)i]);
                      if(return_value_strcmp_12 == 0)
                      {
                        if(1 + i == argc)
                          tmp_if_expr_2 = (_Bool)1;

                        else
                          tmp_if_expr_2 = (signed int)argv[(signed long int)(i + 1)][(signed long int)0] == 45 ? (_Bool)1 : (_Bool)0;
                        if(tmp_if_expr_2)
                          usage(1);

                        i = i + 1;
                        port=atoi(argv[(signed long int)i]);
                      }

                      else
                      {
                        return_value_strcmp_7=strcmp("-ping-interval", argv[(signed long int)i]);
                        if(return_value_strcmp_7 == 0)
                          tmp_if_expr_9 = (_Bool)1;

                        else
                        {
                          return_value_strcmp_8=strcmp("-ping-interval", argv[(signed long int)i]);
                          tmp_if_expr_9 = return_value_strcmp_8 == 0 ? (_Bool)1 : (_Bool)0;
                        }
                        if(tmp_if_expr_9)
                          tmp_if_expr_11 = (_Bool)1;

                        else
                        {
                          return_value_strcmp_10=strcmp("-i", argv[(signed long int)i]);
                          tmp_if_expr_11 = return_value_strcmp_10 == 0 ? (_Bool)1 : (_Bool)0;
                        }
                        if(tmp_if_expr_11)
                        {
                          if(1 + i == argc)
                            tmp_if_expr_3 = (_Bool)1;

                          else
                            tmp_if_expr_3 = (signed int)argv[(signed long int)(i + 1)][(signed long int)0] == 45 ? (_Bool)1 : (_Bool)0;
                          if(tmp_if_expr_3)
                            usage(1);

                          i = i + 1;
                          ping_interval=atoi(argv[(signed long int)i]);
                        }

                        else
                        {
                          return_value_strcmp_6=strcmp("-c", argv[(signed long int)i]);
                          if(return_value_strcmp_6 == 0)
                            configcheck_only = 1;

                          else
                          {
                            return_value_strcmp_5=strcmp("-no-dbus", argv[(signed long int)i]);
                            if(return_value_strcmp_5 == 0)
                              disable_dbus = 1;

                            else
                            {
                              return_value_strcmp_4=strcmp("--help", argv[(signed long int)i]);
                              if(return_value_strcmp_4 == 0)
                                usage(0);

                              else
                                usage(1);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  signed int return_value_yp_get_default_domain_32;
  return_value_yp_get_default_domain_32=yp_get_default_domain(&domain);
  _Bool tmp_if_expr_33;
  if(domain == ((char *)NULL) || !(return_value_yp_get_default_domain_32 == 0))
    tmp_if_expr_33 = (_Bool)1;

  else
    tmp_if_expr_33 = (signed int)domain[(signed long int)0] == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_35;
  signed int return_value_strcmp_34;
  if(tmp_if_expr_33)
    tmp_if_expr_35 = (_Bool)1;

  else
  {
    return_value_strcmp_34=strcmp(domain, "(none)");
    tmp_if_expr_35 = return_value_strcmp_34 == 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_35)
  {
    if(!(configcheck_only == 0))
    {
      char *return_value_gettext_30;
      return_value_gettext_30=gettext("ERROR: domainname not set.\n");
      fputs(return_value_gettext_30, stderr);
      domain = "(none)";
    }

    else
    {
      char *return_value_gettext_31;
      return_value_gettext_31=gettext("domainname not set - aborting.\n");
      fputs(return_value_gettext_31, stderr);
      exit(1);
    }
  }

  if(!(configcheck_only == 0))
  {
    signed int return_value_load_config_38;
    return_value_load_config_38=load_config(1);
    if(!(return_value_load_config_38 == 0))
    {
      char *return_value_gettext_36;
      return_value_gettext_36=gettext("Config file %s is not ok.\n");
      fprintf(stderr, return_value_gettext_36, configfile);
      exit(1);
    }

    else
    {
      char *return_value_gettext_37;
      return_value_gettext_37=gettext("Config file %s is ok.\n");
      fprintf(stdout, return_value_gettext_37, configfile);
      exit(0);
    }
  }

  unsigned int return_value_getuid_40;
  return_value_getuid_40=getuid();
  if(!(return_value_getuid_40 == 0u))
  {
    char *return_value_gettext_39;
    return_value_gettext_39=gettext("ypbind must be run as root\n");
    fputs(return_value_gettext_39, stderr);
    exit(1);
  }

  signed int return_value_stat_45;
  return_value_stat_45=stat("/var/yp", &st);
  signed int return_value_mkdir_44;
  if(return_value_stat_45 == -1)
  {
    return_value_mkdir_44=mkdir("/var/yp", (unsigned int)(0400 | 0200 | 0400 >> 3 | (0400 >> 3) >> 3 | 0100 | 0100 >> 3 | (0100 >> 3) >> 3));
    if(!(return_value_mkdir_44 >= 0))
    {
      char *return_value_gettext_41;
      return_value_gettext_41=gettext("Could not create %s: %s\n");
      signed int *return_value___errno_location_42;
      return_value___errno_location_42=__errno_location();
      char *return_value_strerror_43;
      return_value_strerror_43=strerror(*return_value___errno_location_42);
      fprintf(stderr, return_value_gettext_41, (const void *)"/var/yp", return_value_strerror_43);
      exit(1);
    }

  }

  signed int return_value_stat_50;
  return_value_stat_50=stat("/var/yp/binding", &st);
  signed int return_value_mkdir_49;
  if(return_value_stat_50 == -1)
  {
    return_value_mkdir_49=mkdir("/var/yp/binding", (unsigned int)(0400 | 0200 | 0400 >> 3 | (0400 >> 3) >> 3 | 0100 | 0100 >> 3 | (0100 >> 3) >> 3));
    if(!(return_value_mkdir_49 >= 0))
    {
      char *return_value_gettext_46;
      return_value_gettext_46=gettext("Could not create %s: %s\n");
      signed int *return_value___errno_location_47;
      return_value___errno_location_47=__errno_location();
      char *return_value_strerror_48;
      return_value_strerror_48=strerror(*return_value___errno_location_47);
      fprintf(stderr, return_value_gettext_46, (const void *)"/var/yp/binding", return_value_strerror_48);
      exit(1);
    }

  }

  signed int return_value_chdir_54;
  return_value_chdir_54=chdir("/var/yp/binding");
  if(!(return_value_chdir_54 >= 0))
  {
    char *return_value_gettext_51;
    return_value_gettext_51=gettext("Could not change to directory %s: %s\n");
    signed int *return_value___errno_location_52;
    return_value___errno_location_52=__errno_location();
    char *return_value_strerror_53;
    return_value_strerror_53=strerror(*return_value___errno_location_52);
    fprintf(stderr, return_value_gettext_51, (const void *)"/var/yp/binding", return_value_strerror_53);
    exit(1);
  }

  if(use_broadcast == 0)
  {
    signed int return_value_load_config_58;
    return_value_load_config_58=load_config(0);
    if(!(return_value_load_config_58 == 0))
    {
      char *return_value_gettext_55;
      return_value_gettext_55=gettext("No NIS server and no -broadcast option specified.\n");
      fputs(return_value_gettext_55, stderr);
      char *return_value_gettext_56;
      return_value_gettext_56=gettext("Add a NIS server to the %s configuration file,\n");
      fprintf(stderr, return_value_gettext_56, configfile);
      char *return_value_gettext_57;
      return_value_gettext_57=gettext("or start ypbind with the -broadcast option.\n");
      fputs(return_value_gettext_57, stderr);
      exit(1);
    }

  }

  else
    add_server(domain, (const char *)(void *)0, 0);
  unlink_bindingdir();
  openlog("ypbind", 0x01, 3 << 3);
  signed int return_value_getdtablesize_66;
  if(!(debug_flag == 0))
  {
    log_msg(7, "[Welcome to ypbind-mt, version %s]\n", (const void *)"1.20.1");
    log_msg(7, "ping interval is %d seconds\n", ping_interval);
  }

  else
  {
    signed int j;
    j=fork();
    if(j >= 1)
      exit(0);

    if(!(j >= 0))
    {
      signed int *return_value___errno_location_59;
      return_value___errno_location_59=__errno_location();
      char *return_value_strerror_60;
      return_value_strerror_60=strerror(*return_value___errno_location_59);
      log_msg(3, "Cannot fork: %s\n", return_value_strerror_60);
      exit(-1);
    }

    signed int return_value_setsid_63;
    return_value_setsid_63=setsid();
    if(return_value_setsid_63 == -1)
    {
      signed int *return_value___errno_location_61;
      return_value___errno_location_61=__errno_location();
      char *return_value_strerror_62;
      return_value_strerror_62=strerror(*return_value___errno_location_61);
      log_msg(3, "Cannot setsid: %s\n", return_value_strerror_62);
      exit(-1);
    }

    j=fork();
    if(j >= 1)
      exit(0);

    if(!(j >= 0))
    {
      signed int *return_value___errno_location_64;
      return_value___errno_location_64=__errno_location();
      char *return_value_strerror_65;
      return_value_strerror_65=strerror(*return_value___errno_location_64);
      log_msg(3, "Cannot fork: %s\n", return_value_strerror_65);
      exit(-1);
    }

    j = 0;
    do
    {
      return_value_getdtablesize_66=getdtablesize();
      if(j >= return_value_getdtablesize_66)
        break;

      close(j);
      j = j + 1;
    }
    while((_Bool)1);
    signed int *return_value___errno_location_67;
    return_value___errno_location_67=__errno_location();
    *return_value___errno_location_67 = 0;
    umask((unsigned int)0);
    j=open("/dev/null", 02);
    dup(j);
    dup(j);
  }
  __nss_configure_lookup("hosts", "files dns");
  sigemptyset(&sigs_to_block);
  sigaddset(&sigs_to_block, 17);
  sigaddset(&sigs_to_block, 15);
  sigaddset(&sigs_to_block, 2);
  sigaddset(&sigs_to_block, 3);
  sigaddset(&sigs_to_block, 11);
  sigaddset(&sigs_to_block, 1);
  sigaddset(&sigs_to_block, 13);
  signed int return_value_pthread_sigmask_69;
  return_value_pthread_sigmask_69=pthread_sigmask(0, &sigs_to_block, (struct anonymous_11 *)(void *)0);
  if(!(return_value_pthread_sigmask_69 == 0))
  {
    char *return_value_gettext_68;
    return_value_gettext_68=gettext("Could not block signals.");
    log_msg(3, return_value_gettext_68);
    exit(1);
  }

  pthread_create(&sig_thread, (const union pthread_attr_t *)(void *)0, sig_handler, (void *)0);
  pthread_mutex_lock(&mutex_pid);
  while(!(pid_is_written >= 1))
    pthread_cond_wait(&cond_pid, &mutex_pid);
  pthread_mutex_unlock(&mutex_pid);
  if(disable_dbus == 0)
  {
    pthread_create(&dbus_thread, (const union pthread_attr_t *)(void *)0, watch_dbus_nm, (void *)0);
    pthread_mutex_lock(&mutex_dbus);
    while(!(dbus_is_initialized >= 1))
      pthread_cond_wait(&cond_dbus, &mutex_dbus);
    pthread_mutex_unlock(&mutex_dbus);
  }

  else
    is_online = 1;
  portmapper_disconnect();
  signed int return_value_portmapper_register_70;
  return_value_portmapper_register_70=portmapper_register();
  if(!(return_value_portmapper_register_70 == 0))
  {
    portmapper_disconnect();
    exit(1);
  }

  if(is_online == 0)
    portmapper_disconnect();

  pthread_create(&ping_thread, (const union pthread_attr_t *)(void *)0, test_bindings, (void *)0);
  svc_run();
  char *return_value_gettext_71;
  return_value_gettext_71=gettext("svc_run returned.");
  log_msg(3, return_value_gettext_71);
  unlink("/var/run/ypbind.pid");
  exit(1);
}

// ping_all
// file serv_list.c line 750
static signed int ping_all(struct binding *list)
{
  struct timeval TIMEOUT50 = { .tv_sec=(signed long int)5, .tv_usec=(signed long int)0 };
  struct timeval TIMEOUT00 = { .tv_sec=(signed long int)0, .tv_usec=(signed long int)0 };
  struct CLIENT *clnt;
  struct findserv_req **pings;
  struct sockaddr_in s_in;
  struct sockaddr_in *any = (struct sockaddr_in *)(void *)0;
  signed int found = -1;
  unsigned int xid_seed;
  unsigned int xid_lookup;
  signed int sock;
  signed int dontblock = 1;
  signed int clnt_res;
  unsigned long int i;
  unsigned long int pings_count = (unsigned long int)0;
  struct cu_data *cu;
  char *ping_all__1__domain = list->domain;
  _Bool tmp_if_expr_4;
  char *return_value_gettext_5;
  unsigned short int return_value_ntohs_9;
  char *return_value_gettext_10;
  char *return_value_gettext_13;
  if(list->server[0l].host == ((char *)NULL))
    return 0;

  else
  {
    pthread_rdwr_wlock_np(&domainlock);
    list->active = -1;
    pthread_rdwr_wunlock_np(&domainlock);
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct findserv_req *) /*8ul*/  * (unsigned long int)30);
    pings = (struct findserv_req **)return_value_malloc_1;
    if(pings == ((struct findserv_req **)NULL))
      return 0;

    else
    {
      signed long int return_value_time_2;
      return_value_time_2=time((signed long int *)(void *)0);
      signed int return_value_getpid_3;
      return_value_getpid_3=getpid();
      xid_seed = (unsigned int)(return_value_time_2 ^ (signed long int)return_value_getpid_3);
      i = (unsigned long int)0;
      do
      {
        if(!(i >= 30ul))
          tmp_if_expr_4 = list->server[(signed long int)i].host != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_4 = (_Bool)0;
        if(!tmp_if_expr_4)
          break;

        if(!(debug_flag == 0))
        {
          return_value_gettext_5=gettext("ping host '%s', domain '%s'");
          log_msg(7, return_value_gettext_5, list->server[(signed long int)i].host, (const void *)list->domain);
        }

        memset((void *)&s_in, 0, sizeof(struct sockaddr_in) /*16ul*/ );
        memcpy((void *)&s_in.sin_addr, (const void *)&list->server[(signed long int)i].addr, sizeof(struct in_addr) /*4ul*/ );
        s_in.sin_family = list->server[(signed long int)i].family;
        unsigned short int return_value___pmap_getport_6;
        return_value___pmap_getport_6=__pmap_getport(&s_in, (unsigned long int)100004, (unsigned long int)2, (unsigned int)17);
        s_in.sin_port=htons(return_value___pmap_getport_6);
        if(broken_server == 0)
        {
          return_value_ntohs_9=ntohs(s_in.sin_port);
          if((signed int)return_value_ntohs_9 >= 1024)
          {
            char *return_value_gettext_7;
            return_value_gettext_7=gettext("Answer for domain '%s' from '%s' on illegal port %d.");
            unsigned short int return_value_ntohs_8;
            return_value_ntohs_8=ntohs(s_in.sin_port);
            log_msg(3, return_value_gettext_7, (const void *)list->domain, list->server[(signed long int)i].host, return_value_ntohs_8);
            goto __CPROVER_DUMP_L10;
          }

        }

        list->server[(signed long int)i].port = s_in.sin_port;
        if((signed int)s_in.sin_port == 0)
        {
          if(!(debug_flag == 0))
          {
            return_value_gettext_10=gettext("host '%s' doesn't answer.");
            log_msg(7, return_value_gettext_10, list->server[(signed long int)i].host);
          }

          goto __CPROVER_DUMP_L10;
        }

        void *return_value_calloc_11;
        return_value_calloc_11=calloc((unsigned long int)1, sizeof(struct findserv_req) /*24ul*/ );
        pings[(signed long int)pings_count] = (struct findserv_req *)return_value_calloc_11;
        memcpy((void *)&pings[(signed long int)pings_count]->sin, (const void *)&s_in, sizeof(struct sockaddr_in) /*16ul*/ );
        any = &pings[(signed long int)pings_count]->sin;
        pings[(signed long int)pings_count]->xid = xid_seed;
        pings[(signed long int)pings_count]->server_nr = (unsigned int)i;
        xid_seed = xid_seed + 1u;
        pings_count = pings_count + 1ul;

      __CPROVER_DUMP_L10:
        ;
        i = i + 1ul;
      }
      while((_Bool)1);
      if(pings_count == 0ul)
      {
        free((void *)pings);
        return 0;
      }

      else
      {
        sock=socket(2, 2, 17);
        clnt=clntudp_create(any, (unsigned long int)100004, (unsigned long int)2, TIMEOUT50, &sock);
        if(clnt == ((struct CLIENT *)NULL))
        {
          close(sock);
          i = (unsigned long int)0;
          for( ; !(i >= pings_count); i = i + 1ul)
            free((void *)pings[(signed long int)i]);
          free((void *)pings);
          return 0;
        }

        else
        {
          clnt->cl_auth=authunix_create_default();
          cu = (struct cu_data *)clnt->cl_private;
          clnt->cl_ops->cl_control(clnt, 1, (char *)&TIMEOUT00);
          ioctl(sock, (unsigned long int)0x5421, &dontblock);
          i = (unsigned long int)0;
          if(!(i >= pings_count))
          {
            *((unsigned int *)cu->cu_outbuf) = pings[(signed long int)i]->xid - (unsigned int)1;
            memcpy((void *)&cu->cu_raddr, (const void *)&pings[(signed long int)i]->sin, sizeof(struct sockaddr_in) /*16ul*/ );
            memset((void *)&clnt_res, 0, sizeof(signed int) /*4ul*/ );
            clnt->cl_ops->cl_call(clnt, (unsigned long int)2, (signed int (*)(struct XDR *, void *, ...))ypbind_xdr_domainname, (char *)&ping_all__1__domain, (signed int (*)(struct XDR *, void *, ...))xdr_bool, (char *)&clnt_res, TIMEOUT00);
            i = i + 1ul;
          }

          memset((void *)(char *)&clnt_res, 0, sizeof(signed int) /*4ul*/ );
          clnt->cl_ops->cl_call(clnt, (unsigned long int)2, (signed int (*)(struct XDR *, void *, ...))(void *)0, (char *)(void *)0, (signed int (*)(struct XDR *, void *, ...))xdr_bool, (char *)&clnt_res, TIMEOUT00);
          xid_lookup = *((unsigned int *)cu->cu_inbuf);
          close(sock);
          i = (unsigned long int)0;
          if(!(i >= pings_count))
          {
            if(pings[(signed long int)i]->xid == xid_lookup)
            {
              pthread_rdwr_wlock_np(&domainlock);
              sock = -1;
              list->client_handle=clntudp_create(&pings[(signed long int)i]->sin, (unsigned long int)100004, (unsigned long int)2, TIMEOUT50, &sock);
              if(list->client_handle == ((struct CLIENT *)NULL))
              {
                char *return_value_gettext_12;
                return_value_gettext_12=gettext("Server '%s' for domain '%s' answered ping but failed to bind");
                log_msg(7, return_value_gettext_12, list->server[(signed long int)list->active].host, ping_all__1__domain);
              }

              else
              {
                list->active = (signed int)pings[(signed long int)i]->server_nr;
                pthread_rdwr_wunlock_np(&domainlock);
                pthread_rdwr_rlock_np(&domainlock);
                update_bindingfile(list);
                pthread_rdwr_runlock_np(&domainlock);
                if(!(debug_flag == 0))
                {
                  return_value_gettext_13=gettext("Answer for domain '%s' from server '%s'");
                  log_msg(7, return_value_gettext_13, ping_all__1__domain, list->server[(signed long int)list->active].host);
                }

                found = 1;
              }
            }

            i = i + 1ul;
          }

          clnt->cl_auth->ah_ops->ah_destroy(clnt->cl_auth);
          clnt->cl_ops->cl_destroy(clnt);
          i = (unsigned long int)0;
          if(!(i >= pings_count))
          {
            free((void *)pings[(signed long int)i]);
            i = i + 1ul;
          }

          free((void *)pings);
          if(found == 0)
            remove_bindingfile(list->domain);

          return found;
        }
      }
    }
  }
}

// portmapper_connect
// file ypbind-mt.c line 501
signed int portmapper_connect(void)
{
  pmap_set((const unsigned long int)100007, (const unsigned long int)2, 17, (unsigned short int)portmapper_udp_port);
  pmap_set((const unsigned long int)100007, (const unsigned long int)1, 17, (unsigned short int)portmapper_udp_port);
  pmap_set((const unsigned long int)100007, (const unsigned long int)2, 6, (unsigned short int)portmapper_tcp_port);
  pmap_set((const unsigned long int)100007, (const unsigned long int)1, 6, (unsigned short int)portmapper_tcp_port);
  return 0;
}

// portmapper_disconnect
// file ypbind-mt.c line 491
void portmapper_disconnect(void)
{
  pmap_unset((const unsigned long int)100007, (const unsigned long int)1);
  pmap_unset((const unsigned long int)100007, (const unsigned long int)2);
}

// portmapper_register
// file ypbind-mt.c line 511
static signed int portmapper_register(void)
{
  struct sockaddr_in socket_address;
  struct SVCXPRT *transp;
  signed int sock;
  signed int result;
  if(port >= 0 || !(local_only == 0))
  {
    sock=socket(2, 2, 0);
    if(!(sock >= 0))
    {
      char *return_value_gettext_1;
      return_value_gettext_1=gettext("Cannot create UDP: %s");
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      char *return_value_strerror_3;
      return_value_strerror_3=strerror(*return_value___errno_location_2);
      log_msg(3, return_value_gettext_1, return_value_strerror_3);
      return 1;
    }

    memset((void *)(char *)&socket_address, 0, sizeof(struct sockaddr_in) /*16ul*/ );
    socket_address.sin_family = (unsigned short int)2;
    if(!(local_only == 0))
      socket_address.sin_addr.s_addr=htonl((unsigned int)0x7f000001);

    else
      socket_address.sin_addr.s_addr=htonl((unsigned int)0x00000000);
    if(port >= 0)
      socket_address.sin_port=htons((unsigned short int)port);

    result=bind(sock, (struct sockaddr *)&socket_address, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
    if(!(result >= 0))
    {
      char *return_value_gettext_4;
      return_value_gettext_4=gettext("Cannot bind UDP: %s");
      signed int *return_value___errno_location_5;
      return_value___errno_location_5=__errno_location();
      char *return_value_strerror_6;
      return_value_strerror_6=strerror(*return_value___errno_location_5);
      log_msg(3, return_value_gettext_4, return_value_strerror_6);
      return 1;
    }

  }

  else
    sock = -1;
  transp=svcudp_create(sock);
  if(transp == ((struct SVCXPRT *)NULL))
  {
    char *return_value_gettext_7;
    return_value_gettext_7=gettext("Cannot create udp service.");
    log_msg(3, return_value_gettext_7);
    return 1;
  }

  portmapper_udp_port = (signed int)transp->xp_port;
  signed int return_value_svc_register_9;
  return_value_svc_register_9=svc_register(transp, (unsigned long int)100007, (unsigned long int)2, ypbindprog_2, (unsigned long int)17);
  if(return_value_svc_register_9 == 0)
  {
    char *return_value_gettext_8;
    return_value_gettext_8=gettext("Unable to register (YPBINDPROG, YPBINDVERS, udp).");
    log_msg(3, return_value_gettext_8);
    return 1;
  }

  signed int return_value_svc_register_11;
  return_value_svc_register_11=svc_register(transp, (unsigned long int)100007, (unsigned long int)1, ypbindprog_1, (unsigned long int)17);
  if(return_value_svc_register_11 == 0)
  {
    char *return_value_gettext_10;
    return_value_gettext_10=gettext("Unable to register (YPBINDPROG, YPBINDOLDVERS, udp).");
    log_msg(3, return_value_gettext_10);
    return 1;
  }

  if(port >= 0 || !(local_only == 0))
  {
    sock=socket(2, 1, 0);
    if(!(sock >= 0))
    {
      char *return_value_gettext_12;
      return_value_gettext_12=gettext("Cannot create TCP: %s");
      signed int *return_value___errno_location_13;
      return_value___errno_location_13=__errno_location();
      char *return_value_strerror_14;
      return_value_strerror_14=strerror(*return_value___errno_location_13);
      log_msg(3, return_value_gettext_12, return_value_strerror_14);
      return 1;
    }

    memset((void *)&socket_address, 0, sizeof(struct sockaddr_in) /*16ul*/ );
    socket_address.sin_family = (unsigned short int)2;
    if(!(local_only == 0))
      socket_address.sin_addr.s_addr=htonl((unsigned int)0x7f000001);

    else
      socket_address.sin_addr.s_addr=htonl((unsigned int)0x00000000);
    if(port >= 0)
      socket_address.sin_port=htons((unsigned short int)port);

    result=bind(sock, (struct sockaddr *)&socket_address, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
    if(!(result >= 0))
    {
      char *return_value_gettext_15;
      return_value_gettext_15=gettext("Cannot bind TCP: %s");
      signed int *return_value___errno_location_16;
      return_value___errno_location_16=__errno_location();
      char *return_value_strerror_17;
      return_value_strerror_17=strerror(*return_value___errno_location_16);
      log_msg(3, return_value_gettext_15, return_value_strerror_17);
      return 1;
    }

  }

  else
    sock = -1;
  transp=svctcp_create(sock, (unsigned int)0, (unsigned int)0);
  if(transp == ((struct SVCXPRT *)NULL))
  {
    char *return_value_gettext_18;
    return_value_gettext_18=gettext("Cannot create tcp service.\n");
    log_msg(3, return_value_gettext_18);
    return 1;
  }

  portmapper_tcp_port = (signed int)transp->xp_port;
  signed int return_value_svc_register_20;
  return_value_svc_register_20=svc_register(transp, (unsigned long int)100007, (unsigned long int)2, ypbindprog_2, (unsigned long int)6);
  if(return_value_svc_register_20 == 0)
  {
    char *return_value_gettext_19;
    return_value_gettext_19=gettext("Unable to register (YPBINDPROG, YPBINDVERS, tcp).");
    log_msg(3, return_value_gettext_19);
    return 1;
  }

  signed int return_value_svc_register_22;
  return_value_svc_register_22=svc_register(transp, (unsigned long int)100007, (unsigned long int)1, ypbindprog_1, (unsigned long int)6);
  if(return_value_svc_register_22 == 0)
  {
    char *return_value_gettext_21;
    return_value_gettext_21=gettext("Unable to register (YPBINDPROG, YPBINDOLDVERS, tcp).");
    log_msg(3, return_value_gettext_21);
    return 1;
  }

  return 0;
}

// pthread_rdwr_init_np
// file pthread_np.c line 25
signed int pthread_rdwr_init_np(struct anonymous_14 *rdwrp)
{
  rdwrp->readers = 0;
  rdwrp->writers = 0;
  rdwrp->wishwrite = 0;
  pthread_mutex_init(&rdwrp->mutex, (const union anonymous_12 *)(void *)0);
  pthread_cond_init(&rdwrp->lock_free, (const union anonymous_12 *)(void *)0);
  return 0;
}

// pthread_rdwr_rlock_np
// file pthread_np.h line 39
signed int pthread_rdwr_rlock_np(struct anonymous_14 *rdwrp)
{
  pthread_mutex_lock(&rdwrp->mutex);
  while((_Bool)1)
  {
    if(rdwrp->writers == 0)
    {
      if(rdwrp->wishwrite == 0)
        goto __CPROVER_DUMP_L3;

    }

    pthread_cond_wait(&rdwrp->lock_free, &rdwrp->mutex);
  }

__CPROVER_DUMP_L3:
  ;
  rdwrp->readers = rdwrp->readers + 1;
  pthread_mutex_unlock(&rdwrp->mutex);
  return 0;
}

// pthread_rdwr_runlock_np
// file pthread_np.h line 41
signed int pthread_rdwr_runlock_np(struct anonymous_14 *rdwrp)
{
  signed int status;
  pthread_mutex_lock(&rdwrp->mutex);
  if(rdwrp->readers == 0)
    status = -1;

  else
  {
    rdwrp->readers = rdwrp->readers - 1;
    if(rdwrp->readers == 0)
      pthread_cond_signal(&rdwrp->lock_free);

    status = 0;
  }
  pthread_mutex_unlock(&rdwrp->mutex);
  return status;
}

// pthread_rdwr_wlock_np
// file pthread_np.h line 40
signed int pthread_rdwr_wlock_np(struct anonymous_14 *rdwrp)
{
  pthread_mutex_lock(&rdwrp->mutex);
  rdwrp->wishwrite = rdwrp->wishwrite + 1;
  while((_Bool)1)
  {
    if(rdwrp->writers == 0)
    {
      if(rdwrp->readers == 0)
        goto __CPROVER_DUMP_L3;

    }

    pthread_cond_wait(&rdwrp->lock_free, &rdwrp->mutex);
  }

__CPROVER_DUMP_L3:
  ;
  rdwrp->writers = rdwrp->writers + 1;
  rdwrp->wishwrite = rdwrp->wishwrite - 1;
  pthread_mutex_unlock(&rdwrp->mutex);
  return 0;
}

// pthread_rdwr_wunlock_np
// file pthread_np.h line 42
signed int pthread_rdwr_wunlock_np(struct anonymous_14 *rdwrp)
{
  signed int status;
  pthread_mutex_lock(&rdwrp->mutex);
  if(rdwrp->writers == 0)
    status = -1;

  else
  {
    rdwrp->writers = 0;
    pthread_cond_broadcast(&rdwrp->lock_free);
    status = 0;
  }
  pthread_mutex_unlock(&rdwrp->mutex);
  return status;
}

// query_slp
// file local.h line 19
extern signed int query_slp(const char *domain)
{
  struct slpcb *cb;
  struct slpcb callbackres = { .srvurl=(char *)(void *)0, .err=0, .next=(struct slpcb *)(void *)0 };
  signed int err;
  void *hslp;
  signed int found = 0;
  err=SLPOpen("en", (enum anonymous_15)SLP_FALSE, &hslp);
  if(!(err == 0))
  {
    char *return_value_gettext_1;
    return_value_gettext_1=gettext("Error opening SLP handle: %i.");
    log_msg(3, return_value_gettext_1, err);
    return 0;
  }

  err=SLPFindSrvs(hslp, "ypserv", ((const char *)NULL), ((const char *)NULL), MySLPSrvURLCallback, (void *)&callbackres);
  if(!(callbackres.err == 0) || !(err == 0))
  {
    char *return_value_gettext_2;
    return_value_gettext_2=gettext("No service found with SLP.");
    log_msg(3, return_value_gettext_2);
    return 0;
  }

  SLPClose(hslp);
  cb = &callbackres;
  _Bool tmp_if_expr_5;
  unsigned long int return_value_strlen_3;
  unsigned long int return_value_strlen_4;
  while(!(cb == ((struct slpcb *)NULL)))
  {
    if(!(cb->srvurl == ((char *)NULL)))
    {
      char *hostp;
      hostp=strstr(cb->srvurl, "://");
      char *cp;
      if(hostp == ((char *)NULL))
        tmp_if_expr_5 = (_Bool)1;

      else
      {
        return_value_strlen_3=strlen(hostp);
        return_value_strlen_4=strlen("://");
        tmp_if_expr_5 = return_value_strlen_3 < return_value_strlen_4 + (unsigned long int)1 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_5)
      {
        free((void *)cb->srvurl);
        continue;
      }

      unsigned long int return_value_strlen_6;
      return_value_strlen_6=strlen("://");
      hostp = hostp + (signed long int)return_value_strlen_6;
      cp=strrchr(hostp, 47);
      if(!(cp == ((char *)NULL)))
        *cp = (char)0;

      cp=strchr(hostp, 58);
      if(!(cp == ((char *)NULL)))
        *cp = (char)0;

      signed int return_value_add_server_7;
      return_value_add_server_7=add_server(domain, hostp, 0);
      if(!(return_value_add_server_7 == 0))
      {
        log_msg(6, "SLP: found server %s for domain %s.", hostp, domain);
        found = found + 1;
      }

      free((void *)cb->srvurl);
    }

    cb = cb->next;
  }
  return found;
}

// remove_bindingfile
// file serv_list.c line 93
static void remove_bindingfile(const char *domain_name)
{
  signed long int remove_bindingfile_array_size0;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen("/var/yp/binding");
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(domain_name);
  remove_bindingfile_array_size0 = (signed long int)(return_value_strlen_1 + return_value_strlen_2 + (unsigned long int)10);
  char path[remove_bindingfile_array_size0];
  sprintf(path, "%s/%s.1", (const void *)"/var/yp/binding", domain_name);
  unlink(path);
  sprintf(path, "%s/%s.2", (const void *)"/var/yp/binding", domain_name);
  unlink(path);
}

// sig_handler
// file ypbind-mt.c line 383
static void * sig_handler(void *v_param)
{
  struct flock lock;
  struct anonymous_11 sigs_to_catch;
  signed int caught;
  create_pidfile();
  pthread_mutex_lock(&mutex_pid);
  pid_is_written = 1;
  pthread_cond_broadcast(&cond_pid);
  pthread_mutex_unlock(&mutex_pid);
  sigemptyset(&sigs_to_catch);
  sigaddset(&sigs_to_catch, 17);
  sigaddset(&sigs_to_catch, 15);
  sigaddset(&sigs_to_catch, 2);
  sigaddset(&sigs_to_catch, 3);
  sigaddset(&sigs_to_catch, 11);
  sigaddset(&sigs_to_catch, 1);
  char *return_value_gettext_1;
  char *return_value_gettext_2;
  char *return_value_gettext_3;
  signed int return_value_fcntl_5;
  char *return_value_gettext_4;
  char *return_value_gettext_6;
  char *return_value_gettext_7;
  char *return_value_gettext_8;
  while((_Bool)1)
  {
    signed int ret;
    ret=sigwait(&sigs_to_catch, &caught);
    if(!(ret == 0))
    {
      if(!(ret == 4))
      {
        return_value_gettext_1=gettext("sigwait failed: ret=%d.");
        log_msg(3, return_value_gettext_1, ret);
      }

      continue;
    }

    switch(caught)
    {
      case 17:
      {
        return_value_gettext_2=gettext("SIGCHLD arrived, what should I do ?");
        log_msg(3, return_value_gettext_2);
        break;
      }
      case 15:

      case 2:

      case 3:

      case 11:
      {
        if(!(debug_flag == 0))
        {
          return_value_gettext_3=gettext("Signal (%d) for quitting program arrived.");
          log_msg(7, return_value_gettext_3, caught);
        }

        portmapper_disconnect();
        lock.l_type = (signed short int)2;
        lock.l_start = (signed long int)0;
        lock.l_whence = (signed short int)0;
        lock.l_len = (signed long int)0;
        return_value_fcntl_5=fcntl(lock_fd, 6, &lock);
        if(!(return_value_fcntl_5 == 0))
        {
          return_value_gettext_4=gettext("cannot unlock pidfile");
          log_msg(3, return_value_gettext_4);
        }

        close(lock_fd);
        unlink("/var/run/ypbind.pid");
        unlink_bindingdir();
        exit(0);
        break;
      }
      case 1:
      {
        if(!(debug_flag == 0))
        {
          return_value_gettext_6=gettext("SIGHUP arrived, reloading config file.");
          log_msg(7, return_value_gettext_6);
        }

        clear_server();
        if(!(use_broadcast == 0))
          add_server(domain, (const char *)(void *)0, 0);

        else
          load_config(0);
        if(!(ping_interval >= 1))
          do_binding();

        break;
      }
      case 13:
      {
        if(!(debug_flag == 0))
        {
          return_value_gettext_7=gettext("Ignoring SIGPIPE.");
          log_msg(7, return_value_gettext_7);
        }

        break;
      }
      default:
      {
        return_value_gettext_8=gettext("Unknown signal: %d");
        log_msg(3, return_value_gettext_8, caught);
      }
    }
  }
}

// test_bindings
// file local.h line 21
extern void * test_bindings(void *param)
{
  signed int lastcheck = 0;
  if(!(is_online == 0))
    do_binding();

  static signed int success = 0;
  if(!(ping_interval >= 1))
    pthread_exit((void *)&success);

  while((_Bool)1)
  {
    sleep((unsigned int)ping_interval);
    if(!(ping_interval >= 1))
      pthread_exit((void *)&success);

    lastcheck = lastcheck + ping_interval;
    if(lastcheck >= 900)
      lastcheck = 0;

    if(!(is_online == 0))
      lastcheck=test_bindings_once(lastcheck, (const char *)(void *)0);

  }
}

// test_bindings_once
// file local.h line 22
extern signed int test_bindings_once(signed int lastcheck, const char *req_domain)
{
  signed int i;
  pthread_rdwr_wlock_np(&domainlock);
  char *return_value_gettext_1;
  char *return_value_gettext_2;
  if(!(debug_flag == 0))
  {
    if(!(lastcheck == 0))
    {
      return_value_gettext_1=gettext("Pinging all active servers.");
      log_msg(7, return_value_gettext_1);
    }

    else
    {
      return_value_gettext_2=gettext("Checking for new fastest server.");
      log_msg(7, return_value_gettext_2);
    }
  }

  i = 0;
  signed int return_value_strcmp_4;
  char *return_value_gettext_3;
  _Bool tmp_if_expr_10;
  char *return_value_gettext_5;
  char *return_value_gettext_6;
  char *return_value_inet_ntoa_7;
  char *return_value_gettext_8;
  for( ; !(i >= max_domains); i = i + 1)
  {
    char *test_bindings_once__1__2__domain = (domainlist + (signed long int)i)->domain;
    signed int out = 1;
    enum clnt_stat status = (enum clnt_stat)RPC_SUCCESS;
    if(!(req_domain == ((const char *)NULL)))
    {
      return_value_strcmp_4=strcmp(test_bindings_once__1__2__domain, req_domain);
      if(!(return_value_strcmp_4 == 0))
      {
        if(!(debug_flag == 0))
        {
          return_value_gettext_3=gettext("Requested domain %s, found %s, ignored.");
          log_msg(7, return_value_gettext_3, req_domain, test_bindings_once__1__2__domain);
        }

        goto __CPROVER_DUMP_L25;
      }

    }

    if((domainlist + (signed long int)i)->client_handle == ((struct CLIENT *)NULL))
    {
      if(!((domainlist + (signed long int)i)->active == -1))
      {
        log_msg(3, "ALERT: active=%d, but client_handle is NULL!", (domainlist + (signed long int)i)->active);
        (domainlist + (signed long int)i)->active = -1;
      }

    }

    if(!((domainlist + (signed long int)i)->active == -1))
    {
      if(!(lastcheck == 0))
      {
        struct timeval time_out;
        time_out.tv_sec = (signed long int)3;
        time_out.tv_usec = (signed long int)0;
        status=(domainlist + (signed long int)i)->client_handle->cl_ops->cl_call((domainlist + (signed long int)i)->client_handle, (unsigned long int)1, (signed int (*)(struct XDR *, void *, ...))ypbind_xdr_domainname, (char *)&test_bindings_once__1__2__domain, (signed int (*)(struct XDR *, void *, ...))xdr_bool, (char *)&out, time_out);
      }

      if(lastcheck == 0)
        tmp_if_expr_10 = (domainlist + (signed long int)i)->active != -2 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_10 = (_Bool)0;
      if(!(out == 1) || !((signed int)status == RPC_SUCCESS) || tmp_if_expr_10)
      {
        if(!(debug_flag == 0) && !(lastcheck == 0))
        {
          if(!((domainlist + (signed long int)i)->use_broadcast == 0))
          {
            return_value_gettext_5=gettext("Server for domain '%s' doesn't answer.");
            log_msg(7, return_value_gettext_5, test_bindings_once__1__2__domain);
          }

          else
            if((domainlist + (signed long int)i)->active == -2)
            {
              return_value_gettext_6=gettext("Server '%s' for domain '%s' doesn't answer.");
              return_value_inet_ntoa_7=inet_ntoa((domainlist + (signed long int)i)->ypset.addr);
              log_msg(7, return_value_gettext_6, return_value_inet_ntoa_7, test_bindings_once__1__2__domain);
            }

            else
            {
              return_value_gettext_8=gettext("Server '%s' for domain '%s' doesn't answer.");
              log_msg(7, return_value_gettext_8, (domainlist + (signed long int)i)->server[(signed long int)(domainlist + (signed long int)i)->active].host, test_bindings_once__1__2__domain);
            }
        }

        if((domainlist + (signed long int)i)->client_handle == ((struct CLIENT *)NULL))
          log_msg(3, "ALERT: client_handle=NULL, active=%d, lastcheck=%d, domain=%s", (domainlist + (signed long int)i)->active, lastcheck, test_bindings_once__1__2__domain);

        else
          (domainlist + (signed long int)i)->client_handle->cl_ops->cl_destroy((domainlist + (signed long int)i)->client_handle);
        (domainlist + (signed long int)i)->client_handle = (struct CLIENT *)(void *)0;
        if((domainlist + (signed long int)i)->active == -2)
        {
          if(!((domainlist + (signed long int)i)->ypset.host == ((char *)NULL)))
            free((void *)(domainlist + (signed long int)i)->ypset.host);

          (domainlist + (signed long int)i)->ypset.host = (char *)(void *)0;
        }

        (domainlist + (signed long int)i)->active = -1;
        lastcheck = 0;
        pthread_rdwr_wunlock_np(&domainlock);
        pthread_mutex_lock(&search_lock);
        signed int return_value_ping_all_9;
        return_value_ping_all_9=ping_all(&domainlist[(signed long int)i]);
        if(return_value_ping_all_9 == 0)
        {
          if(!((domainlist + (signed long int)i)->use_broadcast == 0))
            do_broadcast(&domainlist[(signed long int)i]);

        }

        pthread_mutex_unlock(&search_lock);
        pthread_rdwr_wlock_np(&domainlock);
      }

    }

    else
    {
      pthread_rdwr_wunlock_np(&domainlock);
      pthread_mutex_lock(&search_lock);
      signed int return_value_ping_all_11;
      return_value_ping_all_11=ping_all(&domainlist[(signed long int)i]);
      if(return_value_ping_all_11 == 0)
      {
        if(!((domainlist + (signed long int)i)->use_broadcast == 0))
          do_broadcast(&domainlist[(signed long int)i]);

      }

      pthread_mutex_unlock(&search_lock);
      pthread_rdwr_wlock_np(&domainlock);
    }

  __CPROVER_DUMP_L25:
    ;
  }
  pthread_rdwr_wunlock_np(&domainlock);
  return lastcheck;
}

// unlink_bindingdir
// file ypbind-mt.c line 83
static void unlink_bindingdir(void)
{
  struct __dirstream *dird;
  char path[4096l];
  struct dirent *dirp;
  dird=opendir("/var/yp/binding");
  signed int return_value_strcmp_2;
  signed int return_value_strcmp_1;
  if(!(dird == ((struct __dirstream *)NULL)))
  {
    do
    {
      dirp=readdir(dird);
      if(dirp == ((struct dirent *)NULL))
        break;

      return_value_strcmp_2=strcmp(dirp->d_name, ".");
      if(!(return_value_strcmp_2 == 0))
      {
        return_value_strcmp_1=strcmp(dirp->d_name, "..");
        if(!(return_value_strcmp_1 == 0))
        {
          snprintf(path, (unsigned long int)4096, "%s/%s", (const void *)"/var/yp/binding", (const void *)dirp->d_name);
          unlink(path);
        }

      }

    }
    while((_Bool)1);
    closedir(dird);
  }

}

// update_bindingfile
// file serv_list.c line 106
static void update_bindingfile(struct binding *entry)
{
  unsigned short int sport = (unsigned short int)port;
  struct iovec iov[2l];
  struct ypbind_resp ybres;
  char path1[4097l];
  char path2[4097l];
  signed int fd;
  signed int len;
  sprintf(path1, "%s/%s.1", (const void *)"/var/yp/binding", (const void *)entry->domain);
  sprintf(path2, "%s/%s.2", (const void *)"/var/yp/binding", (const void *)entry->domain);
  iov[(signed long int)0].iov_base = (void *)(char *)&sport;
  iov[(signed long int)0].iov_len = sizeof(unsigned short int) /*2ul*/ ;
  iov[(signed long int)1].iov_base = (void *)(char *)&ybres;
  iov[(signed long int)1].iov_len = sizeof(struct ypbind_resp) /*16ul*/ ;
  memset((void *)&ybres, 0, sizeof(struct ypbind_resp) /*16ul*/ );
  ybres.ypbind_status = (enum ypbind_resptype)YPBIND_SUCC_VAL;
  if(entry->active >= 0)
  {
    memcpy((void *)&ybres.ypbind_resp_u.ypbind_bindinfo.ypbind_binding_addr, (const void *)&entry->server[(signed long int)entry->active].addr, sizeof(struct in_addr) /*4ul*/ );
    memcpy((void *)&ybres.ypbind_resp_u.ypbind_bindinfo.ypbind_binding_port, (const void *)&entry->server[(signed long int)entry->active].port, sizeof(unsigned short int) /*2ul*/ );
  }

  else
    if(entry->active == -2)
    {
      memcpy((void *)&ybres.ypbind_resp_u.ypbind_bindinfo.ypbind_binding_addr, (const void *)&entry->ypset.addr, sizeof(struct in_addr) /*4ul*/ );
      memcpy((void *)&ybres.ypbind_resp_u.ypbind_bindinfo.ypbind_binding_port, (const void *)&entry->ypset.port, sizeof(unsigned short int) /*2ul*/ );
    }

    else
    {
      unlink(path1);
      unlink(path2);
      log_msg(3, "INTERNAL ERROR: update_bindingfile called without valid data!");
      goto __CPROVER_DUMP_L10;
    }
  len = (signed int)(iov[(signed long int)0].iov_len + iov[(signed long int)1].iov_len);
  fd=open(path1, 0100 | 02 | 01000, 0400 | 0200 | 0400 >> 3 | (0400 >> 3) >> 3);
  signed int *return_value___errno_location_4;
  char *return_value_strerror_5;
  if(!(fd == -1))
  {
    signed long int return_value_writev_3;
    return_value_writev_3=writev(fd, iov, 2);
    if(!(return_value_writev_3 == (signed long int)len))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      char *return_value_strerror_2;
      return_value_strerror_2=strerror(*return_value___errno_location_1);
      log_msg(3, "writev (%s): %s", (const void *)path1, return_value_strerror_2);
      unlink(path1);
    }

    close(fd);
  }

  else
  {
    return_value___errno_location_4=__errno_location();
    return_value_strerror_5=strerror(*return_value___errno_location_4);
    log_msg(3, "open(%s): %s", (const void *)path1, return_value_strerror_5);
  }
  fd=open(path2, 0100 | 02 | 01000, 0400 | 0200 | 0400 >> 3 | (0400 >> 3) >> 3);
  signed int *return_value___errno_location_9;
  char *return_value_strerror_10;
  if(!(fd == -1))
  {
    signed long int return_value_writev_8;
    return_value_writev_8=writev(fd, iov, 2);
    if(!(return_value_writev_8 == (signed long int)len))
    {
      signed int *return_value___errno_location_6;
      return_value___errno_location_6=__errno_location();
      char *return_value_strerror_7;
      return_value_strerror_7=strerror(*return_value___errno_location_6);
      log_msg(3, "writev (%s): %s", (const void *)path2, return_value_strerror_7);
      unlink(path2);
    }

    close(fd);
  }

  else
  {
    return_value___errno_location_9=__errno_location();
    return_value_strerror_10=strerror(*return_value___errno_location_9);
    log_msg(3, "open(%s): %s", (const void *)path2, return_value_strerror_10);
  }

__CPROVER_DUMP_L10:
  ;
}

// usage
// file ypbind-mt.c line 471
static void usage(signed int ret)
{
  struct _IO_FILE *output;
  if(!(ret == 0))
    output = stderr;

  else
    output = stdout;
  char *return_value_gettext_1;
  return_value_gettext_1=gettext("Usage:\n");
  fputs(return_value_gettext_1, output);
  char *return_value_gettext_2;
  return_value_gettext_2=gettext("\typbind [-broadcast | -ypset | -ypsetme] [-p port] [-f configfile]\n\t  [-no-ping] [-broken-server] [-local-only] [-i ping-interval] [-debug]\n");
  fputs(return_value_gettext_2, output);
  char *return_value_gettext_3;
  return_value_gettext_3=gettext("\t  [-no-dbus]\n");
  fputs(return_value_gettext_3, output);
  char *return_value_gettext_4;
  return_value_gettext_4=gettext("\typbind -c [-f configfile]\n");
  fputs(return_value_gettext_4, output);
  char *return_value_gettext_5;
  return_value_gettext_5=gettext("\typbind --version\n");
  fputs(return_value_gettext_5, output);
  exit(ret);
}

// watch_dbus_nm
// file local.h line 25
extern void * watch_dbus_nm(void *param)
{
  struct _GMainLoop *loop;
  signed int dbus_init_ret;
  g_type_init();
  dbus_init_ret=dbus_init();
  if(!(dbus_init_ret == 1))
  {
    log_msg(7, "Assuming online mode\n");
    is_online = 1;
  }

  pthread_mutex_lock(&mutex_dbus);
  dbus_is_initialized = 1;
  pthread_cond_broadcast(&cond_dbus);
  pthread_mutex_unlock(&mutex_dbus);
  static signed int status = 1;
  if(!(dbus_init_ret == 1))
  {
    status = 0;
    return (void *)&status;
  }

  else
  {
    loop=g_main_loop_new((struct _GMainContext *)(void *)0, 0);
    g_main_loop_run(loop);
    return (void *)&status;
  }
}

// ypbind_xdr_binding
// file ypbind_xdr.c line 21
extern signed int ypbind_xdr_binding(struct XDR *xdrs, struct ypbind_binding *objp)
{
  signed int return_value_xdr_opaque_1;
  return_value_xdr_opaque_1=xdr_opaque(xdrs, objp->ypbind_binding_addr, (unsigned int)4);
  if(return_value_xdr_opaque_1 == 0)
    return 0;

  else
  {
    signed int return_value_xdr_opaque_2;
    return_value_xdr_opaque_2=xdr_opaque(xdrs, objp->ypbind_binding_port, (unsigned int)2);
    if(return_value_xdr_opaque_2 == 0)
      return 0;

    else
      return 1;
  }
}

// ypbind_xdr_domainname
// file ypbind_xdr.c line 5
extern signed int ypbind_xdr_domainname(struct XDR *xdrs, char **objp)
{
  signed int return_value_xdr_string_1;
  return_value_xdr_string_1=xdr_string(xdrs, objp, (unsigned int)256);
  if(return_value_xdr_string_1 == 0)
    return 0;

  else
    return 1;
}

// ypbind_xdr_oldsetdom
// file ypbind_xdr.c line 52
extern signed int ypbind_xdr_oldsetdom(struct XDR *xdrs, struct ypbind_oldsetdom *objp)
{
  signed int return_value_xdr_vector_1;
  return_value_xdr_vector_1=xdr_vector(xdrs, (char *)objp->ypoldsetdom_domain, (unsigned int)256, (unsigned int)sizeof(char) /*1ul*/ , (signed int (*)(struct XDR *, void *, ...))xdr_char);
  if(return_value_xdr_vector_1 == 0)
    return 0;

  else
  {
    signed int return_value_ypbind_xdr_binding_2;
    return_value_ypbind_xdr_binding_2=ypbind_xdr_binding(xdrs, &objp->ypoldsetdom_binding);
    if(return_value_ypbind_xdr_binding_2 == 0)
      return 0;

    else
      return 1;
  }
}

// ypbind_xdr_resp
// file ypbind_xdr.c line 31
extern signed int ypbind_xdr_resp(struct XDR *xdrs, struct ypbind_resp *objp)
{
  signed int return_value_ypbind_xdr_resptype_1;
  return_value_ypbind_xdr_resptype_1=ypbind_xdr_resptype(xdrs, &objp->ypbind_status);
  signed int return_value_xdr_u_int_2;
  signed int return_value_ypbind_xdr_binding_3;
  if(return_value_ypbind_xdr_resptype_1 == 0)
    return 0;

  else
  {
    switch((signed int)objp->ypbind_status)
    {
      case YPBIND_FAIL_VAL:
      {
        return_value_xdr_u_int_2=xdr_u_int(xdrs, &objp->ypbind_resp_u.ypbind_error);
        if(return_value_xdr_u_int_2 == 0)
          return 0;

        break;
      }
      case YPBIND_SUCC_VAL:
      {
        return_value_ypbind_xdr_binding_3=ypbind_xdr_binding(xdrs, &objp->ypbind_resp_u.ypbind_bindinfo);
        if(return_value_ypbind_xdr_binding_3 == 0)
          return 0;

        break;
      }
      default:
        return 0;
    }
    return 1;
  }
}

// ypbind_xdr_resptype
// file ypbind_xdr.c line 13
extern signed int ypbind_xdr_resptype(struct XDR *xdrs, enum ypbind_resptype *objp)
{
  signed int return_value_xdr_enum_1;
  return_value_xdr_enum_1=xdr_enum(xdrs, (signed int *)objp);
  if(return_value_xdr_enum_1 == 0)
    return 0;

  else
    return 1;
}

// ypbind_xdr_setdom
// file ypbind_xdr.c line 63
extern signed int ypbind_xdr_setdom(struct XDR *xdrs, struct ypbind_setdom *objp)
{
  signed int return_value_ypbind_xdr_domainname_1;
  return_value_ypbind_xdr_domainname_1=ypbind_xdr_domainname(xdrs, &objp->ypsetdom_domain);
  if(return_value_ypbind_xdr_domainname_1 == 0)
    return 0;

  else
  {
    signed int return_value_ypbind_xdr_binding_2;
    return_value_ypbind_xdr_binding_2=ypbind_xdr_binding(xdrs, &objp->ypsetdom_binding);
    if(return_value_ypbind_xdr_binding_2 == 0)
      return 0;

    else
    {
      signed int return_value_xdr_u_int_3;
      return_value_xdr_u_int_3=xdr_u_int(xdrs, &objp->ypsetdom_vers);
      if(return_value_xdr_u_int_3 == 0)
        return 0;

      else
        return 1;
    }
  }
}

// ypbindproc_domain
// file ypbind_server.c line 58
static signed int ypbindproc_domain(char *domain_name, struct ypbind_resp *result, struct svc_req *rqstp)
{
  memset((void *)result, 0, sizeof(struct ypbind_resp) /*16ul*/ );
  result->ypbind_status = (enum ypbind_resptype)YPBIND_FAIL_VAL;
  result->ypbind_resp_u.ypbind_error = (unsigned int)2;
  char *return_value_strchr_2;
  return_value_strchr_2=strchr(domain_name, 47);
  if(!(return_value_strchr_2 == ((char *)NULL)))
  {
    char *return_value_gettext_1;
    return_value_gettext_1=gettext("Domain name '%s' has embedded slash -- rejecting.");
    log_msg(3, return_value_gettext_1, domain_name);
    return 1;
  }

  test_bindings_once(1, domain_name);
  find_domain(domain_name, result);
  char *return_value_gettext_3;
  char *return_value_gettext_4;
  if(!(debug_flag == 0))
  {
    if((signed int)result->ypbind_status == YPBIND_FAIL_VAL)
    {
      return_value_gettext_3=gettext("Status: YPBIND_FAIL_VAL");
      log_msg(7, return_value_gettext_3);
    }

    else
    {
      return_value_gettext_4=gettext("Status: YPBIND_SUCC_VAL");
      log_msg(7, return_value_gettext_4);
    }
  }

  return 1;
}

// ypbindproc_domain_2_svc
// file ypbind.h line 111
extern signed int ypbindproc_domain_2_svc(char **argp, struct ypbind_resp *result, struct svc_req *rqstp)
{
  if(!(debug_flag == 0))
    log_msg(7, "ypbindproc_domain_2_svc (%s)", *argp);

  signed int return_value_ypbindproc_domain_1;
  return_value_ypbindproc_domain_1=ypbindproc_domain(*argp, result, rqstp);
  return return_value_ypbindproc_domain_1;
}

// ypbindproc_null_2_svc
// file ypbind.h line 109
extern signed int ypbindproc_null_2_svc(void *argp, void *result, struct svc_req *rqstp)
{
  memset(result, 0, sizeof(char *) /*8ul*/ );
  return 1;
}

// ypbindproc_olddomain_1_svc
// file ypbind.h line 102
extern signed int ypbindproc_olddomain_1_svc(char **argp, struct ypbind_resp *result, struct svc_req *rqstp)
{
  if(!(debug_flag == 0))
    log_msg(7, "ypbindproc_olddomain_1_svc (%s)", *argp);

  signed int return_value_ypbindproc_domain_1;
  return_value_ypbindproc_domain_1=ypbindproc_domain(*argp, result, rqstp);
  return return_value_ypbindproc_domain_1;
}

// ypbindproc_oldnull_1_svc
// file ypbind.h line 100
extern signed int ypbindproc_oldnull_1_svc(void *argp, void *result, struct svc_req *rqstp)
{
  memset(result, 0, sizeof(char *) /*8ul*/ );
  return 1;
}

// ypbindproc_oldsetdom_1_svc
// file ypbind.h line 104
extern signed int ypbindproc_oldsetdom_1_svc(struct ypbind_oldsetdom *argp, void *result, struct svc_req *rqstp)
{
  if(!(debug_flag == 0))
    log_msg(7, "ypbindproc_oldsetdom_1_svc (%s)", (const void *)argp->ypoldsetdom_domain);

  memset(result, 0, sizeof(char *) /*8ul*/ );
  signed int return_value_ypbindproc_setdom_1;
  return_value_ypbindproc_setdom_1=ypbindproc_setdom(argp->ypoldsetdom_domain, &argp->ypoldsetdom_binding, &rqstp->rq_xprt->xp_raddr);
  return return_value_ypbindproc_setdom_1;
}

// ypbindproc_setdom
// file ypbind_server.c line 106
static signed int ypbindproc_setdom(const char *domain_name, struct ypbind_binding *binding, struct sockaddr_in *fromhost)
{
  char *return_value_strchr_2;
  return_value_strchr_2=strchr(domain_name, 47);
  if(!(return_value_strchr_2 == ((char *)NULL)))
  {
    char *return_value_gettext_1;
    return_value_gettext_1=gettext("Domain name '%s' has embedded slash -- rejecting.");
    log_msg(3, return_value_gettext_1, domain_name);
    return 1;
  }

  unsigned int return_value_htonl_5;
  char *return_value_gettext_3;
  char *return_value_inet_ntoa_4;
  char *return_value_gettext_6;
  switch(ypset)
  {
    case 2:
    {
      return_value_htonl_5=htonl((unsigned int)0x7f000001);
      if(!(fromhost->sin_addr.s_addr == return_value_htonl_5))
      {
        if(!(debug_flag == 0))
        {
          return_value_gettext_3=gettext("User from '%s' try's to change the binding.");
          return_value_inet_ntoa_4=inet_ntoa(fromhost->sin_addr);
          log_msg(7, return_value_gettext_3, return_value_inet_ntoa_4);
        }

        return 1;
      }

      break;
    }
    case 1:
      break;
    case 0:

    default:
    {
      return_value_gettext_6=gettext("Changing the binding is not allowed.");
      log_msg(3, return_value_gettext_6);
      return 1;
    }
  }
  unsigned short int return_value_ntohs_8;
  return_value_ntohs_8=ntohs(fromhost->sin_port);
  if((signed int)return_value_ntohs_8 >= 1024)
  {
    char *return_value_gettext_7;
    return_value_gettext_7=gettext("SETDOM request doesn't come from reserved port.");
    log_msg(3, return_value_gettext_7);
    return 1;
  }

  change_binding(domain_name, binding);
  return 1;
}

// ypbindproc_setdom_2_svc
// file ypbind.h line 113
extern signed int ypbindproc_setdom_2_svc(struct ypbind_setdom *argp, void *result, struct svc_req *rqstp)
{
  if(!(debug_flag == 0))
    log_msg(7, "ypbindproc_setdom_2_svc (%s)", argp->ypsetdom_domain);

  memset(result, 0, sizeof(char *) /*8ul*/ );
  signed int return_value_ypbindproc_setdom_1;
  return_value_ypbindproc_setdom_1=ypbindproc_setdom(argp->ypsetdom_domain, &argp->ypsetdom_binding, &rqstp->rq_xprt->xp_raddr);
  return return_value_ypbindproc_setdom_1;
}

// ypbindprog_1
// file local.h line 34
extern void ypbindprog_1(struct svc_req *rqstp, struct SVCXPRT *transp)
{
  /* tag-#anon#lUN[*{S8}_S8_'ypbindproc_olddomain_1_arg'||SYM#tag-ypbind_oldsetdom#'ypbindproc_oldsetdom_1_arg'||U2112'_pad'|] */
union anonymous_0
{
  // ypbindproc_olddomain_1_arg
  char *ypbindproc_olddomain_1_arg;
  // ypbindproc_oldsetdom_1_arg
  struct ypbind_oldsetdom ypbindproc_oldsetdom_1_arg;
};

/* */
  ;
  union anonymous_0 argument;
  /* tag-#anon#lUN[SYM#tag-ypbind_resp#'ypbindproc_olddomain_1_res'|] */
union anonymous_1
{
  // ypbindproc_olddomain_1_res
  struct ypbind_resp ypbindproc_olddomain_1_res;
};

/* */
  ;
  union anonymous_1 result;
  signed int retval;
  signed int (*xdr_argument)(struct XDR *, void *, ...);
  signed int (*xdr_result)(struct XDR *, void *, ...);
  signed int (*local)(char *, void *, struct svc_req *);
  switch(rqstp->rq_proc)
  {
    case (unsigned long int)0:
    {
      xdr_argument = (signed int (*)(struct XDR *, void *, ...))xdr_void;
      xdr_result = (signed int (*)(struct XDR *, void *, ...))xdr_void;
      local = (signed int (*)(char *, void *, struct svc_req *))ypbindproc_oldnull_1_svc;
      break;
    }
    case (unsigned long int)1:
    {
      xdr_argument = (signed int (*)(struct XDR *, void *, ...))ypbind_xdr_domainname;
      xdr_result = (signed int (*)(struct XDR *, void *, ...))ypbind_xdr_resp;
      local = (signed int (*)(char *, void *, struct svc_req *))ypbindproc_olddomain_1_svc;
      break;
    }
    case (unsigned long int)2:
    {
      xdr_argument = (signed int (*)(struct XDR *, void *, ...))ypbind_xdr_oldsetdom;
      xdr_result = (signed int (*)(struct XDR *, void *, ...))xdr_void;
      local = (signed int (*)(char *, void *, struct svc_req *))ypbindproc_oldsetdom_1_svc;
      break;
    }
    default:
    {
      svcerr_noproc(transp);
      goto __CPROVER_DUMP_L10;
    }
  }
  memset((void *)(char *)&argument, 0, sizeof(union anonymous_0) /*264ul*/ );
  signed int return_value;
  return_value=transp->xp_ops->xp_getargs(transp, xdr_argument, (char *)&argument);
  signed int return_value_svc_sendreply_1;
  char *return_value_gettext_2;
  char *return_value_gettext_3;
  if(return_value == 0)
    svcerr_decode(transp);

  else
  {
    signed int return_value_1;
    return_value_1=local((char *)&argument, (void *)&result, rqstp);
    retval = (signed int)return_value_1;
    if(retval >= 1)
    {
      return_value_svc_sendreply_1=svc_sendreply(transp, xdr_result, (char *)&result);
      if(return_value_svc_sendreply_1 == 0)
        svcerr_systemerr(transp);

    }

    signed int return_value_2;
    return_value_2=transp->xp_ops->xp_freeargs(transp, xdr_argument, (char *)&argument);
    if(return_value_2 == 0)
    {
      return_value_gettext_2=gettext("unable to free arguments");
      log_msg(3, return_value_gettext_2);
    }

    signed int return_value_ypbindprog_1_freeresult_4;
    return_value_ypbindprog_1_freeresult_4=ypbindprog_1_freeresult(transp, xdr_result, (char *)&result);
    if(return_value_ypbindprog_1_freeresult_4 == 0)
    {
      return_value_gettext_3=gettext("unable to free results");
      log_msg(3, return_value_gettext_3);
    }

  }

__CPROVER_DUMP_L10:
  ;
}

// ypbindprog_1_freeresult
// file ypbind.h line 105
extern signed int ypbindprog_1_freeresult(struct SVCXPRT *transp, signed int (*xdr_result)(struct XDR *, void *, ...), char *result)
{
  xdr_free(xdr_result, result);
  return 1;
}

// ypbindprog_2
// file local.h line 35
extern void ypbindprog_2(struct svc_req *rqstp, struct SVCXPRT *transp)
{
  /* tag-#anon#lUN[*{S8}_S8_'ypbindproc_domain_2_arg'||SYM#tag-ypbind_setdom#'ypbindproc_setdom_2_arg'|] */
union anonymous_2
{
  // ypbindproc_domain_2_arg
  char *ypbindproc_domain_2_arg;
  // ypbindproc_setdom_2_arg
  struct ypbind_setdom ypbindproc_setdom_2_arg;
};

/* */
  ;
  union anonymous_2 argument;
  /* tag-#anon#lUN[SYM#tag-ypbind_resp#'ypbindproc_domain_2_res'|] */
union anonymous_3
{
  // ypbindproc_domain_2_res
  struct ypbind_resp ypbindproc_domain_2_res;
};

/* */
  ;
  union anonymous_3 result;
  signed int retval;
  signed int (*xdr_argument)(struct XDR *, void *, ...);
  signed int (*xdr_result)(struct XDR *, void *, ...);
  signed int (*local)(char *, void *, struct svc_req *);
  switch(rqstp->rq_proc)
  {
    case (unsigned long int)0:
    {
      xdr_argument = (signed int (*)(struct XDR *, void *, ...))xdr_void;
      xdr_result = (signed int (*)(struct XDR *, void *, ...))xdr_void;
      local = (signed int (*)(char *, void *, struct svc_req *))ypbindproc_null_2_svc;
      break;
    }
    case (unsigned long int)1:
    {
      xdr_argument = (signed int (*)(struct XDR *, void *, ...))ypbind_xdr_domainname;
      xdr_result = (signed int (*)(struct XDR *, void *, ...))ypbind_xdr_resp;
      local = (signed int (*)(char *, void *, struct svc_req *))ypbindproc_domain_2_svc;
      break;
    }
    case (unsigned long int)2:
    {
      xdr_argument = (signed int (*)(struct XDR *, void *, ...))ypbind_xdr_setdom;
      xdr_result = (signed int (*)(struct XDR *, void *, ...))xdr_void;
      local = (signed int (*)(char *, void *, struct svc_req *))ypbindproc_setdom_2_svc;
      break;
    }
    default:
    {
      svcerr_noproc(transp);
      goto __CPROVER_DUMP_L10;
    }
  }
  memset((void *)(char *)&argument, 0, sizeof(union anonymous_2) /*24ul*/ );
  signed int return_value;
  return_value=transp->xp_ops->xp_getargs(transp, xdr_argument, (char *)&argument);
  signed int return_value_svc_sendreply_1;
  char *return_value_gettext_2;
  char *return_value_gettext_3;
  if(return_value == 0)
    svcerr_decode(transp);

  else
  {
    signed int return_value_1;
    return_value_1=local((char *)&argument, (void *)&result, rqstp);
    retval = (signed int)return_value_1;
    if(retval >= 1)
    {
      return_value_svc_sendreply_1=svc_sendreply(transp, xdr_result, (char *)&result);
      if(return_value_svc_sendreply_1 == 0)
        svcerr_systemerr(transp);

    }

    signed int return_value_2;
    return_value_2=transp->xp_ops->xp_freeargs(transp, xdr_argument, (char *)&argument);
    if(return_value_2 == 0)
    {
      return_value_gettext_2=gettext("unable to free arguments");
      log_msg(3, return_value_gettext_2);
    }

    signed int return_value_ypbindprog_2_freeresult_4;
    return_value_ypbindprog_2_freeresult_4=ypbindprog_2_freeresult(transp, xdr_result, (char *)&result);
    if(return_value_ypbindprog_2_freeresult_4 == 0)
    {
      return_value_gettext_3=gettext("unable to free results");
      log_msg(3, return_value_gettext_3);
    }

  }

__CPROVER_DUMP_L10:
  ;
}

// ypbindprog_2_freeresult
// file ypbind.h line 114
extern signed int ypbindprog_2_freeresult(struct SVCXPRT *transp, signed int (*xdr_result)(struct XDR *, void *, ...), char *result)
{
  xdr_free(xdr_result, result);
  return 1;
}

