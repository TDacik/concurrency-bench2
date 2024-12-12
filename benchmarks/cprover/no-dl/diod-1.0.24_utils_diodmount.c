// #anon_enum_CAP_CLEAR=0_CAP_SET=1
// file /usr/include/sys/capability.h line 63
enum anonymous_2 { CAP_CLEAR=0, CAP_SET=1 };

// #anon_enum_CAP_EFFECTIVE=0_CAP_PERMITTED=1_CAP_INHERITABLE=2
// file /usr/include/sys/capability.h line 54
enum anonymous_3 { CAP_EFFECTIVE=0, CAP_PERMITTED=1, CAP_INHERITABLE=2 };

// #anon_enum_DEST_LOGF=0_DEST_SYSLOG=1
// file diod_log.c line 77
enum anonymous_7 { DEST_LOGF=0, DEST_SYSLOG=1 };

// #anon_enum_REQ_NORMAL=0_REQ_NOREPLY=1
// file ../libnpfs/npfs.h line 186
enum anonymous_10 { REQ_NORMAL=0, REQ_NOREPLY=1 };

// tag-#anon#ST[*{S8}_S8_'opt'||U64'flag'|]
// file diodmount.c line 418
struct anonymous_5;

// tag-#anon#ST[*{S8}_S8_'path'||*{S8}_S8_'opts'||S32'oflags'||U32'_pad0'||*{S8}_S8_'users'||*{S8}_S8_'hosts'|]
// file diod_conf.h line 76
struct anonymous_13;

// tag-#anon#ST[*{S8}_S8_'s'||S32'n'||U32'_pad0'|]
// file diod_log.c line 46
struct anonymous_11;

// tag-#anon#ST[*{SYM#tag-Npfile#}_SYM#tag-Npfile#_'file'||*{V}_V_'data'|]
// file ctl.c line 49
struct anonymous_4;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_9;

// tag-#anon#ST[S32'debuglevel'||S32'nwthreads'||S32'foreground'||S32'auth_required'||S32'statfs_passthru'||S32'userdb'||S32'allsquash'||U32'_pad0'||*{S8}_S8_'squashuser'||U32'runasuid'||U32'_pad1'||*{SYM#tag-list#}_SYM#tag-list#_'listen'||S32'exportall'||U32'_pad2'||*{S8}_S8_'exportopts'||*{SYM#tag-list#}_SYM#tag-list#_'exports'||*{S8}_S8_'configpath'||*{S8}_S8_'logdest'||S32'ro_mask'||U32'_pad3'|]
// file diod_conf.c line 90
struct anonymous_12;

// tag-#anon#ST[SYM#tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]#'lock'||*{SYM#tag-Npuser#}_SYM#tag-Npuser#_'users'||S32'ttl'||U32'_pad0'|]
// file user.c line 50
struct anonymous_1;

// tag-#anon#UN[ARR16{U8}_U8_'__u6_addr8'||ARR8{U16}_U16_'__u6_addr16'||ARR4{U32}_U32_'__u6_addr32'|]
// file /usr/include/netinet/in.h line 211
union anonymous_15;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_6;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_0;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous;

// tag-#anon#UN[SYM#tag-p9_rlerror#'rlerror'||SYM#tag-p9_tstatfs#'tstatfs'||SYM#tag-p9_rstatfs#'rstatfs'||SYM#tag-p9_tlopen#'tlopen'||SYM#tag-p9_rlopen#'rlopen'||SYM#tag-p9_tlcreate#'tlcreate'||SYM#tag-p9_rlcreate#'rlcreate'||SYM#tag-p9_tsymlink#'tsymlink'||SYM#tag-p9_rsymlink#'rsymlink'||SYM#tag-p9_tmknod#'tmknod'||SYM#tag-p9_rmknod#'rmknod'||SYM#tag-p9_trename#'trename'||SYM#tag-p9_rrename#'rrename'||SYM#tag-p9_treadlink#'treadlink'||SYM#tag-p9_rreadlink#'rreadlink'||SYM#tag-p9_tgetattr#'tgetattr'||SYM#tag-p9_rgetattr#'rgetattr'||SYM#tag-p9_tsetattr#'tsetattr'||SYM#tag-p9_rsetattr#'rsetattr'||SYM#tag-p9_txattrwalk#'txattrwalk'||SYM#tag-p9_rxattrwalk#'rxattrwalk'||SYM#tag-p9_txattrcreate#'txattrcreate'||SYM#tag-p9_rxattrcreate#'rxattrcreate'||SYM#tag-p9_treaddir#'treaddir'||SYM#tag-p9_rreaddir#'rreaddir'||SYM#tag-p9_tfsync#'tfsync'||SYM#tag-p9_rfsync#'rfsync'||SYM#tag-p9_tlock#'tlock'||SYM#tag-p9_rlock#'rlock'||SYM#tag-p9_tgetlock#'tgetlock'||SYM#tag-p9_rgetlock#'rgetlock'||SYM#tag-p9_tlink#'tlink'||SYM#tag-p9_rlink#'rlink'||SYM#tag-p9_tmkdir#'tmkdir'||SYM#tag-p9_rmkdir#'rmkdir'||SYM#tag-p9_trenameat#'trenameat'||SYM#tag-p9_rrenameat#'rrenameat'||SYM#tag-p9_tunlinkat#'tunlinkat'||SYM#tag-p9_runlinkat#'runlinkat'||SYM#tag-p9_tversion#'tversion'||SYM#tag-p9_rversion#'rversion'||SYM#tag-p9_tauth#'tauth'||SYM#tag-p9_rauth#'rauth'||SYM#tag-p9_tattach#'tattach'||SYM#tag-p9_rattach#'rattach'||SYM#tag-p9_tflush#'tflush'||SYM#tag-p9_rflush#'rflush'||SYM#tag-p9_twalk#'twalk'||SYM#tag-p9_rwalk#'rwalk'||SYM#tag-p9_tread#'tread'||SYM#tag-p9_rread#'rread'||SYM#tag-p9_twrite#'twrite'||SYM#tag-p9_rwrite#'rwrite'||SYM#tag-p9_tclunk#'tclunk'||SYM#tag-p9_rclunk#'rclunk'||SYM#tag-p9_tremove#'tremove'||SYM#tag-p9_rremove#'rremove'|]
// file ../libnpfs/npfs.h line 57
union anonymous_8;

// tag-#anon#UN[r*{SYM#tag-sockaddr#}_SYM#tag-sockaddr#_'__sockaddr__'||r*{SYM#tag-sockaddr_at#}_SYM#tag-sockaddr_at#_'__sockaddr_at__'||r*{SYM#tag-sockaddr_ax25#}_SYM#tag-sockaddr_ax25#_'__sockaddr_ax25__'||r*{SYM#tag-sockaddr_dl#}_SYM#tag-sockaddr_dl#_'__sockaddr_dl__'||r*{SYM#tag-sockaddr_eon#}_SYM#tag-sockaddr_eon#_'__sockaddr_eon__'||r*{SYM#tag-sockaddr_in#}_SYM#tag-sockaddr_in#_'__sockaddr_in__'||r*{SYM#tag-sockaddr_in6#}_SYM#tag-sockaddr_in6#_'__sockaddr_in6__'||r*{SYM#tag-sockaddr_inarp#}_SYM#tag-sockaddr_inarp#_'__sockaddr_inarp__'||r*{SYM#tag-sockaddr_ipx#}_SYM#tag-sockaddr_ipx#_'__sockaddr_ipx__'||r*{SYM#tag-sockaddr_iso#}_SYM#tag-sockaddr_iso#_'__sockaddr_iso__'||r*{SYM#tag-sockaddr_ns#}_SYM#tag-sockaddr_ns#_'__sockaddr_ns__'||r*{SYM#tag-sockaddr_un#}_SYM#tag-sockaddr_un#_'__sockaddr_un__'||r*{SYM#tag-sockaddr_x25#}_SYM#tag-sockaddr_x25#_'__sockaddr_x25__'|]
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
union anonymous_14;

// tag-#anon#UN[r*{SYM#tag-sockaddr#}_SYM#tag-sockaddr#_'__sockaddr__'||r*{SYM#tag-sockaddr_at#}_SYM#tag-sockaddr_at#_'__sockaddr_at__'||r*{SYM#tag-sockaddr_ax25#}_SYM#tag-sockaddr_ax25#_'__sockaddr_ax25__'||r*{SYM#tag-sockaddr_dl#}_SYM#tag-sockaddr_dl#_'__sockaddr_dl__'||r*{SYM#tag-sockaddr_eon#}_SYM#tag-sockaddr_eon#_'__sockaddr_eon__'||r*{SYM#tag-sockaddr_in#}_SYM#tag-sockaddr_in#_'__sockaddr_in__'||r*{SYM#tag-sockaddr_in6#}_SYM#tag-sockaddr_in6#_'__sockaddr_in6__'||r*{SYM#tag-sockaddr_inarp#}_SYM#tag-sockaddr_inarp#_'__sockaddr_inarp__'||r*{SYM#tag-sockaddr_ipx#}_SYM#tag-sockaddr_ipx#_'__sockaddr_ipx__'||r*{SYM#tag-sockaddr_iso#}_SYM#tag-sockaddr_iso#_'__sockaddr_iso__'||r*{SYM#tag-sockaddr_ns#}_SYM#tag-sockaddr_ns#_'__sockaddr_ns__'||r*{SYM#tag-sockaddr_un#}_SYM#tag-sockaddr_un#_'__sockaddr_un__'||r*{SYM#tag-sockaddr_x25#}_SYM#tag-sockaddr_x25#_'__sockaddr_x25__'|]_transparent
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
union anonymous_16;

// tag-Fdtrans
// file fdtrans.c line 38
struct Fdtrans;

// tag-Npauth
// file ../libnpfs/npfs.h line 40
struct Npauth;

// tag-Npcfid
// file ../libnpclient/npclient.h line 25
struct Npcfid;

// tag-Npcfsys
// file npclient.h line 26
struct Npcfsys;

// tag-Npconn
// file ../libnpfs/npfs.h line 35
struct Npconn;

// tag-Npcpool
// file npcimpl.h line 30
struct Npcpool;

// tag-Npcreq
// file npcimpl.h line 29
struct Npcreq;

// tag-Npcrpc
// file mtfsys.c line 47
struct Npcrpc;

// tag-Npfcall
// file ../libnpfs/npfs.h line 30
struct Npfcall;

// tag-Npfid
// file ../libnpfs/npfs.h line 31
struct Npfid;

// tag-Npfidpool
// file ../libnpfs/npfs.h line 32
struct Npfidpool;

// tag-Npfile
// file ../libnpfs/npfs.h line 29
struct Npfile;

// tag-Npreq
// file ../libnpfs/npfs.h line 36
struct Npreq;

// tag-Npsrv
// file ../libnpfs/npfs.h line 41
struct Npsrv;

// tag-Npstats
// file ../libnpfs/npfs.h line 37
struct Npstats;

// tag-Nptpool
// file ../libnpfs/npfs.h line 39
struct Nptpool;

// tag-Nptrans
// file ../libnpfs/npfs.h line 34
struct Nptrans;

// tag-Npuser
// file ../libnpfs/npfs.h line 42
struct Npuser;

// tag-Npwthread
// file ../libnpfs/npfs.h line 38
struct Npwthread;

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

// tag-_cap_struct
// file /usr/include/sys/capability.h line 41
struct _cap_struct;

// tag-_range
// file hostlist.c line 1399
struct _range;

// tag-addrinfo
// file /usr/include/netdb.h line 567
struct addrinfo;

// tag-cbuf
// file np.c line 40
struct cbuf;

// tag-diod_auth_struct
// file diod_auth.c line 89
struct diod_auth_struct;

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-hash
// file hash.h line 58
struct hash;

// tag-hash_node
// file hash.c line 54
struct hash_node;

// tag-hostlist
// file hostlist.h line 57
struct hostlist;

// tag-hostlist_iterator
// file hostlist.h line 72
struct hostlist_iterator;

// tag-hostname_components
// file hostlist.c line 118
struct hostname_components;

// tag-hostrange_components
// file hostlist.c line 131
struct hostrange_components;

// tag-hostset
// file hostlist.h line 66
struct hostset;

// tag-in6_addr
// file /usr/include/netinet/in.h line 209
struct in6_addr;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-list
// file list.h line 56
struct list;

// tag-listIterator
// file list.h line 61
struct listIterator;

// tag-listNode
// file list.c line 92
struct listNode;

// tag-lua_State
// file /usr/include/lua5.1/lua.h line 50
struct lua_State;

// tag-mntent
// file /usr/include/mntent.h line 53
struct mntent;

// tag-munge_ctx
// file /usr/include/munge.h line 56
struct munge_ctx;

// tag-munge_err
// file /usr/include/munge.h line 141
enum munge_err { EMUNGE_SUCCESS=0, EMUNGE_SNAFU=1, EMUNGE_BAD_ARG=2, EMUNGE_BAD_LENGTH=3, EMUNGE_OVERFLOW=4, EMUNGE_NO_MEMORY=5, EMUNGE_SOCKET=6, EMUNGE_TIMEOUT=7, EMUNGE_BAD_CRED=8, EMUNGE_BAD_VERSION=9, EMUNGE_BAD_CIPHER=10, EMUNGE_BAD_MAC=11, EMUNGE_BAD_ZIP=12, EMUNGE_BAD_REALM=13, EMUNGE_CRED_INVALID=14, EMUNGE_CRED_EXPIRED=15, EMUNGE_CRED_REWOUND=16, EMUNGE_CRED_REPLAYED=17, EMUNGE_CRED_UNAUTHORIZED=18 };

// tag-opt_struct
// file ../../utils/opt.h line 1
struct opt_struct;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-p9_qid
// file ../libnpfs/9p.h line 246
struct p9_qid;

// tag-p9_rattach
// file ../libnpfs/9p.h line 557
struct p9_rattach;

// tag-p9_rauth
// file ../libnpfs/9p.h line 538
struct p9_rauth;

// tag-p9_rclunk
// file ../libnpfs/9p.h line 610
struct p9_rclunk;

// tag-p9_rflush
// file ../libnpfs/9p.h line 548
struct p9_rflush;

// tag-p9_rfsync
// file ../libnpfs/9p.h line 464
struct p9_rfsync;

// tag-p9_rgetattr
// file ../libnpfs/9p.h line 400
struct p9_rgetattr;

// tag-p9_rgetlock
// file ../libnpfs/9p.h line 486
struct p9_rgetlock;

// tag-p9_rlcreate
// file ../libnpfs/9p.h line 359
struct p9_rlcreate;

// tag-p9_rlerror
// file ../libnpfs/9p.h line 327
struct p9_rlerror;

// tag-p9_rlink
// file ../libnpfs/9p.h line 498
struct p9_rlink;

// tag-p9_rlock
// file ../libnpfs/9p.h line 475
struct p9_rlock;

// tag-p9_rlopen
// file ../libnpfs/9p.h line 348
struct p9_rlopen;

// tag-p9_rmkdir
// file ../libnpfs/9p.h line 506
struct p9_rmkdir;

// tag-p9_rmknod
// file ../libnpfs/9p.h line 380
struct p9_rmknod;

// tag-p9_rread
// file ../libnpfs/9p.h line 594
struct p9_rread;

// tag-p9_rreaddir
// file ../libnpfs/9p.h line 457
struct p9_rreaddir;

// tag-p9_rreadlink
// file ../libnpfs/9p.h line 393
struct p9_rreadlink;

// tag-p9_rremove
// file ../libnpfs/9p.h line 615
struct p9_rremove;

// tag-p9_rrename
// file ../libnpfs/9p.h line 388
struct p9_rrename;

// tag-p9_rrenameat
// file ../libnpfs/9p.h line 515
struct p9_rrenameat;

// tag-p9_rsetattr
// file ../libnpfs/9p.h line 434
struct p9_rsetattr;

// tag-p9_rstatfs
// file ../libnpfs/9p.h line 333
struct p9_rstatfs;

// tag-p9_rsymlink
// file ../libnpfs/9p.h line 369
struct p9_rsymlink;

// tag-p9_runlinkat
// file ../libnpfs/9p.h line 522
struct p9_runlinkat;

// tag-p9_rversion
// file ../libnpfs/9p.h line 528
struct p9_rversion;

// tag-p9_rwalk
// file ../libnpfs/9p.h line 566
struct p9_rwalk;

// tag-p9_rwrite
// file ../libnpfs/9p.h line 604
struct p9_rwrite;

// tag-p9_rxattrcreate
// file ../libnpfs/9p.h line 450
struct p9_rxattrcreate;

// tag-p9_rxattrwalk
// file ../libnpfs/9p.h line 441
struct p9_rxattrwalk;

// tag-p9_str
// file ../libnpfs/9p.h line 221
struct p9_str;

// tag-p9_tattach
// file ../libnpfs/9p.h line 550
struct p9_tattach;

// tag-p9_tauth
// file ../libnpfs/9p.h line 532
struct p9_tauth;

// tag-p9_tclunk
// file ../libnpfs/9p.h line 607
struct p9_tclunk;

// tag-p9_tflush
// file ../libnpfs/9p.h line 545
struct p9_tflush;

// tag-p9_tfsync
// file ../libnpfs/9p.h line 461
struct p9_tfsync;

// tag-p9_tgetattr
// file ../libnpfs/9p.h line 396
struct p9_tgetattr;

// tag-p9_tgetlock
// file ../libnpfs/9p.h line 478
struct p9_tgetlock;

// tag-p9_tlcreate
// file ../libnpfs/9p.h line 352
struct p9_tlcreate;

// tag-p9_tlink
// file ../libnpfs/9p.h line 493
struct p9_tlink;

// tag-p9_tlock
// file ../libnpfs/9p.h line 466
struct p9_tlock;

// tag-p9_tlopen
// file ../libnpfs/9p.h line 344
struct p9_tlopen;

// tag-p9_tmkdir
// file ../libnpfs/9p.h line 500
struct p9_tmkdir;

// tag-p9_tmknod
// file ../libnpfs/9p.h line 372
struct p9_tmknod;

// tag-p9_tread
// file ../libnpfs/9p.h line 589
struct p9_tread;

// tag-p9_treaddir
// file ../libnpfs/9p.h line 452
struct p9_treaddir;

// tag-p9_treadlink
// file ../libnpfs/9p.h line 390
struct p9_treadlink;

// tag-p9_tremove
// file ../libnpfs/9p.h line 612
struct p9_tremove;

// tag-p9_trename
// file ../libnpfs/9p.h line 383
struct p9_trename;

// tag-p9_trenameat
// file ../libnpfs/9p.h line 509
struct p9_trenameat;

// tag-p9_tsetattr
// file ../libnpfs/9p.h line 422
struct p9_tsetattr;

// tag-p9_tstatfs
// file ../libnpfs/9p.h line 330
struct p9_tstatfs;

// tag-p9_tsymlink
// file ../libnpfs/9p.h line 363
struct p9_tsymlink;

// tag-p9_tunlinkat
// file ../libnpfs/9p.h line 517
struct p9_tunlinkat;

// tag-p9_tversion
// file ../libnpfs/9p.h line 524
struct p9_tversion;

// tag-p9_twalk
// file ../libnpfs/9p.h line 560
struct p9_twalk;

// tag-p9_twrite
// file ../libnpfs/9p.h line 598
struct p9_twrite;

// tag-p9_txattrcreate
// file ../libnpfs/9p.h line 444
struct p9_txattrcreate;

// tag-p9_txattrwalk
// file ../libnpfs/9p.h line 436
struct p9_txattrwalk;

// tag-passwd
// file /usr/include/pwd.h line 49
struct passwd;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

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

// tag-sockaddr_storage
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 162
struct sockaddr_storage;

// tag-sockaddr_un
// file /usr/include/x86_64-linux-gnu/sys/un.h line 29
struct sockaddr_un;

// tag-sockaddr_x25
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_x25;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

// tag-utimbuf
// file /usr/include/utime.h line 37
struct utimbuf;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __xpg_basename
// file /usr/include/libgen.h line 34
extern char * __xpg_basename(char *);
// _advance_past_brackets
// file hostlist.c line 353
static signed int _advance_past_brackets(char *tok, char **str);
// _alloc_fid
// file ctl.c line 82
static struct anonymous_4 * _alloc_fid(struct Npfile *file);
// _alloc_file
// file ctl.c line 113
static struct Npfile * _alloc_file(char *name, unsigned char type);
// _alloc_nouserdb
// file user.c line 296
static struct Npuser * _alloc_nouserdb(struct Npsrv *srv, unsigned int uid, char *name);
// _alloc_user
// file user.c line 258
static struct Npuser * _alloc_user(struct Npsrv *srv, struct passwd *pwd);
// _attempt_range_join
// file hostlist.c line 2065
static signed int _attempt_range_join(struct hostlist *hl, signed int loc);
// _authrequired
// file fcall.c line 70
static signed int _authrequired(struct Npsrv *srv, struct p9_str *uname, unsigned int n_uname, struct p9_str *aname);
// _bind_priv_inet4
// file diod_sock.c line 376
static signed int _bind_priv_inet4(signed int sockfd);
// _buf_restore
// file read.c line 174
static signed int _buf_restore(struct Npcfid *fid, char *buf, signed int len);
// _buf_save
// file read.c line 154
static signed int _buf_save(struct Npcfid *fid, char *buf, signed int len);
// _chg_privcap
// file user.c line 527
static signed int _chg_privcap(struct Npsrv *srv, enum anonymous_2 val);
// _chomp
// file fmt.c line 80
static void _chomp(char *s);
// _cmp
// file hostlist.c line 1955
signed int _cmp(const void *hr1, const void *hr2);
// _create_export
// file diod_conf.c line 137
static struct anonymous_13 * _create_export(char *path);
// _create_fid
// file fidpool.c line 84
static struct Npfid * _create_fid(struct Npconn *conn, unsigned int fid);
// _ctl_get_conns
// file srv.c line 904
static char * _ctl_get_conns(char *name, void *a);
// _ctl_get_date
// file ctl.c line 298
static char * _ctl_get_date(char *name, void *a);
// _ctl_get_proc
// file ctl.c line 151
static char * _ctl_get_proc(char *name, void *arg);
// _ctl_get_tpools
// file srv.c line 933
static char * _ctl_get_tpools(char *name, void *a);
// _ctl_get_version
// file ctl.c line 287
static char * _ctl_get_version(char *name, void *a);
// _da_create
// file diod_auth.c line 104
static struct diod_auth_struct * _da_create(void);
// _da_destroy
// file diod_auth.c line 131
static void _da_destroy(struct diod_auth_struct *da);
// _debug_trace
// file conn.c line 136
static void _debug_trace(struct Npsrv *srv, struct Npfcall *fc);
// _destroy_export
// file diod_conf.c line 163
static void _destroy_export(struct anonymous_13 *x);
// _destroy_fid
// file fidpool.c line 47
static struct Npfid * _destroy_fid(struct Npfid *f);
// _diod_mount
// file diodmount.c line 517
static void _diod_mount(struct opt_struct *o, signed int rfd, signed int wfd, char *spec, char *dir, signed int vopt, signed int fopt, signed int nopt);
// _diod_remount
// file diodmount.c line 464
static void _diod_remount(struct opt_struct *o, char *spec, char *dir, signed int vopt, signed int fopt);
// _disable_nagle
// file diod_sock.c line 67
static signed int _disable_nagle(signed int fd);
// _enable_keepalive
// file diod_sock.c line 93
static signed int _enable_keepalive(signed int fd);
// _enable_reuseaddr
// file diod_sock.c line 127
static signed int _enable_reuseaddr(signed int fd);
// _error
// file hostlist.c line 336
static void _error(char *file, signed int line, char *msg, ...);
// _floorlog2
// file srv.c line 514
static unsigned int _floorlog2(unsigned int i);
// _free_fid
// file ctl.c line 72
static void _free_fid(struct anonymous_4 *f);
// _free_user
// file user.c line 186
static void _free_user(struct Npuser *u);
// _get_bracketed_list
// file hostlist.c line 2148
static signed int _get_bracketed_list(struct hostlist *hl, signed int *start, const unsigned long int n, char *buf);
// _get_usercache
// file user.c line 117
static char * _get_usercache(char *name, void *a);
// _getflags
// file diodmount.c line 445
static void _getflags(struct opt_struct *o, unsigned long int *flags);
// _getgrouplist
// file user.c line 227
static signed int _getgrouplist(struct Npsrv *srv, struct Npuser *u);
// _hbin
// file srv.c line 528
static signed int _hbin(unsigned long int val);
// _hostlist_create
// file hostlist.c line 1392
static struct hostlist * _hostlist_create(const char *hostlist, char *sep, char *r_op);
// _hostlist_create_bracketed
// file hostlist.c line 1510
static struct hostlist * _hostlist_create_bracketed(const char *hostlist, char *sep, char *r_op);
// _hostrange_string
// file hostlist.c line 1845
static char * _hostrange_string(struct hostrange_components *hr, signed int depth);
// _is_bracket_needed
// file hostlist.c line 2132
static signed int _is_bracket_needed(struct hostlist *hl, signed int i);
// _iterator_advance
// file hostlist.c line 2285
static void _iterator_advance(struct hostlist_iterator *i);
// _iterator_advance_range
// file hostlist.c line 2301
static void _iterator_advance_range(struct hostlist_iterator *i);
// _link_fid
// file fidpool.c line 202
static void _link_fid(struct Npfid **head, struct Npfid *f);
// _listen_fds
// file diod_sock.c line 246
static signed int _listen_fds(struct pollfd *fds, signed int nfds);
// _lookup_fid
// file fidpool.c line 172
static struct Npfid * _lookup_fid(struct Npfid **head, unsigned int fid);
// _lua_get_expattr
// file diod_conf.c line 551
static void _lua_get_expattr(char *path, signed int i, struct lua_State *L, char *key, char **sp);
// _lua_getglobal_exports
// file diod_conf.c line 564
static signed int _lua_getglobal_exports(char *path, struct lua_State *L, struct list **lp);
// _lua_getglobal_int
// file diod_conf.c line 474
static signed int _lua_getglobal_int(char *path, struct lua_State *L, char *key, signed int *ip);
// _lua_getglobal_list_of_strings
// file diod_conf.c line 515
static signed int _lua_getglobal_list_of_strings(char *path, struct lua_State *L, char *key, struct list **lp);
// _lua_getglobal_string
// file diod_conf.c line 492
static signed int _lua_getglobal_string(char *path, struct lua_State *L, char *key, char **sp);
// _match
// file diod_log.c line 88
static signed int _match(char *s, struct anonymous_11 *m);
// _match_key
// file ../../utils/opt.c line 111
static signed int _match_key(char *item, char *key);
// _match_keyval
// file ../../utils/opt.c line 104
static signed int _match_keyval(char *item, char *key);
// _mount
// file diodmount.c line 579
static void _mount(const char *source, const char *target, unsigned long int mountflags, const void *data);
// _name2addr
// file diodmount.c line 596
static char * _name2addr(char *host);
// _nbd_attach
// file diodmount.c line 639
static void _nbd_attach(struct opt_struct *o, signed int argc, char **argv, signed int nopt, signed int vopt);
// _nbd_detach
// file diodmount.c line 740
static void _nbd_detach(struct opt_struct *o, signed int argc, char **argv, signed int nopt, signed int vopt);
// _next_inum
// file ctl.c line 59
static signed int _next_inum(void);
// _next_tok
// file hostlist.c line 379
static char * _next_tok(char *sep, char **str);
// _optimize_fid
// file fidpool.c line 159
static void _optimize_fid(struct Npfid **head, struct Npfid *f);
// _optstr
// file ../../utils/opt.c line 152
static char * _optstr(char *s);
// _parse_expopt
// file diod_conf.c line 380
static void _parse_expopt(char *s, signed int *fp);
// _parse_nbdspec
// file diodmount.c line 618
static void _parse_nbdspec(char *spec, char **hp, char **fp);
// _parse_range_list
// file hostlist.c line 1455
static signed int _parse_range_list(char *str, struct _range *ranges, signed int len);
// _parse_single_range
// file hostlist.c line 1408
static signed int _parse_single_range(const char *str, struct _range *range);
// _parse_spec
// file diodmount.c line 330
static char * _parse_spec(char *spec, struct opt_struct *o);
// _parse_uname_access
// file diodmount.c line 366
static void _parse_uname_access(struct opt_struct *o);
// _poll_add
// file diod_sock.c line 143
static signed int _poll_add(struct pollfd **fdsp, signed int *nfdsp, signed int fd);
// _push_range_list
// file hostlist.c line 1473
static void _push_range_list(struct hostlist *hl, char *pfx, struct _range *rng, signed int n);
// _push_range_list_with_suffix
// file hostlist.c line 1484
static void _push_range_list_with_suffix(struct hostlist *hl, char *pfx, char *sfx, struct _range *rng, signed int n);
// _real_lookup_byname
// file user.c line 385
static struct Npuser * _real_lookup_byname(struct Npsrv *srv, char *uname);
// _real_lookup_byuid
// file user.c line 344
static struct Npuser * _real_lookup_byuid(struct Npsrv *srv, unsigned int uid);
// _rmatch
// file diod_log.c line 99
static char * _rmatch(signed int n, struct anonymous_11 *m);
// _set_syslog_facility
// file diod_log.c line 128
static void _set_syslog_facility(char *s);
// _set_syslog_level
// file diod_log.c line 140
static void _set_syslog_level(char *s);
// _setup_one_inet
// file diod_sock.c line 171
static signed int _setup_one_inet(char *host, char *port, struct pollfd **fdsp, signed int *nfdsp);
// _setup_one_unix
// file diod_sock.c line 211
static signed int _setup_one_unix(char *path, struct pollfd **fdsp, signed int *nfdsp);
// _strnchr
// file read.c line 194
static char * _strnchr(char *s, char c, signed int len);
// _uname2uid
// file diodmount.c line 320
static unsigned int _uname2uid(char *uname);
// _unlink_fid
// file fidpool.c line 189
static void _unlink_fid(struct Npfid **head, struct Npfid *f);
// _update_mtab
// file diodmount.c line 479
static signed int _update_mtab(char *options, char *spec, char *dir);
// _usercache_add
// file user.c line 57
static void _usercache_add(struct Npsrv *srv, struct Npuser *u);
// _usercache_del
// file user.c line 67
static struct Npuser * _usercache_del(struct Npsrv *srv, struct Npuser *prev, struct Npuser *u);
// _usercache_expire
// file user.c line 83
static void _usercache_expire(struct Npsrv *srv);
// _usercache_lookup
// file user.c line 101
static struct Npuser * _usercache_lookup(struct Npsrv *srv, char *uname, unsigned int uid);
// _verify_mountpoint
// file diodmount.c line 351
static void _verify_mountpoint(char *path);
// _verr
// file diod_log.c line 208
static void _verr(signed int errnum, const char *fmt, void **ap);
// _width_equiv
// file hostlist.c line 435
static signed int _width_equiv(unsigned long int n, signed int *wn, unsigned long int m, signed int *wm);
// _xcreate_export
// file diod_conf.c line 154
static struct anonymous_13 * _xcreate_export(char *path);
// _xlist_append
// file diod_conf.c line 130
static void _xlist_append(struct list *l, void *item);
// _xlist_create
// file diod_conf.c line 121
static struct list * _xlist_create(void (*f)(void *));

//

// _xstrdup
// file diod_conf.c line 112
static char * _xstrdup(char *s);
// _zero_padded
// file hostlist.c line 414
static signed int _zero_padded(unsigned long int num, signed int width);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// accept
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 243
extern signed int accept(signed int, struct sockaddr *, unsigned int *);
// access
// file /usr/include/unistd.h line 287
extern signed int access(const char *, signed int);
// addmntent
// file /usr/include/mntent.h line 83
extern signed int addmntent(struct _IO_FILE *, struct mntent *);
// aspf
// file npfs.h line 410
signed int aspf(char **sp, signed int *lp, const char *fmt, ...);
// bind
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 123
extern signed int bind(signed int, struct sockaddr *, unsigned int);
// buf_alloc
// file np.c line 73
static inline void * buf_alloc(struct cbuf *buf, signed int len);
// buf_check_overflow
// file np.c line 54
static inline signed int buf_check_overflow(struct cbuf *buf);
// buf_check_size
// file np.c line 60
static inline signed int buf_check_size(struct cbuf *buf, signed int len);
// buf_get_int16
// file np.c line 184
static inline unsigned short int buf_get_int16(struct cbuf *buf);
// buf_get_int32
// file np.c line 197
static inline unsigned int buf_get_int32(struct cbuf *buf);
// buf_get_int64
// file np.c line 211
static inline unsigned long int buf_get_int64(struct cbuf *buf);
// buf_get_int8
// file np.c line 171
static inline unsigned char buf_get_int8(struct cbuf *buf);
// buf_get_qid
// file np.c line 238
static inline void buf_get_qid(struct cbuf *buf, struct p9_qid *qid);
// buf_get_str
// file np.c line 231
static inline void buf_get_str(struct cbuf *buf, struct p9_str *str);
// buf_init
// file np.c line 47
static inline void buf_init(struct cbuf *buf, void *data, signed int datalen);
// buf_put_int16
// file np.c line 98
static inline void buf_put_int16(struct cbuf *buf, unsigned short int val, unsigned short int *pval);
// buf_put_int32
// file np.c line 112
static inline void buf_put_int32(struct cbuf *buf, unsigned int val, unsigned int *pval);
// buf_put_int64
// file np.c line 127
static inline void buf_put_int64(struct cbuf *buf, unsigned long int val, unsigned long int *pval);
// buf_put_int8
// file np.c line 86
static inline void buf_put_int8(struct cbuf *buf, unsigned char val, unsigned char *pval);
// buf_put_qid
// file np.c line 163
static inline void buf_put_qid(struct cbuf *buf, struct p9_qid *qid, struct p9_qid *pqid);
// buf_put_str
// file np.c line 146
static inline void buf_put_str(struct cbuf *buf, char *s, struct p9_str *ps);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// cap_free
// file /usr/include/sys/capability.h line 74
extern signed int cap_free(void *);
// cap_get_flag
// file /usr/include/sys/capability.h line 78
extern signed int cap_get_flag(struct _cap_struct *, signed int, enum anonymous_3, enum anonymous_2 *);
// cap_get_proc
// file /usr/include/sys/capability.h line 91
extern struct _cap_struct * cap_get_proc(void);
// cap_set_flag
// file /usr/include/sys/capability.h line 79
extern signed int cap_set_flag(struct _cap_struct *, enum anonymous_3, signed int, const signed int *, enum anonymous_2);
// cap_set_proc
// file /usr/include/sys/capability.h line 93
extern signed int cap_set_proc(struct _cap_struct *);
// checkauth
// file diod_auth.c line 175
static signed int checkauth(struct Npfid *fid, struct Npfid *afid, char *aname);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closelog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 175
extern void closelog(void);
// clunkafid
// file diod_auth.c line 268
static signed int clunkafid(struct Npfid *afid);
// connect
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 137
extern signed int connect(signed int, struct sockaddr *, unsigned int);
// ctime
// file /usr/include/time.h line 264
extern char * ctime(const signed long int *);
// diod_auth
// file ../libdiod/diod_auth.h line 5
signed int diod_auth(struct Npcfid *afid, unsigned int uid);
// diod_conf_add_exports
// file diod_conf.c line 355
void diod_conf_add_exports(char *path);
// diod_conf_add_listen
// file diod_conf.c line 339
void diod_conf_add_listen(char *s);
// diod_conf_clr_exports
// file diod_conf.c line 349
void diod_conf_clr_exports(void);
// diod_conf_clr_listen
// file diod_conf.c line 333
void diod_conf_clr_listen(void);
// diod_conf_fini
// file diod_conf.c line 202
void diod_conf_fini(void);
// diod_conf_get_allsquash
// file diod_conf.c line 299
signed int diod_conf_get_allsquash(void);
// diod_conf_get_auth_required
// file diod_conf.c line 268
signed int diod_conf_get_auth_required(void);
// diod_conf_get_configpath
// file diod_conf.c line 233
char * diod_conf_get_configpath(void);
// diod_conf_get_debuglevel
// file diod_conf.c line 238
signed int diod_conf_get_debuglevel(void);
// diod_conf_get_exportall
// file diod_conf.c line 410
signed int diod_conf_get_exportall(void);
// diod_conf_get_exportopts
// file diod_conf.c line 462
char * diod_conf_get_exportopts(void);
// diod_conf_get_exports
// file diod_conf.c line 347
struct list * diod_conf_get_exports(void);
// diod_conf_get_foreground
// file diod_conf.c line 258
signed int diod_conf_get_foreground(void);
// diod_conf_get_listen
// file diod_conf.c line 331
struct list * diod_conf_get_listen(void);
// diod_conf_get_logdest
// file diod_conf.c line 220
char * diod_conf_get_logdest(void);
// diod_conf_get_mounts
// file diod_conf.c line 417
struct list * diod_conf_get_mounts(void);
// diod_conf_get_nwthreads
// file diod_conf.c line 248
signed int diod_conf_get_nwthreads(void);
// diod_conf_get_runasuid
// file diod_conf.c line 321
unsigned int diod_conf_get_runasuid(void);
// diod_conf_get_squashuser
// file diod_conf.c line 309
char * diod_conf_get_squashuser(void);
// diod_conf_get_statfs_passthru
// file diod_conf.c line 278
signed int diod_conf_get_statfs_passthru(void);
// diod_conf_get_userdb
// file diod_conf.c line 288
signed int diod_conf_get_userdb(void);
// diod_conf_init
// file diod_conf.c line 176
void diod_conf_init(void);
// diod_conf_init_config_file
// file diod_conf.c line 620
void diod_conf_init_config_file(char *path);
// diod_conf_opt_allsquash
// file diod_conf.c line 300
signed int diod_conf_opt_allsquash(void);
// diod_conf_opt_auth_required
// file diod_conf.c line 269
signed int diod_conf_opt_auth_required(void);
// diod_conf_opt_configpath
// file diod_conf.c line 234
signed int diod_conf_opt_configpath(void);
// diod_conf_opt_debuglevel
// file diod_conf.c line 239
signed int diod_conf_opt_debuglevel(void);
// diod_conf_opt_exportall
// file diod_conf.c line 411
signed int diod_conf_opt_exportall(void);
// diod_conf_opt_exportopts
// file diod_conf.c line 463
signed int diod_conf_opt_exportopts(void);
// diod_conf_opt_exports
// file diod_conf.c line 348
signed int diod_conf_opt_exports(void);
// diod_conf_opt_foreground
// file diod_conf.c line 259
signed int diod_conf_opt_foreground(void);
// diod_conf_opt_listen
// file diod_conf.c line 332
signed int diod_conf_opt_listen(void);
// diod_conf_opt_logdest
// file diod_conf.c line 221
signed int diod_conf_opt_logdest(void);
// diod_conf_opt_nwthreads
// file diod_conf.c line 249
signed int diod_conf_opt_nwthreads(void);
// diod_conf_opt_runasuid
// file diod_conf.c line 322
signed int diod_conf_opt_runasuid(void);
// diod_conf_opt_squashuser
// file diod_conf.c line 310
signed int diod_conf_opt_squashuser(void);
// diod_conf_opt_statfs_passthru
// file diod_conf.c line 279
signed int diod_conf_opt_statfs_passthru(void);
// diod_conf_opt_userdb
// file diod_conf.c line 289
signed int diod_conf_opt_userdb(void);
// diod_conf_set_allsquash
// file diod_conf.c line 301
void diod_conf_set_allsquash(signed int i);
// diod_conf_set_auth_required
// file diod_conf.c line 270
void diod_conf_set_auth_required(signed int i);
// diod_conf_set_debuglevel
// file diod_conf.c line 240
void diod_conf_set_debuglevel(signed int i);
// diod_conf_set_exportall
// file diod_conf.c line 412
void diod_conf_set_exportall(signed int i);
// diod_conf_set_exportopts
// file diod_conf.c line 464
void diod_conf_set_exportopts(char *opts);
// diod_conf_set_foreground
// file diod_conf.c line 260
void diod_conf_set_foreground(signed int i);
// diod_conf_set_logdest
// file diod_conf.c line 222
void diod_conf_set_logdest(char *s);
// diod_conf_set_nwthreads
// file diod_conf.c line 250
void diod_conf_set_nwthreads(signed int i);
// diod_conf_set_runasuid
// file diod_conf.c line 323
void diod_conf_set_runasuid(unsigned int uid);
// diod_conf_set_squashuser
// file diod_conf.c line 311
void diod_conf_set_squashuser(char *user);
// diod_conf_set_statfs_passthru
// file diod_conf.c line 280
void diod_conf_set_statfs_passthru(signed int i);
// diod_conf_set_userdb
// file diod_conf.c line 290
void diod_conf_set_userdb(signed int i);
// diod_conf_validate_exports
// file diod_conf.c line 361
void diod_conf_validate_exports(void);
// diod_log_fini
// file diod_log.c line 118
void diod_log_fini(void);
// diod_log_get_dest
// file diod_log.c line 184
char * diod_log_get_dest(void);
// diod_log_init
// file ../libdiod/diod_log.h line 1
void diod_log_init(char *p);
// diod_log_msg
// file diod_log.c line 227
void diod_log_msg(const char *fmt, void **ap);
// diod_log_set_dest
// file diod_log.c line 150
void diod_log_set_dest(char *s);
// diod_sock_accept_one
// file diod_sock.c line 327
void diod_sock_accept_one(struct Npsrv *srv, signed int fd);
// diod_sock_connect
// file diod_sock.c line 487
signed int diod_sock_connect(char *name, signed int flags);
// diod_sock_connect_inet
// file ../libdiod/diod_sock.h line 14
signed int diod_sock_connect_inet(char *host, char *port, signed int flags);
// diod_sock_connect_unix
// file ../libdiod/diod_sock.h line 15
signed int diod_sock_connect_unix(char *path, signed int flags);
// diod_sock_listen
// file diod_sock.c line 263
signed int diod_sock_listen(struct list *l, struct pollfd **fdsp, signed int *nfdsp);
// diod_sock_startfd
// file diod_sock.c line 302
void diod_sock_startfd(struct Npsrv *srv, signed int fdin, signed int fdout, char *client_id, signed int flags);
// dirname
// file /usr/include/libgen.h line 26
extern char * dirname(char *);
// endmntent
// file /usr/include/mntent.h line 87
extern signed int endmntent(struct _IO_FILE *);
// err
// file ../libdiod/diod_log.h line 9
void err(const char *fmt, ...);
// err_exit
// file ../libdiod/diod_log.h line 7
void err_exit(const char *fmt, ...);
// errn
// file ../libdiod/diod_log.h line 13
void errn(signed int errnum, const char *fmt, ...);
// errn_exit
// file ../libdiod/diod_log.h line 11
void errn_exit(signed int errnum, const char *fmt, ...);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
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
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// freeaddrinfo
// file /usr/include/netdb.h line 668
extern void freeaddrinfo(struct addrinfo *);
// gai_strerror
// file /usr/include/netdb.h line 671
extern const char * gai_strerror(signed int);
// getaddrinfo
// file /usr/include/netdb.h line 662
extern signed int getaddrinfo(const char *, const char *, struct addrinfo *, struct addrinfo ** restrict );
// getegid
// file /usr/include/unistd.h line 684
extern unsigned int getegid(void);
// geteuid
// file /usr/include/unistd.h line 678
extern unsigned int geteuid(void);
// getgrouplist
// file /usr/include/grp.h line 189
extern signed int getgrouplist(const char *, unsigned int, unsigned int *, signed int *);
// getnameinfo
// file /usr/include/netdb.h line 677
extern signed int getnameinfo(struct sockaddr *, unsigned int, char *, unsigned int, char *, unsigned int, signed int);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// getpwnam
// file /usr/include/pwd.h line 116
extern struct passwd * getpwnam(const char *);
// getpwnam_r
// file /usr/include/pwd.h line 149
extern signed int getpwnam_r(const char *, struct passwd *, char *, unsigned long int, struct passwd ** restrict );
// getpwuid
// file /usr/include/pwd.h line 110
extern struct passwd * getpwuid(unsigned int);
// getpwuid_r
// file /usr/include/pwd.h line 144
extern signed int getpwuid_r(unsigned int, struct passwd *, char *, unsigned long int, struct passwd ** restrict );
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// hash_count
// file hash.c line 200
signed int hash_count(struct hash *h);
// hash_create
// file hash.c line 124
struct hash * hash_create(signed int size, unsigned int (*key_f)(const void *), signed int (*cmp_f)(const void *, const void *), void (*del_f)(void *));

//


//


//

// hash_delete_if
// file hash.c line 309
signed int hash_delete_if(struct hash *h, signed int (*arg_f)(void *, const void *, void *), void *arg);

//

// hash_destroy
// file hash.c line 154
void hash_destroy(struct hash *h);
// hash_find
// file hash.c line 217
void * hash_find(struct hash *h, const void *key);
// hash_for_each
// file hash.c line 344
signed int hash_for_each(struct hash *h, signed int (*arg_f)(void *, const void *, void *), void *arg);

//

// hash_insert
// file hash.c line 243
void * hash_insert(struct hash *h, const void *key, void *data);
// hash_is_empty
// file hash.c line 183
signed int hash_is_empty(struct hash *h);
// hash_key_string
// file hash.c line 373
unsigned int hash_key_string(const char *str);
// hash_node_alloc
// file hash.c line 391
static struct hash_node * hash_node_alloc(void);
// hash_node_free
// file hash.c line 422
static void hash_node_free(struct hash_node *node);
// hash_remove
// file hash.c line 279
void * hash_remove(struct hash *h, const void *key);
// host_prefix_end
// file hostlist.c line 473
static signed int host_prefix_end(const char *hostname);
// hostlist_coalesce
// file hostlist.c line 2011
static void hostlist_coalesce(struct hostlist *hl);
// hostlist_collapse
// file hostlist.c line 1989
static void hostlist_collapse(struct hostlist *hl);
// hostlist_copy
// file hostlist.c line 1570
struct hostlist * hostlist_copy(struct hostlist * const hl);
// hostlist_count
// file hostlist.c line 1916
signed int hostlist_count(struct hostlist *hl);
// hostlist_create
// file ../liblsd/hostlist.h line 104
struct hostlist * hostlist_create(const char *str);
// hostlist_delete
// file hostlist.c line 1815
signed int hostlist_delete(struct hostlist *hl, const char *hosts);
// hostlist_delete_host
// file hostlist.c line 1835
signed int hostlist_delete_host(struct hostlist *hl, const char *hostname);
// hostlist_delete_nth
// file hostlist.c line 1879
signed int hostlist_delete_nth(struct hostlist *hl, signed int n);
// hostlist_delete_range
// file hostlist.c line 1234
static void hostlist_delete_range(struct hostlist *hl, signed int n);
// hostlist_deranged_string
// file hostlist.c line 2104
signed long int hostlist_deranged_string(struct hostlist *hl, unsigned long int n, char *buf);
// hostlist_destroy
// file ../liblsd/hostlist.h line 117
void hostlist_destroy(struct hostlist *hl);
// hostlist_expand
// file hostlist.c line 1130
static signed int hostlist_expand(struct hostlist *hl);
// hostlist_find
// file hostlist.c line 1925
signed int hostlist_find(struct hostlist *hl, const char *hostname);
// hostlist_insert_range
// file hostlist.c line 1194
static signed int hostlist_insert_range(struct hostlist *hl, struct hostrange_components *hr, signed int n);
// hostlist_iterator_create
// file ../liblsd/hostlist.h line 314
struct hostlist_iterator * hostlist_iterator_create(struct hostlist *hl);
// hostlist_iterator_destroy
// file hostlist.c line 2265
void hostlist_iterator_destroy(struct hostlist_iterator *i);
// hostlist_iterator_new
// file hostlist.c line 2220
static struct hostlist_iterator * hostlist_iterator_new(void);
// hostlist_iterator_reset
// file hostlist.c line 2255
void hostlist_iterator_reset(struct hostlist_iterator *i);
// hostlist_new
// file hostlist.c line 1071
static struct hostlist * hostlist_new(void);
// hostlist_next
// file ../liblsd/hostlist.h line 342
char * hostlist_next(struct hostlist_iterator *i);
// hostlist_next_range
// file hostlist.c line 2351
char * hostlist_next_range(struct hostlist_iterator *i);
// hostlist_nth
// file hostlist.c line 1856
char * hostlist_nth(struct hostlist *hl, signed int n);
// hostlist_pop
// file hostlist.c line 1676
char * hostlist_pop(struct hostlist *hl);
// hostlist_pop_range
// file hostlist.c line 1740
char * hostlist_pop_range(struct hostlist *hl);
// hostlist_push
// file hostlist.c line 1617
signed int hostlist_push(struct hostlist *hl, const char *hosts);
// hostlist_push_host
// file hostlist.c line 1634
signed int hostlist_push_host(struct hostlist *hl, const char *str);
// hostlist_push_hr
// file hostlist.c line 1182
static signed int hostlist_push_hr(struct hostlist *hl, char *prefix, unsigned long int lo, unsigned long int hi, signed int width);
// hostlist_push_list
// file hostlist.c line 1658
signed int hostlist_push_list(struct hostlist *h1, struct hostlist *h2);
// hostlist_push_range
// file hostlist.c line 1142
static signed int hostlist_push_range(struct hostlist *hl, struct hostrange_components *hr);
// hostlist_ranged_string
// file hostlist.c line 2193
signed long int hostlist_ranged_string(struct hostlist *hl, unsigned long int n, char *buf);
// hostlist_remove
// file hostlist.c line 2375
signed int hostlist_remove(struct hostlist_iterator *i);
// hostlist_resize
// file hostlist.c line 1109
static signed int hostlist_resize(struct hostlist *hl, unsigned long int newsize);
// hostlist_shift
// file hostlist.c line 1715
char * hostlist_shift(struct hostlist *hl);
// hostlist_shift_iterators
// file hostlist.c line 1697
static void hostlist_shift_iterators(struct hostlist *hl, signed int idx, signed int depth, signed int n);
// hostlist_shift_range
// file hostlist.c line 1773
char * hostlist_shift_range(struct hostlist *hl);
// hostlist_sort
// file hostlist.c line 1963
void hostlist_sort(struct hostlist *hl);
// hostlist_uniq
// file hostlist.c line 2080
void hostlist_uniq(struct hostlist *hl);
// hostname_create
// file hostlist.c line 535
static struct hostname_components * hostname_create(const char *hostname);
// hostname_create_with_suffix
// file hostlist.c line 482
static struct hostname_components * hostname_create_with_suffix(const char *hostname, signed int idx);
// hostname_destroy
// file hostlist.c line 543
static void hostname_destroy(struct hostname_components *hn);
// hostname_suffix_is_valid
// file hostlist.c line 557
static signed int hostname_suffix_is_valid(struct hostname_components *hn);
// hostname_suffix_width
// file hostlist.c line 564
static signed int hostname_suffix_width(struct hostname_components *hn);
// hostrange_cmp
// file hostlist.c line 712
static signed int hostrange_cmp(struct hostrange_components *h1, struct hostrange_components *h2);
// hostrange_copy
// file hostlist.c line 655
static struct hostrange_components * hostrange_copy(struct hostrange_components *hr);
// hostrange_count
// file hostlist.c line 644
static unsigned long int hostrange_count(struct hostrange_components *hr);
// hostrange_create
// file hostlist.c line 615
static struct hostrange_components * hostrange_create(char *prefix, unsigned long int lo, unsigned long int hi, signed int width);
// hostrange_create_single
// file hostlist.c line 586
static struct hostrange_components * hostrange_create_single(const char *prefix);
// hostrange_delete_host
// file hostlist.c line 684
static struct hostrange_components * hostrange_delete_host(struct hostrange_components *hr, unsigned long int n);
// hostrange_destroy
// file hostlist.c line 669
static void hostrange_destroy(struct hostrange_components *hr);
// hostrange_empty
// file hostlist.c line 781
static signed int hostrange_empty(struct hostrange_components *hr);
// hostrange_hn_within
// file hostlist.c line 912
static signed int hostrange_hn_within(struct hostrange_components *hr, struct hostname_components *hn);
// hostrange_intersect
// file hostlist.c line 884
static struct hostrange_components * hostrange_intersect(struct hostrange_components *h1, struct hostrange_components *h2);
// hostrange_join
// file hostlist.c line 850
static signed int hostrange_join(struct hostrange_components *h1, struct hostrange_components *h2);
// hostrange_new
// file hostlist.c line 575
static struct hostrange_components * hostrange_new(void);
// hostrange_numstr
// file hostlist.c line 1043
static unsigned long int hostrange_numstr(struct hostrange_components *hr, unsigned long int n, char *buf);
// hostrange_pop
// file hostlist.c line 792
static char * hostrange_pop(struct hostrange_components *hr);
// hostrange_prefix_cmp
// file hostlist.c line 735
static signed int hostrange_prefix_cmp(struct hostrange_components *h1, struct hostrange_components *h2);
// hostrange_shift
// file hostlist.c line 814
static char * hostrange_shift(struct hostrange_components *hr);
// hostrange_to_string
// file hostlist.c line 1004
static unsigned long int hostrange_to_string(struct hostrange_components *hr, unsigned long int n, char *buf, char *separator);
// hostrange_width_combine
// file hostlist.c line 770
static signed int hostrange_width_combine(struct hostrange_components *h0, struct hostrange_components *h1);
// hostrange_within_range
// file hostlist.c line 756
static signed int hostrange_within_range(struct hostrange_components *h1, struct hostrange_components *h2);
// hosts_ctl
// file /usr/include/tcpd.h line 121
extern signed int hosts_ctl(char *, char *, char *, char *);
// hostset_copy
// file hostlist.c line 2419
struct hostset * hostset_copy(struct hostset * const set);
// hostset_count
// file hostlist.c line 2591
signed int hostset_count(struct hostset *set);
// hostset_create
// file hostlist.c line 2400
struct hostset * hostset_create(const char *hostlist);
// hostset_delete
// file hostlist.c line 2561
signed int hostset_delete(struct hostset *set, const char *hosts);
// hostset_delete_host
// file hostlist.c line 2566
signed int hostset_delete_host(struct hostset *set, const char *hostname);
// hostset_deranged_string
// file hostlist.c line 2601
signed long int hostset_deranged_string(struct hostset *set, unsigned long int n, char *buf);
// hostset_destroy
// file hostlist.c line 2435
void hostset_destroy(struct hostset *set);
// hostset_find_host
// file hostlist.c line 2518
static signed int hostset_find_host(struct hostset *set, const char *host);
// hostset_insert
// file hostlist.c line 2499
signed int hostset_insert(struct hostset *set, const char *hosts);
// hostset_insert_range
// file hostlist.c line 2447
static signed int hostset_insert_range(struct hostset *set, struct hostrange_components *hr);
// hostset_iterator_create
// file hostlist.c line 2250
struct hostlist_iterator * hostset_iterator_create(struct hostset *set);
// hostset_pop
// file hostlist.c line 2576
char * hostset_pop(struct hostset *set);
// hostset_pop_range
// file hostlist.c line 2586
char * hostset_pop_range(struct hostset *set);
// hostset_ranged_string
// file hostlist.c line 2596
signed long int hostset_ranged_string(struct hostset *set, unsigned long int n, char *buf);
// hostset_shift
// file hostlist.c line 2571
char * hostset_shift(struct hostset *set);
// hostset_shift_range
// file hostlist.c line 2581
char * hostset_shift_range(struct hostset *set);
// hostset_within
// file hostlist.c line 2537
signed int hostset_within(struct hostset *set, const char *hosts);
// htons
// file /usr/include/netinet/in.h line 379
extern unsigned short int htons(unsigned short int);
// ioctl
// file /usr/include/x86_64-linux-gnu/sys/ioctl.h line 41
extern signed int ioctl(signed int, unsigned long int, ...);
// list_alloc
// file list.c line 727
static struct list * list_alloc(void);
// list_alloc_aux
// file list.c line 823
static void * list_alloc_aux(signed int size, void *pfreelist);
// list_append
// file ../../liblsd/list.h line 129
void * list_append(struct list *l, void *x);
// list_count
// file ../../liblsd/list.h line 119
signed int list_count(struct list *l);
// list_create
// file ../../liblsd/list.h line 97
struct list * list_create(void (*f)(void *));

//

// list_delete
// file list.c line 640
signed int list_delete(struct listIterator *i);
// list_delete_all
// file ../../liblsd/list.h line 151
signed int list_delete_all(struct list *l, signed int (*f)(void *, void *), void *key);

//

// list_dequeue
// file list.c line 505
void * list_dequeue(struct list *l);
// list_destroy
// file ../../liblsd/list.h line 107
void list_destroy(struct list *l);
// list_enqueue
// file list.c line 490
void * list_enqueue(struct list *l, void *x);
// list_find
// file list.c line 611
void * list_find(struct listIterator *i, signed int (*f)(void *, void *), void *key);

//

// list_find_first
// file ../../liblsd/list.h line 141
void * list_find_first(struct list *l, signed int (*f)(void *, void *), void *key);

//

// list_for_each
// file list.c line 380
signed int list_for_each(struct list *l, signed int (*f)(void *, void *), void *arg);

//

// list_free
// file list.c line 734
static void list_free(struct list *l);
// list_free_aux
// file list.c line 829
static void list_free_aux(void *x, void *pfreelist);
// list_insert
// file list.c line 595
void * list_insert(struct listIterator *i, void *x);
// list_is_empty
// file list.c line 272
signed int list_is_empty(struct list *l);
// list_iterator_alloc
// file list.c line 757
static struct listIterator * list_iterator_alloc(void);
// list_iterator_create
// file ../../liblsd/list.h line 221
struct listIterator * list_iterator_create(struct list *l);
// list_iterator_destroy
// file ../../liblsd/list.h line 233
void list_iterator_destroy(struct listIterator *i);
// list_iterator_free
// file list.c line 764
static void list_iterator_free(struct listIterator *i);
// list_iterator_reset
// file ../../liblsd/list.h line 227
void list_iterator_reset(struct listIterator *i);
// list_mutex_is_locked
// file list.c line 839
static signed int list_mutex_is_locked(union anonymous *mutex);
// list_next
// file ../../liblsd/list.h line 240
void * list_next(struct listIterator *i);
// list_node_alloc
// file list.c line 742
static struct listNode * list_node_alloc(void);
// list_node_create
// file list.c line 656
static void * list_node_create(struct list *l, struct listNode **pp, void *x);
// list_node_destroy
// file list.c line 691
static void * list_node_destroy(struct list *l, struct listNode **pp);
// list_node_free
// file list.c line 749
static void list_node_free(struct listNode *p);
// list_peek
// file list.c line 476
void * list_peek(struct list *l);
// list_pop
// file list.c line 462
void * list_pop(struct list *l);
// list_prepend
// file list.c line 315
void * list_prepend(struct list *l, void *x);
// list_push
// file list.c line 447
void * list_push(struct list *l, void *x);
// list_remove
// file list.c line 624
void * list_remove(struct listIterator *i);
// list_sort
// file list.c line 402
void list_sort(struct list *l, signed int (*f)(void *, void *));

//

// listen
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 233
extern signed int listen(signed int, signed int);
// lsd_fatal_error
// file error.c line 13
void lsd_fatal_error(char *file, signed int line, char *mesg);
// lsd_mutex_is_locked
// file thread.c line 39
signed int lsd_mutex_is_locked(union anonymous *mutex);
// lsd_nomem_error
// file error.c line 19
void * lsd_nomem_error(char *file, signed int line, char *mesg);
// luaL_loadfile
// file /usr/include/lua5.1/lauxlib.h line 77
extern signed int luaL_loadfile(struct lua_State *, const char *);
// luaL_newstate
// file /usr/include/lua5.1/lauxlib.h line 82
extern struct lua_State * luaL_newstate(void);
// lua_close
// file /usr/include/lua5.1/lua.h line 111
extern void lua_close(struct lua_State *);
// lua_getfield
// file /usr/include/lua5.1/lua.h line 178
extern void lua_getfield(struct lua_State *, signed int, const char *);
// lua_gettable
// file /usr/include/lua5.1/lua.h line 177
extern void lua_gettable(struct lua_State *, signed int);
// lua_isnumber
// file /usr/include/lua5.1/lua.h line 135
extern signed int lua_isnumber(struct lua_State *, signed int);
// lua_isstring
// file /usr/include/lua5.1/lua.h line 136
extern signed int lua_isstring(struct lua_State *, signed int);
// lua_pcall
// file /usr/include/lua5.1/lua.h line 202
extern signed int lua_pcall(struct lua_State *, signed int, signed int, signed int);
// lua_pushinteger
// file /usr/include/lua5.1/lua.h line 162
extern void lua_pushinteger(struct lua_State *, signed long int);
// lua_settop
// file /usr/include/lua5.1/lua.h line 121
extern void lua_settop(struct lua_State *, signed int);
// lua_tolstring
// file /usr/include/lua5.1/lua.h line 149
extern const char * lua_tolstring(struct lua_State *, signed int, unsigned long int *);
// lua_tonumber
// file /usr/include/lua5.1/lua.h line 146
extern double lua_tonumber(struct lua_State *, signed int);
// lua_type
// file /usr/include/lua5.1/lua.h line 139
extern signed int lua_type(struct lua_State *, signed int);
// luaopen_base
// file /usr/include/lua5.1/lualib.h line 19
extern signed int luaopen_base(struct lua_State *);
// luaopen_math
// file /usr/include/lua5.1/lualib.h line 34
extern signed int luaopen_math(struct lua_State *);
// luaopen_string
// file /usr/include/lua5.1/lualib.h line 31
extern signed int luaopen_string(struct lua_State *);
// luaopen_table
// file /usr/include/lua5.1/lualib.h line 22
extern signed int luaopen_table(struct lua_State *);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memchr
// file /usr/include/string.h line 96
extern void * memchr(const void *, signed int, unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memmove
// file /usr/include/string.h line 50
extern void * memmove(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mount
// file /usr/include/x86_64-linux-gnu/sys/mount.h line 135
extern signed int mount(const char *, const char *, const char *, unsigned long int, const void *);
// msg
// file ../libdiod/diod_log.h line 17
void msg(const char *fmt, ...);
// msg_exit
// file ../libdiod/diod_log.h line 15
void msg_exit(const char *fmt, ...);
// munge_ctx_create
// file /usr/include/munge.h line 236
struct munge_ctx * munge_ctx_create(void);
// munge_ctx_destroy
// file /usr/include/munge.h line 250
void munge_ctx_destroy(struct munge_ctx *);
// munge_decode
// file /usr/include/munge.h line 189
enum munge_err munge_decode(const char *, struct munge_ctx *, void **, signed int *, unsigned int *, unsigned int *);
// munge_encode
// file /usr/include/munge.h line 174
enum munge_err munge_encode(char **, struct munge_ctx *, const void *, signed int);
// munge_strerror
// file /usr/include/munge.h line 210
const char * munge_strerror(enum munge_err);
// np_afid2user
// file npfs.h line 514
struct Npuser * np_afid2user(struct Npfid *afid, struct p9_str *uname, unsigned int n_uname);
// np_alloc_fcall
// file npfs.h line 417
struct Npfcall * np_alloc_fcall(signed int msize);
// np_alloc_rread
// file npfs.h line 445
struct Npfcall * np_alloc_rread(unsigned int count);
// np_assfail
// file ../libnpfs/npfs.h line 371
void np_assfail(char *ass, char *file, signed int line);
// np_attach
// file fcall.c line 137
struct Npfcall * np_attach(struct Npreq *req, struct Npfcall *tc);
// np_attach2user
// file npfs.h line 513
struct Npuser * np_attach2user(struct Npsrv *srv, struct p9_str *uname, unsigned int n_uname);
// np_auth
// file fcall.c line 80
struct Npfcall * np_auth(struct Npreq *req, struct Npfcall *tc);
// np_clunk
// file fcall.c line 528
struct Npfcall * np_clunk(struct Npreq *req, struct Npfcall *tc);
// np_conn_create
// file ../libnpfs/npfs.h line 375
struct Npconn * np_conn_create(struct Npsrv *srv, struct Nptrans *trans, char *client_id, signed int flags);
// np_conn_decref
// file conn.c line 97
void np_conn_decref(struct Npconn *conn);
// np_conn_destroy
// file conn.c line 107
static void np_conn_destroy(struct Npconn *conn);
// np_conn_flush
// file conn.c line 224
static void np_conn_flush(struct Npconn *conn);
// np_conn_get_authuser
// file conn.c line 278
signed int np_conn_get_authuser(struct Npconn *conn, unsigned int *uidp);
// np_conn_get_client_id
// file ../libnpfs/npfs.h line 379
char * np_conn_get_client_id(struct Npconn *conn);
// np_conn_incref
// file conn.c line 89
void np_conn_incref(struct Npconn *conn);
// np_conn_read_proc
// file conn.c line 159
static void * np_conn_read_proc(void *a);
// np_conn_respond
// file conn.c line 250
void np_conn_respond(struct Npreq *req);
// np_conn_set_authuser
// file conn.c line 272
void np_conn_set_authuser(struct Npconn *conn, unsigned int authuser);
// np_create_common
// file np.c line 254
static struct Npfcall * np_create_common(struct cbuf *bufp, unsigned int size, unsigned char id);
// np_create_common_static
// file np.c line 271
static struct Npfcall * np_create_common_static(struct cbuf *bufp, unsigned int size, unsigned char id, void *buf, signed int buflen);
// np_create_rattach
// file np.c line 434
struct Npfcall * np_create_rattach(struct p9_qid *qid);
// np_create_rauth
// file npfs.h line 427
struct Npfcall * np_create_rauth(struct p9_qid *aqid);
// np_create_rclunk
// file npfs.h line 441
struct Npfcall * np_create_rclunk(void);
// np_create_rflush
// file np.c line 385
struct Npfcall * np_create_rflush(void);
// np_create_rflush_static
// file np.c line 399
struct Npfcall * np_create_rflush_static(void *buf, signed int buflen);
// np_create_rfsync
// file np.c line 1136
struct Npfcall * np_create_rfsync(void);
// np_create_rgetattr
// file np.c line 926
struct Npfcall * np_create_rgetattr(unsigned long int valid, struct p9_qid *qid, unsigned int mode, unsigned int uid, unsigned int gid, unsigned long int nlink, unsigned long int rdev, unsigned long int size, unsigned long int blksize, unsigned long int blocks, unsigned long int atime_sec, unsigned long int atime_nsec, unsigned long int mtime_sec, unsigned long int mtime_nsec, unsigned long int ctime_sec, unsigned long int ctime_nsec, unsigned long int btime_sec, unsigned long int btime_nsec, unsigned long int gen, unsigned long int data_version);
// np_create_rgetlock
// file np.c line 1209
struct Npfcall * np_create_rgetlock(unsigned char type, unsigned long int start, unsigned long int length, unsigned int proc_id, char *client_id);
// np_create_rlcreate
// file np.c line 762
struct Npfcall * np_create_rlcreate(struct p9_qid *qid, unsigned int iounit);
// np_create_rlerror
// file npfs.h line 447
struct Npfcall * np_create_rlerror(unsigned int ecode);
// np_create_rlerror_static
// file np.c line 657
struct Npfcall * np_create_rlerror_static(unsigned int ecode, void *buf, signed int bufsize);
// np_create_rlink
// file np.c line 1246
struct Npfcall * np_create_rlink(void);
// np_create_rlock
// file np.c line 1172
struct Npfcall * np_create_rlock(unsigned char status);
// np_create_rlopen
// file np.c line 726
struct Npfcall * np_create_rlopen(struct p9_qid *qid, unsigned int iounit);
// np_create_rmkdir
// file np.c line 1277
struct Npfcall * np_create_rmkdir(struct p9_qid *qid);
// np_create_rmknod
// file np.c line 833
struct Npfcall * np_create_rmknod(struct p9_qid *qid);
// np_create_rread
// file np.c line 523
struct Npfcall * np_create_rread(unsigned int count, unsigned char *data);
// np_create_rreaddir
// file np.c line 1072
struct Npfcall * np_create_rreaddir(unsigned int count);
// np_create_rreadlink
// file np.c line 895
struct Npfcall * np_create_rreadlink(char *target);
// np_create_rremove
// file np.c line 629
struct Npfcall * np_create_rremove(void);
// np_create_rrename
// file np.c line 865
struct Npfcall * np_create_rrename(void);
// np_create_rrenameat
// file np.c line 1311
struct Npfcall * np_create_rrenameat(void);
// np_create_rsetattr
// file np.c line 992
struct Npfcall * np_create_rsetattr(void);
// np_create_rstatfs
// file np.c line 687
struct Npfcall * np_create_rstatfs(unsigned int type, unsigned int bsize, unsigned long int blocks, unsigned long int bfree, unsigned long int bavail, unsigned long int files, unsigned long int ffree, unsigned long int fsid, unsigned int namelen);
// np_create_rsymlink
// file np.c line 797
struct Npfcall * np_create_rsymlink(struct p9_qid *qid);
// np_create_runlinkat
// file np.c line 1342
struct Npfcall * np_create_runlinkat(void);
// np_create_rversion
// file npfs.h line 425
struct Npfcall * np_create_rversion(unsigned int msize, char *version);
// np_create_rwalk
// file npfs.h line 435
struct Npfcall * np_create_rwalk(signed int nwqid, struct p9_qid *wqids);
// np_create_rwrite
// file npfs.h line 439
struct Npfcall * np_create_rwrite(unsigned int count);
// np_create_rxattrcreate
// file np.c line 1058
struct Npfcall * np_create_rxattrcreate(void);
// np_create_rxattrwalk
// file np.c line 1023
struct Npfcall * np_create_rxattrwalk(unsigned long int size);
// np_create_tattach
// file ../libnpfs/npfs.h line 431
struct Npfcall * np_create_tattach(unsigned int fid, unsigned int afid, char *uname, char *aname, unsigned int n_uname);
// np_create_tauth
// file ../libnpfs/npfs.h line 426
struct Npfcall * np_create_tauth(unsigned int fid, char *uname, char *aname, unsigned int n_uname);
// np_create_tclunk
// file ../libnpfs/npfs.h line 440
struct Npfcall * np_create_tclunk(unsigned int fid);
// np_create_tflush
// file np.c line 370
struct Npfcall * np_create_tflush(unsigned short int oldtag);
// np_create_tfsync
// file np.c line 1121
struct Npfcall * np_create_tfsync(unsigned int fid);
// np_create_tgetattr
// file ../libnpfs/npfs.h line 466
struct Npfcall * np_create_tgetattr(unsigned int fid, unsigned long int request_mask);
// np_create_tgetlock
// file np.c line 1187
struct Npfcall * np_create_tgetlock(unsigned int fid, unsigned char type, unsigned long int start, unsigned long int length, unsigned int proc_id, char *client_id);
// np_create_tlcreate
// file ../libnpfs/npfs.h line 455
struct Npfcall * np_create_tlcreate(unsigned int fid, char *name, unsigned int flags, unsigned int mode, unsigned int gid);
// np_create_tlink
// file np.c line 1229
struct Npfcall * np_create_tlink(unsigned int dfid, unsigned int fid, char *name);
// np_create_tlock
// file np.c line 1149
struct Npfcall * np_create_tlock(unsigned int fid, unsigned char type, unsigned int flags, unsigned long int start, unsigned long int length, unsigned int proc_id, char *client_id);
// np_create_tlopen
// file ../libnpfs/npfs.h line 453
struct Npfcall * np_create_tlopen(unsigned int fid, unsigned int flags);
// np_create_tmkdir
// file ../libnpfs/npfs.h line 497
struct Npfcall * np_create_tmkdir(unsigned int dfid, char *name, unsigned int mode, unsigned int gid);
// np_create_tmknod
// file np.c line 812
struct Npfcall * np_create_tmknod(unsigned int fid, char *name, unsigned int mode, unsigned int major, unsigned int minor, unsigned int gid);
// np_create_tread
// file ../libnpfs/npfs.h line 436
struct Npfcall * np_create_tread(unsigned int fid, unsigned long int offset, unsigned int count);
// np_create_treaddir
// file ../libnpfs/npfs.h line 483
struct Npfcall * np_create_treaddir(unsigned int fid, unsigned long int offset, unsigned int count);
// np_create_treadlink
// file np.c line 879
struct Npfcall * np_create_treadlink(unsigned int fid);
// np_create_tremove
// file ../libnpfs/npfs.h line 442
struct Npfcall * np_create_tremove(unsigned int fid);
// np_create_trename
// file np.c line 848
struct Npfcall * np_create_trename(unsigned int fid, unsigned int dfid, char *name);
// np_create_trenameat
// file np.c line 1292
struct Npfcall * np_create_trenameat(unsigned int olddirfid, char *oldname, unsigned int newdirfid, char *newname);
// np_create_tsetattr
// file ../libnpfs/npfs.h line 475
struct Npfcall * np_create_tsetattr(unsigned int fid, unsigned int valid, unsigned int mode, unsigned int uid, unsigned int gid, unsigned long int size, unsigned long int atime_sec, unsigned long int atime_nsec, unsigned long int mtime_sec, unsigned long int mtime_nsec);
// np_create_tstatfs
// file np.c line 671
struct Npfcall * np_create_tstatfs(unsigned int fid);
// np_create_tsymlink
// file np.c line 778
struct Npfcall * np_create_tsymlink(unsigned int fid, char *name, char *symtgt, unsigned int gid);
// np_create_tunlinkat
// file np.c line 1325
struct Npfcall * np_create_tunlinkat(unsigned int dirfid, char *name, unsigned int flags);
// np_create_tversion
// file ../libnpfs/npfs.h line 424
struct Npfcall * np_create_tversion(unsigned int msize, char *version);
// np_create_twalk
// file ../libnpfs/npfs.h line 434
struct Npfcall * np_create_twalk(unsigned int fid, unsigned int newfid, unsigned short int nwname, char **wnames);
// np_create_twrite
// file ../libnpfs/npfs.h line 438
struct Npfcall * np_create_twrite(unsigned int fid, unsigned long int offset, unsigned int count, unsigned char *data);
// np_create_txattrcreate
// file ../libnpfs/npfs.h line 481
struct Npfcall * np_create_txattrcreate(unsigned int fid, char *name, unsigned long int size, unsigned int flag);
// np_create_txattrwalk
// file ../libnpfs/npfs.h line 479
struct Npfcall * np_create_txattrwalk(unsigned int fid, unsigned int attrfid, char *name);
// np_ctl_adddir
// file ctl.c line 224
struct Npfile * np_ctl_adddir(struct Npfile *parent, char *name);
// np_ctl_addfile
// file npfs.h line 550
struct Npfile * np_ctl_addfile(struct Npfile *parent, char *name, char * (*getf)(char *, void *), void *arg, signed int flags);

//

// np_ctl_attach
// file npfs.h line 535
struct Npfcall * np_ctl_attach(struct Npfid *fid, struct Npfid *afid, char *aname);
// np_ctl_clone
// file npfs.h line 536
signed int np_ctl_clone(struct Npfid *fid, struct Npfid *newfid);
// np_ctl_clunk
// file npfs.h line 540
struct Npfcall * np_ctl_clunk(struct Npfid *fid);
// np_ctl_delfile
// file ctl.c line 96
void np_ctl_delfile(struct Npfile *file);
// np_ctl_fiddestroy
// file npfs.h line 547
void np_ctl_fiddestroy(struct Npfid *fid);
// np_ctl_finalize
// file npfs.h line 549
void np_ctl_finalize(struct Npsrv *srv);
// np_ctl_getattr
// file npfs.h line 542
struct Npfcall * np_ctl_getattr(struct Npfid *fid, unsigned long int request_mask);
// np_ctl_initialize
// file npfs.h line 548
signed int np_ctl_initialize(struct Npsrv *srv);
// np_ctl_lopen
// file npfs.h line 541
struct Npfcall * np_ctl_lopen(struct Npfid *fid, unsigned int mode);
// np_ctl_read
// file npfs.h line 538
struct Npfcall * np_ctl_read(struct Npfid *fid, unsigned long int offset, unsigned int count, struct Npreq *req);
// np_ctl_readdir
// file npfs.h line 546
struct Npfcall * np_ctl_readdir(struct Npfid *fid, unsigned long int offset, unsigned int count, struct Npreq *req);
// np_ctl_setattr
// file npfs.h line 543
struct Npfcall * np_ctl_setattr(struct Npfid *fid, unsigned int valid, unsigned int mode, unsigned int uid, unsigned int gid, unsigned long int size, unsigned long int atime_sec, unsigned long int atime_nsec, unsigned long int mtime_sec, unsigned long int mtime_nsec);
// np_ctl_walk
// file npfs.h line 537
signed int np_ctl_walk(struct Npfid *fid, struct p9_str *wname, struct p9_qid *wqid);
// np_ctl_write
// file npfs.h line 539
struct Npfcall * np_ctl_write(struct Npfid *fid, unsigned long int offset, unsigned int count, unsigned char *data, struct Npreq *req);
// np_decode_tpools_str
// file npstring.c line 158
signed int np_decode_tpools_str(char *s, struct Npstats *stats);
// np_deserialize
// file np.c line 1379
signed int np_deserialize(struct Npfcall *fc);
// np_deserialize_p9dirent
// file ../libnpfs/npfs.h line 421
signed int np_deserialize_p9dirent(struct p9_qid *qid, unsigned long int *offset, unsigned char *type, char *name, signed int namelen, unsigned char *buf, signed int buflen);
// np_encode_tpools_str
// file npfs.h line 412
signed int np_encode_tpools_str(char **s, signed int *len, struct Npstats *stats);
// np_fdtrans_create
// file ../libnpfs/npfs.h line 521
struct Nptrans * np_fdtrans_create(signed int fdin, signed int fdout);
// np_fdtrans_destroy
// file fdtrans.c line 81
static void np_fdtrans_destroy(void *a);
// np_fdtrans_recv
// file fdtrans.c line 106
static signed int np_fdtrans_recv(struct Npfcall **fcp, unsigned int msize, void *a);
// np_fdtrans_send
// file fdtrans.c line 171
static signed int np_fdtrans_send(struct Npfcall *fc, void *a);
// np_fid_create
// file npfs.h line 388
struct Npfid * np_fid_create(struct Npconn *conn, unsigned int fid);
// np_fid_decref
// file npfs.h line 391
void np_fid_decref(struct Npfid **fp);
// np_fid_decref_bynum
// file fidpool.c line 308
void np_fid_decref_bynum(struct Npconn *conn, unsigned int fid);
// np_fid_find
// file npfs.h line 387
struct Npfid * np_fid_find(struct Npconn *conn, unsigned int fid);
// np_fid_incref
// file npfs.h line 390
struct Npfid * np_fid_incref(struct Npfid *f);
// np_fidpool_count
// file fidpool.c line 140
signed int np_fidpool_count(struct Npfidpool *pool);
// np_fidpool_create
// file npfs.h line 384
struct Npfidpool * np_fidpool_create(void);
// np_fidpool_destroy
// file npfs.h line 385
signed int np_fidpool_destroy(struct Npfidpool *pool);
// np_finalize_rreaddir
// file np.c line 1088
void np_finalize_rreaddir(struct Npfcall *fc, unsigned int count);
// np_flush
// file npfsimpl.h line 29
signed int np_flush(struct Npreq *req, struct Npfcall *tc);
// np_fsync
// file fcall.c line 1037
struct Npfcall * np_fsync(struct Npreq *req, struct Npfcall *tc);
// np_getattr
// file fcall.c line 835
struct Npfcall * np_getattr(struct Npreq *req, struct Npfcall *tc);
// np_getlock
// file fcall.c line 1105
struct Npfcall * np_getlock(struct Npreq *req, struct Npfcall *tc);
// np_init_error_key
// file error.c line 41
static void np_init_error_key(void);
// np_lcreate
// file fcall.c line 660
struct Npfcall * np_lcreate(struct Npreq *req, struct Npfcall *tc);
// np_link
// file fcall.c line 1141
struct Npfcall * np_link(struct Npreq *req, struct Npfcall *tc);
// np_lock
// file fcall.c line 1068
struct Npfcall * np_lock(struct Npreq *req, struct Npfcall *tc);
// np_logerr
// file npfs.h line 364
void np_logerr(struct Npsrv *srv, const char *fmt, ...);
// np_logmsg
// file npfs.h line 366
void np_logmsg(struct Npsrv *srv, const char *fmt, ...);
// np_lopen
// file fcall.c line 627
struct Npfcall * np_lopen(struct Npreq *req, struct Npfcall *tc);
// np_mkdir
// file fcall.c line 1180
struct Npfcall * np_mkdir(struct Npreq *req, struct Npfcall *tc);
// np_mknod
// file fcall.c line 733
struct Npfcall * np_mknod(struct Npreq *req, struct Npfcall *tc);
// np_peek_size
// file npfs.h line 416
unsigned int np_peek_size(unsigned char *buf, signed int len);
// np_post_check
// file np.c line 290
static struct Npfcall * np_post_check(struct Npfcall *fc, struct cbuf *bufp);
// np_postprocess_flush
// file srv.c line 706
static void np_postprocess_flush(struct Npreq *req);
// np_postprocess_request
// file srv.c line 655
static void np_postprocess_request(struct Npreq *req, struct Npfcall *rc);
// np_preprocess_request
// file srv.c line 401
static void np_preprocess_request(struct Npreq *req);
// np_printdata
// file fmt.c line 111
static void np_printdata(char *s, signed int len, unsigned char *buf, signed int buflen);
// np_printdents
// file fmt.c line 102
static void np_printdents(char *s, signed int len, unsigned char *buf, signed int buflen);
// np_printlockstatus
// file fmt.c line 138
static void np_printlockstatus(char *s, signed int len, unsigned char status);
// np_printlocktype
// file fmt.c line 119
static void np_printlocktype(char *s, signed int len, unsigned char type);
// np_printqid
// file fmt.c line 43
static void np_printqid(char *s, signed int len, struct p9_qid *q);
// np_process_request
// file srv.c line 537
static struct Npfcall * np_process_request(struct Npreq *req, struct Nptpool *tp);
// np_read
// file fcall.c line 418
struct Npfcall * np_read(struct Npreq *req, struct Npfcall *tc);
// np_readdir
// file fcall.c line 1002
struct Npfcall * np_readdir(struct Npreq *req, struct Npfcall *tc);
// np_readlink
// file fcall.c line 808
struct Npfcall * np_readlink(struct Npreq *req, struct Npfcall *tc);
// np_remove
// file fcall.c line 567
struct Npfcall * np_remove(struct Npreq *req, struct Npfcall *tc);
// np_rename
// file fcall.c line 769
struct Npfcall * np_rename(struct Npreq *req, struct Npfcall *tc);
// np_renameat
// file fcall.c line 1219
struct Npfcall * np_renameat(struct Npreq *req, struct Npfcall *tc);
// np_req_alloc
// file npfsimpl.h line 60
struct Npreq * np_req_alloc(struct Npconn *conn, struct Npfcall *tc);
// np_req_ref
// file srv.c line 815
struct Npreq * np_req_ref(struct Npreq *req);
// np_req_respond
// file srv.c line 753
void np_req_respond(struct Npreq *req, struct Npfcall *rc);
// np_req_respond_error
// file srv.c line 767
void np_req_respond_error(struct Npreq *req, signed int ecode);
// np_req_respond_flush
// file npfs.h line 363
void np_req_respond_flush(struct Npreq *req);
// np_req_unref
// file npfsimpl.h line 62
void np_req_unref(struct Npreq *req);
// np_rerror
// file ../libnpfs/npfs.h line 528
unsigned long int np_rerror(void);
// np_serialize_p9dirent
// file np.c line 1682
signed int np_serialize_p9dirent(struct p9_qid *qid, unsigned long int offset, unsigned char type, char *name, unsigned char *buf, signed int buflen);
// np_set_rread_count
// file npfs.h line 446
void np_set_rread_count(struct Npfcall *fc, unsigned int count);
// np_set_tag
// file ../libnpfs/npfs.h line 423
void np_set_tag(struct Npfcall *fc, unsigned short int tag);
// np_setattr
// file fcall.c line 862
struct Npfcall * np_setattr(struct Npreq *req, struct Npfcall *tc);
// np_setfsid
// file npfs.h line 515
signed int np_setfsid(struct Npreq *req, struct Npuser *u, unsigned int gid_override);
// np_sndump
// file fmt.c line 66
static void np_sndump(char *s, signed int len, unsigned char *data, signed int datalen);
// np_snprintfcall
// file npfs.h line 506
void np_snprintfcall(char *s, signed int len, struct Npfcall *fc);
// np_srv_add_conn
// file npfs.h line 359
signed int np_srv_add_conn(struct Npsrv *srv, struct Npconn *conn);
// np_srv_add_req
// file npfsimpl.h line 58
void np_srv_add_req(struct Npsrv *srv, struct Npreq *req);
// np_srv_add_workreq
// file srv.c line 193
static void np_srv_add_workreq(struct Nptpool *tp, struct Npreq *req);
// np_srv_create
// file srv.c line 58
struct Npsrv * np_srv_create(signed int nwthread, signed int flags);
// np_srv_destroy
// file srv.c line 95
void np_srv_destroy(struct Npsrv *srv);
// np_srv_remove_conn
// file npfs.h line 358
void np_srv_remove_conn(struct Npsrv *srv, struct Npconn *conn);
// np_srv_remove_req
// file npfsimpl.h line 59
void np_srv_remove_req(struct Nptpool *tp, struct Npreq *req);
// np_srv_remove_workreq
// file srv.c line 204
static void np_srv_remove_workreq(struct Nptpool *tp, struct Npreq *req);
// np_srv_wait_conncount
// file srv.c line 150
void np_srv_wait_conncount(struct Npsrv *srv, signed int count);
// np_statfs
// file fcall.c line 601
struct Npfcall * np_statfs(struct Npreq *req, struct Npfcall *tc);
// np_str9cmp
// file npstring.c line 85
signed int np_str9cmp(struct p9_str *s1, struct p9_str *s2);
// np_strcmp
// file ../libnpfs/npfs.h line 405
signed int np_strcmp(struct p9_str *str, char *cs);
// np_strdup
// file npfs.h line 404
char * np_strdup(struct p9_str *str);
// np_strncmp
// file npstring.c line 72
signed int np_strncmp(struct p9_str *str, char *cs, signed int len);
// np_strzero
// file npstring.c line 39
void np_strzero(struct p9_str *str);
// np_symlink
// file fcall.c line 699
struct Npfcall * np_symlink(struct Npreq *req, struct Npfcall *tc);
// np_timestr
// file fmt.c line 89
static char * np_timestr(const unsigned long int sec, const unsigned long int nsec);
// np_tpool_cleanup
// file srv.c line 368
static void np_tpool_cleanup(struct Npsrv *srv);
// np_tpool_create
// file srv.c line 277
static struct Nptpool * np_tpool_create(struct Npsrv *srv, char *name);
// np_tpool_decref
// file npfs.h line 369
void np_tpool_decref(struct Nptpool *tp);
// np_tpool_destroy
// file srv.c line 244
static void np_tpool_destroy(struct Nptpool *tp);
// np_tpool_incref
// file npfs.h line 368
void np_tpool_incref(struct Nptpool *tp);
// np_tpool_select
// file srv.c line 317
void np_tpool_select(struct Npreq *req);
// np_trans_create
// file npfs.h line 395
struct Nptrans * np_trans_create(void *aux, signed int (*recv)(struct Npfcall **, unsigned int, void *), signed int (*send)(struct Npfcall *, void *), void (*destroy)(void *));
// np_trans_create::destroy_object
//
void destroy_object(void *);
// np_trans_create::recv_object
//
signed int recv_object(struct Npfcall **, unsigned int, void *);
// np_trans_create::send_object
//
signed int send_object(struct Npfcall *, void *);
// np_trans_destroy
// file ../libnpfs/npfs.h line 398
void np_trans_destroy(struct Nptrans *trans);
// np_trans_recv
// file ../libnpfs/npfs.h line 400
signed int np_trans_recv(struct Nptrans *trans, struct Npfcall **fcp, unsigned int msize);
// np_trans_send
// file ../libnpfs/npfs.h line 399
signed int np_trans_send(struct Nptrans *trans, struct Npfcall *fc);
// np_uerror
// file ../libnpfs/npfs.h line 529
void np_uerror(unsigned long int ecode);
// np_uid2user
// file user.c line 443
struct Npuser * np_uid2user(struct Npsrv *srv, unsigned int uid);
// np_uname2user
// file user.c line 427
struct Npuser * np_uname2user(struct Npsrv *srv, char *uname);
// np_unlinkat
// file fcall.c line 1258
struct Npfcall * np_unlinkat(struct Npreq *req, struct Npfcall *tc);
// np_user_decref
// file npfs.h line 510
void np_user_decref(struct Npuser *u);
// np_user_incref
// file npfs.h line 509
void np_user_incref(struct Npuser *u);
// np_usercache_create
// file npfs.h line 517
signed int np_usercache_create(struct Npsrv *srv);
// np_usercache_destroy
// file npfs.h line 518
void np_usercache_destroy(struct Npsrv *srv);
// np_usercache_flush
// file user.c line 459
void np_usercache_flush(struct Npsrv *srv);
// np_version
// file fcall.c line 42
struct Npfcall * np_version(struct Npreq *req, struct Npfcall *tc);
// np_walk
// file fcall.c line 316
struct Npfcall * np_walk(struct Npreq *req, struct Npfcall *tc);
// np_write
// file fcall.c line 473
struct Npfcall * np_write(struct Npreq *req, struct Npfcall *tc);
// np_wthread_create
// file srv.c line 216
static signed int np_wthread_create(struct Nptpool *tp);
// np_wthread_proc
// file srv.c line 716
static void * np_wthread_proc(void *a);
// np_xattrcreate
// file fcall.c line 972
struct Npfcall * np_xattrcreate(struct Npreq *req, struct Npfcall *tc);
// np_xattrwalk
// file fcall.c line 910
struct Npfcall * np_xattrwalk(struct Npreq *req, struct Npfcall *tc);
// npc_aget
// file read.c line 109
char * npc_aget(struct Npcfid *root, char *path);
// npc_attach
// file ../libnpclient/npclient.h line 78
struct Npcfid * npc_attach(struct Npcfsys *fs, struct Npcfid *afid, char *aname, unsigned int uid);
// npc_auth
// file ../libnpclient/npclient.h line 72
struct Npcfid * npc_auth(struct Npcfsys *fs, char *aname, unsigned int uid, signed int (*auth)(struct Npcfid *, unsigned int));
// npc_auth::auth_object
//
signed int auth_object(struct Npcfid *, unsigned int);
// npc_chmod
// file chmod.c line 81
signed int npc_chmod(struct Npcfid *root, char *path, unsigned int mode);
// npc_chown
// file chmod.c line 111
signed int npc_chown(struct Npcfid *root, char *path, unsigned int owner, unsigned int group);
// npc_clone
// file walk.c line 44
struct Npcfid * npc_clone(struct Npcfid *fid);
// npc_clunk
// file ../libnpclient/npclient.h line 83
signed int npc_clunk(struct Npcfid *fid);
// npc_create
// file open.c line 49
signed int npc_create(struct Npcfid *fid, char *name, unsigned int flags, unsigned int mode, unsigned int gid);
// npc_create_bypath
// file open.c line 74
struct Npcfid * npc_create_bypath(struct Npcfid *root, char *path, unsigned int flags, unsigned int mode, unsigned int gid);
// npc_create_fsys
// file fsys.c line 52
struct Npcfsys * npc_create_fsys(signed int rfd, signed int wfd, signed int msize, signed int flags);
// npc_create_mtfsys
// file mtfsys.c line 66
struct Npcfsys * npc_create_mtfsys(signed int rfd, signed int wfd, signed int msize, signed int flags);
// npc_create_pool
// file npcimpl.h line 90
struct Npcpool * npc_create_pool(unsigned int maxid);
// npc_decref_fsys
// file fsys.c line 103
static void npc_decref_fsys(struct Npcfsys *fs);
// npc_decref_fsys_link1
// file mtfsys.c line 164
static void npc_decref_fsys_link1(struct Npcfsys *fs_link1);
// npc_destroy_pool
// file npcimpl.h line 91
void npc_destroy_pool(struct Npcpool *p);
// npc_disconnect_fsys
// file mtfsys.c line 128
static void npc_disconnect_fsys(struct Npcfsys *fs);
// npc_fchmod
// file chmod.c line 73
signed int npc_fchmod(struct Npcfid *fid, unsigned int mode);
// npc_fchown
// file chmod.c line 99
signed int npc_fchown(struct Npcfid *fid, unsigned int owner, unsigned int group);
// npc_fid_alloc
// file fid.c line 44
struct Npcfid * npc_fid_alloc(struct Npcfsys *fs);
// npc_fid_free
// file fid.c line 65
void npc_fid_free(struct Npcfid *fid);
// npc_finish
// file ../libnpclient/npclient.h line 65
void npc_finish(struct Npcfsys *fs);
// npc_fstat
// file stat.c line 93
signed int npc_fstat(struct Npcfid *fid, struct stat *sb);
// npc_ftruncate
// file chmod.c line 129
signed int npc_ftruncate(struct Npcfid *fid, signed long int length);
// npc_futime
// file chmod.c line 155
signed int npc_futime(struct Npcfid *fid, struct utimbuf *times);
// npc_get
// file read.c line 84
signed int npc_get(struct Npcfid *root, char *path, void *buf, unsigned int count);
// npc_get_id
// file npcimpl.h line 92
unsigned int npc_get_id(struct Npcpool *p);
// npc_getattr
// file stat.c line 48
signed int npc_getattr(struct Npcfid *fid, unsigned long int request_mask, unsigned long int *valid, struct p9_qid *qid, unsigned int *mode, unsigned int *uid, unsigned int *gid, unsigned long int *nlink, unsigned long int *rdev, unsigned long int *size, unsigned long int *blksize, unsigned long int *blocks, unsigned long int *atime_sec, unsigned long int *atime_nsec, unsigned long int *mtime_sec, unsigned long int *mtime_nsec, unsigned long int *ctime_sec, unsigned long int *ctime_nsec, unsigned long int *btime_sec, unsigned long int *btime_nsec, unsigned long int *gen, unsigned long int *data_version);
// npc_gets
// file read.c line 205
char * npc_gets(struct Npcfid *fid, char *buf, unsigned int count);
// npc_getxattr
// file xattr.c line 129
signed long int npc_getxattr(struct Npcfid *root, char *path, char *attr, char *buf, unsigned long int size);
// npc_incref_fsys
// file fsys.c line 95
static void npc_incref_fsys(struct Npcfsys *fs);
// npc_incref_fsys_link1
// file mtfsys.c line 156
static void npc_incref_fsys_link1(struct Npcfsys *fs_link1);
// npc_listxattr
// file xattr.c line 93
signed long int npc_listxattr(struct Npcfid *root, char *path, char *buf, unsigned long int size);
// npc_lseek
// file open.c line 151
unsigned long int npc_lseek(struct Npcfid *fid, unsigned long int offset, signed int whence);
// npc_mkdir
// file mkdir.c line 47
signed int npc_mkdir(struct Npcfid *fid, char *name, unsigned int mode);
// npc_mkdir_bypath
// file mkdir.c line 68
signed int npc_mkdir_bypath(struct Npcfid *root, char *path, unsigned int mode);
// npc_mount
// file mount.c line 176
struct Npcfid * npc_mount(signed int rfd, signed int wfd, signed int msize, char *aname, signed int (*auth)(struct Npcfid *, unsigned int));
// npc_mount::auth_object
//
signed int auth_object(struct Npcfid *, unsigned int);
// npc_open
// file open.c line 109
signed int npc_open(struct Npcfid *fid, unsigned int flags);
// npc_open_bypath
// file open.c line 135
struct Npcfid * npc_open_bypath(struct Npcfid *root, char *path, unsigned int flags);
// npc_opendir
// file readdir.c line 74
struct Npcfid * npc_opendir(struct Npcfid *root, char *path);
// npc_pread
// file read.c line 47
signed int npc_pread(struct Npcfid *fid, void *buf, unsigned int count, unsigned long int offset);
// npc_put
// file write.c line 82
signed int npc_put(struct Npcfid *root, char *path, void *buf, unsigned int count);
// npc_put_id
// file npcimpl.h line 93
void npc_put_id(struct Npcpool *p, unsigned int id);
// npc_puts
// file ../libnpclient/npclient.h line 236
signed int npc_puts(struct Npcfid *fid, char *buf);
// npc_pwrite
// file write.c line 47
signed int npc_pwrite(struct Npcfid *fid, void *buf, unsigned int count, unsigned long int offset);
// npc_read
// file read.c line 73
signed int npc_read(struct Npcfid *fid, void *buf, unsigned int count);
// npc_read_proc
// file mtfsys.c line 289
static void * npc_read_proc(void *a);
// npc_readdir
// file readdir.c line 51
signed int npc_readdir(struct Npcfid *fid, unsigned long int offset, char *data, unsigned int count);
// npc_readdir_r
// file readdir.c line 107
signed int npc_readdir_r(struct Npcfid *fid, struct dirent *entry, struct dirent **result);
// npc_remove
// file remove.c line 47
signed int npc_remove(struct Npcfid *fid);
// npc_remove_bypath
// file remove.c line 69
signed int npc_remove_bypath(struct Npcfid *root, char *path);
// npc_reqalloc
// file mtfsys.c line 517
static struct Npcreq * npc_reqalloc();
// npc_reqfree
// file mtfsys.c line 542
static void npc_reqfree(struct Npcreq *req);
// npc_rpc
// file fsys.c line 130
static signed int npc_rpc(struct Npcfsys *fs, struct Npfcall *tc, struct Npfcall **rcp);
// npc_rpc_link1
// file mtfsys.c line 473
static signed int npc_rpc_link1(struct Npcfsys *fs_link1, struct Npfcall *tc_link1, struct Npfcall **rc);
// npc_rpc_cb
// file mtfsys.c line 460
static void npc_rpc_cb(struct Npcreq *req, void *cba);
// npc_rpcnb
// file mtfsys.c line 421
static signed int npc_rpcnb(struct Npcfsys *fs, struct Npfcall *tc, void (*cb)(struct Npcreq *, void *), void *cba);

//

// npc_seekdir
// file readdir.c line 146
void npc_seekdir(struct Npcfid *fid, signed long int offset);
// npc_setattr
// file chmod.c line 49
signed int npc_setattr(struct Npcfid *fid, unsigned int valid, unsigned int mode, unsigned int uid, unsigned int gid, unsigned long int size, unsigned long int atime_sec, unsigned long int atime_nsec, unsigned long int mtime_sec, unsigned long int mtime_nsec);
// npc_setxattr
// file xattr.c line 165
signed int npc_setxattr(struct Npcfid *root, char *path, char *name, char *val, unsigned long int size, signed int flags);
// npc_start
// file ../libnpclient/npclient.h line 61
struct Npcfsys * npc_start(signed int rfd, signed int wfd, signed int msize, signed int flags);
// npc_stat
// file stat.c line 133
signed int npc_stat(struct Npcfid *root, char *path, struct stat *sb);
// npc_telldir
// file readdir.c line 153
signed long int npc_telldir(struct Npcfid *fid);
// npc_truncate
// file chmod.c line 137
signed int npc_truncate(struct Npcfid *root, char *path, signed long int length);
// npc_umount
// file mount.c line 203
void npc_umount(struct Npcfid *fid);
// npc_utime
// file chmod.c line 175
signed int npc_utime(struct Npcfid *root, char *path, struct utimbuf *times);
// npc_walk
// file npclient.h line 117
struct Npcfid * npc_walk(struct Npcfid *nfid, char *path);
// npc_write
// file write.c line 71
signed int npc_write(struct Npcfid *fid, void *buf, unsigned int count);
// npc_write_proc
// file mtfsys.c line 374
static void * npc_write_proc(void *a);
// npc_xattrcreate
// file xattr.c line 72
signed int npc_xattrcreate(struct Npcfid *fid, char *name, unsigned long int attr_size, unsigned int flags);
// npc_xattrwalk
// file xattr.c line 51
signed long int npc_xattrwalk(struct Npcfid *fid, struct Npcfid *attrfid, char *name);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// openlog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 181
extern void openlog(const char *, signed int, signed int);
// opt_addf
// file opt.h line 9
signed int opt_addf(struct opt_struct *o, const char *fmt, ...);
// opt_check_allowed_csv
// file opt.h line 19
signed int opt_check_allowed_csv(struct opt_struct *o, const char *csv);
// opt_create
// file opt.h line 3
struct opt_struct * opt_create(void);
// opt_csv
// file opt.h line 7
char * opt_csv(struct opt_struct *o);
// opt_delete
// file opt.h line 14
signed int opt_delete(struct opt_struct *o, char *key);
// opt_destroy
// file opt.h line 5
void opt_destroy(struct opt_struct *o);
// opt_find
// file opt.h line 12
char * opt_find(struct opt_struct *o, char *key);
// opt_scanf
// file opt.h line 16
signed int opt_scanf(struct opt_struct *o, const char *fmt, ...);
// opt_vscanf
// file ../../utils/opt.c line 185
signed int opt_vscanf(struct opt_struct *o, const char *fmt, void **ap);
// prctl
// file /usr/include/x86_64-linux-gnu/sys/prctl.h line 27
extern signed int prctl(signed int, ...);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous_0 *);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous_0 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous_0 *, const union anonymous_6 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_0 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_0 *, union anonymous *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_detach
// file /usr/include/pthread.h line 273
extern signed int pthread_detach(unsigned long int);
// pthread_getspecific
// file /usr/include/pthread.h line 1121
extern void * pthread_getspecific(unsigned int);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_key_create
// file /usr/include/pthread.h line 1113
extern signed int pthread_key_create(unsigned int *, void (*)(void *));
// pthread_kill
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 35
extern signed int pthread_kill(unsigned long int, signed int);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous *, const union anonymous_6 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_trylock
// file /usr/include/pthread.h line 760
extern signed int pthread_mutex_trylock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// pthread_once
// file /usr/include/pthread.h line 496
extern signed int pthread_once(signed int *, void (*)(void));
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// pthread_setspecific
// file /usr/include/pthread.h line 1124
extern signed int pthread_setspecific(unsigned int, const void *);
// qsort
// file /usr/include/stdlib.h line 764
extern void qsort(void *, unsigned long int, unsigned long int, signed int (*)(const void *, const void *));
// raise
// file /usr/include/signal.h line 139
extern signed int raise(signed int);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// readafid
// file diod_auth.c line 221
static signed int readafid(struct Npfid *afid, unsigned long int offset, unsigned int count, unsigned char *data);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// remove
// file /usr/include/stdio.h line 178
extern signed int remove(const char *);
// seteuid
// file /usr/include/unistd.h line 710
extern signed int seteuid(unsigned int);
// setfsgid
// file /usr/include/x86_64-linux-gnu/sys/fsuid.h line 31
extern signed int setfsgid(unsigned int);
// setfsuid
// file /usr/include/x86_64-linux-gnu/sys/fsuid.h line 28
extern signed int setfsuid(unsigned int);
// setmntent
// file /usr/include/mntent.h line 66
extern struct _IO_FILE * setmntent(const char *, const char *);
// setsockopt
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 226
extern signed int setsockopt(signed int, signed int, signed int, const void *, unsigned int);
// shutdown
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 261
extern signed int shutdown(signed int, signed int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// spf
// file npfs.h line 408
void spf(char *s, signed int len, const char *fmt, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// startauth
// file diod_auth.c line 150
static signed int startauth(struct Npfid *afid, char *aname, struct p9_qid *aqid);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 208
extern signed int stat(const char *, struct stat *);
// strcasecmp
// file /usr/include/string.h line 533
extern signed int strcasecmp(const char *, const char *);
// strcat
// file /usr/include/string.h line 137
extern char * strcat(char *, const char *);
// strchr
// file /usr/include/string.h line 235
extern char * strchr(const char *, signed int);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// strerror_r
// file /usr/include/string.h line 437
extern char * strerror_r(signed int, char *, unsigned long int);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncasecmp
// file /usr/include/string.h line 537
extern signed int strncasecmp(const char *, const char *, unsigned long int);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// strtok_r
// file /usr/include/string.h line 358
extern char * strtok_r(char *, const char *, char ** restrict );
// strtoul
// file /usr/include/stdlib.h line 187
extern unsigned long int strtoul(const char *, char ** restrict , signed int);
// syscall
// file /usr/include/unistd.h line 1058
extern signed long int syscall(signed long int, ...);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// syslog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 190
extern void syslog(signed int, const char *, ...);
// system
// file /usr/include/stdlib.h line 716
extern signed int system(const char *);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// umask
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 311
extern unsigned int umask(unsigned int);
// usage
// file diodmount.c line 114
static void usage(void);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// vaspf
// file npstring.c line 94
static signed int vaspf(char **sp, signed int *lp, const char *fmt, void **ap);
// vasprintf
// file /usr/include/stdio.h line 399
extern signed int vasprintf(char ** restrict , const char *, void **);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);
// vsscanf
// file /usr/include/stdio.h line 483
extern signed int vsscanf(const char *, const char *, void **);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// writeafid
// file diod_auth.c line 229
static signed int writeafid(struct Npfid *afid, unsigned long int offset, unsigned int count, unsigned char *data);

struct anonymous_5
{
  // opt
  char *opt;
  // flag
  unsigned long int flag;
};

struct anonymous_13
{
  // path
  char *path;
  // opts
  char *opts;
  // oflags
  signed int oflags;
  // users
  char *users;
  // hosts
  char *hosts;
};

struct anonymous_11
{
  // s
  char *s;
  // n
  signed int n;
};

struct anonymous_4
{
  // file
  struct Npfile *file;
  // data
  void *data;
};

struct anonymous_9
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

struct anonymous_12
{
  // debuglevel
  signed int debuglevel;
  // nwthreads
  signed int nwthreads;
  // foreground
  signed int foreground;
  // auth_required
  signed int auth_required;
  // statfs_passthru
  signed int statfs_passthru;
  // userdb
  signed int userdb;
  // allsquash
  signed int allsquash;
  // squashuser
  char *squashuser;
  // runasuid
  unsigned int runasuid;
  // listen
  struct list *listen;
  // exportall
  signed int exportall;
  // exportopts
  char *exportopts;
  // exports
  struct list *exports;
  // configpath
  char *configpath;
  // logdest
  char *logdest;
  // ro_mask
  signed int ro_mask;
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

union anonymous
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct anonymous_1
{
  // lock
  union anonymous lock;
  // users
  struct Npuser *users;
  // ttl
  signed int ttl;
};

union anonymous_15
{
  // __u6_addr8
  unsigned char __u6_addr8[16l];
  // __u6_addr16
  unsigned short int __u6_addr16[8l];
  // __u6_addr32
  unsigned int __u6_addr32[4l];
};

union anonymous_6
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_0
{
  // __data
  struct anonymous_9 __data;
  // __size
  char __size[48l];
  // __align
  signed long long int __align;
};

struct p9_rlerror
{
  // ecode
  unsigned int ecode;
};

struct p9_tstatfs
{
  // fid
  unsigned int fid;
};

struct p9_rstatfs
{
  // type
  unsigned int type;
  // bsize
  unsigned int bsize;
  // blocks
  unsigned long int blocks;
  // bfree
  unsigned long int bfree;
  // bavail
  unsigned long int bavail;
  // files
  unsigned long int files;
  // ffree
  unsigned long int ffree;
  // fsid
  unsigned long int fsid;
  // namelen
  unsigned int namelen;
};

struct p9_tlopen
{
  // fid
  unsigned int fid;
  // flags
  unsigned int flags;
};

struct p9_qid
{
  // type
  unsigned char type;
  // version
  unsigned int version;
  // path
  unsigned long int path;
};

struct p9_rlopen
{
  // qid
  struct p9_qid qid;
  // iounit
  unsigned int iounit;
};

struct p9_str
{
  // len
  unsigned short int len;
  // str
  char *str;
};

struct p9_tlcreate
{
  // fid
  unsigned int fid;
  // name
  struct p9_str name;
  // flags
  unsigned int flags;
  // mode
  unsigned int mode;
  // gid
  unsigned int gid;
};

struct p9_rlcreate
{
  // qid
  struct p9_qid qid;
  // iounit
  unsigned int iounit;
};

struct p9_tsymlink
{
  // fid
  unsigned int fid;
  // name
  struct p9_str name;
  // symtgt
  struct p9_str symtgt;
  // gid
  unsigned int gid;
};

struct p9_rsymlink
{
  // qid
  struct p9_qid qid;
};

struct p9_tmknod
{
  // fid
  unsigned int fid;
  // name
  struct p9_str name;
  // mode
  unsigned int mode;
  // major
  unsigned int major;
  // minor
  unsigned int minor;
  // gid
  unsigned int gid;
};

struct p9_rmknod
{
  // qid
  struct p9_qid qid;
};

struct p9_trename
{
  // fid
  unsigned int fid;
  // dfid
  unsigned int dfid;
  // name
  struct p9_str name;
};

struct p9_rrename
{
};

struct p9_treadlink
{
  // fid
  unsigned int fid;
};

struct p9_rreadlink
{
  // target
  struct p9_str target;
};

struct p9_tgetattr
{
  // fid
  unsigned int fid;
  // request_mask
  unsigned long int request_mask;
};

struct p9_rgetattr
{
  // valid
  unsigned long int valid;
  // qid
  struct p9_qid qid;
  // mode
  unsigned int mode;
  // uid
  unsigned int uid;
  // gid
  unsigned int gid;
  // nlink
  unsigned long int nlink;
  // rdev
  unsigned long int rdev;
  // size
  unsigned long int size;
  // blksize
  unsigned long int blksize;
  // blocks
  unsigned long int blocks;
  // atime_sec
  unsigned long int atime_sec;
  // atime_nsec
  unsigned long int atime_nsec;
  // mtime_sec
  unsigned long int mtime_sec;
  // mtime_nsec
  unsigned long int mtime_nsec;
  // ctime_sec
  unsigned long int ctime_sec;
  // ctime_nsec
  unsigned long int ctime_nsec;
  // btime_sec
  unsigned long int btime_sec;
  // btime_nsec
  unsigned long int btime_nsec;
  // gen
  unsigned long int gen;
  // data_version
  unsigned long int data_version;
};

struct p9_tsetattr
{
  // fid
  unsigned int fid;
  // valid
  unsigned int valid;
  // mode
  unsigned int mode;
  // uid
  unsigned int uid;
  // gid
  unsigned int gid;
  // size
  unsigned long int size;
  // atime_sec
  unsigned long int atime_sec;
  // atime_nsec
  unsigned long int atime_nsec;
  // mtime_sec
  unsigned long int mtime_sec;
  // mtime_nsec
  unsigned long int mtime_nsec;
};

struct p9_rsetattr
{
};

struct p9_txattrwalk
{
  // fid
  unsigned int fid;
  // attrfid
  unsigned int attrfid;
  // name
  struct p9_str name;
};

struct p9_rxattrwalk
{
  // size
  unsigned long int size;
};

struct p9_txattrcreate
{
  // fid
  unsigned int fid;
  // name
  struct p9_str name;
  // size
  unsigned long int size;
  // flag
  unsigned int flag;
};

struct p9_rxattrcreate
{
};

struct p9_treaddir
{
  // fid
  unsigned int fid;
  // offset
  unsigned long int offset;
  // count
  unsigned int count;
};

struct p9_rreaddir
{
  // count
  unsigned int count;
  // data
  unsigned char *data;
};

struct p9_tfsync
{
  // fid
  unsigned int fid;
};

struct p9_rfsync
{
};

struct p9_tlock
{
  // fid
  unsigned int fid;
  // type
  unsigned char type;
  // flags
  unsigned int flags;
  // start
  unsigned long int start;
  // length
  unsigned long int length;
  // proc_id
  unsigned int proc_id;
  // client_id
  struct p9_str client_id;
};

struct p9_rlock
{
  // status
  unsigned char status;
};

struct p9_tgetlock
{
  // fid
  unsigned int fid;
  // type
  unsigned char type;
  // start
  unsigned long int start;
  // length
  unsigned long int length;
  // proc_id
  unsigned int proc_id;
  // client_id
  struct p9_str client_id;
};

struct p9_rgetlock
{
  // type
  unsigned char type;
  // start
  unsigned long int start;
  // length
  unsigned long int length;
  // proc_id
  unsigned int proc_id;
  // client_id
  struct p9_str client_id;
};

struct p9_tlink
{
  // dfid
  unsigned int dfid;
  // fid
  unsigned int fid;
  // name
  struct p9_str name;
};

struct p9_rlink
{
};

struct p9_tmkdir
{
  // fid
  unsigned int fid;
  // name
  struct p9_str name;
  // mode
  unsigned int mode;
  // gid
  unsigned int gid;
};

struct p9_rmkdir
{
  // qid
  struct p9_qid qid;
};

struct p9_trenameat
{
  // olddirfid
  unsigned int olddirfid;
  // oldname
  struct p9_str oldname;
  // newdirfid
  unsigned int newdirfid;
  // newname
  struct p9_str newname;
};

struct p9_rrenameat
{
};

struct p9_tunlinkat
{
  // dirfid
  unsigned int dirfid;
  // name
  struct p9_str name;
  // flags
  unsigned int flags;
};

struct p9_runlinkat
{
};

struct p9_tversion
{
  // msize
  unsigned int msize;
  // version
  struct p9_str version;
};

struct p9_rversion
{
  // msize
  unsigned int msize;
  // version
  struct p9_str version;
};

struct p9_tauth
{
  // afid
  unsigned int afid;
  // uname
  struct p9_str uname;
  // aname
  struct p9_str aname;
  // n_uname
  unsigned int n_uname;
};

struct p9_rauth
{
  // qid
  struct p9_qid qid;
};

struct p9_tattach
{
  // fid
  unsigned int fid;
  // afid
  unsigned int afid;
  // uname
  struct p9_str uname;
  // aname
  struct p9_str aname;
  // n_uname
  unsigned int n_uname;
};

struct p9_rattach
{
  // qid
  struct p9_qid qid;
};

struct p9_tflush
{
  // oldtag
  unsigned short int oldtag;
};

struct p9_rflush
{
};

struct p9_twalk
{
  // fid
  unsigned int fid;
  // newfid
  unsigned int newfid;
  // nwname
  unsigned short int nwname;
  // wnames
  struct p9_str wnames[16l];
};

struct p9_rwalk
{
  // nwqid
  unsigned short int nwqid;
  // wqids
  struct p9_qid wqids[16l];
};

struct p9_tread
{
  // fid
  unsigned int fid;
  // offset
  unsigned long int offset;
  // count
  unsigned int count;
};

struct p9_rread
{
  // count
  unsigned int count;
  // data
  unsigned char *data;
};

struct p9_twrite
{
  // fid
  unsigned int fid;
  // offset
  unsigned long int offset;
  // count
  unsigned int count;
  // data
  unsigned char *data;
};

struct p9_rwrite
{
  // count
  unsigned int count;
};

struct p9_tclunk
{
  // fid
  unsigned int fid;
};

struct p9_rclunk
{
};

struct p9_tremove
{
  // fid
  unsigned int fid;
};

struct p9_rremove
{
};

union anonymous_8
{
  // rlerror
  struct p9_rlerror rlerror;
  // tstatfs
  struct p9_tstatfs tstatfs;
  // rstatfs
  struct p9_rstatfs rstatfs;
  // tlopen
  struct p9_tlopen tlopen;
  // rlopen
  struct p9_rlopen rlopen;
  // tlcreate
  struct p9_tlcreate tlcreate;
  // rlcreate
  struct p9_rlcreate rlcreate;
  // tsymlink
  struct p9_tsymlink tsymlink;
  // rsymlink
  struct p9_rsymlink rsymlink;
  // tmknod
  struct p9_tmknod tmknod;
  // rmknod
  struct p9_rmknod rmknod;
  // trename
  struct p9_trename trename;
  // rrename
  struct p9_rrename rrename;
  // treadlink
  struct p9_treadlink treadlink;
  // rreadlink
  struct p9_rreadlink rreadlink;
  // tgetattr
  struct p9_tgetattr tgetattr;
  // rgetattr
  struct p9_rgetattr rgetattr;
  // tsetattr
  struct p9_tsetattr tsetattr;
  // rsetattr
  struct p9_rsetattr rsetattr;
  // txattrwalk
  struct p9_txattrwalk txattrwalk;
  // rxattrwalk
  struct p9_rxattrwalk rxattrwalk;
  // txattrcreate
  struct p9_txattrcreate txattrcreate;
  // rxattrcreate
  struct p9_rxattrcreate rxattrcreate;
  // treaddir
  struct p9_treaddir treaddir;
  // rreaddir
  struct p9_rreaddir rreaddir;
  // tfsync
  struct p9_tfsync tfsync;
  // rfsync
  struct p9_rfsync rfsync;
  // tlock
  struct p9_tlock tlock;
  // rlock
  struct p9_rlock rlock;
  // tgetlock
  struct p9_tgetlock tgetlock;
  // rgetlock
  struct p9_rgetlock rgetlock;
  // tlink
  struct p9_tlink tlink;
  // rlink
  struct p9_rlink rlink;
  // tmkdir
  struct p9_tmkdir tmkdir;
  // rmkdir
  struct p9_rmkdir rmkdir;
  // trenameat
  struct p9_trenameat trenameat;
  // rrenameat
  struct p9_rrenameat rrenameat;
  // tunlinkat
  struct p9_tunlinkat tunlinkat;
  // runlinkat
  struct p9_runlinkat runlinkat;
  // tversion
  struct p9_tversion tversion;
  // rversion
  struct p9_rversion rversion;
  // tauth
  struct p9_tauth tauth;
  // rauth
  struct p9_rauth rauth;
  // tattach
  struct p9_tattach tattach;
  // rattach
  struct p9_rattach rattach;
  // tflush
  struct p9_tflush tflush;
  // rflush
  struct p9_rflush rflush;
  // twalk
  struct p9_twalk twalk;
  // rwalk
  struct p9_rwalk rwalk;
  // tread
  struct p9_tread tread;
  // rread
  struct p9_rread rread;
  // twrite
  struct p9_twrite twrite;
  // rwrite
  struct p9_rwrite rwrite;
  // tclunk
  struct p9_tclunk tclunk;
  // rclunk
  struct p9_rclunk rclunk;
  // tremove
  struct p9_tremove tremove;
  // rremove
  struct p9_rremove rremove;
};

union anonymous_14
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

union anonymous_16
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

struct Fdtrans
{
  // trans
  struct Nptrans *trans;
  // fdin
  signed int fdin;
  // fdout
  signed int fdout;
  // fc
  struct Npfcall *fc;
  // fc_len
  signed int fc_len;
};

struct Npauth
{
  // startauth
  signed int (*startauth)(struct Npfid *, char *, struct p9_qid *);
  // checkauth
  signed int (*checkauth)(struct Npfid *, struct Npfid *, char *);
  // read
  signed int (*read)(struct Npfid *, unsigned long int, unsigned int, unsigned char *);
  // write
  signed int (*write)(struct Npfid *, unsigned long int, unsigned int, unsigned char *);
  // clunk
  signed int (*clunk)(struct Npfid *);
};

struct Npcfid
{
  // iounit
  unsigned int iounit;
  // fsys
  struct Npcfsys *fsys;
  // fid
  unsigned int fid;
  // offset
  unsigned long int offset;
  // buf
  char *buf;
  // buf_size
  signed int buf_size;
  // buf_len
  signed int buf_len;
  // buf_used
  signed int buf_used;
};

struct Npcfsys
{
  // lock
  union anonymous lock;
  // flags
  signed int flags;
  // msize
  unsigned int msize;
  // trans
  struct Nptrans *trans;
  // refcount
  signed int refcount;
  // tagpool
  struct Npcpool *tagpool;
  // fidpool
  struct Npcpool *fidpool;
  // rpc
  signed int (*rpc)(struct Npcfsys *, struct Npfcall *, struct Npfcall **);
  // incref
  void (*incref)(struct Npcfsys *);
  // decref
  void (*decref)(struct Npcfsys *);
  // disconnect
  void (*disconnect)(struct Npcfsys *);
  // cond
  union anonymous_0 cond;
  // unsent_first
  struct Npcreq *unsent_first;
  // unsent_last
  struct Npcreq *unsent_last;
  // pend_first
  struct Npcreq *pend_first;
  // readproc
  unsigned long int readproc;
  // writeproc
  unsigned long int writeproc;
  // rfd
  signed int rfd;
  // wfd
  signed int wfd;
};

struct Npconn
{
  // lock
  union anonymous lock;
  // wlock
  union anonymous wlock;
  // refcond
  union anonymous_0 refcond;
  // refcount
  signed int refcount;
  // client_id
  char client_id[128l];
  // flags
  signed int flags;
  // authuser
  unsigned int authuser;
  // msize
  unsigned int msize;
  // shutdown
  signed int shutdown;
  // srv
  struct Npsrv *srv;
  // trans
  struct Nptrans *trans;
  // fidpool
  struct Npfidpool *fidpool;
  // aux
  void *aux;
  // rthread
  unsigned long int rthread;
  // next
  struct Npconn *next;
};

struct Npcpool
{
  // lock
  union anonymous lock;
  // cond
  union anonymous_0 cond;
  // maxid
  unsigned int maxid;
  // msize
  signed int msize;
  // map
  unsigned char *map;
};

struct Npcreq
{
  // fsys
  struct Npcfsys *fsys;
  // tag
  unsigned short int tag;
  // tc
  struct Npfcall *tc;
  // rc
  struct Npfcall *rc;
  // ecode
  signed int ecode;
  // cb
  void (*cb)(struct Npcreq *, void *);
  // cba
  void *cba;
  // flushed
  signed int flushed;
  // next
  struct Npcreq *next;
  // prev
  struct Npcreq *prev;
};

struct Npcrpc
{
  // lock
  union anonymous lock;
  // cond
  union anonymous_0 cond;
  // ecode
  unsigned int ecode;
  // tc
  struct Npfcall *tc;
  // rc
  struct Npfcall *rc;
};

struct Npfcall
{
  // size
  unsigned int size;
  // type
  unsigned char type;
  // tag
  unsigned short int tag;
  // pkt
  unsigned char *pkt;
  // u
  union anonymous_8 u;
};

struct Npfid
{
  // magic
  signed int magic;
  // lock
  union anonymous lock;
  // conn
  struct Npconn *conn;
  // fid
  unsigned int fid;
  // refcount
  signed int refcount;
  // type
  unsigned char type;
  // user
  struct Npuser *user;
  // tpool
  struct Nptpool *tpool;
  // aname
  char *aname;
  // flags
  signed int flags;
  // aux
  void *aux;
  // next
  struct Npfid *next;
  // prev
  struct Npfid *prev;
};

struct Npfidpool
{
  // lock
  union anonymous lock;
  // size
  signed int size;
  // htable
  struct Npfid **htable;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct Npfile
{
  // name
  char *name;
  // qid
  struct p9_qid qid;
  // getf
  char * (*getf)(char *, void *);
  // getf_arg
  void *getf_arg;
  // flags
  signed int flags;
  // uid
  unsigned int uid;
  // gid
  unsigned int gid;
  // mode
  unsigned int mode;
  // atime
  struct timeval atime;
  // mtime
  struct timeval mtime;
  // ctime
  struct timeval ctime;
  // next
  struct Npfile *next;
  // child
  struct Npfile *child;
};

struct Npreq
{
  // lock
  union anonymous lock;
  // refcount
  signed int refcount;
  // conn
  struct Npconn *conn;
  // tag
  unsigned short int tag;
  // state
  enum anonymous_10 state;
  // flushreq
  struct Npreq *flushreq;
  // tcall
  struct Npfcall *tcall;
  // rcall
  struct Npfcall *rcall;
  // fid
  struct Npfid *fid;
  // birth
  signed long int birth;
  // next
  struct Npreq *next;
  // prev
  struct Npreq *prev;
  // wthread
  struct Npwthread *wthread;
};

struct Npsrv
{
  // msize
  unsigned int msize;
  // srvaux
  void *srvaux;
  // ctlroot
  struct Npfile *ctlroot;
  // usercache
  void *usercache;
  // logmsg
  void (*logmsg)(const char *, void **);
  // remapuser
  signed int (*remapuser)(struct Npfid *);
  // auth_required
  signed int (*auth_required)(struct p9_str *, unsigned int, struct p9_str *);
  // exportok
  signed int (*exportok)(struct Npfid *);
  // get_path
  char * (*get_path)(struct Npfid *);
  // auth
  struct Npauth *auth;
  // flags
  signed int flags;
  // fiddestroy
  void (*fiddestroy)(struct Npfid *);
  // version
  struct Npfcall * (*version)(struct Npconn *, unsigned int, struct p9_str *);
  // attach
  struct Npfcall * (*attach)(struct Npfid *, struct Npfid *, struct p9_str *);
  // clone
  signed int (*clone)(struct Npfid *, struct Npfid *);
  // walk
  signed int (*walk)(struct Npfid *, struct p9_str *, struct p9_qid *);
  // read
  struct Npfcall * (*read)(struct Npfid *, unsigned long int, unsigned int, struct Npreq *);
  // write
  struct Npfcall * (*write)(struct Npfid *, unsigned long int, unsigned int, unsigned char *, struct Npreq *);
  // clunk
  struct Npfcall * (*clunk)(struct Npfid *);
  // remove
  struct Npfcall * (*remove)(struct Npfid *);
  // statfs
  struct Npfcall * (*statfs)(struct Npfid *);
  // lopen
  struct Npfcall * (*lopen)(struct Npfid *, unsigned int);
  // lcreate
  struct Npfcall * (*lcreate)(struct Npfid *, struct p9_str *, unsigned int, unsigned int, unsigned int);
  // symlink
  struct Npfcall * (*symlink)(struct Npfid *, struct p9_str *, struct p9_str *, unsigned int);
  // mknod
  struct Npfcall * (*mknod)(struct Npfid *, struct p9_str *, unsigned int, unsigned int, unsigned int, unsigned int);
  // rename
  struct Npfcall * (*rename)(struct Npfid *, struct Npfid *, struct p9_str *);
  // readlink
  struct Npfcall * (*readlink)(struct Npfid *);
  // getattr
  struct Npfcall * (*getattr)(struct Npfid *, unsigned long int);
  // setattr
  struct Npfcall * (*setattr)(struct Npfid *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned long int, unsigned long int, unsigned long int, unsigned long int, unsigned long int);
  // xattrwalk
  struct Npfcall * (*xattrwalk)(struct Npfid *, struct Npfid *, struct p9_str *);
  // xattrcreate
  struct Npfcall * (*xattrcreate)(struct Npfid *, struct p9_str *, unsigned long int, unsigned int);
  // readdir
  struct Npfcall * (*readdir)(struct Npfid *, unsigned long int, unsigned int, struct Npreq *);
  // fsync
  struct Npfcall * (*fsync)(struct Npfid *);
  // llock
  struct Npfcall * (*llock)(struct Npfid *, unsigned char, unsigned int, unsigned long int, unsigned long int, unsigned int, struct p9_str *);
  // getlock
  struct Npfcall * (*getlock)(struct Npfid *, unsigned char, unsigned long int, unsigned long int, unsigned int, struct p9_str *);
  // link
  struct Npfcall * (*link)(struct Npfid *, struct Npfid *, struct p9_str *);
  // mkdir
  struct Npfcall * (*mkdir)(struct Npfid *, struct p9_str *, unsigned int, unsigned int);
  // renameat
  struct Npfcall * (*renameat)(struct Npfid *, struct p9_str *, struct Npfid *, struct p9_str *);
  // unlinkat
  struct Npfcall * (*unlinkat)(struct Npfid *, struct p9_str *);
  // lock
  union anonymous lock;
  // conncountcond
  union anonymous_0 conncountcond;
  // conncount
  signed int conncount;
  // connhistory
  signed int connhistory;
  // conns
  struct Npconn *conns;
  // tpool
  struct Nptpool *tpool;
  // nwthread
  signed int nwthread;
};

struct Npstats
{
  // name
  char *name;
  // numfids
  signed int numfids;
  // numreqs
  signed int numreqs;
  // nreqs
  unsigned long int nreqs[128l];
  // rbytes
  unsigned long int rbytes;
  // wbytes
  unsigned long int wbytes;
  // rcount
  unsigned long int rcount[12l];
  // wcount
  unsigned long int wcount[12l];
};

struct Nptpool
{
  // name
  char *name;
  // srv
  struct Npsrv *srv;
  // lock
  union anonymous lock;
  // refcount
  signed int refcount;
  // nwthread
  signed int nwthread;
  // wthreads
  struct Npwthread *wthreads;
  // reqs_first
  struct Npreq *reqs_first;
  // reqs_last
  struct Npreq *reqs_last;
  // workreqs
  struct Npreq *workreqs;
  // stats
  struct Npstats stats;
  // reqcond
  union anonymous_0 reqcond;
  // next
  struct Nptpool *next;
};

struct Nptrans
{
  // aux
  void *aux;
  // recv
  signed int (*recv)(struct Npfcall **, unsigned int, void *);
  // send
  signed int (*send)(struct Npfcall *, void *);
  // destroy
  void (*destroy)(void *);
};

struct Npuser
{
  // lock
  union anonymous lock;
  // refcount
  signed int refcount;
  // uname
  char *uname;
  // uid
  unsigned int uid;
  // gid
  unsigned int gid;
  // nsg
  signed int nsg;
  // sg
  unsigned int *sg;
  // next
  struct Npuser *next;
  // t
  signed long int t;
};

struct Npwthread
{
  // tpool
  struct Nptpool *tpool;
  // shutdown
  signed int shutdown;
  // thread
  unsigned long int thread;
  // fsuid
  unsigned int fsuid;
  // fsgid
  unsigned int fsgid;
  // privcap
  signed int privcap;
  // next
  struct Npwthread *next;
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

struct _range
{
  // lo
  unsigned long int lo;
  // hi
  unsigned long int hi;
  // width
  signed int width;
};

struct addrinfo
{
  // ai_flags
  signed int ai_flags;
  // ai_family
  signed int ai_family;
  // ai_socktype
  signed int ai_socktype;
  // ai_protocol
  signed int ai_protocol;
  // ai_addrlen
  unsigned int ai_addrlen;
  // ai_addr
  struct sockaddr *ai_addr;
  // ai_canonname
  char *ai_canonname;
  // ai_next
  struct addrinfo *ai_next;
};

struct cbuf
{
  // sp
  unsigned char *sp;
  // p
  unsigned char *p;
  // ep
  unsigned char *ep;
};

struct diod_auth_struct
{
  // magic
  signed int magic;
  // datastr
  char *datastr;
  // mungectx
  struct munge_ctx *mungectx;
  // mungerr
  enum munge_err mungerr;
  // mungeuid
  unsigned int mungeuid;
  // mungegid
  unsigned int mungegid;
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

struct hash
{
  // count
  signed int count;
  // size
  signed int size;
  // table
  struct hash_node **table;
  // cmp_f
  signed int (*cmp_f)(const void *, const void *);
  // del_f
  void (*del_f)(void *);
  // key_f
  unsigned int (*key_f)(const void *);
  // mutex
  union anonymous mutex;
  // magic
  unsigned int magic;
};

struct hash_node
{
  // next
  struct hash_node *next;
  // data
  void *data;
  // hkey
  const void *hkey;
};

struct hostlist
{
  // magic
  signed int magic;
  // mutex
  union anonymous mutex;
  // size
  signed int size;
  // nranges
  signed int nranges;
  // nhosts
  signed int nhosts;
  // hr
  struct hostrange_components **hr;
  // ilist
  struct hostlist_iterator *ilist;
};

struct hostlist_iterator
{
  // magic
  signed int magic;
  // hl
  struct hostlist *hl;
  // idx
  signed int idx;
  // hr
  struct hostrange_components *hr;
  // depth
  signed int depth;
  // next
  struct hostlist_iterator *next;
};

struct hostname_components
{
  // hostname
  char *hostname;
  // prefix
  char *prefix;
  // num
  unsigned long int num;
  // suffix
  char *suffix;
};

struct hostrange_components
{
  // prefix
  char *prefix;
  // lo
  unsigned long int lo;
  // hi
  unsigned long int hi;
  // width
  signed int width;
  // singlehost
  unsigned int singlehost : 1;
};

struct hostset
{
  // hl
  struct hostlist *hl;
};

struct in6_addr
{
  // __in6_u
  union anonymous_15 __in6_u;
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
};

struct list
{
  // head
  struct listNode *head;
  // tail
  struct listNode **tail;
  // iNext
  struct listIterator *iNext;
  // fDel
  void (*fDel)(void *);
  // count
  signed int count;
  // mutex
  union anonymous mutex;
  // magic
  unsigned int magic;
};

struct listIterator
{
  // list
  struct list *list;
  // pos
  struct listNode *pos;
  // prev
  struct listNode **prev;
  // iNext
  struct listIterator *iNext;
  // magic
  unsigned int magic;
};

struct listNode
{
  // data
  void *data;
  // next
  struct listNode *next;
};

struct mntent
{
  // mnt_fsname
  char *mnt_fsname;
  // mnt_dir
  char *mnt_dir;
  // mnt_type
  char *mnt_type;
  // mnt_opts
  char *mnt_opts;
  // mnt_freq
  signed int mnt_freq;
  // mnt_passno
  signed int mnt_passno;
};

struct opt_struct
{
  // magic
  signed int magic;
  // list
  struct list *list;
};

struct option
{
  // name
  const char *name;
  // has_arg
  signed int has_arg;
  // flag
  signed int *flag;
  // val
  signed int val;
};

struct passwd
{
  // pw_name
  char *pw_name;
  // pw_passwd
  char *pw_passwd;
  // pw_uid
  unsigned int pw_uid;
  // pw_gid
  unsigned int pw_gid;
  // pw_gecos
  char *pw_gecos;
  // pw_dir
  char *pw_dir;
  // pw_shell
  char *pw_shell;
};

struct pollfd
{
  // fd
  signed int fd;
  // events
  signed short int events;
  // revents
  signed short int revents;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
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

struct sockaddr_storage
{
  // ss_family
  unsigned short int ss_family;
  // __ss_align
  unsigned long int __ss_align;
  // __ss_padding
  char __ss_padding[112l];
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

struct timezone
{
  // tz_minuteswest
  signed int tz_minuteswest;
  // tz_dsttime
  signed int tz_dsttime;
};

struct utimbuf
{
  // actime
  signed long int actime;
  // modtime
  signed long int modtime;
};


// _auth
// file diod_auth.c line 77
static struct Npauth _auth;
// _auth
// file diod_auth.c line 77
static struct Npauth _auth = { .startauth=startauth, .checkauth=checkauth, .read=readafid,
    .write=writeafid, .clunk=clunkafid };
// allow_severity
// file diod_sock.c line 62
signed int allow_severity = 6;
// clropt
// file diodmount.c line 434
static struct anonymous_5 clropt[7l] = { { .opt="atime", .flag=(unsigned long int)1024 },
    { .opt="dev", .flag=(unsigned long int)4 },
    { .opt="diratime", .flag=(unsigned long int)2048 },
    { .opt="exec", .flag=(unsigned long int)8 },
    { .opt="suid", .flag=(unsigned long int)2 },
    { .opt="rw", .flag=(unsigned long int)1 },
    { .opt="nosync", .flag=(unsigned long int)16 } };
// config
// file diod_conf.c line 109
static struct anonymous_12 config;
// deny_severity
// file diod_sock.c line 63
signed int deny_severity = 4;
// dest
// file diod_log.c line 79
static enum anonymous_7 dest = (enum anonymous_7)DEST_LOGF;
// diod_auth_functions
// file diod_auth.c line 84
struct Npauth *diod_auth_functions;
// diod_auth_functions
// file diod_auth.c line 84
struct Npauth *diod_auth_functions = &_auth;
// error_key
// file error.c line 37
static unsigned int error_key;
// error_once
// file error.c line 38
static signed int error_once = 0;
// facility_tab
// file diod_log.c line 51
static struct anonymous_11 facility_tab[11l] = { { .s="daemon", .n=3 << 3 }, { .s="local0", .n=16 << 3 }, { .s="local1", .n=17 << 3 }, { .s="local2", .n=18 << 3 }, { .s="local3", .n=19 << 3 }, { .s="local4", .n=20 << 3 }, { .s="local5", .n=21 << 3 }, { .s="local6", .n=22 << 3 }, { .s="local7", .n=23 << 3 }, { .s="user", .n=1 << 3 }, { .s=(char *)(void *)0, .n=0 } };
// filename
// file diod_log.c line 81
static char *filename = (char *)(void *)0;
// hash_free_list
// file hash.c line 89
static struct hash_node *hash_free_list = (struct hash_node *)(void *)0;
// hash_free_lock
// file hash.c line 92
static union anonymous hash_free_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// level_tab
// file diod_log.c line 65
static struct anonymous_11 level_tab[9l] = { { .s="emerg", .n=0 }, { .s="alert", .n=1 }, { .s="crit", .n=2 }, { .s="err", .n=3 }, { .s="warning", .n=4 }, { .s="notice", .n=5 }, { .s="info", .n=6 }, { .s="debug", .n=7 }, { .s=(char *)(void *)0, .n=0 } };
// list_free_iterators
// file list.c line 146
static struct listIterator *list_free_iterators = (struct listIterator *)(void *)0;
// list_free_lists
// file list.c line 144
static struct list *list_free_lists = (struct list *)(void *)0;
// list_free_nodes
// file list.c line 145
static struct listNode *list_free_nodes = (struct listNode *)(void *)0;
// logf
// file diod_log.c line 82
static struct _IO_FILE *logf = (struct _IO_FILE *)(void *)0;
// longopts
// file diodmount.c line 77
static struct option longopts[7l] = { { .name="fake-mount", .has_arg=0, .flag=((signed int *)NULL), .val=102 },
    { .name="no-mtab", .has_arg=0, .flag=((signed int *)NULL), .val=110 },
    { .name="verbose", .has_arg=0, .flag=((signed int *)NULL), .val=118 },
    { .name="options", .has_arg=1, .flag=((signed int *)NULL), .val=111 },
    { .name="9nbd-attach", .has_arg=0, .flag=((signed int *)NULL), .val=97 },
    { .name="9nbd-detach", .has_arg=0, .flag=((signed int *)NULL), .val=100 },
    { .name=((const char *)NULL), .has_arg=0, .flag=((signed int *)NULL),
    .val=0 } };
// m2id
// file pool.c line 44
unsigned char m2id[256l] = { (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)3, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)4, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)3, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)5, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)3, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)4, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)3, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)6, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)3, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)4, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)3, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)5, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)3, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)4, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)3, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)7, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)3, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)4, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)3, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)5, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)3, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)4, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)3, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)6, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)3, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)4, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)3, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)5, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)3, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)4, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)3, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)2, (unsigned char)0, (unsigned char)1, (unsigned char)0, (unsigned char)0 };
// np_assert_srv
// file srv.c line 55
static struct Npsrv *np_assert_srv = (struct Npsrv *)(void *)0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// opterr
// file /usr/include/getopt.h line 76
extern signed int opterr;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// prog
// file diod_log.c line 44
static char *prog = (char *)(void *)0;
// setopt
// file diodmount.c line 423
static struct anonymous_5 setopt[8l] = { { .opt="noatime", .flag=(unsigned long int)1024 },
    { .opt="nodev", .flag=(unsigned long int)4 },
    { .opt="nodiratime", .flag=(unsigned long int)2048 },
    { .opt="noexec", .flag=(unsigned long int)8 },
    { .opt="nosuid", .flag=(unsigned long int)2 },
    { .opt="ro", .flag=(unsigned long int)1 },
    { .opt="remount", .flag=(unsigned long int)32 },
    { .opt="sync", .flag=(unsigned long int)16 } };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// syslog_facility
// file diod_log.c line 84
static signed int syslog_facility = 3 << 3;
// syslog_level
// file diod_log.c line 85
static signed int syslog_level = 3;

// _advance_past_brackets
// file hostlist.c line 353
static signed int _advance_past_brackets(char *tok, char **str)
{
  void *return_value_memchr_3;
  return_value_memchr_3=memchr((const void *)tok, 91, (unsigned long int)(*str - tok));
  void *return_value_memchr_2;
  void *return_value_memchr_1;
  if(!(return_value_memchr_3 == NULL))
  {
    return_value_memchr_2=memchr((const void *)tok, 93, (unsigned long int)(*str - tok));
    if(return_value_memchr_2 == NULL)
    {
      char *q;
      q=strchr(*str, 93);
      if(!(q == ((char *)NULL)))
      {
        return_value_memchr_1=memchr((const void *)*str, 91, (unsigned long int)(q - *str));
        if(return_value_memchr_1 == NULL)
        {
          *str = q + (signed long int)1;
          return 1;
        }

      }

    }

  }

  return 0;
}

// _alloc_fid
// file ctl.c line 82
static struct anonymous_4 * _alloc_fid(struct Npfile *file)
{
  struct anonymous_4 *f = (struct anonymous_4 *)(void *)0;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_4) /*16ul*/ );
  f = (struct anonymous_4 *)return_value_malloc_1;
  if(f == ((struct anonymous_4 *)NULL))
  {
    np_uerror((unsigned long int)12);
    return (struct anonymous_4 *)(void *)0;
  }

  else
  {
    memset((void *)f, 0, sizeof(struct anonymous_4) /*16ul*/ );
    f->file = file;
    return f;
  }
}

// _alloc_file
// file ctl.c line 113
static struct Npfile * _alloc_file(char *name, unsigned char type)
{
  struct Npfile *file = (struct Npfile *)(void *)0;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct Npfile) /*120ul*/ );
  file = (struct Npfile *)return_value_malloc_1;
  signed int return_value__next_inum_2;
  if(file == ((struct Npfile *)NULL))
    np_uerror((unsigned long int)12);

  else
  {
    memset((void *)file, 0, sizeof(struct Npfile) /*120ul*/ );
    file->name=strdup(name);
    if(file->name == ((char *)NULL))
      np_uerror((unsigned long int)12);

    else
    {
      return_value__next_inum_2=_next_inum();
      file->qid.path = (unsigned long int)return_value__next_inum_2;
      file->qid.type = (unsigned char)((signed int)type | 4);
      file->qid.version = (unsigned int)0;
      if(!((128 & (signed int)type) == 0))
      {
        file->mode = (unsigned int)0040000;
        file->mode = file->mode | (unsigned int)(0400 | 0400 >> 3 | (0400 >> 3) >> 3);
        file->mode = file->mode | (unsigned int)(0100 | 0100 >> 3 | (0100 >> 3) >> 3);
      }

      else
      {
        file->mode = (unsigned int)0100000;
        file->mode = file->mode | (unsigned int)(0400 | 0400 >> 3 | (0400 >> 3) >> 3);
      }
      file->uid = (unsigned int)0;
      file->gid = (unsigned int)0;
      gettimeofday(&file->atime, (struct timezone *)(void *)0);
      gettimeofday(&file->mtime, (struct timezone *)(void *)0);
      gettimeofday(&file->ctime, (struct timezone *)(void *)0);
      return file;
    }
  }

error:
  ;
  np_ctl_delfile(file);
  return (struct Npfile *)(void *)0;
}

// _alloc_nouserdb
// file user.c line 296
static struct Npuser * _alloc_nouserdb(struct Npsrv *srv, unsigned int uid, char *name)
{
  struct Npuser *u = (struct Npuser *)(void *)0;
  char ustr[32l] = { 'r', 'o', 'o', 't', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  if(!(name == ((char *)NULL)))
  {
    signed int return_value_strcmp_1;
    return_value_strcmp_1=strcmp(name, "root");
    if(!(return_value_strcmp_1 == 0))
    {
      np_uerror((unsigned long int)1);
      goto error;
    }

    uid = (unsigned int)0;
  }

  if(!(uid == 0u))
    snprintf(ustr, sizeof(char [32l]) /*32ul*/ , "%d", uid);

  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(struct Npuser) /*96ul*/ );
  u = (struct Npuser *)return_value_malloc_2;
  void *return_value_malloc_3;
  if(u == ((struct Npuser *)NULL))
  {
    np_uerror((unsigned long int)12);
    np_logerr(srv, "_alloc_nouserdb: %s", (const void *)ustr);
  }

  else
  {
    u->sg = (unsigned int *)(void *)0;
    u->uname=strdup(ustr);
    if(u->uname == ((char *)NULL))
    {
      np_uerror((unsigned long int)12);
      np_logerr(srv, "_alloc_nouserdb: %s", (const void *)ustr);
    }

    else
    {
      u->uid = uid;
      u->gid = (unsigned int)uid;
      u->nsg = 1;
      return_value_malloc_3=malloc(sizeof(unsigned int) /*4ul*/  * (unsigned long int)u->nsg);
      u->sg = (unsigned int *)return_value_malloc_3;
      if(u->sg == ((unsigned int *)NULL))
      {
        np_uerror((unsigned long int)12);
        np_logerr(srv, "_alloc_nouserdb: %s", (const void *)ustr);
      }

      else
      {
        u->sg[(signed long int)0] = u->gid;
        pthread_mutex_init(&u->lock, (const union anonymous_6 *)(void *)0);
        if(!((2 & srv->flags) == 0))
          np_logmsg(srv, "user lookup: %d", u->uid);

        u->refcount = 0;
        u->t=time((signed long int *)(void *)0);
        u->next = (struct Npuser *)(void *)0;
        return u;
      }
    }
  }

error:
  ;
  if(!(u == ((struct Npuser *)NULL)))
    _free_user(u);

  return (struct Npuser *)(void *)0;
}

// _alloc_user
// file user.c line 258
static struct Npuser * _alloc_user(struct Npsrv *srv, struct passwd *pwd)
{
  struct Npuser *u;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct Npuser) /*96ul*/ );
  u = (struct Npuser *)return_value_malloc_1;
  signed int return_value__getgrouplist_2;
  if(u == ((struct Npuser *)NULL))
  {
    np_uerror((unsigned long int)12);
    np_logerr(srv, "_alloc_user: %s", pwd->pw_name);
  }

  else
  {
    u->sg = (unsigned int *)(void *)0;
    u->nsg = 0;
    u->uname=strdup(pwd->pw_name);
    if(u->uname == ((char *)NULL))
    {
      np_uerror((unsigned long int)12);
      np_logerr(srv, "_alloc_user: %s", pwd->pw_name);
    }

    else
    {
      u->uid = pwd->pw_uid;
      u->gid = pwd->pw_gid;
      if(!(u->uid == 0u))
      {
        return_value__getgrouplist_2=_getgrouplist(srv, u);
        if(!(return_value__getgrouplist_2 >= 0))
          goto error;

      }

      pthread_mutex_init(&u->lock, (const union anonymous_6 *)(void *)0);
      u->refcount = 0;
      u->t=time((signed long int *)(void *)0);
      u->next = (struct Npuser *)(void *)0;
      if(!((2 & srv->flags) == 0))
        np_logmsg(srv, "user lookup: %d", u->uid);

      return u;
    }
  }

error:
  ;
  if(!(u == ((struct Npuser *)NULL)))
    _free_user(u);

  return (struct Npuser *)(void *)0;
}

// _attempt_range_join
// file hostlist.c line 2065
static signed int _attempt_range_join(struct hostlist *hl, signed int loc)
{
  signed int ndup;
  /* assertion hl != ((void *)0) */
  assert(hl != (struct hostlist *)(void *)0);
  /* assertion hl->magic == 57005 */
  assert(hl->magic == 57005);
  /* assertion loc > 0 */
  assert(loc > 0);
  /* assertion loc < hl->nranges */
  assert(loc < hl->nranges);
  ndup=hostrange_join(hl->hr[(signed long int)(loc - 1)], hl->hr[(signed long int)loc]);
  if(ndup >= 0)
  {
    hostlist_delete_range(hl, loc);
    hl->nhosts = hl->nhosts - ndup;
  }

  return ndup;
}

// _authrequired
// file fcall.c line 70
static signed int _authrequired(struct Npsrv *srv, struct p9_str *uname, unsigned int n_uname, struct p9_str *aname)
{
  _Bool tmp_if_expr_1;
  if(srv->auth == ((struct Npauth *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(srv->auth->startauth != ((signed int (*)(struct Npfid *, char *, struct p9_qid *))NULL)) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = !(srv->auth->checkauth != ((signed int (*)(struct Npfid *, struct Npfid *, char *))NULL)) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
    return 0;

  else
    if(srv->auth_required == ((signed int (*)(struct p9_str *, unsigned int, struct p9_str *))NULL))
      return 1;

    else
    {
      signed int return_value;
      return_value=srv->auth_required(uname, n_uname, aname);
      return return_value;
    }
}

// _bind_priv_inet4
// file diod_sock.c line 376
static signed int _bind_priv_inet4(signed int sockfd)
{
  struct sockaddr_in in;
  signed int port;
  signed int rc = -1;
  memset((void *)&in, 0, sizeof(struct sockaddr_in) /*16ul*/ );
  in.sin_family = (unsigned short int)2;
  in.sin_addr.s_addr = (unsigned int)0x00000000;
  port = 1024 - 1;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  signed int *return_value___errno_location_1;
  for( ; port >= 512; port = port - 1)
  {
    in.sin_port=htons((unsigned short int)port);
    rc=bind(sockfd, (struct sockaddr *)&in, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
    if(rc == 0)
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      if(!(rc >= 0))
      {
        return_value___errno_location_1=__errno_location();
        tmp_if_expr_2 = *return_value___errno_location_1 != 98 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_2 = (_Bool)0;
      tmp_if_expr_3 = tmp_if_expr_2 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_3)
      break;

  }
  signed int *return_value___errno_location_5;
  signed int *return_value___errno_location_4;
  if(!(rc >= 0))
  {
    return_value___errno_location_5=__errno_location();
    if(*return_value___errno_location_5 == 98)
    {
      return_value___errno_location_4=__errno_location();
      *return_value___errno_location_4 = 11;
    }

  }

  return rc;
}

// _buf_restore
// file read.c line 174
static signed int _buf_restore(struct Npcfid *fid, char *buf, signed int len)
{
  signed int ret = 0;
  signed int tmp_if_expr_1;
  if(!(fid->buf == ((char *)NULL)))
  {
    if(!(fid->buf_size >= len))
      tmp_if_expr_1 = fid->buf_size;

    else
      tmp_if_expr_1 = len;
    ret = tmp_if_expr_1;
    memcpy((void *)buf, (const void *)fid->buf, (unsigned long int)ret);
    if(!(ret >= fid->buf_size))
    {
      memmove((void *)fid->buf, (const void *)(fid->buf + (signed long int)ret), (unsigned long int)(fid->buf_size - ret));
      fid->buf_size = fid->buf_size - ret;
    }

    else
    {
      free((void *)fid->buf);
      fid->buf = (char *)(void *)0;
      fid->buf_size = 0;
    }
  }

  return ret;
}

// _buf_save
// file read.c line 154
static signed int _buf_save(struct Npcfid *fid, char *buf, signed int len)
{
  if(!(fid->buf == ((char *)NULL)))
  {
    void *return_value_realloc_1;
    return_value_realloc_1=realloc((void *)fid->buf, (unsigned long int)(fid->buf_size + len));
    fid->buf = (char *)return_value_realloc_1;
    if(fid->buf == ((char *)NULL))
      goto nomem;

    memcpy((void *)(fid->buf + (signed long int)fid->buf_size), (const void *)buf, (unsigned long int)len);
    fid->buf_size = fid->buf_size + len;
  }

  else
  {
    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)len);
    fid->buf = (char *)return_value_malloc_2;
    if(fid->buf == ((char *)NULL))
      goto nomem;

    memcpy((void *)fid->buf, (const void *)buf, (unsigned long int)len);
    fid->buf_size = len;
  }
  return 0;

nomem:
  ;
  np_uerror((unsigned long int)12);
  return -1;
}

// _chg_privcap
// file user.c line 527
static signed int _chg_privcap(struct Npsrv *srv, enum anonymous_2 val)
{
  struct _cap_struct *cap;
  enum anonymous_2 cur;
  signed int cf[3l] = { 1, 0, 3 };
  signed int need_set = 0;
  signed int i;
  signed int ret = -1;
  cap=cap_get_proc();
  if(cap == ((struct _cap_struct *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    np_uerror((unsigned long int)*return_value___errno_location_1);
    np_logerr(srv, "cap_get_proc failed");
    goto done;
  }

  i = 0;
  for( ; !((unsigned long int)i >= 3ul); i = i + 1)
  {
    signed int return_value_cap_get_flag_3;
    return_value_cap_get_flag_3=cap_get_flag(cap, cf[(signed long int)i], (enum anonymous_3)CAP_EFFECTIVE, &cur);
    if(!(return_value_cap_get_flag_3 >= 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      np_uerror((unsigned long int)*return_value___errno_location_2);
      np_logerr(srv, "cap_get_flag failed");
      goto done;
    }

    if(!(cur == val))
    {
      need_set = 1;
      signed int return_value_cap_set_flag_5;
      return_value_cap_set_flag_5=cap_set_flag(cap, (enum anonymous_3)CAP_EFFECTIVE, 1, &cf[(signed long int)i], val);
      if(!(return_value_cap_set_flag_5 >= 0))
      {
        signed int *return_value___errno_location_4;
        return_value___errno_location_4=__errno_location();
        np_uerror((unsigned long int)*return_value___errno_location_4);
        np_logerr(srv, "cap_set_flag failed");
        goto done;
      }

    }

  }
  signed int return_value_cap_set_proc_7;
  if(!(need_set == 0))
  {
    return_value_cap_set_proc_7=cap_set_proc(cap);
    if(!(return_value_cap_set_proc_7 >= 0))
    {
      signed int *return_value___errno_location_6;
      return_value___errno_location_6=__errno_location();
      np_uerror((unsigned long int)*return_value___errno_location_6);
      np_logerr(srv, "cap_set_proc failed");
      goto done;
    }

  }

  ret = 0;

done:
  ;
  signed int return_value_cap_free_9;
  if(!(cap == ((struct _cap_struct *)NULL)))
  {
    return_value_cap_free_9=cap_free((void *)cap);
    if(!(return_value_cap_free_9 >= 0))
    {
      signed int *return_value___errno_location_8;
      return_value___errno_location_8=__errno_location();
      np_uerror((unsigned long int)*return_value___errno_location_8);
      np_logerr(srv, "cap_free failed");
    }

  }

  return ret;
}

// _chomp
// file fmt.c line 80
static void _chomp(char *s)
{
  signed int len;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(s);
  len = (signed int)return_value_strlen_1;
  if((signed int)s[(signed long int)(len + -1)] == 10)
    s[(signed long int)(len - 1)] = (char)0;

}

// _cmp
// file hostlist.c line 1955
signed int _cmp(const void *hr1, const void *hr2)
{
  struct hostrange_components **h1 = (struct hostrange_components **)hr1;
  struct hostrange_components **h2 = (struct hostrange_components **)hr2;
  signed int return_value_hostrange_cmp_1;
  return_value_hostrange_cmp_1=hostrange_cmp((struct hostrange_components *)*h1, (struct hostrange_components *)*h2);
  return return_value_hostrange_cmp_1;
}

// _create_export
// file diod_conf.c line 137
static struct anonymous_13 * _create_export(char *path)
{
  struct anonymous_13 *x;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_13) /*40ul*/ );
  x = (struct anonymous_13 *)return_value_malloc_1;
  if(x == ((struct anonymous_13 *)NULL))
    return (struct anonymous_13 *)(void *)0;

  else
  {
    x->path=strdup(path);
    if(x->path == ((char *)NULL))
    {
      free((void *)x);
      return (struct anonymous_13 *)(void *)0;
    }

    else
    {
      x->opts = (char *)(void *)0;
      x->hosts = (char *)(void *)0;
      x->users = (char *)(void *)0;
      x->oflags = 0;
      return x;
    }
  }
}

// _create_fid
// file fidpool.c line 84
static struct Npfid * _create_fid(struct Npconn *conn, unsigned int fid)
{
  struct Npfid *f;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct Npfid) /*128ul*/ );
  f = (struct Npfid *)return_value_malloc_1;
  if(!(f == ((struct Npfid *)NULL)))
  {
    memset((void *)f, 0, sizeof(struct Npfid) /*128ul*/ );
    f->conn = conn;
    f->fid = fid;
    pthread_mutex_init(&f->lock, (const union anonymous_6 *)(void *)0);
    f->magic = 0x765abcdf;
  }

  else
    np_uerror((unsigned long int)12);
  return f;
}

// _ctl_get_conns
// file srv.c line 904
static char * _ctl_get_conns(char *name, void *a)
{
  struct Npsrv *srv = (struct Npsrv *)a;
  struct Npconn *cc;
  char *s = (char *)(void *)0;
  signed int len = 0;
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&srv->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "srv.c", 911);

  }
  while((_Bool)0);
  cc = srv->conns;
  for( ; !(cc == ((struct Npconn *)NULL)); cc = cc->next)
  {
    do
    {
      signed int _ctl_get_conns__1__2__1__1__pthread_mutex_lock_result;
      _ctl_get_conns__1__2__1__1__pthread_mutex_lock_result=pthread_mutex_lock(&cc->lock);
      if(!(_ctl_get_conns__1__2__1__1__pthread_mutex_lock_result == 0))
        np_assfail("pthread_mutex_lock_result == 0", "srv.c", 913);

    }
    while((_Bool)0);
    char *return_value_np_conn_get_client_id_1;
    return_value_np_conn_get_client_id_1=np_conn_get_client_id(cc);
    signed int return_value_np_fidpool_count_2;
    return_value_np_fidpool_count_2=np_fidpool_count(cc->fidpool);
    signed int return_value_aspf_3;
    return_value_aspf_3=aspf(&s, &len, "%s %d\n", return_value_np_conn_get_client_id_1, return_value_np_fidpool_count_2);
    if(!(return_value_aspf_3 >= 0))
    {
      np_uerror((unsigned long int)12);
      goto error_unlock;
    }

    do
    {
      signed int pthread_mutex_unlock_result;
      pthread_mutex_unlock_result=pthread_mutex_unlock(&cc->lock);
      if(!(pthread_mutex_unlock_result == 0))
        np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 920);

    }
    while((_Bool)0);
  }
  do
  {
    signed int _ctl_get_conns__1__3__pthread_mutex_unlock_result;
    _ctl_get_conns__1__3__pthread_mutex_unlock_result=pthread_mutex_unlock(&srv->lock);
    if(!(_ctl_get_conns__1__3__pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 922);

  }
  while((_Bool)0);
  return s;
  do
  {

  error_unlock:
    ;
    signed int _ctl_get_conns__1__4__pthread_mutex_unlock_result;
    _ctl_get_conns__1__4__pthread_mutex_unlock_result=pthread_mutex_unlock(&cc->lock);
    if(!(_ctl_get_conns__1__4__pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 925);

  }
  while((_Bool)0);
  do
  {
    signed int _ctl_get_conns__1__5__pthread_mutex_unlock_result;
    _ctl_get_conns__1__5__pthread_mutex_unlock_result=pthread_mutex_unlock(&srv->lock);
    if(!(_ctl_get_conns__1__5__pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 926);

  }
  while((_Bool)0);
  if(!(s == ((char *)NULL)))
    free((void *)s);

  return (char *)(void *)0;
}

// _ctl_get_date
// file ctl.c line 298
static char * _ctl_get_date(char *name, void *a)
{
  struct timeval tv;
  struct timezone tz;
  char *s = (char *)(void *)0;
  signed int len = 0;
  signed int return_value_gettimeofday_2;
  return_value_gettimeofday_2=gettimeofday(&tv, &tz);
  if(!(return_value_gettimeofday_2 >= 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    np_uerror((unsigned long int)*return_value___errno_location_1);
    goto error;
  }

  signed int return_value_aspf_3;
  return_value_aspf_3=aspf(&s, &len, "%lu.%lu %d.%d\n", tv.tv_sec, tv.tv_usec, tz.tz_minuteswest, tz.tz_dsttime);
  if(!(return_value_aspf_3 >= 0))
    np_uerror((unsigned long int)12);

  else
    return s;

error:
  ;
  return (char *)(void *)0;
}

// _ctl_get_proc
// file ctl.c line 151
static char * _ctl_get_proc(char *name, void *arg)
{
  char path[4097l];
  signed int ssize = 0;
  char *s = (char *)(void *)0;
  signed int fd = -1;
  signed int n;
  signed int len;
  snprintf(path, sizeof(char [4097l]) /*4097ul*/ , "/proc/%s", name);
  n = 0;
  unsigned long int return_value_strlen_1;
  do
  {
    return_value_strlen_1=strlen(path);
    if((unsigned long int)n >= return_value_strlen_1)
      break;

    if((signed int)path[(signed long int)n] == 46)
      path[(signed long int)n] = (char)47;

    n = n + 1;
  }
  while((_Bool)1);
  fd=open(path, 00);
  if(!(fd >= 0))
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    np_uerror((unsigned long int)*return_value___errno_location_2);
    goto error;
  }

  len = 0;
  while((_Bool)1)
  {
    if(s == ((char *)NULL))
    {
      ssize = 4096;
      void *return_value_malloc_3;
      return_value_malloc_3=malloc((unsigned long int)ssize);
      s = (char *)return_value_malloc_3;
    }

    else
      if(ssize + -len == 1)
      {
        ssize = ssize + 4096;
        void *return_value_realloc_4;
        return_value_realloc_4=realloc((void *)s, (unsigned long int)ssize);
        s = (char *)return_value_realloc_4;
      }

    if(s == ((char *)NULL))
    {
      np_uerror((unsigned long int)12);
      goto error;
    }

    signed long int return_value_read_5;
    return_value_read_5=read(fd, (void *)(s + (signed long int)len), (unsigned long int)((ssize - len) - 1));
    n = (signed int)return_value_read_5;
    if(n >= 1)
      len = len + n;

    if(!(n >= 1))
      break;

  }
  if(!(n >= 0))
  {
    signed int *return_value___errno_location_6;
    return_value___errno_location_6=__errno_location();
    np_uerror((unsigned long int)*return_value___errno_location_6);
    goto error;
  }

  close(fd);
  s[(signed long int)len] = (char)0;
  return s;

error:
  ;
  if(!(s == ((char *)NULL)))
    free((void *)s);

  if(fd >= 0)
    close(fd);

  return (char *)(void *)0;
}

// _ctl_get_tpools
// file srv.c line 933
static char * _ctl_get_tpools(char *name, void *a)
{
  struct Npsrv *srv = (struct Npsrv *)a;
  struct Nptpool *tp;
  struct Npreq *req;
  char *s = (char *)(void *)0;
  signed int n;
  signed int len = 0;
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&srv->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "srv.c", 941);

  }
  while((_Bool)0);
  tp = srv->tpool;
  for( ; !(tp == ((struct Nptpool *)NULL)); tp = tp->next)
  {
    tp->stats.name = tp->name;
    do
    {
      signed int _ctl_get_tpools__1__2__1__1__pthread_mutex_lock_result;
      _ctl_get_tpools__1__2__1__1__pthread_mutex_lock_result=pthread_mutex_lock(&tp->lock);
      if(!(_ctl_get_tpools__1__2__1__1__pthread_mutex_lock_result == 0))
        np_assfail("pthread_mutex_lock_result == 0", "srv.c", 944);

    }
    while((_Bool)0);
    tp->stats.numfids = tp->refcount;
    do
    {
      signed int _ctl_get_tpools__1__2__1__2__pthread_mutex_unlock_result;
      _ctl_get_tpools__1__2__1__2__pthread_mutex_unlock_result=pthread_mutex_unlock(&tp->lock);
      if(!(_ctl_get_tpools__1__2__1__2__pthread_mutex_unlock_result == 0))
        np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 946);

    }
    while((_Bool)0);
    tp->stats.numreqs = 0;
    req = tp->reqs_first;
    for( ; !(req == ((struct Npreq *)NULL)); req = req->next)
      tp->stats.numreqs = tp->stats.numreqs + 1;
    req = tp->workreqs;
    for( ; !(req == ((struct Npreq *)NULL)); req = req->next)
      tp->stats.numreqs = tp->stats.numreqs + 1;
    n=np_encode_tpools_str(&s, &len, &tp->stats);
    if(!(n >= 0))
    {
      np_uerror((unsigned long int)12);
      goto error_unlock;
    }

  }
  do
  {
    signed int _ctl_get_tpools__1__3__pthread_mutex_unlock_result;
    _ctl_get_tpools__1__3__pthread_mutex_unlock_result=pthread_mutex_unlock(&srv->lock);
    if(!(_ctl_get_tpools__1__3__pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 958);

  }
  while((_Bool)0);
  return s;
  do
  {

  error_unlock:
    ;
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&srv->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 961);

  }
  while((_Bool)0);
  if(!(s == ((char *)NULL)))
    free((void *)s);

  return (char *)(void *)0;
}

// _ctl_get_version
// file ctl.c line 287
static char * _ctl_get_version(char *name, void *a)
{
  char *s = (char *)(void *)0;
  signed int len = 0;
  signed int return_value_aspf_1;
  return_value_aspf_1=aspf(&s, &len, "%s\n", (const void *)"diod-1.0.24");
  if(!(return_value_aspf_1 >= 0))
    np_uerror((unsigned long int)12);

  return s;
}

// _da_create
// file diod_auth.c line 104
static struct diod_auth_struct * _da_create(void)
{
  struct diod_auth_struct *da = (struct diod_auth_struct *)(void *)0;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct diod_auth_struct) /*40ul*/ );
  da = (struct diod_auth_struct *)return_value_malloc_1;
  if(da == ((struct diod_auth_struct *)NULL))
    np_uerror((unsigned long int)12);

  else
  {
    da->magic = 0x54346666;
    da->datastr = (char *)(void *)0;
    da->mungectx=munge_ctx_create();
    if(da->mungectx == ((struct munge_ctx *)NULL))
    {
      np_uerror((unsigned long int)12);
      free((void *)da);
      da = (struct diod_auth_struct *)(void *)0;
    }

    else
    {
      da->mungeuid = (unsigned int)-1;
      da->mungegid = (unsigned int)-1;
    }
  }

done:
  ;
  return da;
}

// _da_destroy
// file diod_auth.c line 131
static void _da_destroy(struct diod_auth_struct *da)
{
  if(!(da->magic == 0x54346666))
    np_assfail("da->magic == DIOD_AUTH_MAGIC", "diod_auth.c", 133);

  da->magic = 0;
  if(!(da->datastr == ((char *)NULL)))
    free((void *)da->datastr);

  if(!(da->mungectx == ((struct munge_ctx *)NULL)))
    munge_ctx_destroy(da->mungectx);

  free((void *)da);
}

// _debug_trace
// file conn.c line 136
static void _debug_trace(struct Npsrv *srv, struct Npfcall *fc)
{
  if(!((1 & srv->flags) == 0))
  {
    char s[512l];
    struct timeval a;
    struct timeval c;
    np_snprintfcall(s, (signed int)sizeof(char [512l]) /*512ul*/ , fc);
    if(!((16 & srv->flags) == 0))
    {
      static struct timeval b = { .tv_sec=(signed long int)0, .tv_usec=(signed long int)0 };
      if(b.tv_sec == 0l)
        gettimeofday(&b, (struct timezone *)(void *)0);

      gettimeofday(&a, (struct timezone *)(void *)0);
      do
      {
        (&c)->tv_sec = (&a)->tv_sec - (&b)->tv_sec;
        (&c)->tv_usec = (&a)->tv_usec - (&b)->tv_usec;
        if(!(c.tv_usec >= 0l))
        {
          (&c)->tv_sec = (&c)->tv_sec - 1l;
          (&c)->tv_usec = (&c)->tv_usec + (signed long int)1000000;
        }

      }
      while((_Bool)0);
      np_logmsg(srv, "[%lu.%-3lu] %s", c.tv_sec, c.tv_usec / (signed long int)1000, (const void *)s);
    }

    else
      np_logmsg(srv, "%s", (const void *)s);
  }

}

// _destroy_export
// file diod_conf.c line 163
static void _destroy_export(struct anonymous_13 *x)
{
  free((void *)x->path);
  if(!(x->opts == ((char *)NULL)))
    free((void *)x->opts);

  if(!(x->hosts == ((char *)NULL)))
    free((void *)x->hosts);

  if(!(x->users == ((char *)NULL)))
    free((void *)x->users);

  free((void *)x);
}

// _destroy_fid
// file fidpool.c line 47
static struct Npfid * _destroy_fid(struct Npfid *f)
{
  struct Npsrv *srv;
  struct Npfid *next;
  if(f == ((struct Npfid *)NULL))
    np_assfail("f != NULL", "fidpool.c", 52);

  if(!(f->magic == 0x765abcdf))
    np_assfail("f->magic == FID_MAGIC", "fidpool.c", 53);

  srv = f->conn->srv;
  next = f->next;
  if(f->refcount >= 1)
  {
    if(!((4 & srv->flags) == 0))
      np_logmsg(srv, "_destroy_fid: fid %d has %d refs", f->fid, f->refcount);

  }

  if(!((8 & (signed int)f->type) == 0))
  {
    if(!(srv->auth == ((struct Npauth *)NULL)))
    {
      if(!(srv->auth->clunk == ((signed int (*)(struct Npfid *))NULL)))
        srv->auth->clunk(f);

    }

  }

  else
    if(!((4 & (signed int)f->type) == 0))
      np_ctl_fiddestroy(f);

    else
      if(!(srv->fiddestroy == ((void (*)(struct Npfid *))NULL)))
        srv->fiddestroy(f);

  if(!(f->user == ((struct Npuser *)NULL)))
    np_user_decref(f->user);

  if(!(f->tpool == ((struct Nptpool *)NULL)))
    np_tpool_decref(f->tpool);

  if(!(f->aname == ((char *)NULL)))
    free((void *)f->aname);

  pthread_mutex_destroy(&f->lock);
  f->magic = (signed int)0xdeadbeef;
  free((void *)f);
  return next;
}

// _diod_mount
// file diodmount.c line 517
static void _diod_mount(struct opt_struct *o, signed int rfd, signed int wfd, char *spec, char *dir, signed int vopt, signed int fopt, signed int nopt)
{
  char *options;
  char *options9p;
  char *aname;
  char *uname;
  unsigned int uid;
  signed int msize;
  struct Npcfsys *fs;
  struct Npcfid *afid;
  struct Npcfid *root;
  unsigned long int mountflags = (unsigned long int)0;
  options=opt_csv(o);
  _getflags(o, &mountflags);
  options9p=opt_csv(o);
  uname=opt_find(o, "uname");
  if(uname == ((char *)NULL))
    msg_exit("uname is not set");

  uid=_uname2uid(uname);
  aname=opt_find(o, "aname");
  signed int return_value_opt_scanf_1;
  return_value_opt_scanf_1=opt_scanf(o, "msize=%d", &msize);
  if(return_value_opt_scanf_1 == 0 || !(msize >= 24))
    msg_exit("msize must be set to integer >= %d", 24);

  if(!(vopt == 0))
    msg("pre-authenticating connection to server");

  fs=npc_start(rfd, wfd, msize, 0);
  unsigned long int return_value_np_rerror_2;
  if(fs == ((struct Npcfsys *)NULL))
  {
    return_value_np_rerror_2=np_rerror();
    errn_exit((signed int)return_value_np_rerror_2, "version");
  }

  afid=npc_auth(fs, aname, uid, diod_auth);
  unsigned long int return_value_np_rerror_4;
  unsigned long int return_value_np_rerror_3;
  if(afid == ((struct Npcfid *)NULL))
  {
    return_value_np_rerror_4=np_rerror();
    if(!(return_value_np_rerror_4 == 0ul))
    {
      return_value_np_rerror_3=np_rerror();
      errn_exit((signed int)return_value_np_rerror_3, "auth");
    }

  }

  root=npc_attach(fs, afid, aname, uid);
  if(root == ((struct Npcfid *)NULL))
  {
    unsigned long int return_value_np_rerror_5;
    return_value_np_rerror_5=np_rerror();
    errn((signed int)return_value_np_rerror_5, "attach");
    if(!(afid == ((struct Npcfid *)NULL)))
      npc_clunk(afid);

    exit(1);
  }

  signed int return_value_npc_clunk_7;
  unsigned long int return_value_np_rerror_6;
  if(!(afid == ((struct Npcfid *)NULL)))
  {
    return_value_npc_clunk_7=npc_clunk(afid);
    if(!(return_value_npc_clunk_7 >= 0))
    {
      return_value_np_rerror_6=np_rerror();
      errn_exit((signed int)return_value_np_rerror_6, "clunk afid");
    }

  }

  signed int return_value_npc_clunk_9;
  return_value_npc_clunk_9=npc_clunk(root);
  unsigned long int return_value_np_rerror_8;
  if(!(return_value_npc_clunk_9 >= 0))
  {
    return_value_np_rerror_8=np_rerror();
    errn_exit((signed int)return_value_np_rerror_8, "clunk root");
  }

  if(!(vopt == 0))
    msg("mount -t 9p %s %s -o%s", spec, dir, options);

  if(fopt == 0)
  {
    signed int return_value_fcntl_10;
    return_value_fcntl_10=fcntl(rfd, 4, 04000);
    if(!(return_value_fcntl_10 >= 0))
      err_exit("setting O_NONBLOCK flag on rfd=%d", rfd);

    signed int return_value_fcntl_11;
    return_value_fcntl_11=fcntl(wfd, 4, 04000);
    if(!(return_value_fcntl_11 >= 0))
      err_exit("setting O_NONBLOCK flag on wfd=%d", wfd);

    _mount(spec, dir, mountflags, (const void *)options9p);
  }

  npc_finish(fs);
  if(nopt == 0)
  {
    signed int return_value__update_mtab_12;
    return_value__update_mtab_12=_update_mtab(options, spec, dir);
    if(return_value__update_mtab_12 == 0)
      msg_exit("failed to update /etc/mtab");

  }

  free((void *)options);
  free((void *)options9p);
}

// _diod_remount
// file diodmount.c line 464
static void _diod_remount(struct opt_struct *o, char *spec, char *dir, signed int vopt, signed int fopt)
{
  char *options;
  options=opt_csv(o);
  unsigned long int mountflags = (unsigned long int)0;
  _getflags(o, &mountflags);
  if(!(vopt == 0))
    msg("mount %s %s -o%s", spec, dir, options);

  if(fopt == 0)
    _mount(spec, dir, mountflags, (void *)0);

  free((void *)options);
}

// _disable_nagle
// file diod_sock.c line 67
static signed int _disable_nagle(signed int fd)
{
  signed int ret;
  signed int i = 1;
  unsigned int len = (unsigned int)sizeof(signed int) /*4ul*/ ;
  i = 1;
  ret=setsockopt(fd, 6, 1, (const void *)&i, len);
  if(!(ret >= 0))
    err("setsockopt TCP_NODELAY");


done:
  ;
  return ret;
}

// _enable_keepalive
// file diod_sock.c line 93
static signed int _enable_keepalive(signed int fd)
{
  signed int ret;
  signed int i;
  unsigned int len = (unsigned int)sizeof(signed int) /*4ul*/ ;
  i = 1;
  ret=setsockopt(fd, 1, 9, (const void *)&i, len);
  if(!(ret >= 0))
    err("setsockopt SO_KEEPALIVE");

  else
  {
    i = 120;
    ret=setsockopt(fd, 6, 4, (const void *)&i, len);
    if(!(ret >= 0))
      err("setsockopt SO_KEEPIDLE");

    else
    {
      i = 120;
      ret=setsockopt(fd, 6, 5, (const void *)&i, len);
      if(!(ret >= 0))
        err("setsockopt SO_KEEPINTVL");

      else
      {
        i = 9;
        ret=setsockopt(fd, 6, 6, (const void *)&i, len);
        if(!(ret >= 0))
          err("setsockopt SO_KEEPCNT");

      }
    }
  }

done:
  ;
  return ret;
}

// _enable_reuseaddr
// file diod_sock.c line 127
static signed int _enable_reuseaddr(signed int fd)
{
  signed int ret;
  signed int i;
  unsigned int len = (unsigned int)sizeof(signed int) /*4ul*/ ;
  i = 1;
  ret=setsockopt(fd, 1, 2, (const void *)&i, len);
  if(!(ret >= 0))
    err("setsockopt SO_REUSEADDR");


done:
  ;
  return ret;
}

// _error
// file hostlist.c line 336
static void _error(char *file, signed int line, char *msg, ...)
{
  void **ap;
  char buf[1024l];
  signed int len = 0;
  ap = (void **)&msg;
  len=vsnprintf(buf, (unsigned long int)1024, msg, ap);
  if(len >= 1025 || !(len >= 0))
    buf[(signed long int)1023] = (char)0;

  lsd_fatal_error(file, line, buf);
  ap = ((void **)NULL);
  goto __CPROVER_DUMP_L2;

__CPROVER_DUMP_L2:
  ;
}

// _floorlog2
// file srv.c line 514
static unsigned int _floorlog2(unsigned int i)
{
  unsigned int j = (unsigned int)0;
  if(i >= 65536u)
  {
    i = i >> 16;
    j = j + (unsigned int)16;
  }

  if(i >= 256u)
  {
    i = i >> 8;
    j = j + (unsigned int)8;
  }

  if(i >= 16u)
  {
    i = i >> 4;
    j = j + (unsigned int)4;
  }

  if(i >= 4u)
  {
    i = i >> 2;
    j = j + (unsigned int)2;
  }

  if(i >= 2u)
    j = j + (unsigned int)1;

  return j;
}

// _free_fid
// file ctl.c line 72
static void _free_fid(struct anonymous_4 *f)
{
  if(!(f == ((struct anonymous_4 *)NULL)))
  {
    if(!(f->data == NULL))
      free(f->data);

    free((void *)f);
  }

}

// _free_user
// file user.c line 186
static void _free_user(struct Npuser *u)
{
  if(!(u->uname == ((char *)NULL)))
    free((void *)u->uname);

  if(!(u->sg == ((unsigned int *)NULL)))
    free((void *)u->sg);

  pthread_mutex_destroy(&u->lock);
  free((void *)u);
}

// _get_bracketed_list
// file hostlist.c line 2148
static signed int _get_bracketed_list(struct hostlist *hl, signed int *start, const unsigned long int n, char *buf)
{
  struct hostrange_components **hr = hl->hr;
  signed int i = *start;
  signed int m;
  signed int len = 0;
  signed int bracket_needed;
  bracket_needed=_is_bracket_needed(hl, i);
  len=snprintf(buf, n, "%s", hr[(signed long int)i]->prefix);
  signed int tmp_post_1;
  signed int tmp_post_5;
  _Bool tmp_if_expr_3;
  signed int return_value_hostrange_within_range_2;
  if(!(len >= 0) || !(n >= (unsigned long int)len))
    return (signed int)n;

  else
  {
    if(len >= 0 && !(bracket_needed == 0) && !((unsigned long int)len >= n))
    {
      tmp_post_1 = len;
      len = len + 1;
      buf[(signed long int)tmp_post_1] = (char)91;
    }

    do
    {
      m = (signed int)(n - (unsigned long int)len <= n ? n - (unsigned long int)len : (unsigned long int)0);
      unsigned long int return_value_hostrange_numstr_4;
      return_value_hostrange_numstr_4=hostrange_numstr(hr[(signed long int)i], (unsigned long int)m, buf + (signed long int)len);
      len = len + (signed int)return_value_hostrange_numstr_4;
      if((unsigned long int)len >= n)
        break;

      if(!(bracket_needed == 0))
      {
        tmp_post_5 = len;
        len = len + 1;
        buf[(signed long int)tmp_post_5] = (char)44;
      }

      i = i + 1;
      if(!(i >= hl->nranges))
      {
        return_value_hostrange_within_range_2=hostrange_within_range(hr[(signed long int)i], hr[(signed long int)(i - 1)]);
        tmp_if_expr_3 = return_value_hostrange_within_range_2 != 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_3 = (_Bool)0;
    }
    while(tmp_if_expr_3);
    if(len >= 1 && !(bracket_needed == 0) && !((unsigned long int)len >= n))
    {
      buf[(signed long int)(len - 1)] = (char)93;
      buf[(signed long int)len] = (char)0;
    }

    else
      if((unsigned long int)len >= n)
      {
        if(n >= 1ul)
          buf[(signed long int)(n - (unsigned long int)1)] = (char)0;

      }

      else
        buf[(signed long int)(len > 0 ? len : 0)] = (char)0;
    *start = i;
    return len;
  }
}

// _get_usercache
// file user.c line 117
static char * _get_usercache(char *name, void *a)
{
  struct Npsrv *srv = (struct Npsrv *)a;
  struct anonymous_1 *uc = (struct anonymous_1 *)srv->usercache;
  struct Npuser *u;
  signed long int now;
  now=time((signed long int *)(void *)0);
  char *s = (char *)(void *)0;
  signed int len = 0;
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&uc->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "user.c", 126);

  }
  while((_Bool)0);
  _usercache_expire(srv);
  u = uc->users;
  for( ; !(u == ((struct Npuser *)NULL)); u = u->next)
  {
    signed int ttl = (signed int)((signed long int)uc->ttl - (now - u->t));
    signed int return_value_aspf_1;
    return_value_aspf_1=aspf(&s, &len, "%s(%d,%d+%d) %d\n", u->uname, u->uid, u->gid, u->nsg, u->uid != 0u ? ttl : 0);
    if(!(return_value_aspf_1 >= 0))
    {
      np_uerror((unsigned long int)12);
      do
      {
        signed int pthread_mutex_unlock_result;
        pthread_mutex_unlock_result=pthread_mutex_unlock(&uc->lock);
        if(!(pthread_mutex_unlock_result == 0))
          np_assfail("pthread_mutex_unlock_result == 0", "user.c", 134);

      }
      while((_Bool)0);
      goto error;
    }

  }
  do
  {
    signed int _get_usercache__1__3__pthread_mutex_unlock_result;
    _get_usercache__1__3__pthread_mutex_unlock_result=pthread_mutex_unlock(&uc->lock);
    if(!(_get_usercache__1__3__pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "user.c", 138);

  }
  while((_Bool)0);
  return s;

error:
  ;
  if(!(s == ((char *)NULL)))
    free((void *)s);

  return (char *)(void *)0;
}

// _getflags
// file diodmount.c line 445
static void _getflags(struct opt_struct *o, unsigned long int *flags)
{
  signed int i = 0;
  for( ; !((unsigned long int)i >= 8ul); i = i + 1)
  {
    char *return_value_opt_find_1;
    return_value_opt_find_1=opt_find(o, setopt[(signed long int)i].opt);
    if(!(return_value_opt_find_1 == ((char *)NULL)))
    {
      *flags = *flags | setopt[(signed long int)i].flag;
      opt_delete(o, setopt[(signed long int)i].opt);
    }

  }
  i = 0;
  for( ; !((unsigned long int)i >= 7ul); i = i + 1)
  {
    char *return_value_opt_find_2;
    return_value_opt_find_2=opt_find(o, clropt[(signed long int)i].opt);
    if(!(return_value_opt_find_2 == ((char *)NULL)))
    {
      *flags = *flags & ~clropt[(signed long int)i].flag;
      opt_delete(o, clropt[(signed long int)i].opt);
    }

  }
}

// _getgrouplist
// file user.c line 227
static signed int _getgrouplist(struct Npsrv *srv, struct Npuser *u)
{
  signed int i;
  signed int ret = -1;
  unsigned int *sgcpy;
  signed long int return_value_sysconf_1;
  return_value_sysconf_1=sysconf(3);
  u->nsg = (signed int)return_value_sysconf_1;
  if(!(u->nsg >= 65536))
    u->nsg = 65536;

  void *return_value_malloc_2;
  return_value_malloc_2=malloc((unsigned long int)u->nsg * sizeof(unsigned int) /*4ul*/ );
  u->sg = (unsigned int *)return_value_malloc_2;
  signed int return_value_getgrouplist_4;
  void *return_value_malloc_5;
  if(u->sg == ((unsigned int *)NULL))
  {
    np_uerror((unsigned long int)12);
    np_logerr(srv, "_alloc_user: %s", u->uname);
  }

  else
  {
    return_value_getgrouplist_4=getgrouplist(u->uname, u->gid, u->sg, &u->nsg);
    if(return_value_getgrouplist_4 == -1)
    {
      np_logerr(srv, "_alloc_user: %s: getgrouplist", u->uname);
      unsigned long int return_value_np_rerror_3;
      return_value_np_rerror_3=np_rerror();
      if(return_value_np_rerror_3 == 0ul)
        np_uerror((unsigned long int)1);

      goto done;
    }

    return_value_malloc_5=malloc((unsigned long int)u->nsg * sizeof(unsigned int) /*4ul*/ );
    sgcpy = (unsigned int *)return_value_malloc_5;
    if(!(sgcpy == ((unsigned int *)NULL)))
    {
      i = 0;
      for( ; !(i >= u->nsg); i = i + 1)
        sgcpy[(signed long int)i] = u->sg[(signed long int)i];
      free((void *)u->sg);
      u->sg = sgcpy;
    }

    ret = 0;
  }

done:
  ;
  return ret;
}

// _hbin
// file srv.c line 528
static signed int _hbin(unsigned long int val)
{
  unsigned int i = (unsigned int)(val / (unsigned long int)1024);
  unsigned int j;
  unsigned int tmp_if_expr_2;
  unsigned int return_value__floorlog2_1;
  if(!(i >= 4u))
    tmp_if_expr_2 = (unsigned int)0;

  else
  {
    return_value__floorlog2_1=_floorlog2(i);
    tmp_if_expr_2 = return_value__floorlog2_1 - (unsigned int)1;
  }
  j = tmp_if_expr_2;
  return (signed int)(j < (unsigned int)12 ? j : (unsigned int)(12 - 1));
}

// _hostlist_create
// file hostlist.c line 1392
static struct hostlist * _hostlist_create(const char *hostlist, char *sep, char *r_op)
{
  struct hostlist *return_value__hostlist_create_bracketed_1;
  return_value__hostlist_create_bracketed_1=_hostlist_create_bracketed(hostlist, sep, r_op);
  return return_value__hostlist_create_bracketed_1;
}

// _hostlist_create_bracketed
// file hostlist.c line 1510
static struct hostlist * _hostlist_create_bracketed(const char *hostlist, char *sep, char *r_op)
{
  struct hostlist *new;
  new=hostlist_new();
  struct _range ranges[10240l];
  signed int nr;
  signed int _hostlist_create_bracketed__1__err;
  char *p;
  char *tok;
  char *str;
  char *orig;
  char cur_tok[1024l];
  char *tmp_post_1;
  if(hostlist == ((const char *)NULL))
    return new;

  else
  {
    str=strdup(hostlist);
    orig = str;
    if(orig == ((char *)NULL))
    {
      hostlist_destroy(new);
      return (struct hostlist *)(void *)0;
    }

    else
    {
      do
      {
        tok=_next_tok(sep, &str);
        if(tok == ((char *)NULL))
          break;

        strncpy(cur_tok, tok, (unsigned long int)1024);
        p=strchr(tok, 91);
        if(!(p == ((char *)NULL)))
        {
          char *q;
          char *prefix = tok;
          tmp_post_1 = p;
          p = p + 1l;
          *tmp_post_1 = (char)0;
          q=strchr(p, 93);
          if(!(q == ((char *)NULL)))
          {
            *q = (char)0;
            nr=_parse_range_list(p, ranges, 10240);
            if(!(nr >= 0))
              goto error;

            q = q + 1l;
            if(!((signed int)*q == 0))
              _push_range_list_with_suffix(new, prefix, q, ranges, nr);

            else
              _push_range_list(new, prefix, ranges, nr);
          }

          else
            hostlist_push_host(new, cur_tok);
        }

        else
          hostlist_push_host(new, cur_tok);
      }
      while((_Bool)1);
      free((void *)orig);
      return new;

    error:
      ;
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      _hostlist_create_bracketed__1__err = *return_value___errno_location_2;
      hostlist_destroy(new);
      free((void *)orig);
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = _hostlist_create_bracketed__1__err;
      return (struct hostlist *)(void *)0;
    }
  }
}

// _hostrange_string
// file hostlist.c line 1845
static char * _hostrange_string(struct hostrange_components *hr, signed int depth)
{
  char buf[80l];
  signed int len;
  len=snprintf(buf, (unsigned long int)(64 + 15), "%s", hr->prefix);
  if(hr->singlehost == 0u)
    snprintf(buf + (signed long int)len, (unsigned long int)((64 + 15) - len), "%0*lu", hr->width, hr->lo + (unsigned long int)depth);

  char *return_value_strdup_1;
  return_value_strdup_1=strdup(buf);
  return return_value_strdup_1;
}

// _is_bracket_needed
// file hostlist.c line 2132
static signed int _is_bracket_needed(struct hostlist *hl, signed int i)
{
  struct hostrange_components *h1 = hl->hr[(signed long int)i];
  struct hostrange_components *h2;
  struct hostrange_components *tmp_if_expr_1;
  if(!(i >= hl->nranges + -1))
    tmp_if_expr_1 = hl->hr[(signed long int)(i + 1)];

  else
    tmp_if_expr_1 = (struct hostrange_components *)(void *)0;
  h2 = tmp_if_expr_1;
  unsigned long int return_value_hostrange_count_2;
  return_value_hostrange_count_2=hostrange_count(h1);
  _Bool tmp_if_expr_4;
  signed int return_value_hostrange_within_range_3;
  if(return_value_hostrange_count_2 >= 2ul)
    tmp_if_expr_4 = (_Bool)1;

  else
  {
    return_value_hostrange_within_range_3=hostrange_within_range(h1, h2);
    tmp_if_expr_4 = return_value_hostrange_within_range_3 != 0 ? (_Bool)1 : (_Bool)0;
  }
  return (signed int)tmp_if_expr_4;
}

// _iterator_advance
// file hostlist.c line 2285
static void _iterator_advance(struct hostlist_iterator *i)
{
  /* assertion i != ((void *)0) */
  assert(i != (struct hostlist_iterator *)(void *)0);
  /* assertion i->magic == 57005 */
  assert(i->magic == 57005);
  if(i->hl->nranges + -1 >= i->idx)
  {
    i->depth = i->depth + 1;
    if(!(i->hr->hi + -i->hr->lo >= (unsigned long int)i->depth))
    {
      i->depth = 0;
      i->idx = i->idx + 1;
      i->hr = i->hl->hr[(signed long int)i->idx];
    }

  }

}

// _iterator_advance_range
// file hostlist.c line 2301
static void _iterator_advance_range(struct hostlist_iterator *i)
{
  signed int nr;
  signed int j;
  struct hostrange_components **hr;
  /* assertion i != ((void *)0) */
  assert(i != (struct hostlist_iterator *)(void *)0);
  /* assertion i->magic == 57005 */
  assert(i->magic == 57005);
  nr = i->hl->nranges;
  hr = i->hl->hr;
  j = i->idx;
  i->depth = i->depth + 1;
  signed int return_value_hostrange_within_range_1;
  if(i->depth >= 1)
  {
    do
    {
      j = j + 1;
      if(j >= nr)
        break;

      return_value_hostrange_within_range_1=hostrange_within_range(i->hr, hr[(signed long int)j]);
      if(return_value_hostrange_within_range_1 == 0)
        break;

    }
    while((_Bool)1);
    i->idx = j;
    i->hr = i->hl->hr[(signed long int)i->idx];
    i->depth = 0;
  }

}

// _link_fid
// file fidpool.c line 202
static void _link_fid(struct Npfid **head, struct Npfid *f)
{
  f->next = *head;
  f->prev = (struct Npfid *)(void *)0;
  if(!(*head == ((struct Npfid *)NULL)))
    (*head)->prev = f;

  *head = f;
}

// _listen_fds
// file diod_sock.c line 246
static signed int _listen_fds(struct pollfd *fds, signed int nfds)
{
  signed int ret = 0;
  signed int i = 0;
  for( ; !(i >= nfds); i = i + 1)
  {
    signed int return_value_listen_1;
    return_value_listen_1=listen((fds + (signed long int)i)->fd, 5);
    if(return_value_listen_1 == 0)
      ret = ret + 1;

  }
  return ret;
}

// _lookup_fid
// file fidpool.c line 172
static struct Npfid * _lookup_fid(struct Npfid **head, unsigned int fid)
{
  struct Npfid *f = *head;
  for( ; !(f == ((struct Npfid *)NULL)); f = f->next)
    if(f->fid == fid)
    {
      if((0x01 & f->flags) == 0)
      {
        if(!(f == *head))
          _optimize_fid(head, f);

        break;
      }

    }

  return f;
}

// _lua_get_expattr
// file diod_conf.c line 551
static void _lua_get_expattr(char *path, signed int i, struct lua_State *L, char *key, char **sp)
{
  lua_getfield(L, -1, key);
  signed int return_value_lua_type_3;
  return_value_lua_type_3=lua_type(L, -1);
  if(!(return_value_lua_type_3 == 0))
  {
    signed int return_value_lua_isstring_1;
    return_value_lua_isstring_1=lua_isstring(L, -1);
    if(return_value_lua_isstring_1 == 0)
      msg_exit("%s: `exports[%d].%s' requires string value", path, i, key);

    const char *return_value_lua_tolstring_2;
    return_value_lua_tolstring_2=lua_tolstring(L, -1, (unsigned long int *)(void *)0);
    *sp=_xstrdup((char *)return_value_lua_tolstring_2);
  }

  lua_settop(L, -1 - 1);
}

// _lua_getglobal_exports
// file diod_conf.c line 564
static signed int _lua_getglobal_exports(char *path, struct lua_State *L, struct list **lp)
{
  struct anonymous_13 *x;
  signed int res = 0;
  signed int i;
  struct list *l;
  lua_getfield(L, -10002, "exports");
  signed int return_value_lua_type_6;
  return_value_lua_type_6=lua_type(L, -1);
  signed int return_value_lua_type_4;
  if(!(return_value_lua_type_6 == 0))
  {
    signed int return_value_lua_type_1;
    return_value_lua_type_1=lua_type(L, -1);
    if(!(return_value_lua_type_1 == 5))
      msg_exit("%s: `exports' should be table", path);

    l=_xlist_create((void (*)(void *))_destroy_export);
    i = 1;
    do
    {
      lua_pushinteger(L, (signed long int)i);
      lua_gettable(L, -2);
      signed int return_value_lua_type_2;
      return_value_lua_type_2=lua_type(L, -1);
      if(return_value_lua_type_2 == 0)
        break;

      signed int return_value_lua_isstring_5;
      return_value_lua_isstring_5=lua_isstring(L, -1);
      if(!(return_value_lua_isstring_5 == 0))
      {
        const char *return_value_lua_tolstring_3;
        return_value_lua_tolstring_3=lua_tolstring(L, -1, (unsigned long int *)(void *)0);
        x=_xcreate_export((char *)return_value_lua_tolstring_3);
        _xlist_append(l, (void *)x);
      }

      else
      {
        return_value_lua_type_4=lua_type(L, -1);
        if(return_value_lua_type_4 == 5)
        {
          char *p = (char *)(void *)0;
          _lua_get_expattr(path, i, L, "path", &p);
          if(p == ((char *)NULL))
            msg_exit("%s: `exports[%d]' path is a required attribute", path, i);

          x=_xcreate_export(p);
          free((void *)p);
          _lua_get_expattr(path, i, L, "opts", &x->opts);
          if(x->opts == ((char *)NULL))
          {
            if(!(config.exportopts == ((char *)NULL)))
              x->opts=_xstrdup(config.exportopts);

          }

          if(!(x->opts == ((char *)NULL)))
            _parse_expopt(x->opts, &x->oflags);

          _lua_get_expattr(path, i, L, "users", &x->users);
          _lua_get_expattr(path, i, L, "hosts", &x->hosts);
          _xlist_append(l, (void *)x);
        }

        else
          msg_exit("%s: `exports[%d]' should be string/table", path, i);
      }
      lua_settop(L, -1 - 1);
      i = i + 1;
    }
    while((_Bool)1);
    lua_settop(L, -1 - 1);
    if(!(lp == ((struct list **)NULL)))
    {
      if(!(*lp == ((struct list *)NULL)))
        list_destroy(*lp);

      *lp = l;
    }

    else
      list_destroy(l);
    res = 1;
  }

  lua_settop(L, -1 - 1);
  return res;
}

// _lua_getglobal_int
// file diod_conf.c line 474
static signed int _lua_getglobal_int(char *path, struct lua_State *L, char *key, signed int *ip)
{
  signed int res = 0;
  lua_getfield(L, -10002, key);
  signed int return_value_lua_type_3;
  return_value_lua_type_3=lua_type(L, -1);
  double return_value_lua_tonumber_2;
  if(!(return_value_lua_type_3 == 0))
  {
    signed int return_value_lua_isnumber_1;
    return_value_lua_isnumber_1=lua_isnumber(L, -1);
    if(return_value_lua_isnumber_1 == 0)
      msg_exit("%s: `%s' should be number", path, key);

    if(!(ip == ((signed int *)NULL)))
    {
      return_value_lua_tonumber_2=lua_tonumber(L, -1);
      *ip = (signed int)return_value_lua_tonumber_2;
    }

    res = 1;
  }

  lua_settop(L, -1 - 1);
  return res;
}

// _lua_getglobal_list_of_strings
// file diod_conf.c line 515
static signed int _lua_getglobal_list_of_strings(char *path, struct lua_State *L, char *key, struct list **lp)
{
  signed int res = 0;
  signed int i;
  struct list *l;
  lua_getfield(L, -10002, key);
  signed int return_value_lua_type_6;
  return_value_lua_type_6=lua_type(L, -1);
  if(!(return_value_lua_type_6 == 0))
  {
    signed int return_value_lua_type_1;
    return_value_lua_type_1=lua_type(L, -1);
    if(!(return_value_lua_type_1 == 5))
      msg_exit("%s: `%s' should be table", path, key);

    l=_xlist_create((void (*)(void *))free);
    i = 1;
    do
    {
      lua_pushinteger(L, (signed long int)i);
      lua_gettable(L, -2);
      signed int return_value_lua_type_2;
      return_value_lua_type_2=lua_type(L, -1);
      if(return_value_lua_type_2 == 0)
        break;

      signed int return_value_lua_isstring_3;
      return_value_lua_isstring_3=lua_isstring(L, -1);
      if(return_value_lua_isstring_3 == 0)
        msg_exit("%s: `%s[%d]' should be string", path, key, i);

      const char *return_value_lua_tolstring_4;
      return_value_lua_tolstring_4=lua_tolstring(L, -1, (unsigned long int *)(void *)0);
      char *return_value__xstrdup_5;
      return_value__xstrdup_5=_xstrdup((char *)return_value_lua_tolstring_4);
      _xlist_append(l, (void *)return_value__xstrdup_5);
      lua_settop(L, -1 - 1);
      i = i + 1;
    }
    while((_Bool)1);
    lua_settop(L, -1 - 1);
    if(!(lp == ((struct list **)NULL)))
    {
      if(!(*lp == ((struct list *)NULL)))
        list_destroy(*lp);

      *lp = l;
    }

    else
      list_destroy(l);
    res = 1;
  }

  lua_settop(L, -1 - 1);
  return res;
}

// _lua_getglobal_string
// file diod_conf.c line 492
static signed int _lua_getglobal_string(char *path, struct lua_State *L, char *key, char **sp)
{
  signed int res = 0;
  char *cpy;
  lua_getfield(L, -10002, key);
  signed int return_value_lua_type_3;
  return_value_lua_type_3=lua_type(L, -1);
  if(!(return_value_lua_type_3 == 0))
  {
    signed int return_value_lua_isstring_1;
    return_value_lua_isstring_1=lua_isstring(L, -1);
    if(return_value_lua_isstring_1 == 0)
      msg_exit("%s: `%s' should be string", path, key);

    if(!(sp == ((char **)NULL)))
    {
      const char *return_value_lua_tolstring_2;
      return_value_lua_tolstring_2=lua_tolstring(L, -1, (unsigned long int *)(void *)0);
      cpy=_xstrdup((char *)return_value_lua_tolstring_2);
      if(!(*sp == ((char *)NULL)))
        free((void *)*sp);

      *sp = cpy;
    }

    res = 1;
  }

  lua_settop(L, -1 - 1);
  return res;
}

// _match
// file diod_log.c line 88
static signed int _match(char *s, struct anonymous_11 *m)
{
  signed int i = 0;
  signed int return_value_strcmp_1;
  for( ; !((m + (signed long int)i)->s == ((char *)NULL)); i = i + 1)
  {
    return_value_strcmp_1=strcmp((m + (signed long int)i)->s, s);
    if(return_value_strcmp_1 == 0)
      return (m + (signed long int)i)->n;

  }
  return -1;
}

// _match_key
// file ../../utils/opt.c line 111
static signed int _match_key(char *item, char *key)
{
  char *p;
  p=strchr(item, 61);
  signed int n;
  unsigned long int tmp_if_expr_2;
  unsigned long int return_value_strlen_1;
  if(!(p == ((char *)NULL)))
    tmp_if_expr_2 = (unsigned long int)(p - item);

  else
  {
    return_value_strlen_1=strlen(item);
    tmp_if_expr_2 = return_value_strlen_1;
  }
  n = (signed int)tmp_if_expr_2;
  char *q;
  q=strchr(key, 61);
  signed int m;
  unsigned long int tmp_if_expr_4;
  unsigned long int return_value_strlen_3;
  if(!(q == ((char *)NULL)))
    tmp_if_expr_4 = (unsigned long int)(q - key);

  else
  {
    return_value_strlen_3=strlen(key);
    tmp_if_expr_4 = return_value_strlen_3;
  }
  m = (signed int)tmp_if_expr_4;
  _Bool tmp_if_expr_6;
  signed int return_value_strncasecmp_5;
  if(m == n)
  {
    return_value_strncasecmp_5=strncasecmp(item, key, (unsigned long int)n);
    tmp_if_expr_6 = return_value_strncasecmp_5 == 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_6 = (_Bool)0;
  return (signed int)tmp_if_expr_6;
}

// _match_keyval
// file ../../utils/opt.c line 104
static signed int _match_keyval(char *item, char *key)
{
  signed int return_value_strcasecmp_1;
  return_value_strcasecmp_1=strcasecmp(item, key);
  return (signed int)(return_value_strcasecmp_1 == 0);
}

// _mount
// file diodmount.c line 579
static void _mount(const char *source, const char *target, unsigned long int mountflags, const void *data)
{
  unsigned int saved_euid;
  saved_euid=geteuid();
  signed int return_value_seteuid_1;
  return_value_seteuid_1=seteuid((unsigned int)0);
  if(!(return_value_seteuid_1 >= 0))
    err_exit("failed to set effective uid to root");

  signed int return_value_mount_2;
  return_value_mount_2=mount(source, target, "9p", mountflags, data);
  if(!(return_value_mount_2 >= 0))
    err_exit("mount");

  signed int return_value_seteuid_3;
  return_value_seteuid_3=seteuid(saved_euid);
  if(!(return_value_seteuid_3 >= 0))
    err_exit("failed to restore effective uid to %d", saved_euid);

}

// _name2addr
// file diodmount.c line 596
static char * _name2addr(char *host)
{
  signed int _name2addr__1__err;
  struct addrinfo hints;
  struct addrinfo *res = (struct addrinfo *)(void *)0;
  char s[64l];
  char *addr;
  memset((void *)&hints, 0, sizeof(struct addrinfo) /*48ul*/ );
  hints.ai_family = 0;
  hints.ai_socktype = 1;
  _name2addr__1__err=getaddrinfo(host, (const char *)(void *)0, &hints, &res);
  const char *return_value_gai_strerror_1;
  if(!(_name2addr__1__err == 0))
  {
    return_value_gai_strerror_1=gai_strerror(_name2addr__1__err);
    msg_exit("%s: %s", host, return_value_gai_strerror_1);
  }

  _name2addr__1__err=getnameinfo(res->ai_addr, res->ai_addrlen, s, (unsigned int)sizeof(char [64l]) /*64ul*/ , (char *)(void *)0, (unsigned int)0, 1);
  const char *return_value_gai_strerror_2;
  if(!(_name2addr__1__err == 0))
  {
    return_value_gai_strerror_2=gai_strerror(_name2addr__1__err);
    msg_exit("%s: %s", host, return_value_gai_strerror_2);
  }

  addr=strdup(s);
  if(addr == ((char *)NULL))
    msg_exit("out of memory");

  return addr;
}

// _nbd_attach
// file diodmount.c line 639
static void _nbd_attach(struct opt_struct *o, signed int argc, char **argv, signed int nopt, signed int vopt)
{
  char *spec;
  char *host;
  char *addr;
  char *dev;
  char *path;
  signed int fd;
  char *options;
  signed int blksize = 4096;
  signed int uid;
  if(!(argc == 2))
    usage();

  spec = argv[(signed long int)0];
  dev = argv[(signed long int)1];
  _parse_nbdspec(spec, &host, &path);
  addr=_name2addr(host);
  char *return_value_opt_find_1;
  return_value_opt_find_1=opt_find(o, "aname");
  if(return_value_opt_find_1 == ((char *)NULL))
  {
    opt_addf(o, "aname=%s", path);
    path = (char *)(void *)0;
  }

  char *return_value_opt_find_2;
  return_value_opt_find_2=opt_find(o, "msize");
  if(return_value_opt_find_2 == ((char *)NULL))
    opt_addf(o, "msize=%d", 65536);

  char *return_value_opt_find_3;
  return_value_opt_find_3=opt_find(o, "trans=fd");
  if(!(return_value_opt_find_3 == ((char *)NULL)))
    msg_exit("9nbd doesn't work with trans=fd");

  char *return_value_opt_find_4;
  return_value_opt_find_4=opt_find(o, "trans");
  if(return_value_opt_find_4 == ((char *)NULL))
    opt_addf(o, "trans=%s", (const void *)"tcp");

  char *return_value_opt_find_6;
  return_value_opt_find_6=opt_find(o, "version");
  char *return_value_opt_find_5;
  if(!(return_value_opt_find_6 == ((char *)NULL)))
  {
    return_value_opt_find_5=opt_find(o, "version=9p2000.L");
    if(return_value_opt_find_5 == ((char *)NULL))
      msg_exit("9nbd only works with version=9p2000.L");

  }

  char *return_value_opt_find_7;
  return_value_opt_find_7=opt_find(o, "version");
  if(return_value_opt_find_7 == ((char *)NULL))
    opt_addf(o, "version=%s", (const void *)"9p2000.L");

  char *return_value_opt_find_8;
  return_value_opt_find_8=opt_find(o, "port");
  if(return_value_opt_find_8 == ((char *)NULL))
    opt_addf(o, "port=564");

  signed int return_value_opt_scanf_11;
  return_value_opt_scanf_11=opt_scanf(o, "uid=%d", &uid);
  if(return_value_opt_scanf_11 == 0)
  {
    char uname[256l];
    signed int return_value_opt_scanf_10;
    return_value_opt_scanf_10=opt_scanf(o, "uname=%255s", (const void *)uname);
    if(!(return_value_opt_scanf_10 == 0))
    {
      unsigned int return_value__uname2uid_9;
      return_value__uname2uid_9=_uname2uid(uname);
      uid = (signed int)return_value__uname2uid_9;
      opt_delete(o, "uname");
    }

    else
      uid = 0;
    opt_addf(o, "uid=%d", uid);
  }

  char *return_value_opt_find_12;
  return_value_opt_find_12=opt_find(o, "auth");
  if(return_value_opt_find_12 == ((char *)NULL))
    opt_addf(o, "auth=%s", (const void *)"munge");

  options=opt_csv(o);
  signed int *return_value___errno_location_13;
  _Bool tmp_if_expr_15;
  signed int *return_value___errno_location_14;
  if(nopt == 0)
  {
    fd=open(dev, 02);
    if(!(fd >= 0))
    {
      return_value___errno_location_13=__errno_location();
      if(*return_value___errno_location_13 == 2)
        tmp_if_expr_15 = (_Bool)1;

      else
      {
        return_value___errno_location_14=__errno_location();
        tmp_if_expr_15 = *return_value___errno_location_14 == 6 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_15)
      {
        system("/sbin/modprobe 9nbd");
        fd=open(dev, 02);
      }

    }

    if(!(fd >= 0))
      err_exit("open %s", dev);

  }

  if(!(vopt == 0))
    msg("set blocksize=%d", blksize);

  signed int return_value_ioctl_16;
  if(nopt == 0)
  {
    return_value_ioctl_16=ioctl(fd, (unsigned long int)(0U << 0 + 8 + 8 + 14 | (unsigned int)(0xab << 0 + 8) | (unsigned int)(1 << 0) | (unsigned int)(0 << 0 + 8 + 8)), blksize);
    if(!(return_value_ioctl_16 >= 0))
      err_exit("ioctl set_blksize");

  }

  if(!(vopt == 0))
    msg("set opts=%s", options);

  signed int return_value_ioctl_17;
  if(nopt == 0)
  {
    return_value_ioctl_17=ioctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(0xab << 0 + 8) | (unsigned int)(10 << 0)) | sizeof(char *) /*8ul*/  << 0 + 8 + 8, options);
    if(!(return_value_ioctl_17 >= 0))
      err_exit("ioctl set_opts");

  }

  if(!(vopt == 0))
    msg("set addr=%s", addr);

  signed int return_value_ioctl_18;
  if(nopt == 0)
  {
    return_value_ioctl_18=ioctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(0xab << 0 + 8) | (unsigned int)(11 << 0)) | sizeof(char *) /*8ul*/  << 0 + 8 + 8, addr);
    if(!(return_value_ioctl_18 >= 0))
      err_exit("ioctl set_addr");

  }

  if(!(vopt == 0))
    msg("set path=%s", path != ((char *)NULL) ? path : "null");

  signed int return_value_ioctl_19;
  if(nopt == 0)
  {
    return_value_ioctl_19=ioctl(fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(0xab << 0 + 8) | (unsigned int)(12 << 0)) | sizeof(char *) /*8ul*/  << 0 + 8 + 8, path);
    if(!(return_value_ioctl_19 >= 0))
      err_exit("ioctl set_path");

  }

  if(!(vopt == 0))
    msg("start");

  signed int return_value_ioctl_20;
  if(nopt == 0)
  {
    return_value_ioctl_20=ioctl(fd, (unsigned long int)(0U << 0 + 8 + 8 + 14 | (unsigned int)(0xab << 0 + 8) | (unsigned int)(3 << 0) | (unsigned int)(0 << 0 + 8 + 8)));
    if(!(return_value_ioctl_20 >= 0))
      err_exit("ioctl start");

  }

  if(nopt == 0)
    close(fd);

  free((void *)options);
  free((void *)host);
  free((void *)addr);
}

// _nbd_detach
// file diodmount.c line 740
static void _nbd_detach(struct opt_struct *o, signed int argc, char **argv, signed int nopt, signed int vopt)
{
  char *dev;
  signed int fd = -1;
  if(!(argc == 1))
    usage();

  dev = argv[(signed long int)0];
  if(nopt == 0)
  {
    fd=open(dev, 02);
    if(!(fd >= 0))
      err_exit("open %s", dev);

  }

  if(!(vopt == 0))
    msg("stop");

  signed int return_value_ioctl_1;
  if(nopt == 0)
  {
    return_value_ioctl_1=ioctl(fd, (unsigned long int)(0U << 0 + 8 + 8 + 14 | (unsigned int)(0xab << 0 + 8) | (unsigned int)(4 << 0) | (unsigned int)(0 << 0 + 8 + 8)));
    if(!(return_value_ioctl_1 >= 0))
      err_exit("ioctl stop");

  }

  if(!(fd == -1))
    close(fd);

}

// _next_inum
// file ctl.c line 59
static signed int _next_inum(void)
{
  signed int ret;
  static union anonymous lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "ctl.c", 65);

  }
  while((_Bool)0);
  static signed int i = 1;
  signed int tmp_post_1 = i;
  i = i + 1;
  ret = tmp_post_1;
  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "ctl.c", 67);

  }
  while((_Bool)0);
  return ret;
}

// _next_tok
// file hostlist.c line 379
static char * _next_tok(char *sep, char **str)
{
  char *tok;
  char *return_value_strchr_1;
  for( ; !((signed int)*(*str) == 0); *str = *str + 1l)
  {
    return_value_strchr_1=strchr(sep, (signed int)*(*str));
    if(return_value_strchr_1 == ((char *)NULL))
      break;

  }
  char *return_value_strchr_3;
  signed int return_value__advance_past_brackets_2;
  char *return_value_strchr_4;
  char *tmp_post_5;
  if((signed int)*(*str) == 0)
    return (char *)(void *)0;

  else
  {
    tok = *str;

  __CPROVER_DUMP_L4:
    ;
    while((_Bool)1)
    {
      if(!((signed int)*(*str) == 0))
      {
        return_value_strchr_3=strchr(sep, (signed int)*(*str));
        if(return_value_strchr_3 == ((char *)NULL))
        {
          *str = *str + 1l;
          goto __CPROVER_DUMP_L4;
        }

      }

      return_value__advance_past_brackets_2=_advance_past_brackets(tok, str);
      if(return_value__advance_past_brackets_2 == 0)
        break;

    }
    for( ; !((signed int)*(*str) == 0); *tmp_post_5 = (char)0)
    {
      return_value_strchr_4=strchr(sep, (signed int)*(*str));
      if(return_value_strchr_4 == ((char *)NULL))
        break;

      tmp_post_5 = *str;
      *str = *str + 1l;
    }
    return tok;
  }
}

// _optimize_fid
// file fidpool.c line 159
static void _optimize_fid(struct Npfid **head, struct Npfid *f)
{
  if(!(f->next == ((struct Npfid *)NULL)))
    f->next->prev = f->prev;

  f->prev->next = f->next;
  f->prev = (struct Npfid *)(void *)0;
  f->next = *head;
  (*head)->prev = f;
  *head = f;
}

// _optstr
// file ../../utils/opt.c line 152
static char * _optstr(char *s)
{
  char *p;
  p=strrchr(s, 61);
  char *tmp_if_expr_2;
  unsigned long int return_value_strlen_1;
  if(!(p == ((char *)NULL)))
    tmp_if_expr_2 = p + (signed long int)1;

  else
  {
    return_value_strlen_1=strlen(s);
    tmp_if_expr_2 = s + (signed long int)return_value_strlen_1;
  }
  return tmp_if_expr_2;
}

// _parse_expopt
// file diod_conf.c line 380
static void _parse_expopt(char *s, signed int *fp)
{
  signed int flags = 0;
  char *cpy;
  char *item;
  char *saveptr = (char *)(void *)0;
  cpy=strdup(s);
  if(cpy == ((char *)NULL))
    msg_exit("out of memory");

  item=strtok_r(cpy, ",", &saveptr);
  signed int return_value_strcmp_4;
  signed int return_value_strcmp_3;
  signed int return_value_strcmp_2;
  signed int return_value_strcmp_1;
  while(!(item == ((char *)NULL)))
  {
    signed int return_value_strcmp_5;
    return_value_strcmp_5=strcmp(item, "ro");
    if(return_value_strcmp_5 == 0)
      flags = flags | 0x01;

    else
    {
      return_value_strcmp_4=strcmp(item, "suppress");
      if(return_value_strcmp_4 == 0)
        flags = flags | 0x02;

      else
      {
        return_value_strcmp_3=strcmp(item, "sharefd");
        if(return_value_strcmp_3 == 0)
          flags = flags | 0x04;

        else
        {
          return_value_strcmp_2=strcmp(item, "privport");
          if(return_value_strcmp_2 == 0)
            flags = flags | 0x08;

          else
          {
            return_value_strcmp_1=strcmp(item, "noauth");
            if(return_value_strcmp_1 == 0)
              flags = flags | 0x10;

            else
              msg_exit("unknown export option: %s", item);
          }
        }
      }
    }
    item=strtok_r((char *)(void *)0, ",", &saveptr);
  }
  free((void *)cpy);
  *fp = flags;
}

// _parse_nbdspec
// file diodmount.c line 618
static void _parse_nbdspec(char *spec, char **hp, char **fp)
{
  char *host;
  char *file;
  host=strdup(spec);
  if(host == ((char *)NULL))
    msg_exit("out of memory");

  file=strchr(host, 58);
  char *tmp_post_1;
  if(!(file == ((char *)NULL)))
  {
    tmp_post_1 = file;
    file = file + 1l;
    *tmp_post_1 = (char)0;
  }

  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(host);
  if(return_value_strlen_2 == 0ul)
    msg_exit("no host specified");

  _Bool tmp_if_expr_4;
  unsigned long int return_value_strlen_3;
  if(file == ((char *)NULL))
    tmp_if_expr_4 = (_Bool)1;

  else
  {
    return_value_strlen_3=strlen(file);
    tmp_if_expr_4 = return_value_strlen_3 == (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_4)
    msg_exit("no file specified");

  *hp = host;
  *fp = file;
}

// _parse_range_list
// file hostlist.c line 1455
static signed int _parse_range_list(char *str, struct _range *ranges, signed int len)
{
  char *p;
  signed int count = 0;
  char *tmp_post_1;
  signed int tmp_post_2;
  while(!(str == ((char *)NULL)))
  {
    if(count == len)
      return -1;

    p=strchr(str, 44);
    if(!(p == ((char *)NULL)))
    {
      tmp_post_1 = p;
      p = p + 1l;
      *tmp_post_1 = (char)0;
    }

    tmp_post_2 = count;
    count = count + 1;
    signed int return_value__parse_single_range_3;
    return_value__parse_single_range_3=_parse_single_range(str, &ranges[(signed long int)tmp_post_2]);
    if(return_value__parse_single_range_3 == 0)
      return -1;

    str = p;
  }
  return count;
}

// _parse_single_range
// file hostlist.c line 1408
static signed int _parse_single_range(const char *str, struct _range *range)
{
  char *p;
  char *q;
  char *orig;
  orig=strdup(str);
  if(orig == ((char *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 12;
    return 0;
  }

  p=strchr(str, 45);
  char *tmp_post_2;
  if(!(p == ((char *)NULL)))
  {
    tmp_post_2 = p;
    p = p + 1l;
    *tmp_post_2 = (char)0;
    if((signed int)*p == 45)
      goto error;

  }

  range->lo=strtoul(str, &q, 10);
  _Bool tmp_if_expr_3;
  unsigned long int tmp_if_expr_5;
  unsigned long int return_value_strtoul_4;
  _Bool tmp_if_expr_6;
  unsigned long int return_value_strlen_8;
  if(!(q == str))
  {
    if(!(p == ((char *)NULL)))
      tmp_if_expr_3 = *p != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_3 = (_Bool)0;
    if(tmp_if_expr_3)
    {
      return_value_strtoul_4=strtoul(p, &q, 10);
      tmp_if_expr_5 = return_value_strtoul_4;
    }

    else
      tmp_if_expr_5 = range->lo;
    range->hi = tmp_if_expr_5;
    if(q == p)
      tmp_if_expr_6 = (_Bool)1;

    else
      tmp_if_expr_6 = (signed int)*q != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_6)
      goto error;

    if(!(range->hi >= range->lo))
      goto error;

    if(1ul + range->hi + -range->lo >= 16385ul)
    {
      _error("hostlist.c", 1433, "Too many hosts in range `%s'", orig);
      free((void *)orig);
      signed int *return_value___errno_location_7;
      return_value___errno_location_7=__errno_location();
      *return_value___errno_location_7 = 34;
      return 0;
    }

    free((void *)orig);
    return_value_strlen_8=strlen(str);
    range->width = (signed int)return_value_strlen_8;
    return 1;
  }

  else
  {

  error:
    ;
    _error("hostlist.c", 1443, "Invalid range: `%s'", orig);
    free((void *)orig);
    signed int *return_value___errno_location_9;
    return_value___errno_location_9=__errno_location();
    *return_value___errno_location_9 = 22;
    return 0;
  }
}

// _parse_spec
// file diodmount.c line 330
static char * _parse_spec(char *spec, struct opt_struct *o)
{
  char *host;
  char *aname;
  host=strdup(spec);
  if(host == ((char *)NULL))
    msg_exit("out of memory");

  aname=strchr(host, 58);
  char *tmp_post_1;
  if(!(aname == ((char *)NULL)))
  {
    tmp_post_1 = aname;
    aname = aname + 1l;
    *tmp_post_1 = (char)0;
  }

  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(host);
  if(return_value_strlen_2 == 0ul)
    msg_exit("no host specified");

  _Bool tmp_if_expr_5;
  unsigned long int return_value_strlen_4;
  if(aname == ((char *)NULL))
    tmp_if_expr_5 = (_Bool)1;

  else
  {
    return_value_strlen_4=strlen(aname);
    tmp_if_expr_5 = return_value_strlen_4 == (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
  }
  signed int return_value_opt_addf_3;
  if(!tmp_if_expr_5)
  {
    return_value_opt_addf_3=opt_addf(o, "aname=%s", aname);
    if(return_value_opt_addf_3 == 0)
      msg_exit("you cannot have both -oaname and spec=host:aname");

  }

  return host;
}

// _parse_uname_access
// file diodmount.c line 366
static void _parse_uname_access(struct opt_struct *o)
{
  char *uname;
  uname=opt_find(o, "uname");
  signed int uname_uid = -1;
  char *_parse_uname_access__1__access;
  _parse_uname_access__1__access=opt_find(o, "access");
  signed int access_uid = -1;
  char *access_name = (char *)(void *)0;
  struct passwd *pw;
  if(!(uname == ((char *)NULL)))
  {
    pw=getpwnam(uname);
    if(pw == ((struct passwd *)NULL))
      msg_exit("could not look up uname='%s'", uname);

    uname_uid = (signed int)pw->pw_uid;
  }

  signed int return_value_opt_scanf_1;
  if(!(_parse_uname_access__1__access == ((char *)NULL)))
  {
    return_value_opt_scanf_1=opt_scanf(o, "access=%d", &access_uid);
    if(!(return_value_opt_scanf_1 == 0))
    {
      pw=getpwuid((unsigned int)access_uid);
      if(pw == ((struct passwd *)NULL))
        msg_exit("could not look up access='%d'", access_uid);

      access_name=strdup(pw->pw_name);
      if(access_name == ((char *)NULL))
        msg_exit("out of memory");

    }

  }

  if(_parse_uname_access__1__access == ((char *)NULL) && uname == ((char *)NULL))
  {
    opt_addf(o, "uname=%s", (const void *)"root");
    opt_addf(o, "access=%s", (const void *)"user");
  }

  else
    if(_parse_uname_access__1__access == ((char *)NULL) && !(uname == ((char *)NULL)))
    {
      if(uname_uid == 0)
        opt_addf(o, "access=%s", (const void *)"user");

      else
        opt_addf(o, "access=%d", uname_uid);
    }

    else
      if(uname == ((char *)NULL) && !(_parse_uname_access__1__access == ((char *)NULL)))
      {
        signed int return_value_strcmp_2;
        return_value_strcmp_2=strcmp(_parse_uname_access__1__access, "user");
        if(return_value_strcmp_2 == 0)
          opt_addf(o, "uname=%s", (const void *)"root");

        else
          if(!(access_name == ((char *)NULL)))
            opt_addf(o, "uname=%s", access_name);

          else
            msg_exit("unsupported -oaccess=%s", _parse_uname_access__1__access);
      }

      else
      {
        signed int return_value_strcmp_3;
        return_value_strcmp_3=strcmp(_parse_uname_access__1__access, "user");
        if(return_value_strcmp_3 == 0)
        {
          if(!(uname_uid == 0))
            msg_exit("-oaccess=user can only be used with -ouname=root");

        }

        else
          if(!(access_name == ((char *)NULL)))
          {
            if(!(uname_uid == access_uid))
              msg_exit("-oaccess=<uid> requires matching -ouname=<name>");

          }

          else
            msg_exit("unsupported -oaccess=%s", _parse_uname_access__1__access);
      }
  if(!(access_name == ((char *)NULL)))
    free((void *)access_name);

}

// _poll_add
// file diod_sock.c line 143
static signed int _poll_add(struct pollfd **fdsp, signed int *nfdsp, signed int fd)
{
  signed int nfds = *nfdsp;
  struct pollfd *fds = *fdsp;
  void *return_value_realloc_1;
  void *return_value_malloc_2;
  if(!(fds == ((struct pollfd *)NULL)))
  {
    return_value_realloc_1=realloc((void *)fds, sizeof(struct pollfd) /*8ul*/  * (unsigned long int)(nfds + 1));
    fds = (struct pollfd *)return_value_realloc_1;
  }

  else
  {
    return_value_malloc_2=malloc(sizeof(struct pollfd) /*8ul*/  * (unsigned long int)(nfds + 1));
    fds = (struct pollfd *)return_value_malloc_2;
  }
  signed int tmp_post_3;
  if(!(fds == ((struct pollfd *)NULL)))
  {
    tmp_post_3 = nfds;
    nfds = nfds + 1;
    (fds + (signed long int)tmp_post_3)->fd = fd;
    *fdsp = fds;
    *nfdsp = nfds;
    return 0;
  }

  else
  {

  nomem:
    ;
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    *return_value___errno_location_4 = 12;
    err("diod_sock_listen");
    return -1;
  }
}

// _push_range_list
// file hostlist.c line 1473
static void _push_range_list(struct hostlist *hl, char *pfx, struct _range *rng, signed int n)
{
  signed int i = 0;
  for( ; !(i >= n); i = i + 1)
  {
    hostlist_push_hr(hl, pfx, rng->lo, rng->hi, rng->width);
    rng = rng + 1l;
  }
}

// _push_range_list_with_suffix
// file hostlist.c line 1484
static void _push_range_list_with_suffix(struct hostlist *hl, char *pfx, char *sfx, struct _range *rng, signed int n)
{
  signed int i;
  unsigned long int j;
  i = 0;
  for( ; !(i >= n); i = i + 1)
  {
    j = rng->lo;
    for( ; rng->hi >= j; j = j + 1ul)
    {
      char host[4096l];
      struct hostrange_components *hr;
      snprintf(host, (unsigned long int)4096, "%s%0*lu%s", pfx, rng->width, j, sfx);
      hr=hostrange_create_single(host);
      hostlist_push_range(hl, hr);
      hostrange_destroy(hr);
    }
    rng = rng + 1l;
  }
}

// _real_lookup_byname
// file user.c line 385
static struct Npuser * _real_lookup_byname(struct Npsrv *srv, char *uname)
{
  struct Npuser *u;
  signed int _real_lookup_byname__1__err;
  signed int len;
  struct passwd pw;
  struct passwd *pwd = (struct passwd *)(void *)0;
  char *buf = (char *)(void *)0;
  if(!((262144 & srv->flags) == 0))
  {
    u=_alloc_nouserdb(srv, (unsigned int)~0, uname);
    if(u == ((struct Npuser *)NULL))
      goto error;

  }

  else
  {
    signed long int return_value_sysconf_1;
    return_value_sysconf_1=sysconf(70);
    len = (signed int)return_value_sysconf_1;
    if(!(len >= 4096))
      len = 4096;

    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)len);
    buf = (char *)return_value_malloc_2;
    if(buf == ((char *)NULL))
    {
      np_uerror((unsigned long int)12);
      np_logerr(srv, "uname2user: %s", uname);
      goto error;
    }

    _real_lookup_byname__1__err=getpwnam_r(uname, &pw, buf, (unsigned long int)len, &pwd);
    if(!(_real_lookup_byname__1__err == 0))
    {
      np_uerror((unsigned long int)_real_lookup_byname__1__err);
      np_logerr(srv, "uname2user: %s: getpwnam_r", uname);
      goto error;
    }

    if(pwd == ((struct passwd *)NULL))
    {
      np_logmsg(srv, "uname2user: %s lookup failure", uname);
      np_uerror((unsigned long int)1);
      goto error;
    }

    u=_alloc_user(srv, pwd);
    if(u == ((struct Npuser *)NULL))
      goto error;

    free((void *)buf);
  }
  return u;

error:
  ;
  if(!(buf == ((char *)NULL)))
    free((void *)buf);

  return (struct Npuser *)(void *)0;
}

// _real_lookup_byuid
// file user.c line 344
static struct Npuser * _real_lookup_byuid(struct Npsrv *srv, unsigned int uid)
{
  struct Npuser *u;
  signed int _real_lookup_byuid__1__err;
  signed int len;
  struct passwd pw;
  struct passwd *pwd;
  char *buf = (char *)(void *)0;
  if(!((262144 & srv->flags) == 0))
  {
    u=_alloc_nouserdb(srv, uid, (char *)(void *)0);
    if(u == ((struct Npuser *)NULL))
      goto error;

  }

  else
  {
    signed long int return_value_sysconf_1;
    return_value_sysconf_1=sysconf(70);
    len = (signed int)return_value_sysconf_1;
    if(!(len >= 4096))
      len = 4096;

    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)len);
    buf = (char *)return_value_malloc_2;
    if(buf == ((char *)NULL))
    {
      np_uerror((unsigned long int)12);
      np_logerr(srv, "uid2user");
      goto error;
    }

    _real_lookup_byuid__1__err=getpwuid_r(uid, &pw, buf, (unsigned long int)len, &pwd);
    if(!(_real_lookup_byuid__1__err == 0))
    {
      np_uerror((unsigned long int)_real_lookup_byuid__1__err);
      np_logerr(srv, "uid2user: unable to lookup %d", uid);
      goto error;
    }

    if(pwd == ((struct passwd *)NULL))
    {
      np_logmsg(srv, "uid2user: unable to lookup %d", uid);
      np_uerror((unsigned long int)1);
      goto error;
    }

    u=_alloc_user(srv, pwd);
    if(u == ((struct Npuser *)NULL))
      goto error;

    free((void *)buf);
  }
  return u;

error:
  ;
  if(!(buf == ((char *)NULL)))
    free((void *)buf);

  return (struct Npuser *)(void *)0;
}

// _rmatch
// file diod_log.c line 99
static char * _rmatch(signed int n, struct anonymous_11 *m)
{
  signed int i = 0;
  for( ; !((m + (signed long int)i)->s == ((char *)NULL)); i = i + 1)
    if((m + (signed long int)i)->n == n)
      return (m + (signed long int)i)->s;

  return (char *)(void *)0;
}

// _set_syslog_facility
// file diod_log.c line 128
static void _set_syslog_facility(char *s)
{
  signed int n;
  n=_match(s, facility_tab);
  if(!(n >= 0))
    msg_exit("unknown syslog facility: %s", s);

  syslog_facility = n;
  closelog();
  openlog(prog, 0x08 | 0x01, syslog_facility);
}

// _set_syslog_level
// file diod_log.c line 140
static void _set_syslog_level(char *s)
{
  signed int n;
  n=_match(s, level_tab);
  if(!(n >= 0))
    msg_exit("unknown syslog level: %s", s);

  syslog_level = n;
}

// _setup_one_inet
// file diod_sock.c line 171
static signed int _setup_one_inet(char *host, char *port, struct pollfd **fdsp, signed int *nfdsp)
{
  struct addrinfo hints;
  struct addrinfo *res = (struct addrinfo *)(void *)0;
  struct addrinfo *r;
  signed int error;
  signed int fd;
  signed int count = 0;
  memset((void *)&hints, 0, sizeof(struct addrinfo) /*48ul*/ );
  hints.ai_family = 0;
  hints.ai_socktype = 1;
  error=getaddrinfo(host, port, &hints, &res);
  if(!(error == 0))
  {
    const char *return_value_gai_strerror_1;
    return_value_gai_strerror_1=gai_strerror(error);
    msg("getaddrinfo: %s:%s: %s", host, port, return_value_gai_strerror_1);
    goto done;
  }

  if(res == ((struct addrinfo *)NULL))
    msg_exit("listen address has no addrinfo: %s:%s\n", host, port);

  else
  {
    r = res;
    for( ; !(r == ((struct addrinfo *)NULL)); r = r->ai_next)
    {
      fd=socket(r->ai_family, r->ai_socktype, 0);
      if(!(fd >= 0))
        err("socket: %s:%s", host, port);

      else
      {
        _enable_reuseaddr(fd);
        signed int return_value_bind_2;
        return_value_bind_2=bind(fd, r->ai_addr, r->ai_addrlen);
        if(!(return_value_bind_2 >= 0))
        {
          err("bind: %s:%s", host, port);
          close(fd);
        }

        else
        {
          signed int return_value__poll_add_3;
          return_value__poll_add_3=_poll_add(fdsp, nfdsp, fd);
          if(!(return_value__poll_add_3 >= 0))
            break;

          count = count + 1;
        }
      }
    }
  }

done:
  ;
  if(!(res == ((struct addrinfo *)NULL)))
    freeaddrinfo(res);

  return count;
}

// _setup_one_unix
// file diod_sock.c line 211
static signed int _setup_one_unix(char *path, struct pollfd **fdsp, signed int *nfdsp)
{
  struct sockaddr_un addr;
  signed int e;
  signed int fd = -1;
  unsigned int oldumask;
  fd=socket(1, 1, 0);
  signed int return_value_remove_2;
  signed int *return_value___errno_location_1;
  signed int return_value__poll_add_3;
  if(!(fd >= 0))
    err("socket");

  else
  {
    return_value_remove_2=remove(path);
    if(!(return_value_remove_2 >= 0))
    {
      return_value___errno_location_1=__errno_location();
      if(*return_value___errno_location_1 == 2)
        goto __CPROVER_DUMP_L2;

      err("remove %s", path);
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      memset((void *)&addr, 0, sizeof(struct sockaddr_un) /*110ul*/ );
      addr.sun_family = (unsigned short int)1;
      strncpy(addr.sun_path, path, sizeof(char [108l]) /*108ul*/  - (unsigned long int)1);
      oldumask=umask((unsigned int)0111);
      e=bind(fd, (struct sockaddr *)&addr, (unsigned int)sizeof(struct sockaddr_un) /*110ul*/ );
      umask(oldumask);
      if(!(e >= 0))
        err("bind %s", path);

      else
      {
        return_value__poll_add_3=_poll_add(fdsp, nfdsp, fd);
        if(return_value__poll_add_3 >= 0)
          return 1;

      }
    }
  }

error:
  ;
  if(!(fd == -1))
    close(fd);

  return 0;
}

// _strnchr
// file read.c line 194
static char * _strnchr(char *s, char c, signed int len)
{
  signed int i = 0;
  for( ; !(i >= len); i = i + 1)
    if(s[(signed long int)i] == c)
      return &s[(signed long int)i];

  return (char *)(void *)0;
}

// _uname2uid
// file diodmount.c line 320
static unsigned int _uname2uid(char *uname)
{
  struct passwd *pw;
  pw=getpwnam(uname);
  if(pw == ((struct passwd *)NULL))
    msg_exit("could not look up uname='%s'", uname);

  return pw->pw_uid;
}

// _unlink_fid
// file fidpool.c line 189
static void _unlink_fid(struct Npfid **head, struct Npfid *f)
{
  if(!(f->prev == ((struct Npfid *)NULL)))
    f->prev->next = f->next;

  else
    *head = f->next;
  if(!(f->next == ((struct Npfid *)NULL)))
    f->next->prev = f->prev;

  f->next = (struct Npfid *)(void *)0;
  f->prev = f->next;
}

// _update_mtab
// file diodmount.c line 479
static signed int _update_mtab(char *options, char *spec, char *dir)
{
  unsigned int saved_euid;
  saved_euid=geteuid();
  struct _IO_FILE *f;
  signed int ret = 0;
  struct mntent mnt;
  mnt.mnt_fsname = spec;
  mnt.mnt_dir = dir;
  mnt.mnt_type = "diod";
  mnt.mnt_opts = options;
  mnt.mnt_freq = 0;
  mnt.mnt_passno = 0;
  signed int return_value_seteuid_1;
  return_value_seteuid_1=seteuid((unsigned int)0);
  signed int return_value_addmntent_2;
  signed int return_value_seteuid_3;
  if(!(return_value_seteuid_1 >= 0))
    err("failed to set effective uid to root");

  else
  {
    f=setmntent("/etc/mtab", "a");
    if(f == ((struct _IO_FILE *)NULL))
      err("/etc/mtab");

    else
    {
      return_value_addmntent_2=addmntent(f, &mnt);
      if(!(return_value_addmntent_2 == 0))
      {
        msg("failed to add entry to %s", (const void *)"/etc/mtab");
        endmntent(f);
      }

      else
      {
        endmntent(f);
        return_value_seteuid_3=seteuid(saved_euid);
        if(!(return_value_seteuid_3 >= 0))
          err("failed to restore effective uid to %d", saved_euid);

        else
          ret = 1;
      }
    }
  }

done:
  ;
  return ret;
}

// _usercache_add
// file user.c line 57
static void _usercache_add(struct Npsrv *srv, struct Npuser *u)
{
  struct anonymous_1 *uc = (struct anonymous_1 *)srv->usercache;
  u->next = uc->users;
  uc->users = u;
  np_user_incref(u);
}

// _usercache_del
// file user.c line 67
static struct Npuser * _usercache_del(struct Npsrv *srv, struct Npuser *prev, struct Npuser *u)
{
  struct anonymous_1 *uc = (struct anonymous_1 *)srv->usercache;
  struct Npuser *tmp = u->next;
  if(!(prev == ((struct Npuser *)NULL)))
    prev->next = tmp;

  else
    uc->users = tmp;
  np_user_decref(u);
  return tmp;
}

// _usercache_expire
// file user.c line 83
static void _usercache_expire(struct Npsrv *srv)
{
  struct anonymous_1 *uc = (struct anonymous_1 *)srv->usercache;
  signed long int now;
  now=time((signed long int *)(void *)0);
  struct Npuser *u = uc->users;
  struct Npuser *prev = (struct Npuser *)(void *)0;
  while(!(u == ((struct Npuser *)NULL)))
    if(now + -u->t >= (signed long int)uc->ttl)
      u=_usercache_del(srv, prev, u);

    else
    {
      prev = u;
      u = u->next;
    }
}

// _usercache_lookup
// file user.c line 101
static struct Npuser * _usercache_lookup(struct Npsrv *srv, char *uname, unsigned int uid)
{
  struct anonymous_1 *uc = (struct anonymous_1 *)srv->usercache;
  struct Npuser *u;
  _usercache_expire(srv);
  u = uc->users;
  signed int return_value_strcmp_1;
  for( ; !(u == ((struct Npuser *)NULL)); u = u->next)
  {
    if(uname == ((char *)NULL))
    {
      if(uid == u->uid)
        break;

    }

    if(!(uname == ((char *)NULL)))
    {
      return_value_strcmp_1=strcmp(uname, u->uname);
      if(return_value_strcmp_1 == 0)
        break;

    }

  }
  return u;
}

// _verify_mountpoint
// file diodmount.c line 351
static void _verify_mountpoint(char *path)
{
  struct stat sb;
  signed int return_value_stat_1;
  return_value_stat_1=stat(path, &sb);
  if(!(return_value_stat_1 >= 0))
    err_exit("stat %s", path);

  if(!((61440u & sb.st_mode) == 16384u))
    msg_exit("%s: not a directory", path);

}

// _verr
// file diod_log.c line 208
static void _verr(signed int errnum, const char *fmt, void **ap)
{
  char buf[128l];
  char errbuf[64l];
  char *s;
  s=strerror_r(errnum, errbuf, sizeof(char [64l]) /*64ul*/ );
  vsnprintf(buf, sizeof(char [128l]) /*128ul*/ , fmt, ap);
  switch((signed int)dest)
  {
    case DEST_LOGF:
    {
      fprintf(logf, "%s: %s: %s\n", prog, (const void *)buf, s);
      fflush(logf);
      break;
    }
    case DEST_SYSLOG:
      syslog(syslog_level, "%s: %s", (const void *)buf, s);
  }
}

// _width_equiv
// file hostlist.c line 435
static signed int _width_equiv(unsigned long int n, signed int *wn, unsigned long int m, signed int *wm)
{
  signed int npad;
  signed int nmpad;
  signed int mpad;
  signed int mnpad;
  if(wn == wm)
    return 1;

  else
  {
    npad=_zero_padded(n, *wn);
    nmpad=_zero_padded(n, *wm);
    mpad=_zero_padded(m, *wm);
    mnpad=_zero_padded(m, *wn);
    if(!(mpad == mnpad) && !(npad == nmpad))
      return 0;

    else
      if(!(npad == nmpad))
      {
        if(mpad == mnpad)
        {
          *wm = *wn;
          return 1;
        }

        else
          return 0;
      }

      else
        if(npad == nmpad)
        {
          *wn = *wm;
          return 1;
        }

        else
          return 0;
  }
}

// _xcreate_export
// file diod_conf.c line 154
static struct anonymous_13 * _xcreate_export(char *path)
{
  struct anonymous_13 *x;
  x=_create_export(path);
  if(x == ((struct anonymous_13 *)NULL))
    msg_exit("out of memory");

  return x;
}

// _xlist_append
// file diod_conf.c line 130
static void _xlist_append(struct list *l, void *item)
{
  void *return_value_list_append_1;
  return_value_list_append_1=list_append(l, item);
  if(return_value_list_append_1 == NULL)
    msg_exit("out of memory");

}

// _xlist_create
// file diod_conf.c line 121
static struct list * _xlist_create(void (*f)(void *))
{
  struct list *new;
  new=list_create(f);
  if(new == ((struct list *)NULL))
    msg_exit("out of memory");

  return new;
}

// _xstrdup
// file diod_conf.c line 112
static char * _xstrdup(char *s)
{
  char *cpy;
  cpy=strdup(s);
  if(cpy == ((char *)NULL))
    msg_exit("out of memory");

  return cpy;
}

// _zero_padded
// file hostlist.c line 414
static signed int _zero_padded(unsigned long int num, signed int width)
{
  signed int n = 1;
  do
  {
    num = num / (unsigned long int)10L;
    if(num == 0ul)
      break;

    n = n + 1;
  }
  while((_Bool)1);
  return width > n ? width - n : 0;
}

// aspf
// file npfs.h line 410
signed int aspf(char **sp, signed int *lp, const char *fmt, ...)
{
  void **ap;
  signed int n;
  ap = (void **)&fmt;
  n=vaspf(sp, lp, fmt, ap);
  ap = ((void **)NULL);
  return n;
}

// buf_alloc
// file np.c line 73
static inline void * buf_alloc(struct cbuf *buf, signed int len)
{
  void *ret = (void *)0;
  signed int return_value_buf_check_size_1;
  return_value_buf_check_size_1=buf_check_size(buf, len);
  if(!(return_value_buf_check_size_1 == 0))
  {
    ret = (void *)buf->p;
    buf->p = buf->p + (signed long int)len;
  }

  return ret;
}

// buf_check_overflow
// file np.c line 54
static inline signed int buf_check_overflow(struct cbuf *buf)
{
  return (signed int)(buf->p > buf->ep);
}

// buf_check_size
// file np.c line 60
static inline signed int buf_check_size(struct cbuf *buf, signed int len)
{
  if(!(buf->ep >= buf->p + (signed long int)len))
  {
    if(!(buf->p >= buf->ep))
      buf->p = buf->ep + (signed long int)1;

    return 0;
  }

  else
    return 1;
}

// buf_get_int16
// file np.c line 184
static inline unsigned short int buf_get_int16(struct cbuf *buf)
{
  unsigned short int ret = (unsigned short int)0;
  signed int return_value_buf_check_size_1;
  return_value_buf_check_size_1=buf_check_size(buf, 2);
  if(!(return_value_buf_check_size_1 == 0))
  {
    ret = (unsigned short int)((signed int)buf->p[(signed long int)0] | (signed int)buf->p[(signed long int)1] << 8);
    buf->p = buf->p + (signed long int)2;
  }

  return ret;
}

// buf_get_int32
// file np.c line 197
static inline unsigned int buf_get_int32(struct cbuf *buf)
{
  unsigned int ret = (unsigned int)0;
  signed int return_value_buf_check_size_1;
  return_value_buf_check_size_1=buf_check_size(buf, 4);
  if(!(return_value_buf_check_size_1 == 0))
  {
    ret = (unsigned int)((signed int)buf->p[(signed long int)0] | (signed int)buf->p[(signed long int)1] << 8 | (signed int)buf->p[(signed long int)2] << 16 | (signed int)buf->p[(signed long int)3] << 24);
    buf->p = buf->p + (signed long int)4;
  }

  return ret;
}

// buf_get_int64
// file np.c line 211
static inline unsigned long int buf_get_int64(struct cbuf *buf)
{
  unsigned long int ret = (unsigned long int)0;
  signed int return_value_buf_check_size_1;
  return_value_buf_check_size_1=buf_check_size(buf, 8);
  if(!(return_value_buf_check_size_1 == 0))
  {
    ret = (unsigned long int)buf->p[(signed long int)0] | (unsigned long int)buf->p[(signed long int)1] << 8 | (unsigned long int)buf->p[(signed long int)2] << 16 | (unsigned long int)buf->p[(signed long int)3] << 24 | (unsigned long int)buf->p[(signed long int)4] << 32 | (unsigned long int)buf->p[(signed long int)5] << 40 | (unsigned long int)buf->p[(signed long int)6] << 48 | (unsigned long int)buf->p[(signed long int)7] << 56;
    buf->p = buf->p + (signed long int)8;
  }

  return ret;
}

// buf_get_int8
// file np.c line 171
static inline unsigned char buf_get_int8(struct cbuf *buf)
{
  unsigned char ret = (unsigned char)0;
  signed int return_value_buf_check_size_1;
  return_value_buf_check_size_1=buf_check_size(buf, 1);
  if(!(return_value_buf_check_size_1 == 0))
  {
    ret = buf->p[(signed long int)0];
    buf->p = buf->p + 1l;
  }

  return ret;
}

// buf_get_qid
// file np.c line 238
static inline void buf_get_qid(struct cbuf *buf, struct p9_qid *qid)
{
  qid->type=buf_get_int8(buf);
  qid->version=buf_get_int32(buf);
  qid->path=buf_get_int64(buf);
}

// buf_get_str
// file np.c line 231
static inline void buf_get_str(struct cbuf *buf, struct p9_str *str)
{
  str->len=buf_get_int16(buf);
  void *return_value_buf_alloc_1;
  return_value_buf_alloc_1=buf_alloc(buf, (signed int)str->len);
  str->str = (char *)return_value_buf_alloc_1;
}

// buf_init
// file np.c line 47
static inline void buf_init(struct cbuf *buf, void *data, signed int datalen)
{
  buf->p = (unsigned char *)data;
  buf->sp = buf->p;
  buf->ep = (unsigned char *)(data + (signed long int)datalen);
}

// buf_put_int16
// file np.c line 98
static inline void buf_put_int16(struct cbuf *buf, unsigned short int val, unsigned short int *pval)
{
  signed int return_value_buf_check_size_1;
  return_value_buf_check_size_1=buf_check_size(buf, 2);
  if(!(return_value_buf_check_size_1 == 0))
  {
    buf->p[(signed long int)0] = (unsigned char)val;
    buf->p[(signed long int)1] = (unsigned char)((signed int)val >> 8);
    buf->p = buf->p + (signed long int)2;
    if(!(pval == ((unsigned short int *)NULL)))
      *pval = val;

  }

}

// buf_put_int32
// file np.c line 112
static inline void buf_put_int32(struct cbuf *buf, unsigned int val, unsigned int *pval)
{
  signed int return_value_buf_check_size_1;
  return_value_buf_check_size_1=buf_check_size(buf, 4);
  if(!(return_value_buf_check_size_1 == 0))
  {
    buf->p[(signed long int)0] = (unsigned char)val;
    buf->p[(signed long int)1] = (unsigned char)(val >> 8);
    buf->p[(signed long int)2] = (unsigned char)(val >> 16);
    buf->p[(signed long int)3] = (unsigned char)(val >> 24);
    buf->p = buf->p + (signed long int)4;
    if(!(pval == ((unsigned int *)NULL)))
      *pval = val;

  }

}

// buf_put_int64
// file np.c line 127
static inline void buf_put_int64(struct cbuf *buf, unsigned long int val, unsigned long int *pval)
{
  signed int return_value_buf_check_size_1;
  return_value_buf_check_size_1=buf_check_size(buf, 8);
  if(!(return_value_buf_check_size_1 == 0))
  {
    buf->p[(signed long int)0] = (unsigned char)val;
    buf->p[(signed long int)1] = (unsigned char)(val >> 8);
    buf->p[(signed long int)2] = (unsigned char)(val >> 16);
    buf->p[(signed long int)3] = (unsigned char)(val >> 24);
    buf->p[(signed long int)4] = (unsigned char)(val >> 32);
    buf->p[(signed long int)5] = (unsigned char)(val >> 40);
    buf->p[(signed long int)6] = (unsigned char)(val >> 48);
    buf->p[(signed long int)7] = (unsigned char)(val >> 56);
    buf->p = buf->p + (signed long int)8;
    if(!(pval == ((unsigned long int *)NULL)))
      *pval = val;

  }

}

// buf_put_int8
// file np.c line 86
static inline void buf_put_int8(struct cbuf *buf, unsigned char val, unsigned char *pval)
{
  signed int return_value_buf_check_size_1;
  return_value_buf_check_size_1=buf_check_size(buf, 1);
  if(!(return_value_buf_check_size_1 == 0))
  {
    buf->p[(signed long int)0] = val;
    buf->p = buf->p + 1l;
    if(!(pval == ((unsigned char *)NULL)))
      *pval = val;

  }

}

// buf_put_qid
// file np.c line 163
static inline void buf_put_qid(struct cbuf *buf, struct p9_qid *qid, struct p9_qid *pqid)
{
  buf_put_int8(buf, qid->type, &pqid->type);
  buf_put_int32(buf, qid->version, &pqid->version);
  buf_put_int64(buf, qid->path, &pqid->path);
}

// buf_put_str
// file np.c line 146
static inline void buf_put_str(struct cbuf *buf, char *s, struct p9_str *ps)
{
  signed int slen = 0;
  unsigned long int return_value_strlen_1;
  if(!(s == ((char *)NULL)))
  {
    return_value_strlen_1=strlen(s);
    slen = (signed int)return_value_strlen_1;
  }

  signed int return_value_buf_check_size_3;
  return_value_buf_check_size_3=buf_check_size(buf, 2 + slen);
  if(!(return_value_buf_check_size_3 == 0))
  {
    ps->len = (unsigned short int)slen;
    buf_put_int16(buf, (unsigned short int)slen, (unsigned short int *)(void *)0);
    void *return_value_buf_alloc_2;
    return_value_buf_alloc_2=buf_alloc(buf, slen);
    ps->str = (char *)return_value_buf_alloc_2;
    if(!(s == ((char *)NULL)))
      memmove((void *)ps->str, (const void *)s, (unsigned long int)slen);

  }

}

// checkauth
// file diod_auth.c line 175
static signed int checkauth(struct Npfid *fid, struct Npfid *afid, char *aname)
{
  struct diod_auth_struct *da;
  signed int ret = 0;
  char a[128l];
  _Bool tmp_if_expr_1;
  if(afid == ((struct Npfid *)NULL) || fid == ((struct Npfid *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(afid->aux != NULL) ? (_Bool)1 : (_Bool)0;
  char *return_value_np_conn_get_client_id_2;
  if(tmp_if_expr_1)
  {
    msg("checkauth: invalid arguments");
    np_uerror((unsigned long int)5);
  }

  else
  {
    da = (struct diod_auth_struct *)afid->aux;
    if(!(da->magic == 0x54346666))
      np_assfail("da->magic == DIOD_AUTH_MAGIC", "diod_auth.c", 187);

    return_value_np_conn_get_client_id_2=np_conn_get_client_id(fid->conn);
    snprintf(a, sizeof(char [128l]) /*128ul*/ , "checkauth(%s@%s:%s)", fid->user->uname, return_value_np_conn_get_client_id_2, aname != ((char *)NULL) ? aname : "<NULL>");
    if(da->datastr == ((char *)NULL))
    {
      msg("%s: munge cred missing", (const void *)a);
      np_uerror((unsigned long int)1);
    }

    else
    {
      da->mungerr=munge_decode(da->datastr, da->mungectx, (void **)(void *)0, ((signed int *)NULL), &da->mungeuid, &da->mungegid);
      if(!((signed int)da->mungerr == EMUNGE_SUCCESS))
      {
        const char *return_value_munge_strerror_3;
        return_value_munge_strerror_3=munge_strerror(da->mungerr);
        msg("%s: munge cred decode: %s", (const void *)a, return_value_munge_strerror_3);
        np_uerror((unsigned long int)1);
        goto done;
      }

      if(!(afid->user->uid == fid->user->uid))
        np_assfail("afid->user->uid == fid->user->uid", "diod_auth.c", 204);

      if(!(afid->user->uid == da->mungeuid))
      {
        msg("%s: munge cred (%d:%d) does not authenticate uid=%d", (const void *)a, da->mungeuid, da->mungegid, afid->user->uid);
        np_uerror((unsigned long int)1);
      }

      else
        ret = 1;
    }
  }

done:
  ;
  return ret;
}

// clunkafid
// file diod_auth.c line 268
static signed int clunkafid(struct Npfid *afid)
{
  if(!(afid == ((struct Npfid *)NULL)))
  {
    if(!(afid->aux == NULL))
    {
      struct diod_auth_struct *da = (struct diod_auth_struct *)afid->aux;
      _da_destroy(da);
      afid->aux = (void *)0;
    }

  }

  return 1;
}

// diod_auth
// file ../libdiod/diod_auth.h line 5
signed int diod_auth(struct Npcfid *afid, unsigned int uid)
{
  signed int ret = -1;
  char *cred = (char *)(void *)0;
  struct munge_ctx *ctx = (struct munge_ctx *)(void *)0;
  ctx=munge_ctx_create();
  enum munge_err return_value_munge_encode_1;
  signed int return_value_npc_puts_2;
  if(ctx == ((struct munge_ctx *)NULL))
    np_uerror((unsigned long int)12);

  else
  {
    return_value_munge_encode_1=munge_encode(&cred, ctx, (void *)0, 0);
    if(!((signed int)return_value_munge_encode_1 == EMUNGE_SUCCESS))
      np_uerror((unsigned long int)1);

    else
    {
      return_value_npc_puts_2=npc_puts(afid, cred);
      if(return_value_npc_puts_2 >= 0)
        ret = 0;

    }
  }

done:
  ;
  if(!(ctx == ((struct munge_ctx *)NULL)))
    munge_ctx_destroy(ctx);

  return ret;
}

// diod_conf_add_exports
// file diod_conf.c line 355
void diod_conf_add_exports(char *path)
{
  struct anonymous_13 *x;
  x=_xcreate_export(path);
  _xlist_append(config.exports, (void *)x);
  config.ro_mask = config.ro_mask | 0x00000100;
}

// diod_conf_add_listen
// file diod_conf.c line 339
void diod_conf_add_listen(char *s)
{
  char *return_value__xstrdup_1;
  return_value__xstrdup_1=_xstrdup(s);
  _xlist_append(config.listen, (void *)return_value__xstrdup_1);
  config.ro_mask = config.ro_mask | 0x00000040;
}

// diod_conf_clr_exports
// file diod_conf.c line 349
void diod_conf_clr_exports(void)
{
  list_destroy(config.exports);
  config.exports=_xlist_create((void (*)(void *))_destroy_export);
  config.ro_mask = config.ro_mask | 0x00000100;
}

// diod_conf_clr_listen
// file diod_conf.c line 333
void diod_conf_clr_listen(void)
{
  list_destroy(config.listen);
  config.listen=_xlist_create((void (*)(void *))free);
  config.ro_mask = config.ro_mask | 0x00000040;
}

// diod_conf_fini
// file diod_conf.c line 202
void diod_conf_fini(void)
{
  if(!(config.listen == ((struct list *)NULL)))
    list_destroy(config.listen);

  if(!(config.exports == ((struct list *)NULL)))
    list_destroy(config.exports);

  if(!(config.configpath == ((char *)NULL)))
    free((void *)config.configpath);

  if(!(config.logdest == ((char *)NULL)))
    free((void *)config.logdest);

  if(!(config.squashuser == ((char *)NULL)))
    free((void *)config.squashuser);

  if(!(config.exportopts == ((char *)NULL)))
    free((void *)config.exportopts);

}

// diod_conf_get_allsquash
// file diod_conf.c line 299
signed int diod_conf_get_allsquash(void)
{
  return config.allsquash;
}

// diod_conf_get_auth_required
// file diod_conf.c line 268
signed int diod_conf_get_auth_required(void)
{
  return config.auth_required;
}

// diod_conf_get_configpath
// file diod_conf.c line 233
char * diod_conf_get_configpath(void)
{
  return config.configpath;
}

// diod_conf_get_debuglevel
// file diod_conf.c line 238
signed int diod_conf_get_debuglevel(void)
{
  return config.debuglevel;
}

// diod_conf_get_exportall
// file diod_conf.c line 410
signed int diod_conf_get_exportall(void)
{
  return config.exportall;
}

// diod_conf_get_exportopts
// file diod_conf.c line 462
char * diod_conf_get_exportopts(void)
{
  return config.exportopts;
}

// diod_conf_get_exports
// file diod_conf.c line 347
struct list * diod_conf_get_exports(void)
{
  return config.exports;
}

// diod_conf_get_foreground
// file diod_conf.c line 258
signed int diod_conf_get_foreground(void)
{
  return config.foreground;
}

// diod_conf_get_listen
// file diod_conf.c line 331
struct list * diod_conf_get_listen(void)
{
  return config.listen;
}

// diod_conf_get_logdest
// file diod_conf.c line 220
char * diod_conf_get_logdest(void)
{
  return config.logdest;
}

// diod_conf_get_mounts
// file diod_conf.c line 417
struct list * diod_conf_get_mounts(void)
{
  struct list *l = (struct list *)(void *)0;
  struct _IO_FILE *f = (struct _IO_FILE *)(void *)0;
  struct anonymous_13 *x;
  char *p;
  char *path;
  char buf[1024l];
  char *return_value_fgets_1;
  unsigned long int return_value_strlen_2;
  if(!(config.exportall == 0))
  {
    l=list_create((void (*)(void *))_destroy_export);
    if(l == ((struct list *)NULL))
      goto error;

    f=fopen("/proc/mounts", "r");
    if(f == ((struct _IO_FILE *)NULL))
      goto error;

    do
    {
      return_value_fgets_1=fgets(buf, (signed int)sizeof(char [1024l]) /*1024ul*/ , f);
      if(return_value_fgets_1 == ((char *)NULL))
        break;

      unsigned long int return_value_strlen_3;
      return_value_strlen_3=strlen(buf);
      if((signed int)buf[-1l + (signed long int)return_value_strlen_3] == 10)
      {
        return_value_strlen_2=strlen(buf);
        buf[(signed long int)(return_value_strlen_2 - (unsigned long int)1)] = (char)0;
      }

      p=strchr(buf, 32);
      if(!(p == ((char *)NULL)))
      {
        path = p + (signed long int)1;
        p=strchr(path, 32);
        if(!(p == ((char *)NULL)))
        {
          *p = (char)0;
          x=_create_export(path);
          if(x == ((struct anonymous_13 *)NULL))
            goto error;

          if(!(config.exportopts == ((char *)NULL)))
            x->opts=_xstrdup(config.exportopts);

          if(!(x->opts == ((char *)NULL)))
            _parse_expopt(x->opts, &x->oflags);

          void *return_value_list_append_4;
          return_value_list_append_4=list_append(l, (void *)x);
          if(return_value_list_append_4 == NULL)
          {
            _destroy_export(x);
            goto error;
          }

        }

      }

    }
    while((_Bool)1);
    fclose(f);
    return l;
  }

  else
  {

  error:
    ;
    if(!(f == ((struct _IO_FILE *)NULL)))
      fclose(f);

    if(!(l == ((struct list *)NULL)))
      list_destroy(l);

    return (struct list *)(void *)0;
  }
}

// diod_conf_get_nwthreads
// file diod_conf.c line 248
signed int diod_conf_get_nwthreads(void)
{
  return config.nwthreads;
}

// diod_conf_get_runasuid
// file diod_conf.c line 321
unsigned int diod_conf_get_runasuid(void)
{
  return config.runasuid;
}

// diod_conf_get_squashuser
// file diod_conf.c line 309
char * diod_conf_get_squashuser(void)
{
  return config.squashuser;
}

// diod_conf_get_statfs_passthru
// file diod_conf.c line 278
signed int diod_conf_get_statfs_passthru(void)
{
  return config.statfs_passthru;
}

// diod_conf_get_userdb
// file diod_conf.c line 288
signed int diod_conf_get_userdb(void)
{
  return config.userdb;
}

// diod_conf_init
// file diod_conf.c line 176
void diod_conf_init(void)
{
  config.debuglevel = 0;
  config.nwthreads = 16;
  config.foreground = 0;
  config.auth_required = 1;
  config.statfs_passthru = 0;
  config.userdb = 1;
  config.allsquash = 0;
  config.squashuser=_xstrdup("nobody");
  config.runasuid = (unsigned int)0;
  config.listen=_xlist_create((void (*)(void *))free);
  char *return_value__xstrdup_1;
  return_value__xstrdup_1=_xstrdup("0.0.0.0:564");
  _xlist_append(config.listen, (void *)return_value__xstrdup_1);
  config.exports=_xlist_create((void (*)(void *))_destroy_export);
  config.exportall = 0;
  config.exportopts = (char *)(void *)0;
  config.configpath=_xstrdup("/etc/diod.conf");
  config.logdest=_xstrdup("syslog:daemon:err");
  config.ro_mask = 0;
}

// diod_conf_init_config_file
// file diod_conf.c line 620
void diod_conf_init_config_file(char *path)
{
  signed int return_value_access_1;
  if(!(path == ((char *)NULL)))
  {
    if(!(config.configpath == ((char *)NULL)))
      free((void *)config.configpath);

    config.configpath=_xstrdup(path);
    config.ro_mask = config.ro_mask | 0x00000400;
  }

  else
    if(!(config.configpath == ((char *)NULL)))
    {
      return_value_access_1=access(config.configpath, 4);
      if(return_value_access_1 == 0)
        path = config.configpath;

    }

  _Bool tmp_if_expr_5;
  signed int return_value_lua_pcall_4;
  const char *return_value_lua_tolstring_2;
  if(!(path == ((char *)NULL)))
  {
    struct lua_State *L;
    L=luaL_newstate();
    luaopen_base(L);
    luaopen_table(L);
    luaopen_string(L);
    luaopen_math(L);
    signed int return_value_luaL_loadfile_3;
    return_value_luaL_loadfile_3=luaL_loadfile(L, path);
    if(!(return_value_luaL_loadfile_3 == 0))
      tmp_if_expr_5 = (_Bool)1;

    else
    {
      return_value_lua_pcall_4=lua_pcall(L, 0, 0, 0);
      tmp_if_expr_5 = return_value_lua_pcall_4 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_5)
    {
      return_value_lua_tolstring_2=lua_tolstring(L, -1, (unsigned long int *)(void *)0);
      msg_exit("%s", return_value_lua_tolstring_2);
    }

    if((0x00000002 & config.ro_mask) == 0)
    {
      config.nwthreads = 16;
      _lua_getglobal_int(path, L, "nwthreads", &config.nwthreads);
    }

    if((0x00000008 & config.ro_mask) == 0)
    {
      config.auth_required = 1;
      _lua_getglobal_int(path, L, "auth_required", &config.auth_required);
    }

    if((0x00010000 & config.ro_mask) == 0)
    {
      config.statfs_passthru = 0;
      _lua_getglobal_int(path, L, "statfs_passthru", &config.statfs_passthru);
    }

    if((0x00000020 & config.ro_mask) == 0)
    {
      config.userdb = 1;
      _lua_getglobal_int(path, L, "userdb", &config.userdb);
    }

    if((0x00004000 & config.ro_mask) == 0)
    {
      config.allsquash = 0;
      _lua_getglobal_int(path, L, "allsquash", &config.allsquash);
    }

    if((0x00008000 & config.ro_mask) == 0)
    {
      free((void *)config.squashuser);
      config.squashuser=_xstrdup("nobody");
      _lua_getglobal_string(path, L, "squashuser", &config.squashuser);
    }

    if((0x00000040 & config.ro_mask) == 0)
    {
      list_destroy(config.listen);
      config.listen=_xlist_create((void (*)(void *))free);
      char *return_value__xstrdup_6;
      return_value__xstrdup_6=_xstrdup("0.0.0.0:564");
      _xlist_append(config.listen, (void *)return_value__xstrdup_6);
      _lua_getglobal_list_of_strings(path, L, "listen", &config.listen);
    }

    if((0x00000800 & config.ro_mask) == 0)
    {
      free((void *)config.logdest);
      config.logdest=_xstrdup("syslog:daemon:err");
      _lua_getglobal_string(path, L, "logdest", &config.logdest);
    }

    if((0x00001000 & config.ro_mask) == 0)
    {
      config.exportall = 0;
      _lua_getglobal_int(path, L, "exportall", &config.exportall);
    }

    if((0x00002000 & config.ro_mask) == 0)
    {
      if(!(config.exportopts == ((char *)NULL)))
      {
        free((void *)config.exportopts);
        config.exportopts = (char *)(void *)0;
      }

      _lua_getglobal_string(path, L, "exportopts", &config.exportopts);
    }

    if((0x00000100 & config.ro_mask) == 0)
    {
      list_destroy(config.exports);
      config.exports=_xlist_create((void (*)(void *))_destroy_export);
      _lua_getglobal_exports(path, L, &config.exports);
    }

    lua_close(L);
  }

}

// diod_conf_opt_allsquash
// file diod_conf.c line 300
signed int diod_conf_opt_allsquash(void)
{
  return config.ro_mask & 0x00004000;
}

// diod_conf_opt_auth_required
// file diod_conf.c line 269
signed int diod_conf_opt_auth_required(void)
{
  return config.ro_mask & 0x00000008;
}

// diod_conf_opt_configpath
// file diod_conf.c line 234
signed int diod_conf_opt_configpath(void)
{
  return config.ro_mask & 0x00000400;
}

// diod_conf_opt_debuglevel
// file diod_conf.c line 239
signed int diod_conf_opt_debuglevel(void)
{
  return config.ro_mask & 0x00000001;
}

// diod_conf_opt_exportall
// file diod_conf.c line 411
signed int diod_conf_opt_exportall(void)
{
  return config.ro_mask & 0x00001000;
}

// diod_conf_opt_exportopts
// file diod_conf.c line 463
signed int diod_conf_opt_exportopts(void)
{
  return config.ro_mask & 0x00002000;
}

// diod_conf_opt_exports
// file diod_conf.c line 348
signed int diod_conf_opt_exports(void)
{
  return config.ro_mask & 0x00000100;
}

// diod_conf_opt_foreground
// file diod_conf.c line 259
signed int diod_conf_opt_foreground(void)
{
  return config.ro_mask & 0x00000004;
}

// diod_conf_opt_listen
// file diod_conf.c line 332
signed int diod_conf_opt_listen(void)
{
  return config.ro_mask & 0x00000040;
}

// diod_conf_opt_logdest
// file diod_conf.c line 221
signed int diod_conf_opt_logdest(void)
{
  return config.ro_mask & 0x00000800;
}

// diod_conf_opt_nwthreads
// file diod_conf.c line 249
signed int diod_conf_opt_nwthreads(void)
{
  return config.ro_mask & 0x00000002;
}

// diod_conf_opt_runasuid
// file diod_conf.c line 322
signed int diod_conf_opt_runasuid(void)
{
  return config.ro_mask & 0x00000010;
}

// diod_conf_opt_squashuser
// file diod_conf.c line 310
signed int diod_conf_opt_squashuser(void)
{
  return config.ro_mask & 0x00008000;
}

// diod_conf_opt_statfs_passthru
// file diod_conf.c line 279
signed int diod_conf_opt_statfs_passthru(void)
{
  return config.ro_mask & 0x00010000;
}

// diod_conf_opt_userdb
// file diod_conf.c line 289
signed int diod_conf_opt_userdb(void)
{
  return config.ro_mask & 0x00000020;
}

// diod_conf_set_allsquash
// file diod_conf.c line 301
void diod_conf_set_allsquash(signed int i)
{
  config.allsquash = i;
  config.ro_mask = config.ro_mask | 0x00004000;
}

// diod_conf_set_auth_required
// file diod_conf.c line 270
void diod_conf_set_auth_required(signed int i)
{
  config.auth_required = i;
  config.ro_mask = config.ro_mask | 0x00000008;
}

// diod_conf_set_debuglevel
// file diod_conf.c line 240
void diod_conf_set_debuglevel(signed int i)
{
  config.debuglevel = i & 0xffff;
  config.ro_mask = config.ro_mask | 0x00000001;
}

// diod_conf_set_exportall
// file diod_conf.c line 412
void diod_conf_set_exportall(signed int i)
{
  config.exportall = i;
  config.ro_mask = config.ro_mask | 0x00001000;
}

// diod_conf_set_exportopts
// file diod_conf.c line 464
void diod_conf_set_exportopts(char *opts)
{
  if(!(config.exportopts == ((char *)NULL)))
    free((void *)config.exportopts);

  config.exportopts=_xstrdup(opts);
  config.ro_mask = config.ro_mask | 0x00002000;
}

// diod_conf_set_foreground
// file diod_conf.c line 260
void diod_conf_set_foreground(signed int i)
{
  config.foreground = i;
  config.ro_mask = config.ro_mask | 0x00000004;
}

// diod_conf_set_logdest
// file diod_conf.c line 222
void diod_conf_set_logdest(char *s)
{
  if(!(config.logdest == ((char *)NULL)))
    free((void *)config.logdest);

  config.logdest=_xstrdup(s);
  config.ro_mask = config.ro_mask | 0x00000800;
}

// diod_conf_set_nwthreads
// file diod_conf.c line 250
void diod_conf_set_nwthreads(signed int i)
{
  config.nwthreads = i;
  config.ro_mask = config.ro_mask | 0x00000002;
}

// diod_conf_set_runasuid
// file diod_conf.c line 323
void diod_conf_set_runasuid(unsigned int uid)
{
  config.runasuid = uid;
  config.ro_mask = config.ro_mask | 0x00000010;
}

// diod_conf_set_squashuser
// file diod_conf.c line 311
void diod_conf_set_squashuser(char *user)
{
  if(!(config.squashuser == ((char *)NULL)))
    free((void *)config.squashuser);

  config.squashuser=_xstrdup(user);
  config.ro_mask = config.ro_mask | 0x00008000;
}

// diod_conf_set_statfs_passthru
// file diod_conf.c line 280
void diod_conf_set_statfs_passthru(signed int i)
{
  config.statfs_passthru = i;
  config.ro_mask = config.ro_mask | 0x00010000;
}

// diod_conf_set_userdb
// file diod_conf.c line 290
void diod_conf_set_userdb(signed int i)
{
  config.userdb = i;
  config.ro_mask = config.ro_mask | 0x00000020;
}

// diod_conf_validate_exports
// file diod_conf.c line 361
void diod_conf_validate_exports(void)
{
  struct listIterator *itr;
  struct anonymous_13 *x;
  signed int return_value_list_count_1;
  if(config.exportall == 0)
  {
    return_value_list_count_1=list_count(config.exports);
    if(return_value_list_count_1 == 0)
      msg_exit("no exports defined");

  }

  itr=list_iterator_create(config.exports);
  if(itr == ((struct listIterator *)NULL))
    msg_exit("out of memory");

  void *return_value_list_next_2;
  signed int return_value_strcmp_3;
  do
  {
    return_value_list_next_2=list_next(itr);
    x = (struct anonymous_13 *)return_value_list_next_2;
    if(x == ((struct anonymous_13 *)NULL))
      break;

    if(!((signed int)*x->path == 47))
    {
      return_value_strcmp_3=strcmp(x->path, "ctl");
      if(!(return_value_strcmp_3 == 0))
        msg_exit("exports should begin with '/'");

    }

    char *return_value_strstr_4;
    return_value_strstr_4=strstr(x->path, "/..");
    if(!(return_value_strstr_4 == ((char *)NULL)))
      msg_exit("exports should not contain '/..'");

  }
  while((_Bool)1);
  list_iterator_destroy(itr);
}

// diod_log_fini
// file diod_log.c line 118
void diod_log_fini(void)
{
  closelog();
  if(!(logf == ((struct _IO_FILE *)NULL)))
    fflush(logf);

  if(!(logf == ((struct _IO_FILE *)NULL)) && !(logf == stderr) && !(logf == stdout))
    fclose(logf);

}

// diod_log_get_dest
// file diod_log.c line 184
char * diod_log_get_dest(void)
{
  signed int len = 4096 + 1;
  char *res;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)len);
  res = (char *)return_value_malloc_1;
  char *return_value__rmatch_2;
  char *return_value__rmatch_3;
  if(!(res == ((char *)NULL)))
    switch((signed int)dest)
    {
      case DEST_SYSLOG:
      {
        return_value__rmatch_2=_rmatch(syslog_facility, facility_tab);
        return_value__rmatch_3=_rmatch(syslog_level, level_tab);
        snprintf(res, (unsigned long int)(4096 + 1), "syslog:%s:%s", return_value__rmatch_2, return_value__rmatch_3);
        break;
      }
      case DEST_LOGF:
        snprintf(res, (unsigned long int)len, "%s", logf == stdout ? "stdout" : (logf == stderr ? "stderr" : (logf == (struct _IO_FILE *)(void *)0 ? "unknown" : filename)));
    }


done:
  ;
  return res;
}

// diod_log_init
// file ../libdiod/diod_log.h line 1
void diod_log_init(char *p)
{
  prog=__xpg_basename(p);
  logf = stderr;
  openlog(prog, 0x08 | 0x01, syslog_facility);
}

// diod_log_msg
// file diod_log.c line 227
void diod_log_msg(const char *fmt, void **ap)
{
  char buf[1024l];
  vsnprintf(buf, sizeof(char [1024l]) /*1024ul*/ , fmt, ap);
  switch((signed int)dest)
  {
    case DEST_LOGF:
    {
      fprintf(logf, "%s: %s\n", prog, (const void *)buf);
      fflush(logf);
      break;
    }
    case DEST_SYSLOG:
      syslog(syslog_level, "%s", (const void *)buf);
  }
}

// diod_log_set_dest
// file diod_log.c line 150
void diod_log_set_dest(char *s)
{
  char *fac;
  char *lev;
  struct _IO_FILE *f;
  signed int return_value_strcmp_5;
  return_value_strcmp_5=strcmp(s, "syslog");
  signed int return_value_strncmp_4;
  char *tmp_post_1;
  signed int return_value_strcmp_2;
  if(return_value_strcmp_5 == 0)
    dest = (enum anonymous_7)DEST_SYSLOG;

  else
  {
    return_value_strncmp_4=strncmp(s, "syslog:", (unsigned long int)7);
    if(return_value_strncmp_4 == 0)
    {
      fac=strdup(s + (signed long int)7);
      if(fac == ((char *)NULL))
        msg_exit("out of memory");

      lev=strchr(fac, 58);
      if(!(lev == ((char *)NULL)))
      {
        tmp_post_1 = lev;
        lev = lev + 1l;
        *tmp_post_1 = (char)0;
      }

      _set_syslog_facility(fac);
      if(!(lev == ((char *)NULL)))
        _set_syslog_level(lev);

      free((void *)fac);
      dest = (enum anonymous_7)DEST_SYSLOG;
    }

    else
    {
      signed int return_value_strcmp_3;
      return_value_strcmp_3=strcmp(s, "stderr");
      if(return_value_strcmp_3 == 0)
        logf = stderr;

      else
      {
        return_value_strcmp_2=strcmp(s, "stdout");
        if(return_value_strcmp_2 == 0)
          logf = stdout;

        else
        {
          f=fopen(s, "a");
          if(!(f == ((struct _IO_FILE *)NULL)))
          {
            if(!(logf == ((struct _IO_FILE *)NULL)) && !(logf == stderr) && !(logf == stdout))
              fclose(logf);

            logf = f;
            filename = s;
          }

          else
            err_exit("could not open %s for writing", s);
        }
      }
      dest = (enum anonymous_7)DEST_LOGF;
    }
  }
}

// diod_sock_accept_one
// file diod_sock.c line 327
void diod_sock_accept_one(struct Npsrv *srv, signed int fd)
{
  struct sockaddr_storage addr;
  unsigned int addr_size = (unsigned int)sizeof(struct sockaddr_storage) /*128ul*/ ;
  char host[1025l];
  char ip[1025l];
  char svc[32l];
  signed int res;
  signed int port;
  signed int flags = 0;
  fd=accept(fd, (struct sockaddr *)&addr, &addr_size);
  _Bool tmp_if_expr_3;
  signed int *return_value___errno_location_2;
  _Bool tmp_if_expr_5;
  signed int *return_value___errno_location_4;
  _Bool tmp_if_expr_7;
  signed int *return_value___errno_location_6;
  if(!(fd >= 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    if(*return_value___errno_location_1 == 11)
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      return_value___errno_location_2=__errno_location();
      tmp_if_expr_3 = *return_value___errno_location_2 == 103 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_3)
      tmp_if_expr_5 = (_Bool)1;

    else
    {
      return_value___errno_location_4=__errno_location();
      tmp_if_expr_5 = *return_value___errno_location_4 == 71 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_5)
      tmp_if_expr_7 = (_Bool)1;

    else
    {
      return_value___errno_location_6=__errno_location();
      tmp_if_expr_7 = *return_value___errno_location_6 == 4 ? (_Bool)1 : (_Bool)0;
    }
    if(!tmp_if_expr_7)
      err("accept");

    goto __CPROVER_DUMP_L16;
  }

  res=getnameinfo((struct sockaddr *)&addr, addr_size, ip, (unsigned int)sizeof(char [1025l]) /*1025ul*/ , svc, (unsigned int)sizeof(char [32l]) /*32ul*/ , 1 | 2);
  if(!(res == 0))
  {
    const char *return_value_gai_strerror_8;
    return_value_gai_strerror_8=gai_strerror(res);
    msg("getnameinfo: %s", return_value_gai_strerror_8);
    close(fd);
    goto __CPROVER_DUMP_L16;
  }

  if(!((signed int)addr.ss_family == 1))
  {
    _disable_nagle(fd);
    _enable_keepalive(fd);
  }

  res=getnameinfo((struct sockaddr *)&addr, addr_size, host, (unsigned int)sizeof(char [1025l]) /*1025ul*/ , (char *)(void *)0, (unsigned int)0, 0);
  if(!(res == 0))
  {
    const char *return_value_gai_strerror_9;
    return_value_gai_strerror_9=gai_strerror(res);
    msg("getnameinfo: %s", return_value_gai_strerror_9);
    close(fd);
    goto __CPROVER_DUMP_L16;
  }

  res=hosts_ctl("diod", host, ip, "unknown");
  char *tmp_if_expr_12;
  if(res == 0)
  {
    msg("connect denied by wrappers: %s:%s", (const void *)host, (const void *)svc);
    close(fd);
  }

  else
  {
    unsigned long int return_value_strtoul_10;
    return_value_strtoul_10=strtoul(svc, (char ** restrict )(void *)0, 10);
    port = (signed int)return_value_strtoul_10;
    if(port >= 512 && !(port >= 1024))
      flags = flags | 1;

    unsigned long int return_value_strlen_11;
    return_value_strlen_11=strlen(host);
    if(return_value_strlen_11 >= 1ul)
      tmp_if_expr_12 = host;

    else
      tmp_if_expr_12 = ip;
    diod_sock_startfd(srv, fd, fd, tmp_if_expr_12, flags);
  }

__CPROVER_DUMP_L16:
  ;
}

// diod_sock_connect
// file diod_sock.c line 487
signed int diod_sock_connect(char *name, signed int flags)
{
  signed int fd = -1;
  char *host = (char *)(void *)0;
  char *port;
  char *return_value_strchr_4;
  char *tmp_post_3;
  if(name == ((char *)NULL))
    fd=diod_sock_connect_inet("localhost", "564", flags);

  else
    if((signed int)*name == 47)
      fd=diod_sock_connect_unix(name, flags);

    else
    {
      return_value_strchr_4=strchr(name, 58);
      if(return_value_strchr_4 == ((char *)NULL))
        fd=diod_sock_connect_inet(name, "564", flags);

      else
      {
        host=strdup(name);
        if(host == ((char *)NULL))
        {
          signed int *return_value___errno_location_1;
          return_value___errno_location_1=__errno_location();
          *return_value___errno_location_1 = 12;
          if((0x01 & flags) == 0)
            err("diod_sock_connect %s", name);

          goto done;
        }

        port=strchr(host, 58);
        if(port == ((char *)NULL))
        {
          signed int *return_value___errno_location_2;
          return_value___errno_location_2=__errno_location();
          *return_value___errno_location_2 = 22;
          if((0x01 & flags) == 0)
            err("diod_sock_connect %s", name);

          goto done;
        }

        tmp_post_3 = port;
        port = port + 1l;
        *tmp_post_3 = (char)0;
        fd=diod_sock_connect_inet(host, port, flags);
      }
    }

done:
  ;
  if(!(host == ((char *)NULL)))
    free((void *)host);

  return fd;
}

// diod_sock_connect_inet
// file ../libdiod/diod_sock.h line 14
signed int diod_sock_connect_inet(char *host, char *port, signed int flags)
{
  signed int error;
  signed int fd = -1;
  struct addrinfo hints;
  struct addrinfo *res = (struct addrinfo *)(void *)0;
  struct addrinfo *r;
  char *errmsg = (char *)(void *)0;
  signed int errnum = 0;
  memset((void *)&hints, 0, sizeof(struct addrinfo) /*48ul*/ );
  hints.ai_family = 0;
  hints.ai_socktype = 1;
  error=getaddrinfo(host, port, &hints, &res);
  const char *return_value_gai_strerror_1;
  if(!(error == 0))
  {
    if((0x01 & flags) == 0)
    {
      return_value_gai_strerror_1=gai_strerror(error);
      msg("getaddrinfo %s:%s: %s", host, port, return_value_gai_strerror_1);
    }

    goto done;
  }

  if(res == ((struct addrinfo *)NULL))
  {
    if((0x01 & flags) == 0)
      msg("could not look up %s:%s", host, port);

  }

  else
  {
    r = res;
    for( ; !(r == ((struct addrinfo *)NULL)); r = r->ai_next)
    {
      fd=socket(r->ai_family, r->ai_socktype, 0);
      if(!(fd >= 0))
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        errnum = *return_value___errno_location_2;
        errmsg = "socket";
        goto __CPROVER_DUMP_L11;
      }

      if(!((0x02 & flags) == 0))
      {
        if(!(r->ai_family == 2))
        {
          errnum = 22;
          errmsg = "_bind_resv_inet4";
          close(fd);
          fd = -1;
          goto __CPROVER_DUMP_L11;
        }

        signed int return_value__bind_priv_inet4_4;
        return_value__bind_priv_inet4_4=_bind_priv_inet4(fd);
        if(!(return_value__bind_priv_inet4_4 >= 0))
        {
          signed int *return_value___errno_location_3;
          return_value___errno_location_3=__errno_location();
          errnum = *return_value___errno_location_3;
          errmsg = "_bind_resv_inet4";
          close(fd);
          fd = -1;
          goto __CPROVER_DUMP_L11;
        }

      }

      _disable_nagle(fd);
      signed int return_value_connect_6;
      return_value_connect_6=connect(fd, r->ai_addr, r->ai_addrlen);
      if(!(return_value_connect_6 >= 0))
      {
        signed int *return_value___errno_location_5;
        return_value___errno_location_5=__errno_location();
        errnum = *return_value___errno_location_5;
        errmsg = "connect";
        close(fd);
        fd = -1;
      }


    __CPROVER_DUMP_L11:
      ;
    }
    if((0x01 & flags) == 0 && !(errmsg == ((char *)NULL)) && !(fd >= 0))
      errn(errnum, "%s %s", errmsg, host);

    if(!(res == ((struct addrinfo *)NULL)))
      freeaddrinfo(res);

  }

done:
  ;
  return fd;
}

// diod_sock_connect_unix
// file ../libdiod/diod_sock.h line 15
signed int diod_sock_connect_unix(char *path, signed int flags)
{
  struct sockaddr_un addr;
  signed int fd = -1;
  fd=socket(1, 1, 0);
  signed int return_value_connect_1;
  if(!(fd >= 0))
  {
    if((0x01 & flags) == 0)
      err("socket");

  }

  else
  {
    memset((void *)&addr, 0, sizeof(struct sockaddr_un) /*110ul*/ );
    addr.sun_family = (unsigned short int)1;
    strncpy(addr.sun_path, path, sizeof(char [108l]) /*108ul*/  - (unsigned long int)1);
    return_value_connect_1=connect(fd, (struct sockaddr *)&addr, (unsigned int)sizeof(struct sockaddr_un) /*110ul*/ );
    if(!(return_value_connect_1 >= 0))
    {
      if((0x01 & flags) == 0)
        err("connect %s", path);

    }

    else
      return fd;
  }

error:
  ;
  if(!(fd == -1))
    close(fd);

  return -1;
}

// diod_sock_listen
// file diod_sock.c line 263
signed int diod_sock_listen(struct list *l, struct pollfd **fdsp, signed int *nfdsp)
{
  struct listIterator *itr;
  char *s;
  char *host;
  char *port;
  signed int n;
  signed int ret = 0;
  itr=list_iterator_create(l);
  void *return_value_list_next_1;
  char *tmp_post_2;
  if(itr == ((struct listIterator *)NULL))
    msg("out of memory");

  else
  {
    do
    {
      return_value_list_next_1=list_next(itr);
      s = (char *)return_value_list_next_1;
      if(s == ((char *)NULL))
        break;

      if((signed int)*s == 47)
      {
        n=_setup_one_unix(s, fdsp, nfdsp);
        if(n == 0)
          goto done;

        ret = ret + n;
      }

      else
      {
        host=strdup(s);
        if(host == ((char *)NULL))
        {
          msg("out of memory");
          goto done;
        }

        port=strchr(host, 58);
        if(port == ((char *)NULL))
          np_assfail("port != NULL", "diod_sock.c", 284);

        tmp_post_2 = port;
        port = port + 1l;
        *tmp_post_2 = (char)0;
        n=_setup_one_inet(host, port, fdsp, nfdsp);
        if(n == 0)
        {
          free((void *)host);
          goto done;
        }

        ret = ret + n;
        free((void *)host);
      }
    }
    while((_Bool)1);
    ret=_listen_fds(*fdsp, *nfdsp);
  }

done:
  ;
  if(!(itr == ((struct listIterator *)NULL)))
    list_iterator_destroy(itr);

  return ret;
}

// diod_sock_startfd
// file diod_sock.c line 302
void diod_sock_startfd(struct Npsrv *srv, signed int fdin, signed int fdout, char *client_id, signed int flags)
{
  struct Npconn *conn;
  struct Nptrans *trans;
  trans=np_fdtrans_create(fdin, fdout);
  if(trans == ((struct Nptrans *)NULL))
  {
    unsigned long int return_value_np_rerror_1;
    return_value_np_rerror_1=np_rerror();
    errn((signed int)return_value_np_rerror_1, "error creating transport for %s", client_id);
    close(fdin);
    if(!(fdin == fdout))
      close(fdout);

    goto __CPROVER_DUMP_L4;
  }

  conn=np_conn_create(srv, trans, client_id, flags);
  if(conn == ((struct Npconn *)NULL))
  {
    unsigned long int return_value_np_rerror_2;
    return_value_np_rerror_2=np_rerror();
    errn((signed int)return_value_np_rerror_2, "error creating connection for %s", client_id);
    goto __CPROVER_DUMP_L4;
  }


__CPROVER_DUMP_L4:
  ;
}

// err
// file ../libdiod/diod_log.h line 9
void err(const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  signed int *return_value___errno_location_1;
  return_value___errno_location_1=__errno_location();
  _verr(*return_value___errno_location_1, fmt, ap);
  ap = ((void **)NULL);
}

// err_exit
// file ../libdiod/diod_log.h line 7
void err_exit(const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  signed int *return_value___errno_location_1;
  return_value___errno_location_1=__errno_location();
  _verr(*return_value___errno_location_1, fmt, ap);
  ap = ((void **)NULL);
  exit(1);
}

// errn
// file ../libdiod/diod_log.h line 13
void errn(signed int errnum, const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  _verr(errnum, fmt, ap);
  ap = ((void **)NULL);
}

// errn_exit
// file ../libdiod/diod_log.h line 11
void errn_exit(signed int errnum, const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  _verr(errnum, fmt, ap);
  ap = ((void **)NULL);
  exit(1);
}

// hash_count
// file hash.c line 200
signed int hash_count(struct hash *h)
{
  signed int n;
  if(h == ((struct hash *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return 0;
  }

  do
  {
    signed int hash_count__1__2__e;
    hash_count__1__2__e=pthread_mutex_lock(&h->mutex);
    if(!(hash_count__1__2__e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = hash_count__1__2__e;
      lsd_fatal_error("hash.c", 208, "mutex_lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion h->magic == 0xDEADBEEF */
  assert(h->magic == 0xDEADBEEF);
  n = h->count;
  do
  {
    signed int e;
    e=pthread_mutex_unlock(&h->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = e;
      lsd_fatal_error("hash.c", 211, "mutex_unlock");
      abort();
    }

  }
  while((_Bool)0);
  return n;
}

// hash_create
// file hash.c line 124
struct hash * hash_create(signed int size, unsigned int (*key_f)(const void *), signed int (*cmp_f)(const void *, const void *), void (*del_f)(void *))
{
  struct hash *h;
  if(cmp_f == ((signed int (*)(const void *, const void *))NULL) || key_f == ((unsigned int (*)(const void *))NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return (struct hash *)(void *)0;
  }

  if(!(size >= 1))
    size = 1213;

  void *return_value_malloc_3;
  return_value_malloc_3=malloc(sizeof(struct hash) /*88ul*/ );
  h = (struct hash *)return_value_malloc_3;
  if(h == ((struct hash *)NULL))
  {
    void *return_value_lsd_nomem_error_2;
    return_value_lsd_nomem_error_2=lsd_nomem_error("hash.c", 136, "hash_create");
    return (struct hash *)return_value_lsd_nomem_error_2;
  }

  void *return_value_calloc_5;
  return_value_calloc_5=calloc((unsigned long int)size, sizeof(struct hash_node *) /*8ul*/ );
  h->table = (struct hash_node **)return_value_calloc_5;
  if(h->table == ((struct hash_node **)NULL))
  {
    free((void *)h);
    void *return_value_lsd_nomem_error_4;
    return_value_lsd_nomem_error_4=lsd_nomem_error("hash.c", 140, "hash_create");
    return (struct hash *)return_value_lsd_nomem_error_4;
  }

  h->count = 0;
  h->size = size;
  h->cmp_f = cmp_f;
  h->del_f = del_f;
  h->key_f = key_f;
  do
  {
    signed int e;
    e=pthread_mutex_init(&h->mutex, (const union anonymous_6 *)(void *)0);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_6;
      return_value___errno_location_6=__errno_location();
      *return_value___errno_location_6 = e;
      lsd_fatal_error("hash.c", 147, "mutex_init");
      abort();
    }

  }
  while((_Bool)0);
  h->magic = 0xDEADBEEF;
  /* assertion h->magic = 0xDEADBEEF */
  assert(h->magic != 0u);
  return h;
}

// hash_delete_if
// file hash.c line 309
signed int hash_delete_if(struct hash *h, signed int (*arg_f)(void *, const void *, void *), void *arg)
{
  signed int i;
  struct hash_node **pp;
  struct hash_node *p;
  signed int n = 0;
  if(arg_f == ((signed int (*)(void *, const void *, void *))NULL) || h == ((struct hash *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  do
  {
    signed int e;
    e=pthread_mutex_lock(&h->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = e;
      lsd_fatal_error("hash.c", 320, "mutex_lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion h->magic == 0xDEADBEEF */
  assert(h->magic == 0xDEADBEEF);
  i = 0;
  for( ; !(i >= h->size); i = i + 1)
  {
    pp = &h->table[(signed long int)i];
    p = *pp;
    if(!(p == ((struct hash_node *)NULL)))
    {
      signed int return_value;
      return_value=arg_f(p->data, p->hkey, arg);
      if(return_value >= 1)
      {
        if(!(h->del_f == ((void (*)(void *))NULL)))
          h->del_f(p->data);

        *pp = p->next;
        hash_node_free(p);
        h->count = h->count - 1;
        n = n + 1;
      }

      else
        pp = &p->next;
    }

  }
  do
  {
    signed int hash_delete_if__1__4__e;
    hash_delete_if__1__4__e=pthread_mutex_unlock(&h->mutex);
    if(!(hash_delete_if__1__4__e == 0))
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = hash_delete_if__1__4__e;
      lsd_fatal_error("hash.c", 338, "mutex_unlock");
      abort();
    }

  }
  while((_Bool)0);
  return n;
}

// hash_destroy
// file hash.c line 154
void hash_destroy(struct hash *h)
{
  signed int i;
  struct hash_node *p;
  struct hash_node *q;
  if(h == ((struct hash *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    goto __CPROVER_DUMP_L12;
  }

  do
  {
    signed int e;
    e=pthread_mutex_lock(&h->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = e;
      lsd_fatal_error("hash.c", 163, "mutex_lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion h->magic == 0xDEADBEEF */
  assert(h->magic == 0xDEADBEEF);
  i = 0;
  for( ; !(i >= h->size); i = i + 1)
  {
    p = h->table[(signed long int)i];
    for( ; !(p == ((struct hash_node *)NULL)); p = q)
    {
      q = p->next;
      if(!(h->del_f == ((void (*)(void *))NULL)))
        h->del_f(p->data);

      hash_node_free(p);
    }
  }
  h->magic = ~0xDEADBEEF;
  /* assertion h->magic = ~0xDEADBEEF */
  assert(h->magic != 0u);
  do
  {
    signed int hash_destroy__1__4__e;
    hash_destroy__1__4__e=pthread_mutex_unlock(&h->mutex);
    if(!(hash_destroy__1__4__e == 0))
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = hash_destroy__1__4__e;
      lsd_fatal_error("hash.c", 174, "mutex_unlock");
      abort();
    }

  }
  while((_Bool)0);
  do
  {
    signed int hash_destroy__1__5__e;
    hash_destroy__1__5__e=pthread_mutex_destroy(&h->mutex);
    if(!(hash_destroy__1__5__e == 0))
    {
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      *return_value___errno_location_4 = hash_destroy__1__5__e;
      lsd_fatal_error("hash.c", 175, "mutex_destroy");
      abort();
    }

  }
  while((_Bool)0);
  free((void *)h->table);
  free((void *)h);
  goto __CPROVER_DUMP_L12;

__CPROVER_DUMP_L12:
  ;
}

// hash_find
// file hash.c line 217
void * hash_find(struct hash *h, const void *key)
{
  unsigned int slot;
  struct hash_node *p;
  void *data = (void *)0;
  if(key == NULL || h == ((struct hash *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return (void *)0;
  }

  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  *return_value___errno_location_2 = 0;
  do
  {
    signed int hash_find__1__2__e;
    hash_find__1__2__e=pthread_mutex_lock(&h->mutex);
    if(!(hash_find__1__2__e == 0))
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = hash_find__1__2__e;
      lsd_fatal_error("hash.c", 228, "mutex_lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion h->magic == 0xDEADBEEF */
  assert(h->magic == 0xDEADBEEF);
  unsigned int return_value;
  return_value=h->key_f(key);
  slot = return_value % (unsigned int)h->size;
  p = h->table[(signed long int)slot];
  if(!(p == ((struct hash_node *)NULL)))
  {
    signed int return_value_1;
    return_value_1=h->cmp_f(p->hkey, key);
    if(return_value_1 == 0)
      data = p->data;

    else
      p = p->next;
  }

  signed int e;
  e=pthread_mutex_unlock(&h->mutex);
  if(!(e == 0))
  {
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    *return_value___errno_location_4 = e;
    lsd_fatal_error("hash.c", 237, "mutex_unlock");
    abort();
  }

  return data;
}

// hash_for_each
// file hash.c line 344
signed int hash_for_each(struct hash *h, signed int (*arg_f)(void *, const void *, void *), void *arg)
{
  signed int i;
  struct hash_node *p;
  signed int n = 0;
  if(arg_f == ((signed int (*)(void *, const void *, void *))NULL) || h == ((struct hash *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return -1;
  }

  do
  {
    signed int hash_for_each__1__2__e;
    hash_for_each__1__2__e=pthread_mutex_lock(&h->mutex);
    if(!(hash_for_each__1__2__e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = hash_for_each__1__2__e;
      lsd_fatal_error("hash.c", 354, "mutex_lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion h->magic == 0xDEADBEEF */
  assert(h->magic == 0xDEADBEEF);
  i = 0;
  for( ; !(i >= h->size); i = i + 1)
  {
    p = h->table[(signed long int)i];
    if(!(p == ((struct hash_node *)NULL)))
    {
      signed int return_value;
      return_value=arg_f(p->data, p->hkey, arg);
      if(return_value >= 1)
        n = n + 1;

      p = p->next;
    }

  }
  do
  {
    signed int e;
    e=pthread_mutex_unlock(&h->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = e;
      lsd_fatal_error("hash.c", 363, "mutex_unlock");
      abort();
    }

  }
  while((_Bool)0);
  return n;
}

// hash_insert
// file hash.c line 243
void * hash_insert(struct hash *h, const void *key, void *data)
{
  struct hash_node *p;
  unsigned int slot;
  if(data == NULL || key == NULL || h == ((struct hash *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return (void *)0;
  }

  do
  {
    signed int hash_insert__1__2__e;
    hash_insert__1__2__e=pthread_mutex_lock(&h->mutex);
    if(!(hash_insert__1__2__e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = hash_insert__1__2__e;
      lsd_fatal_error("hash.c", 252, "mutex_lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion h->magic == 0xDEADBEEF */
  assert(h->magic == 0xDEADBEEF);
  unsigned int return_value;
  return_value=h->key_f(key);
  slot = return_value % (unsigned int)h->size;
  p = h->table[(signed long int)slot];
  if(!(p == ((struct hash_node *)NULL)))
  {
    signed int return_value_1;
    return_value_1=h->cmp_f(p->hkey, key);
    if(return_value_1 == 0)
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = 17;
      data = (void *)0;
    }

    p = p->next;
  }

  p=hash_node_alloc();
  if(p == ((struct hash_node *)NULL))
    data=lsd_nomem_error("hash.c", 263, "hash_insert");

  else
  {
    p->hkey = key;
    p->data = data;
    p->next = h->table[(signed long int)slot];
    h->table[(signed long int)slot] = p;
    h->count = h->count + 1;
  }

end:
  ;
  signed int e;
  e=pthread_mutex_unlock(&h->mutex);
  if(!(e == 0))
  {
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    *return_value___errno_location_4 = e;
    lsd_fatal_error("hash.c", 273, "mutex_unlock");
    abort();
  }

  return data;
}

// hash_is_empty
// file hash.c line 183
signed int hash_is_empty(struct hash *h)
{
  signed int n;
  if(h == ((struct hash *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return 0;
  }

  do
  {
    signed int e;
    e=pthread_mutex_lock(&h->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = e;
      lsd_fatal_error("hash.c", 191, "mutex_lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion h->magic == 0xDEADBEEF */
  assert(h->magic == 0xDEADBEEF);
  n = h->count;
  do
  {
    signed int hash_is_empty__1__3__e;
    hash_is_empty__1__3__e=pthread_mutex_unlock(&h->mutex);
    if(!(hash_is_empty__1__3__e == 0))
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = hash_is_empty__1__3__e;
      lsd_fatal_error("hash.c", 194, "mutex_unlock");
      abort();
    }

  }
  while((_Bool)0);
  return (signed int)(n == 0);
}

// hash_key_string
// file hash.c line 373
unsigned int hash_key_string(const char *str)
{
  unsigned char *p;
  unsigned int hval = (unsigned int)0;
  const unsigned int multiplier = (const unsigned int)31;
  p = (unsigned char *)str;
  for( ; !((signed int)*p == 0); p = p + 1l)
    hval = hval + multiplier * hval + (unsigned int)*p;
  return hval;
}

// hash_node_alloc
// file hash.c line 391
static struct hash_node * hash_node_alloc(void)
{
  signed int i;
  struct hash_node *p = (struct hash_node *)(void *)0;
  /* assertion 1024 > 0 */
  assert(1024 > 0);
  do
  {
    signed int e;
    e=pthread_mutex_lock(&hash_free_lock);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = e;
      lsd_fatal_error("hash.c", 401, "mutex_lock");
      abort();
    }

  }
  while((_Bool)0);
  if(hash_free_list == ((struct hash_node *)NULL))
  {
    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)1024 * sizeof(struct hash_node) /*24ul*/ );
    hash_free_list = (struct hash_node *)return_value_malloc_2;
    if(!(hash_free_list == ((struct hash_node *)NULL)))
    {
      i = 0;
      for( ; !(i >= 1024); i = i + 1)
        (hash_free_list + (signed long int)i)->next = &hash_free_list[(signed long int)(i + 1)];
      (hash_free_list + (signed long int)i)->next = (struct hash_node *)(void *)0;
    }

  }

  if(!(hash_free_list == ((struct hash_node *)NULL)))
  {
    p = hash_free_list;
    hash_free_list = p->next;
  }

  else
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    *return_value___errno_location_3 = 12;
  }
  do
  {
    signed int hash_node_alloc__1__5__e;
    hash_node_alloc__1__5__e=pthread_mutex_unlock(&hash_free_lock);
    if(!(hash_node_alloc__1__5__e == 0))
    {
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      *return_value___errno_location_4 = hash_node_alloc__1__5__e;
      lsd_fatal_error("hash.c", 416, "mutex_unlock");
      abort();
    }

  }
  while((_Bool)0);
  return p;
}

// hash_node_free
// file hash.c line 422
static void hash_node_free(struct hash_node *node)
{
  /* assertion node != ((void *)0) */
  assert(node != (struct hash_node *)(void *)0);
  memset((void *)node, 0, sizeof(struct hash_node) /*24ul*/ );
  do
  {
    signed int e;
    e=pthread_mutex_lock(&hash_free_lock);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = e;
      lsd_fatal_error("hash.c", 428, "mutex_lock");
      abort();
    }

  }
  while((_Bool)0);
  node->next = hash_free_list;
  hash_free_list = node;
  do
  {
    signed int hash_node_free__1__2__e;
    hash_node_free__1__2__e=pthread_mutex_unlock(&hash_free_lock);
    if(!(hash_node_free__1__2__e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = hash_node_free__1__2__e;
      lsd_fatal_error("hash.c", 431, "mutex_unlock");
      abort();
    }

  }
  while((_Bool)0);
}

// hash_remove
// file hash.c line 279
void * hash_remove(struct hash *h, const void *key)
{
  struct hash_node **pp;
  struct hash_node *p;
  unsigned int slot;
  void *data = (void *)0;
  if(key == NULL || h == ((struct hash *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return (void *)0;
  }

  signed int *return_value___errno_location_2;
  return_value___errno_location_2=__errno_location();
  *return_value___errno_location_2 = 0;
  do
  {
    signed int hash_remove__1__2__e;
    hash_remove__1__2__e=pthread_mutex_lock(&h->mutex);
    if(!(hash_remove__1__2__e == 0))
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = hash_remove__1__2__e;
      lsd_fatal_error("hash.c", 291, "mutex_lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion h->magic == 0xDEADBEEF */
  assert(h->magic == 0xDEADBEEF);
  unsigned int return_value;
  return_value=h->key_f(key);
  slot = return_value % (unsigned int)h->size;
  pp = &h->table[(signed long int)slot];
  p = *pp;
  if(!(p == ((struct hash_node *)NULL)))
  {
    signed int return_value_1;
    return_value_1=h->cmp_f(p->hkey, key);
    if(return_value_1 == 0)
    {
      data = p->data;
      *pp = p->next;
      hash_node_free(p);
      h->count = h->count - 1;
    }

    else
      pp = &(*pp)->next;
  }

  signed int e;
  e=pthread_mutex_unlock(&h->mutex);
  if(!(e == 0))
  {
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    *return_value___errno_location_4 = e;
    lsd_fatal_error("hash.c", 303, "mutex_unlock");
    abort();
  }

  return data;
}

// host_prefix_end
// file hostlist.c line 473
static signed int host_prefix_end(const char *hostname)
{
  signed int idx;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(hostname);
  idx = (signed int)(return_value_strlen_1 - (unsigned long int)1);
  const unsigned short int **return_value___ctype_b_loc_2;
  for( ; idx >= 0; idx = idx - 1)
  {
    return_value___ctype_b_loc_2=__ctype_b_loc();
    if((2048 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)hostname[(signed long int)idx]]) == 0)
      break;

  }
  return idx;
}

// hostlist_coalesce
// file hostlist.c line 2011
static void hostlist_coalesce(struct hostlist *hl)
{
  signed int i;
  signed int j;
  struct hostrange_components *new;
  do
  {
    /* assertion hl != ((void *)0) */
    assert(hl != (struct hostlist *)(void *)0);
    do
    {
      signed int e;
      e=pthread_mutex_lock(&hl->mutex);
      if(!(e == 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        *return_value___errno_location_1 = e;
        lsd_fatal_error("hostlist.c", 2016, "hostlist mutex lock:");
        abort();
      }

    }
    while((_Bool)0);
    /* assertion (hl)->magic == 57005 */
    assert(hl->magic == 57005);
  }
  while((_Bool)0);
  i = hl->nranges - 1;
  signed int tmp_post_3;
  signed int tmp_post_4;
  for( ; i >= 1; i = i - 1)
  {
    new=hostrange_intersect(hl->hr[(signed long int)(i - 1)], hl->hr[(signed long int)i]);
    if(!(new == ((struct hostrange_components *)NULL)))
    {
      struct hostrange_components *hprev = hl->hr[(signed long int)(i - 1)];
      struct hostrange_components *hnext = hl->hr[(signed long int)i];
      j = i;
      if(!(new->hi >= hprev->hi))
        hnext->hi = hprev->hi;

      hprev->hi = new->lo;
      hnext->lo = new->hi;
      signed int return_value_hostrange_empty_2;
      return_value_hostrange_empty_2=hostrange_empty(hprev);
      if(!(return_value_hostrange_empty_2 == 0))
        hostlist_delete_range(hl, i);

      while(new->hi >= new->lo)
      {
        struct hostrange_components *hr;
        hr=hostrange_create(new->prefix, new->lo, new->lo, new->width);
        if(!(hprev->hi >= new->lo))
        {
          tmp_post_3 = j;
          j = j + 1;
          hostlist_insert_range(hl, hr, tmp_post_3);
        }

        if(!(new->lo >= hnext->lo))
        {
          tmp_post_4 = j;
          j = j + 1;
          hostlist_insert_range(hl, hr, tmp_post_4);
        }

        hostrange_destroy(hr);
        new->lo = new->lo + 1ul;
      }
      i = hl->nranges;
      hostrange_destroy(new);
    }

  }
  do
  {

  __CPROVER_DUMP_L11:
    ;
    signed int hostlist_coalesce__1__3__1__e;
    hostlist_coalesce__1__3__1__e=pthread_mutex_unlock(&hl->mutex);
    if(!(hostlist_coalesce__1__3__1__e == 0))
    {
      signed int *return_value___errno_location_5;
      return_value___errno_location_5=__errno_location();
      *return_value___errno_location_5 = hostlist_coalesce__1__3__1__e;
      lsd_fatal_error("hostlist.c", 2055, "hostlist mutex unlock:");
      abort();
    }

  }
  while((_Bool)0);
  hostlist_collapse(hl);
}

// hostlist_collapse
// file hostlist.c line 1989
static void hostlist_collapse(struct hostlist *hl)
{
  signed int i;
  do
  {
    /* assertion hl != ((void *)0) */
    assert(hl != (struct hostlist *)(void *)0);
    do
    {
      signed int e;
      e=pthread_mutex_lock(&hl->mutex);
      if(!(e == 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        *return_value___errno_location_1 = e;
        lsd_fatal_error("hostlist.c", 1993, "hostlist mutex lock:");
        abort();
      }

    }
    while((_Bool)0);
    /* assertion (hl)->magic == 57005 */
    assert(hl->magic == 57005);
  }
  while((_Bool)0);
  i = hl->nranges - 1;
  signed int return_value_hostrange_width_combine_2;
  for( ; i >= 1; i = i - 1)
  {
    struct hostrange_components *hprev = hl->hr[(signed long int)(i - 1)];
    struct hostrange_components *hnext = hl->hr[(signed long int)i];
    signed int return_value_hostrange_prefix_cmp_3;
    return_value_hostrange_prefix_cmp_3=hostrange_prefix_cmp(hprev, hnext);
    if(return_value_hostrange_prefix_cmp_3 == 0)
    {
      if(hprev->hi == hnext->lo + 18446744073709551615ul)
      {
        return_value_hostrange_width_combine_2=hostrange_width_combine(hprev, hnext);
        if(!(return_value_hostrange_width_combine_2 == 0))
        {
          hprev->hi = hnext->hi;
          hostlist_delete_range(hl, i);
        }

      }

    }

  }
  do
  {

  __CPROVER_DUMP_L6:
    ;
    signed int hostlist_collapse__1__3__1__e;
    hostlist_collapse__1__3__1__e=pthread_mutex_unlock(&hl->mutex);
    if(!(hostlist_collapse__1__3__1__e == 0))
    {
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      *return_value___errno_location_4 = hostlist_collapse__1__3__1__e;
      lsd_fatal_error("hostlist.c", 2005, "hostlist mutex unlock:");
      abort();
    }

  }
  while((_Bool)0);
}

// hostlist_copy
// file hostlist.c line 1570
struct hostlist * hostlist_copy(struct hostlist * const hl)
{
  signed int i;
  struct hostlist *new;
  if(hl == ((struct hostlist *)NULL))
    return (struct hostlist *)(void *)0;

  else
  {
    do
    {
      /* assertion hl != ((void *)0) */
      assert(hl != (struct hostlist *)(void *)0);
      do
      {
        signed int hostlist_copy__1__1__1__e;
        hostlist_copy__1__1__1__e=pthread_mutex_lock(&hl->mutex);
        if(!(hostlist_copy__1__1__1__e == 0))
        {
          signed int *return_value___errno_location_1;
          return_value___errno_location_1=__errno_location();
          *return_value___errno_location_1 = hostlist_copy__1__1__1__e;
          lsd_fatal_error("hostlist.c", 1578, "hostlist mutex lock:");
          abort();
        }

      }
      while((_Bool)0);
      /* assertion (hl)->magic == 57005 */
      assert(hl->magic == 57005);
    }
    while((_Bool)0);
    new=hostlist_new();
    if(!(new == ((struct hostlist *)NULL)))
    {
      new->nranges = hl->nranges;
      new->nhosts = hl->nhosts;
      if(!(new->size >= new->nranges))
        hostlist_resize(new, (unsigned long int)new->nranges);

      i = 0;
      for( ; !(i >= hl->nranges); i = i + 1)
        new->hr[(signed long int)i]=hostrange_copy(hl->hr[(signed long int)i]);
    }

    do
    {

    done:
      ;
      signed int e;
      e=pthread_mutex_unlock(&hl->mutex);
      if(!(e == 0))
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        *return_value___errno_location_2 = e;
        lsd_fatal_error("hostlist.c", 1591, "hostlist mutex unlock:");
        abort();
      }

    }
    while((_Bool)0);
    return new;
  }
}

// hostlist_count
// file hostlist.c line 1916
signed int hostlist_count(struct hostlist *hl)
{
  signed int retval;
  do
  {
    /* assertion hl != ((void *)0) */
    assert(hl != (struct hostlist *)(void *)0);
    do
    {
      signed int hostlist_count__1__1__1__e;
      hostlist_count__1__1__1__e=pthread_mutex_lock(&hl->mutex);
      if(!(hostlist_count__1__1__1__e == 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        *return_value___errno_location_1 = hostlist_count__1__1__1__e;
        lsd_fatal_error("hostlist.c", 1919, "hostlist mutex lock:");
        abort();
      }

    }
    while((_Bool)0);
    /* assertion (hl)->magic == 57005 */
    assert(hl->magic == 57005);
  }
  while((_Bool)0);
  retval = hl->nhosts;
  do
  {

  __CPROVER_DUMP_L4:
    ;
    signed int e;
    e=pthread_mutex_unlock(&hl->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = e;
      lsd_fatal_error("hostlist.c", 1921, "hostlist mutex unlock:");
      abort();
    }

  }
  while((_Bool)0);
  return retval;
}

// hostlist_create
// file ../liblsd/hostlist.h line 104
struct hostlist * hostlist_create(const char *str)
{
  struct hostlist *return_value__hostlist_create_1;
  return_value__hostlist_create_1=_hostlist_create(str, "\t, ", "-");
  return return_value__hostlist_create_1;
}

// hostlist_delete
// file hostlist.c line 1815
signed int hostlist_delete(struct hostlist *hl, const char *hosts)
{
  signed int n = 0;
  char *hostname = (char *)(void *)0;
  struct hostlist *hltmp;
  hltmp=hostlist_create(hosts);
  if(hltmp == ((struct hostlist *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 22;
    return 0;
  }

  do
  {
    hostname=hostlist_pop(hltmp);
    if(hostname == ((char *)NULL))
      break;

    signed int return_value_hostlist_delete_host_2;
    return_value_hostlist_delete_host_2=hostlist_delete_host(hl, hostname);
    n = n + return_value_hostlist_delete_host_2;
    free((void *)hostname);
  }
  while((_Bool)1);
  hostlist_destroy(hltmp);
  return n;
}

// hostlist_delete_host
// file hostlist.c line 1835
signed int hostlist_delete_host(struct hostlist *hl, const char *hostname)
{
  signed int n;
  n=hostlist_find(hl, hostname);
  if(n >= 0)
    hostlist_delete_nth(hl, n);

  return n >= 0 ? 1 : 0;
}

// hostlist_delete_nth
// file hostlist.c line 1879
signed int hostlist_delete_nth(struct hostlist *hl, signed int n)
{
  signed int i;
  signed int count;
  do
  {
    /* assertion hl != ((void *)0) */
    assert(hl != (struct hostlist *)(void *)0);
    do
    {
      signed int hostlist_delete_nth__1__1__1__e;
      hostlist_delete_nth__1__1__1__e=pthread_mutex_lock(&hl->mutex);
      if(!(hostlist_delete_nth__1__1__1__e == 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        *return_value___errno_location_1 = hostlist_delete_nth__1__1__1__e;
        lsd_fatal_error("hostlist.c", 1883, "hostlist mutex lock:");
        abort();
      }

    }
    while((_Bool)0);
    /* assertion (hl)->magic == 57005 */
    assert(hl->magic == 57005);
  }
  while((_Bool)0);
  _Bool tmp_if_expr_2;
  if(n >= 0)
    tmp_if_expr_2 = n <= hl->nhosts ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  /* assertion n >= 0 && n <= hl->nhosts */
  assert(tmp_if_expr_2);
  count = 0;
  i = 0;
  signed int return_value_hostrange_empty_4;
  for( ; !(i >= hl->nranges); i = i + 1)
  {
    signed int num_in_range;
    unsigned long int return_value_hostrange_count_3;
    return_value_hostrange_count_3=hostrange_count(hl->hr[(signed long int)i]);
    num_in_range = (signed int)return_value_hostrange_count_3;
    struct hostrange_components *hr = hl->hr[(signed long int)i];
    if(-1 + num_in_range + count >= n)
    {
      unsigned long int num = (hr->lo + (unsigned long int)n) - (unsigned long int)count;
      struct hostrange_components *new;
      if(!(hr->singlehost == 0u))
        hostlist_delete_range(hl, i);

      else
      {
        new=hostrange_delete_host(hr, num);
        if(!(new == ((struct hostrange_components *)NULL)))
        {
          hostlist_insert_range(hl, new, i + 1);
          hostrange_destroy(new);
        }

        else
        {
          return_value_hostrange_empty_4=hostrange_empty(hr);
          if(!(return_value_hostrange_empty_4 == 0))
            hostlist_delete_range(hl, i);

        }
      }
      break;
    }

    else
      count = count + num_in_range;
  }

done:
  ;
  hl->nhosts = hl->nhosts - 1;
  do
  {

  __CPROVER_DUMP_L13:
    ;
    signed int e;
    e=pthread_mutex_unlock(&hl->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_5;
      return_value___errno_location_5=__errno_location();
      *return_value___errno_location_5 = e;
      lsd_fatal_error("hostlist.c", 1912, "hostlist mutex unlock:");
      abort();
    }

  }
  while((_Bool)0);
  return 1;
}

// hostlist_delete_range
// file hostlist.c line 1234
static void hostlist_delete_range(struct hostlist *hl, signed int n)
{
  signed int i;
  struct hostrange_components *old;
  /* assertion hl != ((void *)0) */
  assert(hl != (struct hostlist *)(void *)0);
  /* assertion hl->magic == 57005 */
  assert(hl->magic == 57005);
  /* assertion n < hl->nranges && n >= 0 */
  assert(n < hl->nranges ? (n >= 0 ? (_Bool)1 : (_Bool)0) : (_Bool)0);
  old = hl->hr[(signed long int)n];
  i = n;
  for( ; !(i >= hl->nranges + -1); i = i + 1)
    hl->hr[(signed long int)i] = hl->hr[(signed long int)(i + 1)];
  hl->nranges = hl->nranges - 1;
  hl->hr[(signed long int)hl->nranges] = (struct hostrange_components *)(void *)0;
  hostlist_shift_iterators(hl, n, 0, 1);
  hostrange_destroy(old);
}

// hostlist_deranged_string
// file hostlist.c line 2104
signed long int hostlist_deranged_string(struct hostlist *hl, unsigned long int n, char *buf)
{
  signed int i;
  signed int len = 0;
  signed int truncated = 0;
  do
  {
    /* assertion hl != ((void *)0) */
    assert(hl != (struct hostlist *)(void *)0);
    do
    {
      signed int hostlist_deranged_string__1__1__1__e;
      hostlist_deranged_string__1__1__1__e=pthread_mutex_lock(&hl->mutex);
      if(!(hostlist_deranged_string__1__1__1__e == 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        *return_value___errno_location_1 = hostlist_deranged_string__1__1__1__e;
        lsd_fatal_error("hostlist.c", 2110, "hostlist mutex lock:");
        abort();
      }

    }
    while((_Bool)0);
    /* assertion (hl)->magic == 57005 */
    assert(hl->magic == 57005);
  }
  while((_Bool)0);
  i = 0;
  signed int tmp_post_3;
  for( ; !(i >= hl->nranges); i = i + 1)
  {
    unsigned long int m = n - (unsigned long int)len <= n ? n - (unsigned long int)len : (unsigned long int)0;
    signed int ret;
    unsigned long int return_value_hostrange_to_string_2;
    return_value_hostrange_to_string_2=hostrange_to_string(hl->hr[(signed long int)i], m, buf + (signed long int)len, ",");
    ret = (signed int)return_value_hostrange_to_string_2;
    if(!(ret >= 0) || !(m >= (unsigned long int)ret))
    {
      len = (signed int)n;
      truncated = 1;
      break;
    }

    len = len + ret;
    tmp_post_3 = len;
    len = len + 1;
    buf[(signed long int)tmp_post_3] = (char)44;
  }
  do
  {

  __CPROVER_DUMP_L6:
    ;
    signed int e;
    e=pthread_mutex_unlock(&hl->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      *return_value___errno_location_4 = e;
      lsd_fatal_error("hostlist.c", 2122, "hostlist mutex unlock:");
      abort();
    }

  }
  while((_Bool)0);
  signed int tmp_if_expr_5;
  if(len >= 1)
  {
    len = len - 1;
    tmp_if_expr_5 = len;
  }

  else
    tmp_if_expr_5 = 0;
  buf[(signed long int)tmp_if_expr_5] = (char)0;
  if((unsigned long int)len == n)
    truncated = 1;

  return (signed long int)(truncated != 0 ? -1 : len);
}

// hostlist_destroy
// file ../liblsd/hostlist.h line 117
void hostlist_destroy(struct hostlist *hl)
{
  signed int i;
  if(!(hl == ((struct hostlist *)NULL)))
  {
    do
    {
      /* assertion hl != ((void *)0) */
      assert(hl != (struct hostlist *)(void *)0);
      do
      {
        signed int hostlist_destroy__1__1__1__e;
        hostlist_destroy__1__1__1__e=pthread_mutex_lock(&hl->mutex);
        if(!(hostlist_destroy__1__1__1__e == 0))
        {
          signed int *return_value___errno_location_1;
          return_value___errno_location_1=__errno_location();
          *return_value___errno_location_1 = hostlist_destroy__1__1__1__e;
          lsd_fatal_error("hostlist.c", 1601, "hostlist mutex lock:");
          abort();
        }

      }
      while((_Bool)0);
      /* assertion (hl)->magic == 57005 */
      assert(hl->magic == 57005);
    }
    while((_Bool)0);
    while(!(hl->ilist == ((struct hostlist_iterator *)NULL)))
    {
      do
      {
        signed int hostlist_destroy__1__2__1__e;
        hostlist_destroy__1__2__1__e=pthread_mutex_unlock(&hl->mutex);
        if(!(hostlist_destroy__1__2__1__e == 0))
        {
          signed int *return_value___errno_location_2;
          return_value___errno_location_2=__errno_location();
          *return_value___errno_location_2 = hostlist_destroy__1__2__1__e;
          lsd_fatal_error("hostlist.c", 1603, "hostlist mutex unlock:");
          abort();
        }

      }
      while((_Bool)0);
      hostlist_iterator_destroy(hl->ilist);
      do
      {
        signed int e;
        e=pthread_mutex_lock(&hl->mutex);
        if(!(e == 0))
        {
          signed int *return_value___errno_location_3;
          return_value___errno_location_3=__errno_location();
          *return_value___errno_location_3 = e;
          lsd_fatal_error("hostlist.c", 1605, "hostlist mutex lock:");
          abort();
        }

      }
      while((_Bool)0);
    }
    i = 0;
    for( ; !(i >= hl->nranges); i = i + 1)
      hostrange_destroy(hl->hr[(signed long int)i]);
    free((void *)hl->hr);
    hl->magic = 0x1;
    /* assertion hl->magic = 0x1 */
    assert(hl->magic != 0);
    do
    {

    __CPROVER_DUMP_L12:
      ;
      signed int hostlist_destroy__1__4__1__e;
      hostlist_destroy__1__4__1__e=pthread_mutex_unlock(&hl->mutex);
      if(!(hostlist_destroy__1__4__1__e == 0))
      {
        signed int *return_value___errno_location_4;
        return_value___errno_location_4=__errno_location();
        *return_value___errno_location_4 = hostlist_destroy__1__4__1__e;
        lsd_fatal_error("hostlist.c", 1611, "hostlist mutex unlock:");
        abort();
      }

    }
    while((_Bool)0);
    do
    {
      signed int hostlist_destroy__1__5__e;
      hostlist_destroy__1__5__e=pthread_mutex_destroy(&hl->mutex);
      if(!(hostlist_destroy__1__5__e == 0))
      {
        signed int *return_value___errno_location_5;
        return_value___errno_location_5=__errno_location();
        *return_value___errno_location_5 = hostlist_destroy__1__5__e;
        lsd_fatal_error("hostlist.c", 1612, "hostlist mutex destroy:");
        abort();
      }

    }
    while((_Bool)0);
    free((void *)hl);
  }

}

// hostlist_expand
// file hostlist.c line 1130
static signed int hostlist_expand(struct hostlist *hl)
{
  signed int return_value_hostlist_resize_1;
  return_value_hostlist_resize_1=hostlist_resize(hl, (unsigned long int)(hl->size + 16));
  if(return_value_hostlist_resize_1 == 0)
    return 0;

  else
    return 1;
}

// hostlist_find
// file hostlist.c line 1925
signed int hostlist_find(struct hostlist *hl, const char *hostname)
{
  signed int i;
  signed int count;
  signed int ret = -1;
  struct hostname_components *hn;
  unsigned long int return_value_hostrange_count_2;
  if(hostname == ((const char *)NULL))
    return -1;

  else
  {
    hn=hostname_create(hostname);
    do
    {
      /* assertion hl != ((void *)0) */
      assert(hl != (struct hostlist *)(void *)0);
      do
      {
        signed int hostlist_find__1__1__1__e;
        hostlist_find__1__1__1__e=pthread_mutex_lock(&hl->mutex);
        if(!(hostlist_find__1__1__1__e == 0))
        {
          signed int *return_value___errno_location_1;
          return_value___errno_location_1=__errno_location();
          *return_value___errno_location_1 = hostlist_find__1__1__1__e;
          lsd_fatal_error("hostlist.c", 1935, "hostlist mutex lock:");
          abort();
        }

      }
      while((_Bool)0);
      /* assertion (hl)->magic == 57005 */
      assert(hl->magic == 57005);
    }
    while((_Bool)0);
    i = 0;
    count = 0;
    for( ; !(i >= hl->nranges); i = i + 1)
    {
      signed int offset;
      offset=hostrange_hn_within(hl->hr[(signed long int)i], hn);
      if(offset >= 0)
      {
        ret = count + offset;
        break;
      }

      else
      {
        return_value_hostrange_count_2=hostrange_count(hl->hr[(signed long int)i]);
        count = count + (signed int)return_value_hostrange_count_2;
      }
    }
    do
    {

    __CPROVER_DUMP_L8:
      ;
      signed int e;
      e=pthread_mutex_unlock(&hl->mutex);
      if(!(e == 0))
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        *return_value___errno_location_3 = e;
        lsd_fatal_error("hostlist.c", 1947, "hostlist mutex unlock:");
        abort();
      }

    }
    while((_Bool)0);
    hostname_destroy(hn);
    return ret;
  }
}

// hostlist_insert_range
// file hostlist.c line 1194
static signed int hostlist_insert_range(struct hostlist *hl, struct hostrange_components *hr, signed int n)
{
  signed int i;
  struct hostrange_components *tmp;
  struct hostlist_iterator *hli;
  /* assertion hl != ((void *)0) */
  assert(hl != (struct hostlist *)(void *)0);
  /* assertion hl->magic == 57005 */
  assert(hl->magic == 57005);
  /* assertion hr != ((void *)0) */
  assert(hr != (struct hostrange_components *)(void *)0);
  signed int return_value_hostlist_expand_1;
  if(!(hl->nranges >= n))
    return 0;

  else
    if(hl->size == hl->nranges)
    {
      return_value_hostlist_expand_1=hostlist_expand(hl);
      if(!(return_value_hostlist_expand_1 == 0))
        goto __CPROVER_DUMP_L2;

      return 0;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      tmp = hl->hr[(signed long int)n];
      hl->hr[(signed long int)n]=hostrange_copy(hr);
      i = n + 1;
      for( ; !(i >= 1 + hl->nranges); i = i + 1)
      {
        struct hostrange_components *last = hl->hr[(signed long int)i];
        hl->hr[(signed long int)i] = tmp;
        tmp = last;
      }
      hl->nranges = hl->nranges + 1;
      hli = hl->ilist;
      for( ; !(hli == ((struct hostlist_iterator *)NULL)); hli = hli->next)
        if(hli->idx >= n)
        {
          hli->idx = hli->idx + 1;
          hli->hr = hli->hl->hr[(signed long int)hli->idx];
        }

      return 1;
    }
}

// hostlist_iterator_create
// file ../liblsd/hostlist.h line 314
struct hostlist_iterator * hostlist_iterator_create(struct hostlist *hl)
{
  struct hostlist_iterator *i;
  i=hostlist_iterator_new();
  if(i == ((struct hostlist_iterator *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 12;
    void *return_value_lsd_nomem_error_2;
    return_value_lsd_nomem_error_2=lsd_nomem_error("hostlist.c", 2239, "hostlist_iterator_create");
    return (struct hostlist_iterator *)return_value_lsd_nomem_error_2;
  }

  do
  {
    /* assertion hl != ((void *)0) */
    assert(hl != (struct hostlist *)(void *)0);
    do
    {
      signed int e;
      e=pthread_mutex_lock(&hl->mutex);
      if(!(e == 0))
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        *return_value___errno_location_3 = e;
        lsd_fatal_error("hostlist.c", 2241, "hostlist mutex lock:");
        abort();
      }

    }
    while((_Bool)0);
    /* assertion (hl)->magic == 57005 */
    assert(hl->magic == 57005);
  }
  while((_Bool)0);
  i->hl = hl;
  i->hr = hl->hr[(signed long int)0];
  i->next = hl->ilist;
  hl->ilist = i;
  do
  {

  __CPROVER_DUMP_L5:
    ;
    signed int hostlist_iterator_create__1__3__1__e;
    hostlist_iterator_create__1__3__1__e=pthread_mutex_unlock(&hl->mutex);
    if(!(hostlist_iterator_create__1__3__1__e == 0))
    {
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      *return_value___errno_location_4 = hostlist_iterator_create__1__3__1__e;
      lsd_fatal_error("hostlist.c", 2246, "hostlist mutex unlock:");
      abort();
    }

  }
  while((_Bool)0);
  return i;
}

// hostlist_iterator_destroy
// file hostlist.c line 2265
void hostlist_iterator_destroy(struct hostlist_iterator *i)
{
  struct hostlist_iterator **pi;
  if(!(i == ((struct hostlist_iterator *)NULL)))
  {
    /* assertion i != ((void *)0) */
    assert(i != (struct hostlist_iterator *)(void *)0);
    /* assertion i->magic == 57005 */
    assert(i->magic == 57005);
    do
    {
      /* assertion i->hl != ((void *)0) */
      assert(i->hl != (struct hostlist *)(void *)0);
      do
      {
        signed int e;
        e=pthread_mutex_lock(&i->hl->mutex);
        if(!(e == 0))
        {
          signed int *return_value___errno_location_1;
          return_value___errno_location_1=__errno_location();
          *return_value___errno_location_1 = e;
          lsd_fatal_error("hostlist.c", 2272, "hostlist mutex lock:");
          abort();
        }

      }
      while((_Bool)0);
      /* assertion (i->hl)->magic == 57005 */
      assert(i->hl->magic == 57005);
    }
    while((_Bool)0);
    pi = &i->hl->ilist;
    for( ; !(*pi == ((struct hostlist_iterator *)NULL)); pi = &(*pi)->next)
    {
      /* assertion (*pi)->magic == 57005 */
      assert((*pi)->magic == 57005);
      if(*pi == i)
      {
        *pi = (*pi)->next;
        break;
      }

    }
    do
    {

    __CPROVER_DUMP_L7:
      ;
      signed int hostlist_iterator_destroy__1__3__1__e;
      hostlist_iterator_destroy__1__3__1__e=pthread_mutex_unlock(&i->hl->mutex);
      if(!(hostlist_iterator_destroy__1__3__1__e == 0))
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        *return_value___errno_location_2 = hostlist_iterator_destroy__1__3__1__e;
        lsd_fatal_error("hostlist.c", 2280, "hostlist mutex unlock:");
        abort();
      }

    }
    while((_Bool)0);
    i->magic = 0x1;
    /* assertion i->magic = 0x1 */
    assert(i->magic != 0);
    free((void *)i);
  }

}

// hostlist_iterator_new
// file hostlist.c line 2220
static struct hostlist_iterator * hostlist_iterator_new(void)
{
  struct hostlist_iterator *i;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct hostlist_iterator) /*48ul*/ );
  i = (struct hostlist_iterator *)return_value_malloc_1;
  if(i == ((struct hostlist_iterator *)NULL))
    return (struct hostlist_iterator *)(void *)0;

  else
  {
    i->hl = (struct hostlist *)(void *)0;
    i->hr = (struct hostrange_components *)(void *)0;
    i->idx = 0;
    i->depth = -1;
    i->next = i;
    i->magic = 57005;
    /* assertion i->magic = 57005 */
    assert(i->magic != 0);
    return i;
  }
}

// hostlist_iterator_reset
// file hostlist.c line 2255
void hostlist_iterator_reset(struct hostlist_iterator *i)
{
  /* assertion i != ((void *)0) */
  assert(i != (struct hostlist_iterator *)(void *)0);
  /* assertion i->magic == 57005 */
  assert(i->magic == 57005);
  i->idx = 0;
  i->hr = i->hl->hr[(signed long int)0];
  i->depth = -1;
}

// hostlist_new
// file hostlist.c line 1071
static struct hostlist * hostlist_new(void)
{
  signed int i;
  struct hostlist *new;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct hostlist) /*80ul*/ );
  new = (struct hostlist *)return_value_malloc_1;
  void *return_value_malloc_3;
  if(!(new == ((struct hostlist *)NULL)))
  {
    new->magic = 57005;
    /* assertion new->magic = 57005 */
    assert(new->magic != 0);
    do
    {
      signed int e;
      e=pthread_mutex_init(&new->mutex, (const union anonymous_6 *)(void *)0);
      if(!(e == 0))
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        *return_value___errno_location_2 = e;
        lsd_fatal_error("hostlist.c", 1079, "hostlist mutex init:");
        abort();
      }

    }
    while((_Bool)0);
    return_value_malloc_3=malloc((unsigned long int)16 * sizeof(struct hostrange_components *) /*8ul*/ );
    new->hr = (struct hostrange_components **)return_value_malloc_3;
    if(!(new->hr == ((struct hostrange_components **)NULL)))
    {
      i = 0;
      for( ; !(i >= 16); i = i + 1)
        new->hr[(signed long int)i] = (struct hostrange_components *)(void *)0;
      new->size = 16;
      new->nranges = 0;
      new->nhosts = 0;
      new->ilist = (struct hostlist_iterator *)(void *)0;
      return new;
    }


  fail2:
    ;
    free((void *)new);
  }


fail1:
  ;
  signed int *return_value___errno_location_4;
  return_value___errno_location_4=__errno_location();
  *return_value___errno_location_4 = 12;
  void *return_value_lsd_nomem_error_5;
  return_value_lsd_nomem_error_5=lsd_nomem_error("hostlist.c", 1098, "hostlist_create");
  return (struct hostlist *)return_value_lsd_nomem_error_5;
}

// hostlist_next
// file ../liblsd/hostlist.h line 342
char * hostlist_next(struct hostlist_iterator *i)
{
  char *buf = (char *)(void *)0;
  char suffix[16l];
  signed int len = 0;
  /* assertion i != ((void *)0) */
  assert(i != (struct hostlist_iterator *)(void *)0);
  /* assertion i->magic == 57005 */
  assert(i->magic == 57005);
  do
  {
    /* assertion i->hl != ((void *)0) */
    assert(i->hl != (struct hostlist *)(void *)0);
    do
    {
      signed int e;
      e=pthread_mutex_lock(&i->hl->mutex);
      if(!(e == 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        *return_value___errno_location_1 = e;
        lsd_fatal_error("hostlist.c", 2326, "hostlist mutex lock:");
        abort();
      }

    }
    while((_Bool)0);
    /* assertion (i->hl)->magic == 57005 */
    assert(i->hl->magic == 57005);
  }
  while((_Bool)0);
  _iterator_advance(i);
  if(!(i->hl->nranges + -1 >= i->idx))
  {
    do
    {

    __CPROVER_DUMP_L4:
      ;
      signed int hostlist_next__1__2__1__1__e;
      hostlist_next__1__2__1__1__e=pthread_mutex_unlock(&i->hl->mutex);
      if(!(hostlist_next__1__2__1__1__e == 0))
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        *return_value___errno_location_2 = hostlist_next__1__2__1__1__e;
        lsd_fatal_error("hostlist.c", 2330, "hostlist mutex unlock:");
        abort();
      }

    }
    while((_Bool)0);
    return (char *)(void *)0;
  }

  else
  {
    suffix[(signed long int)0] = (char)0;
    if(i->hr->singlehost == 0u)
      snprintf(suffix, (unsigned long int)15, "%0*lu", i->hr->width, i->hr->lo + (unsigned long int)i->depth);

    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(i->hr->prefix);
    unsigned long int return_value_strlen_4;
    return_value_strlen_4=strlen(suffix);
    len = (signed int)(return_value_strlen_3 + return_value_strlen_4 + (unsigned long int)1);
    void *return_value_malloc_7;
    return_value_malloc_7=malloc((unsigned long int)len);
    buf = (char *)return_value_malloc_7;
    if(buf == ((char *)NULL))
    {
      signed int *return_value___errno_location_5;
      return_value___errno_location_5=__errno_location();
      *return_value___errno_location_5 = 12;
      void *return_value_lsd_nomem_error_6;
      return_value_lsd_nomem_error_6=lsd_nomem_error("hostlist.c", 2341, "hostlist_next");
      return (char *)return_value_lsd_nomem_error_6;
    }

    buf[(signed long int)0] = (char)0;
    strcat(buf, i->hr->prefix);
    strcat(buf, suffix);
    do
    {

    __CPROVER_DUMP_L10:
      ;
      signed int hostlist_next__1__4__1__e;
      hostlist_next__1__4__1__e=pthread_mutex_unlock(&i->hl->mutex);
      if(!(hostlist_next__1__4__1__e == 0))
      {
        signed int *return_value___errno_location_8;
        return_value___errno_location_8=__errno_location();
        *return_value___errno_location_8 = hostlist_next__1__4__1__e;
        lsd_fatal_error("hostlist.c", 2347, "hostlist mutex unlock:");
        abort();
      }

    }
    while((_Bool)0);
    return buf;
  }
}

// hostlist_next_range
// file hostlist.c line 2351
char * hostlist_next_range(struct hostlist_iterator *i)
{
  char buf[1025l];
  signed int j;
  /* assertion i != ((void *)0) */
  assert(i != (struct hostlist_iterator *)(void *)0);
  /* assertion i->magic == 57005 */
  assert(i->magic == 57005);
  do
  {
    /* assertion i->hl != ((void *)0) */
    assert(i->hl != (struct hostlist *)(void *)0);
    do
    {
      signed int e;
      e=pthread_mutex_lock(&i->hl->mutex);
      if(!(e == 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        *return_value___errno_location_1 = e;
        lsd_fatal_error("hostlist.c", 2358, "hostlist mutex lock:");
        abort();
      }

    }
    while((_Bool)0);
    /* assertion (i->hl)->magic == 57005 */
    assert(i->hl->magic == 57005);
  }
  while((_Bool)0);
  _iterator_advance_range(i);
  if(!(i->hl->nranges + -1 >= i->idx))
  {
    do
    {

    __CPROVER_DUMP_L4:
      ;
      signed int hostlist_next_range__1__2__1__1__e;
      hostlist_next_range__1__2__1__1__e=pthread_mutex_unlock(&i->hl->mutex);
      if(!(hostlist_next_range__1__2__1__1__e == 0))
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        *return_value___errno_location_2 = hostlist_next_range__1__2__1__1__e;
        lsd_fatal_error("hostlist.c", 2363, "hostlist mutex unlock:");
        abort();
      }

    }
    while((_Bool)0);
    return (char *)(void *)0;
  }

  else
  {
    j = i->idx;
    _get_bracketed_list(i->hl, &j, (const unsigned long int)1024, buf);
    do
    {

    __CPROVER_DUMP_L7:
      ;
      signed int hostlist_next_range__1__3__1__e;
      hostlist_next_range__1__3__1__e=pthread_mutex_unlock(&i->hl->mutex);
      if(!(hostlist_next_range__1__3__1__e == 0))
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        *return_value___errno_location_3 = hostlist_next_range__1__3__1__e;
        lsd_fatal_error("hostlist.c", 2370, "hostlist mutex unlock:");
        abort();
      }

    }
    while((_Bool)0);
    char *return_value_strdup_4;
    return_value_strdup_4=strdup(buf);
    return return_value_strdup_4;
  }
}

// hostlist_nth
// file hostlist.c line 1856
char * hostlist_nth(struct hostlist *hl, signed int n)
{
  char *host = (char *)(void *)0;
  signed int i;
  signed int count;
  do
  {
    /* assertion hl != ((void *)0) */
    assert(hl != (struct hostlist *)(void *)0);
    do
    {
      signed int e;
      e=pthread_mutex_lock(&hl->mutex);
      if(!(e == 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        *return_value___errno_location_1 = e;
        lsd_fatal_error("hostlist.c", 1861, "hostlist mutex lock:");
        abort();
      }

    }
    while((_Bool)0);
    /* assertion (hl)->magic == 57005 */
    assert(hl->magic == 57005);
  }
  while((_Bool)0);
  count = 0;
  i = 0;
  for( ; !(i >= hl->nranges); i = i + 1)
  {
    signed int num_in_range;
    unsigned long int return_value_hostrange_count_2;
    return_value_hostrange_count_2=hostrange_count(hl->hr[(signed long int)i]);
    num_in_range = (signed int)return_value_hostrange_count_2;
    if(-1 + num_in_range + count >= n)
    {
      host=_hostrange_string(hl->hr[(signed long int)i], n - count);
      break;
    }

    else
      count = count + num_in_range;
  }
  do
  {

  __CPROVER_DUMP_L7:
    ;
    signed int hostlist_nth__1__3__1__e;
    hostlist_nth__1__3__1__e=pthread_mutex_unlock(&hl->mutex);
    if(!(hostlist_nth__1__3__1__e == 0))
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = hostlist_nth__1__3__1__e;
      lsd_fatal_error("hostlist.c", 1873, "hostlist mutex unlock:");
      abort();
    }

  }
  while((_Bool)0);
  return host;
}

// hostlist_pop
// file hostlist.c line 1676
char * hostlist_pop(struct hostlist *hl)
{
  char *host = (char *)(void *)0;
  do
  {
    /* assertion hl != ((void *)0) */
    assert(hl != (struct hostlist *)(void *)0);
    do
    {
      signed int hostlist_pop__1__1__1__e;
      hostlist_pop__1__1__1__e=pthread_mutex_lock(&hl->mutex);
      if(!(hostlist_pop__1__1__1__e == 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        *return_value___errno_location_1 = hostlist_pop__1__1__1__e;
        lsd_fatal_error("hostlist.c", 1680, "hostlist mutex lock:");
        abort();
      }

    }
    while((_Bool)0);
    /* assertion (hl)->magic == 57005 */
    assert(hl->magic == 57005);
  }
  while((_Bool)0);
  if(hl->nhosts >= 1)
  {
    struct hostrange_components *hr = hl->hr[(signed long int)(hl->nranges - 1)];
    host=hostrange_pop(hr);
    hl->nhosts = hl->nhosts - 1;
    signed int return_value_hostrange_empty_2;
    return_value_hostrange_empty_2=hostrange_empty(hr);
    if(!(return_value_hostrange_empty_2 == 0))
    {
      hl->nranges = hl->nranges - 1;
      hostrange_destroy(hl->hr[(signed long int)hl->nranges]);
      hl->hr[(signed long int)hl->nranges] = (struct hostrange_components *)(void *)0;
    }

  }

  do
  {

  __CPROVER_DUMP_L5:
    ;
    signed int e;
    e=pthread_mutex_unlock(&hl->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = e;
      lsd_fatal_error("hostlist.c", 1690, "hostlist mutex unlock:");
      abort();
    }

  }
  while((_Bool)0);
  return host;
}

// hostlist_pop_range
// file hostlist.c line 1740
char * hostlist_pop_range(struct hostlist *hl)
{
  signed int i;
  char buf[1025l];
  struct hostlist *hltmp;
  struct hostrange_components *tail;
  do
  {
    /* assertion hl != ((void *)0) */
    assert(hl != (struct hostlist *)(void *)0);
    do
    {
      signed int hostlist_pop_range__1__1__1__e;
      hostlist_pop_range__1__1__1__e=pthread_mutex_lock(&hl->mutex);
      if(!(hostlist_pop_range__1__1__1__e == 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        *return_value___errno_location_1 = hostlist_pop_range__1__1__1__e;
        lsd_fatal_error("hostlist.c", 1747, "hostlist mutex lock:");
        abort();
      }

    }
    while((_Bool)0);
    /* assertion (hl)->magic == 57005 */
    assert(hl->magic == 57005);
  }
  while((_Bool)0);
  _Bool tmp_if_expr_3;
  if(!(hl->nranges >= 1))
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    hltmp=hostlist_new();
    tmp_if_expr_3 = !(hltmp != ((struct hostlist *)NULL)) ? (_Bool)1 : (_Bool)0;
  }
  signed int return_value_hostrange_within_range_4;
  if(tmp_if_expr_3)
  {
    do
    {

    __CPROVER_DUMP_L6:
      ;
      signed int hostlist_pop_range__1__2__1__1__e;
      hostlist_pop_range__1__2__1__1__e=pthread_mutex_unlock(&hl->mutex);
      if(!(hostlist_pop_range__1__2__1__1__e == 0))
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        *return_value___errno_location_2 = hostlist_pop_range__1__2__1__1__e;
        lsd_fatal_error("hostlist.c", 1749, "hostlist mutex unlock:");
        abort();
      }

    }
    while((_Bool)0);
    return (char *)(void *)0;
  }

  else
  {
    i = hl->nranges - 2;
    tail = hl->hr[(signed long int)(hl->nranges - 1)];
    for( ; i >= 0; i = i - 1)
    {
      return_value_hostrange_within_range_4=hostrange_within_range(tail, hl->hr[(signed long int)i]);
      if(return_value_hostrange_within_range_4 == 0)
        break;

    }
    i = i + 1;
    for( ; !(i >= hl->nranges); i = i + 1)
    {
      hostlist_push_range(hltmp, hl->hr[(signed long int)i]);
      hostrange_destroy(hl->hr[(signed long int)i]);
      hl->hr[(signed long int)i] = (struct hostrange_components *)(void *)0;
    }
    hl->nhosts = hl->nhosts - hltmp->nhosts;
    hl->nranges = hl->nranges - hltmp->nranges;
    do
    {

    __CPROVER_DUMP_L13:
      ;
      signed int e;
      e=pthread_mutex_unlock(&hl->mutex);
      if(!(e == 0))
      {
        signed int *return_value___errno_location_5;
        return_value___errno_location_5=__errno_location();
        *return_value___errno_location_5 = e;
        lsd_fatal_error("hostlist.c", 1766, "hostlist mutex unlock:");
        abort();
      }

    }
    while((_Bool)0);
    hostlist_ranged_string(hltmp, (unsigned long int)1024, buf);
    hostlist_destroy(hltmp);
    char *return_value_strdup_6;
    return_value_strdup_6=strdup(buf);
    return return_value_strdup_6;
  }
}

// hostlist_push
// file hostlist.c line 1617
signed int hostlist_push(struct hostlist *hl, const char *hosts)
{
  struct hostlist *new;
  signed int retval;
  if(hosts == ((const char *)NULL))
    return 0;

  else
  {
    new=hostlist_create(hosts);
    if(new == ((struct hostlist *)NULL))
      return 0;

    else
    {
      do
      {
        signed int hostlist_push__1__1__e;
        hostlist_push__1__1__e=pthread_mutex_lock(&new->mutex);
        if(!(hostlist_push__1__1__e == 0))
        {
          signed int *return_value___errno_location_1;
          return_value___errno_location_1=__errno_location();
          *return_value___errno_location_1 = hostlist_push__1__1__e;
          lsd_fatal_error("hostlist.c", 1626, "hostlist mutex lock:");
          abort();
        }

      }
      while((_Bool)0);
      retval = new->nhosts;
      do
      {
        signed int e;
        e=pthread_mutex_unlock(&new->mutex);
        if(!(e == 0))
        {
          signed int *return_value___errno_location_2;
          return_value___errno_location_2=__errno_location();
          *return_value___errno_location_2 = e;
          lsd_fatal_error("hostlist.c", 1628, "hostlist mutex unlock:");
          abort();
        }

      }
      while((_Bool)0);
      hostlist_push_list(hl, new);
      hostlist_destroy(new);
      return retval;
    }
  }
}

// hostlist_push_host
// file hostlist.c line 1634
signed int hostlist_push_host(struct hostlist *hl, const char *str)
{
  struct hostrange_components *hr;
  struct hostname_components *hn;
  if(str == ((const char *)NULL))
    return 0;

  else
  {
    hn=hostname_create(str);
    signed int return_value_hostname_suffix_is_valid_2;
    return_value_hostname_suffix_is_valid_2=hostname_suffix_is_valid(hn);
    if(!(return_value_hostname_suffix_is_valid_2 == 0))
    {
      signed int return_value_hostname_suffix_width_1;
      return_value_hostname_suffix_width_1=hostname_suffix_width(hn);
      hr=hostrange_create(hn->prefix, hn->num, hn->num, return_value_hostname_suffix_width_1);
    }

    else
      hr=hostrange_create_single(str);
    hostlist_push_range(hl, hr);
    hostrange_destroy(hr);
    hostname_destroy(hn);
    return 1;
  }
}

// hostlist_push_hr
// file hostlist.c line 1182
static signed int hostlist_push_hr(struct hostlist *hl, char *prefix, unsigned long int lo, unsigned long int hi, signed int width)
{
  struct hostrange_components *hr;
  hr=hostrange_create(prefix, lo, hi, width);
  signed int retval;
  retval=hostlist_push_range(hl, hr);
  hostrange_destroy(hr);
  return retval;
}

// hostlist_push_list
// file hostlist.c line 1658
signed int hostlist_push_list(struct hostlist *h1, struct hostlist *h2)
{
  signed int i;
  signed int n = 0;
  signed int return_value_hostlist_push_range_2;
  if(h2 == ((struct hostlist *)NULL))
    return 0;

  else
  {
    do
    {
      /* assertion h2 != ((void *)0) */
      assert(h2 != (struct hostlist *)(void *)0);
      do
      {
        signed int e;
        e=pthread_mutex_lock(&h2->mutex);
        if(!(e == 0))
        {
          signed int *return_value___errno_location_1;
          return_value___errno_location_1=__errno_location();
          *return_value___errno_location_1 = e;
          lsd_fatal_error("hostlist.c", 1665, "hostlist mutex lock:");
          abort();
        }

      }
      while((_Bool)0);
      /* assertion (h2)->magic == 57005 */
      assert(h2->magic == 57005);
    }
    while((_Bool)0);
    i = 0;
    for( ; !(i >= h2->nranges); i = i + 1)
    {
      return_value_hostlist_push_range_2=hostlist_push_range(h1, h2->hr[(signed long int)i]);
      n = n + return_value_hostlist_push_range_2;
    }
    do
    {

    __CPROVER_DUMP_L6:
      ;
      signed int hostlist_push_list__1__3__1__e;
      hostlist_push_list__1__3__1__e=pthread_mutex_unlock(&h2->mutex);
      if(!(hostlist_push_list__1__3__1__e == 0))
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        *return_value___errno_location_3 = hostlist_push_list__1__3__1__e;
        lsd_fatal_error("hostlist.c", 1670, "hostlist mutex unlock:");
        abort();
      }

    }
    while((_Bool)0);
    return n;
  }
}

// hostlist_push_range
// file hostlist.c line 1142
static signed int hostlist_push_range(struct hostlist *hl, struct hostrange_components *hr)
{
  struct hostrange_components *tail;
  signed int retval;
  /* assertion hr != ((void *)0) */
  assert(hr != (struct hostrange_components *)(void *)0);
  do
  {
    /* assertion hl != ((void *)0) */
    assert(hl != (struct hostlist *)(void *)0);
    do
    {
      signed int e;
      e=pthread_mutex_lock(&hl->mutex);
      if(!(e == 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        *return_value___errno_location_1 = e;
        lsd_fatal_error("hostlist.c", 1148, "hostlist mutex lock:");
        abort();
      }

    }
    while((_Bool)0);
    /* assertion (hl)->magic == 57005 */
    assert(hl->magic == 57005);
  }
  while((_Bool)0);
  struct hostrange_components *tmp_if_expr_2;
  if(hl->nranges >= 1)
    tmp_if_expr_2 = hl->hr[(signed long int)(hl->nranges - 1)];

  else
    tmp_if_expr_2 = hl->hr[(signed long int)0];
  tail = tmp_if_expr_2;
  signed int return_value_hostlist_expand_3;
  if(hl->size == hl->nranges)
  {
    return_value_hostlist_expand_3=hostlist_expand(hl);
    if(return_value_hostlist_expand_3 == 0)
      goto error;

  }

  _Bool tmp_if_expr_6;
  signed int return_value_hostrange_prefix_cmp_5;
  if(hl->nranges >= 1)
  {
    return_value_hostrange_prefix_cmp_5=hostrange_prefix_cmp(tail, hr);
    tmp_if_expr_6 = return_value_hostrange_prefix_cmp_5 == 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_6 = (_Bool)0;
  _Bool tmp_if_expr_7;
  if(tmp_if_expr_6)
    tmp_if_expr_7 = tail->hi == hr->lo - (unsigned long int)1 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_7 = (_Bool)0;
  _Bool tmp_if_expr_9;
  signed int return_value_hostrange_width_combine_8;
  if(tmp_if_expr_7)
  {
    return_value_hostrange_width_combine_8=hostrange_width_combine(tail, hr);
    tmp_if_expr_9 = return_value_hostrange_width_combine_8 != 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_9 = (_Bool)0;
  signed int tmp_post_4;
  if(tmp_if_expr_9)
    tail->hi = hr->hi;

  else
  {
    tmp_post_4 = hl->nranges;
    hl->nranges = hl->nranges + 1;
    hl->hr[(signed long int)tmp_post_4]=hostrange_copy(hr);
    if(hl->hr[(signed long int)tmp_post_4] == ((struct hostrange_components *)NULL))
      goto error;

  }
  unsigned long int return_value_hostrange_count_10;
  return_value_hostrange_count_10=hostrange_count(hr);
  hl->nhosts = hl->nhosts + (signed int)return_value_hostrange_count_10;
  retval = hl->nhosts;
  do
  {

  __CPROVER_DUMP_L15:
    ;
    signed int hostlist_push_range__1__4__1__e;
    hostlist_push_range__1__4__1__e=pthread_mutex_unlock(&hl->mutex);
    if(!(hostlist_push_range__1__4__1__e == 0))
    {
      signed int *return_value___errno_location_11;
      return_value___errno_location_11=__errno_location();
      *return_value___errno_location_11 = hostlist_push_range__1__4__1__e;
      lsd_fatal_error("hostlist.c", 1167, "hostlist mutex unlock:");
      abort();
    }

  }
  while((_Bool)0);
  return retval;
  do
  {

  error:
    ;
    signed int hostlist_push_range__1__5__1__e;
    hostlist_push_range__1__5__1__e=pthread_mutex_unlock(&hl->mutex);
    if(!(hostlist_push_range__1__5__1__e == 0))
    {
      signed int *return_value___errno_location_12;
      return_value___errno_location_12=__errno_location();
      *return_value___errno_location_12 = hostlist_push_range__1__5__1__e;
      lsd_fatal_error("hostlist.c", 1172, "hostlist mutex unlock:");
      abort();
    }

  }
  while((_Bool)0);
  return -1;
}

// hostlist_ranged_string
// file hostlist.c line 2193
signed long int hostlist_ranged_string(struct hostlist *hl, unsigned long int n, char *buf)
{
  signed int i = 0;
  signed int len = 0;
  signed int truncated = 0;
  do
  {
    /* assertion hl != ((void *)0) */
    assert(hl != (struct hostlist *)(void *)0);
    do
    {
      signed int hostlist_ranged_string__1__1__1__e;
      hostlist_ranged_string__1__1__1__e=pthread_mutex_lock(&hl->mutex);
      if(!(hostlist_ranged_string__1__1__1__e == 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        *return_value___errno_location_1 = hostlist_ranged_string__1__1__1__e;
        lsd_fatal_error("hostlist.c", 2199, "hostlist mutex lock:");
        abort();
      }

    }
    while((_Bool)0);
    /* assertion (hl)->magic == 57005 */
    assert(hl->magic == 57005);
  }
  while((_Bool)0);
  signed int tmp_post_3;
  while(!(i >= hl->nranges))
  {
    if((unsigned long int)len >= n)
      break;

    signed int return_value__get_bracketed_list_2;
    return_value__get_bracketed_list_2=_get_bracketed_list(hl, &i, n - (unsigned long int)len, buf + (signed long int)len);
    len = len + return_value__get_bracketed_list_2;
    if(len >= 1 && !((unsigned long int)len >= n))
    {
      if(!(i >= hl->nranges))
      {
        tmp_post_3 = len;
        len = len + 1;
        buf[(signed long int)tmp_post_3] = (char)44;
      }

    }

  }
  do
  {

  __CPROVER_DUMP_L6:
    ;
    signed int e;
    e=pthread_mutex_unlock(&hl->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      *return_value___errno_location_4 = e;
      lsd_fatal_error("hostlist.c", 2205, "hostlist mutex unlock:");
      abort();
    }

  }
  while((_Bool)0);
  if((unsigned long int)len >= n)
  {
    truncated = 1;
    if(n >= 1ul)
      buf[(signed long int)(n - (unsigned long int)1)] = (char)0;

  }

  else
    buf[(signed long int)(len > 0 ? len : 0)] = (char)0;
  return (signed long int)(truncated != 0 ? -1 : len);
}

// hostlist_remove
// file hostlist.c line 2375
signed int hostlist_remove(struct hostlist_iterator *i)
{
  struct hostrange_components *new;
  /* assertion i != ((void *)0) */
  assert(i != (struct hostlist_iterator *)(void *)0);
  /* assertion i->magic == 57005 */
  assert(i->magic == 57005);
  do
  {
    /* assertion i->hl != ((void *)0) */
    assert(i->hl != (struct hostlist *)(void *)0);
    do
    {
      signed int e;
      e=pthread_mutex_lock(&i->hl->mutex);
      if(!(e == 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        *return_value___errno_location_1 = e;
        lsd_fatal_error("hostlist.c", 2380, "hostlist mutex lock:");
        abort();
      }

    }
    while((_Bool)0);
    /* assertion (i->hl)->magic == 57005 */
    assert(i->hl->magic == 57005);
  }
  while((_Bool)0);
  new=hostrange_delete_host(i->hr, i->hr->lo + (unsigned long int)i->depth);
  signed int return_value_hostrange_empty_2;
  if(!(new == ((struct hostrange_components *)NULL)))
  {
    hostlist_insert_range(i->hl, new, i->idx + 1);
    hostrange_destroy(new);
    i->idx = i->idx + 1;
    i->hr = i->hl->hr[(signed long int)i->idx];
    i->depth = -1;
  }

  else
  {
    return_value_hostrange_empty_2=hostrange_empty(i->hr);
    if(!(return_value_hostrange_empty_2 == 0))
      hostlist_delete_range(i->hl, i->idx);

    else
      i->depth = i->depth - 1;
  }
  i->hl->nhosts = i->hl->nhosts - 1;
  do
  {

  __CPROVER_DUMP_L7:
    ;
    signed int hostlist_remove__1__4__1__e;
    hostlist_remove__1__4__1__e=pthread_mutex_unlock(&i->hl->mutex);
    if(!(hostlist_remove__1__4__1__e == 0))
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = hostlist_remove__1__4__1__e;
      lsd_fatal_error("hostlist.c", 2393, "hostlist mutex unlock:");
      abort();
    }

  }
  while((_Bool)0);
  return 1;
}

// hostlist_resize
// file hostlist.c line 1109
static signed int hostlist_resize(struct hostlist *hl, unsigned long int newsize)
{
  signed int i;
  unsigned long int oldsize;
  /* assertion hl != ((void *)0) */
  assert(hl != (struct hostlist *)(void *)0);
  /* assertion hl->magic == 57005 */
  assert(hl->magic == 57005);
  oldsize = (unsigned long int)hl->size;
  hl->size = (signed int)newsize;
  void *return_value_realloc_1;
  return_value_realloc_1=realloc((void *)hl->hr, (unsigned long int)hl->size * sizeof(struct hostrange_components *) /*8ul*/ );
  hl->hr = (struct hostrange_components **)return_value_realloc_1;
  if(hl->hr == ((struct hostrange_components **)NULL))
    return 0;

  else
  {
    i = (signed int)oldsize;
    for( ; !((unsigned long int)i >= newsize); i = i + 1)
      hl->hr[(signed long int)i] = (struct hostrange_components *)(void *)0;
    return 1;
  }
}

// hostlist_shift
// file hostlist.c line 1715
char * hostlist_shift(struct hostlist *hl)
{
  char *host = (char *)(void *)0;
  do
  {
    /* assertion hl != ((void *)0) */
    assert(hl != (struct hostlist *)(void *)0);
    do
    {
      signed int e;
      e=pthread_mutex_lock(&hl->mutex);
      if(!(e == 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        *return_value___errno_location_1 = e;
        lsd_fatal_error("hostlist.c", 1719, "hostlist mutex lock:");
        abort();
      }

    }
    while((_Bool)0);
    /* assertion (hl)->magic == 57005 */
    assert(hl->magic == 57005);
  }
  while((_Bool)0);
  if(hl->nhosts >= 1)
  {
    struct hostrange_components *hr = hl->hr[(signed long int)0];
    host=hostrange_shift(hr);
    hl->nhosts = hl->nhosts - 1;
    signed int return_value_hostrange_empty_2;
    return_value_hostrange_empty_2=hostrange_empty(hr);
    if(!(return_value_hostrange_empty_2 == 0))
      hostlist_delete_range(hl, 0);

    else
      hostlist_shift_iterators(hl, 0, 0, 0);
  }

  do
  {

  __CPROVER_DUMP_L6:
    ;
    signed int hostlist_shift__1__3__1__e;
    hostlist_shift__1__3__1__e=pthread_mutex_unlock(&hl->mutex);
    if(!(hostlist_shift__1__3__1__e == 0))
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = hostlist_shift__1__3__1__e;
      lsd_fatal_error("hostlist.c", 1734, "hostlist mutex unlock:");
      abort();
    }

  }
  while((_Bool)0);
  return host;
}

// hostlist_shift_iterators
// file hostlist.c line 1697
static void hostlist_shift_iterators(struct hostlist *hl, signed int idx, signed int depth, signed int n)
{
  struct hostlist_iterator *i = hl->ilist;
  signed int tmp_if_expr_1;
  for( ; !(i == ((struct hostlist_iterator *)NULL)); i = i->next)
    if(n == 0)
    {
      if(i->idx == idx)
      {
        if(i->depth >= depth)
        {
          if(i->depth >= 0)
            tmp_if_expr_1 = i->depth - 1;

          else
            tmp_if_expr_1 = -1;
          i->depth = tmp_if_expr_1;
        }

      }

    }

    else
      if(i->idx >= idx)
      {
        i->idx = i->idx - n;
        if(i->idx >= 0)
          i->hr = i->hl->hr[(signed long int)i->idx];

        else
          hostlist_iterator_reset(i);
      }

}

// hostlist_shift_range
// file hostlist.c line 1773
char * hostlist_shift_range(struct hostlist *hl)
{
  signed int i;
  char buf[1024l];
  struct hostlist *hltmp;
  hltmp=hostlist_new();
  _Bool tmp_if_expr_4;
  signed int return_value_hostrange_within_range_3;
  if(hltmp == ((struct hostlist *)NULL))
    return (char *)(void *)0;

  else
  {
    do
    {
      /* assertion hl != ((void *)0) */
      assert(hl != (struct hostlist *)(void *)0);
      do
      {
        signed int e;
        e=pthread_mutex_lock(&hl->mutex);
        if(!(e == 0))
        {
          signed int *return_value___errno_location_1;
          return_value___errno_location_1=__errno_location();
          *return_value___errno_location_1 = e;
          lsd_fatal_error("hostlist.c", 1781, "hostlist mutex lock:");
          abort();
        }

      }
      while((_Bool)0);
      /* assertion (hl)->magic == 57005 */
      assert(hl->magic == 57005);
    }
    while((_Bool)0);
    if(hl->nranges == 0)
    {
      hostlist_destroy(hltmp);
      do
      {

      __CPROVER_DUMP_L4:
        ;
        signed int hostlist_shift_range__1__2__1__1__e;
        hostlist_shift_range__1__2__1__1__e=pthread_mutex_unlock(&hl->mutex);
        if(!(hostlist_shift_range__1__2__1__1__e == 0))
        {
          signed int *return_value___errno_location_2;
          return_value___errno_location_2=__errno_location();
          *return_value___errno_location_2 = hostlist_shift_range__1__2__1__1__e;
          lsd_fatal_error("hostlist.c", 1785, "hostlist mutex unlock:");
          abort();
        }

      }
      while((_Bool)0);
      return (char *)(void *)0;
    }

    else
    {
      i = 0;
      do
      {
        hostlist_push_range(hltmp, hl->hr[(signed long int)i]);
        hostrange_destroy(hl->hr[(signed long int)i]);
        i = i + 1;
        if(!(i >= hl->nranges))
        {
          return_value_hostrange_within_range_3=hostrange_within_range(hltmp->hr[(signed long int)0], hl->hr[(signed long int)i]);
          tmp_if_expr_4 = return_value_hostrange_within_range_3 != 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_4 = (_Bool)0;
      }
      while(tmp_if_expr_4);
      hostlist_shift_iterators(hl, i, 0, hltmp->nranges);
      for( ; !(i >= hl->nranges); i = i + 1)
      {
        hl->hr[(signed long int)(i - hltmp->nranges)] = hl->hr[(signed long int)i];
        hl->hr[(signed long int)i] = (struct hostrange_components *)(void *)0;
      }
      hl->nhosts = hl->nhosts - hltmp->nhosts;
      hl->nranges = hl->nranges - hltmp->nranges;
      do
      {

      __CPROVER_DUMP_L12:
        ;
        signed int hostlist_shift_range__1__5__1__e;
        hostlist_shift_range__1__5__1__e=pthread_mutex_unlock(&hl->mutex);
        if(!(hostlist_shift_range__1__5__1__e == 0))
        {
          signed int *return_value___errno_location_5;
          return_value___errno_location_5=__errno_location();
          *return_value___errno_location_5 = hostlist_shift_range__1__5__1__e;
          lsd_fatal_error("hostlist.c", 1806, "hostlist mutex unlock:");
          abort();
        }

      }
      while((_Bool)0);
      hostlist_ranged_string(hltmp, (unsigned long int)1024, buf);
      hostlist_destroy(hltmp);
      char *return_value_strdup_6;
      return_value_strdup_6=strdup(buf);
      return return_value_strdup_6;
    }
  }
}

// hostlist_sort
// file hostlist.c line 1963
void hostlist_sort(struct hostlist *hl)
{
  struct hostlist_iterator *i;
  do
  {
    /* assertion hl != ((void *)0) */
    assert(hl != (struct hostlist *)(void *)0);
    do
    {
      signed int hostlist_sort__1__1__1__e;
      hostlist_sort__1__1__1__e=pthread_mutex_lock(&hl->mutex);
      if(!(hostlist_sort__1__1__1__e == 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        *return_value___errno_location_1 = hostlist_sort__1__1__1__e;
        lsd_fatal_error("hostlist.c", 1966, "hostlist mutex lock:");
        abort();
      }

    }
    while((_Bool)0);
    /* assertion (hl)->magic == 57005 */
    assert(hl->magic == 57005);
  }
  while((_Bool)0);
  if(!(hl->nranges >= 2))
    do
    {

    __CPROVER_DUMP_L4:
      ;
      signed int e;
      e=pthread_mutex_unlock(&hl->mutex);
      if(!(e == 0))
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        *return_value___errno_location_2 = e;
        lsd_fatal_error("hostlist.c", 1969, "hostlist mutex unlock:");
        abort();
      }

    }
    while((_Bool)0);

  else
  {
    qsort((void *)hl->hr, (unsigned long int)hl->nranges, sizeof(struct hostrange_components *) /*8ul*/ , _cmp);
    i = hl->ilist;
    for( ; !(i == ((struct hostlist_iterator *)NULL)); i = i->next)
      hostlist_iterator_reset(i);
    do
    {

    __CPROVER_DUMP_L8:
      ;
      signed int hostlist_sort__1__4__1__e;
      hostlist_sort__1__4__1__e=pthread_mutex_unlock(&hl->mutex);
      if(!(hostlist_sort__1__4__1__e == 0))
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        *return_value___errno_location_3 = hostlist_sort__1__4__1__e;
        lsd_fatal_error("hostlist.c", 1979, "hostlist mutex unlock:");
        abort();
      }

    }
    while((_Bool)0);
    hostlist_coalesce(hl);
  }
}

// hostlist_uniq
// file hostlist.c line 2080
void hostlist_uniq(struct hostlist *hl)
{
  signed int i = 1;
  struct hostlist_iterator *hli;
  do
  {
    /* assertion hl != ((void *)0) */
    assert(hl != (struct hostlist *)(void *)0);
    do
    {
      signed int hostlist_uniq__1__1__1__e;
      hostlist_uniq__1__1__1__e=pthread_mutex_lock(&hl->mutex);
      if(!(hostlist_uniq__1__1__1__e == 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        *return_value___errno_location_1 = hostlist_uniq__1__1__1__e;
        lsd_fatal_error("hostlist.c", 2084, "hostlist mutex lock:");
        abort();
      }

    }
    while((_Bool)0);
    /* assertion (hl)->magic == 57005 */
    assert(hl->magic == 57005);
  }
  while((_Bool)0);
  if(!(hl->nranges >= 2))
    do
    {

    __CPROVER_DUMP_L4:
      ;
      signed int hostlist_uniq__1__2__1__1__e;
      hostlist_uniq__1__2__1__1__e=pthread_mutex_unlock(&hl->mutex);
      if(!(hostlist_uniq__1__2__1__1__e == 0))
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        *return_value___errno_location_2 = hostlist_uniq__1__2__1__1__e;
        lsd_fatal_error("hostlist.c", 2086, "hostlist mutex unlock:");
        abort();
      }

    }
    while((_Bool)0);

  else
  {
    qsort((void *)hl->hr, (unsigned long int)hl->nranges, sizeof(struct hostrange_components *) /*8ul*/ , _cmp);
    while(!(i >= hl->nranges))
    {
      signed int return_value__attempt_range_join_3;
      return_value__attempt_range_join_3=_attempt_range_join(hl, i);
      if(!(return_value__attempt_range_join_3 >= 0))
        i = i + 1;

    }
    hli = hl->ilist;
    for( ; !(hli == ((struct hostlist_iterator *)NULL)); hli = hli->next)
      hostlist_iterator_reset(hli);
    do
    {

    __CPROVER_DUMP_L11:
      ;
      signed int e;
      e=pthread_mutex_unlock(&hl->mutex);
      if(!(e == 0))
      {
        signed int *return_value___errno_location_4;
        return_value___errno_location_4=__errno_location();
        *return_value___errno_location_4 = e;
        lsd_fatal_error("hostlist.c", 2100, "hostlist mutex unlock:");
        abort();
      }

    }
    while((_Bool)0);
  }
}

// hostname_create
// file hostlist.c line 535
static struct hostname_components * hostname_create(const char *hostname)
{
  signed int idx;
  idx=host_prefix_end(hostname);
  struct hostname_components *return_value_hostname_create_with_suffix_1;
  return_value_hostname_create_with_suffix_1=hostname_create_with_suffix(hostname, idx);
  return return_value_hostname_create_with_suffix_1;
}

// hostname_create_with_suffix
// file hostlist.c line 482
static struct hostname_components * hostname_create_with_suffix(const char *hostname, signed int idx)
{
  struct hostname_components *hn = (struct hostname_components *)(void *)0;
  char *p = ((char *)NULL);
  /* assertion hostname != ((void *)0) */
  assert(hostname != (const char *)(void *)0);
  void *return_value_malloc_3;
  return_value_malloc_3=malloc(sizeof(struct hostname_components) /*32ul*/ );
  hn = (struct hostname_components *)return_value_malloc_3;
  if(hn == ((struct hostname_components *)NULL))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 12;
    void *return_value_lsd_nomem_error_2;
    return_value_lsd_nomem_error_2=lsd_nomem_error("hostlist.c", 490, "hostname create");
    return (struct hostname_components *)return_value_lsd_nomem_error_2;
  }

  hn->hostname=strdup(hostname);
  if(hn->hostname == ((char *)NULL))
  {
    free((void *)hn);
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    *return_value___errno_location_4 = 12;
    void *return_value_lsd_nomem_error_5;
    return_value_lsd_nomem_error_5=lsd_nomem_error("hostlist.c", 494, "hostname create");
    return (struct hostname_components *)return_value_lsd_nomem_error_5;
  }

  hn->num = (unsigned long int)0;
  hn->prefix = (char *)(void *)0;
  hn->suffix = (char *)(void *)0;
  unsigned long int return_value_strlen_8;
  return_value_strlen_8=strlen(hostname);
  _Bool tmp_if_expr_14;
  if((unsigned long int)idx == return_value_strlen_8 + 18446744073709551615ul)
  {
    hn->prefix=strdup(hostname);
    if(hn->prefix == ((char *)NULL))
    {
      hostname_destroy(hn);
      signed int *return_value___errno_location_6;
      return_value___errno_location_6=__errno_location();
      *return_value___errno_location_6 = 12;
      void *return_value_lsd_nomem_error_7;
      return_value_lsd_nomem_error_7=lsd_nomem_error("hostlist.c", 504, "hostname prefix create");
      return (struct hostname_components *)return_value_lsd_nomem_error_7;
    }

    return hn;
  }

  else
  {
    hn->suffix = hn->hostname + (signed long int)idx + (signed long int)1;
    hn->num=strtoul(hn->suffix, &p, 10);
    if((signed int)*p == 0)
      tmp_if_expr_14 = hn->num <= (unsigned long int)(1 << 25) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_14 = (_Bool)0;
    if(tmp_if_expr_14)
    {
      void *return_value_malloc_11;
      return_value_malloc_11=malloc((unsigned long int)(idx + 2) * sizeof(char) /*1ul*/ );
      hn->prefix = (char *)return_value_malloc_11;
      if(hn->prefix == ((char *)NULL))
      {
        hostname_destroy(hn);
        signed int *return_value___errno_location_9;
        return_value___errno_location_9=__errno_location();
        *return_value___errno_location_9 = 12;
        void *return_value_lsd_nomem_error_10;
        return_value_lsd_nomem_error_10=lsd_nomem_error("hostlist.c", 515, "hostname prefix create");
        return (struct hostname_components *)return_value_lsd_nomem_error_10;
      }

      memcpy((void *)hn->prefix, (const void *)hostname, (unsigned long int)(idx + 1));
      hn->prefix[(signed long int)(idx + 1)] = (char)0;
    }

    else
    {
      hn->prefix=strdup(hostname);
      if(hn->prefix == ((char *)NULL))
      {
        hostname_destroy(hn);
        signed int *return_value___errno_location_12;
        return_value___errno_location_12=__errno_location();
        *return_value___errno_location_12 = 12;
        void *return_value_lsd_nomem_error_13;
        return_value_lsd_nomem_error_13=lsd_nomem_error("hostlist.c", 522, "hostname prefix create");
        return (struct hostname_components *)return_value_lsd_nomem_error_13;
      }

      hn->suffix = (char *)(void *)0;
    }
    return hn;
  }
}

// hostname_destroy
// file hostlist.c line 543
static void hostname_destroy(struct hostname_components *hn)
{
  if(!(hn == ((struct hostname_components *)NULL)))
  {
    hn->suffix = (char *)(void *)0;
    if(!(hn->hostname == ((char *)NULL)))
      free((void *)hn->hostname);

    if(!(hn->prefix == ((char *)NULL)))
      free((void *)hn->prefix);

    free((void *)hn);
  }

}

// hostname_suffix_is_valid
// file hostlist.c line 557
static signed int hostname_suffix_is_valid(struct hostname_components *hn)
{
  return (signed int)(hn->suffix != (char *)(void *)0);
}

// hostname_suffix_width
// file hostlist.c line 564
static signed int hostname_suffix_width(struct hostname_components *hn)
{
  /* assertion hn->suffix != ((void *)0) */
  assert(hn->suffix != (char *)(void *)0);
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(hn->suffix);
  return (signed int)return_value_strlen_1;
}

// hostrange_cmp
// file hostlist.c line 712
static signed int hostrange_cmp(struct hostrange_components *h1, struct hostrange_components *h2)
{
  signed int retval;
  /* assertion h1 != ((void *)0) */
  assert(h1 != (struct hostrange_components *)(void *)0);
  /* assertion h2 != ((void *)0) */
  assert(h2 != (struct hostrange_components *)(void *)0);
  retval=hostrange_prefix_cmp(h1, h2);
  signed int return_value_hostrange_width_combine_1;
  unsigned long int tmp_if_expr_2;
  if(retval == 0)
  {
    return_value_hostrange_width_combine_1=hostrange_width_combine(h1, h2);
    if(!(return_value_hostrange_width_combine_1 == 0))
      tmp_if_expr_2 = h1->lo - h2->lo;

    else
      tmp_if_expr_2 = (unsigned long int)(h1->width - h2->width);
    retval = (signed int)tmp_if_expr_2;
  }

  return retval;
}

// hostrange_copy
// file hostlist.c line 655
static struct hostrange_components * hostrange_copy(struct hostrange_components *hr)
{
  /* assertion hr != ((void *)0) */
  assert(hr != (struct hostrange_components *)(void *)0);
  struct hostrange_components *return_value_hostrange_create_single_1;
  struct hostrange_components *return_value_hostrange_create_2;
  if(!(hr->singlehost == 0u))
  {
    return_value_hostrange_create_single_1=hostrange_create_single(hr->prefix);
    return return_value_hostrange_create_single_1;
  }

  else
  {
    return_value_hostrange_create_2=hostrange_create(hr->prefix, hr->lo, hr->hi, hr->width);
    return return_value_hostrange_create_2;
  }
}

// hostrange_count
// file hostlist.c line 644
static unsigned long int hostrange_count(struct hostrange_components *hr)
{
  /* assertion hr != ((void *)0) */
  assert(hr != (struct hostrange_components *)(void *)0);
  if(!(hr->singlehost == 0u))
    return (unsigned long int)1;

  else
    return (hr->hi - hr->lo) + (unsigned long int)1;
}

// hostrange_create
// file hostlist.c line 615
static struct hostrange_components * hostrange_create(char *prefix, unsigned long int lo, unsigned long int hi, signed int width)
{
  struct hostrange_components *new;
  /* assertion prefix != ((void *)0) */
  assert(prefix != (char *)(void *)0);
  new=hostrange_new();
  if(!(new == ((struct hostrange_components *)NULL)))
  {
    new->prefix=strdup(prefix);
    if(!(new->prefix == ((char *)NULL)))
    {
      new->lo = lo;
      new->hi = hi;
      new->width = width;
      new->singlehost = (unsigned int)0;
      return new;
    }


  error2:
    ;
    free((void *)new);
  }


error1:
  ;
  signed int *return_value___errno_location_1;
  return_value___errno_location_1=__errno_location();
  *return_value___errno_location_1 = 12;
  void *return_value_lsd_nomem_error_2;
  return_value_lsd_nomem_error_2=lsd_nomem_error("hostlist.c", 638, "hostrange create");
  return (struct hostrange_components *)return_value_lsd_nomem_error_2;
}

// hostrange_create_single
// file hostlist.c line 586
static struct hostrange_components * hostrange_create_single(const char *prefix)
{
  struct hostrange_components *new;
  /* assertion prefix != ((void *)0) */
  assert(prefix != (const char *)(void *)0);
  new=hostrange_new();
  if(!(new == ((struct hostrange_components *)NULL)))
  {
    new->prefix=strdup(prefix);
    if(!(new->prefix == ((char *)NULL)))
    {
      new->singlehost = (unsigned int)1;
      new->lo = (unsigned long int)0L;
      new->hi = (unsigned long int)0L;
      new->width = 0;
      return new;
    }


  error2:
    ;
    free((void *)new);
  }


error1:
  ;
  signed int *return_value___errno_location_1;
  return_value___errno_location_1=__errno_location();
  *return_value___errno_location_1 = 12;
  void *return_value_lsd_nomem_error_2;
  return_value_lsd_nomem_error_2=lsd_nomem_error("hostlist.c", 608, "hostrange create single");
  return (struct hostrange_components *)return_value_lsd_nomem_error_2;
}

// hostrange_delete_host
// file hostlist.c line 684
static struct hostrange_components * hostrange_delete_host(struct hostrange_components *hr, unsigned long int n)
{
  struct hostrange_components *new = (struct hostrange_components *)(void *)0;
  /* assertion hr != ((void *)0) */
  assert(hr != (struct hostrange_components *)(void *)0);
  _Bool tmp_if_expr_1;
  if(n >= hr->lo)
    tmp_if_expr_1 = n <= hr->hi ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  /* assertion n >= hr->lo && n <= hr->hi */
  assert(tmp_if_expr_1);
  if(n == hr->lo)
    hr->lo = hr->lo + 1ul;

  else
    if(n == hr->hi)
      hr->hi = hr->hi - 1ul;

    else
    {
      new=hostrange_copy(hr);
      if(new == ((struct hostrange_components *)NULL))
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        *return_value___errno_location_2 = 12;
        void *return_value_lsd_nomem_error_3;
        return_value_lsd_nomem_error_3=lsd_nomem_error("hostlist.c", 697, "hostrange copy");
        return (struct hostrange_components *)return_value_lsd_nomem_error_3;
      }

      hr->hi = n - (unsigned long int)1;
      new->lo = n + (unsigned long int)1;
    }
  return new;
}

// hostrange_destroy
// file hostlist.c line 669
static void hostrange_destroy(struct hostrange_components *hr)
{
  if(!(hr == ((struct hostrange_components *)NULL)))
  {
    if(!(hr->prefix == ((char *)NULL)))
      free((void *)hr->prefix);

    free((void *)hr);
  }

}

// hostrange_empty
// file hostlist.c line 781
static signed int hostrange_empty(struct hostrange_components *hr)
{
  /* assertion hr != ((void *)0) */
  assert(hr != (struct hostrange_components *)(void *)0);
  _Bool tmp_if_expr_1;
  if(!(hr->hi >= hr->lo))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = hr->hi == (unsigned long int)-1 ? (_Bool)1 : (_Bool)0;
  return (signed int)tmp_if_expr_1;
}

// hostrange_hn_within
// file hostlist.c line 912
static signed int hostrange_hn_within(struct hostrange_components *hr, struct hostname_components *hn)
{
  signed int len_hr;
  signed int len_hn;
  signed int hostrange_hn_within__1__width;
  if(!(hr->singlehost == 0u))
  {
    signed int return_value_strcmp_1;
    return_value_strcmp_1=strcmp(hn->hostname, hr->prefix);
    if(return_value_strcmp_1 == 0)
      return 0;

    else
      return -1;
  }

  signed int return_value_hostname_suffix_is_valid_2;
  return_value_hostname_suffix_is_valid_2=hostname_suffix_is_valid(hn);
  const unsigned short int **return_value___ctype_b_loc_6;
  if(return_value_hostname_suffix_is_valid_2 == 0)
    return -1;

  else
  {
    unsigned long int return_value_strlen_3;
    return_value_strlen_3=strlen(hn->prefix);
    len_hn = (signed int)return_value_strlen_3;
    signed int return_value_strncmp_4;
    return_value_strncmp_4=strncmp(hr->prefix, hn->prefix, (unsigned long int)len_hn);
    if(!(return_value_strncmp_4 == 0))
      return -1;

    else
    {
      unsigned long int return_value_strlen_5;
      return_value_strlen_5=strlen(hr->prefix);
      len_hr = (signed int)return_value_strlen_5;
      hostrange_hn_within__1__width=hostname_suffix_width(hn);
      if(hostrange_hn_within__1__width >= 2 && !(len_hn >= len_hr))
      {
        return_value___ctype_b_loc_6=__ctype_b_loc();
        if(!((2048 & (signed int)(*return_value___ctype_b_loc_6)[(signed long int)(signed int)hr->prefix[(signed long int)(len_hr + -1)]]) == 0))
        {
          if(hr->prefix[(signed long int)len_hn] == *hn->suffix)
          {
            signed int rc;
            struct hostname_components *h;
            h=hostname_create_with_suffix(hn->hostname, len_hn);
            rc=hostrange_hn_within(hr, h);
            hostname_destroy(h);
            return rc;
          }

        }

      }

      if(hr->hi >= hn->num)
      {
        if(hn->num >= hr->lo)
        {
          signed int width;
          width=hostname_suffix_width(hn);
          signed int return_value__width_equiv_7;
          return_value__width_equiv_7=_width_equiv(hr->lo, &hr->width, hn->num, &width);
          if(return_value__width_equiv_7 == 0)
            return -1;

          return (signed int)(hn->num - hr->lo);
        }

      }

      return -1;
    }
  }
}

// hostrange_intersect
// file hostlist.c line 884
static struct hostrange_components * hostrange_intersect(struct hostrange_components *h1, struct hostrange_components *h2)
{
  struct hostrange_components *new = (struct hostrange_components *)(void *)0;
  /* assertion h1 != ((void *)0) */
  assert(h1 != (struct hostrange_components *)(void *)0);
  /* assertion h2 != ((void *)0) */
  assert(h2 != (struct hostrange_components *)(void *)0);
  _Bool tmp_if_expr_1;
  if(!(h1->singlehost == 0u))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = h2->singlehost != 0u ? (_Bool)1 : (_Bool)0;
  signed int return_value_hostrange_width_combine_4;
  unsigned long int tmp_if_expr_3;
  if(tmp_if_expr_1)
    return (struct hostrange_components *)(void *)0;

  else
  {
    signed int return_value_hostrange_cmp_2;
    return_value_hostrange_cmp_2=hostrange_cmp(h1, h2);
    /* assertion hostrange_cmp(h1, h2) <= 0 */
    assert(return_value_hostrange_cmp_2 <= 0);
    signed int return_value_hostrange_prefix_cmp_5;
    return_value_hostrange_prefix_cmp_5=hostrange_prefix_cmp(h1, h2);
    if(return_value_hostrange_prefix_cmp_5 == 0)
    {
      if(!(h2->lo >= h1->hi))
      {
        return_value_hostrange_width_combine_4=hostrange_width_combine(h1, h2);
        if(!(return_value_hostrange_width_combine_4 == 0))
        {
          new=hostrange_copy(h1);
          if(new == ((struct hostrange_components *)NULL))
            return (struct hostrange_components *)(void *)0;

          new->lo = h2->lo;
          if(!(h2->hi >= h1->hi))
            tmp_if_expr_3 = h2->hi;

          else
            tmp_if_expr_3 = h1->hi;
          new->hi = tmp_if_expr_3;
        }

      }

    }

    return new;
  }
}

// hostrange_join
// file hostlist.c line 850
static signed int hostrange_join(struct hostrange_components *h1, struct hostrange_components *h2)
{
  signed int duplicated = -1;
  /* assertion h1 != ((void *)0) */
  assert(h1 != (struct hostrange_components *)(void *)0);
  /* assertion h2 != ((void *)0) */
  assert(h2 != (struct hostrange_components *)(void *)0);
  signed int return_value_hostrange_cmp_1;
  return_value_hostrange_cmp_1=hostrange_cmp(h1, h2);
  /* assertion hostrange_cmp(h1, h2) <= 0 */
  assert(return_value_hostrange_cmp_1 <= 0);
  signed int return_value_hostrange_prefix_cmp_5;
  return_value_hostrange_prefix_cmp_5=hostrange_prefix_cmp(h1, h2);
  signed int return_value_hostrange_width_combine_4;
  _Bool tmp_if_expr_3;
  unsigned long int return_value_hostrange_count_2;
  if(return_value_hostrange_prefix_cmp_5 == 0)
  {
    return_value_hostrange_width_combine_4=hostrange_width_combine(h1, h2);
    if(!(return_value_hostrange_width_combine_4 == 0))
    {
      if(!(h1->singlehost == 0u))
        tmp_if_expr_3 = h2->singlehost != 0u ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_3 = (_Bool)0;
      if(tmp_if_expr_3)
        duplicated = 1;

      else
        if(h1->hi == h2->lo + 18446744073709551615ul)
        {
          h1->hi = h2->hi;
          duplicated = 0;
        }

        else
          if(h1->hi >= h2->lo)
          {
            if(!(h1->hi >= h2->hi))
            {
              duplicated = (signed int)((h1->hi - h2->lo) + (unsigned long int)1);
              h1->hi = h2->hi;
            }

            else
            {
              return_value_hostrange_count_2=hostrange_count(h2);
              duplicated = (signed int)return_value_hostrange_count_2;
            }
          }

    }

  }

  return duplicated;
}

// hostrange_new
// file hostlist.c line 575
static struct hostrange_components * hostrange_new(void)
{
  struct hostrange_components *new;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct hostrange_components) /*32ul*/ );
  new = (struct hostrange_components *)return_value_malloc_1;
  if(new == ((struct hostrange_components *)NULL))
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    *return_value___errno_location_2 = 12;
    void *return_value_lsd_nomem_error_3;
    return_value_lsd_nomem_error_3=lsd_nomem_error("hostlist.c", 579, "hostrange create");
    return (struct hostrange_components *)return_value_lsd_nomem_error_3;
  }

  return new;
}

// hostrange_numstr
// file hostlist.c line 1043
static unsigned long int hostrange_numstr(struct hostrange_components *hr, unsigned long int n, char *buf)
{
  signed int len = 0;
  /* assertion buf != ((void *)0) */
  assert(buf != (char *)(void *)0);
  if(n == 0ul || !(hr->singlehost == 0u))
    return (unsigned long int)0;

  else
  {
    len=snprintf(buf, n, "%0*lu", hr->width, hr->lo);
    if(len >= 0 && !((unsigned long int)len >= n))
    {
      if(!(hr->lo >= hr->hi))
      {
        signed int len2;
        len2=snprintf(buf + (signed long int)len, n - (unsigned long int)len, "-%0*lu", hr->width, hr->hi);
        if(!(len2 >= 0))
          len = -1;

        else
          len = len + len2;
      }

    }

    return (unsigned long int)len;
  }
}

// hostrange_pop
// file hostlist.c line 792
static char * hostrange_pop(struct hostrange_components *hr)
{
  unsigned long int size = (unsigned long int)0;
  char *host = (char *)(void *)0;
  /* assertion hr != ((void *)0) */
  assert(hr != (struct hostrange_components *)(void *)0);
  unsigned long int return_value_hostrange_count_6;
  unsigned long int tmp_post_5;
  if(!(hr->singlehost == 0u))
  {
    hr->lo = hr->lo + 1ul;
    host=strdup(hr->prefix);
  }

  else
  {
    return_value_hostrange_count_6=hostrange_count(hr);
    if(return_value_hostrange_count_6 >= 1ul)
    {
      unsigned long int return_value_strlen_1;
      return_value_strlen_1=strlen(hr->prefix);
      size = return_value_strlen_1 + (unsigned long int)hr->width + (unsigned long int)16;
      void *return_value_malloc_4;
      return_value_malloc_4=malloc(size * sizeof(char) /*1ul*/ );
      host = (char *)return_value_malloc_4;
      if(host == ((char *)NULL))
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        *return_value___errno_location_2 = 12;
        void *return_value_lsd_nomem_error_3;
        return_value_lsd_nomem_error_3=lsd_nomem_error("hostlist.c", 805, "hostrange pop");
        return (char *)return_value_lsd_nomem_error_3;
      }

      tmp_post_5 = hr->hi;
      hr->hi = hr->hi - 1ul;
      snprintf(host, size, "%s%0*lu", hr->prefix, hr->width, tmp_post_5);
    }

  }
  return host;
}

// hostrange_prefix_cmp
// file hostlist.c line 735
static signed int hostrange_prefix_cmp(struct hostrange_components *h1, struct hostrange_components *h2)
{
  signed int retval;
  signed int tmp_if_expr_1;
  if(h1 == ((struct hostrange_components *)NULL))
    return 1;

  else
    if(h2 == ((struct hostrange_components *)NULL))
      return -1;

    else
    {
      retval=strcmp(h1->prefix, h2->prefix);
      if(retval == 0)
        tmp_if_expr_1 = (signed int)h2->singlehost - (signed int)h1->singlehost;

      else
        tmp_if_expr_1 = retval;
      return tmp_if_expr_1;
    }
}

// hostrange_shift
// file hostlist.c line 814
static char * hostrange_shift(struct hostrange_components *hr)
{
  unsigned long int size = (unsigned long int)0;
  char *host = (char *)(void *)0;
  /* assertion hr != ((void *)0) */
  assert(hr != (struct hostrange_components *)(void *)0);
  unsigned long int return_value_hostrange_count_8;
  unsigned long int tmp_post_7;
  if(!(hr->singlehost == 0u))
  {
    hr->lo = hr->lo + 1ul;
    host=strdup(hr->prefix);
    if(host == ((char *)NULL))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = 12;
      void *return_value_lsd_nomem_error_2;
      return_value_lsd_nomem_error_2=lsd_nomem_error("hostlist.c", 824, "hostrange shift");
      return (char *)return_value_lsd_nomem_error_2;
    }

  }

  else
  {
    return_value_hostrange_count_8=hostrange_count(hr);
    if(return_value_hostrange_count_8 >= 1ul)
    {
      unsigned long int return_value_strlen_3;
      return_value_strlen_3=strlen(hr->prefix);
      size = return_value_strlen_3 + (unsigned long int)hr->width + (unsigned long int)16;
      void *return_value_malloc_6;
      return_value_malloc_6=malloc(size * sizeof(char) /*1ul*/ );
      host = (char *)return_value_malloc_6;
      if(host == ((char *)NULL))
      {
        signed int *return_value___errno_location_4;
        return_value___errno_location_4=__errno_location();
        *return_value___errno_location_4 = 12;
        void *return_value_lsd_nomem_error_5;
        return_value_lsd_nomem_error_5=lsd_nomem_error("hostlist.c", 828, "hostrange shift");
        return (char *)return_value_lsd_nomem_error_5;
      }

      tmp_post_7 = hr->lo;
      hr->lo = hr->lo + 1ul;
      snprintf(host, size, "%s%0*lu", hr->prefix, hr->width, tmp_post_7);
    }

  }
  return host;
}

// hostrange_to_string
// file hostlist.c line 1004
static unsigned long int hostrange_to_string(struct hostrange_components *hr, unsigned long int n, char *buf, char *separator)
{
  unsigned long int i;
  signed int truncated = 0;
  signed int len = 0;
  char sep;
  signed int tmp_if_expr_1;
  if(separator == ((char *)NULL))
    tmp_if_expr_1 = 44;

  else
    tmp_if_expr_1 = (signed int)separator[(signed long int)0];
  sep = (char)tmp_if_expr_1;
  signed int return_value_snprintf_2;
  signed int tmp_post_3;
  if(n == 0ul)
    return (unsigned long int)0;

  else
    if(!(hr->singlehost == 0u))
    {
      return_value_snprintf_2=snprintf(buf, n, "%s", hr->prefix);
      return (unsigned long int)return_value_snprintf_2;
    }

    else
    {
      i = hr->lo;
      for( ; hr->hi >= i; i = i + 1ul)
      {
        unsigned long int m = n - (unsigned long int)len <= n ? n - (unsigned long int)len : (unsigned long int)0;
        signed int ret;
        ret=snprintf(buf + (signed long int)len, m, "%s%0*lu", hr->prefix, hr->width, i);
        if((unsigned long int)ret >= m || !(ret >= 0))
        {
          len = (signed int)n;
          truncated = 1;
          break;
        }

        len = len + ret;
        tmp_post_3 = len;
        len = len + 1;
        buf[(signed long int)tmp_post_3] = sep;
      }
      if(!(truncated == 0))
      {
        buf[(signed long int)(n - (unsigned long int)1)] = (char)0;
        return (unsigned long int)-1;
      }

      else
      {
        len = len - 1;
        buf[(signed long int)len] = (char)0;
        return (unsigned long int)len;
      }
    }
}

// hostrange_width_combine
// file hostlist.c line 770
static signed int hostrange_width_combine(struct hostrange_components *h0, struct hostrange_components *h1)
{
  /* assertion h0 != ((void *)0) */
  assert(h0 != (struct hostrange_components *)(void *)0);
  /* assertion h1 != ((void *)0) */
  assert(h1 != (struct hostrange_components *)(void *)0);
  signed int return_value__width_equiv_1;
  return_value__width_equiv_1=_width_equiv(h0->lo, &h0->width, h1->lo, &h1->width);
  return return_value__width_equiv_1;
}

// hostrange_within_range
// file hostlist.c line 756
static signed int hostrange_within_range(struct hostrange_components *h1, struct hostrange_components *h2)
{
  signed int return_value_hostrange_prefix_cmp_2;
  return_value_hostrange_prefix_cmp_2=hostrange_prefix_cmp(h1, h2);
  _Bool tmp_if_expr_1;
  if(return_value_hostrange_prefix_cmp_2 == 0)
  {
    if(!(h1->singlehost == 0u))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = h2->singlehost != 0u ? (_Bool)1 : (_Bool)0;
    return tmp_if_expr_1 ? 0 : 1;
  }

  else
    return 0;
}

// hostset_copy
// file hostlist.c line 2419
struct hostset * hostset_copy(struct hostset * const set)
{
  struct hostset *new;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct hostset) /*8ul*/ );
  new = (struct hostset *)return_value_malloc_1;
  if(!(new == ((struct hostset *)NULL)))
  {
    new->hl=hostlist_copy(set->hl);
    if(!(new->hl == ((struct hostlist *)NULL)))
      return new;


  error2:
    ;
    free((void *)new);
  }


error1:
  ;
  return (struct hostset *)(void *)0;
}

// hostset_count
// file hostlist.c line 2591
signed int hostset_count(struct hostset *set)
{
  signed int return_value_hostlist_count_1;
  return_value_hostlist_count_1=hostlist_count(set->hl);
  return return_value_hostlist_count_1;
}

// hostset_create
// file hostlist.c line 2400
struct hostset * hostset_create(const char *hostlist)
{
  struct hostset *new;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct hostset) /*8ul*/ );
  new = (struct hostset *)return_value_malloc_1;
  if(!(new == ((struct hostset *)NULL)))
  {
    new->hl=hostlist_create(hostlist);
    if(!(new->hl == ((struct hostlist *)NULL)))
    {
      hostlist_uniq(new->hl);
      return new;
    }


  error2:
    ;
    free((void *)new);
  }


error1:
  ;
  return (struct hostset *)(void *)0;
}

// hostset_delete
// file hostlist.c line 2561
signed int hostset_delete(struct hostset *set, const char *hosts)
{
  signed int return_value_hostlist_delete_1;
  return_value_hostlist_delete_1=hostlist_delete(set->hl, hosts);
  return return_value_hostlist_delete_1;
}

// hostset_delete_host
// file hostlist.c line 2566
signed int hostset_delete_host(struct hostset *set, const char *hostname)
{
  signed int return_value_hostlist_delete_host_1;
  return_value_hostlist_delete_host_1=hostlist_delete_host(set->hl, hostname);
  return return_value_hostlist_delete_host_1;
}

// hostset_deranged_string
// file hostlist.c line 2601
signed long int hostset_deranged_string(struct hostset *set, unsigned long int n, char *buf)
{
  signed long int return_value_hostlist_deranged_string_1;
  return_value_hostlist_deranged_string_1=hostlist_deranged_string(set->hl, n, buf);
  return return_value_hostlist_deranged_string_1;
}

// hostset_destroy
// file hostlist.c line 2435
void hostset_destroy(struct hostset *set)
{
  if(!(set == ((struct hostset *)NULL)))
  {
    hostlist_destroy(set->hl);
    free((void *)set);
  }

}

// hostset_find_host
// file hostlist.c line 2518
static signed int hostset_find_host(struct hostset *set, const char *host)
{
  signed int i;
  signed int retval = 0;
  struct hostname_components *hn;
  do
  {
    /* assertion set->hl != ((void *)0) */
    assert(set->hl != (struct hostlist *)(void *)0);
    do
    {
      signed int e;
      e=pthread_mutex_lock(&set->hl->mutex);
      if(!(e == 0))
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        *return_value___errno_location_1 = e;
        lsd_fatal_error("hostlist.c", 2523, "hostlist mutex lock:");
        abort();
      }

    }
    while((_Bool)0);
    /* assertion (set->hl)->magic == 57005 */
    assert(set->hl->magic == 57005);
  }
  while((_Bool)0);
  hn=hostname_create(host);
  i = 0;
  for( ; !(i >= set->hl->nranges); i = i + 1)
  {
    signed int return_value_hostrange_hn_within_2;
    return_value_hostrange_hn_within_2=hostrange_hn_within(set->hl->hr[(signed long int)i], hn);
    if(return_value_hostrange_hn_within_2 >= 0)
    {
      retval = 1;
      break;
    }

  }
  do
  {

  done:
    ;
    signed int hostset_find_host__1__3__1__e;
    hostset_find_host__1__3__1__e=pthread_mutex_unlock(&set->hl->mutex);
    if(!(hostset_find_host__1__3__1__e == 0))
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = hostset_find_host__1__3__1__e;
      lsd_fatal_error("hostlist.c", 2532, "hostlist mutex unlock:");
      abort();
    }

  }
  while((_Bool)0);
  hostname_destroy(hn);
  return retval;
}

// hostset_insert
// file hostlist.c line 2499
signed int hostset_insert(struct hostset *set, const char *hosts)
{
  signed int i;
  signed int n = 0;
  struct hostlist *hl;
  hl=hostlist_create(hosts);
  signed int return_value_hostset_insert_range_2;
  if(hl == ((struct hostlist *)NULL))
    return 0;

  else
  {
    hostlist_uniq(hl);
    do
    {
      /* assertion set->hl != ((void *)0) */
      assert(set->hl != (struct hostlist *)(void *)0);
      do
      {
        signed int e;
        e=pthread_mutex_lock(&set->hl->mutex);
        if(!(e == 0))
        {
          signed int *return_value___errno_location_1;
          return_value___errno_location_1=__errno_location();
          *return_value___errno_location_1 = e;
          lsd_fatal_error("hostlist.c", 2507, "hostlist mutex lock:");
          abort();
        }

      }
      while((_Bool)0);
      /* assertion (set->hl)->magic == 57005 */
      assert(set->hl->magic == 57005);
    }
    while((_Bool)0);
    i = 0;
    for( ; !(i >= hl->nranges); i = i + 1)
    {
      return_value_hostset_insert_range_2=hostset_insert_range(set, hl->hr[(signed long int)i]);
      n = n + return_value_hostset_insert_range_2;
    }
    do
    {

    __CPROVER_DUMP_L7:
      ;
      signed int hostset_insert__1__3__1__e;
      hostset_insert__1__3__1__e=pthread_mutex_unlock(&set->hl->mutex);
      if(!(hostset_insert__1__3__1__e == 0))
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        *return_value___errno_location_3 = hostset_insert__1__3__1__e;
        lsd_fatal_error("hostlist.c", 2510, "hostlist mutex unlock:");
        abort();
      }

    }
    while((_Bool)0);
    hostlist_destroy(hl);
    return n;
  }
}

// hostset_insert_range
// file hostlist.c line 2447
static signed int hostset_insert_range(struct hostset *set, struct hostrange_components *hr)
{
  signed int i = 0;
  signed int inserted = 0;
  signed int nhosts = 0;
  signed int ndups = 0;
  struct hostlist *hl = set->hl;
  signed int return_value_hostlist_expand_1;
  signed int tmp_post_4;
  if(hl->size == hl->nranges)
  {
    return_value_hostlist_expand_1=hostlist_expand(hl);
    if(!(return_value_hostlist_expand_1 == 0))
      goto __CPROVER_DUMP_L1;

    return 0;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    unsigned long int return_value_hostrange_count_2;
    return_value_hostrange_count_2=hostrange_count(hr);
    nhosts = (signed int)return_value_hostrange_count_2;
    i = 0;
    for( ; !(i >= hl->nranges); i = i + 1)
    {
      signed int return_value_hostrange_cmp_3;
      return_value_hostrange_cmp_3=hostrange_cmp(hr, hl->hr[(signed long int)i]);
      if(!(return_value_hostrange_cmp_3 >= 1))
      {
        ndups=hostrange_join(hr, hl->hr[(signed long int)i]);
        if(ndups >= 0)
          hostlist_delete_range(hl, i);

        else
          if(!(ndups >= 0))
            ndups = 0;

        hostlist_insert_range(hl, hr, i);
        if(i >= 1)
        {
          signed int m;
          m=_attempt_range_join(hl, i);
          if(m >= 1)
            ndups = ndups + m;

        }

        hl->nhosts = hl->nhosts + (nhosts - ndups);
        inserted = 1;
        break;
      }

    }
    if(inserted == 0)
    {
      tmp_post_4 = hl->nranges;
      hl->nranges = hl->nranges + 1;
      hl->hr[(signed long int)tmp_post_4]=hostrange_copy(hr);
      hl->nhosts = hl->nhosts + nhosts;
      if(hl->nranges >= 2)
      {
        ndups=_attempt_range_join(hl, hl->nranges - 1);
        if(!(ndups >= 1))
          ndups = 0;

      }

    }

    return nhosts - ndups;
  }
}

// hostset_iterator_create
// file hostlist.c line 2250
struct hostlist_iterator * hostset_iterator_create(struct hostset *set)
{
  struct hostlist_iterator *return_value_hostlist_iterator_create_1;
  return_value_hostlist_iterator_create_1=hostlist_iterator_create(set->hl);
  return return_value_hostlist_iterator_create_1;
}

// hostset_pop
// file hostlist.c line 2576
char * hostset_pop(struct hostset *set)
{
  char *return_value_hostlist_pop_1;
  return_value_hostlist_pop_1=hostlist_pop(set->hl);
  return return_value_hostlist_pop_1;
}

// hostset_pop_range
// file hostlist.c line 2586
char * hostset_pop_range(struct hostset *set)
{
  char *return_value_hostlist_pop_range_1;
  return_value_hostlist_pop_range_1=hostlist_pop_range(set->hl);
  return return_value_hostlist_pop_range_1;
}

// hostset_ranged_string
// file hostlist.c line 2596
signed long int hostset_ranged_string(struct hostset *set, unsigned long int n, char *buf)
{
  signed long int return_value_hostlist_ranged_string_1;
  return_value_hostlist_ranged_string_1=hostlist_ranged_string(set->hl, n, buf);
  return return_value_hostlist_ranged_string_1;
}

// hostset_shift
// file hostlist.c line 2571
char * hostset_shift(struct hostset *set)
{
  char *return_value_hostlist_shift_1;
  return_value_hostlist_shift_1=hostlist_shift(set->hl);
  return return_value_hostlist_shift_1;
}

// hostset_shift_range
// file hostlist.c line 2581
char * hostset_shift_range(struct hostset *set)
{
  char *return_value_hostlist_shift_range_1;
  return_value_hostlist_shift_range_1=hostlist_shift_range(set->hl);
  return return_value_hostlist_shift_range_1;
}

// hostset_within
// file hostlist.c line 2537
signed int hostset_within(struct hostset *set, const char *hosts)
{
  signed int nhosts;
  signed int nfound;
  struct hostlist *hl;
  char *hostname;
  /* assertion set->hl->magic == 57005 */
  assert(set->hl->magic == 57005);
  hl=hostlist_create(hosts);
  if(hl == ((struct hostlist *)NULL))
    return 0;

  else
  {
    nhosts=hostlist_count(hl);
    nfound = 0;
    do
    {
      hostname=hostlist_pop(hl);
      if(hostname == ((char *)NULL))
        break;

      signed int return_value_hostset_find_host_1;
      return_value_hostset_find_host_1=hostset_find_host(set, hostname);
      nfound = nfound + return_value_hostset_find_host_1;
      free((void *)hostname);
    }
    while((_Bool)1);
    hostlist_destroy(hl);
    return (signed int)(nhosts == nfound);
  }
}

// list_alloc
// file list.c line 727
static struct list * list_alloc(void)
{
  void *return_value_list_alloc_aux_1;
  return_value_list_alloc_aux_1=list_alloc_aux((signed int)sizeof(struct list) /*88ul*/ , (void *)&list_free_lists);
  return (struct list *)return_value_list_alloc_aux_1;
}

// list_alloc_aux
// file list.c line 823
static void * list_alloc_aux(signed int size, void *pfreelist)
{
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)size);
  return return_value_malloc_1;
}

// list_append
// file ../../liblsd/list.h line 129
void * list_append(struct list *l, void *x)
{
  void *v;
  /* assertion l != ((void *)0) */
  assert(l != (struct list *)(void *)0);
  /* assertion x != ((void *)0) */
  assert(x != (void *)0);
  do
  {
    signed int e;
    e=pthread_mutex_lock(&l->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = e;
      lsd_fatal_error("list.c", 306, "list mutex lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion l->magic == 0xDEADBEEF */
  assert(l->magic == 0xDEADBEEF);
  v=list_node_create(l, l->tail, x);
  do
  {
    signed int list_append__1__2__e;
    list_append__1__2__e=pthread_mutex_unlock(&l->mutex);
    if(!(list_append__1__2__e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = list_append__1__2__e;
      lsd_fatal_error("list.c", 309, "list mutex unlock");
      abort();
    }

  }
  while((_Bool)0);
  return v;
}

// list_count
// file ../../liblsd/list.h line 119
signed int list_count(struct list *l)
{
  signed int n;
  /* assertion l != ((void *)0) */
  assert(l != (struct list *)(void *)0);
  do
  {
    signed int e;
    e=pthread_mutex_lock(&l->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = e;
      lsd_fatal_error("list.c", 291, "list mutex lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion l->magic == 0xDEADBEEF */
  assert(l->magic == 0xDEADBEEF);
  n = l->count;
  do
  {
    signed int list_count__1__2__e;
    list_count__1__2__e=pthread_mutex_unlock(&l->mutex);
    if(!(list_count__1__2__e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = list_count__1__2__e;
      lsd_fatal_error("list.c", 294, "list mutex unlock");
      abort();
    }

  }
  while((_Bool)0);
  return n;
}

// list_create
// file ../../liblsd/list.h line 97
struct list * list_create(void (*f)(void *))
{
  struct list *l;
  l=list_alloc();
  void *return_value_lsd_nomem_error_1;
  if(l == ((struct list *)NULL))
  {
    return_value_lsd_nomem_error_1=lsd_nomem_error("list.c", 226, "list create");
    return (struct list *)return_value_lsd_nomem_error_1;
  }

  else
  {
    l->head = (struct listNode *)(void *)0;
    l->tail = &l->head;
    l->iNext = (struct listIterator *)(void *)0;
    l->fDel = f;
    l->count = 0;
    do
    {
      signed int e;
      e=pthread_mutex_init(&l->mutex, (const union anonymous_6 *)(void *)0);
      if(!(e == 0))
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        *return_value___errno_location_2 = e;
        lsd_fatal_error("list.c", 232, "list mutex init");
        abort();
      }

    }
    while((_Bool)0);
    l->magic = 0xDEADBEEF;
    /* assertion l->magic = 0xDEADBEEF */
    assert(l->magic != 0u);
    return l;
  }
}

// list_delete
// file list.c line 640
signed int list_delete(struct listIterator *i)
{
  void *v;
  /* assertion i != ((void *)0) */
  assert(i != (struct listIterator *)(void *)0);
  /* assertion i->magic == 0xDEADBEEF */
  assert(i->magic == 0xDEADBEEF);
  v=list_remove(i);
  if(!(v == NULL))
  {
    if(!(i->list->fDel == ((void (*)(void *))NULL)))
      i->list->fDel(v);

    return 1;
  }

  else
    return 0;
}

// list_delete_all
// file ../../liblsd/list.h line 151
signed int list_delete_all(struct list *l, signed int (*f)(void *, void *), void *key)
{
  struct listNode **pp;
  void *v;
  signed int n = 0;
  /* assertion l != ((void *)0) */
  assert(l != (struct list *)(void *)0);
  /* assertion f != ((void *)0) */
  assert(f != (signed int (*)(void *, void *))(void *)0);
  do
  {
    signed int e;
    e=pthread_mutex_lock(&l->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = e;
      lsd_fatal_error("list.c", 359, "list mutex lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion l->magic == 0xDEADBEEF */
  assert(l->magic == 0xDEADBEEF);
  pp = &l->head;
  if(!(*pp == ((struct listNode *)NULL)))
  {
    signed int return_value;
    return_value=f((*pp)->data, key);
    if(!(return_value == 0))
    {
      v=list_node_destroy(l, pp);
      if(!(v == NULL))
      {
        if(!(l->fDel == ((void (*)(void *))NULL)))
          l->fDel(v);

        n = n + 1;
      }

    }

    else
      pp = &(*pp)->next;
  }

  do
  {
    signed int list_delete_all__1__3__e;
    list_delete_all__1__3__e=pthread_mutex_unlock(&l->mutex);
    if(!(list_delete_all__1__3__e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = list_delete_all__1__3__e;
      lsd_fatal_error("list.c", 374, "list mutex unlock");
      abort();
    }

  }
  while((_Bool)0);
  return n;
}

// list_dequeue
// file list.c line 505
void * list_dequeue(struct list *l)
{
  void *v;
  /* assertion l != ((void *)0) */
  assert(l != (struct list *)(void *)0);
  do
  {
    signed int e;
    e=pthread_mutex_lock(&l->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = e;
      lsd_fatal_error("list.c", 510, "list mutex lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion l->magic == 0xDEADBEEF */
  assert(l->magic == 0xDEADBEEF);
  v=list_node_destroy(l, &l->head);
  do
  {
    signed int list_dequeue__1__2__e;
    list_dequeue__1__2__e=pthread_mutex_unlock(&l->mutex);
    if(!(list_dequeue__1__2__e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = list_dequeue__1__2__e;
      lsd_fatal_error("list.c", 513, "list mutex unlock");
      abort();
    }

  }
  while((_Bool)0);
  return v;
}

// list_destroy
// file ../../liblsd/list.h line 107
void list_destroy(struct list *l)
{
  struct listIterator *i;
  struct listIterator *iTmp;
  struct listNode *p;
  struct listNode *pTmp;
  /* assertion l != ((void *)0) */
  assert(l != (struct list *)(void *)0);
  do
  {
    signed int e;
    e=pthread_mutex_lock(&l->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = e;
      lsd_fatal_error("list.c", 245, "list mutex lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion l->magic == 0xDEADBEEF */
  assert(l->magic == 0xDEADBEEF);
  i = l->iNext;
  for( ; !(i == ((struct listIterator *)NULL)); i = iTmp)
  {
    /* assertion i->magic == 0xDEADBEEF */
    assert(i->magic == 0xDEADBEEF);
    iTmp = i->iNext;
    i->magic = ~0xDEADBEEF;
    /* assertion i->magic = ~0xDEADBEEF */
    assert(i->magic != 0u);
    list_iterator_free(i);
  }
  p = l->head;
  for( ; !(p == ((struct listNode *)NULL)); p = pTmp)
  {
    pTmp = p->next;
    if(!(p->data == NULL))
    {
      if(!(l->fDel == ((void (*)(void *))NULL)))
        l->fDel(p->data);

    }

    list_node_free(p);
  }
  l->magic = ~0xDEADBEEF;
  /* assertion l->magic = ~0xDEADBEEF */
  assert(l->magic != 0u);
  do
  {
    signed int list_destroy__1__4__e;
    list_destroy__1__4__e=pthread_mutex_unlock(&l->mutex);
    if(!(list_destroy__1__4__e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = list_destroy__1__4__e;
      lsd_fatal_error("list.c", 264, "list mutex unlock");
      abort();
    }

  }
  while((_Bool)0);
  do
  {
    signed int list_destroy__1__5__e;
    list_destroy__1__5__e=pthread_mutex_destroy(&l->mutex);
    if(!(list_destroy__1__5__e == 0))
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = list_destroy__1__5__e;
      lsd_fatal_error("list.c", 265, "list mutex destroy");
      abort();
    }

  }
  while((_Bool)0);
  list_free(l);
  goto __CPROVER_DUMP_L12;

__CPROVER_DUMP_L12:
  ;
}

// list_enqueue
// file list.c line 490
void * list_enqueue(struct list *l, void *x)
{
  void *v;
  /* assertion l != ((void *)0) */
  assert(l != (struct list *)(void *)0);
  /* assertion x != ((void *)0) */
  assert(x != (void *)0);
  do
  {
    signed int e;
    e=pthread_mutex_lock(&l->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = e;
      lsd_fatal_error("list.c", 496, "list mutex lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion l->magic == 0xDEADBEEF */
  assert(l->magic == 0xDEADBEEF);
  v=list_node_create(l, l->tail, x);
  do
  {
    signed int list_enqueue__1__2__e;
    list_enqueue__1__2__e=pthread_mutex_unlock(&l->mutex);
    if(!(list_enqueue__1__2__e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = list_enqueue__1__2__e;
      lsd_fatal_error("list.c", 499, "list mutex unlock");
      abort();
    }

  }
  while((_Bool)0);
  return v;
}

// list_find
// file list.c line 611
void * list_find(struct listIterator *i, signed int (*f)(void *, void *), void *key)
{
  void *v;
  /* assertion i != ((void *)0) */
  assert(i != (struct listIterator *)(void *)0);
  /* assertion f != ((void *)0) */
  assert(f != (signed int (*)(void *, void *))(void *)0);
  /* assertion i->magic == 0xDEADBEEF */
  assert(i->magic == 0xDEADBEEF);
  v=list_next(i);
  signed int return_value;
  if(!(v == NULL))
    return_value=f(v, key);

  return v;
}

// list_find_first
// file ../../liblsd/list.h line 141
void * list_find_first(struct list *l, signed int (*f)(void *, void *), void *key)
{
  struct listNode *p;
  void *v = (void *)0;
  /* assertion l != ((void *)0) */
  assert(l != (struct list *)(void *)0);
  /* assertion f != ((void *)0) */
  assert(f != (signed int (*)(void *, void *))(void *)0);
  do
  {
    signed int e;
    e=pthread_mutex_lock(&l->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = e;
      lsd_fatal_error("list.c", 337, "list mutex lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion l->magic == 0xDEADBEEF */
  assert(l->magic == 0xDEADBEEF);
  p = l->head;
  if(!(p == ((struct listNode *)NULL)))
  {
    signed int return_value;
    return_value=f(p->data, key);
    if(!(return_value == 0))
      v = p->data;

    else
      p = p->next;
  }

  do
  {
    signed int list_find_first__1__3__e;
    list_find_first__1__3__e=pthread_mutex_unlock(&l->mutex);
    if(!(list_find_first__1__3__e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = list_find_first__1__3__e;
      lsd_fatal_error("list.c", 345, "list mutex unlock");
      abort();
    }

  }
  while((_Bool)0);
  return v;
}

// list_for_each
// file list.c line 380
signed int list_for_each(struct list *l, signed int (*f)(void *, void *), void *arg)
{
  struct listNode *p;
  signed int n = 0;
  /* assertion l != ((void *)0) */
  assert(l != (struct list *)(void *)0);
  /* assertion f != ((void *)0) */
  assert(f != (signed int (*)(void *, void *))(void *)0);
  do
  {
    signed int list_for_each__1__1__e;
    list_for_each__1__1__e=pthread_mutex_lock(&l->mutex);
    if(!(list_for_each__1__1__e == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = list_for_each__1__1__e;
      lsd_fatal_error("list.c", 387, "list mutex lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion l->magic == 0xDEADBEEF */
  assert(l->magic == 0xDEADBEEF);
  p = l->head;
  if(!(p == ((struct listNode *)NULL)))
  {
    n = n + 1;
    signed int return_value;
    return_value=f(p->data, arg);
    if(!(return_value >= 0))
      n = -n;

    else
      p = p->next;
  }

  do
  {
    signed int e;
    e=pthread_mutex_unlock(&l->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = e;
      lsd_fatal_error("list.c", 396, "list mutex unlock");
      abort();
    }

  }
  while((_Bool)0);
  return n;
}

// list_free
// file list.c line 734
static void list_free(struct list *l)
{
  list_free_aux((void *)l, (void *)&list_free_lists);
}

// list_free_aux
// file list.c line 829
static void list_free_aux(void *x, void *pfreelist)
{
  free(x);
}

// list_insert
// file list.c line 595
void * list_insert(struct listIterator *i, void *x)
{
  void *v;
  /* assertion i != ((void *)0) */
  assert(i != (struct listIterator *)(void *)0);
  /* assertion x != ((void *)0) */
  assert(x != (void *)0);
  /* assertion i->magic == 0xDEADBEEF */
  assert(i->magic == 0xDEADBEEF);
  do
  {
    signed int e;
    e=pthread_mutex_lock(&i->list->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = e;
      lsd_fatal_error("list.c", 602, "list mutex lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion i->list->magic == 0xDEADBEEF */
  assert(i->list->magic == 0xDEADBEEF);
  v=list_node_create(i->list, i->prev, x);
  do
  {
    signed int list_insert__1__2__e;
    list_insert__1__2__e=pthread_mutex_unlock(&i->list->mutex);
    if(!(list_insert__1__2__e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = list_insert__1__2__e;
      lsd_fatal_error("list.c", 605, "list mutex unlock");
      abort();
    }

  }
  while((_Bool)0);
  return v;
}

// list_is_empty
// file list.c line 272
signed int list_is_empty(struct list *l)
{
  signed int n;
  /* assertion l != ((void *)0) */
  assert(l != (struct list *)(void *)0);
  do
  {
    signed int e;
    e=pthread_mutex_lock(&l->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = e;
      lsd_fatal_error("list.c", 277, "list mutex lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion l->magic == 0xDEADBEEF */
  assert(l->magic == 0xDEADBEEF);
  n = l->count;
  do
  {
    signed int list_is_empty__1__2__e;
    list_is_empty__1__2__e=pthread_mutex_unlock(&l->mutex);
    if(!(list_is_empty__1__2__e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = list_is_empty__1__2__e;
      lsd_fatal_error("list.c", 280, "list mutex unlock");
      abort();
    }

  }
  while((_Bool)0);
  return (signed int)(n == 0);
}

// list_iterator_alloc
// file list.c line 757
static struct listIterator * list_iterator_alloc(void)
{
  void *return_value_list_alloc_aux_1;
  return_value_list_alloc_aux_1=list_alloc_aux((signed int)sizeof(struct listIterator) /*40ul*/ , (void *)&list_free_iterators);
  return (struct listIterator *)return_value_list_alloc_aux_1;
}

// list_iterator_create
// file ../../liblsd/list.h line 221
struct listIterator * list_iterator_create(struct list *l)
{
  struct listIterator *i;
  /* assertion l != ((void *)0) */
  assert(l != (struct list *)(void *)0);
  i=list_iterator_alloc();
  void *return_value_lsd_nomem_error_1;
  if(i == ((struct listIterator *)NULL))
  {
    return_value_lsd_nomem_error_1=lsd_nomem_error("list.c", 525, "list iterator create");
    return (struct listIterator *)return_value_lsd_nomem_error_1;
  }

  else
  {
    i->list = l;
    do
    {
      signed int e;
      e=pthread_mutex_lock(&l->mutex);
      if(!(e == 0))
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        *return_value___errno_location_2 = e;
        lsd_fatal_error("list.c", 527, "list mutex lock");
        abort();
      }

    }
    while((_Bool)0);
    /* assertion l->magic == 0xDEADBEEF */
    assert(l->magic == 0xDEADBEEF);
    i->pos = l->head;
    i->prev = &l->head;
    i->iNext = l->iNext;
    l->iNext = i;
    i->magic = 0xDEADBEEF;
    /* assertion i->magic = 0xDEADBEEF */
    assert(i->magic != 0u);
    do
    {
      signed int list_iterator_create__1__2__e;
      list_iterator_create__1__2__e=pthread_mutex_unlock(&l->mutex);
      if(!(list_iterator_create__1__2__e == 0))
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        *return_value___errno_location_3 = list_iterator_create__1__2__e;
        lsd_fatal_error("list.c", 534, "list mutex unlock");
        abort();
      }

    }
    while((_Bool)0);
    return i;
  }
}

// list_iterator_destroy
// file ../../liblsd/list.h line 233
void list_iterator_destroy(struct listIterator *i)
{
  struct listIterator **pi;
  /* assertion i != ((void *)0) */
  assert(i != (struct listIterator *)(void *)0);
  /* assertion i->magic == 0xDEADBEEF */
  assert(i->magic == 0xDEADBEEF);
  do
  {
    signed int e;
    e=pthread_mutex_lock(&i->list->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = e;
      lsd_fatal_error("list.c", 560, "list mutex lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion i->list->magic == 0xDEADBEEF */
  assert(i->list->magic == 0xDEADBEEF);
  pi = &i->list->iNext;
  for( ; !(*pi == ((struct listIterator *)NULL)); pi = &(*pi)->iNext)
  {
    /* assertion (*pi)->magic == 0xDEADBEEF */
    assert((*pi)->magic == 0xDEADBEEF);
    if(*pi == i)
    {
      *pi = (*pi)->iNext;
      break;
    }

  }
  do
  {
    signed int list_iterator_destroy__1__3__e;
    list_iterator_destroy__1__3__e=pthread_mutex_unlock(&i->list->mutex);
    if(!(list_iterator_destroy__1__3__e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = list_iterator_destroy__1__3__e;
      lsd_fatal_error("list.c", 569, "list mutex unlock");
      abort();
    }

  }
  while((_Bool)0);
  i->magic = ~0xDEADBEEF;
  /* assertion i->magic = ~0xDEADBEEF */
  assert(i->magic != 0u);
  list_iterator_free(i);
  goto __CPROVER_DUMP_L7;

__CPROVER_DUMP_L7:
  ;
}

// list_iterator_free
// file list.c line 764
static void list_iterator_free(struct listIterator *i)
{
  list_free_aux((void *)i, (void *)&list_free_iterators);
}

// list_iterator_reset
// file ../../liblsd/list.h line 227
void list_iterator_reset(struct listIterator *i)
{
  /* assertion i != ((void *)0) */
  assert(i != (struct listIterator *)(void *)0);
  /* assertion i->magic == 0xDEADBEEF */
  assert(i->magic == 0xDEADBEEF);
  do
  {
    signed int e;
    e=pthread_mutex_lock(&i->list->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = e;
      lsd_fatal_error("list.c", 544, "list mutex lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion i->list->magic == 0xDEADBEEF */
  assert(i->list->magic == 0xDEADBEEF);
  i->pos = i->list->head;
  i->prev = &i->list->head;
  do
  {
    signed int list_iterator_reset__1__2__e;
    list_iterator_reset__1__2__e=pthread_mutex_unlock(&i->list->mutex);
    if(!(list_iterator_reset__1__2__e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = list_iterator_reset__1__2__e;
      lsd_fatal_error("list.c", 548, "list mutex unlock");
      abort();
    }

  }
  while((_Bool)0);
}

// list_mutex_is_locked
// file list.c line 839
static signed int list_mutex_is_locked(union anonymous *mutex)
{
  signed int rc;
  /* assertion mutex != ((void *)0) */
  assert(mutex != (union anonymous *)(void *)0);
  rc=pthread_mutex_trylock(mutex);
  return rc == 16 ? 1 : 0;
}

// list_next
// file ../../liblsd/list.h line 240
void * list_next(struct listIterator *i)
{
  struct listNode *p;
  /* assertion i != ((void *)0) */
  assert(i != (struct listIterator *)(void *)0);
  /* assertion i->magic == 0xDEADBEEF */
  assert(i->magic == 0xDEADBEEF);
  do
  {
    signed int e;
    e=pthread_mutex_lock(&i->list->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = e;
      lsd_fatal_error("list.c", 583, "list mutex lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion i->list->magic == 0xDEADBEEF */
  assert(i->list->magic == 0xDEADBEEF);
  p = i->pos;
  if(!(p == ((struct listNode *)NULL)))
    i->pos = p->next;

  if(!(*i->prev == p))
    i->prev = &(*i->prev)->next;

  do
  {
    signed int list_next__1__2__e;
    list_next__1__2__e=pthread_mutex_unlock(&i->list->mutex);
    if(!(list_next__1__2__e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = list_next__1__2__e;
      lsd_fatal_error("list.c", 589, "list mutex unlock");
      abort();
    }

  }
  while((_Bool)0);
  void *tmp_if_expr_3;
  if(!(p == ((struct listNode *)NULL)))
    tmp_if_expr_3 = p->data;

  else
    tmp_if_expr_3 = (void *)0;
  return tmp_if_expr_3;
}

// list_node_alloc
// file list.c line 742
static struct listNode * list_node_alloc(void)
{
  void *return_value_list_alloc_aux_1;
  return_value_list_alloc_aux_1=list_alloc_aux((signed int)sizeof(struct listNode) /*16ul*/ , (void *)&list_free_nodes);
  return (struct listNode *)return_value_list_alloc_aux_1;
}

// list_node_create
// file list.c line 656
static void * list_node_create(struct list *l, struct listNode **pp, void *x)
{
  struct listNode *p;
  struct listIterator *i;
  /* assertion l != ((void *)0) */
  assert(l != (struct list *)(void *)0);
  /* assertion l->magic == 0xDEADBEEF */
  assert(l->magic == 0xDEADBEEF);
  signed int return_value_list_mutex_is_locked_1;
  return_value_list_mutex_is_locked_1=list_mutex_is_locked(&l->mutex);
  /* assertion list_mutex_is_locked(&l->mutex) */
  assert(return_value_list_mutex_is_locked_1 != 0);
  /* assertion pp != ((void *)0) */
  assert(pp != (struct listNode **)(void *)0);
  /* assertion x != ((void *)0) */
  assert(x != (void *)0);
  p=list_node_alloc();
  void *return_value_lsd_nomem_error_2;
  if(p == ((struct listNode *)NULL))
  {
    return_value_lsd_nomem_error_2=lsd_nomem_error("list.c", 672, "list node create");
    return return_value_lsd_nomem_error_2;
  }

  else
  {
    p->data = x;
    p->next = *pp;
    if(p->next == ((struct listNode *)NULL))
      l->tail = &p->next;

    *pp = p;
    l->count = l->count + 1;
    i = l->iNext;
    for( ; !(i == ((struct listIterator *)NULL)); i = i->iNext)
    {
      /* assertion i->magic == 0xDEADBEEF */
      assert(i->magic == 0xDEADBEEF);
      if(i->prev == pp)
        i->prev = &p->next;

      else
        if(i->pos == p->next)
          i->pos = p;

    }
    return x;
  }
}

// list_node_destroy
// file list.c line 691
static void * list_node_destroy(struct list *l, struct listNode **pp)
{
  void *v;
  struct listNode *p;
  struct listIterator *i;
  /* assertion l != ((void *)0) */
  assert(l != (struct list *)(void *)0);
  /* assertion l->magic == 0xDEADBEEF */
  assert(l->magic == 0xDEADBEEF);
  signed int return_value_list_mutex_is_locked_1;
  return_value_list_mutex_is_locked_1=list_mutex_is_locked(&l->mutex);
  /* assertion list_mutex_is_locked(&l->mutex) */
  assert(return_value_list_mutex_is_locked_1 != 0);
  /* assertion pp != ((void *)0) */
  assert(pp != (struct listNode **)(void *)0);
  p = *pp;
  _Bool tmp_if_expr_2;
  if(p == ((struct listNode *)NULL))
    return (void *)0;

  else
  {
    v = p->data;
    *pp = p->next;
    if(*pp == ((struct listNode *)NULL))
      l->tail = pp;

    l->count = l->count - 1;
    i = l->iNext;
    for( ; !(i == ((struct listIterator *)NULL)); i = i->iNext)
    {
      /* assertion i->magic == 0xDEADBEEF */
      assert(i->magic == 0xDEADBEEF);
      if(i->pos == p)
      {
        i->pos = p->next;
        i->prev = pp;
      }

      else
        if(i->prev == &p->next)
          i->prev = pp;

      if(i->pos == *i->prev)
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = i->pos == (*i->prev)->next ? (_Bool)1 : (_Bool)0;
      /* assertion (i->pos == *i->prev) || (i->pos == (*i->prev)->next) */
      assert(tmp_if_expr_2);
    }
    list_node_free(p);
    return v;
  }
}

// list_node_free
// file list.c line 749
static void list_node_free(struct listNode *p)
{
  list_free_aux((void *)p, (void *)&list_free_nodes);
}

// list_peek
// file list.c line 476
void * list_peek(struct list *l)
{
  void *v;
  /* assertion l != ((void *)0) */
  assert(l != (struct list *)(void *)0);
  do
  {
    signed int e;
    e=pthread_mutex_lock(&l->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = e;
      lsd_fatal_error("list.c", 481, "list mutex lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion l->magic == 0xDEADBEEF */
  assert(l->magic == 0xDEADBEEF);
  void *tmp_if_expr_2;
  if(!(l->head == ((struct listNode *)NULL)))
    tmp_if_expr_2 = l->head->data;

  else
    tmp_if_expr_2 = (void *)0;
  v = tmp_if_expr_2;
  do
  {
    signed int list_peek__1__2__e;
    list_peek__1__2__e=pthread_mutex_unlock(&l->mutex);
    if(!(list_peek__1__2__e == 0))
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = list_peek__1__2__e;
      lsd_fatal_error("list.c", 484, "list mutex unlock");
      abort();
    }

  }
  while((_Bool)0);
  return v;
}

// list_pop
// file list.c line 462
void * list_pop(struct list *l)
{
  void *v;
  /* assertion l != ((void *)0) */
  assert(l != (struct list *)(void *)0);
  do
  {
    signed int e;
    e=pthread_mutex_lock(&l->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = e;
      lsd_fatal_error("list.c", 467, "list mutex lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion l->magic == 0xDEADBEEF */
  assert(l->magic == 0xDEADBEEF);
  v=list_node_destroy(l, &l->head);
  do
  {
    signed int list_pop__1__2__e;
    list_pop__1__2__e=pthread_mutex_unlock(&l->mutex);
    if(!(list_pop__1__2__e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = list_pop__1__2__e;
      lsd_fatal_error("list.c", 470, "list mutex unlock");
      abort();
    }

  }
  while((_Bool)0);
  return v;
}

// list_prepend
// file list.c line 315
void * list_prepend(struct list *l, void *x)
{
  void *v;
  /* assertion l != ((void *)0) */
  assert(l != (struct list *)(void *)0);
  /* assertion x != ((void *)0) */
  assert(x != (void *)0);
  do
  {
    signed int e;
    e=pthread_mutex_lock(&l->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = e;
      lsd_fatal_error("list.c", 321, "list mutex lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion l->magic == 0xDEADBEEF */
  assert(l->magic == 0xDEADBEEF);
  v=list_node_create(l, &l->head, x);
  do
  {
    signed int list_prepend__1__2__e;
    list_prepend__1__2__e=pthread_mutex_unlock(&l->mutex);
    if(!(list_prepend__1__2__e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = list_prepend__1__2__e;
      lsd_fatal_error("list.c", 324, "list mutex unlock");
      abort();
    }

  }
  while((_Bool)0);
  return v;
}

// list_push
// file list.c line 447
void * list_push(struct list *l, void *x)
{
  void *v;
  /* assertion l != ((void *)0) */
  assert(l != (struct list *)(void *)0);
  /* assertion x != ((void *)0) */
  assert(x != (void *)0);
  do
  {
    signed int e;
    e=pthread_mutex_lock(&l->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = e;
      lsd_fatal_error("list.c", 453, "list mutex lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion l->magic == 0xDEADBEEF */
  assert(l->magic == 0xDEADBEEF);
  v=list_node_create(l, &l->head, x);
  do
  {
    signed int list_push__1__2__e;
    list_push__1__2__e=pthread_mutex_unlock(&l->mutex);
    if(!(list_push__1__2__e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = list_push__1__2__e;
      lsd_fatal_error("list.c", 456, "list mutex unlock");
      abort();
    }

  }
  while((_Bool)0);
  return v;
}

// list_remove
// file list.c line 624
void * list_remove(struct listIterator *i)
{
  void *v = (void *)0;
  /* assertion i != ((void *)0) */
  assert(i != (struct listIterator *)(void *)0);
  /* assertion i->magic == 0xDEADBEEF */
  assert(i->magic == 0xDEADBEEF);
  do
  {
    signed int e;
    e=pthread_mutex_lock(&i->list->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = e;
      lsd_fatal_error("list.c", 630, "list mutex lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion i->list->magic == 0xDEADBEEF */
  assert(i->list->magic == 0xDEADBEEF);
  if(!(*i->prev == i->pos))
    v=list_node_destroy(i->list, i->prev);

  do
  {
    signed int list_remove__1__2__e;
    list_remove__1__2__e=pthread_mutex_unlock(&i->list->mutex);
    if(!(list_remove__1__2__e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = list_remove__1__2__e;
      lsd_fatal_error("list.c", 634, "list mutex unlock");
      abort();
    }

  }
  while((_Bool)0);
  return v;
}

// list_sort
// file list.c line 402
void list_sort(struct list *l, signed int (*f)(void *, void *))
{
  struct listNode **pp;
  struct listNode **ppPrev;
  struct listNode **ppPos;
  struct listNode *pTmp;
  struct listIterator *i;
  /* assertion l != ((void *)0) */
  assert(l != (struct list *)(void *)0);
  /* assertion f != ((void *)0) */
  assert(f != (signed int (*)(void *, void *))(void *)0);
  do
  {
    signed int e;
    e=pthread_mutex_lock(&l->mutex);
    if(!(e == 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      *return_value___errno_location_1 = e;
      lsd_fatal_error("list.c", 411, "list mutex lock");
      abort();
    }

  }
  while((_Bool)0);
  /* assertion l->magic == 0xDEADBEEF */
  assert(l->magic == 0xDEADBEEF);
  if(l->count >= 2)
  {
    ppPrev = &l->head;
    pp = &(*ppPrev)->next;
    if(!(*pp == ((struct listNode *)NULL)))
    {
      signed int return_value_1;
      return_value_1=f((*pp)->data, (*ppPrev)->data);
      if(!(return_value_1 >= 0))
      {
        ppPos = &l->head;
        signed int return_value;
        return_value=f((*pp)->data, (*ppPos)->data);
        if(return_value >= 0)
          ppPos = &(*ppPos)->next;

        pTmp = (*pp)->next;
        (*pp)->next = *ppPos;
        *ppPos = *pp;
        *pp = pTmp;
        if(ppPrev == ppPos)
          ppPrev = &(*ppPrev)->next;

      }

      else
      {
        ppPrev = pp;
        pp = &(*pp)->next;
      }
    }

    l->tail = pp;
    i = l->iNext;
    for( ; !(i == ((struct listIterator *)NULL)); i = i->iNext)
    {
      /* assertion i->magic == 0xDEADBEEF */
      assert(i->magic == 0xDEADBEEF);
      i->pos = i->list->head;
      i->prev = &i->list->head;
    }
  }

  do
  {
    signed int list_sort__1__3__e;
    list_sort__1__3__e=pthread_mutex_unlock(&l->mutex);
    if(!(list_sort__1__3__e == 0))
    {
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = list_sort__1__3__e;
      lsd_fatal_error("list.c", 441, "list mutex unlock");
      abort();
    }

  }
  while((_Bool)0);
  goto __CPROVER_DUMP_L13;

__CPROVER_DUMP_L13:
  ;
}

// lsd_fatal_error
// file error.c line 13
void lsd_fatal_error(char *file, signed int line, char *mesg)
{
  msg_exit("fatal error: %s: %s::%d", mesg, file, line);
}

// lsd_mutex_is_locked
// file thread.c line 39
signed int lsd_mutex_is_locked(union anonymous *mutex)
{
  signed int rc;
  /* assertion mutex != ((void *)0) */
  assert(mutex != (union anonymous *)(void *)0);
  rc=pthread_mutex_trylock(mutex);
  return rc == 16 ? 1 : 0;
}

// lsd_nomem_error
// file error.c line 19
void * lsd_nomem_error(char *file, signed int line, char *mesg)
{
  msg("out of memory: %s: %s::%d", mesg, file, line);
  return (void *)0;
}

// main
// file diodmount.c line 129
signed int main(signed int argc, char **argv)
{
  char *dir = (char *)(void *)0;
  char *spec;
  char *host;
  char *nspec = (char *)(void *)0;
  signed int c;
  signed int i;
  signed int nopt = 0;
  signed int vopt = 0;
  signed int fopt = 0;
  signed int aopt = 0;
  signed int dopt = 0;
  signed int rfd = -1;
  signed int wfd = -1;
  struct opt_struct *o;
  diod_log_init(argv[(signed long int)0]);
  o=opt_create();
  opterr = 0;
  do
  {
    c=getopt_long(argc, argv, "fnvo:ad", longopts, (signed int *)(void *)0);
    if(c == -1)
      break;

    switch(c)
    {
      case 102:
      {
        fopt = 1;
        break;
      }
      case 110:
      {
        nopt = 1;
        break;
      }
      case 118:
      {
        vopt = vopt + 1;
        break;
      }
      case 111:
      {
        opt_addf(o, "%s", optarg);
        break;
      }
      case 97:
      {
        aopt = aopt + 1;
        break;
      }
      case 100:
      {
        dopt = dopt + 1;
        break;
      }
      default:
        usage();
    }
  }
  while((_Bool)1);
  if(!(aopt == 0))
  {
    _nbd_attach(o, argc - optind, argv + (signed long int)optind, nopt, vopt);
    exit(0);
  }

  if(!(dopt == 0))
  {
    _nbd_detach(o, argc - optind, argv + (signed long int)optind, nopt, vopt);
    exit(0);
  }

  if(!(optind == argc + -2))
    usage();

  unsigned int return_value_geteuid_1;
  return_value_geteuid_1=geteuid();
  if(!(return_value_geteuid_1 == 0u))
    msg_exit("you must be root");

  signed int tmp_post_2 = optind;
  optind = optind + 1;
  spec = argv[(signed long int)tmp_post_2];
  signed int tmp_post_3 = optind;
  optind = optind + 1;
  dir = argv[(signed long int)tmp_post_3];
  host=_parse_spec(spec, o);
  _verify_mountpoint(dir);
  char *return_value_opt_find_5;
  return_value_opt_find_5=opt_find(o, "remount");
  if(!(return_value_opt_find_5 == ((char *)NULL)))
  {
    signed int return_value_opt_check_allowed_csv_4;
    return_value_opt_check_allowed_csv_4=opt_check_allowed_csv(o, "ro,rw,aname,remount");
    if(!(return_value_opt_check_allowed_csv_4 == 0))
      msg_exit("-oremount can only be used with ro,rw");

    _diod_remount(o, spec, dir, vopt, fopt);
    goto done;
  }

  _parse_uname_access(o);
  char *return_value_opt_find_6;
  return_value_opt_find_6=opt_find(o, "uname");
  unsigned int return_value__uname2uid_7;
  return_value__uname2uid_7=_uname2uid(return_value_opt_find_6);
  signed int return_value_seteuid_8;
  return_value_seteuid_8=seteuid(return_value__uname2uid_7);
  if(!(return_value_seteuid_8 >= 0))
    err_exit("seteuid");

  char *return_value_opt_find_10;
  return_value_opt_find_10=opt_find(o, "trans");
  char *return_value_opt_find_9;
  if(return_value_opt_find_10 == ((char *)NULL))
    opt_addf(o, "trans=%s", (const void *)"fd");

  else
  {
    return_value_opt_find_9=opt_find(o, "trans=fd");
    if(return_value_opt_find_9 == ((char *)NULL))
      msg_exit("only -otrans=fd transport is supported");

  }
  char *return_value_opt_find_11;
  return_value_opt_find_11=opt_find(o, "msize");
  if(return_value_opt_find_11 == ((char *)NULL))
    opt_addf(o, "msize=%d", 65536);

  char *return_value_opt_find_13;
  return_value_opt_find_13=opt_find(o, "version");
  char *return_value_opt_find_12;
  if(return_value_opt_find_13 == ((char *)NULL))
    opt_addf(o, "version=%s", (const void *)"9p2000.L");

  else
  {
    return_value_opt_find_12=opt_find(o, "version=9p2000.L");
    if(return_value_opt_find_12 == ((char *)NULL))
      msg_exit("only -oversion=9p2000.L is supported (little p, big L)");

  }
  char *return_value_opt_find_14;
  return_value_opt_find_14=opt_find(o, "debug");
  if(return_value_opt_find_14 == ((char *)NULL))
    opt_addf(o, "debug=%d", 0x1);

  char *return_value_opt_find_15;
  return_value_opt_find_15=opt_find(o, "rwdepth");
  if(return_value_opt_find_15 == ((char *)NULL))
    opt_addf(o, "rwdepth=%d", 1);

  char *return_value_opt_find_24;
  return_value_opt_find_24=opt_find(o, "rfdno");
  _Bool tmp_if_expr_26;
  char *return_value_opt_find_25;
  if(!(return_value_opt_find_24 == ((char *)NULL)))
    tmp_if_expr_26 = (_Bool)1;

  else
  {
    return_value_opt_find_25=opt_find(o, "wfdno");
    tmp_if_expr_26 = return_value_opt_find_25 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_18;
  signed int return_value_opt_scanf_17;
  unsigned long int tmp_if_expr_22;
  unsigned long int return_value_strlen_21;
  if(tmp_if_expr_26)
  {
    signed int return_value_opt_scanf_16;
    return_value_opt_scanf_16=opt_scanf(o, "rfdno=%d", &rfd);
    if(return_value_opt_scanf_16 == 0)
      tmp_if_expr_18 = (_Bool)1;

    else
    {
      return_value_opt_scanf_17=opt_scanf(o, "wfdno=%d", &wfd);
      tmp_if_expr_18 = !(return_value_opt_scanf_17 != 0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_18)
      msg_exit("-orfdno,wfdno must be used together");

    nopt = 1;
  }

  else
    if((signed int)*host == 47)
    {
      char *return_value_opt_find_19;
      return_value_opt_find_19=opt_find(o, "port");
      if(!(return_value_opt_find_19 == ((char *)NULL)))
        msg_exit("-oport won't work with UNIX domain socket");

      rfd=diod_sock_connect_unix(host, 0);
      if(!(rfd >= 0))
        exit(1);

      wfd = rfd;
      opt_addf(o, "rfdno=%d", rfd);
      opt_addf(o, "wfdno=%d", wfd);
    }

    else
    {
      char *port;
      port=opt_find(o, "port");
      struct hostlist_iterator *hi;
      struct hostlist *hl;
      char *h;
      if(port == ((char *)NULL))
        port = "564";

      hl=hostlist_create(host);
      if(hl == ((struct hostlist *)NULL))
        msg_exit("error parsing host string: %s", host);

      hi=hostlist_iterator_create(hl);
      if(hi == ((struct hostlist_iterator *)NULL))
        msg_exit("out of memory");

      do
      {
        h=hostlist_next(hi);
        if(h == ((char *)NULL))
          break;

        if(!(vopt == 0))
          msg("trying to connect to %s:%s", h, port);

        rfd=diod_sock_connect_inet(h, port, 0x01);
        if(rfd >= 0)
          break;

      }
      while((_Bool)1);
      if(!(h == ((char *)NULL)))
      {
        char *p;
        p=strchr(spec, 58);
        signed int len;
        unsigned long int return_value_strlen_20;
        return_value_strlen_20=strlen(h);
        if(!(p == ((char *)NULL)))
        {
          return_value_strlen_21=strlen(p);
          tmp_if_expr_22 = return_value_strlen_21;
        }

        else
          tmp_if_expr_22 = (unsigned long int)0;
        len = (signed int)(return_value_strlen_20 + tmp_if_expr_22 + (unsigned long int)1);
        void *return_value_malloc_23;
        return_value_malloc_23=malloc((unsigned long int)len);
        nspec = (char *)return_value_malloc_23;
        if(nspec == ((char *)NULL))
          msg_exit("out of memory");

        snprintf(nspec, (unsigned long int)len, "%s%s", h, p != ((char *)NULL) ? p : "");
      }

      hostlist_destroy(hl);
      if(!(rfd >= 0))
        msg_exit("could not connect to server(s), giving up");

      wfd = rfd;
      opt_delete(o, "port");
      opt_addf(o, "rfdno=%d", rfd);
      opt_addf(o, "wfdno=%d", wfd);
    }
  char *return_value_opt_find_27;
  return_value_opt_find_27=opt_find(o, "trans=fd");
  if(return_value_opt_find_27 == ((char *)NULL))
    np_assfail("opt_find (o, \"trans=fd\")", "diodmount.c", 302);

  signed int return_value_opt_scanf_28;
  return_value_opt_scanf_28=opt_scanf(o, "msize=%d", &i);
  if(return_value_opt_scanf_28 == 0)
    np_assfail("opt_scanf (o, \"msize=%d\", &i)", "diodmount.c", 303);

  char *return_value_opt_find_29;
  return_value_opt_find_29=opt_find(o, "version=9p2000.L");
  if(return_value_opt_find_29 == ((char *)NULL))
    np_assfail("opt_find (o, \"version=9p2000.L\")", "diodmount.c", 304);

  signed int return_value_opt_scanf_30;
  return_value_opt_scanf_30=opt_scanf(o, "debug=%d", &i);
  _Bool tmp_if_expr_32;
  signed int return_value_opt_scanf_31;
  if(!(return_value_opt_scanf_30 == 0))
    tmp_if_expr_32 = (_Bool)1;

  else
  {
    return_value_opt_scanf_31=opt_scanf(o, "debug=%x", &i);
    tmp_if_expr_32 = return_value_opt_scanf_31 != 0 ? (_Bool)1 : (_Bool)0;
  }
  if(!tmp_if_expr_32)
    np_assfail("opt_scanf (o, \"debug=%d\", &i) || opt_scanf (o, \"debug=%x\", &i)", "diodmount.c", 305);

  signed int return_value_opt_scanf_33;
  return_value_opt_scanf_33=opt_scanf(o, "wfdno=%d", &i);
  _Bool tmp_if_expr_35;
  signed int return_value_opt_scanf_34;
  if(!(return_value_opt_scanf_33 == 0))
  {
    return_value_opt_scanf_34=opt_scanf(o, "rfdno=%d", &i);
    tmp_if_expr_35 = return_value_opt_scanf_34 != 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_35 = (_Bool)0;
  if(!tmp_if_expr_35)
    np_assfail("opt_scanf (o, \"wfdno=%d\", &i) && opt_scanf (o, \"rfdno=%d\", &i)", "diodmount.c", 306);

  char *return_value_opt_find_36;
  return_value_opt_find_36=opt_find(o, "access=user");
  _Bool tmp_if_expr_38;
  char *return_value_opt_find_37;
  if(!(return_value_opt_find_36 == ((char *)NULL)))
  {
    return_value_opt_find_37=opt_find(o, "uname=root");
    tmp_if_expr_38 = return_value_opt_find_37 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_38 = (_Bool)0;
  _Bool tmp_if_expr_42;
  signed int return_value_opt_scanf_39;
  _Bool tmp_if_expr_41;
  char *return_value_opt_find_40;
  if(tmp_if_expr_38)
    tmp_if_expr_42 = (_Bool)1;

  else
  {
    return_value_opt_scanf_39=opt_scanf(o, "access=%d", &i);
    if(!(return_value_opt_scanf_39 == 0))
    {
      return_value_opt_find_40=opt_find(o, "uname");
      tmp_if_expr_41 = return_value_opt_find_40 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_41 = (_Bool)0;
    tmp_if_expr_42 = tmp_if_expr_41 ? (_Bool)1 : (_Bool)0;
  }
  if(!tmp_if_expr_42)
    np_assfail("(opt_find (o, \"access=user\") && opt_find(o, \"uname=root\")) || (opt_scanf (o, \"access=%d\", &i) && opt_find(o, \"uname\"))", "diodmount.c", 308);

  char *return_value_opt_find_43;
  return_value_opt_find_43=opt_find(o, "port");
  if(!(return_value_opt_find_43 == ((char *)NULL)))
    np_assfail("!opt_find (o, \"port\")", "diodmount.c", 310);

  _diod_mount(o, rfd, wfd, nspec != ((char *)NULL) ? nspec : spec, dir, vopt, fopt, nopt);

done:
  ;
  opt_destroy(o);
  exit(0);
}

// msg
// file ../libdiod/diod_log.h line 17
void msg(const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  diod_log_msg(fmt, ap);
  ap = ((void **)NULL);
}

// msg_exit
// file ../libdiod/diod_log.h line 15
void msg_exit(const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  diod_log_msg(fmt, ap);
  ap = ((void **)NULL);
  exit(1);
}

// np_afid2user
// file npfs.h line 514
struct Npuser * np_afid2user(struct Npfid *afid, struct p9_str *uname, unsigned int n_uname)
{
  struct Npuser *u = (struct Npuser *)(void *)0;
  if(!(n_uname == 4294967295u))
  {
    if(!(n_uname == afid->user->uid))
    {
      np_uerror((unsigned long int)1);
      goto done;
    }

  }

  else
  {
    signed int return_value_np_strcmp_1;
    return_value_np_strcmp_1=np_strcmp(uname, afid->user->uname);
    if(!(return_value_np_strcmp_1 == 0))
    {
      np_uerror((unsigned long int)1);
      goto done;
    }

  }
  u = afid->user;
  np_user_incref(u);

done:
  ;
  return u;
}

// np_alloc_fcall
// file npfs.h line 417
struct Npfcall * np_alloc_fcall(signed int msize)
{
  struct Npfcall *fc;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct Npfcall) /*288ul*/  + (unsigned long int)msize);
  fc = (struct Npfcall *)return_value_malloc_1;
  if(!(fc == ((struct Npfcall *)NULL)))
  {
    fc->pkt = (unsigned char *)fc + (signed long int)sizeof(struct Npfcall) /*288ul*/ ;
    fc->size = (unsigned int)msize;
  }

  return fc;
}

// np_alloc_rread
// file npfs.h line 445
struct Npfcall * np_alloc_rread(unsigned int count)
{
  signed int size = (signed int)(sizeof(unsigned int) /*4ul*/  + (unsigned long int)count);
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)117);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, count, &fc->u.rread.count);
    void *return_value_buf_alloc_1;
    return_value_buf_alloc_1=buf_alloc(bufp, (signed int)count);
    fc->u.rread.data = (unsigned char *)return_value_buf_alloc_1;
    struct Npfcall *return_value_np_post_check_2;
    return_value_np_post_check_2=np_post_check(fc, bufp);
    return return_value_np_post_check_2;
  }
}

// np_assfail
// file ../libnpfs/npfs.h line 371
void np_assfail(char *ass, char *file, signed int line)
{
  struct Npsrv *srv = np_assert_srv;
  _Bool tmp_if_expr_1;
  if(!(srv == ((struct Npsrv *)NULL)))
    tmp_if_expr_1 = srv->logmsg != ((void (*)(const char *, void **))NULL) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  if(tmp_if_expr_1)
    np_logmsg(srv, "assertion failure: %s:%d: %s", file, line, ass);

  else
    fprintf(stderr, "assertion failure: %s:%d: %s", file, line, ass);
  signed int return_value_raise_2;
  return_value_raise_2=raise(6);
  if(!(return_value_raise_2 >= 0))
    exit(1);

}

// np_attach
// file fcall.c line 137
struct Npfcall * np_attach(struct Npreq *req, struct Npfcall *tc)
{
  struct Npconn *conn = req->conn;
  struct Npsrv *srv = conn->srv;
  struct Npfid *fid = req->fid;
  struct Npfid *afid = (struct Npfid *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  char a[128l];
  signed int auth_required;
  auth_required=_authrequired(srv, &tc->u.tattach.uname, tc->u.tattach.n_uname, &tc->u.tattach.aname);
  if(!(tc->u.tattach.n_uname == 4294967295u))
  {
    char *return_value_np_conn_get_client_id_1;
    return_value_np_conn_get_client_id_1=np_conn_get_client_id(conn);
    snprintf(a, sizeof(char [128l]) /*128ul*/ , "attach(%d@%s:%.*s)", tc->u.tattach.n_uname, return_value_np_conn_get_client_id_1, tc->u.tattach.aname.len, tc->u.tattach.aname.str);
  }

  else
  {
    char *return_value_np_conn_get_client_id_2;
    return_value_np_conn_get_client_id_2=np_conn_get_client_id(conn);
    snprintf(a, sizeof(char [128l]) /*128ul*/ , "attach(%.*s@%s:%.*s)", tc->u.tattach.uname.len, tc->u.tattach.uname.str, return_value_np_conn_get_client_id_2, tc->u.tattach.aname.len, tc->u.tattach.aname.str);
  }
  signed int return_value_strcmp_4;
  if(fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(srv, "%s: invalid fid (%d)", (const void *)a, tc->u.tattach.fid);
  }

  else
    if(!(tc->u.tattach.afid == 4294967295u))
    {
      afid=np_fid_find(conn, tc->u.tattach.afid);
      if(afid == ((struct Npfid *)NULL))
      {
        np_uerror((unsigned long int)1);
        np_logerr(srv, "%s: invalid afid (%d)", (const void *)a, tc->u.tattach.afid);
        goto error;
      }

      if(!((8 & (signed int)afid->type) == 0))
        goto __CPROVER_DUMP_L5;

      np_uerror((unsigned long int)1);
      np_logerr(srv, "%s: invalid afid type", (const void *)a);
    }

    else
    {

    __CPROVER_DUMP_L5:
      ;
      if(!(auth_required == 0))
      {
        if(!(afid == ((struct Npfid *)NULL)))
        {
          fid->user=np_afid2user(afid, &tc->u.tattach.uname, tc->u.tattach.n_uname);
          if(fid->user == ((struct Npuser *)NULL))
          {
            np_logerr(srv, "%s: invalid afid user", (const void *)a);
            goto error;
          }

          signed int return_value;
          return_value=srv->auth->checkauth(fid, afid, fid->aname);
          if(return_value == 0)
            np_logerr(srv, "%s: checkauth", (const void *)a);

          np_conn_set_authuser(conn, fid->user->uid);
        }

        else
        {
          unsigned int uid;
          fid->user=np_attach2user(srv, &tc->u.tattach.uname, tc->u.tattach.n_uname);
          if(fid->user == ((struct Npuser *)NULL))
          {
            np_logerr(srv, "%s: user lookup", (const void *)a);
            goto error;
          }

          if((131072 & srv->flags) == 0)
          {
            np_uerror((unsigned long int)1);
            np_logerr(srv, "%s: auth required", (const void *)a);
            goto error;
          }

          signed int return_value_np_conn_get_authuser_3;
          return_value_np_conn_get_authuser_3=np_conn_get_authuser(conn, &uid);
          if(!(return_value_np_conn_get_authuser_3 >= 0))
          {
            np_uerror((unsigned long int)1);
            np_logerr(srv, "%s: prior auth required", (const void *)a);
            goto error;
          }

          if(!(uid == 0u))
          {
            if(!(uid == fid->user->uid))
            {
              np_uerror((unsigned long int)1);
              np_logerr(srv, "%s: insufficient auth", (const void *)a);
              goto error;
            }

          }

        }
      }

      else
      {
        if(fid->user == ((struct Npuser *)NULL))
        {
          fid->user=np_attach2user(srv, &tc->u.tattach.uname, tc->u.tattach.n_uname);
          if(fid->user == ((struct Npuser *)NULL))
          {
            np_logerr(srv, "%s: user lookup", (const void *)a);
            goto error;
          }

        }

        if(fid->user->uid == 0u)
          np_conn_set_authuser(conn, fid->user->uid);

      }
      if(!(srv->remapuser == ((signed int (*)(struct Npfid *))NULL)))
      {
        signed int return_value_1;
        return_value_1=srv->remapuser(fid);
        if(!(return_value_1 >= 0))
          np_logerr(srv, "%s: error remapping user", (const void *)a);

      }

      if(!(srv->exportok == ((signed int (*)(struct Npfid *))NULL)))
      {
        signed int return_value_2;
        return_value_2=srv->exportok(fid);
        if(return_value_2 == 0)
        {
          np_logerr(srv, "%s: access denied for export", (const void *)a);
          np_uerror((unsigned long int)1);
        }

      }

      return_value_strcmp_4=strcmp(fid->aname, "ctl");
      if(return_value_strcmp_4 == 0)
        rc=np_ctl_attach(fid, afid, fid->aname);

      else
      {
        if(srv->attach == ((struct Npfcall * (*)(struct Npfid *, struct Npfid *, struct p9_str *))NULL))
        {
          np_uerror((unsigned long int)38);
          goto error;
        }

        rc=srv->attach(fid, afid, &tc->u.tattach.aname);
      }
      if(!(rc == ((struct Npfcall *)NULL)))
        np_fid_incref(fid);

    }

error:
  ;
  if(!(afid == ((struct Npfid *)NULL)))
    np_fid_decref(&afid);

  return rc;
}

// np_attach2user
// file npfs.h line 513
struct Npuser * np_attach2user(struct Npsrv *srv, struct p9_str *uname, unsigned int n_uname)
{
  struct Npuser *u = (struct Npuser *)(void *)0;
  char *s;
  if(!(n_uname == 4294967295u))
    u=np_uid2user(srv, n_uname);

  else
    if((signed int)uname->len == 0)
      np_uerror((unsigned long int)5);

    else
    {
      s=np_strdup(uname);
      if(s == ((char *)NULL))
        np_uerror((unsigned long int)12);

      else
      {
        u=np_uname2user(srv, s);
        free((void *)s);
      }
    }

done:
  ;
  return u;
}

// np_auth
// file fcall.c line 80
struct Npfcall * np_auth(struct Npreq *req, struct Npfcall *tc)
{
  struct Npconn *conn = req->conn;
  struct Npsrv *srv = conn->srv;
  struct Npfid *afid = req->fid;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  struct p9_qid aqid;
  char a[128l];
  signed int auth_required;
  auth_required=_authrequired(srv, &tc->u.tauth.uname, tc->u.tauth.n_uname, &tc->u.tauth.aname);
  if(!(tc->u.tauth.n_uname == 4294967295u))
  {
    char *return_value_np_conn_get_client_id_1;
    return_value_np_conn_get_client_id_1=np_conn_get_client_id(conn);
    snprintf(a, sizeof(char [128l]) /*128ul*/ , "auth(%d@%s:%.*s)", tc->u.tauth.n_uname, return_value_np_conn_get_client_id_1, tc->u.tauth.aname.len, tc->u.tauth.aname.str);
  }

  else
  {
    char *return_value_np_conn_get_client_id_2;
    return_value_np_conn_get_client_id_2=np_conn_get_client_id(conn);
    snprintf(a, sizeof(char [128l]) /*128ul*/ , "auth(%.*s@%s:%.*s)", tc->u.tauth.uname.len, tc->u.tauth.uname.str, return_value_np_conn_get_client_id_2, tc->u.tauth.aname.len, tc->u.tauth.aname.str);
  }
  signed int return_value;
  if(auth_required == 0)
  {
    rc=np_create_rlerror((unsigned int)2);
    if(rc == ((struct Npfcall *)NULL))
    {
      np_uerror((unsigned long int)12);
      np_logerr(srv, "%s: creating response", (const void *)a);
    }

  }

  else
    if(afid == ((struct Npfid *)NULL))
    {
      np_uerror((unsigned long int)5);
      np_logerr(srv, "%s: invalid afid (%d)", (const void *)a, tc->u.tauth.afid);
    }

    else
    {
      np_fid_incref(afid);
      afid->user=np_attach2user(srv, &tc->u.tauth.uname, tc->u.tauth.n_uname);
      if(afid->user == ((struct Npuser *)NULL))
        np_logerr(srv, "%s: user lookup", (const void *)a);

      else
      {
        afid->type = (unsigned char)8;
        return_value=srv->auth->startauth(afid, afid->aname, &aqid);
        if(return_value == 0)
          np_logerr(srv, "%s: startauth", (const void *)a);

        else
        {
          if((8 & (signed int)aqid.type) == 0)
            np_assfail("(aqid.type & P9_QTAUTH)", "fcall.c", 126);

          rc=np_create_rauth(&aqid);
          if(rc == ((struct Npfcall *)NULL))
          {
            np_uerror((unsigned long int)12);
            np_logerr(srv, "%s: creating response", (const void *)a);
          }

        }
      }
    }

error:
  ;
  return rc;
}

// np_clunk
// file fcall.c line 528
struct Npfcall * np_clunk(struct Npreq *req, struct Npfcall *tc)
{
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(req->fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    char *return_value_np_conn_get_client_id_1;
    return_value_np_conn_get_client_id_1=np_conn_get_client_id(req->conn);
    np_logerr(req->conn->srv, "%s: clunk: invalid fid: %d", return_value_np_conn_get_client_id_1, tc->u.tclunk.fid);
    goto done;
  }

  if(!((8 & (signed int)req->fid->type) == 0))
  {
    if(!(req->conn->srv->auth == ((struct Npauth *)NULL)))
    {
      rc=np_create_rclunk();
      if(rc == ((struct Npfcall *)NULL))
        np_uerror((unsigned long int)12);

    }

    else
      np_uerror((unsigned long int)38);
  }

  else
    if(!((4 & (signed int)req->fid->type) == 0))
      rc=np_ctl_clunk(req->fid);

    else
      if(req->conn->srv->clunk == ((struct Npfcall * (*)(struct Npfid *))NULL))
        np_uerror((unsigned long int)38);

      else
        rc=req->conn->srv->clunk(req->fid);

done:
  ;
  if(!(req->fid == ((struct Npfid *)NULL)))
    np_fid_decref(&req->fid);

  return rc;
}

// np_conn_create
// file ../libnpfs/npfs.h line 375
struct Npconn * np_conn_create(struct Npsrv *srv, struct Nptrans *trans, char *client_id, signed int flags)
{
  struct Npconn *conn;
  signed int np_conn_create__1__err;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct Npconn) /*328ul*/ );
  conn = (struct Npconn *)return_value_malloc_1;
  if(conn == ((struct Npconn *)NULL))
  {
    np_uerror((unsigned long int)12);
    return (struct Npconn *)(void *)0;
  }

  else
  {
    pthread_mutex_init(&conn->lock, (const union anonymous_6 *)(void *)0);
    pthread_mutex_init(&conn->wlock, (const union anonymous_6 *)(void *)0);
    pthread_cond_init(&conn->refcond, (const union anonymous_6 *)(void *)0);
    conn->refcount = 0;
    conn->srv = srv;
    conn->msize = srv->msize;
    conn->shutdown = 0;
    conn->fidpool=np_fidpool_create();
    if(conn->fidpool == ((struct Npfidpool *)NULL))
    {
      free((void *)conn);
      np_uerror((unsigned long int)12);
      return (struct Npconn *)(void *)0;
    }

    else
    {
      snprintf(conn->client_id, sizeof(char [128l]) /*128ul*/ , "%s", client_id);
      conn->authuser = (unsigned int)~0;
      conn->flags = flags;
      conn->trans = trans;
      conn->aux = (void *)0;
      np_srv_add_conn(srv, conn);
      np_conn_create__1__err=pthread_create(&conn->rthread, (const union pthread_attr_t *)(void *)0, np_conn_read_proc, (void *)conn);
      if(!(np_conn_create__1__err == 0))
      {
        np_conn_destroy(conn);
        np_uerror((unsigned long int)np_conn_create__1__err);
        return (struct Npconn *)(void *)0;
      }

      else
        return conn;
    }
  }
}

// np_conn_decref
// file conn.c line 97
void np_conn_decref(struct Npconn *conn)
{
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&conn->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "conn.c", 99);

  }
  while((_Bool)0);
  if(!(conn->refcount >= 1))
    np_assfail("conn->refcount > 0", "conn.c", 100);

  conn->refcount = conn->refcount - 1;
  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&conn->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "conn.c", 102);

  }
  while((_Bool)0);
  do
  {
    signed int pthread_cond_signal_result;
    pthread_cond_signal_result=pthread_cond_signal(&conn->refcond);
    if(!(pthread_cond_signal_result == 0))
      np_assfail("pthread_cond_signal_result == 0", "conn.c", 103);

  }
  while((_Bool)0);
}

// np_conn_destroy
// file conn.c line 107
static void np_conn_destroy(struct Npconn *conn)
{
  signed int n;
  if(conn == ((struct Npconn *)NULL))
    np_assfail("conn != NULL", "conn.c", 111);

  if(!(conn->refcount == 0))
    np_assfail("conn->refcount == 0", "conn.c", 112);

  np_srv_remove_conn(conn->srv, conn);
  if(!(conn->fidpool == ((struct Npfidpool *)NULL)))
  {
    n=np_fidpool_destroy(conn->fidpool);
    if(n >= 1)
    {
      char *return_value_np_conn_get_client_id_1;
      return_value_np_conn_get_client_id_1=np_conn_get_client_id(conn);
      np_logmsg(conn->srv, "%s: connection closed with %d unclunked fids", return_value_np_conn_get_client_id_1, n);
    }

    conn->fidpool = (struct Npfidpool *)(void *)0;
  }

  if(!(conn->trans == ((struct Nptrans *)NULL)))
  {
    np_trans_destroy(conn->trans);
    conn->trans = (struct Nptrans *)(void *)0;
  }

  pthread_mutex_destroy(&conn->lock);
  pthread_mutex_destroy(&conn->wlock);
  pthread_cond_destroy(&conn->refcond);
  free((void *)conn);
}

// np_conn_flush
// file conn.c line 224
static void np_conn_flush(struct Npconn *conn)
{
  struct Nptpool *tp;
  struct Npreq *creq;
  struct Npreq *nextreq;
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&conn->srv->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "conn.c", 229);

  }
  while((_Bool)0);
  tp = conn->srv->tpool;
  for( ; !(tp == ((struct Nptpool *)NULL)); tp = tp->next)
  {
    creq = tp->reqs_first;
    for( ; !(creq == ((struct Npreq *)NULL)); creq = nextreq)
    {
      nextreq = creq->next;
      if(creq->conn == conn)
      {
        np_srv_remove_req(tp, creq);
        np_req_unref(creq);
      }

    }
    creq = tp->workreqs;
    for( ; !(creq == ((struct Npreq *)NULL)); creq = creq->next)
      if(creq->conn == conn)
      {
        creq->state = (enum anonymous_10)REQ_NOREPLY;
        if(!((1048576 & conn->srv->flags) == 0))
          pthread_kill(creq->wthread->thread, 12);

      }

  }
  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&conn->srv->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "conn.c", 246);

  }
  while((_Bool)0);
}

// np_conn_get_authuser
// file conn.c line 278
signed int np_conn_get_authuser(struct Npconn *conn, unsigned int *uidp)
{
  signed int ret = -1;
  if(!(conn->authuser == 4294967295u))
  {
    if(!(uidp == ((unsigned int *)NULL)))
      *uidp = conn->authuser;

    ret = 0;
  }

  return ret;
}

// np_conn_get_client_id
// file ../libnpfs/npfs.h line 379
char * np_conn_get_client_id(struct Npconn *conn)
{
  return conn->client_id;
}

// np_conn_incref
// file conn.c line 89
void np_conn_incref(struct Npconn *conn)
{
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&conn->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "conn.c", 91);

  }
  while((_Bool)0);
  conn->refcount = conn->refcount + 1;
  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&conn->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "conn.c", 93);

  }
  while((_Bool)0);
}

// np_conn_read_proc
// file conn.c line 159
static void * np_conn_read_proc(void *a)
{
  struct Npconn *conn = (struct Npconn *)a;
  struct Npsrv *srv = conn->srv;
  struct Npreq *req;
  struct Npfcall *fc;
  unsigned long int return_value_pthread_self_1;
  return_value_pthread_self_1=pthread_self();
  pthread_detach(return_value_pthread_self_1);
  do
  {
    signed int return_value_np_trans_recv_2;
    return_value_np_trans_recv_2=np_trans_recv(conn->trans, &fc, conn->msize);
    if(!(return_value_np_trans_recv_2 >= 0))
    {
      np_logerr(srv, "recv error - dropping connection to '%s'", (const void *)conn->client_id);
      break;
    }

    if(fc == ((struct Npfcall *)NULL))
      break;

    _debug_trace(srv, fc);
    req=np_req_alloc(conn, fc);
    if(req == ((struct Npreq *)NULL))
    {
      np_logmsg(srv, "out of memory in receive path - dropping connection to '%s'", (const void *)conn->client_id);
      free((void *)fc);
      break;
    }

    if((signed int)fc->type == 108)
    {
      signed int return_value_np_flush_3;
      return_value_np_flush_3=np_flush(req, fc);
      if(!(return_value_np_flush_3 == 0))
      {
        np_req_respond_flush(req);
        np_req_unref(req);
      }

      do
      {
        signed int pthread_mutex_lock_result;
        pthread_mutex_lock_result=pthread_mutex_lock(&srv->lock);
        if(!(pthread_mutex_lock_result == 0))
          np_assfail("pthread_mutex_lock_result == 0", "conn.c", 199);

      }
      while((_Bool)0);
      srv->tpool->stats.nreqs[(signed long int)108] = srv->tpool->stats.nreqs[(signed long int)108] + 1ul;
      do
      {
        signed int pthread_mutex_unlock_result;
        pthread_mutex_unlock_result=pthread_mutex_unlock(&srv->lock);
        if(!(pthread_mutex_unlock_result == 0))
          np_assfail("pthread_mutex_unlock_result == 0", "conn.c", 201);

      }
      while((_Bool)0);
    }

    else
    {
      do
      {
        signed int np_conn_read_proc__1__1__1__4__1__pthread_mutex_lock_result;
        np_conn_read_proc__1__1__1__4__1__pthread_mutex_lock_result=pthread_mutex_lock(&srv->lock);
        if(!(np_conn_read_proc__1__1__1__4__1__pthread_mutex_lock_result == 0))
          np_assfail("pthread_mutex_lock_result == 0", "conn.c", 203);

      }
      while((_Bool)0);
      np_srv_add_req(srv, req);
      do
      {
        signed int np_conn_read_proc__1__1__1__4__2__pthread_mutex_unlock_result;
        np_conn_read_proc__1__1__1__4__2__pthread_mutex_unlock_result=pthread_mutex_unlock(&srv->lock);
        if(!(np_conn_read_proc__1__1__1__4__2__pthread_mutex_unlock_result == 0))
          np_assfail("pthread_mutex_unlock_result == 0", "conn.c", 205);

      }
      while((_Bool)0);
    }
  }
  while((_Bool)1);
  np_conn_flush(conn);
  do
  {
    signed int np_conn_read_proc__1__2__pthread_mutex_lock_result;
    np_conn_read_proc__1__2__pthread_mutex_lock_result=pthread_mutex_lock(&conn->lock);
    if(!(np_conn_read_proc__1__2__pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "conn.c", 214);

  }
  while((_Bool)0);
  while(conn->refcount >= 1)
    do
    {
      signed int pthread_cond_wait_result;
      pthread_cond_wait_result=pthread_cond_wait(&conn->refcond, &conn->lock);
      if(!(pthread_cond_wait_result == 0))
        np_assfail("pthread_cond_wait_result == 0", "conn.c", 216);

    }
    while((_Bool)0);
  do
  {
    signed int np_conn_read_proc__1__4__pthread_mutex_unlock_result;
    np_conn_read_proc__1__4__pthread_mutex_unlock_result=pthread_mutex_unlock(&conn->lock);
    if(!(np_conn_read_proc__1__4__pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "conn.c", 217);

  }
  while((_Bool)0);
  np_conn_destroy(conn);
  return (void *)0;
}

// np_conn_respond
// file conn.c line 250
void np_conn_respond(struct Npreq *req)
{
  signed int n;
  struct Npconn *conn = req->conn;
  struct Npsrv *srv = conn->srv;
  struct Npfcall *rc = req->rcall;
  _debug_trace(srv, rc);
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&conn->wlock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "conn.c", 258);

  }
  while((_Bool)0);
  n=np_trans_send(conn->trans, rc);
  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&conn->wlock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "conn.c", 260);

  }
  while((_Bool)0);
  if(!(n >= 0))
    np_logerr(srv, "send to '%s'", (const void *)conn->client_id);

}

// np_conn_set_authuser
// file conn.c line 272
void np_conn_set_authuser(struct Npconn *conn, unsigned int authuser)
{
  conn->authuser = authuser;
}

// np_create_common
// file np.c line 254
static struct Npfcall * np_create_common(struct cbuf *bufp, unsigned int size, unsigned char id)
{
  struct Npfcall *fc;
  size = size + (unsigned int)(sizeof(unsigned int) /*4ul*/  + sizeof(unsigned char) /*1ul*/  + sizeof(unsigned short int) /*2ul*/ );
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct Npfcall) /*288ul*/  + (unsigned long int)size);
  fc = (struct Npfcall *)return_value_malloc_1;
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    fc->pkt = (unsigned char *)fc + (signed long int)sizeof(struct Npfcall) /*288ul*/ ;
    buf_init(bufp, (void *)(char *)fc->pkt, (signed int)size);
    buf_put_int32(bufp, size, &fc->size);
    buf_put_int8(bufp, id, &fc->type);
    buf_put_int16(bufp, (unsigned short int)~0, &fc->tag);
    return fc;
  }
}

// np_create_common_static
// file np.c line 271
static struct Npfcall * np_create_common_static(struct cbuf *bufp, unsigned int size, unsigned char id, void *buf, signed int buflen)
{
  struct Npfcall *fc;
  size = size + (unsigned int)(sizeof(unsigned int) /*4ul*/  + sizeof(unsigned char) /*1ul*/  + sizeof(unsigned short int) /*2ul*/ );
  if(!((unsigned long int)buflen >= sizeof(struct Npfcall) /*288ul*/  + (unsigned long int)size))
    np_assfail("buflen >= sizeof(Npfcall) + size", "np.c", 277);

  fc = (struct Npfcall *)buf;
  fc->pkt = (unsigned char *)fc + (signed long int)sizeof(struct Npfcall) /*288ul*/ ;
  buf_init(bufp, (void *)(char *)fc->pkt, (signed int)size);
  buf_put_int32(bufp, size, &fc->size);
  buf_put_int8(bufp, id, &fc->type);
  buf_put_int16(bufp, (unsigned short int)~0, &fc->tag);
  return fc;
}

// np_create_rattach
// file np.c line 434
struct Npfcall * np_create_rattach(struct p9_qid *qid)
{
  signed int size = (signed int)(sizeof(unsigned char) /*1ul*/  + sizeof(unsigned int) /*4ul*/  + sizeof(unsigned long int) /*8ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)105);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_qid(bufp, qid, &fc->u.rattach.qid);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rauth
// file npfs.h line 427
struct Npfcall * np_create_rauth(struct p9_qid *aqid)
{
  signed int size = (signed int)(sizeof(unsigned char) /*1ul*/  + sizeof(unsigned int) /*4ul*/  + sizeof(unsigned long int) /*8ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)103);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_qid(bufp, aqid, &fc->u.rauth.qid);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rclunk
// file npfs.h line 441
struct Npfcall * np_create_rclunk(void)
{
  signed int size = 0;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)121);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rflush
// file np.c line 385
struct Npfcall * np_create_rflush(void)
{
  signed int size = 0;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)109);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rflush_static
// file np.c line 399
struct Npfcall * np_create_rflush_static(void *buf, signed int buflen)
{
  signed int size = 0;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common_static(bufp, (unsigned int)size, (unsigned char)109, buf, buflen);
  struct Npfcall *return_value_np_post_check_1;
  return_value_np_post_check_1=np_post_check(fc, bufp);
  return return_value_np_post_check_1;
}

// np_create_rfsync
// file np.c line 1136
struct Npfcall * np_create_rfsync(void)
{
  signed int size = 0;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)51);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rgetattr
// file np.c line 926
struct Npfcall * np_create_rgetattr(unsigned long int valid, struct p9_qid *qid, unsigned int mode, unsigned int uid, unsigned int gid, unsigned long int nlink, unsigned long int rdev, unsigned long int size, unsigned long int blksize, unsigned long int blocks, unsigned long int atime_sec, unsigned long int atime_nsec, unsigned long int mtime_sec, unsigned long int mtime_nsec, unsigned long int ctime_sec, unsigned long int ctime_nsec, unsigned long int btime_sec, unsigned long int btime_nsec, unsigned long int gen, unsigned long int data_version)
{
  signed int bufsize = (signed int)(sizeof(unsigned long int) /*8ul*/  + sizeof(unsigned char) /*1ul*/  + sizeof(unsigned int) /*4ul*/  + sizeof(unsigned long int) /*8ul*/  + (unsigned long int)3 * sizeof(unsigned int) /*4ul*/  + (unsigned long int)15 * sizeof(unsigned long int) /*8ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)bufsize, (unsigned char)25);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int64(bufp, valid, &fc->u.rgetattr.valid);
    buf_put_qid(bufp, qid, &fc->u.rgetattr.qid);
    buf_put_int32(bufp, mode, &fc->u.rgetattr.mode);
    buf_put_int32(bufp, uid, &fc->u.rgetattr.uid);
    buf_put_int32(bufp, gid, &fc->u.rgetattr.gid);
    buf_put_int64(bufp, nlink, &fc->u.rgetattr.nlink);
    buf_put_int64(bufp, rdev, &fc->u.rgetattr.rdev);
    buf_put_int64(bufp, size, &fc->u.rgetattr.size);
    buf_put_int64(bufp, blksize, &fc->u.rgetattr.blksize);
    buf_put_int64(bufp, blocks, &fc->u.rgetattr.blocks);
    buf_put_int64(bufp, atime_sec, &fc->u.rgetattr.atime_sec);
    buf_put_int64(bufp, atime_nsec, &fc->u.rgetattr.atime_nsec);
    buf_put_int64(bufp, mtime_sec, &fc->u.rgetattr.mtime_sec);
    buf_put_int64(bufp, mtime_nsec, &fc->u.rgetattr.mtime_nsec);
    buf_put_int64(bufp, ctime_sec, &fc->u.rgetattr.ctime_sec);
    buf_put_int64(bufp, ctime_nsec, &fc->u.rgetattr.ctime_nsec);
    buf_put_int64(bufp, btime_sec, &fc->u.rgetattr.btime_sec);
    buf_put_int64(bufp, btime_nsec, &fc->u.rgetattr.btime_nsec);
    buf_put_int64(bufp, gen, &fc->u.rgetattr.gen);
    buf_put_int64(bufp, data_version, &fc->u.rgetattr.data_version);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rgetlock
// file np.c line 1209
struct Npfcall * np_create_rgetlock(unsigned char type, unsigned long int start, unsigned long int length, unsigned int proc_id, char *client_id)
{
  signed int size;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(client_id);
  size = (signed int)(sizeof(unsigned char) /*1ul*/  + (unsigned long int)2 * sizeof(unsigned long int) /*8ul*/  + sizeof(unsigned int) /*4ul*/  + sizeof(unsigned short int) /*2ul*/  + return_value_strlen_1);
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)55);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int8(bufp, type, &fc->u.rgetlock.type);
    buf_put_int64(bufp, start, &fc->u.rgetlock.start);
    buf_put_int64(bufp, length, &fc->u.rgetlock.length);
    buf_put_int32(bufp, proc_id, &fc->u.rgetlock.proc_id);
    buf_put_str(bufp, client_id, &fc->u.rgetlock.client_id);
    struct Npfcall *return_value_np_post_check_2;
    return_value_np_post_check_2=np_post_check(fc, bufp);
    return return_value_np_post_check_2;
  }
}

// np_create_rlcreate
// file np.c line 762
struct Npfcall * np_create_rlcreate(struct p9_qid *qid, unsigned int iounit)
{
  signed int size = (signed int)(sizeof(unsigned char) /*1ul*/  + sizeof(unsigned int) /*4ul*/  + sizeof(unsigned long int) /*8ul*/  + sizeof(unsigned int) /*4ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)15);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_qid(bufp, qid, &fc->u.rlcreate.qid);
    buf_put_int32(bufp, iounit, &fc->u.rlcreate.iounit);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rlerror
// file npfs.h line 447
struct Npfcall * np_create_rlerror(unsigned int ecode)
{
  signed int size = (signed int)sizeof(unsigned int) /*4ul*/ ;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)7);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, ecode, &fc->u.rlerror.ecode);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rlerror_static
// file np.c line 657
struct Npfcall * np_create_rlerror_static(unsigned int ecode, void *buf, signed int bufsize)
{
  signed int size = (signed int)sizeof(unsigned int) /*4ul*/ ;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common_static(bufp, (unsigned int)size, (unsigned char)7, buf, bufsize);
  buf_put_int32(bufp, ecode, &fc->u.rlerror.ecode);
  struct Npfcall *return_value_np_post_check_1;
  return_value_np_post_check_1=np_post_check(fc, bufp);
  return return_value_np_post_check_1;
}

// np_create_rlink
// file np.c line 1246
struct Npfcall * np_create_rlink(void)
{
  signed int size = 0;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)71);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rlock
// file np.c line 1172
struct Npfcall * np_create_rlock(unsigned char status)
{
  signed int size = (signed int)sizeof(unsigned char) /*1ul*/ ;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)53);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int8(bufp, status, &fc->u.rlock.status);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rlopen
// file np.c line 726
struct Npfcall * np_create_rlopen(struct p9_qid *qid, unsigned int iounit)
{
  signed int size = (signed int)(sizeof(unsigned char) /*1ul*/  + sizeof(unsigned int) /*4ul*/  + sizeof(unsigned long int) /*8ul*/  + sizeof(unsigned int) /*4ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)13);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_qid(bufp, qid, &fc->u.rlopen.qid);
    buf_put_int32(bufp, iounit, &fc->u.rlopen.iounit);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rmkdir
// file np.c line 1277
struct Npfcall * np_create_rmkdir(struct p9_qid *qid)
{
  signed int size = (signed int)(sizeof(unsigned char) /*1ul*/  + sizeof(unsigned int) /*4ul*/  + sizeof(unsigned long int) /*8ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)73);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_qid(bufp, qid, &fc->u.rmkdir.qid);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rmknod
// file np.c line 833
struct Npfcall * np_create_rmknod(struct p9_qid *qid)
{
  signed int size = (signed int)(sizeof(unsigned char) /*1ul*/  + sizeof(unsigned int) /*4ul*/  + sizeof(unsigned long int) /*8ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)19);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_qid(bufp, qid, &fc->u.rmknod.qid);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rread
// file np.c line 523
struct Npfcall * np_create_rread(unsigned int count, unsigned char *data)
{
  struct Npfcall *fc;
  fc=np_alloc_rread(count);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    if(!(fc->u.rread.data == ((unsigned char *)NULL)))
      memmove((void *)fc->u.rread.data, (const void *)data, (unsigned long int)count);

    return fc;
  }
}

// np_create_rreaddir
// file np.c line 1072
struct Npfcall * np_create_rreaddir(unsigned int count)
{
  signed int size = (signed int)(sizeof(unsigned int) /*4ul*/  + (unsigned long int)count);
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)41);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, count, &fc->u.rreaddir.count);
    void *return_value_buf_alloc_1;
    return_value_buf_alloc_1=buf_alloc(bufp, (signed int)count);
    fc->u.rreaddir.data = (unsigned char *)return_value_buf_alloc_1;
    struct Npfcall *return_value_np_post_check_2;
    return_value_np_post_check_2=np_post_check(fc, bufp);
    return return_value_np_post_check_2;
  }
}

// np_create_rreadlink
// file np.c line 895
struct Npfcall * np_create_rreadlink(char *target)
{
  signed int size;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(target);
  size = (signed int)(sizeof(unsigned short int) /*2ul*/  + return_value_strlen_1);
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)23);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_str(bufp, target, &fc->u.rreadlink.target);
    struct Npfcall *return_value_np_post_check_2;
    return_value_np_post_check_2=np_post_check(fc, bufp);
    return return_value_np_post_check_2;
  }
}

// np_create_rremove
// file np.c line 629
struct Npfcall * np_create_rremove(void)
{
  signed int size = 0;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)123);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rrename
// file np.c line 865
struct Npfcall * np_create_rrename(void)
{
  signed int size = 0;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)21);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rrenameat
// file np.c line 1311
struct Npfcall * np_create_rrenameat(void)
{
  signed int size = 0;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)75);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rsetattr
// file np.c line 992
struct Npfcall * np_create_rsetattr(void)
{
  signed int size = 0;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)27);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rstatfs
// file np.c line 687
struct Npfcall * np_create_rstatfs(unsigned int type, unsigned int bsize, unsigned long int blocks, unsigned long int bfree, unsigned long int bavail, unsigned long int files, unsigned long int ffree, unsigned long int fsid, unsigned int namelen)
{
  signed int size = (signed int)((unsigned long int)2 * sizeof(unsigned int) /*4ul*/  + (unsigned long int)6 * sizeof(unsigned long int) /*8ul*/  + sizeof(unsigned int) /*4ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)9);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, type, &fc->u.rstatfs.type);
    buf_put_int32(bufp, bsize, &fc->u.rstatfs.bsize);
    buf_put_int64(bufp, blocks, &fc->u.rstatfs.blocks);
    buf_put_int64(bufp, bfree, &fc->u.rstatfs.bfree);
    buf_put_int64(bufp, bavail, &fc->u.rstatfs.bavail);
    buf_put_int64(bufp, files, &fc->u.rstatfs.files);
    buf_put_int64(bufp, ffree, &fc->u.rstatfs.ffree);
    buf_put_int64(bufp, fsid, &fc->u.rstatfs.fsid);
    buf_put_int32(bufp, namelen, &fc->u.rstatfs.namelen);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rsymlink
// file np.c line 797
struct Npfcall * np_create_rsymlink(struct p9_qid *qid)
{
  signed int size = (signed int)(sizeof(unsigned char) /*1ul*/  + sizeof(unsigned int) /*4ul*/  + sizeof(unsigned long int) /*8ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)17);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_qid(bufp, qid, &fc->u.rsymlink.qid);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_runlinkat
// file np.c line 1342
struct Npfcall * np_create_runlinkat(void)
{
  signed int size = 0;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)77);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rversion
// file npfs.h line 425
struct Npfcall * np_create_rversion(unsigned int msize, char *version)
{
  signed int size;
  unsigned long int tmp_if_expr_2;
  unsigned long int return_value_strlen_1;
  if(!(version == ((char *)NULL)))
  {
    return_value_strlen_1=strlen(version);
    tmp_if_expr_2 = return_value_strlen_1;
  }

  else
    tmp_if_expr_2 = (unsigned long int)0;
  size = (signed int)(sizeof(unsigned int) /*4ul*/  + sizeof(unsigned short int) /*2ul*/  + tmp_if_expr_2);
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)101);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, msize, &fc->u.rversion.msize);
    buf_put_str(bufp, version, &fc->u.rversion.version);
    struct Npfcall *return_value_np_post_check_3;
    return_value_np_post_check_3=np_post_check(fc, bufp);
    return return_value_np_post_check_3;
  }
}

// np_create_rwalk
// file npfs.h line 435
struct Npfcall * np_create_rwalk(signed int nwqid, struct p9_qid *wqids)
{
  signed int i;
  signed int size = (signed int)(sizeof(unsigned short int) /*2ul*/  + (unsigned long int)nwqid * (sizeof(unsigned char) /*1ul*/  + sizeof(unsigned int) /*4ul*/  + sizeof(unsigned long int) /*8ul*/ ));
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  if(nwqid >= 17)
    np_assfail("nwqid <= P9_MAXWELEM", "np.c", 478);

  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)111);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int16(bufp, (unsigned short int)nwqid, &fc->u.rwalk.nwqid);
    i = 0;
    for( ; !(i >= nwqid); i = i + 1)
      buf_put_qid(bufp, &wqids[(signed long int)i], &fc->u.rwalk.wqids[(signed long int)i]);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rwrite
// file npfs.h line 439
struct Npfcall * np_create_rwrite(unsigned int count)
{
  signed int size = (signed int)sizeof(unsigned int) /*4ul*/ ;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)119);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, count, &fc->u.rwrite.count);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rxattrcreate
// file np.c line 1058
struct Npfcall * np_create_rxattrcreate(void)
{
  signed int size = 0;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)33);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_rxattrwalk
// file np.c line 1023
struct Npfcall * np_create_rxattrwalk(unsigned long int size)
{
  signed int bufsize = (signed int)sizeof(unsigned long int) /*8ul*/ ;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)bufsize, (unsigned char)31);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int64(bufp, size, &fc->u.rxattrwalk.size);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_tattach
// file ../libnpfs/npfs.h line 431
struct Npfcall * np_create_tattach(unsigned int fid, unsigned int afid, char *uname, char *aname, unsigned int n_uname)
{
  signed int size;
  unsigned long int tmp_if_expr_2;
  unsigned long int return_value_strlen_1;
  if(!(uname == ((char *)NULL)))
  {
    return_value_strlen_1=strlen(uname);
    tmp_if_expr_2 = return_value_strlen_1;
  }

  else
    tmp_if_expr_2 = (unsigned long int)0;
  unsigned long int tmp_if_expr_4;
  unsigned long int return_value_strlen_3;
  if(!(aname == ((char *)NULL)))
  {
    return_value_strlen_3=strlen(aname);
    tmp_if_expr_4 = return_value_strlen_3;
  }

  else
    tmp_if_expr_4 = (unsigned long int)0;
  size = (signed int)((unsigned long int)2 * sizeof(unsigned int) /*4ul*/  + sizeof(unsigned short int) /*2ul*/  + tmp_if_expr_2 + sizeof(unsigned short int) /*2ul*/  + tmp_if_expr_4 + sizeof(unsigned int) /*4ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)104);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.tattach.fid);
    buf_put_int32(bufp, afid, &fc->u.tattach.afid);
    buf_put_str(bufp, uname, &fc->u.tattach.uname);
    buf_put_str(bufp, aname, &fc->u.tattach.aname);
    buf_put_int32(bufp, n_uname, &fc->u.tattach.n_uname);
    struct Npfcall *return_value_np_post_check_5;
    return_value_np_post_check_5=np_post_check(fc, bufp);
    return return_value_np_post_check_5;
  }
}

// np_create_tauth
// file ../libnpfs/npfs.h line 426
struct Npfcall * np_create_tauth(unsigned int fid, char *uname, char *aname, unsigned int n_uname)
{
  signed int size;
  unsigned long int tmp_if_expr_2;
  unsigned long int return_value_strlen_1;
  if(!(uname == ((char *)NULL)))
  {
    return_value_strlen_1=strlen(uname);
    tmp_if_expr_2 = return_value_strlen_1;
  }

  else
    tmp_if_expr_2 = (unsigned long int)0;
  unsigned long int tmp_if_expr_4;
  unsigned long int return_value_strlen_3;
  if(!(aname == ((char *)NULL)))
  {
    return_value_strlen_3=strlen(aname);
    tmp_if_expr_4 = return_value_strlen_3;
  }

  else
    tmp_if_expr_4 = (unsigned long int)0;
  size = (signed int)(sizeof(unsigned int) /*4ul*/  + sizeof(unsigned short int) /*2ul*/  + tmp_if_expr_2 + sizeof(unsigned short int) /*2ul*/  + tmp_if_expr_4 + sizeof(unsigned int) /*4ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)102);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.tauth.afid);
    buf_put_str(bufp, uname, &fc->u.tauth.uname);
    buf_put_str(bufp, aname, &fc->u.tauth.aname);
    buf_put_int32(bufp, n_uname, &fc->u.tauth.n_uname);
    struct Npfcall *return_value_np_post_check_5;
    return_value_np_post_check_5=np_post_check(fc, bufp);
    return return_value_np_post_check_5;
  }
}

// np_create_tclunk
// file ../libnpfs/npfs.h line 440
struct Npfcall * np_create_tclunk(unsigned int fid)
{
  signed int size = (signed int)sizeof(unsigned int) /*4ul*/ ;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)120);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.tclunk.fid);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_tflush
// file np.c line 370
struct Npfcall * np_create_tflush(unsigned short int oldtag)
{
  signed int size = (signed int)sizeof(unsigned short int) /*2ul*/ ;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)108);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int16(bufp, oldtag, &fc->u.tflush.oldtag);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_tfsync
// file np.c line 1121
struct Npfcall * np_create_tfsync(unsigned int fid)
{
  signed int size = (signed int)sizeof(unsigned int) /*4ul*/ ;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)50);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.tfsync.fid);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_tgetattr
// file ../libnpfs/npfs.h line 466
struct Npfcall * np_create_tgetattr(unsigned int fid, unsigned long int request_mask)
{
  signed int size = (signed int)(sizeof(unsigned int) /*4ul*/  + sizeof(unsigned long int) /*8ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)24);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.tgetattr.fid);
    buf_put_int64(bufp, request_mask, &fc->u.tgetattr.request_mask);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_tgetlock
// file np.c line 1187
struct Npfcall * np_create_tgetlock(unsigned int fid, unsigned char type, unsigned long int start, unsigned long int length, unsigned int proc_id, char *client_id)
{
  signed int size;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(client_id);
  size = (signed int)(sizeof(unsigned int) /*4ul*/  + sizeof(unsigned char) /*1ul*/  + (unsigned long int)2 * sizeof(unsigned long int) /*8ul*/  + sizeof(unsigned int) /*4ul*/  + sizeof(unsigned short int) /*2ul*/  + return_value_strlen_1);
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)54);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.tgetlock.fid);
    buf_put_int8(bufp, type, &fc->u.tgetlock.type);
    buf_put_int64(bufp, start, &fc->u.tgetlock.start);
    buf_put_int64(bufp, length, &fc->u.tgetlock.length);
    buf_put_int32(bufp, proc_id, &fc->u.tgetlock.proc_id);
    buf_put_str(bufp, client_id, &fc->u.tgetlock.client_id);
    struct Npfcall *return_value_np_post_check_2;
    return_value_np_post_check_2=np_post_check(fc, bufp);
    return return_value_np_post_check_2;
  }
}

// np_create_tlcreate
// file ../libnpfs/npfs.h line 455
struct Npfcall * np_create_tlcreate(unsigned int fid, char *name, unsigned int flags, unsigned int mode, unsigned int gid)
{
  signed int size;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(name);
  size = (signed int)(sizeof(unsigned int) /*4ul*/  + sizeof(unsigned short int) /*2ul*/  + return_value_strlen_1 + sizeof(unsigned int) /*4ul*/  + sizeof(unsigned int) /*4ul*/  + sizeof(unsigned int) /*4ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)14);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.tlcreate.fid);
    buf_put_str(bufp, name, &fc->u.tlcreate.name);
    buf_put_int32(bufp, flags, &fc->u.tlcreate.flags);
    buf_put_int32(bufp, mode, &fc->u.tlcreate.mode);
    buf_put_int32(bufp, gid, &fc->u.tlcreate.gid);
    struct Npfcall *return_value_np_post_check_2;
    return_value_np_post_check_2=np_post_check(fc, bufp);
    return return_value_np_post_check_2;
  }
}

// np_create_tlink
// file np.c line 1229
struct Npfcall * np_create_tlink(unsigned int dfid, unsigned int fid, char *name)
{
  signed int size;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(name);
  size = (signed int)((unsigned long int)2 * sizeof(unsigned int) /*4ul*/  + sizeof(unsigned short int) /*2ul*/  + return_value_strlen_1);
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)70);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, dfid, &fc->u.tlink.dfid);
    buf_put_int32(bufp, fid, &fc->u.tlink.fid);
    buf_put_str(bufp, name, &fc->u.tlink.name);
    struct Npfcall *return_value_np_post_check_2;
    return_value_np_post_check_2=np_post_check(fc, bufp);
    return return_value_np_post_check_2;
  }
}

// np_create_tlock
// file np.c line 1149
struct Npfcall * np_create_tlock(unsigned int fid, unsigned char type, unsigned int flags, unsigned long int start, unsigned long int length, unsigned int proc_id, char *client_id)
{
  signed int size;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(client_id);
  size = (signed int)(sizeof(unsigned int) /*4ul*/  + sizeof(unsigned char) /*1ul*/  + sizeof(unsigned int) /*4ul*/  + (unsigned long int)2 * sizeof(unsigned long int) /*8ul*/  + sizeof(unsigned int) /*4ul*/  + sizeof(unsigned short int) /*2ul*/  + return_value_strlen_1);
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)52);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.tlock.fid);
    buf_put_int8(bufp, type, &fc->u.tlock.type);
    buf_put_int32(bufp, flags, &fc->u.tlock.flags);
    buf_put_int64(bufp, start, &fc->u.tlock.start);
    buf_put_int64(bufp, length, &fc->u.tlock.length);
    buf_put_int32(bufp, proc_id, &fc->u.tlock.proc_id);
    buf_put_str(bufp, client_id, &fc->u.tlock.client_id);
    struct Npfcall *return_value_np_post_check_2;
    return_value_np_post_check_2=np_post_check(fc, bufp);
    return return_value_np_post_check_2;
  }
}

// np_create_tlopen
// file ../libnpfs/npfs.h line 453
struct Npfcall * np_create_tlopen(unsigned int fid, unsigned int flags)
{
  signed int size = (signed int)(sizeof(unsigned int) /*4ul*/  + sizeof(unsigned int) /*4ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)12);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.tlopen.fid);
    buf_put_int32(bufp, flags, &fc->u.tlopen.flags);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_tmkdir
// file ../libnpfs/npfs.h line 497
struct Npfcall * np_create_tmkdir(unsigned int dfid, char *name, unsigned int mode, unsigned int gid)
{
  signed int size;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(name);
  size = (signed int)(sizeof(unsigned int) /*4ul*/  + (unsigned long int)2 + return_value_strlen_1 + sizeof(unsigned int) /*4ul*/  + sizeof(unsigned int) /*4ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)72);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, dfid, &fc->u.tmkdir.fid);
    buf_put_str(bufp, name, &fc->u.tmkdir.name);
    buf_put_int32(bufp, mode, &fc->u.tmkdir.mode);
    buf_put_int32(bufp, gid, &fc->u.tmkdir.gid);
    struct Npfcall *return_value_np_post_check_2;
    return_value_np_post_check_2=np_post_check(fc, bufp);
    return return_value_np_post_check_2;
  }
}

// np_create_tmknod
// file np.c line 812
struct Npfcall * np_create_tmknod(unsigned int fid, char *name, unsigned int mode, unsigned int major, unsigned int minor, unsigned int gid)
{
  signed int size;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(name);
  size = (signed int)(sizeof(unsigned int) /*4ul*/  + sizeof(unsigned short int) /*2ul*/  + return_value_strlen_1 + sizeof(unsigned int) /*4ul*/  + sizeof(unsigned int) /*4ul*/  + sizeof(unsigned int) /*4ul*/  + sizeof(unsigned int) /*4ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)18);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.tmknod.fid);
    buf_put_str(bufp, name, &fc->u.tmknod.name);
    buf_put_int32(bufp, mode, &fc->u.tmknod.mode);
    buf_put_int32(bufp, major, &fc->u.tmknod.major);
    buf_put_int32(bufp, minor, &fc->u.tmknod.minor);
    buf_put_int32(bufp, gid, &fc->u.tmknod.gid);
    struct Npfcall *return_value_np_post_check_2;
    return_value_np_post_check_2=np_post_check(fc, bufp);
    return return_value_np_post_check_2;
  }
}

// np_create_tread
// file ../libnpfs/npfs.h line 436
struct Npfcall * np_create_tread(unsigned int fid, unsigned long int offset, unsigned int count)
{
  signed int size = (signed int)(sizeof(unsigned int) /*4ul*/  + sizeof(unsigned long int) /*8ul*/  + sizeof(unsigned int) /*4ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)116);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.tread.fid);
    buf_put_int64(bufp, offset, &fc->u.tread.offset);
    buf_put_int32(bufp, count, &fc->u.tread.count);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_treaddir
// file ../libnpfs/npfs.h line 483
struct Npfcall * np_create_treaddir(unsigned int fid, unsigned long int offset, unsigned int count)
{
  signed int size = (signed int)(sizeof(unsigned int) /*4ul*/  + sizeof(unsigned long int) /*8ul*/  + sizeof(unsigned int) /*4ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)40);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.treaddir.fid);
    buf_put_int64(bufp, offset, &fc->u.treaddir.offset);
    buf_put_int32(bufp, count, &fc->u.treaddir.count);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_treadlink
// file np.c line 879
struct Npfcall * np_create_treadlink(unsigned int fid)
{
  signed int size = (signed int)sizeof(unsigned int) /*4ul*/ ;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)22);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.treadlink.fid);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_tremove
// file ../libnpfs/npfs.h line 442
struct Npfcall * np_create_tremove(unsigned int fid)
{
  signed int size = (signed int)sizeof(unsigned int) /*4ul*/ ;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)122);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.tremove.fid);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_trename
// file np.c line 848
struct Npfcall * np_create_trename(unsigned int fid, unsigned int dfid, char *name)
{
  signed int size;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(name);
  size = (signed int)(sizeof(unsigned int) /*4ul*/  + sizeof(unsigned int) /*4ul*/  + sizeof(unsigned short int) /*2ul*/  + return_value_strlen_1);
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)20);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.trename.fid);
    buf_put_int32(bufp, dfid, &fc->u.trename.dfid);
    buf_put_str(bufp, name, &fc->u.trename.name);
    struct Npfcall *return_value_np_post_check_2;
    return_value_np_post_check_2=np_post_check(fc, bufp);
    return return_value_np_post_check_2;
  }
}

// np_create_trenameat
// file np.c line 1292
struct Npfcall * np_create_trenameat(unsigned int olddirfid, char *oldname, unsigned int newdirfid, char *newname)
{
  signed int size;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(oldname);
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(newname);
  size = (signed int)(sizeof(unsigned int) /*4ul*/  + sizeof(unsigned short int) /*2ul*/  + return_value_strlen_1 + sizeof(unsigned int) /*4ul*/  + sizeof(unsigned short int) /*2ul*/  + return_value_strlen_2);
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)74);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, olddirfid, &fc->u.trenameat.olddirfid);
    buf_put_str(bufp, oldname, &fc->u.trenameat.oldname);
    buf_put_int32(bufp, newdirfid, &fc->u.trenameat.newdirfid);
    buf_put_str(bufp, newname, &fc->u.trenameat.newname);
    struct Npfcall *return_value_np_post_check_3;
    return_value_np_post_check_3=np_post_check(fc, bufp);
    return return_value_np_post_check_3;
  }
}

// np_create_tsetattr
// file ../libnpfs/npfs.h line 475
struct Npfcall * np_create_tsetattr(unsigned int fid, unsigned int valid, unsigned int mode, unsigned int uid, unsigned int gid, unsigned long int size, unsigned long int atime_sec, unsigned long int atime_nsec, unsigned long int mtime_sec, unsigned long int mtime_nsec)
{
  signed int bufsize = (signed int)((unsigned long int)5 * sizeof(unsigned int) /*4ul*/  + (unsigned long int)5 * sizeof(unsigned long int) /*8ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)bufsize, (unsigned char)26);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.tsetattr.fid);
    buf_put_int32(bufp, valid, &fc->u.tsetattr.valid);
    buf_put_int32(bufp, mode, &fc->u.tsetattr.mode);
    buf_put_int32(bufp, uid, &fc->u.tsetattr.uid);
    buf_put_int32(bufp, gid, &fc->u.tsetattr.gid);
    buf_put_int64(bufp, size, &fc->u.tsetattr.size);
    buf_put_int64(bufp, atime_sec, &fc->u.tsetattr.atime_sec);
    buf_put_int64(bufp, atime_nsec, &fc->u.tsetattr.atime_nsec);
    buf_put_int64(bufp, mtime_sec, &fc->u.tsetattr.mtime_sec);
    buf_put_int64(bufp, mtime_nsec, &fc->u.tsetattr.mtime_nsec);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_tstatfs
// file np.c line 671
struct Npfcall * np_create_tstatfs(unsigned int fid)
{
  signed int size = (signed int)sizeof(unsigned int) /*4ul*/ ;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)8);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.tstatfs.fid);
    struct Npfcall *return_value_np_post_check_1;
    return_value_np_post_check_1=np_post_check(fc, bufp);
    return return_value_np_post_check_1;
  }
}

// np_create_tsymlink
// file np.c line 778
struct Npfcall * np_create_tsymlink(unsigned int fid, char *name, char *symtgt, unsigned int gid)
{
  signed int size;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(name);
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(symtgt);
  size = (signed int)(sizeof(unsigned int) /*4ul*/  + sizeof(unsigned short int) /*2ul*/  + return_value_strlen_1 + sizeof(unsigned short int) /*2ul*/  + return_value_strlen_2 + sizeof(unsigned int) /*4ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)16);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.tsymlink.fid);
    buf_put_str(bufp, name, &fc->u.tsymlink.name);
    buf_put_str(bufp, symtgt, &fc->u.tsymlink.symtgt);
    buf_put_int32(bufp, gid, &fc->u.tsymlink.gid);
    struct Npfcall *return_value_np_post_check_3;
    return_value_np_post_check_3=np_post_check(fc, bufp);
    return return_value_np_post_check_3;
  }
}

// np_create_tunlinkat
// file np.c line 1325
struct Npfcall * np_create_tunlinkat(unsigned int dirfid, char *name, unsigned int flags)
{
  signed int size;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(name);
  size = (signed int)(sizeof(unsigned int) /*4ul*/  + sizeof(unsigned short int) /*2ul*/  + return_value_strlen_1 + sizeof(unsigned int) /*4ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)76);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, dirfid, &fc->u.tunlinkat.dirfid);
    buf_put_str(bufp, name, &fc->u.tunlinkat.name);
    buf_put_int32(bufp, flags, &fc->u.tunlinkat.flags);
    struct Npfcall *return_value_np_post_check_2;
    return_value_np_post_check_2=np_post_check(fc, bufp);
    return return_value_np_post_check_2;
  }
}

// np_create_tversion
// file ../libnpfs/npfs.h line 424
struct Npfcall * np_create_tversion(unsigned int msize, char *version)
{
  signed int size;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(version);
  size = (signed int)(sizeof(unsigned int) /*4ul*/  + sizeof(unsigned short int) /*2ul*/  + return_value_strlen_1);
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)100);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, msize, &fc->u.tversion.msize);
    buf_put_str(bufp, version, &fc->u.tversion.version);
    struct Npfcall *return_value_np_post_check_2;
    return_value_np_post_check_2=np_post_check(fc, bufp);
    return return_value_np_post_check_2;
  }
}

// np_create_twalk
// file ../libnpfs/npfs.h line 434
struct Npfcall * np_create_twalk(unsigned int fid, unsigned int newfid, unsigned short int nwname, char **wnames)
{
  signed int i;
  signed int size = (signed int)((unsigned long int)2 * sizeof(unsigned int) /*4ul*/  + sizeof(unsigned short int) /*2ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  if((signed int)nwname >= 17)
    np_assfail("nwname <= P9_MAXWELEM", "np.c", 456);

  i = 0;
  unsigned long int return_value_strlen_1;
  for( ; !(i >= (signed int)nwname); i = i + 1)
  {
    return_value_strlen_1=strlen(wnames[(signed long int)i]);
    size = size + (signed int)(sizeof(unsigned short int) /*2ul*/  + return_value_strlen_1);
  }
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)110);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.twalk.fid);
    buf_put_int32(bufp, newfid, &fc->u.twalk.newfid);
    buf_put_int16(bufp, nwname, &fc->u.twalk.nwname);
    i = 0;
    for( ; !(i >= (signed int)nwname); i = i + 1)
      buf_put_str(bufp, wnames[(signed long int)i], &fc->u.twalk.wnames[(signed long int)i]);
    struct Npfcall *return_value_np_post_check_2;
    return_value_np_post_check_2=np_post_check(fc, bufp);
    return return_value_np_post_check_2;
  }
}

// np_create_twrite
// file ../libnpfs/npfs.h line 438
struct Npfcall * np_create_twrite(unsigned int fid, unsigned long int offset, unsigned int count, unsigned char *data)
{
  signed int size = (signed int)(sizeof(unsigned int) /*4ul*/  + sizeof(unsigned long int) /*8ul*/  + sizeof(unsigned int) /*4ul*/  + (unsigned long int)count);
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)118);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.twrite.fid);
    buf_put_int64(bufp, offset, &fc->u.twrite.offset);
    buf_put_int32(bufp, count, &fc->u.twrite.count);
    void *return_value_buf_alloc_1;
    return_value_buf_alloc_1=buf_alloc(bufp, (signed int)count);
    fc->u.twrite.data = (unsigned char *)return_value_buf_alloc_1;
    if(!(fc->u.twrite.data == ((unsigned char *)NULL)))
      memmove((void *)fc->u.twrite.data, (const void *)data, (unsigned long int)count);

    struct Npfcall *return_value_np_post_check_2;
    return_value_np_post_check_2=np_post_check(fc, bufp);
    return return_value_np_post_check_2;
  }
}

// np_create_txattrcreate
// file ../libnpfs/npfs.h line 481
struct Npfcall * np_create_txattrcreate(unsigned int fid, char *name, unsigned long int size, unsigned int flag)
{
  signed int bufsize;
  unsigned long int tmp_if_expr_2;
  unsigned long int return_value_strlen_1;
  if(!(name == ((char *)NULL)))
  {
    return_value_strlen_1=strlen(name);
    tmp_if_expr_2 = return_value_strlen_1;
  }

  else
    tmp_if_expr_2 = (unsigned long int)0;
  bufsize = (signed int)(sizeof(unsigned int) /*4ul*/  + sizeof(unsigned short int) /*2ul*/  + tmp_if_expr_2 + sizeof(unsigned long int) /*8ul*/  + sizeof(unsigned int) /*4ul*/ );
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)bufsize, (unsigned char)32);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.txattrcreate.fid);
    buf_put_str(bufp, name, &fc->u.txattrcreate.name);
    buf_put_int64(bufp, size, &fc->u.txattrcreate.size);
    buf_put_int32(bufp, flag, &fc->u.txattrcreate.flag);
    struct Npfcall *return_value_np_post_check_3;
    return_value_np_post_check_3=np_post_check(fc, bufp);
    return return_value_np_post_check_3;
  }
}

// np_create_txattrwalk
// file ../libnpfs/npfs.h line 479
struct Npfcall * np_create_txattrwalk(unsigned int fid, unsigned int attrfid, char *name)
{
  signed int size;
  unsigned long int tmp_if_expr_2;
  unsigned long int return_value_strlen_1;
  if(!(name == ((char *)NULL)))
  {
    return_value_strlen_1=strlen(name);
    tmp_if_expr_2 = return_value_strlen_1;
  }

  else
    tmp_if_expr_2 = (unsigned long int)0;
  size = (signed int)((unsigned long int)2 * sizeof(unsigned int) /*4ul*/  + sizeof(unsigned short int) /*2ul*/  + tmp_if_expr_2);
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct Npfcall *fc;
  fc=np_create_common(bufp, (unsigned int)size, (unsigned char)30);
  if(fc == ((struct Npfcall *)NULL))
    return (struct Npfcall *)(void *)0;

  else
  {
    buf_put_int32(bufp, fid, &fc->u.txattrwalk.fid);
    buf_put_int32(bufp, attrfid, &fc->u.txattrwalk.attrfid);
    buf_put_str(bufp, name, &fc->u.txattrwalk.name);
    struct Npfcall *return_value_np_post_check_3;
    return_value_np_post_check_3=np_post_check(fc, bufp);
    return return_value_np_post_check_3;
  }
}

// np_ctl_adddir
// file ctl.c line 224
struct Npfile * np_ctl_adddir(struct Npfile *parent, char *name)
{
  struct Npfile *file;
  if((128 & (signed int)parent->qid.type) == 0)
  {
    np_uerror((unsigned long int)22);
    return (struct Npfile *)(void *)0;
  }

  else
  {
    file=_alloc_file(name, (unsigned char)128);
    if(file == ((struct Npfile *)NULL))
      return (struct Npfile *)(void *)0;

    else
    {
      file->getf = (char * (*)(char *, void *))(void *)0;
      file->getf_arg = (void *)0;
      file->next = parent->child;
      parent->child = file;
      gettimeofday(&parent->mtime, (struct timezone *)(void *)0);
      return file;
    }
  }
}

// np_ctl_addfile
// file npfs.h line 550
struct Npfile * np_ctl_addfile(struct Npfile *parent, char *name, char * (*getf)(char *, void *), void *arg, signed int flags)
{
  struct Npfile *file;
  if((128 & (signed int)parent->qid.type) == 0)
  {
    np_uerror((unsigned long int)22);
    return (struct Npfile *)(void *)0;
  }

  else
  {
    file=_alloc_file(name, (unsigned char)0);
    if(file == ((struct Npfile *)NULL))
      return (struct Npfile *)(void *)0;

    else
    {
      if(!((0x04 & flags) == 0))
        file->mode = file->mode | (unsigned int)(0200 | 0200 >> 3 | (0200 >> 3) >> 3);

      file->getf = getf;
      file->getf_arg = arg;
      file->flags = flags;
      file->next = parent->child;
      parent->child = file;
      gettimeofday(&parent->mtime, (struct timezone *)(void *)0);
      return file;
    }
  }
}

// np_ctl_attach
// file npfs.h line 535
struct Npfcall * np_ctl_attach(struct Npfid *fid, struct Npfid *afid, char *aname)
{
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  struct anonymous_4 *f = (struct anonymous_4 *)(void *)0;
  struct Npsrv *srv = fid->conn->srv;
  struct Npfile *root = srv->ctlroot;
  _Bool tmp_if_expr_2;
  signed int return_value_strcmp_1;
  if(!(aname == ((char *)NULL)))
  {
    return_value_strcmp_1=strcmp(aname, "ctl");
    tmp_if_expr_2 = !(return_value_strcmp_1 != 0) ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_2 = (_Bool)0;
  if(!tmp_if_expr_2)
    np_assfail("aname && !strcmp (aname, \"ctl\")", "ctl.c", 332);

  if(!(root == ((struct Npfile *)NULL)))
  {
    f=_alloc_fid(root);
    if(f == ((struct anonymous_4 *)NULL))
      goto error;

    rc=np_create_rattach(&root->qid);
    if(rc == ((struct Npfcall *)NULL))
    {
      np_uerror((unsigned long int)12);
      goto error;
    }

    fid->type = root->qid.type;
    fid->aux = (void *)f;
    return rc;
  }

  else
  {

  error:
    ;
    if(!(f == ((struct anonymous_4 *)NULL)))
      _free_fid(f);

    return (struct Npfcall *)(void *)0;
  }
}

// np_ctl_clone
// file npfs.h line 536
signed int np_ctl_clone(struct Npfid *fid, struct Npfid *newfid)
{
  struct anonymous_4 *f = (struct anonymous_4 *)fid->aux;
  struct anonymous_4 *nf;
  if(f == ((struct anonymous_4 *)NULL))
    np_assfail("f != NULL", "ctl.c", 356);

  if(f->file == ((struct Npfile *)NULL))
    np_assfail("f->file != NULL", "ctl.c", 357);

  if(f->file->name == ((char *)NULL))
    np_assfail("f->file->name != NULL", "ctl.c", 358);

  nf=_alloc_fid(f->file);
  if(nf == ((struct anonymous_4 *)NULL))
  {
    np_uerror((unsigned long int)12);
    return 0;
  }

  else
  {
    newfid->aux = (void *)nf;
    return 1;
  }
}

// np_ctl_clunk
// file npfs.h line 540
struct Npfcall * np_ctl_clunk(struct Npfid *fid)
{
  struct Npfcall *rc;
  rc=np_create_rclunk();
  if(rc == ((struct Npfcall *)NULL))
    np_uerror((unsigned long int)12);

  return rc;
}

// np_ctl_delfile
// file ctl.c line 96
void np_ctl_delfile(struct Npfile *file)
{
  struct Npfile *ff;
  struct Npfile *tmp;
  if(!(file == ((struct Npfile *)NULL)))
  {
    ff = file->child;
    for( ; !(ff == ((struct Npfile *)NULL)); ff = tmp)
    {
      tmp = ff->next;
      np_ctl_delfile(ff);
    }
    if(!(file->name == ((char *)NULL)))
      free((void *)file->name);

    free((void *)file);
  }

}

// np_ctl_fiddestroy
// file npfs.h line 547
void np_ctl_fiddestroy(struct Npfid *fid)
{
  struct anonymous_4 *f = (struct anonymous_4 *)fid->aux;
  _free_fid(f);
}

// np_ctl_finalize
// file npfs.h line 549
void np_ctl_finalize(struct Npsrv *srv)
{
  struct Npfile *root = srv->ctlroot;
  if(!(root == ((struct Npfile *)NULL)))
    np_ctl_delfile(root);

  srv->ctlroot = (struct Npfile *)(void *)0;
}

// np_ctl_getattr
// file npfs.h line 542
struct Npfcall * np_ctl_getattr(struct Npfid *fid, unsigned long int request_mask)
{
  struct anonymous_4 *f = (struct anonymous_4 *)fid->aux;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  rc=np_create_rgetattr(request_mask, &f->file->qid, f->file->mode, f->file->uid, f->file->gid, (unsigned long int)1, (unsigned long int)0, (unsigned long int)0, (unsigned long int)0, (unsigned long int)0, (unsigned long int)f->file->atime.tv_sec, (unsigned long int)(f->file->atime.tv_usec * (signed long int)1000), (unsigned long int)f->file->mtime.tv_sec, (unsigned long int)(f->file->mtime.tv_usec * (signed long int)1000), (unsigned long int)f->file->ctime.tv_sec, (unsigned long int)(f->file->ctime.tv_usec * (signed long int)1000), (unsigned long int)0, (unsigned long int)0, (unsigned long int)0, (unsigned long int)0);
  if(rc == ((struct Npfcall *)NULL))
    np_uerror((unsigned long int)12);

  return rc;
}

// np_ctl_initialize
// file npfs.h line 548
signed int np_ctl_initialize(struct Npsrv *srv)
{
  struct Npfile *root = (struct Npfile *)(void *)0;
  root=_alloc_file("root", (unsigned char)128);
  struct Npfile *return_value_np_ctl_addfile_1;
  struct Npfile *return_value_np_ctl_addfile_2;
  struct Npfile *return_value_np_ctl_addfile_3;
  struct Npfile *return_value_np_ctl_addfile_4;
  struct Npfile *return_value_np_ctl_addfile_5;
  struct Npfile *return_value_np_ctl_addfile_6;
  struct Npfile *return_value_np_ctl_addfile_7;
  struct Npfile *return_value_np_ctl_addfile_8;
  if(!(root == ((struct Npfile *)NULL)))
  {
    srv->ctlroot = root;
    return_value_np_ctl_addfile_1=np_ctl_addfile(root, "version", _ctl_get_version, (void *)0, 0);
    if(return_value_np_ctl_addfile_1 == ((struct Npfile *)NULL))
      goto error;

    return_value_np_ctl_addfile_2=np_ctl_addfile(root, "date", _ctl_get_date, (void *)0, 0);
    if(return_value_np_ctl_addfile_2 == ((struct Npfile *)NULL))
      goto error;

    return_value_np_ctl_addfile_3=np_ctl_addfile(root, "zero", (char * (*)(char *, void *))(void *)0, (void *)0, 0x02);
    if(return_value_np_ctl_addfile_3 == ((struct Npfile *)NULL))
      goto error;

    return_value_np_ctl_addfile_4=np_ctl_addfile(root, "zero100", (char * (*)(char *, void *))(void *)0, (void *)0, 0x02 | 0x01);
    if(return_value_np_ctl_addfile_4 == ((struct Npfile *)NULL))
      goto error;

    return_value_np_ctl_addfile_5=np_ctl_addfile(root, "null", (char * (*)(char *, void *))(void *)0, (void *)0, 0x04);
    if(return_value_np_ctl_addfile_5 == ((struct Npfile *)NULL))
      goto error;

    return_value_np_ctl_addfile_6=np_ctl_addfile(root, "null100", (char * (*)(char *, void *))(void *)0, (void *)0, 0x04 | 0x01);
    if(return_value_np_ctl_addfile_6 == ((struct Npfile *)NULL))
      goto error;

    return_value_np_ctl_addfile_7=np_ctl_addfile(root, "meminfo", _ctl_get_proc, (void *)0, 0);
    if(return_value_np_ctl_addfile_7 == ((struct Npfile *)NULL))
      goto error;

    return_value_np_ctl_addfile_8=np_ctl_addfile(root, "net.rpc.nfs", _ctl_get_proc, (void *)0, 0);
    if(return_value_np_ctl_addfile_8 == ((struct Npfile *)NULL))
      goto error;

    return 0;
  }

  else
  {

  error:
    ;
    np_ctl_finalize(srv);
    return -1;
  }
}

// np_ctl_lopen
// file npfs.h line 541
struct Npfcall * np_ctl_lopen(struct Npfid *fid, unsigned int mode)
{
  struct anonymous_4 *f = (struct anonymous_4 *)fid->aux;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(!((1u & mode) == 0u) || !((2u & mode) == 0u))
  {
    if(!((0x04 & f->file->flags) == 0))
      goto __CPROVER_DUMP_L1;

    np_uerror((unsigned long int)13);
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    if(!((0u & mode) == 0u) || !((2u & mode) == 0u))
    {
      if(!(f->file->getf == ((char * (*)(char *, void *))NULL)))
        goto __CPROVER_DUMP_L2;

      if(!((128 & (signed int)fid->type) == 0))
        goto __CPROVER_DUMP_L2;

      if(!((0x02 & f->file->flags) == 0))
        goto __CPROVER_DUMP_L2;

      np_uerror((unsigned long int)13);
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      if(!(f->data == NULL))
        np_assfail("f->data == NULL", "ctl.c", 427);

      rc=np_create_rlopen(&f->file->qid, (unsigned int)0);
      if(rc == ((struct Npfcall *)NULL))
        np_uerror((unsigned long int)12);

    }
  }

done:
  ;
  return rc;
}

// np_ctl_read
// file npfs.h line 538
struct Npfcall * np_ctl_read(struct Npfid *fid, unsigned long int offset, unsigned int count, struct Npreq *req)
{
  struct anonymous_4 *f = (struct anonymous_4 *)fid->aux;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  signed int len;
  if(!((0x01 & f->file->flags) == 0))
    usleep((unsigned int)(100 * 1000));

  unsigned long int return_value_np_rerror_1;
  unsigned long int tmp_if_expr_3;
  unsigned long int return_value_strlen_2;
  if(!((0x02 & f->file->flags) == 0))
  {
    rc=np_alloc_rread(count);
    if(!(rc == ((struct Npfcall *)NULL)))
      memset((void *)rc->u.rread.data, 0, (unsigned long int)count);

    else
      np_uerror((unsigned long int)12);
  }

  else
  {
    if(f->data == NULL)
    {
      if(!(f->file->getf == ((char * (*)(char *, void *))NULL)))
      {
        char *return_value;
        return_value=f->file->getf(f->file->name, f->file->getf_arg);
        f->data = (void *)return_value;
        if(f->data == NULL)
          return_value_np_rerror_1=np_rerror();

      }

    }

    if(!(f->data == NULL))
    {
      return_value_strlen_2=strlen((const char *)f->data);
      tmp_if_expr_3 = return_value_strlen_2;
    }

    else
      tmp_if_expr_3 = (unsigned long int)0;
    len = (signed int)tmp_if_expr_3;
    if(!((unsigned long int)len >= offset))
      offset = (unsigned long int)len;

    if(!((unsigned long int)len + -offset >= (unsigned long int)count))
      count = (unsigned int)((unsigned long int)len - offset);

    rc=np_create_rread(count, (unsigned char *)f->data + (signed long int)offset);
    if(rc == ((struct Npfcall *)NULL))
      np_uerror((unsigned long int)12);

    else
      gettimeofday(&f->file->atime, (struct timezone *)(void *)0);
  }

done:
  ;
  return rc;
}

// np_ctl_readdir
// file npfs.h line 546
struct Npfcall * np_ctl_readdir(struct Npfid *fid, unsigned long int offset, unsigned int count, struct Npreq *req)
{
  struct anonymous_4 *f = (struct anonymous_4 *)fid->aux;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  struct Npfile *ff;
  signed int off = 0;
  signed int i;
  signed int n = 0;
  rc=np_create_rreaddir(count);
  if(rc == ((struct Npfcall *)NULL))
    np_uerror((unsigned long int)12);

  else
  {
    ff = f->file->child;
    for( ; !(ff == ((struct Npfile *)NULL)); ff = ff->next)
    {
      if((unsigned long int)off >= offset)
      {
        i=np_serialize_p9dirent(&ff->qid, (unsigned long int)(off + 1), (unsigned char)(((signed int)ff->qid.type & 128) != 0 ? 4 : 8), ff->name, rc->u.rreaddir.data + (signed long int)n, (signed int)(count - (unsigned int)n));
        if(i == 0)
          break;

        n = n + i;
      }

      off = off + 1;
    }
    np_finalize_rreaddir(rc, (unsigned int)n);
    gettimeofday(&f->file->atime, (struct timezone *)(void *)0);
  }

done:
  ;
  return rc;
}

// np_ctl_setattr
// file npfs.h line 543
struct Npfcall * np_ctl_setattr(struct Npfid *fid, unsigned int valid, unsigned int mode, unsigned int uid, unsigned int gid, unsigned long int size, unsigned long int atime_sec, unsigned long int atime_nsec, unsigned long int mtime_sec, unsigned long int mtime_nsec)
{
  struct Npfcall *rc;
  rc=np_create_rsetattr();
  if(rc == ((struct Npfcall *)NULL))
    np_uerror((unsigned long int)12);

  return rc;
}

// np_ctl_walk
// file npfs.h line 537
signed int np_ctl_walk(struct Npfid *fid, struct p9_str *wname, struct p9_qid *wqid)
{
  struct anonymous_4 *f = (struct anonymous_4 *)fid->aux;
  signed int ret = 0;
  struct Npfile *ff = f->file->child;
  for( ; !(ff == ((struct Npfile *)NULL)); ff = ff->next)
  {
    signed int return_value_np_strcmp_1;
    return_value_np_strcmp_1=np_strcmp(wname, ff->name);
    if(return_value_np_strcmp_1 == 0)
      break;

  }
  if(ff == ((struct Npfile *)NULL))
    np_uerror((unsigned long int)2);

  else
  {
    f->file = ff;
    wqid->path = ff->qid.path;
    wqid->type = ff->qid.type;
    wqid->version = ff->qid.version;
    ret = 1;
  }

done:
  ;
  return ret;
}

// np_ctl_write
// file npfs.h line 539
struct Npfcall * np_ctl_write(struct Npfid *fid, unsigned long int offset, unsigned int count, unsigned char *data, struct Npreq *req)
{
  struct anonymous_4 *f = (struct anonymous_4 *)fid->aux;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if((0x04 & f->file->flags) == 0)
    np_uerror((unsigned long int)38);

  else
  {
    if(!((0x01 & f->file->flags) == 0))
      usleep((unsigned int)(100 * 1000));

    rc=np_create_rwrite(count);
    if(rc == ((struct Npfcall *)NULL))
      np_uerror((unsigned long int)12);

  }

done:
  ;
  return rc;
}

// np_decode_tpools_str
// file npstring.c line 158
signed int np_decode_tpools_str(char *s, struct Npstats *stats)
{
  signed int n;
  n=sscanf(s, "%as %d %d %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu", &stats->name, &stats->numreqs, &stats->numfids, &stats->rbytes, &stats->wbytes, &stats->nreqs[(signed long int)8], &stats->nreqs[(signed long int)12], &stats->nreqs[(signed long int)14], &stats->nreqs[(signed long int)16], &stats->nreqs[(signed long int)18], &stats->nreqs[(signed long int)20], &stats->nreqs[(signed long int)22], &stats->nreqs[(signed long int)24], &stats->nreqs[(signed long int)26], &stats->nreqs[(signed long int)30], &stats->nreqs[(signed long int)32], &stats->nreqs[(signed long int)40], &stats->nreqs[(signed long int)50], &stats->nreqs[(signed long int)52], &stats->nreqs[(signed long int)54], &stats->nreqs[(signed long int)70], &stats->nreqs[(signed long int)72], &stats->nreqs[(signed long int)100], &stats->nreqs[(signed long int)102], &stats->nreqs[(signed long int)104], &stats->nreqs[(signed long int)108], &stats->nreqs[(signed long int)110], &stats->nreqs[(signed long int)116], &stats->nreqs[(signed long int)118], &stats->nreqs[(signed long int)120], &stats->nreqs[(signed long int)122], &stats->rcount[(signed long int)0], &stats->rcount[(signed long int)1], &stats->rcount[(signed long int)2], &stats->rcount[(signed long int)3], &stats->rcount[(signed long int)4], &stats->rcount[(signed long int)5], &stats->rcount[(signed long int)6], &stats->rcount[(signed long int)7], &stats->rcount[(signed long int)8], &stats->rcount[(signed long int)9], &stats->rcount[(signed long int)10], &stats->rcount[(signed long int)11], &stats->wcount[(signed long int)0], &stats->wcount[(signed long int)1], &stats->wcount[(signed long int)2], &stats->wcount[(signed long int)3], &stats->wcount[(signed long int)4], &stats->wcount[(signed long int)5], &stats->wcount[(signed long int)6], &stats->wcount[(signed long int)7], &stats->wcount[(signed long int)8], &stats->wcount[(signed long int)9], &stats->wcount[(signed long int)10], &stats->wcount[(signed long int)11]);
  if(!(n == 55))
  {
    if(!(stats->name == ((char *)NULL)))
    {
      free((void *)stats->name);
      stats->name = (char *)(void *)0;
    }

    return -1;
  }

  else
    return 0;
}

// np_deserialize
// file np.c line 1379
signed int np_deserialize(struct Npfcall *fc)
{
  signed int i;
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  buf_init(bufp, (void *)fc->pkt, 4);
  fc->size=buf_get_int32(bufp);
  buf_init(bufp, (void *)(fc->pkt + (signed long int)4), (signed int)(fc->size - (unsigned int)4));
  fc->type=buf_get_int8(bufp);
  fc->tag=buf_get_int16(bufp);
  signed int return_value_buf_check_overflow_4;
  if(!((signed int)fc->type == 7))
  {
    if((signed int)fc->type == 100)
      goto __CPROVER_DUMP_L2;

    if((signed int)fc->type == 101)
      goto __CPROVER_DUMP_L3;

    if((signed int)fc->type == 102)
      goto __CPROVER_DUMP_L4;

    if((signed int)fc->type == 103)
      goto __CPROVER_DUMP_L5;

    if((signed int)fc->type == 108)
      goto __CPROVER_DUMP_L6;

    if((signed int)fc->type == 109)
      goto __CPROVER_DUMP_L7;

    if((signed int)fc->type == 104)
      goto __CPROVER_DUMP_L8;

    if((signed int)fc->type == 105)
      goto __CPROVER_DUMP_L9;

    if((signed int)fc->type == 110)
      goto __CPROVER_DUMP_L10;

    if((signed int)fc->type == 111)
      goto __CPROVER_DUMP_L13;

    if((signed int)fc->type == 116)
      goto __CPROVER_DUMP_L16;

    if((signed int)fc->type == 117)
      goto __CPROVER_DUMP_L17;

    if((signed int)fc->type == 118)
      goto __CPROVER_DUMP_L18;

    if((signed int)fc->type == 119)
      goto __CPROVER_DUMP_L19;

    if((signed int)fc->type == 120)
      goto __CPROVER_DUMP_L20;

    if((signed int)fc->type == 121)
      goto __CPROVER_DUMP_L21;

    if((signed int)fc->type == 122)
      goto __CPROVER_DUMP_L22;

    if((signed int)fc->type == 123)
      goto __CPROVER_DUMP_L23;

    if((signed int)fc->type == 8)
      goto __CPROVER_DUMP_L24;

    if((signed int)fc->type == 9)
      goto __CPROVER_DUMP_L25;

    if((signed int)fc->type == 12)
      goto __CPROVER_DUMP_L26;

    if((signed int)fc->type == 13)
      goto __CPROVER_DUMP_L27;

    if((signed int)fc->type == 14)
      goto __CPROVER_DUMP_L28;

    if((signed int)fc->type == 15)
      goto __CPROVER_DUMP_L29;

    if((signed int)fc->type == 16)
      goto __CPROVER_DUMP_L30;

    if((signed int)fc->type == 17)
      goto __CPROVER_DUMP_L31;

    if((signed int)fc->type == 18)
      goto __CPROVER_DUMP_L32;

    if((signed int)fc->type == 19)
      goto __CPROVER_DUMP_L33;

    if((signed int)fc->type == 20)
      goto __CPROVER_DUMP_L34;

    if((signed int)fc->type == 21)
      goto __CPROVER_DUMP_L35;

    if((signed int)fc->type == 22)
      goto __CPROVER_DUMP_L36;

    if((signed int)fc->type == 23)
      goto __CPROVER_DUMP_L37;

    if((signed int)fc->type == 24)
      goto __CPROVER_DUMP_L38;

    if((signed int)fc->type == 25)
      goto __CPROVER_DUMP_L39;

    if((signed int)fc->type == 26)
      goto __CPROVER_DUMP_L40;

    if((signed int)fc->type == 27)
      goto __CPROVER_DUMP_L41;

    if((signed int)fc->type == 30)
      goto __CPROVER_DUMP_L42;

    if((signed int)fc->type == 31)
      goto __CPROVER_DUMP_L43;

    if((signed int)fc->type == 32)
      goto __CPROVER_DUMP_L44;

    if((signed int)fc->type == 33)
      goto __CPROVER_DUMP_L45;

    if((signed int)fc->type == 40)
      goto __CPROVER_DUMP_L46;

    if((signed int)fc->type == 41)
      goto __CPROVER_DUMP_L47;

    if((signed int)fc->type == 50)
      goto __CPROVER_DUMP_L48;

    if((signed int)fc->type == 51)
      goto __CPROVER_DUMP_L49;

    if((signed int)fc->type == 52)
      goto __CPROVER_DUMP_L50;

    if((signed int)fc->type == 53)
      goto __CPROVER_DUMP_L51;

    if((signed int)fc->type == 54)
      goto __CPROVER_DUMP_L52;

    if((signed int)fc->type == 55)
      goto __CPROVER_DUMP_L53;

    if((signed int)fc->type == 70)
      goto __CPROVER_DUMP_L54;

    if((signed int)fc->type == 71)
      goto __CPROVER_DUMP_L55;

    if((signed int)fc->type == 72)
      goto __CPROVER_DUMP_L56;

    if((signed int)fc->type == 73)
      goto __CPROVER_DUMP_L57;

    if((signed int)fc->type == 74)
      goto __CPROVER_DUMP_L58;

    if((signed int)fc->type == 75)
      goto __CPROVER_DUMP_L59;

    if((signed int)fc->type == 76)
      goto __CPROVER_DUMP_L60;

    if((signed int)fc->type == 77)
      goto __CPROVER_DUMP_L61;

  }

  else
  {
    fc->u.rlerror.ecode=buf_get_int32(bufp);
    goto __CPROVER_DUMP_L62;

  __CPROVER_DUMP_L2:
    ;
    fc->u.tversion.msize=buf_get_int32(bufp);
    buf_get_str(bufp, &fc->u.tversion.version);
    goto __CPROVER_DUMP_L62;

  __CPROVER_DUMP_L3:
    ;
    fc->u.rversion.msize=buf_get_int32(bufp);
    buf_get_str(bufp, &fc->u.rversion.version);
    goto __CPROVER_DUMP_L62;

  __CPROVER_DUMP_L4:
    ;
    fc->u.tauth.afid=buf_get_int32(bufp);
    buf_get_str(bufp, &fc->u.tauth.uname);
    buf_get_str(bufp, &fc->u.tauth.aname);
    fc->u.tauth.n_uname=buf_get_int32(bufp);
    goto __CPROVER_DUMP_L62;

  __CPROVER_DUMP_L5:
    ;
    buf_get_qid(bufp, &fc->u.rauth.qid);
    goto __CPROVER_DUMP_L62;

  __CPROVER_DUMP_L6:
    ;
    fc->u.tflush.oldtag=buf_get_int16(bufp);
    goto __CPROVER_DUMP_L62;

  __CPROVER_DUMP_L7:
    ;
    goto __CPROVER_DUMP_L62;

  __CPROVER_DUMP_L8:
    ;
    fc->u.tattach.fid=buf_get_int32(bufp);
    fc->u.tattach.afid=buf_get_int32(bufp);
    buf_get_str(bufp, &fc->u.tattach.uname);
    buf_get_str(bufp, &fc->u.tattach.aname);
    fc->u.tattach.n_uname=buf_get_int32(bufp);
    goto __CPROVER_DUMP_L62;

  __CPROVER_DUMP_L9:
    ;
    buf_get_qid(bufp, &fc->u.rattach.qid);
    goto __CPROVER_DUMP_L62;

  __CPROVER_DUMP_L10:
    ;
    fc->u.twalk.fid=buf_get_int32(bufp);
    fc->u.twalk.newfid=buf_get_int32(bufp);
    fc->u.twalk.nwname=buf_get_int16(bufp);
    if(!((signed int)fc->u.twalk.nwname >= 17))
    {
      i = 0;
      for( ; !(i >= (signed int)fc->u.twalk.nwname); i = i + 1)
        buf_get_str(bufp, &fc->u.twalk.wnames[(signed long int)i]);
      goto __CPROVER_DUMP_L62;

    __CPROVER_DUMP_L13:
      ;
      fc->u.rwalk.nwqid=buf_get_int16(bufp);
      if(!((signed int)fc->u.rwalk.nwqid >= 17))
      {
        i = 0;
        for( ; !(i >= (signed int)fc->u.rwalk.nwqid); i = i + 1)
          buf_get_qid(bufp, &fc->u.rwalk.wqids[(signed long int)i]);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L16:
        ;
        fc->u.tread.fid=buf_get_int32(bufp);
        fc->u.tread.offset=buf_get_int64(bufp);
        fc->u.tread.count=buf_get_int32(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L17:
        ;
        fc->u.rread.count=buf_get_int32(bufp);
        void *return_value_buf_alloc_1;
        return_value_buf_alloc_1=buf_alloc(bufp, (signed int)fc->u.rread.count);
        fc->u.rread.data = (unsigned char *)return_value_buf_alloc_1;
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L18:
        ;
        fc->u.twrite.fid=buf_get_int32(bufp);
        fc->u.twrite.offset=buf_get_int64(bufp);
        fc->u.twrite.count=buf_get_int32(bufp);
        void *return_value_buf_alloc_2;
        return_value_buf_alloc_2=buf_alloc(bufp, (signed int)fc->u.twrite.count);
        fc->u.twrite.data = (unsigned char *)return_value_buf_alloc_2;
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L19:
        ;
        fc->u.rwrite.count=buf_get_int32(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L20:
        ;
        fc->u.tclunk.fid=buf_get_int32(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L21:
        ;
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L22:
        ;
        fc->u.tremove.fid=buf_get_int32(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L23:
        ;
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L24:
        ;
        fc->u.tstatfs.fid=buf_get_int32(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L25:
        ;
        fc->u.rstatfs.type=buf_get_int32(bufp);
        fc->u.rstatfs.bsize=buf_get_int32(bufp);
        fc->u.rstatfs.blocks=buf_get_int64(bufp);
        fc->u.rstatfs.bfree=buf_get_int64(bufp);
        fc->u.rstatfs.bavail=buf_get_int64(bufp);
        fc->u.rstatfs.files=buf_get_int64(bufp);
        fc->u.rstatfs.ffree=buf_get_int64(bufp);
        fc->u.rstatfs.fsid=buf_get_int64(bufp);
        fc->u.rstatfs.namelen=buf_get_int32(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L26:
        ;
        fc->u.tlopen.fid=buf_get_int32(bufp);
        fc->u.tlopen.flags=buf_get_int32(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L27:
        ;
        buf_get_qid(bufp, &fc->u.rlopen.qid);
        fc->u.rlopen.iounit=buf_get_int32(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L28:
        ;
        fc->u.tlcreate.fid=buf_get_int32(bufp);
        buf_get_str(bufp, &fc->u.tlcreate.name);
        fc->u.tlcreate.flags=buf_get_int32(bufp);
        fc->u.tlcreate.mode=buf_get_int32(bufp);
        fc->u.tlcreate.gid=buf_get_int32(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L29:
        ;
        buf_get_qid(bufp, &fc->u.rlcreate.qid);
        fc->u.rlcreate.iounit=buf_get_int32(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L30:
        ;
        fc->u.tsymlink.fid=buf_get_int32(bufp);
        buf_get_str(bufp, &fc->u.tsymlink.name);
        buf_get_str(bufp, &fc->u.tsymlink.symtgt);
        fc->u.tsymlink.gid=buf_get_int32(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L31:
        ;
        buf_get_qid(bufp, &fc->u.rsymlink.qid);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L32:
        ;
        fc->u.tmknod.fid=buf_get_int32(bufp);
        buf_get_str(bufp, &fc->u.tmknod.name);
        fc->u.tmknod.mode=buf_get_int32(bufp);
        fc->u.tmknod.major=buf_get_int32(bufp);
        fc->u.tmknod.minor=buf_get_int32(bufp);
        fc->u.tmknod.gid=buf_get_int32(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L33:
        ;
        buf_get_qid(bufp, &fc->u.rmknod.qid);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L34:
        ;
        fc->u.trename.fid=buf_get_int32(bufp);
        fc->u.trename.dfid=buf_get_int32(bufp);
        buf_get_str(bufp, &fc->u.trename.name);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L35:
        ;
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L36:
        ;
        fc->u.treadlink.fid=buf_get_int32(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L37:
        ;
        buf_get_str(bufp, &fc->u.rreadlink.target);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L38:
        ;
        fc->u.tgetattr.fid=buf_get_int32(bufp);
        fc->u.tgetattr.request_mask=buf_get_int64(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L39:
        ;
        fc->u.rgetattr.valid=buf_get_int64(bufp);
        buf_get_qid(bufp, &fc->u.rgetattr.qid);
        fc->u.rgetattr.mode=buf_get_int32(bufp);
        fc->u.rgetattr.uid=buf_get_int32(bufp);
        fc->u.rgetattr.gid=buf_get_int32(bufp);
        fc->u.rgetattr.nlink=buf_get_int64(bufp);
        fc->u.rgetattr.rdev=buf_get_int64(bufp);
        fc->u.rgetattr.size=buf_get_int64(bufp);
        fc->u.rgetattr.blksize=buf_get_int64(bufp);
        fc->u.rgetattr.blocks=buf_get_int64(bufp);
        fc->u.rgetattr.atime_sec=buf_get_int64(bufp);
        fc->u.rgetattr.atime_nsec=buf_get_int64(bufp);
        fc->u.rgetattr.mtime_sec=buf_get_int64(bufp);
        fc->u.rgetattr.mtime_nsec=buf_get_int64(bufp);
        fc->u.rgetattr.ctime_sec=buf_get_int64(bufp);
        fc->u.rgetattr.ctime_nsec=buf_get_int64(bufp);
        fc->u.rgetattr.btime_sec=buf_get_int64(bufp);
        fc->u.rgetattr.btime_nsec=buf_get_int64(bufp);
        fc->u.rgetattr.gen=buf_get_int64(bufp);
        fc->u.rgetattr.data_version=buf_get_int64(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L40:
        ;
        fc->u.tsetattr.fid=buf_get_int32(bufp);
        fc->u.tsetattr.valid=buf_get_int32(bufp);
        fc->u.tsetattr.mode=buf_get_int32(bufp);
        fc->u.tsetattr.uid=buf_get_int32(bufp);
        fc->u.tsetattr.gid=buf_get_int32(bufp);
        fc->u.tsetattr.size=buf_get_int64(bufp);
        fc->u.tsetattr.atime_sec=buf_get_int64(bufp);
        fc->u.tsetattr.atime_nsec=buf_get_int64(bufp);
        fc->u.tsetattr.mtime_sec=buf_get_int64(bufp);
        fc->u.tsetattr.mtime_nsec=buf_get_int64(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L41:
        ;
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L42:
        ;
        fc->u.txattrwalk.fid=buf_get_int32(bufp);
        fc->u.txattrwalk.attrfid=buf_get_int32(bufp);
        buf_get_str(bufp, &fc->u.txattrwalk.name);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L43:
        ;
        fc->u.rxattrwalk.size=buf_get_int64(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L44:
        ;
        fc->u.txattrcreate.fid=buf_get_int32(bufp);
        buf_get_str(bufp, &fc->u.txattrcreate.name);
        fc->u.txattrcreate.size=buf_get_int64(bufp);
        fc->u.txattrcreate.flag=buf_get_int32(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L45:
        ;
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L46:
        ;
        fc->u.treaddir.fid=buf_get_int32(bufp);
        fc->u.treaddir.offset=buf_get_int64(bufp);
        fc->u.treaddir.count=buf_get_int32(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L47:
        ;
        fc->u.rreaddir.count=buf_get_int32(bufp);
        void *return_value_buf_alloc_3;
        return_value_buf_alloc_3=buf_alloc(bufp, (signed int)fc->u.rreaddir.count);
        fc->u.rreaddir.data = (unsigned char *)return_value_buf_alloc_3;
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L48:
        ;
        fc->u.tfsync.fid=buf_get_int32(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L49:
        ;
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L50:
        ;
        fc->u.tlock.fid=buf_get_int32(bufp);
        fc->u.tlock.type=buf_get_int8(bufp);
        fc->u.tlock.flags=buf_get_int32(bufp);
        fc->u.tlock.start=buf_get_int64(bufp);
        fc->u.tlock.length=buf_get_int64(bufp);
        fc->u.tlock.proc_id=buf_get_int32(bufp);
        buf_get_str(bufp, &fc->u.tlock.client_id);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L51:
        ;
        fc->u.rlock.status=buf_get_int8(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L52:
        ;
        fc->u.tgetlock.fid=buf_get_int32(bufp);
        fc->u.tgetlock.type=buf_get_int8(bufp);
        fc->u.tgetlock.start=buf_get_int64(bufp);
        fc->u.tgetlock.length=buf_get_int64(bufp);
        fc->u.tgetlock.proc_id=buf_get_int32(bufp);
        buf_get_str(bufp, &fc->u.tgetlock.client_id);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L53:
        ;
        fc->u.rgetlock.type=buf_get_int8(bufp);
        fc->u.rgetlock.start=buf_get_int64(bufp);
        fc->u.rgetlock.length=buf_get_int64(bufp);
        fc->u.rgetlock.proc_id=buf_get_int32(bufp);
        buf_get_str(bufp, &fc->u.rgetlock.client_id);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L54:
        ;
        fc->u.tlink.dfid=buf_get_int32(bufp);
        fc->u.tlink.fid=buf_get_int32(bufp);
        buf_get_str(bufp, &fc->u.tlink.name);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L55:
        ;
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L56:
        ;
        fc->u.tmkdir.fid=buf_get_int32(bufp);
        buf_get_str(bufp, &fc->u.tmkdir.name);
        fc->u.tmkdir.mode=buf_get_int32(bufp);
        fc->u.tmkdir.gid=buf_get_int32(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L57:
        ;
        buf_get_qid(bufp, &fc->u.rmkdir.qid);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L58:
        ;
        fc->u.trenameat.olddirfid=buf_get_int32(bufp);
        buf_get_str(bufp, &fc->u.trenameat.oldname);
        fc->u.trenameat.newdirfid=buf_get_int32(bufp);
        buf_get_str(bufp, &fc->u.trenameat.newname);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L59:
        ;
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L60:
        ;
        fc->u.tunlinkat.dirfid=buf_get_int32(bufp);
        buf_get_str(bufp, &fc->u.tunlinkat.name);
        fc->u.tunlinkat.flags=buf_get_int32(bufp);
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L61:
        ;
        goto __CPROVER_DUMP_L62;

      __CPROVER_DUMP_L62:
        ;
        return_value_buf_check_overflow_4=buf_check_overflow(bufp);
        if(return_value_buf_check_overflow_4 == 0)
          return (signed int)fc->size;

      }

    }

  }

error:
  ;
  return 0;
}

// np_deserialize_p9dirent
// file ../libnpfs/npfs.h line 421
signed int np_deserialize_p9dirent(struct p9_qid *qid, unsigned long int *offset, unsigned char *type, char *name, signed int namelen, unsigned char *buf, signed int buflen)
{
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  struct p9_str s9;
  buf_init(bufp, (void *)buf, buflen);
  buf_get_qid(bufp, qid);
  *offset=buf_get_int64(bufp);
  *type=buf_get_int8(bufp);
  buf_get_str(bufp, &s9);
  snprintf(name, (unsigned long int)namelen, "%.*s", s9.len, s9.str);
  signed int return_value_buf_check_overflow_1;
  return_value_buf_check_overflow_1=buf_check_overflow(bufp);
  if(!(return_value_buf_check_overflow_1 == 0))
    return 0;

  else
    return (signed int)(bufp->p - bufp->sp);
}

// np_encode_tpools_str
// file npfs.h line 412
signed int np_encode_tpools_str(char **s, signed int *len, struct Npstats *stats)
{
  signed int return_value_aspf_1;
  return_value_aspf_1=aspf(s, len, "%s %d %d %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu %lu \n", stats->name, stats->numreqs, stats->numfids, stats->rbytes, stats->wbytes, stats->nreqs[(signed long int)8], stats->nreqs[(signed long int)12], stats->nreqs[(signed long int)14], stats->nreqs[(signed long int)16], stats->nreqs[(signed long int)18], stats->nreqs[(signed long int)20], stats->nreqs[(signed long int)22], stats->nreqs[(signed long int)24], stats->nreqs[(signed long int)26], stats->nreqs[(signed long int)30], stats->nreqs[(signed long int)32], stats->nreqs[(signed long int)40], stats->nreqs[(signed long int)50], stats->nreqs[(signed long int)52], stats->nreqs[(signed long int)54], stats->nreqs[(signed long int)70], stats->nreqs[(signed long int)72], stats->nreqs[(signed long int)100], stats->nreqs[(signed long int)102], stats->nreqs[(signed long int)104], stats->nreqs[(signed long int)108], stats->nreqs[(signed long int)110], stats->nreqs[(signed long int)116], stats->nreqs[(signed long int)118], stats->nreqs[(signed long int)120], stats->nreqs[(signed long int)122], stats->rcount[(signed long int)0], stats->rcount[(signed long int)1], stats->rcount[(signed long int)2], stats->rcount[(signed long int)3], stats->rcount[(signed long int)4], stats->rcount[(signed long int)5], stats->rcount[(signed long int)6], stats->rcount[(signed long int)7], stats->rcount[(signed long int)8], stats->rcount[(signed long int)9], stats->rcount[(signed long int)10], stats->rcount[(signed long int)11], stats->wcount[(signed long int)0], stats->wcount[(signed long int)1], stats->wcount[(signed long int)2], stats->wcount[(signed long int)3], stats->wcount[(signed long int)4], stats->wcount[(signed long int)5], stats->wcount[(signed long int)6], stats->wcount[(signed long int)7], stats->wcount[(signed long int)8], stats->wcount[(signed long int)9], stats->wcount[(signed long int)10], stats->wcount[(signed long int)11]);
  return return_value_aspf_1;
}

// np_fdtrans_create
// file ../libnpfs/npfs.h line 521
struct Nptrans * np_fdtrans_create(signed int fdin, signed int fdout)
{
  struct Nptrans *npt;
  struct Fdtrans *fdt;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct Fdtrans) /*32ul*/ );
  fdt = (struct Fdtrans *)return_value_malloc_1;
  if(fdt == ((struct Fdtrans *)NULL))
  {
    np_uerror((unsigned long int)12);
    return (struct Nptrans *)(void *)0;
  }

  else
  {
    fdt->fdin = fdin;
    fdt->fdout = fdout;
    fdt->fc = (struct Npfcall *)(void *)0;
    fdt->fc_len = 0;
    npt=np_trans_create((void *)fdt, np_fdtrans_recv, np_fdtrans_send, np_fdtrans_destroy);
    if(npt == ((struct Nptrans *)NULL))
    {
      free((void *)fdt);
      return (struct Nptrans *)(void *)0;
    }

    else
    {
      fdt->trans = npt;
      return npt;
    }
  }
}

// np_fdtrans_destroy
// file fdtrans.c line 81
static void np_fdtrans_destroy(void *a)
{
  struct Fdtrans *fdt = (struct Fdtrans *)a;
  fdt = (struct Fdtrans *)a;
  if(fdt->fdin >= 0)
    close(fdt->fdin);

  if(fdt->fdout >= 0)
  {
    if(!(fdt->fdout == fdt->fdin))
      close(fdt->fdout);

  }

  if(!(fdt->fc == ((struct Npfcall *)NULL)))
    free((void *)fdt->fc);

  free((void *)fdt);
}

// np_fdtrans_recv
// file fdtrans.c line 106
static signed int np_fdtrans_recv(struct Npfcall **fcp, unsigned int msize, void *a)
{
  struct Fdtrans *fdt = (struct Fdtrans *)a;
  struct Npfcall *fc;
  unsigned int size;
  signed int n;
  signed int len;
  if(!(fdt->fc == ((struct Npfcall *)NULL)))
  {
    fc = fdt->fc;
    fdt->fc = (struct Npfcall *)(void *)0;
    len = fdt->fc_len;
    size=np_peek_size(fc->pkt, len);
    if(!(msize >= size))
    {
      np_uerror((unsigned long int)71);
      goto error;
    }

  }

  else
  {
    fc=np_alloc_fcall((signed int)msize);
    if(fc == ((struct Npfcall *)NULL))
    {
      np_uerror((unsigned long int)12);
      goto error;
    }

    len = 0;
    size = (unsigned int)0;
  }
  signed int *return_value___errno_location_2;
  while(size == 0u || !((unsigned int)len >= size))
  {
    signed long int return_value_read_1;
    return_value_read_1=read(fdt->fdin, (void *)(fc->pkt + (signed long int)len), (unsigned long int)(msize - (unsigned int)len));
    n = (signed int)return_value_read_1;
    if(!(n >= 0))
    {
      return_value___errno_location_2=__errno_location();
      if(!(*return_value___errno_location_2 == 4))
        goto __CPROVER_DUMP_L5;

    }

    else
    {

    __CPROVER_DUMP_L5:
      ;
      if(!(n >= 0))
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        np_uerror((unsigned long int)*return_value___errno_location_3);
        goto error;
      }

      if(n == 0)
        goto eof;

      len = len + n;
      if(size == 0u)
      {
        size=np_peek_size(fc->pkt, len);
        if(!(msize >= size))
        {
          np_uerror((unsigned long int)71);
          goto error;
        }

      }

    }
  }
  if(!(size >= (unsigned int)len))
  {
    fdt->fc=np_alloc_fcall((signed int)msize);
    if(fdt->fc == ((struct Npfcall *)NULL))
    {
      np_uerror((unsigned long int)12);
      goto error;
    }

    fdt->fc_len = (signed int)((unsigned int)len - size);
    memcpy((void *)fdt->fc->pkt, (const void *)(fc->pkt + (signed long int)size), (unsigned long int)fdt->fc_len);
  }

  fc->size = size;
  *fcp = fc;
  return 0;

eof:
  ;
  free((void *)fc);
  *fcp = (struct Npfcall *)(void *)0;
  return 0;

error:
  ;
  if(!(fc == ((struct Npfcall *)NULL)))
    free((void *)fc);

  return -1;
}

// np_fdtrans_send
// file fdtrans.c line 171
static signed int np_fdtrans_send(struct Npfcall *fc, void *a)
{
  struct Fdtrans *fdt = (struct Fdtrans *)a;
  unsigned char *data = fc->pkt;
  unsigned int size = fc->size;
  signed int len = 0;
  signed int n;
  signed int *return_value___errno_location_2;
  while(!((unsigned int)len >= size))
  {
    signed long int return_value_write_1;
    return_value_write_1=write(fdt->fdout, (const void *)(data + (signed long int)len), (unsigned long int)(size - (unsigned int)len));
    n = (signed int)return_value_write_1;
    if(!(n >= 0))
    {
      return_value___errno_location_2=__errno_location();
      if(!(*return_value___errno_location_2 == 4))
        goto __CPROVER_DUMP_L2;

    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      if(!(n >= 0))
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        np_uerror((unsigned long int)*return_value___errno_location_3);
        goto error;
      }

      len = len + n;
    }
  }
  return len;

error:
  ;
  return -1;
}

// np_fid_create
// file npfs.h line 388
struct Npfid * np_fid_create(struct Npconn *conn, unsigned int fid)
{
  struct Npsrv *srv = conn->srv;
  struct Npfidpool *pool = conn->fidpool;
  signed int hash = (signed int)(fid % (unsigned int)pool->size);
  struct Npfid *f;
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&pool->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "fidpool.c", 239);

  }
  while((_Bool)0);
  f=_lookup_fid(&pool->htable[(signed long int)hash], fid);
  char *tmp_if_expr_1;
  char *return_value;
  if(!(f == ((struct Npfid *)NULL)))
  {
    if(!(srv->get_path == ((char * (*)(struct Npfid *))NULL)))
    {
      return_value=srv->get_path(f);
      tmp_if_expr_1 = return_value;
    }

    else
      tmp_if_expr_1 = "<nil>";
    np_logmsg(srv, "np_fid_create: unclunked fid %d (%s): %d refs", f->fid, tmp_if_expr_1, f->refcount);
    if(!((8388608 & srv->flags) == 0))
      f->flags = f->flags | 0x01;

    else
    {
      np_uerror((unsigned long int)17);
      f = (struct Npfid *)(void *)0;
      goto done;
    }
  }

  f=_create_fid(conn, fid);
  if(!(f == ((struct Npfid *)NULL)))
  {
    np_fid_incref(f);
    _link_fid(&pool->htable[(signed long int)hash], f);
  }

  do
  {

  done:
    ;
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&pool->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "fidpool.c", 257);

  }
  while((_Bool)0);
  return f;
}

// np_fid_decref
// file npfs.h line 391
void np_fid_decref(struct Npfid **fp)
{
  struct Npfid *f = *fp;
  signed int refcount;
  if(f == ((struct Npfid *)NULL))
    np_assfail("f != NULL", "fidpool.c", 286);

  if(!(f->magic == 0x765abcdf))
    np_assfail("f->magic == FID_MAGIC", "fidpool.c", 287);

  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&f->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "fidpool.c", 289);

  }
  while((_Bool)0);
  f->refcount = f->refcount - 1;
  refcount = f->refcount;
  if(refcount == 0)
    *fp = (struct Npfid *)(void *)0;

  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&f->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "fidpool.c", 293);

  }
  while((_Bool)0);
  if(refcount == 0)
  {
    struct Npfidpool *pool = f->conn->fidpool;
    signed int hash = (signed int)(f->fid % (unsigned int)pool->size);
    do
    {
      signed int np_fid_decref__1__3__1__pthread_mutex_lock_result;
      np_fid_decref__1__3__1__pthread_mutex_lock_result=pthread_mutex_lock(&pool->lock);
      if(!(np_fid_decref__1__3__1__pthread_mutex_lock_result == 0))
        np_assfail("pthread_mutex_lock_result == 0", "fidpool.c", 299);

    }
    while((_Bool)0);
    _unlink_fid(&pool->htable[(signed long int)hash], f);
    do
    {
      signed int np_fid_decref__1__3__2__pthread_mutex_unlock_result;
      np_fid_decref__1__3__2__pthread_mutex_unlock_result=pthread_mutex_unlock(&pool->lock);
      if(!(np_fid_decref__1__3__2__pthread_mutex_unlock_result == 0))
        np_assfail("pthread_mutex_unlock_result == 0", "fidpool.c", 301);

    }
    while((_Bool)0);
    _destroy_fid(f);
  }

}

// np_fid_decref_bynum
// file fidpool.c line 308
void np_fid_decref_bynum(struct Npconn *conn, unsigned int fid)
{
  struct Npfidpool *pool = conn->fidpool;
  signed int hash = (signed int)(fid % (unsigned int)pool->size);
  signed int refcount = 0;
  struct Npfid *f;
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&pool->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "fidpool.c", 315);

  }
  while((_Bool)0);
  f=_lookup_fid(&pool->htable[(signed long int)hash], fid);
  if(!(f == ((struct Npfid *)NULL)))
  {
    do
    {
      signed int np_fid_decref_bynum__1__2__1__pthread_mutex_lock_result;
      np_fid_decref_bynum__1__2__1__pthread_mutex_lock_result=pthread_mutex_lock(&f->lock);
      if(!(np_fid_decref_bynum__1__2__1__pthread_mutex_lock_result == 0))
        np_assfail("pthread_mutex_lock_result == 0", "fidpool.c", 317);

    }
    while((_Bool)0);
    f->refcount = f->refcount - 1;
    refcount = f->refcount;
    do
    {
      signed int pthread_mutex_unlock_result;
      pthread_mutex_unlock_result=pthread_mutex_unlock(&f->lock);
      if(!(pthread_mutex_unlock_result == 0))
        np_assfail("pthread_mutex_unlock_result == 0", "fidpool.c", 319);

    }
    while((_Bool)0);
    if(refcount == 0)
      _unlink_fid(&pool->htable[(signed long int)hash], f);

  }

  do
  {
    signed int np_fid_decref_bynum__1__3__pthread_mutex_unlock_result;
    np_fid_decref_bynum__1__3__pthread_mutex_unlock_result=pthread_mutex_unlock(&pool->lock);
    if(!(np_fid_decref_bynum__1__3__pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "fidpool.c", 325);

  }
  while((_Bool)0);
  if(refcount == 0 && !(f == ((struct Npfid *)NULL)))
    _destroy_fid(f);

}

// np_fid_find
// file npfs.h line 387
struct Npfid * np_fid_find(struct Npconn *conn, unsigned int fid)
{
  struct Npfidpool *pool = conn->fidpool;
  signed int hash = (signed int)(fid % (unsigned int)pool->size);
  struct Npfid *f;
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&pool->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "fidpool.c", 221);

  }
  while((_Bool)0);
  f=_lookup_fid(&pool->htable[(signed long int)hash], fid);
  if(!(f == ((struct Npfid *)NULL)))
    np_fid_incref(f);

  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&pool->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "fidpool.c", 224);

  }
  while((_Bool)0);
  return f;
}

// np_fid_incref
// file npfs.h line 390
struct Npfid * np_fid_incref(struct Npfid *f)
{
  if(f == ((struct Npfid *)NULL))
    np_assfail("f != NULL", "fidpool.c", 267);

  if(!(f->magic == 0x765abcdf))
    np_assfail("f->magic == FID_MAGIC", "fidpool.c", 268);

  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&f->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "fidpool.c", 270);

  }
  while((_Bool)0);
  f->refcount = f->refcount + 1;
  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&f->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "fidpool.c", 272);

  }
  while((_Bool)0);
  return f;
}

// np_fidpool_count
// file fidpool.c line 140
signed int np_fidpool_count(struct Npfidpool *pool)
{
  signed int i;
  struct Npfid *f;
  signed int count = 0;
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&pool->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "fidpool.c", 146);

  }
  while((_Bool)0);
  i = 0;
  for( ; !(i >= pool->size); i = i + 1)
  {
    f = pool->htable[(signed long int)i];
    for( ; !(f == ((struct Npfid *)NULL)); f = f->next)
    {
      if(!(f->magic == 0x765abcdf))
        np_assfail("f->magic == FID_MAGIC", "fidpool.c", 149);

      count = count + 1;
    }
  }
  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&pool->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "fidpool.c", 153);

  }
  while((_Bool)0);
  return count;
}

// np_fidpool_create
// file npfs.h line 384
struct Npfidpool * np_fidpool_create(void)
{
  const unsigned long int hsize = (unsigned long int)64 * sizeof(struct Npfid *) /*8ul*/ ;
  struct Npfidpool *pool;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct Npfidpool) /*56ul*/  + hsize);
  pool = (struct Npfidpool *)return_value_malloc_1;
  if(!(pool == ((struct Npfidpool *)NULL)))
  {
    pthread_mutex_init(&pool->lock, (const union anonymous_6 *)(void *)0);
    pool->size = 64;
    pool->htable = (struct Npfid **)((char *)pool + (signed long int)sizeof(struct Npfidpool) /*56ul*/ );
    memset((void *)pool->htable, 0, hsize);
  }

  else
    np_uerror((unsigned long int)12);
  return pool;
}

// np_fidpool_destroy
// file npfs.h line 385
signed int np_fidpool_destroy(struct Npfidpool *pool)
{
  signed int i;
  struct Npfid *f;
  signed int unclunked = 0;
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&pool->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "fidpool.c", 124);

  }
  while((_Bool)0);
  i = 0;
  for( ; !(i >= pool->size); i = i + 1)
  {
    f = pool->htable[(signed long int)i];
    for( ; !(f == ((struct Npfid *)NULL)); unclunked = unclunked + 1)
      f=_destroy_fid(f);
  }
  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&pool->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "fidpool.c", 132);

  }
  while((_Bool)0);
  pthread_mutex_destroy(&pool->lock);
  free((void *)pool);
  return unclunked;
}

// np_finalize_rreaddir
// file np.c line 1088
void np_finalize_rreaddir(struct Npfcall *fc, unsigned int count)
{
  signed int size = (signed int)(sizeof(unsigned int) /*4ul*/  + sizeof(unsigned char) /*1ul*/  + sizeof(unsigned short int) /*2ul*/  + sizeof(unsigned int) /*4ul*/  + (unsigned long int)count);
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  if(!(fc->u.rreaddir.count >= count))
    np_assfail("count <= fc->u.rreaddir.count", "np.c", 1095);

  buf_init(bufp, (void *)(char *)fc->pkt, size);
  buf_put_int32(bufp, (unsigned int)size, &fc->size);
  buf_init(bufp, (void *)((char *)fc->pkt + (signed long int)7), size - 7);
  buf_put_int32(bufp, count, &fc->u.rreaddir.count);
}

// np_flush
// file npfsimpl.h line 29
signed int np_flush(struct Npreq *req, struct Npfcall *tc)
{
  unsigned short int oldtag = tc->u.tflush.oldtag;
  struct Npreq *creq;
  signed int ret = 1;
  struct Nptpool *tp;
  struct Npsrv *srv = req->conn->srv;
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&req->conn->srv->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "fcall.c", 278);

  }
  while((_Bool)0);
  tp = req->conn->srv->tpool;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  for( ; !(tp == ((struct Nptpool *)NULL)); tp = tp->next)
  {
    creq = tp->reqs_first;
    for( ; !(creq == ((struct Npreq *)NULL)); creq = creq->next)
    {
      if(creq->conn == req->conn)
        tmp_if_expr_1 = creq->tag == oldtag ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(tmp_if_expr_1)
      {
        if(!((8 & srv->flags) == 0))
          np_logmsg(srv, "flush(early): req type %d", creq->tcall->type);

        np_srv_remove_req(tp, creq);
        np_req_unref(creq);
        goto done;
      }

    }
    creq = tp->workreqs;
    for( ; !(creq == ((struct Npreq *)NULL)); creq = creq->next)
    {
      if(creq->conn == req->conn)
        tmp_if_expr_2 = creq->tag == oldtag ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
      {
        if(!((8 & srv->flags) == 0))
          np_logmsg(srv, "flush(late): req type %d", creq->tcall->type);

        if(!(creq->flushreq == ((struct Npreq *)NULL)))
          np_req_unref(creq->flushreq);

        creq->flushreq = req;
        ret = 0;
        if(!((1048576 & req->conn->srv->flags) == 0))
          pthread_kill(creq->wthread->thread, 12);

        goto done;
      }

    }
  }
  if(!((8 & srv->flags) == 0))
    np_logmsg(srv, "flush: tag %d not found", oldtag);

  do
  {

  done:
    ;
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&req->conn->srv->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "fcall.c", 311);

  }
  while((_Bool)0);
  return ret;
}

// np_fsync
// file fcall.c line 1037
struct Npfcall * np_fsync(struct Npreq *req, struct Npfcall *tc)
{
  struct Npfid *fid = req->fid;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(req->conn->srv, "fsync: invalid fid");
  }

  else
    if(!((0x02 & fid->flags) == 0))
      np_uerror((unsigned long int)30);

    else
      if(!((4 & (signed int)fid->type) == 0))
      {
        np_uerror((unsigned long int)1);
        goto done;
      }

      else
      {
        signed int return_value_np_setfsid_1;
        return_value_np_setfsid_1=np_setfsid(req, fid->user, (unsigned int)-1);
        if(return_value_np_setfsid_1 >= 0)
        {
          if(req->conn->srv->fsync == ((struct Npfcall * (*)(struct Npfid *))NULL))
            np_uerror((unsigned long int)38);

          else
            rc=req->conn->srv->fsync(fid);
        }

      }

done:
  ;
  return rc;
}

// np_getattr
// file fcall.c line 835
struct Npfcall * np_getattr(struct Npreq *req, struct Npfcall *tc)
{
  struct Npfid *fid = req->fid;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(req->conn->srv, "getattr: invalid fid");
  }

  else
    if(!((4 & (signed int)fid->type) == 0))
      rc=np_ctl_getattr(fid, tc->u.tgetattr.request_mask);

    else
    {
      signed int return_value_np_setfsid_1;
      return_value_np_setfsid_1=np_setfsid(req, fid->user, (unsigned int)-1);
      if(return_value_np_setfsid_1 >= 0)
      {
        if(req->conn->srv->getattr == ((struct Npfcall * (*)(struct Npfid *, unsigned long int))NULL))
          np_uerror((unsigned long int)38);

        else
          rc=req->conn->srv->getattr(fid, tc->u.tgetattr.request_mask);
      }

    }

done:
  ;
  return rc;
}

// np_getlock
// file fcall.c line 1105
struct Npfcall * np_getlock(struct Npreq *req, struct Npfcall *tc)
{
  struct Npfid *fid = req->fid;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(req->conn->srv, "getlock: invalid fid");
  }

  else
    if(!((0x02 & fid->flags) == 0))
      np_uerror((unsigned long int)30);

    else
      if(!((4 & (signed int)fid->type) == 0))
      {
        np_uerror((unsigned long int)1);
        goto done;
      }

      else
      {
        signed int return_value_np_setfsid_1;
        return_value_np_setfsid_1=np_setfsid(req, fid->user, (unsigned int)-1);
        if(return_value_np_setfsid_1 >= 0)
        {
          if(req->conn->srv->getlock == ((struct Npfcall * (*)(struct Npfid *, unsigned char, unsigned long int, unsigned long int, unsigned int, struct p9_str *))NULL))
            np_uerror((unsigned long int)38);

          else
            rc=req->conn->srv->getlock(fid, tc->u.tgetlock.type, tc->u.tgetlock.start, tc->u.tgetlock.length, tc->u.tgetlock.proc_id, &tc->u.tgetlock.client_id);
        }

      }

done:
  ;
  return rc;
}

// np_init_error_key
// file error.c line 41
static void np_init_error_key(void)
{
  pthread_key_create(&error_key, (void (*)(void *))(void *)0);
}

// np_lcreate
// file fcall.c line 660
struct Npfcall * np_lcreate(struct Npreq *req, struct Npfcall *tc)
{
  struct Npfid *fid = req->fid;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(req->conn->srv, "lcreate: invalid fid");
  }

  else
    if(!((0x02 & fid->flags) == 0))
      np_uerror((unsigned long int)30);

    else
    {
      if(!((4 & (signed int)fid->type) == 0))
      {
        np_uerror((unsigned long int)1);
        goto done;
      }

      else
      {
        signed int return_value_np_setfsid_1;
        return_value_np_setfsid_1=np_setfsid(req, fid->user, tc->u.tlcreate.gid);
        if(!(return_value_np_setfsid_1 >= 0))
          goto done;

        if(req->conn->srv->lcreate == ((struct Npfcall * (*)(struct Npfid *, struct p9_str *, unsigned int, unsigned int, unsigned int))NULL))
        {
          np_uerror((unsigned long int)38);
          goto done;
        }

        rc=req->conn->srv->lcreate(fid, &tc->u.tlcreate.name, tc->u.tlcreate.flags, tc->u.tlcreate.mode, tc->u.tlcreate.gid);
      }
      if(!(rc == ((struct Npfcall *)NULL)))
        fid->type = rc->u.rlcreate.qid.type;

    }

done:
  ;
  return rc;
}

// np_link
// file fcall.c line 1141
struct Npfcall * np_link(struct Npreq *req, struct Npfcall *tc)
{
  struct Npfid *dfid = req->fid;
  struct Npfid *fid = (struct Npfid *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(dfid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(req->conn->srv, "link: invalid dfid");
  }

  else
  {
    fid=np_fid_find(req->conn, tc->u.tlink.fid);
    if(fid == ((struct Npfid *)NULL))
    {
      np_uerror((unsigned long int)5);
      np_logerr(req->conn->srv, "link: invalid fid");
    }

    else
      if(!((0x02 & fid->flags) == 0))
        np_uerror((unsigned long int)30);

      else
        if(!((4 & (signed int)fid->type) == 0))
        {
          np_uerror((unsigned long int)1);
          goto done;
        }

        else
        {
          signed int return_value_np_setfsid_1;
          return_value_np_setfsid_1=np_setfsid(req, fid->user, (unsigned int)-1);
          if(return_value_np_setfsid_1 >= 0)
          {
            if(req->conn->srv->link == ((struct Npfcall * (*)(struct Npfid *, struct Npfid *, struct p9_str *))NULL))
              np_uerror((unsigned long int)38);

            else
              rc=req->conn->srv->link(dfid, fid, &tc->u.tlink.name);
          }

        }
  }

done:
  ;
  if(!(fid == ((struct Npfid *)NULL)))
    np_fid_decref(&fid);

  return rc;
}

// np_lock
// file fcall.c line 1068
struct Npfcall * np_lock(struct Npreq *req, struct Npfcall *tc)
{
  struct Npfid *fid = req->fid;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(req->conn->srv, "lock: invalid fid");
  }

  else
    if(!((0x02 & fid->flags) == 0))
      np_uerror((unsigned long int)30);

    else
      if(!((4 & (signed int)fid->type) == 0))
      {
        np_uerror((unsigned long int)1);
        goto done;
      }

      else
      {
        signed int return_value_np_setfsid_1;
        return_value_np_setfsid_1=np_setfsid(req, fid->user, (unsigned int)-1);
        if(return_value_np_setfsid_1 >= 0)
        {
          if(req->conn->srv->llock == ((struct Npfcall * (*)(struct Npfid *, unsigned char, unsigned int, unsigned long int, unsigned long int, unsigned int, struct p9_str *))NULL))
            np_uerror((unsigned long int)38);

          else
            rc=req->conn->srv->llock(fid, tc->u.tlock.type, tc->u.tlock.flags, tc->u.tlock.start, tc->u.tlock.length, tc->u.tlock.proc_id, &tc->u.tlock.client_id);
        }

      }

done:
  ;
  return rc;
}

// np_logerr
// file npfs.h line 364
void np_logerr(struct Npsrv *srv, const char *fmt, ...)
{
  void **ap;
  if(!(srv->logmsg == ((void (*)(const char *, void **))NULL)))
  {
    char buf[128l];
    char ebuf[64l];
    char *s;
    unsigned long int return_value_np_rerror_1;
    return_value_np_rerror_1=np_rerror();
    s=strerror_r((signed int)return_value_np_rerror_1, ebuf, sizeof(char [64l]) /*64ul*/ );
    ap = (void **)&fmt;
    vsnprintf(buf, sizeof(char [128l]) /*128ul*/ , fmt, ap);
    ap = ((void **)NULL);
    np_logmsg(srv, "%s: %s", (const void *)buf, s);
  }

}

// np_logmsg
// file npfs.h line 366
void np_logmsg(struct Npsrv *srv, const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  if(!(srv->logmsg == ((void (*)(const char *, void **))NULL)))
    srv->logmsg(fmt, ap);

  ap = ((void **)NULL);
}

// np_lopen
// file fcall.c line 627
struct Npfcall * np_lopen(struct Npreq *req, struct Npfcall *tc)
{
  struct Npfid *fid = req->fid;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(req->conn->srv, "lopen: invalid fid");
  }

  else
  {
    if(!((0x02 & fid->flags) == 0))
    {
      signed int flags = (signed int)tc->u.tlopen.flags;
      if(!((01 & flags) == 0) || !((02 & flags) == 0))
      {
        np_uerror((unsigned long int)30);
        goto done;
      }

    }

    if(!((4 & (signed int)fid->type) == 0))
      rc=np_ctl_lopen(fid, tc->u.tlopen.flags);

    else
    {
      signed int return_value_np_setfsid_1;
      return_value_np_setfsid_1=np_setfsid(req, fid->user, (unsigned int)-1);
      if(return_value_np_setfsid_1 >= 0)
      {
        if(req->conn->srv->lopen == ((struct Npfcall * (*)(struct Npfid *, unsigned int))NULL))
          np_uerror((unsigned long int)38);

        else
          rc=req->conn->srv->lopen(fid, tc->u.tlopen.flags);
      }

    }
  }

done:
  ;
  return rc;
}

// np_mkdir
// file fcall.c line 1180
struct Npfcall * np_mkdir(struct Npreq *req, struct Npfcall *tc)
{
  struct Npfid *fid = req->fid;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(req->conn->srv, "mkdir: invalid fid");
  }

  else
    if(!((0x02 & fid->flags) == 0))
      np_uerror((unsigned long int)30);

    else
      if(!((4 & (signed int)fid->type) == 0))
      {
        np_uerror((unsigned long int)1);
        goto done;
      }

      else
      {
        signed int return_value_np_setfsid_1;
        return_value_np_setfsid_1=np_setfsid(req, fid->user, tc->u.tmkdir.gid);
        if(return_value_np_setfsid_1 >= 0)
        {
          if(req->conn->srv->mkdir == ((struct Npfcall * (*)(struct Npfid *, struct p9_str *, unsigned int, unsigned int))NULL))
            np_uerror((unsigned long int)38);

          else
            rc=req->conn->srv->mkdir(fid, &tc->u.tmkdir.name, tc->u.tmkdir.mode, tc->u.tmkdir.gid);
        }

      }

done:
  ;
  return rc;
}

// np_mknod
// file fcall.c line 733
struct Npfcall * np_mknod(struct Npreq *req, struct Npfcall *tc)
{
  struct Npfid *fid = req->fid;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(req->conn->srv, "mknod: invalid fid");
  }

  else
    if(!((0x02 & fid->flags) == 0))
      np_uerror((unsigned long int)30);

    else
      if(!((4 & (signed int)fid->type) == 0))
      {
        np_uerror((unsigned long int)1);
        goto done;
      }

      else
      {
        signed int return_value_np_setfsid_1;
        return_value_np_setfsid_1=np_setfsid(req, fid->user, tc->u.tmknod.gid);
        if(return_value_np_setfsid_1 >= 0)
        {
          if(req->conn->srv->mknod == ((struct Npfcall * (*)(struct Npfid *, struct p9_str *, unsigned int, unsigned int, unsigned int, unsigned int))NULL))
            np_uerror((unsigned long int)38);

          else
            rc=req->conn->srv->mknod(fid, &tc->u.tmknod.name, tc->u.tmknod.mode, tc->u.tmknod.major, tc->u.tmknod.minor, tc->u.tmknod.gid);
        }

      }

done:
  ;
  return rc;
}

// np_peek_size
// file npfs.h line 416
unsigned int np_peek_size(unsigned char *buf, signed int len)
{
  unsigned int size = (unsigned int)0;
  if(len >= 4)
    size = (unsigned int)((signed int)buf[(signed long int)0] | (signed int)buf[(signed long int)1] << 8 | (signed int)buf[(signed long int)2] << 16 | (signed int)buf[(signed long int)3] << 24);

  return size;
}

// np_post_check
// file np.c line 290
static struct Npfcall * np_post_check(struct Npfcall *fc, struct cbuf *bufp)
{
  signed int return_value_buf_check_overflow_1;
  return_value_buf_check_overflow_1=buf_check_overflow(bufp);
  if(!(return_value_buf_check_overflow_1 == 0))
  {
    free((void *)fc);
    return (struct Npfcall *)(void *)0;
  }

  else
    return fc;
}

// np_postprocess_flush
// file srv.c line 706
static void np_postprocess_flush(struct Npreq *req)
{
  if(!(req->flushreq == ((struct Npreq *)NULL)))
  {
    np_req_respond_flush(req->flushreq);
    np_req_unref(req->flushreq);
    req->flushreq = (struct Npreq *)(void *)0;
  }

}

// np_postprocess_request
// file srv.c line 655
static void np_postprocess_request(struct Npreq *req, struct Npfcall *rc)
{
  struct Npfcall *tc = req->tcall;
  signed int ecode;
  unsigned long int return_value_np_rerror_1;
  return_value_np_rerror_1=np_rerror();
  ecode = (signed int)return_value_np_rerror_1;
  if(tc == ((struct Npfcall *)NULL))
    np_assfail("tc != NULL", "srv.c", 660);

  unsigned int ofid;
  unsigned int nfid;
  if(ecode == 4)
  {
    switch((signed int)tc->type)
    {
      case 120:

      case 122:
      {
        req->fid = (struct Npfid *)(void *)0;
        break;
      }
      case 110:
      {
        ofid = tc->u.twalk.fid;
        nfid = tc->u.twalk.newfid;
        if(!(ofid == nfid))
          np_fid_decref_bynum(req->conn, nfid);

      }
    }
    req->state = (enum anonymous_10)REQ_NOREPLY;
  }

  if(!(req->fid == ((struct Npfid *)NULL)))
  {
    np_fid_decref(&req->fid);
    req->fid = (struct Npfid *)(void *)0;
  }

  if(!(ecode == 0))
  {
    if(!(rc == ((struct Npfcall *)NULL)))
      free((void *)rc);

    np_req_respond_error(req, ecode);
  }

  else
    np_req_respond(req, rc);
}

// np_preprocess_request
// file srv.c line 401
static void np_preprocess_request(struct Npreq *req)
{
  struct Npfcall *tc = req->tcall;
  struct Npconn *conn = req->conn;
  switch((signed int)tc->type)
  {
    case 8:
    {
      req->fid=np_fid_find(conn, tc->u.tstatfs.fid);
      break;
    }
    case 12:
    {
      req->fid=np_fid_find(conn, tc->u.tlopen.fid);
      break;
    }
    case 14:
    {
      req->fid=np_fid_find(conn, tc->u.tlcreate.fid);
      break;
    }
    case 16:
    {
      req->fid=np_fid_find(conn, tc->u.tsymlink.fid);
      break;
    }
    case 18:
    {
      req->fid=np_fid_find(conn, tc->u.tmknod.fid);
      break;
    }
    case 20:
    {
      req->fid=np_fid_find(conn, tc->u.trename.fid);
      break;
    }
    case 22:
    {
      req->fid=np_fid_find(conn, tc->u.treadlink.fid);
      break;
    }
    case 24:
    {
      req->fid=np_fid_find(conn, tc->u.tgetattr.fid);
      break;
    }
    case 26:
    {
      req->fid=np_fid_find(conn, tc->u.tsetattr.fid);
      break;
    }
    case 30:
    {
      req->fid=np_fid_find(conn, tc->u.txattrwalk.fid);
      break;
    }
    case 32:
    {
      req->fid=np_fid_find(conn, tc->u.txattrcreate.fid);
      break;
    }
    case 40:
    {
      req->fid=np_fid_find(conn, tc->u.treaddir.fid);
      break;
    }
    case 50:
    {
      req->fid=np_fid_find(conn, tc->u.tfsync.fid);
      break;
    }
    case 52:
    {
      req->fid=np_fid_find(conn, tc->u.tlock.fid);
      break;
    }
    case 54:
    {
      req->fid=np_fid_find(conn, tc->u.tgetlock.fid);
      break;
    }
    case 70:
    {
      req->fid=np_fid_find(conn, tc->u.tlink.dfid);
      break;
    }
    case 72:
    {
      req->fid=np_fid_find(conn, tc->u.tmkdir.fid);
      break;
    }
    case 100:
      break;
    case 102:
    {
      req->fid=np_fid_create(conn, tc->u.tauth.afid);
      if(req->fid == ((struct Npfid *)NULL))
        break;

      req->fid->aname=np_strdup(&tc->u.tauth.aname);
      if(req->fid->aname == ((char *)NULL))
        np_fid_decref(&req->fid);

      break;
    }
    case 104:
    {
      req->fid=np_fid_create(conn, tc->u.tattach.fid);
      if(req->fid == ((struct Npfid *)NULL))
        break;

      req->fid->aname=np_strdup(&tc->u.tattach.aname);
      if(req->fid->aname == ((char *)NULL))
        np_fid_decref(&req->fid);

      np_tpool_select(req);
      break;
    }
    case 108:
      break;
    case 110:
    {
      req->fid=np_fid_find(conn, tc->u.twalk.fid);
      break;
    }
    case 116:
    {
      req->fid=np_fid_find(conn, tc->u.tread.fid);
      break;
    }
    case 118:
    {
      req->fid=np_fid_find(conn, tc->u.twrite.fid);
      break;
    }
    case 120:
    {
      req->fid=np_fid_find(conn, tc->u.tclunk.fid);
      break;
    }
    case 122:
    {
      req->fid=np_fid_find(conn, tc->u.tremove.fid);
      break;
    }
    case 74:
    {
      req->fid=np_fid_find(conn, tc->u.trenameat.olddirfid);
      break;
    }
    case 76:
      req->fid=np_fid_find(conn, tc->u.tunlinkat.dirfid);
  }
}

// np_printdata
// file fmt.c line 111
static void np_printdata(char *s, signed int len, unsigned char *buf, signed int buflen)
{
  if(buflen >= 1)
    spf(s, len, "\n");

  np_sndump(s, len, buf, buflen < 64 ? buflen : 64);
}

// np_printdents
// file fmt.c line 102
static void np_printdents(char *s, signed int len, unsigned char *buf, signed int buflen)
{
  if(buflen >= 1)
    spf(s, len, "\n");

  np_sndump(s, len, buf, buflen < 64 ? buflen : 64);
}

// np_printlockstatus
// file fmt.c line 138
static void np_printlockstatus(char *s, signed int len, unsigned char status)
{
  switch((signed int)status)
  {
    case 0:
    {
      spf(s, len, "%s", (const void *)"P9_LOCK_SUCCESS");
      break;
    }
    case 1:
    {
      spf(s, len, "%s", (const void *)"P9_LOCK_BLOCKED");
      break;
    }
    case 2:
    {
      spf(s, len, "%s", (const void *)"P9_LOCK_ERROR");
      break;
    }
    case 3:
    {
      spf(s, len, "%s", (const void *)"P9_LOCK_GRACE");
      break;
    }
    default:
      spf(s, len, "%u", status);
  }
}

// np_printlocktype
// file fmt.c line 119
static void np_printlocktype(char *s, signed int len, unsigned char type)
{
  switch((signed int)type)
  {
    case 0:
    {
      spf(s, len, "%s", (const void *)"P9_LOCK_TYPE_RDLCK");
      break;
    }
    case 1:
    {
      spf(s, len, "%s", (const void *)"P9_LOCK_TYPE_WRLCK");
      break;
    }
    case 2:
    {
      spf(s, len, "%s", (const void *)"P9_LOCK_TYPE_UNLCK");
      break;
    }
    default:
      spf(s, len, "%u", type);
  }
}

// np_printqid
// file fmt.c line 43
static void np_printqid(char *s, signed int len, struct p9_qid *q)
{
  signed int n = 0;
  char buf[10l];
  signed int tmp_post_1;
  if(!((128 & (signed int)q->type) == 0))
  {
    tmp_post_1 = n;
    n = n + 1;
    buf[(signed long int)tmp_post_1] = (char)100;
  }

  signed int tmp_post_2;
  if(!((64 & (signed int)q->type) == 0))
  {
    tmp_post_2 = n;
    n = n + 1;
    buf[(signed long int)tmp_post_2] = (char)97;
  }

  signed int tmp_post_3;
  if(!((8 & (signed int)q->type) == 0))
  {
    tmp_post_3 = n;
    n = n + 1;
    buf[(signed long int)tmp_post_3] = (char)65;
  }

  signed int tmp_post_4;
  if(!((32 & (signed int)q->type) == 0))
  {
    tmp_post_4 = n;
    n = n + 1;
    buf[(signed long int)tmp_post_4] = (char)108;
  }

  signed int tmp_post_5;
  if(!((4 & (signed int)q->type) == 0))
  {
    tmp_post_5 = n;
    n = n + 1;
    buf[(signed long int)tmp_post_5] = (char)116;
  }

  signed int tmp_post_6;
  if(!((2 & (signed int)q->type) == 0))
  {
    tmp_post_6 = n;
    n = n + 1;
    buf[(signed long int)tmp_post_6] = (char)76;
  }

  buf[(signed long int)n] = (char)0;
  spf(s, len, "(%.16lx %x '%s')", q->path, q->version, (const void *)buf);
}

// np_process_request
// file srv.c line 537
static struct Npfcall * np_process_request(struct Npreq *req, struct Nptpool *tp)
{
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  struct Npfcall *tc = req->tcall;
  unsigned long int rbytes = (unsigned long int)0;
  unsigned long int wbytes = (unsigned long int)0;
  np_uerror((unsigned long int)0);
  switch((signed int)tc->type)
  {
    case 8:
    {
      rc=np_statfs(req, tc);
      break;
    }
    case 12:
    {
      rc=np_lopen(req, tc);
      break;
    }
    case 14:
    {
      rc=np_lcreate(req, tc);
      break;
    }
    case 16:
    {
      rc=np_symlink(req, tc);
      break;
    }
    case 18:
    {
      rc=np_mknod(req, tc);
      break;
    }
    case 20:
    {
      rc=np_rename(req, tc);
      break;
    }
    case 22:
    {
      rc=np_readlink(req, tc);
      break;
    }
    case 24:
    {
      rc=np_getattr(req, tc);
      break;
    }
    case 26:
    {
      rc=np_setattr(req, tc);
      break;
    }
    case 30:
    {
      rc=np_xattrwalk(req, tc);
      break;
    }
    case 32:
    {
      rc=np_xattrcreate(req, tc);
      break;
    }
    case 40:
    {
      rc=np_readdir(req, tc);
      break;
    }
    case 50:
    {
      rc=np_fsync(req, tc);
      break;
    }
    case 52:
    {
      rc=np_lock(req, tc);
      break;
    }
    case 54:
    {
      rc=np_getlock(req, tc);
      break;
    }
    case 70:
    {
      rc=np_link(req, tc);
      break;
    }
    case 72:
    {
      rc=np_mkdir(req, tc);
      break;
    }
    case 74:
    {
      rc=np_renameat(req, tc);
      break;
    }
    case 76:
    {
      rc=np_unlinkat(req, tc);
      break;
    }
    case 100:
    {
      rc=np_version(req, tc);
      break;
    }
    case 102:
    {
      rc=np_auth(req, tc);
      break;
    }
    case 104:
    {
      rc=np_attach(req, tc);
      break;
    }
    case 108:
    {
      np_assfail("0", "srv.c", 612);
      break;
    }
    case 110:
    {
      rc=np_walk(req, tc);
      break;
    }
    case 116:
    {
      rc=np_read(req, tc);
      if(!(rc == ((struct Npfcall *)NULL)))
        rbytes = (unsigned long int)rc->u.rread.count;

      break;
    }
    case 118:
    {
      rc=np_write(req, tc);
      if(!(rc == ((struct Npfcall *)NULL)))
        wbytes = (unsigned long int)rc->u.rwrite.count;

      break;
    }
    case 120:
    {
      rc=np_clunk(req, tc);
      break;
    }
    case 122:
    {
      rc=np_remove(req, tc);
      break;
    }
    default:
      np_assfail("0", "srv.c", 634);
  }
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&tp->srv->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "srv.c", 639);

  }
  while((_Bool)0);
  if(rbytes >= 1ul)
  {
    signed int return_value__hbin_1;
    return_value__hbin_1=_hbin(rbytes);
    tp->stats.rcount[(signed long int)return_value__hbin_1] = tp->stats.rcount[(signed long int)return_value__hbin_1] + 1ul;
    tp->stats.rbytes = tp->stats.rbytes + rbytes;
  }

  if(wbytes >= 1ul)
  {
    signed int return_value__hbin_2;
    return_value__hbin_2=_hbin(wbytes);
    tp->stats.wcount[(signed long int)return_value__hbin_2] = tp->stats.wcount[(signed long int)return_value__hbin_2] + 1ul;
    tp->stats.wbytes = tp->stats.wbytes + wbytes;
  }

  tp->stats.nreqs[(signed long int)tc->type] = tp->stats.nreqs[(signed long int)tc->type] + 1ul;
  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&tp->srv->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 649);

  }
  while((_Bool)0);
  return rc;
}

// np_read
// file fcall.c line 418
struct Npfcall * np_read(struct Npreq *req, struct Npfcall *tc)
{
  signed int n;
  struct Npconn *conn = req->conn;
  struct Npfid *fid = req->fid;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(conn->srv, "read: invalid fid");
  }

  else
    if(!(conn->msize >= 24u + tc->u.tread.count))
    {
      np_uerror((unsigned long int)5);
      np_logerr(conn->srv, "read: count %u too large", tc->u.tread.count);
    }

    else
      if(!((8 & (signed int)fid->type) == 0))
      {
        if(!(conn->srv->auth == ((struct Npauth *)NULL)))
        {
          rc=np_alloc_rread(tc->u.tread.count);
          if(rc == ((struct Npfcall *)NULL))
            goto done;

          n=conn->srv->auth->read(fid, tc->u.tread.offset, tc->u.tread.count, rc->u.rread.data);
          if(n >= 0)
            np_set_rread_count(rc, (unsigned int)n);

          else
          {
            free((void *)rc);
            rc = (struct Npfcall *)(void *)0;
          }
        }

        else
          np_uerror((unsigned long int)38);
      }

      else
        if(!((4 & (signed int)fid->type) == 0))
          rc=np_ctl_read(fid, tc->u.tread.offset, tc->u.tread.count, req);

        else
        {
          signed int return_value_np_setfsid_1;
          return_value_np_setfsid_1=np_setfsid(req, fid->user, (unsigned int)-1);
          if(return_value_np_setfsid_1 >= 0)
          {
            if(conn->srv->read == ((struct Npfcall * (*)(struct Npfid *, unsigned long int, unsigned int, struct Npreq *))NULL))
              np_uerror((unsigned long int)38);

            else
              rc=conn->srv->read(fid, tc->u.tread.offset, tc->u.tread.count, req);
          }

        }

done:
  ;
  return rc;
}

// np_readdir
// file fcall.c line 1002
struct Npfcall * np_readdir(struct Npreq *req, struct Npfcall *tc)
{
  struct Npfid *fid = req->fid;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(req->conn->srv, "readdir: invalid fid");
  }

  else
    if(!(req->conn->msize >= 24u + tc->u.treaddir.count))
    {
      np_uerror((unsigned long int)5);
      np_logerr(req->conn->srv, "readdir: count %u too large", tc->u.treaddir.count);
    }

    else
      if(!((4 & (signed int)fid->type) == 0))
        rc=np_ctl_readdir(fid, tc->u.treaddir.offset, tc->u.treaddir.count, req);

      else
      {
        signed int return_value_np_setfsid_1;
        return_value_np_setfsid_1=np_setfsid(req, fid->user, (unsigned int)-1);
        if(return_value_np_setfsid_1 >= 0)
        {
          if(req->conn->srv->readdir == ((struct Npfcall * (*)(struct Npfid *, unsigned long int, unsigned int, struct Npreq *))NULL))
            np_uerror((unsigned long int)38);

          else
            rc=req->conn->srv->readdir(fid, tc->u.treaddir.offset, tc->u.treaddir.count, req);
        }

      }

done:
  ;
  return rc;
}

// np_readlink
// file fcall.c line 808
struct Npfcall * np_readlink(struct Npreq *req, struct Npfcall *tc)
{
  struct Npfid *fid = req->fid;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(req->conn->srv, "readlink: invalid fid");
  }

  else
    if(!((4 & (signed int)fid->type) == 0))
    {
      np_uerror((unsigned long int)1);
      goto done;
    }

    else
    {
      signed int return_value_np_setfsid_1;
      return_value_np_setfsid_1=np_setfsid(req, fid->user, (unsigned int)-1);
      if(return_value_np_setfsid_1 >= 0)
      {
        if(req->conn->srv->readlink == ((struct Npfcall * (*)(struct Npfid *))NULL))
          np_uerror((unsigned long int)38);

        else
          rc=req->conn->srv->readlink(fid);
      }

    }

done:
  ;
  return rc;
}

// np_remove
// file fcall.c line 567
struct Npfcall * np_remove(struct Npreq *req, struct Npfcall *tc)
{
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(req->fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(req->conn->srv, "remove: invalid fid");
  }

  else
    if(!((0x02 & req->fid->flags) == 0))
      np_uerror((unsigned long int)30);

    else
      if(!((4 & (signed int)req->fid->type) == 0))
      {
        np_uerror((unsigned long int)1);
        goto done;
      }

      else
      {
        signed int return_value_np_setfsid_1;
        return_value_np_setfsid_1=np_setfsid(req, req->fid->user, (unsigned int)-1);
        if(return_value_np_setfsid_1 >= 0)
        {
          if(req->conn->srv->remove == ((struct Npfcall * (*)(struct Npfid *))NULL))
            np_uerror((unsigned long int)38);

          else
            rc=req->conn->srv->remove(req->fid);
        }

      }

done:
  ;
  if(!(req->fid == ((struct Npfid *)NULL)))
    np_fid_decref(&req->fid);

  return rc;
}

// np_rename
// file fcall.c line 769
struct Npfcall * np_rename(struct Npreq *req, struct Npfcall *tc)
{
  struct Npfid *fid = req->fid;
  struct Npfid *dfid = (struct Npfid *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(req->conn->srv, "rename: invalid fid");
  }

  else
  {
    dfid=np_fid_find(req->conn, tc->u.trename.dfid);
    if(dfid == ((struct Npfid *)NULL))
    {
      np_uerror((unsigned long int)5);
      np_logerr(req->conn->srv, "rename: invalid dfid");
    }

    else
      if(!((0x02 & fid->flags) == 0))
        np_uerror((unsigned long int)30);

      else
        if(!((4 & (signed int)fid->type) == 0))
        {
          np_uerror((unsigned long int)1);
          goto done;
        }

        else
        {
          signed int return_value_np_setfsid_1;
          return_value_np_setfsid_1=np_setfsid(req, fid->user, (unsigned int)-1);
          if(return_value_np_setfsid_1 >= 0)
          {
            if(req->conn->srv->rename == ((struct Npfcall * (*)(struct Npfid *, struct Npfid *, struct p9_str *))NULL))
              np_uerror((unsigned long int)38);

            else
              rc=req->conn->srv->rename(fid, dfid, &tc->u.trename.name);
          }

        }
  }

done:
  ;
  if(!(dfid == ((struct Npfid *)NULL)))
    np_fid_decref(&dfid);

  return rc;
}

// np_renameat
// file fcall.c line 1219
struct Npfcall * np_renameat(struct Npreq *req, struct Npfcall *tc)
{
  struct Npfid *olddirfid = req->fid;
  struct Npfid *newdirfid = (struct Npfid *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  signed int return_value_np_setfsid_1;
  if(olddirfid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(req->conn->srv, "renameat: invalid olddirfid");
  }

  else
    if(!((0x02 & olddirfid->flags) == 0))
      np_uerror((unsigned long int)30);

    else
      if(!((4 & (signed int)olddirfid->type) == 0))
        np_uerror((unsigned long int)1);

      else
      {
        newdirfid=np_fid_find(req->conn, tc->u.trenameat.newdirfid);
        if(newdirfid == ((struct Npfid *)NULL))
        {
          np_uerror((unsigned long int)5);
          np_logerr(req->conn->srv, "renameat: invalid newdirfid");
        }

        else
        {
          return_value_np_setfsid_1=np_setfsid(req, newdirfid->user, (unsigned int)-1);
          if(return_value_np_setfsid_1 >= 0)
          {
            if(req->conn->srv->renameat == ((struct Npfcall * (*)(struct Npfid *, struct p9_str *, struct Npfid *, struct p9_str *))NULL))
              np_uerror((unsigned long int)95);

            else
              rc=req->conn->srv->renameat(olddirfid, &tc->u.trenameat.oldname, newdirfid, &tc->u.trenameat.newname);
          }

        }
      }

done:
  ;
  if(!(newdirfid == ((struct Npfid *)NULL)))
    np_fid_decref(&newdirfid);

  return rc;
}

// np_req_alloc
// file npfsimpl.h line 60
struct Npreq * np_req_alloc(struct Npconn *conn, struct Npfcall *tc)
{
  struct Npreq *req;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct Npreq) /*128ul*/ );
  req = (struct Npreq *)return_value_malloc_1;
  if(req == ((struct Npreq *)NULL))
    return (struct Npreq *)(void *)0;

  else
  {
    np_conn_incref(conn);
    pthread_mutex_init(&req->lock, (const union anonymous_6 *)(void *)0);
    req->refcount = 1;
    req->conn = conn;
    req->tag = tc->tag;
    req->state = (enum anonymous_10)REQ_NORMAL;
    req->flushreq = (struct Npreq *)(void *)0;
    req->tcall = tc;
    req->rcall = (struct Npfcall *)(void *)0;
    req->next = (struct Npreq *)(void *)0;
    req->prev = (struct Npreq *)(void *)0;
    req->wthread = (struct Npwthread *)(void *)0;
    req->fid = (struct Npfid *)(void *)0;
    req->birth=time((signed long int *)(void *)0);
    np_preprocess_request(req);
    return req;
  }
}

// np_req_ref
// file srv.c line 815
struct Npreq * np_req_ref(struct Npreq *req)
{
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&req->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "srv.c", 817);

  }
  while((_Bool)0);
  req->refcount = req->refcount + 1;
  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&req->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 819);

  }
  while((_Bool)0);
  return req;
}

// np_req_respond
// file srv.c line 753
void np_req_respond(struct Npreq *req, struct Npfcall *rc)
{
  if(rc == ((struct Npfcall *)NULL))
    np_assfail("rc != NULL", "srv.c", 755);

  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&req->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "srv.c", 757);

  }
  while((_Bool)0);
  req->rcall = rc;
  if((signed int)req->state == REQ_NORMAL)
  {
    np_set_tag(req->rcall, req->tag);
    np_conn_respond(req);
  }

  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&req->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 763);

  }
  while((_Bool)0);
}

// np_req_respond_error
// file srv.c line 767
void np_req_respond_error(struct Npreq *req, signed int ecode)
{
  char buf[299l];
  struct Npfcall *rc;
  rc=np_create_rlerror_static((unsigned int)ecode, (void *)buf, (signed int)sizeof(char [299l]) /*299ul*/ );
  np_req_respond(req, rc);
  req->rcall = (struct Npfcall *)(void *)0;
}

// np_req_respond_flush
// file npfs.h line 363
void np_req_respond_flush(struct Npreq *req)
{
  char buf[295l];
  struct Npfcall *rc;
  rc=np_create_rflush_static((void *)buf, (signed int)sizeof(char [295l]) /*295ul*/ );
  np_req_respond(req, rc);
  req->rcall = (struct Npfcall *)(void *)0;
}

// np_req_unref
// file npfsimpl.h line 62
void np_req_unref(struct Npreq *req)
{
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&req->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "srv.c", 826);

  }
  while((_Bool)0);
  if(!(req->refcount >= 1))
    np_assfail("req->refcount > 0", "srv.c", 827);

  req->refcount = req->refcount - 1;
  if(!(req->refcount == 0))
    do
    {
      signed int pthread_mutex_unlock_result;
      pthread_mutex_unlock_result=pthread_mutex_unlock(&req->lock);
      if(!(pthread_mutex_unlock_result == 0))
        np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 830);

    }
    while((_Bool)0);

  else
  {
    do
    {
      signed int np_req_unref__1__3__pthread_mutex_unlock_result;
      np_req_unref__1__3__pthread_mutex_unlock_result=pthread_mutex_unlock(&req->lock);
      if(!(np_req_unref__1__3__pthread_mutex_unlock_result == 0))
        np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 833);

    }
    while((_Bool)0);
    if(!(req->fid == ((struct Npfid *)NULL)))
    {
      np_fid_decref(&req->fid);
      req->fid = (struct Npfid *)(void *)0;
    }

    if(!(req->flushreq == ((struct Npreq *)NULL)))
      np_req_unref(req->flushreq);

    if(!(req->conn == ((struct Npconn *)NULL)))
    {
      np_conn_decref(req->conn);
      req->conn = (struct Npconn *)(void *)0;
    }

    if(!(req->tcall == ((struct Npfcall *)NULL)))
    {
      free((void *)req->tcall);
      req->tcall = (struct Npfcall *)(void *)0;
    }

    if(!(req->rcall == ((struct Npfcall *)NULL)))
    {
      free((void *)req->rcall);
      req->rcall = (struct Npfcall *)(void *)0;
    }

    pthread_mutex_destroy(&req->lock);
    if(!(req == ((struct Npreq *)NULL)))
      free((void *)req);

  }
}

// np_rerror
// file ../libnpfs/npfs.h line 528
unsigned long int np_rerror(void)
{
  pthread_once(&error_once, np_init_error_key);
  void *return_value_pthread_getspecific_1;
  return_value_pthread_getspecific_1=pthread_getspecific(error_key);
  return (unsigned long int)return_value_pthread_getspecific_1;
}

// np_serialize_p9dirent
// file np.c line 1682
signed int np_serialize_p9dirent(struct p9_qid *qid, unsigned long int offset, unsigned char type, char *name, unsigned char *buf, signed int buflen)
{
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  signed int size;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(name);
  size = (signed int)(sizeof(unsigned char) /*1ul*/  + sizeof(unsigned int) /*4ul*/  + sizeof(unsigned long int) /*8ul*/  + sizeof(unsigned long int) /*8ul*/  + sizeof(unsigned char) /*1ul*/  + sizeof(unsigned short int) /*2ul*/  + return_value_strlen_1);
  struct p9_str nstr;
  struct p9_qid nqid;
  if(!(buflen >= size))
    return 0;

  else
  {
    buf_init(bufp, (void *)buf, buflen);
    buf_put_qid(bufp, qid, &nqid);
    buf_put_int64(bufp, offset, (unsigned long int *)(void *)0);
    buf_put_int8(bufp, type, (unsigned char *)(void *)0);
    buf_put_str(bufp, name, &nstr);
    signed int return_value_buf_check_overflow_2;
    return_value_buf_check_overflow_2=buf_check_overflow(bufp);
    if(!(return_value_buf_check_overflow_2 == 0))
      return 0;

    else
      return (signed int)(bufp->p - bufp->sp);
  }
}

// np_set_rread_count
// file npfs.h line 446
void np_set_rread_count(struct Npfcall *fc, unsigned int count)
{
  signed int size = (signed int)(sizeof(unsigned int) /*4ul*/  + sizeof(unsigned char) /*1ul*/  + sizeof(unsigned short int) /*2ul*/  + sizeof(unsigned int) /*4ul*/  + (unsigned long int)count);
  struct cbuf buffer;
  struct cbuf *bufp = &buffer;
  if(!(fc->u.rread.count >= count))
    np_assfail("count <= fc->u.rread.count", "np.c", 543);

  buf_init(bufp, (void *)(char *)fc->pkt, size);
  buf_put_int32(bufp, (unsigned int)size, &fc->size);
  buf_init(bufp, (void *)((char *)fc->pkt + (signed long int)7), size - 7);
  buf_put_int32(bufp, count, &fc->u.rread.count);
}

// np_set_tag
// file ../libnpfs/npfs.h line 423
void np_set_tag(struct Npfcall *fc, unsigned short int tag)
{
  fc->tag = tag;
  fc->pkt[(signed long int)5] = (unsigned char)tag;
  fc->pkt[(signed long int)6] = (unsigned char)((signed int)tag >> 8);
}

// np_setattr
// file fcall.c line 862
struct Npfcall * np_setattr(struct Npreq *req, struct Npfcall *tc)
{
  struct Npfid *fid = req->fid;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(req->conn->srv, "setattr: invalid fid");
  }

  else
    if(!((0x02 & fid->flags) == 0))
      np_uerror((unsigned long int)30);

    else
      if(!((4 & (signed int)fid->type) == 0))
        rc=np_ctl_setattr(fid, tc->u.tsetattr.valid, tc->u.tsetattr.mode, tc->u.tsetattr.uid, tc->u.tsetattr.gid, tc->u.tsetattr.size, tc->u.tsetattr.atime_sec, tc->u.tsetattr.atime_nsec, tc->u.tsetattr.mtime_sec, tc->u.tsetattr.mtime_nsec);

      else
      {
        signed int return_value_np_setfsid_1;
        return_value_np_setfsid_1=np_setfsid(req, fid->user, (unsigned int)-1);
        if(return_value_np_setfsid_1 >= 0)
        {
          if(req->conn->srv->setattr == ((struct Npfcall * (*)(struct Npfid *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned long int, unsigned long int, unsigned long int, unsigned long int, unsigned long int))NULL))
            np_uerror((unsigned long int)38);

          else
            rc=req->conn->srv->setattr(fid, tc->u.tsetattr.valid, tc->u.tsetattr.mode, tc->u.tsetattr.uid, tc->u.tsetattr.gid, tc->u.tsetattr.size, tc->u.tsetattr.atime_sec, tc->u.tsetattr.atime_nsec, tc->u.tsetattr.mtime_sec, tc->u.tsetattr.mtime_nsec);
        }

      }

done:
  ;
  return rc;
}

// np_setfsid
// file npfs.h line 515
signed int np_setfsid(struct Npreq *req, struct Npuser *u, unsigned int gid_override)
{
  struct Npwthread *wt = req->wthread;
  struct Npsrv *srv = req->conn->srv;
  signed int i;
  signed int n;
  signed int ret = -1;
  unsigned int gid;
  unsigned int authuid;
  signed int dumpclrd = 0;
  signed int return_value_np_conn_get_authuser_1;
  return_value_np_conn_get_authuser_1=np_conn_get_authuser(req->conn, &authuid);
  if(!(return_value_np_conn_get_authuser_1 >= 0))
    authuid = (unsigned int)~0;

  unsigned int tmp_if_expr_2;
  if(!((65536 & srv->flags) == 0))
  {
    if(!(gid_override == 4294967295u))
    {
      if(!(u->uid == 0u))
      {
        if(!(authuid == 0u))
        {
          if((262144 & srv->flags) == 0)
          {
            i = 0;
            for( ; !(i >= u->nsg); i = i + 1)
              if(u->sg[(signed long int)i] == gid_override)
                break;

            if(i == u->nsg)
            {
              np_uerror((unsigned long int)1);
              np_logerr(srv, "np_setfsid(%s): gid_override %d not in user's sg list", u->uname, gid_override);
              goto done;
            }

          }

        }

      }

    }

    if(gid_override == 4294967295u)
      tmp_if_expr_2 = u->gid;

    else
      tmp_if_expr_2 = gid_override;
    gid = tmp_if_expr_2;
    if(!(wt->fsgid == gid))
    {
      dumpclrd = 1;
      n=setfsgid(gid);
      if(n == -1)
      {
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        np_uerror((unsigned long int)*return_value___errno_location_3);
        np_logerr(srv, "setfsgid(%s) gid=%d failed", u->uname, gid);
        wt->fsgid = (unsigned int)~0;
        goto done;
      }

      if(!((unsigned int)n == wt->fsgid))
      {
        signed int *return_value___errno_location_4;
        return_value___errno_location_4=__errno_location();
        np_uerror((unsigned long int)*return_value___errno_location_4);
        np_logerr(srv, "setfsgid(%s) gid=%d failedreturned %d, expected %d", u->uname, gid, n, wt->fsgid);
        wt->fsgid = (unsigned int)~0;
        goto done;
      }

      wt->fsgid = gid;
    }

    if(!(wt->fsuid == u->uid))
    {
      dumpclrd = 1;
      n=setfsuid(u->uid);
      if(n == -1)
      {
        signed int *return_value___errno_location_5;
        return_value___errno_location_5=__errno_location();
        np_uerror((unsigned long int)*return_value___errno_location_5);
        np_logerr(srv, "setfsuid(%s) uid=%d failed", u->uname, u->uid);
        wt->fsuid = (unsigned int)~0;
        goto done;
      }

      if(!((unsigned int)n == wt->fsuid))
      {
        np_uerror((unsigned long int)1);
        np_logerr(srv, "setfsuid(%s) uid=%d failed: returned %d, expected %d", u->uname, u->uid, n, wt->fsuid);
        wt->fsuid = (unsigned int)~0;
        goto done;
      }

      if(u->uid == 0u)
        wt->privcap = 1;

      else
        if(wt->fsuid == 0u)
          wt->privcap = 0;

      if(!((4194304 & srv->flags) == 0))
      {
        signed long int return_value_syscall_7;
        return_value_syscall_7=syscall((signed long int)116, u->nsg, u->sg);
        if(!(return_value_syscall_7 >= 0l))
        {
          signed int *return_value___errno_location_6;
          return_value___errno_location_6=__errno_location();
          np_uerror((unsigned long int)*return_value___errno_location_6);
          np_logerr(srv, "setgroups(%s) nsg=%d failed", u->uname, u->nsg);
          wt->fsuid = (unsigned int)~0;
          goto done;
        }

      }

      wt->fsuid = u->uid;
    }

  }

  if(!((2097152 & srv->flags) == 0))
  {
    if(!(wt->fsuid == 0u))
    {
      if(wt->privcap == 0 && authuid == 0u)
      {
        signed int return_value__chg_privcap_8;
        return_value__chg_privcap_8=_chg_privcap(srv, (enum anonymous_2)CAP_SET);
        if(!(return_value__chg_privcap_8 >= 0))
          goto done;

        wt->privcap = 1;
        dumpclrd = 1;
      }

      else
        if(!(wt->privcap == 0))
        {
          if(!(authuid == 0u))
          {
            signed int return_value__chg_privcap_9;
            return_value__chg_privcap_9=_chg_privcap(srv, (enum anonymous_2)CAP_CLEAR);
            if(!(return_value__chg_privcap_9 >= 0))
              goto done;

            wt->privcap = 0;
            dumpclrd = 1;
          }

        }

    }

  }

  ret = 0;

done:
  ;
  signed int return_value_prctl_10;
  if(!(dumpclrd == 0))
  {
    return_value_prctl_10=prctl(4, 1, 0, 0, 0);
    if(!(return_value_prctl_10 >= 0))
      np_logerr(srv, "prctl PR_SET_DUMPABLE failed");

  }

  return ret;
}

// np_sndump
// file fmt.c line 66
static void np_sndump(char *s, signed int len, unsigned char *data, signed int datalen)
{
  signed int i = 0;
  for( ; !(i >= datalen); i = i + 1)
  {
    spf(s, len, "%02x", data[(signed long int)i]);
    if(i % 4 == 3)
      spf(s, len, " ");

    if(i % 32 == 31 && !(1 + i >= datalen))
      spf(s, len, "\n");

  }
}

// np_snprintfcall
// file npfs.h line 506
void np_snprintfcall(char *s, signed int len, struct Npfcall *fc)
{
  signed int i;
  s[(signed long int)0] = (char)0;
  char *return_value_np_timestr_1;
  char *return_value_np_timestr_2;
  char *return_value_np_timestr_3;
  char *return_value_np_timestr_4;
  char *return_value_np_timestr_5;
  char *return_value_np_timestr_6;
  if(fc == ((struct Npfcall *)NULL))
    spf(s, len, "NULL");

  else
    switch((signed int)fc->type)
    {
      case 6:
      {
        spf(s, len, "P9_TLERROR tag %u", fc->tag);
        break;
      }
      case 7:
      {
        spf(s, len, "P9_RLERROR tag %u", fc->tag);
        spf(s, len, " ecode %u", fc->u.rlerror.ecode);
        break;
      }
      case 8:
      {
        spf(s, len, "P9_TSTATFS tag %u", fc->tag);
        spf(s, len, " fid %u", fc->u.tstatfs.fid);
        break;
      }
      case 9:
      {
        spf(s, len, "P9_RSTATFS tag %u", fc->tag);
        spf(s, len, " type %u", fc->u.rstatfs.type);
        spf(s, len, " bsize %u", fc->u.rstatfs.bsize);
        spf(s, len, " blocks %lu", fc->u.rstatfs.blocks);
        spf(s, len, " bfree %lu", fc->u.rstatfs.bfree);
        spf(s, len, " bavail %lu", fc->u.rstatfs.bavail);
        spf(s, len, " files %lu", fc->u.rstatfs.files);
        spf(s, len, " ffree %lu", fc->u.rstatfs.ffree);
        spf(s, len, " fsid %lu", fc->u.rstatfs.fsid);
        spf(s, len, " namelen %u", fc->u.rstatfs.namelen);
        break;
      }
      case 12:
      {
        spf(s, len, "P9_TLOPEN tag %u", fc->tag);
        spf(s, len, " fid %u", fc->u.tlopen.fid);
        spf(s, len, " flags 0%o", fc->u.tlopen.flags);
        break;
      }
      case 13:
      {
        spf(s, len, "P9_RLOPEN tag %u qid ", fc->tag);
        np_printqid(s, len, &fc->u.rlopen.qid);
        spf(s, len, " iounit %u", fc->u.rlopen.iounit);
        break;
      }
      case 14:
      {
        spf(s, len, "P9_TLCREATE tag %u", fc->tag);
        spf(s, len, " fid %u", fc->u.tlcreate.fid);
        spf(s, len, " name '%.*s'", fc->u.tlcreate.name.len, fc->u.tlcreate.name.str);
        spf(s, len, " flags 0x%x", fc->u.tlcreate.flags);
        spf(s, len, " mode 0%o", fc->u.tlcreate.mode);
        spf(s, len, " gid %u", fc->u.tlcreate.gid);
        break;
      }
      case 15:
      {
        spf(s, len, "P9_RLCREATE tag %u qid ", fc->tag);
        np_printqid(s, len, &fc->u.rlcreate.qid);
        spf(s, len, " iounit %u", fc->u.rlcreate.iounit);
        break;
      }
      case 16:
      {
        spf(s, len, "P9_TSYMLINK tag %u", fc->tag);
        spf(s, len, " fid %u", fc->u.tsymlink.fid);
        spf(s, len, " name '%.*s'", fc->u.tsymlink.name.len, fc->u.tsymlink.name.str);
        spf(s, len, " symtgt '%.*s'", fc->u.tsymlink.symtgt.len, fc->u.tsymlink.symtgt.str);
        spf(s, len, " gid %u", fc->u.tsymlink.gid);
        break;
      }
      case 17:
      {
        spf(s, len, "P9_RSYMLINK tag %d qid ", fc->tag);
        np_printqid(s, len, &fc->u.rsymlink.qid);
        break;
      }
      case 18:
      {
        spf(s, len, "P9_TMKNOD tag %u", fc->tag);
        spf(s, len, " fid %u", fc->u.tmknod.fid);
        spf(s, len, " name '%.*s'", fc->u.tmknod.name.len, fc->u.tmknod.name.str);
        spf(s, len, " mode 0%o", fc->u.tmknod.mode);
        spf(s, len, " major %u", fc->u.tmknod.major);
        spf(s, len, " minor %u", fc->u.tmknod.minor);
        spf(s, len, " gid %u", fc->u.tmknod.gid);
        break;
      }
      case 19:
      {
        spf(s, len, "P9_RMKNOD tag %d qid ", fc->tag);
        np_printqid(s, len, &fc->u.rsymlink.qid);
        break;
      }
      case 20:
      {
        spf(s, len, "P9_TRENAME tag %u", fc->tag);
        spf(s, len, " fid %u", fc->u.trename.fid);
        spf(s, len, " dfid%u", fc->u.trename.dfid);
        spf(s, len, " name '%.*s'", fc->u.trename.name.len, fc->u.trename.name.str);
        break;
      }
      case 21:
      {
        spf(s, len, "P9_RRENAME tag %u", fc->tag);
        break;
      }
      case 22:
      {
        spf(s, len, "P9_TREADLINK tag %u", fc->tag);
        spf(s, len, " fid %u", fc->u.treadlink.fid);
        break;
      }
      case 23:
      {
        spf(s, len, "P9_RREADLINK tag %u", fc->tag);
        spf(s, len, " target '%.*s'", fc->u.rreadlink.target.len, fc->u.rreadlink.target.str);
        break;
      }
      case 24:
      {
        spf(s, len, "P9_TGETATTR tag %u", fc->tag);
        spf(s, len, " fid %u", fc->u.tgetattr.fid);
        spf(s, len, " request_mask 0x%lx", fc->u.tgetattr.request_mask);
        break;
      }
      case 25:
      {
        spf(s, len, "P9_RGETATTR tag %u", fc->tag);
        spf(s, len, " valid 0x%lx", fc->u.rgetattr.valid);
        spf(s, len, " qid ");
        if(!((0x00000100ULL & fc->u.rgetattr.valid) == 0ul))
          np_printqid(s, len, &fc->u.rgetattr.qid);

        else
          spf(s, len, "X");
        if(!((0x00000001ULL & fc->u.rgetattr.valid) == 0ul))
          spf(s, len, " mode 0%o", fc->u.rgetattr.mode);

        else
          spf(s, len, " mode X");
        if(!((0x00000004ULL & fc->u.rgetattr.valid) == 0ul))
          spf(s, len, " uid %u", fc->u.rgetattr.uid);

        else
          spf(s, len, " uid X");
        if(!((0x00000008ULL & fc->u.rgetattr.valid) == 0ul))
          spf(s, len, " gid %u", fc->u.rgetattr.gid);

        else
          spf(s, len, " gid X");
        if(!((0x00000002ULL & fc->u.rgetattr.valid) == 0ul))
          spf(s, len, " nlink %lu", fc->u.rgetattr.nlink);

        else
          spf(s, len, " nlink X");
        if(!((0x00000010ULL & fc->u.rgetattr.valid) == 0ul))
          spf(s, len, " rdev %lu", fc->u.rgetattr.rdev);

        else
          spf(s, len, " rdev X");
        if(!((0x00000200ULL & fc->u.rgetattr.valid) == 0ul))
          spf(s, len, " size %lu", fc->u.rgetattr.size);

        else
          spf(s, len, " size X");
        spf(s, len, " blksize %lu", fc->u.rgetattr.blksize);
        if(!((0x00000400ULL & fc->u.rgetattr.valid) == 0ul))
          spf(s, len, " blocks %lu", fc->u.rgetattr.blocks);

        else
          spf(s, len, " blocks X");
        if(!((0x00000020ULL & fc->u.rgetattr.valid) == 0ul))
        {
          return_value_np_timestr_1=np_timestr(fc->u.rgetattr.atime_sec, fc->u.rgetattr.atime_nsec);
          spf(s, len, " atime %s", return_value_np_timestr_1);
        }

        else
          spf(s, len, " atime X");
        if(!((0x00000040ULL & fc->u.rgetattr.valid) == 0ul))
        {
          return_value_np_timestr_2=np_timestr(fc->u.rgetattr.mtime_sec, fc->u.rgetattr.mtime_nsec);
          spf(s, len, " mtime %s", return_value_np_timestr_2);
        }

        else
          spf(s, len, " mtime X");
        if(!((0x00000080ULL & fc->u.rgetattr.valid) == 0ul))
        {
          return_value_np_timestr_3=np_timestr(fc->u.rgetattr.ctime_sec, fc->u.rgetattr.ctime_nsec);
          spf(s, len, " ctime %s", return_value_np_timestr_3);
        }

        else
          spf(s, len, " ctime X");
        if(!((0x00000800ULL & fc->u.rgetattr.valid) == 0ul))
        {
          return_value_np_timestr_4=np_timestr(fc->u.rgetattr.btime_sec, fc->u.rgetattr.btime_nsec);
          spf(s, len, " btime %s", return_value_np_timestr_4);
        }

        else
          spf(s, len, " btime X");
        if(!((0x00001000ULL & fc->u.rgetattr.valid) == 0ul))
          spf(s, len, " gen %lu", fc->u.rgetattr.gen);

        else
          spf(s, len, " gen X");
        if(!((0x00002000ULL & fc->u.rgetattr.valid) == 0ul))
          spf(s, len, " data_version %lu", fc->u.rgetattr.data_version);

        else
          spf(s, len, " data_version X");
        break;
      }
      case 26:
      {
        spf(s, len, "P9_TSETATTR tag %u", fc->tag);
        spf(s, len, " fid %u", fc->u.tsetattr.fid);
        spf(s, len, " valid 0x%x", fc->u.tsetattr.valid);
        if(!((0x00000001UL & (unsigned long int)fc->u.tsetattr.valid) == 0ul))
          spf(s, len, " mode 0%o", fc->u.tsetattr.mode);

        else
          spf(s, len, " mode X");
        if(!((0x00000002UL & (unsigned long int)fc->u.tsetattr.valid) == 0ul))
          spf(s, len, " uid %u", fc->u.tsetattr.uid);

        else
          spf(s, len, " uid X");
        if(!((0x00000004UL & (unsigned long int)fc->u.tsetattr.valid) == 0ul))
          spf(s, len, " gid %u", fc->u.tsetattr.gid);

        else
          spf(s, len, " gid X");
        if(!((0x00000008UL & (unsigned long int)fc->u.tsetattr.valid) == 0ul))
          spf(s, len, " size %lu", fc->u.tsetattr.size);

        else
          spf(s, len, " size X");
        if((0x00000010UL & (unsigned long int)fc->u.tsetattr.valid) == 0ul)
          spf(s, len, " atime X");

        else
          if((0x00000080UL & (unsigned long int)fc->u.tsetattr.valid) == 0ul)
            spf(s, len, " atime X");

          else
          {
            return_value_np_timestr_5=np_timestr(fc->u.tsetattr.atime_sec, fc->u.tsetattr.atime_nsec);
            spf(s, len, " atime %s", return_value_np_timestr_5);
          }
        if((0x00000020UL & (unsigned long int)fc->u.tsetattr.valid) == 0ul)
          spf(s, len, " mtime X");

        else
          if((0x00000100UL & (unsigned long int)fc->u.tsetattr.valid) == 0ul)
            spf(s, len, " mtime now");

          else
          {
            return_value_np_timestr_6=np_timestr(fc->u.tsetattr.mtime_sec, fc->u.tsetattr.mtime_nsec);
            spf(s, len, " mtime %s", return_value_np_timestr_6);
          }
        break;
      }
      case 27:
      {
        spf(s, len, "P9_RSETATTR tag %u", fc->tag);
        break;
      }
      case 30:
      {
        spf(s, len, "P9_TXATTRWALK tag %u", fc->tag);
        spf(s, len, " fid %u", fc->u.txattrwalk.fid);
        spf(s, len, " attrfid %u", fc->u.txattrwalk.attrfid);
        spf(s, len, " name '%.*s'", fc->u.txattrwalk.name.len, fc->u.txattrwalk.name.str);
        break;
      }
      case 31:
      {
        spf(s, len, "P9_RXATTRWALK tag %u", fc->tag);
        spf(s, len, " size %lu", fc->u.rxattrwalk.size);
        break;
      }
      case 32:
      {
        spf(s, len, "P9_TXATTRCREATE tag %u", fc->tag);
        spf(s, len, " fid %u", fc->u.txattrcreate.fid);
        spf(s, len, " name '%.*s'", fc->u.txattrcreate.name.len, fc->u.txattrcreate.name.str);
        spf(s, len, " size %lu", fc->u.txattrcreate.size);
        spf(s, len, " flag %u", fc->u.txattrcreate.flag);
        break;
      }
      case 33:
      {
        spf(s, len, "P9_RXATTRCREATE tag %u", fc->tag);
        break;
      }
      case 40:
      {
        spf(s, len, "P9_TREADDIR tag %u", fc->tag);
        spf(s, len, " fid %u", fc->u.treaddir.fid);
        spf(s, len, " offset %lu", fc->u.treaddir.offset);
        spf(s, len, " count %u", fc->u.treaddir.count);
        break;
      }
      case 41:
      {
        spf(s, len, "P9_RREADDIR tag %u", fc->tag);
        spf(s, len, " count %u", fc->u.rreaddir.count);
        np_printdents(s, len, fc->u.rreaddir.data, (signed int)fc->u.rreaddir.count);
        break;
      }
      case 50:
      {
        spf(s, len, "P9_TFSYNC tag %u", fc->tag);
        spf(s, len, " fid %u", fc->u.tfsync.fid);
        break;
      }
      case 51:
      {
        spf(s, len, "P9_RFSYNC tag %u", fc->tag);
        break;
      }
      case 52:
      {
        spf(s, len, "P9_TLOCK tag %u", fc->tag);
        spf(s, len, " fid %u", fc->u.tlock.fid);
        spf(s, len, " type ");
        np_printlocktype(s, len, fc->u.tlock.type);
        spf(s, len, " flags %u", fc->u.tlock.flags);
        spf(s, len, " start %lu", fc->u.tlock.start);
        spf(s, len, " length %lu", fc->u.tlock.length);
        spf(s, len, " proc_id %u", fc->u.tlock.proc_id);
        spf(s, len, " client_id '%.*s'", fc->u.tlock.client_id.len, fc->u.tlock.client_id.str);
        break;
      }
      case 53:
      {
        spf(s, len, "P9_RLOCK tag %u", fc->tag);
        spf(s, len, " status ");
        np_printlockstatus(s, len, fc->u.rlock.status);
        break;
      }
      case 54:
      {
        spf(s, len, "P9_TGETLOCK tag %u", fc->tag);
        spf(s, len, " fid %u", fc->u.tgetlock.fid);
        spf(s, len, " type ");
        np_printlocktype(s, len, fc->u.tgetlock.type);
        spf(s, len, " start %lu", fc->u.tgetlock.start);
        spf(s, len, " length %lu", fc->u.tgetlock.length);
        spf(s, len, " proc_id %u", fc->u.tgetlock.proc_id);
        spf(s, len, " client_id '%.*s'", fc->u.tgetlock.client_id.len, fc->u.tgetlock.client_id.str);
        break;
      }
      case 55:
      {
        spf(s, len, "P9_RGETLOCK tag %u", fc->tag);
        spf(s, len, " type ");
        np_printlocktype(s, len, fc->u.rgetlock.type);
        spf(s, len, " start %lu", fc->u.rgetlock.start);
        spf(s, len, " length %lu", fc->u.rgetlock.length);
        spf(s, len, " proc_id %u", fc->u.rgetlock.proc_id);
        spf(s, len, " client_id '%.*s'", fc->u.rgetlock.client_id.len, fc->u.rgetlock.client_id.str);
        break;
      }
      case 70:
      {
        spf(s, len, "P9_TLINK tag %u", fc->tag);
        spf(s, len, " dfid %u", fc->u.tlink.dfid);
        spf(s, len, " fid %u", fc->u.tlink.fid);
        spf(s, len, " name '%.*s'", fc->u.tlink.name.len, fc->u.tlink.name.str);
        break;
      }
      case 71:
      {
        spf(s, len, "P9_RLINK tag %u", fc->tag);
        break;
      }
      case 72:
      {
        spf(s, len, "P9_TMKDIR tag %u", fc->tag);
        spf(s, len, " fid %u", fc->u.tmkdir.fid);
        spf(s, len, " name '%.*s'", fc->u.tmkdir.name.len, fc->u.tmkdir.name.str);
        spf(s, len, " mode 0%o", fc->u.tmkdir.mode);
        spf(s, len, " gid %u", fc->u.tmkdir.gid);
        break;
      }
      case 73:
      {
        spf(s, len, "P9_RMKDIR tag %u qid ", fc->tag);
        np_printqid(s, len, &fc->u.rmkdir.qid);
        break;
      }
      case 74:
      {
        spf(s, len, "P9_TRENAMEAT tag %u", fc->tag);
        spf(s, len, " olddirfid %u", fc->u.trenameat.olddirfid);
        spf(s, len, " oldname '%.*s'", fc->u.trenameat.oldname.len, fc->u.trenameat.oldname.str);
        spf(s, len, " newdirfid %u", fc->u.trenameat.newdirfid);
        spf(s, len, " newname '%.*s'", fc->u.trenameat.newname.len, fc->u.trenameat.newname.str);
        break;
      }
      case 75:
      {
        spf(s, len, "P9_RRENAMEAT tag %u", fc->tag);
        break;
      }
      case 76:
      {
        spf(s, len, "P9_TUNLINKAT tag %u", fc->tag);
        spf(s, len, " dirfid %u", fc->u.tunlinkat.dirfid);
        spf(s, len, " name '%.*s'", fc->u.tunlinkat.name.len, fc->u.tunlinkat.name.str);
        spf(s, len, " flags %u", fc->u.tunlinkat.flags);
        break;
      }
      case 77:
      {
        spf(s, len, "P9_RUNLINKAT tag %u", fc->tag);
        break;
      }
      case 100:
      {
        spf(s, len, "P9_TVERSION tag %u", fc->tag);
        spf(s, len, " msize %u", fc->u.tversion.msize);
        spf(s, len, " version '%.*s'", fc->u.tversion.version.len, fc->u.tversion.version.str);
        break;
      }
      case 101:
      {
        spf(s, len, "P9_RVERSION tag %u msize %u", fc->tag, fc->u.rversion.msize);
        spf(s, len, " version '%.*s'", fc->u.rversion.version.len, fc->u.rversion.version.str);
        break;
      }
      case 102:
      {
        spf(s, len, "P9_TAUTH tag %u afid %d", fc->tag, fc->u.tauth.afid);
        spf(s, len, " uname '%.*s'", fc->u.tauth.uname.len, fc->u.tauth.uname.str);
        spf(s, len, " aname '%.*s'", fc->u.tauth.aname.len, fc->u.tauth.aname.str);
        if(!(fc->u.tauth.n_uname == 4294967295u))
          spf(s, len, " n_uname %u", fc->u.tauth.n_uname);

        else
          spf(s, len, " n_uname P9_NONUNAME");
        break;
      }
      case 103:
      {
        spf(s, len, "P9_RAUTH tag %u qid ", fc->tag);
        np_printqid(s, len, &fc->u.rauth.qid);
        break;
      }
      case 104:
      {
        spf(s, len, "P9_TATTACH tag %u", fc->tag);
        spf(s, len, " fid %d afid %d", fc->u.tattach.fid, fc->u.tattach.afid);
        spf(s, len, " uname '%.*s'", fc->u.tattach.uname.len, fc->u.tattach.uname.str);
        spf(s, len, " aname '%.*s'", fc->u.tattach.aname.len, fc->u.tattach.aname.str);
        if(!(fc->u.tattach.n_uname == 4294967295u))
          spf(s, len, " n_uname %u", fc->u.tattach.n_uname);

        else
          spf(s, len, " n_uname P9_NONUNAME");
        break;
      }
      case 105:
      {
        spf(s, len, "P9_RATTACH tag %u qid ", fc->tag);
        np_printqid(s, len, &fc->u.rattach.qid);
        break;
      }
      case 108:
      {
        spf(s, len, "P9_TFLUSH tag %u oldtag %u", fc->tag, fc->u.tflush.oldtag);
        break;
      }
      case 109:
      {
        spf(s, len, "P9_RFLUSH tag %u", fc->tag);
        break;
      }
      case 110:
      {
        spf(s, len, "P9_TWALK tag %u fid %d newfid %d nwname %d", fc->tag, fc->u.twalk.fid, fc->u.twalk.newfid, fc->u.twalk.nwname);
        i = 0;
        for( ; !(i >= (signed int)fc->u.twalk.nwname); i = i + 1)
          spf(s, len, " '%.*s'", fc->u.twalk.wnames[(signed long int)i].len, fc->u.twalk.wnames[(signed long int)i].str);
        break;
      }
      case 111:
      {
        spf(s, len, "P9_RWALK tag %u nwqid %d ", fc->tag, fc->u.rwalk.nwqid);
        i = 0;
        for( ; !(i >= (signed int)fc->u.rwalk.nwqid); i = i + 1)
          np_printqid(s, len, &fc->u.rwalk.wqids[(signed long int)i]);
        break;
      }
      case 116:
      {
        spf(s, len, "P9_TREAD tag %u fid %d offset %lu count %u", fc->tag, fc->u.tread.fid, fc->u.tread.offset, fc->u.tread.count);
        break;
      }
      case 117:
      {
        spf(s, len, "P9_RREAD tag %u count %u", fc->tag, fc->u.rread.count);
        np_printdata(s, len, fc->u.rread.data, (signed int)fc->u.rread.count);
        break;
      }
      case 118:
      {
        spf(s, len, "P9_TWRITE tag %u", fc->tag);
        spf(s, len, " fid %d", fc->u.twrite.fid);
        spf(s, len, " offset %lu", fc->u.twrite.offset);
        spf(s, len, " count %u", fc->u.twrite.count);
        np_printdata(s, len, fc->u.twrite.data, (signed int)fc->u.twrite.count);
        break;
      }
      case 119:
      {
        spf(s, len, "P9_RWRITE tag %u count %u", fc->tag, fc->u.rwrite.count);
        break;
      }
      case 120:
      {
        spf(s, len, "P9_TCLUNK tag %u fid %d", fc->tag, fc->u.tclunk.fid);
        break;
      }
      case 121:
      {
        spf(s, len, "P9_RCLUNK tag %u", fc->tag);
        break;
      }
      case 122:
      {
        spf(s, len, "P9_TREMOVE tag %u fid %d", fc->tag, fc->u.tremove.fid);
        break;
      }
      case 123:
      {
        spf(s, len, "P9_RREMOVE tag %u", fc->tag);
        break;
      }
      case 107:
      {
        spf(s, len, "P9_RERROR: deprecated protocol op");
        break;
      }
      case 112:
      {
        spf(s, len, "P9_TOPEN: deprecated protocol op");
        break;
      }
      case 113:
      {
        spf(s, len, "P9_ROPEN: deprecated protocol op");
        break;
      }
      case 114:
      {
        spf(s, len, "P9_TCREATE: deprecated protocol op");
        break;
      }
      case 115:
      {
        spf(s, len, "P9_RCREATE: deprecated protocol op");
        break;
      }
      case 124:
      {
        spf(s, len, "P9_TSTAT: deprecated protocol op");
        break;
      }
      case 125:
      {
        spf(s, len, "P9_RSTAT: deprecated protocol op");
        break;
      }
      default:
        spf(s, len, "unknown protocol op (%d)", fc->type);
    }
}

// np_srv_add_conn
// file npfs.h line 359
signed int np_srv_add_conn(struct Npsrv *srv, struct Npconn *conn)
{
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&srv->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "srv.c", 108);

  }
  while((_Bool)0);
  conn->srv = srv;
  conn->next = srv->conns;
  srv->conns = conn;
  srv->conncount = srv->conncount + 1;
  srv->connhistory = srv->connhistory + 1;
  do
  {
    signed int pthread_cond_signal_result;
    pthread_cond_signal_result=pthread_cond_signal(&srv->conncountcond);
    if(!(pthread_cond_signal_result == 0))
      np_assfail("pthread_cond_signal_result == 0", "srv.c", 114);

  }
  while((_Bool)0);
  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&srv->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 115);

  }
  while((_Bool)0);
  return 1;
}

// np_srv_add_req
// file npfsimpl.h line 58
void np_srv_add_req(struct Npsrv *srv, struct Npreq *req)
{
  struct Nptpool *tp = (struct Nptpool *)(void *)0;
  if(!(req->fid == ((struct Npfid *)NULL)))
    tp = req->fid->tpool;

  if(tp == ((struct Nptpool *)NULL))
    tp = srv->tpool;

  req->prev = tp->reqs_last;
  if(!(tp->reqs_last == ((struct Npreq *)NULL)))
    tp->reqs_last->next = req;

  tp->reqs_last = req;
  if(tp->reqs_first == ((struct Npreq *)NULL))
    tp->reqs_first = req;

  do
  {
    signed int pthread_cond_signal_result;
    pthread_cond_signal_result=pthread_cond_signal(&tp->reqcond);
    if(!(pthread_cond_signal_result == 0))
      np_assfail("pthread_cond_signal_result == 0", "srv.c", 175);

  }
  while((_Bool)0);
}

// np_srv_add_workreq
// file srv.c line 193
static void np_srv_add_workreq(struct Nptpool *tp, struct Npreq *req)
{
  if(!(tp->workreqs == ((struct Npreq *)NULL)))
    tp->workreqs->prev = req;

  req->next = tp->workreqs;
  tp->workreqs = req;
  req->prev = (struct Npreq *)(void *)0;
}

// np_srv_create
// file srv.c line 58
struct Npsrv * np_srv_create(signed int nwthread, signed int flags)
{
  struct Npsrv *srv = (struct Npsrv *)(void *)0;
  np_uerror((unsigned long int)0);
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct Npsrv) /*432ul*/ );
  srv = (struct Npsrv *)return_value_malloc_1;
  signed int return_value_np_ctl_initialize_2;
  struct Npfile *return_value_np_ctl_addfile_3;
  struct Npfile *return_value_np_ctl_addfile_4;
  signed int return_value_np_usercache_create_5;
  if(srv == ((struct Npsrv *)NULL))
    np_uerror((unsigned long int)12);

  else
  {
    memset((void *)srv, 0, sizeof(struct Npsrv) /*432ul*/ );
    pthread_mutex_init(&srv->lock, (const union anonymous_6 *)(void *)0);
    pthread_cond_init(&srv->conncountcond, (const union anonymous_6 *)(void *)0);
    srv->msize = (unsigned int)8216;
    srv->flags = flags;
    return_value_np_ctl_initialize_2=np_ctl_initialize(srv);
    if(return_value_np_ctl_initialize_2 >= 0)
    {
      return_value_np_ctl_addfile_3=np_ctl_addfile(srv->ctlroot, "connections", _ctl_get_conns, (void *)srv, 0);
      if(!(return_value_np_ctl_addfile_3 == ((struct Npfile *)NULL)))
      {
        return_value_np_ctl_addfile_4=np_ctl_addfile(srv->ctlroot, "tpools", _ctl_get_tpools, (void *)srv, 0);
        if(!(return_value_np_ctl_addfile_4 == ((struct Npfile *)NULL)))
        {
          return_value_np_usercache_create_5=np_usercache_create(srv);
          if(return_value_np_usercache_create_5 >= 0)
          {
            srv->nwthread = nwthread;
            srv->tpool=np_tpool_create(srv, "default");
            if(!(srv->tpool == ((struct Nptpool *)NULL)))
            {
              np_tpool_incref(srv->tpool);
              np_assert_srv = srv;
              return srv;
            }

          }

        }

      }

    }

  }

error:
  ;
  if(!(srv == ((struct Npsrv *)NULL)))
    np_srv_destroy(srv);

  return (struct Npsrv *)(void *)0;
}

// np_srv_destroy
// file srv.c line 95
void np_srv_destroy(struct Npsrv *srv)
{
  np_tpool_decref(srv->tpool);
  np_tpool_cleanup(srv);
  np_usercache_destroy(srv);
  np_ctl_finalize(srv);
  np_assert_srv = (struct Npsrv *)(void *)0;
  free((void *)srv);
}

// np_srv_remove_conn
// file npfs.h line 358
void np_srv_remove_conn(struct Npsrv *srv, struct Npconn *conn)
{
  struct Npconn *c;
  struct Npconn **pc;
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&srv->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "srv.c", 125);

  }
  while((_Bool)0);
  pc = &srv->conns;
  c = *pc;
  for( ; !(c == ((struct Npconn *)NULL)); c = *pc)
  {
    if(c == conn)
    {
      *pc = c->next;
      c->next = (struct Npconn *)(void *)0;
      break;
    }

    pc = &c->next;
  }
  srv->conncount = srv->conncount - 1;
  do
  {
    signed int pthread_cond_signal_result;
    pthread_cond_signal_result=pthread_cond_signal(&srv->conncountcond);
    if(!(pthread_cond_signal_result == 0))
      np_assfail("pthread_cond_signal_result == 0", "srv.c", 140);

  }
  while((_Bool)0);
  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&srv->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 141);

  }
  while((_Bool)0);
  np_tpool_cleanup(srv);
}

// np_srv_remove_req
// file npfsimpl.h line 59
void np_srv_remove_req(struct Nptpool *tp, struct Npreq *req)
{
  if(!(req->prev == ((struct Npreq *)NULL)))
    req->prev->next = req->next;

  if(!(req->next == ((struct Npreq *)NULL)))
    req->next->prev = req->prev;

  if(req == tp->reqs_first)
    tp->reqs_first = req->next;

  if(req == tp->reqs_last)
    tp->reqs_last = req->prev;

}

// np_srv_remove_workreq
// file srv.c line 204
static void np_srv_remove_workreq(struct Nptpool *tp, struct Npreq *req)
{
  if(!(req->prev == ((struct Npreq *)NULL)))
    req->prev->next = req->next;

  else
    tp->workreqs = req->next;
  if(!(req->next == ((struct Npreq *)NULL)))
    req->next->prev = req->prev;

}

// np_srv_wait_conncount
// file srv.c line 150
void np_srv_wait_conncount(struct Npsrv *srv, signed int count)
{
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&srv->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "srv.c", 152);

  }
  while((_Bool)0);
  while((_Bool)1)
  {
    if(!(srv->conncount >= 1))
    {
      if(srv->connhistory >= count)
        goto __CPROVER_DUMP_L8;

    }

    do
    {
      signed int pthread_cond_wait_result;
      pthread_cond_wait_result=pthread_cond_wait(&srv->conncountcond, &srv->lock);
      if(!(pthread_cond_wait_result == 0))
        np_assfail("pthread_cond_wait_result == 0", "srv.c", 154);

    }
    while((_Bool)0);
  }
  do
  {

  __CPROVER_DUMP_L8:
    ;
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&srv->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 156);

  }
  while((_Bool)0);
}

// np_statfs
// file fcall.c line 601
struct Npfcall * np_statfs(struct Npreq *req, struct Npfcall *tc)
{
  struct Npfid *fid = req->fid;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(req->conn->srv, "statfs: invalid fid");
  }

  else
    if(!((4 & (signed int)fid->type) == 0))
      np_uerror((unsigned long int)38);

    else
    {
      signed int return_value_np_setfsid_1;
      return_value_np_setfsid_1=np_setfsid(req, fid->user, (unsigned int)-1);
      if(return_value_np_setfsid_1 >= 0)
      {
        if(req->conn->srv->statfs == ((struct Npfcall * (*)(struct Npfid *))NULL))
          np_uerror((unsigned long int)38);

        else
          rc=req->conn->srv->statfs(fid);
      }

    }

done:
  ;
  return rc;
}

// np_str9cmp
// file npstring.c line 85
signed int np_str9cmp(struct p9_str *s1, struct p9_str *s2)
{
  if(!(s1->len == s2->len))
    return 1;

  else
  {
    signed int return_value_strncmp_1;
    return_value_strncmp_1=strncmp(s1->str, s2->str, (unsigned long int)s1->len);
    return return_value_strncmp_1;
  }
}

// np_strcmp
// file ../libnpfs/npfs.h line 405
signed int np_strcmp(struct p9_str *str, char *cs)
{
  signed int ret;
  ret=strncmp(str->str, cs, (unsigned long int)str->len);
  if(ret == 0)
  {
    if(!(cs[(signed long int)str->len] == 0))
      ret = 1;

  }

  return ret;
}

// np_strdup
// file npfs.h line 404
char * np_strdup(struct p9_str *str)
{
  char *ret;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)((signed int)str->len + 1));
  ret = (char *)return_value_malloc_1;
  if(!(ret == ((char *)NULL)))
  {
    memmove((void *)ret, (const void *)str->str, (unsigned long int)str->len);
    ret[(signed long int)str->len] = (char)0;
  }

  return ret;
}

// np_strncmp
// file npstring.c line 72
signed int np_strncmp(struct p9_str *str, char *cs, signed int len)
{
  signed int ret;
  if((signed int)str->len >= len)
    ret=strncmp(str->str, cs, (unsigned long int)len);

  else
    ret=np_strcmp(str, cs);
  return ret;
}

// np_strzero
// file npstring.c line 39
void np_strzero(struct p9_str *str)
{
  str->str = (char *)(void *)0;
  str->len = (unsigned short int)0;
}

// np_symlink
// file fcall.c line 699
struct Npfcall * np_symlink(struct Npreq *req, struct Npfcall *tc)
{
  struct Npfid *fid = req->fid;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(req->conn->srv, "symlink: invalid fid");
  }

  else
    if(!((0x02 & fid->flags) == 0))
      np_uerror((unsigned long int)30);

    else
      if(!((4 & (signed int)fid->type) == 0))
      {
        np_uerror((unsigned long int)1);
        goto done;
      }

      else
      {
        signed int return_value_np_setfsid_1;
        return_value_np_setfsid_1=np_setfsid(req, fid->user, tc->u.tsymlink.gid);
        if(return_value_np_setfsid_1 >= 0)
        {
          if(req->conn->srv->symlink == ((struct Npfcall * (*)(struct Npfid *, struct p9_str *, struct p9_str *, unsigned int))NULL))
            np_uerror((unsigned long int)38);

          else
            rc=req->conn->srv->symlink(fid, &tc->u.tsymlink.name, &tc->u.tsymlink.symtgt, tc->u.tsymlink.gid);
        }

      }

done:
  ;
  return rc;
}

// np_timestr
// file fmt.c line 89
static char * np_timestr(const unsigned long int sec, const unsigned long int nsec)
{
  const signed long int t = (const signed long int)sec;
  char *s = "0";
  if(sec >= 1ul)
  {
    s=ctime(&t);
    _chomp(s);
  }

  return s;
}

// np_tpool_cleanup
// file srv.c line 368
static void np_tpool_cleanup(struct Npsrv *srv)
{
  struct Nptpool *tp;
  struct Nptpool *next;
  struct Nptpool *dead = (struct Nptpool *)(void *)0;
  struct Nptpool *prev = (struct Nptpool *)(void *)0;
  do
  {
    signed int np_tpool_cleanup__1__1__pthread_mutex_lock_result;
    np_tpool_cleanup__1__1__pthread_mutex_lock_result=pthread_mutex_lock(&srv->lock);
    if(!(np_tpool_cleanup__1__1__pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "srv.c", 372);

  }
  while((_Bool)0);
  tp = srv->tpool;
  for( ; !(tp == ((struct Nptpool *)NULL)); tp = next)
  {
    next = tp->next;
    do
    {
      signed int pthread_mutex_lock_result;
      pthread_mutex_lock_result=pthread_mutex_lock(&tp->lock);
      if(!(pthread_mutex_lock_result == 0))
        np_assfail("pthread_mutex_lock_result == 0", "srv.c", 375);

    }
    while((_Bool)0);
    if(tp->refcount == 0)
    {
      tp->next = dead;
      dead = tp;
      if(!(prev == ((struct Nptpool *)NULL)))
        prev->next = next;

      else
        srv->tpool = next;
    }

    else
      prev = tp;
    do
    {
      signed int pthread_mutex_unlock_result;
      pthread_mutex_unlock_result=pthread_mutex_unlock(&tp->lock);
      if(!(pthread_mutex_unlock_result == 0))
        np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 385);

    }
    while((_Bool)0);
  }
  do
  {
    signed int np_tpool_cleanup__1__3__pthread_mutex_unlock_result;
    np_tpool_cleanup__1__3__pthread_mutex_unlock_result=pthread_mutex_unlock(&srv->lock);
    if(!(np_tpool_cleanup__1__3__pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 387);

  }
  while((_Bool)0);
  tp = dead;
  for( ; !(tp == ((struct Nptpool *)NULL)); tp = next)
  {
    next = tp->next;
    np_tpool_destroy(tp);
  }
}

// np_tpool_create
// file srv.c line 277
static struct Nptpool * np_tpool_create(struct Npsrv *srv, char *name)
{
  struct Nptpool *tp;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct Nptpool) /*1400ul*/ );
  tp = (struct Nptpool *)return_value_malloc_1;
  if(tp == ((struct Nptpool *)NULL))
    np_uerror((unsigned long int)12);

  else
  {
    memset((void *)tp, 0, sizeof(struct Nptpool) /*1400ul*/ );
    tp->name=strdup(name);
    if(tp->name == ((char *)NULL))
      np_uerror((unsigned long int)12);

    else
    {
      tp->srv = srv;
      tp->refcount = 0;
      pthread_mutex_init(&tp->lock, (const union anonymous_6 *)(void *)0);
      pthread_cond_init(&tp->reqcond, (const union anonymous_6 *)(void *)0);
      tp->nwthread = 0;
      for( ; !(tp->nwthread >= srv->nwthread); tp->nwthread = tp->nwthread + 1)
      {
        signed int return_value_np_wthread_create_2;
        return_value_np_wthread_create_2=np_wthread_create(tp);
        if(!(return_value_np_wthread_create_2 >= 0))
          goto error;

      }
      return tp;
    }
  }

error:
  ;
  if(!(tp == ((struct Nptpool *)NULL)))
    np_tpool_destroy(tp);

  return (struct Nptpool *)(void *)0;
}

// np_tpool_decref
// file npfs.h line 369
void np_tpool_decref(struct Nptpool *tp)
{
  if(!(tp == ((struct Nptpool *)NULL)))
  {
    do
    {
      signed int pthread_mutex_lock_result;
      pthread_mutex_lock_result=pthread_mutex_lock(&tp->lock);
      if(!(pthread_mutex_lock_result == 0))
        np_assfail("pthread_mutex_lock_result == 0", "srv.c", 362);

    }
    while((_Bool)0);
    tp->refcount = tp->refcount - 1;
    do
    {
      signed int pthread_mutex_unlock_result;
      pthread_mutex_unlock_result=pthread_mutex_unlock(&tp->lock);
      if(!(pthread_mutex_unlock_result == 0))
        np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 364);

    }
    while((_Bool)0);
  }

}

// np_tpool_destroy
// file srv.c line 244
static void np_tpool_destroy(struct Nptpool *tp)
{
  struct Npsrv *srv = tp->srv;
  struct Npwthread *wt;
  struct Npwthread *next;
  void *retval;
  signed int np_tpool_destroy__1__err;
  signed int i;
  wt = tp->wthreads;
  for( ; !(wt == ((struct Npwthread *)NULL)); wt = wt->next)
    wt->shutdown = 1;
  do
  {
    signed int pthread_cond_broadcast_result;
    pthread_cond_broadcast_result=pthread_cond_broadcast(&tp->reqcond);
    if(!(pthread_cond_broadcast_result == 0))
      np_assfail("pthread_cond_broadcast_result == 0", "srv.c", 254);

  }
  while((_Bool)0);
  i = 0;
  wt = tp->wthreads;
  for( ; !(wt == ((struct Npwthread *)NULL)); i = i + 1)
  {
    next = wt->next;
    np_tpool_destroy__1__err=pthread_join(wt->thread, &retval);
    if(!(np_tpool_destroy__1__err == 0))
    {
      np_uerror((unsigned long int)np_tpool_destroy__1__err);
      np_logerr(srv, "%s: join thread %d", tp->name, i);
    }

    else
      if(retval == (void *)-1)
        np_logmsg(srv, "%s: join thread %d: cancelled", tp->name, i);

      else
        if(!(retval == NULL))
          np_logmsg(srv, "%s: join thread %d: non-NULL return", tp->name, i);

    free((void *)wt);
    wt = next;
  }
  pthread_cond_destroy(&tp->reqcond);
  pthread_mutex_destroy(&tp->lock);
  if(!(tp->name == ((char *)NULL)))
    free((void *)tp->name);

  free((void *)tp);
}

// np_tpool_incref
// file npfs.h line 368
void np_tpool_incref(struct Nptpool *tp)
{
  if(!(tp == ((struct Nptpool *)NULL)))
  {
    do
    {
      signed int pthread_mutex_lock_result;
      pthread_mutex_lock_result=pthread_mutex_lock(&tp->lock);
      if(!(pthread_mutex_lock_result == 0))
        np_assfail("pthread_mutex_lock_result == 0", "srv.c", 311);

    }
    while((_Bool)0);
    tp->refcount = tp->refcount + 1;
    do
    {
      signed int pthread_mutex_unlock_result;
      pthread_mutex_unlock_result=pthread_mutex_unlock(&tp->lock);
      if(!(pthread_mutex_unlock_result == 0))
        np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 313);

    }
    while((_Bool)0);
  }

}

// np_tpool_select
// file srv.c line 317
void np_tpool_select(struct Npreq *req)
{
  struct Npsrv *srv = req->conn->srv;
  struct Nptpool *tp = (struct Nptpool *)(void *)0;
  if(srv->tpool == ((struct Nptpool *)NULL))
    np_assfail("srv->tpool != NULL", "srv.c", 322);

  _Bool tmp_if_expr_1;
  if(req->fid == ((struct Npfid *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = req->fid->tpool != ((struct Nptpool *)NULL) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  if(!tmp_if_expr_1)
  {
    do
    {
      signed int pthread_mutex_lock_result;
      pthread_mutex_lock_result=pthread_mutex_lock(&srv->lock);
      if(!(pthread_mutex_lock_result == 0))
        np_assfail("pthread_mutex_lock_result == 0", "srv.c", 326);

    }
    while((_Bool)0);
    if(!((524288 & srv->flags) == 0))
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = !(req->fid->aname != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = (signed int)*req->fid->aname != 47 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
      tp = srv->tpool;

    if(tp == ((struct Nptpool *)NULL))
    {
      tp = srv->tpool;
      for( ; !(tp == ((struct Nptpool *)NULL)); tp = tp->next)
      {
        signed int return_value_strcmp_4;
        return_value_strcmp_4=strcmp(req->fid->aname, tp->name);
        if(return_value_strcmp_4 == 0)
          break;

      }
    }

    if(tp == ((struct Nptpool *)NULL))
    {
      tp=np_tpool_create(srv, req->fid->aname);
      if(!(tp == ((struct Nptpool *)NULL)))
      {
        if(srv->tpool == ((struct Nptpool *)NULL))
          np_assfail("srv->tpool", "srv.c", 340);

        tp->next = srv->tpool->next;
        srv->tpool->next = tp;
      }

      else
        np_logerr(srv, "np_tpool_create %s", req->fid->aname);
    }

    if(!(tp == ((struct Nptpool *)NULL)))
    {
      np_tpool_incref(tp);
      req->fid->tpool = tp;
    }

    do
    {
      signed int pthread_mutex_unlock_result;
      pthread_mutex_unlock_result=pthread_mutex_unlock(&srv->lock);
      if(!(pthread_mutex_unlock_result == 0))
        np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 350);

    }
    while((_Bool)0);
  }

}

// np_trans_create
// file npfs.h line 395
struct Nptrans * np_trans_create(void *aux, signed int (*recv)(struct Npfcall **, unsigned int, void *), signed int (*send)(struct Npfcall *, void *), void (*destroy)(void *))
{
  struct Nptrans *trans;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct Nptrans) /*32ul*/ );
  trans = (struct Nptrans *)return_value_malloc_1;
  if(trans == ((struct Nptrans *)NULL))
  {
    np_uerror((unsigned long int)12);
    return (struct Nptrans *)(void *)0;
  }

  else
  {
    trans->aux = aux;
    trans->recv = recv;
    trans->send = send;
    trans->destroy = destroy;
    return trans;
  }
}

// np_trans_destroy
// file ../libnpfs/npfs.h line 398
void np_trans_destroy(struct Nptrans *trans)
{
  if(!(trans->destroy == ((void (*)(void *))NULL)))
    trans->destroy(trans->aux);

  free((void *)trans);
}

// np_trans_recv
// file ../libnpfs/npfs.h line 400
signed int np_trans_recv(struct Nptrans *trans, struct Npfcall **fcp, unsigned int msize)
{
  struct Npfcall *fc;
  signed int return_value;
  return_value=trans->recv(&fc, msize, trans->aux);
  signed int return_value_np_deserialize_1;
  if(!(return_value >= 0))
    return -1;

  else
    if(!(fc == ((struct Npfcall *)NULL)))
    {
      return_value_np_deserialize_1=np_deserialize(fc);
      free((void *)fc);
      np_uerror((unsigned long int)71);
      return -1;
    }

    else
    {
      *fcp = fc;
      return 0;
    }
}

// np_trans_send
// file ../libnpfs/npfs.h line 399
signed int np_trans_send(struct Nptrans *trans, struct Npfcall *fc)
{
  signed int return_value;
  return_value=trans->send(fc, trans->aux);
  return return_value;
}

// np_uerror
// file ../libnpfs/npfs.h line 529
void np_uerror(unsigned long int ecode)
{
  pthread_once(&error_once, np_init_error_key);
  pthread_setspecific(error_key, (void *)ecode);
}

// np_uid2user
// file user.c line 443
struct Npuser * np_uid2user(struct Npsrv *srv, unsigned int uid)
{
  struct anonymous_1 *uc = (struct anonymous_1 *)srv->usercache;
  struct Npuser *u = (struct Npuser *)(void *)0;
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&uc->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "user.c", 448);

  }
  while((_Bool)0);
  u=_usercache_lookup(srv, (char *)(void *)0, uid);
  if(u == ((struct Npuser *)NULL))
  {
    u=_real_lookup_byuid(srv, uid);
    if(!(u == ((struct Npuser *)NULL)))
      _usercache_add(srv, u);

  }

  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&uc->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "user.c", 452);

  }
  while((_Bool)0);
  if(!(u == ((struct Npuser *)NULL)))
    np_user_incref(u);

  return u;
}

// np_uname2user
// file user.c line 427
struct Npuser * np_uname2user(struct Npsrv *srv, char *uname)
{
  struct anonymous_1 *uc = (struct anonymous_1 *)srv->usercache;
  struct Npuser *u = (struct Npuser *)(void *)0;
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&uc->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "user.c", 432);

  }
  while((_Bool)0);
  u=_usercache_lookup(srv, uname, (unsigned int)~0);
  if(u == ((struct Npuser *)NULL))
  {
    u=_real_lookup_byname(srv, uname);
    if(!(u == ((struct Npuser *)NULL)))
      _usercache_add(srv, u);

  }

  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&uc->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "user.c", 436);

  }
  while((_Bool)0);
  if(!(u == ((struct Npuser *)NULL)))
    np_user_incref(u);

  return u;
}

// np_unlinkat
// file fcall.c line 1258
struct Npfcall * np_unlinkat(struct Npreq *req, struct Npfcall *tc)
{
  struct Npfid *dirfid = req->fid;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  signed int return_value_np_setfsid_1;
  if(dirfid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(req->conn->srv, "unlinkat: invalid dirfid");
  }

  else
    if(!((0x02 & dirfid->flags) == 0))
      np_uerror((unsigned long int)30);

    else
      if(!((4 & (signed int)dirfid->type) == 0))
        np_uerror((unsigned long int)1);

      else
      {
        return_value_np_setfsid_1=np_setfsid(req, dirfid->user, (unsigned int)-1);
        if(return_value_np_setfsid_1 >= 0)
        {
          if(req->conn->srv->unlinkat == ((struct Npfcall * (*)(struct Npfid *, struct p9_str *))NULL))
            np_uerror((unsigned long int)95);

          else
            rc=req->conn->srv->unlinkat(dirfid, &tc->u.tunlinkat.name);
        }

      }

done:
  ;
  return rc;
}

// np_user_decref
// file npfs.h line 510
void np_user_decref(struct Npuser *u)
{
  signed int n;
  if(!(u == ((struct Npuser *)NULL)))
  {
    do
    {
      signed int pthread_mutex_lock_result;
      pthread_mutex_lock_result=pthread_mutex_lock(&u->lock);
      if(!(pthread_mutex_lock_result == 0))
        np_assfail("pthread_mutex_lock_result == 0", "user.c", 215);

    }
    while((_Bool)0);
    u->refcount = u->refcount - 1;
    n = u->refcount;
    do
    {
      signed int pthread_mutex_unlock_result;
      pthread_mutex_unlock_result=pthread_mutex_unlock(&u->lock);
      if(!(pthread_mutex_unlock_result == 0))
        np_assfail("pthread_mutex_unlock_result == 0", "user.c", 217);

    }
    while((_Bool)0);
    if(!(n >= 1))
      _free_user(u);

  }

}

// np_user_incref
// file npfs.h line 509
void np_user_incref(struct Npuser *u)
{
  if(!(u == ((struct Npuser *)NULL)))
  {
    do
    {
      signed int pthread_mutex_lock_result;
      pthread_mutex_lock_result=pthread_mutex_lock(&u->lock);
      if(!(pthread_mutex_lock_result == 0))
        np_assfail("pthread_mutex_lock_result == 0", "user.c", 202);

    }
    while((_Bool)0);
    u->refcount = u->refcount + 1;
    do
    {
      signed int pthread_mutex_unlock_result;
      pthread_mutex_unlock_result=pthread_mutex_unlock(&u->lock);
      if(!(pthread_mutex_unlock_result == 0))
        np_assfail("pthread_mutex_unlock_result == 0", "user.c", 204);

    }
    while((_Bool)0);
  }

}

// np_usercache_create
// file npfs.h line 517
signed int np_usercache_create(struct Npsrv *srv)
{
  struct anonymous_1 *uc;
  if(!(srv->usercache == NULL))
    np_assfail("srv->usercache == NULL", "user.c", 151);

  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_1) /*56ul*/ );
  uc = (struct anonymous_1 *)return_value_malloc_1;
  if(uc == ((struct anonymous_1 *)NULL))
  {
    np_uerror((unsigned long int)12);
    return -1;
  }

  else
  {
    uc->users = (struct Npuser *)(void *)0;
    pthread_mutex_init(&uc->lock, (const union anonymous_6 *)(void *)0);
    uc->ttl = 60;
    srv->usercache = (void *)uc;
    struct Npfile *return_value_np_ctl_addfile_2;
    return_value_np_ctl_addfile_2=np_ctl_addfile(srv->ctlroot, "usercache", _get_usercache, (void *)srv, 0);
    if(return_value_np_ctl_addfile_2 == ((struct Npfile *)NULL))
    {
      free(srv->usercache);
      return -1;
    }

    else
      return 0;
  }
}

// np_usercache_destroy
// file npfs.h line 518
void np_usercache_destroy(struct Npsrv *srv)
{
  struct anonymous_1 *uc;
  struct Npuser *u;
  if(srv->usercache == NULL)
    np_assfail("srv->usercache != NULL", "user.c", 175);

  uc = (struct anonymous_1 *)srv->usercache;
  u = uc->users;
  while(!(u == ((struct Npuser *)NULL)))
    u=_usercache_del(srv, (struct Npuser *)(void *)0, u);
  free((void *)uc);
  srv->usercache = (void *)0;
}

// np_usercache_flush
// file user.c line 459
void np_usercache_flush(struct Npsrv *srv)
{
  struct anonymous_1 *uc = (struct anonymous_1 *)srv->usercache;
  struct Npuser *u;
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&uc->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "user.c", 464);

  }
  while((_Bool)0);
  u = uc->users;
  while(!(u == ((struct Npuser *)NULL)))
    u=_usercache_del(srv, (struct Npuser *)(void *)0, u);
  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&uc->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "user.c", 468);

  }
  while((_Bool)0);
}

// np_version
// file fcall.c line 42
struct Npfcall * np_version(struct Npreq *req, struct Npfcall *tc)
{
  struct Npsrv *srv = req->conn->srv;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  signed int msize = (signed int)tc->u.tversion.msize;
  if(!(msize >= 1))
  {
    np_uerror((unsigned long int)5);
    np_logerr(srv, "version: msize is too small");
    return (struct Npfcall *)(void *)0;
  }

  else
  {
    if(!(req->conn->msize >= (unsigned int)msize))
      msize = (signed int)req->conn->msize;

    if(!((unsigned int)msize >= req->conn->msize))
      req->conn->msize = (unsigned int)msize;

    signed int return_value_np_strcmp_1;
    return_value_np_strcmp_1=np_strcmp(&tc->u.tversion.version, "9P2000.L");
    if(return_value_np_strcmp_1 == 0)
    {
      rc=np_create_rversion((unsigned int)msize, "9P2000.L");
      if(rc == ((struct Npfcall *)NULL))
      {
        np_uerror((unsigned long int)12);
        np_logerr(srv, "version: out of memory");
      }

    }

    else
    {
      np_uerror((unsigned long int)5);
      np_logerr(srv, "version: unsupported version");
    }
    return rc;
  }
}

// np_walk
// file fcall.c line 316
struct Npfcall * np_walk(struct Npreq *req, struct Npfcall *tc)
{
  signed int i;
  struct Npconn *conn = req->conn;
  struct Npfid *fid = req->fid;
  struct Npfid *newfid = (struct Npfid *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  struct p9_qid wqids[16l];
  signed int return_value;
  if(fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(conn->srv, "walk: invalid fid");
  }

  else
    if((signed int)tc->u.twalk.nwname >= 17)
    {
      np_uerror((unsigned long int)5);
      np_logerr(conn->srv, "walk: too many elements");
    }

    else
    {
      if(!(tc->u.twalk.fid == tc->u.twalk.newfid))
      {
        newfid=np_fid_create(conn, tc->u.twalk.newfid);
        if(newfid == ((struct Npfid *)NULL))
        {
          unsigned long int return_value_np_rerror_2;
          return_value_np_rerror_2=np_rerror();
          if(return_value_np_rerror_2 == 17ul)
          {
            np_uerror((unsigned long int)5);
            char *return_value_np_conn_get_client_id_1;
            return_value_np_conn_get_client_id_1=np_conn_get_client_id(conn);
            np_logmsg(conn->srv, "%s@%s:%s: walk: invalid newfid: %d", fid->user->uname, return_value_np_conn_get_client_id_1, fid->aname, tc->u.twalk.newfid);
          }

          goto done;
        }

        if(!((4 & (signed int)fid->type) == 0))
        {
          signed int return_value_np_ctl_clone_3;
          return_value_np_ctl_clone_3=np_ctl_clone(fid, newfid);
          if(return_value_np_ctl_clone_3 == 0)
            goto done;

        }

        else
          if(conn->srv->clone == ((signed int (*)(struct Npfid *, struct Npfid *))NULL))
          {
            np_uerror((unsigned long int)38);
            goto done;
          }

          else
            return_value=conn->srv->clone(fid, newfid);
        np_user_incref(fid->user);
        newfid->user = fid->user;
        np_tpool_incref(fid->tpool);
        newfid->tpool = fid->tpool;
        newfid->type = fid->type;
        newfid->flags = fid->flags;
        newfid->aname=strdup(fid->aname);
        if(newfid->aname == ((char *)NULL))
        {
          np_uerror((unsigned long int)12);
          np_logerr(conn->srv, "walk: out of memory");
          goto done;
        }

      }

      else
        newfid = fid;
      if((4 & (signed int)newfid->type) == 0)
      {
        signed int return_value_np_setfsid_4;
        return_value_np_setfsid_4=np_setfsid(req, newfid->user, (unsigned int)-1);
        if(!(return_value_np_setfsid_4 >= 0))
          goto done;

      }

      i = 0;
      while(!(i >= (signed int)tc->u.twalk.nwname))
      {
        if(!((4 & (signed int)newfid->type) == 0))
        {
          signed int return_value_np_ctl_walk_5;
          return_value_np_ctl_walk_5=np_ctl_walk(newfid, &tc->u.twalk.wnames[(signed long int)i], &wqids[(signed long int)i]);
          if(return_value_np_ctl_walk_5 == 0)
            break;

        }

        else
        {
          if(conn->srv->walk == ((signed int (*)(struct Npfid *, struct p9_str *, struct p9_qid *))NULL))
          {
            np_uerror((unsigned long int)38);
            break;
          }

          signed int return_value_1;
          return_value_1=conn->srv->walk(newfid, &tc->u.twalk.wnames[(signed long int)i], &wqids[(signed long int)i]);
          if(return_value_1 == 0)
            break;

        }
        newfid->type = wqids[(signed long int)i].type;
        i = i + 1;
        if(!(i >= (signed int)tc->u.twalk.nwname))
        {
          if((128 & (signed int)newfid->type) == 0)
            break;

        }

      }
      if(i == 0)
      {
        if(!((signed int)tc->u.twalk.nwname == 0))
          goto done;

      }

      np_uerror((unsigned long int)0);
      rc=np_create_rwalk(i, wqids);
    }

done:
  ;
  if(rc == ((struct Npfcall *)NULL))
  {
    if(!(tc->u.twalk.fid == tc->u.twalk.newfid))
    {
      if(!(newfid == ((struct Npfid *)NULL)))
        np_fid_decref(&newfid);

    }

  }

  return rc;
}

// np_write
// file fcall.c line 473
struct Npfcall * np_write(struct Npreq *req, struct Npfcall *tc)
{
  signed int n;
  struct Npconn *conn = req->conn;
  struct Npfid *fid = req->fid;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(conn->srv, "write: invalid fid");
  }

  else
    if(!((8 & (signed int)fid->type) == 0))
    {
      if(!(conn->srv->auth == ((struct Npauth *)NULL)))
      {
        n=conn->srv->auth->write(fid, tc->u.twrite.offset, tc->u.twrite.count, tc->u.twrite.data);
        if(n >= 0)
        {
          rc=np_create_rwrite((unsigned int)n);
          if(rc == ((struct Npfcall *)NULL))
            np_uerror((unsigned long int)12);

        }

      }

      else
        np_uerror((unsigned long int)38);
    }

    else
      if(!((0x02 & fid->flags) == 0))
        np_uerror((unsigned long int)30);

      else
        if(!(conn->msize >= 24u + tc->u.twrite.count))
        {
          np_uerror((unsigned long int)5);
          np_logerr(conn->srv, "write: count %u too large", tc->u.twrite.count);
        }

        else
          if(!((4 & (signed int)fid->type) == 0))
            rc=np_ctl_write(fid, tc->u.twrite.offset, tc->u.twrite.count, tc->u.twrite.data, req);

          else
          {
            signed int return_value_np_setfsid_1;
            return_value_np_setfsid_1=np_setfsid(req, fid->user, (unsigned int)-1);
            if(return_value_np_setfsid_1 >= 0)
            {
              if(conn->srv->write == ((struct Npfcall * (*)(struct Npfid *, unsigned long int, unsigned int, unsigned char *, struct Npreq *))NULL))
                np_uerror((unsigned long int)38);

              else
                rc=conn->srv->write(fid, tc->u.twrite.offset, tc->u.twrite.count, tc->u.twrite.data, req);
            }

          }

done:
  ;
  return rc;
}

// np_wthread_create
// file srv.c line 216
static signed int np_wthread_create(struct Nptpool *tp)
{
  signed int np_wthread_create__1__err;
  struct Npwthread *wt;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct Npwthread) /*48ul*/ );
  wt = (struct Npwthread *)return_value_malloc_1;
  if(wt == ((struct Npwthread *)NULL))
    np_uerror((unsigned long int)12);

  else
  {
    memset((void *)wt, 0, sizeof(struct Npwthread) /*48ul*/ );
    wt->tpool = tp;
    wt->shutdown = 0;
    wt->fsuid=geteuid();
    wt->fsgid=getegid();
    wt->privcap = wt->fsuid == (unsigned int)0 ? 1 : 0;
    np_wthread_create__1__err=pthread_create(&wt->thread, (const union pthread_attr_t *)(void *)0, np_wthread_proc, (void *)wt);
    if(!(np_wthread_create__1__err == 0))
      np_uerror((unsigned long int)np_wthread_create__1__err);

    else
    {
      wt->next = tp->wthreads;
      tp->wthreads = wt;
      return 0;
    }
  }

error:
  ;
  return -1;
}

// np_wthread_proc
// file srv.c line 716
static void * np_wthread_proc(void *a)
{
  struct Npwthread *wt = (struct Npwthread *)a;
  struct Nptpool *tp = wt->tpool;
  struct Npreq *req = (struct Npreq *)(void *)0;
  struct Npfcall *rc;
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&tp->srv->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "srv.c", 723);

  }
  while((_Bool)0);
  while(wt->shutdown == 0)
  {
    req = tp->reqs_first;
    if(req == ((struct Npreq *)NULL))
      do
      {
        signed int pthread_cond_wait_result;
        pthread_cond_wait_result=pthread_cond_wait(&tp->reqcond, &tp->srv->lock);
        if(!(pthread_cond_wait_result == 0))
          np_assfail("pthread_cond_wait_result == 0", "srv.c", 727);

      }
      while((_Bool)0);

    else
    {
      np_srv_remove_req(tp, req);
      np_srv_add_workreq(tp, req);
      req->wthread = wt;
      do
      {
        signed int pthread_mutex_unlock_result;
        pthread_mutex_unlock_result=pthread_mutex_unlock(&tp->srv->lock);
        if(!(pthread_mutex_unlock_result == 0))
          np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 733);

      }
      while((_Bool)0);
      rc=np_process_request(req, tp);
      np_postprocess_request(req, rc);
      do
      {
        signed int np_wthread_proc__1__2__3__pthread_mutex_lock_result;
        np_wthread_proc__1__2__3__pthread_mutex_lock_result=pthread_mutex_lock(&tp->srv->lock);
        if(!(np_wthread_proc__1__2__3__pthread_mutex_lock_result == 0))
          np_assfail("pthread_mutex_lock_result == 0", "srv.c", 738);

      }
      while((_Bool)0);
      np_srv_remove_workreq(tp, req);
      do
      {
        signed int np_wthread_proc__1__2__4__pthread_mutex_unlock_result;
        np_wthread_proc__1__2__4__pthread_mutex_unlock_result=pthread_mutex_unlock(&tp->srv->lock);
        if(!(np_wthread_proc__1__2__4__pthread_mutex_unlock_result == 0))
          np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 740);

      }
      while((_Bool)0);
      np_postprocess_flush(req);
      np_req_unref(req);
      do
      {
        signed int np_wthread_proc__1__2__5__pthread_mutex_lock_result;
        np_wthread_proc__1__2__5__pthread_mutex_lock_result=pthread_mutex_lock(&tp->srv->lock);
        if(!(np_wthread_proc__1__2__5__pthread_mutex_lock_result == 0))
          np_assfail("pthread_mutex_lock_result == 0", "srv.c", 745);

      }
      while((_Bool)0);
    }
  }
  do
  {
    signed int np_wthread_proc__1__3__pthread_mutex_unlock_result;
    np_wthread_proc__1__3__pthread_mutex_unlock_result=pthread_mutex_unlock(&tp->srv->lock);
    if(!(np_wthread_proc__1__3__pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "srv.c", 747);

  }
  while((_Bool)0);
  return (void *)0;
}

// np_xattrcreate
// file fcall.c line 972
struct Npfcall * np_xattrcreate(struct Npreq *req, struct Npfcall *tc)
{
  struct Npfid *fid = req->fid;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(req->conn->srv, "xattrcreate: invalid fid");
  }

  else
    if(!((4 & (signed int)fid->type) == 0))
    {
      np_uerror((unsigned long int)1);
      goto done;
    }

    else
    {
      signed int return_value_np_setfsid_1;
      return_value_np_setfsid_1=np_setfsid(req, fid->user, (unsigned int)-1);
      if(return_value_np_setfsid_1 >= 0)
      {
        if(req->conn->srv->xattrcreate == ((struct Npfcall * (*)(struct Npfid *, struct p9_str *, unsigned long int, unsigned int))NULL))
          np_uerror((unsigned long int)38);

        else
          rc=req->conn->srv->xattrcreate(fid, &tc->u.txattrcreate.name, tc->u.txattrcreate.size, tc->u.txattrcreate.flag);
      }

    }

done:
  ;
  return rc;
}

// np_xattrwalk
// file fcall.c line 910
struct Npfcall * np_xattrwalk(struct Npreq *req, struct Npfcall *tc)
{
  struct Npconn *conn = req->conn;
  struct Npfid *fid = req->fid;
  struct Npfid *attrfid = (struct Npfid *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(fid == ((struct Npfid *)NULL))
  {
    np_uerror((unsigned long int)5);
    np_logerr(conn->srv, "xattrwalk: invalid fid");
  }

  else
  {
    attrfid=np_fid_create(conn, tc->u.txattrwalk.attrfid);
    if(attrfid == ((struct Npfid *)NULL))
    {
      unsigned long int return_value_np_rerror_2;
      return_value_np_rerror_2=np_rerror();
      if(return_value_np_rerror_2 == 17ul)
      {
        np_uerror((unsigned long int)5);
        char *return_value_np_conn_get_client_id_1;
        return_value_np_conn_get_client_id_1=np_conn_get_client_id(conn);
        np_logmsg(conn->srv, "%s@%s:%s: xattrwalk: invalid newfid: %d", fid->user->uname, return_value_np_conn_get_client_id_1, fid->aname, tc->u.txattrwalk.attrfid);
      }

      goto done;
    }

    np_user_incref(fid->user);
    attrfid->user = fid->user;
    np_tpool_incref(fid->tpool);
    attrfid->tpool = fid->tpool;
    attrfid->type = fid->type;
    attrfid->flags = fid->flags;
    attrfid->aname=strdup(fid->aname);
    if(attrfid->aname == ((char *)NULL))
    {
      np_uerror((unsigned long int)12);
      np_logerr(conn->srv, "xattrwalk: out of memory");
    }

    else
      if(!((4 & (signed int)fid->type) == 0))
      {
        np_uerror((unsigned long int)1);
        goto done;
      }

      else
      {
        signed int return_value_np_setfsid_3;
        return_value_np_setfsid_3=np_setfsid(req, fid->user, (unsigned int)-1);
        if(return_value_np_setfsid_3 >= 0)
        {
          if(req->conn->srv->xattrwalk == ((struct Npfcall * (*)(struct Npfid *, struct Npfid *, struct p9_str *))NULL))
            np_uerror((unsigned long int)38);

          else
            rc=req->conn->srv->xattrwalk(fid, attrfid, &tc->u.txattrwalk.name);
        }

      }
  }

done:
  ;
  if(rc == ((struct Npfcall *)NULL) && !(attrfid == ((struct Npfid *)NULL)))
    np_fid_decref(&attrfid);

  return rc;
}

// npc_aget
// file read.c line 109
char * npc_aget(struct Npcfid *root, char *path)
{
  signed int n;
  signed int len;
  struct Npcfid *fid = (struct Npcfid *)(void *)0;
  char *s = (char *)(void *)0;
  signed int ssize = 0;
  fid=npc_open_bypath(root, path, (unsigned int)00);
  signed int return_value_npc_clunk_3;
  if(!(fid == ((struct Npcfid *)NULL)))
  {
    len = 0;
    while((_Bool)1)
    {
      if(s == ((char *)NULL))
      {
        ssize = 4096;
        void *return_value_malloc_1;
        return_value_malloc_1=malloc((unsigned long int)ssize);
        s = (char *)return_value_malloc_1;
      }

      else
        if(ssize + -len == 1)
        {
          ssize = ssize + 4096;
          void *return_value_realloc_2;
          return_value_realloc_2=realloc((void *)s, (unsigned long int)ssize);
          s = (char *)return_value_realloc_2;
        }

      if(s == ((char *)NULL))
      {
        np_uerror((unsigned long int)12);
        goto error;
      }

      n=npc_read(fid, (void *)(s + (signed long int)len), (unsigned int)((ssize - len) - 1));
      if(n >= 1)
      {
        len = len + n;
        if(!((2 & fid->fsys->flags) == 0))
        {
          if(!(len + -n >= ssize + -len + -1))
            break;

        }

      }

      if(!(n >= 1))
        break;

    }
    if(!(n >= 0))
      goto error;

    return_value_npc_clunk_3=npc_clunk(fid);
    if(!(return_value_npc_clunk_3 >= 0))
      goto error;

    s[(signed long int)len] = (char)0;
    return s;
  }

  else
  {

  error:
    ;
    if(!(s == ((char *)NULL)))
      free((void *)s);

    if(!(fid == ((struct Npcfid *)NULL)))
      npc_clunk(fid);

    return (char *)(void *)0;
  }
}

// npc_attach
// file ../libnpclient/npclient.h line 78
struct Npcfid * npc_attach(struct Npcfsys *fs, struct Npcfid *afid, char *aname, unsigned int uid)
{
  struct Npfcall *tc = (struct Npfcall *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  struct Npcfid *fid = (struct Npcfid *)(void *)0;
  fid=npc_fid_alloc(fs);
  unsigned int tmp_if_expr_1;
  signed int return_value;
  if(!(fid == ((struct Npcfid *)NULL)))
  {
    if(!(afid == ((struct Npcfid *)NULL)))
      tmp_if_expr_1 = afid->fid;

    else
      tmp_if_expr_1 = (unsigned int)~0;
    tc=np_create_tattach(fid->fid, tmp_if_expr_1, (char *)(void *)0, aname, uid);
    if(tc == ((struct Npfcall *)NULL))
      np_uerror((unsigned long int)12);

    else
      return_value=fs->rpc(fs, tc, &rc);
  }


done:
  ;
  if(!(tc == ((struct Npfcall *)NULL)))
    free((void *)tc);

  if(!(rc == ((struct Npfcall *)NULL)))
    free((void *)rc);

  unsigned long int return_value_np_rerror_2;
  return_value_np_rerror_2=np_rerror();
  if(!(return_value_np_rerror_2 == 0ul))
  {
    if(!(fid == ((struct Npcfid *)NULL)))
    {
      npc_fid_free(fid);
      fid = (struct Npcfid *)(void *)0;
    }

  }

  return fid;
}

// npc_auth
// file ../libnpclient/npclient.h line 72
struct Npcfid * npc_auth(struct Npcfsys *fs, char *aname, unsigned int uid, signed int (*auth)(struct Npcfid *, unsigned int))
{
  struct Npcfid *afid = (struct Npcfid *)(void *)0;
  struct Npfcall *tc = (struct Npfcall *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  afid=npc_fid_alloc(fs);
  signed int return_value;
  _Bool tmp_if_expr_3;
  unsigned long int return_value_np_rerror_2;
  signed int return_value_1;
  if(!(afid == ((struct Npcfid *)NULL)))
  {
    tc=np_create_tauth(afid->fid, (char *)(void *)0, aname, uid);
    if(tc == ((struct Npfcall *)NULL))
    {
      np_uerror((unsigned long int)12);
      npc_fid_free(afid);
      afid = (struct Npcfid *)(void *)0;
    }

    else
    {
      return_value=afid->fsys->rpc(afid->fsys, tc, &rc);
      if(!(return_value >= 0))
      {
        npc_fid_free(afid);
        afid = (struct Npcfid *)(void *)0;
        unsigned long int return_value_np_rerror_1;
        return_value_np_rerror_1=np_rerror();
        if(return_value_np_rerror_1 == 0ul)
          tmp_if_expr_3 = (_Bool)1;

        else
        {
          return_value_np_rerror_2=np_rerror();
          tmp_if_expr_3 = return_value_np_rerror_2 == (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_3)
          np_uerror((unsigned long int)0);

      }

      if(!(auth == ((signed int (*)(struct Npcfid *, unsigned int))NULL)))
      {
        return_value_1=auth(afid, uid);
        if(!(return_value_1 >= 0))
        {
          signed int saved_err;
          unsigned long int return_value_np_rerror_4;
          return_value_np_rerror_4=np_rerror();
          saved_err = (signed int)return_value_np_rerror_4;
          npc_clunk(afid);
          afid = (struct Npcfid *)(void *)0;
          np_uerror((unsigned long int)saved_err);
        }

      }

    }
  }


done:
  ;
  if(!(tc == ((struct Npfcall *)NULL)))
    free((void *)tc);

  if(!(rc == ((struct Npfcall *)NULL)))
    free((void *)rc);

  return afid;
}

// npc_chmod
// file chmod.c line 81
signed int npc_chmod(struct Npcfid *root, char *path, unsigned int mode)
{
  struct Npcfid *fid;
  fid=npc_walk(root, path);
  if(fid == ((struct Npcfid *)NULL))
    return -1;

  else
  {
    signed int return_value_npc_fchmod_2;
    return_value_npc_fchmod_2=npc_fchmod(fid, mode);
    if(!(return_value_npc_fchmod_2 >= 0))
    {
      signed int saved_err;
      unsigned long int return_value_np_rerror_1;
      return_value_np_rerror_1=np_rerror();
      saved_err = (signed int)return_value_np_rerror_1;
      npc_clunk(fid);
      np_uerror((unsigned long int)saved_err);
      return -1;
    }

    signed int return_value_npc_clunk_3;
    return_value_npc_clunk_3=npc_clunk(fid);
    if(!(return_value_npc_clunk_3 >= 0))
      return -1;

    else
      return 0;
  }
}

// npc_chown
// file chmod.c line 111
signed int npc_chown(struct Npcfid *root, char *path, unsigned int owner, unsigned int group)
{
  struct Npcfid *fid;
  fid=npc_walk(root, path);
  if(fid == ((struct Npcfid *)NULL))
    return -1;

  else
  {
    signed int return_value_npc_fchown_2;
    return_value_npc_fchown_2=npc_fchown(fid, owner, group);
    if(!(return_value_npc_fchown_2 >= 0))
    {
      signed int saved_err;
      unsigned long int return_value_np_rerror_1;
      return_value_np_rerror_1=np_rerror();
      saved_err = (signed int)return_value_np_rerror_1;
      npc_clunk(fid);
      np_uerror((unsigned long int)saved_err);
      return -1;
    }

    signed int return_value_npc_clunk_3;
    return_value_npc_clunk_3=npc_clunk(fid);
    if(!(return_value_npc_clunk_3 >= 0))
      return -1;

    else
      return 0;
  }
}

// npc_clone
// file walk.c line 44
struct Npcfid * npc_clone(struct Npcfid *fid)
{
  struct Npcfsys *fsys = fid->fsys;
  struct Npcfid *nfid = (struct Npcfid *)(void *)0;
  struct Npfcall *tc = (struct Npfcall *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  nfid=npc_fid_alloc(fsys);
  signed int return_value;
  if(!(nfid == ((struct Npcfid *)NULL)))
  {
    tc=np_create_twalk(fid->fid, nfid->fid, (unsigned short int)0, (char **)(void *)0);
    if(tc == ((struct Npfcall *)NULL))
    {
      np_uerror((unsigned long int)12);
      goto error;
    }

    return_value=fsys->rpc(fsys, tc, &rc);
    free((void *)tc);
    free((void *)rc);
    return nfid;
  }

  else
  {

  error:
    ;
    if(!(rc == ((struct Npfcall *)NULL)))
      free((void *)rc);

    if(!(tc == ((struct Npfcall *)NULL)))
      free((void *)tc);

    if(!(nfid == ((struct Npcfid *)NULL)))
      npc_fid_free(nfid);

    return (struct Npcfid *)(void *)0;
  }
}

// npc_clunk
// file ../libnpclient/npclient.h line 83
signed int npc_clunk(struct Npcfid *fid)
{
  struct Npfcall *tc = (struct Npfcall *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  signed int ret = -1;
  tc=np_create_tclunk(fid->fid);
  signed int return_value;
  if(tc == ((struct Npfcall *)NULL))
    np_uerror((unsigned long int)12);

  else
  {
    return_value=fid->fsys->rpc(fid->fsys, tc, &rc);
    if(return_value >= 0)
    {
      npc_fid_free(fid);
      ret = 0;
    }

  }

done:
  ;
  if(!(tc == ((struct Npfcall *)NULL)))
    free((void *)tc);

  if(!(rc == ((struct Npfcall *)NULL)))
    free((void *)rc);

  return ret;
}

// npc_create
// file open.c line 49
signed int npc_create(struct Npcfid *fid, char *name, unsigned int flags, unsigned int mode, unsigned int gid)
{
  signed int maxio = (signed int)(fid->fsys->msize - (unsigned int)24);
  struct Npfcall *tc = (struct Npfcall *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  signed int ret = -1;
  tc=np_create_tlcreate(fid->fid, name, flags, mode, gid);
  signed int return_value;
  _Bool tmp_if_expr_1;
  if(tc == ((struct Npfcall *)NULL))
    np_uerror((unsigned long int)12);

  else
  {
    return_value=fid->fsys->rpc(fid->fsys, tc, &rc);
    if(return_value >= 0)
    {
      fid->iounit = rc->u.rlcreate.iounit;
      if(!(fid->iounit == 0u))
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = fid->iounit > (unsigned int)maxio ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
        fid->iounit = (unsigned int)maxio;

      ret = 0;
    }

  }

done:
  ;
  if(!(tc == ((struct Npfcall *)NULL)))
    free((void *)tc);

  if(!(rc == ((struct Npfcall *)NULL)))
    free((void *)rc);

  return ret;
}

// npc_create_bypath
// file open.c line 74
struct Npcfid * npc_create_bypath(struct Npcfid *root, char *path, unsigned int flags, unsigned int mode, unsigned int gid)
{
  struct Npcfid *fid;
  char *cpy;
  char *dname;
  char *fname;
  cpy=strdup(path);
  if(cpy == ((char *)NULL))
  {
    np_uerror((unsigned long int)12);
    return (struct Npcfid *)(void *)0;
  }

  else
  {
    dname=dirname(cpy);
    fid=npc_walk(root, dname);
    free((void *)cpy);
    if(fid == ((struct Npcfid *)NULL))
      return (struct Npcfid *)(void *)0;

    else
    {
      cpy=strdup(path);
      if(cpy == ((char *)NULL))
      {
        npc_clunk(fid);
        np_uerror((unsigned long int)12);
        return (struct Npcfid *)(void *)0;
      }

      else
      {
        fname=__xpg_basename(cpy);
        signed int return_value_npc_create_2;
        return_value_npc_create_2=npc_create(fid, fname, flags, mode, gid);
        if(!(return_value_npc_create_2 >= 0))
        {
          signed int saved_err;
          unsigned long int return_value_np_rerror_1;
          return_value_np_rerror_1=np_rerror();
          saved_err = (signed int)return_value_np_rerror_1;
          npc_clunk(fid);
          free((void *)cpy);
          np_uerror((unsigned long int)saved_err);
          return (struct Npcfid *)(void *)0;
        }

        free((void *)cpy);
        return fid;
      }
    }
  }
}

// npc_create_fsys
// file fsys.c line 52
struct Npcfsys * npc_create_fsys(signed int rfd, signed int wfd, signed int msize, signed int flags)
{
  struct Npcfsys *fs;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct Npcfsys) /*208ul*/ );
  fs = (struct Npcfsys *)return_value_malloc_1;
  if(fs == ((struct Npcfsys *)NULL))
  {
    np_uerror((unsigned long int)12);
    return (struct Npcfsys *)(void *)0;
  }

  else
  {
    np_uerror((unsigned long int)0);
    pthread_mutex_init(&fs->lock, (const union anonymous_6 *)(void *)0);
    fs->msize = (unsigned int)msize;
    fs->trans = (struct Nptrans *)(void *)0;
    fs->tagpool = (struct Npcpool *)(void *)0;
    fs->fidpool = (struct Npcpool *)(void *)0;
    fs->refcount = 1;
    fs->rpc = npc_rpc;
    fs->incref = npc_incref_fsys;
    fs->decref = npc_decref_fsys;
    fs->disconnect = (void (*)(struct Npcfsys *))(void *)0;
    fs->flags = flags;
    fs->trans=np_fdtrans_create(rfd, wfd);
    if(!(fs->trans == ((struct Nptrans *)NULL)))
    {
      fs->tagpool=npc_create_pool((unsigned int)(unsigned short int)~0);
      if(fs->tagpool == ((struct Npcpool *)NULL))
        goto error;

      fs->fidpool=npc_create_pool((unsigned int)~0);
      if(fs->fidpool == ((struct Npcpool *)NULL))
        goto error;

      return fs;
    }

    else
    {

    error:
      ;
      npc_decref_fsys(fs);
      close(rfd);
      if(!(rfd == wfd))
        close(wfd);

      return (struct Npcfsys *)(void *)0;
    }
  }
}

// npc_create_mtfsys
// file mtfsys.c line 66
struct Npcfsys * npc_create_mtfsys(signed int rfd, signed int wfd, signed int msize, signed int flags)
{
  struct Npcfsys *fs;
  signed int npc_create_mtfsys__1__err;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct Npcfsys) /*208ul*/ );
  fs = (struct Npcfsys *)return_value_malloc_1;
  if(fs == ((struct Npcfsys *)NULL))
  {
    np_uerror((unsigned long int)12);
    return (struct Npcfsys *)(void *)0;
  }

  else
  {
    np_uerror((unsigned long int)0);
    pthread_mutex_init(&fs->lock, (const union anonymous_6 *)(void *)0);
    pthread_cond_init(&fs->cond, (const union anonymous_6 *)(void *)0);
    fs->msize = (unsigned int)msize;
    fs->trans = (struct Nptrans *)(void *)0;
    fs->tagpool = (struct Npcpool *)(void *)0;
    fs->fidpool = (struct Npcpool *)(void *)0;
    fs->unsent_first = (struct Npcreq *)(void *)0;
    fs->unsent_last = (struct Npcreq *)(void *)0;
    fs->pend_first = (struct Npcreq *)(void *)0;
    fs->readproc = (unsigned long int)0;
    fs->writeproc = (unsigned long int)0;
    fs->refcount = 1;
    fs->rfd = rfd;
    fs->wfd = wfd;
    fs->rpc = npc_rpc_link1;
    fs->incref = npc_incref_fsys_link1;
    fs->decref = npc_decref_fsys_link1;
    fs->disconnect = npc_disconnect_fsys;
    fs->flags = flags;
    fs->trans=np_fdtrans_create(rfd, wfd);
    if(!(fs->trans == ((struct Nptrans *)NULL)))
    {
      fs->tagpool=npc_create_pool((unsigned int)(unsigned short int)~0);
      if(fs->tagpool == ((struct Npcpool *)NULL))
        goto error;

      fs->fidpool=npc_create_pool((unsigned int)~0);
      if(fs->fidpool == ((struct Npcpool *)NULL))
        goto error;

      npc_create_mtfsys__1__err=pthread_create(&fs->readproc, (const union pthread_attr_t *)(void *)0, npc_read_proc, (void *)fs);
      if(!(npc_create_mtfsys__1__err == 0))
      {
        np_uerror((unsigned long int)npc_create_mtfsys__1__err);
        goto error;
      }

      npc_create_mtfsys__1__err=pthread_create(&fs->writeproc, (const union pthread_attr_t *)(void *)0, npc_write_proc, (void *)fs);
      if(!(npc_create_mtfsys__1__err == 0))
      {
        np_uerror((unsigned long int)npc_create_mtfsys__1__err);
        goto error;
      }

      return fs;
    }

    else
    {

    error:
      ;
      npc_disconnect_fsys(fs);
      npc_decref_fsys_link1(fs);
      return (struct Npcfsys *)(void *)0;
    }
  }
}

// npc_create_pool
// file npcimpl.h line 90
struct Npcpool * npc_create_pool(unsigned int maxid)
{
  struct Npcpool *p;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct Npcpool) /*104ul*/ );
  p = (struct Npcpool *)return_value_malloc_1;
  if(p == ((struct Npcpool *)NULL))
  {
    np_uerror((unsigned long int)12);
    return (struct Npcpool *)(void *)0;
  }

  else
  {
    p->maxid = maxid;
    pthread_mutex_init(&p->lock, (const union anonymous_6 *)(void *)0);
    pthread_cond_init(&p->cond, (const union anonymous_6 *)(void *)0);
    p->msize = 32;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)p->msize);
    p->map = (unsigned char *)return_value_malloc_2;
    if(p->map == ((unsigned char *)NULL))
    {
      np_uerror((unsigned long int)12);
      free((void *)p);
      return (struct Npcpool *)(void *)0;
    }

    else
    {
      memset((void *)p->map, 0, (unsigned long int)p->msize);
      return p;
    }
  }
}

// npc_decref_fsys
// file fsys.c line 103
static void npc_decref_fsys(struct Npcfsys *fs)
{
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&fs->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "fsys.c", 105);

  }
  while((_Bool)0);
  fs->refcount = fs->refcount - 1;
  if(!(fs->refcount == 0))
    do
    {
      signed int pthread_mutex_unlock_result;
      pthread_mutex_unlock_result=pthread_mutex_unlock(&fs->lock);
      if(!(pthread_mutex_unlock_result == 0))
        np_assfail("pthread_mutex_unlock_result == 0", "fsys.c", 108);

    }
    while((_Bool)0);

  else
  {
    if(!(fs->trans == ((struct Nptrans *)NULL)))
    {
      np_trans_destroy(fs->trans);
      fs->trans = (struct Nptrans *)(void *)0;
    }

    if(!(fs->tagpool == ((struct Npcpool *)NULL)))
    {
      npc_destroy_pool(fs->tagpool);
      fs->tagpool = (struct Npcpool *)(void *)0;
    }

    if(!(fs->fidpool == ((struct Npcpool *)NULL)))
    {
      npc_destroy_pool(fs->fidpool);
      fs->fidpool = (struct Npcpool *)(void *)0;
    }

    do
    {
      signed int npc_decref_fsys__1__6__pthread_mutex_unlock_result;
      npc_decref_fsys__1__6__pthread_mutex_unlock_result=pthread_mutex_unlock(&fs->lock);
      if(!(npc_decref_fsys__1__6__pthread_mutex_unlock_result == 0))
        np_assfail("pthread_mutex_unlock_result == 0", "fsys.c", 124);

    }
    while((_Bool)0);
    pthread_mutex_destroy(&fs->lock);
    free((void *)fs);
  }
}

// npc_decref_fsys_link1
// file mtfsys.c line 164
static void npc_decref_fsys_link1(struct Npcfsys *fs_link1)
{
  do
  {
    signed int pthread_mutex_lock_result_link1;
    pthread_mutex_lock_result_link1=pthread_mutex_lock(&fs_link1->lock);
    if(!(pthread_mutex_lock_result_link1 == 0))
      np_assfail("pthread_mutex_lock_result == 0", "mtfsys.c", 166);

  }
  while((_Bool)0);
  fs_link1->refcount = fs_link1->refcount - 1;
  _Bool tmp_if_expr_1;
  if(!(fs_link1->refcount == 0))
    do
    {
      signed int pthread_mutex_unlock_result_link1;
      pthread_mutex_unlock_result_link1=pthread_mutex_unlock(&fs_link1->lock);
      if(!(pthread_mutex_unlock_result_link1 == 0))
        np_assfail("pthread_mutex_unlock_result == 0", "mtfsys.c", 169);

    }
    while((_Bool)0);

  else
  {
    if(!(fs_link1->wfd >= 0))
      tmp_if_expr_1 = fs_link1->trans == (struct Nptrans *)(void *)0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      np_assfail("fs->wfd<0 && fs->trans==NULL", "mtfsys.c", 173);

    if(!(fs_link1->tagpool == ((struct Npcpool *)NULL)))
    {
      npc_destroy_pool(fs_link1->tagpool);
      fs_link1->tagpool = (struct Npcpool *)(void *)0;
    }

    if(!(fs_link1->fidpool == ((struct Npcpool *)NULL)))
    {
      npc_destroy_pool(fs_link1->fidpool);
      fs_link1->fidpool = (struct Npcpool *)(void *)0;
    }

    do
    {
      signed int pthread_mutex_unlock_result;
      pthread_mutex_unlock_result=pthread_mutex_unlock(&fs_link1->lock);
      if(!(pthread_mutex_unlock_result == 0))
        np_assfail("pthread_mutex_unlock_result == 0", "mtfsys.c", 183);

    }
    while((_Bool)0);
    pthread_mutex_destroy(&fs_link1->lock);
    pthread_cond_destroy(&fs_link1->cond);
    free((void *)fs_link1);
  }
}

// npc_destroy_pool
// file npcimpl.h line 91
void npc_destroy_pool(struct Npcpool *p)
{
  if(!(p == ((struct Npcpool *)NULL)))
  {
    free((void *)p->map);
    free((void *)p);
  }

}

// npc_disconnect_fsys
// file mtfsys.c line 128
static void npc_disconnect_fsys(struct Npcfsys *fs)
{
  void *v;
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&fs->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "mtfsys.c", 132);

  }
  while((_Bool)0);
  if(fs->wfd >= 0)
  {
    shutdown(fs->wfd, 2);
    close(fs->wfd);
    fs->wfd = -1;
  }

  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&fs->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "mtfsys.c", 138);

  }
  while((_Bool)0);
  if(!(fs->readproc == 0ul))
    pthread_join(fs->readproc, &v);

  pthread_cond_broadcast(&fs->cond);
  if(!(fs->writeproc == 0ul))
    pthread_join(fs->writeproc, &v);

  do
  {
    signed int npc_disconnect_fsys__1__4__pthread_mutex_lock_result;
    npc_disconnect_fsys__1__4__pthread_mutex_lock_result=pthread_mutex_lock(&fs->lock);
    if(!(npc_disconnect_fsys__1__4__pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "mtfsys.c", 147);

  }
  while((_Bool)0);
  if(!(fs->trans == ((struct Nptrans *)NULL)))
  {
    np_trans_destroy(fs->trans);
    fs->trans = (struct Nptrans *)(void *)0;
  }

  do
  {
    signed int npc_disconnect_fsys__1__6__pthread_mutex_unlock_result;
    npc_disconnect_fsys__1__6__pthread_mutex_unlock_result=pthread_mutex_unlock(&fs->lock);
    if(!(npc_disconnect_fsys__1__6__pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "mtfsys.c", 152);

  }
  while((_Bool)0);
}

// npc_fchmod
// file chmod.c line 73
signed int npc_fchmod(struct Npcfid *fid, unsigned int mode)
{
  unsigned int valid = (unsigned int)0x00000001UL;
  signed int return_value_npc_setattr_1;
  return_value_npc_setattr_1=npc_setattr(fid, valid, mode, (unsigned int)0, (unsigned int)0, (unsigned long int)0, (unsigned long int)0, (unsigned long int)0, (unsigned long int)0, (unsigned long int)0);
  return return_value_npc_setattr_1;
}

// npc_fchown
// file chmod.c line 99
signed int npc_fchown(struct Npcfid *fid, unsigned int owner, unsigned int group)
{
  unsigned int valid = (unsigned int)0;
  if(!(owner == 4294967295u))
    valid = valid | (unsigned int)0x00000002UL;

  if(!(group == 4294967295u))
    valid = valid | (unsigned int)0x00000004UL;

  signed int return_value_npc_setattr_1;
  return_value_npc_setattr_1=npc_setattr(fid, valid, (unsigned int)0, owner, group, (unsigned long int)0, (unsigned long int)0, (unsigned long int)0, (unsigned long int)0, (unsigned long int)0);
  return return_value_npc_setattr_1;
}

// npc_fid_alloc
// file fid.c line 44
struct Npcfid * npc_fid_alloc(struct Npcfsys *fs)
{
  struct Npcfid *ret;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct Npcfid) /*56ul*/ );
  ret = (struct Npcfid *)return_value_malloc_1;
  if(ret == ((struct Npcfid *)NULL))
  {
    np_uerror((unsigned long int)12);
    return (struct Npcfid *)(void *)0;
  }

  else
  {
    ret->fsys = fs;
    ret->fid=npc_get_id(fs->fidpool);
    ret->offset = (unsigned long int)0;
    ret->iounit = (unsigned int)0;
    ret->buf = (char *)(void *)0;
    fs->incref(fs);
    return ret;
  }
}

// npc_fid_free
// file fid.c line 65
void npc_fid_free(struct Npcfid *fid)
{
  if(!(fid == ((struct Npcfid *)NULL)))
  {
    if(!(fid->buf == ((char *)NULL)))
      free((void *)fid->buf);

    npc_put_id(fid->fsys->fidpool, fid->fid);
    fid->fsys->decref(fid->fsys);
    free((void *)fid);
  }

}

// npc_finish
// file ../libnpclient/npclient.h line 65
void npc_finish(struct Npcfsys *fs)
{
  if(!(fs->disconnect == ((void (*)(struct Npcfsys *))NULL)))
    fs->disconnect(fs);

  fs->decref(fs);
}

// npc_fstat
// file stat.c line 93
signed int npc_fstat(struct Npcfid *fid, struct stat *sb)
{
  signed int ret = -1;
  unsigned long int valid;
  struct p9_qid qid;
  unsigned int mode;
  unsigned int uid;
  unsigned int gid;
  unsigned long int nlink;
  unsigned long int rdev;
  unsigned long int size;
  unsigned long int blksize;
  unsigned long int blocks;
  unsigned long int atime_sec;
  unsigned long int atime_nsec;
  unsigned long int mtime_sec;
  unsigned long int mtime_nsec;
  unsigned long int ctime_sec;
  unsigned long int ctime_nsec;
  unsigned long int btime_sec;
  unsigned long int btime_nsec;
  unsigned long int gen;
  unsigned long int data_version;
  ret=npc_getattr(fid, 0x000007ffULL, &valid, &qid, &mode, &uid, &gid, &nlink, &rdev, &size, &blksize, &blocks, &atime_sec, &atime_nsec, &mtime_sec, &mtime_nsec, &ctime_sec, &ctime_nsec, &btime_sec, &btime_nsec, &gen, &data_version);
  if(ret == 0)
  {
    sb->st_dev = (unsigned long int)0;
    sb->st_ino = qid.path;
    sb->st_mode = mode;
    sb->st_uid = uid;
    sb->st_gid = gid;
    sb->st_nlink = nlink;
    sb->st_rdev = rdev;
    sb->st_size = (signed long int)size;
    sb->st_blksize = (signed long int)blksize;
    sb->st_blocks = (signed long int)blocks;
    sb->st_atim.tv_sec = (signed long int)atime_sec;
    sb->st_atim.tv_nsec = (signed long int)atime_nsec;
    sb->st_mtim.tv_sec = (signed long int)mtime_sec;
    sb->st_mtim.tv_nsec = (signed long int)mtime_nsec;
    sb->st_ctim.tv_sec = (signed long int)ctime_sec;
    sb->st_ctim.tv_nsec = (signed long int)ctime_nsec;
  }

  return ret;
}

// npc_ftruncate
// file chmod.c line 129
signed int npc_ftruncate(struct Npcfid *fid, signed long int length)
{
  unsigned int valid = (unsigned int)0x00000008UL;
  signed int return_value_npc_setattr_1;
  return_value_npc_setattr_1=npc_setattr(fid, valid, (unsigned int)0, (unsigned int)0, (unsigned int)0, (unsigned long int)length, (unsigned long int)0, (unsigned long int)0, (unsigned long int)0, (unsigned long int)0);
  return return_value_npc_setattr_1;
}

// npc_futime
// file chmod.c line 155
signed int npc_futime(struct Npcfid *fid, struct utimbuf *times)
{
  unsigned int valid = (unsigned int)0;
  unsigned long int atime_sec = (unsigned long int)0;
  unsigned long int atime_nsec = (unsigned long int)0;
  unsigned long int mtime_sec = (unsigned long int)0;
  unsigned long int mtime_nsec = (unsigned long int)0;
  valid = valid | (unsigned int)0x00000010UL;
  valid = valid | (unsigned int)0x00000020UL;
  if(!(times == ((struct utimbuf *)NULL)))
  {
    atime_sec = (unsigned long int)times->actime;
    valid = valid | (unsigned int)0x00000080UL;
    mtime_sec = (unsigned long int)times->modtime;
    valid = valid | (unsigned int)0x00000100UL;
  }

  signed int return_value_npc_setattr_1;
  return_value_npc_setattr_1=npc_setattr(fid, valid, (unsigned int)0, (unsigned int)0, (unsigned int)0, (unsigned long int)0, atime_sec, atime_nsec, mtime_sec, mtime_nsec);
  return return_value_npc_setattr_1;
}

// npc_get
// file read.c line 84
signed int npc_get(struct Npcfid *root, char *path, void *buf, unsigned int count)
{
  signed int n;
  signed int len = 0;
  struct Npcfid *fid;
  fid=npc_open_bypath(root, path, (unsigned int)00);
  if(fid == ((struct Npcfid *)NULL))
    return -1;

  else
  {
    while(!((unsigned int)len >= count))
    {
      n=npc_read(fid, buf + (signed long int)len, count - (unsigned int)len);
      if(!(n >= 0))
        return -1;

      if(n == 0)
        break;

      len = len + n;
      if(!((2 & fid->fsys->flags) == 0))
      {
        if(!((unsigned int)len + -((unsigned int)n) >= count + -((unsigned int)len)))
          break;

      }

    }
    signed int return_value_npc_clunk_1;
    return_value_npc_clunk_1=npc_clunk(fid);
    if(!(return_value_npc_clunk_1 >= 0))
      return -1;

    else
      return len;
  }
}

// npc_get_id
// file npcimpl.h line 92
unsigned int npc_get_id(struct Npcpool *p)
{
  signed int i;
  signed int n;
  unsigned int ret;
  unsigned char *pt;
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&p->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "pool.c", 121);

  }
  while((_Bool)0);
  do
  {

  again:
    ;
    i = 0;
    for( ; !(i >= p->msize); i = i + 1)
      if(!((signed int)p->map[(signed long int)i] == 0xFF))
        break;

    if(i >= p->msize)
    {
      if(!(8u * (unsigned int)p->msize >= p->maxid))
      {
        n = p->msize + 32;
        if(!(p->maxid >= 8u * (unsigned int)n))
          n = (signed int)(p->maxid / (unsigned int)8 + (unsigned int)1);

        void *return_value_realloc_1;
        return_value_realloc_1=realloc((void *)p->map, (unsigned long int)n);
        pt = (unsigned char *)return_value_realloc_1;
        if(!(pt == ((unsigned char *)NULL)))
        {
          memset((void *)(pt + (signed long int)p->msize), 0, (unsigned long int)(n - p->msize));
          p->map = pt;
          i = p->msize;
          p->msize = n;
        }

      }

    }

    if(!(i >= p->msize))
      break;

    pthread_cond_wait(&p->cond, &p->lock);
  }
  while((_Bool)1);
  ret = (unsigned int)m2id[(signed long int)p->map[(signed long int)i]];
  p->map[(signed long int)i] = p->map[(signed long int)i] | (unsigned char)(1 << ret);
  ret = ret + (unsigned int)(i * 8);
  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&p->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "pool.c", 151);

  }
  while((_Bool)0);
  return ret;
}

// npc_getattr
// file stat.c line 48
signed int npc_getattr(struct Npcfid *fid, unsigned long int request_mask, unsigned long int *valid, struct p9_qid *qid, unsigned int *mode, unsigned int *uid, unsigned int *gid, unsigned long int *nlink, unsigned long int *rdev, unsigned long int *size, unsigned long int *blksize, unsigned long int *blocks, unsigned long int *atime_sec, unsigned long int *atime_nsec, unsigned long int *mtime_sec, unsigned long int *mtime_nsec, unsigned long int *ctime_sec, unsigned long int *ctime_nsec, unsigned long int *btime_sec, unsigned long int *btime_nsec, unsigned long int *gen, unsigned long int *data_version)
{
  struct Npfcall *tc = (struct Npfcall *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  signed int ret = -1;
  tc=np_create_tgetattr(fid->fid, request_mask);
  signed int return_value;
  if(tc == ((struct Npfcall *)NULL))
    np_uerror((unsigned long int)12);

  else
  {
    return_value=fid->fsys->rpc(fid->fsys, tc, &rc);
    if(return_value >= 0)
    {
      *valid = rc->u.rgetattr.valid;
      *qid = rc->u.rgetattr.qid;
      *mode = rc->u.rgetattr.mode;
      *uid = rc->u.rgetattr.uid;
      *gid = rc->u.rgetattr.gid;
      *nlink = rc->u.rgetattr.nlink;
      *rdev = rc->u.rgetattr.rdev;
      *size = rc->u.rgetattr.size;
      *blksize = rc->u.rgetattr.blksize;
      *blocks = rc->u.rgetattr.blocks;
      *atime_sec = rc->u.rgetattr.atime_sec;
      *atime_nsec = rc->u.rgetattr.atime_nsec;
      *mtime_sec = rc->u.rgetattr.mtime_sec;
      *mtime_nsec = rc->u.rgetattr.mtime_nsec;
      *ctime_sec = rc->u.rgetattr.ctime_sec;
      *ctime_nsec = rc->u.rgetattr.ctime_nsec;
      *btime_sec = rc->u.rgetattr.btime_sec;
      *btime_nsec = rc->u.rgetattr.btime_nsec;
      *gen = rc->u.rgetattr.gen;
      *data_version = rc->u.rgetattr.data_version;
      ret = 0;
    }

  }

done:
  ;
  if(!(tc == ((struct Npfcall *)NULL)))
    free((void *)tc);

  if(!(rc == ((struct Npfcall *)NULL)))
    free((void *)rc);

  return ret;
}

// npc_gets
// file read.c line 205
char * npc_gets(struct Npcfid *fid, char *buf, unsigned int count)
{
  signed int n = 0;
  signed int done = 0;
  signed int extra = 0;
  char *nlp = (char *)(void *)0;
  n=_buf_restore(fid, buf, (signed int)(count - (unsigned int)1));
  for( ; nlp == ((char *)NULL) && !((unsigned int)done >= count); done = done + n)
  {
    if(n == 0 || done >= 1)
    {
      n=npc_read(fid, (void *)(buf + (signed long int)done), (count - (unsigned int)done) - (unsigned int)1);
      if(!(n >= 0))
        goto error;

      if(n == 0)
        break;

    }

    nlp=_strnchr(buf + (signed long int)done, (char)10, n);
  }
  signed int return_value__buf_save_1;
  if(!(nlp == ((char *)NULL)))
  {
    *nlp = (char)0;
    extra = (signed int)(((signed long int)done - (nlp - buf)) - (signed long int)1);
    if(extra >= 1)
    {
      return_value__buf_save_1=_buf_save(fid, nlp + (signed long int)1, extra);
      if(!(return_value__buf_save_1 >= 0))
        goto error;

    }

    done = (signed int)(nlp - buf);
  }

  buf[(signed long int)done] = (char)0;
  return done > 0 ? buf : (char *)(void *)0;

error:
  ;
  return (char *)(void *)0;
}

// npc_getxattr
// file xattr.c line 129
signed long int npc_getxattr(struct Npcfid *root, char *path, char *attr, char *buf, unsigned long int size)
{
  struct Npcfid *fid = (struct Npcfid *)(void *)0;
  struct Npcfid *attrfid = (struct Npcfid *)(void *)0;
  signed long int ret = (signed long int)-1;
  unsigned long int n;
  unsigned long int tot;
  fid=npc_walk(root, path);
  if(!(fid == ((struct Npcfid *)NULL)))
  {
    attrfid=npc_fid_alloc(fid->fsys);
    if(!(attrfid == ((struct Npcfid *)NULL)))
    {
      ret=npc_xattrwalk(fid, attrfid, attr);
      if(ret >= 0l)
      {
        if(!(buf == ((char *)NULL)) && !(size == 0ul))
        {
          if(!(size >= (unsigned long int)ret))
            np_uerror((unsigned long int)34);

          else
          {
            tot = (unsigned long int)0;
            while(!(tot >= size))
            {
              signed int return_value_npc_read_1;
              return_value_npc_read_1=npc_read(attrfid, (void *)(buf + (signed long int)tot), (unsigned int)(size - tot));
              n = (unsigned long int)return_value_npc_read_1;
              if(!(n >= 1ul))
                break;

              tot = tot + n;
            }
            ret = (signed long int)tot;
          }
        }

      }

    }

  }


done:
  ;
  if(!(fid == ((struct Npcfid *)NULL)))
    npc_clunk(fid);

  if(!(attrfid == ((struct Npcfid *)NULL)))
    npc_clunk(attrfid);

  return ret;
}

// npc_incref_fsys
// file fsys.c line 95
static void npc_incref_fsys(struct Npcfsys *fs)
{
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&fs->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "fsys.c", 97);

  }
  while((_Bool)0);
  fs->refcount = fs->refcount + 1;
  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&fs->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "fsys.c", 99);

  }
  while((_Bool)0);
}

// npc_incref_fsys_link1
// file mtfsys.c line 156
static void npc_incref_fsys_link1(struct Npcfsys *fs_link1)
{
  do
  {
    signed int pthread_mutex_lock_result_link1;
    pthread_mutex_lock_result_link1=pthread_mutex_lock(&fs_link1->lock);
    if(!(pthread_mutex_lock_result_link1 == 0))
      np_assfail("pthread_mutex_lock_result == 0", "mtfsys.c", 158);

  }
  while((_Bool)0);
  fs_link1->refcount = fs_link1->refcount + 1;
  do
  {
    signed int pthread_mutex_unlock_result_link1;
    pthread_mutex_unlock_result_link1=pthread_mutex_unlock(&fs_link1->lock);
    if(!(pthread_mutex_unlock_result_link1 == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "mtfsys.c", 160);

  }
  while((_Bool)0);
}

// npc_listxattr
// file xattr.c line 93
signed long int npc_listxattr(struct Npcfid *root, char *path, char *buf, unsigned long int size)
{
  struct Npcfid *fid = (struct Npcfid *)(void *)0;
  struct Npcfid *attrfid = (struct Npcfid *)(void *)0;
  signed long int ret = (signed long int)-1;
  unsigned long int n;
  unsigned long int tot;
  fid=npc_walk(root, path);
  if(!(fid == ((struct Npcfid *)NULL)))
  {
    attrfid=npc_fid_alloc(fid->fsys);
    if(!(attrfid == ((struct Npcfid *)NULL)))
    {
      ret=npc_xattrwalk(fid, attrfid, (char *)(void *)0);
      if(ret >= 0l)
      {
        if(!(buf == ((char *)NULL)) && !(size == 0ul))
        {
          if(!(size >= (unsigned long int)ret))
            np_uerror((unsigned long int)34);

          else
          {
            tot = (unsigned long int)0;
            while(!(tot >= size))
            {
              signed int return_value_npc_read_1;
              return_value_npc_read_1=npc_read(attrfid, (void *)(buf + (signed long int)tot), (unsigned int)(size - tot));
              n = (unsigned long int)return_value_npc_read_1;
              if(!(n >= 1ul))
                break;

              tot = tot + n;
            }
            ret = (signed long int)tot;
          }
        }

      }

    }

  }


done:
  ;
  if(!(fid == ((struct Npcfid *)NULL)))
    npc_clunk(fid);

  if(!(attrfid == ((struct Npcfid *)NULL)))
    npc_clunk(attrfid);

  return ret;
}

// npc_lseek
// file open.c line 151
unsigned long int npc_lseek(struct Npcfid *fid, unsigned long int offset, signed int whence)
{
  unsigned long int file_size = (unsigned long int)0;
  switch(whence)
  {
    case 0:
    {
      fid->offset = offset;
      break;
    }
    case 1:
    {
      fid->offset = fid->offset + offset;
      break;
    }
    case 2:
      fid->offset = file_size + offset;
  }
  return fid->offset;
}

// npc_mkdir
// file mkdir.c line 47
signed int npc_mkdir(struct Npcfid *fid, char *name, unsigned int mode)
{
  struct Npfcall *tc = (struct Npfcall *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  signed int ret = -1;
  unsigned int return_value_getegid_1;
  return_value_getegid_1=getegid();
  tc=np_create_tmkdir(fid->fid, name, mode, return_value_getegid_1);
  signed int return_value;
  if(tc == ((struct Npfcall *)NULL))
    np_uerror((unsigned long int)12);

  else
  {
    return_value=fid->fsys->rpc(fid->fsys, tc, &rc);
    if(return_value >= 0)
      ret = 0;

  }

done:
  ;
  if(!(tc == ((struct Npfcall *)NULL)))
    free((void *)tc);

  if(!(rc == ((struct Npfcall *)NULL)))
    free((void *)rc);

  return ret;
}

// npc_mkdir_bypath
// file mkdir.c line 68
signed int npc_mkdir_bypath(struct Npcfid *root, char *path, unsigned int mode)
{
  struct Npcfid *fid;
  char *cpy;
  char *dname;
  char *fname;
  cpy=strdup(path);
  if(cpy == ((char *)NULL))
  {
    np_uerror((unsigned long int)12);
    return -1;
  }

  else
  {
    dname=dirname(cpy);
    fid=npc_walk(root, dname);
    free((void *)cpy);
    if(fid == ((struct Npcfid *)NULL))
      return -1;

    else
    {
      cpy=strdup(path);
      if(cpy == ((char *)NULL))
      {
        npc_clunk(fid);
        np_uerror((unsigned long int)12);
        return -1;
      }

      else
      {
        fname=__xpg_basename(cpy);
        signed int return_value_npc_mkdir_2;
        return_value_npc_mkdir_2=npc_mkdir(fid, fname, mode);
        if(!(return_value_npc_mkdir_2 >= 0))
        {
          signed int saved_err;
          unsigned long int return_value_np_rerror_1;
          return_value_np_rerror_1=np_rerror();
          saved_err = (signed int)return_value_np_rerror_1;
          npc_clunk(fid);
          free((void *)cpy);
          np_uerror((unsigned long int)saved_err);
          return -1;
        }

        free((void *)cpy);
        signed int return_value_npc_clunk_3;
        return_value_npc_clunk_3=npc_clunk(fid);
        if(!(return_value_npc_clunk_3 >= 0))
          return -1;

        else
          return 0;
      }
    }
  }
}

// npc_mount
// file mount.c line 176
struct Npcfid * npc_mount(signed int rfd, signed int wfd, signed int msize, char *aname, signed int (*auth)(struct Npcfid *, unsigned int))
{
  struct Npcfsys *fs;
  struct Npcfid *afid;
  struct Npcfid *fid;
  signed int flags = 0;
  fs=npc_start(rfd, wfd, msize, flags);
  unsigned long int return_value_np_rerror_1;
  if(fs == ((struct Npcfsys *)NULL))
    return (struct Npcfid *)(void *)0;

  else
  {
    unsigned int return_value_geteuid_2;
    return_value_geteuid_2=geteuid();
    afid=npc_auth(fs, aname, return_value_geteuid_2, auth);
    if(afid == ((struct Npcfid *)NULL))
    {
      return_value_np_rerror_1=np_rerror();
      if(return_value_np_rerror_1 == 0ul)
        goto __CPROVER_DUMP_L2;

      npc_finish(fs);
      return (struct Npcfid *)(void *)0;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      unsigned int return_value_geteuid_4;
      return_value_geteuid_4=geteuid();
      fid=npc_attach(fs, afid, aname, return_value_geteuid_4);
      if(fid == ((struct Npcfid *)NULL))
      {
        signed int saved_err;
        unsigned long int return_value_np_rerror_3;
        return_value_np_rerror_3=np_rerror();
        saved_err = (signed int)return_value_np_rerror_3;
        if(!(afid == ((struct Npcfid *)NULL)))
          npc_clunk(afid);

        npc_finish(fs);
        np_uerror((unsigned long int)saved_err);
        return (struct Npcfid *)(void *)0;
      }

      if(!(afid == ((struct Npcfid *)NULL)))
        npc_clunk(afid);

      return fid;
    }
  }
}

// npc_open
// file open.c line 109
signed int npc_open(struct Npcfid *fid, unsigned int flags)
{
  signed int maxio = (signed int)(fid->fsys->msize - (unsigned int)24);
  struct Npfcall *tc = (struct Npfcall *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  signed int ret = -1;
  tc=np_create_tlopen(fid->fid, flags);
  signed int return_value;
  _Bool tmp_if_expr_1;
  if(tc == ((struct Npfcall *)NULL))
    np_uerror((unsigned long int)12);

  else
  {
    return_value=fid->fsys->rpc(fid->fsys, tc, &rc);
    if(return_value >= 0)
    {
      fid->iounit = rc->u.rlopen.iounit;
      if(fid->iounit == 0u)
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = fid->iounit > (unsigned int)maxio ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
        fid->iounit = (unsigned int)maxio;

      fid->offset = (unsigned long int)0;
      ret = 0;
    }

  }

done:
  ;
  if(!(tc == ((struct Npfcall *)NULL)))
    free((void *)tc);

  if(!(rc == ((struct Npfcall *)NULL)))
    free((void *)rc);

  return ret;
}

// npc_open_bypath
// file open.c line 135
struct Npcfid * npc_open_bypath(struct Npcfid *root, char *path, unsigned int flags)
{
  struct Npcfid *fid;
  fid=npc_walk(root, path);
  if(fid == ((struct Npcfid *)NULL))
    return (struct Npcfid *)(void *)0;

  else
  {
    signed int return_value_npc_open_2;
    return_value_npc_open_2=npc_open(fid, flags);
    if(!(return_value_npc_open_2 >= 0))
    {
      signed int saved_err;
      unsigned long int return_value_np_rerror_1;
      return_value_np_rerror_1=np_rerror();
      saved_err = (signed int)return_value_np_rerror_1;
      npc_clunk(fid);
      np_uerror((unsigned long int)saved_err);
      return (struct Npcfid *)(void *)0;
    }

    return fid;
  }
}

// npc_opendir
// file readdir.c line 74
struct Npcfid * npc_opendir(struct Npcfid *root, char *path)
{
  struct Npcfid *fid = (struct Npcfid *)(void *)0;
  struct stat sb;
  fid=npc_open_bypath(root, path, (unsigned int)00);
  if(!(fid == ((struct Npcfid *)NULL)))
  {
    signed int return_value_npc_fstat_1;
    return_value_npc_fstat_1=npc_fstat(fid, &sb);
    if(!(return_value_npc_fstat_1 >= 0))
      goto error;

    if(!((61440u & sb.st_mode) == 16384u))
    {
      np_uerror((unsigned long int)20);
      goto error;
    }

    fid->buf_size = (signed int)(root->fsys->msize - (unsigned int)24);
    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)fid->buf_size);
    fid->buf = (char *)return_value_malloc_2;
    if(fid->buf == ((char *)NULL))
    {
      npc_clunk(fid);
      np_uerror((unsigned long int)12);
      fid = (struct Npcfid *)(void *)0;
    }

    fid->offset = (unsigned long int)0;
    fid->buf_len = 0;
    fid->buf_used = 0;
  }

  return fid;

error:
  ;
  if(!(fid == ((struct Npcfid *)NULL)))
    npc_clunk(fid);

  return (struct Npcfid *)(void *)0;
}

// npc_pread
// file read.c line 47
signed int npc_pread(struct Npcfid *fid, void *buf, unsigned int count, unsigned long int offset)
{
  signed int maxio = (signed int)(fid->fsys->msize - (unsigned int)24);
  struct Npfcall *tc = (struct Npfcall *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  signed int ret = -1;
  if(!((unsigned int)maxio >= count))
    count = (unsigned int)maxio;

  tc=np_create_tread(fid->fid, offset, count);
  signed int return_value;
  if(tc == ((struct Npfcall *)NULL))
    np_uerror((unsigned long int)12);

  else
  {
    return_value=fid->fsys->rpc(fid->fsys, tc, &rc);
    if(return_value >= 0)
    {
      memmove(buf, (const void *)rc->u.rread.data, (unsigned long int)rc->u.rread.count);
      ret = (signed int)rc->u.rread.count;
    }

  }

done:
  ;
  if(!(rc == ((struct Npfcall *)NULL)))
    free((void *)rc);

  if(!(tc == ((struct Npfcall *)NULL)))
    free((void *)tc);

  return ret;
}

// npc_put
// file write.c line 82
signed int npc_put(struct Npcfid *root, char *path, void *buf, unsigned int count)
{
  signed int n;
  signed int done = 0;
  struct Npcfid *fid;
  fid=npc_open_bypath(root, path, (unsigned int)01);
  if(fid == ((struct Npcfid *)NULL))
    return -1;

  else
  {
    for( ; !((unsigned int)done >= count); done = done + n)
    {
      n=npc_write(fid, buf + (signed long int)done, count - (unsigned int)done);
      if(!(n >= 0))
      {
        done = -1;
        break;
      }

    }
    signed int return_value_npc_clunk_1;
    return_value_npc_clunk_1=npc_clunk(fid);
    if(!(return_value_npc_clunk_1 >= 0))
      done = -1;

    return done;
  }
}

// npc_put_id
// file npcimpl.h line 93
void npc_put_id(struct Npcpool *p, unsigned int id)
{
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&p->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "pool.c", 158);

  }
  while((_Bool)0);
  p->map[(signed long int)(id / (unsigned int)8)] = p->map[(signed long int)(id / (unsigned int)8)] & (unsigned char)~(1 << id % (unsigned int)8);
  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&p->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "pool.c", 160);

  }
  while((_Bool)0);
  pthread_cond_broadcast(&p->cond);
}

// npc_puts
// file ../libnpclient/npclient.h line 236
signed int npc_puts(struct Npcfid *fid, char *buf)
{
  signed int n;
  signed int count;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(buf);
  count = (signed int)return_value_strlen_1;
  signed int done = 0;
  for( ; !(done >= count); done = done + n)
  {
    n=npc_write(fid, (void *)(buf + (signed long int)done), (unsigned int)(count - done));
    if(!(n >= 0))
    {
      done = -1;
      break;
    }

  }
  return done;
}

// npc_pwrite
// file write.c line 47
signed int npc_pwrite(struct Npcfid *fid, void *buf, unsigned int count, unsigned long int offset)
{
  signed int maxio = (signed int)(fid->fsys->msize - (unsigned int)24);
  struct Npfcall *tc = (struct Npfcall *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  signed int ret = -1;
  if(!((unsigned int)maxio >= count))
    count = (unsigned int)maxio;

  tc=np_create_twrite(fid->fid, offset, count, (unsigned char *)buf);
  signed int return_value;
  if(tc == ((struct Npfcall *)NULL))
    np_uerror((unsigned long int)12);

  else
  {
    return_value=fid->fsys->rpc(fid->fsys, tc, &rc);
    if(return_value >= 0)
      ret = (signed int)rc->u.rwrite.count;

  }

done:
  ;
  if(!(tc == ((struct Npfcall *)NULL)))
    free((void *)tc);

  if(!(rc == ((struct Npfcall *)NULL)))
    free((void *)rc);

  return ret;
}

// npc_read
// file read.c line 73
signed int npc_read(struct Npcfid *fid, void *buf, unsigned int count)
{
  signed int ret;
  ret=npc_pread(fid, buf, count, fid->offset);
  if(ret >= 1)
    fid->offset = fid->offset + (unsigned long int)ret;

  return ret;
}

// npc_read_proc
// file mtfsys.c line 289
static void * npc_read_proc(void *a)
{
  struct Npcfsys *fs = (struct Npcfsys *)a;
  struct Npfcall *fc = (struct Npfcall *)(void *)0;
  struct Npcreq *req;
  struct Npcreq *req1;
  struct Npcreq *unsent;
  struct Npcreq *pend;
  struct Npcreq *preq;
  while(!(fs->trans == ((struct Nptrans *)NULL)))
  {
    signed int return_value_np_trans_recv_1;
    return_value_np_trans_recv_1=np_trans_recv(fs->trans, &fc, fs->msize);
    if(!(return_value_np_trans_recv_1 >= 0))
      break;

    if(fc == ((struct Npfcall *)NULL))
      break;

    do
    {
      signed int npc_read_proc__1__1__1__pthread_mutex_lock_result;
      npc_read_proc__1__1__1__pthread_mutex_lock_result=pthread_mutex_lock(&fs->lock);
      if(!(npc_read_proc__1__1__1__pthread_mutex_lock_result == 0))
        np_assfail("pthread_mutex_lock_result == 0", "mtfsys.c", 301);

    }
    while((_Bool)0);
    preq = (struct Npcreq *)(void *)0;
    req = fs->pend_first;
    for( ; !(req == ((struct Npcreq *)NULL)); req = req->next)
    {
      if(req->tag == fc->tag)
      {
        if(!(preq == ((struct Npcreq *)NULL)))
          preq->next = req->next;

        else
          fs->pend_first = req->next;
        do
        {
          signed int pthread_mutex_unlock_result;
          pthread_mutex_unlock_result=pthread_mutex_unlock(&fs->lock);
          if(!(pthread_mutex_unlock_result == 0))
            np_assfail("pthread_mutex_unlock_result == 0", "mtfsys.c", 310);

        }
        while((_Bool)0);
        req->rc = fc;
        if((signed int)fc->type == 7)
          req->ecode = (signed int)fc->u.rlerror.ecode;

        else
          if(!((signed int)fc->type == 1 + (signed int)req->tc->type))
            req->ecode = 5;

        fc = (struct Npfcall *)(void *)0;
        if(!(req->cb == ((void (*)(struct Npcreq *, void *))NULL)))
          req->cb(req, req->cba);

        if(req->flushed == 0)
          npc_put_id(fs->tagpool, (unsigned int)req->tag);

        npc_reqfree(req);
        break;
      }

      preq = req;
    }
    if(req == ((struct Npcreq *)NULL))
    {
      do
      {
        signed int npc_read_proc__1__1__3__1__pthread_mutex_unlock_result;
        npc_read_proc__1__1__3__1__pthread_mutex_unlock_result=pthread_mutex_unlock(&fs->lock);
        if(!(npc_read_proc__1__1__3__1__pthread_mutex_unlock_result == 0))
          np_assfail("pthread_mutex_unlock_result == 0", "mtfsys.c", 329);

      }
      while((_Bool)0);
      free((void *)fc);
      fc = (struct Npfcall *)(void *)0;
    }

  }
  if(!(fc == ((struct Npfcall *)NULL)))
    free((void *)fc);

  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&fs->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "mtfsys.c", 336);

  }
  while((_Bool)0);
  unsent = fs->unsent_first;
  fs->unsent_first = (struct Npcreq *)(void *)0;
  pend = fs->pend_first;
  fs->pend_first = (struct Npcreq *)(void *)0;
  if(!(fs->trans == ((struct Nptrans *)NULL)))
    np_trans_destroy(fs->trans);

  fs->trans = (struct Nptrans *)(void *)0;
  do
  {
    signed int npc_read_proc__1__3__pthread_mutex_unlock_result;
    npc_read_proc__1__3__pthread_mutex_unlock_result=pthread_mutex_unlock(&fs->lock);
    if(!(npc_read_proc__1__3__pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "mtfsys.c", 344);

  }
  while((_Bool)0);
  req = unsent;
  for( ; !(req == ((struct Npcreq *)NULL)); req = req1)
  {
    req->ecode = 103;
    req1 = req->next;
    if(!(req->cb == ((void (*)(struct Npcreq *, void *))NULL)))
      req->cb(req, req->cba);

    npc_reqfree(req);
  }
  req = pend;
  for( ; !(req == ((struct Npcreq *)NULL)); req = req1)
  {
    req->ecode = 103;
    req1 = req->next;
    if(!(req->cb == ((void (*)(struct Npcreq *, void *))NULL)))
      req->cb(req, req->cba);

    npc_reqfree(req);
  }
  return (void *)0;
}

// npc_readdir
// file readdir.c line 51
signed int npc_readdir(struct Npcfid *fid, unsigned long int offset, char *data, unsigned int count)
{
  struct Npfcall *tc = (struct Npfcall *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  signed int ret = -1;
  tc=np_create_treaddir(fid->fid, offset, count);
  signed int return_value;
  if(tc == ((struct Npfcall *)NULL))
    np_uerror((unsigned long int)12);

  else
  {
    return_value=fid->fsys->rpc(fid->fsys, tc, &rc);
    if(return_value >= 0)
    {
      if(!(count >= rc->u.rreaddir.count))
        np_assfail("rc->u.rreaddir.count <= count", "readdir.c", 62);

      memcpy((void *)data, (const void *)rc->u.rreaddir.data, (unsigned long int)rc->u.rreaddir.count);
      ret = (signed int)rc->u.rreaddir.count;
    }

  }

done:
  ;
  if(!(tc == ((struct Npfcall *)NULL)))
    free((void *)tc);

  if(!(rc == ((struct Npfcall *)NULL)))
    free((void *)rc);

  return ret;
}

// npc_readdir_r
// file readdir.c line 107
signed int npc_readdir_r(struct Npcfid *fid, struct dirent *entry, struct dirent **result)
{
  struct p9_qid qid;
  signed int dname_size = 4096 + 1;
  unsigned long int offset;
  unsigned char type;
  signed int res;
  unsigned long int return_value_np_rerror_1;
  if(fid->buf == ((char *)NULL))
    return 22;

  else
  {
    if(fid->buf_used >= fid->buf_len)
    {
      fid->buf_len=npc_readdir(fid, fid->offset, fid->buf, (unsigned int)fid->buf_size);
      if(!(fid->buf_len >= 0))
      {
        return_value_np_rerror_1=np_rerror();
        return (signed int)return_value_np_rerror_1;
      }

      if(fid->buf_len == 0)
      {
        *result = (struct dirent *)(void *)0;
        return 0;
      }

      fid->buf_used = 0;
    }

    res=np_deserialize_p9dirent(&qid, &offset, &type, entry->d_name, dname_size, (unsigned char *)fid->buf + (signed long int)fid->buf_used, fid->buf_len - fid->buf_used);
    if(res == 0)
      return 5;

    else
    {
      entry->d_off = (signed long int)offset;
      entry->d_type = type;
      entry->d_ino = qid.path;
      fid->offset = offset;
      fid->buf_used = fid->buf_used + res;
      *result = entry;
      return 0;
    }
  }
}

// npc_remove
// file remove.c line 47
signed int npc_remove(struct Npcfid *fid)
{
  struct Npfcall *tc = (struct Npfcall *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  signed int ret = -1;
  tc=np_create_tremove(fid->fid);
  signed int return_value;
  if(tc == ((struct Npfcall *)NULL))
    np_uerror((unsigned long int)12);

  else
  {
    return_value=fid->fsys->rpc(fid->fsys, tc, &rc);
    if(return_value >= 0)
      ret = 0;

  }

done:
  ;
  npc_fid_free(fid);
  if(!(tc == ((struct Npfcall *)NULL)))
    free((void *)tc);

  if(!(rc == ((struct Npfcall *)NULL)))
    free((void *)rc);

  return ret;
}

// npc_remove_bypath
// file remove.c line 69
signed int npc_remove_bypath(struct Npcfid *root, char *path)
{
  struct Npcfid *fid;
  fid=npc_walk(root, path);
  if(fid == ((struct Npcfid *)NULL))
    return -1;

  else
  {
    signed int return_value_npc_remove_1;
    return_value_npc_remove_1=npc_remove(fid);
    if(!(return_value_npc_remove_1 >= 0))
      return -1;

    else
      return 0;
  }
}

// npc_reqalloc
// file mtfsys.c line 517
static struct Npcreq * npc_reqalloc()
{
  struct Npcreq *req;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct Npcreq) /*80ul*/ );
  req = (struct Npcreq *)return_value_malloc_1;
  if(req == ((struct Npcreq *)NULL))
  {
    np_uerror((unsigned long int)12);
    return (struct Npcreq *)(void *)0;
  }

  else
  {
    req->fsys = (struct Npcfsys *)(void *)0;
    req->tag = (unsigned short int)~0;
    req->tc = (struct Npfcall *)(void *)0;
    req->rc = (struct Npfcall *)(void *)0;
    req->ecode = 0;
    req->cb = (void (*)(struct Npcreq *, void *))(void *)0;
    req->cba = (void *)0;
    req->next = (struct Npcreq *)(void *)0;
    req->prev = (struct Npcreq *)(void *)0;
    req->flushed = 0;
    return req;
  }
}

// npc_reqfree
// file mtfsys.c line 542
static void npc_reqfree(struct Npcreq *req)
{
  free((void *)req);
}

// npc_rpc
// file fsys.c line 130
static signed int npc_rpc(struct Npcfsys *fs, struct Npfcall *tc, struct Npfcall **rcp)
{
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  unsigned short int tag = (unsigned short int)~0;
  signed int n;
  signed int ret = -1;
  unsigned int return_value_npc_get_id_1;
  if(fs->trans == ((struct Nptrans *)NULL))
    np_uerror((unsigned long int)103);

  else
  {
    if(!((signed int)tc->type == 100))
    {
      return_value_npc_get_id_1=npc_get_id(fs->tagpool);
      tag = (unsigned short int)return_value_npc_get_id_1;
    }

    np_set_tag(tc, tag);
    do
    {
      signed int pthread_mutex_lock_result;
      pthread_mutex_lock_result=pthread_mutex_lock(&fs->lock);
      if(!(pthread_mutex_lock_result == 0))
        np_assfail("pthread_mutex_lock_result == 0", "fsys.c", 144);

    }
    while((_Bool)0);
    n=np_trans_send(fs->trans, tc);
    if(n >= 0)
      n=np_trans_recv(fs->trans, &rc, fs->msize);

    do
    {
      signed int pthread_mutex_unlock_result;
      pthread_mutex_unlock_result=pthread_mutex_unlock(&fs->lock);
      if(!(pthread_mutex_unlock_result == 0))
        np_assfail("pthread_mutex_unlock_result == 0", "fsys.c", 148);

    }
    while((_Bool)0);
    if(n >= 0)
    {
      if(rc == ((struct Npfcall *)NULL))
        np_uerror((unsigned long int)71);

      else
        if(!(tc->tag == rc->tag))
          np_uerror((unsigned long int)71);

        else
          if((signed int)rc->type == 7)
            np_uerror((unsigned long int)rc->u.rlerror.ecode);

          else
          {
            *rcp = rc;
            ret = 0;
          }
    }

  }

done:
  ;
  if(!(tag == 65535))
    npc_put_id(fs->tagpool, (unsigned int)tag);

  if(!(rc == ((struct Npfcall *)NULL)) && !(ret >= 0))
    free((void *)rc);

  return ret;
}

// npc_rpc_link1
// file mtfsys.c line 473
static signed int npc_rpc_link1(struct Npcfsys *fs_link1, struct Npfcall *tc_link1, struct Npfcall **rc)
{
  signed int n_link1;
  struct Npcrpc r;
  if(!(rc == ((struct Npfcall **)NULL)))
    *rc = (struct Npfcall *)(void *)0;

  r.ecode = (unsigned int)0;
  r.tc = tc_link1;
  r.rc = (struct Npfcall *)(void *)0;
  pthread_mutex_init(&r.lock, (const union anonymous_6 *)(void *)0);
  pthread_cond_init(&r.cond, (const union anonymous_6 *)(void *)0);
  n_link1=npc_rpcnb(fs_link1, tc_link1, npc_rpc_cb, (void *)&r);
  _Bool tmp_if_expr_1;
  if(!(n_link1 >= 0))
    return n_link1;

  else
  {
    do
    {
      signed int pthread_mutex_lock_result;
      pthread_mutex_lock_result=pthread_mutex_lock(&r.lock);
      if(!(pthread_mutex_lock_result == 0))
        np_assfail("pthread_mutex_lock_result == 0", "mtfsys.c", 491);

    }
    while((_Bool)0);
    while(r.rc == ((struct Npfcall *)NULL) && r.ecode == 0u)
      pthread_cond_wait(&r.cond, &r.lock);
    do
    {
      signed int pthread_mutex_unlock_result;
      pthread_mutex_unlock_result=pthread_mutex_unlock(&r.lock);
      if(!(pthread_mutex_unlock_result == 0))
        np_assfail("pthread_mutex_unlock_result == 0", "mtfsys.c", 494);

    }
    while((_Bool)0);
    if(r.rc == ((struct Npfcall *)NULL))
    {
      np_uerror((unsigned long int)71);
      return -1;
    }

    else
    {
      if(!(r.ecode == 0u))
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = (signed int)r.rc->type == 7 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
      {
        np_uerror((unsigned long int)r.ecode);
        free((void *)r.rc);
        return -1;
      }

      else
      {
        if(!(rc == ((struct Npfcall **)NULL)))
          *rc = r.rc;

        else
          free((void *)r.rc);
        return 0;
      }
    }
  }
}

// npc_rpc_cb
// file mtfsys.c line 460
static void npc_rpc_cb(struct Npcreq *req, void *cba)
{
  struct Npcrpc *r = (struct Npcrpc *)cba;
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&r->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "mtfsys.c", 465);

  }
  while((_Bool)0);
  r->ecode = (unsigned int)req->ecode;
  r->rc = req->rc;
  pthread_cond_broadcast(&r->cond);
  do
  {
    signed int pthread_mutex_unlock_result;
    pthread_mutex_unlock_result=pthread_mutex_unlock(&r->lock);
    if(!(pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "mtfsys.c", 469);

  }
  while((_Bool)0);
}

// npc_rpcnb
// file mtfsys.c line 421
static signed int npc_rpcnb(struct Npcfsys *fs, struct Npfcall *tc, void (*cb)(struct Npcreq *, void *), void *cba)
{
  struct Npcreq *req;
  if(fs->trans == ((struct Nptrans *)NULL))
  {
    np_uerror((unsigned long int)103);
    return -1;
  }

  else
  {
    req=npc_reqalloc();
    if(req == ((struct Npcreq *)NULL))
      return -1;

    else
    {
      if(!((signed int)tc->type == 100))
      {
        unsigned int return_value_npc_get_id_1;
        return_value_npc_get_id_1=npc_get_id(fs->tagpool);
        tc->tag = (unsigned short int)return_value_npc_get_id_1;
        np_set_tag(tc, tc->tag);
      }

      req->tag = tc->tag;
      req->tc = tc;
      req->cb = cb;
      req->cba = cba;
      do
      {
        signed int pthread_mutex_lock_result;
        pthread_mutex_lock_result=pthread_mutex_lock(&fs->lock);
        if(!(pthread_mutex_lock_result == 0))
          np_assfail("pthread_mutex_lock_result == 0", "mtfsys.c", 444);

      }
      while((_Bool)0);
      if(!(fs->unsent_last == ((struct Npcreq *)NULL)))
        fs->unsent_last->next = req;

      req->prev = fs->unsent_last;
      fs->unsent_last = req;
      if(fs->unsent_first == ((struct Npcreq *)NULL))
        fs->unsent_first = req;

      pthread_cond_broadcast(&fs->cond);
      do
      {
        signed int pthread_mutex_unlock_result;
        pthread_mutex_unlock_result=pthread_mutex_unlock(&fs->lock);
        if(!(pthread_mutex_unlock_result == 0))
          np_assfail("pthread_mutex_unlock_result == 0", "mtfsys.c", 454);

      }
      while((_Bool)0);
      return 0;
    }
  }
}

// npc_seekdir
// file readdir.c line 146
void npc_seekdir(struct Npcfid *fid, signed long int offset)
{
  fid->offset = (unsigned long int)offset;
  fid->buf_used = fid->buf_len;
}

// npc_setattr
// file chmod.c line 49
signed int npc_setattr(struct Npcfid *fid, unsigned int valid, unsigned int mode, unsigned int uid, unsigned int gid, unsigned long int size, unsigned long int atime_sec, unsigned long int atime_nsec, unsigned long int mtime_sec, unsigned long int mtime_nsec)
{
  struct Npfcall *tc = (struct Npfcall *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  signed int ret = -1;
  tc=np_create_tsetattr(fid->fid, valid, mode, uid, gid, size, atime_sec, atime_nsec, mtime_sec, mtime_nsec);
  signed int return_value;
  if(tc == ((struct Npfcall *)NULL))
    np_uerror((unsigned long int)12);

  else
  {
    return_value=fid->fsys->rpc(fid->fsys, tc, &rc);
    if(return_value >= 0)
      ret = 0;

  }

done:
  ;
  if(!(tc == ((struct Npfcall *)NULL)))
    free((void *)tc);

  if(!(rc == ((struct Npfcall *)NULL)))
    free((void *)rc);

  return ret;
}

// npc_setxattr
// file xattr.c line 165
signed int npc_setxattr(struct Npcfid *root, char *path, char *name, char *val, unsigned long int size, signed int flags)
{
  struct Npcfid *fid = (struct Npcfid *)(void *)0;
  signed int n;
  signed int tot = 0;
  signed int ret = -1;
  fid=npc_walk(root, path);
  signed int return_value_npc_xattrcreate_1;
  if(!(fid == ((struct Npcfid *)NULL)))
  {
    return_value_npc_xattrcreate_1=npc_xattrcreate(fid, name, size, (unsigned int)flags);
    if(return_value_npc_xattrcreate_1 >= 0)
    {
      tot = 0;
      for( ; !((unsigned long int)tot >= size); tot = tot + n)
      {
        n=npc_write(fid, (void *)(val + (signed long int)tot), (unsigned int)(size - (unsigned long int)tot));
        if(!(n >= 0))
          goto done;

      }
      ret = 0;
    }

  }


done:
  ;
  if(!(fid == ((struct Npcfid *)NULL)))
    ret=npc_clunk(fid);

  return ret;
}

// npc_start
// file ../libnpclient/npclient.h line 61
struct Npcfsys * npc_start(signed int rfd, signed int wfd, signed int msize, signed int flags)
{
  struct Npcfsys *fs;
  struct Npfcall *tc = (struct Npfcall *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  if(!((1 & flags) == 0))
    fs=npc_create_mtfsys(rfd, wfd, msize, flags);

  else
    fs=npc_create_fsys(rfd, wfd, msize, flags);
  signed int return_value;
  signed int return_value_np_strcmp_1;
  if(!(fs == ((struct Npcfsys *)NULL)))
  {
    tc=np_create_tversion((unsigned int)msize, "9P2000.L");
    if(tc == ((struct Npfcall *)NULL))
      np_uerror((unsigned long int)12);

    else
    {
      return_value=fs->rpc(fs, tc, &rc);
      if(return_value >= 0)
      {
        if(!(rc->u.rversion.msize >= (unsigned int)msize))
          fs->msize = rc->u.rversion.msize;

        return_value_np_strcmp_1=np_strcmp(&rc->u.rversion.version, "9P2000.L");
        if(!(return_value_np_strcmp_1 == 0))
          np_uerror((unsigned long int)5);

      }

    }
  }


done:
  ;
  if(!(tc == ((struct Npfcall *)NULL)))
    free((void *)tc);

  if(!(rc == ((struct Npfcall *)NULL)))
    free((void *)rc);

  unsigned long int return_value_np_rerror_2;
  return_value_np_rerror_2=np_rerror();
  if(!(return_value_np_rerror_2 == 0ul))
  {
    if(!(fs == ((struct Npcfsys *)NULL)))
    {
      npc_finish(fs);
      fs = (struct Npcfsys *)(void *)0;
    }

  }

  return fs;
}

// npc_stat
// file stat.c line 133
signed int npc_stat(struct Npcfid *root, char *path, struct stat *sb)
{
  struct Npcfid *fid;
  fid=npc_walk(root, path);
  if(fid == ((struct Npcfid *)NULL))
    return -1;

  else
  {
    signed int return_value_npc_fstat_2;
    return_value_npc_fstat_2=npc_fstat(fid, sb);
    if(!(return_value_npc_fstat_2 >= 0))
    {
      signed int saved_err;
      unsigned long int return_value_np_rerror_1;
      return_value_np_rerror_1=np_rerror();
      saved_err = (signed int)return_value_np_rerror_1;
      npc_clunk(fid);
      np_uerror((unsigned long int)saved_err);
      return -1;
    }

    signed int return_value_npc_clunk_3;
    return_value_npc_clunk_3=npc_clunk(fid);
    if(!(return_value_npc_clunk_3 >= 0))
      return -1;

    else
      return 0;
  }
}

// npc_telldir
// file readdir.c line 153
signed long int npc_telldir(struct Npcfid *fid)
{
  return (signed long int)fid->offset;
}

// npc_truncate
// file chmod.c line 137
signed int npc_truncate(struct Npcfid *root, char *path, signed long int length)
{
  struct Npcfid *fid;
  fid=npc_walk(root, path);
  if(fid == ((struct Npcfid *)NULL))
    return -1;

  else
  {
    signed int return_value_npc_ftruncate_2;
    return_value_npc_ftruncate_2=npc_ftruncate(fid, length);
    if(!(return_value_npc_ftruncate_2 >= 0))
    {
      signed int saved_err;
      unsigned long int return_value_np_rerror_1;
      return_value_np_rerror_1=np_rerror();
      saved_err = (signed int)return_value_np_rerror_1;
      npc_clunk(fid);
      np_uerror((unsigned long int)saved_err);
      return -1;
    }

    signed int return_value_npc_clunk_3;
    return_value_npc_clunk_3=npc_clunk(fid);
    if(!(return_value_npc_clunk_3 >= 0))
      return -1;

    else
      return 0;
  }
}

// npc_umount
// file mount.c line 203
void npc_umount(struct Npcfid *fid)
{
  struct Npcfsys *fs = fid->fsys;
  npc_clunk(fid);
  npc_finish(fs);
}

// npc_utime
// file chmod.c line 175
signed int npc_utime(struct Npcfid *root, char *path, struct utimbuf *times)
{
  struct Npcfid *fid;
  fid=npc_walk(root, path);
  if(fid == ((struct Npcfid *)NULL))
    return -1;

  else
  {
    signed int return_value_npc_futime_2;
    return_value_npc_futime_2=npc_futime(fid, times);
    if(!(return_value_npc_futime_2 >= 0))
    {
      signed int saved_err;
      unsigned long int return_value_np_rerror_1;
      return_value_np_rerror_1=np_rerror();
      saved_err = (signed int)return_value_np_rerror_1;
      npc_clunk(fid);
      np_uerror((unsigned long int)saved_err);
      return -1;
    }

    signed int return_value_npc_clunk_3;
    return_value_npc_clunk_3=npc_clunk(fid);
    if(!(return_value_npc_clunk_3 >= 0))
      return -1;

    else
      return 0;
  }
}

// npc_walk
// file npclient.h line 117
struct Npcfid * npc_walk(struct Npcfid *nfid, char *path)
{
  signed int n;
  char *fname;
  char *s;
  char *t = (char *)(void *)0;
  char *wnames[16l];
  struct Npfcall *tc = (struct Npfcall *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  struct Npcfid *fid = (struct Npcfid *)(void *)0;
  struct Npcfid *return_value_npc_clone_1;
  signed int tmp_post_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_5;
  if(path == ((char *)NULL))
  {
    return_value_npc_clone_1=npc_clone(nfid);
    return return_value_npc_clone_1;
  }

  else
  {
    for( ; (signed int)*path == 47; path = path + 1l)
      ;
    fname=strdup(path);
    if(fname == ((char *)NULL))
      np_uerror((unsigned long int)12);

    else
    {
      fid=npc_fid_alloc(nfid->fsys);
      if(!(fid == ((struct Npcfid *)NULL)))
      {
        s = fname;
        {
          n = 0;
          while(!(n >= 16))
          {
            if((signed int)*s == 0)
              break;

            if((signed int)*s == 47)
              s = s + 1l;

            else
            {
              tmp_post_2 = n;
              n = n + 1;
              wnames[(signed long int)tmp_post_2] = s;
              t=strchr(s, 47);
              if(t == ((char *)NULL))
                break;

              *t = (char)0;
              s = t + (signed long int)1;
            }
          }
          tc=np_create_twalk(nfid->fid, fid->fid, (unsigned short int)n, wnames);
          if(tc == ((struct Npfcall *)NULL))
          {
            np_uerror((unsigned long int)12);
            goto error;
          }

          signed int return_value;
          return_value=nfid->fsys->rpc(nfid->fsys, tc, &rc);
          nfid = fid;
          if(!((signed int)rc->u.rwalk.nwqid == n))
            np_uerror((unsigned long int)2);

          free((void *)tc);
          free((void *)rc);
          if(t == ((char *)NULL))
            tmp_if_expr_3 = (_Bool)1;

          else
            tmp_if_expr_3 = (signed int)*s == 0 ? (_Bool)1 : (_Bool)0;
        }
        free((void *)fname);
        return fid;
      }

    }

  error:
    ;
    if(!(rc == ((struct Npfcall *)NULL)))
      free((void *)rc);

    if(!(tc == ((struct Npfcall *)NULL)))
      free((void *)tc);

    if(!(fid == ((struct Npcfid *)NULL)))
      tmp_if_expr_5 = nfid->fid == fid->fid ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_5 = (_Bool)0;
    if(tmp_if_expr_5)
    {
      signed int saved_err;
      unsigned long int return_value_np_rerror_4;
      return_value_np_rerror_4=np_rerror();
      saved_err = (signed int)return_value_np_rerror_4;
      npc_clunk(fid);
      np_uerror((unsigned long int)saved_err);
    }

    else
      if(!(fid == ((struct Npcfid *)NULL)))
        npc_fid_free(fid);

    if(!(fname == ((char *)NULL)))
      free((void *)fname);

    return (struct Npcfid *)(void *)0;
  }
}

// npc_write
// file write.c line 71
signed int npc_write(struct Npcfid *fid, void *buf, unsigned int count)
{
  signed int ret;
  ret=npc_pwrite(fid, buf, count, fid->offset);
  if(ret >= 1)
    fid->offset = fid->offset + (unsigned long int)ret;

  return ret;
}

// npc_write_proc
// file mtfsys.c line 374
static void * npc_write_proc(void *a)
{
  signed int n;
  struct Npcreq *req;
  struct Npcfsys *fs = (struct Npcfsys *)a;
  do
  {
    signed int pthread_mutex_lock_result;
    pthread_mutex_lock_result=pthread_mutex_lock(&fs->lock);
    if(!(pthread_mutex_lock_result == 0))
      np_assfail("pthread_mutex_lock_result == 0", "mtfsys.c", 381);

  }
  while((_Bool)0);
  while(!(fs->trans == ((struct Nptrans *)NULL)))
    if(fs->unsent_first == ((struct Npcreq *)NULL))
      pthread_cond_wait(&fs->cond, &fs->lock);

    else
    {
      req = fs->unsent_first;
      fs->unsent_first = req->next;
      req->prev = (struct Npcreq *)(void *)0;
      if(fs->unsent_last == req)
        fs->unsent_last = (struct Npcreq *)(void *)0;

      req->prev = (struct Npcreq *)(void *)0;
      req->next = fs->pend_first;
      if(!(fs->pend_first == ((struct Npcreq *)NULL)))
        fs->pend_first->prev = req;

      fs->pend_first = req;
      do
      {
        signed int pthread_mutex_unlock_result;
        pthread_mutex_unlock_result=pthread_mutex_unlock(&fs->lock);
        if(!(pthread_mutex_unlock_result == 0))
          np_assfail("pthread_mutex_unlock_result == 0", "mtfsys.c", 400);

      }
      while((_Bool)0);
      if(!(fs->trans == ((struct Nptrans *)NULL)))
      {
        n=np_trans_send(fs->trans, req->tc);
        if(!(n >= 0))
        {
          do
          {
            signed int npc_write_proc__1__2__3__1__1__pthread_mutex_lock_result;
            npc_write_proc__1__2__3__1__1__pthread_mutex_lock_result=pthread_mutex_lock(&fs->lock);
            if(!(npc_write_proc__1__2__3__1__1__pthread_mutex_lock_result == 0))
              np_assfail("pthread_mutex_lock_result == 0", "mtfsys.c", 405);

          }
          while((_Bool)0);
          if(!(fs->trans == ((struct Nptrans *)NULL)))
            np_trans_destroy(fs->trans);

          fs->trans = (struct Nptrans *)(void *)0;
          do
          {
            signed int npc_write_proc__1__2__3__1__2__pthread_mutex_unlock_result;
            npc_write_proc__1__2__3__1__2__pthread_mutex_unlock_result=pthread_mutex_unlock(&fs->lock);
            if(!(npc_write_proc__1__2__3__1__2__pthread_mutex_unlock_result == 0))
              np_assfail("pthread_mutex_unlock_result == 0", "mtfsys.c", 409);

          }
          while((_Bool)0);
        }

      }

      do
      {
        signed int npc_write_proc__1__2__4__pthread_mutex_lock_result;
        npc_write_proc__1__2__4__pthread_mutex_lock_result=pthread_mutex_lock(&fs->lock);
        if(!(npc_write_proc__1__2__4__pthread_mutex_lock_result == 0))
          np_assfail("pthread_mutex_lock_result == 0", "mtfsys.c", 413);

      }
      while((_Bool)0);
    }
  do
  {
    signed int npc_write_proc__1__3__pthread_mutex_unlock_result;
    npc_write_proc__1__3__pthread_mutex_unlock_result=pthread_mutex_unlock(&fs->lock);
    if(!(npc_write_proc__1__3__pthread_mutex_unlock_result == 0))
      np_assfail("pthread_mutex_unlock_result == 0", "mtfsys.c", 416);

  }
  while((_Bool)0);
  return (void *)0;
}

// npc_xattrcreate
// file xattr.c line 72
signed int npc_xattrcreate(struct Npcfid *fid, char *name, unsigned long int attr_size, unsigned int flags)
{
  struct Npfcall *tc = (struct Npfcall *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  signed int ret = -1;
  tc=np_create_txattrcreate(fid->fid, name, attr_size, flags);
  signed int return_value;
  if(tc == ((struct Npfcall *)NULL))
    np_uerror((unsigned long int)12);

  else
  {
    return_value=fid->fsys->rpc(fid->fsys, tc, &rc);
    if(return_value >= 0)
      ret = 0;

  }

done:
  ;
  if(!(tc == ((struct Npfcall *)NULL)))
    free((void *)tc);

  if(!(rc == ((struct Npfcall *)NULL)))
    free((void *)rc);

  return ret;
}

// npc_xattrwalk
// file xattr.c line 51
signed long int npc_xattrwalk(struct Npcfid *fid, struct Npcfid *attrfid, char *name)
{
  struct Npfcall *tc = (struct Npfcall *)(void *)0;
  struct Npfcall *rc = (struct Npfcall *)(void *)0;
  signed long int ret = (signed long int)-1;
  tc=np_create_txattrwalk(fid->fid, attrfid->fid, name);
  signed int return_value;
  if(tc == ((struct Npfcall *)NULL))
    np_uerror((unsigned long int)12);

  else
  {
    return_value=fid->fsys->rpc(fid->fsys, tc, &rc);
    if(return_value >= 0)
      ret = (signed long int)rc->u.rxattrwalk.size;

  }

done:
  ;
  if(!(tc == ((struct Npfcall *)NULL)))
    free((void *)tc);

  if(!(rc == ((struct Npfcall *)NULL)))
    free((void *)rc);

  return ret;
}

// opt_addf
// file opt.h line 9
signed int opt_addf(struct opt_struct *o, const char *fmt, ...)
{
  void **ap;
  char *csv;
  char *item;
  char *cpy;
  char *saveptr = (char *)(void *)0;
  signed int error;
  if(!(o->magic == 0x54545344))
    np_assfail("o->magic == OPT_MAGIC", "../../utils/opt.c", 129);

  ap = (void **)&fmt;
  error=vasprintf(&csv, fmt, ap);
  ap = ((void **)NULL);
  if(!(error >= 0))
    msg_exit("out of memory");

  item=strtok_r(csv, ",", &saveptr);
  while(!(item == ((char *)NULL)))
  {
    cpy=strdup(item);
    if(cpy == ((char *)NULL))
      msg_exit("out of memory");

    list_delete_all(o->list, (signed int (*)(void *, void *))_match_key, (void *)cpy);
    void *return_value_list_append_1;
    return_value_list_append_1=list_append(o->list, (void *)cpy);
    if(return_value_list_append_1 == NULL)
      msg_exit("out of memory");

    item=strtok_r((char *)(void *)0, ",", &saveptr);
  }
  free((void *)csv);
  return 1;
}

// opt_check_allowed_csv
// file opt.h line 19
signed int opt_check_allowed_csv(struct opt_struct *o, const char *csv)
{
  struct opt_struct *allow;
  struct listIterator *itr;
  char *item;
  char *cpy;
  char *p;
  signed int ret = 0;
  if(!(o->magic == 0x54545344))
    np_assfail("o->magic == OPT_MAGIC", "../../utils/opt.c", 231);

  allow=opt_create();
  opt_addf(allow, "%s", csv);
  itr=list_iterator_create(o->list);
  if(itr == ((struct listIterator *)NULL))
    msg_exit("out of memory");

  void *return_value_list_next_1;
  do
  {
    return_value_list_next_1=list_next(itr);
    item = (char *)return_value_list_next_1;
    if(item == ((char *)NULL))
      break;

    cpy=strdup(item);
    if(cpy == ((char *)NULL))
      msg_exit("out of memory");

    p=strchr(cpy, 61);
    if(!(p == ((char *)NULL)))
      *p = (char)0;

    char *return_value_opt_find_2;
    return_value_opt_find_2=opt_find(allow, cpy);
    if(return_value_opt_find_2 == ((char *)NULL))
    {
      ret = 1;
      free((void *)cpy);
      break;
    }

    free((void *)cpy);
  }
  while((_Bool)1);
  list_iterator_destroy(itr);
  opt_destroy(allow);
  return ret;
}

// opt_create
// file opt.h line 3
struct opt_struct * opt_create(void)
{
  struct opt_struct *o;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct opt_struct) /*16ul*/ );
  o = (struct opt_struct *)return_value_malloc_1;
  if(o == ((struct opt_struct *)NULL))
    msg_exit("out of memory");

  o->magic = 0x54545344;
  o->list=list_create((void (*)(void *))free);
  if(o->list == ((struct list *)NULL))
    msg_exit("out of memory");

  return o;
}

// opt_csv
// file opt.h line 7
char * opt_csv(struct opt_struct *o)
{
  struct listIterator *itr;
  char *item;
  char *s;
  signed int strsize = 1;
  signed int n;
  if(!(o->magic == 0x54545344))
    np_assfail("o->magic == OPT_MAGIC", "../../utils/opt.c", 85);

  itr=list_iterator_create(o->list);
  if(itr == ((struct listIterator *)NULL))
    msg_exit("out of memory");

  void *return_value_list_next_1;
  unsigned long int return_value_strlen_2;
  do
  {
    return_value_list_next_1=list_next(itr);
    item = (char *)return_value_list_next_1;
    if(item == ((char *)NULL))
      break;

    return_value_strlen_2=strlen(item);
    strsize = strsize + (signed int)(return_value_strlen_2 + (unsigned long int)1);
  }
  while((_Bool)1);
  list_iterator_reset(itr);
  signed int return_value_list_count_3;
  return_value_list_count_3=list_count(o->list);
  void *return_value_malloc_4;
  return_value_malloc_4=malloc((unsigned long int)((strsize + return_value_list_count_3) - 1));
  s = (char *)return_value_malloc_4;
  if(s == ((char *)NULL))
    msg_exit("out of memory");

  n = 0;
  void *return_value_list_next_5;
  do
  {
    return_value_list_next_5=list_next(itr);
    item = (char *)return_value_list_next_5;
    if(item == ((char *)NULL))
      break;

    snprintf(s + (signed long int)n, (unsigned long int)(strsize - n), "%s%s", n > 0 ? "," : "", item);
    unsigned long int return_value_strlen_6;
    return_value_strlen_6=strlen(s);
    n = (signed int)return_value_strlen_6;
  }
  while((_Bool)1);
  list_iterator_destroy(itr);
  return s;
}

// opt_delete
// file opt.h line 14
signed int opt_delete(struct opt_struct *o, char *key)
{
  if(!(o->magic == 0x54545344))
    np_assfail("o->magic == OPT_MAGIC", "../../utils/opt.c", 179);

  signed int return_value_list_delete_all_1;
  return_value_list_delete_all_1=list_delete_all(o->list, (signed int (*)(void *, void *))_match_key, (void *)key);
  return return_value_list_delete_all_1;
}

// opt_destroy
// file opt.h line 5
void opt_destroy(struct opt_struct *o)
{
  if(!(o->magic == 0x54545344))
    np_assfail("o->magic == OPT_MAGIC", "../../utils/opt.c", 56);

  if(!(o->list == ((struct list *)NULL)))
    list_destroy(o->list);

  free((void *)o);
}

// opt_find
// file opt.h line 12
char * opt_find(struct opt_struct *o, char *key)
{
  char *s;
  if(!(o->magic == 0x54545344))
    np_assfail("o->magic == OPT_MAGIC", "../../utils/opt.c", 164);

  char *return_value_strchr_3;
  return_value_strchr_3=strchr(key, 61);
  void *return_value_list_find_first_1;
  void *return_value_list_find_first_2;
  if(!(return_value_strchr_3 == ((char *)NULL)))
  {
    return_value_list_find_first_1=list_find_first(o->list, (signed int (*)(void *, void *))_match_keyval, (void *)key);
    s = (char *)return_value_list_find_first_1;
  }

  else
  {
    return_value_list_find_first_2=list_find_first(o->list, (signed int (*)(void *, void *))_match_key, (void *)key);
    s = (char *)return_value_list_find_first_2;
  }
  char *tmp_if_expr_5;
  char *return_value__optstr_4;
  if(!(s == ((char *)NULL)))
  {
    return_value__optstr_4=_optstr(s);
    tmp_if_expr_5 = return_value__optstr_4;
  }

  else
    tmp_if_expr_5 = (char *)(void *)0;
  return tmp_if_expr_5;
}

// opt_scanf
// file opt.h line 16
signed int opt_scanf(struct opt_struct *o, const char *fmt, ...)
{
  void **ap;
  signed int ret;
  ap = (void **)&fmt;
  ret=opt_vscanf(o, fmt, ap);
  ap = ((void **)NULL);
  return ret;
}

// opt_vscanf
// file ../../utils/opt.c line 185
signed int opt_vscanf(struct opt_struct *o, const char *fmt, void **ap)
{
  struct listIterator *itr;
  char *item;
  signed int ret = 0;
  if(!(o->magic == 0x54545344))
    np_assfail("o->magic == OPT_MAGIC", "../../utils/opt.c", 191);

  itr=list_iterator_create(o->list);
  if(itr == ((struct listIterator *)NULL))
    msg_exit("out of memory");

  void *return_value_list_next_1;
  do
  {
    return_value_list_next_1=list_next(itr);
    item = (char *)return_value_list_next_1;
    if(item == ((char *)NULL))
      break;

    void **vacpy = (void **)ap;
    ret=vsscanf(item, fmt, vacpy);
    vacpy = ((void **)NULL);
    if(ret >= 1)
      break;

  }
  while((_Bool)1);
  list_iterator_destroy(itr);
  return ret;
}

// readafid
// file diod_auth.c line 221
static signed int readafid(struct Npfid *afid, unsigned long int offset, unsigned int count, unsigned char *data)
{
  msg("readafid: called unexpectedly");
  np_uerror((unsigned long int)5);
  return -1;
}

// spf
// file npfs.h line 408
void spf(char *s, signed int len, const char *fmt, ...)
{
  void **ap;
  signed int n;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(s);
  n = (signed int)return_value_strlen_1;
  len = len - n;
  s = s + (signed long int)n;
  if(!(len >= 1))
    np_assfail("len > 0", "npstring.c", 146);

  ap = (void **)&fmt;
  vsnprintf(s, (unsigned long int)len, fmt, ap);
  ap = ((void **)NULL);
}

// startauth
// file diod_auth.c line 150
static signed int startauth(struct Npfid *afid, char *aname, struct p9_qid *aqid)
{
  signed int ret = 0;
  _Bool tmp_if_expr_1;
  if(afid == ((struct Npfid *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = afid->aux != (void *)0 ? (_Bool)1 : (_Bool)0;
  struct diod_auth_struct *return_value__da_create_2;
  if(aqid == ((struct p9_qid *)NULL) || tmp_if_expr_1)
  {
    msg("startauth: invalid arguments");
    np_uerror((unsigned long int)5);
  }

  else
  {
    return_value__da_create_2=_da_create();
    afid->aux = (void *)return_value__da_create_2;
    if(!(afid->aux == NULL))
    {
      aqid->path = (unsigned long int)0;
      aqid->type = (unsigned char)8;
      aqid->version = (unsigned int)0;
      ret = 1;
    }

  }

done:
  ;
  return ret;
}

// usage
// file diodmount.c line 114
static void usage(void)
{
  fprintf(stderr, "Usage: mount.diod [OPTIONS] host[:aname] directory\n   -f,--fake-mount               do everything but the actual mount\n   -n,--no-mtab                  do not update /etc/mtab\n   -v,--verbose                  verbose mode\n   -o,--options opt[,opt,...]    specify mount options\n");
  exit(1);
}

// vaspf
// file npstring.c line 94
static signed int vaspf(char **sp, signed int *lp, const char *fmt, void **ap)
{
  char *s = *sp;
  signed int len = *lp;
  signed int n;
  signed int ret = -1;
  signed int slen;
  unsigned long int tmp_if_expr_2;
  unsigned long int return_value_strlen_1;
  if(!(s == ((char *)NULL)))
  {
    return_value_strlen_1=strlen(s);
    tmp_if_expr_2 = return_value_strlen_1;
  }

  else
    tmp_if_expr_2 = (unsigned long int)0;
  slen = (signed int)tmp_if_expr_2;
  if(s == ((char *)NULL))
  {
    len = 80;
    void *return_value_malloc_3;
    return_value_malloc_3=malloc((unsigned long int)len);
    s = (char *)return_value_malloc_3;
    if(s == ((char *)NULL))
      goto done;

  }

  do
  {
    void **vacpy = (void **)ap;
    n=vsnprintf(s + (signed long int)slen, (unsigned long int)(len - slen), fmt, vacpy);
    vacpy = ((void **)NULL);
    if(!(n == -1) && !(n >= len + -slen))
      break;

    len = len + 80;
    void *return_value_realloc_4;
    return_value_realloc_4=realloc((void *)s, (unsigned long int)len);
    s = (char *)return_value_realloc_4;
    if(s == ((char *)NULL))
      goto done;

  }
  while((_Bool)1);
  *lp = len;
  *sp = s;
  ret = 0;

done:
  ;
  return ret;
}

// writeafid
// file diod_auth.c line 229
static signed int writeafid(struct Npfid *afid, unsigned long int offset, unsigned int count, unsigned char *data)
{
  struct diod_auth_struct *da;
  signed int ret = -1;
  _Bool tmp_if_expr_1;
  if(afid == ((struct Npfid *)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = !(afid->aux != NULL) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_5;
  unsigned long int return_value_strlen_4;
  if(data == ((unsigned char *)NULL) || count == 0u || tmp_if_expr_1)
  {
    msg("writeafid: invalid arguments");
    np_uerror((unsigned long int)5);
  }

  else
  {
    da = (struct diod_auth_struct *)afid->aux;
    if(!(da->magic == 0x54346666))
      np_assfail("da->magic == DIOD_AUTH_MAGIC", "diod_auth.c", 240);

    if(offset == 0ul)
      tmp_if_expr_6 = !(da->datastr != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_6 = (_Bool)0;
    if(tmp_if_expr_6)
    {
      void *return_value_malloc_2;
      return_value_malloc_2=malloc((unsigned long int)(count + (unsigned int)1));
      da->datastr = (char *)return_value_malloc_2;
    }

    else
    {
      if(!(da->datastr == ((char *)NULL)))
      {
        return_value_strlen_4=strlen(da->datastr);
        tmp_if_expr_5 = offset == return_value_strlen_4 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_5 = (_Bool)0;
      if(tmp_if_expr_5)
      {
        void *return_value_realloc_3;
        return_value_realloc_3=realloc((void *)da->datastr, offset + (unsigned long int)count + (unsigned long int)1);
        da->datastr = (char *)return_value_realloc_3;
      }

      else
      {
        msg("writeafid: write at unexpected offset");
        np_uerror((unsigned long int)5);
        goto done;
      }
    }
    if(da->datastr == ((char *)NULL))
    {
      msg("writeafid: out of memory");
      np_uerror((unsigned long int)12);
    }

    else
    {
      memcpy((void *)(da->datastr + (signed long int)offset), (const void *)data, (unsigned long int)count);
      da->datastr[(signed long int)(offset + (unsigned long int)count)] = (char)0;
      ret = (signed int)count;
    }
  }

done:
  ;
  return ret;
}

