// #anon_enum_MEM_STACK=0_MEM_HEAP=1_MEM_MAPPED=2_MEM_MAX=3
// file mem.h line 31
enum anonymous_11 { MEM_STACK=0, MEM_HEAP=1, MEM_MAPPED=2, MEM_MAX=3 };

// #anon_enum_NET_TCP=0_NET_TCP6=1_NET_UDP=2_NET_UDP6=3_NET_UNIX=4_NET_NETLINK=5_NET_UNKNOWN=6
// file net.c line 60
enum anonymous_19 { NET_TCP=0, NET_TCP6=1, NET_UDP=2, NET_UDP6=3, NET_UNIX=4, NET_NETLINK=5, NET_UNKNOWN=6 };

// #anon_enum_PROC_START=1_PROC_FINISH=2
// file proc.h line 31
enum anonymous_9 { PROC_START=1, PROC_FINISH=2 };

// #anon_enum_SYSCALL_ENTRY=0_SYSCALL_RETURN=1_SYSCALL_UNKNOWN=2
// file syscall.c line 78
enum anonymous_27 { SYSCALL_ENTRY=0, SYSCALL_RETURN=1, SYSCALL_UNKNOWN=2 };

// tag-#anon#ST[*{S8}_S8_'filename'||U64'count'||S32'syscall'||U32'_pad0'|]
// file syscall.h line 129
struct anonymous_0;

// tag-#anon#ST[*{SYM#tag-#anon#ST[EN#anon_enum_NET_TCP=0_NET_TCP6=1_NET_UDP=2_NET_UDP6=3_NET_UNIX=4_NET_NETLINK=5_NET_UNKNOWN=6#{U32}_U32_'type'||U32768'_pad0'||SYM#tag-#anon#UN[SYM#tag-sockaddr_in#'addr4'||SYM#tag-sockaddr_in6#'addr6'||ARR4097{S8}_S8_'path'||U32800'_pad'|]#'u'||S32'family'||U32'_pad1'||U64'inode'||U32672'_pad2'|]#}_SYM#tag-#anon#ST[EN#anon_enum_NET_TCP=0_NET_TCP6=1_NET_UDP=2_NET_UDP6=3_NET_UNIX=4_NET_NETLINK=5_NET_UNKNOWN=6#{U32}_U32_'type'||U32768'_pad0'||SYM#tag-#anon#UN[SYM#tag-sockaddr_in#'addr4'||SYM#tag-sockaddr_in6#'addr6'||ARR4097{S8}_S8_'path'||U32800'_pad'|]#'u'||S32'family'||U32'_pad1'||U64'inode'||U32672'_pad2'|]#_'addr_info'||*{SYM#tag-#anon#ST[*{SYM#tag-proc_info#}_SYM#tag-proc_info#_'proc'||U64'inode'||U32'fd'||U32'_pad0'||SYM#tag-#anon#ST[U64'call_count'||U64'data_total'|]#'send'||SYM#tag-#anon#ST[U64'call_count'||U64'data_total'|]#'recv'||ARR4097{S8}_S8_'path'||U56'_pad1'|]#}_SYM#tag-#anon#ST[*{SYM#tag-proc_info#}_SYM#tag-proc_info#_'proc'||U64'inode'||U32'fd'||U32'_pad0'||SYM#tag-#anon#ST[U64'call_count'||U64'data_total'|]#'send'||SYM#tag-#anon#ST[U64'call_count'||U64'data_total'|]#'recv'||ARR4097{S8}_S8_'path'||U56'_pad1'|]#_'nh'||U64'send_recv_total'|]
// file net.c line 81
struct anonymous_22;

// tag-#anon#ST[*{SYM#tag-link#}_SYM#tag-link#_'head'||*{SYM#tag-link#}_SYM#tag-link#_'tail'||U64'length'|]
// file list.h line 34
struct anonymous_3;

// tag-#anon#ST[*{SYM#tag-proc_info#}_SYM#tag-proc_info#_'proc'||*{S8}_S8_'filename'||U32'mask'||U32'_pad0'||U64'count'|]
// file fnotify.h line 37
struct anonymous_24;

// tag-#anon#ST[*{SYM#tag-proc_info#}_SYM#tag-proc_info#_'proc'||*{S8}_S8_'func'||*{S8}_S8_'callback'||*{S8}_S8_'ident'||U64'count'|]
// file event.h line 39
struct anonymous_32;

// tag-#anon#ST[*{SYM#tag-proc_info#}_SYM#tag-proc_info#_'proc'||U64'inode'||U32'fd'||U32'_pad0'||SYM#tag-#anon#ST[U64'call_count'||U64'data_total'|]#'send'||SYM#tag-#anon#ST[U64'call_count'||U64'data_total'|]#'recv'||ARR4097{S8}_S8_'path'||U56'_pad1'|]
// file net.c line 51
struct anonymous_17;

// tag-#anon#ST[*{SYM#tag-proc_info#}_SYM#tag-proc_info#_'proc'||U64'locked'||U64'unlocked'||U64'total'|]
// file fnotify.h line 45
struct anonymous_23;

// tag-#anon#ST[*{SYM#tag-proc_info#}_SYM#tag-proc_info#_'proc'||U64'utime'||U64'stime'||U64'ttime'||U64'minor_fault'||U64'major_fault'||SYM#tag-timeval#'whence'||F64'duration'|]
// file cpustat.h line 32
struct anonymous_37;

// tag-#anon#ST[*{SYM#tag-proc_info#}_SYM#tag-proc_info#_'proc'||U64'voluntary'||U64'involuntary'||U64'total'||B'valid'||U56'_pad0'|]
// file ctxt-switch.h line 32
struct anonymous_13;

// tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 121
struct anonymous_35;

// tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 107
struct anonymous_33;

// tag-#anon#ST[ARR16{S64}_S64_'fds_bits'|]
// file /usr/include/x86_64-linux-gnu/sys/select.h line 64
struct anonymous_12;

// tag-#anon#ST[ARR16{U64}_U64_'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous_15;

// tag-#anon#ST[ARR1{SYM#tag-#anon#ST[ARR8{S64}_S64_'__cancel_jmp_buf'||S32'__mask_was_saved'||U32'_pad0'|]#}_SYM#tag-#anon#ST[ARR8{S64}_S64_'__cancel_jmp_buf'||S32'__mask_was_saved'||U32'_pad0'|]#_'__cancel_jmp_buf'||ARR4{*{V}_V_}_*{V}_V__'__pad'|]
// file /usr/include/pthread.h line 525
struct anonymous_4;

// tag-#anon#ST[ARR8{S64}_S64_'__cancel_jmp_buf'||S32'__mask_was_saved'||U32'_pad0'|]
// file /usr/include/pthread.h line 527
struct anonymous_10;

// tag-#anon#ST[EN#anon_enum_NET_TCP=0_NET_TCP6=1_NET_UDP=2_NET_UDP6=3_NET_UNIX=4_NET_NETLINK=5_NET_UNKNOWN=6#{U32}_U32_'type'||U32768'_pad0'||SYM#tag-#anon#UN[SYM#tag-sockaddr_in#'addr4'||SYM#tag-sockaddr_in6#'addr6'||ARR4097{S8}_S8_'path'||U32800'_pad'|]#'u'||S32'family'||U32'_pad1'||U64'inode'||U32672'_pad2'|]
// file net.c line 70
struct anonymous_21;

// tag-#anon#ST[F64'timeout'||S32'ret'||U32'_pad0'|]
// file syscall.h line 57
struct anonymous_26;

// tag-#anon#ST[S32'pid'||U32'_pad0'||*{cV}_cV_'brk_start'||*{cV}_cV_'brk_current'||U64'brk_count'|]
// file mem.h line 48
struct anonymous_2;

// tag-#anon#ST[S32'pid'||U32'_pad0'||U64'mmap_length'||U64'mmap_count'||U64'munmap_length'||U64'munmap_count'|]
// file mem.h line 55
struct anonymous_1;

// tag-#anon#ST[S32'pid'||U32'_pad0'||U64'sync_count'||U64'fsync_count'||U64'fdatasync_count'||U64'syncfs_count'||U64'total_count'||SYM#tag-#anon#ST[*{SYM#tag-link#}_SYM#tag-link#_'head'||*{SYM#tag-link#}_SYM#tag-link#_'tail'||U64'length'|]#'sync_file'|]
// file syscall.h line 119
struct anonymous;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 74
struct anonymous_28;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 97
struct anonymous_31;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 89
struct anonymous_30;

// tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 62
struct anonymous_7;

// tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 81
struct anonymous_29;

// tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 114
struct anonymous_34;

// tag-#anon#ST[U64'call_count'||U64'data_total'|]
// file net.c line 46
struct anonymous_16;

// tag-#anon#ST[U64'open_total'||U64'close_total'||U64'read_total'||U64'write_total'||U64'total'||*{SYM#tag-proc_info#}_SYM#tag-proc_info#_'proc'|]
// file fnotify.h line 53
struct anonymous_25;

// tag-#anon#UN[*{V(S32)->V}_V(S32)->V_'sa_handler'||*{V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}_SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#_|*{V}_V_)->V}_V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}_SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#_|*{V}_V_)->V_'sa_sigaction'|]
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 28
union anonymous_14;

// tag-#anon#UN[ARR16{U8}_U8_'__u6_addr8'||ARR8{U16}_U16_'__u6_addr16'||ARR4{U32}_U32_'__u6_addr32'|]
// file /usr/include/netinet/in.h line 211
union anonymous_18;

// tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 69
union anonymous_36;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_6;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_5;

// tag-#anon#UN[SYM#tag-sockaddr_in#'addr4'||SYM#tag-sockaddr_in6#'addr6'||ARR4097{S8}_S8_'path'||U32800'_pad'|]
// file net.c line 72
union anonymous_20;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__dirstream
// file /usr/include/dirent.h line 127
struct __dirstream;

// tag-__jmp_buf_tag
// file /usr/include/pthread.h line 744
struct __jmp_buf_tag;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-__ptrace_request
// file /usr/include/x86_64-linux-gnu/sys/ptrace.h line 28
enum __ptrace_request { PTRACE_TRACEME=0, PTRACE_PEEKTEXT=1, PTRACE_PEEKDATA=2, PTRACE_PEEKUSER=3, PTRACE_POKETEXT=4, PTRACE_POKEDATA=5, PTRACE_POKEUSER=6, PTRACE_CONT=7, PTRACE_KILL=8, PTRACE_SINGLESTEP=9, PTRACE_GETREGS=12, PTRACE_SETREGS=13, PTRACE_GETFPREGS=14, PTRACE_SETFPREGS=15, PTRACE_ATTACH=16, PTRACE_DETACH=17, PTRACE_GETFPXREGS=18, PTRACE_SETFPXREGS=19, PTRACE_SYSCALL=24, PTRACE_SETOPTIONS=16896, PTRACE_GETEVENTMSG=16897, PTRACE_GETSIGINFO=16898, PTRACE_SETSIGINFO=16899, PTRACE_GETREGSET=16900, PTRACE_SETREGSET=16901, PTRACE_SEIZE=16902, PTRACE_INTERRUPT=16903, PTRACE_LISTEN=16904, PTRACE_PEEKSIGINFO=16905 };

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-fanotify_event_metadata
// file /usr/include/linux/fanotify.h line 84
struct fanotify_event_metadata;

// tag-fd_cache
// file syscall.h line 103
struct fd_cache;

// tag-filename_info
// file syscall.h line 158
struct filename_info;

// tag-in6_addr
// file /usr/include/netinet/in.h line 209
struct in6_addr;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-json_object
// file /usr/include/json-c/json_object.h line 71
struct json_object;

// tag-link
// file list.h line 28
struct link;

// tag-mem_info_t
// file mem.h line 39
struct mem_info_t;

// tag-mntent
// file /usr/include/mntent.h line 53
struct mntent;

// tag-passwd
// file /usr/include/pwd.h line 49
struct passwd;

// tag-proc_info
// file proc.h line 37
struct proc_info;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-sigaction
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 24
struct sigaction;

// tag-sigval
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 32
union sigval;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_in
// file /usr/include/netinet/in.h line 237
struct sockaddr_in;

// tag-sockaddr_in6
// file /usr/include/netinet/in.h line 252
struct sockaddr_in6;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-syscall
// file syscall.h line 82
struct syscall;

// tag-syscall_context
// file syscall.h line 139
struct syscall_context;

// tag-syscall_info
// file syscall.h line 63
struct syscall_info;

// tag-syscall_wakelock_info
// file syscall.h line 111
struct syscall_wakelock_info;

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

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef IEEE_FLOAT_EQUAL
#define IEEE_FLOAT_EQUAL(x,y) ((x)==(y))
#endif
#ifndef IEEE_FLOAT_NOTEQUAL
#define IEEE_FLOAT_NOTEQUAL(x,y) ((x)!=(y))
#endif

// _IO_putc
// file /usr/include/libio.h line 435
extern signed int _IO_putc(signed int, struct _IO_FILE *);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __ctype_tolower_loc
// file /usr/include/ctype.h line 81
extern const signed int ** __ctype_tolower_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __fxstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 398
extern signed int __fxstat(signed int, signed int, struct stat *);
// __pthread_register_cancel
// file /usr/include/pthread.h line 682
extern void __pthread_register_cancel(struct anonymous_4 *);
// __pthread_unregister_cancel
// file /usr/include/pthread.h line 694
extern void __pthread_unregister_cancel(struct anonymous_4 *);
// __pthread_unwind_next
// file /usr/include/pthread.h line 735
extern void __pthread_unwind_next(struct anonymous_4 *);
// __rawmemchr
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 393
extern void * __rawmemchr(const void *, signed int);
// __sigsetjmp
// file /usr/include/pthread.h line 745
extern signed int __sigsetjmp(struct __jmp_buf_tag *, signed int);
// __strdup
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1278
extern char * __strdup(const char *);
// __strtok_r
// file /usr/include/string.h line 353
extern char * __strtok_r(char *, const char *, char ** restrict );
// __strtok_r_1c
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1149
static inline char * __strtok_r_1c(char *__s, char __sep, char **__nextp);
// __xpg_basename
// file /usr/include/libgen.h line 34
extern char * __xpg_basename(char *);
// __xstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 400
extern signed int __xstat(signed int, const char *, struct stat *);
// atof
// file /usr/include/x86_64-linux-gnu/bits/stdlib-float.h line 26
static inline double atof(const char *__nptr);
// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr);
// basename
// file /usr/include/string.h line 603
extern char * basename(const char *);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closedir
// file /usr/include/dirent.h line 149
extern signed int closedir(struct __dirstream *);
// cpustat_cleanup
// file cpustat.c line 413
extern void cpustat_cleanup(void);
// cpustat_cmp
// file cpustat.c line 69
static signed int cpustat_cmp(const void *data1, const void *data2);
// cpustat_dump_diff
// file cpustat.c line 81
extern signed int cpustat_dump_diff(struct json_object *j_tests, const double duration);
// cpustat_get_all_pids
// file cpustat.c line 383
extern signed int cpustat_get_all_pids(const struct anonymous_3 *pids, enum anonymous_9 state);
// cpustat_get_by_proc
// file cpustat.h line 45
extern signed int cpustat_get_by_proc(struct proc_info *proc, enum anonymous_9 state);
// cpustat_init
// file cpustat.c line 403
extern void cpustat_init(void);
// cpustat_loading
// file cpustat.c line 42
static const char * cpustat_loading(const double cpu_percent);
// ctx_switch_cmp
// file ctxt-switch.c line 41
static signed int ctx_switch_cmp(const void *data1, const void *data2);
// ctxt_switch_cleanup
// file ctxt-switch.c line 307
extern void ctxt_switch_cleanup(void);
// ctxt_switch_delta
// file ctxt-switch.c line 142
static void ctxt_switch_delta(const struct anonymous_13 *ctxt_switch_new, const struct anonymous_3 *ctxt_switches_old, unsigned long int *total, unsigned long int *voluntary, unsigned long int *involuntary);
// ctxt_switch_dump_diff
// file ctxt-switch.c line 173
extern void ctxt_switch_dump_diff(struct json_object *j_tests, const double duration);
// ctxt_switch_get_all_pids
// file ctxt-switch.c line 104
extern signed int ctxt_switch_get_all_pids(const struct anonymous_3 *pids, enum anonymous_9 state);
// ctxt_switch_get_by_proc
// file ctxt-switch.h line 41
extern signed int ctxt_switch_get_by_proc(struct proc_info *proc, enum anonymous_9 state);
// ctxt_switch_init
// file ctxt-switch.c line 297
extern void ctxt_switch_init(void);
// ctxt_switch_loading
// file ctxt-switch.c line 120
static const char * ctxt_switch_loading(const double rate);
// endmntent
// file /usr/include/mntent.h line 87
extern signed int endmntent(struct _IO_FILE *);
// event_add
// file event.c line 83
static signed int event_add(struct anonymous_3 *events, const unsigned long int count, const signed int pid, const char *func, const char *callback);
// event_cleanup
// file event.c line 378
extern void event_cleanup(void);
// event_cmp
// file event.c line 71
static signed int event_cmp(const void *data1, const void *data2);
// event_delta
// file event.c line 236
static unsigned long int event_delta(const struct anonymous_32 *event_new, const struct anonymous_3 *events_old);
// event_dump_diff
// file event.c line 253
extern void event_dump_diff(struct json_object *j_tests, const double duration);
// event_free
// file event.c line 57
static void event_free(void *data);
// event_get_all_pids
// file event.c line 145
extern signed int event_get_all_pids(const struct anonymous_3 *pids, enum anonymous_9 state);
// event_init
// file event.c line 354
extern void event_init(void);
// event_loading
// file event.c line 210
static const char * event_loading(const double wakeup_rate);
// event_stop
// file event.c line 368
extern void event_stop(void);
// event_timer_stat_set
// file event.c line 41
static signed int event_timer_stat_set(const char *str);
// exec_executable
// file health-check.c line 204
signed int exec_executable(const char *opt_username, const char *path, char **argv);
// execv
// file /usr/include/unistd.h line 563
extern signed int execv(const char *, char * const *);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fanotify_init
// file /usr/include/x86_64-linux-gnu/sys/fanotify.h line 28
extern signed int fanotify_init(unsigned int, unsigned int);
// fanotify_mark
// file /usr/include/x86_64-linux-gnu/sys/fanotify.h line 32
extern signed int fanotify_mark(signed int, unsigned int, unsigned long int, signed int, const char *);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// feof
// file /usr/include/stdio.h line 828
extern signed int feof(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// find_executable
// file health-check.c line 276
static const char * find_executable(const char *filename);
// fnotify_cleanup
// file fnotify.c line 680
extern void fnotify_cleanup(void);
// fnotify_dump_events
// file fnotify.c line 653
extern void fnotify_dump_events(struct json_object *j_tests, const double duration, const struct anonymous_3 *pids);
// fnotify_dump_files
// file fnotify.c line 329
static void fnotify_dump_files(struct json_object *j_tests, const double duration);
// fnotify_dump_io_ops
// file fnotify.c line 412
static void fnotify_dump_io_ops(struct json_object *j_tests, const double duration, const struct anonymous_3 *pids);
// fnotify_dump_wakelocks
// file fnotify.c line 567
extern void fnotify_dump_wakelocks(struct json_object *j_tests, const double duration);
// fnotify_event_add
// file fnotify.c line 164
extern signed int fnotify_event_add(const struct anonymous_3 *pids, struct fanotify_event_metadata *metadata);
// fnotify_event_cmp_count
// file fnotify.c line 271
static signed int fnotify_event_cmp_count(const void *data1, const void *data2);
// fnotify_event_cmp_io_ops
// file fnotify.c line 283
static signed int fnotify_event_cmp_io_ops(const void *data1, const void *data2);
// fnotify_event_free
// file fnotify.c line 106
void fnotify_event_free(void *data);
// fnotify_event_init
// file fnotify.c line 49
extern signed int fnotify_event_init(void);
// fnotify_get_filename
// file fnotify.h line 66
extern char * fnotify_get_filename(const signed int pid, const signed int fd);
// fnotify_init
// file fnotify.c line 670
extern void fnotify_init(void);
// fnotify_mask_to_str
// file fnotify.c line 307
static const char * fnotify_mask_to_str(const signed int mask);
// fnotify_wakelock_cmp_count
// file fnotify.c line 295
static signed int fnotify_wakelock_cmp_count(const void *data1, const void *data2);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// fscanf
// file /usr/include/stdio.h line 425
extern signed int fscanf(struct _IO_FILE *, const char *, ...);
// fstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 466
static inline signed int fstat(signed int __fd, struct stat *__statbuf);
// get_pid_cmdline
// file pid.c line 68
extern char * get_pid_cmdline(const signed int pid);
// get_pid_comm
// file pid.c line 43
extern char * get_pid_comm(const signed int pid);
// getcwd
// file /usr/include/unistd.h line 511
extern char * getcwd(char *, unsigned long int);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// geteuid
// file /usr/include/unistd.h line 678
extern unsigned int geteuid(void);
// getmntent
// file /usr/include/mntent.h line 71
extern struct mntent * getmntent(struct _IO_FILE *);
// getnameinfo
// file /usr/include/netdb.h line 677
extern signed int getnameinfo(struct sockaddr *, unsigned int, char *, unsigned int, char *, unsigned int, signed int);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// getpwnam
// file /usr/include/pwd.h line 116
extern struct passwd * getpwnam(const char *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// getuid
// file /usr/include/unistd.h line 675
extern unsigned int getuid(void);
// gnu_dev_major
// file /usr/include/x86_64-linux-gnu/sys/sysmacros.h line 39
static inline unsigned int gnu_dev_major(unsigned long long int __dev);
// gnu_dev_minor
// file /usr/include/x86_64-linux-gnu/sys/sysmacros.h line 45
static inline unsigned int gnu_dev_minor(unsigned long long int __dev);
// handle_sig
// file health-check.c line 66
static void handle_sig(signed int dummy);
// hash_fd
// file syscall.c line 696
static inline unsigned long int hash_fd(const signed int pid, const signed int fd);
// hash_filename
// file syscall.c line 709
static unsigned int hash_filename(const signed int pid, const char *filename);
// hash_syscall
// file syscall.c line 684
static inline unsigned long int hash_syscall(const signed int pid, const signed int syscall);
// hash_syscall_context
// file syscall.c line 726
static inline unsigned long int hash_syscall_context(const signed int pid);
// health_check_exit
// file health-check.h line 39
extern void health_check_exit(const signed int status);
// health_check_out_of_memory
// file health-check.h line 40
extern void health_check_out_of_memory(const char *msg);
// initgroups
// file /usr/include/grp.h line 200
extern signed int initgroups(const char *, unsigned int);
// is_executable
// file health-check.c line 263
static inline signed int is_executable(const char *path);
// j_obj_array_add
// file json.h line 39
static inline void j_obj_array_add(struct json_object *array, struct json_object *obj);
// j_obj_array_add_link1
// file json.h line 39
static inline void j_obj_array_add_link1(struct json_object *array_link1, struct json_object *obj_link1);
// j_obj_array_add_link2
// file json.h line 39
static inline void j_obj_array_add_link2(struct json_object *array_link2, struct json_object *obj_link2);
// j_obj_array_add_link3
// file json.h line 39
static inline void j_obj_array_add_link3(struct json_object *array_link3, struct json_object *obj_link3);
// j_obj_array_add_link4
// file json.h line 39
static inline void j_obj_array_add_link4(struct json_object *array_link4, struct json_object *obj_link4);
// j_obj_array_add_link5
// file json.h line 39
static inline void j_obj_array_add_link5(struct json_object *array_link5, struct json_object *obj_link5);
// j_obj_array_add_link6
// file json.h line 39
static inline void j_obj_array_add_link6(struct json_object *array_link6, struct json_object *obj_link6);
// j_obj_is_null
// file json.c line 34
static inline void j_obj_is_null(struct json_object *obj, const char *msg);
// j_obj_new_array
// file json.h line 27
extern struct json_object * j_obj_new_array(void);
// j_obj_new_double
// file json.h line 31
extern struct json_object * j_obj_new_double(const double d);
// j_obj_new_double_add
// file json.h line 54
static inline void j_obj_new_double_add(struct json_object *parent, const char *label, const double d);
// j_obj_new_double_add_link1
// file json.h line 54
static inline void j_obj_new_double_add_link1(struct json_object *parent_link1, const char *label_link1, const double d_link1);
// j_obj_new_double_add_link2
// file json.h line 54
static inline void j_obj_new_double_add_link2(struct json_object *parent_link2, const char *label_link2, const double d_link2);
// j_obj_new_double_add_link3
// file json.h line 54
static inline void j_obj_new_double_add_link3(struct json_object *parent_link3, const char *label_link3, const double d_link3);
// j_obj_new_double_add_link4
// file json.h line 54
static inline void j_obj_new_double_add_link4(struct json_object *parent_link4, const char *label_link4, const double d_link4);
// j_obj_new_double_add_link5
// file json.h line 54
static inline void j_obj_new_double_add_link5(struct json_object *parent_link5, const char *label_link5, const double d_link5);
// j_obj_new_double_add_link6
// file json.h line 54
static inline void j_obj_new_double_add_link6(struct json_object *parent_link6, const char *label_link6, const double d_link6);
// j_obj_new_int32
// file json.h line 29
extern struct json_object * j_obj_new_int32(const signed int i);
// j_obj_new_int32_add
// file json.h line 44
static inline void j_obj_new_int32_add(struct json_object *parent, const char *label, const signed int i);
// j_obj_new_int32_add_link1
// file json.h line 44
static inline void j_obj_new_int32_add_link1(struct json_object *parent_link1, const char *label_link1, const signed int i_link1);
// j_obj_new_int32_add_link2
// file json.h line 44
static inline void j_obj_new_int32_add_link2(struct json_object *parent_link2, const char *label_link2, const signed int i_link2);
// j_obj_new_int32_add_link3
// file json.h line 44
static inline void j_obj_new_int32_add_link3(struct json_object *parent_link3, const char *label_link3, const signed int i_link3);
// j_obj_new_int32_add_link4
// file json.h line 44
static inline void j_obj_new_int32_add_link4(struct json_object *parent_link4, const char *label_link4, const signed int i_link4);
// j_obj_new_int32_add_link5
// file json.h line 44
static inline void j_obj_new_int32_add_link5(struct json_object *parent_link5, const char *label_link5, const signed int i_link5);
// j_obj_new_int32_add_link6
// file json.h line 44
static inline void j_obj_new_int32_add_link6(struct json_object *parent_link6, const char *label_link6, const signed int i_link6);
// j_obj_new_int64
// file json.h line 30
extern struct json_object * j_obj_new_int64(const signed long int i);
// j_obj_new_int64_add
// file json.h line 49
static inline void j_obj_new_int64_add(struct json_object *parent, const char *label, const signed long int i);
// j_obj_new_int64_add_link1
// file json.h line 49
static inline void j_obj_new_int64_add_link1(struct json_object *parent_link1, const char *label_link1, const signed long int i_link1);
// j_obj_new_int64_add_link2
// file json.h line 49
static inline void j_obj_new_int64_add_link2(struct json_object *parent_link2, const char *label_link2, const signed long int i_link2);
// j_obj_new_int64_add_link3
// file json.h line 49
static inline void j_obj_new_int64_add_link3(struct json_object *parent_link3, const char *label_link3, const signed long int i_link3);
// j_obj_new_int64_add_link4
// file json.h line 49
static inline void j_obj_new_int64_add_link4(struct json_object *parent_link4, const char *label_link4, const signed long int i_link4);
// j_obj_new_int64_add_link5
// file json.h line 49
static inline void j_obj_new_int64_add_link5(struct json_object *parent_link5, const char *label_link5, const signed long int i_link5);
// j_obj_new_int64_add_link6
// file json.h line 49
static inline void j_obj_new_int64_add_link6(struct json_object *parent_link6, const char *label_link6, const signed long int i_link6);
// j_obj_new_obj
// file json.h line 28
extern struct json_object * j_obj_new_obj(void);
// j_obj_new_string
// file json.h line 32
extern struct json_object * j_obj_new_string(const char *str);
// j_obj_new_string_add
// file json.h line 59
static inline void j_obj_new_string_add(struct json_object *parent, const char *label, const char *str);
// j_obj_new_string_add_link1
// file json.h line 59
static inline void j_obj_new_string_add_link1(struct json_object *parent_link1, const char *label_link1, const char *str_link1);
// j_obj_new_string_add_link2
// file json.h line 59
static inline void j_obj_new_string_add_link2(struct json_object *parent_link2, const char *label_link2, const char *str_link2);
// j_obj_new_string_add_link3
// file json.h line 59
static inline void j_obj_new_string_add_link3(struct json_object *parent_link3, const char *label_link3, const char *str_link3);
// j_obj_new_string_add_link4
// file json.h line 59
static inline void j_obj_new_string_add_link4(struct json_object *parent_link4, const char *label_link4, const char *str_link4);
// j_obj_new_string_add_link5
// file json.h line 59
static inline void j_obj_new_string_add_link5(struct json_object *parent_link5, const char *label_link5, const char *str_link5);
// j_obj_new_string_add_link6
// file json.h line 59
static inline void j_obj_new_string_add_link6(struct json_object *parent_link6, const char *label_link6, const char *str_link6);
// j_obj_obj_add
// file json.h line 34
static inline void j_obj_obj_add(struct json_object *parent, const char *label, struct json_object *obj);
// j_obj_obj_add_link1
// file json.h line 34
static inline void j_obj_obj_add_link1(struct json_object *parent_link1, const char *label_link1, struct json_object *obj_link1);
// j_obj_obj_add_link2
// file json.h line 34
static inline void j_obj_obj_add_link2(struct json_object *parent_link2, const char *label_link2, struct json_object *obj_link2);
// j_obj_obj_add_link3
// file json.h line 34
static inline void j_obj_obj_add_link3(struct json_object *parent_link3, const char *label_link3, struct json_object *obj_link3);
// j_obj_obj_add_link4
// file json.h line 34
static inline void j_obj_obj_add_link4(struct json_object *parent_link4, const char *label_link4, struct json_object *obj_link4);
// j_obj_obj_add_link5
// file json.h line 34
static inline void j_obj_obj_add_link5(struct json_object *parent_link5, const char *label_link5, struct json_object *obj_link5);
// j_obj_obj_add_link6
// file json.h line 34
static inline void j_obj_obj_add_link6(struct json_object *parent_link6, const char *label_link6, struct json_object *obj_link6);
// json_object_array_add
// file /usr/include/json-c/json_object.h line 395
extern signed int json_object_array_add(struct json_object *, struct json_object *);
// json_object_new_array
// file /usr/include/json-c/json_object.h line 362
extern struct json_object * json_object_new_array(void);
// json_object_new_double
// file /usr/include/json-c/json_object.h line 502
extern struct json_object * json_object_new_double(double);
// json_object_new_int
// file /usr/include/json-c/json_object.h line 454
extern struct json_object * json_object_new_int(signed int);
// json_object_new_int64
// file /usr/include/json-c/json_object.h line 461
extern struct json_object * json_object_new_int64(signed long int);
// json_object_new_object
// file /usr/include/json-c/json_object.h line 222
extern struct json_object * json_object_new_object(void);
// json_object_new_string
// file /usr/include/json-c/json_object.h line 539
extern struct json_object * json_object_new_string(const char *);
// json_object_object_add
// file /usr/include/json-c/json_object.h line 251
extern void json_object_object_add(struct json_object *, const char *, struct json_object *);
// json_object_put
// file /usr/include/json-c/json_object.h line 129
signed int json_object_put(struct json_object *);
// json_object_to_json_string_ext
// file /usr/include/json-c/json_object.h line 174
extern const char * json_object_to_json_string_ext(struct json_object *, signed int);
// json_write
// file health-check.c line 167
static signed int json_write(struct json_object *obj, const char *filename);
// kill
// file /usr/include/signal.h line 127
extern signed int kill(signed int, signed int);
// list_add_ordered
// file list.c line 66
extern struct link * list_add_ordered(struct anonymous_3 *list, void *new_data, signed int (* const compare)(const void *, const void *));

//

// list_append
// file list.c line 41
extern struct link * list_append(struct anonymous_3 *list, void *data);
// list_free
// file list.c line 98
extern void list_free(struct anonymous_3 *list, void (* const freefunc)(void *));

//

// list_init
// file list.c line 30
extern void list_init(struct anonymous_3 *list);
// localtime
// file /usr/include/time.h line 243
extern struct tm * localtime(const signed long int *);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// mem_brk_account
// file mem.h line 67
extern signed int mem_brk_account(const signed int pid, const void *addr);
// mem_brk_cmp
// file mem.c line 277
static signed int mem_brk_cmp(const void *data1, const void *data2);
// mem_cleanup
// file mem.c line 816
extern void mem_cleanup(void);
// mem_cmp
// file mem.c line 379
static signed int mem_cmp(const void *data1, const void *data2);
// mem_delta
// file mem.c line 520
static struct mem_info_t * mem_delta(struct mem_info_t *mem_new, const struct anonymous_3 *mem_old_list);
// mem_dump_brk
// file mem.c line 292
extern void mem_dump_brk(struct json_object *j_tests, const double duration);
// mem_dump_diff
// file mem.c line 555
extern signed int mem_dump_diff(struct json_object *j_tests, const double duration);
// mem_dump_mmap
// file mem.c line 149
extern void mem_dump_mmap(struct json_object *j_tests, const double duration);
// mem_get_all_pids
// file mem.c line 503
extern signed int mem_get_all_pids(const struct anonymous_3 *pids, const enum anonymous_9 state);
// mem_get_by_proc
// file mem.h line 66
extern signed int mem_get_by_proc(struct proc_info *p, const enum anonymous_9 state);
// mem_get_entry
// file mem.c line 413
static signed int mem_get_entry(struct _IO_FILE *fp, struct mem_info_t *mem);
// mem_get_size
// file mem.c line 391
static signed int mem_get_size(struct _IO_FILE *fp, const char *field, unsigned long int *size);
// mem_init
// file mem.c line 804
extern void mem_init(void);
// mem_loading
// file mem.c line 62
static const char * mem_loading(const double mem_rate);
// mem_mmap_account
// file mem.h line 69
extern signed int mem_mmap_account(const signed int pid, const unsigned long int length, const _Bool mmap);
// mem_mmap_cmp
// file mem.c line 135
static signed int mem_mmap_cmp(const void *data1, const void *data2);
// mem_tolower_str
// file mem.c line 51
static void mem_tolower_str(char *str);
// memcmp
// file /usr/include/string.h line 69
extern signed int memcmp(const void *, const void *, unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// net_account_recv
// file net.c line 223
extern void net_account_recv(const signed int pid, const signed int fd, unsigned long int size);
// net_account_send
// file net.c line 209
extern void net_account_send(const signed int pid, const signed int fd, unsigned long int size);
// net_add_dump_info
// file net.c line 401
static void net_add_dump_info(struct anonymous_3 *list, struct anonymous_22 *new_dump_info);
// net_addr_add
// file net.c line 332
static struct anonymous_21 * net_addr_add(struct anonymous_21 *addr);
// net_cache_inode_by_pid_and_fd
// file net.c line 192
static struct anonymous_17 * net_cache_inode_by_pid_and_fd(const signed int pid, const signed int fd);
// net_cache_inodes
// file net.c line 278
static signed int net_cache_inodes(struct anonymous_3 *pids);
// net_cache_inodes_pid
// file net.c line 238
static signed int net_cache_inodes_pid(const signed int pid);
// net_connection_cleanup
// file net.c line 816
extern void net_connection_cleanup(void);
// net_connection_dump
// file net.c line 466
extern void net_connection_dump(struct json_object *j_tests, double duration);
// net_connection_init
// file net.c line 803
extern void net_connection_init(void);
// net_connection_pid
// file net.c line 792
extern signed int net_connection_pid(const signed int pid);
// net_connection_pids
// file net.c line 780
extern signed int net_connection_pids(struct anonymous_3 *pids);
// net_dump_info_cmp
// file net.c line 429
static signed int net_dump_info_cmp(const void *p1, const void *p2);
// net_get_addr
// file net.c line 360
static char * net_get_addr(struct anonymous_21 *addr_info);
// net_get_inode
// file net.c line 157
static signed int net_get_inode(const char *str, unsigned long int *inode);
// net_get_inode_by_path
// file net.c line 176
static signed int net_get_inode_by_path(const char *path, unsigned long int *inode, char *link);
// net_hash
// file net.c line 113
static inline unsigned long int net_hash(const unsigned long int inode);
// net_hash_add
// file net.c line 122
static struct anonymous_17 * net_hash_add(const char *path, const unsigned long int inode, const signed int pid, const unsigned int fd);
// net_inet4_resolve
// file net.c line 294
static void net_inet4_resolve(char *name, const unsigned long int len, struct sockaddr_in *sin);
// net_inet6_resolve
// file net.c line 312
static void net_inet6_resolve(char *name, const unsigned long int len, struct sockaddr_in6 *sin6);
// net_netlink_parse
// file net.c line 721
static signed int net_netlink_parse(void);
// net_parse
// file net.c line 757
static signed int net_parse(void);
// net_size_to_str
// file net.c line 444
static void net_size_to_str(char *buf, unsigned long int buf_len, unsigned long int size);
// net_tcp_udp_parse
// file net.c line 649
static signed int net_tcp_udp_parse(const enum anonymous_19 type);
// net_unix_parse
// file net.c line 611
static signed int net_unix_parse(void);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// pagefault_cmp
// file cpustat.c line 214
static signed int pagefault_cmp(const void *data1, const void *data2);
// pagefault_dump_diff
// file cpustat.c line 227
extern signed int pagefault_dump_diff(struct json_object *j_tests, const double duration);
// parse_pid_list
// file health-check.c line 131
static signed int parse_pid_list(char *arg, struct anonymous_3 *pids);
// pid_exists
// file pid.c line 102
extern _Bool pid_exists(const signed int pid);
// pid_get_children
// file pid.c line 134
static signed int pid_get_children(const signed int pid, struct anonymous_3 *children);
// pid_list_find
// file pid.c line 115
extern _Bool pid_list_find(const signed int pid, struct anonymous_3 *list);
// pid_list_get_children
// file pid.c line 157
extern signed int pid_list_get_children(struct anonymous_3 *pids);
// posix_memalign
// file /usr/include/stdlib.h line 503
extern signed int posix_memalign(void **, unsigned long int, unsigned long int);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// proc_cache_add
// file proc.c line 96
extern struct proc_info * proc_cache_add(const signed int pid, const signed int ppid, const _Bool is_thread);
// proc_cache_add_at_hash_index
// file proc.c line 59
static struct proc_info * proc_cache_add_at_hash_index(const unsigned long int h, const signed int pid, const signed int ppid, const _Bool is_thread);
// proc_cache_cleanup
// file proc.c line 326
extern void proc_cache_cleanup(void);
// proc_cache_find_by_pid
// file proc.c line 122
extern struct proc_info * proc_cache_find_by_pid(const signed int pid);
// proc_cache_find_by_procname
// file proc.c line 287
extern signed int proc_cache_find_by_procname(struct anonymous_3 *pids, const char *procname);
// proc_cache_get
// file proc.c line 152
extern signed int proc_cache_get(void);
// proc_cache_get_pthreads
// file proc.c line 191
extern signed int proc_cache_get_pthreads(void);
// proc_cache_hash_pid
// file proc.c line 48
static inline unsigned long int proc_cache_hash_pid(const signed int pid);
// proc_cache_info_free
// file proc.c line 249
static void proc_cache_info_free(void *data);
// proc_cache_init
// file proc.c line 317
extern void proc_cache_init(void);
// proc_pids_add_proc
// file proc.c line 262
extern signed int proc_pids_add_proc(struct anonymous_3 *pids, struct proc_info *p);
// pthread_cancel
// file /usr/include/pthread.h line 515
extern signed int pthread_cancel(unsigned long int);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_exit
// file /usr/include/pthread.h line 244
extern void pthread_exit(void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_5 *, const union anonymous_6 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_5 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_5 *);
// pthread_setcancelstate
// file /usr/include/pthread.h line 508
extern signed int pthread_setcancelstate(signed int, signed int *);
// ptrace
// file /usr/include/x86_64-linux-gnu/sys/ptrace.h line 213
extern signed long int ptrace(enum __ptrace_request, ...);
// putchar
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 79
static inline signed int putchar(signed int __c);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// readdir
// file /usr/include/dirent.h line 162
extern struct dirent * readdir(struct __dirstream *);
// readlink
// file /usr/include/unistd.h line 809
extern signed long int readlink(const char *, char *, unsigned long int);
// select
// file /usr/include/x86_64-linux-gnu/sys/select.h line 106
extern signed int select(signed int, struct anonymous_12 *, struct anonymous_12 *, struct anonymous_12 *, struct timeval *);
// setmntent
// file /usr/include/mntent.h line 66
extern struct _IO_FILE * setmntent(const char *, const char *);
// setregid
// file /usr/include/unistd.h line 722
extern signed int setregid(unsigned int, unsigned int);
// setreuid
// file /usr/include/unistd.h line 705
extern signed int setreuid(unsigned int, unsigned int);
// show_usage
// file health-check.c line 97
static void show_usage(void);
// sigaction
// file /usr/include/signal.h line 259
extern signed int sigaction(signed int, struct sigaction *, struct sigaction *);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous_15 *);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf);
// stat_link1
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat_link1(const char *__path_link1, struct stat *__statbuf_link1);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strftime
// file /usr/include/time.h line 205
extern unsigned long int strftime(char *, unsigned long int, const char *, struct tm *);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// strtod
// file /usr/include/stdlib.h line 164
extern double strtod(const char *, char ** restrict );
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// syscall_account_return
// file syscall.c line 2310
static void syscall_account_return(struct syscall_info *s, const signed int pid, const signed int syscall, const double timeout);
// syscall_account_sync_file
// file syscall.c line 1257
static void syscall_account_sync_file(struct anonymous *info, const signed int syscall, const signed int pid, const signed int fd);
// syscall_add_filename
// file syscall.c line 1867
void syscall_add_filename(const signed int syscall, const signed int pid, const char *filename);
// syscall_brk_args
// file syscall.c line 1339
static void syscall_brk_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid);
// syscall_cleanup
// file syscall.c line 2809
extern void syscall_cleanup(void);
// syscall_close_args
// file syscall.c line 1110
static void syscall_close_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid);
// syscall_connect_args
// file syscall.c line 169
static void syscall_connect_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid);
// syscall_connect_ret
// file syscall.c line 186
static void syscall_connect_ret(const struct syscall *sc, const struct syscall_info *s, const signed int ret);
// syscall_context_find_by_pid
// file syscall.c line 2571
static struct syscall_context * syscall_context_find_by_pid(const signed int pid);
// syscall_count_cmp
// file syscall.c line 737
static signed int syscall_count_cmp(const void *data1, const void *data2);
// syscall_count_timeout
// file syscall.c line 864
static void syscall_count_timeout(struct syscall_info *s, const double timeout, const double threshold);
// syscall_count_usage
// file syscall.c line 2346
static struct syscall_info * syscall_count_usage(const signed int pid, const signed int syscall, double *timeout);
// syscall_dump_execve
// file syscall.c line 2060
extern void syscall_dump_execve(struct json_object *j_obj, double duration);
// syscall_dump_filename
// file syscall.c line 1940
void syscall_dump_filename(const char *label, const signed int syscall, struct json_object *j_obj, double duration);
// syscall_dump_hashtable
// file syscall.c line 772
extern void syscall_dump_hashtable(struct json_object *j_tests, const double duration);
// syscall_dump_inotify
// file syscall.c line 2025
extern void syscall_dump_inotify(struct json_object *j_obj, double duration);
// syscall_dump_pollers
// file syscall.c line 2111
extern void syscall_dump_pollers(struct json_object *j_tests, const double duration);
// syscall_dump_sync
// file syscall.c line 1436
extern void syscall_dump_sync(struct json_object *j_tests, double duration);
// syscall_dump_wakelocks
// file syscall.c line 1673
extern void syscall_dump_wakelocks(struct json_object *j_tests, const double duration, struct anonymous_3 *pids);
// syscall_execve_args
// file syscall.c line 2043
void syscall_execve_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid);
// syscall_exit_args
// file syscall.c line 1200
static void syscall_exit_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid);
// syscall_fd_cache_lookup
// file syscall.c line 1059
static struct fd_cache * syscall_fd_cache_lookup(const signed int pid, const signed int fd);
// syscall_filename_cache_free
// file syscall.c line 1920
static void syscall_filename_cache_free(void);
// syscall_filename_cmp
// file syscall.c line 1908
static signed int syscall_filename_cmp(const void *d1, const void *d2);
// syscall_fsync_generic_args
// file syscall.c line 1293
static void syscall_fsync_generic_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid);
// syscall_get_arg_data
// file syscall.c line 912
static void syscall_get_arg_data(const unsigned long int addr, const signed int pid, void *data, const unsigned long int len);
// syscall_get_args
// file syscall.c line 579
static signed int syscall_get_args(const signed int pid, const signed int arg, unsigned long int *args);
// syscall_get_call
// file syscall.c line 408
static inline signed int syscall_get_call(const signed int pid, signed int *syscall);
// syscall_get_call_state
// file syscall.c line 374
static inline enum anonymous_27 syscall_get_call_state(const signed int pid);
// syscall_get_context
// file syscall.c line 2589
static struct syscall_context * syscall_get_context(signed int pid);
// syscall_get_return
// file syscall.c line 511
static inline signed int syscall_get_return(const signed int pid, signed int *rc);
// syscall_handle_event
// file syscall.c line 2470
static void syscall_handle_event(struct syscall_context *ctxt, signed int event);
// syscall_handle_stop
// file syscall.c line 2539
static inline signed int syscall_handle_stop(struct syscall_context *ctxt, const signed int status);
// syscall_handle_syscall
// file syscall.c line 2412
static void syscall_handle_syscall(struct syscall_context *ctxt);
// syscall_handle_trap
// file syscall.c line 2519
static inline void syscall_handle_trap(struct syscall_context *ctxt);
// syscall_hashtable_free
// file syscall.c line 752
static void syscall_hashtable_free(void);
// syscall_init
// file syscall.c line 2781
extern void syscall_init(void);
// syscall_inotify_add_watch_args
// file syscall.c line 2008
void syscall_inotify_add_watch_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid);
// syscall_mmap_args
// file syscall.c line 1361
static void syscall_mmap_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid);
// syscall_mq_timedreceive_ret
// file syscall.c line 347
static void syscall_mq_timedreceive_ret(struct json_object *j_obj, const struct syscall *sc, const struct syscall_info *s);
// syscall_mq_timedsend_ret
// file syscall.c line 361
static void syscall_mq_timedsend_ret(struct json_object *j_obj, const struct syscall *sc, const struct syscall_info *s);
// syscall_munmap_args
// file syscall.c line 1381
static void syscall_munmap_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid);
// syscall_name
// file syscall.c line 670
static void syscall_name(const signed int syscall, char *name, const unsigned long int len);
// syscall_nanosleep_generic_ret
// file syscall.c line 200
static void syscall_nanosleep_generic_ret(struct json_object *j_obj, const struct syscall *sc, const struct syscall_info *s);
// syscall_peek_data
// file syscall.c line 1003
static void * syscall_peek_data(const signed int pid, const unsigned long int addr, const unsigned long int len);
// syscall_peek_filename
// file syscall.c line 1838
static char * syscall_peek_filename(const signed int pid, const unsigned long int addr);
// syscall_poll_generic_ret
// file syscall.c line 251
static void syscall_poll_generic_ret(struct json_object *j_obj, const struct syscall *sc, const struct syscall_info *s);
// syscall_recvfrom_ret
// file syscall.c line 1607
static void syscall_recvfrom_ret(const struct syscall *sc, const struct syscall_info *s, const signed int ret);
// syscall_semtimedop_ret
// file syscall.c line 333
static void syscall_semtimedop_ret(struct json_object *j_obj, const struct syscall *sc, const struct syscall_info *s);
// syscall_sendto_ret
// file syscall.c line 1585
static void syscall_sendto_ret(const struct syscall *sc, const struct syscall_info *s, const signed int ret);
// syscall_stop
// file syscall.c line 2792
extern signed int syscall_stop(void);
// syscall_sync_args
// file syscall.c line 1317
static void syscall_sync_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid);
// syscall_sync_cmp
// file syscall.c line 1400
static signed int syscall_sync_cmp(const void *d1, const void *d2);
// syscall_sync_free_fileinfo
// file syscall.c line 1412
static void syscall_sync_free_fileinfo(void *data);
// syscall_sync_free_item
// file syscall.c line 1424
static void syscall_sync_free_item(void *data);
// syscall_sync_info_find_by_pid
// file syscall.c line 1226
static struct anonymous * syscall_sync_info_find_by_pid(const signed int pid);
// syscall_timeout_millisec
// file syscall.c line 984
static void syscall_timeout_millisec(const struct syscall *sc, struct syscall_info *s, const signed int pid, const double threshold, double *ret_timeout);
// syscall_timeout_to_human_time
// file syscall.c line 2083
static char * syscall_timeout_to_human_time(const double timeout, const _Bool end, char *buffer, const unsigned long int len);
// syscall_timespec_timeout
// file syscall.c line 931
static void syscall_timespec_timeout(const struct syscall *sc, struct syscall_info *s, const signed int pid, const double threshold, double *ret_timeout);
// syscall_timeval_timeout
// file syscall.c line 957
static void syscall_timeval_timeout(const struct syscall *sc, struct syscall_info *s, const signed int pid, const double threshold, double *ret_timeout);
// syscall_timeval_to_double
// file syscall.c line 1637
static inline double syscall_timeval_to_double(struct timeval *tv);
// syscall_trace
// file syscall.c line 2652
extern void * syscall_trace(void *arg);
// syscall_trace::1::1::__cancel_routine_object
//
void __cancel_routine_object(void *);
// syscall_trace_cleanup
// file syscall.c line 2626
static void syscall_trace_cleanup(void *arg);
// syscall_trace_proc
// file syscall.c line 2823
extern signed int syscall_trace_proc(struct anonymous_3 *pids);
// syscall_valid
// file syscall.c line 155
static _Bool syscall_valid(const signed int syscall);
// syscall_wakelock_cmp
// file syscall.c line 1628
static signed int syscall_wakelock_cmp(const void *data1, const void *data2);
// syscall_wakelock_fd_cache_free
// file syscall.c line 1037
static void syscall_wakelock_fd_cache_free(void);
// syscall_wakelock_free
// file syscall.c line 1025
static void syscall_wakelock_free(void *ptr);
// syscall_wakelock_names_by_pid
// file syscall.c line 1648
void syscall_wakelock_names_by_pid(signed int pid, struct anonymous_3 *wakelock_names);
// syscall_write_args
// file syscall.c line 1144
static void syscall_write_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// timeval_add
// file timeval.c line 41
extern struct timeval timeval_add(struct timeval *a, struct timeval *b);
// timeval_sub
// file timeval.h line 32
extern struct timeval timeval_sub(struct timeval *a, struct timeval *b);
// timeval_to_double
// file timeval.c line 32
extern double timeval_to_double(struct timeval *tv);
// tolower
// file /usr/include/ctype.h line 215
static inline signed int tolower(signed int __c);
// waitpid
// file /usr/include/x86_64-linux-gnu/sys/wait.h line 125
extern signed int waitpid(signed int, signed int *, signed int);

struct anonymous_0
{
  // filename
  char *filename;
  // count
  unsigned long int count;
  // syscall
  signed int syscall;
};

struct anonymous_22
{
  // addr_info
  struct anonymous_21 *addr_info;
  // nh
  struct anonymous_17 *nh;
  // send_recv_total
  unsigned long int send_recv_total;
};

struct anonymous_3
{
  // head
  struct link *head;
  // tail
  struct link *tail;
  // length
  unsigned long int length;
};

struct anonymous_24
{
  // proc
  struct proc_info *proc;
  // filename
  char *filename;
  // mask
  unsigned int mask;
  // count
  unsigned long int count;
};

struct anonymous_32
{
  // proc
  struct proc_info *proc;
  // func
  char *func;
  // callback
  char *callback;
  // ident
  char *ident;
  // count
  unsigned long int count;
};

struct anonymous_16
{
  // call_count
  unsigned long int call_count;
  // data_total
  unsigned long int data_total;
};

struct anonymous_17
{
  // proc
  struct proc_info *proc;
  // inode
  unsigned long int inode;
  // fd
  unsigned int fd;
  // send
  struct anonymous_16 send;
  // recv
  struct anonymous_16 recv;
  // path
  char path[4097l];
};

struct anonymous_23
{
  // proc
  struct proc_info *proc;
  // locked
  unsigned long int locked;
  // unlocked
  unsigned long int unlocked;
  // total
  unsigned long int total;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct anonymous_37
{
  // proc
  struct proc_info *proc;
  // utime
  unsigned long int utime;
  // stime
  unsigned long int stime;
  // ttime
  unsigned long int ttime;
  // minor_fault
  unsigned long int minor_fault;
  // major_fault
  unsigned long int major_fault;
  // whence
  struct timeval whence;
  // duration
  double duration;
};

struct anonymous_13
{
  // proc
  struct proc_info *proc;
  // voluntary
  unsigned long int voluntary;
  // involuntary
  unsigned long int involuntary;
  // total
  unsigned long int total;
  // valid
  _Bool valid;
};

struct anonymous_35
{
  // _call_addr
  void *_call_addr;
  // _syscall
  signed int _syscall;
  // _arch
  unsigned int _arch;
};

struct anonymous_33
{
  // si_addr
  void *si_addr;
  // si_addr_lsb
  signed short int si_addr_lsb;
};

struct anonymous_12
{
  // fds_bits
  signed long int fds_bits[16l];
};

struct anonymous_15
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous_10
{
  // __cancel_jmp_buf
  signed long int __cancel_jmp_buf[8l];
  // __mask_was_saved
  signed int __mask_was_saved;
};

struct anonymous_4
{
  // __cancel_jmp_buf
  struct anonymous_10 __cancel_jmp_buf[1l];
  // __pad
  void *__pad[4l];
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

union anonymous_18
{
  // __u6_addr8
  unsigned char __u6_addr8[16l];
  // __u6_addr16
  unsigned short int __u6_addr16[8l];
  // __u6_addr32
  unsigned int __u6_addr32[4l];
};

struct in6_addr
{
  // __in6_u
  union anonymous_18 __in6_u;
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

union anonymous_20
{
  // addr4
  struct sockaddr_in addr4;
  // addr6
  struct sockaddr_in6 addr6;
  // path
  char path[4097l];
};

struct anonymous_21
{
  // type
  enum anonymous_19 type;
  // u
  union anonymous_20 u;
  // family
  signed int family;
  // inode
  unsigned long int inode;
};

struct anonymous_26
{
  // timeout
  double timeout;
  // ret
  signed int ret;
};

struct anonymous_2
{
  // pid
  signed int pid;
  // brk_start
  const void *brk_start;
  // brk_current
  const void *brk_current;
  // brk_count
  unsigned long int brk_count;
};

struct anonymous_1
{
  // pid
  signed int pid;
  // mmap_length
  unsigned long int mmap_length;
  // mmap_count
  unsigned long int mmap_count;
  // munmap_length
  unsigned long int munmap_length;
  // munmap_count
  unsigned long int munmap_count;
};

struct anonymous
{
  // pid
  signed int pid;
  // sync_count
  unsigned long int sync_count;
  // fsync_count
  unsigned long int fsync_count;
  // fdatasync_count
  unsigned long int fdatasync_count;
  // syncfs_count
  unsigned long int syncfs_count;
  // total_count
  unsigned long int total_count;
  // sync_file
  struct anonymous_3 sync_file;
};

struct anonymous_28
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
};

struct anonymous_31
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

struct anonymous_30
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous_29
{
  // si_tid
  signed int si_tid;
  // si_overrun
  signed int si_overrun;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous_34
{
  // si_band
  signed long int si_band;
  // si_fd
  signed int si_fd;
};

union anonymous_36
{
  // _pad
  signed int _pad[28l];
  // _kill
  struct anonymous_28 _kill;
  // _timer
  struct anonymous_29 _timer;
  // _rt
  struct anonymous_30 _rt;
  // _sigchld
  struct anonymous_31 _sigchld;
  // _sigfault
  struct anonymous_33 _sigfault;
  // _sigpoll
  struct anonymous_34 _sigpoll;
  // _sigsys
  struct anonymous_35 _sigsys;
};

struct anonymous_7
{
  // si_signo
  signed int si_signo;
  // si_errno
  signed int si_errno;
  // si_code
  signed int si_code;
  // _sifields
  union anonymous_36 _sifields;
};

struct anonymous_25
{
  // open_total
  unsigned long int open_total;
  // close_total
  unsigned long int close_total;
  // read_total
  unsigned long int read_total;
  // write_total
  unsigned long int write_total;
  // total
  unsigned long int total;
  // proc
  struct proc_info *proc;
};

union anonymous_14
{
  // sa_handler
  void (*sa_handler)(signed int);
  // sa_sigaction
  void (*sa_sigaction)(signed int, struct anonymous_7 *, void *);
};

union anonymous_6
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

union anonymous_5
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
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

struct fanotify_event_metadata
{
  // event_len
  unsigned int event_len;
  // vers
  unsigned char vers;
  // reserved
  unsigned char reserved;
  // metadata_len
  unsigned short int metadata_len;
  // mask
  unsigned long long int mask;
  // fd
  signed int fd;
  // pid
  signed int pid;
};

struct fd_cache
{
  // pid
  signed int pid;
  // fd
  signed int fd;
  // filename
  char *filename;
  // mutex
  union anonymous_5 mutex;
  // next
  struct fd_cache *next;
};

struct filename_info
{
  // syscall
  signed int syscall;
  // pid
  signed int pid;
  // proc
  struct proc_info *proc;
  // filename
  char *filename;
  // count
  unsigned long int count;
  // next
  struct filename_info *next;
};

struct link
{
  // data
  void *data;
  // next
  struct link *next;
};

struct mem_info_t
{
  // proc
  struct proc_info *proc;
  // size
  signed long int size[3l];
  // rss
  signed long int rss[3l];
  // pss
  signed long int pss[3l];
  // total
  signed long int total[3l];
  // grand_total
  signed long int grand_total;
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

struct proc_info
{
  // pid
  signed int pid;
  // ppid
  signed int ppid;
  // comm
  char *comm;
  // cmdline
  char *cmdline;
  // is_thread
  _Bool is_thread;
  // next
  struct proc_info *next;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct sigaction
{
  // __sigaction_handler
  union anonymous_14 __sigaction_handler;
  // sa_mask
  struct anonymous_15 sa_mask;
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

struct syscall
{
  // name
  char *name;
  // syscall
  signed int syscall;
  // arg
  signed int arg;
  // threshold
  double *threshold;
  // call_enter_timeout
  void (*call_enter_timeout)(const struct syscall *, struct syscall_info *, const signed int, const double, double *);
  // call_return_timeout
  void (*call_return_timeout)(struct json_object *, const struct syscall *, const struct syscall_info *);
  // call_enter
  void (*call_enter)(const struct syscall *, const struct syscall_info *, const signed int);
  // call_return
  void (*call_return)(const struct syscall *, const struct syscall_info *, const signed int);
};

struct syscall_context
{
  // pid
  signed int pid;
  // proc
  struct proc_info *proc;
  // syscall
  signed int syscall;
  // timeout
  double timeout;
  // syscall_info
  struct syscall_info *syscall_info;
  // state
  signed int state;
  // next
  struct syscall_context *next;
};

struct syscall_info
{
  // proc
  struct proc_info *proc;
  // syscall
  signed int syscall;
  // count
  unsigned long int count;
  // usecs_total
  unsigned long int usecs_total;
  // usec_enter
  struct timeval usec_enter;
  // usec_return
  struct timeval usec_return;
  // poll_min
  double poll_min;
  // poll_max
  double poll_max;
  // poll_total
  double poll_total;
  // poll_count
  unsigned long int poll_count;
  // poll_too_low
  unsigned long int poll_too_low;
  // poll_infinite
  unsigned long int poll_infinite;
  // poll_zero
  unsigned long int poll_zero;
  // bucket
  unsigned long int bucket[9l];
  // return_history
  struct anonymous_3 return_history;
  // next
  struct syscall_info *next;
};

struct syscall_wakelock_info
{
  // pid
  signed int pid;
  // locked
  _Bool locked;
  // tv
  struct timeval tv;
  // lockname
  char *lockname;
  // paired
  struct syscall_wakelock_info *paired;
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


// __pids
// file syscall.c line 94
static struct anonymous_3 *__pids;
// caught_sigint
// file health-check.c line 57
static _Bool caught_sigint = (_Bool)0;
// cpustat_info_finish
// file cpustat.c line 36
static struct anonymous_3 cpustat_info_finish;
// cpustat_info_start
// file cpustat.c line 36
static struct anonymous_3 cpustat_info_start;
// ctxt_switch_info_finish
// file ctxt-switch.c line 35
static struct anonymous_3 ctxt_switch_info_finish;
// ctxt_switch_info_start
// file ctxt-switch.c line 35
static struct anonymous_3 ctxt_switch_info_start;
// event_info_finish
// file event.c line 34
static struct anonymous_3 event_info_finish;
// event_info_start
// file event.c line 34
static struct anonymous_3 event_info_start;
// fd_cache
// file syscall.c line 100
static struct fd_cache *fd_cache[1997l];
// filename_cache
// file syscall.c line 103
static struct filename_info *filename_cache[1997l];
// fnotify_files
// file fnotify.c line 43
static struct anonymous_3 fnotify_files;
// fnotify_wakelocks
// file fnotify.c line 43
static struct anonymous_3 fnotify_wakelocks;
// info_emit
// file syscall.c line 86
static signed int info_emit = 0;
// keep_running
// file health-check.c line 58
volatile _Bool keep_running = (volatile _Bool)1;
// main_pid
// file syscall.c line 87
static signed int main_pid = -1;
// mem_brk_info
// file mem.c line 37
static struct anonymous_3 mem_brk_info;
// mem_info_new
// file mem.c line 36
static struct anonymous_3 mem_info_new;
// mem_info_old
// file mem.c line 36
static struct anonymous_3 mem_info_old;
// mem_mmap_info
// file mem.c line 38
static struct anonymous_3 mem_mmap_info;
// mem_types
// file mem.c line 40
static const char *mem_types[3l] = { "Stack", "Heap", "Mapped" };
// net_cached_addrs
// file net.c line 102
static struct anonymous_3 net_cached_addrs;
// net_hash_table
// file net.c line 107
static struct anonymous_3 net_hash_table[1993l];
// net_types
// file net.c line 87
static const char *net_types[7l] = { "TCP", "TCP6", "UDP", "UDP6", "UNIX", "NETLINK", "" };
// opt_flags
// file health-check.c line 59
signed int opt_flags;
// opt_max_syscalls
// file health-check.c line 60
signed long int opt_max_syscalls = (signed long int)1000000;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// pids_mutex
// file proc.c line 41
static union anonymous_5 pids_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// proc_cache_hash
// file proc.c line 40
static struct proc_info *proc_cache_hash[1997l];
// proc_cache_list
// file proc.c line 39
struct anonymous_3 proc_cache_list;
// proc_cache_mutex
// file proc.c line 42
static union anonymous_5 proc_cache_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// procs_traced
// file syscall.c line 21
signed int procs_traced = 0;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// syscall_contexts
// file syscall.c line 92
static struct anonymous_3 syscall_contexts;
// syscall_contexts_cache
// file syscall.c line 106
static struct syscall_context *syscall_contexts_cache[1997l];
// syscall_count
// file syscall.c line 85
static signed long int syscall_count = (signed long int)0;
// syscall_info
// file syscall.c line 97
static struct syscall_info *syscall_info[1997l];
// syscall_syncs
// file syscall.c line 93
static struct anonymous_3 syscall_syncs;
// syscall_timeout
// file syscall.c line 109
static double syscall_timeout[300l] = { 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 1.0, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 1.0, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 1.0, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 1.0, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 1.0, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 1.0, 0.000000, 1.0, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 1.0, 1.0, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 1.0, 1.0, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 1.0, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 1.0 };
// syscall_tracer
// file syscall.c line 84
static unsigned long int syscall_tracer;
// syscall_wakelocks
// file syscall.c line 91
static struct anonymous_3 syscall_wakelocks;
// syscalls
// file syscall.c line 2845
struct syscall syscalls[314l];
// syscalls
// file syscall.c line 2845
struct syscall syscalls[314l] = { { .name="read", .syscall=0, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="write", .syscall=1, .arg=2, .threshold=&syscall_timeout[(signed long int)1], .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=syscall_write_args,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="open", .syscall=2, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="close", .syscall=3, .arg=0, .threshold=&syscall_timeout[(signed long int)3], .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=syscall_close_args,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="stat", .syscall=4, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="fstat", .syscall=5, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="lstat", .syscall=6, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="poll", .syscall=7, .arg=2, .threshold=&syscall_timeout[(signed long int)7], .call_enter_timeout=syscall_timeout_millisec,
    .call_return_timeout=syscall_poll_generic_ret,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="lseek", .syscall=8, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="mmap", .syscall=9, .arg=1, .threshold=&syscall_timeout[(signed long int)9], .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=syscall_mmap_args,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="mprotect", .syscall=10, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="munmap", .syscall=11, .arg=1, .threshold=&syscall_timeout[(signed long int)11], .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=syscall_munmap_args,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="brk", .syscall=12, .arg=0, .threshold=&syscall_timeout[(signed long int)12], .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=syscall_brk_args,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="rt_sigaction", .syscall=13, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="rt_sigprocmask", .syscall=14, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="rt_sigreturn", .syscall=15, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="ioctl", .syscall=16, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="pread64", .syscall=17, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="pwrite64", .syscall=18, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="readv", .syscall=19, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="writev", .syscall=20, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="access", .syscall=21, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="pipe", .syscall=22, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="select", .syscall=23, .arg=4, .threshold=&syscall_timeout[(signed long int)23], .call_enter_timeout=syscall_timeval_timeout,
    .call_return_timeout=syscall_poll_generic_ret,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="sched_yield", .syscall=24, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="mremap", .syscall=25, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="msync", .syscall=26, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="mincore", .syscall=27, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="madvise", .syscall=28, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="shmget", .syscall=29, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="shmat", .syscall=30, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="shmctl", .syscall=31, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="dup", .syscall=32, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="dup2", .syscall=33, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="pause", .syscall=34, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="nanosleep", .syscall=35, .arg=0, .threshold=&syscall_timeout[(signed long int)35],
    .call_enter_timeout=syscall_timespec_timeout,
    .call_return_timeout=syscall_nanosleep_generic_ret,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getitimer", .syscall=36, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="alarm", .syscall=37, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="setitimer", .syscall=38, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getpid", .syscall=39, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="sendfile", .syscall=40, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="socket", .syscall=41, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="connect", .syscall=42, .arg=0, .threshold=&syscall_timeout[(signed long int)42], .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=syscall_connect_args,
    .call_return=syscall_connect_ret },
    { .name="accept", .syscall=43, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="sendto", .syscall=44, .arg=0, .threshold=&syscall_timeout[(signed long int)44], .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=syscall_sendto_ret },
    { .name="recvfrom", .syscall=45, .arg=0, .threshold=&syscall_timeout[(signed long int)45],
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=syscall_recvfrom_ret },
    { .name="sendmsg", .syscall=46, .arg=0, .threshold=&syscall_timeout[(signed long int)46], .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=syscall_sendto_ret },
    { .name="recvmsg", .syscall=47, .arg=0, .threshold=&syscall_timeout[(signed long int)47], .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=syscall_recvfrom_ret },
    { .name="shutdown", .syscall=48, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="bind", .syscall=49, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="listen", .syscall=50, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getsockname", .syscall=51, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getpeername", .syscall=52, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="socketpair", .syscall=53, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="setsockopt", .syscall=54, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getsockopt", .syscall=55, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="clone", .syscall=56, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="fork", .syscall=57, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="vfork", .syscall=58, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="execve", .syscall=59, .arg=0, .threshold=&syscall_timeout[(signed long int)59], .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=syscall_execve_args,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="exit", .syscall=60, .arg=0, .threshold=&syscall_timeout[(signed long int)60], .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=syscall_exit_args,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="wait4", .syscall=61, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="kill", .syscall=62, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="uname", .syscall=63, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="semget", .syscall=64, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="semop", .syscall=65, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="semctl", .syscall=66, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="shmdt", .syscall=67, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="msgget", .syscall=68, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="msgsnd", .syscall=69, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="msgrcv", .syscall=70, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="msgctl", .syscall=71, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="fcntl", .syscall=72, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="flock", .syscall=73, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="fsync", .syscall=74, .arg=0, .threshold=&syscall_timeout[(signed long int)74], .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=syscall_fsync_generic_args,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="fdatasync", .syscall=75, .arg=0, .threshold=&syscall_timeout[(signed long int)75],
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=syscall_fsync_generic_args,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="truncate", .syscall=76, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="ftruncate", .syscall=77, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getdents", .syscall=78, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getcwd", .syscall=79, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="chdir", .syscall=80, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="fchdir", .syscall=81, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="rename", .syscall=82, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="mkdir", .syscall=83, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="rmdir", .syscall=84, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="creat", .syscall=85, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="link", .syscall=86, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="unlink", .syscall=87, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="symlink", .syscall=88, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="readlink", .syscall=89, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="chmod", .syscall=90, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="fchmod", .syscall=91, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="chown", .syscall=92, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="fchown", .syscall=93, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="lchown", .syscall=94, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="umask", .syscall=95, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="gettimeofday", .syscall=96, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getrlimit", .syscall=97, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getrusage", .syscall=98, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="sysinfo", .syscall=99, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="times", .syscall=100, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="ptrace", .syscall=101, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getuid", .syscall=102, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="syslog", .syscall=103, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getgid", .syscall=104, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="setuid", .syscall=105, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="setgid", .syscall=106, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="geteuid", .syscall=107, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getegid", .syscall=108, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="setpgid", .syscall=109, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getppid", .syscall=110, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getpgrp", .syscall=111, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="setsid", .syscall=112, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="setreuid", .syscall=113, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="setregid", .syscall=114, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getgroups", .syscall=115, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="setgroups", .syscall=116, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="setresuid", .syscall=117, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getresuid", .syscall=118, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="setresgid", .syscall=119, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getresgid", .syscall=120, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getpgid", .syscall=121, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="setfsuid", .syscall=122, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="setfsgid", .syscall=123, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getsid", .syscall=124, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="capget", .syscall=125, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="capset", .syscall=126, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="rt_sigpending", .syscall=127, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="rt_sigtimedwait", .syscall=128, .arg=2,
    .threshold=&syscall_timeout[(signed long int)128], .call_enter_timeout=syscall_timespec_timeout,
    .call_return_timeout=syscall_poll_generic_ret,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="rt_sigqueueinfo", .syscall=129, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="rt_sigsuspend", .syscall=130, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="sigaltstack", .syscall=131, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="utime", .syscall=132, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="mknod", .syscall=133, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="uselib", .syscall=134, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="personality", .syscall=135, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="ustat", .syscall=136, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="statfs", .syscall=137, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="fstatfs", .syscall=138, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="sysfs", .syscall=139, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getpriority", .syscall=140, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="setpriority", .syscall=141, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="sched_setparam", .syscall=142, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="sched_getparam", .syscall=143, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="sched_setscheduler", .syscall=144, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="sched_getscheduler", .syscall=145, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="sched_get_priority_max", .syscall=146, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="sched_get_priority_min", .syscall=147, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="sched_rr_get_interval", .syscall=148, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="mlock", .syscall=149, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="munlock", .syscall=150, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="mlockall", .syscall=151, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="munlockall", .syscall=152, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="vhangup", .syscall=153, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="modify_ldt", .syscall=154, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="pivot_root", .syscall=155, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="_sysctl", .syscall=156, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="prctl", .syscall=157, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="arch_prctl", .syscall=158, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="adjtimex", .syscall=159, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="setrlimit", .syscall=160, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="chroot", .syscall=161, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="sync", .syscall=162, .arg=0, .threshold=&syscall_timeout[(signed long int)162], .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=syscall_sync_args,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="acct", .syscall=163, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="settimeofday", .syscall=164, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="mount", .syscall=165, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="umount2", .syscall=166, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="swapon", .syscall=167, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="swapoff", .syscall=168, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="reboot", .syscall=169, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="sethostname", .syscall=170, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="setdomainname", .syscall=171, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="iopl", .syscall=172, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="ioperm", .syscall=173, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="create_module", .syscall=174, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="init_module", .syscall=175, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="delete_module", .syscall=176, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="get_kernel_syms", .syscall=177, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="query_module", .syscall=178, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="quotactl", .syscall=179, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="nfsservctl", .syscall=180, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getpmsg", .syscall=181, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="putpmsg", .syscall=182, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="afs_syscall", .syscall=183, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="tuxcall", .syscall=184, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="security", .syscall=185, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="gettid", .syscall=186, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="readahead", .syscall=187, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="setxattr", .syscall=188, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="lsetxattr", .syscall=189, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="fsetxattr", .syscall=190, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getxattr", .syscall=191, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="lgetxattr", .syscall=192, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="fgetxattr", .syscall=193, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="listxattr", .syscall=194, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="llistxattr", .syscall=195, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="flistxattr", .syscall=196, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="removexattr", .syscall=197, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="lremovexattr", .syscall=198, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="fremovexattr", .syscall=199, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="tkill", .syscall=200, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="time", .syscall=201, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="futex", .syscall=202, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="sched_setaffinity", .syscall=203, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="sched_getaffinity", .syscall=204, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="set_thread_area", .syscall=205, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="io_setup", .syscall=206, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="io_destroy", .syscall=207, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="io_getevents", .syscall=208, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="io_submit", .syscall=209, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="io_cancel", .syscall=210, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="get_thread_area", .syscall=211, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="lookup_dcookie", .syscall=212, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="epoll_create", .syscall=213, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="epoll_ctl_old", .syscall=214, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="epoll_wait_old", .syscall=215, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="remap_file_pages", .syscall=216, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getdents64", .syscall=217, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="set_tid_address", .syscall=218, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="restart_syscall", .syscall=219, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="semtimedop", .syscall=220, .arg=3, .threshold=&syscall_timeout[(signed long int)220],
    .call_enter_timeout=syscall_timespec_timeout,
    .call_return_timeout=syscall_semtimedop_ret,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="fadvise64", .syscall=221, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="timer_create", .syscall=222, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="timer_settime", .syscall=223, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="timer_gettime", .syscall=224, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="timer_getoverrun", .syscall=225, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="timer_delete", .syscall=226, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="clock_settime", .syscall=227, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="clock_gettime", .syscall=228, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="clock_getres", .syscall=229, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="clock_nanosleep", .syscall=230, .arg=2,
    .threshold=&syscall_timeout[(signed long int)230], .call_enter_timeout=syscall_timespec_timeout,
    .call_return_timeout=syscall_nanosleep_generic_ret,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="exit_group", .syscall=231, .arg=0, .threshold=&syscall_timeout[(signed long int)231],
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=syscall_exit_args,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="epoll_wait", .syscall=232, .arg=3, .threshold=&syscall_timeout[(signed long int)232],
    .call_enter_timeout=syscall_timeout_millisec,
    .call_return_timeout=syscall_poll_generic_ret,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="epoll_ctl", .syscall=233, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="tgkill", .syscall=234, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="utimes", .syscall=235, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="vserver", .syscall=236, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="mbind", .syscall=237, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="set_mempolicy", .syscall=238, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="get_mempolicy", .syscall=239, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="mq_open", .syscall=240, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="mq_unlink", .syscall=241, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="mq_timedsend", .syscall=242, .arg=4, .threshold=&syscall_timeout[(signed long int)242],
    .call_enter_timeout=syscall_timespec_timeout,
    .call_return_timeout=syscall_mq_timedsend_ret,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="mq_timedreceive", .syscall=243, .arg=4,
    .threshold=&syscall_timeout[(signed long int)243], .call_enter_timeout=syscall_timespec_timeout,
    .call_return_timeout=syscall_mq_timedreceive_ret,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="mq_notify", .syscall=244, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="mq_getsetattr", .syscall=245, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="kexec_load", .syscall=246, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="waitid", .syscall=247, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="add_key", .syscall=248, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="request_key", .syscall=249, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="keyctl", .syscall=250, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="ioprio_set", .syscall=251, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="ioprio_get", .syscall=252, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="inotify_init", .syscall=253, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="inotify_add_watch", .syscall=254, .arg=1,
    .threshold=&syscall_timeout[(signed long int)254], .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=syscall_inotify_add_watch_args,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="inotify_rm_watch", .syscall=255, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="migrate_pages", .syscall=256, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="openat", .syscall=257, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="mkdirat", .syscall=258, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="mknodat", .syscall=259, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="fchownat", .syscall=260, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="futimesat", .syscall=261, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="newfstatat", .syscall=262, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="unlinkat", .syscall=263, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="renameat", .syscall=264, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="linkat", .syscall=265, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="symlinkat", .syscall=266, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="readlinkat", .syscall=267, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="fchmodat", .syscall=268, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="faccessat", .syscall=269, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="pselect6", .syscall=270, .arg=4, .threshold=&syscall_timeout[(signed long int)270],
    .call_enter_timeout=syscall_timespec_timeout,
    .call_return_timeout=syscall_poll_generic_ret,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="ppoll", .syscall=271, .arg=2, .threshold=&syscall_timeout[(signed long int)271], .call_enter_timeout=syscall_timespec_timeout,
    .call_return_timeout=syscall_poll_generic_ret,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="unshare", .syscall=272, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="set_robust_list", .syscall=273, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="get_robust_list", .syscall=274, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="splice", .syscall=275, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="tee", .syscall=276, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="sync_file_range", .syscall=277, .arg=0,
    .threshold=&syscall_timeout[(signed long int)277], .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=syscall_fsync_generic_args,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="vmsplice", .syscall=278, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="move_pages", .syscall=279, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="utimensat", .syscall=280, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="epoll_pwait", .syscall=281, .arg=3, .threshold=&syscall_timeout[(signed long int)281],
    .call_enter_timeout=syscall_timeout_millisec,
    .call_return_timeout=syscall_poll_generic_ret,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="signalfd", .syscall=282, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="timerfd_create", .syscall=283, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="eventfd", .syscall=284, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="fallocate", .syscall=285, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="timerfd_settime", .syscall=286, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="timerfd_gettime", .syscall=287, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="accept4", .syscall=288, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="signalfd4", .syscall=289, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="eventfd2", .syscall=290, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="epoll_create1", .syscall=291, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="dup3", .syscall=292, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="pipe2", .syscall=293, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="inotify_init1", .syscall=294, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="preadv", .syscall=295, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="pwritev", .syscall=296, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="rt_tgsigqueueinfo", .syscall=297, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="perf_event_open", .syscall=298, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="recvmmsg", .syscall=299, .arg=4, .threshold=&syscall_timeout[(signed long int)299],
    .call_enter_timeout=syscall_timespec_timeout,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="fanotify_init", .syscall=300, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="fanotify_mark", .syscall=301, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="prlimit64", .syscall=302, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="name_to_handle_at", .syscall=303, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="open_by_handle_at", .syscall=304, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="clock_adjtime", .syscall=305, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="syncfs", .syscall=306, .arg=0, .threshold=&syscall_timeout[(signed long int)306], .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=syscall_fsync_generic_args,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="sendmmsg", .syscall=307, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="setns", .syscall=308, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="getcpu", .syscall=309, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="process_vm_readv", .syscall=310, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="process_vm_writev", .syscall=311, .arg=0,
    .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="kcmp", .syscall=312, .arg=0, .threshold=(double *)(void *)0, .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0,
    .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 },
    { .name="finit_module", .syscall=313, .arg=0, .threshold=(double *)(void *)0,
    .call_enter_timeout=(void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))(void *)0, .call_return_timeout=(void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))(void *)0,
    .call_enter=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0,
    .call_return=(void (*)(const struct syscall *, const struct syscall_info *, const signed int))(void *)0 } };
// syscalls_len
// file syscall.c line 3994
unsigned long int syscalls_len = sizeof(struct syscall [314l]) /*17584ul*/  / sizeof(struct syscall) /*56ul*/ ;
// timer_stats
// file event.c line 35
static _Bool timer_stats = (_Bool)1;

// __strtok_r_1c
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1149
static inline char * __strtok_r_1c(char *__s, char __sep, char **__nextp)
{
  char *__result;
  if(__s == ((char *)NULL))
    __s = *__nextp;

  for( ; *__s == __sep; __s = __s + 1l)
    ;
  __result = (char *)(void *)0;
  char *tmp_post_1;
  char *tmp_post_2;
  if(!((signed int)*__s == 0))
  {
    tmp_post_1 = __s;
    __s = __s + 1l;
    __result = tmp_post_1;
    while(!((signed int)*__s == 0))
    {
      tmp_post_2 = __s;
      __s = __s + 1l;
      if(*tmp_post_2 == __sep)
      {
        __s[(signed long int)-1] = (char)0;
        break;
      }

    }
  }

  *__nextp = __s;
  return __result;
}

// atof
// file /usr/include/x86_64-linux-gnu/bits/stdlib-float.h line 26
static inline double atof(const char *__nptr)
{
  double return_value_strtod_1;
  return_value_strtod_1=strtod(__nptr, (char **)(void *)0);
  return return_value_strtod_1;
}

// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr)
{
  signed long int return_value_strtol_1;
  return_value_strtol_1=strtol(__nptr, (char **)(void *)0, 10);
  return (signed int)return_value_strtol_1;
}

// cpustat_cleanup
// file cpustat.c line 413
extern void cpustat_cleanup(void)
{
  list_free(&cpustat_info_start, free);
  list_free(&cpustat_info_finish, free);
}

// cpustat_cmp
// file cpustat.c line 69
static signed int cpustat_cmp(const void *data1, const void *data2)
{
  struct anonymous_37 *cpustat1 = (struct anonymous_37 *)data1;
  struct anonymous_37 *cpustat2 = (struct anonymous_37 *)data2;
  return (signed int)(cpustat2->ttime - cpustat1->ttime);
}

// cpustat_dump_diff
// file cpustat.c line 81
extern signed int cpustat_dump_diff(struct json_object *j_tests, const double duration)
{
  double nr_ticks;
  signed long int return_value_sysconf_1;
  return_value_sysconf_1=sysconf(2);
  nr_ticks = (double)return_value_sysconf_1 * duration;
  double utime_total = 0.0;
  double stime_total = 0.0;
  double ttime_total = 0.0;
  signed int rc = 0;
  signed int count = 0;
  struct link *lo;
  struct link *ln;
  struct anonymous_3 sorted;
  struct anonymous_37 *cio;
  struct anonymous_37 *cin;
  list_init(&sorted);
  ln = cpustat_info_finish.head;
  for( ; !(ln == ((struct link *)NULL)); ln = ln->next)
  {
    cin = (struct anonymous_37 *)ln->data;
    lo = cpustat_info_start.head;
    for( ; !(lo == ((struct link *)NULL)); lo = lo->next)
    {
      cio = (struct anonymous_37 *)lo->data;
      if(cin->proc->pid == cio->proc->pid)
      {
        struct anonymous_37 *cpustat;
        void *return_value_calloc_2;
        return_value_calloc_2=calloc((unsigned long int)1, sizeof(struct anonymous_37) /*72ul*/ );
        cpustat = (struct anonymous_37 *)return_value_calloc_2;
        if(cpustat == ((struct anonymous_37 *)NULL))
        {
          health_check_out_of_memory("cannot allocate cpustat information");
          goto out;
        }

        cpustat->proc = cio->proc;
        cpustat->utime = cin->utime - cio->utime;
        cpustat->stime = cin->stime - cio->stime;
        cpustat->ttime = cin->ttime - cio->ttime;
        double return_value_timeval_to_double_3;
        return_value_timeval_to_double_3=timeval_to_double(&cin->whence);
        double return_value_timeval_to_double_4;
        return_value_timeval_to_double_4=timeval_to_double(&cio->whence);
        cpustat->duration = return_value_timeval_to_double_3 - return_value_timeval_to_double_4;
        struct link *return_value_list_add_ordered_5;
        return_value_list_add_ordered_5=list_add_ordered(&sorted, (void *)cpustat, cpustat_cmp);
        if(return_value_list_add_ordered_5 == ((struct link *)NULL))
        {
          free((void *)cpustat);
          goto out;
        }

        utime_total = utime_total + (double)cpustat->utime / nr_ticks;
        stime_total = stime_total + (double)cpustat->stime / nr_ticks;
        ttime_total = ttime_total + (double)cpustat->ttime / nr_ticks;
        count = count + 1;
      }

    }
  }
  printf("CPU usage (in terms of 1 CPU):\n");
  const char *return_value_cpustat_loading_8;
  if(sorted.head == ((struct link *)NULL))
    printf(" Nothing measured.\n");

  else
    if(!((0x00000002 & opt_flags) == 0))
    {
      const char *return_value_cpustat_loading_6;
      return_value_cpustat_loading_6=cpustat_loading(100.0 * (double)ttime_total);
      printf(" User: %6.2f%%, System: %6.2f%%, Total: %6.2f%% (%s)\n", 100.0 * utime_total, 100.0 * stime_total, 100.0 * ttime_total, return_value_cpustat_loading_6);
    }

    else
    {
      printf("  PID  Process                USR%%   SYS%% TOTAL%%   Duration\n");
      ln = sorted.head;
      for( ; !(ln == ((struct link *)NULL)); ln = ln->next)
      {
        cin = (struct anonymous_37 *)ln->data;
        const char *return_value_cpustat_loading_7;
        return_value_cpustat_loading_7=cpustat_loading((100.0 * (double)cin->ttime) / nr_ticks);
        printf(" %5d %-20.20s %6.2f %6.2f %6.2f   %8.2f  (%s)\n", cin->proc->pid, cin->proc->cmdline, (100.0 * (double)cin->utime) / nr_ticks, (100.0 * (double)cin->stime) / nr_ticks, (100.0 * (double)cin->ttime) / nr_ticks, cin->duration, return_value_cpustat_loading_7);
      }
      if(count >= 2)
      {
        return_value_cpustat_loading_8=cpustat_loading(100.0 * ttime_total);
        printf(" %-26.26s %6.2f %6.2f %6.2f             (%s)\n", (const void *)"Total", 100.0 * utime_total, 100.0 * stime_total, 100.0 * ttime_total, return_value_cpustat_loading_8);
      }

    }
  if(!(j_tests == ((struct json_object *)NULL)))
  {
    struct json_object *j_cpustat;
    struct json_object *j_cpuload;
    struct json_object *j_cpu;
    j_cpustat=j_obj_new_obj();
    if(j_cpustat == ((struct json_object *)NULL))
      goto out;

    j_obj_obj_add_link4(j_tests, "cpu-load", j_cpustat);
    j_cpuload=j_obj_new_array();
    if(j_cpuload == ((struct json_object *)NULL))
      goto out;

    j_obj_obj_add_link4(j_cpustat, "cpu-load-per-process", j_cpuload);
    ln = sorted.head;
    for( ; !(ln == ((struct link *)NULL)); ln = ln->next)
    {
      cin = (struct anonymous_37 *)ln->data;
      j_cpu=j_obj_new_obj();
      if(j_cpu == ((struct json_object *)NULL))
        goto out;

      j_obj_new_int32_add_link4(j_cpu, "pid", cin->proc->pid);
      j_obj_new_int32_add_link4(j_cpu, "ppid", cin->proc->ppid);
      j_obj_new_int32_add_link4(j_cpu, "is-thread", (const signed int)cin->proc->is_thread);
      j_obj_new_string_add_link4(j_cpu, "name", cin->proc->cmdline);
      j_obj_new_int64_add_link4(j_cpu, "user-cpu-ticks", (const signed long int)cin->utime);
      j_obj_new_int64_add_link4(j_cpu, "system-cpu-ticks", (const signed long int)cin->stime);
      j_obj_new_int64_add_link4(j_cpu, "total-cpu-ticks", (const signed long int)cin->ttime);
      j_obj_new_double_add_link4(j_cpu, "user-cpu-percent", (100.0 * (double)cin->utime) / nr_ticks);
      j_obj_new_double_add_link4(j_cpu, "system-cpu-percent", (100.0 * (double)cin->stime) / nr_ticks);
      j_obj_new_double_add_link4(j_cpu, "total-cpu-percent", (100.0 * (double)cin->ttime) / nr_ticks);
      const char *return_value_cpustat_loading_9;
      return_value_cpustat_loading_9=cpustat_loading((100.0 * (double)cin->ttime) / nr_ticks);
      j_obj_new_string_add_link4(j_cpu, "load-hint", return_value_cpustat_loading_9);
      j_obj_array_add_link4(j_cpuload, j_cpu);
    }
    j_cpu=j_obj_new_obj();
    if(j_cpu == ((struct json_object *)NULL))
      goto out;

    j_obj_obj_add_link4(j_cpustat, "cpu-load-total", j_cpu);
    j_obj_new_double_add_link4(j_cpu, "user-cpu-percent", 100.0 * utime_total);
    j_obj_new_double_add_link4(j_cpu, "system-cpu-percent", 100.0 * stime_total);
    j_obj_new_double_add_link4(j_cpu, "total-cpu-percent", 100.0 * ttime_total);
  }

  printf("\n");

out:
  ;
  list_free(&sorted, free);
  return rc;
}

// cpustat_get_all_pids
// file cpustat.c line 383
extern signed int cpustat_get_all_pids(const struct anonymous_3 *pids, enum anonymous_9 state)
{
  struct link *l = pids->head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    struct proc_info *p = (struct proc_info *)l->data;
    if(p->is_thread == (_Bool)0)
    {
      signed int return_value_cpustat_get_by_proc_1;
      return_value_cpustat_get_by_proc_1=cpustat_get_by_proc(p, state);
      if(!(return_value_cpustat_get_by_proc_1 >= 0))
        return -1;

    }

  }
  return 0;
}

// cpustat_get_by_proc
// file cpustat.h line 45
extern signed int cpustat_get_by_proc(struct proc_info *proc, enum anonymous_9 state)
{
  char filename[4096l];
  struct _IO_FILE *fp;
  struct anonymous_3 *cpustat = (signed int)state == PROC_START ? &cpustat_info_start : &cpustat_info_finish;
  snprintf(filename, sizeof(char [4096l]) /*4096ul*/ , "/proc/%d/stat", proc->pid);
  fp=fopen(filename, "r");
  if(!(fp == ((struct _IO_FILE *)NULL)))
  {
    char comm[20l];
    unsigned long int utime;
    unsigned long int stime;
    unsigned long int minor_fault;
    unsigned long int major_fault;
    signed int pid;
    signed int return_value_fscanf_3;
    return_value_fscanf_3=fscanf(fp, "%8d (%19[^)]) %*c %*d %*d %*d %*d %*d %*u %20lu %*u %20lu %*u %20lu %20lu", &pid, (const void *)comm, &minor_fault, &major_fault, &utime, &stime);
    if(return_value_fscanf_3 == 6)
    {
      struct anonymous_37 *info;
      void *return_value_calloc_1;
      return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct anonymous_37) /*72ul*/ );
      info = (struct anonymous_37 *)return_value_calloc_1;
      if(info == ((struct anonymous_37 *)NULL))
      {
        health_check_out_of_memory("allocating cpustat information");
        fclose(fp);
        return -1;
      }

      info->proc = proc;
      info->utime = utime;
      info->stime = stime;
      info->ttime = utime + stime;
      info->major_fault = major_fault;
      info->minor_fault = minor_fault;
      gettimeofday(&info->whence, (struct timezone *)(void *)0);
      info->duration = 0.0;
      struct link *return_value_list_append_2;
      return_value_list_append_2=list_append(cpustat, (void *)info);
      if(return_value_list_append_2 == ((struct link *)NULL))
      {
        free((void *)info);
        fclose(fp);
        return -1;
      }

    }

    fclose(fp);
  }

  return 0;
}

// cpustat_init
// file cpustat.c line 403
extern void cpustat_init(void)
{
  list_init(&cpustat_info_start);
  list_init(&cpustat_info_finish);
}

// cpustat_loading
// file cpustat.c line 42
static const char * cpustat_loading(const double cpu_percent)
{
  if(IEEE_FLOAT_EQUAL(cpu_percent, 0.0))
    return "idle";

  else
    if(cpu_percent > 99.0)
      return "CPU fully loaded";

    else
      if(cpu_percent > 95.0)
        return "nearly 1 CPU fully loaded";

      else
        if(cpu_percent > 85.0)
          return "excessive load";

        else
          if(cpu_percent > 70.0)
            return "very high load";

          else
            if(cpu_percent > 40.0)
              return "high load";

            else
              if(cpu_percent > 20.0)
                return "medium load";

              else
                if(cpu_percent > 10.0)
                  return "slight load";

                else
                  if(cpu_percent > 2.5)
                    return "light load";

                  else
                    return "very light load";
}

// ctx_switch_cmp
// file ctxt-switch.c line 41
static signed int ctx_switch_cmp(const void *data1, const void *data2)
{
  struct anonymous_13 *c1 = (struct anonymous_13 *)data1;
  struct anonymous_13 *c2 = (struct anonymous_13 *)data2;
  return (signed int)(c2->total - c1->total);
}

// ctxt_switch_cleanup
// file ctxt-switch.c line 307
extern void ctxt_switch_cleanup(void)
{
  list_free(&ctxt_switch_info_start, free);
  list_free(&ctxt_switch_info_finish, free);
}

// ctxt_switch_delta
// file ctxt-switch.c line 142
static void ctxt_switch_delta(const struct anonymous_13 *ctxt_switch_new, const struct anonymous_3 *ctxt_switches_old, unsigned long int *total, unsigned long int *voluntary, unsigned long int *involuntary)
{
  struct link *l = ctxt_switches_old->head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    struct anonymous_13 *ctxt_switch_old = (struct anonymous_13 *)l->data;
    if(ctxt_switch_new->proc == ctxt_switch_old->proc)
    {
      if(ctxt_switch_old->valid == (_Bool)0)
        break;

      *total = ctxt_switch_new->total - ctxt_switch_old->total;
      *voluntary = ctxt_switch_new->voluntary - ctxt_switch_old->voluntary;
      *involuntary = ctxt_switch_new->involuntary - ctxt_switch_old->involuntary;
      goto __CPROVER_DUMP_L5;
    }

  }
  *total = ctxt_switch_new->total;
  *voluntary = ctxt_switch_new->voluntary;
  *involuntary = ctxt_switch_new->involuntary;

__CPROVER_DUMP_L5:
  ;
}

// ctxt_switch_dump_diff
// file ctxt-switch.c line 173
extern void ctxt_switch_dump_diff(struct json_object *j_tests, const double duration)
{
  struct link *l;
  struct anonymous_3 sorted;
  printf("Context Switches:\n");
  list_init(&sorted);
  l = ctxt_switch_info_finish.head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    struct anonymous_13 *new_info;
    struct anonymous_13 *ctxt_switch_dump_diff__1__1__1__info = (struct anonymous_13 *)l->data;
    if(!(ctxt_switch_dump_diff__1__1__1__info->valid == (_Bool)0))
    {
      void *return_value_calloc_1;
      return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct anonymous_13) /*40ul*/ );
      new_info = (struct anonymous_13 *)return_value_calloc_1;
      if(new_info == ((struct anonymous_13 *)NULL))
      {
        health_check_out_of_memory("allocating context switch information");
        goto out;
      }

      new_info->proc = ctxt_switch_dump_diff__1__1__1__info->proc;
      ctxt_switch_delta(ctxt_switch_dump_diff__1__1__1__info, &ctxt_switch_info_start, &new_info->total, &new_info->voluntary, &new_info->involuntary);
      struct link *return_value_list_add_ordered_2;
      return_value_list_add_ordered_2=list_add_ordered(&sorted, (void *)new_info, ctx_switch_cmp);
      if(return_value_list_add_ordered_2 == ((struct link *)NULL))
      {
        free((void *)new_info);
        goto out;
      }

    }

  }
  if(!(sorted.head == ((struct link *)NULL)))
  {
    if(!((0x00000002 & opt_flags) == 0))
    {
      double rate = 0.0;
      l = sorted.head;
      for( ; !(l == ((struct link *)NULL)); l = l->next)
      {
        struct anonymous_13 *ctxt_switch_dump_diff__1__2__1__1__1__info = (struct anonymous_13 *)l->data;
        rate = rate + (double)ctxt_switch_dump_diff__1__2__1__1__1__info->total;
      }
      rate = rate / duration;
      const char *return_value_ctxt_switch_loading_3;
      return_value_ctxt_switch_loading_3=ctxt_switch_loading(rate);
      printf(" %.2f context switches/sec (%s)\n\n", rate, return_value_ctxt_switch_loading_3);
    }

    else
    {
      signed int count = 0;
      double total_total = 0.0;
      double total_voluntary = 0.0;
      double total_involuntary = 0.0;
      printf("  PID  Process                Voluntary   Involuntary     Total\n");
      printf("                             Ctxt Sw/Sec  Ctxt Sw/Sec  Ctxt Sw/Sec\n");
      l = sorted.head;
      for( ; !(l == ((struct link *)NULL)); l = l->next)
      {
        struct anonymous_13 *ctxt_switch_dump_diff__1__2__2__1__1__info = (struct anonymous_13 *)l->data;
        const char *return_value_ctxt_switch_loading_4;
        return_value_ctxt_switch_loading_4=ctxt_switch_loading((double)ctxt_switch_dump_diff__1__2__2__1__1__info->total / duration);
        printf(" %5d %-20.20s %12.2f %12.2f %12.2f (%s)\n", ctxt_switch_dump_diff__1__2__2__1__1__info->proc->pid, ctxt_switch_dump_diff__1__2__2__1__1__info->proc->cmdline, (double)ctxt_switch_dump_diff__1__2__2__1__1__info->voluntary / duration, (double)ctxt_switch_dump_diff__1__2__2__1__1__info->involuntary / duration, (double)ctxt_switch_dump_diff__1__2__2__1__1__info->total / duration, return_value_ctxt_switch_loading_4);
        total_voluntary = total_voluntary + (double)ctxt_switch_dump_diff__1__2__2__1__1__info->voluntary;
        total_involuntary = total_involuntary + (double)ctxt_switch_dump_diff__1__2__2__1__1__info->involuntary;
        total_total = total_total + (double)ctxt_switch_dump_diff__1__2__2__1__1__info->total;
        count = count + 1;
      }
      if(count >= 2)
        printf(" %-27.27s%12.2f %12.2f %12.2f\n", (const void *)"Total", total_voluntary / duration, total_involuntary / duration, total_total / duration);

      printf("\n");
    }
  }

  else
    printf(" No context switches detected.\n\n");
  if(!(j_tests == ((struct json_object *)NULL)))
  {
    struct json_object *j_ctxt_switch_test;
    struct json_object *j_ctxt_switches;
    struct json_object *j_ctxt_switch;
    unsigned long int total = (unsigned long int)0;
    double total_rate;
    j_ctxt_switch_test=j_obj_new_obj();
    if(!(j_ctxt_switch_test == ((struct json_object *)NULL)))
    {
      j_obj_obj_add_link6(j_tests, "context-switches", j_ctxt_switch_test);
      j_ctxt_switches=j_obj_new_array();
      if(!(j_ctxt_switches == ((struct json_object *)NULL)))
      {
        j_obj_obj_add_link6(j_ctxt_switch_test, "context-switches-per-process", j_ctxt_switches);
        l = sorted.head;
        for( ; !(l == ((struct link *)NULL)); l = l->next)
        {
          struct anonymous_13 *info = (struct anonymous_13 *)l->data;
          total = total + (unsigned long int)(double)info->total;
          j_ctxt_switch=j_obj_new_obj();
          if(j_ctxt_switch == ((struct json_object *)NULL))
            goto out;

          j_obj_new_int32_add_link6(j_ctxt_switch, "pid", info->proc->pid);
          j_obj_new_int32_add_link6(j_ctxt_switch, "ppid", info->proc->ppid);
          j_obj_new_int32_add_link6(j_ctxt_switch, "is-thread", (const signed int)info->proc->is_thread);
          j_obj_new_string_add_link6(j_ctxt_switch, "name", info->proc->cmdline);
          j_obj_new_int64_add_link6(j_ctxt_switch, "voluntary-context-switches", (const signed long int)info->voluntary);
          j_obj_new_double_add_link6(j_ctxt_switch, "voluntary-context-switch-rate", (double)info->voluntary / duration);
          j_obj_new_int64_add_link6(j_ctxt_switch, "involuntary-context-switches", (const signed long int)((double)info->involuntary / duration));
          j_obj_new_double_add_link6(j_ctxt_switch, "involuntary-context-switch-rate", (double)info->involuntary / duration);
          j_obj_new_int64_add_link6(j_ctxt_switch, "total-context-switches", (const signed long int)info->total);
          j_obj_new_double_add_link6(j_ctxt_switch, "total-context-switch-rate", (double)info->total / duration);
          const char *return_value_ctxt_switch_loading_5;
          return_value_ctxt_switch_loading_5=ctxt_switch_loading((double)info->total / duration);
          j_obj_new_string_add_link6(j_ctxt_switch, "load-hint", return_value_ctxt_switch_loading_5);
          j_obj_array_add_link6(j_ctxt_switches, j_ctxt_switch);
        }
        total_rate = (double)total / duration;
        j_ctxt_switch=j_obj_new_obj();
        if(!(j_ctxt_switch == ((struct json_object *)NULL)))
        {
          j_obj_obj_add_link6(j_ctxt_switch_test, "context-switches-total", j_ctxt_switch);
          j_obj_new_int64_add_link6(j_ctxt_switch, "context-switch-total", (const signed long int)total);
          j_obj_new_double_add_link6(j_ctxt_switch, "context-switch-total-rate", total_rate);
          const char *return_value_ctxt_switch_loading_6;
          return_value_ctxt_switch_loading_6=ctxt_switch_loading(total_rate);
          j_obj_new_string_add_link6(j_ctxt_switch, "load-hint-total", return_value_ctxt_switch_loading_6);
        }

      }

    }

  }


out:
  ;
  list_free(&sorted, free);
}

// ctxt_switch_get_all_pids
// file ctxt-switch.c line 104
extern signed int ctxt_switch_get_all_pids(const struct anonymous_3 *pids, enum anonymous_9 state)
{
  struct link *l = pids->head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    struct proc_info *p = (struct proc_info *)l->data;
    signed int return_value_ctxt_switch_get_by_proc_1;
    return_value_ctxt_switch_get_by_proc_1=ctxt_switch_get_by_proc(p, state);
    if(!(return_value_ctxt_switch_get_by_proc_1 >= 0))
      return -1;

  }
  return 0;
}

// ctxt_switch_get_by_proc
// file ctxt-switch.h line 41
extern signed int ctxt_switch_get_by_proc(struct proc_info *proc, enum anonymous_9 state)
{
  char path[4096l];
  char buf[4096l];
  struct _IO_FILE *fp;
  struct anonymous_13 *info;
  struct anonymous_3 *ctxt_switches = (signed int)state == PROC_START ? &ctxt_switch_info_start : &ctxt_switch_info_finish;
  snprintf(path, sizeof(char [4096l]) /*4096ul*/ , "/proc/%i/status", proc->pid);
  fp=fopen(path, "r");
  signed int return_value_feof_2;
  if(fp == ((struct _IO_FILE *)NULL))
    return 0;

  else
  {
    void *return_value_calloc_1;
    return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct anonymous_13) /*40ul*/ );
    info = (struct anonymous_13 *)return_value_calloc_1;
    if(info == ((struct anonymous_13 *)NULL))
    {
      health_check_out_of_memory("allocating context switch information");
      fclose(fp);
      return -1;
    }

    else
    {
      info->voluntary = (unsigned long int)0;
      info->involuntary = (unsigned long int)0;
      info->valid = (_Bool)0;
      info->proc = proc;
      do
      {
        return_value_feof_2=feof(fp);
        if(!(return_value_feof_2 == 0))
          break;

        char *return_value_fgets_3;
        return_value_fgets_3=fgets(buf, (signed int)sizeof(char [4096l]) /*4096ul*/ , fp);
        if(return_value_fgets_3 == ((char *)NULL))
          break;

        signed int return_value_strncmp_4;
        return_value_strncmp_4=strncmp(buf, "voluntary_ctxt_switches:", (unsigned long int)24);
        if(return_value_strncmp_4 == 0)
          sscanf(buf + (signed long int)24, "%lu", &info->voluntary);

        else
        {
          signed int return_value_strncmp_5;
          return_value_strncmp_5=strncmp(buf, "nonvoluntary_ctxt_switches:", (unsigned long int)27);
          if(return_value_strncmp_5 == 0)
            sscanf(buf + (signed long int)27, "%lu", &info->involuntary);

        }
      }
      while((_Bool)1);
      fclose(fp);
      info->total = info->voluntary + info->involuntary;
      info->valid = (_Bool)1;
      struct link *return_value_list_append_6;
      return_value_list_append_6=list_append(ctxt_switches, (void *)info);
      if(return_value_list_append_6 == ((struct link *)NULL))
      {
        free((void *)info);
        return -1;
      }

      else
        return 0;
    }
  }
}

// ctxt_switch_init
// file ctxt-switch.c line 297
extern void ctxt_switch_init(void)
{
  list_init(&ctxt_switch_info_start);
  list_init(&ctxt_switch_info_finish);
}

// ctxt_switch_loading
// file ctxt-switch.c line 120
static const char * ctxt_switch_loading(const double rate)
{
  if(IEEE_FLOAT_EQUAL(rate, 0.0))
    return "idle";

  else
    if(rate > 10000.0)
      return "very high";

    else
      if(rate > 1000.0)
        return "high";

      else
        if(rate > 100.0)
          return "quite high";

        else
          if(rate > 10.0)
            return "moderate";

          else
            if(rate > 1.0)
              return "low";

            else
              return "very low";
}

// event_add
// file event.c line 83
static signed int event_add(struct anonymous_3 *events, const unsigned long int count, const signed int pid, const char *func, const char *callback)
{
  char ident[4096l];
  struct anonymous_32 *ev;
  struct link *l;
  struct proc_info *p;
  p=proc_cache_find_by_pid(pid);
  signed int tmp_statement_expression_1;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_8;
  struct link *return_value_list_add_ordered_9;
  if(p == ((struct proc_info *)NULL))
    return 0;

  else
  {
    snprintf(ident, sizeof(char [4096l]) /*4096ul*/ , "%d:%s:%s:%s", pid, p->comm, func, callback);
    l = events->head;
    for( ; !(l == ((struct link *)NULL)); l = l->next)
    {
      ev = (struct anonymous_32 *)l->data;
      unsigned long int __s1_len;
      unsigned long int __s2_len;
      signed int return_value___builtin_strcmp_2;
      return_value___builtin_strcmp_2=__builtin_strcmp(ev->ident, ident);
      tmp_statement_expression_1 = return_value___builtin_strcmp_2;
      if(tmp_statement_expression_1 == 0)
      {
        ev->count = ev->count + count;
        return 0;
      }

    }
    void *return_value_calloc_3;
    return_value_calloc_3=calloc((unsigned long int)1, sizeof(struct anonymous_32) /*40ul*/ );
    ev = (struct anonymous_32 *)return_value_calloc_3;
    if(ev == ((struct anonymous_32 *)NULL))
    {
      health_check_out_of_memory("allocting event information");
      return -1;
    }

    else
    {
      ev->proc = p;
      char *return_value___strdup_4;
      return_value___strdup_4=__strdup(func);
      ev->func = return_value___strdup_4;
      char *return_value___strdup_5;
      return_value___strdup_5=__strdup(callback);
      ev->callback = return_value___strdup_5;
      char *return_value___strdup_6;
      return_value___strdup_6=__strdup(ident);
      ev->ident = return_value___strdup_6;
      ev->count = count;
      if(ev->func == ((char *)NULL))
        tmp_if_expr_7 = (_Bool)1;

      else
        tmp_if_expr_7 = ev->callback == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_7)
        tmp_if_expr_8 = (_Bool)1;

      else
        tmp_if_expr_8 = ev->ident == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_8)
        health_check_out_of_memory("allocting event information");

      else
      {
        return_value_list_add_ordered_9=list_add_ordered(events, (void *)ev, event_cmp);
        if(!(return_value_list_add_ordered_9 == ((struct link *)NULL)))
          return 0;

      }

    err:
      ;
      free((void *)ev->func);
      free((void *)ev->callback);
      free((void *)ev->ident);
      free((void *)ev);
      return -1;
    }
  }
}

// event_cleanup
// file event.c line 378
extern void event_cleanup(void)
{
  list_free(&event_info_start, event_free);
  list_free(&event_info_finish, event_free);
}

// event_cmp
// file event.c line 71
static signed int event_cmp(const void *data1, const void *data2)
{
  struct anonymous_32 *ev1 = (struct anonymous_32 *)data1;
  struct anonymous_32 *ev2 = (struct anonymous_32 *)data2;
  return (signed int)(ev2->count - ev1->count);
}

// event_delta
// file event.c line 236
static unsigned long int event_delta(const struct anonymous_32 *event_new, const struct anonymous_3 *events_old)
{
  struct link *l = events_old->head;
  signed int tmp_statement_expression_1;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    struct anonymous_32 *event_old = (struct anonymous_32 *)l->data;
    unsigned long int __s1_len;
    unsigned long int __s2_len;
    signed int return_value___builtin_strcmp_2;
    return_value___builtin_strcmp_2=__builtin_strcmp(event_new->ident, event_old->ident);
    tmp_statement_expression_1 = return_value___builtin_strcmp_2;
    if(tmp_statement_expression_1 == 0)
      return event_new->count - event_old->count;

  }
  return event_new->count;
}

// event_dump_diff
// file event.c line 253
extern void event_dump_diff(struct json_object *j_tests, const double duration)
{
  struct link *l;
  printf("Wakeups:\n");
  if(!(event_info_finish.head == ((struct link *)NULL)))
  {
    if(!((0x00000002 & opt_flags) == 0))
    {
      double event_dump_diff__1__1__1__event_rate = 0.0;
      l = event_info_finish.head;
      for( ; !(l == ((struct link *)NULL)); l = l->next)
      {
        struct anonymous_32 *event_dump_diff__1__1__1__1__1__event_new = (struct anonymous_32 *)l->data;
        unsigned long int delta;
        delta=event_delta(event_dump_diff__1__1__1__1__1__event_new, &event_info_start);
        event_dump_diff__1__1__1__event_rate = event_dump_diff__1__1__1__event_rate + (double)delta;
      }
      event_dump_diff__1__1__1__event_rate = event_dump_diff__1__1__1__event_rate / duration;
      const char *return_value_event_loading_1;
      return_value_event_loading_1=event_loading(event_dump_diff__1__1__1__event_rate);
      printf(" %.2f wakeups/sec (%s)\n\n", event_dump_diff__1__1__1__event_rate, return_value_event_loading_1);
    }

    else
    {
      signed int count = 0;
      double total = 0.0;
      printf("  PID  Process               Wake/Sec Kernel Functions\n");
      l = event_info_finish.head;
      for( ; !(l == ((struct link *)NULL)); l = l->next)
      {
        struct anonymous_32 *event_new = (struct anonymous_32 *)l->data;
        unsigned long int event_dump_diff__1__1__2__1__1__delta;
        event_dump_diff__1__1__2__1__1__delta=event_delta(event_new, &event_info_start);
        double event_dump_diff__1__1__2__1__1__event_rate = (double)event_dump_diff__1__1__2__1__1__delta / duration;
        const char *return_value_event_loading_2;
        return_value_event_loading_2=event_loading(event_dump_diff__1__1__2__1__1__event_rate);
        printf(" %5d %-20.20s %9.2f (%s, %s) (%s)\n", event_new->proc->pid, event_new->proc->cmdline, event_dump_diff__1__1__2__1__1__event_rate, event_new->func, event_new->callback, return_value_event_loading_2);
        total = total + event_dump_diff__1__1__2__1__1__event_rate;
        count = count + 1;
      }
      if(count >= 2)
        printf(" %-27.27s%9.2f\n", (const void *)"Total", total);

      printf("\n");
    }
  }

  else
    printf(" No wakeups detected%s.\n\n", timer_stats != (_Bool)0 ? "" : " (Access to /proc/timer_stats failed)");
  if(!(j_tests == ((struct json_object *)NULL)))
  {
    struct json_object *j_event_test;
    struct json_object *j_events;
    struct json_object *j_event;
    unsigned long int total_delta = (unsigned long int)0;
    double total_event_rate;
    j_event_test=j_obj_new_obj();
    if(!(j_event_test == ((struct json_object *)NULL)))
    {
      j_obj_obj_add_link3(j_tests, "wakeup-events", j_event_test);
      j_events=j_obj_new_array();
      if(!(j_events == ((struct json_object *)NULL)))
      {
        j_obj_obj_add_link3(j_event_test, "wakeup-events-per-process", j_events);
        l = event_info_finish.head;
        for( ; !(l == ((struct link *)NULL)); l = l->next)
        {
          struct anonymous_32 *event = (struct anonymous_32 *)l->data;
          unsigned long int event_dump_diff__1__3__1__1__delta;
          event_dump_diff__1__3__1__1__delta=event_delta(event, &event_info_start);
          double event_rate = (double)event_dump_diff__1__3__1__1__delta / duration;
          total_delta = total_delta + event_dump_diff__1__3__1__1__delta;
          j_event=j_obj_new_obj();
          if(j_event == ((struct json_object *)NULL))
            goto out;

          j_obj_new_int32_add_link3(j_event, "pid", event->proc->pid);
          j_obj_new_int32_add_link3(j_event, "ppid", event->proc->ppid);
          j_obj_new_int32_add_link3(j_event, "is-thread", (const signed int)event->proc->is_thread);
          j_obj_new_string_add_link3(j_event, "name", event->proc->cmdline);
          j_obj_new_string_add_link3(j_event, "kernel-timer-func", event->func);
          j_obj_new_string_add_link3(j_event, "kernel-timer-callback", event->callback);
          j_obj_new_int64_add_link3(j_event, "wakeups", (const signed long int)event_dump_diff__1__3__1__1__delta);
          j_obj_new_double_add_link3(j_event, "wakeup-rate", event_rate);
          const char *return_value_event_loading_3;
          return_value_event_loading_3=event_loading(event_rate);
          j_obj_new_string_add_link3(j_event, "load-hint", return_value_event_loading_3);
          j_obj_array_add_link3(j_events, j_event);
        }
        total_event_rate = (double)total_delta / duration;
        j_event=j_obj_new_obj();
        if(!(j_event == ((struct json_object *)NULL)))
        {
          j_obj_obj_add_link3(j_event_test, "wakeup-events-total", j_event);
          j_obj_new_int64_add_link3(j_event, "wakeup-total", (const signed long int)total_delta);
          j_obj_new_double_add_link3(j_event, "wakeup-total-rate", total_event_rate);
          const char *return_value_event_loading_4;
          return_value_event_loading_4=event_loading(total_event_rate);
          j_obj_new_string_add_link3(j_event, "load-hint-total", return_value_event_loading_4);
        }

      }

    }

  }


out:
  ;
  goto __CPROVER_DUMP_L13;

__CPROVER_DUMP_L13:
  ;
}

// event_free
// file event.c line 57
static void event_free(void *data)
{
  struct anonymous_32 *ev = (struct anonymous_32 *)data;
  free((void *)ev->func);
  free((void *)ev->callback);
  free((void *)ev->ident);
  free((void *)ev);
}

// event_get_all_pids
// file event.c line 145
extern signed int event_get_all_pids(const struct anonymous_3 *pids, enum anonymous_9 state)
{
  struct _IO_FILE *fp;
  char buf[4096l];
  struct anonymous_3 *events = (signed int)state == PROC_START ? &event_info_start : &event_info_finish;
  fp=fopen("/proc/timer_stats", "r");
  signed int return_value_feof_1;
  if(fp == ((struct _IO_FILE *)NULL))
  {
    fprintf(stderr, "Cannot open %s.\n", (const void *)"/proc/timer_stats");
    return 0;
  }

  else
  {
    do
    {
      return_value_feof_1=feof(fp);
      if(!(return_value_feof_1 == 0))
        break;

      char *ptr = buf;
      unsigned long int count = (unsigned long int)0;
      signed int event_pid = -1;
      char func[128l];
      char timer[128l];
      struct link *l;
      char *return_value_fgets_2;
      return_value_fgets_2=fgets(buf, (signed int)sizeof(char [4096l]) /*4096ul*/ , fp);
      if(return_value_fgets_2 == ((char *)NULL))
        break;

      char *return_value_strstr_3;
      return_value_strstr_3=strstr(buf, "total events");
      if(!(return_value_strstr_3 == ((char *)NULL)))
        break;

      char *return_value_strstr_4;
      return_value_strstr_4=strstr(buf, ",");
      if(!(return_value_strstr_4 == ((char *)NULL)))
      {
        for( ; !(*ptr == 0); ptr = ptr + 1l)
          if((signed int)*ptr == 44)
            break;

        if((signed int)*ptr == 44)
        {
          if(!(buf >= ptr))
          {
            if((signed int)ptr[-1l] == 68)
              continue;

          }

          ptr = ptr + 1l;
          sscanf(buf, "%lu", &count);
          sscanf(ptr, "%8d", &event_pid);
          sscanf(ptr + (signed long int)24, "%127s (%127[^)])", (const void *)func, (const void *)timer);
          l = pids->head;
          for( ; !(l == ((struct link *)NULL)); l = l->next)
          {
            struct proc_info *p = (struct proc_info *)l->data;
            if(event_pid == p->pid)
            {
              signed int return_value_event_add_5;
              return_value_event_add_5=event_add(events, count, event_pid, func, timer);
              if(!(return_value_event_add_5 >= 0))
              {
                fclose(fp);
                return -1;
              }

              break;
            }

          }
        }

      }

    }
    while((_Bool)1);
    fclose(fp);
    return 0;
  }
}

// event_init
// file event.c line 354
extern void event_init(void)
{
  list_init(&event_info_start);
  list_init(&event_info_finish);
  signed int return_value_event_timer_stat_set_1;
  return_value_event_timer_stat_set_1=event_timer_stat_set("1");
  if(!(return_value_event_timer_stat_set_1 >= 0))
    timer_stats = (_Bool)0;

}

// event_loading
// file event.c line 210
static const char * event_loading(const double wakeup_rate)
{
  if(IEEE_FLOAT_EQUAL(wakeup_rate, 0.0))
    return "idle";

  else
    if(wakeup_rate > 200.0)
      return "very excessive";

    else
      if(wakeup_rate > 60.0)
        return "excessive";

      else
        if(wakeup_rate > 20.0)
          return "very high";

        else
          if(wakeup_rate > 10.0)
            return "high";

          else
            if(wakeup_rate > 5.0)
              return "quite high";

            else
              if(wakeup_rate > 1.0)
                return "moderate";

              else
                if(wakeup_rate > 0.25)
                  return "low";

                else
                  return "very low";
}

// event_stop
// file event.c line 368
extern void event_stop(void)
{
  if(!(timer_stats == (_Bool)0))
    event_timer_stat_set("0");

}

// event_timer_stat_set
// file event.c line 41
static signed int event_timer_stat_set(const char *str)
{
  struct _IO_FILE *fp;
  fp=fopen("/proc/timer_stats", "w");
  if(fp == ((struct _IO_FILE *)NULL))
    return -1;

  else
  {
    fprintf(fp, "%s\n", str);
    fclose(fp);
    return 0;
  }
}

// exec_executable
// file health-check.c line 204
signed int exec_executable(const char *opt_username, const char *path, char **argv)
{
  unsigned int uid;
  unsigned int gid;
  signed int pid;
  pid=fork();
  if(!(pid >= 0))
  {
    fprintf(stderr, "Cannot fork to run %s.\n", path);
    exit(1);
  }

  if(!(pid == 0))
    return pid;

  else
  {
    if(!(opt_username == ((const char *)NULL)))
    {
      struct passwd *pw;
      pw=getpwnam(opt_username);
      if(pw == ((struct passwd *)NULL))
      {
        fprintf(stderr, "Username %s does not exist.\n", opt_username);
        exit(1);
      }

      uid = pw->pw_uid;
      gid = pw->pw_gid;
      signed int return_value_initgroups_1;
      return_value_initgroups_1=initgroups(opt_username, gid);
      if(!(return_value_initgroups_1 >= 0))
      {
        fprintf(stderr, "initgroups failed user on %s\n", opt_username);
        exit(1);
      }

      signed int return_value_setregid_2;
      return_value_setregid_2=setregid(gid, gid);
      if(!(return_value_setregid_2 >= 0))
      {
        fprintf(stderr, "setregid failed\n");
        exit(1);
      }

      signed int return_value_setreuid_3;
      return_value_setreuid_3=setreuid(uid, uid);
      if(!(return_value_setreuid_3 >= 0))
      {
        fprintf(stderr, "setreuid failed\n");
        exit(1);
      }

    }

    else
    {
      unsigned int return_value_geteuid_5;
      return_value_geteuid_5=geteuid();
      if(!(return_value_geteuid_5 == 0u))
      {
        uid=getuid();
        signed int return_value_setreuid_4;
        return_value_setreuid_4=setreuid(uid, uid);
        if(!(return_value_setreuid_4 >= 0))
        {
          fprintf(stderr, "setreuid failed\n");
          exit(1);
        }

      }

    }
    signed int return_value_getpid_6;
    return_value_getpid_6=getpid();
    kill(return_value_getpid_6, 19);
    execv(path, argv);
    printf("Failed to execv %s\n", path);
    exit(1);
  }
}

// find_executable
// file health-check.c line 276
static const char * find_executable(const char *filename)
{
  unsigned long int filenamelen;
  filenamelen=strlen(filename);
  char *return_value___builtin_strchr_8;
  return_value___builtin_strchr_8=__builtin_strchr(filename, 47);
  _Bool tmp_if_expr_3;
  unsigned long int tmp_post_6;
  static char path[4096l];
  if(!(return_value___builtin_strchr_8 == ((char *)NULL)))
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(filename);
    if(return_value_strlen_1 >= 4096ul)
    {
      fprintf(stderr, "executable name too long.\n");
      health_check_exit(1);
    }

    __builtin_strncpy(path, filename, sizeof(char [4096l]) /*4096ul*/  - (unsigned long int)1);
    signed int return_value_is_executable_2;
    return_value_is_executable_2=is_executable(path);
    if(!(return_value_is_executable_2 == 0))
      return path;

    else
      fprintf(stderr, "%s is not a valid executable program\n", filename);
  }

  else
  {
    unsigned long int skiplen;
    char *p;
    p=getenv("PATH");
    do
    {
      if(!(p == ((char *)NULL)))
        tmp_if_expr_3 = *p != 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_3 = (_Bool)0;
      if(!tmp_if_expr_3)
        break;

      unsigned long int len;
      unsigned long int pathlen;
      char *ptr;
      char *return_value___builtin_strchr_4;
      return_value___builtin_strchr_4=__builtin_strchr(p, 58);
      ptr = return_value___builtin_strchr_4;
      if(!(ptr == ((char *)NULL)))
      {
        len = (unsigned long int)(ptr - p);
        skiplen = len + (unsigned long int)1;
      }

      else
      {
        len=strlen(p);
        skiplen = len;
      }
      if(!(len == 0ul))
      {
        if(len >= 4096ul)
          goto __CPROVER_DUMP_L20;

        else
        {
          pathlen = len;
          __builtin_strncpy(path, p, pathlen);
        }
      }

      else
      {
        char *return_value_getcwd_5;
        return_value_getcwd_5=getcwd(p, (unsigned long int)4096);
        if(return_value_getcwd_5 == ((char *)NULL))
          goto __CPROVER_DUMP_L20;

        pathlen=strlen(p);
      }
      if(!(2ul + pathlen + filenamelen >= 4097ul))
      {
        if(pathlen >= 1ul)
        {
          if(!((signed int)path[-1l + (signed long int)pathlen] == 47))
          {
            if(pathlen >= 4095ul)
              goto __CPROVER_DUMP_L20;

            tmp_post_6 = pathlen;
            pathlen = pathlen + 1ul;
            path[(signed long int)tmp_post_6] = (char)47;
          }

        }

        if(!(pathlen + filenamelen >= 4094ul))
        {
          strcpy(path + (signed long int)pathlen, filename);
          signed int return_value_is_executable_7;
          return_value_is_executable_7=is_executable(path);
          if(!(return_value_is_executable_7 == 0))
            return path;

        }

      }


    __CPROVER_DUMP_L20:
      ;
      p = p + (signed long int)skiplen;
    }
    while((_Bool)1);
    fprintf(stderr, "Cannot find %s in _PATH\n", filename);
  }
  return (const char *)(void *)0;
}

// fnotify_cleanup
// file fnotify.c line 680
extern void fnotify_cleanup(void)
{
  list_free(&fnotify_files, fnotify_event_free);
  list_free(&fnotify_wakelocks, free);
}

// fnotify_dump_events
// file fnotify.c line 653
extern void fnotify_dump_events(struct json_object *j_tests, const double duration, const struct anonymous_3 *pids)
{
  printf("File I/O operations:\n");
  if(fnotify_files.head == ((struct link *)NULL))
    printf(" No file I/O operations detected.\n\n");

  fnotify_dump_files(j_tests, duration);
  fnotify_dump_io_ops(j_tests, duration, pids);
}

// fnotify_dump_files
// file fnotify.c line 329
static void fnotify_dump_files(struct json_object *j_tests, const double duration)
{
  struct anonymous_3 sorted;
  struct link *l;
  signed int count;
  unsigned long int total;
  list_init(&sorted);
  l = fnotify_files.head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    struct anonymous_24 *fnotify_dump_files__1__1__1__info = (struct anonymous_24 *)l->data;
    struct link *return_value_list_add_ordered_1;
    return_value_list_add_ordered_1=list_add_ordered(&sorted, (void *)fnotify_dump_files__1__1__1__info, fnotify_event_cmp_count);
    if(return_value_list_add_ordered_1 == ((struct link *)NULL))
      goto out;

  }
  if(!(fnotify_files.head == ((struct link *)NULL)))
  {
    if((0x00000002 & opt_flags) == 0 && !(fnotify_files.head == ((struct link *)NULL)))
    {
      printf("  PID  Process               Count  Op  Filename\n");
      count = 0;
      total = (unsigned long int)0;
      l = sorted.head;
      for( ; !(l == ((struct link *)NULL)); l = l->next)
      {
        struct anonymous_24 *fnotify_dump_files__1__2__1__1__1__info = (struct anonymous_24 *)l->data;
        const char *return_value_fnotify_mask_to_str_2;
        return_value_fnotify_mask_to_str_2=fnotify_mask_to_str((const signed int)fnotify_dump_files__1__2__1__1__1__info->mask);
        printf(" %5d %-20.20s %6lu %4s %s\n", fnotify_dump_files__1__2__1__1__1__info->proc->pid, fnotify_dump_files__1__2__1__1__1__info->proc->cmdline, fnotify_dump_files__1__2__1__1__1__info->count, return_value_fnotify_mask_to_str_2, fnotify_dump_files__1__2__1__1__1__info->filename);
        total = total + fnotify_dump_files__1__2__1__1__1__info->count;
        count = count + 1;
      }
      if(count >= 2)
        printf(" %-25.25s%8lu\n", (const void *)"Total", total);

      printf(" Op: O=Open, R=Read, W=Write, C=Close\n\n");
    }

  }

  if(!(j_tests == ((struct json_object *)NULL)))
  {
    struct json_object *j_fnotify_test;
    struct json_object *j_accesses;
    struct json_object *j_access;
    j_fnotify_test=j_obj_new_obj();
    if(!(j_fnotify_test == ((struct json_object *)NULL)))
    {
      j_obj_obj_add_link2(j_tests, "file-access", j_fnotify_test);
      j_accesses=j_obj_new_array();
      if(!(j_accesses == ((struct json_object *)NULL)))
      {
        j_obj_obj_add_link2(j_fnotify_test, "file-access-per-process", j_accesses);
        total = (unsigned long int)0;
        l = sorted.head;
        for( ; !(l == ((struct link *)NULL)); l = l->next)
        {
          struct anonymous_24 *info = (struct anonymous_24 *)l->data;
          j_access=j_obj_new_obj();
          if(j_access == ((struct json_object *)NULL))
            goto out;

          j_obj_new_int32_add_link2(j_access, "pid", info->proc->pid);
          j_obj_new_int32_add_link2(j_access, "ppid", info->proc->ppid);
          j_obj_new_int32_add_link2(j_access, "is-thread", (const signed int)info->proc->is_thread);
          j_obj_new_string_add_link2(j_access, "name", info->proc->cmdline);
          const char *return_value_fnotify_mask_to_str_3;
          return_value_fnotify_mask_to_str_3=fnotify_mask_to_str((const signed int)info->mask);
          j_obj_new_string_add_link2(j_access, "access-mode", return_value_fnotify_mask_to_str_3);
          j_obj_new_string_add_link2(j_access, "filename", info->filename);
          j_obj_new_int64_add_link2(j_access, "accesses-count", (const signed long int)info->count);
          j_obj_new_double_add_link2(j_access, "accesses-count-rate", (double)info->count / duration);
          j_obj_array_add_link2(j_accesses, j_access);
          total = total + info->count;
        }
        j_access=j_obj_new_obj();
        if(!(j_access == ((struct json_object *)NULL)))
        {
          j_obj_obj_add_link2(j_fnotify_test, "file-access-total", j_access);
          j_obj_new_int64_add_link2(j_access, "access-count-total", (const signed long int)total);
          j_obj_new_double_add_link2(j_access, "access-count-total-rate", (double)total / duration);
        }

      }

    }

  }


out:
  ;
  list_free(&sorted, (void (*)(void *))(void *)0);
}

// fnotify_dump_io_ops
// file fnotify.c line 412
static void fnotify_dump_io_ops(struct json_object *j_tests, const double duration, const struct anonymous_3 *pids)
{
  struct link *l;
  struct link *lp;
  struct anonymous_3 sorted;
  signed int count;
  unsigned long int read_total;
  unsigned long int write_total;
  unsigned long int open_total;
  unsigned long int close_total;
  list_init(&sorted);
  lp = pids->head;
  for( ; !(lp == ((struct link *)NULL)); lp = lp->next)
  {
    struct proc_info *p = (struct proc_info *)lp->data;
    struct anonymous_25 io_ops;
    memset((void *)&io_ops, 0, sizeof(struct anonymous_25) /*48ul*/ );
    io_ops.proc = p;
    l = fnotify_files.head;
    for( ; !(l == ((struct link *)NULL)); l = l->next)
    {
      struct anonymous_24 *info = (struct anonymous_24 *)l->data;
      if(info->proc->pid == p->pid)
      {
        if(!((32u & info->mask) == 0u))
          io_ops.open_total = io_ops.open_total + info->count;

        if(!((24u & info->mask) == 0u))
          io_ops.close_total = io_ops.close_total + info->count;

        if(!((1u & info->mask) == 0u))
          io_ops.read_total = io_ops.read_total + info->count;

        if(!((10u & info->mask) == 0u))
          io_ops.write_total = io_ops.write_total + info->count;

      }

    }
    io_ops.total = io_ops.open_total + io_ops.close_total + io_ops.read_total + io_ops.write_total;
    if(!(io_ops.total == 0ul))
    {
      struct anonymous_25 *new_io_ops;
      void *return_value_calloc_1;
      return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct anonymous_25) /*48ul*/ );
      new_io_ops = (struct anonymous_25 *)return_value_calloc_1;
      if(new_io_ops == ((struct anonymous_25 *)NULL))
      {
        health_check_out_of_memory("allocating fnotify I/O ops information");
        goto out;
      }

      *new_io_ops = io_ops;
      struct link *return_value_list_add_ordered_2;
      return_value_list_add_ordered_2=list_add_ordered(&sorted, (void *)new_io_ops, fnotify_event_cmp_io_ops);
      if(return_value_list_add_ordered_2 == ((struct link *)NULL))
      {
        free((void *)new_io_ops);
        goto out;
      }

    }

  }
  write_total = (unsigned long int)0;
  read_total = write_total;
  close_total = read_total;
  open_total = close_total;
  if(!(fnotify_files.head == ((struct link *)NULL)))
  {
    if(!((0x00000002 & opt_flags) == 0))
    {
      l = sorted.head;
      for( ; !(l == ((struct link *)NULL)); l = l->next)
      {
        struct anonymous_25 *fnotify_dump_io_ops__1__2__1__1__1__io_ops = (struct anonymous_25 *)l->data;
        open_total = open_total + fnotify_dump_io_ops__1__2__1__1__1__io_ops->open_total;
        close_total = close_total + fnotify_dump_io_ops__1__2__1__1__1__io_ops->close_total;
        read_total = read_total + fnotify_dump_io_ops__1__2__1__1__1__io_ops->read_total;
        write_total = write_total + fnotify_dump_io_ops__1__2__1__1__1__io_ops->write_total;
      }
      printf("  I/O Operations per second: %.2f open, %.2f close, %.2f read, %.2f write\n", (double)open_total / duration, (double)close_total / duration, (double)read_total / duration, (double)write_total / duration);
      printf("\n");
    }

    else
    {
      printf("File I/O Operations per second:\n");
      printf("  PID  Process                 Open   Close    Read   Write\n");
      count = 0;
      l = sorted.head;
      for( ; !(l == ((struct link *)NULL)); l = l->next)
      {
        struct anonymous_25 *fnotify_dump_io_ops__1__2__2__1__1__io_ops = (struct anonymous_25 *)l->data;
        printf(" %5d %-20.20s %7.2f %7.2f %7.2f %7.2f\n", fnotify_dump_io_ops__1__2__2__1__1__io_ops->proc->pid, fnotify_dump_io_ops__1__2__2__1__1__io_ops->proc->cmdline, (double)fnotify_dump_io_ops__1__2__2__1__1__io_ops->open_total / duration, (double)fnotify_dump_io_ops__1__2__2__1__1__io_ops->close_total / duration, (double)fnotify_dump_io_ops__1__2__2__1__1__io_ops->read_total / duration, (double)fnotify_dump_io_ops__1__2__2__1__1__io_ops->write_total / duration);
        open_total = open_total + fnotify_dump_io_ops__1__2__2__1__1__io_ops->open_total;
        close_total = close_total + fnotify_dump_io_ops__1__2__2__1__1__io_ops->close_total;
        read_total = read_total + fnotify_dump_io_ops__1__2__2__1__1__io_ops->read_total;
        write_total = write_total + fnotify_dump_io_ops__1__2__2__1__1__io_ops->write_total;
        count = count + 1;
      }
      if(count >= 2)
        printf(" %-27.27s%7.2f %7.2f %7.2f %7.2f\n", (const void *)"Total", (double)open_total / duration, (double)close_total / duration, (double)read_total / duration, (double)write_total / duration);

      printf("\n");
    }
  }

  if(!(j_tests == ((struct json_object *)NULL)))
  {
    struct json_object *j_fnotify_test;
    struct json_object *j_io_ops;
    struct json_object *j_io_op;
    j_fnotify_test=j_obj_new_obj();
    if(!(j_fnotify_test == ((struct json_object *)NULL)))
    {
      j_obj_obj_add_link2(j_tests, "file-io-operations", j_fnotify_test);
      j_io_ops=j_obj_new_array();
      if(!(j_io_ops == ((struct json_object *)NULL)))
      {
        j_obj_obj_add_link2(j_fnotify_test, "file-io-operations-per-process", j_io_ops);
        l = sorted.head;
        for( ; !(l == ((struct link *)NULL)); l = l->next)
        {
          struct anonymous_25 *fnotify_dump_io_ops__1__3__1__1__io_ops = (struct anonymous_25 *)l->data;
          j_io_op=j_obj_new_obj();
          if(j_io_op == ((struct json_object *)NULL))
            goto out;

          j_obj_new_int32_add_link2(j_io_op, "pid", fnotify_dump_io_ops__1__3__1__1__io_ops->proc->pid);
          j_obj_new_int32_add_link2(j_io_op, "ppid", fnotify_dump_io_ops__1__3__1__1__io_ops->proc->ppid);
          j_obj_new_int32_add_link2(j_io_op, "is-thread", (const signed int)fnotify_dump_io_ops__1__3__1__1__io_ops->proc->is_thread);
          j_obj_new_string_add_link2(j_io_op, "name", fnotify_dump_io_ops__1__3__1__1__io_ops->proc->cmdline);
          j_obj_new_int64_add_link2(j_io_op, "open-call-count", (const signed long int)fnotify_dump_io_ops__1__3__1__1__io_ops->open_total);
          j_obj_new_int64_add_link2(j_io_op, "close-call-count", (const signed long int)fnotify_dump_io_ops__1__3__1__1__io_ops->close_total);
          j_obj_new_int64_add_link2(j_io_op, "read-call-count", (const signed long int)fnotify_dump_io_ops__1__3__1__1__io_ops->read_total);
          j_obj_new_int64_add_link2(j_io_op, "write-call-count", (const signed long int)fnotify_dump_io_ops__1__3__1__1__io_ops->write_total);
          j_obj_new_double_add_link2(j_io_op, "open-call-rate", (double)fnotify_dump_io_ops__1__3__1__1__io_ops->open_total / duration);
          j_obj_new_double_add_link2(j_io_op, "close-call-rate", (double)fnotify_dump_io_ops__1__3__1__1__io_ops->close_total / duration);
          j_obj_new_double_add_link2(j_io_op, "read-call-rate", (double)fnotify_dump_io_ops__1__3__1__1__io_ops->read_total / duration);
          j_obj_new_double_add_link2(j_io_op, "write-call-rate", (double)fnotify_dump_io_ops__1__3__1__1__io_ops->write_total / duration);
          j_obj_array_add_link2(j_io_ops, j_io_op);
        }
        j_io_op=j_obj_new_obj();
        if(!(j_io_op == ((struct json_object *)NULL)))
        {
          j_obj_obj_add_link2(j_fnotify_test, "file-io-operations-total", j_io_op);
          j_obj_new_int64_add_link2(j_io_op, "open-call-total", (const signed long int)open_total);
          j_obj_new_int64_add_link2(j_io_op, "close-call-total", (const signed long int)close_total);
          j_obj_new_int64_add_link2(j_io_op, "read-total", (const signed long int)read_total);
          j_obj_new_int64_add_link2(j_io_op, "write-call-total", (const signed long int)write_total);
          j_obj_new_double_add_link2(j_io_op, "open-call-total-rate", (double)open_total / duration);
          j_obj_new_double_add_link2(j_io_op, "close-call-total-rate", (double)close_total / duration);
          j_obj_new_double_add_link2(j_io_op, "read-call-total-rate", (double)read_total / duration);
          j_obj_new_double_add_link2(j_io_op, "write-call-total-rate", (double)write_total / duration);
        }

      }

    }

  }


out:
  ;
  list_free(&sorted, free);
}

// fnotify_dump_wakelocks
// file fnotify.c line 567
extern void fnotify_dump_wakelocks(struct json_object *j_tests, const double duration)
{
  struct anonymous_3 sorted;
  struct link *l;
  (void)j_tests;
  (void)duration;
  if(!((0x00000008 & opt_flags) == 0))
  {
    printf("Wakelock operations:\n");
    list_init(&sorted);
    l = fnotify_wakelocks.head;
    for( ; !(l == ((struct link *)NULL)); l = l->next)
    {
      struct anonymous_23 *info = (struct anonymous_23 *)l->data;
      struct link *return_value_list_add_ordered_1;
      return_value_list_add_ordered_1=list_add_ordered(&sorted, (void *)info, fnotify_wakelock_cmp_count);
      if(return_value_list_add_ordered_1 == ((struct link *)NULL))
        goto out;

    }
    if(fnotify_wakelocks.head == ((struct link *)NULL))
      printf(" None.\n\n");

    else
    {
      if((0x00000002 & opt_flags) == 0 && !(fnotify_wakelocks.head == ((struct link *)NULL)))
      {
        printf("  PID  Process                 Locks  Unlocks\n");
        l = sorted.head;
        for( ; !(l == ((struct link *)NULL)); l = l->next)
        {
          struct anonymous_23 *fnotify_dump_wakelocks__1__3__1__1__1__info = (struct anonymous_23 *)l->data;
          printf(" %5d %-20.20s %8lu %8lu\n", fnotify_dump_wakelocks__1__3__1__1__1__info->proc->pid, fnotify_dump_wakelocks__1__3__1__1__1__info->proc->cmdline, fnotify_dump_wakelocks__1__3__1__1__1__info->locked, fnotify_dump_wakelocks__1__3__1__1__1__info->unlocked);
        }
      }

      printf("\n");
    }
    if(!(j_tests == ((struct json_object *)NULL)))
    {
      struct json_object *j_wakelock_test;
      struct json_object *j_wakelock_infos;
      struct json_object *j_wakelock_info;
      unsigned long int locked_total = (unsigned long int)0;
      unsigned long int unlocked_total = (unsigned long int)0;
      j_wakelock_test=j_obj_new_obj();
      if(!(j_wakelock_test == ((struct json_object *)NULL)))
      {
        j_obj_obj_add_link2(j_tests, "wakelock-operations-light", j_wakelock_test);
        j_wakelock_infos=j_obj_new_array();
        if(!(j_wakelock_infos == ((struct json_object *)NULL)))
        {
          j_obj_obj_add_link2(j_wakelock_test, "wakelock-operations-light-per-process", j_wakelock_infos);
          l = sorted.head;
          for( ; !(l == ((struct link *)NULL)); l = l->next)
          {
            struct anonymous_23 *fnotify_dump_wakelocks__1__4__1__1__info = (struct anonymous_23 *)l->data;
            j_wakelock_info=j_obj_new_obj();
            if(j_wakelock_info == ((struct json_object *)NULL))
              goto out;

            j_obj_new_int32_add_link2(j_wakelock_info, "pid", fnotify_dump_wakelocks__1__4__1__1__info->proc->pid);
            j_obj_new_int32_add_link2(j_wakelock_info, "ppid", fnotify_dump_wakelocks__1__4__1__1__info->proc->ppid);
            j_obj_new_int32_add_link2(j_wakelock_info, "is-thread", (const signed int)fnotify_dump_wakelocks__1__4__1__1__info->proc->is_thread);
            j_obj_new_string_add_link2(j_wakelock_info, "name", fnotify_dump_wakelocks__1__4__1__1__info->proc->cmdline);
            j_obj_new_int64_add_link2(j_wakelock_info, "wakelock-locked", (const signed long int)fnotify_dump_wakelocks__1__4__1__1__info->locked);
            j_obj_new_double_add_link2(j_wakelock_info, "wakelock-locked-rate", (double)fnotify_dump_wakelocks__1__4__1__1__info->locked / duration);
            j_obj_new_int64_add_link2(j_wakelock_info, "wakelock-unlocked", (const signed long int)fnotify_dump_wakelocks__1__4__1__1__info->unlocked);
            j_obj_new_double_add_link2(j_wakelock_info, "wakelock-unlocked-rate", (double)fnotify_dump_wakelocks__1__4__1__1__info->unlocked / duration);
            j_obj_array_add_link2(j_wakelock_infos, j_wakelock_info);
            locked_total = locked_total + fnotify_dump_wakelocks__1__4__1__1__info->locked;
            unlocked_total = unlocked_total + fnotify_dump_wakelocks__1__4__1__1__info->unlocked;
          }
          j_wakelock_info=j_obj_new_obj();
          if(!(j_wakelock_info == ((struct json_object *)NULL)))
          {
            j_obj_obj_add_link2(j_wakelock_test, "wakelock-operations-light-total", j_wakelock_info);
            j_obj_new_int64_add_link2(j_wakelock_info, "wakelock-locked-total", (const signed long int)locked_total);
            j_obj_new_double_add_link2(j_wakelock_info, "wakelock-locked-total-rate", (double)locked_total / duration);
            j_obj_new_int64_add_link2(j_wakelock_info, "wakelock-unlocked-total", (const signed long int)unlocked_total);
            j_obj_new_double_add_link2(j_wakelock_info, "wakelock-unlocked-total-rate", (double)unlocked_total / duration);
          }

        }

      }

    }


  out:
    ;
    list_free(&sorted, (void (*)(void *))(void *)0);
  }

}

// fnotify_event_add
// file fnotify.c line 164
extern signed int fnotify_event_add(const struct anonymous_3 *pids, struct fanotify_event_metadata *metadata)
{
  struct link *fnotify_event_add__1__l;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_15;
  signed int tmp_statement_expression_10;
  _Bool tmp_if_expr_14;
  signed int tmp_statement_expression_12;
  signed int tmp_statement_expression_3;
  signed int tmp_statement_expression_5;
  if(metadata->fd == -1)
  {
    if(metadata->fd >= 0)
      goto __CPROVER_DUMP_L1;

    return 0;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    fnotify_event_add__1__l = pids->head;
    for( ; !(fnotify_event_add__1__l == ((struct link *)NULL)); fnotify_event_add__1__l = fnotify_event_add__1__l->next)
    {
      struct proc_info *p = (struct proc_info *)fnotify_event_add__1__l->data;
      if(metadata->pid == p->pid)
      {
        char *filename;
        filename=fnotify_get_filename(-1, metadata->fd);
        if(filename == ((char *)NULL))
        {
          health_check_out_of_memory("allocating fnotify filename");
          close(metadata->fd);
          return -1;
        }

        if(!((0x00000008 & opt_flags) == 0))
          tmp_if_expr_9 = (metadata->mask & (unsigned long int)(0x00000002 | 0x00000008)) != 0ull ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_9 = (_Bool)0;
        if(tmp_if_expr_9)
        {
          unsigned long int fnotify_event_add__1__1__1__1__2____s1_len;
          unsigned long int fnotify_event_add__1__1__1__1__2____s2_len;
          signed int return_value___builtin_strcmp_11;
          return_value___builtin_strcmp_11=__builtin_strcmp(filename, "/sys/power/wake_lock");
          tmp_statement_expression_10 = return_value___builtin_strcmp_11;
          if(tmp_statement_expression_10 == 0)
            tmp_if_expr_14 = (_Bool)1;

          else
          {
            unsigned long int fnotify_event_add__1__1__1__1__3____s1_len;
            unsigned long int fnotify_event_add__1__1__1__1__3____s2_len;
            signed int return_value___builtin_strcmp_13;
            return_value___builtin_strcmp_13=__builtin_strcmp(filename, "/sys/power/wake_unlock");
            tmp_statement_expression_12 = return_value___builtin_strcmp_13;
            tmp_if_expr_14 = !(tmp_statement_expression_12 != 0) ? (_Bool)1 : (_Bool)0;
          }
          tmp_if_expr_15 = tmp_if_expr_14 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_15 = (_Bool)0;
        if(tmp_if_expr_15)
        {
          struct anonymous_23 *wakelock_info;
          struct link *l;
          _Bool found = (_Bool)0;
          l = fnotify_wakelocks.head;
          for( ; !(l == ((struct link *)NULL)); l = l->next)
          {
            wakelock_info = (struct anonymous_23 *)l->data;
            if(wakelock_info->proc == p)
            {
              found = (_Bool)1;
              break;
            }

          }
          if(found == (_Bool)0)
          {
            void *return_value_calloc_1;
            return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct anonymous_23) /*32ul*/ );
            wakelock_info = (struct anonymous_23 *)return_value_calloc_1;
            if(wakelock_info == ((struct anonymous_23 *)NULL))
            {
              health_check_out_of_memory("allocating wakelock information");
              free((void *)filename);
              close(metadata->fd);
              return -1;
            }

            wakelock_info->proc = p;
            wakelock_info->locked = (unsigned long int)0;
            wakelock_info->unlocked = (unsigned long int)0;
            wakelock_info->total = (unsigned long int)0;
            struct link *return_value_list_append_2;
            return_value_list_append_2=list_append(&fnotify_wakelocks, (void *)wakelock_info);
            if(return_value_list_append_2 == ((struct link *)NULL))
            {
              free((void *)filename);
              close(metadata->fd);
              return -1;
            }

          }

          unsigned long int __s1_len;
          unsigned long int __s2_len;
          signed int return_value___builtin_strcmp_4;
          return_value___builtin_strcmp_4=__builtin_strcmp(filename, "/sys/power/wake_unlock");
          tmp_statement_expression_3 = return_value___builtin_strcmp_4;
          if(!(tmp_statement_expression_3 == 0))
            wakelock_info->locked = wakelock_info->locked + 1ul;

          else
            wakelock_info->unlocked = wakelock_info->unlocked + 1ul;
          free((void *)filename);
          wakelock_info->total = wakelock_info->total + 1ul;
        }

        else
        {
          struct anonymous_24 *fileinfo;
          struct link *fnotify_event_add__1__1__1__1__5__l;
          _Bool fnotify_event_add__1__1__1__1__5__found = (_Bool)0;
          fnotify_event_add__1__1__1__1__5__l = fnotify_files.head;
          for( ; !(fnotify_event_add__1__1__1__1__5__l == ((struct link *)NULL)); fnotify_event_add__1__1__1__1__5__l = fnotify_event_add__1__1__1__1__5__l->next)
          {
            fileinfo = (struct anonymous_24 *)fnotify_event_add__1__1__1__1__5__l->data;
            if(metadata->mask == (unsigned long int)fileinfo->mask)
            {
              unsigned long int fnotify_event_add__1__1__1__1__5__1__1__1____s1_len;
              unsigned long int fnotify_event_add__1__1__1__1__5__1__1__1____s2_len;
              signed int return_value___builtin_strcmp_6;
              return_value___builtin_strcmp_6=__builtin_strcmp(fileinfo->filename, filename);
              tmp_statement_expression_5 = return_value___builtin_strcmp_6;
              if(tmp_statement_expression_5 == 0)
              {
                fnotify_event_add__1__1__1__1__5__found = (_Bool)1;
                break;
              }

            }

          }
          if(fnotify_event_add__1__1__1__1__5__found == (_Bool)0)
          {
            void *return_value_calloc_7;
            return_value_calloc_7=calloc((unsigned long int)1, sizeof(struct anonymous_24) /*32ul*/ );
            fileinfo = (struct anonymous_24 *)return_value_calloc_7;
            if(fileinfo == ((struct anonymous_24 *)NULL))
            {
              health_check_out_of_memory("allocating fnotify file information");
              free((void *)filename);
              close(metadata->fd);
              return -1;
            }

            fileinfo->filename = filename;
            fileinfo->mask = (unsigned int)metadata->mask;
            fileinfo->proc = p;
            fileinfo->count = (unsigned long int)0;
            struct link *return_value_list_append_8;
            return_value_list_append_8=list_append(&fnotify_files, (void *)fileinfo);
            if(return_value_list_append_8 == ((struct link *)NULL))
            {
              free((void *)filename);
              close(metadata->fd);
              return -1;
            }

          }

          else
            free((void *)filename);
          fileinfo->count = fileinfo->count + 1ul;
        }
      }

    }
    close(metadata->fd);
    return 0;
  }
}

// fnotify_event_cmp_count
// file fnotify.c line 271
static signed int fnotify_event_cmp_count(const void *data1, const void *data2)
{
  struct anonymous_24 *info1 = (struct anonymous_24 *)data1;
  struct anonymous_24 *info2 = (struct anonymous_24 *)data2;
  return (signed int)(info2->count - info1->count);
}

// fnotify_event_cmp_io_ops
// file fnotify.c line 283
static signed int fnotify_event_cmp_io_ops(const void *data1, const void *data2)
{
  struct anonymous_25 *io_ops1 = (struct anonymous_25 *)data1;
  struct anonymous_25 *io_ops2 = (struct anonymous_25 *)data2;
  return (signed int)(io_ops2->total - io_ops1->total);
}

// fnotify_event_free
// file fnotify.c line 106
void fnotify_event_free(void *data)
{
  struct anonymous_24 *fileinfo = (struct anonymous_24 *)data;
  free((void *)fileinfo->filename);
  free((void *)fileinfo);
}

// fnotify_event_init
// file fnotify.c line 49
extern signed int fnotify_event_init(void)
{
  signed int fan_fd;
  signed int ret;
  struct _IO_FILE *mounts;
  struct mntent *mount;
  fan_fd=fanotify_init((unsigned int)0, (unsigned int)0);
  if(!(fan_fd >= 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(*return_value___errno_location_1);
    fprintf(stderr, "Cannot initialize fanotify: %s.\n", return_value_strerror_2);
    return -1;
  }

  ret=fanotify_mark(fan_fd, (unsigned int)(0x00000001 | 0x00000010), (unsigned long int)(0x00000001 | 0x00000002 | 0x00000020 | 0x00000008 | 0x00000010 | 0x40000000 | 0x08000000), -100, "/");
  if(!(ret >= 0))
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    char *return_value_strerror_4;
    return_value_strerror_4=strerror(*return_value___errno_location_3);
    fprintf(stderr, "Cannot add fanotify watch on /: %s.\n", return_value_strerror_4);
  }

  mounts=setmntent("/proc/self/mounts", "r");
  signed int *return_value___errno_location_5;
  if(mounts == ((struct _IO_FILE *)NULL))
  {
    fprintf(stderr, "Cannot get mount points.\n");
    return -1;
  }

  else
  {
    do
    {
      mount=getmntent(mounts);
      if(mount == ((struct mntent *)NULL))
        break;

      ret=fanotify_mark(fan_fd, (unsigned int)(0x00000001 | 0x00000010), (unsigned long int)(0x00000001 | 0x00000002 | 0x00000020 | 0x00000008 | 0x00000010 | 0x40000000 | 0x08000000), -100, mount->mnt_dir);
      if(!(ret >= 0))
      {
        return_value___errno_location_5=__errno_location();
        if(!(*return_value___errno_location_5 == 2))
          continue;

      }

    }
    while((_Bool)1);
    endmntent(mounts);
    fanotify_mark(fan_fd, (unsigned int)0x00000001, (unsigned long int)(0x00000001 | 0x00000002), -100, "/sys/power/wake_lock");
    fanotify_mark(fan_fd, (unsigned int)0x00000001, (unsigned long int)(0x00000001 | 0x00000002), -100, "/sys/power/wake_unlock");
    return fan_fd;
  }
}

// fnotify_get_filename
// file fnotify.h line 66
extern char * fnotify_get_filename(const signed int pid, const signed int fd)
{
  char buf[256l];
  char path[4096l];
  signed long int len;
  char *filename;
  if(pid == -1)
    snprintf(buf, sizeof(char [256l]) /*256ul*/ , "/proc/self/fd/%d", fd);

  else
    snprintf(buf, sizeof(char [256l]) /*256ul*/ , "/proc/%d/fd/%d", pid, fd);
  len=readlink(buf, path, sizeof(char [4096l]) /*4096ul*/ );
  char *return_value___strdup_1;
  if(!(len >= 0l))
  {
    struct stat statbuf;
    signed int return_value_fstat_5;
    return_value_fstat_5=fstat(fd, &statbuf);
    if(!(return_value_fstat_5 >= 0))
    {
      return_value___strdup_1=__strdup("(unknown)");
      filename = return_value___strdup_1;
    }

    else
    {
      unsigned int return_value_gnu_dev_major_2;
      return_value_gnu_dev_major_2=gnu_dev_major(statbuf.st_dev);
      unsigned int return_value_gnu_dev_minor_3;
      return_value_gnu_dev_minor_3=gnu_dev_minor(statbuf.st_dev);
      snprintf(buf, sizeof(char [256l]) /*256ul*/ , "dev: %i:%i inode %ld", return_value_gnu_dev_major_2, return_value_gnu_dev_minor_3, statbuf.st_ino);
      char *return_value___strdup_4;
      return_value___strdup_4=__strdup(buf);
      filename = return_value___strdup_4;
    }
  }

  else
  {
    path[len >= (signed long int)4096 ? (signed long int)(4096 - 1) : len] = (char)0;
    char *return_value___strdup_6;
    return_value___strdup_6=__strdup(path);
    filename = return_value___strdup_6;
  }
  return filename;
}

// fnotify_init
// file fnotify.c line 670
extern void fnotify_init(void)
{
  list_init(&fnotify_files);
  list_init(&fnotify_wakelocks);
}

// fnotify_mask_to_str
// file fnotify.c line 307
static const char * fnotify_mask_to_str(const signed int mask)
{
  signed int i = 0;
  signed int tmp_post_1;
  static char modes[5l];
  if(!((0x00000020 & mask) == 0))
  {
    tmp_post_1 = i;
    i = i + 1;
    modes[(signed long int)tmp_post_1] = (char)79;
  }

  signed int tmp_post_2;
  if(!((24 & mask) == 0))
  {
    tmp_post_2 = i;
    i = i + 1;
    modes[(signed long int)tmp_post_2] = (char)67;
  }

  signed int tmp_post_3;
  if(!((0x00000001 & mask) == 0))
  {
    tmp_post_3 = i;
    i = i + 1;
    modes[(signed long int)tmp_post_3] = (char)82;
  }

  signed int tmp_post_4;
  if(!((10 & mask) == 0))
  {
    tmp_post_4 = i;
    i = i + 1;
    modes[(signed long int)tmp_post_4] = (char)87;
  }

  modes[(signed long int)i] = (char)0;
  return modes;
}

// fnotify_wakelock_cmp_count
// file fnotify.c line 295
static signed int fnotify_wakelock_cmp_count(const void *data1, const void *data2)
{
  struct anonymous_23 *w1 = (struct anonymous_23 *)data1;
  struct anonymous_23 *w2 = (struct anonymous_23 *)data2;
  return (signed int)(w2->total - w1->total);
}

// fstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 466
static inline signed int fstat(signed int __fd, struct stat *__statbuf)
{
  signed int return_value___fxstat_1;
  return_value___fxstat_1=__fxstat(1, __fd, __statbuf);
  return return_value___fxstat_1;
}

// get_pid_cmdline
// file pid.c line 68
extern char * get_pid_cmdline(const signed int pid)
{
  char buffer[4096l];
  char *ptr;
  signed int fd;
  signed long int ret;
  snprintf(buffer, sizeof(char [4096l]) /*4096ul*/ , "/proc/%i/cmdline", pid);
  fd=open(buffer, 00);
  _Bool tmp_if_expr_1;
  if(!(fd >= 0))
    return (char *)(void *)0;

  else
  {
    ret=read(fd, (void *)buffer, sizeof(char [4096l]) /*4096ul*/ );
    if(!(ret >= 1l))
    {
      close(fd);
      return (char *)(void *)0;
    }

    else
    {
      close(fd);
      if(ret >= (signed long int)sizeof(char [4096l]) /*4096l*/ )
        ret = (signed long int)(sizeof(char [4096l]) /*4096ul*/  - (unsigned long int)1);

      buffer[ret] = (char)0;
      ptr = buffer;
      do
      {
        if(!(*ptr == 0))
          tmp_if_expr_1 = ptr < buffer + ret ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
        if(!tmp_if_expr_1)
          break;

        if((signed int)*ptr == 32)
          *ptr = (char)0;

        ptr = ptr + 1l;
      }
      while((_Bool)1);
      char *return_value___xpg_basename_2;
      return_value___xpg_basename_2=__xpg_basename(buffer);
      char *return_value___strdup_3;
      return_value___strdup_3=__strdup(return_value___xpg_basename_2);
      return return_value___strdup_3;
    }
  }
}

// get_pid_comm
// file pid.c line 43
extern char * get_pid_comm(const signed int pid)
{
  char buffer[4096l];
  signed int fd;
  signed long int ret;
  snprintf(buffer, sizeof(char [4096l]) /*4096ul*/ , "/proc/%i/comm", pid);
  fd=open(buffer, 00);
  if(!(fd >= 0))
    return (char *)(void *)0;

  else
  {
    ret=read(fd, (void *)buffer, sizeof(char [4096l]) /*4096ul*/ );
    if(!(ret >= 1l))
    {
      close(fd);
      return (char *)(void *)0;
    }

    else
    {
      close(fd);
      buffer[ret - (signed long int)1] = (char)0;
      char *return_value___strdup_1;
      return_value___strdup_1=__strdup(buffer);
      return return_value___strdup_1;
    }
  }
}

// gnu_dev_major
// file /usr/include/x86_64-linux-gnu/sys/sysmacros.h line 39
static inline unsigned int gnu_dev_major(unsigned long long int __dev)
{
  return (unsigned int)(__dev >> 8 & (unsigned long int)0xfff | (unsigned long int)((unsigned int)(__dev >> 32) & (unsigned int)~0xfff));
}

// gnu_dev_minor
// file /usr/include/x86_64-linux-gnu/sys/sysmacros.h line 45
static inline unsigned int gnu_dev_minor(unsigned long long int __dev)
{
  return (unsigned int)(__dev & (unsigned long int)0xff | (unsigned long int)((unsigned int)(__dev >> 12) & (unsigned int)~0xff));
}

// handle_sig
// file health-check.c line 66
static void handle_sig(signed int dummy)
{
  (void)dummy;
  keep_running = (volatile _Bool)0;
  caught_sigint = (_Bool)1;
}

// hash_fd
// file syscall.c line 696
static inline unsigned long int hash_fd(const signed int pid, const signed int fd)
{
  unsigned long int h = (unsigned long int)((pid ^ pid << 3 ^ fd) % 1997);
  return h;
}

// hash_filename
// file syscall.c line 709
static unsigned int hash_filename(const signed int pid, const char *filename)
{
  unsigned int hash = (unsigned int)(5381 ^ pid);
  signed int c;
  const char *str = filename;
  const char *tmp_post_1;
  do
  {
    tmp_post_1 = str;
    str = str + 1l;
    c = (signed int)*tmp_post_1;
    if(c == 0)
      break;

    hash = (hash << 5) + hash ^ (unsigned int)c;
  }
  while((_Bool)1);
  return hash % (unsigned int)1997;
}

// hash_syscall
// file syscall.c line 684
static inline unsigned long int hash_syscall(const signed int pid, const signed int syscall)
{
  unsigned long int h = (unsigned long int)((pid ^ pid << 3 ^ syscall) % 1997);
  return h;
}

// hash_syscall_context
// file syscall.c line 726
static inline unsigned long int hash_syscall_context(const signed int pid)
{
  unsigned long int h = (unsigned long int)pid;
  return h % (unsigned long int)1997;
}

// health_check_exit
// file health-check.h line 39
extern void health_check_exit(const signed int status)
{
  event_stop();
  exit(status);
}

// health_check_out_of_memory
// file health-check.h line 40
extern void health_check_out_of_memory(const char *msg)
{
  fprintf(stderr, "Out of memory: %s.\n", msg);
}

// is_executable
// file health-check.c line 263
static inline signed int is_executable(const char *path)
{
  struct stat buf;
  signed int return_value_stat_1;
  return_value_stat_1=stat_link1(path, &buf);
  return (signed int)((return_value_stat_1 == 0 ? ((buf.st_mode & (unsigned int)(0100 | 0100 >> 3 | (0100 >> 3) >> 3)) != 0u ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? ((buf.st_mode & (unsigned int)0170000) == (unsigned int)0100000 ? (_Bool)1 : (_Bool)0) : (_Bool)0);
}

// j_obj_array_add
// file json.h line 39
static inline void j_obj_array_add(struct json_object *array, struct json_object *obj)
{
  json_object_array_add(array, obj);
}

// j_obj_array_add_link1
// file json.h line 39
static inline void j_obj_array_add_link1(struct json_object *array_link1, struct json_object *obj_link1)
{
  json_object_array_add(array_link1, obj_link1);
}

// j_obj_array_add_link2
// file json.h line 39
static inline void j_obj_array_add_link2(struct json_object *array_link2, struct json_object *obj_link2)
{
  json_object_array_add(array_link2, obj_link2);
}

// j_obj_array_add_link3
// file json.h line 39
static inline void j_obj_array_add_link3(struct json_object *array_link3, struct json_object *obj_link3)
{
  json_object_array_add(array_link3, obj_link3);
}

// j_obj_array_add_link4
// file json.h line 39
static inline void j_obj_array_add_link4(struct json_object *array_link4, struct json_object *obj_link4)
{
  json_object_array_add(array_link4, obj_link4);
}

// j_obj_array_add_link5
// file json.h line 39
static inline void j_obj_array_add_link5(struct json_object *array_link5, struct json_object *obj_link5)
{
  json_object_array_add(array_link5, obj_link5);
}

// j_obj_array_add_link6
// file json.h line 39
static inline void j_obj_array_add_link6(struct json_object *array_link6, struct json_object *obj_link6)
{
  json_object_array_add(array_link6, obj_link6);
}

// j_obj_is_null
// file json.c line 34
static inline void j_obj_is_null(struct json_object *obj, const char *msg)
{
  if(obj == ((struct json_object *)NULL))
    health_check_out_of_memory(msg);

}

// j_obj_new_array
// file json.h line 27
extern struct json_object * j_obj_new_array(void)
{
  struct json_object *obj;
  obj=json_object_new_array();
  j_obj_is_null(obj, "cannot allocate JSON array");
  return obj;
}

// j_obj_new_double
// file json.h line 31
extern struct json_object * j_obj_new_double(const double d)
{
  struct json_object *obj;
  obj=json_object_new_double(d);
  j_obj_is_null(obj, "cannot allocate JSON double");
  return obj;
}

// j_obj_new_double_add
// file json.h line 54
static inline void j_obj_new_double_add(struct json_object *parent, const char *label, const double d)
{
  struct json_object *return_value_j_obj_new_double_1;
  return_value_j_obj_new_double_1=j_obj_new_double(d);
  j_obj_obj_add(parent, label, return_value_j_obj_new_double_1);
}

// j_obj_new_double_add_link1
// file json.h line 54
static inline void j_obj_new_double_add_link1(struct json_object *parent_link1, const char *label_link1, const double d_link1)
{
  struct json_object *return_value_j_obj_new_double_1_link1;
  return_value_j_obj_new_double_1_link1=j_obj_new_double(d_link1);
  j_obj_obj_add_link1(parent_link1, label_link1, return_value_j_obj_new_double_1_link1);
}

// j_obj_new_double_add_link2
// file json.h line 54
static inline void j_obj_new_double_add_link2(struct json_object *parent_link2, const char *label_link2, const double d_link2)
{
  struct json_object *return_value_j_obj_new_double_1_link2;
  return_value_j_obj_new_double_1_link2=j_obj_new_double(d_link2);
  j_obj_obj_add_link2(parent_link2, label_link2, return_value_j_obj_new_double_1_link2);
}

// j_obj_new_double_add_link3
// file json.h line 54
static inline void j_obj_new_double_add_link3(struct json_object *parent_link3, const char *label_link3, const double d_link3)
{
  struct json_object *return_value_j_obj_new_double_1_link3;
  return_value_j_obj_new_double_1_link3=j_obj_new_double(d_link3);
  j_obj_obj_add_link3(parent_link3, label_link3, return_value_j_obj_new_double_1_link3);
}

// j_obj_new_double_add_link4
// file json.h line 54
static inline void j_obj_new_double_add_link4(struct json_object *parent_link4, const char *label_link4, const double d_link4)
{
  struct json_object *return_value_j_obj_new_double_1_link4;
  return_value_j_obj_new_double_1_link4=j_obj_new_double(d_link4);
  j_obj_obj_add_link4(parent_link4, label_link4, return_value_j_obj_new_double_1_link4);
}

// j_obj_new_double_add_link5
// file json.h line 54
static inline void j_obj_new_double_add_link5(struct json_object *parent_link5, const char *label_link5, const double d_link5)
{
  struct json_object *return_value_j_obj_new_double_1_link5;
  return_value_j_obj_new_double_1_link5=j_obj_new_double(d_link5);
  j_obj_obj_add_link5(parent_link5, label_link5, return_value_j_obj_new_double_1_link5);
}

// j_obj_new_double_add_link6
// file json.h line 54
static inline void j_obj_new_double_add_link6(struct json_object *parent_link6, const char *label_link6, const double d_link6)
{
  struct json_object *return_value_j_obj_new_double_1_link6;
  return_value_j_obj_new_double_1_link6=j_obj_new_double(d_link6);
  j_obj_obj_add_link6(parent_link6, label_link6, return_value_j_obj_new_double_1_link6);
}

// j_obj_new_int32
// file json.h line 29
extern struct json_object * j_obj_new_int32(const signed int i)
{
  struct json_object *obj;
  obj=json_object_new_int(i);
  j_obj_is_null(obj, "cannot allocate JSON integer");
  return obj;
}

// j_obj_new_int32_add
// file json.h line 44
static inline void j_obj_new_int32_add(struct json_object *parent, const char *label, const signed int i)
{
  struct json_object *return_value_j_obj_new_int32_1;
  return_value_j_obj_new_int32_1=j_obj_new_int32(i);
  j_obj_obj_add(parent, label, return_value_j_obj_new_int32_1);
}

// j_obj_new_int32_add_link1
// file json.h line 44
static inline void j_obj_new_int32_add_link1(struct json_object *parent_link1, const char *label_link1, const signed int i_link1)
{
  struct json_object *return_value_j_obj_new_int32_1_link1;
  return_value_j_obj_new_int32_1_link1=j_obj_new_int32(i_link1);
  j_obj_obj_add_link1(parent_link1, label_link1, return_value_j_obj_new_int32_1_link1);
}

// j_obj_new_int32_add_link2
// file json.h line 44
static inline void j_obj_new_int32_add_link2(struct json_object *parent_link2, const char *label_link2, const signed int i_link2)
{
  struct json_object *return_value_j_obj_new_int32_1_link2;
  return_value_j_obj_new_int32_1_link2=j_obj_new_int32(i_link2);
  j_obj_obj_add_link2(parent_link2, label_link2, return_value_j_obj_new_int32_1_link2);
}

// j_obj_new_int32_add_link3
// file json.h line 44
static inline void j_obj_new_int32_add_link3(struct json_object *parent_link3, const char *label_link3, const signed int i_link3)
{
  struct json_object *return_value_j_obj_new_int32_1_link3;
  return_value_j_obj_new_int32_1_link3=j_obj_new_int32(i_link3);
  j_obj_obj_add_link3(parent_link3, label_link3, return_value_j_obj_new_int32_1_link3);
}

// j_obj_new_int32_add_link4
// file json.h line 44
static inline void j_obj_new_int32_add_link4(struct json_object *parent_link4, const char *label_link4, const signed int i_link4)
{
  struct json_object *return_value_j_obj_new_int32_1_link4;
  return_value_j_obj_new_int32_1_link4=j_obj_new_int32(i_link4);
  j_obj_obj_add_link4(parent_link4, label_link4, return_value_j_obj_new_int32_1_link4);
}

// j_obj_new_int32_add_link5
// file json.h line 44
static inline void j_obj_new_int32_add_link5(struct json_object *parent_link5, const char *label_link5, const signed int i_link5)
{
  struct json_object *return_value_j_obj_new_int32_1_link5;
  return_value_j_obj_new_int32_1_link5=j_obj_new_int32(i_link5);
  j_obj_obj_add_link5(parent_link5, label_link5, return_value_j_obj_new_int32_1_link5);
}

// j_obj_new_int32_add_link6
// file json.h line 44
static inline void j_obj_new_int32_add_link6(struct json_object *parent_link6, const char *label_link6, const signed int i_link6)
{
  struct json_object *return_value_j_obj_new_int32_1_link6;
  return_value_j_obj_new_int32_1_link6=j_obj_new_int32(i_link6);
  j_obj_obj_add_link6(parent_link6, label_link6, return_value_j_obj_new_int32_1_link6);
}

// j_obj_new_int64
// file json.h line 30
extern struct json_object * j_obj_new_int64(const signed long int i)
{
  struct json_object *obj = (struct json_object *)(void *)0;
  obj=json_object_new_int64(i);
  j_obj_is_null(obj, "cannot allocate JSON integer");
  return obj;
}

// j_obj_new_int64_add
// file json.h line 49
static inline void j_obj_new_int64_add(struct json_object *parent, const char *label, const signed long int i)
{
  struct json_object *return_value_j_obj_new_int64_1;
  return_value_j_obj_new_int64_1=j_obj_new_int64(i);
  j_obj_obj_add(parent, label, return_value_j_obj_new_int64_1);
}

// j_obj_new_int64_add_link1
// file json.h line 49
static inline void j_obj_new_int64_add_link1(struct json_object *parent_link1, const char *label_link1, const signed long int i_link1)
{
  struct json_object *return_value_j_obj_new_int64_1_link1;
  return_value_j_obj_new_int64_1_link1=j_obj_new_int64(i_link1);
  j_obj_obj_add_link1(parent_link1, label_link1, return_value_j_obj_new_int64_1_link1);
}

// j_obj_new_int64_add_link2
// file json.h line 49
static inline void j_obj_new_int64_add_link2(struct json_object *parent_link2, const char *label_link2, const signed long int i_link2)
{
  struct json_object *return_value_j_obj_new_int64_1_link2;
  return_value_j_obj_new_int64_1_link2=j_obj_new_int64(i_link2);
  j_obj_obj_add_link2(parent_link2, label_link2, return_value_j_obj_new_int64_1_link2);
}

// j_obj_new_int64_add_link3
// file json.h line 49
static inline void j_obj_new_int64_add_link3(struct json_object *parent_link3, const char *label_link3, const signed long int i_link3)
{
  struct json_object *return_value_j_obj_new_int64_1_link3;
  return_value_j_obj_new_int64_1_link3=j_obj_new_int64(i_link3);
  j_obj_obj_add_link3(parent_link3, label_link3, return_value_j_obj_new_int64_1_link3);
}

// j_obj_new_int64_add_link4
// file json.h line 49
static inline void j_obj_new_int64_add_link4(struct json_object *parent_link4, const char *label_link4, const signed long int i_link4)
{
  struct json_object *return_value_j_obj_new_int64_1_link4;
  return_value_j_obj_new_int64_1_link4=j_obj_new_int64(i_link4);
  j_obj_obj_add_link4(parent_link4, label_link4, return_value_j_obj_new_int64_1_link4);
}

// j_obj_new_int64_add_link5
// file json.h line 49
static inline void j_obj_new_int64_add_link5(struct json_object *parent_link5, const char *label_link5, const signed long int i_link5)
{
  struct json_object *return_value_j_obj_new_int64_1_link5;
  return_value_j_obj_new_int64_1_link5=j_obj_new_int64(i_link5);
  j_obj_obj_add_link5(parent_link5, label_link5, return_value_j_obj_new_int64_1_link5);
}

// j_obj_new_int64_add_link6
// file json.h line 49
static inline void j_obj_new_int64_add_link6(struct json_object *parent_link6, const char *label_link6, const signed long int i_link6)
{
  struct json_object *return_value_j_obj_new_int64_1_link6;
  return_value_j_obj_new_int64_1_link6=j_obj_new_int64(i_link6);
  j_obj_obj_add_link6(parent_link6, label_link6, return_value_j_obj_new_int64_1_link6);
}

// j_obj_new_obj
// file json.h line 28
extern struct json_object * j_obj_new_obj(void)
{
  struct json_object *obj;
  obj=json_object_new_object();
  j_obj_is_null(obj, "cannot allocate JSON object");
  return obj;
}

// j_obj_new_string
// file json.h line 32
extern struct json_object * j_obj_new_string(const char *str)
{
  struct json_object *obj;
  obj=json_object_new_string(str);
  j_obj_is_null(obj, "cannot allocate JSON string");
  return obj;
}

// j_obj_new_string_add
// file json.h line 59
static inline void j_obj_new_string_add(struct json_object *parent, const char *label, const char *str)
{
  struct json_object *return_value_j_obj_new_string_1;
  return_value_j_obj_new_string_1=j_obj_new_string(str);
  j_obj_obj_add(parent, label, return_value_j_obj_new_string_1);
}

// j_obj_new_string_add_link1
// file json.h line 59
static inline void j_obj_new_string_add_link1(struct json_object *parent_link1, const char *label_link1, const char *str_link1)
{
  struct json_object *return_value_j_obj_new_string_1_link1;
  return_value_j_obj_new_string_1_link1=j_obj_new_string(str_link1);
  j_obj_obj_add_link1(parent_link1, label_link1, return_value_j_obj_new_string_1_link1);
}

// j_obj_new_string_add_link2
// file json.h line 59
static inline void j_obj_new_string_add_link2(struct json_object *parent_link2, const char *label_link2, const char *str_link2)
{
  struct json_object *return_value_j_obj_new_string_1_link2;
  return_value_j_obj_new_string_1_link2=j_obj_new_string(str_link2);
  j_obj_obj_add_link2(parent_link2, label_link2, return_value_j_obj_new_string_1_link2);
}

// j_obj_new_string_add_link3
// file json.h line 59
static inline void j_obj_new_string_add_link3(struct json_object *parent_link3, const char *label_link3, const char *str_link3)
{
  struct json_object *return_value_j_obj_new_string_1_link3;
  return_value_j_obj_new_string_1_link3=j_obj_new_string(str_link3);
  j_obj_obj_add_link3(parent_link3, label_link3, return_value_j_obj_new_string_1_link3);
}

// j_obj_new_string_add_link4
// file json.h line 59
static inline void j_obj_new_string_add_link4(struct json_object *parent_link4, const char *label_link4, const char *str_link4)
{
  struct json_object *return_value_j_obj_new_string_1_link4;
  return_value_j_obj_new_string_1_link4=j_obj_new_string(str_link4);
  j_obj_obj_add_link4(parent_link4, label_link4, return_value_j_obj_new_string_1_link4);
}

// j_obj_new_string_add_link5
// file json.h line 59
static inline void j_obj_new_string_add_link5(struct json_object *parent_link5, const char *label_link5, const char *str_link5)
{
  struct json_object *return_value_j_obj_new_string_1_link5;
  return_value_j_obj_new_string_1_link5=j_obj_new_string(str_link5);
  j_obj_obj_add_link5(parent_link5, label_link5, return_value_j_obj_new_string_1_link5);
}

// j_obj_new_string_add_link6
// file json.h line 59
static inline void j_obj_new_string_add_link6(struct json_object *parent_link6, const char *label_link6, const char *str_link6)
{
  struct json_object *return_value_j_obj_new_string_1_link6;
  return_value_j_obj_new_string_1_link6=j_obj_new_string(str_link6);
  j_obj_obj_add_link6(parent_link6, label_link6, return_value_j_obj_new_string_1_link6);
}

// j_obj_obj_add
// file json.h line 34
static inline void j_obj_obj_add(struct json_object *parent, const char *label, struct json_object *obj)
{
  json_object_object_add(parent, label, obj);
}

// j_obj_obj_add_link1
// file json.h line 34
static inline void j_obj_obj_add_link1(struct json_object *parent_link1, const char *label_link1, struct json_object *obj_link1)
{
  json_object_object_add(parent_link1, label_link1, obj_link1);
}

// j_obj_obj_add_link2
// file json.h line 34
static inline void j_obj_obj_add_link2(struct json_object *parent_link2, const char *label_link2, struct json_object *obj_link2)
{
  json_object_object_add(parent_link2, label_link2, obj_link2);
}

// j_obj_obj_add_link3
// file json.h line 34
static inline void j_obj_obj_add_link3(struct json_object *parent_link3, const char *label_link3, struct json_object *obj_link3)
{
  json_object_object_add(parent_link3, label_link3, obj_link3);
}

// j_obj_obj_add_link4
// file json.h line 34
static inline void j_obj_obj_add_link4(struct json_object *parent_link4, const char *label_link4, struct json_object *obj_link4)
{
  json_object_object_add(parent_link4, label_link4, obj_link4);
}

// j_obj_obj_add_link5
// file json.h line 34
static inline void j_obj_obj_add_link5(struct json_object *parent_link5, const char *label_link5, struct json_object *obj_link5)
{
  json_object_object_add(parent_link5, label_link5, obj_link5);
}

// j_obj_obj_add_link6
// file json.h line 34
static inline void j_obj_obj_add_link6(struct json_object *parent_link6, const char *label_link6, struct json_object *obj_link6)
{
  json_object_object_add(parent_link6, label_link6, obj_link6);
}

// json_write
// file health-check.c line 167
static signed int json_write(struct json_object *obj, const char *filename)
{
  const char *str;
  struct _IO_FILE *fp;
  if(obj == ((struct json_object *)NULL))
  {
    fprintf(stderr, "Cannot create JSON log, no JSON data.\n");
    return -1;
  }

  else
  {
    str=json_object_to_json_string_ext(obj, 1 << 1);
    if(str == ((const char *)NULL))
    {
      fprintf(stderr, "Cannot turn JSON object to text for JSON output.\n");
      return -1;
    }

    else
    {
      fp=fopen(filename, "w");
      if(fp == ((struct _IO_FILE *)NULL))
      {
        fprintf(stderr, "Cannot create JSON log file %s.\n", filename);
        return -1;
      }

      else
      {
        fprintf(fp, "%s", str);
        fclose(fp);
        json_object_put(obj);
        return 0;
      }
    }
  }
}

// list_add_ordered
// file list.c line 66
extern struct link * list_add_ordered(struct anonymous_3 *list, void *new_data, signed int (* const compare)(const void *, const void *))
{
  struct link *link;
  struct link **l;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct link) /*16ul*/ );
  link = (struct link *)return_value_calloc_1;
  if(link == ((struct link *)NULL))
    return (struct link *)(void *)0;

  else
  {
    link->data = new_data;
    l = &list->head;
    if(!(*l == ((struct link *)NULL)))
    {
      void *data = (void *)(*l)->data;
      signed int return_value;
      return_value=compare(data, new_data);
      if(return_value >= 0)
        link->next = *l;

      else
        l = &(*l)->next;
    }

    if(link->next == ((struct link *)NULL))
      list->tail = link;

    *l = link;
    list->length = list->length + 1ul;
    return link;
  }
}

// list_append
// file list.c line 41
extern struct link * list_append(struct anonymous_3 *list, void *data)
{
  struct link *link;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct link) /*16ul*/ );
  link = (struct link *)return_value_calloc_1;
  if(link == ((struct link *)NULL))
  {
    fprintf(stderr, "Cannot allocate list link.\n");
    return (struct link *)(void *)0;
  }

  else
  {
    link->data = data;
    if(list->head == ((struct link *)NULL))
      list->head = link;

    else
      list->tail->next = link;
    list->tail = link;
    list->length = list->length + 1ul;
    return link;
  }
}

// list_free
// file list.c line 98
extern void list_free(struct anonymous_3 *list, void (* const freefunc)(void *))
{
  struct link *link;
  struct link *next;
  if(!(list == ((struct anonymous_3 *)NULL)))
  {
    link = list->head;
    for( ; !(link == ((struct link *)NULL)); link = next)
    {
      next = link->next;
      if(!(link->data == NULL))
      {
        if(!(freefunc == ((void (*)(void *))NULL)))
          freefunc(link->data);

      }

      free((void *)link);
    }
  }

}

// list_init
// file list.c line 30
extern void list_init(struct anonymous_3 *list)
{
  list->head = (struct link *)(void *)0;
  list->tail = (struct link *)(void *)0;
  list->length = (unsigned long int)0;
}

// main
// file health-check.c line 342
signed int main(signed int argc, char **argv)
{
  double actual_duration;
  double opt_duration_secs = 60.0;
  struct timeval tv_start;
  struct timeval tv_end;
  struct timeval tv_now;
  struct timeval duration;
  signed int ret;
  signed int rc = 0;
  signed int fan_fd = 0;
  struct anonymous_3 pids;
  struct link *l;
  void *buffer = (void *)0;
  char *opt_username = (char *)(void *)0;
  char *opt_json_file = (char *)(void *)0;
  struct json_object *json_obj = (struct json_object *)(void *)0;
  struct json_object *json_tests = (struct json_object *)(void *)0;
  struct sigaction new_action;
  struct sigaction old_action;
  list_init(&pids);
  proc_cache_init();
  signed int return_value_proc_cache_get_1;
  return_value_proc_cache_get_1=proc_cache_get();
  signed int return_value_proc_cache_get_pthreads_2;
  signed int return_value_parse_pid_list_3;
  signed int *return_value___errno_location_4;
  signed int *return_value___errno_location_5;
  unsigned int return_value_getuid_6;
  _Bool tmp_if_expr_8;
  unsigned int return_value_geteuid_7;
  signed int return_value_pid_list_get_children_13;
  signed int return_value_net_connection_pids_14;
  signed int return_value_event_get_all_pids_15;
  signed int return_value_cpustat_get_all_pids_16;
  signed int return_value_mem_get_all_pids_17;
  signed int return_value_ctxt_switch_get_all_pids_18;
  double return_value_timeval_to_double_19;
  signed int return_value_event_get_all_pids_24;
  signed int return_value_cpustat_get_all_pids_25;
  signed int return_value_mem_get_all_pids_26;
  signed int return_value_ctxt_switch_get_all_pids_27;
  signed int return_value_syscall_stop_28;
  signed int return_value_mem_dump_diff_29;
  if(return_value_proc_cache_get_1 >= 0)
  {
    return_value_proc_cache_get_pthreads_2=proc_cache_get_pthreads();
    if(return_value_proc_cache_get_pthreads_2 >= 0)
    {
      sigaction(17, (struct sigaction *)(void *)0, &old_action);
      if(!(old_action.__sigaction_handler.sa_handler == ((void (*)(signed int))NULL)))
      {
        new_action.__sigaction_handler.sa_handler = (void (*)(signed int))0;
        sigemptyset(&new_action.sa_mask);
        new_action.sa_flags = 0;
        sigaction(17, &new_action, (struct sigaction *)(void *)0);
      }

      do
      {
        signed int c;
        c=getopt(argc, argv, "+bcd:fhp:m:o:ru:vwW");
        if(c == -1)
          break;

        switch(c)
        {
          case 98:
          {
            opt_flags = opt_flags | 0x00000002;
            break;
          }
          case 99:
          {
            opt_flags = opt_flags | 0x00000001;
            break;
          }
          case 102:
          {
            opt_flags = opt_flags | 0x00000040;
            break;
          }
          case 104:
          {
            show_usage();
            break;
          }
          case 112:
          {
            return_value_parse_pid_list_3=parse_pid_list(optarg, &pids);
            if(!(return_value_parse_pid_list_3 >= 0))
              health_check_exit(1);

            break;
          }
          case 100:
          {
            opt_duration_secs=atof(optarg);
            opt_flags = opt_flags | 0x00000080;
            break;
          }
          case 109:
          {
            return_value___errno_location_4=__errno_location();
            *return_value___errno_location_4 = 0;
            opt_max_syscalls=strtol(optarg, (char ** restrict )(void *)0, 10);
            return_value___errno_location_5=__errno_location();
            if(!(*return_value___errno_location_5 == 0))
            {
              fprintf(stderr, "Invalid maximum number of system calls specified.\n");
              health_check_exit(1);
            }

            break;
          }
          case 111:
          {
            opt_json_file = optarg;
            break;
          }
          case 114:
          {
            opt_flags = opt_flags | 0x00000004;
            break;
          }
          case 117:
          {
            opt_username = optarg;
            break;
          }
          case 118:
          {
            opt_flags = opt_flags | 0x00000020;
            break;
          }
          case 119:
          {
            opt_flags = opt_flags | 0x00000008;
            break;
          }
          case 87:
          {
            opt_flags = opt_flags | 0x00000010;
            break;
          }
          default:
            show_usage();
        }
      }
      while((_Bool)1);
      if((34 & opt_flags) == 34)
      {
        fprintf(stderr, "Cannot have verbose -v and brief -b flags together.\n");
        health_check_exit(1);
      }

      return_value_getuid_6=getuid();
      if(!(return_value_getuid_6 == 0u))
        tmp_if_expr_8 = (_Bool)1;

      else
      {
        return_value_geteuid_7=geteuid();
        tmp_if_expr_8 = return_value_geteuid_7 != (unsigned int)0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_8)
      {
        fprintf(stderr, "%s requires root privileges to write to %s\n", (const void *)"health-check", (const void *)"/proc/timer_stats");
        health_check_exit(1);
      }

      if(!(optind >= argc))
      {
        const char *path;
        if(!(pids.head == ((struct link *)NULL)))
        {
          fprintf(stderr, "Cannot heath-check a program and provide pids to trace at same time\n");
          health_check_exit(1);
        }

        argv = argv + (signed long int)optind;
        path=find_executable(argv[(signed long int)0]);
        if(!(path == ((const char *)NULL)))
        {
          signed int pid;
          struct proc_info *p;
          if((0x00000080 & opt_flags) == 0)
            opt_duration_secs = 0.0;

          pid=exec_executable(opt_username, path, argv);
          p=proc_cache_add(pid, 0, (const _Bool)0);
          if(p == ((struct proc_info *)NULL))
          {
            fprintf(stderr, "Cannot find process with PID %i\n", pid);
            goto out;
          }

          free((void *)p->cmdline);
          char *return_value_basename_9;
          return_value_basename_9=basename(path);
          char *return_value___strdup_10;
          return_value___strdup_10=__strdup(return_value_basename_9);
          p->cmdline = return_value___strdup_10;
          if(p->cmdline == ((char *)NULL))
          {
            health_check_out_of_memory("cannot allocate process cmdline");
            goto out;
          }

          signed int return_value_proc_pids_add_proc_11;
          return_value_proc_pids_add_proc_11=proc_pids_add_proc(&pids, p);
          if(!(return_value_proc_pids_add_proc_11 >= 0))
            goto out;

        }

        else
          health_check_exit(1);
      }

      if(pids.head == ((struct link *)NULL))
      {
        fprintf(stderr, "Must provide one or more valid process IDs or name\n");
        health_check_exit(1);
      }

      l = pids.head;
      for( ; !(l == ((struct link *)NULL)); l = l->next)
      {
        struct proc_info *main__1__7__1__p = (struct proc_info *)l->data;
        _Bool return_value_pid_exists_12;
        return_value_pid_exists_12=pid_exists(main__1__7__1__p->pid);
        if(return_value_pid_exists_12 == (_Bool)0)
        {
          fprintf(stderr, "Cannot check process %i, no such process pid\n", main__1__7__1__p->pid);
          health_check_exit(1);
        }

      }
      if(!((0x00000001 & opt_flags) == 0))
      {
        return_value_pid_list_get_children_13=pid_list_get_children(&pids);
        if(!(return_value_pid_list_get_children_13 >= 0))
          goto out;

      }

      if(opt_duration_secs < 0.0)
      {
        fprintf(stderr, "Duration must positive.\n");
        health_check_exit(1);
      }

      net_connection_init();
      return_value_net_connection_pids_14=net_connection_pids(&pids);
      if(return_value_net_connection_pids_14 >= 0)
      {
        if(!(opt_json_file == ((char *)NULL)))
        {
          json_obj=json_object_new_object();
          if(json_obj == ((struct json_object *)NULL))
          {

            goto out;
          }

          json_tests=json_object_new_object();
          if(json_tests == ((struct json_object *)NULL))
          {
            health_check_out_of_memory("cannot allocate JSON array");
            goto out;
          }

          json_object_object_add(json_obj, "health-check", json_tests);
        }

        fnotify_init();
        fan_fd=fnotify_event_init();
        if(fan_fd >= 0)
        {
          ret=posix_memalign(&buffer, (unsigned long int)4096, (unsigned long int)4096);
          if(buffer == NULL || !(ret == 0))
            health_check_out_of_memory("cannot allocate 4K aligned buffer");

          else
          {
            new_action.__sigaction_handler.sa_handler = handle_sig;
            sigemptyset(&new_action.sa_mask);
            new_action.sa_flags = 0;
            sigaction(2, &new_action, &old_action);
            sigaction(10, &new_action, &old_action);
            syscall_init();
            syscall_trace_proc(&pids);
            mem_init();
            event_init();
            cpustat_init();
            ctxt_switch_init();
            duration.tv_sec = (signed long int)opt_duration_secs;
            duration.tv_usec = (signed long int)(opt_duration_secs * 1000000.0) - duration.tv_sec * (signed long int)1000000;
            gettimeofday(&tv_start, (struct timezone *)(void *)0);
            tv_end=timeval_add(&tv_start, &duration);
            return_value_event_get_all_pids_15=event_get_all_pids(&pids, (enum anonymous_9)PROC_START);
            if(return_value_event_get_all_pids_15 >= 0)
            {
              return_value_cpustat_get_all_pids_16=cpustat_get_all_pids(&pids, (enum anonymous_9)PROC_START);
              if(return_value_cpustat_get_all_pids_16 >= 0)
              {
                return_value_mem_get_all_pids_17=mem_get_all_pids(&pids, (const enum anonymous_9)PROC_START);
                if(return_value_mem_get_all_pids_17 >= 0)
                {
                  return_value_ctxt_switch_get_all_pids_18=ctxt_switch_get_all_pids(&pids, (enum anonymous_9)PROC_START);
                  if(return_value_ctxt_switch_get_all_pids_18 >= 0)
                  {
                    gettimeofday(&tv_now, (struct timezone *)(void *)0);
                    duration=timeval_sub(&tv_end, &tv_now);
                    while(procs_traced >= 1)
                    {
                      if(keep_running == (_Bool)0)
                        break;

                      if(!IEEE_FLOAT_EQUAL(opt_duration_secs, 0.0))
                      {
                        return_value_timeval_to_double_19=timeval_to_double(&duration);
                        if(!(return_value_timeval_to_double_19 > 0.0))
                          break;

                      }

                      struct timeval *duration_ptr = IEEE_FLOAT_EQUAL(opt_duration_secs, 0.0) ? (struct timeval *)(void *)0 : &duration;
                      struct anonymous_12 rfds;
                      do
                      {
                        signed int __d0;
                        signed int __d1;
                        asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous_12) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&rfds)->fds_bits[(signed long int)0]) : "memory");
                      }
                      while((_Bool)0);
                      (&rfds)->fds_bits[(signed long int)(fan_fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&rfds)->fds_bits[(signed long int)(fan_fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << fan_fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
                      ret=select(fan_fd + 1, &rfds, (struct anonymous_12 *)(void *)0, (struct anonymous_12 *)(void *)0, duration_ptr);
                      if(!(ret >= 0))
                      {
                        signed int *return_value___errno_location_22;
                        return_value___errno_location_22=__errno_location();
                        if(!(*return_value___errno_location_22 == 4))
                        {
                          signed int *return_value___errno_location_20;
                          return_value___errno_location_20=__errno_location();
                          char *return_value_strerror_21;
                          return_value_strerror_21=strerror(*return_value___errno_location_20);
                          fprintf(stderr, "Select failed: %s\n", return_value_strerror_21);
                          gettimeofday(&tv_now, (struct timezone *)(void *)0);
                          goto out;
                        }

                      }

                      else
                        if(ret >= 1)
                        {
                          if(!((rfds.fds_bits[(signed long int)(fan_fd / 8)] & (signed long int)(1UL << fan_fd % 8)) == 0l))
                          {
                            signed long int len;
                            len=read(fan_fd, (void *)buffer, (unsigned long int)4096);
                            if(len >= 1l)
                            {
                              struct fanotify_event_metadata *metadata = (struct fanotify_event_metadata *)buffer;
                              while(len >= (signed long int)sizeof(struct fanotify_event_metadata) /*24l*/ )
                              {
                                if(!((signed long int)metadata->event_len >= (signed long int)sizeof(struct fanotify_event_metadata) /*24l*/ ))
                                  break;

                                if(!(len >= (signed long int)metadata->event_len))
                                  break;

                                signed int return_value_fnotify_event_add_23;
                                return_value_fnotify_event_add_23=fnotify_event_add(&pids, metadata);
                                if(!(return_value_fnotify_event_add_23 >= 0))
                                  goto out;

                                len = len - (signed long int)metadata->event_len;
                                metadata = (struct fanotify_event_metadata *)((char *)metadata + (signed long int)metadata->event_len);
                              }
                            }

                          }

                        }

                      gettimeofday(&tv_now, (struct timezone *)(void *)0);
                      duration=timeval_sub(&tv_end, &tv_now);
                    }
                    keep_running = (volatile _Bool)0;
                    duration=timeval_sub(&tv_now, &tv_start);
                    actual_duration=timeval_to_double(&duration);
                    return_value_event_get_all_pids_24=event_get_all_pids(&pids, (enum anonymous_9)PROC_FINISH);
                    if(return_value_event_get_all_pids_24 >= 0)
                    {
                      return_value_cpustat_get_all_pids_25=cpustat_get_all_pids(&pids, (enum anonymous_9)PROC_FINISH);
                      if(return_value_cpustat_get_all_pids_25 >= 0)
                      {
                        return_value_mem_get_all_pids_26=mem_get_all_pids(&pids, (const enum anonymous_9)PROC_FINISH);
                        if(return_value_mem_get_all_pids_26 >= 0)
                        {
                          return_value_ctxt_switch_get_all_pids_27=ctxt_switch_get_all_pids(&pids, (enum anonymous_9)PROC_FINISH);
                          if(return_value_ctxt_switch_get_all_pids_27 >= 0)
                          {
                            event_stop();
                            return_value_syscall_stop_28=syscall_stop();
                            if(return_value_syscall_stop_28 >= 0)
                            {
                              sigaction(2, &old_action, (struct sigaction *)(void *)0);
                              if(!(caught_sigint == (_Bool)0))
                                putchar(10);

                              cpustat_dump_diff(json_tests, actual_duration);
                              pagefault_dump_diff(json_tests, actual_duration);
                              event_dump_diff(json_tests, actual_duration);
                              ctxt_switch_dump_diff(json_tests, actual_duration);
                              fnotify_dump_events(json_tests, actual_duration, &pids);
                              syscall_dump_hashtable(json_tests, actual_duration);
                              syscall_dump_pollers(json_tests, actual_duration);
                              syscall_dump_sync(json_tests, actual_duration);
                              syscall_dump_inotify(json_tests, actual_duration);
                              syscall_dump_execve(json_tests, actual_duration);
                              return_value_mem_dump_diff_29=mem_dump_diff(json_tests, actual_duration);
                              if(return_value_mem_dump_diff_29 >= 0)
                              {
                                mem_dump_brk(json_tests, actual_duration);
                                mem_dump_mmap(json_tests, actual_duration);
                                net_connection_dump(json_tests, actual_duration);
                                if(!((0x00000008 & opt_flags) == 0))
                                  fnotify_dump_wakelocks(json_tests, actual_duration);

                                if(!((0x00000010 & opt_flags) == 0))
                                  syscall_dump_wakelocks(json_tests, actual_duration, &pids);

                                if(actual_duration < 5.0)
                                  printf("Analysis ran for just %.4f seconds, so rate calculations may be misleading\n", actual_duration);

                                if(!(json_obj == ((struct json_object *)NULL)))
                                  json_write(json_obj, opt_json_file);

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

  }


out:
  ;
  keep_running = (volatile _Bool)0;
  mem_cleanup();
  net_connection_cleanup();
  syscall_cleanup();
  event_cleanup();
  cpustat_cleanup();
  ctxt_switch_cleanup();
  fnotify_cleanup();
  free(buffer);
  proc_cache_cleanup();
  list_free(&pids, (void (*)(void *))(void *)0);
  health_check_exit(rc);
}

// mem_brk_account
// file mem.h line 67
extern signed int mem_brk_account(const signed int pid, const void *addr)
{
  struct link *l;
  struct anonymous_2 *info = (struct anonymous_2 *)(void *)0;
  if(addr == NULL)
    return 0;

  else
  {
    l = mem_brk_info.head;
    for( ; !(l == ((struct link *)NULL)); l = l->next)
    {
      info = (struct anonymous_2 *)l->data;
      if(info->pid == pid)
      {
        info->brk_current = addr;
        info->brk_count = info->brk_count + 1ul;
        return 0;
      }

    }
    void *return_value_calloc_1;
    return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct anonymous_2) /*32ul*/ );
    info = (struct anonymous_2 *)return_value_calloc_1;
    if(info == ((struct anonymous_2 *)NULL))
    {
      health_check_out_of_memory("allocating memory tracking brk() information");
      return -1;
    }

    else
    {
      info->pid = pid;
      info->brk_start = addr;
      info->brk_current = addr;
      info->brk_count = (unsigned long int)1;
      struct link *return_value_list_append_2;
      return_value_list_append_2=list_append(&mem_brk_info, (void *)info);
      if(return_value_list_append_2 == ((struct link *)NULL))
      {
        free((void *)info);
        return -1;
      }

      else
        return 0;
    }
  }
}

// mem_brk_cmp
// file mem.c line 277
static signed int mem_brk_cmp(const void *data1, const void *data2)
{
  struct anonymous_2 *m1 = (struct anonymous_2 *)data1;
  struct anonymous_2 *m2 = (struct anonymous_2 *)data2;
  signed long int p1 = (char *)m1->brk_current - (char *)m1->brk_start;
  signed long int p2 = (char *)m2->brk_current - (char *)m2->brk_start;
  return (signed int)(p2 - p1);
}

// mem_cleanup
// file mem.c line 816
extern void mem_cleanup(void)
{
  list_free(&mem_info_old, free);
  list_free(&mem_info_new, free);
  list_free(&mem_brk_info, free);
  list_free(&mem_mmap_info, free);
}

// mem_cmp
// file mem.c line 379
static signed int mem_cmp(const void *data1, const void *data2)
{
  struct mem_info_t *m1 = (struct mem_info_t *)data1;
  struct mem_info_t *m2 = (struct mem_info_t *)data2;
  return (signed int)(m2->grand_total - m1->grand_total);
}

// mem_delta
// file mem.c line 520
static struct mem_info_t * mem_delta(struct mem_info_t *mem_new, const struct anonymous_3 *mem_old_list)
{
  struct link *l;
  signed int i;
  struct mem_info_t *delta;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct mem_info_t) /*112ul*/ );
  delta = (struct mem_info_t *)return_value_calloc_1;
  if(delta == ((struct mem_info_t *)NULL))
  {
    health_check_out_of_memory("allocating memory delta tracking information");
    return (struct mem_info_t *)(void *)0;
  }

  else
  {
    memset((void *)delta, 0, sizeof(struct mem_info_t) /*112ul*/ );
    l = mem_old_list->head;
    for( ; !(l == ((struct link *)NULL)); l = l->next)
    {
      struct mem_info_t *mem_old = (struct mem_info_t *)l->data;
      if(mem_new->proc == mem_old->proc)
      {
        i = 0;
        for( ; !(i >= MEM_MAX); i = i + 1)
        {
          delta->proc = mem_new->proc;
          delta->size[(signed long int)i] = mem_new->size[(signed long int)i] - mem_old->size[(signed long int)i];
          delta->rss[(signed long int)i] = mem_new->rss[(signed long int)i] - mem_old->rss[(signed long int)i];
          delta->pss[(signed long int)i] = mem_new->pss[(signed long int)i] - mem_old->pss[(signed long int)i];
          delta->total[(signed long int)i] = mem_new->total[(signed long int)i] - mem_old->total[(signed long int)i];
        }
        return delta;
      }

    }
    memcpy((void *)delta, (const void *)mem_new, sizeof(struct mem_info_t) /*112ul*/ );
    return delta;
  }
}

// mem_dump_brk
// file mem.c line 292
extern void mem_dump_brk(struct json_object *j_tests, const double duration)
{
  struct anonymous_3 sorted;
  struct link *l;
  struct anonymous_2 *info;
  printf("Heap Change via brk():\n");
  list_init(&sorted);
  l = mem_brk_info.head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    info = (struct anonymous_2 *)l->data;
    struct link *return_value_list_add_ordered_1;
    return_value_list_add_ordered_1=list_add_ordered(&sorted, (void *)info, mem_brk_cmp);
    if(return_value_list_add_ordered_1 == ((struct link *)NULL))
      goto out;

  }
  char *tmp_if_expr_2;
  if(mem_brk_info.head == ((struct link *)NULL))
    printf(" None.\n\n");

  else
  {
    printf("  PID                        brk Count   Change (K)  Rate (K/Sec)\n");
    l = sorted.head;
    for( ; !(l == ((struct link *)NULL)); l = l->next)
    {
      info = (struct anonymous_2 *)l->data;
      struct proc_info *mem_dump_brk__1__3__1__1__p;
      mem_dump_brk__1__3__1__1__p=proc_cache_find_by_pid(info->pid);
      signed long int mem_dump_brk__1__3__1__1__delta = (char *)info->brk_current - (char *)info->brk_start;
      double rate = (double)mem_dump_brk__1__3__1__1__delta / duration;
      if(!(mem_dump_brk__1__3__1__1__p == ((struct proc_info *)NULL)))
        tmp_if_expr_2 = mem_dump_brk__1__3__1__1__p->cmdline;

      else
        tmp_if_expr_2 = "";
      const char *return_value_mem_loading_3;
      return_value_mem_loading_3=mem_loading(rate);
      printf(" %5d %-20.20s   %8lu %12td      %8.2f (%s)\n", info->pid, tmp_if_expr_2, info->brk_count, mem_dump_brk__1__3__1__1__delta / (signed long int)1024, rate / 1024.0, return_value_mem_loading_3);
    }
    printf("\n");
  }
  if(!(j_tests == ((struct json_object *)NULL)))
  {
    struct json_object *j_mem_test;
    struct json_object *j_mem_infos;
    struct json_object *j_mem_info;
    unsigned long int total_brk_count = (unsigned long int)0;
    unsigned long int total_delta = (unsigned long int)0;
    j_mem_test=j_obj_new_obj();
    if(!(j_mem_test == ((struct json_object *)NULL)))
    {
      j_obj_obj_add_link5(j_tests, "heap-usage-via-brk", j_mem_test);
      j_mem_infos=j_obj_new_array();
      if(!(j_mem_infos == ((struct json_object *)NULL)))
      {
        j_obj_obj_add_link5(j_mem_test, "heap-usage-via-brk-per-process", j_mem_infos);
        l = sorted.head;
        for( ; !(l == ((struct link *)NULL)); l = l->next)
        {
          info = (struct anonymous_2 *)l->data;
          struct proc_info *p;
          p=proc_cache_find_by_pid(info->pid);
          signed long int delta = (char *)info->brk_current - (char *)info->brk_start;
          j_mem_info=j_obj_new_obj();
          if(j_mem_info == ((struct json_object *)NULL))
            goto out;

          j_obj_new_int32_add_link5(j_mem_info, "pid", info->pid);
          if(!(p == ((struct proc_info *)NULL)))
          {
            j_obj_new_int32_add_link5(j_mem_info, "ppid", p->ppid);
            j_obj_new_int32_add_link5(j_mem_info, "is-thread", (const signed int)p->is_thread);
            j_obj_new_string_add_link5(j_mem_info, "name", p->cmdline);
          }

          j_obj_new_int64_add_link5(j_mem_info, "brk-count", (const signed long int)info->brk_count);
          j_obj_new_int64_add_link5(j_mem_info, "brk-size-Kbytes", (const signed long int)((unsigned long int)delta / (unsigned long int)1024));
          j_obj_new_double_add_link5(j_mem_info, "brk-size-Kbytes-rate", ((double)delta / 1024.0) / duration);
          j_obj_array_add_link5(j_mem_infos, j_mem_info);
          total_brk_count = total_brk_count + info->brk_count;
          total_delta = total_delta + (unsigned long int)delta;
        }
        j_mem_info=j_obj_new_obj();
        if(!(j_mem_info == ((struct json_object *)NULL)))
        {
          j_obj_obj_add_link5(j_mem_test, "heap-usage-via-brk-total", j_mem_info);
          j_obj_new_int64_add_link5(j_mem_info, "brk-count-total", (const signed long int)total_brk_count);
          j_obj_new_int64_add_link5(j_mem_info, "brk-size-total-Kbytes", (const signed long int)(total_delta / (unsigned long int)1024));
          j_obj_new_double_add_link5(j_mem_info, "brk-size-total-Kbytes-rate", ((double)total_delta / 1024.0) / duration);
        }

      }

    }

  }


out:
  ;
  list_free(&sorted, (void (*)(void *))(void *)0);
}

// mem_dump_diff
// file mem.c line 555
extern signed int mem_dump_diff(struct json_object *j_tests, const double duration)
{
  struct anonymous_3 sorted;
  struct anonymous_3 sorted_delta;
  struct link *l;
  _Bool deltas = (_Bool)0;
  printf("Memory:\n");
  list_init(&sorted);
  list_init(&sorted_delta);
  l = mem_info_new.head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    enum anonymous_11 type;
    struct mem_info_t *mem_new = (struct mem_info_t *)l->data;
    type = (enum anonymous_11)MEM_STACK;
    for( ; !((signed int)type >= MEM_MAX); type = (enum anonymous_11)((signed int)type + 1))
      mem_new->grand_total = mem_new->grand_total + mem_new->total[(signed long int)type];
    struct link *return_value_list_add_ordered_1;
    return_value_list_add_ordered_1=list_add_ordered(&sorted, (void *)mem_new, mem_cmp);
    if(return_value_list_add_ordered_1 == ((struct link *)NULL))
      goto out;

  }
  l = mem_info_new.head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    struct mem_info_t *delta;
    struct mem_info_t *mem_dump_diff__1__2__1__mem_new = (struct mem_info_t *)l->data;
    delta=mem_delta(mem_dump_diff__1__2__1__mem_new, &mem_info_old);
    if(delta == ((struct mem_info_t *)NULL))
      return -1;

    struct link *return_value_list_add_ordered_2;
    return_value_list_add_ordered_2=list_add_ordered(&sorted_delta, (void *)delta, mem_cmp);
    if(return_value_list_add_ordered_2 == ((struct link *)NULL))
    {
      free((void *)delta);
      goto out;
    }

  }
  if((0x00000002 & opt_flags) == 0)
  {
    printf("Per Process Memory (K):\n");
    if(mem_info_new.head == ((struct link *)NULL))
      printf(" No memory detected.\n\n");

    else
    {
      printf("  PID  Process              Type        Size       RSS       PSS\n");
      l = sorted.head;
      for( ; !(l == ((struct link *)NULL)); l = l->next)
      {
        struct mem_info_t *mem_dump_diff__1__3__2__1__1__delta = (struct mem_info_t *)l->data;
        enum anonymous_11 mem_dump_diff__1__3__2__1__1__type = (enum anonymous_11)MEM_STACK;
        for( ; !((signed int)mem_dump_diff__1__3__2__1__1__type >= MEM_MAX); mem_dump_diff__1__3__2__1__1__type = (enum anonymous_11)((signed int)mem_dump_diff__1__3__2__1__1__type + 1))
          printf(" %5d %-20.20s %-6.6s %9li %9li %9li\n", mem_dump_diff__1__3__2__1__1__delta->proc->pid, mem_dump_diff__1__3__2__1__1__delta->proc->cmdline, mem_types[(signed long int)mem_dump_diff__1__3__2__1__1__type], mem_dump_diff__1__3__2__1__1__delta->size[(signed long int)mem_dump_diff__1__3__2__1__1__type] / (signed long int)1024, mem_dump_diff__1__3__2__1__1__delta->rss[(signed long int)mem_dump_diff__1__3__2__1__1__type] / (signed long int)1024, mem_dump_diff__1__3__2__1__1__delta->pss[(signed long int)mem_dump_diff__1__3__2__1__1__type] / (signed long int)1024);
      }
      printf("\n");
    }
  }

  printf("Change in memory (K/second):\n");
  if(mem_info_new.head == ((struct link *)NULL))
    printf(" No memory detected.\n\n");

  else
  {
    l = sorted_delta.head;
    for( ; !(l == ((struct link *)NULL)); l = l->next)
    {
      struct mem_info_t *mem_dump_diff__1__5__1__1__delta = (struct mem_info_t *)l->data;
      enum anonymous_11 mem_dump_diff__1__5__1__1__type = (enum anonymous_11)MEM_STACK;
      for( ; !((signed int)mem_dump_diff__1__5__1__1__type >= MEM_MAX); mem_dump_diff__1__5__1__1__type = (enum anonymous_11)((signed int)mem_dump_diff__1__5__1__1__type + 1))
        if(!(mem_dump_diff__1__5__1__1__delta->total[(signed long int)mem_dump_diff__1__5__1__1__type] == 0l))
        {
          if(deltas == (_Bool)0)
          {
            printf("  PID  Process              Type        Size       RSS       PSS\n");
            deltas = (_Bool)1;
          }

          const char *return_value_mem_loading_3;
          return_value_mem_loading_3=mem_loading((double)((double)mem_dump_diff__1__5__1__1__delta->total[(signed long int)mem_dump_diff__1__5__1__1__type] / duration));
          printf(" %5d %-20.20s %-6.6s %9.2f %9.2f %9.2f (%s)\n", mem_dump_diff__1__5__1__1__delta->proc->pid, mem_dump_diff__1__5__1__1__delta->proc->cmdline, mem_types[(signed long int)mem_dump_diff__1__5__1__1__type], (double)((double)mem_dump_diff__1__5__1__1__delta->size[(signed long int)mem_dump_diff__1__5__1__1__type] / 1024.0) / duration, (double)((double)mem_dump_diff__1__5__1__1__delta->rss[(signed long int)mem_dump_diff__1__5__1__1__type] / 1024.0) / duration, (double)((double)mem_dump_diff__1__5__1__1__delta->pss[(signed long int)mem_dump_diff__1__5__1__1__type] / 1024.0) / duration, return_value_mem_loading_3);
        }

    }
  }
  if(deltas == (_Bool)0)
    printf(" No changes found.\n");

  printf("\n");
  if(!(j_tests == ((struct json_object *)NULL)))
  {
    struct json_object *j_mem_test;
    struct json_object *j_mem_infos;
    struct json_object *j_mem_info;
    char label[128l];
    enum anonymous_11 mem_dump_diff__1__6__type;
    double rate;
    signed long int total_size[3l];
    signed long int total_rss[3l];
    signed long int total_pss[3l];
    memset((void *)total_size, 0, sizeof(signed long int [3l]) /*24ul*/ );
    memset((void *)total_rss, 0, sizeof(signed long int [3l]) /*24ul*/ );
    memset((void *)total_pss, 0, sizeof(signed long int [3l]) /*24ul*/ );
    j_mem_test=j_obj_new_obj();
    if(!(j_mem_test == ((struct json_object *)NULL)))
    {
      j_obj_obj_add_link5(j_tests, "memory-usage", j_mem_test);
      j_mem_infos=j_obj_new_array();
      if(!(j_mem_infos == ((struct json_object *)NULL)))
      {
        j_obj_obj_add_link5(j_mem_test, "memory-usage-per-process", j_mem_infos);
        l = sorted.head;
        for( ; !(l == ((struct link *)NULL)); l = l->next)
        {
          struct mem_info_t *mem_dump_diff__1__6__1__1__delta = (struct mem_info_t *)l->data;
          mem_dump_diff__1__6__type = (enum anonymous_11)MEM_STACK;
          for( ; !((signed int)mem_dump_diff__1__6__type >= MEM_MAX); mem_dump_diff__1__6__type = (enum anonymous_11)((signed int)mem_dump_diff__1__6__type + 1))
          {
            j_mem_info=j_obj_new_obj();
            if(j_mem_info == ((struct json_object *)NULL))
              goto out;

            j_obj_new_int32_add_link5(j_mem_info, "pid", mem_dump_diff__1__6__1__1__delta->proc->pid);
            j_obj_new_int32_add_link5(j_mem_info, "ppid", mem_dump_diff__1__6__1__1__delta->proc->ppid);
            j_obj_new_int32_add_link5(j_mem_info, "is-thread", (const signed int)mem_dump_diff__1__6__1__1__delta->proc->is_thread);
            j_obj_new_string_add_link5(j_mem_info, "name", mem_dump_diff__1__6__1__1__delta->proc->cmdline);
            snprintf(label, sizeof(char [128l]) /*128ul*/ , "%s-size-Kbytes", mem_types[(signed long int)mem_dump_diff__1__6__type]);
            mem_tolower_str(label);
            j_obj_new_int64_add_link5(j_mem_info, label, mem_dump_diff__1__6__1__1__delta->size[(signed long int)mem_dump_diff__1__6__type] / (signed long int)1024);
            snprintf(label, sizeof(char [128l]) /*128ul*/ , "%s-rss-Kbytes", mem_types[(signed long int)mem_dump_diff__1__6__type]);
            mem_tolower_str(label);
            j_obj_new_int64_add_link5(j_mem_info, label, mem_dump_diff__1__6__1__1__delta->rss[(signed long int)mem_dump_diff__1__6__type] / (signed long int)1024);
            snprintf(label, sizeof(char [128l]) /*128ul*/ , "%s-pss-Kbytes", mem_types[(signed long int)mem_dump_diff__1__6__type]);
            mem_tolower_str(label);
            j_obj_new_int64_add_link5(j_mem_info, label, mem_dump_diff__1__6__1__1__delta->pss[(signed long int)mem_dump_diff__1__6__type] / (signed long int)1024);
            j_obj_array_add_link5(j_mem_infos, j_mem_info);
            total_size[(signed long int)mem_dump_diff__1__6__type] = total_size[(signed long int)mem_dump_diff__1__6__type] + mem_dump_diff__1__6__1__1__delta->size[(signed long int)mem_dump_diff__1__6__type];
            total_rss[(signed long int)mem_dump_diff__1__6__type] = total_rss[(signed long int)mem_dump_diff__1__6__type] + mem_dump_diff__1__6__1__1__delta->rss[(signed long int)mem_dump_diff__1__6__type];
            total_pss[(signed long int)mem_dump_diff__1__6__type] = total_pss[(signed long int)mem_dump_diff__1__6__type] + mem_dump_diff__1__6__1__1__delta->pss[(signed long int)mem_dump_diff__1__6__type];
          }
        }
        j_mem_info=j_obj_new_obj();
        if(!(j_mem_info == ((struct json_object *)NULL)))
        {
          j_obj_obj_add_link5(j_mem_test, "memory-usage-total", j_mem_info);
          mem_dump_diff__1__6__type = (enum anonymous_11)MEM_STACK;
          for( ; !((signed int)mem_dump_diff__1__6__type >= MEM_MAX); mem_dump_diff__1__6__type = (enum anonymous_11)((signed int)mem_dump_diff__1__6__type + 1))
          {
            snprintf(label, sizeof(char [128l]) /*128ul*/ , "%s-size-total-Kbytes", mem_types[(signed long int)mem_dump_diff__1__6__type]);
            mem_tolower_str(label);
            j_obj_new_int64_add_link5(j_mem_info, label, total_size[(signed long int)mem_dump_diff__1__6__type] / (signed long int)1024);
            snprintf(label, sizeof(char [128l]) /*128ul*/ , "%s-rss-total-Kbytes", mem_types[(signed long int)mem_dump_diff__1__6__type]);
            mem_tolower_str(label);
            j_obj_new_int64_add_link5(j_mem_info, label, total_rss[(signed long int)mem_dump_diff__1__6__type] / (signed long int)1024);
            snprintf(label, sizeof(char [128l]) /*128ul*/ , "%s-pss-total-Kbytes", mem_types[(signed long int)mem_dump_diff__1__6__type]);
            mem_tolower_str(label);
            j_obj_new_int64_add_link5(j_mem_info, label, total_pss[(signed long int)mem_dump_diff__1__6__type] / (signed long int)1024);
          }
          memset((void *)total_size, 0, sizeof(signed long int [3l]) /*24ul*/ );
          memset((void *)total_rss, 0, sizeof(signed long int [3l]) /*24ul*/ );
          memset((void *)total_pss, 0, sizeof(signed long int [3l]) /*24ul*/ );
          j_mem_test=j_obj_new_obj();
          if(!(j_mem_test == ((struct json_object *)NULL)))
          {
            j_obj_obj_add_link5(j_tests, "memory-change", j_mem_test);
            j_mem_infos=j_obj_new_array();
            if(!(j_mem_infos == ((struct json_object *)NULL)))
            {
              j_obj_obj_add_link5(j_mem_test, "memory-change-per-process", j_mem_infos);
              l = sorted_delta.head;
              for( ; !(l == ((struct link *)NULL)); l = l->next)
              {
                struct mem_info_t *mem_dump_diff__1__6__3__1__delta = (struct mem_info_t *)l->data;
                mem_dump_diff__1__6__type = (enum anonymous_11)MEM_STACK;
                for( ; !((signed int)mem_dump_diff__1__6__type >= MEM_MAX); mem_dump_diff__1__6__type = (enum anonymous_11)((signed int)mem_dump_diff__1__6__type + 1))
                {
                  j_mem_info=j_obj_new_obj();
                  if(j_mem_info == ((struct json_object *)NULL))
                    goto out;

                  j_obj_new_int32_add_link5(j_mem_info, "pid", mem_dump_diff__1__6__3__1__delta->proc->pid);
                  j_obj_new_int32_add_link5(j_mem_info, "ppid", mem_dump_diff__1__6__3__1__delta->proc->ppid);
                  j_obj_new_int32_add_link5(j_mem_info, "is-thread", (const signed int)mem_dump_diff__1__6__3__1__delta->proc->is_thread);
                  j_obj_new_string_add_link5(j_mem_info, "name", mem_dump_diff__1__6__3__1__delta->proc->cmdline);
                  rate = (double)((double)mem_dump_diff__1__6__3__1__delta->size[(signed long int)mem_dump_diff__1__6__type] / 1024.0) / duration;
                  snprintf(label, sizeof(char [128l]) /*128ul*/ , "%s-change-size-Kbytes", mem_types[(signed long int)mem_dump_diff__1__6__type]);
                  mem_tolower_str(label);
                  j_obj_new_int64_add_link5(j_mem_info, label, mem_dump_diff__1__6__3__1__delta->size[(signed long int)mem_dump_diff__1__6__type] / (signed long int)1024);
                  snprintf(label, sizeof(char [128l]) /*128ul*/ , "%s-change-size-Kbytes-rate", mem_types[(signed long int)mem_dump_diff__1__6__type]);
                  mem_tolower_str(label);
                  j_obj_new_double_add_link5(j_mem_info, label, rate);
                  snprintf(label, sizeof(char [128l]) /*128ul*/ , "%s-change-size-Kbytes-hint", mem_types[(signed long int)mem_dump_diff__1__6__type]);
                  mem_tolower_str(label);
                  const char *return_value_mem_loading_4;
                  return_value_mem_loading_4=mem_loading(rate);
                  j_obj_new_string_add_link5(j_mem_info, label, return_value_mem_loading_4);
                  rate = (double)((double)mem_dump_diff__1__6__3__1__delta->rss[(signed long int)mem_dump_diff__1__6__type] / 1024.0) / duration;
                  snprintf(label, sizeof(char [128l]) /*128ul*/ , "%s-change-rss-Kbytes", mem_types[(signed long int)mem_dump_diff__1__6__type]);
                  mem_tolower_str(label);
                  j_obj_new_int64_add_link5(j_mem_info, label, mem_dump_diff__1__6__3__1__delta->rss[(signed long int)mem_dump_diff__1__6__type] / (signed long int)1024);
                  snprintf(label, sizeof(char [128l]) /*128ul*/ , "%s-change-rss-Kbytes-rate", mem_types[(signed long int)mem_dump_diff__1__6__type]);
                  mem_tolower_str(label);
                  j_obj_new_double_add_link5(j_mem_info, label, rate);
                  snprintf(label, sizeof(char [128l]) /*128ul*/ , "%s-change-rss-Kbytes-hint", mem_types[(signed long int)mem_dump_diff__1__6__type]);
                  mem_tolower_str(label);
                  const char *return_value_mem_loading_5;
                  return_value_mem_loading_5=mem_loading(rate);
                  j_obj_new_string_add_link5(j_mem_info, label, return_value_mem_loading_5);
                  rate = (double)((double)mem_dump_diff__1__6__3__1__delta->pss[(signed long int)mem_dump_diff__1__6__type] / 1024.0) / duration;
                  snprintf(label, sizeof(char [128l]) /*128ul*/ , "%s-change-pss-Kbytes", mem_types[(signed long int)mem_dump_diff__1__6__type]);
                  mem_tolower_str(label);
                  j_obj_new_int64_add_link5(j_mem_info, label, mem_dump_diff__1__6__3__1__delta->pss[(signed long int)mem_dump_diff__1__6__type] / (signed long int)1024);
                  snprintf(label, sizeof(char [128l]) /*128ul*/ , "%s-change-pss-Kbytes-rate", mem_types[(signed long int)mem_dump_diff__1__6__type]);
                  mem_tolower_str(label);
                  j_obj_new_double_add_link5(j_mem_info, label, rate);
                  snprintf(label, sizeof(char [128l]) /*128ul*/ , "%s-change-pss-Kbytes-hint", mem_types[(signed long int)mem_dump_diff__1__6__type]);
                  mem_tolower_str(label);
                  const char *return_value_mem_loading_6;
                  return_value_mem_loading_6=mem_loading(rate);
                  j_obj_new_string_add_link5(j_mem_info, label, return_value_mem_loading_6);
                  j_obj_array_add_link5(j_mem_infos, j_mem_info);
                  total_size[(signed long int)mem_dump_diff__1__6__type] = total_size[(signed long int)mem_dump_diff__1__6__type] + mem_dump_diff__1__6__3__1__delta->size[(signed long int)mem_dump_diff__1__6__type];
                  total_rss[(signed long int)mem_dump_diff__1__6__type] = total_rss[(signed long int)mem_dump_diff__1__6__type] + mem_dump_diff__1__6__3__1__delta->rss[(signed long int)mem_dump_diff__1__6__type];
                  total_pss[(signed long int)mem_dump_diff__1__6__type] = total_pss[(signed long int)mem_dump_diff__1__6__type] + mem_dump_diff__1__6__3__1__delta->pss[(signed long int)mem_dump_diff__1__6__type];
                }
              }
              j_mem_info=j_obj_new_obj();
              if(!(j_mem_info == ((struct json_object *)NULL)))
              {
                j_obj_obj_add_link5(j_mem_test, "memory-change-total", j_mem_info);
                mem_dump_diff__1__6__type = (enum anonymous_11)MEM_STACK;
                for( ; !((signed int)mem_dump_diff__1__6__type >= MEM_MAX); mem_dump_diff__1__6__type = (enum anonymous_11)((signed int)mem_dump_diff__1__6__type + 1))
                {
                  snprintf(label, sizeof(char [128l]) /*128ul*/ , "%s-change-size-total-Kbytes", mem_types[(signed long int)mem_dump_diff__1__6__type]);
                  mem_tolower_str(label);
                  j_obj_new_int64_add_link5(j_mem_info, label, total_size[(signed long int)mem_dump_diff__1__6__type] / (signed long int)1024);
                  snprintf(label, sizeof(char [128l]) /*128ul*/ , "%s-change-rss-total-Kbytes", mem_types[(signed long int)mem_dump_diff__1__6__type]);
                  mem_tolower_str(label);
                  j_obj_new_int64_add_link5(j_mem_info, label, total_rss[(signed long int)mem_dump_diff__1__6__type] / (signed long int)1024);
                  snprintf(label, sizeof(char [128l]) /*128ul*/ , "%s-change-pss-total-Kbytes", mem_types[(signed long int)mem_dump_diff__1__6__type]);
                  mem_tolower_str(label);
                  j_obj_new_int64_add_link5(j_mem_info, label, total_pss[(signed long int)mem_dump_diff__1__6__type] / (signed long int)1024);
                }
              }

            }

          }

        }

      }

    }

  }


out:
  ;
  list_free(&sorted, (void (*)(void *))(void *)0);
  list_free(&sorted_delta, free);
  return 0;
}

// mem_dump_mmap
// file mem.c line 149
extern void mem_dump_mmap(struct json_object *j_tests, const double duration)
{
  struct anonymous_3 sorted;
  struct link *l;
  struct anonymous_1 *info;
  printf("Memory Change via mmap() and munmap():\n");
  list_init(&sorted);
  l = mem_mmap_info.head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    info = (struct anonymous_1 *)l->data;
    struct link *return_value_list_add_ordered_1;
    return_value_list_add_ordered_1=list_add_ordered(&sorted, (void *)info, mem_mmap_cmp);
    if(return_value_list_add_ordered_1 == ((struct link *)NULL))
      goto out;

  }
  char *tmp_if_expr_2;
  if(mem_mmap_info.head == ((struct link *)NULL))
    printf(" None.\n\n");

  else
  {
    printf("  PID                          mmaps  munmaps  Change (K)  Rate (K/Sec)\n");
    l = sorted.head;
    for( ; !(l == ((struct link *)NULL)); l = l->next)
    {
      info = (struct anonymous_1 *)l->data;
      struct proc_info *mem_dump_mmap__1__3__1__1__p;
      mem_dump_mmap__1__3__1__1__p=proc_cache_find_by_pid(info->pid);
      signed long int mem_dump_mmap__1__3__1__1__delta = (signed long int)(info->mmap_length - info->munmap_length);
      double rate = (double)mem_dump_mmap__1__3__1__1__delta / duration;
      if(!(mem_dump_mmap__1__3__1__1__p == ((struct proc_info *)NULL)))
        tmp_if_expr_2 = mem_dump_mmap__1__3__1__1__p->cmdline;

      else
        tmp_if_expr_2 = "";
      const char *return_value_mem_loading_3;
      return_value_mem_loading_3=mem_loading(rate);
      printf(" %5d %-20.20s %8lu %8lu    %8li      %8.2f (%s)\n", info->pid, tmp_if_expr_2, info->mmap_count, info->munmap_count, mem_dump_mmap__1__3__1__1__delta / (signed long int)1024, rate / 1024.0, return_value_mem_loading_3);
    }
    printf("\n");
  }
  if(!(j_tests == ((struct json_object *)NULL)))
  {
    struct json_object *j_mem_test;
    struct json_object *j_mem_infos;
    struct json_object *j_mem_info;
    unsigned long int total_mmap_count = (unsigned long int)0;
    unsigned long int total_munmap_count = (unsigned long int)0;
    unsigned long int total_delta = (unsigned long int)0;
    j_mem_test=j_obj_new_obj();
    if(!(j_mem_test == ((struct json_object *)NULL)))
    {
      j_obj_obj_add_link5(j_tests, "memory-usage-via-mmap", j_mem_test);
      j_mem_infos=j_obj_new_array();
      if(!(j_mem_infos == ((struct json_object *)NULL)))
      {
        j_obj_obj_add_link5(j_mem_test, "memory-usage-via-mmap-per-process", j_mem_infos);
        l = sorted.head;
        for( ; !(l == ((struct link *)NULL)); l = l->next)
        {
          info = (struct anonymous_1 *)l->data;
          struct proc_info *p;
          p=proc_cache_find_by_pid(info->pid);
          signed long int delta = (signed long int)(info->mmap_length - info->munmap_length);
          j_mem_info=j_obj_new_obj();
          if(j_mem_info == ((struct json_object *)NULL))
            goto out;

          j_obj_new_int32_add_link5(j_mem_info, "pid", info->pid);
          if(!(p == ((struct proc_info *)NULL)))
          {
            j_obj_new_int32_add_link5(j_mem_info, "ppid", p->ppid);
            j_obj_new_int32_add_link5(j_mem_info, "is-thread", (const signed int)p->is_thread);
            j_obj_new_string_add_link5(j_mem_info, "name", p->cmdline);
          }

          j_obj_new_int64_add_link5(j_mem_info, "mmap-count", (const signed long int)info->mmap_count);
          j_obj_new_int64_add_link5(j_mem_info, "munmap-count", (const signed long int)info->munmap_count);
          j_obj_new_int64_add_link5(j_mem_info, "mmap-total-Kbytes", (const signed long int)((unsigned long int)delta / (unsigned long int)1024));
          j_obj_new_double_add_link5(j_mem_info, "mmap-total-Kbytes-rate", ((double)delta / 1024.0) / duration);
          j_obj_array_add_link5(j_mem_infos, j_mem_info);
          total_mmap_count = total_mmap_count + info->mmap_count;
          total_munmap_count = total_munmap_count + info->munmap_count;
          total_delta = total_delta + (unsigned long int)delta;
        }
        j_mem_info=j_obj_new_obj();
        if(!(j_mem_info == ((struct json_object *)NULL)))
        {
          j_obj_obj_add_link5(j_mem_test, "memory-usage-via-mmap-total", j_mem_info);
          j_obj_new_int64_add_link5(j_mem_info, "mmap-count-total", (const signed long int)total_mmap_count);
          j_obj_new_int64_add_link5(j_mem_info, "munmap-count-total", (const signed long int)total_munmap_count);
          j_obj_new_int64_add_link5(j_mem_info, "mmap-total-Kbytes", (const signed long int)(total_delta / (unsigned long int)1024));
          j_obj_new_double_add_link5(j_mem_info, "mmap-total-Kbytes-rate", ((double)total_delta / 1024.0) / duration);
        }

      }

    }

  }


out:
  ;
  list_free(&sorted, (void (*)(void *))(void *)0);
}

// mem_get_all_pids
// file mem.c line 503
extern signed int mem_get_all_pids(const struct anonymous_3 *pids, const enum anonymous_9 state)
{
  struct link *l = pids->head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    struct proc_info *p = (struct proc_info *)l->data;
    signed int return_value_mem_get_by_proc_1;
    return_value_mem_get_by_proc_1=mem_get_by_proc(p, state);
    if(!(return_value_mem_get_by_proc_1 >= 0))
      return -1;

  }
  return 0;
}

// mem_get_by_proc
// file mem.h line 66
extern signed int mem_get_by_proc(struct proc_info *p, const enum anonymous_9 state)
{
  struct _IO_FILE *fp;
  char path[4096l];
  struct mem_info_t *m;
  struct anonymous_3 *mem = (signed int)state == PROC_START ? &mem_info_old : &mem_info_new;
  signed int return_value_mem_get_entry_2;
  if(!(p->is_thread == (_Bool)0))
    return 0;

  else
  {
    snprintf(path, sizeof(char [4096l]) /*4096ul*/ , "/proc/%i/smaps", p->pid);
    fp=fopen(path, "r");
    if(fp == ((struct _IO_FILE *)NULL))
      return 0;

    else
    {
      void *return_value_calloc_1;
      return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct mem_info_t) /*112ul*/ );
      m = (struct mem_info_t *)return_value_calloc_1;
      if(m == ((struct mem_info_t *)NULL))
      {
        health_check_out_of_memory("allocating memory tracking information");
        fclose(fp);
        return -1;
      }

      else
      {
        m->proc = p;
        do
        {
          return_value_mem_get_entry_2=mem_get_entry(fp, m);
          if(return_value_mem_get_entry_2 == -1)
            break;

        }
        while((_Bool)1);
        struct link *return_value_list_append_3;
        return_value_list_append_3=list_append(mem, (void *)m);
        if(return_value_list_append_3 == ((struct link *)NULL))
        {
          free((void *)m);
          fclose(fp);
          return -1;
        }

        else
        {
          fclose(fp);
          return 0;
        }
      }
    }
  }
}

// mem_get_entry
// file mem.c line 413
static signed int mem_get_entry(struct _IO_FILE *fp, struct mem_info_t *mem)
{
  unsigned long int addr_start;
  unsigned long int addr_end;
  unsigned long int addr_offset;
  signed int major;
  signed int minor;
  enum anonymous_11 type;
  char path[4096l];
  unsigned long int size;
  unsigned long int rss;
  unsigned long int pss;
  do
  {
    char buffer[4096l];
    char *return_value_fgets_1;
    return_value_fgets_1=fgets(buffer, (signed int)sizeof(char [4096l]) /*4096ul*/ , fp);
    if(return_value_fgets_1 == ((char *)NULL))
      return -1;

    signed int return_value_sscanf_2;
    return_value_sscanf_2=sscanf(buffer, "%lx-%lx %*s %lx %x:%x %*u %s", &addr_start, &addr_end, &addr_offset, &major, &minor, (const void *)path);
    if(return_value_sscanf_2 == 6)
      break;

    signed int return_value_sscanf_3;
    return_value_sscanf_3=sscanf(buffer, "%lx-%lx %*s %lx %x:%x %*u", &addr_start, &addr_end, &addr_offset, &major, &minor);
    if(return_value_sscanf_3 == 5)
    {
      path[0l] = (char)0;
      break;
    }

  }
  while((_Bool)1);
  signed int return_value_strncmp_5;
  return_value_strncmp_5=strncmp(path, "[stack", (unsigned long int)6);
  signed int return_value_strncmp_4;
  if(return_value_strncmp_5 == 0)
    type = (enum anonymous_11)MEM_STACK;

  else
  {
    return_value_strncmp_4=strncmp(path, "[heap", (unsigned long int)5);
    if(return_value_strncmp_4 == 0)
      type = (enum anonymous_11)MEM_HEAP;

    else
      if(path[0l] == 0 && major == 0 && minor == 0 && addr_offset == 0ul)
        type = (enum anonymous_11)MEM_HEAP;

      else
        type = (enum anonymous_11)MEM_MAPPED;
  }
  signed int return_value_mem_get_size_6;
  return_value_mem_get_size_6=mem_get_size(fp, "Size", &size);
  if(!(return_value_mem_get_size_6 >= 0))
    return -1;

  else
  {
    signed int return_value_mem_get_size_7;
    return_value_mem_get_size_7=mem_get_size(fp, "Rss", &rss);
    if(!(return_value_mem_get_size_7 >= 0))
      return -1;

    else
    {
      signed int return_value_mem_get_size_8;
      return_value_mem_get_size_8=mem_get_size(fp, "Pss", &pss);
      if(!(return_value_mem_get_size_8 >= 0))
        return -1;

      else
      {
        mem->size[(signed long int)type] = mem->size[(signed long int)type] + (signed long int)size;
        mem->rss[(signed long int)type] = mem->rss[(signed long int)type] + (signed long int)rss;
        mem->pss[(signed long int)type] = mem->pss[(signed long int)type] + (signed long int)pss;
        mem->total[(signed long int)type] = mem->total[(signed long int)type] + (signed long int)(size + rss + pss);
        return 0;
      }
    }
  }
}

// mem_get_size
// file mem.c line 391
static signed int mem_get_size(struct _IO_FILE *fp, const char *field, unsigned long int *size)
{
  char tmp[4096l];
  unsigned long int size_k;
  *size = (unsigned long int)0;
  signed int return_value_feof_1;
  signed int tmp_statement_expression_2;
  do
  {
    return_value_feof_1=feof(fp);
    if(!(return_value_feof_1 == 0))
      break;

    signed int return_value_fscanf_4;
    return_value_fscanf_4=fscanf(fp, "%4095[^:]: %li%*[^\n]%*c", (const void *)tmp, &size_k);
    if(return_value_fscanf_4 == 2)
    {
      unsigned long int __s1_len;
      unsigned long int __s2_len;
      signed int return_value___builtin_strcmp_3;
      return_value___builtin_strcmp_3=__builtin_strcmp(tmp, field);
      tmp_statement_expression_2 = return_value___builtin_strcmp_3;
      if(tmp_statement_expression_2 == 0)
      {
        *size = size_k * (unsigned long int)1024;
        return 0;
      }

    }

  }
  while((_Bool)1);
  return -1;
}

// mem_init
// file mem.c line 804
extern void mem_init(void)
{
  list_init(&mem_info_old);
  list_init(&mem_info_new);
  list_init(&mem_brk_info);
  list_init(&mem_mmap_info);
}

// mem_loading
// file mem.c line 62
static const char * mem_loading(const double mem_rate)
{
  char *verb;
  char *adverb;
  double rate = mem_rate;
  if(IEEE_FLOAT_EQUAL(rate, 0.0))
    return "no change";

  else
  {
    if(rate < 0.000000)
    {
      verb = "shrinking";
      rate = -mem_rate;
    }

    else
      verb = "growing";
    if(rate < 1024.0)
      adverb = " slowly";

    else
      if(rate >= 2.097152e+6)
        adverb = " very fast";

      else
        if(rate >= 2.621440e+5)
          adverb = " fast";

        else
          if(rate >= 8192.000000)
            adverb = " moderately fast";

          else
            adverb = "";
    static char buffer[64l];
    sprintf(buffer, "%s%s", verb, adverb);
    return buffer;
  }
}

// mem_mmap_account
// file mem.h line 69
extern signed int mem_mmap_account(const signed int pid, const unsigned long int length, const _Bool mmap)
{
  struct link *l;
  _Bool found = (_Bool)0;
  struct anonymous_1 *info = (struct anonymous_1 *)(void *)0;
  l = mem_mmap_info.head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    info = (struct anonymous_1 *)l->data;
    if(info->pid == pid)
    {
      found = (_Bool)1;
      break;
    }

  }
  if(found == (_Bool)0)
  {
    void *return_value_calloc_1;
    return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct anonymous_1) /*40ul*/ );
    info = (struct anonymous_1 *)return_value_calloc_1;
    if(info == ((struct anonymous_1 *)NULL))
    {
      health_check_out_of_memory("allocating memory tracking brk() information");
      return -1;
    }

    info->pid = pid;
    struct link *return_value_list_append_2;
    return_value_list_append_2=list_append(&mem_mmap_info, (void *)info);
    if(return_value_list_append_2 == ((struct link *)NULL))
    {
      free((void *)info);
      return -1;
    }

  }

  if(!(mmap == (_Bool)0))
  {
    info->mmap_count = info->mmap_count + 1ul;
    info->mmap_length = info->mmap_length + length;
  }

  else
  {
    info->munmap_count = info->munmap_count + 1ul;
    info->munmap_length = info->munmap_length + length;
  }
  return 0;
}

// mem_mmap_cmp
// file mem.c line 135
static signed int mem_mmap_cmp(const void *data1, const void *data2)
{
  struct anonymous_1 *m1 = (struct anonymous_1 *)data1;
  struct anonymous_1 *m2 = (struct anonymous_1 *)data2;
  signed long int d1 = (signed long int)(m1->mmap_length - m1->munmap_length);
  signed long int d2 = (signed long int)(m2->mmap_length - m2->munmap_length);
  return (signed int)(d2 - d1);
}

// mem_tolower_str
// file mem.c line 51
static void mem_tolower_str(char *str)
{
  signed int tmp_statement_expression_1;
  signed int tmp_if_expr_3;
  const signed int **return_value___ctype_tolower_loc_2;
  const signed int **return_value___ctype_tolower_loc_4;
  for( ; !(*str == 0); str = str + 1l)
  {
    signed int __res;
    return_value___ctype_tolower_loc_4=__ctype_tolower_loc();
    __res = (*return_value___ctype_tolower_loc_4)[(signed long int)(signed int)*str];
    tmp_statement_expression_1 = __res;
    *str = (char)tmp_statement_expression_1;
  }
}

// net_account_recv
// file net.c line 223
extern void net_account_recv(const signed int pid, const signed int fd, unsigned long int size)
{
  struct anonymous_17 *nh;
  nh=net_cache_inode_by_pid_and_fd(pid, fd);
  if(!(nh == ((struct anonymous_17 *)NULL)))
  {
    nh->recv.call_count = nh->recv.call_count + 1ul;
    nh->recv.data_total = nh->recv.data_total + size;
  }

}

// net_account_send
// file net.c line 209
extern void net_account_send(const signed int pid, const signed int fd, unsigned long int size)
{
  struct anonymous_17 *nh;
  nh=net_cache_inode_by_pid_and_fd(pid, fd);
  if(!(nh == ((struct anonymous_17 *)NULL)))
  {
    nh->send.call_count = nh->send.call_count + 1ul;
    nh->send.data_total = nh->send.data_total + size;
  }

}

// net_add_dump_info
// file net.c line 401
static void net_add_dump_info(struct anonymous_3 *list, struct anonymous_22 *new_dump_info)
{
  struct link *l = list->head;
  signed int return_value_memcmp_1;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    struct anonymous_22 *dump_info = (struct anonymous_22 *)l->data;
    if(dump_info->nh->proc == new_dump_info->nh->proc)
    {
      if(dump_info->addr_info->type == new_dump_info->addr_info->type)
      {
        return_value_memcmp_1=memcmp((const void *)&dump_info->addr_info->u, (const void *)&new_dump_info->addr_info->u, sizeof(union anonymous_20) /*4100ul*/ );
        if(return_value_memcmp_1 == 0)
        {
          if(dump_info->addr_info->family == new_dump_info->addr_info->family)
          {
            dump_info->nh->send.call_count = dump_info->nh->send.call_count + new_dump_info->nh->send.call_count;
            dump_info->nh->send.data_total = dump_info->nh->send.data_total + new_dump_info->nh->send.data_total;
            dump_info->nh->recv.call_count = dump_info->nh->recv.call_count + new_dump_info->nh->recv.call_count;
            dump_info->nh->recv.data_total = dump_info->nh->recv.data_total + new_dump_info->nh->recv.data_total;
            dump_info->send_recv_total = dump_info->send_recv_total + new_dump_info->send_recv_total;
            free((void *)new_dump_info);
            goto __CPROVER_DUMP_L4;
          }

        }

      }

    }

  }
  list_append(list, (void *)new_dump_info);

__CPROVER_DUMP_L4:
  ;
}

// net_addr_add
// file net.c line 332
static struct anonymous_21 * net_addr_add(struct anonymous_21 *addr)
{
  struct link *l;
  struct anonymous_21 *new_addr;
  l = net_cached_addrs.head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    struct anonymous_21 *old_addr = (struct anonymous_21 *)l->data;
    signed int return_value_memcmp_1;
    return_value_memcmp_1=memcmp((const void *)addr, (const void *)old_addr, sizeof(struct anonymous_21) /*12300ul*/ );
    if(return_value_memcmp_1 == 0)
      return old_addr;

  }
  void *return_value_calloc_2;
  return_value_calloc_2=calloc((unsigned long int)1, sizeof(struct anonymous_21) /*12300ul*/ );
  new_addr = (struct anonymous_21 *)return_value_calloc_2;
  if(new_addr == ((struct anonymous_21 *)NULL))
  {
    health_check_out_of_memory("allocating net address information");
    return (struct anonymous_21 *)(void *)0;
  }

  else
  {
    memcpy((void *)new_addr, (const void *)addr, sizeof(struct anonymous_21) /*12300ul*/ );
    struct link *return_value_list_append_3;
    return_value_list_append_3=list_append(&net_cached_addrs, (void *)new_addr);
    if(return_value_list_append_3 == ((struct link *)NULL))
    {
      free((void *)new_addr);
      return (struct anonymous_21 *)(void *)0;
    }

    else
      return new_addr;
  }
}

// net_cache_inode_by_pid_and_fd
// file net.c line 192
static struct anonymous_17 * net_cache_inode_by_pid_and_fd(const signed int pid, const signed int fd)
{
  char path[4096l];
  char link[4096l];
  unsigned long int inode;
  struct anonymous_17 *nh = (struct anonymous_17 *)(void *)0;
  snprintf(path, sizeof(char [4096l]) /*4096ul*/ , "/proc/%i/fd/%i", pid, fd);
  signed int return_value_net_get_inode_by_path_1;
  return_value_net_get_inode_by_path_1=net_get_inode_by_path(path, &inode, link);
  if(!(return_value_net_get_inode_by_path_1 == -1))
    nh=net_hash_add(link, inode, pid, (const unsigned int)fd);

  return nh;
}

// net_cache_inodes
// file net.c line 278
static signed int net_cache_inodes(struct anonymous_3 *pids)
{
  struct link *l = pids->head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    struct proc_info *p = (struct proc_info *)l->data;
    signed int return_value_net_cache_inodes_pid_1;
    return_value_net_cache_inodes_pid_1=net_cache_inodes_pid(p->pid);
    if(!(return_value_net_cache_inodes_pid_1 >= 0))
      return -1;

  }
  return 0;
}

// net_cache_inodes_pid
// file net.c line 238
static signed int net_cache_inodes_pid(const signed int pid)
{
  char path[4096l];
  struct __dirstream *fds;
  struct dirent *d;
  snprintf(path, sizeof(char [4096l]) /*4096ul*/ , "/proc/%i/fd", pid);
  fds=opendir(path);
  if(fds == ((struct __dirstream *)NULL))
    return -1;

  else
  {
    do
    {
      d=readdir(fds);
      if(d == ((struct dirent *)NULL))
        break;

      unsigned long int inode;
      char tmp[2048l];
      char link[4096l];
      unsigned int fd;
      if(!((signed int)d->d_name[0l] == 46))
      {
        unsigned long int return_value_strlen_1;
        return_value_strlen_1=strlen(path);
        unsigned long int return_value_strlen_2;
        return_value_strlen_2=strlen(d->d_name);
        if(!(2ul + return_value_strlen_1 + return_value_strlen_2 >= 2049ul))
        {
          snprintf(tmp, sizeof(char [2048l]) /*2048ul*/ , "%s/%s", (const void *)path, (const void *)d->d_name);
          signed int return_value_net_get_inode_by_path_4;
          return_value_net_get_inode_by_path_4=net_get_inode_by_path(tmp, &inode, link);
          if(!(return_value_net_get_inode_by_path_4 == -1))
          {
            sscanf(d->d_name, "%u", &fd);
            struct anonymous_17 *return_value_net_hash_add_3;
            return_value_net_hash_add_3=net_hash_add(link, inode, pid, fd);
            if(return_value_net_hash_add_3 == ((struct anonymous_17 *)NULL))
            {
              closedir(fds);
              return -1;
            }

          }

        }

      }

    }
    while((_Bool)1);
    closedir(fds);
    return 0;
  }
}

// net_connection_cleanup
// file net.c line 816
extern void net_connection_cleanup(void)
{
  signed int i;
  list_free(&net_cached_addrs, free);
  i = 0;
  for( ; !(i >= 1993); i = i + 1)
    list_free(&net_hash_table[(signed long int)i], free);
}

// net_connection_dump
// file net.c line 466
extern void net_connection_dump(struct json_object *j_tests, double duration)
{
  struct link *ln;
  struct link *l;
  struct anonymous_3 dump_info_list;
  struct anonymous_3 sorted;
  signed int i;
  struct json_object *j_net_test = (struct json_object *)(void *)0;
  struct json_object *j_net_infos = (struct json_object *)(void *)0;
  struct json_object *j_net_info;
  unsigned long int send_total = (unsigned long int)0;
  unsigned long int recv_total = (unsigned long int)0;
  printf("Open Network Connections:\n");
  list_init(&dump_info_list);
  list_init(&sorted);
  if(!(j_tests == ((struct json_object *)NULL)))
  {
    j_net_test=j_obj_new_obj();
    if(j_net_test == ((struct json_object *)NULL))
      goto out;

    j_obj_obj_add(j_tests, "network-connections", j_net_test);
    j_net_infos=j_obj_new_array();
    if(j_net_infos == ((struct json_object *)NULL))
      goto out;

    j_obj_obj_add(j_net_test, "network-connections-per-process", j_net_infos);
  }

  i = 0;
  for( ; !(i >= 1993); i = i + 1)
  {
    ln = net_hash_table[(signed long int)i].head;
    for( ; !(ln == ((struct link *)NULL)); ln = ln->next)
    {
      _Bool found = (_Bool)0;
      struct anonymous_17 *nh = (struct anonymous_17 *)ln->data;
      struct anonymous_22 *dump_info;
      struct anonymous_21 *addr_info = (struct anonymous_21 *)(void *)0;
      l = net_cached_addrs.head;
      for( ; !(l == ((struct link *)NULL)); l = l->next)
      {
        addr_info = (struct anonymous_21 *)l->data;
        if(nh->inode == addr_info->inode)
        {
          found = (_Bool)1;
          break;
        }

      }
      if(nh->recv.data_total + nh->send.data_total == 0ul)
      {
        if(nh->proc->is_thread != (_Bool)0)
          goto __CPROVER_DUMP_L9;

      }

      if(found == (_Bool)0 || addr_info == ((struct anonymous_21 *)NULL))
      {
        struct anonymous_21 new_addr;
        memset((void *)&new_addr, 0, sizeof(struct anonymous_21) /*12300ul*/ );
        new_addr.inode = nh->inode;
        new_addr.type = (enum anonymous_19)NET_UNKNOWN;
        __builtin_strncpy(new_addr.u.path, nh->path, (unsigned long int)4096);
        addr_info=net_addr_add(&new_addr);
        if(addr_info == ((struct anonymous_21 *)NULL))
          goto out;

      }

      void *return_value_calloc_1;
      return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct anonymous_22) /*24ul*/ );
      dump_info = (struct anonymous_22 *)return_value_calloc_1;
      if(dump_info == ((struct anonymous_22 *)NULL))
        goto out;

      dump_info->addr_info = addr_info;
      dump_info->nh = nh;
      dump_info->send_recv_total = nh->send.data_total + nh->recv.data_total;
      net_add_dump_info(&dump_info_list, dump_info);

    __CPROVER_DUMP_L9:
      ;
    }
  }
  l = dump_info_list.head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    struct anonymous_22 *net_connection_dump__1__3__1__dump_info = (struct anonymous_22 *)l->data;
    list_add_ordered(&sorted, (void *)net_connection_dump__1__3__1__dump_info, net_dump_info_cmp);
  }
  if(dump_info_list.head == ((struct link *)NULL))
    printf(" None.\n\n");

  else
  {
    char sendbuf[64l];
    char recvbuf[64l];
    printf("  PID  Process              Proto         Send   Receive  Address\n");
    l = sorted.head;
    for( ; !(l == ((struct link *)NULL)); l = l->next)
    {
      struct anonymous_22 *net_connection_dump__1__5__1__1__dump_info = (struct anonymous_22 *)l->data;
      char *addr;
      addr=net_get_addr(net_connection_dump__1__5__1__1__dump_info->addr_info);
      net_size_to_str(sendbuf, sizeof(char [64l]) /*64ul*/ , net_connection_dump__1__5__1__1__dump_info->nh->send.data_total);
      net_size_to_str(recvbuf, sizeof(char [64l]) /*64ul*/ , net_connection_dump__1__5__1__1__dump_info->nh->recv.data_total);
      printf(" %5i %-20.20s %-7.7s  %s %s  %s\n", net_connection_dump__1__5__1__1__dump_info->nh->proc->pid, net_connection_dump__1__5__1__1__dump_info->nh->proc->cmdline, net_types[(signed long int)net_connection_dump__1__5__1__1__dump_info->addr_info->type], (const void *)sendbuf, (const void *)recvbuf, addr);
      send_total = send_total + net_connection_dump__1__5__1__1__dump_info->nh->send.data_total;
      recv_total = recv_total + net_connection_dump__1__5__1__1__dump_info->nh->recv.data_total;
      if(!(j_tests == ((struct json_object *)NULL)))
      {
        j_net_info=j_obj_new_obj();
        if(j_net_info == ((struct json_object *)NULL))
          goto out;

        j_obj_new_int32_add(j_net_info, "pid", net_connection_dump__1__5__1__1__dump_info->nh->proc->pid);
        j_obj_new_int32_add(j_net_info, "ppid", net_connection_dump__1__5__1__1__dump_info->nh->proc->ppid);
        j_obj_new_int32_add(j_net_info, "is-thread", (const signed int)net_connection_dump__1__5__1__1__dump_info->nh->proc->is_thread);
        j_obj_new_string_add(j_net_info, "name", net_connection_dump__1__5__1__1__dump_info->nh->proc->cmdline);
        j_obj_new_string_add(j_net_info, "protocol", net_types[(signed long int)net_connection_dump__1__5__1__1__dump_info->addr_info->type]);
        j_obj_new_string_add(j_net_info, "address", addr);
        j_obj_new_int64_add(j_net_info, "send", (const signed long int)net_connection_dump__1__5__1__1__dump_info->nh->send.data_total);
        j_obj_new_int64_add(j_net_info, "receive", (const signed long int)net_connection_dump__1__5__1__1__dump_info->nh->recv.data_total);
        j_obj_array_add(j_net_infos, j_net_info);
      }

    }
    net_size_to_str(sendbuf, sizeof(char [64l]) /*64ul*/ , send_total);
    net_size_to_str(recvbuf, sizeof(char [64l]) /*64ul*/ , recv_total);
    printf(" Total%31s%s %s\n\n", (const void *)"", (const void *)sendbuf, (const void *)recvbuf);
  }
  if(!(j_tests == ((struct json_object *)NULL)))
  {
    j_net_info=j_obj_new_obj();
    if(!(j_net_info == ((struct json_object *)NULL)))
    {
      j_obj_obj_add(j_net_test, "network-connections-total", j_net_info);
      j_obj_new_int64_add(j_net_info, "send-total", (const signed long int)send_total);
      j_obj_new_int64_add(j_net_info, "receive-total", (const signed long int)recv_total);
      j_obj_new_double_add(j_net_info, "send-total-rate", (double)send_total / duration);
      j_obj_new_double_add(j_net_info, "receive-total-rate", (double)recv_total / duration);
    }

  }


out:
  ;
  list_free(&sorted, (void (*)(void *))(void *)0);
  list_free(&dump_info_list, free);
}

// net_connection_init
// file net.c line 803
extern void net_connection_init(void)
{
  signed int i;
  list_init(&net_cached_addrs);
  i = 0;
  for( ; !(i >= 1993); i = i + 1)
    list_init(&net_hash_table[(signed long int)i]);
}

// net_connection_pid
// file net.c line 792
extern signed int net_connection_pid(const signed int pid)
{
  signed int return_value_net_cache_inodes_pid_1;
  return_value_net_cache_inodes_pid_1=net_cache_inodes_pid(pid);
  if(!(return_value_net_cache_inodes_pid_1 >= 0))
    return -1;

  else
  {
    signed int return_value_net_parse_2;
    return_value_net_parse_2=net_parse();
    return return_value_net_parse_2;
  }
}

// net_connection_pids
// file net.c line 780
extern signed int net_connection_pids(struct anonymous_3 *pids)
{
  signed int return_value_net_cache_inodes_1;
  return_value_net_cache_inodes_1=net_cache_inodes(pids);
  if(!(return_value_net_cache_inodes_1 >= 0))
    return -1;

  else
  {
    signed int return_value_net_parse_2;
    return_value_net_parse_2=net_parse();
    return return_value_net_parse_2;
  }
}

// net_dump_info_cmp
// file net.c line 429
static signed int net_dump_info_cmp(const void *p1, const void *p2)
{
  const struct anonymous_22 *d1 = (const struct anonymous_22 *)p1;
  const struct anonymous_22 *d2 = (const struct anonymous_22 *)p2;
  if(d2->send_recv_total == d1->send_recv_total)
    return d1->nh->proc->pid - d2->nh->proc->pid;

  else
    return (signed int)(d2->send_recv_total - d1->send_recv_total);
}

// net_get_addr
// file net.c line 360
static char * net_get_addr(struct anonymous_21 *addr_info)
{
  char buf[4096l];
  unsigned short int port;
  switch((signed int)addr_info->type)
  {
    case NET_TCP:

    case NET_TCP6:

    case NET_UDP:

    case NET_UDP6:
    {
      switch(addr_info->family)
      {
        case 10:
        {
          net_inet6_resolve(buf, sizeof(char [4096l]) /*4096ul*/ , &addr_info->u.addr6);
          port = addr_info->u.addr6.sin6_port;
          break;
        }
        case 2:
        {
          net_inet4_resolve(buf, sizeof(char [4096l]) /*4096ul*/ , &addr_info->u.addr4);
          port = addr_info->u.addr4.sin_port;
          break;
        }
        default:
          return (char *)(void *)0;
      }
      static char tmp[256l];
      snprintf(tmp, sizeof(char [256l]) /*256ul*/ , "%s:%d", (const void *)buf, port);
      return tmp;
    }
    case NET_UNIX:

    case NET_UNKNOWN:

    case NET_NETLINK:
      return addr_info->u.path;
    default:
      return (char *)(void *)0;
  }
}

// net_get_inode
// file net.c line 157
static signed int net_get_inode(const char *str, unsigned long int *inode)
{
  unsigned long int len;
  len=strlen(str);
  signed int return_value_strncmp_2;
  return_value_strncmp_2=strncmp(str, "socket:[", (unsigned long int)8);
  signed int return_value_sscanf_1;
  signed int return_value_sscanf_3;
  if(return_value_strncmp_2 == 0)
  {
    if(!((signed int)str[-1l + (signed long int)len] == 93))
      goto __CPROVER_DUMP_L1;

    return_value_sscanf_1=sscanf(str + (signed long int)8, "%lu", inode);
    return return_value_sscanf_1 == 1 ? 0 : -1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    signed int return_value_strncmp_4;
    return_value_strncmp_4=strncmp(str, "[0000]:", (unsigned long int)7);
    if(return_value_strncmp_4 == 0)
    {
      return_value_sscanf_3=sscanf(str + (signed long int)7, "%lu", inode);
      return return_value_sscanf_3 == 1 ? 0 : -1;
    }

    else
      return -1;
  }
}

// net_get_inode_by_path
// file net.c line 176
static signed int net_get_inode_by_path(const char *path, unsigned long int *inode, char *link)
{
  signed long int len;
  len=readlink(path, link, (unsigned long int)4096);
  if(!(len >= 0l))
  {
    *link = (char)0;
    return -1;
  }

  else
  {
    link[len] = (char)0;
    signed int return_value_net_get_inode_1;
    return_value_net_get_inode_1=net_get_inode(link, inode);
    return return_value_net_get_inode_1;
  }
}

// net_hash
// file net.c line 113
static inline unsigned long int net_hash(const unsigned long int inode)
{
  return inode % (unsigned long int)1993;
}

// net_hash_add
// file net.c line 122
static struct anonymous_17 * net_hash_add(const char *path, const unsigned long int inode, const signed int pid, const unsigned int fd)
{
  struct anonymous_17 *n;
  struct link *l;
  unsigned long int h;
  h=net_hash(inode);
  l = net_hash_table[(signed long int)h].head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    n = (struct anonymous_17 *)l->data;
    if(n->proc->pid == pid)
    {
      if(n->inode == inode)
        return n;

    }

  }
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct anonymous_17) /*4160ul*/ );
  n = (struct anonymous_17 *)return_value_calloc_1;
  if(n == ((struct anonymous_17 *)NULL))
  {
    health_check_out_of_memory("allocating net hash data");
    return (struct anonymous_17 *)(void *)0;
  }

  else
  {
    __builtin_strncpy(n->path, path, (unsigned long int)4096);
    n->inode = inode;
    n->proc=proc_cache_find_by_pid(pid);
    n->fd = fd;
    struct link *return_value_list_append_2;
    return_value_list_append_2=list_append(&net_hash_table[(signed long int)h], (void *)n);
    if(return_value_list_append_2 == ((struct link *)NULL))
    {
      free((void *)n);
      return (struct anonymous_17 *)(void *)0;
    }

    else
      return n;
  }
}

// net_inet4_resolve
// file net.c line 294
static void net_inet4_resolve(char *name, const unsigned long int len, struct sockaddr_in *sin)
{
  signed int return_value_getnameinfo_1;
  if(!((0x00000004 & opt_flags) == 0))
  {
    if(!(sin->sin_addr.s_addr == 0u))
    {
      return_value_getnameinfo_1=getnameinfo((struct sockaddr *)sin, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ , name, (unsigned int)len, (char *)(void *)0, (unsigned int)0, 8);
      if(return_value_getnameinfo_1 == 0)
        goto __CPROVER_DUMP_L3;

    }

  }

  signed int return_value_getnameinfo_2;
  return_value_getnameinfo_2=getnameinfo((struct sockaddr *)sin, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ , name, (unsigned int)len, (char *)(void *)0, (unsigned int)0, 1);
  if(!(return_value_getnameinfo_2 == 0))
  {
    __builtin_strncpy(name, "<unknown>", len);
    goto __CPROVER_DUMP_L3;
  }


__CPROVER_DUMP_L3:
  ;
}

// net_inet6_resolve
// file net.c line 312
static void net_inet6_resolve(char *name, const unsigned long int len, struct sockaddr_in6 *sin6)
{
  _Bool tmp_statement_expression_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  signed int return_value_getnameinfo_1;
  if(!((0x00000004 & opt_flags) == 0))
  {
    struct in6_addr *__a = (struct in6_addr *)&sin6->sin6_addr;
    if(__a->__in6_u.__u6_addr32[0l] == 0u)
      tmp_if_expr_3 = __a->__in6_u.__u6_addr32[(signed long int)1] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_3 = (_Bool)0;
    if(tmp_if_expr_3)
      tmp_if_expr_4 = __a->__in6_u.__u6_addr32[(signed long int)2] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_4 = (_Bool)0;
    if(tmp_if_expr_4)
      tmp_if_expr_5 = __a->__in6_u.__u6_addr32[(signed long int)3] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_5 = (_Bool)0;
    tmp_statement_expression_2 = tmp_if_expr_5;
    if(!tmp_statement_expression_2)
    {
      return_value_getnameinfo_1=getnameinfo((struct sockaddr *)sin6, (unsigned int)sizeof(struct sockaddr_in6) /*28ul*/ , name, (unsigned int)len, (char *)(void *)0, (unsigned int)0, 8);
      if(return_value_getnameinfo_1 == 0)
        goto __CPROVER_DUMP_L9;

    }

  }

  signed int return_value_getnameinfo_6;
  return_value_getnameinfo_6=getnameinfo((struct sockaddr *)sin6, (unsigned int)sizeof(struct sockaddr_in6) /*28ul*/ , name, (unsigned int)len, (char *)(void *)0, (unsigned int)0, 1);
  if(!(return_value_getnameinfo_6 == 0))
  {
    __builtin_strncpy(name, "<unknown>", len);
    goto __CPROVER_DUMP_L9;
  }


__CPROVER_DUMP_L9:
  ;
}

// net_netlink_parse
// file net.c line 721
static signed int net_netlink_parse(void)
{
  struct _IO_FILE *fp;
  char buf[4096l];
  signed int i;
  unsigned long int inode;
  fp=fopen("/proc/net/netlink", "r");
  char *return_value_fgets_1;
  if(fp == ((struct _IO_FILE *)NULL))
  {
    fprintf(stderr, "Cannot open /proc/net/netlink.\n");
    return -1;
  }

  else
  {
    i = 0;
    do
    {
      return_value_fgets_1=fgets(buf, (signed int)sizeof(char [4096l]) /*4096ul*/ , fp);
      if(return_value_fgets_1 == ((char *)NULL))
        break;

      struct anonymous_21 new_addr;
      if(!(i == 0))
      {
        signed int return_value_sscanf_2;
        return_value_sscanf_2=sscanf(buf, "%*X %*d %*d %*x %*d %*d %*d %*d %*d %lu", &inode);
        if(return_value_sscanf_2 == 1)
        {
          memset((void *)&new_addr, 0, sizeof(struct anonymous_21) /*12300ul*/ );
          new_addr.inode = inode;
          new_addr.type = (enum anonymous_19)NET_NETLINK;
          snprintf(new_addr.u.path, (unsigned long int)4096, "netlink:[%lu]", inode);
          net_addr_add(&new_addr);
        }

      }

      i = i + 1;
    }
    while((_Bool)1);
    fclose(fp);
    return 0;
  }
}

// net_parse
// file net.c line 757
static signed int net_parse(void)
{
  signed int return_value_net_tcp_udp_parse_1;
  return_value_net_tcp_udp_parse_1=net_tcp_udp_parse((const enum anonymous_19)NET_TCP);
  if(!(return_value_net_tcp_udp_parse_1 >= 0))
    return -1;

  else
  {
    signed int return_value_net_tcp_udp_parse_2;
    return_value_net_tcp_udp_parse_2=net_tcp_udp_parse((const enum anonymous_19)NET_TCP6);
    if(!(return_value_net_tcp_udp_parse_2 >= 0))
      return -1;

    else
    {
      signed int return_value_net_tcp_udp_parse_3;
      return_value_net_tcp_udp_parse_3=net_tcp_udp_parse((const enum anonymous_19)NET_UDP);
      if(!(return_value_net_tcp_udp_parse_3 >= 0))
        return -1;

      else
      {
        signed int return_value_net_tcp_udp_parse_4;
        return_value_net_tcp_udp_parse_4=net_tcp_udp_parse((const enum anonymous_19)NET_UDP6);
        if(!(return_value_net_tcp_udp_parse_4 >= 0))
          return -1;

        else
        {
          signed int return_value_net_unix_parse_5;
          return_value_net_unix_parse_5=net_unix_parse();
          if(!(return_value_net_unix_parse_5 >= 0))
            return -1;

          else
          {
            signed int return_value_net_netlink_parse_6;
            return_value_net_netlink_parse_6=net_netlink_parse();
            if(!(return_value_net_netlink_parse_6 >= 0))
              return -1;

            else
              return 0;
          }
        }
      }
    }
  }
}

// net_size_to_str
// file net.c line 444
static void net_size_to_str(char *buf, unsigned long int buf_len, unsigned long int size)
{
  double s;
  char unit;
  if(!(size >= 1024ul))
  {
    s = (double)size;
    unit = (char)66;
  }

  else
    if(!(size >= 1048576ul))
    {
      s = (double)size / 1024.0;
      unit = (char)75;
    }

    else
    {
      s = (double)size / (double)(1024 * 1024);
      unit = (char)77;
    }
  snprintf(buf, buf_len, "%7.2f %c", s, unit);
}

// net_tcp_udp_parse
// file net.c line 649
static signed int net_tcp_udp_parse(const enum anonymous_19 type)
{
  struct _IO_FILE *fp;
  char *procfile;
  char buf[4096l];
  char addr_str[128l];
  unsigned short int port;
  signed int i;
  unsigned long int inode;
  switch((signed int)type)
  {
    case NET_TCP:
    {
      procfile = "/proc/net/tcp";
      break;
    }
    case NET_TCP6:
    {
      procfile = "/proc/net/tcp6";
      break;
    }
    case NET_UDP:
    {
      procfile = "/proc/net/udp";
      break;
    }
    case NET_UDP6:
    {
      procfile = "/proc/net/udp6";
      break;
    }
    default:
    {
      fprintf(stderr, "net_parse given bad net type.\n");
      return -1;
    }
  }
  fp=fopen(procfile, "r");
  char *return_value_fgets_1;
  if(fp == ((struct _IO_FILE *)NULL))
  {
    fprintf(stderr, "Cannot open %s.\n", procfile);
    return -1;
  }

  else
  {
    i = 0;
    do
    {
      return_value_fgets_1=fgets(buf, (signed int)sizeof(char [4096l]) /*4096ul*/ , fp);
      if(return_value_fgets_1 == ((char *)NULL))
        break;

      struct anonymous_21 new_addr;
      if(!(i == 0))
      {
        sscanf(buf, "%*d: %*64[0-9A-Fa-f]:%*X %64[0-9A-Fa-f]:%hx %*X %*X:%*X %*X:%*X %*X %*d %*d %lu", (const void *)addr_str, &port, &inode);
        memset((void *)&new_addr, 0, sizeof(struct anonymous_21) /*12300ul*/ );
        new_addr.inode = inode;
        new_addr.type = type;
        unsigned long int return_value_strlen_2;
        return_value_strlen_2=strlen(addr_str);
        if(return_value_strlen_2 >= 9ul)
        {
          new_addr.u.addr6.sin6_family = (unsigned short int)10;
          new_addr.family = (signed int)new_addr.u.addr6.sin6_family;
          new_addr.u.addr6.sin6_port = port;
          sscanf(addr_str, "%08X%08X%08X%08X", &new_addr.u.addr6.sin6_addr.__in6_u.__u6_addr32[(signed long int)0], &new_addr.u.addr6.sin6_addr.__in6_u.__u6_addr32[(signed long int)1], &new_addr.u.addr6.sin6_addr.__in6_u.__u6_addr32[(signed long int)2], &new_addr.u.addr6.sin6_addr.__in6_u.__u6_addr32[(signed long int)3]);
        }

        else
        {
          new_addr.u.addr4.sin_family = (unsigned short int)2;
          new_addr.family = (signed int)new_addr.u.addr4.sin_family;
          new_addr.u.addr4.sin_port = port;
          sscanf(addr_str, "%8X", &new_addr.u.addr4.sin_addr.s_addr);
        }
        net_addr_add(&new_addr);
      }

      i = i + 1;
    }
    while((_Bool)1);
    fclose(fp);
    return 0;
  }
}

// net_unix_parse
// file net.c line 611
static signed int net_unix_parse(void)
{
  struct _IO_FILE *fp;
  char buf[4096l];
  signed int i;
  fp=fopen("/proc/net/unix", "r");
  char *return_value_fgets_1;
  if(fp == ((struct _IO_FILE *)NULL))
  {
    fprintf(stderr, "Cannot open /proc/net/unix\n");
    return -1;
  }

  else
  {
    i = 0;
    do
    {
      return_value_fgets_1=fgets(buf, (signed int)sizeof(char [4096l]) /*4096ul*/ , fp);
      if(return_value_fgets_1 == ((char *)NULL))
        break;

      unsigned long int inode;
      char path[4096l];
      struct anonymous_21 new_addr;
      if(!(i == 0))
      {
        sscanf(buf, "%*x: %*x %*x %*x %*x %*x %lu %s\n", &inode, (const void *)path);
        memset((void *)&new_addr, 0, sizeof(struct anonymous_21) /*12300ul*/ );
        new_addr.inode = inode;
        new_addr.type = (enum anonymous_19)NET_UNIX;
        __builtin_strncpy(new_addr.u.path, path, (unsigned long int)4096);
        net_addr_add(&new_addr);
      }

      i = i + 1;
    }
    while((_Bool)1);
    fclose(fp);
    return 0;
  }
}

// pagefault_cmp
// file cpustat.c line 214
static signed int pagefault_cmp(const void *data1, const void *data2)
{
  struct anonymous_37 *cpustat1 = (struct anonymous_37 *)data1;
  struct anonymous_37 *cpustat2 = (struct anonymous_37 *)data2;
  return (signed int)((cpustat2->major_fault + cpustat2->minor_fault) - (cpustat1->major_fault + cpustat1->minor_fault));
}

// pagefault_dump_diff
// file cpustat.c line 227
extern signed int pagefault_dump_diff(struct json_object *j_tests, const double duration)
{
  signed int rc = 0;
  struct link *lo;
  struct link *ln;
  struct anonymous_3 sorted;
  struct anonymous_37 *cio;
  struct anonymous_37 *cin;
  list_init(&sorted);
  ln = cpustat_info_finish.head;
  for( ; !(ln == ((struct link *)NULL)); ln = ln->next)
  {
    cin = (struct anonymous_37 *)ln->data;
    lo = cpustat_info_start.head;
    for( ; !(lo == ((struct link *)NULL)); lo = lo->next)
    {
      cio = (struct anonymous_37 *)lo->data;
      if(cin->proc->pid == cio->proc->pid)
      {
        struct anonymous_37 *cpustat;
        void *return_value_calloc_1;
        return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct anonymous_37) /*72ul*/ );
        cpustat = (struct anonymous_37 *)return_value_calloc_1;
        if(cpustat == ((struct anonymous_37 *)NULL))
        {
          health_check_out_of_memory("cannot allocate cpustat information");
          goto out;
        }

        cpustat->proc = cio->proc;
        cpustat->major_fault = cin->major_fault - cio->major_fault;
        cpustat->minor_fault = cin->minor_fault - cio->minor_fault;
        double return_value_timeval_to_double_2;
        return_value_timeval_to_double_2=timeval_to_double(&cin->whence);
        double return_value_timeval_to_double_3;
        return_value_timeval_to_double_3=timeval_to_double(&cio->whence);
        cpustat->duration = return_value_timeval_to_double_2 - return_value_timeval_to_double_3;
        struct link *return_value_list_add_ordered_4;
        return_value_list_add_ordered_4=list_add_ordered(&sorted, (void *)cpustat, pagefault_cmp);
        if(return_value_list_add_ordered_4 == ((struct link *)NULL))
        {
          free((void *)cpustat);
          goto out;
        }

      }

    }
  }
  printf("Page Faults:\n");
  if(sorted.head == ((struct link *)NULL))
    printf(" Nothing measured.\n");

  else
  {
    printf("  PID  Process                 Minor/sec    Major/sec    Total/sec\n");
    ln = sorted.head;
    for( ; !(ln == ((struct link *)NULL)); ln = ln->next)
    {
      cin = (struct anonymous_37 *)ln->data;
      printf(" %5d %-20.20s %12.2f %12.2f %12.2f\n", cin->proc->pid, cin->proc->cmdline, (double)cin->minor_fault / duration, (double)cin->major_fault / duration, (double)(cin->minor_fault + cin->major_fault) / duration);
    }
  }
  if(!(j_tests == ((struct json_object *)NULL)))
  {
    struct json_object *j_fault_info;
    struct json_object *j_faults;
    struct json_object *j_fault;
    unsigned long int minor_fault_total = (unsigned long int)0;
    unsigned long int major_fault_total = (unsigned long int)0;
    j_fault_info=j_obj_new_obj();
    if(j_fault_info == ((struct json_object *)NULL))
      goto out;

    j_obj_obj_add_link4(j_tests, "page-faults", j_fault_info);
    j_faults=j_obj_new_array();
    if(j_faults == ((struct json_object *)NULL))
      goto out;

    j_obj_obj_add_link4(j_fault_info, "page-faults-per-process", j_faults);
    ln = sorted.head;
    for( ; !(ln == ((struct link *)NULL)); ln = ln->next)
    {
      cin = (struct anonymous_37 *)ln->data;
      j_fault=j_obj_new_obj();
      if(j_fault == ((struct json_object *)NULL))
        goto out;

      j_obj_new_int32_add_link4(j_fault, "pid", cin->proc->pid);
      j_obj_new_int32_add_link4(j_fault, "ppid", cin->proc->ppid);
      j_obj_new_int32_add_link4(j_fault, "is-thread", (const signed int)cin->proc->is_thread);
      j_obj_new_string_add_link4(j_fault, "name", cin->proc->cmdline);
      j_obj_new_int64_add_link4(j_fault, "minor-page-faults", (const signed long int)cin->minor_fault);
      j_obj_new_int64_add_link4(j_fault, "major-page-faults", (const signed long int)cin->major_fault);
      j_obj_new_int64_add_link4(j_fault, "total-page-faults", (const signed long int)(cin->minor_fault + cin->major_fault));
      j_obj_new_double_add_link4(j_fault, "minor-page-faults-rate", (double)cin->minor_fault / duration);
      j_obj_new_double_add_link4(j_fault, "major-page-faults-rate", (double)cin->major_fault / duration);
      j_obj_new_double_add_link4(j_fault, "total-page-faults-rate", (double)(cin->minor_fault + cin->major_fault) / duration);
      j_obj_array_add_link4(j_faults, j_fault);
      minor_fault_total = minor_fault_total + cin->minor_fault;
      major_fault_total = major_fault_total + cin->major_fault;
    }
    j_fault=j_obj_new_obj();
    if(j_fault == ((struct json_object *)NULL))
      goto out;

    j_obj_obj_add_link4(j_fault_info, "page-faults-total", j_fault);
    j_obj_new_int64_add_link4(j_fault, "minor-page-faults-total", (const signed long int)minor_fault_total);
    j_obj_new_int64_add_link4(j_fault, "major-page-faults-total", (const signed long int)major_fault_total);
    j_obj_new_int64_add_link4(j_fault, "total-page-faults-total", (const signed long int)(minor_fault_total + major_fault_total));
    j_obj_new_double_add_link4(j_fault, "minor-page-faults-total-rate", (double)minor_fault_total / duration);
    j_obj_new_double_add_link4(j_fault, "major-page-faults-total-rate", (double)major_fault_total / duration);
    j_obj_new_double_add_link4(j_fault, "total-page-faults-total-rate", (double)(minor_fault_total + major_fault_total) / duration);
  }

  printf("\n");

out:
  ;
  list_free(&sorted, free);
  return rc;
}

// parse_pid_list
// file health-check.c line 131
static signed int parse_pid_list(char *arg, struct anonymous_3 *pids)
{
  char *str;
  char *token;
  char *saveptr = (char *)(void *)0;
  str = arg;
  char *return_value___strtok_r_1;
  do
  {
    return_value___strtok_r_1=__strtok_r(str, ",", &saveptr);
    token = return_value___strtok_r_1;
    if(token == ((char *)NULL))
      break;

    const unsigned short int **return_value___ctype_b_loc_7;
    return_value___ctype_b_loc_7=__ctype_b_loc();
    if(!((2048 & (signed int)(*return_value___ctype_b_loc_7)[(signed long int)(signed int)*token]) == 0))
    {
      struct proc_info *p;
      signed int pid;
      signed int *return_value___errno_location_2;
      return_value___errno_location_2=__errno_location();
      *return_value___errno_location_2 = 0;
      signed long int return_value_strtol_3;
      return_value_strtol_3=strtol(token, (char ** restrict )(void *)0, 10);
      pid = (signed int)return_value_strtol_3;
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      if(!(*return_value___errno_location_4 == 0))
      {
        fprintf(stderr, "Invalid pid specified.\n");
        return -1;
      }

      p=proc_cache_find_by_pid(pid);
      if(p == ((struct proc_info *)NULL))
      {
        fprintf(stderr, "Cannot find process with PID %i.\n", pid);
        return -1;
      }

      signed int return_value_proc_pids_add_proc_5;
      return_value_proc_pids_add_proc_5=proc_pids_add_proc(pids, p);
      if(!(return_value_proc_pids_add_proc_5 >= 0))
        return -1;

    }

    else
    {
      signed int return_value_proc_cache_find_by_procname_6;
      return_value_proc_cache_find_by_procname_6=proc_cache_find_by_procname(pids, token);
      if(!(return_value_proc_cache_find_by_procname_6 >= 0))
        return -1;

    }
    str = (char *)(void *)0;
  }
  while((_Bool)1);
  return 0;
}

// pid_exists
// file pid.c line 102
extern _Bool pid_exists(const signed int pid)
{
  char path[4096l];
  struct stat statbuf;
  snprintf(path, sizeof(char [4096l]) /*4096ul*/ , "/proc/%i", pid);
  signed int return_value_stat_1;
  return_value_stat_1=stat(path, &statbuf);
  return return_value_stat_1 == 0;
}

// pid_get_children
// file pid.c line 134
static signed int pid_get_children(const signed int pid, struct anonymous_3 *children)
{
  struct link *l = proc_cache_list.head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    struct proc_info *p = (struct proc_info *)l->data;
    if(p->ppid == pid)
    {
      struct link *return_value_list_append_1;
      return_value_list_append_1=list_append(children, (void *)p);
      if(return_value_list_append_1 == ((struct link *)NULL))
        return -1;

      pid_get_children(p->pid, children);
    }

  }
  return 0;
}

// pid_list_find
// file pid.c line 115
extern _Bool pid_list_find(const signed int pid, struct anonymous_3 *list)
{
  struct link *l = list->head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    struct proc_info *p = (struct proc_info *)l->data;
    if(p->pid == pid)
      return (_Bool)1;

  }
  return (_Bool)0;
}

// pid_list_get_children
// file pid.c line 157
extern signed int pid_list_get_children(struct anonymous_3 *pids)
{
  struct link *l;
  struct anonymous_3 children;
  struct proc_info *p;
  list_init(&children);
  l = pids->head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    p = (struct proc_info *)l->data;
    signed int return_value_pid_get_children_1;
    return_value_pid_get_children_1=pid_get_children(p->pid, &children);
    if(!(return_value_pid_get_children_1 >= 0))
      return -1;

  }
  l = children.head;
  struct link *return_value_list_append_2;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    p = (struct proc_info *)l->data;
    _Bool return_value_pid_list_find_3;
    return_value_pid_list_find_3=pid_list_find(p->pid, pids);
    if(return_value_pid_list_find_3 == (_Bool)0)
    {
      return_value_list_append_2=list_append(pids, (void *)p);
      if(return_value_list_append_2 == ((struct link *)NULL))
        return -1;

    }

  }
  list_free(&children, (void (*)(void *))(void *)0);
  return 0;
}

// proc_cache_add
// file proc.c line 96
extern struct proc_info * proc_cache_add(const signed int pid, const signed int ppid, const _Bool is_thread)
{
  struct proc_info *p;
  unsigned long int h;
  _Bool return_value_pid_exists_1;
  return_value_pid_exists_1=pid_exists(pid);
  _Bool tmp_if_expr_3;
  signed int return_value_getpid_2;
  if(return_value_pid_exists_1 == (_Bool)0)
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_getpid_2=getpid();
    tmp_if_expr_3 = pid == return_value_getpid_2 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_3)
    return (struct proc_info *)(void *)0;

  else
  {
    pthread_mutex_lock(&proc_cache_mutex);
    h=proc_cache_hash_pid(pid);
    p = proc_cache_hash[(signed long int)h];
    for( ; !(p == ((struct proc_info *)NULL)); p = p->next)
      if(p->pid == pid)
      {
        pthread_mutex_unlock(&proc_cache_mutex);
        return p;
      }

    pthread_mutex_unlock(&proc_cache_mutex);
    struct proc_info *return_value_proc_cache_add_at_hash_index_4;
    return_value_proc_cache_add_at_hash_index_4=proc_cache_add_at_hash_index(h, pid, ppid, is_thread);
    return return_value_proc_cache_add_at_hash_index_4;
  }
}

// proc_cache_add_at_hash_index
// file proc.c line 59
static struct proc_info * proc_cache_add_at_hash_index(const unsigned long int h, const signed int pid, const signed int ppid, const _Bool is_thread)
{
  struct proc_info *p;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct proc_info) /*40ul*/ );
  p = (struct proc_info *)return_value_calloc_1;
  if(p == ((struct proc_info *)NULL))
  {
    health_check_out_of_memory("allocating proc cache");
    return (struct proc_info *)(void *)0;
  }

  else
  {
    p->pid = pid;
    p->ppid = ppid;
    p->cmdline=get_pid_cmdline(pid);
    p->comm=get_pid_comm(pid);
    p->is_thread = is_thread;
    pthread_mutex_lock(&proc_cache_mutex);
    struct link *return_value_list_append_2;
    return_value_list_append_2=list_append(&proc_cache_list, (void *)p);
    if(return_value_list_append_2 == ((struct link *)NULL))
    {
      pthread_mutex_unlock(&proc_cache_mutex);
      free((void *)p->cmdline);
      free((void *)p);
      return (struct proc_info *)(void *)0;
    }

    else
    {
      p->next = proc_cache_hash[(signed long int)h];
      proc_cache_hash[(signed long int)h] = p;
      pthread_mutex_unlock(&proc_cache_mutex);
      return p;
    }
  }
}

// proc_cache_cleanup
// file proc.c line 326
extern void proc_cache_cleanup(void)
{
  list_free(&proc_cache_list, proc_cache_info_free);
}

// proc_cache_find_by_pid
// file proc.c line 122
extern struct proc_info * proc_cache_find_by_pid(const signed int pid)
{
  unsigned long int h;
  struct proc_info *p;
  pthread_mutex_lock(&proc_cache_mutex);
  h=proc_cache_hash_pid(pid);
  p = proc_cache_hash[(signed long int)h];
  for( ; !(p == ((struct proc_info *)NULL)); p = p->next)
    if(p->pid == pid)
    {
      pthread_mutex_unlock(&proc_cache_mutex);
      return p;
    }

  pthread_mutex_unlock(&proc_cache_mutex);
  _Bool return_value_pid_exists_1;
  return_value_pid_exists_1=pid_exists(pid);
  _Bool tmp_if_expr_3;
  signed int return_value_getpid_2;
  if(return_value_pid_exists_1 == (_Bool)0)
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_getpid_2=getpid();
    tmp_if_expr_3 = pid == return_value_getpid_2 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_3)
    return (struct proc_info *)(void *)0;

  else
  {
    struct proc_info *return_value_proc_cache_add_at_hash_index_4;
    return_value_proc_cache_add_at_hash_index_4=proc_cache_add_at_hash_index(h, pid, 0, (const _Bool)0);
    return return_value_proc_cache_add_at_hash_index_4;
  }
}

// proc_cache_find_by_procname
// file proc.c line 287
extern signed int proc_cache_find_by_procname(struct anonymous_3 *pids, const char *procname)
{
  _Bool found = (_Bool)0;
  struct link *l;
  pthread_mutex_lock(&proc_cache_mutex);
  l = proc_cache_list.head;
  signed int tmp_statement_expression_1;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    struct proc_info *p = (struct proc_info *)l->data;
    if(!(p->cmdline == ((char *)NULL)))
    {
      unsigned long int __s1_len;
      unsigned long int __s2_len;
      signed int return_value___builtin_strcmp_2;
      return_value___builtin_strcmp_2=__builtin_strcmp(p->cmdline, procname);
      tmp_statement_expression_1 = return_value___builtin_strcmp_2;
      if(tmp_statement_expression_1 == 0)
      {
        proc_pids_add_proc(pids, p);
        found = (_Bool)1;
      }

    }

  }
  pthread_mutex_unlock(&proc_cache_mutex);
  if(found == (_Bool)0)
  {
    fprintf(stderr, "Cannot find process %s.\n", procname);
    return -1;
  }

  else
    return 0;
}

// proc_cache_get
// file proc.c line 152
extern signed int proc_cache_get(void)
{
  struct __dirstream *procdir;
  struct dirent *procentry;
  procdir=opendir("/proc");
  if(procdir == ((struct __dirstream *)NULL))
  {
    fprintf(stderr, "Cannot open directory /proc.\n");
    return -1;
  }

  else
  {
    do
    {
      procentry=readdir(procdir);
      if(procentry == ((struct dirent *)NULL))
        break;

      struct _IO_FILE *fp;
      char path[4096l];
      const unsigned short int **return_value___ctype_b_loc_1;
      return_value___ctype_b_loc_1=__ctype_b_loc();
      if(!((2048 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)(signed int)procentry->d_name[0l]]) == 0))
      {
        snprintf(path, sizeof(char [4096l]) /*4096ul*/ , "/proc/%s/stat", (const void *)procentry->d_name);
        fp=fopen(path, "r");
        if(!(fp == ((struct _IO_FILE *)NULL)))
        {
          signed int pid;
          signed int ppid;
          char comm[64l];
          signed int return_value_fscanf_2;
          return_value_fscanf_2=fscanf(fp, "%8d (%63[^)]) %*c %8i", &pid, (const void *)comm, &ppid);
          if(return_value_fscanf_2 == 3)
            proc_cache_add(pid, ppid, (const _Bool)0);

          fclose(fp);
        }

      }

    }
    while((_Bool)1);
    closedir(procdir);
    return 0;
  }
}

// proc_cache_get_pthreads
// file proc.c line 191
extern signed int proc_cache_get_pthreads(void)
{
  struct __dirstream *procdir;
  struct dirent *procentry;
  procdir=opendir("/proc");
  if(procdir == ((struct __dirstream *)NULL))
  {
    fprintf(stderr, "Cannot open directory /proc.\n");
    return -1;
  }

  else
  {
    do
    {
      procentry=readdir(procdir);
      if(procentry == ((struct dirent *)NULL))
        break;

      struct __dirstream *taskdir;
      struct dirent *taskentry;
      char path[4096l];
      signed int ppid;
      const unsigned short int **return_value___ctype_b_loc_1;
      return_value___ctype_b_loc_1=__ctype_b_loc();
      if(!((2048 & (signed int)(*return_value___ctype_b_loc_1)[(signed long int)(signed int)procentry->d_name[0l]]) == 0))
      {
        signed int *return_value___errno_location_2;
        return_value___errno_location_2=__errno_location();
        *return_value___errno_location_2 = 0;
        signed long int return_value_strtol_3;
        return_value_strtol_3=strtol(procentry->d_name, (char ** restrict )(void *)0, 10);
        ppid = (signed int)return_value_strtol_3;
        signed int *return_value___errno_location_4;
        return_value___errno_location_4=__errno_location();
        if(*return_value___errno_location_4 == 0)
        {
          snprintf(path, sizeof(char [4096l]) /*4096ul*/ , "/proc/%i/task", ppid);
          taskdir=opendir(path);
          if(!(taskdir == ((struct __dirstream *)NULL)))
          {
            proc_cache_add(ppid, 0, (const _Bool)0);
            do
            {
              taskentry=readdir(taskdir);
              if(taskentry == ((struct dirent *)NULL))
                break;

              signed int pid;
              const unsigned short int **return_value___ctype_b_loc_5;
              return_value___ctype_b_loc_5=__ctype_b_loc();
              if(!((2048 & (signed int)(*return_value___ctype_b_loc_5)[(signed long int)(signed int)taskentry->d_name[0l]]) == 0))
              {
                pid=atoi(taskentry->d_name);
                if(!(pid == ppid))
                {
                  struct proc_info *return_value_proc_cache_add_6;
                  return_value_proc_cache_add_6=proc_cache_add(pid, ppid, (const _Bool)1);
                  if(return_value_proc_cache_add_6 == ((struct proc_info *)NULL))
                  {
                    closedir(taskdir);
                    closedir(procdir);
                    return -1;
                  }

                }

              }

            }
            while((_Bool)1);
            closedir(taskdir);
          }

        }

      }

    }
    while((_Bool)1);
    closedir(procdir);
    return 0;
  }
}

// proc_cache_hash_pid
// file proc.c line 48
static inline unsigned long int proc_cache_hash_pid(const signed int pid)
{
  unsigned long int h = (unsigned long int)pid;
  return h % (unsigned long int)1997;
}

// proc_cache_info_free
// file proc.c line 249
static void proc_cache_info_free(void *data)
{
  struct proc_info *p = (struct proc_info *)data;
  free((void *)p->cmdline);
  free((void *)p->comm);
  free((void *)p);
}

// proc_cache_init
// file proc.c line 317
extern void proc_cache_init(void)
{
  list_init(&proc_cache_list);
}

// proc_pids_add_proc
// file proc.c line 262
extern signed int proc_pids_add_proc(struct anonymous_3 *pids, struct proc_info *p)
{
  signed int rc = 0;
  if(p->pid == 1)
  {
    fprintf(stderr, "Cannot run health-check on init. Aborting.\n");
    health_check_exit(1);
  }

  signed int return_value_getpid_1;
  return_value_getpid_1=getpid();
  if(p->pid == return_value_getpid_1)
  {
    fprintf(stderr, "Cannot run health-check on itself. Aborting.\n");
    health_check_exit(1);
  }

  pthread_mutex_lock(&pids_mutex);
  struct link *return_value_list_append_2;
  return_value_list_append_2=list_append(pids, (void *)p);
  if(return_value_list_append_2 == ((struct link *)NULL))
    rc = -1;

  pthread_mutex_unlock(&pids_mutex);
  return rc;
}

// putchar
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 79
static inline signed int putchar(signed int __c)
{
  signed int return_value__IO_putc_1;
  return_value__IO_putc_1=_IO_putc(__c, stdout);
  return return_value__IO_putc_1;
}

// show_usage
// file health-check.c line 97
static void show_usage(void)
{
  printf("%s, version %s\n\n", (const void *)"health-check", (const void *)"0.02.02");
  printf("Usage: %s [options] [command [options]]\n", (const void *)"health-check");
  printf("Options are:\n");
  printf("  -b\t\tbrief (terse) output\n");
  printf("  -c            find all child processes on start-up\n");
  printf("                (only useful with -p option)\n");
  printf("  -d            specify the analysis duration in seconds\n");
  printf("                (default is 60 seconds)\n");
  printf("  -f\t\tfollow fork/vfork/clone system calls\n");
  printf("  -h            show this help\n");
  printf("  -p pid[,pid]  specify process id(s) or process name(s) to be traced\n");
  printf("  -m max        specify maximum number of system calls to trace\n");
  printf("\t\t(default is 1000000)\n");
  printf("  -o file       output results to a json data file\n");
  printf("  -r            resolve IP addresses\n");
  printf("  -u user       run command as a specified user\n");
  printf("  -v            verbose output\n");
  printf("  -w            monitor wakelock count\n");
  printf("  -W            monitor wakelock usage (has overhead)\n");
  health_check_exit(0);
}

// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf)
{
  signed int return_value___xstat_1;
  return_value___xstat_1=__xstat(1, __path, __statbuf);
  return return_value___xstat_1;
}

// stat_link1
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat_link1(const char *__path_link1, struct stat *__statbuf_link1)
{
  signed int return_value___xstat_1_link1;
  return_value___xstat_1_link1=__xstat(1, __path_link1, __statbuf_link1);
  return return_value___xstat_1_link1;
}

// syscall_account_return
// file syscall.c line 2310
static void syscall_account_return(struct syscall_info *s, const signed int pid, const signed int syscall, const double timeout)
{
  _Bool return_value_syscall_valid_4;
  return_value_syscall_valid_4=syscall_valid(syscall);
  if(!(return_value_syscall_valid_4 == (_Bool)0))
  {
    struct syscall *sc = &syscalls[(signed long int)syscall];
    signed int ret;
    signed int return_value_syscall_get_return_1;
    return_value_syscall_get_return_1=syscall_get_return(pid, &ret);
    if(!(return_value_syscall_get_return_1 >= 0))
      goto __CPROVER_DUMP_L7;

    if(!(sc->call_return == ((void (*)(const struct syscall *, const struct syscall_info *, const signed int))NULL)))
      sc->call_return(sc, s, ret);

    else
      if(!(sc->call_return_timeout == ((void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))NULL)))
      {
        struct anonymous_26 *info;
        void *return_value_calloc_2;
        return_value_calloc_2=calloc((unsigned long int)1, sizeof(struct anonymous_26) /*16ul*/ );
        info = (struct anonymous_26 *)return_value_calloc_2;
        if(info == ((struct anonymous_26 *)NULL))
        {
          health_check_out_of_memory("allocating syscall accounting information");
          goto __CPROVER_DUMP_L7;
        }

        info->timeout = timeout;
        info->ret = ret;
        struct link *return_value_list_append_3;
        return_value_list_append_3=list_append(&s->return_history, (void *)info);
        if(return_value_list_append_3 == ((struct link *)NULL))
          free((void *)info);

      }

  }


__CPROVER_DUMP_L7:
  ;
}

// syscall_account_sync_file
// file syscall.c line 1257
static void syscall_account_sync_file(struct anonymous *info, const signed int syscall, const signed int pid, const signed int fd)
{
  struct anonymous_0 *f;
  struct fd_cache *fc;
  struct link *l;
  fc=syscall_fd_cache_lookup(pid, fd);
  signed int tmp_statement_expression_1;
  if(!(fc == ((struct fd_cache *)NULL)))
  {
    l = info->sync_file.head;
    for( ; !(l == ((struct link *)NULL)); l = l->next)
    {
      f = (struct anonymous_0 *)l->data;
      if(f->syscall == syscall)
      {
        unsigned long int __s1_len;
        unsigned long int __s2_len;
        signed int return_value___builtin_strcmp_2;
        return_value___builtin_strcmp_2=__builtin_strcmp(f->filename, fc->filename);
        tmp_statement_expression_1 = return_value___builtin_strcmp_2;
        if(tmp_statement_expression_1 == 0)
        {
          f->count = f->count + 1ul;
          goto __CPROVER_DUMP_L7;
        }

      }

    }
    void *return_value_calloc_3;
    return_value_calloc_3=calloc((unsigned long int)1, sizeof(struct anonymous_0) /*24ul*/ );
    f = (struct anonymous_0 *)return_value_calloc_3;
    if(f == ((struct anonymous_0 *)NULL))
      health_check_out_of_memory("allocating file sync filename info");

    else
    {
      char *return_value___strdup_4;
      return_value___strdup_4=__strdup(fc->filename);
      f->filename = return_value___strdup_4;
      f->syscall = syscall;
      f->count = (unsigned long int)1;
      struct link *return_value_list_append_5;
      return_value_list_append_5=list_append(&info->sync_file, (void *)f);
      if(return_value_list_append_5 == ((struct link *)NULL))
      {
        free((void *)f->filename);
        free((void *)f);
      }

    }
  }


__CPROVER_DUMP_L7:
  ;
}

// syscall_add_filename
// file syscall.c line 1867
void syscall_add_filename(const signed int syscall, const signed int pid, const char *filename)
{
  unsigned long int h;
  struct filename_info *info;
  signed int tmp_statement_expression_2;
  if(!(filename == ((const char *)NULL)))
  {
    unsigned int return_value_hash_filename_1;
    return_value_hash_filename_1=hash_filename(pid, filename);
    h = (unsigned long int)return_value_hash_filename_1;
    info = filename_cache[(signed long int)h];
    for( ; !(info == ((struct filename_info *)NULL)); info = info->next)
      if(info->pid == pid)
      {
        unsigned long int __s1_len;
        unsigned long int __s2_len;
        signed int return_value___builtin_strcmp_3;
        return_value___builtin_strcmp_3=__builtin_strcmp(info->filename, filename);
        tmp_statement_expression_2 = return_value___builtin_strcmp_3;
        if(tmp_statement_expression_2 == 0)
          break;

      }

    if(info == ((struct filename_info *)NULL))
    {
      void *return_value_calloc_4;
      return_value_calloc_4=calloc((unsigned long int)1, sizeof(struct filename_info) /*40ul*/ );
      info = (struct filename_info *)return_value_calloc_4;
      if(info == ((struct filename_info *)NULL))
        goto __CPROVER_DUMP_L9;

      char *return_value___strdup_5;
      return_value___strdup_5=__strdup(filename);
      info->filename = return_value___strdup_5;
      if(info->filename == ((char *)NULL))
      {
        free((void *)info);
        goto __CPROVER_DUMP_L9;
      }

      info->syscall = syscall;
      info->pid = pid;
      info->proc=proc_cache_find_by_pid(pid);
      info->count = (unsigned long int)1;
      info->next = filename_cache[(signed long int)h];
      filename_cache[(signed long int)h] = info;
    }

    else
      info->count = info->count + 1ul;
  }


__CPROVER_DUMP_L9:
  ;
}

// syscall_brk_args
// file syscall.c line 1339
static void syscall_brk_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid)
{
  const signed long int syscall_brk_args_array_size0 = (signed long int)(sc->arg + 1);
  unsigned long int args[syscall_brk_args_array_size0];
  void *addr;
  (void)s;
  syscall_get_args(pid, sc->arg, args);
  addr = (void *)args[(signed long int)0];
  mem_brk_account(pid, addr);
}

// syscall_cleanup
// file syscall.c line 2809
extern void syscall_cleanup(void)
{
  list_free(&syscall_wakelocks, syscall_wakelock_free);
  list_free(&syscall_contexts, free);
  list_free(&syscall_syncs, syscall_sync_free_item);
  syscall_wakelock_fd_cache_free();
  syscall_hashtable_free();
  syscall_filename_cache_free();
}

// syscall_close_args
// file syscall.c line 1110
static void syscall_close_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid)
{
  const signed long int syscall_close_args_array_size0 = (signed long int)(sc->arg + 1);
  unsigned long int args[syscall_close_args_array_size0];
  struct fd_cache *fc;
  unsigned long int h;
  signed int fd;
  (void)s;
  if(!((0x00000010 & opt_flags) == 0))
  {
    syscall_get_args(pid, sc->arg, args);
    fd = (signed int)args[(signed long int)0];
    h=hash_fd(pid, fd);
    fc = fd_cache[(signed long int)h];
    for( ; !(fc == ((struct fd_cache *)NULL)); fc = fc->next)
      if(fc->pid == pid)
      {
        if(fc->fd == fd)
        {
          pthread_mutex_lock(&fc->mutex);
          free((void *)fc->filename);
          fc->filename = (char *)(void *)0;
          pthread_mutex_unlock(&fc->mutex);
          goto __CPROVER_DUMP_L5;
        }

      }

  }


__CPROVER_DUMP_L5:
  ;
}

// syscall_connect_args
// file syscall.c line 169
static void syscall_connect_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid)
{
  (void)sc;
  (void)s;
  (void)pid;
}

// syscall_connect_ret
// file syscall.c line 186
static void syscall_connect_ret(const struct syscall *sc, const struct syscall_info *s, const signed int ret)
{
  (void)sc;
  (void)ret;
  net_connection_pid(s->proc->pid);
}

// syscall_context_find_by_pid
// file syscall.c line 2571
static struct syscall_context * syscall_context_find_by_pid(const signed int pid)
{
  struct syscall_context *ctxt;
  unsigned long int h;
  h=hash_syscall_context(pid);
  ctxt = syscall_contexts_cache[(signed long int)h];
  for( ; !(ctxt == ((struct syscall_context *)NULL)); ctxt = ctxt->next)
    if(ctxt->pid == pid)
      return ctxt;

  return (struct syscall_context *)(void *)0;
}

// syscall_count_cmp
// file syscall.c line 737
static signed int syscall_count_cmp(const void *data1, const void *data2)
{
  struct syscall_info *s1 = (struct syscall_info *)data1;
  struct syscall_info *s2 = (struct syscall_info *)data2;
  if(s1->proc->pid == s2->proc->pid)
    return (signed int)(s2->count - s1->count);

  else
    return s1->proc->pid - s2->proc->pid;
}

// syscall_count_timeout
// file syscall.c line 864
static void syscall_count_timeout(struct syscall_info *s, const double timeout, const double threshold)
{
  double t = 0.00001;
  signed int bucket = 0;
  for( ; t <= timeout && !(bucket >= 9); t = t * (double)10)
    bucket = bucket + 1;
  s->poll_count = s->poll_count + 1ul;
  if(timeout < 0.0)
    s->poll_infinite = s->poll_infinite + 1ul;

  else
  {
    if(s->poll_min < 0.0)
    {
      s->poll_min = timeout;
      s->poll_max = timeout;
    }

    else
    {
      if(s->poll_min > timeout)
        s->poll_min = timeout;

      if(s->poll_max < timeout)
        s->poll_max = timeout;

    }
    if(IEEE_FLOAT_EQUAL(timeout, 0.0))
    {
      s->poll_zero = s->poll_zero + 1ul;
      s->poll_too_low = s->poll_too_low + 1ul;
    }

    else
    {
      s->poll_total = s->poll_total + timeout;
      s->bucket[(signed long int)bucket] = s->bucket[(signed long int)bucket] + 1ul;
      if(timeout <= threshold)
        s->poll_too_low = s->poll_too_low + 1ul;

    }
  }
}

// syscall_count_usage
// file syscall.c line 2346
static struct syscall_info * syscall_count_usage(const signed int pid, const signed int syscall, double *timeout)
{
  unsigned long int h;
  h=hash_syscall(pid, syscall);
  struct syscall_info *s = (struct syscall_info *)(void *)0;
  struct syscall *sc;
  _Bool found = (_Bool)0;
  _Bool return_value_syscall_valid_1;
  return_value_syscall_valid_1=syscall_valid(syscall);
  struct syscall *tmp_if_expr_2;
  if(!(return_value_syscall_valid_1 == (_Bool)0))
    tmp_if_expr_2 = &syscalls[(signed long int)syscall];

  else
    tmp_if_expr_2 = (struct syscall *)(void *)0;
  sc = tmp_if_expr_2;
  if(sc == ((struct syscall *)NULL))
    return (struct syscall_info *)(void *)0;

  else
  {
    *timeout = -1.0;
    s = syscall_info[(signed long int)h];
    for( ; !(s == ((struct syscall_info *)NULL)); s = s->next)
      if(s->syscall == syscall)
      {
        if(s->proc->pid == pid)
        {
          s->count = s->count + 1ul;
          found = (_Bool)1;
          break;
        }

      }

    if(found == (_Bool)0)
    {
      void *return_value_calloc_3;
      return_value_calloc_3=calloc((unsigned long int)1, sizeof(struct syscall_info) /*224ul*/ );
      s = (struct syscall_info *)return_value_calloc_3;
      if(s == ((struct syscall_info *)NULL))
      {
        health_check_out_of_memory("allocating syscall hash item");
        return (struct syscall_info *)(void *)0;
      }

      s->syscall = syscall;
      s->proc=proc_cache_find_by_pid(pid);
      s->count = (unsigned long int)1;
      s->poll_zero = (unsigned long int)0;
      s->poll_infinite = (unsigned long int)0;
      s->poll_count = (unsigned long int)0;
      s->poll_min = -1.0;
      s->poll_max = -1.0;
      s->poll_total = (double)0;
      s->poll_too_low = (unsigned long int)0;
      list_init(&s->return_history);
      s->next = syscall_info[(signed long int)h];
      syscall_info[(signed long int)h] = s;
    }

    syscall_count = syscall_count + 1l;
    if(syscall_count >= opt_max_syscalls)
      keep_running = (volatile _Bool)0;

    if(!(sc->call_enter == ((void (*)(const struct syscall *, const struct syscall_info *, const signed int))NULL)))
      sc->call_enter(sc, s, pid);

    else
      if(!(sc->call_enter_timeout == ((void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))NULL)))
        sc->call_enter_timeout(sc, s, pid, *sc->threshold, timeout);

    return s;
  }
}

// syscall_dump_execve
// file syscall.c line 2060
extern void syscall_dump_execve(struct json_object *j_obj, double duration)
{
  (void)duration;
  (void)j_obj;
}

// syscall_dump_filename
// file syscall.c line 1940
void syscall_dump_filename(const char *label, const signed int syscall, struct json_object *j_obj, double duration)
{
  signed int i;
  struct anonymous_3 sorted;
  struct link *l;
  list_init(&sorted);
  i = 0;
  for( ; !(i >= 1997); i = i + 1)
  {
    struct filename_info *info = filename_cache[(signed long int)i];
    for( ; !(info == ((struct filename_info *)NULL)); info = info->next)
      if(info->syscall == syscall)
      {
        struct link *return_value_list_add_ordered_1;
        return_value_list_add_ordered_1=list_add_ordered(&sorted, (void *)info, syscall_filename_cmp);
        if(return_value_list_add_ordered_1 == ((struct link *)NULL))
          goto out;

      }

  }
  if(sorted.length == 0ul)
    printf(" None.\n\n");

  else
  {
    printf("  PID  Process              Rate/Sec File\n");
    l = sorted.head;
    for( ; !(l == ((struct link *)NULL)); l = l->next)
    {
      struct filename_info *syscall_dump_filename__1__3__1__1__info = (struct filename_info *)l->data;
      printf(" %5i %-20.20s %8.3f %s\n", syscall_dump_filename__1__3__1__1__info->pid, syscall_dump_filename__1__3__1__1__info->proc->cmdline, (double)syscall_dump_filename__1__3__1__1__info->count / duration, syscall_dump_filename__1__3__1__1__info->filename);
    }
    printf("\n");
  }
  if(!(j_obj == ((struct json_object *)NULL)))
  {
    struct json_object *j_syscall;
    struct json_object *j_syscall_infos;
    struct json_object *j_syscall_info;
    j_syscall=j_obj_new_obj();
    if(j_syscall == ((struct json_object *)NULL))
      goto out;

    j_obj_obj_add_link1(j_obj, label, j_syscall);
    j_syscall_infos=j_obj_new_array();
    if(j_syscall_infos == ((struct json_object *)NULL))
      goto out;

    j_obj_obj_add_link1(j_syscall, "files", j_syscall_infos);
    l = sorted.head;
    for( ; !(l == ((struct link *)NULL)); l = l->next)
    {
      struct filename_info *syscall_dump_filename__1__4__1__1__info = (struct filename_info *)l->data;
      j_syscall_info=j_obj_new_obj();
      j_obj_new_int32_add_link1(j_syscall_info, "pid", syscall_dump_filename__1__4__1__1__info->pid);
      j_obj_new_int32_add_link1(j_syscall_info, "ppid", syscall_dump_filename__1__4__1__1__info->proc->ppid);
      j_obj_new_int32_add_link1(j_syscall_info, "is_thread", (const signed int)syscall_dump_filename__1__4__1__1__info->proc->is_thread);
      j_obj_new_string_add_link1(j_syscall_info, "name", syscall_dump_filename__1__4__1__1__info->proc->cmdline);
      j_obj_new_int64_add_link1(j_syscall_info, "count", (const signed long int)syscall_dump_filename__1__4__1__1__info->count);
      j_obj_new_double_add_link1(j_syscall_info, "access-rate", (double)syscall_dump_filename__1__4__1__1__info->count / duration);
      j_obj_new_string_add_link1(j_syscall_info, "filename", syscall_dump_filename__1__4__1__1__info->filename);
      j_obj_array_add_link1(j_syscall_infos, j_syscall_info);
    }
  }

  list_free(&sorted, (void (*)(void *))(void *)0);

out:
  ;
  goto __CPROVER_DUMP_L14;

__CPROVER_DUMP_L14:
  ;
}

// syscall_dump_hashtable
// file syscall.c line 772
extern void syscall_dump_hashtable(struct json_object *j_tests, const double duration)
{
  struct anonymous_3 sorted;
  struct link *l;
  signed int i;
  signed int count = 0;
  unsigned long int total;
  unsigned long int usecs_total = (unsigned long int)0;
  if((0x00000002 & opt_flags) == 0)
  {
    list_init(&sorted);
    i = 0;
    for( ; !(i >= 1997); i = i + 1)
    {
      struct syscall_info *syscall_dump_hashtable__1__1__1__s = syscall_info[(signed long int)i];
      for( ; !(syscall_dump_hashtable__1__1__1__s == ((struct syscall_info *)NULL)); syscall_dump_hashtable__1__1__1__s = syscall_dump_hashtable__1__1__1__s->next)
      {
        struct link *return_value_list_add_ordered_1;
        return_value_list_add_ordered_1=list_add_ordered(&sorted, (void *)syscall_dump_hashtable__1__1__1__s, syscall_count_cmp);
        if(return_value_list_add_ordered_1 == ((struct link *)NULL))
          goto out;

        usecs_total = usecs_total + syscall_dump_hashtable__1__1__1__s->usecs_total;
      }
    }
    printf("System calls traced:\n");
    printf("  PID  Process              Syscall               Count    Rate/Sec    Total μSecs  %% Call Time\n");
    total = (unsigned long int)0;
    l = sorted.head;
    for( ; !(l == ((struct link *)NULL)); l = l->next)
    {
      char name[64l];
      struct syscall_info *s = (struct syscall_info *)l->data;
      syscall_name(s->syscall, name, sizeof(char [64l]) /*64ul*/ );
      printf(" %5i %-20.20s %-20.20s %6lu %12.4f %13lu    %8.4f\n", s->proc->pid, s->proc->cmdline, (const void *)name, s->count, (double)s->count / duration, s->usecs_total, ((double)s->usecs_total * 100.0) / (double)usecs_total);
      count = count + 1;
      total = total + s->count;
    }
    if(count >= 2)
      printf(" %-46.46s%8lu %12.4f %13lu\n", (const void *)"Total", total, (double)total / duration, usecs_total);

    printf("\n");
    if(!(j_tests == ((struct json_object *)NULL)))
    {
      struct json_object *j_syscall;
      struct json_object *j_syscall_infos;
      struct json_object *j_syscall_info;
      j_syscall=j_obj_new_obj();
      if(!(j_syscall == ((struct json_object *)NULL)))
      {
        j_obj_obj_add_link1(j_tests, "system-calls", j_syscall);
        j_syscall_infos=j_obj_new_array();
        if(!(j_syscall_infos == ((struct json_object *)NULL)))
        {
          j_obj_obj_add_link1(j_syscall, "system-calls-per-process", j_syscall_infos);
          total = (unsigned long int)0;
          l = sorted.head;
          for( ; !(l == ((struct link *)NULL)); l = l->next)
          {
            char syscall_dump_hashtable__1__4__1__1__name[64l];
            struct syscall_info *syscall_dump_hashtable__1__4__1__1__s = (struct syscall_info *)l->data;
            syscall_name(syscall_dump_hashtable__1__4__1__1__s->syscall, syscall_dump_hashtable__1__4__1__1__name, sizeof(char [64l]) /*64ul*/ );
            j_syscall_info=j_obj_new_obj();
            if(j_syscall_info == ((struct json_object *)NULL))
              goto out;

            j_obj_new_int32_add_link1(j_syscall_info, "pid", syscall_dump_hashtable__1__4__1__1__s->proc->pid);
            j_obj_new_int32_add_link1(j_syscall_info, "ppid", syscall_dump_hashtable__1__4__1__1__s->proc->ppid);
            j_obj_new_int32_add_link1(j_syscall_info, "is-thread", (const signed int)syscall_dump_hashtable__1__4__1__1__s->proc->is_thread);
            j_obj_new_string_add_link1(j_syscall_info, "name", syscall_dump_hashtable__1__4__1__1__s->proc->cmdline);
            j_obj_new_string_add_link1(j_syscall_info, "system-call", syscall_dump_hashtable__1__4__1__1__name);
            j_obj_new_int64_add_link1(j_syscall_info, "system-call-count", (const signed long int)syscall_dump_hashtable__1__4__1__1__s->count);
            j_obj_new_double_add_link1(j_syscall_info, "system-call-rate", (double)syscall_dump_hashtable__1__4__1__1__s->count / duration);
            j_obj_new_int64_add_link1(j_syscall_info, "system-call-total-microseconds", (const signed long int)syscall_dump_hashtable__1__4__1__1__s->usecs_total);
            j_obj_array_add_link1(j_syscall_infos, j_syscall_info);
            total = total + syscall_dump_hashtable__1__4__1__1__s->count;
          }
          j_syscall_info=j_obj_new_obj();
          if(!(j_syscall_info == ((struct json_object *)NULL)))
          {
            j_obj_obj_add_link1(j_syscall, "system-calls-total", j_syscall_info);
            j_obj_new_int64_add_link1(j_syscall_info, "system-call-count-total", (const signed long int)total);
            j_obj_new_double_add_link1(j_syscall_info, "system-call-count-total-rate", (double)total / duration);
          }

        }

      }

    }


  out:
    ;
    list_free(&sorted, (void (*)(void *))(void *)0);
  }

}

// syscall_dump_inotify
// file syscall.c line 2025
extern void syscall_dump_inotify(struct json_object *j_obj, double duration)
{
  printf("Inotify watches added:\n");
  syscall_dump_filename("inotify-watches-added", 254, j_obj, duration);
}

// syscall_dump_pollers
// file syscall.c line 2111
extern void syscall_dump_pollers(struct json_object *j_tests, const double duration)
{
  signed int i;
  struct anonymous_3 sorted;
  struct link *l;
  struct json_object *j_pollers = (struct json_object *)(void *)0;
  list_init(&sorted);
  i = 0;
  for( ; !(i >= 1997); i = i + 1)
  {
    struct syscall_info *syscall_dump_pollers__1__1__1__s = syscall_info[(signed long int)i];
    for( ; !(syscall_dump_pollers__1__1__1__s == ((struct syscall_info *)NULL)); syscall_dump_pollers__1__1__1__s = syscall_dump_pollers__1__1__1__s->next)
    {
      signed int syscall = syscall_dump_pollers__1__1__1__s->syscall;
      if(!(syscalls[(signed long int)syscall].call_enter_timeout == ((void (*)(const struct syscall *, struct syscall_info *, const signed int, const double, double *))NULL)))
      {
        struct link *return_value_list_add_ordered_1;
        return_value_list_add_ordered_1=list_add_ordered(&sorted, (void *)syscall_dump_pollers__1__1__1__s, syscall_count_cmp);
        if(return_value_list_add_ordered_1 == ((struct link *)NULL))
          goto out;

        break;
      }

    }
  }
  unsigned long int syscall_dump_pollers__1__poll_infinite = (unsigned long int)0;
  unsigned long int syscall_dump_pollers__1__poll_zero = (unsigned long int)0;
  unsigned long int syscall_dump_pollers__1__count = (unsigned long int)0;
  struct json_object *j_poll_test;
  char tmp[64l];
  double tmp_if_expr_2;
  double tmp_if_expr_3;
  if(!(j_tests == ((struct json_object *)NULL)))
  {
    struct json_object *j_syscall;
    struct json_object *j_syscall_infos;
    struct json_object *j_syscall_info;
    j_syscall=j_obj_new_obj();
    if(j_syscall == ((struct json_object *)NULL))
      goto out;

    j_obj_obj_add_link1(j_tests, "polling-system-calls", j_syscall);
    j_syscall_infos=j_obj_new_array();
    if(j_syscall_infos == ((struct json_object *)NULL))
      goto out;

    j_obj_obj_add_link1(j_syscall, "polling-system-calls-per-process", j_syscall_infos);
    syscall_dump_pollers__1__count = (unsigned long int)0;
    l = sorted.head;
    for( ; !(l == ((struct link *)NULL)); l = l->next)
    {
      struct syscall_info *syscall_dump_pollers__1__2__1__1__s = (struct syscall_info *)l->data;
      syscall_name(syscall_dump_pollers__1__2__1__1__s->syscall, tmp, sizeof(char [64l]) /*64ul*/ );
      double rate = (double)syscall_dump_pollers__1__2__1__1__s->count / duration;
      syscall_dump_pollers__1__count = syscall_dump_pollers__1__count + syscall_dump_pollers__1__2__1__1__s->count;
      j_syscall_info=j_obj_new_obj();
      if(j_syscall_info == ((struct json_object *)NULL))
        goto out;

      j_obj_new_int32_add_link1(j_syscall_info, "pid", syscall_dump_pollers__1__2__1__1__s->proc->pid);
      j_obj_new_int32_add_link1(j_syscall_info, "ppid", syscall_dump_pollers__1__2__1__1__s->proc->ppid);
      j_obj_new_int32_add_link1(j_syscall_info, "is_thread", (const signed int)syscall_dump_pollers__1__2__1__1__s->proc->is_thread);
      j_obj_new_string_add_link1(j_syscall_info, "name", syscall_dump_pollers__1__2__1__1__s->proc->cmdline);
      j_obj_new_string_add_link1(j_syscall_info, "system-call", tmp);
      j_obj_new_int64_add_link1(j_syscall_info, "system-call-count", (const signed long int)syscall_dump_pollers__1__2__1__1__s->count);
      j_obj_new_double_add_link1(j_syscall_info, "system-call-rate", rate);
      j_obj_new_int64_add_link1(j_syscall_info, "poll-count-infinite-timeout", (const signed long int)syscall_dump_pollers__1__2__1__1__s->poll_infinite);
      j_obj_new_int64_add_link1(j_syscall_info, "poll-count-zero-timeout", (const signed long int)syscall_dump_pollers__1__2__1__1__s->poll_zero);
      if(syscall_dump_pollers__1__2__1__1__s->poll_min < 0.0)
        tmp_if_expr_2 = 0.0;

      else
        tmp_if_expr_2 = syscall_dump_pollers__1__2__1__1__s->poll_min;
      j_obj_new_double_add_link1(j_syscall_info, "poll-minimum-timeout-millisecs", tmp_if_expr_2);
      if(syscall_dump_pollers__1__2__1__1__s->poll_max < 0.0)
        tmp_if_expr_3 = 0.0;

      else
        tmp_if_expr_3 = syscall_dump_pollers__1__2__1__1__s->poll_max;
      j_obj_new_double_add_link1(j_syscall_info, "poll-maximum-timeout-millisecs", tmp_if_expr_3);
      j_obj_new_double_add_link1(j_syscall_info, "poll-average-timeout-millisecs", syscall_dump_pollers__1__2__1__1__s->poll_total / (double)syscall_dump_pollers__1__2__1__1__s->count);
      j_obj_array_add_link1(j_syscall_infos, j_syscall_info);
    }
    j_syscall_info=j_obj_new_obj();
    if(j_syscall_info == ((struct json_object *)NULL))
      goto out;

    j_obj_obj_add_link1(j_syscall, "polling-system-calls-total", j_syscall_info);
    j_obj_new_int64_add_link1(j_syscall_info, "system-call-count-total", (const signed long int)syscall_dump_pollers__1__count);
    j_obj_new_double_add_link1(j_syscall_info, "system-call-total-rate", (double)syscall_dump_pollers__1__count / duration);
    j_obj_new_int64_add_link1(j_syscall_info, "poll-count-infinite-total", (signed long int)syscall_dump_pollers__1__poll_infinite);
    j_obj_new_double_add_link1(j_syscall_info, "poll-count-infinite-total-rate", (double)syscall_dump_pollers__1__poll_infinite / duration);
    j_obj_new_int64_add_link1(j_syscall_info, "poll-count-zero-total", (const signed long int)syscall_dump_pollers__1__poll_zero);
    j_obj_new_double_add_link1(j_syscall_info, "poll-count-zero-total-rate", (double)syscall_dump_pollers__1__poll_zero / duration);
  }

  double tmp_if_expr_4;
  double tmp_if_expr_5;
  char *tmp_if_expr_6;
  char *tmp_if_expr_7;
  if(!(sorted.head == ((struct link *)NULL)))
  {
    if((0x00000002 & opt_flags) == 0)
    {
      double prev;
      double bucket;
      char syscall_dump_pollers__1__3__1__tmp[64l];
      char *units;
      double total_rate = 0.0;
      unsigned long int poll_infinite = (unsigned long int)0;
      unsigned long int poll_zero = (unsigned long int)0;
      unsigned long int count = (unsigned long int)0;
      printf("Top polling system calls:\n");
      printf("  PID  Process              Syscall             Rate/Sec   Infinite   Zero     Minimum    Maximum    Average\n");
      printf("                                                           Timeouts Timeouts   Timeout    Timeout    Timeout\n");
      l = sorted.head;
      for( ; !(l == ((struct link *)NULL)); l = l->next)
      {
        struct syscall_info *syscall_dump_pollers__1__3__1__1__1__s = (struct syscall_info *)l->data;
        syscall_name(syscall_dump_pollers__1__3__1__1__1__s->syscall, syscall_dump_pollers__1__3__1__tmp, sizeof(char [64l]) /*64ul*/ );
        double syscall_dump_pollers__1__3__1__1__1__rate = (double)syscall_dump_pollers__1__3__1__1__1__s->count / duration;
        printf(" %5i %-20.20s %-17.17s %12.4f %8lu %8lu", syscall_dump_pollers__1__3__1__1__1__s->proc->pid, syscall_dump_pollers__1__3__1__1__1__s->proc->cmdline, (const void *)syscall_dump_pollers__1__3__1__tmp, syscall_dump_pollers__1__3__1__1__1__rate, syscall_dump_pollers__1__3__1__1__1__s->poll_infinite, syscall_dump_pollers__1__3__1__1__1__s->poll_zero);
        if(!(syscall_dump_pollers__1__3__1__1__1__s->poll_count == 0ul))
        {
          char min_timeout[64l];
          char max_timeout[64l];
          char avg_timeout[64l];
          if(syscall_dump_pollers__1__3__1__1__1__s->poll_min < 0.0)
            tmp_if_expr_4 = 0.0;

          else
            tmp_if_expr_4 = syscall_dump_pollers__1__3__1__1__1__s->poll_min;
          units=syscall_timeout_to_human_time(tmp_if_expr_4, (const _Bool)0, syscall_dump_pollers__1__3__1__tmp, sizeof(char [64l]) /*64ul*/ );
          snprintf(min_timeout, sizeof(char [64l]) /*64ul*/ , "%s %-4s", (const void *)syscall_dump_pollers__1__3__1__tmp, units);
          if(syscall_dump_pollers__1__3__1__1__1__s->poll_max < 0.0)
            tmp_if_expr_5 = 0.0;

          else
            tmp_if_expr_5 = syscall_dump_pollers__1__3__1__1__1__s->poll_max;
          units=syscall_timeout_to_human_time(tmp_if_expr_5, (const _Bool)0, syscall_dump_pollers__1__3__1__tmp, sizeof(char [64l]) /*64ul*/ );
          snprintf(max_timeout, sizeof(char [64l]) /*64ul*/ , "%s %-4s", (const void *)syscall_dump_pollers__1__3__1__tmp, units);
          units=syscall_timeout_to_human_time(syscall_dump_pollers__1__3__1__1__1__s->poll_total / (double)syscall_dump_pollers__1__3__1__1__1__s->count, (const _Bool)0, syscall_dump_pollers__1__3__1__tmp, sizeof(char [64l]) /*64ul*/ );
          snprintf(avg_timeout, sizeof(char [64l]) /*64ul*/ , "%s %-4s", (const void *)syscall_dump_pollers__1__3__1__tmp, units);
          printf(" %10s %10s %10s", (const void *)min_timeout, (const void *)max_timeout, (const void *)avg_timeout);
        }

        else
          printf(" %-10s %-10s %-10s", (const void *)"    n/a", (const void *)"    n/a", (const void *)"    n/a");
        printf("\n");
        total_rate = total_rate + syscall_dump_pollers__1__3__1__1__1__rate;
        poll_infinite = poll_infinite + syscall_dump_pollers__1__3__1__1__1__s->poll_infinite;
        poll_zero = poll_zero + syscall_dump_pollers__1__3__1__1__1__s->poll_zero;
        count = count + 1ul;
      }
      if(count >= 2ul)
        printf(" %-45.45s%12.4f %8lu %8lu\n", (const void *)"Total", total_rate, poll_infinite, poll_zero);

      printf("\nDistribution of poll timeout times:\n");
      printf("%50.50s", (const void *)"");
      prev = 0.0;
      bucket = 0.00001;
      i = 0;
      for( ; !(i >= 9); bucket = bucket * 10.0)
      {
        syscall_timeout_to_human_time(prev, (const _Bool)0, syscall_dump_pollers__1__3__1__tmp, sizeof(char [64l]) /*64ul*/ );
        if(i == 0)
          tmp_if_expr_6 = "";

        else
          tmp_if_expr_6 = syscall_dump_pollers__1__3__1__tmp;
        printf(" %6s", tmp_if_expr_6);
        prev = bucket;
        i = i + 1;
      }
      printf("\n");
      printf("%50.50s", (const void *)"");
      i = 0;
      for( ; !(i >= 9); i = i + 1)
        if(i == 0)
          printf("  up to");

        else
          if(i == 9)
            printf(" or more");

          else
            printf("    to ");
      printf("\n");
      printf("%46.46sZero", (const void *)"");
      bucket = 0.00001;
      i = 0;
      for( ; !(i >= 9); bucket = bucket * 10.0)
      {
        syscall_timeout_to_human_time(bucket, (const _Bool)1, syscall_dump_pollers__1__3__1__tmp, sizeof(char [64l]) /*64ul*/ );
        if(i == 9)
          tmp_if_expr_7 = "";

        else
          tmp_if_expr_7 = syscall_dump_pollers__1__3__1__tmp;
        printf(" %6s", tmp_if_expr_7);
        i = i + 1;
      }
      printf(" Infinite\n");
      printf("  PID  Process              Syscall            sec");
      bucket = 0.00001;
      i = 0;
      for( ; !(i >= 9); bucket = bucket * 10.0)
      {
        units=syscall_timeout_to_human_time(bucket, (const _Bool)1, syscall_dump_pollers__1__3__1__tmp, sizeof(char [64l]) /*64ul*/ );
        printf(" %6s", units);
        i = i + 1;
      }
      printf("   Wait\n");
      l = sorted.head;
      for( ; !(l == ((struct link *)NULL)); l = l->next)
      {
        struct syscall_info *syscall_dump_pollers__1__3__1__6__1__s = (struct syscall_info *)l->data;
        syscall_name(syscall_dump_pollers__1__3__1__6__1__s->syscall, syscall_dump_pollers__1__3__1__tmp, sizeof(char [64l]) /*64ul*/ );
        printf(" %5u %-20.20s %-15.15s %6lu", syscall_dump_pollers__1__3__1__6__1__s->proc->pid, syscall_dump_pollers__1__3__1__6__1__s->proc->cmdline, (const void *)syscall_dump_pollers__1__3__1__tmp, syscall_dump_pollers__1__3__1__6__1__s->poll_zero);
        i = 0;
        for( ; !(i >= 9); i = i + 1)
          if(!(syscall_dump_pollers__1__3__1__6__1__s->bucket[(signed long int)i] == 0ul))
            printf(" %6lu", syscall_dump_pollers__1__3__1__6__1__s->bucket[(signed long int)i]);

          else
            printf("     - ");
        printf(" %6lu", syscall_dump_pollers__1__3__1__6__1__s->poll_infinite);
        printf("\n");
      }
      printf("\n");
    }

    if(!(j_tests == ((struct json_object *)NULL)))
    {
      j_poll_test=j_obj_new_obj();
      if(j_poll_test == ((struct json_object *)NULL))
        goto out;

      j_obj_obj_add_link1(j_tests, "polling-system-call-returns", j_poll_test);
      j_pollers=j_obj_new_array();
      if(j_pollers == ((struct json_object *)NULL))
        goto out;

      j_obj_obj_add_link1(j_poll_test, "polling-system-call-returns-per-process", j_pollers);
    }

    printf("Polling system call analysis:\n");
    l = sorted.head;
    for( ; !(l == ((struct link *)NULL)); l = l->next)
    {
      struct syscall_info *s = (struct syscall_info *)l->data;
      _Bool return_value_syscall_valid_8;
      return_value_syscall_valid_8=syscall_valid(s->syscall);
      if(!(return_value_syscall_valid_8 == (_Bool)0))
      {
        struct syscall *sc = &syscalls[(signed long int)s->syscall];
        if(!(sc->call_return_timeout == ((void (*)(struct json_object *, const struct syscall *, const struct syscall_info *))NULL)))
          sc->call_return_timeout(j_pollers, sc, s);

      }

    }
    if(info_emit == 0)
      printf(" No bad polling discovered.\n");

    printf("\n");
  }


out:
  ;
  list_free(&sorted, (void (*)(void *))(void *)0);
}

// syscall_dump_sync
// file syscall.c line 1436
extern void syscall_dump_sync(struct json_object *j_tests, double duration)
{
  struct anonymous_3 sorted;
  struct link *l;
  struct anonymous *info;
  _Bool sync_filenames = (_Bool)0;
  printf("Filesystem Syncs:\n");
  list_init(&sorted);
  l = syscall_syncs.head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    struct link *return_value_list_add_ordered_1;
    return_value_list_add_ordered_1=list_add_ordered(&sorted, l->data, syscall_sync_cmp);
    if(return_value_list_add_ordered_1 == ((struct link *)NULL))
      goto out;

  }
  if(syscall_syncs.head == ((struct link *)NULL))
    printf(" None.\n\n");

  else
  {
    printf("  PID   fdatasync    fsync     sync   syncfs    total   total (Rate)\n");
    l = sorted.head;
    for( ; !(l == ((struct link *)NULL)); l = l->next)
    {
      info = (struct anonymous *)l->data;
      printf(" %5i   %8lu %8lu %8lu %8lu %8lu %8.2f\n", info->pid, info->fdatasync_count, info->fsync_count, info->sync_count, info->syncfs_count, info->total_count, (double)info->total_count / duration);
      if(!(info->sync_file.length == 0ul))
        sync_filenames = (_Bool)1;

    }
    printf("\n");
  }
  if(!(j_tests == ((struct json_object *)NULL)))
  {
    struct json_object *syscall_dump_sync__1__4__j_syscall;
    struct json_object *syscall_dump_sync__1__4__j_syscall_infos;
    struct json_object *syscall_dump_sync__1__4__j_syscall_info;
    unsigned long int total_fdatasync = (unsigned long int)0;
    unsigned long int total_fsync = (unsigned long int)0;
    unsigned long int total_sync = (unsigned long int)0;
    unsigned long int total_syncfs = (unsigned long int)0;
    syscall_dump_sync__1__4__j_syscall=j_obj_new_obj();
    if(syscall_dump_sync__1__4__j_syscall == ((struct json_object *)NULL))
      goto out;

    j_obj_obj_add_link1(j_tests, "file-system-syncs", syscall_dump_sync__1__4__j_syscall);
    syscall_dump_sync__1__4__j_syscall_infos=j_obj_new_array();
    if(syscall_dump_sync__1__4__j_syscall_infos == ((struct json_object *)NULL))
      goto out;

    j_obj_obj_add_link1(syscall_dump_sync__1__4__j_syscall, "sync-system-calls-per-process", syscall_dump_sync__1__4__j_syscall_infos);
    l = sorted.head;
    for( ; !(l == ((struct link *)NULL)); l = l->next)
    {
      info = (struct anonymous *)l->data;
      syscall_dump_sync__1__4__j_syscall_info=j_obj_new_obj();
      j_obj_new_int32_add_link1(syscall_dump_sync__1__4__j_syscall_info, "pid", info->pid);
      j_obj_new_int64_add_link1(syscall_dump_sync__1__4__j_syscall_info, "fdatasync-call-count", (const signed long int)info->fdatasync_count);
      j_obj_new_double_add_link1(syscall_dump_sync__1__4__j_syscall_info, "fdatasync-call-rate", (double)info->fdatasync_count / duration);
      j_obj_new_int64_add_link1(syscall_dump_sync__1__4__j_syscall_info, "fsync-call-count", (const signed long int)info->fsync_count);
      j_obj_new_double_add_link1(syscall_dump_sync__1__4__j_syscall_info, "fsync-call-rate", (double)info->fsync_count / duration);
      j_obj_new_int64_add_link1(syscall_dump_sync__1__4__j_syscall_info, "sync-call-count", (const signed long int)info->sync_count);
      j_obj_new_double_add_link1(syscall_dump_sync__1__4__j_syscall_info, "sync-call-rate", (double)info->sync_count / duration);
      j_obj_new_int64_add_link1(syscall_dump_sync__1__4__j_syscall_info, "syncfs-call-count", (const signed long int)info->syncfs_count);
      j_obj_new_double_add_link1(syscall_dump_sync__1__4__j_syscall_info, "syncfs-call-rate", (double)info->syncfs_count / duration);
      j_obj_array_add_link1(syscall_dump_sync__1__4__j_syscall_infos, syscall_dump_sync__1__4__j_syscall_info);
      total_fdatasync = total_fdatasync + info->fdatasync_count;
      total_fsync = total_fsync + info->fsync_count;
      total_sync = total_sync + info->sync_count;
      total_syncfs = total_syncfs + info->syncfs_count;
    }
    syscall_dump_sync__1__4__j_syscall_info=j_obj_new_obj();
    if(syscall_dump_sync__1__4__j_syscall_info == ((struct json_object *)NULL))
      goto out;

    j_obj_obj_add_link1(syscall_dump_sync__1__4__j_syscall, "sync-system-calls-total", syscall_dump_sync__1__4__j_syscall_info);
    j_obj_new_int64_add_link1(syscall_dump_sync__1__4__j_syscall_info, "fdatasync-call-count-total", (const signed long int)total_fdatasync);
    j_obj_new_double_add_link1(syscall_dump_sync__1__4__j_syscall_info, "fdatasync-call-count-total-rate", (double)total_fdatasync / duration);
    j_obj_new_int64_add_link1(syscall_dump_sync__1__4__j_syscall_info, "fsync-call-count-total", (const signed long int)total_fsync);
    j_obj_new_double_add_link1(syscall_dump_sync__1__4__j_syscall_info, "fsync-call-count-total-rate", (double)total_fsync / duration);
    j_obj_new_int64_add_link1(syscall_dump_sync__1__4__j_syscall_info, "sync-call-count-total", (const signed long int)total_sync);
    j_obj_new_double_add_link1(syscall_dump_sync__1__4__j_syscall_info, "sync-call-count-total-rate", (double)total_sync / duration);
    j_obj_new_int64_add_link1(syscall_dump_sync__1__4__j_syscall_info, "syncfs-call-count-total", (const signed long int)total_syncfs);
    j_obj_new_double_add_link1(syscall_dump_sync__1__4__j_syscall_info, "syncfs-call-count-total-rate", (double)total_syncfs / duration);
  }

  if(!(sync_filenames == (_Bool)0))
  {
    printf("Files Sync'd:\n");
    printf("  PID   syscall    # sync's filename\n");
    l = sorted.head;
    for( ; !(l == ((struct link *)NULL)); l = l->next)
    {
      struct link *syscall_dump_sync__1__5__1__1__ll;
      info = (struct anonymous *)l->data;
      syscall_dump_sync__1__5__1__1__ll = info->sync_file.head;
      for( ; !(syscall_dump_sync__1__5__1__1__ll == ((struct link *)NULL)); syscall_dump_sync__1__5__1__1__ll = syscall_dump_sync__1__5__1__1__ll->next)
      {
        char tmp[64l];
        struct anonymous_0 *f = (struct anonymous_0 *)syscall_dump_sync__1__5__1__1__ll->data;
        syscall_name(f->syscall, tmp, sizeof(char [64l]) /*64ul*/ );
        printf(" %5i  %-10.10s %8lu %s\n", info->pid, (const void *)tmp, f->count, f->filename);
      }
    }
    printf("\n");
  }

  if(!(j_tests == ((struct json_object *)NULL)))
  {
    struct json_object *j_syscall;
    struct json_object *j_syscall_infos;
    struct json_object *j_syscall_info;
    unsigned long int total_files_sync = (unsigned long int)0;
    j_syscall=j_obj_new_obj();
    if(!(j_syscall == ((struct json_object *)NULL)))
    {
      j_obj_obj_add_link1(j_tests, "files-synced", j_syscall);
      j_syscall_infos=j_obj_new_array();
      if(!(j_syscall_infos == ((struct json_object *)NULL)))
      {
        j_obj_obj_add_link1(j_syscall, "file-sync-per-process", j_syscall_infos);
        l = sorted.head;
        for( ; !(l == ((struct link *)NULL)); l = l->next)
        {
          struct link *ll;
          info = (struct anonymous *)l->data;
          ll = info->sync_file.head;
          for( ; !(ll == ((struct link *)NULL)); ll = ll->next)
          {
            info = (struct anonymous *)l->data;
            char syscall_dump_sync__1__6__1__1__1__1__tmp[64l];
            struct anonymous_0 *syscall_dump_sync__1__6__1__1__1__1__f = (struct anonymous_0 *)ll->data;
            syscall_name(syscall_dump_sync__1__6__1__1__1__1__f->syscall, syscall_dump_sync__1__6__1__1__1__1__tmp, sizeof(char [64l]) /*64ul*/ );
            j_syscall_info=j_obj_new_obj();
            j_obj_new_int32_add_link1(j_syscall_info, "pid", info->pid);
            j_obj_new_string_add_link1(j_syscall_info, "syscall", syscall_dump_sync__1__6__1__1__1__1__tmp);
            j_obj_new_int64_add_link1(j_syscall_info, "call-count", (const signed long int)syscall_dump_sync__1__6__1__1__1__1__f->count);
            j_obj_new_double_add_link1(j_syscall_info, "call-rate", (double)syscall_dump_sync__1__6__1__1__1__1__f->count / duration);
            j_obj_new_string_add_link1(j_syscall_info, "filename", syscall_dump_sync__1__6__1__1__1__1__f->filename);
            j_obj_array_add_link1(j_syscall_infos, j_syscall_info);
            total_files_sync = total_files_sync + syscall_dump_sync__1__6__1__1__1__1__f->count;
          }
        }
        j_syscall_info=j_obj_new_obj();
        if(!(j_syscall_info == ((struct json_object *)NULL)))
        {
          j_obj_obj_add_link1(j_syscall, "files-synced-total", j_syscall_info);
          j_obj_new_int64_add_link1(j_syscall_info, "files-synced-total", (const signed long int)total_files_sync);
          j_obj_new_double_add_link1(j_syscall_info, "files-synced-total-rate", (double)total_files_sync / duration);
        }

      }

    }

  }


out:
  ;
  list_free(&sorted, (void (*)(void *))(void *)0);
}

// syscall_dump_wakelocks
// file syscall.c line 1673
extern void syscall_dump_wakelocks(struct json_object *j_tests, const double duration, struct anonymous_3 *pids)
{
  struct link *lp;
  unsigned long int total_locked = (unsigned long int)0;
  unsigned long int total_unlocked = (unsigned long int)0;
  unsigned int total_count = (unsigned int)0;
  struct json_object *j_wakelock_test = (struct json_object *)(void *)0;
  struct json_object *j_wakelock_infos = (struct json_object *)(void *)0;
  struct json_object *j_wakelock_info;
  (void)j_tests;
  signed int tmp_statement_expression_1;
  signed int tmp_statement_expression_3;
  if(!((0x00000010 & opt_flags) == 0))
  {
    if(!(j_tests == ((struct json_object *)NULL)))
    {
      j_wakelock_test=j_obj_new_obj();
      if(j_wakelock_test == ((struct json_object *)NULL))
        goto out;

      j_obj_obj_add_link1(j_tests, "wakelock-operations-heavy", j_wakelock_test);
      j_wakelock_infos=j_obj_new_array();
      if(j_wakelock_infos == ((struct json_object *)NULL))
        goto out;

      j_obj_obj_add_link1(j_wakelock_test, "wakelock-operations-heavy-per-process", j_wakelock_infos);
    }

    printf("Wakelock operations by wakelock:\n");
    if(syscall_wakelocks.head == ((struct link *)NULL))
      printf(" None.\n\n");

    else
    {
      double total_locked_duration = 0.0;
      printf("  PID  Process              Wakelock             Locks  Unlocks  Locks    Unlocks  Lock Duration\n");
      printf("%65s%s", (const void *)"", (const void *)"Per Sec  Per Sec  (Average Sec)\n");
      lp = pids->head;
      for( ; !(lp == ((struct link *)NULL)); lp = lp->next)
      {
        struct link *ln;
        struct anonymous_3 wakelock_names;
        struct proc_info *p = (struct proc_info *)lp->data;
        list_init(&wakelock_names);
        syscall_wakelock_names_by_pid(p->pid, &wakelock_names);
        ln = wakelock_names.head;
        for( ; !(ln == ((struct link *)NULL)); ln = ln->next)
        {
          char *lockname = (char *)ln->data;
          unsigned long int locked = (unsigned long int)0;
          unsigned long int unlocked = (unsigned long int)0;
          double locked_time = -1.0;
          double unlocked_time;
          double locked_duration = 0.0;
          unsigned int count = (unsigned int)0;
          struct link *syscall_dump_wakelocks__1__3__1__1__1__1__ls = syscall_wakelocks.head;
          for( ; !(syscall_dump_wakelocks__1__3__1__1__1__1__ls == ((struct link *)NULL)); syscall_dump_wakelocks__1__3__1__1__1__1__ls = syscall_dump_wakelocks__1__3__1__1__1__1__ls->next)
          {
            struct syscall_wakelock_info *info = (struct syscall_wakelock_info *)syscall_dump_wakelocks__1__3__1__1__1__1__ls->data;
            if(info->pid == p->pid)
            {
              unsigned long int __s1_len;
              unsigned long int __s2_len;
              signed int return_value___builtin_strcmp_2;
              return_value___builtin_strcmp_2=__builtin_strcmp(lockname, info->lockname);
              tmp_statement_expression_1 = return_value___builtin_strcmp_2;
              if(tmp_statement_expression_1 == 0)
              {
                if(!(info->locked == (_Bool)0))
                {
                  locked = locked + 1ul;
                  locked_time=syscall_timeval_to_double(&info->tv);
                }

                else
                {
                  unlocked = unlocked + 1ul;
                  unlocked_time=syscall_timeval_to_double(&info->tv);
                  if(locked_time >= 0.0)
                  {
                    count = count + 1u;
                    locked_duration = locked_duration + (unlocked_time - locked_time);
                  }

                }
              }

            }

          }
          total_locked = total_locked + locked;
          total_unlocked = total_unlocked + unlocked;
          total_count = total_count + count;
          total_locked_duration = total_locked_duration + locked_duration;
          printf(" %5i %-20.20s %-16.16s  %8lu %8lu %8.2f %8.2f %12.5f\n", p->pid, p->cmdline, lockname, locked, unlocked, (double)locked / duration, (double)unlocked / duration, count != 0u ? locked_duration / (double)count : 0.0);
          if(!(j_tests == ((struct json_object *)NULL)))
          {
            j_wakelock_info=j_obj_new_obj();
            if(j_wakelock_info == ((struct json_object *)NULL))
              goto out;

            j_obj_new_int32_add_link1(j_wakelock_info, "pid", p->pid);
            j_obj_new_int32_add_link1(j_wakelock_info, "ppid", p->ppid);
            j_obj_new_int32_add_link1(j_wakelock_info, "is-thread", (const signed int)p->is_thread);
            j_obj_new_string_add_link1(j_wakelock_info, "name", p->cmdline);
            j_obj_new_string_add_link1(j_wakelock_info, "lockname", lockname);
            j_obj_new_int64_add_link1(j_wakelock_info, "wakelock-locked", (const signed long int)locked);
            j_obj_new_double_add_link1(j_wakelock_info, "wakelock-locked-rate", (double)locked / duration);
            j_obj_new_int64_add_link1(j_wakelock_info, "wakelock-unlocked", (const signed long int)unlocked);
            j_obj_new_double_add_link1(j_wakelock_info, "wakelock-unlocked-rate", (double)unlocked / duration);
            j_obj_new_double_add_link1(j_wakelock_info, "wakelock-locked-duration", count != 0u ? locked_duration / (double)count : 0.0);
            j_obj_array_add_link1(j_wakelock_infos, j_wakelock_info);
          }

        }
        list_free(&wakelock_names, (void (*)(void *))(void *)0);
      }
      printf(" Total%40s%8lu %8lu %8.2f %8.2f %12.5f\n", (const void *)"", total_locked, total_unlocked, (double)total_locked / duration, (double)total_unlocked / duration, total_count != 0u ? total_locked_duration / (double)total_count : 0.0);
      printf("\n");
    }
    if(!(j_tests == ((struct json_object *)NULL)))
    {
      j_wakelock_info=j_obj_new_obj();
      if(!(j_wakelock_info == ((struct json_object *)NULL)))
      {
        j_obj_obj_add_link1(j_wakelock_test, "wakelock-operations-heavy-total", j_wakelock_info);
        j_obj_new_int64_add_link1(j_wakelock_info, "wakelock-locked-total", (const signed long int)total_locked);
        j_obj_new_double_add_link1(j_wakelock_info, "wakelock-locked-total-rate", (double)total_locked / duration);
        j_obj_new_int64_add_link1(j_wakelock_info, "wakelock-unlocked-total", (const signed long int)total_unlocked);
        j_obj_new_double_add_link1(j_wakelock_info, "wakelock-unlocked-total-rate", (double)total_unlocked / duration);
      }

    }


  out:
    ;
    if(!((0x00000020 & opt_flags) == 0) && !(syscall_wakelocks.head == ((struct link *)NULL)))
    {
      struct link *ls;
      printf("Verbose Dump of Wakelock Actions:\n");
      printf("  PID  Wakelock         Date     Time            Action   Duration (Secs)\n");
      ls = syscall_wakelocks.head;
      for( ; !(ls == ((struct link *)NULL)); ls = ls->next)
      {
        char buf[64l];
        struct syscall_wakelock_info *syscall_dump_wakelocks__1__5__1__1__info = (struct syscall_wakelock_info *)ls->data;
        signed long int whence_time = (signed long int)syscall_dump_wakelocks__1__5__1__1__info->tv.tv_sec;
        struct tm *whence_tm;
        whence_tm=localtime(&whence_time);
        strftime(buf, sizeof(char [64l]) /*64ul*/ , "%x %X", whence_tm);
        if(!(syscall_dump_wakelocks__1__5__1__1__info->locked == (_Bool)0))
        {
          struct link *l = ls;
          for( ; !(l == ((struct link *)NULL)); l = l->next)
          {
            struct syscall_wakelock_info *info2 = (struct syscall_wakelock_info *)l->data;
            if(syscall_dump_wakelocks__1__5__1__1__info->pid == info2->pid)
            {
              if(info2->locked == (_Bool)0)
              {
                unsigned long int syscall_dump_wakelocks__1__5__1__1__1__1__1__1____s1_len;
                unsigned long int syscall_dump_wakelocks__1__5__1__1__1__1__1__1____s2_len;
                signed int return_value___builtin_strcmp_4;
                return_value___builtin_strcmp_4=__builtin_strcmp(syscall_dump_wakelocks__1__5__1__1__info->lockname, info2->lockname);
                tmp_statement_expression_3 = return_value___builtin_strcmp_4;
                if(tmp_statement_expression_3 == 0)
                {
                  info2->paired = syscall_dump_wakelocks__1__5__1__1__info;
                  break;
                }

              }

            }

          }
        }

        if(!(syscall_dump_wakelocks__1__5__1__1__info->paired == ((struct syscall_wakelock_info *)NULL)))
        {
          double syscall_dump_wakelocks__1__5__1__1__2__locked_time;
          syscall_dump_wakelocks__1__5__1__1__2__locked_time=syscall_timeval_to_double(&syscall_dump_wakelocks__1__5__1__1__info->paired->tv);
          double syscall_dump_wakelocks__1__5__1__1__2__unlocked_time;
          syscall_dump_wakelocks__1__5__1__1__2__unlocked_time=syscall_timeval_to_double(&syscall_dump_wakelocks__1__5__1__1__info->tv);
          printf(" %5i %-16.16s %s.%06d %-8.8s %f\n", syscall_dump_wakelocks__1__5__1__1__info->pid, syscall_dump_wakelocks__1__5__1__1__info->lockname, (const void *)buf, (signed int)syscall_dump_wakelocks__1__5__1__1__info->tv.tv_usec, syscall_dump_wakelocks__1__5__1__1__info->locked != (_Bool)0 ? "Locked" : "Unlocked", syscall_dump_wakelocks__1__5__1__1__2__unlocked_time - syscall_dump_wakelocks__1__5__1__1__2__locked_time);
        }

        else
          printf(" %5i %-16.16s %s.%06d %-8.8s\n", syscall_dump_wakelocks__1__5__1__1__info->pid, syscall_dump_wakelocks__1__5__1__1__info->lockname, (const void *)buf, (signed int)syscall_dump_wakelocks__1__5__1__1__info->tv.tv_usec, syscall_dump_wakelocks__1__5__1__1__info->locked != (_Bool)0 ? "Locked" : "Unlocked");
      }
    }

  }

}

// syscall_execve_args
// file syscall.c line 2043
void syscall_execve_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid)
{
  const signed long int syscall_execve_args_array_size0 = (signed long int)(sc->arg + 1);
  unsigned long int args[syscall_execve_args_array_size0];
  char *filename;
  (void)s;
  syscall_get_args(pid, sc->arg, args);
  filename=syscall_peek_filename(pid, args[(signed long int)0]);
  if(!(filename == ((char *)NULL)))
  {
    syscall_add_filename(sc->syscall, pid, filename);
    free((void *)filename);
  }

}

// syscall_exit_args
// file syscall.c line 1200
static void syscall_exit_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid)
{
  (void)s;
  (void)sc;
  struct proc_info *proc;
  proc=proc_cache_find_by_pid(pid);
  if(!(proc == ((struct proc_info *)NULL)))
  {
    cpustat_get_by_proc(proc, (enum anonymous_9)PROC_FINISH);
    ctxt_switch_get_by_proc(proc, (enum anonymous_9)PROC_FINISH);
    mem_get_by_proc(proc, (const enum anonymous_9)PROC_FINISH);
  }

}

// syscall_fd_cache_lookup
// file syscall.c line 1059
static struct fd_cache * syscall_fd_cache_lookup(const signed int pid, const signed int fd)
{
  struct fd_cache *fc;
  unsigned long int h;
  h=hash_fd(pid, fd);
  fc = fd_cache[(signed long int)h];
  for( ; !(fc == ((struct fd_cache *)NULL)); fc = fc->next)
    if(fc->pid == pid)
    {
      if(fc->fd == fd)
        break;

    }

  if(fc == ((struct fd_cache *)NULL))
  {
    void *return_value_calloc_1;
    return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct fd_cache) /*64ul*/ );
    fc = (struct fd_cache *)return_value_calloc_1;
    if(fc == ((struct fd_cache *)NULL))
    {
      health_check_out_of_memory("allocating file descriptor cache item");
      return (struct fd_cache *)(void *)0;
    }

    fc->pid = pid;
    fc->fd = fd;
    fc->filename=fnotify_get_filename(pid, fd);
    if(fc->filename == ((char *)NULL))
    {
      health_check_out_of_memory("allocating filename");
      free((void *)fc);
      return (struct fd_cache *)(void *)0;
    }

    pthread_mutex_init(&fc->mutex, (const union anonymous_6 *)(void *)0);
    fc->next = fd_cache[(signed long int)h];
    fd_cache[(signed long int)h] = fc;
  }

  else
  {
    pthread_mutex_lock(&fc->mutex);
    if(fc->filename == ((char *)NULL))
    {
      fc->filename=fnotify_get_filename(pid, fd);
      if(fc->filename == ((char *)NULL))
      {
        pthread_mutex_unlock(&fc->mutex);
        health_check_out_of_memory("allocating filename");
        free((void *)fc);
        return (struct fd_cache *)(void *)0;
      }

    }

    pthread_mutex_unlock(&fc->mutex);
  }
  return fc;
}

// syscall_filename_cache_free
// file syscall.c line 1920
static void syscall_filename_cache_free(void)
{
  signed int i = 0;
  for( ; !(i >= 1997); i = i + 1)
  {
    struct filename_info *next;
    struct filename_info *info = filename_cache[(signed long int)i];
    for( ; !(info == ((struct filename_info *)NULL)); info = next)
    {
      next = info->next;
      free((void *)info->filename);
      free((void *)info);
    }
  }
}

// syscall_filename_cmp
// file syscall.c line 1908
static signed int syscall_filename_cmp(const void *d1, const void *d2)
{
  struct filename_info *f1 = (struct filename_info *)d1;
  struct filename_info *f2 = (struct filename_info *)d2;
  return (signed int)(f2->count - f1->count);
}

// syscall_fsync_generic_args
// file syscall.c line 1293
static void syscall_fsync_generic_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid)
{
  const signed long int syscall_fsync_generic_args_array_size0 = (signed long int)(sc->arg + 1);
  unsigned long int args[syscall_fsync_generic_args_array_size0];
  struct anonymous *info;
  (void)s;
  syscall_get_args(pid, sc->arg, args);
  info=syscall_sync_info_find_by_pid(pid);
  if(!(info == ((struct anonymous *)NULL)))
  {
    info->fsync_count = info->fsync_count + 1ul;
    info->total_count = info->total_count + 1ul;
    syscall_account_sync_file(info, sc->syscall, pid, (signed int)args[(signed long int)0]);
  }

}

// syscall_get_arg_data
// file syscall.c line 912
static void syscall_get_arg_data(const unsigned long int addr, const signed int pid, void *data, const unsigned long int len)
{
  unsigned long int i;
  unsigned long int n = ((len + sizeof(unsigned long int) /*8ul*/ ) - (unsigned long int)1) / sizeof(unsigned long int) /*8ul*/ ;
  const signed long int n_array_size0 = (signed long int)n;
  unsigned long int tmpdata[n_array_size0];
  i = (unsigned long int)0;
  signed long int return_value_ptrace_1;
  for( ; !(i >= n); i = i + 1ul)
  {
    return_value_ptrace_1=ptrace((enum __ptrace_request)PTRACE_PEEKDATA, pid, addr + sizeof(unsigned long int) /*8ul*/  * i, (void *)0);
    tmpdata[(signed long int)i] = (unsigned long int)return_value_ptrace_1;
  }
  memcpy(data, (const void *)tmpdata, len);
}

// syscall_get_args
// file syscall.c line 579
static signed int syscall_get_args(const signed int pid, const signed int arg, unsigned long int *args)
{
  memset((void *)args, 0, sizeof(unsigned long int) /*8ul*/  * (unsigned long int)arg);
  signed int i;
  signed long int cs;
  signed int *regs;
  cs=ptrace((enum __ptrace_request)PTRACE_PEEKUSER, pid, 8 * 17, (void *)0);
  switch(cs)
  {
    case (signed long int)0x23:
    {
      static signed int regs32[6l] = { 5, 11, 12, 13, 14, 4 };
      regs = regs32;
      break;
    }
    case (signed long int)0x33:
    {
      static signed int regs64[6l] = { 14, 13, 12, 7, 9, 8 };
      regs = regs64;
      break;
    }
    default:
    {
      fprintf(stderr, "Unknown personality, CS=0x%x.\n", (signed int)cs);
      return -1;
    }
  }
  i = 0;
  signed long int return_value_ptrace_1;
  for( ; arg >= i; i = i + 1)
  {
    return_value_ptrace_1=ptrace((enum __ptrace_request)PTRACE_PEEKUSER, pid, regs[(signed long int)i] * 8, (void *)0);
    args[(signed long int)i] = (unsigned long int)return_value_ptrace_1;
  }
  return 0;
}

// syscall_get_call
// file syscall.c line 408
static inline signed int syscall_get_call(const signed int pid, signed int *syscall)
{
  signed int *return_value___errno_location_1;
  return_value___errno_location_1=__errno_location();
  *return_value___errno_location_1 = 0;
  signed long int return_value_ptrace_2;
  return_value_ptrace_2=ptrace((enum __ptrace_request)PTRACE_PEEKUSER, pid, sizeof(signed long int) /*8ul*/  * (unsigned long int)15, (void *)0);
  *syscall = (signed int)return_value_ptrace_2;
  signed int *return_value___errno_location_3;
  return_value___errno_location_3=__errno_location();
  if(!(*return_value___errno_location_3 == 0))
  {
    *syscall = -1;
    return -1;
  }

  else
    return 0;
}

// syscall_get_call_state
// file syscall.c line 374
static inline enum anonymous_27 syscall_get_call_state(const signed int pid)
{
  signed int *return_value___errno_location_1;
  return_value___errno_location_1=__errno_location();
  *return_value___errno_location_1 = 0;
  signed long int return_value_ptrace_2;
  return_value_ptrace_2=ptrace((enum __ptrace_request)PTRACE_PEEKUSER, pid, sizeof(signed long int) /*8ul*/  * (unsigned long int)10, (void *)0);
  if(!(return_value_ptrace_2 == -38l))
    return (enum anonymous_27)SYSCALL_RETURN;

  else
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    if(!(*return_value___errno_location_3 == 0))
      return (enum anonymous_27)SYSCALL_UNKNOWN;

    else
      return (enum anonymous_27)SYSCALL_ENTRY;
  }
}

// syscall_get_context
// file syscall.c line 2589
static struct syscall_context * syscall_get_context(signed int pid)
{
  struct syscall_context *ctxt;
  ctxt=syscall_context_find_by_pid(pid);
  if(ctxt == ((struct syscall_context *)NULL))
  {
    unsigned long int h;
    h=hash_syscall_context(pid);
    void *return_value_calloc_1;
    return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct syscall_context) /*56ul*/ );
    ctxt = (struct syscall_context *)return_value_calloc_1;
    if(ctxt == ((struct syscall_context *)NULL))
    {
      fprintf(stderr, "Out of memory allocating tracing context.\n");
      return (struct syscall_context *)(void *)0;
    }

    ctxt->pid = pid;
    ctxt->proc=proc_cache_find_by_pid(pid);
    ctxt->timeout = 0.0;
    ctxt->syscall = -1;
    ctxt->syscall_info = (struct syscall_info *)(void *)0;
    ctxt->state = ctxt->state | 0x00000001;
    struct link *return_value_list_append_2;
    return_value_list_append_2=list_append(&syscall_contexts, (void *)ctxt);
    if(return_value_list_append_2 == ((struct link *)NULL))
    {
      free((void *)ctxt);
      return (struct syscall_context *)(void *)0;
    }

    ctxt->next = syscall_contexts_cache[(signed long int)h];
    syscall_contexts_cache[(signed long int)h] = ctxt;
    procs_traced = procs_traced + 1;
  }

  return ctxt;
}

// syscall_get_return
// file syscall.c line 511
static inline signed int syscall_get_return(const signed int pid, signed int *rc)
{
  signed int *return_value___errno_location_1;
  return_value___errno_location_1=__errno_location();
  *return_value___errno_location_1 = 0;
  signed long int return_value_ptrace_2;
  return_value_ptrace_2=ptrace((enum __ptrace_request)PTRACE_PEEKUSER, pid, sizeof(signed long int) /*8ul*/  * (unsigned long int)10, (void *)0);
  *rc = (signed int)return_value_ptrace_2;
  signed int *return_value___errno_location_3;
  return_value___errno_location_3=__errno_location();
  if(!(*return_value___errno_location_3 == 0))
    return -1;

  else
    if(*rc == -38)
    {
      printf("got unexpected SYSCALL entry\n");
      return -1;
    }

    else
      return 0;
}

// syscall_handle_event
// file syscall.c line 2470
static void syscall_handle_event(struct syscall_context *ctxt, signed int event)
{
  unsigned long int msg;
  signed int child;
  struct proc_info *p;
  switch(event)
  {
    case 3:

    case 1:

    case 2:
    {
      ptrace((enum __ptrace_request)PTRACE_GETEVENTMSG, ctxt->pid, 0, &msg);
      child = (signed int)msg;
      p=proc_cache_add(child, 0, event == 3);
      if(!(p == ((struct proc_info *)NULL)))
      {
        proc_pids_add_proc(__pids, p);
        mem_get_by_proc(p, (const enum anonymous_9)PROC_START);
        cpustat_get_by_proc(p, (enum anonymous_9)PROC_START);
        ctxt_switch_get_by_proc(p, (enum anonymous_9)PROC_START);
        syscall_get_context(child);
      }

      net_connection_pid(child);
      break;
    }
    case 6:
      if(!((0x00000002 & ctxt->state) == 0))
        ptrace((enum __ptrace_request)PTRACE_CONT, ctxt->pid, 0, 0);

  }
}

// syscall_handle_stop
// file syscall.c line 2539
static inline signed int syscall_handle_stop(struct syscall_context *ctxt, const signed int status)
{
  signed int event = status >> 16;
  /* tag-#anon#lUN[lS32'__in'||S32'__i'|] */
union anonymous_8
{
  // __in
  signed int __in;
  // __i
  signed int __i;
};

/* */
  ;
  signed int sig = (((union anonymous_8){ .__in=status }).__i & 0xff00) >> 8;
  if(sig == 5)
  {
    if(!(event == 0))
      syscall_handle_event(ctxt, event);

    else
      syscall_handle_trap(ctxt);
  }

  else
    if(!(sig == 17))
    {
      if(sig == 133)
        syscall_handle_syscall(ctxt);

      else
        if(!(sig == 19))
          return sig;

    }

  return 0;
}

// syscall_handle_syscall
// file syscall.c line 2412
static void syscall_handle_syscall(struct syscall_context *ctxt)
{
  signed int syscall;
  enum anonymous_27 state;
  state=syscall_get_call_state(ctxt->pid);
  signed int return_value_syscall_get_call_1;
  if(!((signed int)state == SYSCALL_ENTRY))
  {
    if((signed int)state == SYSCALL_RETURN)
      goto __CPROVER_DUMP_L7;

  }

  else
  {
    return_value_syscall_get_call_1=syscall_get_call(ctxt->pid, &ctxt->syscall);
    if(return_value_syscall_get_call_1 == -1)
    {
      ctxt->syscall_info = (struct syscall_info *)(void *)0;
      ctxt->timeout = 0.0;
    }

    else
    {
      ctxt->syscall_info=syscall_count_usage(ctxt->pid, ctxt->syscall, &ctxt->timeout);
      if(!(ctxt->syscall_info == ((struct syscall_info *)NULL)))
        gettimeofday(&ctxt->syscall_info->usec_enter, (struct timezone *)(void *)0);

    }
    goto __CPROVER_DUMP_L9;
  }
  signed int return_value_syscall_get_call_2;
  return_value_syscall_get_call_2=syscall_get_call(ctxt->pid, &syscall);
  if(return_value_syscall_get_call_2 == -1)
  {
    printf("syscall give up\n");
    ctxt->syscall_info = (struct syscall_info *)(void *)0;
    ctxt->timeout = 0.0;
  }

  else
    if(!(syscall == ctxt->syscall))
    {
      ctxt->syscall = syscall;
      ctxt->syscall_info=syscall_count_usage(ctxt->pid, ctxt->syscall, &ctxt->timeout);
      if(!(ctxt->syscall_info == ((struct syscall_info *)NULL)))
        gettimeofday(&ctxt->syscall_info->usec_enter, (struct timezone *)(void *)0);

    }

    else
    {

    __CPROVER_DUMP_L7:
      ;
      if(!(ctxt->syscall_info == ((struct syscall_info *)NULL)))
      {
        struct timeval t;
        unsigned long int usec;
        gettimeofday(&ctxt->syscall_info->usec_return, (struct timezone *)(void *)0);
        t=timeval_sub(&ctxt->syscall_info->usec_return, &ctxt->syscall_info->usec_enter);
        usec = (unsigned long int)(t.tv_sec * (signed long int)1000000 + t.tv_usec);
        ctxt->syscall_info->usecs_total = ctxt->syscall_info->usecs_total + usec;
        syscall_account_return(ctxt->syscall_info, ctxt->pid, ctxt->syscall, ctxt->timeout);
      }

      ctxt->syscall = -1;
      ctxt->syscall_info = (struct syscall_info *)(void *)0;
      ctxt->timeout = 0.0;
    }

__CPROVER_DUMP_L9:
  ;
}

// syscall_handle_trap
// file syscall.c line 2519
static inline void syscall_handle_trap(struct syscall_context *ctxt)
{
  struct anonymous_7 siginfo;
  signed long int return_value_ptrace_1;
  return_value_ptrace_1=ptrace((enum __ptrace_request)PTRACE_GETSIGINFO, ctxt->pid, 0, &siginfo);
  if(return_value_ptrace_1 == -1l)
    fprintf(stderr, "Cannot get signal info on pid %d.\n", ctxt->pid);

  else
    if(siginfo.si_code == 5)
      syscall_handle_syscall(ctxt);

}

// syscall_hashtable_free
// file syscall.c line 752
static void syscall_hashtable_free(void)
{
  signed int i = 0;
  for( ; !(i >= 1997); i = i + 1)
  {
    struct syscall_info *next;
    struct syscall_info *s = syscall_info[(signed long int)i];
    for( ; !(s == ((struct syscall_info *)NULL)); s = next)
    {
      next = s->next;
      list_free(&s->return_history, free);
      free((void *)s);
    }
  }
}

// syscall_init
// file syscall.c line 2781
extern void syscall_init(void)
{
  list_init(&syscall_wakelocks);
  list_init(&syscall_contexts);
  list_init(&syscall_syncs);
}

// syscall_inotify_add_watch_args
// file syscall.c line 2008
void syscall_inotify_add_watch_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid)
{
  const signed long int syscall_inotify_add_watch_args_array_size0 = (signed long int)(sc->arg + 1);
  unsigned long int args[syscall_inotify_add_watch_args_array_size0];
  char *filename;
  (void)s;
  syscall_get_args(pid, sc->arg, args);
  filename=syscall_peek_filename(pid, args[(signed long int)1]);
  if(!(filename == ((char *)NULL)))
  {
    syscall_add_filename(sc->syscall, pid, filename);
    free((void *)filename);
  }

}

// syscall_mmap_args
// file syscall.c line 1361
static void syscall_mmap_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid)
{
  const signed long int syscall_mmap_args_array_size0 = (signed long int)(sc->arg + 2);
  unsigned long int args[syscall_mmap_args_array_size0];
  (void)s;
  syscall_get_args(pid, sc->arg, args);
  mem_mmap_account(pid, (unsigned long int)args[(signed long int)1], (_Bool)1);
}

// syscall_mq_timedreceive_ret
// file syscall.c line 347
static void syscall_mq_timedreceive_ret(struct json_object *j_obj, const struct syscall *sc, const struct syscall_info *s)
{
  (void)j_obj;
  (void)sc;
  (void)s;
}

// syscall_mq_timedsend_ret
// file syscall.c line 361
static void syscall_mq_timedsend_ret(struct json_object *j_obj, const struct syscall *sc, const struct syscall_info *s)
{
  (void)j_obj;
  (void)sc;
  (void)s;
}

// syscall_munmap_args
// file syscall.c line 1381
static void syscall_munmap_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid)
{
  const signed long int syscall_munmap_args_array_size0 = (signed long int)(sc->arg + 2);
  unsigned long int args[syscall_munmap_args_array_size0];
  (void)s;
  syscall_get_args(pid, sc->arg, args);
  mem_mmap_account(pid, (unsigned long int)args[(signed long int)1], (_Bool)0);
}

// syscall_name
// file syscall.c line 670
static void syscall_name(const signed int syscall, char *name, const unsigned long int len)
{
  _Bool return_value_syscall_valid_1;
  return_value_syscall_valid_1=syscall_valid(syscall);
  _Bool tmp_if_expr_2;
  if(!(return_value_syscall_valid_1 == (_Bool)0))
    tmp_if_expr_2 = syscalls[(signed long int)syscall].name != ((char *)NULL) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  if(tmp_if_expr_2)
    __builtin_strncpy(name, syscalls[(signed long int)syscall].name, len);

  else
    snprintf(name, len, "SYS_NR_%d", syscall);
}

// syscall_nanosleep_generic_ret
// file syscall.c line 200
static void syscall_nanosleep_generic_ret(struct json_object *j_obj, const struct syscall *sc, const struct syscall_info *s)
{
  struct link *l;
  unsigned long int ret_error = (unsigned long int)0;
  l = s->return_history.head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    struct anonymous_26 *ret = (struct anonymous_26 *)l->data;
    if(!(ret->ret == 0))
      ret_error = ret_error + 1ul;

  }
  if(!(ret_error == 0ul))
  {
    printf(" %s (%i), %s:\n", s->proc->cmdline, s->proc->pid, sc->name);
    printf("   %8lu %s system call errors\n", ret_error, sc->name);
    info_emit = 1;
    if(!(j_obj == ((struct json_object *)NULL)))
    {
      struct json_object *j_nanosleep_error;
      struct json_object *j_error;
      j_nanosleep_error=j_obj_new_obj();
      if(j_nanosleep_error == ((struct json_object *)NULL))
        goto __CPROVER_DUMP_L7;

      j_obj_array_add_link1(j_obj, j_nanosleep_error);
      j_error=j_obj_new_obj();
      if(j_error == ((struct json_object *)NULL))
        goto __CPROVER_DUMP_L7;

      j_obj_obj_add_link1(j_nanosleep_error, "nanosleep-error", j_error);
      j_obj_new_int32_add_link1(j_error, "pid", s->proc->pid);
      j_obj_new_int32_add_link1(j_error, "ppid", s->proc->ppid);
      j_obj_new_int32_add_link1(j_error, "is-thread", (const signed int)s->proc->is_thread);
      j_obj_new_string_add_link1(j_error, "name", s->proc->cmdline);
      j_obj_new_string_add_link1(j_error, "system-call", sc->name);
      j_obj_new_int64_add_link1(j_error, "error-count", (const signed long int)ret_error);
    }

  }


__CPROVER_DUMP_L7:
  ;
}

// syscall_peek_data
// file syscall.c line 1003
static void * syscall_peek_data(const signed int pid, const unsigned long int addr, const unsigned long int len)
{
  unsigned long int *data;
  unsigned long int i;
  unsigned long int n = ((len + sizeof(unsigned long int) /*8ul*/ ) - (unsigned long int)1) / sizeof(unsigned long int) /*8ul*/ ;
  void *return_value_calloc_1;
  return_value_calloc_1=calloc(sizeof(unsigned long int) /*8ul*/ , n + (unsigned long int)1);
  data = (unsigned long int *)return_value_calloc_1;
  signed long int return_value_ptrace_2;
  if(data == ((unsigned long int *)NULL))
  {
    health_check_out_of_memory("allocating syscall peek buffer");
    return (void *)0;
  }

  else
  {
    i = (unsigned long int)0;
    for( ; !(i >= n); i = i + 1ul)
    {
      return_value_ptrace_2=ptrace((enum __ptrace_request)PTRACE_PEEKDATA, pid, addr + sizeof(unsigned long int) /*8ul*/  * i, (void *)0);
      data[(signed long int)i] = (unsigned long int)return_value_ptrace_2;
    }
    ((char *)data)[(signed long int)len] = (char)0;
    return (void *)data;
  }
}

// syscall_peek_filename
// file syscall.c line 1838
static char * syscall_peek_filename(const signed int pid, const unsigned long int addr)
{
  char *data;
  unsigned long int i;
  unsigned long int n = (unsigned long int)0;
  unsigned long int v;
  do
  {
    signed long int return_value_ptrace_1;
    return_value_ptrace_1=ptrace((enum __ptrace_request)PTRACE_PEEKDATA, pid, addr + n, (void *)0);
    v = (unsigned long int)(return_value_ptrace_1 & (signed long int)0xff);
    n = n + 1ul;
  }
  while(!(v == 0ul));
  void *return_value_calloc_2;
  return_value_calloc_2=calloc(sizeof(char) /*1ul*/ , n);
  data = (char *)return_value_calloc_2;
  signed long int return_value_ptrace_3;
  if(data == ((char *)NULL))
  {
    health_check_out_of_memory("allocating syscall peek buffer");
    return (char *)(void *)0;
  }

  else
  {
    i = (unsigned long int)0;
    for( ; !(i >= n); i = i + 1ul)
    {
      return_value_ptrace_3=ptrace((enum __ptrace_request)PTRACE_PEEKDATA, pid, addr + i, (void *)0);
      data[(signed long int)i] = (char)return_value_ptrace_3;
    }
    return data;
  }
}

// syscall_poll_generic_ret
// file syscall.c line 251
static void syscall_poll_generic_ret(struct json_object *j_obj, const struct syscall *sc, const struct syscall_info *s)
{
  struct link *l;
  signed int prev_ret = -1;
  double prev_timeout = -1.0;
  unsigned long int zero_timeout_repeats = (unsigned long int)0;
  unsigned long int zero_timeouts = (unsigned long int)0;
  unsigned long int timeout_repeats = (unsigned long int)0;
  unsigned long int ret_error = (unsigned long int)0;
  l = s->return_history.head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    struct anonymous_26 *ret = (struct anonymous_26 *)l->data;
    if(ret->ret == 0)
    {
      if(IEEE_FLOAT_EQUAL(ret->timeout, 0.0))
      {
        zero_timeouts = zero_timeouts + 1ul;
        if(prev_ret == 0)
        {
          if(IEEE_FLOAT_EQUAL(prev_timeout, 0.0))
            zero_timeout_repeats = zero_timeout_repeats + 1ul;

          else
            timeout_repeats = timeout_repeats + 1ul;
        }

      }

    }

    else
      if(!(ret->ret >= 0))
        ret_error = ret_error + 1ul;

    prev_ret = ret->ret;
    prev_timeout = ret->timeout;
  }
  if(!((ret_error | timeout_repeats | zero_timeout_repeats | zero_timeouts) == 0ul))
  {
    printf(" %s (%i), %s:\n", s->proc->cmdline, s->proc->pid, sc->name);
    if(!(zero_timeouts == 0ul))
      printf("   %8lu immediate timed out calls with zero timeout (non-blocking peeks)\n", zero_timeouts);

    if(!(timeout_repeats == 0ul))
      printf("   %8lu repeated timed out polled calls with non-zero timeouts (light polling)\n", timeout_repeats);

    if(!(zero_timeout_repeats == 0ul))
      printf("   %8lu repeated immediate timed out polled calls with zero timeouts (heavy polling peeks)\n", zero_timeout_repeats);

    if(!(ret_error == 0ul))
      printf("   %8lu system call errors\n", ret_error);

    info_emit = 1;
  }

  if(!(j_obj == ((struct json_object *)NULL)))
  {
    struct json_object *j_timeout;
    struct json_object *j_poll;
    j_timeout=j_obj_new_obj();
    if(j_timeout == ((struct json_object *)NULL))
      goto __CPROVER_DUMP_L15;

    j_obj_array_add_link1(j_obj, j_timeout);
    j_poll=j_obj_new_obj();
    if(j_poll == ((struct json_object *)NULL))
      goto __CPROVER_DUMP_L15;

    j_obj_obj_add_link1(j_timeout, "polling-timeout", j_poll);
    j_obj_new_int32_add_link1(j_poll, "pid", s->proc->pid);
    j_obj_new_int32_add_link1(j_poll, "ppid", s->proc->ppid);
    j_obj_new_int32_add_link1(j_poll, "is-thread", (const signed int)s->proc->is_thread);
    j_obj_new_string_add_link1(j_poll, "name", s->proc->cmdline);
    j_obj_new_string_add_link1(j_poll, "system-call", sc->name);
    j_obj_new_int64_add_link1(j_poll, "zero-timeouts", (const signed long int)zero_timeouts);
    j_obj_new_int64_add_link1(j_poll, "repeat-timeouts", (const signed long int)timeout_repeats);
    j_obj_new_int64_add_link1(j_poll, "repeat-zero-timeouts", (const signed long int)zero_timeout_repeats);
    j_obj_new_int64_add_link1(j_poll, "error-count", (const signed long int)ret_error);
  }


__CPROVER_DUMP_L15:
  ;
}

// syscall_recvfrom_ret
// file syscall.c line 1607
static void syscall_recvfrom_ret(const struct syscall *sc, const struct syscall_info *s, const signed int ret)
{
  const signed long int syscall_recvfrom_ret_array_size0 = (signed long int)(sc->arg + 1);
  unsigned long int args[syscall_recvfrom_ret_array_size0];
  signed int sockfd;
  signed int pid = s->proc->pid;
  syscall_get_args(pid, sc->arg, args);
  sockfd = (signed int)args[(signed long int)0];
  if(ret >= 0)
    net_account_recv(pid, sockfd, (unsigned long int)ret);

}

// syscall_semtimedop_ret
// file syscall.c line 333
static void syscall_semtimedop_ret(struct json_object *j_obj, const struct syscall *sc, const struct syscall_info *s)
{
  (void)j_obj;
  (void)sc;
  (void)s;
}

// syscall_sendto_ret
// file syscall.c line 1585
static void syscall_sendto_ret(const struct syscall *sc, const struct syscall_info *s, const signed int ret)
{
  const signed long int syscall_sendto_ret_array_size0 = (signed long int)(sc->arg + 1);
  unsigned long int args[syscall_sendto_ret_array_size0];
  signed int sockfd;
  signed int pid = s->proc->pid;
  syscall_get_args(pid, sc->arg, args);
  sockfd = (signed int)args[(signed long int)0];
  if(ret >= 0)
    net_account_send(pid, sockfd, (unsigned long int)ret);

}

// syscall_stop
// file syscall.c line 2792
extern signed int syscall_stop(void)
{
  signed int *status = ((signed int *)NULL);
  pthread_cancel(syscall_tracer);
  pthread_join(syscall_tracer, (void **)&status);
  if(status == (signed int *)-1)
    return 0;

  else
    return *status;
}

// syscall_sync_args
// file syscall.c line 1317
static void syscall_sync_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid)
{
  struct anonymous *info;
  (void)sc;
  (void)s;
  info=syscall_sync_info_find_by_pid(pid);
  if(!(info == ((struct anonymous *)NULL)))
  {
    info->sync_count = info->sync_count + 1ul;
    info->total_count = info->total_count + 1ul;
  }

}

// syscall_sync_cmp
// file syscall.c line 1400
static signed int syscall_sync_cmp(const void *d1, const void *d2)
{
  struct anonymous *s1 = (struct anonymous *)d1;
  struct anonymous *s2 = (struct anonymous *)d2;
  return (signed int)(s2->total_count - s1->total_count);
}

// syscall_sync_free_fileinfo
// file syscall.c line 1412
static void syscall_sync_free_fileinfo(void *data)
{
  struct anonymous_0 *f = (struct anonymous_0 *)data;
  free((void *)f->filename);
  free((void *)f);
}

// syscall_sync_free_item
// file syscall.c line 1424
static void syscall_sync_free_item(void *data)
{
  struct anonymous *info = (struct anonymous *)data;
  list_free(&info->sync_file, syscall_sync_free_fileinfo);
  free((void *)info);
}

// syscall_sync_info_find_by_pid
// file syscall.c line 1226
static struct anonymous * syscall_sync_info_find_by_pid(const signed int pid)
{
  struct link *l;
  struct anonymous *info;
  l = syscall_syncs.head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    info = (struct anonymous *)l->data;
    if(info->pid == pid)
      return info;

  }
  void *return_value_calloc_1;
  return_value_calloc_1=calloc((unsigned long int)1, sizeof(struct anonymous) /*72ul*/ );
  info = (struct anonymous *)return_value_calloc_1;
  if(info == ((struct anonymous *)NULL))
  {
    health_check_out_of_memory("allocating file sync accounting info");
    return (struct anonymous *)(void *)0;
  }

  else
  {
    info->pid = pid;
    struct link *return_value_list_append_2;
    return_value_list_append_2=list_append(&syscall_syncs, (void *)info);
    if(return_value_list_append_2 == ((struct link *)NULL))
    {
      free((void *)info);
      return (struct anonymous *)(void *)0;
    }

    else
      return info;
  }
}

// syscall_timeout_millisec
// file syscall.c line 984
static void syscall_timeout_millisec(const struct syscall *sc, struct syscall_info *s, const signed int pid, const double threshold, double *ret_timeout)
{
  const signed long int syscall_timeout_millisec_array_size0 = (signed long int)(sc->arg + 1);
  unsigned long int args[syscall_timeout_millisec_array_size0];
  syscall_get_args(pid, sc->arg, args);
  *ret_timeout = (double)(signed int)args[(signed long int)sc->arg] / 1000.0;
  syscall_count_timeout(s, *ret_timeout, threshold);
}

// syscall_timeout_to_human_time
// file syscall.c line 2083
static char * syscall_timeout_to_human_time(const double timeout, const _Bool end, char *buffer, const unsigned long int len)
{
  char *units[5l] = { "sec", "msec", "usec", "nsec", "psec" };
  signed int i;
  double t = timeout;
  i = 0;
  for( ; t < 0.99999 && IEEE_FLOAT_NOTEQUAL(t, 0.0); i = i + 1)
    t = t * 1000.0;
  if(!(end == (_Bool)0))
  {
    if(t + -1.000000e-1 < 0.99999)
    {
      t = t * 1000.0;
      i = i + 1;
    }

    t = t - 0.1;
  }

  snprintf(buffer, len, "%5.1f", t);
  return units[(signed long int)i];
}

// syscall_timespec_timeout
// file syscall.c line 931
static void syscall_timespec_timeout(const struct syscall *sc, struct syscall_info *s, const signed int pid, const double threshold, double *ret_timeout)
{
  const signed long int syscall_timespec_timeout_array_size0 = (signed long int)(sc->arg + 1);
  unsigned long int args[syscall_timespec_timeout_array_size0];
  struct timespec timeout;
  syscall_get_args(pid, sc->arg, args);
  if(args[(signed long int)sc->arg] == 0ul)
    *ret_timeout = -1.0;

  else
  {
    syscall_get_arg_data(args[(signed long int)sc->arg], pid, (void *)&timeout, sizeof(struct timespec) /*16ul*/ );
    *ret_timeout = (double)timeout.tv_sec + (double)timeout.tv_nsec / 1000000000.0;
  }
  syscall_count_timeout(s, *ret_timeout, threshold);
}

// syscall_timeval_timeout
// file syscall.c line 957
static void syscall_timeval_timeout(const struct syscall *sc, struct syscall_info *s, const signed int pid, const double threshold, double *ret_timeout)
{
  const signed long int syscall_timeval_timeout_array_size0 = (signed long int)(sc->arg + 1);
  unsigned long int args[syscall_timeval_timeout_array_size0];
  struct timeval timeout;
  syscall_get_args(pid, sc->arg, args);
  if(args[(signed long int)sc->arg] == 0ul)
    *ret_timeout = -1.0;

  else
  {
    syscall_get_arg_data(args[(signed long int)sc->arg], pid, (void *)&timeout, sizeof(struct timeval) /*16ul*/ );
    *ret_timeout = (double)timeout.tv_sec + (double)timeout.tv_usec / 1000000.0;
  }
  syscall_count_timeout(s, *ret_timeout, threshold);
}

// syscall_timeval_to_double
// file syscall.c line 1637
static inline double syscall_timeval_to_double(struct timeval *tv)
{
  return (double)tv->tv_sec + (double)tv->tv_usec / 1000000.0;
}

// syscall_trace
// file syscall.c line 2652
extern void * syscall_trace(void *arg)
{
  struct syscall_context *ctxt;
  signed int status;
  struct link *l;
  unsigned long int ptrace_flags;
  (void)arg;
  _Bool tmp_if_expr_6;
  signed int *return_value___errno_location_5;
  static signed int ret = 0;
  do
  {
    struct anonymous_4 __cancel_buf;
    void (*__cancel_routine)(void *) = syscall_trace_cleanup;
    void *__cancel_arg = arg;
    signed int __not_first_call;
    __not_first_call=__sigsetjmp((struct __jmp_buf_tag *)(void *)__cancel_buf.__cancel_jmp_buf, 0);
    if(!((signed long int)__not_first_call == 0l))
    {
      __cancel_routine(__cancel_arg);
      __pthread_unwind_next(&__cancel_buf);
    }

    __pthread_register_cancel(&__cancel_buf);
    do
    {
      pthread_setcancelstate(0, (signed int *)(void *)0);
      ptrace_flags = (unsigned long int)(1 | 64);
      if(!((0x00000040 & opt_flags) == 0))
        ptrace_flags = ptrace_flags | (unsigned long int)(8 | 2 | 4);

      l = syscall_contexts.head;
      for( ; !(l == ((struct link *)NULL)); l = l->next)
      {
        ctxt = (struct syscall_context *)l->data;
        signed long int return_value_ptrace_2;
        return_value_ptrace_2=ptrace((enum __ptrace_request)PTRACE_ATTACH, ctxt->pid, 0, 0);
        if(!(return_value_ptrace_2 >= 0l))
        {
          signed int *return_value___errno_location_1;
          return_value___errno_location_1=__errno_location();
          if(*return_value___errno_location_1 == 1)
            fprintf(stderr, "Insufficient privilege to trace process %d\n", ctxt->pid);

          else
            fprintf(stderr, "Cannot attach trace to process %d\n", ctxt->pid);
          ret = -1;
          goto done;
        }

        ctxt->state = ctxt->state | 0x00000002;
        ptrace((enum __ptrace_request)PTRACE_SETOPTIONS, ctxt->pid, 0, ptrace_flags);
      }
      while(procs_traced >= 1 && !(keep_running == (_Bool)0))
      {
        signed int sig = 0;
        signed int pid;
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        *return_value___errno_location_3 = 0;
        pid=waitpid(-1, &status, 0x40000000);
        if(pid == -1)
        {
          signed int *return_value___errno_location_4;
          return_value___errno_location_4=__errno_location();
          if(*return_value___errno_location_4 == 4)
            tmp_if_expr_6 = (_Bool)1;

          else
          {
            return_value___errno_location_5=__errno_location();
            tmp_if_expr_6 = *return_value___errno_location_5 == 10 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_6)
            break;

        }

        ctxt=syscall_get_context(pid);
        if(ctxt == ((struct syscall_context *)NULL))
        {
          fprintf(stderr, "Out of memory allocating tracing context.\n");
          break;
        }

        if((0xff & status) == 0x7f)
          sig=syscall_handle_stop(ctxt, status);

        else
          if((0x7f & status) == 0)
          {
            ctxt->state = ctxt->state & ~(0x00000001 | 0x00000002);
            procs_traced = procs_traced - 1;
          }

          else
            if((signed int)((127 & (signed char)status) + 1) >> 1 >= 1)
            {
              if((0x7f & status) == 9)
              {
                printf("Process %d received SIGKILL during monitoring.\n", pid);
                ctxt->state = ctxt->state & ~(0x00000001 | 0x00000002);
                procs_traced = procs_traced - 1;
              }

            }

        ptrace((enum __ptrace_request)PTRACE_SYSCALL, ctxt->pid, 0, sig);
      }

    done:
      ;
      syscall_trace_cleanup((void *)0);

    __CPROVER_DUMP_L19:
      ;
    }
    while((_Bool)0);
    __pthread_unregister_cancel(&__cancel_buf);
  }
  while((_Bool)0);
  kill(main_pid, 10);
  pthread_exit((void *)&ret);
}

// syscall_trace_cleanup
// file syscall.c line 2626
static void syscall_trace_cleanup(void *arg)
{
  struct link *l;
  (void)arg;
  l = syscall_contexts.head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    struct syscall_context *ctxt = (struct syscall_context *)l->data;
    if(!((0x00000002 & ctxt->state) == 0))
    {
      signed int status;
      kill(ctxt->pid, 19);
      waitpid(ctxt->pid, &status, 0x40000000);
      ptrace((enum __ptrace_request)PTRACE_DETACH, ctxt->pid, 0, 0);
      kill(ctxt->pid, 18);
    }

  }
  keep_running = (volatile _Bool)0;
}

// syscall_trace_proc
// file syscall.c line 2823
extern signed int syscall_trace_proc(struct anonymous_3 *pids)
{
  struct link *l;
  __pids = pids;
  main_pid=getpid();
  l = pids->head;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    struct proc_info *p = (struct proc_info *)l->data;
    syscall_get_context(p->pid);
  }
  signed int return_value_pthread_create_1;
  return_value_pthread_create_1=pthread_create(&syscall_tracer, (const union pthread_attr_t *)(void *)0, syscall_trace, (void *)0);
  if(!(return_value_pthread_create_1 >= 0))
  {
    fprintf(stderr, "Failed to create tracing thread.\n");
    return -1;
  }

  else
    return 0;
}

// syscall_valid
// file syscall.c line 155
static _Bool syscall_valid(const signed int syscall)
{
  return syscall >= 0 && syscall <= (signed int)syscalls_len;
}

// syscall_wakelock_cmp
// file syscall.c line 1628
static signed int syscall_wakelock_cmp(const void *data1, const void *data2)
{
  signed int tmp_statement_expression_1;
  unsigned long int __s1_len;
  unsigned long int __s2_len;
  signed int return_value___builtin_strcmp_2;
  return_value___builtin_strcmp_2=__builtin_strcmp((char *)data1, (char *)data2);
  tmp_statement_expression_1 = return_value___builtin_strcmp_2;
  return tmp_statement_expression_1;
}

// syscall_wakelock_fd_cache_free
// file syscall.c line 1037
static void syscall_wakelock_fd_cache_free(void)
{
  signed int i = 0;
  for( ; !(i >= 1997); i = i + 1)
  {
    struct fd_cache *next;
    struct fd_cache *fc = fd_cache[(signed long int)i];
    for( ; !(fc == ((struct fd_cache *)NULL)); fc = next)
    {
      next = fc->next;
      free((void *)fc->filename);
      free((void *)fc);
    }
  }
}

// syscall_wakelock_free
// file syscall.c line 1025
static void syscall_wakelock_free(void *ptr)
{
  struct syscall_wakelock_info *info = (struct syscall_wakelock_info *)ptr;
  free((void *)info->lockname);
  free((void *)info);
}

// syscall_wakelock_names_by_pid
// file syscall.c line 1648
void syscall_wakelock_names_by_pid(signed int pid, struct anonymous_3 *wakelock_names)
{
  struct link *l;
  struct link *ln;
  l = syscall_wakelocks.head;
  signed int tmp_statement_expression_1;
  for( ; !(l == ((struct link *)NULL)); l = l->next)
  {
    struct syscall_wakelock_info *info = (struct syscall_wakelock_info *)l->data;
    if(info->pid == pid)
    {
      _Bool found = (_Bool)0;
      ln = wakelock_names->head;
      for( ; !(ln == ((struct link *)NULL)); ln = ln->next)
      {
        char *lockname = (char *)ln->data;
        unsigned long int __s1_len;
        unsigned long int __s2_len;
        signed int return_value___builtin_strcmp_2;
        return_value___builtin_strcmp_2=__builtin_strcmp(lockname, info->lockname);
        tmp_statement_expression_1 = return_value___builtin_strcmp_2;
        if(tmp_statement_expression_1 == 0)
        {
          found = (_Bool)1;
          break;
        }

      }
      if(found == (_Bool)0)
        list_add_ordered(wakelock_names, (void *)info->lockname, syscall_wakelock_cmp);

    }

  }
}

// syscall_write_args
// file syscall.c line 1144
static void syscall_write_args(const struct syscall *sc, const struct syscall_info *s, const signed int pid)
{
  const signed long int syscall_write_args_array_size0 = (signed long int)(sc->arg + 1);
  unsigned long int args[syscall_write_args_array_size0];
  struct fd_cache *fc;
  signed int fd;
  signed int tmp_statement_expression_6;
  _Bool tmp_if_expr_10;
  signed int tmp_statement_expression_8;
  signed int tmp_statement_expression_3;
  if(!((0x00000010 & opt_flags) == 0))
  {
    (void)s;
    syscall_get_args(pid, sc->arg, args);
    fd = (signed int)args[(signed long int)0];
    fc=syscall_fd_cache_lookup(pid, fd);
    if(!(fc == ((struct fd_cache *)NULL)))
    {
      pthread_mutex_lock(&fc->mutex);
      unsigned long int __s1_len;
      unsigned long int __s2_len;
      signed int return_value___builtin_strcmp_7;
      return_value___builtin_strcmp_7=__builtin_strcmp(fc->filename, "/sys/power/wake_lock");
      tmp_statement_expression_6 = return_value___builtin_strcmp_7;
      if(tmp_statement_expression_6 == 0)
        tmp_if_expr_10 = (_Bool)1;

      else
      {
        unsigned long int syscall_write_args__1__2____s1_len;
        unsigned long int syscall_write_args__1__2____s2_len;
        signed int return_value___builtin_strcmp_9;
        return_value___builtin_strcmp_9=__builtin_strcmp(fc->filename, "/sys/power/wake_unlock");
        tmp_statement_expression_8 = return_value___builtin_strcmp_9;
        tmp_if_expr_10 = !(tmp_statement_expression_8 != 0) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_10)
      {
        unsigned long int addr = args[(signed long int)1];
        unsigned long int count = (unsigned long int)args[(signed long int)2];
        char *lockname;
        struct syscall_wakelock_info *info;
        void *return_value_syscall_peek_data_1;
        return_value_syscall_peek_data_1=syscall_peek_data(pid, addr, count);
        lockname = (char *)return_value_syscall_peek_data_1;
        if(lockname == ((char *)NULL))
        {
          pthread_mutex_unlock(&fc->mutex);
          goto __CPROVER_DUMP_L9;
        }

        void *return_value_calloc_2;
        return_value_calloc_2=calloc((unsigned long int)1, sizeof(struct syscall_wakelock_info) /*40ul*/ );
        info = (struct syscall_wakelock_info *)return_value_calloc_2;
        if(info == ((struct syscall_wakelock_info *)NULL))
        {
          health_check_out_of_memory("allocating wakelock information");
          pthread_mutex_unlock(&fc->mutex);
          free((void *)lockname);
          goto __CPROVER_DUMP_L9;
        }

        info->pid = pid;
        info->lockname = lockname;
        unsigned long int syscall_write_args__1__3__3____s1_len;
        unsigned long int syscall_write_args__1__3__3____s2_len;
        signed int return_value___builtin_strcmp_4;
        return_value___builtin_strcmp_4=__builtin_strcmp(fc->filename, "/sys/power/wake_unlock");
        tmp_statement_expression_3 = return_value___builtin_strcmp_4;
        info->locked = (_Bool)tmp_statement_expression_3;
        gettimeofday(&info->tv, (struct timezone *)(void *)0);
        struct link *return_value_list_append_5;
        return_value_list_append_5=list_append(&syscall_wakelocks, (void *)info);
        if(return_value_list_append_5 == ((struct link *)NULL))
          free((void *)info);

      }

      pthread_mutex_unlock(&fc->mutex);
    }

  }


__CPROVER_DUMP_L9:
  ;
}

// timeval_add
// file timeval.c line 41
extern struct timeval timeval_add(struct timeval *a, struct timeval *b)
{
  struct timeval ret;
  ret.tv_sec = a->tv_sec + b->tv_sec;
  ret.tv_usec = a->tv_usec + b->tv_usec;
  if(ret.tv_usec >= 1000001l)
  {
    signed int nsec = (signed int)(ret.tv_usec / (signed long int)1000000);
    ret.tv_sec = ret.tv_sec + (signed long int)nsec;
    ret.tv_usec = ret.tv_usec - (signed long int)(1000000 * nsec);
  }

  return ret;
}

// timeval_sub
// file timeval.h line 32
extern struct timeval timeval_sub(struct timeval *a, struct timeval *b)
{
  struct timeval ret;
  struct timeval _b;
  _b.tv_sec = b->tv_sec;
  _b.tv_usec = b->tv_usec;
  if(!(a->tv_usec >= _b.tv_usec))
  {
    signed int nsec = (signed int)((_b.tv_usec - a->tv_usec) / (signed long int)1000000 + (signed long int)1);
    _b.tv_sec = _b.tv_sec + (signed long int)nsec;
    _b.tv_usec = _b.tv_usec - (signed long int)(1000000 * nsec);
  }

  if(a->tv_usec + -_b.tv_usec >= 1000001l)
  {
    signed int timeval_sub__1__2__nsec = (signed int)((a->tv_usec - _b.tv_usec) / (signed long int)1000000);
    _b.tv_sec = _b.tv_sec - (signed long int)timeval_sub__1__2__nsec;
    _b.tv_usec = _b.tv_usec + (signed long int)(1000000 * timeval_sub__1__2__nsec);
  }

  ret.tv_sec = a->tv_sec - _b.tv_sec;
  ret.tv_usec = a->tv_usec - _b.tv_usec;
  return ret;
}

// timeval_to_double
// file timeval.c line 32
extern double timeval_to_double(struct timeval *tv)
{
  return (double)tv->tv_sec + (double)tv->tv_usec / 1000000.0;
}

// tolower
// file /usr/include/ctype.h line 215
static inline signed int tolower(signed int __c)
{
  signed int tmp_if_expr_2;
  const signed int **return_value___ctype_tolower_loc_1;
  if(__c >= -128 && !(__c >= 256))
  {
    return_value___ctype_tolower_loc_1=__ctype_tolower_loc();
    tmp_if_expr_2 = (*return_value___ctype_tolower_loc_1)[(signed long int)__c];
  }

  else
    tmp_if_expr_2 = __c;
  return tmp_if_expr_2;
}

