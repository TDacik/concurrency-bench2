// #anon_enum$IDEVICE_E_SUCCESS=0$IDEVICE_E_INVALID_ARG=-1$IDEVICE_E_UNKNOWN_ERROR=-2$IDEVICE_E_NO_DEVICE=-3$IDEVICE_E_NOT_ENOUGH_DATA=-4$IDEVICE_E_BAD_HEADER=-5$IDEVICE_E_SSL_ERROR=-6
// file /usr/include/libimobiledevice/libimobiledevice.h line 38
enum anonymous$16 { IDEVICE_E_SUCCESS=0, IDEVICE_E_INVALID_ARG=-1, IDEVICE_E_UNKNOWN_ERROR=-2, IDEVICE_E_NO_DEVICE=-3, IDEVICE_E_NOT_ENOUGH_DATA=-4, IDEVICE_E_BAD_HEADER=-5, IDEVICE_E_SSL_ERROR=-6 };

// #anon_enum$LOCKDOWN_E_SUCCESS=0$LOCKDOWN_E_INVALID_ARG=-1$LOCKDOWN_E_INVALID_CONF=-2$LOCKDOWN_E_PLIST_ERROR=-3$LOCKDOWN_E_PAIRING_FAILED=-4$LOCKDOWN_E_SSL_ERROR=-5$LOCKDOWN_E_DICT_ERROR=-6$LOCKDOWN_E_NOT_ENOUGH_DATA=-7$LOCKDOWN_E_MUX_ERROR=-8$LOCKDOWN_E_NO_RUNNING_SESSION=-9$LOCKDOWN_E_INVALID_RESPONSE=-10$LOCKDOWN_E_MISSING_KEY=-11$LOCKDOWN_E_MISSING_VALUE=-12$LOCKDOWN_E_GET_PROHIBITED=-13$LOCKDOWN_E_SET_PROHIBITED=-14$LOCKDOWN_E_REMOVE_PROHIBITED=-15$LOCKDOWN_E_IMMUTABLE_VALUE=-16$LOCKDOWN_E_PASSWORD_PROTECTED=-17$LOCKDOWN_E_USER_DENIED_PAIRING=-18$LOCKDOWN_E_PAIRING_DIALOG_RESPONSE_PENDING=-19$LOCKDOWN_E_MISSING_HOST_ID=-20$LOCKDOWN_E_INVALID_HOST_ID=-21$LOCKDOWN_E_SESSION_ACTIVE=-22$LOCKDOWN_E_SESSION_INACTIVE=-23$LOCKDOWN_E_MISSING_SESSION_ID=-24$LOCKDOWN_E_INVALID_SESSION_ID=-25$LOCKDOWN_E_MISSING_SERVICE=-26$LOCKDOWN_E_INVALID_SERVICE=-27$LOCKDOWN_E_SERVICE_LIMIT=-28$LOCKDOWN_E_MISSING_PAIR_RECORD=-29$LOCKDOWN_E_SAVE_PAIR_RECORD_FAILED=-30$LOCKDOWN_E_INVALID_PAIR_RECORD=-31$LOCKDOWN_E_INVALID_ACTIVATION_RECORD=-32$LOCKDOWN_E_MISSING_ACTIVATION_RECORD=-33$LOCKDOWN_E_SERVICE_PROHIBITED=-34$LOCKDOWN_E_ESCROW_LOCKED=-35$LOCKDOWN_E_UNKNOWN_ERROR=-256
// file /usr/include/libimobiledevice/lockdown.h line 37
enum anonymous$13 { LOCKDOWN_E_SUCCESS=0, LOCKDOWN_E_INVALID_ARG=-1, LOCKDOWN_E_INVALID_CONF=-2, LOCKDOWN_E_PLIST_ERROR=-3, LOCKDOWN_E_PAIRING_FAILED=-4, LOCKDOWN_E_SSL_ERROR=-5, LOCKDOWN_E_DICT_ERROR=-6, LOCKDOWN_E_NOT_ENOUGH_DATA=-7, LOCKDOWN_E_MUX_ERROR=-8, LOCKDOWN_E_NO_RUNNING_SESSION=-9, LOCKDOWN_E_INVALID_RESPONSE=-10, LOCKDOWN_E_MISSING_KEY=-11, LOCKDOWN_E_MISSING_VALUE=-12, LOCKDOWN_E_GET_PROHIBITED=-13, LOCKDOWN_E_SET_PROHIBITED=-14, LOCKDOWN_E_REMOVE_PROHIBITED=-15, LOCKDOWN_E_IMMUTABLE_VALUE=-16, LOCKDOWN_E_PASSWORD_PROTECTED=-17, LOCKDOWN_E_USER_DENIED_PAIRING=-18, LOCKDOWN_E_PAIRING_DIALOG_RESPONSE_PENDING=-19, LOCKDOWN_E_MISSING_HOST_ID=-20, LOCKDOWN_E_INVALID_HOST_ID=-21, LOCKDOWN_E_SESSION_ACTIVE=-22, LOCKDOWN_E_SESSION_INACTIVE=-23, LOCKDOWN_E_MISSING_SESSION_ID=-24, LOCKDOWN_E_INVALID_SESSION_ID=-25, LOCKDOWN_E_MISSING_SERVICE=-26, LOCKDOWN_E_INVALID_SERVICE=-27, LOCKDOWN_E_SERVICE_LIMIT=-28, LOCKDOWN_E_MISSING_PAIR_RECORD=-29, LOCKDOWN_E_SAVE_PAIR_RECORD_FAILED=-30, LOCKDOWN_E_INVALID_PAIR_RECORD=-31, LOCKDOWN_E_INVALID_ACTIVATION_RECORD=-32, LOCKDOWN_E_MISSING_ACTIVATION_RECORD=-33, LOCKDOWN_E_SERVICE_PROHIBITED=-34, LOCKDOWN_E_ESCROW_LOCKED=-35, LOCKDOWN_E_UNKNOWN_ERROR=-256 };

// #anon_enum$NP_E_SUCCESS=0$NP_E_INVALID_ARG=-1$NP_E_PLIST_ERROR=-2$NP_E_CONN_FAILED=-3$NP_E_UNKNOWN_ERROR=-256
// file /usr/include/libimobiledevice/notification_proxy.h line 37
enum anonymous$17 { NP_E_SUCCESS=0, NP_E_INVALID_ARG=-1, NP_E_PLIST_ERROR=-2, NP_E_CONN_FAILED=-3, NP_E_UNKNOWN_ERROR=-256 };

// #anon_enum$PLIST_BOOLEAN=0$PLIST_UINT=1$PLIST_REAL=2$PLIST_STRING=3$PLIST_ARRAY=4$PLIST_DICT=5$PLIST_DATE=6$PLIST_DATA=7$PLIST_KEY=8$PLIST_UID=9$PLIST_NONE=10
// file /usr/include/plist/plist.h line 98
enum anonymous$14 { PLIST_BOOLEAN=0, PLIST_UINT=1, PLIST_REAL=2, PLIST_STRING=3, PLIST_ARRAY=4, PLIST_DICT=5, PLIST_DATE=6, PLIST_DATA=7, PLIST_KEY=8, PLIST_UID=9, PLIST_NONE=10 };

// tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 121
struct anonymous$11;

// tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 107
struct anonymous$9;

// tag-#anon#ST[ARR16{U64}$U64$'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous$0;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 74
struct anonymous$5;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 97
struct anonymous$8;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 89
struct anonymous$7;

// tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 62
struct anonymous$3;

// tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 81
struct anonymous$6;

// tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 114
struct anonymous$10;

// tag-#anon#ST[U16'source'||U16'dest'||U32'seq'||U32'ack_seq'||BF{U16}$U16$'res1'||BF{U16}$U16$'doff'||BF{U16}$U16$'fin'||BF{U16}$U16$'syn'||BF{U16}$U16$'rst'||BF{U16}$U16$'psh'||BF{U16}$U16$'ack'||BF{U16}$U16$'urg'||BF{U16}$U16$'res2'||U16'window'||U16'check'||U16'urg_ptr'|]
// file /usr/include/netinet/tcp.h line 103
struct anonymous$19;

// tag-#anon#ST[U16'th_sport'||U16'th_dport'||U32'th_seq'||U32'th_ack'||BF{U8}$U8$'th_x2'||BF{U8}$U8$'th_off'||U8'th_flags'||U16'th_win'||U16'th_sum'||U16'th_urp'|]
// file /usr/include/netinet/tcp.h line 78
struct anonymous$18;

// tag-#anon#UN[*{V(S32)->V}$V(S32)->V$'sa_handler'||*{V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}$SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#$|*{V}$V$)->V}$V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}$SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#$|*{V}$V$)->V$'sa_sigaction'|]
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 28
union anonymous$1;

// tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 69
union anonymous$12;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$15;

// tag-#anon#UN[SYM#tag-#anon#ST[U16'th_sport'||U16'th_dport'||U32'th_seq'||U32'th_ack'||BF{U8}$U8$'th_x2'||BF{U8}$U8$'th_off'||U8'th_flags'||U16'th_win'||U16'th_sum'||U16'th_urp'|]#'$anon0'||SYM#tag-#anon#ST[U16'source'||U16'dest'||U32'seq'||U32'ack_seq'||BF{U16}$U16$'res1'||BF{U16}$U16$'doff'||BF{U16}$U16$'fin'||BF{U16}$U16$'syn'||BF{U16}$U16$'rst'||BF{U16}$U16$'psh'||BF{U16}$U16$'ack'||BF{U16}$U16$'urg'||BF{U16}$U16$'res2'||U16'window'||U16'check'||U16'urg_ptr'|]#'$anon1'|]
// file /usr/include/netinet/tcp.h line 76
union anonymous$20;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous;

// tag-#anon#UN[r*{SYM#tag-sockaddr#}$SYM#tag-sockaddr#$'__sockaddr__'||r*{SYM#tag-sockaddr_at#}$SYM#tag-sockaddr_at#$'__sockaddr_at__'||r*{SYM#tag-sockaddr_ax25#}$SYM#tag-sockaddr_ax25#$'__sockaddr_ax25__'||r*{SYM#tag-sockaddr_dl#}$SYM#tag-sockaddr_dl#$'__sockaddr_dl__'||r*{SYM#tag-sockaddr_eon#}$SYM#tag-sockaddr_eon#$'__sockaddr_eon__'||r*{SYM#tag-sockaddr_in#}$SYM#tag-sockaddr_in#$'__sockaddr_in__'||r*{SYM#tag-sockaddr_in6#}$SYM#tag-sockaddr_in6#$'__sockaddr_in6__'||r*{SYM#tag-sockaddr_inarp#}$SYM#tag-sockaddr_inarp#$'__sockaddr_inarp__'||r*{SYM#tag-sockaddr_ipx#}$SYM#tag-sockaddr_ipx#$'__sockaddr_ipx__'||r*{SYM#tag-sockaddr_iso#}$SYM#tag-sockaddr_iso#$'__sockaddr_iso__'||r*{SYM#tag-sockaddr_ns#}$SYM#tag-sockaddr_ns#$'__sockaddr_ns__'||r*{SYM#tag-sockaddr_un#}$SYM#tag-sockaddr_un#$'__sockaddr_un__'||r*{SYM#tag-sockaddr_x25#}$SYM#tag-sockaddr_x25#$'__sockaddr_x25__'|]
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
union anonymous$4;

// tag-#anon#UN[r*{SYM#tag-sockaddr#}$SYM#tag-sockaddr#$'__sockaddr__'||r*{SYM#tag-sockaddr_at#}$SYM#tag-sockaddr_at#$'__sockaddr_at__'||r*{SYM#tag-sockaddr_ax25#}$SYM#tag-sockaddr_ax25#$'__sockaddr_ax25__'||r*{SYM#tag-sockaddr_dl#}$SYM#tag-sockaddr_dl#$'__sockaddr_dl__'||r*{SYM#tag-sockaddr_eon#}$SYM#tag-sockaddr_eon#$'__sockaddr_eon__'||r*{SYM#tag-sockaddr_in#}$SYM#tag-sockaddr_in#$'__sockaddr_in__'||r*{SYM#tag-sockaddr_in6#}$SYM#tag-sockaddr_in6#$'__sockaddr_in6__'||r*{SYM#tag-sockaddr_inarp#}$SYM#tag-sockaddr_inarp#$'__sockaddr_inarp__'||r*{SYM#tag-sockaddr_ipx#}$SYM#tag-sockaddr_ipx#$'__sockaddr_ipx__'||r*{SYM#tag-sockaddr_iso#}$SYM#tag-sockaddr_iso#$'__sockaddr_iso__'||r*{SYM#tag-sockaddr_ns#}$SYM#tag-sockaddr_ns#$'__sockaddr_ns__'||r*{SYM#tag-sockaddr_un#}$SYM#tag-sockaddr_un#$'__sockaddr_un__'||r*{SYM#tag-sockaddr_x25#}$SYM#tag-sockaddr_x25#$'__sockaddr_x25__'|]$transparent
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
union anonymous$2;

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

// tag-cb_data
// file preflight.c line 56
struct cb_data;

// tag-client_state
// file client.c line 46
enum client_state { CLIENT_COMMAND=0, CLIENT_LISTEN=1, CLIENT_CONNECTING1=2, CLIENT_CONNECTING2=3, CLIENT_CONNECTED=4, CLIENT_DEAD=5 };

// tag-collection
// file utils.h line 46
struct collection;

// tag-connection_type
// file preflight.c line 46
enum connection_type { CONNECTION_USBMUXD=1 };

// tag-device_info
// file client.h line 27
struct device_info;

// tag-fdlist
// file utils.h line 34
struct fdlist;

// tag-fdowner
// file utils.h line 28
enum fdowner { FD_LISTEN=0, FD_CLIENT=1, FD_USB=2 };

// tag-flock
// file /usr/include/x86_64-linux-gnu/bits/fcntl.h line 35
struct flock;

// tag-idevice_private
// file /usr/include/libimobiledevice/libimobiledevice.h line 48
struct idevice_private;

// tag-libusb_config_descriptor
// file /usr/include/libusb-1.0/libusb.h line 643
struct libusb_config_descriptor;

// tag-libusb_context
// file /usr/include/libusb-1.0/libusb.h line 898
struct libusb_context;

// tag-libusb_device
// file /usr/include/libusb-1.0/libusb.h line 899
struct libusb_device;

// tag-libusb_device_descriptor
// file /usr/include/libusb-1.0/libusb.h line 477
struct libusb_device_descriptor;

// tag-libusb_device_handle
// file /usr/include/libusb-1.0/libusb.h line 900
struct libusb_device_handle;

// tag-libusb_endpoint_descriptor
// file /usr/include/libusb-1.0/libusb.h line 531
struct libusb_endpoint_descriptor;

// tag-libusb_interface
// file /usr/include/libusb-1.0/libusb.h line 629
struct libusb_interface;

// tag-libusb_interface_descriptor
// file /usr/include/libusb-1.0/libusb.h line 581
struct libusb_interface_descriptor;

// tag-libusb_iso_packet_descriptor
// file /usr/include/libusb-1.0/libusb.h line 1177
struct libusb_iso_packet_descriptor;

// tag-libusb_pollfd
// file /usr/include/libusb-1.0/libusb.h line 1823
struct libusb_pollfd;

// tag-libusb_transfer
// file /usr/include/libusb-1.0/libusb.h line 1188
struct libusb_transfer;

// tag-libusb_transfer_status
// file /usr/include/libusb-1.0/libusb.h line 1106
enum libusb_transfer_status { LIBUSB_TRANSFER_COMPLETED=0, LIBUSB_TRANSFER_ERROR=1, LIBUSB_TRANSFER_TIMED_OUT=2, LIBUSB_TRANSFER_CANCELLED=3, LIBUSB_TRANSFER_STALL=4, LIBUSB_TRANSFER_NO_DEVICE=5, LIBUSB_TRANSFER_OVERFLOW=6 };

// tag-lockdownd_client_private
// file /usr/include/libimobiledevice/lockdown.h line 79
struct lockdownd_client_private;

// tag-lockdownd_pair_record
// file /usr/include/libimobiledevice/lockdown.h line 82
struct lockdownd_pair_record;

// tag-lockdownd_service_descriptor
// file /usr/include/libimobiledevice/lockdown.h line 92
struct lockdownd_service_descriptor;

// tag-loglevel
// file log.h line 24
enum loglevel { LL_FATAL=0, LL_ERROR=1, LL_WARNING=2, LL_NOTICE=3, LL_INFO=4, LL_DEBUG=5, LL_SPEW=6, LL_FLOOD=7 };

// tag-mux_client
// file client.h line 28
struct mux_client;

// tag-mux_conn_state
// file device.c line 64
enum mux_conn_state { CONN_CONNECTING=0, CONN_CONNECTED=1, CONN_REFUSED=2, CONN_DYING=3, CONN_DEAD=4 };

// tag-mux_connection
// file device.c line 92
struct mux_connection;

// tag-mux_dev_state
// file device.c line 58
enum mux_dev_state { MUXDEV_INIT=0, MUXDEV_ACTIVE=1, MUXDEV_DEAD=2 };

// tag-mux_device
// file device.c line 88
struct mux_device;

// tag-mux_header
// file device.c line 72
struct mux_header;

// tag-mux_protocol
// file device.c line 51
enum mux_protocol { MUX_PROTO_VERSION=0, MUX_PROTO_CONTROL=1, MUX_PROTO_SETUP=2, MUX_PROTO_TCP=6 };

// tag-np_client_private
// file /usr/include/libimobiledevice/notification_proxy.h line 86
struct np_client_private;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-passwd
// file /usr/include/pwd.h line 49
struct passwd;

// tag-plist_format_t
// file utils.h line 81
enum plist_format_t { PLIST_FORMAT_XML=0, PLIST_FORMAT_BINARY=1 };

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rlimit
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 139
struct rlimit;

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
// file /usr/include/x86_64-linux-gnu/sys/un.h line 29
struct sockaddr_un;

// tag-sockaddr_x25
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_x25;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-tcphdr
// file /usr/include/netinet/tcp.h line 74
struct tcphdr;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

// tag-usb_device
// file usb.h line 50
struct usb_device;

// tag-usbmuxd_connect_request
// file usbmuxd-proto.h line 72
struct usbmuxd_connect_request;

// tag-usbmuxd_device_record
// file usbmuxd-proto.h line 83
struct usbmuxd_device_record;

// tag-usbmuxd_header
// file usbmuxd-proto.h line 60
struct usbmuxd_header;

// tag-usbmuxd_msgtype
// file usbmuxd-proto.h line 49
enum usbmuxd_msgtype { MESSAGE_RESULT=1, MESSAGE_CONNECT=2, MESSAGE_LISTEN=3, MESSAGE_DEVICE_ADD=4, MESSAGE_DEVICE_REMOVE=5, MESSAGE_PLIST=8 };

// tag-usbmuxd_result
// file usbmuxd-proto.h line 39
enum usbmuxd_result { RESULT_OK=0, RESULT_BADCOMMAND=1, RESULT_BADDEV=2, RESULT_CONNREFUSED=3, RESULT_BADVERSION=6 };

// tag-version_header
// file device.c line 81
struct version_header;

#include <stdarg.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __mkdir
// file conf.c line 148
static signed int __mkdir(const char *dir, signed int mode);
// accept
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 243
extern signed int accept(signed int, struct sockaddr *, unsigned int *);
// bind
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 123
extern signed int bind(signed int, union anonymous$2, unsigned int);
// buffer_read_from_filename
// file utils.c line 213
void buffer_read_from_filename(const char *filename, char **buffer, unsigned long int *length);
// buffer_write_to_filename
// file utils.c line 243
void buffer_write_to_filename(const char *filename, const char *buffer, unsigned long int length);
// bzero
// file /usr/include/string.h line 458
extern void bzero(void *, unsigned long int);
// chdir
// file /usr/include/unistd.h line 497
extern signed int chdir(const char *);
// chmod
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 283
extern signed int chmod(const char *, unsigned int);
// chown
// file /usr/include/unistd.h line 473
extern signed int chown(const char *, unsigned int, unsigned int);
// client_accept
// file client.c line 140
signed int client_accept(signed int listenfd);
// client_close
// file client.c line 173
void client_close(struct mux_client *client);
// client_command
// file client.c line 442
static signed int client_command(struct mux_client *client, struct usbmuxd_header *hdr);
// client_device_add
// file client.c line 752
void client_device_add(struct device_info *dev);
// client_device_remove
// file client.c line 764
void client_device_remove(signed int device_id);
// client_get_fds
// file client.c line 192
void client_get_fds(struct fdlist *list);
// client_init
// file client.c line 776
void client_init(void);
// client_notify_connect
// file client.c line 264
signed int client_notify_connect(struct mux_client *client, enum usbmuxd_result result);
// client_process
// file client.c line 722
void client_process(signed int fd, signed short int events);
// client_read
// file client.c line 81
signed int client_read(struct mux_client *client, void *buffer, unsigned int len);
// client_set_events
// file client.c line 119
signed int client_set_events(struct mux_client *client, signed short int events);
// client_shutdown
// file client.c line 783
void client_shutdown(void);
// client_write
// file client.c line 99
signed int client_write(struct mux_client *client, void *buffer, unsigned int len);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closelog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 175
extern void closelog(void);
// collection_add
// file utils.h line 52
void collection_add(struct collection *col, void *element);
// collection_copy
// file utils.h line 56
void collection_copy(struct collection *dest, struct collection *src);
// collection_count
// file utils.h line 54
signed int collection_count(struct collection *col);
// collection_free
// file utils.h line 55
void collection_free(struct collection *col);
// collection_init
// file utils.h line 51
void collection_init(struct collection *col);
// collection_remove
// file utils.h line 53
void collection_remove(struct collection *col, void *element);
// config_create_config_dir
// file conf.c line 180
static void config_create_config_dir(void);
// config_device_record_get_host_id
// file conf.h line 38
void config_device_record_get_host_id(const char *udid, char **host_id);
// config_device_record_get_value
// file conf.c line 497
static signed int config_device_record_get_value(const char *udid, const char *key, void **value);
// config_generate_system_buid
// file conf.c line 220
static char * config_generate_system_buid();
// config_generate_uuid
// file conf.c line 195
static char * config_generate_uuid(signed int idx);
// config_get_config_dir
// file conf.c line 104
const char * config_get_config_dir();
// config_get_device_record
// file conf.h line 34
signed int config_get_device_record(const char *udid, char **record_data, unsigned long int *record_size);
// config_get_system_buid
// file conf.h line 31
void config_get_system_buid(char **system_buid);
// config_get_value
// file conf.c line 302
static signed int config_get_value(const char *key, void **value);
// config_has_device_record
// file conf.h line 33
signed int config_has_device_record(const char *udid);
// config_remove_device_record
// file conf.h line 36
signed int config_remove_device_record(const char *udid);
// config_set_device_record
// file conf.h line 35
signed int config_set_device_record(const char *udid, char *record_data, unsigned long int record_size);
// config_set_system_buid
// file conf.c line 322
static signed int config_set_system_buid(const char *system_buid);
// config_set_value
// file conf.c line 264
static signed int config_set_value(const char *key, void *value);
// connection_device_input
// file device.c line 523
static void connection_device_input(struct mux_connection *conn, unsigned char *payload, unsigned int payload_length);
// connection_teardown
// file device.c line 300
static void connection_teardown(struct mux_connection *conn);
// create_device_attached_plist
// file client.c line 287
static void * create_device_attached_plist(struct device_info *dev);
// create_socket
// file main.c line 70
static signed int create_socket(void);
// daemonize
// file main.c line 249
static signed int daemonize(void);
// dev_poll_remain_ms
// file usb-linux.c line 535
static signed int dev_poll_remain_ms(void);
// device_abort_connect
// file device.h line 40
void device_abort_connect(signed int device_id, struct mux_client *client);
// device_add
// file device.c line 810
signed int device_add(struct usb_device *usbdev);
// device_check_timeouts
// file device.c line 959
void device_check_timeouts(void);
// device_client_process
// file device.h line 39
void device_client_process(signed int device_id, struct mux_client *client, signed short int events);
// device_control_input
// file device.c line 579
static void device_control_input(struct mux_device *dev, unsigned char *payload, unsigned int payload_length);
// device_data_input
// file device.c line 709
void device_data_input(struct usb_device *usbdev, unsigned char *buffer, unsigned int length);
// device_get_count
// file device.c line 894
signed int device_get_count(signed int include_hidden);
// device_get_list
// file device.h line 46
signed int device_get_list(signed int include_hidden, struct device_info **devices);
// device_get_timeout
// file device.c line 938
signed int device_get_timeout(void);
// device_init
// file device.c line 978
void device_init(void);
// device_kill_connections
// file device.c line 986
void device_kill_connections(void);
// device_remove
// file device.c line 841
void device_remove(struct usb_device *usbdev);
// device_set_preflight_cb_data
// file device.c line 882
void device_set_preflight_cb_data(signed int device_id, void *data);
// device_set_visible
// file device.h line 42
void device_set_visible(signed int device_id);
// device_shutdown
// file device.c line 1000
void device_shutdown(void);
// device_start_connect
// file device.h line 38
signed int device_start_connect(signed int device_id, unsigned short int dport, struct mux_client *client);
// device_tcp_input
// file device.c line 619
static void device_tcp_input(struct mux_device *dev, struct tcphdr *th, unsigned char *payload, unsigned int payload_length);
// device_version_input
// file device.c line 546
static void device_version_input(struct mux_device *dev, struct version_header *vh);
// dirname
// file /usr/include/libgen.h line 26
extern char * dirname(char *);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// fdlist_add
// file utils.h line 42
void fdlist_add(struct fdlist *list, enum fdowner owner, signed int fd, signed short int events);
// fdlist_create
// file utils.c line 38
void fdlist_create(struct fdlist *list);
// fdlist_free
// file utils.c line 59
void fdlist_free(struct fdlist *list);
// fdlist_reset
// file utils.c line 69
void fdlist_reset(struct fdlist *list);
// find_sport
// file device.c line 241
static unsigned short int find_sport(struct mux_device *dev);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// freopen
// file /usr/include/stdio.h line 278
extern struct _IO_FILE * freopen(const char *, const char *, struct _IO_FILE *);
// fseek
// file /usr/include/stdio.h line 749
extern signed int fseek(struct _IO_FILE *, signed long int, signed int);
// ftell
// file /usr/include/stdio.h line 754
extern signed long int ftell(struct _IO_FILE *);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// get_mux_connection
// file device.c line 146
static struct mux_connection * get_mux_connection(signed int device_id, struct mux_client *client);
// get_mux_device_for_id
// file device.c line 131
static struct mux_device * get_mux_device_for_id(signed int device_id);
// get_next_device_id
// file device.c line 166
static signed int get_next_device_id(void);
// get_rand
// file conf.c line 189
static signed int get_rand(signed int min, signed int max);
// geteuid
// file /usr/include/unistd.h line 678
extern unsigned int geteuid(void);
// getgid
// file /usr/include/unistd.h line 681
extern unsigned int getgid(void);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// getppid
// file /usr/include/unistd.h line 631
extern signed int getppid(void);
// getpwnam
// file /usr/include/pwd.h line 116
extern struct passwd * getpwnam(const char *);
// getrlimit
// file /usr/include/x86_64-linux-gnu/sys/resource.h line 50
extern signed int getrlimit(enum __rlimit_resource, struct rlimit *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// getuid
// file /usr/include/unistd.h line 675
extern unsigned int getuid(void);
// handle_signal
// file main.c line 104
static void handle_signal(signed int sig);
// htonl
// file /usr/include/netinet/in.h line 377
extern unsigned int htonl(unsigned int);
// htons
// file /usr/include/netinet/in.h line 379
extern unsigned short int htons(unsigned short int);
// idevice_free
// file /usr/include/libimobiledevice/libimobiledevice.h line 148
enum anonymous$16 idevice_free(struct idevice_private *);
// initgroups
// file /usr/include/grp.h line 200
extern signed int initgroups(const char *, unsigned int);
// internal_get_value
// file conf.c line 282
static signed int internal_get_value(const char *config_file, const char *key, void **value);
// internal_set_value
// file conf.c line 225
static signed int internal_set_value(const char *config_file, const char *key, void *value);
// kill
// file /usr/include/signal.h line 127
extern signed int kill(signed int, signed int);
// level_to_syslog_level
// file log.c line 54
static signed int level_to_syslog_level(signed int level);
// libusb_alloc_transfer
// file /usr/include/libusb-1.0/libusb.h line 1477
struct libusb_transfer * libusb_alloc_transfer(signed int);
// libusb_cancel_transfer
// file /usr/include/libusb-1.0/libusb.h line 1479
signed int libusb_cancel_transfer(struct libusb_transfer *);
// libusb_claim_interface
// file /usr/include/libusb-1.0/libusb.h line 1376
signed int libusb_claim_interface(struct libusb_device_handle *, signed int);
// libusb_close
// file /usr/include/libusb-1.0/libusb.h line 1371
void libusb_close(struct libusb_device_handle *);
// libusb_detach_kernel_driver
// file /usr/include/libusb-1.0/libusb.h line 1397
signed int libusb_detach_kernel_driver(struct libusb_device_handle *, signed int);
// libusb_exit
// file /usr/include/libusb-1.0/libusb.h line 1304
void libusb_exit(struct libusb_context *);
// libusb_fill_bulk_transfer
// file /usr/include/libusb-1.0/libusb.h line 1545
static inline void libusb_fill_bulk_transfer(struct libusb_transfer *transfer, struct libusb_device_handle *dev_handle, unsigned char endpoint, unsigned char *buffer, signed int length, void (*callback)(struct libusb_transfer *), void *user_data, unsigned int timeout);
// libusb_fill_bulk_transfer::callback$object
//
void callback$object(struct libusb_transfer *);
// libusb_free_config_descriptor
// file /usr/include/libusb-1.0/libusb.h line 1329
void libusb_free_config_descriptor(struct libusb_config_descriptor *);
// libusb_free_device_list
// file /usr/include/libusb-1.0/libusb.h line 1314
void libusb_free_device_list(struct libusb_device **, signed int);
// libusb_free_transfer
// file /usr/include/libusb-1.0/libusb.h line 1480
void libusb_free_transfer(struct libusb_transfer *);
// libusb_get_active_config_descriptor
// file /usr/include/libusb-1.0/libusb.h line 1323
signed int libusb_get_active_config_descriptor(struct libusb_device *, struct libusb_config_descriptor **);
// libusb_get_bus_number
// file /usr/include/libusb-1.0/libusb.h line 1357
unsigned char libusb_get_bus_number(struct libusb_device *);
// libusb_get_configuration
// file /usr/include/libusb-1.0/libusb.h line 1319
signed int libusb_get_configuration(struct libusb_device_handle *, signed int *);
// libusb_get_device_address
// file /usr/include/libusb-1.0/libusb.h line 1363
unsigned char libusb_get_device_address(struct libusb_device *);
// libusb_get_device_descriptor
// file /usr/include/libusb-1.0/libusb.h line 1321
signed int libusb_get_device_descriptor(struct libusb_device *, struct libusb_device_descriptor *);
// libusb_get_device_list
// file /usr/include/libusb-1.0/libusb.h line 1312
signed long int libusb_get_device_list(struct libusb_context *, struct libusb_device ***);
// libusb_get_max_packet_size
// file /usr/include/libusb-1.0/libusb.h line 1365
signed int libusb_get_max_packet_size(struct libusb_device *, unsigned char);
// libusb_get_next_timeout
// file /usr/include/libusb-1.0/libusb.h line 1817
signed int libusb_get_next_timeout(struct libusb_context *, struct timeval *);
// libusb_get_pollfds
// file /usr/include/libusb-1.0/libusb.h line 1858
struct libusb_pollfd ** libusb_get_pollfds(struct libusb_context *);
// libusb_get_string_descriptor_ascii
// file /usr/include/libusb-1.0/libusb.h line 1794
signed int libusb_get_string_descriptor_ascii(struct libusb_device_handle *, unsigned char, unsigned char *, signed int);
// libusb_handle_events_timeout
// file /usr/include/libusb-1.0/libusb.h line 1808
signed int libusb_handle_events_timeout(struct libusb_context *, struct timeval *);
// libusb_init
// file /usr/include/libusb-1.0/libusb.h line 1303
signed int libusb_init(struct libusb_context **);
// libusb_kernel_driver_active
// file /usr/include/libusb-1.0/libusb.h line 1395
signed int libusb_kernel_driver_active(struct libusb_device_handle *, signed int);
// libusb_open
// file /usr/include/libusb-1.0/libusb.h line 1370
signed int libusb_open(struct libusb_device *, struct libusb_device_handle **);
// libusb_release_interface
// file /usr/include/libusb-1.0/libusb.h line 1378
signed int libusb_release_interface(struct libusb_device_handle *, signed int);
// libusb_set_configuration
// file /usr/include/libusb-1.0/libusb.h line 1374
signed int libusb_set_configuration(struct libusb_device_handle *, signed int);
// libusb_submit_transfer
// file /usr/include/libusb-1.0/libusb.h line 1478
signed int libusb_submit_transfer(struct libusb_transfer *);
// listen
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 233
extern signed int listen(signed int, signed int);
// localtime
// file /usr/include/time.h line 243
extern struct tm * localtime(const signed long int *);
// lockdownd_client_free
// file /usr/include/libimobiledevice/lockdown.h line 144
enum anonymous$13 lockdownd_client_free(struct lockdownd_client_private *);
// lockdownd_client_new
// file /usr/include/libimobiledevice/lockdown.h line 115
enum anonymous$13 lockdownd_client_new(struct idevice_private *, struct lockdownd_client_private **, const char *);
// lockdownd_get_value
// file /usr/include/libimobiledevice/lockdown.h line 168
enum anonymous$13 lockdownd_get_value(struct lockdownd_client_private *, const char *, const char *, void **);
// lockdownd_pair
// file /usr/include/libimobiledevice/lockdown.h line 292
enum anonymous$13 lockdownd_pair(struct lockdownd_client_private *, struct lockdownd_pair_record *);
// lockdownd_query_type
// file /usr/include/libimobiledevice/lockdown.h line 156
enum anonymous$13 lockdownd_query_type(struct lockdownd_client_private *, char **);
// lockdownd_service_descriptor_free
// file /usr/include/libimobiledevice/lockdown.h line 442
enum anonymous$13 lockdownd_service_descriptor_free(struct lockdownd_service_descriptor *);
// lockdownd_set_untrusted_host_buid
// file preflight.c line 62
static void lockdownd_set_untrusted_host_buid(struct lockdownd_client_private *lockdown);
// lockdownd_set_value
// file /usr/include/libimobiledevice/lockdown.h line 181
enum anonymous$13 lockdownd_set_value(struct lockdownd_client_private *, const char *, const char *, void *);
// lockdownd_start_service
// file /usr/include/libimobiledevice/lockdown.h line 208
enum anonymous$13 lockdownd_start_service(struct lockdownd_client_private *, const char *, struct lockdownd_service_descriptor **);
// lockdownd_start_session
// file /usr/include/libimobiledevice/lockdown.h line 239
enum anonymous$13 lockdownd_start_session(struct lockdownd_client_private *, const char *, char **, signed int *);
// lockdownd_validate_pair
// file /usr/include/libimobiledevice/lockdown.h line 311
enum anonymous$13 lockdownd_validate_pair(struct lockdownd_client_private *, struct lockdownd_pair_record *);
// log_disable_syslog
// file log.c line 47
void log_disable_syslog();
// log_enable_syslog
// file log.c line 39
void log_enable_syslog();
// main_loop
// file main.c line 168
static signed int main_loop(signed int listenfd);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcmp
// file /usr/include/string.h line 69
extern signed int memcmp(const void *, const void *, unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memmove
// file /usr/include/string.h line 50
extern void * memmove(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mkdir
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 320
extern signed int mkdir(const char *, unsigned int);
// mkdir_with_parents
// file conf.c line 157
static signed int mkdir_with_parents(const char *dir, signed int mode);
// mstime64
// file utils.h line 89
unsigned long int mstime64(void);
// notify_device_add
// file client.c line 369
static signed int notify_device_add(struct mux_client *client, struct device_info *dev);
// notify_device_remove
// file client.c line 391
static signed int notify_device_remove(struct mux_client *client, unsigned int device_id);
// notify_parent
// file main.c line 328
static signed int notify_parent(signed int status);
// np_callback
// file preflight.c line 79
static void np_callback(const char *notification, void *userdata);
// np_client_free
// file /usr/include/libimobiledevice/notification_proxy.h line 131
enum anonymous$17 np_client_free(struct np_client_private *);
// np_client_new
// file /usr/include/libimobiledevice/notification_proxy.h line 106
enum anonymous$17 np_client_new(struct idevice_private *, struct lockdownd_service_descriptor *, struct np_client_private **);
// np_observe_notifications
// file /usr/include/libimobiledevice/notification_proxy.h line 166
enum anonymous$17 np_observe_notifications(struct np_client_private *, const char **);
// np_set_notify_callback
// file /usr/include/libimobiledevice/notification_proxy.h line 190
enum anonymous$17 np_set_notify_callback(struct np_client_private *, void (*)(const char *, void *), void *);
// ntohl
// file /usr/include/netinet/in.h line 374
extern unsigned int ntohl(unsigned int);
// ntohs
// file /usr/include/netinet/in.h line 375
extern unsigned short int ntohs(unsigned short int);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// openlog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 181
extern void openlog(const char *, signed int, signed int);
// parse_opts
// file main.c line 374
static void parse_opts(signed int argc, char **argv);
// pipe
// file /usr/include/unistd.h line 417
extern signed int pipe(signed int *);
// plist_array_append_item
// file /usr/include/plist/plist.h line 264
void plist_array_append_item(void *, void *);
// plist_copy
// file /usr/include/plist/plist.h line 214
void * plist_copy(void *);
// plist_dict_get_item
// file /usr/include/plist/plist.h line 335
void * plist_dict_get_item(void *, const char *);
// plist_dict_get_string_val
// file client.c line 430
static char * plist_dict_get_string_val(void *dict, const char *key);
// plist_dict_remove_item
// file /usr/include/plist/plist.h line 367
void plist_dict_remove_item(void *, const char *);
// plist_dict_set_item
// file /usr/include/plist/plist.h line 346
void plist_dict_set_item(void *, const char *, void *);
// plist_free
// file /usr/include/plist/plist.h line 206
void plist_free(void *);
// plist_from_bin
// file /usr/include/plist/plist.h line 604
void plist_from_bin(const char *, unsigned int, void **);
// plist_from_xml
// file /usr/include/plist/plist.h line 595
void plist_from_xml(const char *, unsigned int, void **);
// plist_get_data_val
// file /usr/include/plist/plist.h line 457
void plist_get_data_val(void *, char **, unsigned long int *);
// plist_get_node_type
// file /usr/include/plist/plist.h line 399
enum anonymous$14 plist_get_node_type(void *);
// plist_get_string_val
// file /usr/include/plist/plist.h line 419
void plist_get_string_val(void *, char **);
// plist_get_uint_val
// file /usr/include/plist/plist.h line 437
void plist_get_uint_val(void *, unsigned long int *);
// plist_new_array
// file /usr/include/plist/plist.h line 134
void * plist_new_array(void);
// plist_new_data
// file /usr/include/plist/plist.h line 180
void * plist_new_data(const char *, unsigned long int);
// plist_new_dict
// file /usr/include/plist/plist.h line 126
void * plist_new_dict(void);
// plist_new_string
// file /usr/include/plist/plist.h line 143
void * plist_new_string(const char *);
// plist_new_uint
// file /usr/include/plist/plist.h line 161
void * plist_new_uint(unsigned long int);
// plist_read_from_filename
// file utils.c line 254
signed int plist_read_from_filename(void **plist, const char *filename);
// plist_to_bin
// file /usr/include/plist/plist.h line 586
void plist_to_bin(void *, char **, unsigned int *);
// plist_to_xml
// file /usr/include/plist/plist.h line 576
void plist_to_xml(void *, char **, unsigned int *);
// plist_write_to_filename
// file utils.c line 279
signed int plist_write_to_filename(void *plist, const char *filename, enum plist_format_t format);
// ppoll
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 66
extern signed int ppoll(struct pollfd *, unsigned long int, struct timespec *, const struct anonymous$0 *);
// preflight_device_remove_cb
// file preflight.h line 28
void preflight_device_remove_cb(void *data);
// preflight_worker_device_add
// file preflight.h line 29
void preflight_worker_device_add(struct device_info *info);
// preflight_worker_handle_device_add
// file preflight.c line 121
static void * preflight_worker_handle_device_add(void *userdata);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// process_recv
// file client.c line 671
static void process_recv(struct mux_client *client);
// process_send
// file client.c line 641
static void process_send(struct mux_client *client);
// pthread_attr_init
// file /usr/include/pthread.h line 289
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_attr_setdetachstate
// file /usr/include/pthread.h line 301
extern signed int pthread_attr_setdetachstate(union pthread_attr_t *, signed int);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous *, const union anonymous$15 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// rand
// file /usr/include/stdlib.h line 374
extern signed int rand(void);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// reap_dead_devices
// file usb-linux.c line 107
static void reap_dead_devices(void);
// recv
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 156
extern signed long int recv(signed int, void *, unsigned long int, signed int);
// remove
// file /usr/include/stdio.h line 178
extern signed int remove(const char *);
// rewind
// file /usr/include/stdio.h line 759
extern void rewind(struct _IO_FILE *);
// rx_callback
// file usb-linux.c line 189
static void rx_callback(struct libusb_transfer *xfer);
// send
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 149
extern signed long int send(signed int, const void *, unsigned long int, signed int);
// send_anon_rst
// file device.c line 260
static signed int send_anon_rst(struct mux_device *dev, unsigned short int sport, unsigned short int dport, unsigned int ack);
// send_device_list
// file client.c line 304
static signed int send_device_list(struct mux_client *client, unsigned int tag);
// send_packet
// file device.c line 184
static signed int send_packet(struct mux_device *dev, enum mux_protocol proto, void *header, const void *data, signed int length);
// send_pair_record
// file client.c line 345
static signed int send_pair_record(struct mux_client *client, unsigned int tag, const char *record_id);
// send_pkt
// file client.c line 201
static signed int send_pkt(struct mux_client *client, unsigned int tag, enum usbmuxd_msgtype msg, void *payload, signed int payload_length);
// send_plist_pkt
// file client.c line 232
static signed int send_plist_pkt(struct mux_client *client, unsigned int tag, void *plist);
// send_result
// file client.c line 247
static signed int send_result(struct mux_client *client, unsigned int tag, unsigned int result);
// send_system_buid
// file client.c line 331
static signed int send_system_buid(struct mux_client *client, unsigned int tag);
// send_tcp
// file device.c line 276
static signed int send_tcp(struct mux_connection *conn, unsigned char flags, const unsigned char *data, signed int length);
// send_tcp_ack
// file device.c line 432
static signed int send_tcp_ack(struct mux_connection *conn);
// set_signal_handlers
// file main.c line 130
static void set_signal_handlers(void);
// setgid
// file /usr/include/unistd.h line 717
extern signed int setgid(unsigned int);
// setrlimit
// file /usr/include/x86_64-linux-gnu/sys/resource.h line 69
extern signed int setrlimit(enum __rlimit_resource, struct rlimit *);
// setsid
// file /usr/include/unistd.h line 667
extern signed int setsid(void);
// setuid
// file /usr/include/unistd.h line 700
extern signed int setuid(unsigned int);
// sigaction
// file /usr/include/signal.h line 259
extern signed int sigaction(signed int, struct sigaction *, struct sigaction *);
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous$0 *, signed int);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous$0 *);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// sigprocmask
// file /usr/include/signal.h line 248
extern signed int sigprocmask(signed int, const struct anonymous$0 *, struct anonymous$0 *);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// srand
// file /usr/include/stdlib.h line 376
extern void srand(unsigned int);
// start_listen
// file client.c line 408
static signed int start_listen(struct mux_client *client);
// start_rx_loop
// file usb-linux.c line 236
static signed int start_rx_loop(struct usb_device *dev);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 208
extern signed int stat(const char *, struct stat *);
// stpcpy
// file /usr/include/string.h line 568
extern char * stpcpy(char *, const char *);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strftime
// file /usr/include/time.h line 205
extern unsigned long int strftime(char *, unsigned long int, const char *, struct tm *);
// string_concat
// file utils.c line 169
char * string_concat(const char *str, ...);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// tx_callback
// file usb-linux.c line 117
static void tx_callback(struct libusb_transfer *xfer);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// update_connection
// file device.c line 399
static void update_connection(struct mux_connection *conn);
// usage
// file main.c line 348
static void usage();
// usb_autodiscover
// file usb-linux.c line 529
void usb_autodiscover(signed int enable);
// usb_disconnect
// file usb-linux.c line 67
static void usb_disconnect(struct usb_device *dev);
// usb_discover
// file usb-linux.c line 254
signed int usb_discover(void);
// usb_get_fds
// file usb-linux.c line 512
void usb_get_fds(struct fdlist *list);
// usb_get_location
// file usb.h line 55
unsigned int usb_get_location(struct usb_device *dev);
// usb_get_pid
// file usb.h line 56
unsigned short int usb_get_pid(struct usb_device *dev);
// usb_get_serial
// file usb.h line 54
const char * usb_get_serial(struct usb_device *dev);
// usb_get_timeout
// file usb-linux.c line 549
signed int usb_get_timeout(void);
// usb_init
// file usb-linux.c line 622
signed int usb_init(void);
// usb_process
// file usb-linux.c line 570
signed int usb_process(void);
// usb_process_timeout
// file usb.h line 63
signed int usb_process_timeout(signed int msec);
// usb_send
// file usb.h line 59
signed int usb_send(struct usb_device *dev, const unsigned char *buf, signed int length);
// usb_shutdown
// file usb-linux.c line 641
void usb_shutdown(void);
// usbmuxd_log
// file log.h line 40
void usbmuxd_log(enum loglevel level, const char *fmt, ...);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// vsyslog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 200
extern void vsyslog(signed int, const char *, void **);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);

struct anonymous$11
{
  // _call_addr
  void *_call_addr;
  // _syscall
  signed int _syscall;
  // _arch
  unsigned int _arch;
};

struct anonymous$9
{
  // si_addr
  void *si_addr;
  // si_addr_lsb
  signed short int si_addr_lsb;
};

struct anonymous$0
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous$5
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
};

struct anonymous$8
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

struct anonymous$7
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous$6
{
  // si_tid
  signed int si_tid;
  // si_overrun
  signed int si_overrun;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous$10
{
  // si_band
  signed long int si_band;
  // si_fd
  signed int si_fd;
};

union anonymous$12
{
  // _pad
  signed int _pad[28l];
  // _kill
  struct anonymous$5 _kill;
  // _timer
  struct anonymous$6 _timer;
  // _rt
  struct anonymous$7 _rt;
  // _sigchld
  struct anonymous$8 _sigchld;
  // _sigfault
  struct anonymous$9 _sigfault;
  // _sigpoll
  struct anonymous$10 _sigpoll;
  // _sigsys
  struct anonymous$11 _sigsys;
};

struct anonymous$3
{
  // si_signo
  signed int si_signo;
  // si_errno
  signed int si_errno;
  // si_code
  signed int si_code;
  // _sifields
  union anonymous$12 _sifields;
};

struct anonymous$19
{
  // source
  unsigned short int source;
  // dest
  unsigned short int dest;
  // seq
  unsigned int seq;
  // ack_seq
  unsigned int ack_seq;
  // res1
  unsigned short int res1 : 4;
  // doff
  unsigned short int doff : 4;
  // fin
  unsigned short int fin : 1;
  // syn
  unsigned short int syn : 1;
  // rst
  unsigned short int rst : 1;
  // psh
  unsigned short int psh : 1;
  // ack
  unsigned short int ack : 1;
  // urg
  unsigned short int urg : 1;
  // res2
  unsigned short int res2 : 2;
  // window
  unsigned short int window;
  // check
  unsigned short int check;
  // urg_ptr
  unsigned short int urg_ptr;
};

struct anonymous$18
{
  // th_sport
  unsigned short int th_sport;
  // th_dport
  unsigned short int th_dport;
  // th_seq
  unsigned int th_seq;
  // th_ack
  unsigned int th_ack;
  // th_x2
  unsigned char th_x2 : 4;
  // th_off
  unsigned char th_off : 4;
  // th_flags
  unsigned char th_flags;
  // th_win
  unsigned short int th_win;
  // th_sum
  unsigned short int th_sum;
  // th_urp
  unsigned short int th_urp;
};

union anonymous$1
{
  // sa_handler
  void (*sa_handler)(signed int);
  // sa_sigaction
  void (*sa_sigaction)(signed int, struct anonymous$3 *, void *);
};

union anonymous$15
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous$20
{
  // $anon0
  struct anonymous$18 $anon0;
  // $anon1
  struct anonymous$19 $anon1;
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

union anonymous$4
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

union anonymous$2
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

struct cb_data
{
  // dev
  struct idevice_private *dev;
  // np
  struct np_client_private *np;
  // is_device_connected
  signed int is_device_connected;
};

struct collection
{
  // list
  void **list;
  // capacity
  signed int capacity;
};

struct device_info
{
  // id
  signed int id;
  // serial
  const char *serial;
  // location
  unsigned int location;
  // pid
  unsigned short int pid;
};

struct fdlist
{
  // count
  signed int count;
  // capacity
  signed int capacity;
  // owners
  enum fdowner *owners;
  // fds
  struct pollfd *fds;
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

struct idevice_private
{
  // udid
  char *udid;
  // conn_type
  enum connection_type conn_type;
  // conn_data
  void *conn_data;
};

struct libusb_config_descriptor
{
  // bLength
  unsigned char bLength;
  // bDescriptorType
  unsigned char bDescriptorType;
  // wTotalLength
  unsigned short int wTotalLength;
  // bNumInterfaces
  unsigned char bNumInterfaces;
  // bConfigurationValue
  unsigned char bConfigurationValue;
  // iConfiguration
  unsigned char iConfiguration;
  // bmAttributes
  unsigned char bmAttributes;
  // MaxPower
  unsigned char MaxPower;
  // interface
  struct libusb_interface *interface;
  // extra
  const unsigned char *extra;
  // extra_length
  signed int extra_length;
};

struct libusb_device_descriptor
{
  // bLength
  unsigned char bLength;
  // bDescriptorType
  unsigned char bDescriptorType;
  // bcdUSB
  unsigned short int bcdUSB;
  // bDeviceClass
  unsigned char bDeviceClass;
  // bDeviceSubClass
  unsigned char bDeviceSubClass;
  // bDeviceProtocol
  unsigned char bDeviceProtocol;
  // bMaxPacketSize0
  unsigned char bMaxPacketSize0;
  // idVendor
  unsigned short int idVendor;
  // idProduct
  unsigned short int idProduct;
  // bcdDevice
  unsigned short int bcdDevice;
  // iManufacturer
  unsigned char iManufacturer;
  // iProduct
  unsigned char iProduct;
  // iSerialNumber
  unsigned char iSerialNumber;
  // bNumConfigurations
  unsigned char bNumConfigurations;
};

struct libusb_endpoint_descriptor
{
  // bLength
  unsigned char bLength;
  // bDescriptorType
  unsigned char bDescriptorType;
  // bEndpointAddress
  unsigned char bEndpointAddress;
  // bmAttributes
  unsigned char bmAttributes;
  // wMaxPacketSize
  unsigned short int wMaxPacketSize;
  // bInterval
  unsigned char bInterval;
  // bRefresh
  unsigned char bRefresh;
  // bSynchAddress
  unsigned char bSynchAddress;
  // extra
  const unsigned char *extra;
  // extra_length
  signed int extra_length;
};

struct libusb_interface
{
  // altsetting
  struct libusb_interface_descriptor *altsetting;
  // num_altsetting
  signed int num_altsetting;
};

struct libusb_interface_descriptor
{
  // bLength
  unsigned char bLength;
  // bDescriptorType
  unsigned char bDescriptorType;
  // bInterfaceNumber
  unsigned char bInterfaceNumber;
  // bAlternateSetting
  unsigned char bAlternateSetting;
  // bNumEndpoints
  unsigned char bNumEndpoints;
  // bInterfaceClass
  unsigned char bInterfaceClass;
  // bInterfaceSubClass
  unsigned char bInterfaceSubClass;
  // bInterfaceProtocol
  unsigned char bInterfaceProtocol;
  // iInterface
  unsigned char iInterface;
  // endpoint
  struct libusb_endpoint_descriptor *endpoint;
  // extra
  const unsigned char *extra;
  // extra_length
  signed int extra_length;
};

struct libusb_iso_packet_descriptor
{
  // length
  unsigned int length;
  // actual_length
  unsigned int actual_length;
  // status
  enum libusb_transfer_status status;
};

struct libusb_pollfd
{
  // fd
  signed int fd;
  // events
  signed short int events;
};

struct libusb_transfer
{
  // dev_handle
  struct libusb_device_handle *dev_handle;
  // flags
  unsigned char flags;
  // endpoint
  unsigned char endpoint;
  // type
  unsigned char type;
  // timeout
  unsigned int timeout;
  // status
  enum libusb_transfer_status status;
  // length
  signed int length;
  // actual_length
  signed int actual_length;
  // callback
  void (*callback)(struct libusb_transfer *);
  // user_data
  void *user_data;
  // buffer
  unsigned char *buffer;
  // num_iso_packets
  signed int num_iso_packets;
  // iso_packet_desc
  struct libusb_iso_packet_descriptor iso_packet_desc[0l];
};

struct lockdownd_pair_record
{
  // device_certificate
  char *device_certificate;
  // host_certificate
  char *host_certificate;
  // root_certificate
  char *root_certificate;
  // host_id
  char *host_id;
  // system_buid
  char *system_buid;
};

struct lockdownd_service_descriptor
{
  // port
  unsigned short int port;
  // ssl_enabled
  unsigned char ssl_enabled;
};

struct mux_client
{
  // fd
  signed int fd;
  // ob_buf
  unsigned char *ob_buf;
  // ob_size
  unsigned int ob_size;
  // ob_capacity
  unsigned int ob_capacity;
  // ib_buf
  unsigned char *ib_buf;
  // ib_size
  unsigned int ib_size;
  // ib_capacity
  unsigned int ib_capacity;
  // events
  signed short int events;
  // devents
  signed short int devents;
  // connect_tag
  unsigned int connect_tag;
  // connect_device
  signed int connect_device;
  // state
  enum client_state state;
  // proto_version
  unsigned int proto_version;
};

struct mux_connection
{
  // dev
  struct mux_device *dev;
  // client
  struct mux_client *client;
  // state
  enum mux_conn_state state;
  // sport
  unsigned short int sport;
  // dport
  unsigned short int dport;
  // tx_seq
  unsigned int tx_seq;
  // tx_ack
  unsigned int tx_ack;
  // tx_acked
  unsigned int tx_acked;
  // tx_win
  unsigned int tx_win;
  // rx_seq
  unsigned int rx_seq;
  // rx_recvd
  unsigned int rx_recvd;
  // rx_ack
  unsigned int rx_ack;
  // rx_win
  unsigned int rx_win;
  // max_payload
  unsigned int max_payload;
  // sendable
  unsigned int sendable;
  // flags
  signed int flags;
  // ib_buf
  unsigned char *ib_buf;
  // ib_size
  unsigned int ib_size;
  // ib_capacity
  unsigned int ib_capacity;
  // ob_buf
  unsigned char *ob_buf;
  // ob_capacity
  unsigned int ob_capacity;
  // events
  signed short int events;
  // last_ack_time
  unsigned long int last_ack_time;
};

struct mux_device
{
  // usbdev
  struct usb_device *usbdev;
  // id
  signed int id;
  // state
  enum mux_dev_state state;
  // visible
  signed int visible;
  // connections
  struct collection connections;
  // next_sport
  unsigned short int next_sport;
  // pktbuf
  unsigned char *pktbuf;
  // pktlen
  unsigned int pktlen;
  // preflight_cb_data
  void *preflight_cb_data;
  // version
  signed int version;
  // rx_seq
  unsigned short int rx_seq;
  // tx_seq
  unsigned short int tx_seq;
};

struct mux_header
{
  // protocol
  unsigned int protocol;
  // length
  unsigned int length;
  // magic
  unsigned int magic;
  // tx_seq
  unsigned short int tx_seq;
  // rx_seq
  unsigned short int rx_seq;
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

struct rlimit
{
  // rlim_cur
  unsigned long int rlim_cur;
  // rlim_max
  unsigned long int rlim_max;
};

struct sigaction
{
  // __sigaction_handler
  union anonymous$1 __sigaction_handler;
  // sa_mask
  struct anonymous$0 sa_mask;
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

struct tcphdr
{
  // $anon0
  union anonymous$20 $anon0;
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

struct usb_device
{
  // dev
  struct libusb_device_handle *dev;
  // bus
  unsigned char bus;
  // address
  unsigned char address;
  // vid
  unsigned short int vid;
  // pid
  unsigned short int pid;
  // serial
  char serial[256l];
  // alive
  signed int alive;
  // interface
  unsigned char interface;
  // ep_in
  unsigned char ep_in;
  // ep_out
  unsigned char ep_out;
  // rx_xfers
  struct collection rx_xfers;
  // tx_xfers
  struct collection tx_xfers;
  // wMaxPacketSize
  signed int wMaxPacketSize;
};

struct usbmuxd_header
{
  // length
  unsigned int length;
  // version
  unsigned int version;
  // message
  unsigned int message;
  // tag
  unsigned int tag;
} __attribute__ ((__packed__));

struct usbmuxd_connect_request
{
  // header
  struct usbmuxd_header header;
  // device_id
  unsigned int device_id;
  // port
  unsigned short int port;
  // reserved
  unsigned short int reserved;
} __attribute__ ((__packed__));

struct usbmuxd_device_record
{
  // device_id
  unsigned int device_id;
  // product_id
  unsigned short int product_id;
  // serial_number
  char serial_number[256l];
  // padding
  unsigned short int padding;
  // location
  unsigned int location;
} __attribute__ ((__packed__));

struct version_header
{
  // major
  unsigned int major;
  // minor
  unsigned int minor;
  // padding
  unsigned int padding;
};


// __config_dir
// file conf.c line 67
static char *__config_dir = (char *)(void *)0;
// client_list
// file client.c line 70
static struct collection client_list;
// client_list_mutex
// file client.c line 71
union anonymous client_list_mutex;
// daemon_pipe
// file main.c line 66
static signed int daemon_pipe;
// device_list
// file device.c line 128
static struct collection device_list;
// device_list$link1
// file usb-linux.c line 60
static struct collection device_list$link1;
// device_list_mutex
// file device.c line 129
union anonymous device_list_mutex;
// device_polling
// file usb-linux.c line 65
static signed int device_polling;
// devlist_failures
// file usb-linux.c line 64
static signed int devlist_failures;
// drop_privileges
// file main.c line 60
static signed int drop_privileges = 0;
// drop_user
// file main.c line 61
static const char *drop_user = (const char *)(void *)0;
// exit_signal
// file main.c line 65
static signed int exit_signal = 0;
// foreground
// file main.c line 59
static signed int foreground = 0;
// lockfile
// file main.c line 53
static const char *lockfile = "/var/run/usbmuxd.pid";
// log_level
// file log.c line 35
unsigned int log_level = (unsigned int)2;
// log_syslog
// file log.c line 37
signed int log_syslog = 0;
// next_dev_poll_time
// file usb-linux.c line 62
static struct timeval next_dev_poll_time;
// next_device_id
// file device.c line 42
signed int next_device_id;
// opt_disable_hotplug
// file main.c line 62
static signed int opt_disable_hotplug = 0;
// opt_enable_exit
// file main.c line 63
static signed int opt_enable_exit = 0;
// opt_exit
// file main.c line 64
static signed int opt_exit = 0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// report_to_parent
// file main.c line 68
static signed int report_to_parent = 0;
// should_discover
// file main.c line 56
signed int should_discover;
// should_exit
// file main.c line 55
signed int should_exit;
// socket_path
// file main.c line 52
static const char *socket_path = "/var/run/usbmuxd";
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// verbose
// file main.c line 58
static signed int verbose = 0;

// __mkdir
// file conf.c line 148
static signed int __mkdir(const char *dir, signed int mode)
{
  signed int return_value_mkdir$1;
  return_value_mkdir$1=mkdir(dir, (unsigned int)mode);
  return return_value_mkdir$1;
}

// buffer_read_from_filename
// file utils.c line 213
void buffer_read_from_filename(const char *filename, char **buffer, unsigned long int *length)
{
  struct _IO_FILE *f;
  unsigned long int size;
  *length = (unsigned long int)0;
  f=fopen(filename, "rb");
  if(!(f == ((struct _IO_FILE *)NULL)))
  {
    fseek(f, (signed long int)0, 2);
    signed long int return_value_ftell$1;
    return_value_ftell$1=ftell(f);
    size = (unsigned long int)return_value_ftell$1;
    rewind(f);
    if(size == 0ul)
      fclose(f);

    else
    {
      void *return_value_malloc$2;
      return_value_malloc$2=malloc(sizeof(char) /*1ul*/  * (size + (unsigned long int)1));
      *buffer = (char *)return_value_malloc$2;
      unsigned long int return_value_fread$3;
      return_value_fread$3=fread((void *)*buffer, sizeof(char) /*1ul*/ , size, f);
      if(!(return_value_fread$3 == size))
        usbmuxd_log((enum loglevel)LL_ERROR, "%s: ERROR: couldn't read %d bytes from %s", (const void *)"buffer_read_from_filename", (signed int)size, filename);

      fclose(f);
      *length = size;
    }
  }

}

// buffer_write_to_filename
// file utils.c line 243
void buffer_write_to_filename(const char *filename, const char *buffer, unsigned long int length)
{
  struct _IO_FILE *f;
  f=fopen(filename, "wb");
  if(!(f == ((struct _IO_FILE *)NULL)))
  {
    fwrite((const void *)buffer, sizeof(char) /*1ul*/ , length, f);
    fclose(f);
  }

}

// client_accept
// file client.c line 140
signed int client_accept(signed int listenfd)
{
  struct sockaddr_un addr;
  signed int cfd;
  unsigned int len = (unsigned int)sizeof(struct sockaddr_un) /*110ul*/ ;
  cfd=accept(listenfd, (struct sockaddr *)&addr, &len);
  if(!(cfd >= 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(*return_value___errno_location$1);
    usbmuxd_log((enum loglevel)LL_ERROR, "accept() failed (%s)", return_value_strerror$2);
    return cfd;
  }

  struct mux_client *client;
  void *return_value_malloc$3;
  return_value_malloc$3=malloc(sizeof(struct mux_client) /*64ul*/ );
  client = (struct mux_client *)return_value_malloc$3;
  memset((void *)client, 0, sizeof(struct mux_client) /*64ul*/ );
  client->fd = cfd;
  void *return_value_malloc$4;
  return_value_malloc$4=malloc((unsigned long int)0x10000);
  client->ob_buf = (unsigned char *)return_value_malloc$4;
  client->ob_size = (unsigned int)0;
  client->ob_capacity = (unsigned int)0x10000;
  void *return_value_malloc$5;
  return_value_malloc$5=malloc((unsigned long int)0x10000);
  client->ib_buf = (unsigned char *)return_value_malloc$5;
  client->ib_size = (unsigned int)0;
  client->ib_capacity = (unsigned int)0x10000;
  client->state = (enum client_state)CLIENT_COMMAND;
  client->events = (signed short int)0x001;
  pthread_mutex_lock(&client_list_mutex);
  collection_add(&client_list, (void *)client);
  pthread_mutex_unlock(&client_list_mutex);
  usbmuxd_log((enum loglevel)LL_INFO, "New client on fd %d", client->fd);
  return client->fd;
}

// client_close
// file client.c line 173
void client_close(struct mux_client *client)
{
  usbmuxd_log((enum loglevel)LL_INFO, "Disconnecting client fd %d", client->fd);
  _Bool tmp_if_expr$1;
  if((signed int)client->state == CLIENT_CONNECTING1)
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)client->state == CLIENT_CONNECTING2 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
  {
    usbmuxd_log((enum loglevel)LL_INFO, "Client died mid-connect, aborting device %d connection", client->connect_device);
    client->state = (enum client_state)CLIENT_DEAD;
    device_abort_connect(client->connect_device, client);
  }

  close(client->fd);
  if(!(client->ob_buf == ((unsigned char *)NULL)))
    free((void *)client->ob_buf);

  if(!(client->ib_buf == ((unsigned char *)NULL)))
    free((void *)client->ib_buf);

  pthread_mutex_lock(&client_list_mutex);
  collection_remove(&client_list, (void *)client);
  pthread_mutex_unlock(&client_list_mutex);
  free((void *)client);
}

// client_command
// file client.c line 442
static signed int client_command(struct mux_client *client, struct usbmuxd_header *hdr)
{
  signed int res;
  usbmuxd_log((enum loglevel)LL_DEBUG, "Client command in fd %d len %d ver %d msg %d tag %d", client->fd, hdr->length, hdr->version, hdr->message, hdr->tag);
  if(!((signed int)client->state == CLIENT_COMMAND))
  {
    usbmuxd_log((enum loglevel)LL_ERROR, "Client %d command received in the wrong state", client->fd);
    signed int return_value_send_result$1;
    return_value_send_result$1=send_result(client, hdr->tag, (unsigned int)RESULT_BADCOMMAND);
    if(!(return_value_send_result$1 >= 0))
      return -1;

    client_close(client);
    return -1;
  }

  void *dict;
  char *message;
  void *node;
  _Bool tmp_if_expr$3;
  enum anonymous$14 return_value_plist_get_node_type$2;
  signed int return_value_strcmp$23;
  signed int return_value_strcmp$22;
  signed int return_value_strcmp$21;
  signed int return_value_strcmp$20;
  signed int return_value_strcmp$19;
  signed int return_value_strcmp$18;
  enum anonymous$14 return_value_plist_get_node_type$13;
  signed int return_value_strcmp$17;
  signed int return_value_send_result$16;
  signed int return_value_send_result$24;
  signed int return_value_start_listen$25;
  unsigned short int return_value_ntohs$26;
  unsigned short int return_value_ntohs$27;
  signed int return_value_send_result$29;
  if(!(hdr->version == 0u))
  {
    if(hdr->version == 1u)
      goto __CPROVER_DUMP_L3;

    usbmuxd_log((enum loglevel)LL_INFO, "Client %d version mismatch: expected 0 or 1, got %d", client->fd, hdr->version);
    send_result(client, hdr->tag, (unsigned int)RESULT_BADVERSION);
    return 0;
  }

  else
  {

  __CPROVER_DUMP_L3:
    ;
    struct usbmuxd_connect_request *ch;
    char *payload;
    unsigned int payload_size;
    switch(hdr->message)
    {
      case (unsigned int)MESSAGE_PLIST:
      {
        client->proto_version = (unsigned int)1;
        payload = (char *)hdr + (signed long int)sizeof(struct usbmuxd_header) /*16ul*/ ;
        payload_size = (unsigned int)((unsigned long int)hdr->length - sizeof(struct usbmuxd_header) /*16ul*/ );
        dict = (void *)0;
        plist_from_xml(payload, payload_size, &dict);
        if(dict == NULL)
        {
          usbmuxd_log((enum loglevel)LL_ERROR, "Could not parse plist from payload!");
          return -1;
        }

        message = (char *)(void *)0;
        node=plist_dict_get_item(dict, "MessageType");
        if(node == NULL)
          tmp_if_expr$3 = (_Bool)1;

        else
        {
          return_value_plist_get_node_type$2=plist_get_node_type(node);
          tmp_if_expr$3 = (signed int)return_value_plist_get_node_type$2 != PLIST_STRING ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$3)
        {
          usbmuxd_log((enum loglevel)LL_ERROR, "Could not read valid MessageType node from plist!");
          plist_free(dict);
          return -1;
        }

        plist_get_string_val(node, &message);
        if(message == ((char *)NULL))
        {
          usbmuxd_log((enum loglevel)LL_ERROR, "Could not extract MessageType from plist!");
          plist_free(dict);
          return -1;
        }

        return_value_strcmp$23=strcmp(message, "Listen");
        if(return_value_strcmp$23 == 0)
        {
          free((void *)message);
          plist_free(dict);
          signed int return_value_send_result$4;
          return_value_send_result$4=send_result(client, hdr->tag, (unsigned int)0);
          if(!(return_value_send_result$4 >= 0))
            return -1;

          usbmuxd_log((enum loglevel)LL_DEBUG, "Client %d now LISTENING", client->fd);
          signed int return_value_start_listen$5;
          return_value_start_listen$5=start_listen(client);
          return return_value_start_listen$5;
        }

        return_value_strcmp$22=strcmp(message, "Connect");
        if(return_value_strcmp$22 == 0)
        {
          unsigned long int val;
          unsigned short int portnum = (unsigned short int)0;
          unsigned int device_id = (unsigned int)0;
          free((void *)message);
          node=plist_dict_get_item(dict, "DeviceID");
          if(node == NULL)
          {
            usbmuxd_log((enum loglevel)LL_ERROR, "Received connect request without device_id!");
            plist_free(dict);
            signed int return_value_send_result$6;
            return_value_send_result$6=send_result(client, hdr->tag, (unsigned int)RESULT_BADDEV);
            if(!(return_value_send_result$6 >= 0))
              return -1;

            return 0;
          }

          val = (unsigned long int)0;
          plist_get_uint_val(node, &val);
          device_id = (unsigned int)val;
          node=plist_dict_get_item(dict, "PortNumber");
          if(node == NULL)
          {
            usbmuxd_log((enum loglevel)LL_ERROR, "Received connect request without port number!");
            plist_free(dict);
            signed int return_value_send_result$7;
            return_value_send_result$7=send_result(client, hdr->tag, (unsigned int)RESULT_BADCOMMAND);
            if(!(return_value_send_result$7 >= 0))
              return -1;

            return 0;
          }

          val = (unsigned long int)0;
          plist_get_uint_val(node, &val);
          portnum = (unsigned short int)val;
          plist_free(dict);
          unsigned short int return_value_ntohs$8;
          return_value_ntohs$8=ntohs(portnum);
          usbmuxd_log((enum loglevel)LL_DEBUG, "Client %d connection request to device %d port %d", client->fd, device_id, return_value_ntohs$8);
          unsigned short int return_value_ntohs$9;
          return_value_ntohs$9=ntohs(portnum);
          res=device_start_connect((signed int)device_id, return_value_ntohs$9, client);
          if(!(res >= 0))
          {
            signed int return_value_send_result$10;
            return_value_send_result$10=send_result(client, hdr->tag, (unsigned int)-res);
            if(!(return_value_send_result$10 >= 0))
              return -1;

          }

          else
          {
            client->connect_tag = hdr->tag;
            client->connect_device = (signed int)device_id;
            client->state = (enum client_state)CLIENT_CONNECTING1;
          }
          return 0;
        }

        return_value_strcmp$21=strcmp(message, "ListDevices");
        if(return_value_strcmp$21 == 0)
        {
          free((void *)message);
          plist_free(dict);
          signed int return_value_send_device_list$11;
          return_value_send_device_list$11=send_device_list(client, hdr->tag);
          if(!(return_value_send_device_list$11 >= 0))
            return -1;

          return 0;
        }

        return_value_strcmp$20=strcmp(message, "ReadBUID");
        if(return_value_strcmp$20 == 0)
        {
          free((void *)message);
          plist_free(dict);
          signed int return_value_send_system_buid$12;
          return_value_send_system_buid$12=send_system_buid(client, hdr->tag);
          if(!(return_value_send_system_buid$12 >= 0))
            return -1;

          return 0;
        }

        return_value_strcmp$19=strcmp(message, "ReadPairRecord");
        if(return_value_strcmp$19 == 0)
        {
          free((void *)message);
          char *client_command$$1$$3$$2$$7$$record_id;
          client_command$$1$$3$$2$$7$$record_id=plist_dict_get_string_val(dict, "PairRecordID");
          plist_free(dict);
          res=send_pair_record(client, hdr->tag, client_command$$1$$3$$2$$7$$record_id);
          if(!(client_command$$1$$3$$2$$7$$record_id == ((char *)NULL)))
            free((void *)client_command$$1$$3$$2$$7$$record_id);

          if(!(res >= 0))
            return -1;

          return 0;
        }

        return_value_strcmp$18=strcmp(message, "SavePairRecord");
        if(return_value_strcmp$18 == 0)
        {
          unsigned int rval = (unsigned int)RESULT_OK;
          free((void *)message);
          char *record_id;
          record_id=plist_dict_get_string_val(dict, "PairRecordID");
          char *record_data = (char *)(void *)0;
          unsigned long int record_size = (unsigned long int)0;
          void *rdata;
          rdata=plist_dict_get_item(dict, "PairRecordData");
          if(!(rdata == NULL))
          {
            return_value_plist_get_node_type$13=plist_get_node_type(rdata);
            if((signed int)return_value_plist_get_node_type$13 == PLIST_DATA)
              plist_get_data_val(rdata, &record_data, &record_size);

          }

          plist_free(dict);
          if(!(record_data == ((char *)NULL)) && !(record_id == ((char *)NULL)))
          {
            res=config_set_device_record(record_id, record_data, record_size);
            if(!(res >= 0))
              rval = (unsigned int)-res;

            free((void *)record_id);
          }

          else
            rval = (unsigned int)22;
          signed int return_value_send_result$14;
          return_value_send_result$14=send_result(client, hdr->tag, rval);
          if(!(return_value_send_result$14 >= 0))
            return -1;

          return 0;
        }

        return_value_strcmp$17=strcmp(message, "DeletePairRecord");
        if(return_value_strcmp$17 == 0)
        {
          unsigned int client_command$$1$$3$$2$$9$$rval = (unsigned int)RESULT_OK;
          free((void *)message);
          char *client_command$$1$$3$$2$$9$$record_id;
          client_command$$1$$3$$2$$9$$record_id=plist_dict_get_string_val(dict, "PairRecordID");
          plist_free(dict);
          if(!(client_command$$1$$3$$2$$9$$record_id == ((char *)NULL)))
          {
            res=config_remove_device_record(client_command$$1$$3$$2$$9$$record_id);
            if(!(res >= 0))
              client_command$$1$$3$$2$$9$$rval = (unsigned int)-res;

            free((void *)client_command$$1$$3$$2$$9$$record_id);
          }

          else
            client_command$$1$$3$$2$$9$$rval = (unsigned int)22;
          signed int return_value_send_result$15;
          return_value_send_result$15=send_result(client, hdr->tag, client_command$$1$$3$$2$$9$$rval);
          if(!(return_value_send_result$15 >= 0))
            return -1;

          return 0;
        }

        usbmuxd_log((enum loglevel)LL_ERROR, "Unexpected command '%s' received!", message);
        free((void *)message);
        plist_free(dict);
        return_value_send_result$16=send_result(client, hdr->tag, (unsigned int)RESULT_BADCOMMAND);
        if(!(return_value_send_result$16 >= 0))
          return -1;

        return 0;
      }
      case (unsigned int)MESSAGE_LISTEN:
      {
        return_value_send_result$24=send_result(client, hdr->tag, (unsigned int)0);
        if(!(return_value_send_result$24 >= 0))
          return -1;

        usbmuxd_log((enum loglevel)LL_DEBUG, "Client %d now LISTENING", client->fd);
        return_value_start_listen$25=start_listen(client);
        return return_value_start_listen$25;
      }
      case (unsigned int)MESSAGE_CONNECT:
      {
        ch = (struct usbmuxd_connect_request *)(void *)hdr;
        return_value_ntohs$26=ntohs(ch->port);
        usbmuxd_log((enum loglevel)LL_DEBUG, "Client %d connection request to device %d port %d", client->fd, ch->device_id, return_value_ntohs$26);
        return_value_ntohs$27=ntohs(ch->port);
        res=device_start_connect((signed int)ch->device_id, return_value_ntohs$27, client);
        if(!(res >= 0))
        {
          signed int return_value_send_result$28;
          return_value_send_result$28=send_result(client, hdr->tag, (unsigned int)-res);
          if(!(return_value_send_result$28 >= 0))
            return -1;

        }

        else
        {
          client->connect_tag = hdr->tag;
          client->connect_device = (signed int)ch->device_id;
          client->state = (enum client_state)CLIENT_CONNECTING1;
        }
        return 0;
      }
      default:
      {
        usbmuxd_log((enum loglevel)LL_ERROR, "Client %d invalid command %d", client->fd, hdr->message);
        return_value_send_result$29=send_result(client, hdr->tag, (unsigned int)RESULT_BADCOMMAND);
        if(!(return_value_send_result$29 >= 0))
          return -1;

        return 0;
      }
    }
    return -1;
  }
}

// client_device_add
// file client.c line 752
void client_device_add(struct device_info *dev)
{
  pthread_mutex_lock(&client_list_mutex);
  usbmuxd_log((enum loglevel)LL_DEBUG, "client_device_add: id %d, location 0x%x, serial %s", dev->id, dev->location, dev->serial);
  device_set_visible(dev->id);
  do
  {
    signed int _iter_757 = 0;
    for( ; !(_iter_757 >= client_list.capacity); _iter_757 = _iter_757 + 1)
      if(!(client_list.list[(signed long int)_iter_757] == NULL))
      {
        struct mux_client *client = (struct mux_client *)(&client_list)->list[(signed long int)_iter_757];
        if((signed int)client->state == CLIENT_LISTEN)
          notify_device_add(client, dev);

      }

  }
  while((_Bool)0);
  pthread_mutex_unlock(&client_list_mutex);
}

// client_device_remove
// file client.c line 764
void client_device_remove(signed int device_id)
{
  pthread_mutex_lock(&client_list_mutex);
  unsigned int id = (unsigned int)device_id;
  usbmuxd_log((enum loglevel)LL_DEBUG, "client_device_remove: id %d", device_id);
  do
  {
    signed int _iter_769 = 0;
    for( ; !(_iter_769 >= client_list.capacity); _iter_769 = _iter_769 + 1)
      if(!(client_list.list[(signed long int)_iter_769] == NULL))
      {
        struct mux_client *client = (struct mux_client *)(&client_list)->list[(signed long int)_iter_769];
        if((signed int)client->state == CLIENT_LISTEN)
          notify_device_remove(client, id);

      }

  }
  while((_Bool)0);
  pthread_mutex_unlock(&client_list_mutex);
}

// client_get_fds
// file client.c line 192
void client_get_fds(struct fdlist *list)
{
  pthread_mutex_lock(&client_list_mutex);
  do
  {
    signed int _iter_195 = 0;
    for( ; !(_iter_195 >= client_list.capacity); _iter_195 = _iter_195 + 1)
      if(!(client_list.list[(signed long int)_iter_195] == NULL))
      {
        struct mux_client *client = (struct mux_client *)(&client_list)->list[(signed long int)_iter_195];
        fdlist_add(list, (enum fdowner)FD_CLIENT, client->fd, client->events);
      }

  }
  while((_Bool)0);
  pthread_mutex_unlock(&client_list_mutex);
}

// client_init
// file client.c line 776
void client_init(void)
{
  usbmuxd_log((enum loglevel)LL_DEBUG, "client_init");
  collection_init(&client_list);
  pthread_mutex_init(&client_list_mutex, (const union anonymous$15 *)(void *)0);
}

// client_notify_connect
// file client.c line 264
signed int client_notify_connect(struct mux_client *client, enum usbmuxd_result result)
{
  usbmuxd_log((enum loglevel)LL_SPEW, "client_notify_connect fd %d result %d", client->fd, result);
  if((signed int)client->state == CLIENT_DEAD)
    return -1;

  else
    if(!((signed int)client->state == CLIENT_CONNECTING1))
    {
      usbmuxd_log((enum loglevel)LL_ERROR, "client_notify_connect when client %d is not in CONNECTING1 state", client->fd);
      return -1;
    }

    else
    {
      signed int return_value_send_result$1;
      return_value_send_result$1=send_result(client, client->connect_tag, (unsigned int)result);
      if(!(return_value_send_result$1 >= 0))
        return -1;

      else
      {
        if((signed int)result == RESULT_OK)
        {
          client->state = (enum client_state)CLIENT_CONNECTING2;
          client->events = (signed short int)0x004;
          free((void *)client->ib_buf);
          client->ib_buf = (unsigned char *)(void *)0;
        }

        else
          client->state = (enum client_state)CLIENT_COMMAND;
        return 0;
      }
    }
}

// client_process
// file client.c line 722
void client_process(signed int fd, signed short int events)
{
  struct mux_client *client = (struct mux_client *)(void *)0;
  pthread_mutex_lock(&client_list_mutex);
  do
  {
    signed int _iter_726 = 0;
    for( ; !(_iter_726 >= client_list.capacity); _iter_726 = _iter_726 + 1)
      if(!(client_list.list[(signed long int)_iter_726] == NULL))
      {
        struct mux_client *lc = (struct mux_client *)(&client_list)->list[(signed long int)_iter_726];
        if(lc->fd == fd)
        {
          client = lc;
          break;
        }

      }

  }
  while((_Bool)0);
  pthread_mutex_unlock(&client_list_mutex);
  if(client == ((struct mux_client *)NULL))
    usbmuxd_log((enum loglevel)LL_INFO, "client_process: fd %d not found in client list", fd);

  else
    if((signed int)client->state == CLIENT_CONNECTED)
    {
      usbmuxd_log((enum loglevel)LL_SPEW, "client_process in CONNECTED state");
      device_client_process(client->connect_device, client, events);
    }

    else
      if(!((0x001 & (signed int)events) == 0))
        process_recv(client);

      else
        if(!((0x004 & (signed int)events) == 0))
          process_send(client);

}

// client_read
// file client.c line 81
signed int client_read(struct mux_client *client, void *buffer, unsigned int len)
{
  usbmuxd_log((enum loglevel)LL_SPEW, "client_read fd %d buf %p len %d", client->fd, buffer, len);
  if(!((signed int)client->state == CLIENT_CONNECTED))
  {
    usbmuxd_log((enum loglevel)LL_ERROR, "Attempted to read from client %d not in CONNECTED state", client->fd);
    return -1;
  }

  else
  {
    signed long int return_value_recv$1;
    return_value_recv$1=recv(client->fd, buffer, (unsigned long int)len, 0);
    return (signed int)return_value_recv$1;
  }
}

// client_set_events
// file client.c line 119
signed int client_set_events(struct mux_client *client, signed short int events)
{
  if(!((signed int)client->state == CLIENT_CONNECTED))
  {
    if((signed int)client->state == CLIENT_CONNECTING2)
      goto __CPROVER_DUMP_L1;

    usbmuxd_log((enum loglevel)LL_ERROR, "client_set_events to client %d not in CONNECTED state", client->fd);
    return -1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    client->devents = events;
    if((signed int)client->state == CLIENT_CONNECTED)
      client->events = events;

    return 0;
  }
}

// client_shutdown
// file client.c line 783
void client_shutdown(void)
{
  usbmuxd_log((enum loglevel)LL_DEBUG, "client_shutdown");
  do
  {
    signed int _iter_786 = 0;
    for( ; !(_iter_786 >= client_list.capacity); _iter_786 = _iter_786 + 1)
      if(!(client_list.list[(signed long int)_iter_786] == NULL))
      {
        struct mux_client *client = (struct mux_client *)(&client_list)->list[(signed long int)_iter_786];
        client_close(client);
      }

  }
  while((_Bool)0);
  pthread_mutex_destroy(&client_list_mutex);
  collection_free(&client_list);
}

// client_write
// file client.c line 99
signed int client_write(struct mux_client *client, void *buffer, unsigned int len)
{
  usbmuxd_log((enum loglevel)LL_SPEW, "client_write fd %d buf %p len %d", client->fd, buffer, len);
  if(!((signed int)client->state == CLIENT_CONNECTED))
  {
    usbmuxd_log((enum loglevel)LL_ERROR, "Attempted to write to client %d not in CONNECTED state", client->fd);
    return -1;
  }

  else
  {
    signed long int return_value_send$1;
    return_value_send$1=send(client->fd, buffer, (unsigned long int)len, 0);
    return (signed int)return_value_send$1;
  }
}

// collection_add
// file utils.h line 52
void collection_add(struct collection *col, void *element)
{
  signed int i = 0;
  for( ; !(i >= col->capacity); i = i + 1)
    if(col->list[(signed long int)i] == NULL)
    {
      col->list[(signed long int)i] = element;
      goto __CPROVER_DUMP_L4;
    }

  void *return_value_realloc$1;
  return_value_realloc$1=realloc((void *)col->list, sizeof(void *) /*8ul*/  * (unsigned long int)(col->capacity + 8));
  col->list = (void **)return_value_realloc$1;
  memset((void *)&col->list[(signed long int)col->capacity], 0, sizeof(void *) /*8ul*/  * (unsigned long int)8);
  col->list[(signed long int)col->capacity] = element;
  col->capacity = col->capacity + 8;

__CPROVER_DUMP_L4:
  ;
}

// collection_copy
// file utils.h line 56
void collection_copy(struct collection *dest, struct collection *src)
{
  if(!(dest == ((struct collection *)NULL)) && !(src == ((struct collection *)NULL)))
  {
    dest->capacity = src->capacity;
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(void *) /*8ul*/  * (unsigned long int)src->capacity);
    dest->list = (void **)return_value_malloc$1;
    memcpy((void *)dest->list, (const void *)src->list, sizeof(void *) /*8ul*/  * (unsigned long int)src->capacity);
  }

}

// collection_count
// file utils.h line 54
signed int collection_count(struct collection *col)
{
  signed int i;
  signed int cnt = 0;
  i = 0;
  for( ; !(i >= col->capacity); i = i + 1)
    if(!(col->list[(signed long int)i] == NULL))
      cnt = cnt + 1;

  return cnt;
}

// collection_free
// file utils.h line 55
void collection_free(struct collection *col)
{
  free((void *)col->list);
  col->list = (void **)(void *)0;
  col->capacity = 0;
}

// collection_init
// file utils.h line 51
void collection_init(struct collection *col)
{
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(void *) /*8ul*/  * (unsigned long int)8);
  col->list = (void **)return_value_malloc$1;
  memset((void *)col->list, 0, sizeof(void *) /*8ul*/  * (unsigned long int)8);
  col->capacity = 8;
}

// collection_remove
// file utils.h line 53
void collection_remove(struct collection *col, void *element)
{
  signed int i = 0;
  for( ; !(i >= col->capacity); i = i + 1)
    if(col->list[(signed long int)i] == element)
    {
      col->list[(signed long int)i] = (void *)0;
      goto __CPROVER_DUMP_L4;
    }

  usbmuxd_log((enum loglevel)LL_ERROR, "collection_remove: element %p not present in collection %p (cap %d)", element, col, col->capacity);

__CPROVER_DUMP_L4:
  ;
}

// config_create_config_dir
// file conf.c line 180
static void config_create_config_dir(void)
{
  const char *config_path;
  config_path=config_get_config_dir();
  struct stat st;
  signed int return_value_stat$1;
  return_value_stat$1=stat(config_path, &st);
  if(!(return_value_stat$1 == 0))
    mkdir_with_parents(config_path, 0755);

}

// config_device_record_get_host_id
// file conf.h line 38
void config_device_record_get_host_id(const char *udid, char **host_id)
{
  void *value = (void *)0;
  config_device_record_get_value(udid, "HostID", &value);
  enum anonymous$14 return_value_plist_get_node_type$1;
  if(!(value == NULL))
  {
    return_value_plist_get_node_type$1=plist_get_node_type(value);
    if((signed int)return_value_plist_get_node_type$1 == PLIST_STRING)
      plist_get_string_val(value, host_id);

  }

  if(!(value == NULL))
    plist_free(value);

  if(*host_id == ((char *)NULL))
    usbmuxd_log((enum loglevel)LL_ERROR, "%s: ERROR couldn't get HostID from pairing record for udid %s", (const void *)"config_device_record_get_host_id", udid);

}

// config_device_record_get_value
// file conf.c line 497
static signed int config_device_record_get_value(const char *udid, const char *key, void **value)
{
  const char *config_path = (const char *)(void *)0;
  char *config_file = (char *)(void *)0;
  config_path=config_get_config_dir();
  config_file=string_concat(config_path, (const void *)"/", udid, (const void *)".plist", (void *)0);
  signed int result;
  result=internal_get_value(config_file, key, value);
  free((void *)config_file);
  return result;
}

// config_generate_system_buid
// file conf.c line 220
static char * config_generate_system_buid()
{
  char *return_value_config_generate_uuid$1;
  return_value_config_generate_uuid$1=config_generate_uuid(1);
  return return_value_config_generate_uuid$1;
}

// config_generate_uuid
// file conf.c line 195
static char * config_generate_uuid(signed int idx)
{
  char *uuid;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(char) /*1ul*/  * (unsigned long int)37);
  uuid = (char *)return_value_malloc$1;
  const char *chars = "ABCDEF0123456789";
  signed long int return_value_time$2;
  return_value_time$2=time((signed long int *)(void *)0);
  srand((unsigned int)(return_value_time$2 - (signed long int)idx));
  signed int i = 0;
  i = 0;
  for( ; !(i >= 36); i = i + 1)
  {
    if(i == 8 || i == 13 || i == 18 || i == 23)
    {
      uuid[(signed long int)i] = (char)45;
      goto __CPROVER_DUMP_L3;
    }

    else
    {
      signed int return_value_get_rand$3;
      return_value_get_rand$3=get_rand(0, 16);
      uuid[(signed long int)i] = chars[(signed long int)return_value_get_rand$3];
    }

  __CPROVER_DUMP_L3:
    ;
  }
  uuid[(signed long int)36] = (char)0;
  return uuid;
}

// config_get_config_dir
// file conf.c line 104
const char * config_get_config_dir()
{
  char *base_config_dir = (char *)(void *)0;
  signed int tmp_post$2;
  if(!(__config_dir == ((char *)NULL)))
    return __config_dir;

  else
  {
    base_config_dir=strdup("/var/lib");
    __config_dir=string_concat(base_config_dir, (const void *)"/", (const void *)"lockdown", (void *)0);
    if(!(__config_dir == ((char *)NULL)))
    {
      signed int i;
      unsigned long int return_value_strlen$1;
      return_value_strlen$1=strlen(__config_dir);
      i = (signed int)(return_value_strlen$1 - (unsigned long int)1);
      for( ; i >= 1; __config_dir[(signed long int)tmp_post$2] = (char)0)
      {
        if(!((signed int)__config_dir[(signed long int)i] == 47))
          break;

        tmp_post$2 = i;
        i = i - 1;
      }
    }

    free((void *)base_config_dir);
    usbmuxd_log((enum loglevel)LL_DEBUG, "initialized config_dir to %s", __config_dir);
    return __config_dir;
  }
}

// config_get_device_record
// file conf.h line 34
signed int config_get_device_record(const char *udid, char **record_data, unsigned long int *record_size)
{
  signed int res = 0;
  config_create_config_dir();
  const char *config_path;
  config_path=config_get_config_dir();
  char *device_record_file;
  device_record_file=string_concat(config_path, (const void *)"/", udid, (const void *)".plist", (void *)0);
  buffer_read_from_filename(device_record_file, record_data, record_size);
  if(*record_data == ((char *)NULL))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(*return_value___errno_location$1);
    usbmuxd_log((enum loglevel)LL_ERROR, "%s: failed to read '%s': %s", (const void *)"config_get_device_record", device_record_file, return_value_strerror$2);
    res = -2;
  }

  free((void *)device_record_file);
  return res;
}

// config_get_system_buid
// file conf.h line 31
void config_get_system_buid(char **system_buid)
{
  void *value = (void *)0;
  config_get_value("SystemBUID", &value);
  enum anonymous$14 return_value_plist_get_node_type$1;
  if(!(value == NULL))
  {
    return_value_plist_get_node_type$1=plist_get_node_type(value);
    if((signed int)return_value_plist_get_node_type$1 == PLIST_STRING)
    {
      plist_get_string_val(value, system_buid);
      usbmuxd_log((enum loglevel)LL_DEBUG, "got %s %s", (const void *)"SystemBUID", *system_buid);
    }

  }

  if(!(value == NULL))
    plist_free(value);

  if(*system_buid == ((char *)NULL))
  {
    usbmuxd_log((enum loglevel)LL_DEBUG, "no previous %s found", (const void *)"SystemBUID");
    *system_buid=config_generate_system_buid();
    config_set_system_buid(*system_buid);
  }

  usbmuxd_log((enum loglevel)LL_DEBUG, "using %s as %s", *system_buid, (const void *)"SystemBUID");
}

// config_get_value
// file conf.c line 302
static signed int config_get_value(const char *key, void **value)
{
  const char *config_path = (const char *)(void *)0;
  char *config_file = (char *)(void *)0;
  config_path=config_get_config_dir();
  config_file=string_concat(config_path, (const void *)"/", (const void *)"SystemConfiguration.plist", (void *)0);
  signed int result;
  result=internal_get_value(config_file, key, value);
  free((void *)config_file);
  return result;
}

// config_has_device_record
// file conf.h line 33
signed int config_has_device_record(const char *udid)
{
  signed int res = 0;
  if(udid == ((const char *)NULL))
    return 0;

  else
  {
    config_create_config_dir();
    const char *config_path;
    config_path=config_get_config_dir();
    char *device_record_file;
    device_record_file=string_concat(config_path, (const void *)"/", udid, (const void *)".plist", (void *)0);
    struct stat st;
    signed int return_value_stat$1;
    return_value_stat$1=stat(device_record_file, &st);
    if(return_value_stat$1 == 0)
    {
      if((61440u & st.st_mode) == 32768u)
        res = 1;

    }

    free((void *)device_record_file);
    return res;
  }
}

// config_remove_device_record
// file conf.h line 36
signed int config_remove_device_record(const char *udid)
{
  signed int res = 0;
  const char *config_path;
  config_path=config_get_config_dir();
  char *device_record_file;
  device_record_file=string_concat(config_path, (const void *)"/", udid, (const void *)".plist", (void *)0);
  signed int return_value_remove$4;
  return_value_remove$4=remove(device_record_file);
  if(!(return_value_remove$4 == 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    res = -(*return_value___errno_location$1);
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    char *return_value_strerror$3;
    return_value_strerror$3=strerror(*return_value___errno_location$2);
    usbmuxd_log((enum loglevel)LL_DEBUG, "could not remove %s: %s", device_record_file, return_value_strerror$3);
  }

  free((void *)device_record_file);
  return res;
}

// config_set_device_record
// file conf.h line 35
signed int config_set_device_record(const char *udid, char *record_data, unsigned long int record_size)
{
  signed int res = 0;
  _Bool tmp_if_expr$3;
  enum anonymous$14 return_value_plist_get_node_type$2;
  if(record_data == ((char *)NULL) || udid == ((const char *)NULL) || !(record_size >= 8ul))
    return -22;

  else
  {
    void *plist = (void *)0;
    signed int return_value_memcmp$1;
    return_value_memcmp$1=memcmp((const void *)record_data, (const void *)"bplist00", (unsigned long int)8);
    if(return_value_memcmp$1 == 0)
      plist_from_bin(record_data, (unsigned int)record_size, &plist);

    else
      plist_from_xml(record_data, (unsigned int)record_size, &plist);
    if(plist == NULL)
      tmp_if_expr$3 = (_Bool)1;

    else
    {
      return_value_plist_get_node_type$2=plist_get_node_type(plist);
      tmp_if_expr$3 = (signed int)return_value_plist_get_node_type$2 != PLIST_DICT ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$3)
    {
      if(!(plist == NULL))
        plist_free(plist);

      return -22;
    }

    else
    {
      config_create_config_dir();
      const char *config_path;
      config_path=config_get_config_dir();
      char *device_record_file;
      device_record_file=string_concat(config_path, (const void *)"/", udid, (const void *)".plist", (void *)0);
      remove(device_record_file);
      signed int return_value_plist_write_to_filename$6;
      return_value_plist_write_to_filename$6=plist_write_to_filename(plist, device_record_file, (enum plist_format_t)PLIST_FORMAT_XML);
      if(return_value_plist_write_to_filename$6 == 0)
      {
        signed int *return_value___errno_location$4;
        return_value___errno_location$4=__errno_location();
        char *return_value_strerror$5;
        return_value_strerror$5=strerror(*return_value___errno_location$4);
        usbmuxd_log((enum loglevel)LL_DEBUG, "could not open '%s' for writing: %s", device_record_file, return_value_strerror$5);
        res = -2;
      }

      free((void *)device_record_file);
      if(!(plist == NULL))
        plist_free(plist);

      return res;
    }
  }
}

// config_set_system_buid
// file conf.c line 322
static signed int config_set_system_buid(const char *system_buid)
{
  void *return_value_plist_new_string$1;
  return_value_plist_new_string$1=plist_new_string(system_buid);
  signed int return_value_config_set_value$2;
  return_value_config_set_value$2=config_set_value("SystemBUID", return_value_plist_new_string$1);
  return return_value_config_set_value$2;
}

// config_set_value
// file conf.c line 264
static signed int config_set_value(const char *key, void *value)
{
  const char *config_path = (const char *)(void *)0;
  char *config_file = (char *)(void *)0;
  config_create_config_dir();
  config_path=config_get_config_dir();
  config_file=string_concat(config_path, (const void *)"/", (const void *)"SystemConfiguration.plist", (void *)0);
  signed int result;
  result=internal_set_value(config_file, key, value);
  free((void *)config_file);
  return result;
}

// connection_device_input
// file device.c line 523
static void connection_device_input(struct mux_connection *conn, unsigned char *payload, unsigned int payload_length)
{
  if(!(conn->ib_capacity >= conn->ib_size + payload_length))
  {
    usbmuxd_log((enum loglevel)LL_ERROR, "Input buffer overflow on device %d connection %d->%d (space=%d, payload=%d)", conn->dev->id, conn->sport, conn->dport, conn->ib_capacity - conn->ib_size, payload_length);
    connection_teardown(conn);
  }

  else
  {
    memcpy((void *)(conn->ib_buf + (signed long int)conn->ib_size), (const void *)payload, (unsigned long int)payload_length);
    conn->ib_size = conn->ib_size + payload_length;
    conn->rx_recvd = conn->rx_recvd + payload_length;
    update_connection(conn);
  }
}

// connection_teardown
// file device.c line 300
static void connection_teardown(struct mux_connection *conn)
{
  signed int res;
  signed int size;
  _Bool tmp_if_expr$1;
  if(!((signed int)conn->state == CONN_DEAD))
  {
    usbmuxd_log((enum loglevel)LL_DEBUG, "connection_teardown dev %d sport %d dport %d", conn->dev->id, conn->sport, conn->dport);
    if(!((signed int)conn->dev->state == MUXDEV_DEAD))
    {
      if(!((signed int)conn->state == CONN_DYING))
      {
        if(!((signed int)conn->state == CONN_REFUSED))
        {
          res=send_tcp(conn, (unsigned char)0x04, (const unsigned char *)(void *)0, 0);
          if(!(res >= 0))
            usbmuxd_log((enum loglevel)LL_ERROR, "Error sending TCP RST to device %d (%d->%d)", conn->dev->id, conn->sport, conn->dport);

        }

      }

    }

    if(!(conn->client == ((struct mux_client *)NULL)))
    {
      if((signed int)conn->state == CONN_REFUSED)
        tmp_if_expr$1 = (_Bool)1;

      else
        tmp_if_expr$1 = (signed int)conn->state == CONN_CONNECTING ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$1)
        client_notify_connect(conn->client, (enum usbmuxd_result)RESULT_CONNREFUSED);

      else
      {
        conn->state = (enum mux_conn_state)CONN_DEAD;
        if(!((0x004 & (signed int)conn->events) == 0))
        {
          if(conn->ib_size >= 1u)
            while((_Bool)1)
            {
              size=client_write(conn->client, (void *)conn->ib_buf, conn->ib_size);
              if(!(size >= 1))
                break;

              if(size == (signed int)conn->ib_size)
              {
                conn->ib_size = (unsigned int)0;
                break;
              }

              else
              {
                conn->ib_size = conn->ib_size - (unsigned int)size;
                memmove((void *)conn->ib_buf, (const void *)(conn->ib_buf + (signed long int)size), (unsigned long int)conn->ib_size);
              }
            }

        }

        client_close(conn->client);
      }
    }

    if(!(conn->ib_buf == ((unsigned char *)NULL)))
      free((void *)conn->ib_buf);

    if(!(conn->ob_buf == ((unsigned char *)NULL)))
      free((void *)conn->ob_buf);

    collection_remove(&conn->dev->connections, (void *)conn);
    free((void *)conn);
  }

}

// create_device_attached_plist
// file client.c line 287
static void * create_device_attached_plist(struct device_info *dev)
{
  void *dict;
  dict=plist_new_dict();
  void *return_value_plist_new_string$1;
  return_value_plist_new_string$1=plist_new_string("Attached");
  plist_dict_set_item(dict, "MessageType", return_value_plist_new_string$1);
  void *return_value_plist_new_uint$2;
  return_value_plist_new_uint$2=plist_new_uint((unsigned long int)dev->id);
  plist_dict_set_item(dict, "DeviceID", return_value_plist_new_uint$2);
  void *props;
  props=plist_new_dict();
  void *return_value_plist_new_uint$3;
  return_value_plist_new_uint$3=plist_new_uint((unsigned long int)480000000);
  plist_dict_set_item(props, "ConnectionSpeed", return_value_plist_new_uint$3);
  void *return_value_plist_new_string$4;
  return_value_plist_new_string$4=plist_new_string("USB");
  plist_dict_set_item(props, "ConnectionType", return_value_plist_new_string$4);
  void *return_value_plist_new_uint$5;
  return_value_plist_new_uint$5=plist_new_uint((unsigned long int)dev->id);
  plist_dict_set_item(props, "DeviceID", return_value_plist_new_uint$5);
  void *return_value_plist_new_uint$6;
  return_value_plist_new_uint$6=plist_new_uint((unsigned long int)dev->location);
  plist_dict_set_item(props, "LocationID", return_value_plist_new_uint$6);
  void *return_value_plist_new_uint$7;
  return_value_plist_new_uint$7=plist_new_uint((unsigned long int)dev->pid);
  plist_dict_set_item(props, "ProductID", return_value_plist_new_uint$7);
  void *return_value_plist_new_string$8;
  return_value_plist_new_string$8=plist_new_string(dev->serial);
  plist_dict_set_item(props, "SerialNumber", return_value_plist_new_string$8);
  plist_dict_set_item(dict, "Properties", props);
  return dict;
}

// create_socket
// file main.c line 70
static signed int create_socket(void)
{
  struct sockaddr_un bind_addr;
  signed int listenfd;
  signed int return_value_unlink$4;
  return_value_unlink$4=unlink(socket_path);
  signed int *return_value___errno_location$3;
  if(return_value_unlink$4 == -1)
  {
    return_value___errno_location$3=__errno_location();
    if(!(*return_value___errno_location$3 == 2))
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      char *return_value_strerror$2;
      return_value_strerror$2=strerror(*return_value___errno_location$1);
      usbmuxd_log((enum loglevel)LL_FATAL, "unlink(%s) failed: %s", socket_path, return_value_strerror$2);
      return -1;
    }

  }

  listenfd=socket(1, 1, 0);
  if(listenfd == -1)
  {
    signed int *return_value___errno_location$5;
    return_value___errno_location$5=__errno_location();
    char *return_value_strerror$6;
    return_value_strerror$6=strerror(*return_value___errno_location$5);
    usbmuxd_log((enum loglevel)LL_FATAL, "socket() failed: %s", return_value_strerror$6);
    return -1;
  }

  bzero((void *)&bind_addr, sizeof(struct sockaddr_un) /*110ul*/ );
  bind_addr.sun_family = (unsigned short int)1;
  strcpy(bind_addr.sun_path, socket_path);
  signed int return_value_bind$9;
  return_value_bind$9=bind(listenfd, (struct sockaddr *)&bind_addr, (unsigned int)sizeof(struct sockaddr_un) /*110ul*/ );
  if(!(return_value_bind$9 == 0))
  {
    signed int *return_value___errno_location$7;
    return_value___errno_location$7=__errno_location();
    char *return_value_strerror$8;
    return_value_strerror$8=strerror(*return_value___errno_location$7);
    usbmuxd_log((enum loglevel)LL_FATAL, "bind() failed: %s", return_value_strerror$8);
    return -1;
  }

  signed int return_value_listen$12;
  return_value_listen$12=listen(listenfd, 5);
  if(!(return_value_listen$12 == 0))
  {
    signed int *return_value___errno_location$10;
    return_value___errno_location$10=__errno_location();
    char *return_value_strerror$11;
    return_value_strerror$11=strerror(*return_value___errno_location$10);
    usbmuxd_log((enum loglevel)LL_FATAL, "listen() failed: %s", return_value_strerror$11);
    return -1;
  }

  chmod(socket_path, (unsigned int)0666);
  return listenfd;
}

// daemonize
// file main.c line 249
static signed int daemonize(void)
{
  signed int pid;
  signed int sid;
  signed int pfd[2l];
  signed int res;
  signed int return_value_getppid$1;
  return_value_getppid$1=getppid();
  if(return_value_getppid$1 == 1)
    return 0;

  else
  {
    res=pipe(pfd);
    if(!(res >= 0))
    {
      usbmuxd_log((enum loglevel)LL_FATAL, "pipe() failed.");
      return res;
    }

    else
    {
      pid=fork();
      if(!(pid >= 0))
      {
        usbmuxd_log((enum loglevel)LL_FATAL, "fork() failed.");
        return pid;
      }

      else
      {
        if(pid >= 1)
        {
          signed int status;
          close(pfd[(signed long int)1]);
          signed long int return_value_read$2;
          return_value_read$2=read(pfd[(signed long int)0], (void *)&status, sizeof(signed int) /*4ul*/ );
          res = (signed int)return_value_read$2;
          if(!((unsigned long int)res == sizeof(signed int) /*4ul*/ ))
          {
            fprintf(stderr, "usbmuxd: ERROR: Failed to get init status from child, check syslog for messages.\n");
            exit(1);
          }

          if(!(status == 0))
            fprintf(stderr, "usbmuxd: ERROR: Child process exited with error %d, check syslog for messages.\n", status);

          exit(status);
        }

        daemon_pipe = pfd[(signed long int)1];
        close(pfd[(signed long int)0]);
        report_to_parent = 1;
        sid=setsid();
        if(!(sid >= 0))
        {
          usbmuxd_log((enum loglevel)LL_FATAL, "setsid() failed.");
          return -1;
        }

        else
        {
          pid=fork();
          if(!(pid >= 0))
          {
            usbmuxd_log((enum loglevel)LL_FATAL, "fork() failed (second).");
            return pid;
          }

          else
          {
            if(pid >= 1)
            {
              close(daemon_pipe);
              exit(0);
            }

            signed int return_value_chdir$3;
            return_value_chdir$3=chdir("/");
            if(!(return_value_chdir$3 >= 0))
            {
              usbmuxd_log((enum loglevel)LL_FATAL, "chdir() failed");
              return -2;
            }

            else
            {
              struct _IO_FILE *return_value_freopen$4;
              return_value_freopen$4=freopen("/dev/null", "r", stdin);
              if(return_value_freopen$4 == ((struct _IO_FILE *)NULL))
              {
                usbmuxd_log((enum loglevel)LL_FATAL, "Redirection of stdin failed.");
                return -3;
              }

              else
              {
                struct _IO_FILE *return_value_freopen$5;
                return_value_freopen$5=freopen("/dev/null", "w", stdout);
                if(return_value_freopen$5 == ((struct _IO_FILE *)NULL))
                {
                  usbmuxd_log((enum loglevel)LL_FATAL, "Redirection of stdout failed.");
                  return -3;
                }

                else
                  return 0;
              }
            }
          }
        }
      }
    }
  }
}

// dev_poll_remain_ms
// file usb-linux.c line 535
static signed int dev_poll_remain_ms(void)
{
  signed int msecs;
  struct timeval tv;
  if(device_polling == 0)
    return 100000;

  else
  {
    gettimeofday(&tv, (struct timezone *)(void *)0);
    msecs = (signed int)((next_dev_poll_time.tv_sec - tv.tv_sec) * (signed long int)1000);
    msecs = msecs + (signed int)((next_dev_poll_time.tv_usec - tv.tv_usec) / (signed long int)1000);
    if(!(msecs >= 0))
      return 0;

    else
      return msecs;
  }
}

// device_abort_connect
// file device.h line 40
void device_abort_connect(signed int device_id, struct mux_client *client)
{
  struct mux_connection *conn;
  conn=get_mux_connection(device_id, client);
  if(!(conn == ((struct mux_connection *)NULL)))
    connection_teardown(conn);

  else
    usbmuxd_log((enum loglevel)LL_WARNING, "Attempted to abort for nonexistent connection for device %d", device_id);
}

// device_add
// file device.c line 810
signed int device_add(struct usb_device *usbdev)
{
  signed int res;
  signed int id;
  id=get_next_device_id();
  struct mux_device *dev;
  unsigned int return_value_usb_get_location$1;
  return_value_usb_get_location$1=usb_get_location(usbdev);
  usbmuxd_log((enum loglevel)LL_NOTICE, "Connecting to new device on location 0x%x as ID %d", return_value_usb_get_location$1, id);
  void *return_value_malloc$2;
  return_value_malloc$2=malloc(sizeof(struct mux_device) /*80ul*/ );
  dev = (struct mux_device *)return_value_malloc$2;
  dev->id = id;
  dev->usbdev = usbdev;
  dev->state = (enum mux_dev_state)MUXDEV_INIT;
  dev->visible = 0;
  dev->next_sport = (unsigned short int)1;
  void *return_value_malloc$3;
  return_value_malloc$3=malloc((unsigned long int)65536);
  dev->pktbuf = (unsigned char *)return_value_malloc$3;
  dev->pktlen = (unsigned int)0;
  dev->preflight_cb_data = (void *)0;
  dev->version = 0;
  struct version_header vh;
  vh.major=htonl((unsigned int)2);
  vh.minor=htonl((unsigned int)0);
  vh.padding = (unsigned int)0;
  res=send_packet(dev, (enum mux_protocol)MUX_PROTO_VERSION, (void *)&vh, (void *)0, 0);
  if(!(res >= 0))
  {
    usbmuxd_log((enum loglevel)LL_ERROR, "Error sending version request packet to device %d", id);
    free((void *)dev);
    return res;
  }

  else
  {
    pthread_mutex_lock(&device_list_mutex);
    collection_add(&device_list, (void *)dev);
    pthread_mutex_unlock(&device_list_mutex);
    return 0;
  }
}

// device_check_timeouts
// file device.c line 959
void device_check_timeouts(void)
{
  unsigned long int ct;
  ct=mstime64();
  pthread_mutex_lock(&device_list_mutex);
  do
  {
    signed int _iter_963 = 0;
    for( ; !(_iter_963 >= device_list.capacity); _iter_963 = _iter_963 + 1)
      if(!(device_list.list[(signed long int)_iter_963] == NULL))
      {
        struct mux_device *dev = (struct mux_device *)(&device_list)->list[(signed long int)_iter_963];
        if((signed int)dev->state == MUXDEV_ACTIVE)
          do
          {
            signed int _iter_965 = 0;
            for( ; !(_iter_965 >= dev->connections.capacity); _iter_965 = _iter_965 + 1)
              if(!(dev->connections.list[(signed long int)_iter_965] == NULL))
              {
                struct mux_connection *conn = (struct mux_connection *)(&dev->connections)->list[(signed long int)_iter_965];
                if((signed int)conn->state == CONN_CONNECTED)
                {
                  if(!((1 & conn->flags) == 0))
                  {
                    if(ct + -conn->last_ack_time >= 31ul)
                    {
                      usbmuxd_log((enum loglevel)LL_DEBUG, "Sending ACK due to expired timeout (%lu -> %lu)", conn->last_ack_time, ct);
                      send_tcp_ack(conn);
                    }

                  }

                }

              }

          }
          while((_Bool)0);

      }

  }
  while((_Bool)0);
  pthread_mutex_unlock(&device_list_mutex);
}

// device_client_process
// file device.h line 39
void device_client_process(signed int device_id, struct mux_client *client, signed short int events)
{
  struct mux_connection *conn;
  conn=get_mux_connection(device_id, client);
  if(conn == ((struct mux_connection *)NULL))
    usbmuxd_log((enum loglevel)LL_WARNING, "Could not find connection for device %d client %p", device_id, client);

  else
  {
    usbmuxd_log((enum loglevel)LL_SPEW, "device_client_process (%d)", events);
    signed int res;
    signed int size;
    if(!((0x004 & (signed int)events) == 0))
    {
      if(conn->ib_size >= 1u)
      {
        size=client_write(conn->client, (void *)conn->ib_buf, conn->ib_size);
        if(!(size >= 1))
        {
          usbmuxd_log((enum loglevel)LL_DEBUG, "error writing to client (%d)", size);
          connection_teardown(conn);
          goto __CPROVER_DUMP_L9;
        }

        conn->tx_ack = conn->tx_ack + (unsigned int)size;
        if(size == (signed int)conn->ib_size)
          conn->ib_size = (unsigned int)0;

        else
        {
          conn->ib_size = conn->ib_size - (unsigned int)size;
          memmove((void *)conn->ib_buf, (const void *)(conn->ib_buf + (signed long int)size), (unsigned long int)conn->ib_size);
        }
      }

    }

    if(!((0x001 & (signed int)events) == 0))
    {
      if(conn->sendable >= 1u)
      {
        size=client_read(conn->client, (void *)conn->ob_buf, conn->sendable);
        if(!(size >= 1))
        {
          if(!(size >= 0))
            usbmuxd_log((enum loglevel)LL_DEBUG, "error reading from client (%d)", size);

          connection_teardown(conn);
          goto __CPROVER_DUMP_L9;
        }

        res=send_tcp(conn, (unsigned char)0x10, conn->ob_buf, size);
        if(!(res >= 0))
        {
          connection_teardown(conn);
          goto __CPROVER_DUMP_L9;
        }

        conn->tx_seq = conn->tx_seq + (unsigned int)size;
      }

    }

    update_connection(conn);
  }

__CPROVER_DUMP_L9:
  ;
}

// device_control_input
// file device.c line 579
static void device_control_input(struct mux_device *dev, unsigned char *payload, unsigned int payload_length)
{
  if(payload_length >= 1u)
    switch((signed int)payload[(signed long int)0])
    {
      case 3:
      {
        if(payload_length >= 2u)
        {
          char *device_control_input$$1$$1$$1$$1$$buf;
          void *return_value_malloc$1;
          return_value_malloc$1=malloc((unsigned long int)payload_length);
          device_control_input$$1$$1$$1$$1$$buf = (char *)return_value_malloc$1;
          strncpy(device_control_input$$1$$1$$1$$1$$buf, (char *)payload + (signed long int)1, (unsigned long int)(payload_length - (unsigned int)1));
          device_control_input$$1$$1$$1$$1$$buf[(signed long int)(payload_length - (unsigned int)1)] = (char)0;
          usbmuxd_log((enum loglevel)LL_ERROR, "%s: ERROR: %s", (const void *)"device_control_input", device_control_input$$1$$1$$1$$1$$buf);
          free((void *)device_control_input$$1$$1$$1$$1$$buf);
        }

        else
          usbmuxd_log((enum loglevel)LL_ERROR, "%s: Error occured, but empty error message", (const void *)"device_control_input");
        break;
      }
      case 7:
        if(payload_length >= 2u)
        {
          char *buf;
          void *return_value_malloc$2;
          return_value_malloc$2=malloc((unsigned long int)payload_length);
          buf = (char *)return_value_malloc$2;
          strncpy(buf, (char *)payload + (signed long int)1, (unsigned long int)(payload_length - (unsigned int)1));
          buf[(signed long int)(payload_length - (unsigned int)1)] = (char)0;
          usbmuxd_log((enum loglevel)LL_INFO, "%s: %s", (const void *)"device_control_input", buf);
          free((void *)buf);
        }

    }

  else
    usbmuxd_log((enum loglevel)LL_WARNING, "%s: got a type 1 packet without payload", (const void *)"device_control_input");
}

// device_data_input
// file device.c line 709
void device_data_input(struct usb_device *usbdev, unsigned char *buffer, unsigned int length)
{
  struct mux_device *dev = (struct mux_device *)(void *)0;
  pthread_mutex_lock(&device_list_mutex);
  do
  {
    signed int _iter_713 = 0;
    for( ; !(_iter_713 >= device_list.capacity); _iter_713 = _iter_713 + 1)
      if(!(device_list.list[(signed long int)_iter_713] == NULL))
      {
        struct mux_device *tdev = (struct mux_device *)(&device_list)->list[(signed long int)_iter_713];
        if(tdev->usbdev == usbdev)
        {
          dev = tdev;
          break;
        }

      }

  }
  while((_Bool)0);
  pthread_mutex_unlock(&device_list_mutex);
  if(dev == ((struct mux_device *)NULL))
  {
    unsigned int return_value_usb_get_location$1;
    return_value_usb_get_location$1=usb_get_location(usbdev);
    usbmuxd_log((enum loglevel)LL_WARNING, "Cannot find device entry for RX input from USB device %p on location 0x%x", usbdev, return_value_usb_get_location$1);
    goto __CPROVER_DUMP_L26;
  }

  _Bool tmp_if_expr$3;
  unsigned int return_value_ntohl$2;
  unsigned int return_value_ntohl$4;
  unsigned int return_value_ntohl$8;
  if(!(length == 0u))
  {
    if(length >= 16385u || length >= 65537u)
      usbmuxd_log((enum loglevel)LL_ERROR, "Too much data received from USB (%d), file a bug", length);

    else
    {
      usbmuxd_log((enum loglevel)LL_SPEW, "Mux data input for device %p: %p len %d", dev, buffer, length);
      if(!(dev->pktlen == 0u))
      {
        if(dev->pktlen + length >= 65537u)
        {
          usbmuxd_log((enum loglevel)LL_ERROR, "Incoming split packet is too large (%d so far), dropping!", length + dev->pktlen);
          dev->pktlen = (unsigned int)0;
          goto __CPROVER_DUMP_L26;
        }

        memcpy((void *)(dev->pktbuf + (signed long int)dev->pktlen), (const void *)buffer, (unsigned long int)length);
        struct mux_header *device_data_input$$1$$4$$mhdr = (struct mux_header *)dev->pktbuf;
        if(!(length >= 16384u))
          tmp_if_expr$3 = (_Bool)1;

        else
        {
          return_value_ntohl$2=ntohl(device_data_input$$1$$4$$mhdr->length);
          tmp_if_expr$3 = return_value_ntohl$2 == length + dev->pktlen ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$3)
        {
          buffer = dev->pktbuf;
          length = length + dev->pktlen;
          dev->pktlen = (unsigned int)0;
          usbmuxd_log((enum loglevel)LL_SPEW, "Gathered mux data from buffer (total size: %d)", length);
        }

        else
        {
          dev->pktlen = dev->pktlen + length;
          usbmuxd_log((enum loglevel)LL_SPEW, "Appended mux data to buffer (total size: %d)", dev->pktlen);
          goto __CPROVER_DUMP_L26;
        }
      }

      else
      {
        struct mux_header *device_data_input$$1$$5$$mhdr = (struct mux_header *)buffer;
        if(length == 16384u)
        {
          return_value_ntohl$4=ntohl(device_data_input$$1$$5$$mhdr->length);
          if(!(length >= return_value_ntohl$4))
          {
            memcpy((void *)dev->pktbuf, (const void *)buffer, (unsigned long int)length);
            dev->pktlen = length;
            usbmuxd_log((enum loglevel)LL_SPEW, "Copied mux data to buffer (size: %d)", dev->pktlen);
            goto __CPROVER_DUMP_L26;
          }

        }

      }
      struct mux_header *mhdr = (struct mux_header *)buffer;
      signed int mux_header_size = (signed int)(dev->version < 2 ? (unsigned long int)8 : sizeof(struct mux_header) /*16ul*/ );
      unsigned int return_value_ntohl$6;
      return_value_ntohl$6=ntohl(mhdr->length);
      if(!(return_value_ntohl$6 == length))
      {
        unsigned int return_value_ntohl$5;
        return_value_ntohl$5=ntohl(mhdr->length);
        usbmuxd_log((enum loglevel)LL_ERROR, "Incoming packet size mismatch (dev %d, expected %d, got %d)", dev->id, return_value_ntohl$5, length);
        goto __CPROVER_DUMP_L26;
      }

      struct tcphdr *th;
      unsigned char *payload;
      unsigned int payload_length;
      if(dev->version >= 2)
        dev->rx_seq=ntohs(mhdr->rx_seq);

      unsigned int return_value_ntohl$7;
      return_value_ntohl$7=ntohl(mhdr->protocol);
      switch(return_value_ntohl$7)
      {
        case (unsigned int)MUX_PROTO_VERSION:
        {
          if(!((unsigned long int)length >= sizeof(struct version_header) /*12ul*/  + (unsigned long int)mux_header_size))
          {
            usbmuxd_log((enum loglevel)LL_ERROR, "Incoming version packet is too small (%d)", length);
            goto __CPROVER_DUMP_L26;
          }

          device_version_input(dev, (struct version_header *)((char *)mhdr + (signed long int)mux_header_size));
          break;
        }
        case (unsigned int)MUX_PROTO_CONTROL:
        {
          payload = (unsigned char *)(mhdr + (signed long int)1);
          payload_length = length - (unsigned int)mux_header_size;
          device_control_input(dev, payload, payload_length);
          break;
        }
        case (unsigned int)MUX_PROTO_TCP:
        {
          if(!((unsigned long int)length >= sizeof(struct tcphdr) /*20ul*/  + (unsigned long int)mux_header_size))
          {
            usbmuxd_log((enum loglevel)LL_ERROR, "Incoming TCP packet is too small (%d)", length);
            goto __CPROVER_DUMP_L26;
          }

          th = (struct tcphdr *)((char *)mhdr + (signed long int)mux_header_size);
          payload = (unsigned char *)(th + (signed long int)1);
          payload_length = (unsigned int)(((unsigned long int)length - sizeof(struct tcphdr) /*20ul*/ ) - (unsigned long int)mux_header_size);
          device_tcp_input(dev, th, payload, payload_length);
          break;
        }
        default:
        {
          return_value_ntohl$8=ntohl(mhdr->protocol);
          usbmuxd_log((enum loglevel)LL_ERROR, "Incoming packet for device %d has unknown protocol 0x%x)", dev->id, return_value_ntohl$8);
        }
      }
    }
  }


__CPROVER_DUMP_L26:
  ;
}

// device_get_count
// file device.c line 894
signed int device_get_count(signed int include_hidden)
{
  signed int count = 0;
  struct collection dev_list = { .list=(void **)(void *)0, .capacity=0 };
  pthread_mutex_lock(&device_list_mutex);
  collection_copy(&dev_list, &device_list);
  pthread_mutex_unlock(&device_list_mutex);
  _Bool tmp_if_expr$1;
  do
  {
    signed int _iter_902 = 0;
    for( ; !(_iter_902 >= dev_list.capacity); _iter_902 = _iter_902 + 1)
      if(!(dev_list.list[(signed long int)_iter_902] == NULL))
      {
        struct mux_device *dev = (struct mux_device *)(&dev_list)->list[(signed long int)_iter_902];
        if((signed int)dev->state == MUXDEV_ACTIVE)
        {
          if(!(include_hidden == 0))
            tmp_if_expr$1 = (_Bool)1;

          else
            tmp_if_expr$1 = dev->visible != 0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$1)
            count = count + 1;

        }

      }

  }
  while((_Bool)0);
  collection_free(&dev_list);
  return count;
}

// device_get_list
// file device.h line 46
signed int device_get_list(signed int include_hidden, struct device_info **devices)
{
  signed int count = 0;
  struct collection dev_list = { .list=(void **)(void *)0, .capacity=0 };
  pthread_mutex_lock(&device_list_mutex);
  collection_copy(&dev_list, &device_list);
  pthread_mutex_unlock(&device_list_mutex);
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct device_info) /*24ul*/  * (unsigned long int)dev_list.capacity);
  *devices = (struct device_info *)return_value_malloc$1;
  struct device_info *p = *devices;
  _Bool tmp_if_expr$2;
  do
  {
    signed int _iter_922 = 0;
    for( ; !(_iter_922 >= device_list.capacity); _iter_922 = _iter_922 + 1)
      if(!(device_list.list[(signed long int)_iter_922] == NULL))
      {
        struct mux_device *dev = (struct mux_device *)(&device_list)->list[(signed long int)_iter_922];
        if((signed int)dev->state == MUXDEV_ACTIVE)
        {
          if(!(include_hidden == 0))
            tmp_if_expr$2 = (_Bool)1;

          else
            tmp_if_expr$2 = dev->visible != 0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$2)
          {
            p->id = dev->id;
            p->serial=usb_get_serial(dev->usbdev);
            p->location=usb_get_location(dev->usbdev);
            p->pid=usb_get_pid(dev->usbdev);
            count = count + 1;
            p = p + 1l;
          }

        }

      }

  }
  while((_Bool)0);
  collection_free(&dev_list);
  return count;
}

// device_get_timeout
// file device.c line 938
signed int device_get_timeout(void)
{
  unsigned long int oldest = (unsigned long int)-1LL;
  pthread_mutex_lock(&device_list_mutex);
  do
  {
    signed int _iter_942 = 0;
    for( ; !(_iter_942 >= device_list.capacity); _iter_942 = _iter_942 + 1)
      if(!(device_list.list[(signed long int)_iter_942] == NULL))
      {
        struct mux_device *dev = (struct mux_device *)(&device_list)->list[(signed long int)_iter_942];
        if((signed int)dev->state == MUXDEV_ACTIVE)
          do
          {
            signed int _iter_944 = 0;
            for( ; !(_iter_944 >= dev->connections.capacity); _iter_944 = _iter_944 + 1)
              if(!(dev->connections.list[(signed long int)_iter_944] == NULL))
              {
                struct mux_connection *conn = (struct mux_connection *)(&dev->connections)->list[(signed long int)_iter_944];
                if((signed int)conn->state == CONN_CONNECTED)
                {
                  if(!((1 & conn->flags) == 0))
                  {
                    if(!(conn->last_ack_time >= oldest))
                      oldest = conn->last_ack_time;

                  }

                }

              }

          }
          while((_Bool)0);

      }

  }
  while((_Bool)0);
  pthread_mutex_unlock(&device_list_mutex);
  unsigned long int ct;
  ct=mstime64();
  if((signed long int)oldest == -1ll)
    return 100000;

  else
    if(ct + -oldest >= 31ul)
      return 0;

    else
      return (signed int)((unsigned long int)30 - (ct - oldest));
}

// device_init
// file device.c line 978
void device_init(void)
{
  usbmuxd_log((enum loglevel)LL_DEBUG, "device_init");
  collection_init(&device_list);
  pthread_mutex_init(&device_list_mutex, (const union anonymous$15 *)(void *)0);
  next_device_id = 1;
}

// device_kill_connections
// file device.c line 986
void device_kill_connections(void)
{
  usbmuxd_log((enum loglevel)LL_DEBUG, "device_kill_connections");
  do
  {
    signed int _iter_989 = 0;
    for( ; !(_iter_989 >= device_list.capacity); _iter_989 = _iter_989 + 1)
      if(!(device_list.list[(signed long int)_iter_989] == NULL))
      {
        struct mux_device *dev = (struct mux_device *)(&device_list)->list[(signed long int)_iter_989];
        if(!((signed int)dev->state == MUXDEV_INIT))
          do
          {
            signed int _iter_991 = 0;
            for( ; !(_iter_991 >= dev->connections.capacity); _iter_991 = _iter_991 + 1)
              if(!(dev->connections.list[(signed long int)_iter_991] == NULL))
              {
                struct mux_connection *conn = (struct mux_connection *)(&dev->connections)->list[(signed long int)_iter_991];
                connection_teardown(conn);
              }

          }
          while((_Bool)0);

      }

  }
  while((_Bool)0);
  usb_process_timeout(100);
}

// device_remove
// file device.c line 841
void device_remove(struct usb_device *usbdev)
{
  pthread_mutex_lock(&device_list_mutex);
  do
  {
    signed int _iter_844 = 0;
    for( ; !(_iter_844 >= device_list.capacity); _iter_844 = _iter_844 + 1)
      if(!(device_list.list[(signed long int)_iter_844] == NULL))
      {
        struct mux_device *dev = (struct mux_device *)(&device_list)->list[(signed long int)_iter_844];
        if(dev->usbdev == usbdev)
        {
          unsigned int return_value_usb_get_location$1;
          return_value_usb_get_location$1=usb_get_location(usbdev);
          usbmuxd_log((enum loglevel)LL_NOTICE, "Removed device %d on location 0x%x", dev->id, return_value_usb_get_location$1);
          if((signed int)dev->state == MUXDEV_ACTIVE)
          {
            dev->state = (enum mux_dev_state)MUXDEV_DEAD;
            do
            {
              signed int _iter_849 = 0;
              for( ; !(_iter_849 >= dev->connections.capacity); _iter_849 = _iter_849 + 1)
                if(!(dev->connections.list[(signed long int)_iter_849] == NULL))
                {
                  struct mux_connection *conn = (struct mux_connection *)(&dev->connections)->list[(signed long int)_iter_849];
                  connection_teardown(conn);
                }

            }
            while((_Bool)0);
            client_device_remove(dev->id);
            collection_free(&dev->connections);
          }

          if(!(dev->preflight_cb_data == NULL))
            preflight_device_remove_cb(dev->preflight_cb_data);

          collection_remove(&device_list, (void *)dev);
          pthread_mutex_unlock(&device_list_mutex);
          free((void *)dev->pktbuf);
          free((void *)dev);
          goto __CPROVER_DUMP_L12;
        }

      }

  }
  while((_Bool)0);
  pthread_mutex_unlock(&device_list_mutex);
  unsigned int return_value_usb_get_location$2;
  return_value_usb_get_location$2=usb_get_location(usbdev);
  usbmuxd_log((enum loglevel)LL_WARNING, "Cannot find device entry while removing USB device %p on location 0x%x", usbdev, return_value_usb_get_location$2);

__CPROVER_DUMP_L12:
  ;
}

// device_set_preflight_cb_data
// file device.c line 882
void device_set_preflight_cb_data(signed int device_id, void *data)
{
  pthread_mutex_lock(&device_list_mutex);
  do
  {
    signed int _iter_885 = 0;
    for( ; !(_iter_885 >= device_list.capacity); _iter_885 = _iter_885 + 1)
      if(!(device_list.list[(signed long int)_iter_885] == NULL))
      {
        struct mux_device *dev = (struct mux_device *)(&device_list)->list[(signed long int)_iter_885];
        if(dev->id == device_id)
        {
          dev->preflight_cb_data = data;
          break;
        }

      }

  }
  while((_Bool)0);
  pthread_mutex_unlock(&device_list_mutex);
}

// device_set_visible
// file device.h line 42
void device_set_visible(signed int device_id)
{
  pthread_mutex_lock(&device_list_mutex);
  do
  {
    signed int _iter_873 = 0;
    for( ; !(_iter_873 >= device_list.capacity); _iter_873 = _iter_873 + 1)
      if(!(device_list.list[(signed long int)_iter_873] == NULL))
      {
        struct mux_device *dev = (struct mux_device *)(&device_list)->list[(signed long int)_iter_873];
        if(dev->id == device_id)
        {
          dev->visible = 1;
          break;
        }

      }

  }
  while((_Bool)0);
  pthread_mutex_unlock(&device_list_mutex);
}

// device_shutdown
// file device.c line 1000
void device_shutdown(void)
{
  usbmuxd_log((enum loglevel)LL_DEBUG, "device_shutdown");
  pthread_mutex_lock(&device_list_mutex);
  do
  {
    signed int _iter_1004 = 0;
    for( ; !(_iter_1004 >= device_list.capacity); _iter_1004 = _iter_1004 + 1)
      if(!(device_list.list[(signed long int)_iter_1004] == NULL))
      {
        struct mux_device *dev = (struct mux_device *)(&device_list)->list[(signed long int)_iter_1004];
        do
        {
          signed int _iter_1005 = 0;
          for( ; !(_iter_1005 >= dev->connections.capacity); _iter_1005 = _iter_1005 + 1)
            if(!(dev->connections.list[(signed long int)_iter_1005] == NULL))
            {
              struct mux_connection *conn = (struct mux_connection *)(&dev->connections)->list[(signed long int)_iter_1005];
              connection_teardown(conn);
            }

        }
        while((_Bool)0);
        collection_free(&dev->connections);
        collection_remove(&device_list, (void *)dev);
        free((void *)dev);
      }

  }
  while((_Bool)0);
  pthread_mutex_unlock(&device_list_mutex);
  pthread_mutex_destroy(&device_list_mutex);
  collection_free(&device_list);
}

// device_start_connect
// file device.h line 38
signed int device_start_connect(signed int device_id, unsigned short int dport, struct mux_client *client)
{
  struct mux_device *dev;
  dev=get_mux_device_for_id(device_id);
  if(dev == ((struct mux_device *)NULL))
  {
    usbmuxd_log((enum loglevel)LL_WARNING, "Attempted to connect to nonexistent device %d", device_id);
    return -RESULT_BADDEV;
  }

  else
  {
    unsigned short int sport;
    sport=find_sport(dev);
    if(sport == 0)
    {
      usbmuxd_log((enum loglevel)LL_WARNING, "Unable to allocate port for device %d", device_id);
      return -RESULT_BADDEV;
    }

    else
    {
      struct mux_connection *conn;
      void *return_value_malloc$1;
      return_value_malloc$1=malloc(sizeof(struct mux_connection) /*112ul*/ );
      conn = (struct mux_connection *)return_value_malloc$1;
      memset((void *)conn, 0, sizeof(struct mux_connection) /*112ul*/ );
      conn->dev = dev;
      conn->client = client;
      conn->state = (enum mux_conn_state)CONN_CONNECTING;
      conn->sport = sport;
      conn->dport = dport;
      conn->tx_seq = (unsigned int)0;
      conn->tx_ack = (unsigned int)0;
      conn->tx_acked = (unsigned int)0;
      conn->tx_win = (unsigned int)131072;
      conn->rx_recvd = (unsigned int)0;
      conn->flags = 0;
      conn->max_payload = (unsigned int)(((unsigned long int)(3 * 16384) - sizeof(struct mux_header) /*16ul*/ ) - sizeof(struct tcphdr) /*20ul*/ );
      void *return_value_malloc$2;
      return_value_malloc$2=malloc((unsigned long int)65536);
      conn->ob_buf = (unsigned char *)return_value_malloc$2;
      conn->ob_capacity = (unsigned int)65536;
      void *return_value_malloc$3;
      return_value_malloc$3=malloc((unsigned long int)262144);
      conn->ib_buf = (unsigned char *)return_value_malloc$3;
      conn->ib_capacity = (unsigned int)262144;
      conn->ib_size = (unsigned int)0;
      signed int res;
      res=send_tcp(conn, (unsigned char)0x02, (const unsigned char *)(void *)0, 0);
      if(!(res >= 0))
      {
        usbmuxd_log((enum loglevel)LL_ERROR, "Error sending TCP SYN to device %d (%d->%d)", dev->id, sport, dport);
        free((void *)conn);
        return -RESULT_CONNREFUSED;
      }

      else
      {
        collection_add(&dev->connections, (void *)conn);
        return 0;
      }
    }
  }
}

// device_tcp_input
// file device.c line 619
static void device_tcp_input(struct mux_device *dev, struct tcphdr *th, unsigned char *payload, unsigned int payload_length)
{
  unsigned short int sport;
  sport=ntohs(th->$anon0.$anon0.th_dport);
  unsigned short int dport;
  dport=ntohs(th->$anon0.$anon0.th_sport);
  struct mux_connection *conn = (struct mux_connection *)(void *)0;
  unsigned int return_value_ntohl$1;
  return_value_ntohl$1=ntohl(th->$anon0.$anon0.th_seq);
  unsigned int return_value_ntohl$2;
  return_value_ntohl$2=ntohl(th->$anon0.$anon0.th_ack);
  unsigned short int return_value_ntohs$3;
  return_value_ntohs$3=ntohs(th->$anon0.$anon0.th_win);
  unsigned short int return_value_ntohs$4;
  return_value_ntohs$4=ntohs(th->$anon0.$anon0.th_win);
  usbmuxd_log((enum loglevel)LL_DEBUG, "[IN] dev=%d sport=%d dport=%d seq=%d ack=%d flags=0x%x window=%d[%d] len=%d", dev->id, dport, sport, return_value_ntohl$1, return_value_ntohl$2, th->$anon0.$anon0.th_flags, (signed int)return_value_ntohs$3 << 8, return_value_ntohs$4, payload_length);
  if(!((signed int)dev->state == MUXDEV_ACTIVE))
    usbmuxd_log((enum loglevel)LL_ERROR, "Received TCP packet from device %d but the device isn't active yet, discarding", dev->id);

  else
  {
    do
    {
      signed int _iter_634 = 0;
      for( ; !(_iter_634 >= dev->connections.capacity); _iter_634 = _iter_634 + 1)
        if(!(dev->connections.list[(signed long int)_iter_634] == NULL))
        {
          struct mux_connection *lconn = (struct mux_connection *)(&dev->connections)->list[(signed long int)_iter_634];
          if(lconn->sport == sport)
          {
            if(lconn->dport == dport)
            {
              conn = lconn;
              break;
            }

          }

        }

    }
    while((_Bool)0);
    if(conn == ((struct mux_connection *)NULL))
    {
      if((0x04 & (signed int)th->$anon0.$anon0.th_flags) == 0)
      {
        usbmuxd_log((enum loglevel)LL_INFO, "No connection for device %d incoming packet %d->%d", dev->id, dport, sport);
        unsigned int return_value_ntohl$5;
        return_value_ntohl$5=ntohl(th->$anon0.$anon0.th_seq);
        signed int return_value_send_anon_rst$6;
        return_value_send_anon_rst$6=send_anon_rst(dev, sport, dport, return_value_ntohl$5);
        if(!(return_value_send_anon_rst$6 >= 0))
          usbmuxd_log((enum loglevel)LL_ERROR, "Error sending TCP RST to device %d (%d->%d)", conn->dev->id, sport, dport);

      }

    }

    else
    {
      conn->rx_seq=ntohl(th->$anon0.$anon0.th_seq);
      conn->rx_ack=ntohl(th->$anon0.$anon0.th_ack);
      unsigned short int return_value_ntohs$7;
      return_value_ntohs$7=ntohs(th->$anon0.$anon0.th_win);
      conn->rx_win = (unsigned int)((signed int)return_value_ntohs$7 << 8);
      if(!((0x04 & (signed int)th->$anon0.$anon0.th_flags) == 0))
      {
        char *buf;
        void *return_value_malloc$8;
        return_value_malloc$8=malloc((unsigned long int)(payload_length + (unsigned int)1));
        buf = (char *)return_value_malloc$8;
        memcpy((void *)buf, (const void *)payload, (unsigned long int)payload_length);
        if(!(payload_length == 0u))
        {
          if((signed int)buf[(signed long int)(payload_length + 4294967295u)] == 10)
            buf[(signed long int)(payload_length - (unsigned int)1)] = (char)0;

        }

        buf[(signed long int)payload_length] = (char)0;
        usbmuxd_log((enum loglevel)LL_DEBUG, "RST reason: %s", buf);
        free((void *)buf);
      }

      if((signed int)conn->state == CONN_CONNECTING)
      {
        if(!((signed int)th->$anon0.$anon0.th_flags == 18))
        {
          if(!((0x04 & (signed int)th->$anon0.$anon0.th_flags) == 0))
            conn->state = (enum mux_conn_state)CONN_REFUSED;

          usbmuxd_log((enum loglevel)LL_INFO, "Connection refused by device %d (%d->%d)", dev->id, sport, dport);
          connection_teardown(conn);
        }

        else
        {
          conn->tx_seq = conn->tx_seq + 1u;
          conn->tx_ack = conn->tx_ack + 1u;
          conn->rx_recvd = conn->rx_seq;
          signed int return_value_send_tcp$9;
          return_value_send_tcp$9=send_tcp(conn, (unsigned char)0x10, (const unsigned char *)(void *)0, 0);
          if(!(return_value_send_tcp$9 >= 0))
          {
            usbmuxd_log((enum loglevel)LL_ERROR, "Error sending TCP ACK to device %d (%d->%d)", dev->id, sport, dport);
            connection_teardown(conn);
            goto __CPROVER_DUMP_L20;
          }

          conn->state = (enum mux_conn_state)CONN_CONNECTED;
          signed int return_value_client_notify_connect$10;
          return_value_client_notify_connect$10=client_notify_connect(conn->client, (enum usbmuxd_result)RESULT_OK);
          if(!(return_value_client_notify_connect$10 >= 0))
          {
            conn->client = (struct mux_client *)(void *)0;
            connection_teardown(conn);
          }

          update_connection(conn);
        }
      }

      else
        if((signed int)conn->state == CONN_CONNECTED)
        {
          if(!((signed int)th->$anon0.$anon0.th_flags == 0x10))
          {
            usbmuxd_log((enum loglevel)LL_INFO, "Connection reset by device %d (%d->%d)", dev->id, sport, dport);
            if(!((0x04 & (signed int)th->$anon0.$anon0.th_flags) == 0))
              conn->state = (enum mux_conn_state)CONN_DYING;

            connection_teardown(conn);
          }

          else
          {
            connection_device_input(conn, payload, payload_length);
            send_tcp_ack(conn);
          }
        }

    }
  }

__CPROVER_DUMP_L20:
  ;
}

// device_version_input
// file device.c line 546
static void device_version_input(struct mux_device *dev, struct version_header *vh)
{
  if(!((signed int)dev->state == MUXDEV_INIT))
    usbmuxd_log((enum loglevel)LL_WARNING, "Version packet from already initialized device %d", dev->id);

  else
  {
    vh->major=ntohl(vh->major);
    vh->minor=ntohl(vh->minor);
    if(!(vh->major == 2u))
    {
      if(vh->major == 1u)
        goto __CPROVER_DUMP_L2;

      usbmuxd_log((enum loglevel)LL_ERROR, "Device %d has unknown version %d.%d", dev->id, vh->major, vh->minor);
      pthread_mutex_lock(&device_list_mutex);
      collection_remove(&device_list, (void *)dev);
      pthread_mutex_unlock(&device_list_mutex);
      free((void *)dev);
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      dev->version = (signed int)vh->major;
      if(dev->version >= 2)
        send_packet(dev, (enum mux_protocol)MUX_PROTO_SETUP, (void *)0, (const void *)"\a", 1);

      unsigned int return_value_usb_get_location$1;
      return_value_usb_get_location$1=usb_get_location(dev->usbdev);
      const char *return_value_usb_get_serial$2;
      return_value_usb_get_serial$2=usb_get_serial(dev->usbdev);
      usbmuxd_log((enum loglevel)LL_NOTICE, "Connected to v%d.%d device %d on location 0x%x with serial number %s", dev->version, vh->minor, dev->id, return_value_usb_get_location$1, return_value_usb_get_serial$2);
      dev->state = (enum mux_dev_state)MUXDEV_ACTIVE;
      collection_init(&dev->connections);
      struct device_info info;
      info.id = dev->id;
      info.location=usb_get_location(dev->usbdev);
      info.serial=usb_get_serial(dev->usbdev);
      info.pid=usb_get_pid(dev->usbdev);
      preflight_worker_device_add(&info);
    }
  }
}

// fdlist_add
// file utils.h line 42
void fdlist_add(struct fdlist *list, enum fdowner owner, signed int fd, signed short int events)
{
  if(list->count == list->capacity)
  {
    list->capacity = list->capacity * 2;
    void *return_value_realloc$1;
    return_value_realloc$1=realloc((void *)list->owners, sizeof(enum fdowner) /*4ul*/  * (unsigned long int)list->capacity);
    list->owners = (enum fdowner *)return_value_realloc$1;
    void *return_value_realloc$2;
    return_value_realloc$2=realloc((void *)list->fds, sizeof(struct pollfd) /*8ul*/  * (unsigned long int)list->capacity);
    list->fds = (struct pollfd *)return_value_realloc$2;
  }

  list->owners[(signed long int)list->count] = owner;
  (list->fds + (signed long int)list->count)->fd = fd;
  (list->fds + (signed long int)list->count)->events = events;
  (list->fds + (signed long int)list->count)->revents = (signed short int)0;
  list->count = list->count + 1;
}

// fdlist_create
// file utils.c line 38
void fdlist_create(struct fdlist *list)
{
  list->count = 0;
  list->capacity = 4;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(enum fdowner) /*4ul*/  * (unsigned long int)list->capacity);
  list->owners = (enum fdowner *)return_value_malloc$1;
  void *return_value_malloc$2;
  return_value_malloc$2=malloc(sizeof(struct pollfd) /*8ul*/  * (unsigned long int)list->capacity);
  list->fds = (struct pollfd *)return_value_malloc$2;
}

// fdlist_free
// file utils.c line 59
void fdlist_free(struct fdlist *list)
{
  list->count = 0;
  list->capacity = 0;
  free((void *)list->owners);
  list->owners = (enum fdowner *)(void *)0;
  free((void *)list->fds);
  list->fds = (struct pollfd *)(void *)0;
}

// fdlist_reset
// file utils.c line 69
void fdlist_reset(struct fdlist *list)
{
  list->count = 0;
}

// find_sport
// file device.c line 241
static unsigned short int find_sport(struct mux_device *dev)
{
  signed int return_value_collection_count$1;
  return_value_collection_count$1=collection_count(&dev->connections);
  unsigned short int tmp_post$2;
  if(return_value_collection_count$1 >= 65535)
    return (unsigned short int)0;

  else
    while((_Bool)1)
    {
      signed int ok = 1;
      do
      {
        signed int _iter_248 = 0;
        for( ; !(_iter_248 >= dev->connections.capacity); _iter_248 = _iter_248 + 1)
          if(!(dev->connections.list[(signed long int)_iter_248] == NULL))
          {
            struct mux_connection *conn = (struct mux_connection *)(&dev->connections)->list[(signed long int)_iter_248];
            if(dev->next_sport == conn->sport)
            {
              dev->next_sport = dev->next_sport + 1;
              ok = 0;
              break;
            }

          }

      }
      while((_Bool)0);
      if(!(ok == 0))
      {
        tmp_post$2 = dev->next_sport;
        dev->next_sport = dev->next_sport + 1;
        return tmp_post$2;
      }

    }
}

// get_mux_connection
// file device.c line 146
static struct mux_connection * get_mux_connection(signed int device_id, struct mux_client *client)
{
  struct mux_connection *conn = (struct mux_connection *)(void *)0;
  pthread_mutex_lock(&device_list_mutex);
  do
  {
    signed int _iter_150 = 0;
    for( ; !(_iter_150 >= device_list.capacity); _iter_150 = _iter_150 + 1)
      if(!(device_list.list[(signed long int)_iter_150] == NULL))
      {
        struct mux_device *dev = (struct mux_device *)(&device_list)->list[(signed long int)_iter_150];
        if(dev->id == device_id)
        {
          do
          {
            signed int _iter_152 = 0;
            for( ; !(_iter_152 >= dev->connections.capacity); _iter_152 = _iter_152 + 1)
              if(!(dev->connections.list[(signed long int)_iter_152] == NULL))
              {
                struct mux_connection *lconn = (struct mux_connection *)(&dev->connections)->list[(signed long int)_iter_152];
                if(lconn->client == client)
                {
                  conn = lconn;
                  break;
                }

              }

          }
          while((_Bool)0);
          break;
        }

      }

  }
  while((_Bool)0);
  pthread_mutex_unlock(&device_list_mutex);
  return conn;
}

// get_mux_device_for_id
// file device.c line 131
static struct mux_device * get_mux_device_for_id(signed int device_id)
{
  struct mux_device *dev = (struct mux_device *)(void *)0;
  pthread_mutex_lock(&device_list_mutex);
  do
  {
    signed int _iter_135 = 0;
    for( ; !(_iter_135 >= device_list.capacity); _iter_135 = _iter_135 + 1)
      if(!(device_list.list[(signed long int)_iter_135] == NULL))
      {
        struct mux_device *cdev = (struct mux_device *)(&device_list)->list[(signed long int)_iter_135];
        if(cdev->id == device_id)
        {
          dev = cdev;
          break;
        }

      }

  }
  while((_Bool)0);
  pthread_mutex_unlock(&device_list_mutex);
  return dev;
}

// get_next_device_id
// file device.c line 166
static signed int get_next_device_id(void)
{
  signed int tmp_post$1;
  while((_Bool)1)
  {
    signed int ok = 1;
    pthread_mutex_lock(&device_list_mutex);
    do
    {
      signed int _iter_171 = 0;
      for( ; !(_iter_171 >= device_list.capacity); _iter_171 = _iter_171 + 1)
        if(!(device_list.list[(signed long int)_iter_171] == NULL))
        {
          struct mux_device *dev = (struct mux_device *)(&device_list)->list[(signed long int)_iter_171];
          if(dev->id == next_device_id)
          {
            next_device_id = next_device_id + 1;
            ok = 0;
            break;
          }

        }

    }
    while((_Bool)0);
    pthread_mutex_unlock(&device_list_mutex);
    if(!(ok == 0))
    {
      tmp_post$1 = next_device_id;
      next_device_id = next_device_id + 1;
      return tmp_post$1;
    }

  }
}

// get_rand
// file conf.c line 189
static signed int get_rand(signed int min, signed int max)
{
  signed int retval;
  signed int return_value_rand$1;
  return_value_rand$1=rand();
  retval = return_value_rand$1 % (max - min) + min;
  return retval;
}

// handle_signal
// file main.c line 104
static void handle_signal(signed int sig)
{
  if(!(sig == 10) && !(sig == 12))
  {
    usbmuxd_log((enum loglevel)LL_NOTICE, "Caught signal %d, exiting", sig);
    should_exit = 1;
  }

  else
    if(!(opt_enable_exit == 0))
    {
      if(sig == 10)
      {
        usbmuxd_log((enum loglevel)LL_INFO, "Caught SIGUSR1, checking if we can terminate (no more devices attached)...");
        signed int return_value_device_get_count$1;
        return_value_device_get_count$1=device_get_count(1);
        if(return_value_device_get_count$1 >= 1)
          usbmuxd_log((enum loglevel)LL_NOTICE, "Refusing to terminate, there are still devices attached. Kill me with signal 15 (TERM) to force quit.");

        else
          should_exit = 1;
      }

      else
        if(sig == 12)
        {
          usbmuxd_log((enum loglevel)LL_INFO, "Caught SIGUSR2, scheduling device discovery");
          should_discover = 1;
        }

    }

    else
      usbmuxd_log((enum loglevel)LL_INFO, "Caught SIGUSR1/2 but this instance was not started with \"--enable-exit\", ignoring.");
}

// internal_get_value
// file conf.c line 282
static signed int internal_get_value(const char *config_file, const char *key, void **value)
{
  *value = (void *)0;
  void *config = (void *)0;
  signed int return_value_plist_read_from_filename$1;
  return_value_plist_read_from_filename$1=plist_read_from_filename(&config, config_file);
  if(!(return_value_plist_read_from_filename$1 == 0))
  {
    usbmuxd_log((enum loglevel)LL_DEBUG, "reading key %s from config_file %s", key, config_file);
    void *n;
    n=plist_dict_get_item(config, key);
    if(!(n == NULL))
    {
      *value=plist_copy(n);
      plist_free(n);
      n = (void *)0;
    }

  }

  plist_free(config);
  return 1;
}

// internal_set_value
// file conf.c line 225
static signed int internal_set_value(const char *config_file, const char *key, void *value)
{
  if(config_file == ((const char *)NULL))
    return 0;

  else
  {
    void *config = (void *)0;
    plist_read_from_filename(&config, config_file);
    if(config == NULL)
    {
      config=plist_new_dict();
      plist_dict_set_item(config, key, value);
    }

    else
    {
      void *n;
      n=plist_dict_get_item(config, key);
      if(!(n == NULL))
        plist_dict_remove_item(config, key);

      plist_dict_set_item(config, key, value);
      remove(config_file);
    }
    char *value_string = (char *)(void *)0;
    enum anonymous$14 return_value_plist_get_node_type$1;
    return_value_plist_get_node_type$1=plist_get_node_type(value);
    if((signed int)return_value_plist_get_node_type$1 == PLIST_STRING)
    {
      plist_get_string_val(value, &value_string);
      usbmuxd_log((enum loglevel)LL_DEBUG, "setting key %s to %s in config_file %s", key, value_string, config_file);
      if(!(value_string == ((char *)NULL)))
        free((void *)value_string);

    }

    else
      usbmuxd_log((enum loglevel)LL_DEBUG, "setting key %s in config_file %s", key, config_file);
    plist_write_to_filename(config, config_file, (enum plist_format_t)PLIST_FORMAT_XML);
    plist_free(config);
    return 1;
  }
}

// level_to_syslog_level
// file log.c line 54
static signed int level_to_syslog_level(signed int level)
{
  signed int result = level + 2;
  if(result >= 8)
    result = 7;

  return result;
}

// libusb_fill_bulk_transfer
// file /usr/include/libusb-1.0/libusb.h line 1545
static inline void libusb_fill_bulk_transfer(struct libusb_transfer *transfer, struct libusb_device_handle *dev_handle, unsigned char endpoint, unsigned char *buffer, signed int length, void (*callback)(struct libusb_transfer *), void *user_data, unsigned int timeout)
{
  transfer->dev_handle = dev_handle;
  transfer->endpoint = endpoint;
  transfer->type = (unsigned char)2;
  transfer->timeout = timeout;
  transfer->buffer = buffer;
  transfer->length = length;
  transfer->user_data = user_data;
  transfer->callback = callback;
}

// lockdownd_set_untrusted_host_buid
// file preflight.c line 62
static void lockdownd_set_untrusted_host_buid(struct lockdownd_client_private *lockdown)
{
  char *system_buid = (char *)(void *)0;
  config_get_system_buid(&system_buid);
  usbmuxd_log((enum loglevel)LL_DEBUG, "%s: Setting UntrustedHostBUID to %s", (const void *)"lockdownd_set_untrusted_host_buid", system_buid);
  void *return_value_plist_new_string$1;
  return_value_plist_new_string$1=plist_new_string(system_buid);
  lockdownd_set_value(lockdown, (const char *)(void *)0, "UntrustedHostBUID", return_value_plist_new_string$1);
  free((void *)system_buid);
}

// log_disable_syslog
// file log.c line 47
void log_disable_syslog()
{
  if(!(log_syslog == 0))
    closelog();

}

// log_enable_syslog
// file log.c line 39
void log_enable_syslog()
{
  if(log_syslog == 0)
  {
    openlog("usbmuxd", 0x01, 0);
    log_syslog = 1;
  }

}

// main
// file main.c line 460
signed int main(signed int argc, char **argv)
{
  signed int listenfd;
  signed int res = 0;
  signed int lfd;
  struct flock lock;
  char pids[10l];
  parse_opts(argc, argv);
  argc = argc - optind;
  argv = argv + (signed long int)optind;
  if(foreground == 0)
  {
    verbose = verbose + LL_WARNING;
    log_enable_syslog();
  }

  else
    verbose = verbose + LL_NOTICE;
  log_level = (unsigned int)verbose;
  usbmuxd_log((enum loglevel)LL_NOTICE, "usbmuxd v%s starting up", (const void *)"1.1.0");
  should_exit = 0;
  should_discover = 0;
  set_signal_handlers();
  signal(13, (void (*)(signed int))1);
  lfd=open(lockfile, 01 | 0100, 0644);
  res = lfd;
  _Bool tmp_if_expr$3;
  signed int return_value_kill$2;
  _Bool tmp_if_expr$6;
  signed int return_value_kill$5;
  signed int return_value_getpid$7;
  unsigned long int return_value_strlen$8;
  signed long int return_value_write$9;
  unsigned long int return_value_strlen$10;
  struct rlimit rlim;
  const char *userprefdir;
  struct stat fst;
  signed int return_value_stat$17;
  unsigned int return_value_getuid$29;
  _Bool tmp_if_expr$31;
  unsigned int return_value_geteuid$30;
  _Bool tmp_if_expr$24;
  _Bool tmp_if_expr$28;
  unsigned int return_value_getgid$27;
  if(res == -1)
    usbmuxd_log((enum loglevel)LL_FATAL, "Could not open lockfile");

  else
  {
    lock.l_type = (signed short int)1;
    lock.l_whence = (signed short int)0;
    lock.l_start = (signed long int)0;
    lock.l_len = (signed long int)0;
    lock.l_pid = 0;
    fcntl(lfd, 5, &lock);
    close(lfd);
    if(!((signed int)lock.l_type == 2))
    {
      if(!(opt_exit == 0))
      {
        if(!(lock.l_pid == 0))
        {
          return_value_kill$2=kill(lock.l_pid, 0);
          tmp_if_expr$3 = !(return_value_kill$2 != 0) ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$3 = (_Bool)0;
        if(tmp_if_expr$3)
        {
          usbmuxd_log((enum loglevel)LL_NOTICE, "Sending signal %d to instance with pid %d", exit_signal, lock.l_pid);
          res = 0;
          signed int return_value_kill$1;
          return_value_kill$1=kill(lock.l_pid, exit_signal);
          if(!(return_value_kill$1 >= 0))
          {
            usbmuxd_log((enum loglevel)LL_FATAL, "Could not deliver signal %d to pid %d", exit_signal, lock.l_pid);
            res = -1;
          }

          goto terminate;
        }

        else
        {
          usbmuxd_log((enum loglevel)LL_ERROR, "Could not determine pid of the other running instance!");
          res = -1;
          goto terminate;
        }
      }

      if(opt_disable_hotplug == 0)
      {
        usbmuxd_log((enum loglevel)LL_ERROR, "Another instance is already running (pid %d). exiting.", lock.l_pid);
        res = -1;
      }

      else
      {
        usbmuxd_log((enum loglevel)LL_NOTICE, "Another instance is already running (pid %d). Telling it to check for devices.", lock.l_pid);
        if(!(lock.l_pid == 0))
        {
          return_value_kill$5=kill(lock.l_pid, 0);
          tmp_if_expr$6 = !(return_value_kill$5 != 0) ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$6 = (_Bool)0;
        if(tmp_if_expr$6)
        {
          usbmuxd_log((enum loglevel)LL_NOTICE, "Sending signal SIGUSR2 to instance with pid %d", lock.l_pid);
          res = 0;
          signed int return_value_kill$4;
          return_value_kill$4=kill(lock.l_pid, 12);
          if(!(return_value_kill$4 >= 0))
          {
            usbmuxd_log((enum loglevel)LL_FATAL, "Could not deliver SIGUSR2 to pid %d", lock.l_pid);
            res = -1;
          }

        }

        else
        {
          usbmuxd_log((enum loglevel)LL_ERROR, "Could not determine pid of the other running instance!");
          res = -1;
        }
      }
    }

    else
    {
      unlink(lockfile);
      if(!(opt_exit == 0))
        usbmuxd_log((enum loglevel)LL_NOTICE, "No running instance found, none killed. Exiting.");

      else
        if(foreground == 0)
        {
          res=daemonize();
          if(res >= 0)
            goto __CPROVER_DUMP_L19;

          fprintf(stderr, "usbmuxd: FATAL: Could not daemonize!\n");
          usbmuxd_log((enum loglevel)LL_FATAL, "Could not daemonize!");
        }

        else
        {

        __CPROVER_DUMP_L19:
          ;
          lfd=open(lockfile, 01 | 0100 | 01000 | 0200, 0644);
          res = lfd;
          if(!(res >= 0))
            usbmuxd_log((enum loglevel)LL_FATAL, "Could not open lockfile");

          else
          {
            lock.l_type = (signed short int)1;
            lock.l_whence = (signed short int)0;
            lock.l_start = (signed long int)0;
            lock.l_len = (signed long int)0;
            res=fcntl(lfd, 6, &lock);
            if(!(res >= 0))
              usbmuxd_log((enum loglevel)LL_FATAL, "Lockfile locking failed!");

            else
            {
              return_value_getpid$7=getpid();
              sprintf(pids, "%d", return_value_getpid$7);
              return_value_strlen$8=strlen(pids);
              return_value_write$9=write(lfd, (const void *)pids, return_value_strlen$8);
              res = (signed int)return_value_write$9;
              return_value_strlen$10=strlen(pids);
              if(!((unsigned long int)res == return_value_strlen$10))
              {
                usbmuxd_log((enum loglevel)LL_FATAL, "Could not write pidfile!");
                if(res >= 0)
                  res = -2;

              }

              else
              {
                getrlimit((enum __rlimit_resource)RLIMIT_NOFILE, &rlim);
                rlim.rlim_max = (unsigned long int)65536;
                setrlimit((enum __rlimit_resource)RLIMIT_NOFILE, (struct rlimit *)&rlim);
                usbmuxd_log((enum loglevel)LL_INFO, "Creating socket");
                listenfd=create_socket();
                res = listenfd;
                if(listenfd >= 0)
                {
                  userprefdir=config_get_config_dir();
                  memset((void *)&fst, 0, sizeof(struct stat) /*144ul*/ );
                  return_value_stat$17=stat(userprefdir, &fst);
                  if(!(return_value_stat$17 >= 0))
                  {
                    signed int return_value_mkdir$13;
                    return_value_mkdir$13=mkdir(userprefdir, (unsigned int)0775);
                    if(!(return_value_mkdir$13 >= 0))
                    {
                      signed int *return_value___errno_location$11;
                      return_value___errno_location$11=__errno_location();
                      char *return_value_strerror$12;
                      return_value_strerror$12=strerror(*return_value___errno_location$11);
                      usbmuxd_log((enum loglevel)LL_FATAL, "Failed to create required directory '%s': %s", userprefdir, return_value_strerror$12);
                      res = -1;
                      goto terminate;
                    }

                    signed int return_value_stat$16;
                    return_value_stat$16=stat(userprefdir, &fst);
                    if(!(return_value_stat$16 >= 0))
                    {
                      signed int *return_value___errno_location$14;
                      return_value___errno_location$14=__errno_location();
                      char *return_value_strerror$15;
                      return_value_strerror$15=strerror(*return_value___errno_location$14);
                      usbmuxd_log((enum loglevel)LL_FATAL, "stat() failed after creating directory '%s': %s", userprefdir, return_value_strerror$15);
                      res = -1;
                      goto terminate;
                    }

                  }

                  if(!(fst.st_mode == 1533u))
                  {
                    signed int return_value_chmod$20;
                    return_value_chmod$20=chmod(userprefdir, (unsigned int)02775);
                    if(!(return_value_chmod$20 >= 0))
                    {
                      signed int *return_value___errno_location$18;
                      return_value___errno_location$18=__errno_location();
                      char *return_value_strerror$19;
                      return_value_strerror$19=strerror(*return_value___errno_location$18);
                      usbmuxd_log((enum loglevel)LL_WARNING, "chmod(%s, 02775) failed: %s", userprefdir, return_value_strerror$19);
                    }

                  }

                  if(!(drop_privileges == 0))
                  {
                    return_value_getuid$29=getuid();
                    if(return_value_getuid$29 == 0u)
                      tmp_if_expr$31 = (_Bool)1;

                    else
                    {
                      return_value_geteuid$30=geteuid();
                      tmp_if_expr$31 = return_value_geteuid$30 == (unsigned int)0 ? (_Bool)1 : (_Bool)0;
                    }
                    if(tmp_if_expr$31)
                    {
                      struct passwd *pw;
                      if(drop_user == ((const char *)NULL))
                      {
                        usbmuxd_log((enum loglevel)LL_FATAL, "No user to drop privileges to?");
                        res = -1;
                        goto terminate;
                      }

                      pw=getpwnam(drop_user);
                      if(pw == ((struct passwd *)NULL))
                      {
                        usbmuxd_log((enum loglevel)LL_FATAL, "Dropping privileges failed, check if user '%s' exists!", drop_user);
                        res = -1;
                        goto terminate;
                      }

                      if(pw->pw_uid == 0u)
                        usbmuxd_log((enum loglevel)LL_INFO, "Not dropping privileges to root");

                      else
                      {
                        if(!(fst.st_uid == pw->pw_uid))
                          tmp_if_expr$24 = (_Bool)1;

                        else
                          tmp_if_expr$24 = fst.st_gid != pw->pw_gid ? (_Bool)1 : (_Bool)0;
                        if(tmp_if_expr$24)
                        {
                          signed int return_value_chown$23;
                          return_value_chown$23=chown(userprefdir, pw->pw_uid, pw->pw_gid);
                          if(!(return_value_chown$23 >= 0))
                          {
                            signed int *return_value___errno_location$21;
                            return_value___errno_location$21=__errno_location();
                            char *return_value_strerror$22;
                            return_value_strerror$22=strerror(*return_value___errno_location$21);
                            usbmuxd_log((enum loglevel)LL_WARNING, "chown(%s, %d, %d) failed: %s", userprefdir, pw->pw_uid, pw->pw_gid, return_value_strerror$22);
                          }

                        }

                        res=initgroups(drop_user, pw->pw_gid);
                        if(!(res >= 0))
                        {
                          usbmuxd_log((enum loglevel)LL_FATAL, "Failed to drop privileges (cannot set supplementary groups)");
                          goto terminate;
                        }

                        res=setgid(pw->pw_gid);
                        if(!(res >= 0))
                        {
                          usbmuxd_log((enum loglevel)LL_FATAL, "Failed to drop privileges (cannot set group ID to %d)", pw->pw_gid);
                          goto terminate;
                        }

                        res=setuid(pw->pw_uid);
                        if(!(res >= 0))
                        {
                          usbmuxd_log((enum loglevel)LL_FATAL, "Failed to drop privileges (cannot set user ID to %d)", pw->pw_uid);
                          goto terminate;
                        }

                        signed int return_value_setuid$25;
                        return_value_setuid$25=setuid((unsigned int)0);
                        if(!(return_value_setuid$25 == -1))
                        {
                          usbmuxd_log((enum loglevel)LL_FATAL, "Failed to drop privileges properly!");
                          res = -1;
                          goto terminate;
                        }

                        unsigned int return_value_getuid$26;
                        return_value_getuid$26=getuid();
                        if(!(return_value_getuid$26 == pw->pw_uid))
                          tmp_if_expr$28 = (_Bool)1;

                        else
                        {
                          return_value_getgid$27=getgid();
                          tmp_if_expr$28 = return_value_getgid$27 != pw->pw_gid ? (_Bool)1 : (_Bool)0;
                        }
                        if(tmp_if_expr$28)
                        {
                          usbmuxd_log((enum loglevel)LL_FATAL, "Failed to drop privileges properly!");
                          res = -1;
                          goto terminate;
                        }

                        usbmuxd_log((enum loglevel)LL_NOTICE, "Successfully dropped privileges to '%s'", drop_user);
                      }
                    }

                  }

                  client_init();
                  device_init();
                  usbmuxd_log((enum loglevel)LL_INFO, "Initializing USB");
                  res=usb_init();
                  if(res >= 0)
                  {
                    usbmuxd_log((enum loglevel)LL_INFO, "%d device%s detected", res, res == 1 ? "" : "s");
                    usbmuxd_log((enum loglevel)LL_NOTICE, "Initialization complete");
                    if(!(report_to_parent == 0))
                    {
                      res=notify_parent(0);
                      if(!(res >= 0))
                        goto terminate;

                    }

                    if(!(opt_disable_hotplug == 0))
                    {
                      usbmuxd_log((enum loglevel)LL_NOTICE, "Automatic device discovery on hotplug disabled.");
                      usb_autodiscover(0);
                    }

                    if(!(opt_enable_exit == 0))
                      usbmuxd_log((enum loglevel)LL_NOTICE, "Enabled exit on SIGUSR1 if no devices are attached. Start a new instance with \"--exit\" to trigger.");

                    res=main_loop(listenfd);
                    if(!(res >= 0))
                      usbmuxd_log((enum loglevel)LL_FATAL, "main_loop failed");

                    usbmuxd_log((enum loglevel)LL_NOTICE, "usbmuxd shutting down");
                    device_kill_connections();
                    usb_shutdown();
                    device_shutdown();
                    client_shutdown();
                    usbmuxd_log((enum loglevel)LL_NOTICE, "Shutdown complete");
                  }

                }

              }
            }
          }
        }
    }
  }

terminate:
  ;
  log_disable_syslog();
  if(!(res >= 0))
    res = -res;

  else
    res = 0;
  if(!(report_to_parent == 0))
    notify_parent(res);

  return res;
}

// main_loop
// file main.c line 168
static signed int main_loop(signed int listenfd)
{
  signed int to;
  signed int cnt;
  signed int i;
  signed int dto;
  struct fdlist pollfds;
  struct timespec tspec;
  struct anonymous$0 empty_sigset;
  sigemptyset(&empty_sigset);
  fdlist_create(&pollfds);
  while(should_exit == 0)
  {
    usbmuxd_log((enum loglevel)LL_FLOOD, "main_loop iteration");
    to=usb_get_timeout();
    usbmuxd_log((enum loglevel)LL_FLOOD, "USB timeout is %d ms", to);
    dto=device_get_timeout();
    usbmuxd_log((enum loglevel)LL_FLOOD, "Device timeout is %d ms", to);
    if(!(dto >= to))
      to = dto;

    fdlist_reset(&pollfds);
    fdlist_add(&pollfds, (enum fdowner)FD_LISTEN, listenfd, (signed short int)0x001);
    usb_get_fds(&pollfds);
    client_get_fds(&pollfds);
    usbmuxd_log((enum loglevel)LL_FLOOD, "fd count is %d", pollfds.count);
    tspec.tv_sec = (signed long int)(to / 1000);
    tspec.tv_nsec = (signed long int)((to % 1000) * 1000000);
    cnt=ppoll(pollfds.fds, (unsigned long int)pollfds.count, &tspec, &empty_sigset);
    usbmuxd_log((enum loglevel)LL_FLOOD, "poll() returned %d", cnt);
    if(cnt == -1)
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      if(*return_value___errno_location$1 == 4)
      {
        if(!(should_exit == 0))
        {
          usbmuxd_log((enum loglevel)LL_INFO, "Event processing interrupted");
          break;
        }

        if(!(should_discover == 0))
        {
          should_discover = 0;
          usbmuxd_log((enum loglevel)LL_INFO, "Device discovery triggered");
          usb_discover();
        }

      }

    }

    else
      if(cnt == 0)
      {
        signed int return_value_usb_process$2;
        return_value_usb_process$2=usb_process();
        if(!(return_value_usb_process$2 >= 0))
        {
          usbmuxd_log((enum loglevel)LL_FATAL, "usb_process() failed");
          fdlist_free(&pollfds);
          return -1;
        }

        device_check_timeouts();
      }

      else
      {
        signed int done_usb = 0;
        i = 0;
        for( ; !(i >= pollfds.count); i = i + 1)
          if(!((pollfds.fds + (signed long int)i)->revents == 0))
          {
            if(done_usb == 0)
            {
              if((signed int)pollfds.owners[(signed long int)i] == FD_USB)
              {
                signed int return_value_usb_process$3;
                return_value_usb_process$3=usb_process();
                if(!(return_value_usb_process$3 >= 0))
                {
                  usbmuxd_log((enum loglevel)LL_FATAL, "usb_process() failed");
                  fdlist_free(&pollfds);
                  return -1;
                }

                done_usb = 1;
              }

            }

            if((signed int)pollfds.owners[(signed long int)i] == FD_LISTEN)
            {
              signed int return_value_client_accept$4;
              return_value_client_accept$4=client_accept(listenfd);
              if(!(return_value_client_accept$4 >= 0))
              {
                usbmuxd_log((enum loglevel)LL_FATAL, "client_accept() failed");
                fdlist_free(&pollfds);
                return -1;
              }

            }

            if((signed int)pollfds.owners[(signed long int)i] == FD_CLIENT)
              client_process((pollfds.fds + (signed long int)i)->fd, (pollfds.fds + (signed long int)i)->revents);

          }

      }
  }
  fdlist_free(&pollfds);
  return 0;
}

// mkdir_with_parents
// file conf.c line 157
static signed int mkdir_with_parents(const char *dir, signed int mode)
{
  if(dir == ((const char *)NULL))
    return -1;

  else
  {
    signed int return_value___mkdir$2;
    return_value___mkdir$2=__mkdir(dir, mode);
    if(return_value___mkdir$2 == 0)
      return 0;

    else
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      if(*return_value___errno_location$1 == 17)
        return 0;

    }
    signed int res;
    char *parent;
    parent=strdup(dir);
    char *parentdir;
    parentdir=dirname(parent);
    if(!(parentdir == ((char *)NULL)))
      res=mkdir_with_parents(parentdir, mode);

    else
      res = -1;
    free((void *)parent);
    return res;
  }
}

// mstime64
// file utils.h line 89
unsigned long int mstime64(void)
{
  struct timeval tv;
  gettimeofday(&tv, (struct timezone *)(void *)0);
  return (unsigned long int)((signed long long int)tv.tv_sec * 1000LL + (signed long long int)tv.tv_usec / 1000LL);
}

// notify_device_add
// file client.c line 369
static signed int notify_device_add(struct mux_client *client, struct device_info *dev)
{
  signed int res = -1;
  if(client->proto_version == 1u)
  {
    void *dict;
    dict=create_device_attached_plist(dev);
    res=send_plist_pkt(client, (unsigned int)0, dict);
    plist_free(dict);
  }

  else
  {
    struct usbmuxd_device_record dmsg;
    memset((void *)&dmsg, 0, sizeof(struct usbmuxd_device_record) /*268ul*/ );
    dmsg.device_id = (unsigned int)dev->id;
    strncpy(dmsg.serial_number, dev->serial, (unsigned long int)256);
    dmsg.serial_number[(signed long int)255] = (char)0;
    dmsg.location = dev->location;
    dmsg.product_id = dev->pid;
    res=send_pkt(client, (unsigned int)0, (enum usbmuxd_msgtype)MESSAGE_DEVICE_ADD, (void *)&dmsg, (signed int)sizeof(struct usbmuxd_device_record) /*268ul*/ );
  }
  return res;
}

// notify_device_remove
// file client.c line 391
static signed int notify_device_remove(struct mux_client *client, unsigned int device_id)
{
  signed int res = -1;
  if(client->proto_version == 1u)
  {
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string$1;
    return_value_plist_new_string$1=plist_new_string("Detached");
    plist_dict_set_item(dict, "MessageType", return_value_plist_new_string$1);
    void *return_value_plist_new_uint$2;
    return_value_plist_new_uint$2=plist_new_uint((unsigned long int)device_id);
    plist_dict_set_item(dict, "DeviceID", return_value_plist_new_uint$2);
    res=send_plist_pkt(client, (unsigned int)0, dict);
    plist_free(dict);
  }

  else
    res=send_pkt(client, (unsigned int)0, (enum usbmuxd_msgtype)MESSAGE_DEVICE_REMOVE, (void *)&device_id, (signed int)sizeof(unsigned int) /*4ul*/ );
  return res;
}

// notify_parent
// file main.c line 328
static signed int notify_parent(signed int status)
{
  signed int res;
  report_to_parent = 0;
  signed long int return_value_write$1;
  return_value_write$1=write(daemon_pipe, (const void *)&status, sizeof(signed int) /*4ul*/ );
  res = (signed int)return_value_write$1;
  if(!((unsigned long int)res == sizeof(signed int) /*4ul*/ ))
  {
    usbmuxd_log((enum loglevel)LL_FATAL, "Could not notify parent!");
    if(res >= 0)
      return -2;

    return res;
  }

  else
  {
    close(daemon_pipe);
    struct _IO_FILE *return_value_freopen$2;
    return_value_freopen$2=freopen("/dev/null", "w", stderr);
    if(return_value_freopen$2 == ((struct _IO_FILE *)NULL))
    {
      usbmuxd_log((enum loglevel)LL_FATAL, "Redirection of stderr failed.");
      return -1;
    }

    else
      return 0;
  }
}

// np_callback
// file preflight.c line 79
static void np_callback(const char *notification, void *userdata)
{
  struct cb_data *cbdata = (struct cb_data *)userdata;
  struct idevice_private *dev = cbdata->dev;
  struct idevice_private *_dev = (struct idevice_private *)dev;
  struct lockdownd_client_private *lockdown = (struct lockdownd_client_private *)(void *)0;
  enum anonymous$13 lerr;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(notification);
  signed int return_value_strcmp$2;
  if(return_value_strlen$1 == 0ul)
    cbdata->np = (struct np_client_private *)(void *)0;

  else
  {
    signed int return_value_strcmp$3;
    return_value_strcmp$3=strcmp(notification, "com.apple.mobile.lockdown.request_pair");
    if(return_value_strcmp$3 == 0)
    {
      usbmuxd_log((enum loglevel)LL_INFO, "%s: user trusted this computer on device %s, pairing now", (const void *)"np_callback", _dev->udid);
      lerr=lockdownd_client_new(dev, &lockdown, "usbmuxd");
      if(!((signed int)lerr == LOCKDOWN_E_SUCCESS))
      {
        usbmuxd_log((enum loglevel)LL_ERROR, "%s: ERROR: Could not connect to lockdownd on device %s, lockdown error %d", (const void *)"np_callback", _dev->udid, lerr);
        goto __CPROVER_DUMP_L7;
      }

      lerr=lockdownd_pair(lockdown, (struct lockdownd_pair_record *)(void *)0);
      if(!((signed int)lerr == LOCKDOWN_E_SUCCESS))
      {
        usbmuxd_log((enum loglevel)LL_ERROR, "%s: ERROR: Pair failed for device %s, lockdown error %d", (const void *)"np_callback", _dev->udid, lerr);
        lockdownd_client_free(lockdown);
        goto __CPROVER_DUMP_L7;
      }

      lockdownd_client_free(lockdown);
    }

    else
    {
      return_value_strcmp$2=strcmp(notification, "com.apple.mobile.lockdown.request_host_buid");
      if(return_value_strcmp$2 == 0)
      {
        lerr=lockdownd_client_new(cbdata->dev, &lockdown, "usbmuxd");
        if(!((signed int)lerr == LOCKDOWN_E_SUCCESS))
          usbmuxd_log((enum loglevel)LL_ERROR, "%s: ERROR: Could not connect to lockdownd on device %s, lockdown error %d", (const void *)"np_callback", _dev->udid, lerr);

        else
        {
          lockdownd_set_untrusted_host_buid(lockdown);
          lockdownd_client_free(lockdown);
        }
      }

    }
  }

__CPROVER_DUMP_L7:
  ;
}

// parse_opts
// file main.c line 374
static void parse_opts(signed int argc, char **argv)
{
  signed int c;
  const char *opts_spec = "hfvVuU:xXsnz";
  while((_Bool)1)
  {
    static struct option longopts[12l] = { { .name="help", .has_arg=0, .flag=(signed int *)(void *)0, .val=104 },
    { .name="foreground", .has_arg=0, .flag=(signed int *)(void *)0, .val=102 },
    { .name="verbose", .has_arg=0, .flag=(signed int *)(void *)0, .val=118 },
    { .name="user", .has_arg=1, .flag=(signed int *)(void *)0, .val=85 },
    { .name="disable-hotplug", .has_arg=0, .flag=(signed int *)(void *)0, .val=110 },
    { .name="enable-exit", .has_arg=0, .flag=(signed int *)(void *)0, .val=122 },
    { .name="udev", .has_arg=0, .flag=(signed int *)(void *)0, .val=117 },
    { .name="systemd", .has_arg=0, .flag=(signed int *)(void *)0, .val=115 },
    { .name="exit", .has_arg=0, .flag=(signed int *)(void *)0, .val=120 },
    { .name="force-exit", .has_arg=0, .flag=(signed int *)(void *)0, .val=88 },
    { .name="version", .has_arg=0, .flag=(signed int *)(void *)0, .val=86 },
    { .name=(const char *)(void *)0, .has_arg=0, .flag=(signed int *)(void *)0,
    .val=0 } };
    c=getopt_long(argc, argv, opts_spec, longopts, (signed int *)0);
    if(c == -1)
      break;

    switch(c)
    {
      case 104:
      {
        usage();
        exit(0);
      }
      case 102:
      {
        foreground = 1;
        break;
      }
      case 118:
      {
        verbose = verbose + 1;
        break;
      }
      case 86:
      {
        printf("%s\n", (const void *)"usbmuxd 1.1.0");
        exit(0);
      }
      case 85:
      {
        drop_privileges = 1;
        drop_user = optarg;
        break;
      }
      case 117:
      {
        opt_disable_hotplug = 1;
        opt_enable_exit = 1;
        break;
      }
      case 115:
      {
        opt_enable_exit = 1;
        foreground = 1;
        break;
      }
      case 110:
      {
        opt_disable_hotplug = 1;
        break;
      }
      case 122:
      {
        opt_enable_exit = 1;
        break;
      }
      case 120:
      {
        opt_exit = 1;
        exit_signal = 10;
        break;
      }
      case 88:
      {
        opt_exit = 1;
        exit_signal = 15;
        break;
      }
      default:
      {
        usage();
        exit(2);
      }
    }
  }
}

// plist_dict_get_string_val
// file client.c line 430
static char * plist_dict_get_string_val(void *dict, const char *key)
{
  _Bool tmp_if_expr$2;
  enum anonymous$14 return_value_plist_get_node_type$1;
  if(dict == NULL)
    tmp_if_expr$2 = (_Bool)1;

  else
  {
    return_value_plist_get_node_type$1=plist_get_node_type(dict);
    tmp_if_expr$2 = (signed int)return_value_plist_get_node_type$1 != PLIST_DICT ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$4;
  enum anonymous$14 return_value_plist_get_node_type$3;
  if(tmp_if_expr$2)
    return (char *)(void *)0;

  else
  {
    void *item;
    item=plist_dict_get_item(dict, key);
    if(item == NULL)
      tmp_if_expr$4 = (_Bool)1;

    else
    {
      return_value_plist_get_node_type$3=plist_get_node_type(item);
      tmp_if_expr$4 = (signed int)return_value_plist_get_node_type$3 != PLIST_STRING ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$4)
      return (char *)(void *)0;

    else
    {
      char *str = (char *)(void *)0;
      plist_get_string_val(item, &str);
      return str;
    }
  }
}

// plist_read_from_filename
// file utils.c line 254
signed int plist_read_from_filename(void **plist, const char *filename)
{
  char *buffer = (char *)(void *)0;
  unsigned long int length;
  _Bool tmp_if_expr$2;
  signed int return_value_memcmp$1;
  if(filename == ((const char *)NULL))
    return 0;

  else
  {
    buffer_read_from_filename(filename, &buffer, &length);
    if(buffer == ((char *)NULL))
      return 0;

    else
    {
      if(length >= 9ul)
      {
        return_value_memcmp$1=memcmp((const void *)buffer, (const void *)"bplist00", (unsigned long int)8);
        tmp_if_expr$2 = return_value_memcmp$1 == 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$2 = (_Bool)0;
      if(tmp_if_expr$2)
        plist_from_bin(buffer, (unsigned int)length, plist);

      else
        plist_from_xml(buffer, (unsigned int)length, plist);
      free((void *)buffer);
      return 1;
    }
  }
}

// plist_write_to_filename
// file utils.c line 279
signed int plist_write_to_filename(void *plist, const char *filename, enum plist_format_t format)
{
  char *buffer = (char *)(void *)0;
  unsigned int length;
  if(plist == NULL || filename == ((const char *)NULL))
    return 0;

  else
  {
    if((signed int)format == PLIST_FORMAT_XML)
      plist_to_xml(plist, &buffer, &length);

    else
      if((signed int)format == PLIST_FORMAT_BINARY)
        plist_to_bin(plist, &buffer, &length);

      else
        return 0;
    buffer_write_to_filename(filename, buffer, (unsigned long int)length);
    free((void *)buffer);
    return 1;
  }
}

// preflight_device_remove_cb
// file preflight.h line 28
void preflight_device_remove_cb(void *data)
{
  if(!(data == NULL))
  {
    struct cb_data *cbdata = (struct cb_data *)data;
    cbdata->is_device_connected = 0;
  }

}

// preflight_worker_device_add
// file preflight.h line 29
void preflight_worker_device_add(struct device_info *info)
{
  struct device_info *infocopy;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct device_info) /*24ul*/ );
  infocopy = (struct device_info *)return_value_malloc$1;
  memcpy((void *)infocopy, (const void *)info, sizeof(struct device_info) /*24ul*/ );
  unsigned long int th;
  union pthread_attr_t attr;
  pthread_attr_init(&attr);
  pthread_attr_setdetachstate(&attr, 1);
  signed int perr;
  perr=pthread_create(&th, &attr, preflight_worker_handle_device_add, (void *)infocopy);
  if(!(perr == 0))
  {
    free((void *)infocopy);
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(perr);
    usbmuxd_log((enum loglevel)LL_ERROR, "ERROR: failed to start preflight worker thread for device %s: %s (%d). Invoking client_device_add() directly but things might not work as expected.", info->serial, return_value_strerror$2, perr);
    client_device_add(info);
  }

}

// preflight_worker_handle_device_add
// file preflight.c line 121
static void * preflight_worker_handle_device_add(void *userdata)
{
  struct device_info *info = (struct device_info *)userdata;
  struct idevice_private *_dev;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct idevice_private) /*24ul*/ );
  _dev = (struct idevice_private *)return_value_malloc$1;
  _dev->udid=strdup(info->serial);
  _dev->conn_type = (enum connection_type)CONNECTION_USBMUXD;
  _dev->conn_data = (void *)(signed long int)info->id;
  struct idevice_private *dev = (struct idevice_private *)_dev;
  struct lockdownd_client_private *lockdown = (struct lockdownd_client_private *)(void *)0;
  enum anonymous$13 lerr;
  void *value = (void *)0;
  char *version_str = (char *)(void *)0;
  usbmuxd_log((enum loglevel)LL_INFO, "%s: Starting preflight on device %s...", (const void *)"preflight_worker_handle_device_add", _dev->udid);
  char *type;
  signed int return_value_strcmp$2;
  signed int is_device_paired;
  char *host_id;
  signed int return_value_config_has_device_record$3;
  signed int return_value_config_remove_device_record$4;
  do
  {

  retry:
    ;
    lerr=lockdownd_client_new(dev, &lockdown, "usbmuxd");
    if(!((signed int)lerr == LOCKDOWN_E_SUCCESS))
    {
      usbmuxd_log((enum loglevel)LL_ERROR, "%s: ERROR: Could not connect to lockdownd on device %s, lockdown error %d", (const void *)"preflight_worker_handle_device_add", _dev->udid, lerr);
      goto leave;
    }

    type = (char *)(void *)0;
    lerr=lockdownd_query_type(lockdown, &type);
    if(type == ((char *)NULL))
    {
      usbmuxd_log((enum loglevel)LL_ERROR, "%s: ERROR: Could not get lockdownd type from device %s, lockdown error %d", (const void *)"preflight_worker_handle_device_add", _dev->udid, lerr);
      goto leave;
    }

    return_value_strcmp$2=strcmp(type, "com.apple.mobile.lockdown");
    if(!(return_value_strcmp$2 == 0))
    {
      free((void *)type);
      usbmuxd_log((enum loglevel)LL_INFO, "%s: Finished preflight on device %s", (const void *)"preflight_worker_handle_device_add", _dev->udid);
      client_device_add(info);
      goto leave;
    }

    free((void *)type);
    is_device_paired = 0;
    host_id = (char *)(void *)0;
    return_value_config_has_device_record$3=config_has_device_record(dev->udid);
    if(!(return_value_config_has_device_record$3 == 0))
    {
      config_device_record_get_host_id(dev->udid, &host_id);
      lerr=lockdownd_start_session(lockdown, host_id, (char **)(void *)0, (signed int *)(void *)0);
      if(!(host_id == ((char *)NULL)))
        free((void *)host_id);

      if((signed int)lerr == LOCKDOWN_E_SUCCESS)
      {
        usbmuxd_log((enum loglevel)LL_INFO, "%s: StartSession success for device %s", (const void *)"preflight_worker_handle_device_add", _dev->udid);
        usbmuxd_log((enum loglevel)LL_INFO, "%s: Finished preflight on device %s", (const void *)"preflight_worker_handle_device_add", _dev->udid);
        client_device_add(info);
        goto leave;
      }

      usbmuxd_log((enum loglevel)LL_INFO, "%s: StartSession failed on device %s, lockdown error %d", (const void *)"preflight_worker_handle_device_add", _dev->udid, lerr);
    }

    else
      lerr = (enum anonymous$13)LOCKDOWN_E_INVALID_HOST_ID;
    if(!((signed int)lerr == LOCKDOWN_E_INVALID_HOST_ID))
    {
      if((signed int)lerr == LOCKDOWN_E_SSL_ERROR)
        goto __CPROVER_DUMP_L10;

      goto __CPROVER_DUMP_L13;
    }

    usbmuxd_log((enum loglevel)LL_INFO, "%s: Device %s is not paired with this host.", (const void *)"preflight_worker_handle_device_add", _dev->udid);
    goto __CPROVER_DUMP_L14;

  __CPROVER_DUMP_L10:
    ;
    usbmuxd_log((enum loglevel)LL_ERROR, "%s: The stored pair record for device %s is invalid. Removing.", (const void *)"preflight_worker_handle_device_add", _dev->udid);
    return_value_config_remove_device_record$4=config_remove_device_record(_dev->udid);
    if(!(return_value_config_remove_device_record$4 == 0))
      break;

    lockdownd_client_free(lockdown);
    lockdown = (struct lockdownd_client_private *)(void *)0;
  }
  while((_Bool)1);
  usbmuxd_log((enum loglevel)LL_ERROR, "%s: Could not remove pair record for device %s", (const void *)"preflight_worker_handle_device_add", _dev->udid);
  goto __CPROVER_DUMP_L14;

__CPROVER_DUMP_L13:
  ;
  is_device_paired = 1;
  goto __CPROVER_DUMP_L14;

__CPROVER_DUMP_L14:
  ;
  lerr=lockdownd_get_value(lockdown, (const char *)(void *)0, "ProductVersion", &value);
  enum anonymous$14 return_value_plist_get_node_type$5;
  signed int version_major;
  signed long int return_value_strtol$6;
  if(!((signed int)lerr == LOCKDOWN_E_SUCCESS))
    usbmuxd_log((enum loglevel)LL_ERROR, "%s: ERROR: Could not get ProductVersion from device %s, lockdown error %d", (const void *)"preflight_worker_handle_device_add", _dev->udid, lerr);

  else
  {
    if(!(value == NULL))
    {
      return_value_plist_get_node_type$5=plist_get_node_type(value);
      if((signed int)return_value_plist_get_node_type$5 == PLIST_STRING)
        plist_get_string_val(value, &version_str);

    }

    if(version_str == ((char *)NULL))
      usbmuxd_log((enum loglevel)LL_ERROR, "%s: Could not get ProductVersion string from device %s handle %d", (const void *)"preflight_worker_handle_device_add", _dev->udid, (signed int)(signed long int)_dev->conn_data);

    else
    {
      return_value_strtol$6=strtol(version_str, (char ** restrict )(void *)0, 10);
      version_major = (signed int)return_value_strtol$6;
      if(version_major >= 7)
      {
        usbmuxd_log((enum loglevel)LL_INFO, "%s: Found ProductVersion %s device %s", (const void *)"preflight_worker_handle_device_add", version_str, _dev->udid);
        lockdownd_set_untrusted_host_buid(lockdown);
        if(is_device_paired == 0)
        {
          enum anonymous$13 return_value_lockdownd_pair$7;
          return_value_lockdownd_pair$7=lockdownd_pair(lockdown, (struct lockdownd_pair_record *)(void *)0);
          if((signed int)return_value_lockdownd_pair$7 == LOCKDOWN_E_SUCCESS)
          {
            usbmuxd_log((enum loglevel)LL_INFO, "%s: Pair success for device %s", (const void *)"preflight_worker_handle_device_add", _dev->udid);
            usbmuxd_log((enum loglevel)LL_INFO, "%s: Finished preflight on device %s", (const void *)"preflight_worker_handle_device_add", _dev->udid);
            client_device_add(info);
            goto leave;
          }

        }

        struct lockdownd_service_descriptor *service = (struct lockdownd_service_descriptor *)(void *)0;
        lerr=lockdownd_start_service(lockdown, "com.apple.mobile.insecure_notification_proxy", &service);
        if(!((signed int)lerr == LOCKDOWN_E_SUCCESS))
        {
          usbmuxd_log((enum loglevel)LL_ERROR, "%s: ERROR: Could not start insecure_notification_proxy on %s, lockdown error %d", (const void *)"preflight_worker_handle_device_add", _dev->udid, lerr);
          goto leave;
        }

        struct np_client_private *np = (struct np_client_private *)(void *)0;
        np_client_new(dev, service, &np);
        lockdownd_service_descriptor_free(service);
        service = (struct lockdownd_service_descriptor *)(void *)0;
        lockdownd_client_free(lockdown);
        lockdown = (struct lockdownd_client_private *)(void *)0;
        struct cb_data cbdata;
        cbdata.dev = dev;
        cbdata.np = np;
        cbdata.is_device_connected = 1;
        np_set_notify_callback(np, np_callback, (void *)&cbdata);
        device_set_preflight_cb_data(info->id, (void *)&cbdata);
        const char *spec[3l] = { "com.apple.mobile.lockdown.request_pair",
    "com.apple.mobile.lockdown.request_host_buid",
    (const char *)(void *)0 };
        np_observe_notifications(np, spec);
        usbmuxd_log((enum loglevel)LL_INFO, "%s: Waiting for user to trust this computer on device %s", (const void *)"preflight_worker_handle_device_add", _dev->udid);
        client_device_add(info);
        while(cbdata.is_device_connected == 1 && !(cbdata.np == ((struct np_client_private *)NULL)))
          sleep((unsigned int)1);
        device_set_preflight_cb_data(info->id, (void *)0);
        usbmuxd_log((enum loglevel)LL_INFO, "%s: Finished waiting for notification from device %s, is_device_connected %d", (const void *)"preflight_worker_handle_device_add", _dev->udid, cbdata.is_device_connected);
        if(!(cbdata.np == ((struct np_client_private *)NULL)))
          np_client_free(cbdata.np);

      }

      else
      {
        lerr=lockdownd_pair(lockdown, (struct lockdownd_pair_record *)(void *)0);
        if(!((signed int)lerr == LOCKDOWN_E_SUCCESS))
        {
          if((signed int)lerr == LOCKDOWN_E_PASSWORD_PROTECTED)
            usbmuxd_log((enum loglevel)LL_INFO, "%s: Device %s is locked with a passcode. Cannot pair.", (const void *)"preflight_worker_handle_device_add", _dev->udid);

          else
            usbmuxd_log((enum loglevel)LL_ERROR, "%s: ERROR: Pair failed for device %s, lockdown error %d", (const void *)"preflight_worker_handle_device_add", _dev->udid, lerr);
          usbmuxd_log((enum loglevel)LL_INFO, "%s: Finished preflight on device %s", (const void *)"preflight_worker_handle_device_add", _dev->udid);
          client_device_add(info);
        }

        else
        {
          host_id = (char *)(void *)0;
          config_device_record_get_host_id(dev->udid, &host_id);
          lerr=lockdownd_start_session(lockdown, host_id, (char **)(void *)0, (signed int *)(void *)0);
          free((void *)host_id);
          if(!((signed int)lerr == LOCKDOWN_E_SUCCESS))
            usbmuxd_log((enum loglevel)LL_ERROR, "%s: ERROR StartSession failed on device %s, lockdown error %d", (const void *)"preflight_worker_handle_device_add", _dev->udid, lerr);

          else
          {
            lerr=lockdownd_validate_pair(lockdown, (struct lockdownd_pair_record *)(void *)0);
            if(!((signed int)lerr == LOCKDOWN_E_SUCCESS))
              usbmuxd_log((enum loglevel)LL_ERROR, "%s: ERROR: ValidatePair failed for device %s, lockdown error %d", (const void *)"preflight_worker_handle_device_add", _dev->udid, lerr);

            else
            {
              usbmuxd_log((enum loglevel)LL_INFO, "%s: Finished preflight on device %s", (const void *)"preflight_worker_handle_device_add", _dev->udid);
              client_device_add(info);
            }
          }
        }
      }
    }
  }

leave:
  ;
  if(!(value == NULL))
    plist_free(value);

  if(!(version_str == ((char *)NULL)))
    free((void *)version_str);

  if(!(lockdown == ((struct lockdownd_client_private *)NULL)))
    lockdownd_client_free(lockdown);

  if(!(dev == ((struct idevice_private *)NULL)))
    idevice_free(dev);

  free((void *)info);
  return (void *)0;
}

// process_recv
// file client.c line 671
static void process_recv(struct mux_client *client)
{
  signed int res;
  signed int did_read = 0;
  signed int *return_value___errno_location$2;
  char *return_value_strerror$3;
  if(!((unsigned long int)client->ib_size >= sizeof(struct usbmuxd_header) /*16ul*/ ))
  {
    signed long int return_value_recv$1;
    return_value_recv$1=recv(client->fd, (void *)(client->ib_buf + (signed long int)client->ib_size), sizeof(struct usbmuxd_header) /*16ul*/  - (unsigned long int)client->ib_size, 0);
    res = (signed int)return_value_recv$1;
    if(!(res >= 1))
    {
      if(!(res >= 0))
      {
        return_value___errno_location$2=__errno_location();
        return_value_strerror$3=strerror(*return_value___errno_location$2);
        usbmuxd_log((enum loglevel)LL_ERROR, "Receive from client fd %d failed: %s", client->fd, return_value_strerror$3);
      }

      else
        usbmuxd_log((enum loglevel)LL_INFO, "Client %d connection closed", client->fd);
      client_close(client);
      goto __CPROVER_DUMP_L13;
    }

    client->ib_size = client->ib_size + (unsigned int)res;
    if(!((unsigned long int)client->ib_size >= sizeof(struct usbmuxd_header) /*16ul*/ ))
      goto __CPROVER_DUMP_L13;

    did_read = 1;
  }

  struct usbmuxd_header *hdr = (struct usbmuxd_header *)(void *)client->ib_buf;
  if(!(client->ib_capacity >= hdr->length))
  {
    usbmuxd_log((enum loglevel)LL_INFO, "Client %d message is too long (%d bytes)", client->fd, hdr->length);
    client_close(client);
  }

  else
    if(!((unsigned long int)hdr->length >= sizeof(struct usbmuxd_header) /*16ul*/ ))
    {
      usbmuxd_log((enum loglevel)LL_ERROR, "Client %d message is too short (%d bytes)", client->fd, hdr->length);
      client_close(client);
    }

    else
    {
      if(!(client->ib_size >= hdr->length))
      {
        if(!(did_read == 0))
          goto __CPROVER_DUMP_L13;

        signed long int return_value_recv$4;
        return_value_recv$4=recv(client->fd, (void *)(client->ib_buf + (signed long int)client->ib_size), (unsigned long int)(hdr->length - client->ib_size), 0);
        res = (signed int)return_value_recv$4;
        if(!(res >= 0))
        {
          signed int *return_value___errno_location$5;
          return_value___errno_location$5=__errno_location();
          char *return_value_strerror$6;
          return_value_strerror$6=strerror(*return_value___errno_location$5);
          usbmuxd_log((enum loglevel)LL_ERROR, "Receive from client fd %d failed: %s", client->fd, return_value_strerror$6);
          client_close(client);
          goto __CPROVER_DUMP_L13;
        }

        else
          if(res == 0)
          {
            usbmuxd_log((enum loglevel)LL_INFO, "Client %d connection closed", client->fd);
            client_close(client);
            goto __CPROVER_DUMP_L13;
          }

        client->ib_size = client->ib_size + (unsigned int)res;
        if(!(client->ib_size >= hdr->length))
          goto __CPROVER_DUMP_L13;

      }

      client_command(client, hdr);
      client->ib_size = (unsigned int)0;
    }

__CPROVER_DUMP_L13:
  ;
}

// process_send
// file client.c line 641
static void process_send(struct mux_client *client)
{
  signed int res;
  if(client->ob_size == 0u)
  {
    usbmuxd_log((enum loglevel)LL_WARNING, "Client %d OUT process but nothing to send?", client->fd);
    client->events = client->events & (signed short int)~0x004;
  }

  else
  {
    signed long int return_value_send$1;
    return_value_send$1=send(client->fd, (const void *)client->ob_buf, (unsigned long int)client->ob_size, 0);
    res = (signed int)return_value_send$1;
    if(!(res >= 1))
    {
      signed int *return_value___errno_location$2;
      return_value___errno_location$2=__errno_location();
      char *return_value_strerror$3;
      return_value_strerror$3=strerror(*return_value___errno_location$2);
      usbmuxd_log((enum loglevel)LL_ERROR, "Send to client fd %d failed: %d %s", client->fd, res, return_value_strerror$3);
      client_close(client);
      goto __CPROVER_DUMP_L6;
    }

    if((unsigned int)res == client->ob_size)
    {
      client->ob_size = (unsigned int)0;
      client->events = client->events & (signed short int)~0x004;
      if((signed int)client->state == CLIENT_CONNECTING2)
      {
        usbmuxd_log((enum loglevel)LL_DEBUG, "Client %d switching to CONNECTED state", client->fd);
        client->state = (enum client_state)CLIENT_CONNECTED;
        client->events = client->devents;
        free((void *)client->ob_buf);
        client->ob_buf = (unsigned char *)(void *)0;
      }

    }

    else
    {
      client->ob_size = client->ob_size - (unsigned int)res;
      memmove((void *)client->ob_buf, (const void *)(client->ob_buf + (signed long int)res), (unsigned long int)client->ob_size);
    }
  }

__CPROVER_DUMP_L6:
  ;
}

// reap_dead_devices
// file usb-linux.c line 107
static void reap_dead_devices(void)
{
  do
  {
    signed int _iter_108 = 0;
    for( ; !(_iter_108 >= device_list$link1.capacity); _iter_108 = _iter_108 + 1)
      if(!(device_list$link1.list[(signed long int)_iter_108] == NULL))
      {
        struct usb_device *usbdev = (struct usb_device *)(&device_list$link1)->list[(signed long int)_iter_108];
        if(usbdev->alive == 0)
        {
          device_remove(usbdev);
          usb_disconnect(usbdev);
        }

      }

  }
  while((_Bool)0);
}

// rx_callback
// file usb-linux.c line 189
static void rx_callback(struct libusb_transfer *xfer)
{
  struct usb_device *dev = (struct usb_device *)xfer->user_data;
  usbmuxd_log((enum loglevel)LL_SPEW, "RX callback dev %d-%d len %d status %d", dev->bus, dev->address, xfer->actual_length, xfer->status);
  if((signed int)xfer->status == LIBUSB_TRANSFER_COMPLETED)
  {
    device_data_input(dev, xfer->buffer, (unsigned int)xfer->actual_length);
    libusb_submit_transfer(xfer);
  }

  else
  {
    switch((signed int)xfer->status)
    {
      case LIBUSB_TRANSFER_COMPLETED:

      case LIBUSB_TRANSFER_ERROR:
      {
        usbmuxd_log((enum loglevel)LL_INFO, "Device %d-%d RX aborted due to error or disconnect", dev->bus, dev->address);
        break;
      }
      case LIBUSB_TRANSFER_TIMED_OUT:
      {
        usbmuxd_log((enum loglevel)LL_ERROR, "RX transfer timed out for device %d-%d", dev->bus, dev->address);
        break;
      }
      case LIBUSB_TRANSFER_CANCELLED:
      {
        usbmuxd_log((enum loglevel)LL_DEBUG, "Device %d-%d RX transfer cancelled", dev->bus, dev->address);
        break;
      }
      case LIBUSB_TRANSFER_STALL:
      {
        usbmuxd_log((enum loglevel)LL_ERROR, "RX transfer stalled for device %d-%d", dev->bus, dev->address);
        break;
      }
      case LIBUSB_TRANSFER_NO_DEVICE:
      {
        usbmuxd_log((enum loglevel)LL_INFO, "Device %d-%d RX aborted due to disconnect", dev->bus, dev->address);
        break;
      }
      case LIBUSB_TRANSFER_OVERFLOW:
        usbmuxd_log((enum loglevel)LL_ERROR, "RX transfer overflow for device %d-%d", dev->bus, dev->address);
    }
    free((void *)xfer->buffer);
    collection_remove(&dev->rx_xfers, (void *)xfer);
    libusb_free_transfer(xfer);
    dev->alive = 0;
  }
}

// send_anon_rst
// file device.c line 260
static signed int send_anon_rst(struct mux_device *dev, unsigned short int sport, unsigned short int dport, unsigned int ack)
{
  struct tcphdr th;
  memset((void *)&th, 0, sizeof(struct tcphdr) /*20ul*/ );
  th.$anon0.$anon0.th_sport=htons(sport);
  th.$anon0.$anon0.th_dport=htons(dport);
  th.$anon0.$anon0.th_ack=htonl(ack);
  th.$anon0.$anon0.th_flags = (unsigned char)0x04;
  th.$anon0.$anon0.th_off = (unsigned char)(sizeof(struct tcphdr) /*20ul*/  / (unsigned long int)4);
  usbmuxd_log((enum loglevel)LL_DEBUG, "[OUT] dev=%d sport=%d dport=%d flags=0x%x", dev->id, sport, dport, th.$anon0.$anon0.th_flags);
  signed int res;
  res=send_packet(dev, (enum mux_protocol)MUX_PROTO_TCP, (void *)&th, (void *)0, 0);
  return res;
}

// send_device_list
// file client.c line 304
static signed int send_device_list(struct mux_client *client, unsigned int tag)
{
  signed int res = -1;
  void *dict;
  dict=plist_new_dict();
  void *devices;
  devices=plist_new_array();
  struct device_info *devs = (struct device_info *)(void *)0;
  struct device_info *dev;
  signed int i;
  signed int count;
  count=device_get_list(0, &devs);
  dev = devs;
  i = 0;
  struct device_info *tmp_post$1;
  for( ; !(devs == ((struct device_info *)NULL)) && !(i >= count); i = i + 1)
  {
    void *device;
    tmp_post$1 = dev;
    dev = dev + 1l;
    device=create_device_attached_plist(tmp_post$1);
    if(!(device == NULL))
      plist_array_append_item(devices, device);

  }
  if(!(devs == ((struct device_info *)NULL)))
    free((void *)devs);

  plist_dict_set_item(dict, "DeviceList", devices);
  res=send_plist_pkt(client, tag, dict);
  plist_free(dict);
  return res;
}

// send_packet
// file device.c line 184
static signed int send_packet(struct mux_device *dev, enum mux_protocol proto, void *header, const void *data, signed int length)
{
  unsigned char *buffer;
  signed int hdrlen;
  signed int res;
  switch((signed int)proto)
  {
    case MUX_PROTO_VERSION:
    {
      hdrlen = (signed int)sizeof(struct version_header) /*12ul*/ ;
      break;
    }
    case MUX_PROTO_SETUP:
    {
      hdrlen = 0;
      break;
    }
    case MUX_PROTO_TCP:
    {
      hdrlen = (signed int)sizeof(struct tcphdr) /*20ul*/ ;
      break;
    }
    default:
    {
      usbmuxd_log((enum loglevel)LL_ERROR, "Invalid protocol %d for outgoing packet (dev %d hdr %p data %p len %d)", proto, dev->id, header, data, length);
      return -1;
    }
  }
  usbmuxd_log((enum loglevel)LL_SPEW, "send_packet(%d, 0x%x, %p, %p, %d)", dev->id, proto, header, data, length);
  signed int mux_header_size = (signed int)(dev->version < 2 ? (unsigned long int)8 : sizeof(struct mux_header) /*16ul*/ );
  signed int total = mux_header_size + hdrlen + length;
  if(total >= 49153)
  {
    usbmuxd_log((enum loglevel)LL_ERROR, "Tried to send packet larger than USB MTU (hdr %d data %d total %d) to device %d", hdrlen, length, total, dev->id);
    return -1;
  }

  else
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc((unsigned long int)total);
    buffer = (unsigned char *)return_value_malloc$1;
    struct mux_header *mhdr = (struct mux_header *)buffer;
    mhdr->protocol=htonl((unsigned int)proto);
    mhdr->length=htonl((unsigned int)total);
    if(dev->version >= 2)
    {
      mhdr->magic=htonl(0xfeedface);
      if((signed int)proto == MUX_PROTO_SETUP)
      {
        dev->tx_seq = (unsigned short int)0;
        dev->rx_seq = (unsigned short int)0xFFFF;
      }

      mhdr->tx_seq=htons(dev->tx_seq);
      mhdr->rx_seq=htons(dev->rx_seq);
      dev->tx_seq = dev->tx_seq + 1;
    }

    memcpy((void *)(buffer + (signed long int)mux_header_size), header, (unsigned long int)hdrlen);
    if(!(data == NULL) && !(length == 0))
      memcpy((void *)(buffer + (signed long int)mux_header_size + (signed long int)hdrlen), data, (unsigned long int)length);

    res=usb_send(dev->usbdev, buffer, total);
    if(!(res >= 0))
    {
      usbmuxd_log((enum loglevel)LL_ERROR, "usb_send failed while sending packet (len %d) to device %d: %d", total, dev->id, res);
      free((void *)buffer);
      return res;
    }

    else
      return total;
  }
}

// send_pair_record
// file client.c line 345
static signed int send_pair_record(struct mux_client *client, unsigned int tag, const char *record_id)
{
  signed int res = -1;
  char *record_data = (char *)(void *)0;
  unsigned long int record_size = (unsigned long int)0;
  if(record_id == ((const char *)NULL))
  {
    signed int return_value_send_result$1;
    return_value_send_result$1=send_result(client, tag, (unsigned int)22);
    return return_value_send_result$1;
  }

  config_get_device_record(record_id, &record_data, &record_size);
  if(!(record_data == ((char *)NULL)))
  {
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_data$2;
    return_value_plist_new_data$2=plist_new_data(record_data, record_size);
    plist_dict_set_item(dict, "PairRecordData", return_value_plist_new_data$2);
    free((void *)record_data);
    res=send_plist_pkt(client, tag, dict);
    plist_free(dict);
  }

  else
    res=send_result(client, tag, (unsigned int)2);
  return res;
}

// send_pkt
// file client.c line 201
static signed int send_pkt(struct mux_client *client, unsigned int tag, enum usbmuxd_msgtype msg, void *payload, signed int payload_length)
{
  struct usbmuxd_header hdr;
  hdr.version = client->proto_version;
  hdr.length = (unsigned int)(sizeof(struct usbmuxd_header) /*16ul*/  + (unsigned long int)payload_length);
  hdr.message = (unsigned int)msg;
  hdr.tag = tag;
  usbmuxd_log((enum loglevel)LL_DEBUG, "send_pkt fd %d tag %d msg %d payload_length %d", client->fd, tag, msg, payload_length);
  unsigned int available = client->ob_capacity - client->ob_size;
  if(!(available >= hdr.length))
  {
    unsigned char *new_buf;
    unsigned int new_size = ((client->ob_capacity + hdr.length + (unsigned int)4096) / (unsigned int)4096) * (unsigned int)4096;
    usbmuxd_log((enum loglevel)LL_DEBUG, "%s: Enlarging client %d output buffer %d -> %d", (const void *)"send_pkt", client->fd, client->ob_capacity, new_size);
    void *return_value_realloc$1;
    return_value_realloc$1=realloc((void *)client->ob_buf, (unsigned long int)new_size);
    new_buf = (unsigned char *)return_value_realloc$1;
    if(new_buf == ((unsigned char *)NULL))
    {
      usbmuxd_log((enum loglevel)LL_FATAL, "%s: Failed to realloc.\n", (const void *)"send_pkt");
      return -1;
    }

    client->ob_buf = new_buf;
    client->ob_capacity = new_size;
  }

  memcpy((void *)(client->ob_buf + (signed long int)client->ob_size), (const void *)&hdr, sizeof(struct usbmuxd_header) /*16ul*/ );
  if(!(payload == NULL) && !(payload_length == 0))
    memcpy((void *)(client->ob_buf + (signed long int)client->ob_size + (signed long int)sizeof(struct usbmuxd_header) /*16ul*/ ), payload, (unsigned long int)payload_length);

  client->ob_size = client->ob_size + hdr.length;
  client->events = client->events | (signed short int)0x004;
  return (signed int)hdr.length;
}

// send_plist_pkt
// file client.c line 232
static signed int send_plist_pkt(struct mux_client *client, unsigned int tag, void *plist)
{
  signed int res = -1;
  char *xml = (char *)(void *)0;
  unsigned int xmlsize = (unsigned int)0;
  plist_to_xml(plist, &xml, &xmlsize);
  if(!(xml == ((char *)NULL)))
  {
    res=send_pkt(client, tag, (enum usbmuxd_msgtype)MESSAGE_PLIST, (void *)xml, (signed int)xmlsize);
    free((void *)xml);
  }

  else
    usbmuxd_log((enum loglevel)LL_ERROR, "%s: Could not convert plist to xml", (const void *)"send_plist_pkt");
  return res;
}

// send_result
// file client.c line 247
static signed int send_result(struct mux_client *client, unsigned int tag, unsigned int result)
{
  signed int res = -1;
  if(client->proto_version == 1u)
  {
    void *dict;
    dict=plist_new_dict();
    void *return_value_plist_new_string$1;
    return_value_plist_new_string$1=plist_new_string("Result");
    plist_dict_set_item(dict, "MessageType", return_value_plist_new_string$1);
    void *return_value_plist_new_uint$2;
    return_value_plist_new_uint$2=plist_new_uint((unsigned long int)result);
    plist_dict_set_item(dict, "Number", return_value_plist_new_uint$2);
    res=send_plist_pkt(client, tag, dict);
    plist_free(dict);
  }

  else
    res=send_pkt(client, tag, (enum usbmuxd_msgtype)MESSAGE_RESULT, (void *)&result, (signed int)sizeof(unsigned int) /*4ul*/ );
  return res;
}

// send_system_buid
// file client.c line 331
static signed int send_system_buid(struct mux_client *client, unsigned int tag)
{
  signed int res = -1;
  char *buid = (char *)(void *)0;
  config_get_system_buid(&buid);
  void *dict;
  dict=plist_new_dict();
  void *return_value_plist_new_string$1;
  return_value_plist_new_string$1=plist_new_string(buid);
  plist_dict_set_item(dict, "BUID", return_value_plist_new_string$1);
  res=send_plist_pkt(client, tag, dict);
  plist_free(dict);
  return res;
}

// send_tcp
// file device.c line 276
static signed int send_tcp(struct mux_connection *conn, unsigned char flags, const unsigned char *data, signed int length)
{
  struct tcphdr th;
  memset((void *)&th, 0, sizeof(struct tcphdr) /*20ul*/ );
  th.$anon0.$anon0.th_sport=htons(conn->sport);
  th.$anon0.$anon0.th_dport=htons(conn->dport);
  th.$anon0.$anon0.th_seq=htonl(conn->tx_seq);
  th.$anon0.$anon0.th_ack=htonl(conn->tx_ack);
  th.$anon0.$anon0.th_flags = flags;
  th.$anon0.$anon0.th_off = (unsigned char)(sizeof(struct tcphdr) /*20ul*/  / (unsigned long int)4);
  th.$anon0.$anon0.th_win=htons((unsigned short int)(conn->tx_win >> 8));
  usbmuxd_log((enum loglevel)LL_DEBUG, "[OUT] dev=%d sport=%d dport=%d seq=%d ack=%d flags=0x%x window=%d[%d] len=%d", conn->dev->id, conn->sport, conn->dport, conn->tx_seq, conn->tx_ack, flags, conn->tx_win, conn->tx_win >> 8, length);
  signed int res;
  res=send_packet(conn->dev, (enum mux_protocol)MUX_PROTO_TCP, (void *)&th, (const void *)data, length);
  if(res >= 0)
  {
    conn->tx_acked = conn->tx_ack;
    conn->last_ack_time=mstime64();
    conn->flags = conn->flags & ~1;
  }

  return res;
}

// send_tcp_ack
// file device.c line 432
static signed int send_tcp_ack(struct mux_connection *conn)
{
  signed int return_value_send_tcp$1;
  return_value_send_tcp$1=send_tcp(conn, (unsigned char)0x10, (const unsigned char *)(void *)0, 0);
  if(!(return_value_send_tcp$1 >= 0))
  {
    usbmuxd_log((enum loglevel)LL_ERROR, "Error sending TCP ACK (%d->%d)", conn->sport, conn->dport);
    connection_teardown(conn);
    return -1;
  }

  else
  {
    update_connection(conn);
    return 0;
  }
}

// set_signal_handlers
// file main.c line 130
static void set_signal_handlers(void)
{
  struct sigaction sa;
  struct anonymous$0 set;
  sigemptyset(&set);
  sigaddset(&set, 2);
  sigaddset(&set, 3);
  sigaddset(&set, 15);
  sigaddset(&set, 10);
  sigaddset(&set, 12);
  sigprocmask(2, &set, (struct anonymous$0 *)(void *)0);
  memset((void *)&sa, 0, sizeof(struct sigaction) /*152ul*/ );
  sa.__sigaction_handler.sa_handler = handle_signal;
  sigaction(2, &sa, (struct sigaction *)(void *)0);
  sigaction(3, &sa, (struct sigaction *)(void *)0);
  sigaction(15, &sa, (struct sigaction *)(void *)0);
  sigaction(10, &sa, (struct sigaction *)(void *)0);
  sigaction(12, &sa, (struct sigaction *)(void *)0);
}

// start_listen
// file client.c line 408
static signed int start_listen(struct mux_client *client)
{
  struct device_info *devs = (struct device_info *)(void *)0;
  struct device_info *dev;
  signed int count;
  signed int i;
  client->state = (enum client_state)CLIENT_LISTEN;
  count=device_get_list(0, &devs);
  dev = devs;
  i = 0;
  struct device_info *tmp_post$1;
  for( ; !(devs == ((struct device_info *)NULL)) && !(i >= count); i = i + 1)
  {
    tmp_post$1 = dev;
    dev = dev + 1l;
    signed int return_value_notify_device_add$2;
    return_value_notify_device_add$2=notify_device_add(client, tmp_post$1);
    if(!(return_value_notify_device_add$2 >= 0))
    {
      free((void *)devs);
      return -1;
    }

  }
  if(!(devs == ((struct device_info *)NULL)))
    free((void *)devs);

  return count;
}

// start_rx_loop
// file usb-linux.c line 236
static signed int start_rx_loop(struct usb_device *dev)
{
  signed int res;
  void *buf;
  struct libusb_transfer *xfer;
  xfer=libusb_alloc_transfer(0);
  buf=malloc((unsigned long int)16384);
  libusb_fill_bulk_transfer(xfer, dev->dev, dev->ep_in, (unsigned char *)buf, 16384, rx_callback, (void *)dev, (unsigned int)0);
  res=libusb_submit_transfer(xfer);
  if(!(res == 0))
  {
    usbmuxd_log((enum loglevel)LL_ERROR, "Failed to submit RX transfer to device %d-%d: %d", dev->bus, dev->address, res);
    libusb_free_transfer(xfer);
    return res;
  }

  else
  {
    collection_add(&dev->rx_xfers, (void *)xfer);
    return 0;
  }
}

// string_concat
// file utils.c line 169
char * string_concat(const char *str, ...)
{
  unsigned long int len;
  __builtin_va_list args;
  char *s;
  char *result;
  char *dest;
  if(str == ((const char *)NULL))
    return (char *)(void *)0;

  else
  {
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(str);
    len = return_value_strlen$1 + (unsigned long int)1;
    va_start(args, str);
    s=va_arg(args, __typeof__(s));
    while(!(s == ((char *)NULL)))
    {
      unsigned long int return_value_strlen$2;
      return_value_strlen$2=strlen(s);
      len = len + return_value_strlen$2;
      s=va_arg(args, __typeof__(s));
    }
    va_end(args);
    void *return_value_malloc$3;
    return_value_malloc$3=malloc(len);
    result = (char *)return_value_malloc$3;
    if(result == ((char *)NULL))
      return (char *)(void *)0;

    else
    {
      dest = result;
      dest=stpcpy(dest, str);
      va_start(args, str);
      s=va_arg(args, __typeof__(s));
      while(!(s == ((char *)NULL)))
      {
        dest=stpcpy(dest, s);
        s=va_arg(args, __typeof__(s));
      }
      va_end(args);
      return result;
    }
  }
}

// tx_callback
// file usb-linux.c line 117
static void tx_callback(struct libusb_transfer *xfer)
{
  struct usb_device *dev = (struct usb_device *)xfer->user_data;
  usbmuxd_log((enum loglevel)LL_SPEW, "TX callback dev %d-%d len %d -> %d status %d", dev->bus, dev->address, xfer->length, xfer->actual_length, xfer->status);
  if(!((signed int)xfer->status == LIBUSB_TRANSFER_COMPLETED))
  {
    switch((signed int)xfer->status)
    {
      case LIBUSB_TRANSFER_COMPLETED:

      case LIBUSB_TRANSFER_ERROR:
      {
        usbmuxd_log((enum loglevel)LL_INFO, "Device %d-%d TX aborted due to error or disconnect", dev->bus, dev->address);
        break;
      }
      case LIBUSB_TRANSFER_TIMED_OUT:
      {
        usbmuxd_log((enum loglevel)LL_ERROR, "TX transfer timed out for device %d-%d", dev->bus, dev->address);
        break;
      }
      case LIBUSB_TRANSFER_CANCELLED:
      {
        usbmuxd_log((enum loglevel)LL_DEBUG, "Device %d-%d TX transfer cancelled", dev->bus, dev->address);
        break;
      }
      case LIBUSB_TRANSFER_STALL:
      {
        usbmuxd_log((enum loglevel)LL_ERROR, "TX transfer stalled for device %d-%d", dev->bus, dev->address);
        break;
      }
      case LIBUSB_TRANSFER_NO_DEVICE:
      {
        usbmuxd_log((enum loglevel)LL_INFO, "Device %d-%d TX aborted due to disconnect", dev->bus, dev->address);
        break;
      }
      case LIBUSB_TRANSFER_OVERFLOW:
        usbmuxd_log((enum loglevel)LL_ERROR, "TX transfer overflow for device %d-%d", dev->bus, dev->address);
    }
    dev->alive = 0;
  }

  if(!(xfer->buffer == ((unsigned char *)NULL)))
    free((void *)xfer->buffer);

  collection_remove(&dev->tx_xfers, (void *)xfer);
  libusb_free_transfer(xfer);
}

// update_connection
// file device.c line 399
static void update_connection(struct mux_connection *conn)
{
  unsigned int sent = conn->tx_seq - conn->rx_ack;
  if(!(sent >= conn->rx_win))
    conn->sendable = conn->rx_win - sent;

  else
    conn->sendable = (unsigned int)0;
  if(!(conn->ob_capacity >= conn->sendable))
    conn->sendable = conn->ob_capacity;

  if(!(conn->max_payload >= conn->sendable))
    conn->sendable = conn->max_payload;

  if(conn->sendable >= 1u)
    conn->events = conn->events | (signed short int)0x001;

  else
    conn->events = conn->events & (signed short int)~0x001;
  if(!(conn->ib_size == 0u))
    conn->events = conn->events | (signed short int)0x004;

  else
    conn->events = conn->events & (signed short int)~0x004;
  if(!(conn->tx_acked == conn->tx_ack))
    conn->flags = conn->flags | 1;

  else
    conn->flags = conn->flags & ~1;
  usbmuxd_log((enum loglevel)LL_SPEW, "update_connection: sendable %d, events %d, flags %d", conn->sendable, conn->events, conn->flags);
  client_set_events(conn->client, conn->events);
}

// usage
// file main.c line 348
static void usage()
{
  printf("Usage: %s [OPTIONS]\n", (const void *)"usbmuxd");
  printf("Expose a socket to multiplex connections from and to iOS devices.\n\n");
  printf("  -h, --help\t\tPrint this message.\n");
  printf("  -v, --verbose\t\tBe verbose (use twice or more to increase).\n");
  printf("  -f, --foreground\tDo not daemonize (implies one -v).\n");
  printf("  -U, --user USER\tChange to this user after startup (needs USB privileges).\n");
  printf("  -n, --disable-hotplug\tDisables automatic discovery of devices on hotplug.\n");
  printf("                       \tStarting another instance will trigger discovery instead.\n");
  printf("  -z, --enable-exit\tEnable \"--exit\" request from other instances and exit\n");
  printf("                   \tautomatically if no device is attached.\n");
  printf("  -u, --udev\t\tRun in udev operation mode (implies -n and -z).\n");
  printf("  -s, --systemd\t\tRun in systemd operation mode (implies -z and -f).\n");
  printf("  -x, --exit\t\tNotify a running instance to exit if there are no devices\n");
  printf("            \t\tconnected (sends SIGUSR1 to running instance) and exit.\n");
  printf("  -X, --force-exit\tNotify a running instance to exit even if there are still\n");
  printf("                  \tdevices connected (always works) and exit.\n");
  printf("  -V, --version\t\tPrint version information and exit.\n");
  printf("\n");
}

// usb_autodiscover
// file usb-linux.c line 529
void usb_autodiscover(signed int enable)
{
  usbmuxd_log((enum loglevel)LL_DEBUG, "usb polling enable: %d", enable);
  device_polling = enable;
}

// usb_disconnect
// file usb-linux.c line 67
static void usb_disconnect(struct usb_device *dev)
{
  signed int return_value_collection_count$1;
  signed int return_value_collection_count$2;
  if(!(dev->dev == ((struct libusb_device_handle *)NULL)))
  {
    do
    {
      signed int _iter_75 = 0;
      for( ; !(_iter_75 >= dev->rx_xfers.capacity); _iter_75 = _iter_75 + 1)
        if(!(dev->rx_xfers.list[(signed long int)_iter_75] == NULL))
        {
          struct libusb_transfer *usb_disconnect$$1$$2$$1$$1$$xfer = (struct libusb_transfer *)(&dev->rx_xfers)->list[(signed long int)_iter_75];
          usbmuxd_log((enum loglevel)LL_DEBUG, "usb_disconnect: cancelling RX xfer %p", usb_disconnect$$1$$2$$1$$1$$xfer);
          libusb_cancel_transfer(usb_disconnect$$1$$2$$1$$1$$xfer);
        }

    }
    while((_Bool)0);
    do
    {
      signed int _iter_80 = 0;
      for( ; !(_iter_80 >= dev->tx_xfers.capacity); _iter_80 = _iter_80 + 1)
        if(!(dev->tx_xfers.list[(signed long int)_iter_80] == NULL))
        {
          struct libusb_transfer *xfer = (struct libusb_transfer *)(&dev->tx_xfers)->list[(signed long int)_iter_80];
          usbmuxd_log((enum loglevel)LL_DEBUG, "usb_disconnect: cancelling TX xfer %p", xfer);
          libusb_cancel_transfer(xfer);
        }

    }
    while((_Bool)0);
    do
    {
      return_value_collection_count$1=collection_count(&dev->rx_xfers);
      if(return_value_collection_count$1 == 0)
      {
        return_value_collection_count$2=collection_count(&dev->tx_xfers);
        if(return_value_collection_count$2 == 0)
          break;

      }

      struct timeval tv;
      signed int res;
      tv.tv_sec = (signed long int)0;
      tv.tv_usec = (signed long int)1000;
      res=libusb_handle_events_timeout((struct libusb_context *)(void *)0, &tv);
      if(!(res >= 0))
      {
        usbmuxd_log((enum loglevel)LL_ERROR, "libusb_handle_events_timeout for usb_disconnect failed: %d", res);
        break;
      }

    }
    while((_Bool)1);
    collection_free(&dev->tx_xfers);
    collection_free(&dev->rx_xfers);
    libusb_release_interface(dev->dev, (signed int)dev->interface);
    libusb_close(dev->dev);
    dev->dev = (struct libusb_device_handle *)(void *)0;
    collection_remove(&device_list$link1, (void *)dev);
    free((void *)dev);
  }

}

// usb_discover
// file usb-linux.c line 254
signed int usb_discover(void)
{
  signed int cnt;
  signed int i;
  signed int j;
  signed int res;
  signed int valid_count = 0;
  struct libusb_device **devs;
  signed long int return_value_libusb_get_device_list$1;
  return_value_libusb_get_device_list$1=libusb_get_device_list((struct libusb_context *)(void *)0, &devs);
  cnt = (signed int)return_value_libusb_get_device_list$1;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$5;
  if(!(cnt >= 0))
  {
    usbmuxd_log((enum loglevel)LL_WARNING, "Could not get device list: %d", cnt);
    devlist_failures = devlist_failures + 1;
    if(devlist_failures >= 6)
    {
      usbmuxd_log((enum loglevel)LL_FATAL, "Too many errors getting device list");
      return cnt;
    }

    gettimeofday(&next_dev_poll_time, (struct timezone *)(void *)0);
    next_dev_poll_time.tv_usec = next_dev_poll_time.tv_usec + (signed long int)(1000 * 1000);
    next_dev_poll_time.tv_sec = next_dev_poll_time.tv_sec + next_dev_poll_time.tv_usec / (signed long int)1000000;
    next_dev_poll_time.tv_usec = next_dev_poll_time.tv_usec % (signed long int)1000000;
    return 0;
  }

  else
  {
    devlist_failures = 0;
    usbmuxd_log((enum loglevel)LL_SPEW, "usb_discover: scanning %d devices", cnt);
    do
    {
      signed int _iter_282 = 0;
      for( ; !(_iter_282 >= device_list$link1.capacity); _iter_282 = _iter_282 + 1)
        if(!(device_list$link1.list[(signed long int)_iter_282] == NULL))
        {
          struct usb_device *usb_discover$$1$$2$$1$$1$$usbdev = (struct usb_device *)(&device_list$link1)->list[(signed long int)_iter_282];
          usb_discover$$1$$2$$1$$1$$usbdev->alive = 0;
        }

    }
    while((_Bool)0);
    i = 0;
    for( ; !(i >= cnt); i = i + 1)
    {
      struct libusb_device *dev = devs[(signed long int)i];
      unsigned char bus;
      bus=libusb_get_bus_number(dev);
      unsigned char address;
      address=libusb_get_device_address(dev);
      struct libusb_device_descriptor devdesc;
      signed int found = 0;
      do
      {
        signed int _iter_295 = 0;
        for( ; !(_iter_295 >= device_list$link1.capacity); _iter_295 = _iter_295 + 1)
          if(!(device_list$link1.list[(signed long int)_iter_295] == NULL))
          {
            struct usb_device *usb_discover$$1$$3$$1$$1$$1$$1$$usbdev = (struct usb_device *)(&device_list$link1)->list[(signed long int)_iter_295];
            if(usb_discover$$1$$3$$1$$1$$1$$1$$usbdev->bus == bus)
            {
              if(usb_discover$$1$$3$$1$$1$$1$$1$$usbdev->address == address)
              {
                valid_count = valid_count + 1;
                usb_discover$$1$$3$$1$$1$$1$$1$$usbdev->alive = 1;
                found = 1;
                break;
              }

            }

          }

      }
      while((_Bool)0);
      if(found == 0)
      {
        res=libusb_get_device_descriptor(dev, &devdesc);
        if(!(res == 0))
          usbmuxd_log((enum loglevel)LL_WARNING, "Could not get device descriptor for device %d-%d: %d", bus, address, res);

        else
          if((signed int)devdesc.idVendor == 0x5ac)
          {
            if(!((signed int)devdesc.idProduct >= 4784) && (signed int)devdesc.idProduct >= 0x1290)
            {
              struct libusb_device_handle *handle;
              usbmuxd_log((enum loglevel)LL_INFO, "Found new device with v/p %04x:%04x at %d-%d", devdesc.idVendor, devdesc.idProduct, bus, address);
              res=libusb_open(dev, &handle);
              if(!(res == 0))
                usbmuxd_log((enum loglevel)LL_WARNING, "Could not open device %d-%d: %d", bus, address, res);

              else
              {
                signed int current_config = 0;
                res=libusb_get_configuration(handle, &current_config);
                if(!(res == 0))
                {
                  usbmuxd_log((enum loglevel)LL_WARNING, "Could not get configuration for device %d-%d: %d", bus, address, res);
                  libusb_close(handle);
                }

                else
                {
                  if(!(current_config == (signed int)devdesc.bNumConfigurations))
                  {
                    struct libusb_config_descriptor *usb_discover$$1$$3$$1$$5$$config;
                    res=libusb_get_active_config_descriptor(dev, &usb_discover$$1$$3$$1$$5$$config);
                    if(!(res == 0))
                      usbmuxd_log((enum loglevel)LL_NOTICE, "Could not get old configuration descriptor for device %d-%d: %d", bus, address, res);

                    else
                    {
                      j = 0;
                      for( ; !(j >= (signed int)usb_discover$$1$$3$$1$$5$$config->bNumInterfaces); j = j + 1)
                      {
                        struct libusb_interface_descriptor *usb_discover$$1$$3$$1$$5$$2$$1$$1$$intf = &(usb_discover$$1$$3$$1$$5$$config->interface + (signed long int)j)->altsetting[(signed long int)0];
                        res=libusb_kernel_driver_active(handle, (signed int)usb_discover$$1$$3$$1$$5$$2$$1$$1$$intf->bInterfaceNumber);
                        if(!(res >= 0))
                          usbmuxd_log((enum loglevel)LL_NOTICE, "Could not check kernel ownership of interface %d for device %d-%d: %d", usb_discover$$1$$3$$1$$5$$2$$1$$1$$intf->bInterfaceNumber, bus, address, res);

                        else
                          if(res == 1)
                          {
                            usbmuxd_log((enum loglevel)LL_INFO, "Detaching kernel driver for device %d-%d, interface %d", bus, address, usb_discover$$1$$3$$1$$5$$2$$1$$1$$intf->bInterfaceNumber);
                            res=libusb_detach_kernel_driver(handle, (signed int)usb_discover$$1$$3$$1$$5$$2$$1$$1$$intf->bInterfaceNumber);
                            if(res >= 0)
                              goto __CPROVER_DUMP_L19;

                            usbmuxd_log((enum loglevel)LL_WARNING, "Could not detach kernel driver (%d), configuration change will probably fail!", res);
                          }

                          else

                            __CPROVER_DUMP_L19:
                              ;
                      }
                      libusb_free_config_descriptor(usb_discover$$1$$3$$1$$5$$config);
                    }
                    usbmuxd_log((enum loglevel)LL_INFO, "Setting configuration for device %d-%d, from %d to %d", bus, address, current_config, devdesc.bNumConfigurations);
                    res=libusb_set_configuration(handle, (signed int)devdesc.bNumConfigurations);
                    if(!(res == 0))
                    {
                      usbmuxd_log((enum loglevel)LL_WARNING, "Could not set configuration %d for device %d-%d: %d", devdesc.bNumConfigurations, bus, address, res);
                      libusb_close(handle);
                      goto __CPROVER_DUMP_L54;
                    }

                  }

                  struct libusb_config_descriptor *config;
                  res=libusb_get_active_config_descriptor(dev, &config);
                  if(!(res == 0))
                  {
                    usbmuxd_log((enum loglevel)LL_WARNING, "Could not get configuration descriptor for device %d-%d: %d", bus, address, res);
                    libusb_close(handle);
                  }

                  else
                  {
                    struct usb_device *usbdev;
                    void *return_value_malloc$2;
                    return_value_malloc$2=malloc(sizeof(struct usb_device) /*320ul*/ );
                    usbdev = (struct usb_device *)return_value_malloc$2;
                    memset((void *)usbdev, 0, sizeof(struct usb_device) /*320ul*/ );
                    j = 0;
                    for( ; !(j >= (signed int)config->bNumInterfaces); j = j + 1)
                    {
                      struct libusb_interface_descriptor *intf = &(config->interface + (signed long int)j)->altsetting[(signed long int)0];
                      if(!((signed int)intf->bInterfaceClass == 255))
                        tmp_if_expr$3 = (_Bool)1;

                      else
                        tmp_if_expr$3 = (signed int)intf->bInterfaceSubClass != 254 ? (_Bool)1 : (_Bool)0;
                      if(tmp_if_expr$3)
                        tmp_if_expr$4 = (_Bool)1;

                      else
                        tmp_if_expr$4 = (signed int)intf->bInterfaceProtocol != 2 ? (_Bool)1 : (_Bool)0;
                      if(!tmp_if_expr$4)
                      {
                        if(!((signed int)intf->bNumEndpoints == 2))
                          usbmuxd_log((enum loglevel)LL_WARNING, "Endpoint count mismatch for interface %d of device %d-%d", intf->bInterfaceNumber, bus, address);

                        else
                        {
                          if((0x80 & (signed int)intf->endpoint->bEndpointAddress) == 0)
                            tmp_if_expr$6 = ((signed int)(intf->endpoint + (signed long int)1)->bEndpointAddress & 0x80) == 128 ? (_Bool)1 : (_Bool)0;

                          else
                            tmp_if_expr$6 = (_Bool)0;
                          if(tmp_if_expr$6)
                          {
                            usbdev->interface = intf->bInterfaceNumber;
                            usbdev->ep_out = (intf->endpoint + (signed long int)0)->bEndpointAddress;
                            usbdev->ep_in = (intf->endpoint + (signed long int)1)->bEndpointAddress;
                            usbmuxd_log((enum loglevel)LL_INFO, "Found interface %d with endpoints %02x/%02x for device %d-%d", usbdev->interface, usbdev->ep_out, usbdev->ep_in, bus, address);
                            break;
                          }

                          else
                          {
                            if((0x80 & (signed int)(intf->endpoint + 1l)->bEndpointAddress) == 0)
                              tmp_if_expr$5 = ((signed int)(intf->endpoint + (signed long int)0)->bEndpointAddress & 0x80) == 128 ? (_Bool)1 : (_Bool)0;

                            else
                              tmp_if_expr$5 = (_Bool)0;
                            if(tmp_if_expr$5)
                            {
                              usbdev->interface = intf->bInterfaceNumber;
                              usbdev->ep_out = (intf->endpoint + (signed long int)1)->bEndpointAddress;
                              usbdev->ep_in = (intf->endpoint + (signed long int)0)->bEndpointAddress;
                              usbmuxd_log((enum loglevel)LL_INFO, "Found interface %d with swapped endpoints %02x/%02x for device %d-%d", usbdev->interface, usbdev->ep_out, usbdev->ep_in, bus, address);
                              break;
                            }

                            else
                              usbmuxd_log((enum loglevel)LL_WARNING, "Endpoint type mismatch for interface %d of device %d-%d", intf->bInterfaceNumber, bus, address);
                          }
                        }
                      }

                    }
                    if(j == (signed int)config->bNumInterfaces)
                    {
                      usbmuxd_log((enum loglevel)LL_WARNING, "Could not find a suitable USB interface for device %d-%d", bus, address);
                      libusb_free_config_descriptor(config);
                      libusb_close(handle);
                      free((void *)usbdev);
                    }

                    else
                    {
                      libusb_free_config_descriptor(config);
                      res=libusb_claim_interface(handle, (signed int)usbdev->interface);
                      if(!(res == 0))
                      {
                        usbmuxd_log((enum loglevel)LL_WARNING, "Could not claim interface %d for device %d-%d: %d", usbdev->interface, bus, address, res);
                        libusb_close(handle);
                        free((void *)usbdev);
                      }

                      else
                      {
                        res=libusb_get_string_descriptor_ascii(handle, devdesc.iSerialNumber, (unsigned char *)usbdev->serial, 256);
                        if(!(res >= 1))
                        {
                          usbmuxd_log((enum loglevel)LL_WARNING, "Could not get serial number for device %d-%d: %d", bus, address, res);
                          libusb_release_interface(handle, (signed int)usbdev->interface);
                          libusb_close(handle);
                          free((void *)usbdev);
                        }

                        else
                        {
                          usbdev->serial[(signed long int)res] = (char)0;
                          usbdev->bus = bus;
                          usbdev->address = address;
                          usbdev->vid = devdesc.idVendor;
                          usbdev->pid = devdesc.idProduct;
                          usbdev->dev = handle;
                          usbdev->alive = 1;
                          usbdev->wMaxPacketSize=libusb_get_max_packet_size(dev, usbdev->ep_out);
                          if(!(usbdev->wMaxPacketSize >= 1))
                          {
                            usbmuxd_log((enum loglevel)LL_ERROR, "Could not determine wMaxPacketSize for device %d-%d, setting to 64", usbdev->bus, usbdev->address);
                            usbdev->wMaxPacketSize = 64;
                          }

                          else
                            usbmuxd_log((enum loglevel)LL_INFO, "Using wMaxPacketSize=%d for device %d-%d", usbdev->wMaxPacketSize, usbdev->bus, usbdev->address);
                          collection_init(&usbdev->tx_xfers);
                          collection_init(&usbdev->rx_xfers);
                          collection_add(&device_list$link1, (void *)usbdev);
                          signed int return_value_device_add$7;
                          return_value_device_add$7=device_add(usbdev);
                          if(!(return_value_device_add$7 >= 0))
                            usb_disconnect(usbdev);

                          else
                          {
                            signed int rx_loops = 3;
                            rx_loops = 3;
                            for( ; rx_loops >= 1; rx_loops = rx_loops - 1)
                            {
                              signed int return_value_start_rx_loop$8;
                              return_value_start_rx_loop$8=start_rx_loop(usbdev);
                              if(!(return_value_start_rx_loop$8 >= 0))
                                usbmuxd_log((enum loglevel)LL_WARNING, "Failed to start RX loop number %d", 3 - rx_loops);

                            }
                            if(rx_loops == 3)
                            {
                              usbmuxd_log((enum loglevel)LL_FATAL, "Failed to start any RX loop for device %d-%d", usbdev->bus, usbdev->address);
                              device_remove(usbdev);
                              usb_disconnect(usbdev);
                              goto __CPROVER_DUMP_L54;
                            }

                            else
                              if(rx_loops >= 1)
                                usbmuxd_log((enum loglevel)LL_WARNING, "Failed to start all %d RX loops. Going on with %d loops. This may have negative impact on device read speed.", 3, 3 - rx_loops);

                              else
                                usbmuxd_log((enum loglevel)LL_DEBUG, "All %d RX loops started successfully", 3);
                            valid_count = valid_count + 1;
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


    __CPROVER_DUMP_L54:
      ;
    }
    reap_dead_devices();
    libusb_free_device_list(devs, 1);
    gettimeofday(&next_dev_poll_time, (struct timezone *)(void *)0);
    next_dev_poll_time.tv_usec = next_dev_poll_time.tv_usec + (signed long int)(1000 * 1000);
    next_dev_poll_time.tv_sec = next_dev_poll_time.tv_sec + next_dev_poll_time.tv_usec / (signed long int)1000000;
    next_dev_poll_time.tv_usec = next_dev_poll_time.tv_usec % (signed long int)1000000;
    return valid_count;
  }
}

// usb_get_fds
// file usb-linux.c line 512
void usb_get_fds(struct fdlist *list)
{
  struct libusb_pollfd **usbfds;
  struct libusb_pollfd **p;
  usbfds=libusb_get_pollfds((struct libusb_context *)(void *)0);
  if(usbfds == ((struct libusb_pollfd **)NULL))
    usbmuxd_log((enum loglevel)LL_ERROR, "libusb_get_pollfds failed");

  else
  {
    p = usbfds;
    for( ; !(*p == ((struct libusb_pollfd *)NULL)); p = p + 1l)
      fdlist_add(list, (enum fdowner)FD_USB, (*p)->fd, (*p)->events);
    free((void *)usbfds);
  }
}

// usb_get_location
// file usb.h line 55
unsigned int usb_get_location(struct usb_device *dev)
{
  if(dev->dev == ((struct libusb_device_handle *)NULL))
    return (unsigned int)0;

  else
    return (unsigned int)((signed int)dev->bus << 16 | (signed int)dev->address);
}

// usb_get_pid
// file usb.h line 56
unsigned short int usb_get_pid(struct usb_device *dev)
{
  if(dev->dev == ((struct libusb_device_handle *)NULL))
    return (unsigned short int)0;

  else
    return dev->pid;
}

// usb_get_serial
// file usb.h line 54
const char * usb_get_serial(struct usb_device *dev)
{
  if(dev->dev == ((struct libusb_device_handle *)NULL))
    return (const char *)(void *)0;

  else
    return dev->serial;
}

// usb_get_timeout
// file usb-linux.c line 549
signed int usb_get_timeout(void)
{
  struct timeval tv;
  signed int msec;
  signed int res;
  signed int pollrem;
  pollrem=dev_poll_remain_ms();
  res=libusb_get_next_timeout((struct libusb_context *)(void *)0, &tv);
  if(res == 0)
    return pollrem;

  else
    if(!(res >= 0))
    {
      usbmuxd_log((enum loglevel)LL_ERROR, "libusb_get_next_timeout failed: %d", res);
      return pollrem;
    }

    else
    {
      msec = (signed int)(tv.tv_sec * (signed long int)1000);
      msec = msec + (signed int)(tv.tv_usec / (signed long int)1000);
      if(!(pollrem >= msec))
        return pollrem;

      else
        return msec;
    }
}

// usb_init
// file usb-linux.c line 622
signed int usb_init(void)
{
  signed int res;
  usbmuxd_log((enum loglevel)LL_DEBUG, "usb_init for linux / libusb 1.0");
  devlist_failures = 0;
  device_polling = 1;
  res=libusb_init((struct libusb_context **)(void *)0);
  if(!(res == 0))
  {
    usbmuxd_log((enum loglevel)LL_FATAL, "libusb_init failed: %d", res);
    return -1;
  }

  else
  {
    collection_init(&device_list$link1);
    signed int return_value_usb_discover$1;
    return_value_usb_discover$1=usb_discover();
    return return_value_usb_discover$1;
  }
}

// usb_process
// file usb-linux.c line 570
signed int usb_process(void)
{
  signed int res;
  struct timeval tv;
  tv.tv_usec = (signed long int)0;
  tv.tv_sec = tv.tv_usec;
  res=libusb_handle_events_timeout((struct libusb_context *)(void *)0, &tv);
  if(!(res >= 0))
  {
    usbmuxd_log((enum loglevel)LL_ERROR, "libusb_handle_events_timeout failed: %d", res);
    return res;
  }

  else
  {
    reap_dead_devices();
    signed int return_value_dev_poll_remain_ms$1;
    return_value_dev_poll_remain_ms$1=dev_poll_remain_ms();
    if(!(return_value_dev_poll_remain_ms$1 >= 1))
    {
      res=usb_discover();
      if(res >= 0)
        goto __CPROVER_DUMP_L2;

      usbmuxd_log((enum loglevel)LL_ERROR, "usb_discover failed: %d", res);
      return res;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      return 0;
    }
  }
}

// usb_process_timeout
// file usb.h line 63
signed int usb_process_timeout(signed int msec)
{
  signed int res;
  struct timeval tleft;
  struct timeval tcur;
  struct timeval tfin;
  gettimeofday(&tcur, (struct timezone *)(void *)0);
  tfin.tv_sec = tcur.tv_sec + (signed long int)(msec / 1000);
  tfin.tv_usec = tcur.tv_usec + (signed long int)((msec % 1000) * 1000);
  tfin.tv_sec = tfin.tv_sec + tfin.tv_usec / (signed long int)1000000;
  tfin.tv_usec = tfin.tv_usec % (signed long int)1000000;
  while(tfin.tv_sec == tcur.tv_sec && !(tcur.tv_usec >= tfin.tv_usec) || !(tcur.tv_sec >= tfin.tv_sec))
  {
    tleft.tv_sec = tfin.tv_sec - tcur.tv_sec;
    tleft.tv_usec = tfin.tv_usec - tcur.tv_usec;
    if(!(tleft.tv_usec >= 0l))
    {
      tleft.tv_usec = tleft.tv_usec + (signed long int)1000000;
      tleft.tv_sec = tleft.tv_sec - (signed long int)1;
    }

    res=libusb_handle_events_timeout((struct libusb_context *)(void *)0, &tleft);
    if(!(res >= 0))
    {
      usbmuxd_log((enum loglevel)LL_ERROR, "libusb_handle_events_timeout failed: %d", res);
      return res;
    }

    reap_dead_devices();
    gettimeofday(&tcur, (struct timezone *)(void *)0);
  }
  return 0;
}

// usb_send
// file usb.h line 59
signed int usb_send(struct usb_device *dev, const unsigned char *buf, signed int length)
{
  signed int res;
  struct libusb_transfer *xfer;
  xfer=libusb_alloc_transfer(0);
  libusb_fill_bulk_transfer(xfer, dev->dev, dev->ep_out, (unsigned char *)(void *)buf, length, tx_callback, (void *)dev, (unsigned int)0);
  res=libusb_submit_transfer(xfer);
  if(!(res >= 0))
  {
    usbmuxd_log((enum loglevel)LL_ERROR, "Failed to submit TX transfer %p len %d to device %d-%d: %d", buf, length, dev->bus, dev->address, res);
    libusb_free_transfer(xfer);
    return res;
  }

  else
  {
    collection_add(&dev->tx_xfers, (void *)xfer);
    if(length % dev->wMaxPacketSize == 0)
    {
      usbmuxd_log((enum loglevel)LL_DEBUG, "Send ZLP");
      xfer=libusb_alloc_transfer(0);
      void *buffer;
      buffer=malloc((unsigned long int)1);
      libusb_fill_bulk_transfer(xfer, dev->dev, dev->ep_out, (unsigned char *)buffer, 0, tx_callback, (void *)dev, (unsigned int)0);
      res=libusb_submit_transfer(xfer);
      if(!(res >= 0))
      {
        usbmuxd_log((enum loglevel)LL_ERROR, "Failed to submit TX ZLP transfer to device %d-%d: %d", dev->bus, dev->address, res);
        libusb_free_transfer(xfer);
        return res;
      }

      collection_add(&dev->tx_xfers, (void *)xfer);
    }

    return 0;
  }
}

// usb_shutdown
// file usb-linux.c line 641
void usb_shutdown(void)
{
  usbmuxd_log((enum loglevel)LL_DEBUG, "usb_shutdown");
  do
  {
    signed int _iter_644 = 0;
    for( ; !(_iter_644 >= device_list$link1.capacity); _iter_644 = _iter_644 + 1)
      if(!(device_list$link1.list[(signed long int)_iter_644] == NULL))
      {
        struct usb_device *usbdev = (struct usb_device *)(&device_list$link1)->list[(signed long int)_iter_644];
        device_remove(usbdev);
        usb_disconnect(usbdev);
      }

  }
  while((_Bool)0);
  collection_free(&device_list$link1);
  libusb_exit((struct libusb_context *)(void *)0);
}

// usbmuxd_log
// file log.h line 40
void usbmuxd_log(enum loglevel level, const char *fmt, ...)
{
  void **ap;
  char *fs;
  struct timeval ts;
  struct tm *tp;
  if(log_level >= (unsigned int)level)
  {
    gettimeofday(&ts, (struct timezone *)(void *)0);
    tp=localtime(&ts.tv_sec);
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(fmt);
    void *return_value_malloc$2;
    return_value_malloc$2=malloc((unsigned long int)20 + return_value_strlen$1);
    fs = (char *)return_value_malloc$2;
    if(!(log_syslog == 0))
      sprintf(fs, "[%d] %s\n", level, fmt);

    else
    {
      strftime(fs, (unsigned long int)10, "[%H:%M:%S", tp);
      sprintf(fs + (signed long int)9, ".%03d][%d] %s\n", (signed int)(ts.tv_usec / (signed long int)1000), level, fmt);
    }
    ap = (void **)&fmt;
    if(!(log_syslog == 0))
    {
      signed int return_value_level_to_syslog_level$3;
      return_value_level_to_syslog_level$3=level_to_syslog_level((signed int)level);
      vsyslog(return_value_level_to_syslog_level$3, fs, ap);
    }

    else
      vfprintf(stderr, fs, ap);
    ap = ((void **)NULL);
    free((void *)fs);
  }

}

