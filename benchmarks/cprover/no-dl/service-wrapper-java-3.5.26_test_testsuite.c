// #anon_enum_CUE_SUCCESS=0_CUE_NOMEMORY=1_CUE_NOREGISTRY=10_CUE_REGISTRY_EXISTS=11_CUE_NOSUITE=20_CUE_NO_SUITENAME=21_CUE_SINIT_FAILED=22_CUE_SCLEAN_FAILED=23_CUE_DUP_SUITE=24_CUE_SUITE_INACTIVE=25_CUE_NOTEST=30_CUE_NO_TESTNAME=31_CUE_DUP_TEST=32_CUE_TEST_NOT_IN_SUITE=33_CUE_TEST_INACTIVE=34_CUE_FOPEN_FAILED=40_CUE_FCLOSE_FAILED=41_CUE_BAD_FILENAME=42_CUE_WRITE_ERROR=43
// file /usr/include/CUnit/CUError.h line 62
enum anonymous_0 { CUE_SUCCESS=0, CUE_NOMEMORY=1, CUE_NOREGISTRY=10, CUE_REGISTRY_EXISTS=11, CUE_NOSUITE=20, CUE_NO_SUITENAME=21, CUE_SINIT_FAILED=22, CUE_SCLEAN_FAILED=23, CUE_DUP_SUITE=24, CUE_SUITE_INACTIVE=25, CUE_NOTEST=30, CUE_NO_TESTNAME=31, CUE_DUP_TEST=32, CUE_TEST_NOT_IN_SUITE=33, CUE_TEST_INACTIVE=34, CUE_FOPEN_FAILED=40, CUE_FCLOSE_FAILED=41, CUE_BAD_FILENAME=42, CUE_WRITE_ERROR=43 };

// #anon_enum_CU_BRM_NORMAL=0_CU_BRM_SILENT=1_CU_BRM_VERBOSE=2
// file /usr/include/CUnit/Basic.h line 44
enum anonymous_1 { CU_BRM_NORMAL=0, CU_BRM_SILENT=1, CU_BRM_VERBOSE=2 };

// tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 121
struct anonymous_32;

// tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 107
struct anonymous_30;

// tag-#anon#ST[ARR16{U64}_U64_'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous_4;

// tag-#anon#ST[S32'bucketCount'||S32'size'||*{*{SYM#tag-#anon#ST[S32'size'||U32'_pad0'||*{SYM#tag-HashEntry#}_SYM#tag-HashEntry#_'firstEntry'|]#}_SYM#tag-#anon#ST[S32'size'||U32'_pad0'||*{SYM#tag-HashEntry#}_SYM#tag-HashEntry#_'firstEntry'|]#_}_*{SYM#tag-#anon#ST[S32'size'||U32'_pad0'||*{SYM#tag-HashEntry#}_SYM#tag-HashEntry#_'firstEntry'|]#}_SYM#tag-#anon#ST[S32'size'||U32'_pad0'||*{SYM#tag-HashEntry#}_SYM#tag-HashEntry#_'firstEntry'|]#__'buckets'|]
// file wrapper_hashmap.h line 34
struct anonymous_23;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 74
struct anonymous_26;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 97
struct anonymous_29;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 89
struct anonymous_28;

// tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 62
struct anonymous_3;

// tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 81
struct anonymous_27;

// tag-#anon#ST[S32'size'||U32'_pad0'||*{SYM#tag-HashEntry#}_SYM#tag-HashEntry#_'firstEntry'|]
// file wrapper_hashmap.h line 29
struct anonymous_24;

// tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 114
struct anonymous_31;

// tag-#anon#ST[U64'gl_pathc'||*{*{S8}_S8_}_*{S8}_S8__'gl_pathv'||U64'gl_offs'||S32'gl_flags'||U32'_pad0'||*{V(*{V}_V_)->V}_V(*{V}_V_)->V_'gl_closedir'||*{*{SYM#tag-dirent#}_SYM#tag-dirent#_(*{V}_V_)->*{SYM#tag-dirent#}_SYM#tag-dirent#_}_*{SYM#tag-dirent#}_SYM#tag-dirent#_(*{V}_V_)->*{SYM#tag-dirent#}_SYM#tag-dirent#__'gl_readdir'||*{*{V}_V_(*{cS8}_cS8_)->*{V}_V_}_*{V}_V_(*{cS8}_cS8_)->*{V}_V__'gl_opendir'||*{S32(r*{cS8}_cS8_|r*{SYM#tag-stat#}_SYM#tag-stat#_)->S32}_S32(r*{cS8}_cS8_|r*{SYM#tag-stat#}_SYM#tag-stat#_)->S32_'gl_lstat'||*{S32(r*{cS8}_cS8_|r*{SYM#tag-stat#}_SYM#tag-stat#_)->S32}_S32(r*{cS8}_cS8_|r*{SYM#tag-stat#}_SYM#tag-stat#_)->S32_'gl_stat'|]
// file /usr/include/glob.h line 82
struct anonymous_22;

// tag-#anon#UN[*{V(S32)->V}_V(S32)->V_'sa_handler'||*{V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}_SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#_|*{V}_V_)->V}_V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}_SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#_|*{V}_V_)->V_'sa_sigaction'|]
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 28
union anonymous;

// tag-#anon#UN[ARR16{U8}_U8_'__u6_addr8'||ARR8{U16}_U16_'__u6_addr16'||ARR4{U32}_U32_'__u6_addr32'|]
// file /usr/include/netinet/in.h line 211
union anonymous_21;

// tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 69
union anonymous_33;

// tag-#anon#UN[S64'ru_idrss'||S64'__ru_idrss_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 208
union anonymous_8;

// tag-#anon#UN[S64'ru_inblock'||S64'__ru_inblock_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 240
union anonymous_13;

// tag-#anon#UN[S64'ru_isrss'||S64'__ru_isrss_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 214
union anonymous_9;

// tag-#anon#UN[S64'ru_ixrss'||S64'__ru_ixrss_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 202
union anonymous_7;

// tag-#anon#UN[S64'ru_majflt'||S64'__ru_majflt_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 227
union anonymous_11;

// tag-#anon#UN[S64'ru_maxrss'||S64'__ru_maxrss_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 194
union anonymous_6;

// tag-#anon#UN[S64'ru_minflt'||S64'__ru_minflt_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 221
union anonymous_10;

// tag-#anon#UN[S64'ru_msgrcv'||S64'__ru_msgrcv_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 258
union anonymous_16;

// tag-#anon#UN[S64'ru_msgsnd'||S64'__ru_msgsnd_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 252
union anonymous_15;

// tag-#anon#UN[S64'ru_nivcsw'||S64'__ru_nivcsw_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 279
union anonymous_19;

// tag-#anon#UN[S64'ru_nsignals'||S64'__ru_nsignals_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 264
union anonymous_17;

// tag-#anon#UN[S64'ru_nswap'||S64'__ru_nswap_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 233
union anonymous_12;

// tag-#anon#UN[S64'ru_nvcsw'||S64'__ru_nvcsw_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 272
union anonymous_18;

// tag-#anon#UN[S64'ru_oublock'||S64'__ru_oublock_word'|]
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 246
union anonymous_14;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_2;

// tag-#anon#UN[r*{SYM#tag-sockaddr#}_SYM#tag-sockaddr#_'__sockaddr__'||r*{SYM#tag-sockaddr_at#}_SYM#tag-sockaddr_at#_'__sockaddr_at__'||r*{SYM#tag-sockaddr_ax25#}_SYM#tag-sockaddr_ax25#_'__sockaddr_ax25__'||r*{SYM#tag-sockaddr_dl#}_SYM#tag-sockaddr_dl#_'__sockaddr_dl__'||r*{SYM#tag-sockaddr_eon#}_SYM#tag-sockaddr_eon#_'__sockaddr_eon__'||r*{SYM#tag-sockaddr_in#}_SYM#tag-sockaddr_in#_'__sockaddr_in__'||r*{SYM#tag-sockaddr_in6#}_SYM#tag-sockaddr_in6#_'__sockaddr_in6__'||r*{SYM#tag-sockaddr_inarp#}_SYM#tag-sockaddr_inarp#_'__sockaddr_inarp__'||r*{SYM#tag-sockaddr_ipx#}_SYM#tag-sockaddr_ipx#_'__sockaddr_ipx__'||r*{SYM#tag-sockaddr_iso#}_SYM#tag-sockaddr_iso#_'__sockaddr_iso__'||r*{SYM#tag-sockaddr_ns#}_SYM#tag-sockaddr_ns#_'__sockaddr_ns__'||r*{SYM#tag-sockaddr_un#}_SYM#tag-sockaddr_un#_'__sockaddr_un__'||r*{SYM#tag-sockaddr_x25#}_SYM#tag-sockaddr_x25#_'__sockaddr_x25__'|]
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
union anonymous_5;

// tag-#anon#UN[r*{SYM#tag-sockaddr#}_SYM#tag-sockaddr#_'__sockaddr__'||r*{SYM#tag-sockaddr_at#}_SYM#tag-sockaddr_at#_'__sockaddr_at__'||r*{SYM#tag-sockaddr_ax25#}_SYM#tag-sockaddr_ax25#_'__sockaddr_ax25__'||r*{SYM#tag-sockaddr_dl#}_SYM#tag-sockaddr_dl#_'__sockaddr_dl__'||r*{SYM#tag-sockaddr_eon#}_SYM#tag-sockaddr_eon#_'__sockaddr_eon__'||r*{SYM#tag-sockaddr_in#}_SYM#tag-sockaddr_in#_'__sockaddr_in__'||r*{SYM#tag-sockaddr_in6#}_SYM#tag-sockaddr_in6#_'__sockaddr_in6__'||r*{SYM#tag-sockaddr_inarp#}_SYM#tag-sockaddr_inarp#_'__sockaddr_inarp__'||r*{SYM#tag-sockaddr_ipx#}_SYM#tag-sockaddr_ipx#_'__sockaddr_ipx__'||r*{SYM#tag-sockaddr_iso#}_SYM#tag-sockaddr_iso#_'__sockaddr_iso__'||r*{SYM#tag-sockaddr_ns#}_SYM#tag-sockaddr_ns#_'__sockaddr_ns__'||r*{SYM#tag-sockaddr_un#}_SYM#tag-sockaddr_un#_'__sockaddr_un__'||r*{SYM#tag-sockaddr_x25#}_SYM#tag-sockaddr_x25#_'__sockaddr_x25__'|]_transparent
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
union anonymous_25;

// tag-CU_Suite
// file /usr/include/CUnit/TestDB.h line 148
struct CU_Suite;

// tag-CU_Test
// file /usr/include/CUnit/TestDB.h line 109
struct CU_Test;

// tag-ConfigFileReader
// file wrapper_file.c line 52
struct ConfigFileReader;

// tag-EnvSrc
// file property.h line 57
struct EnvSrc;

// tag-HashEntry
// file wrapper_hashmap.h line 20
struct HashEntry;

// tag-LoadParameterFileCallbackParam
// file wrapper.h line 1084
struct LoadParameterFileCallbackParam;

// tag-PendingPing
// file wrapper.h line 216
struct PendingPing;

// tag-Properties
// file property.h line 76
struct Properties;

// tag-Property
// file property.h line 65
struct Property;

// tag-WrapperConfig
// file wrapper.h line 225
struct WrapperConfig;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__jmp_buf_tag
// file /usr/include/setjmp.h line 34
struct __jmp_buf_tag;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-__rusage_who
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 158
enum __rusage_who { RUSAGE_SELF=0, RUSAGE_CHILDREN=-1, RUSAGE_THREAD=1 };

// tag-dirent
// file /usr/include/glob.h line 93
struct dirent;

// tag-in6_addr
// file /usr/include/netinet/in.h line 209
struct in6_addr;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-passwd
// file /usr/include/pwd.h line 49
struct passwd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rusage
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 187
struct rusage;

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

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-timeb
// file /usr/include/x86_64-linux-gnu/sys/timeb.h line 31
struct timeb;

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

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// CU_add_suite
// file /usr/include/CUnit/TestDB.h line 281
struct CU_Suite * CU_add_suite(const char *, signed int (*)(void), signed int (*)(void));
// CU_add_test
// file /usr/include/CUnit/TestDB.h line 479
struct CU_Test * CU_add_test(struct CU_Suite *, const char *, void (*)(void));
// CU_assertImplementation
// file /usr/include/CUnit/TestRun.h line 411
signed int CU_assertImplementation(signed int, unsigned int, const char *, const char *, const char *, signed int);
// CU_automated_run_tests
// file /usr/include/CUnit/Automated.h line 48
void CU_automated_run_tests(void);
// CU_basic_run_tests
// file /usr/include/CUnit/Basic.h line 50
enum anonymous_0 CU_basic_run_tests(void);
// CU_basic_set_mode
// file /usr/include/CUnit/Basic.h line 87
void CU_basic_set_mode(enum anonymous_1);
// CU_cleanup_registry
// file /usr/include/CUnit/TestDB.h line 251
void CU_cleanup_registry(void);
// CU_console_run_tests
// file /usr/include/CUnit/Console.h line 48
void CU_console_run_tests(void);
// CU_get_error
// file /usr/include/CUnit/CUError.h line 114
enum anonymous_0 CU_get_error(void);
// CU_initialize_registry
// file /usr/include/CUnit/TestDB.h line 231
enum anonymous_0 CU_initialize_registry(void);
// CU_list_tests_to_file
// file /usr/include/CUnit/Automated.h line 59
enum anonymous_0 CU_list_tests_to_file(void);
// CU_set_output_filename
// file /usr/include/CUnit/Automated.h line 69
void CU_set_output_filename(const char *);
// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __rawmemchr
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 393
extern void * __rawmemchr(const void *, signed int);
// __xstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 412
extern signed int __xstat(signed int, const char *, struct stat *);
// _ftprintf
// file wrapper_i18n.h line 223
extern signed int _ftprintf(struct _IO_FILE *stream, const signed int *fmt, ...);
// _sntprintf
// file wrapper_i18n.h line 221
extern signed int _sntprintf(signed int *str, unsigned long int size, const signed int *fmt, ...);
// _tchdir
// file wrapper_i18n.h line 67
extern signed int _tchdir(const signed int *path);
// _texecve
// file wrapper_i18n.c line 860
extern signed int _texecve(signed int *arg, signed int **cmd, signed int **env);
// _texecvp
// file wrapper_i18n.h line 68
extern signed int _texecvp(signed int *arg, signed int **cmd);
// _tfopen
// file wrapper_i18n.h line 180
extern struct _IO_FILE * _tfopen(const signed int *file, const signed int *mode);
// _tgetcwd
// file wrapper_i18n.h line 94
extern signed int * _tgetcwd(signed int *buf, unsigned long int size);
// _tgetenv
// file wrapper_i18n.h line 194
extern signed int * _tgetenv(const signed int *name);
// _tmkfifo
// file wrapper_i18n.h line 69
extern signed int _tmkfifo(signed int *arg, unsigned int mode);
// _topen
// file wrapper_i18n.h line 100
extern signed int _topen(const signed int *path, signed int oflag, unsigned int mode);
// _tpathconf
// file wrapper_i18n.c line 402
extern signed long int _tpathconf(const signed int *path, signed int name);
// _tprintf
// file wrapper_i18n.h line 60
extern signed int _tprintf(const signed int *fmt, ...);
// _treadlink
// file wrapper_i18n.c line 335
extern unsigned long int _treadlink(signed int *exe, signed int *fullPath, unsigned long int size);
// _trealpathN
// file wrapper_i18n.h line 135
extern signed int * _trealpathN(const signed int *fileName, signed int *resolvedName, unsigned long int resolvedNameSize);
// _tremove
// file wrapper_i18n.h line 215
extern signed int _tremove(const signed int *path);
// _trename
// file wrapper_i18n.h line 216
extern signed int _trename(const signed int *path, const signed int *to);
// _tsetenv
// file wrapper_i18n.h line 106
extern signed int _tsetenv(const signed int *name, const signed int *value, signed int overwrite);
// _tsetlocale
// file wrapper_i18n.h line 220
extern signed int * _tsetlocale(signed int category, const signed int *locale);
// _tstat
// file wrapper_i18n.h line 125
extern signed int _tstat(const signed int *filename, struct stat *buf);
// _tsyslog
// file wrapper_i18n.h line 218
extern void _tsyslog(signed int priority, const signed int *message);
// _tunlink
// file wrapper_i18n.h line 162
extern signed int _tunlink(const signed int *address);
// _tunsetenv
// file wrapper_i18n.h line 107
extern void _tunsetenv(const signed int *name);
// accept
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 243
extern signed int accept(signed int, union anonymous_25, unsigned int *);
// addProperty
// file property.c line 1122
extern struct Property * addProperty(struct Properties *properties, const signed int *filename, signed int lineNum, const signed int *propertyName, const signed int *propertyValue, signed int finalValue, signed int quotable, signed int escapable, signed int internal);
// addPropertyPair
// file property.h line 224
extern signed int addPropertyPair(struct Properties *properties, const signed int *filename, signed int lineNum, const signed int *propertyNameValue, signed int finalValue, signed int quotable, signed int internal);
// anchorPoll
// file wrappereventloop.c line 369
void anchorPoll(unsigned int nowTicks);
// appExit
// file wrapper_unix.c line 118
void appExit(signed int exitCode, signed int argc, signed int **argv);
// bind
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 123
extern signed int bind(signed int, union anonymous_25, unsigned int);
// buildPrintBuffer
// file logger.c line 1295
signed int * buildPrintBuffer(signed int source_id, signed int level, signed int threadId, signed int queued, struct tm *nowTM, signed int nowMillis, signed long int durationMillis, const signed int *format, const signed int *defaultFormat, const signed int *message);
// calloc
// file /usr/include/malloc.h line 41
extern void * calloc(unsigned long int, unsigned long int);
// ceil
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 178
extern double ceil(double);
// chdir
// file /usr/include/unistd.h line 497
extern signed int chdir(const char *);
// checkAndRollLogs
// file logger.c line 3102
void checkAndRollLogs(const signed int *nowDate);
// checkForTestWrapperScripts
// file wrapper.c line 4217
signed int checkForTestWrapperScripts();
// checkIfBinary
// file wrapper.c line 5170
signed int checkIfBinary(const signed int *filename);
// checkIfExecutable
// file wrapper.c line 5144
signed int checkIfExecutable(const signed int *filename);
// checkIfRegularExe
// file wrapper.c line 5371
void checkIfRegularExe(signed int **para);
// checkLogfileDir
// file logger.h line 203
extern signed int checkLogfileDir();
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closeLogfile
// file logger.h line 227
extern void closeLogfile();
// closelog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 175
extern void closelog(void);
// commandPoll
// file wrappereventloop.c line 445
void commandPoll(unsigned int nowTicks);
// compareFileNames
// file logger_file.c line 91
signed int compareFileNames(const signed int *file1, const signed int *file2);
// configFileReader
// file wrapper_file.h line 75
extern signed int configFileReader(const signed int *filename, signed int fileRequired, signed int (*callback)(void *, const signed int *, signed int, signed int *, signed int), void *callbackParam, signed int enableIncludes, signed int preload, const signed int *argCommand, const signed int *originalWorkingDir, struct anonymous_23 *warnedVarMap, signed int logWarnings, signed int logWarningLogLevel, signed int isDebugging);
// configFileReader::callback_object
//
signed int callback_object(void *, const signed int *, signed int, signed int *, signed int);
// configFileReader_Read
// file wrapper_file.c line 114
signed int configFileReader_Read(struct ConfigFileReader *reader, const signed int *filename, signed int fileRequired, signed int depth, const signed int *parentFilename, signed int parentLineNumber, const signed int *argCommand, const signed int *originalWorkingDir, struct anonymous_23 *warnedVarMap, signed int logWarnings, signed int logWarningLogLevel, signed int isDebugging);
// createInnerProperty
// file property.c line 168
struct Property * createInnerProperty();
// createProperties
// file property.h line 151
extern struct Properties * createProperties();
// daemonize
// file wrapper_unix.c line 1670
void daemonize(signed int argc, signed int **argv);
// descSignal
// file wrapper_unix.c line 429
void descSignal(struct anonymous_3 *sigInfo);
// displayLaunchingTimeoutMessage
// file wrappereventloop.c line 305
void displayLaunchingTimeoutMessage();
// disposeEnvironment
// file property.h line 163
extern void disposeEnvironment();
// disposeInnerProperty
// file property.c line 188
void disposeInnerProperty(struct Property *property);
// disposeJavaIO
// file wrapper.h line 623
extern void disposeJavaIO();
// disposeLogging
// file logger.h line 264
extern signed int disposeLogging();
// disposeProperties
// file property.h line 157
extern void disposeProperties(struct Properties *properties);
// disposeTimer
// file wrapper.h line 624
extern void disposeTimer();
// dumpEnvironment
// file wrapper.c line 555
void dumpEnvironment(signed int logLevel);
// dumpProperties
// file property.c line 1716
extern void dumpProperties(struct Properties *properties);
// dup2
// file /usr/include/unistd.h line 534
extern signed int dup2(signed int, signed int);
// evaluateEnvironmentVariables
// file property.h line 113
extern void evaluateEnvironmentVariables(const signed int *propertyValue, signed int *buffer, signed int bufferLength, signed int warnUndefinedVars, struct anonymous_23 *warnedUndefVarMap, signed int warnLogLevel);
// execve
// file /usr/include/unistd.h line 551
extern signed int execve(const char *, char * const *, char * const *);
// execvp
// file /usr/include/unistd.h line 578
extern signed int execvp(const char *, char * const *);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// expandEscapedCharacters
// file property.c line 1022
signed int * expandEscapedCharacters(const signed int *buffer);
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
// fgetws
// file /usr/include/wchar.h line 774
extern signed int * fgetws(signed int *, signed int, struct _IO_FILE *);
// findPathOf
// file wrapper.c line 5230
extern signed int * findPathOf(const signed int *exe, const signed int *name);
// flushLogfile
// file logger.h line 230
extern void flushLogfile();
// fopen
// file /usr/include/stdio.h line 283
extern struct _IO_FILE * fopen(const char *, const char *);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// freeHashMap
// file wrapper_hashmap.h line 46
extern void freeHashMap(struct anonymous_23 *hashMap);
// freeStringProperties
// file property.h line 260
extern void freeStringProperties(signed int **propertyNames, signed int **propertyValues, unsigned long int *propertyIndices);
// ftell
// file /usr/include/stdio.h line 754
extern signed long int ftell(struct _IO_FILE *);
// generateLogFileName
// file logger.c line 1550
void generateLogFileName(signed int *buffer, unsigned long int bufferSize, const signed int *template, const signed int *nowDate, const signed int *rollNum);
// generateRandValue
// file property.c line 238
extern signed int * generateRandValue(const signed int *format);
// generateTimeValue
// file property.c line 206
extern signed int * generateTimeValue(const signed int *format, struct tm *timeTM);
// generateVersionBanner
// file wrapper.c line 3098
signed int * generateVersionBanner();
// getActionForName
// file wrapper.c line 7531
signed int getActionForName(signed int *actionName, const signed int *propertyName, signed int logErrors);
// getBackendTypeForName
// file wrapper.c line 7845
signed int getBackendTypeForName(const signed int *typeName);
// getBooleanProperty
// file property.h line 264
extern signed int getBooleanProperty(struct Properties *properties, const signed int *propertyName, signed int defaultValue);
// getBucketId
// file wrapper_hashmap.c line 164
signed int getBucketId(struct anonymous_23 *hashMap, const signed int *key);
// getConsoleLogLevelInt
// file logger.c line 1146
extern signed int getConsoleLogLevelInt();
// getCurrentLogfilePath
// file logger.h line 195
extern signed int * getCurrentLogfilePath();
// getDefaultLogfilePath
// file logger.c line 709
extern const signed int * getDefaultLogfilePath();
// getEncodingByName
// file wrapper_i18n.h line 490
extern signed int getEncodingByName(char *encodingMB, char **encoding);
// getFileSafeStringProperty
// file property.h line 228
extern const signed int * getFileSafeStringProperty(struct Properties *properties, const signed int *propertyName, const signed int *defaultValue);
// getInfoTime
// file wrapper.c line 172
struct tm getInfoTime(const signed int *date, const signed int *time);
// getInnerProperty
// file property.c line 103
struct Property * getInnerProperty(struct Properties *properties, const signed int *propertyName, signed int warnUndefinedVars);
// getIntProperty
// file property.h line 262
extern signed int getIntProperty(struct Properties *properties, const signed int *propertyName, signed int defaultValue);
// getLastError
// file logger_base.h line 67
extern signed int getLastError();
// getLastErrorText
// file logger_base.h line 60
extern const signed int * getLastErrorText();
// getLogFacilityForName
// file logger.c line 561
extern signed int getLogFacilityForName(const signed int *logFacilityName);
// getLogLevelForName
// file logger.h line 267
extern signed int getLogLevelForName(const signed int *logLevelName);
// getLogfileActivity
// file logger.h line 218
extern unsigned long int getLogfileActivity();
// getLogfileLevelInt
// file logger.c line 927
extern signed int getLogfileLevelInt();
// getLogfilePath
// file logger.c line 717
extern const signed int * getLogfilePath();
// getLogfileRollMode
// file logger.h line 207
extern signed int getLogfileRollMode();
// getLogfileRollModeForName
// file logger.h line 205
extern signed int getLogfileRollModeForName(const signed int *logfileRollName);
// getLowLogLevel
// file logger.h line 260
extern signed int getLowLogLevel();
// getSignalCodeDesc
// file wrapper_unix.c line 388
const signed int * getSignalCodeDesc(signed int code);
// getSignalMode
// file wrapper.c line 510
signed int getSignalMode(const signed int *modeName, signed int defaultMode);
// getSignalName
// file wrapper_unix.c line 358
const signed int * getSignalName(signed int signo);
// getStringProperties
// file property.h line 255
extern signed int getStringProperties(struct Properties *properties, const signed int *propertyNameHead, const signed int *propertyNameTail, signed int all, signed int matchAny, signed int ***propertyNames, signed int ***propertyValues, unsigned long int **propertyIndices);
// getStringProperty
// file property.h line 226
extern const signed int * getStringProperty(struct Properties *properties, const signed int *propertyName, const signed int *defaultValue);
// getSyslogLevelInt
// file logger.h line 247
extern signed int getSyslogLevelInt();
// getThreadId
// file logger.c line 489
signed int getThreadId();
// getcwd
// file /usr/include/unistd.h line 511
extern char * getcwd(char *, unsigned long int);
// getegid
// file /usr/include/unistd.h line 684
extern unsigned int getegid(void);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// geteuid
// file /usr/include/unistd.h line 678
extern unsigned int geteuid(void);
// gethostname
// file /usr/include/unistd.h line 879
extern signed int gethostname(char *, unsigned long int);
// getpwuid
// file /usr/include/pwd.h line 110
extern struct passwd * getpwuid(unsigned int);
// getrusage
// file /usr/include/x86_64-linux-gnu/sys/resource.h line 87
extern signed int getrusage(enum __rusage_who, struct rusage *);
// getsid
// file /usr/include/unistd.h line 671
extern signed int getsid(signed int);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// glob
// file /usr/include/glob.h line 153
extern signed int glob(const char *, signed int, signed int (*)(const char *, signed int), struct anonymous_22 *);
// globfree
// file /usr/include/glob.h line 158
extern void globfree(struct anonymous_22 *);
// handleDebugJVMTimeout
// file wrappereventloop.c line 343
void handleDebugJVMTimeout(unsigned int nowTicks, const signed int *message, const signed int *timer);
// hashMapGetKMBVW
// file wrapper_hashmap.c line 398
extern const signed int * hashMapGetKMBVW(struct anonymous_23 *hashMap, const char *key);
// hashMapGetKVVV
// file wrapper_hashmap.c line 338
extern const void * hashMapGetKVVV(struct anonymous_23 *hashMap, const void *key, unsigned long int keySize, unsigned long int *valueSize);
// hashMapGetKWVW
// file wrapper_hashmap.h line 110
extern const signed int * hashMapGetKWVW(struct anonymous_23 *hashMap, const signed int *key);
// hashMapPutKMBVW
// file wrapper_hashmap.c line 321
extern void hashMapPutKMBVW(struct anonymous_23 *hashMap, const char *key, const signed int *value);
// hashMapPutKVVV
// file wrapper_hashmap.c line 188
extern signed int hashMapPutKVVV(struct anonymous_23 *hashMap, const void *key, unsigned long int keySize, const void *value, unsigned long int valueSize);
// hashMapPutKWVW
// file wrapper_hashmap.h line 79
extern void hashMapPutKWVW(struct anonymous_23 *hashMap, const signed int *key, const signed int *value);
// hexToTICKS
// file wrapper.c line 2341
unsigned int hexToTICKS(signed int *buffer);
// iconv
// file /usr/include/iconv.h line 42
extern unsigned long int iconv(void *, char ** restrict , unsigned long int *, char ** restrict , unsigned long int *);
// iconv_close
// file /usr/include/iconv.h line 51
extern signed int iconv_close(void *);
// iconv_open
// file /usr/include/iconv.h line 37
extern void * iconv_open(const char *, const char *);
// inet_addr
// file /usr/include/arpa/inet.h line 34
extern unsigned int inet_addr(const char *);
// inet_ntop
// file /usr/include/arpa/inet.h line 64
extern const char * inet_ntop(signed int, const void *, char *, unsigned int);
// inet_pton
// file /usr/include/arpa/inet.h line 58
extern signed int inet_pton(signed int, const char *, void *);
// initLogging
// file logger.h line 263
extern signed int initLogging(void (*logFileChanged)(const signed int *));
// initLogging::logFileChanged_object
//
void logFileChanged_object(const signed int *);
// initializeJavaIO
// file wrapper_unix.c line 735
signed int initializeJavaIO();
// initializeTimer
// file wrapper_unix.c line 885
signed int initializeTimer();
// insertInnerProperty
// file property.c line 127
void insertInnerProperty(struct Properties *properties, struct Property *newProperty);
// invalidMultiByteSequence
// file logger.c line 312
extern void invalidMultiByteSequence(const signed int *context, signed int id);
// isEscapedProperty
// file property.c line 937
extern signed int isEscapedProperty(const signed int *propertyName);
// isLogfileAccessed
// file logger.c line 630
extern signed int isLogfileAccessed();
// isQuotableProperty
// file property.h line 266
extern signed int isQuotableProperty(struct Properties *properties, const signed int *propertyName);
// iswcntrl
// file /usr/include/wctype.h line 120
extern signed int iswcntrl(unsigned int);
// jStateDownCheck
// file wrappereventloop.c line 1825
void jStateDownCheck(unsigned int nowTicks, signed int nextSleep);
// jStateDownClean
// file wrappereventloop.c line 963
void jStateDownClean(unsigned int nowTicks, signed int nextSleep);
// jStateDownFlush
// file wrappereventloop.c line 1840
void jStateDownFlush(unsigned int nowTicks, signed int nextSleep);
// jStateKill
// file wrappereventloop.c line 1758
void jStateKill(unsigned int nowTicks, signed int nextSleep);
// jStateKillConfirm
// file wrappereventloop.c line 1795
void jStateKillConfirm(unsigned int nowTicks, signed int nextSleep);
// jStateKilling
// file wrappereventloop.c line 1733
void jStateKilling(unsigned int nowTicks, signed int nextSleep);
// jStateLaunch
// file wrappereventloop.c line 1345
void jStateLaunch(unsigned int nowTicks, signed int nextSleep);
// jStateLaunchDelay
// file wrappereventloop.c line 1175
void jStateLaunchDelay(unsigned int nowTicks, signed int nextSleep);
// jStateLaunched
// file wrappereventloop.c line 1425
void jStateLaunched(unsigned int nowTicks, signed int nextSleep);
// jStateLaunching
// file wrappereventloop.c line 1388
void jStateLaunching(unsigned int nowTicks, signed int nextSleep);
// jStateRestart
// file wrappereventloop.c line 1319
void jStateRestart(unsigned int nowTicks, signed int nextSleep);
// jStateStarted
// file wrappereventloop.c line 1508
void jStateStarted(unsigned int nowTicks, signed int nextSleep);
// jStateStarting
// file wrappereventloop.c line 1467
void jStateStarting(unsigned int nowTicks, signed int nextSleep);
// jStateStop
// file wrappereventloop.c line 1632
void jStateStop(unsigned int nowTicks, signed int nextSleep);
// jStateStopped
// file wrappereventloop.c line 1698
void jStateStopped(unsigned int nowTicks, signed int nextSleep);
// jStateStopping
// file wrappereventloop.c line 1661
void jStateStopping(unsigned int nowTicks, signed int nextSleep);
// javaIORunner
// file wrapper_unix.c line 668
void * javaIORunner(void *arg);
// kill
// file /usr/include/signal.h line 127
extern signed int kill(signed int, signed int);
// limitLogFileCount
// file logger.c line 2848
void limitLogFileCount(const signed int *current, const signed int *pattern, signed int sortMode, signed int count);
// linearizeProperties
// file property.h line 292
extern signed int * linearizeProperties(struct Properties *properties, signed int separator);
// listen
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 233
extern signed int listen(signed int, signed int);
// loadConfiguration
// file wrapper.c line 7864
signed int loadConfiguration();
// loadConfigurationTriggers
// file wrapper.c line 7681
signed int loadConfigurationTriggers();
// loadEnvironment
// file wrapper.c line 393
signed int loadEnvironment();
// loadParameterFileCallback
// file wrapper.c line 5748
static signed int loadParameterFileCallback(void *callbackParam, const signed int *fileName, signed int lineNumber, signed int *config, signed int debugProperties);
// loadParameterFileCallbackParam_AddArg
// file wrapper.c line 5677
static signed int loadParameterFileCallbackParam_AddArg(struct LoadParameterFileCallbackParam *param, signed int *arg, unsigned long int argLen);
// loadProperties
// file property.h line 140
extern signed int loadProperties(struct Properties *properties, const signed int *filename, signed int preload, const signed int *argCommand, const signed int *originalWorkingDir, signed int isDebugging);
// loadPropertiesCallback
// file property.c line 471
static signed int loadPropertiesCallback(void *callbackParam, const signed int *fileName, signed int lineNumber, signed int *config, signed int debugProperties);
// localtime
// file /usr/include/time.h line 243
extern struct tm * localtime(const signed long int *);
// lockLoggingMutex
// file logger.c line 1030
signed int lockLoggingMutex();
// lockProtocolMutex
// file wrapper.c line 1965
signed int lockProtocolMutex();
// logApplyFilters
// file wrapper.c line 3677
void logApplyFilters(const signed int *log);
// logChildOutput
// file wrapper.c line 3721
void logChildOutput(const char *log);
// logFileChangedCallback_object
//
void logFileChangedCallback_object(const signed int *);
// logRegisterThread
// file logger.h line 271
extern void logRegisterThread(signed int thread_id);
// logSleep
// file logger.c line 845
void logSleep(signed int ms);
// logTickTimerStats
// file wrappereventloop.c line 1904
void logTickTimerStats();
// log_printf
// file logger.h line 279
extern void log_printf(signed int source_id, signed int level, const signed int *lpszFmt, ...);
// log_printf_message
// file logger.c line 1893
signed int log_printf_message(signed int source_id, signed int level, signed int threadId, signed int queued, signed int *message, signed int sysLogEnabled);
// log_printf_message_console
// file logger.c line 1874
void log_printf_message_console(signed int source_id, signed int level, signed int threadId, signed int queued, signed int *message, struct tm *nowTM, signed int nowMillis, signed long int durationMillis);
// log_printf_message_consoleInner
// file logger.c line 1802
void log_printf_message_consoleInner(signed int source_id, signed int level, signed int threadId, signed int queued, signed int *message, struct tm *nowTM, signed int nowMillis, signed long int durationMillis);
// log_printf_message_logFile
// file logger.c line 1786
signed int log_printf_message_logFile(signed int source_id, signed int level, signed int threadId, signed int queued, signed int *message, struct tm *nowTM, signed int nowMillis, signed long int durationMillis);
// log_printf_message_logFileInner
// file logger.c line 1642
signed int log_printf_message_logFileInner(signed int source_id, signed int level, signed int threadId, signed int queued, signed int *message, struct tm *nowTM, signed int nowMillis, signed long int durationMillis);
// log_printf_message_sysLog
// file logger.c line 1612
void log_printf_message_sysLog(signed int source_id, signed int level, signed int *message, struct tm *nowTM, signed int invertLogLevelCheck);
// log_printf_message_sysLogInner
// file logger.c line 1599
void log_printf_message_sysLogInner(signed int source_id, signed int level, signed int *message, struct tm *nowTM);
// log_printf_queue
// file logger.h line 292
extern void log_printf_queue(signed int useQueue, signed int source_id, signed int level, const signed int *lpszFmt, ...);
// loggerFileFreeFiles
// file logger_file.h line 48
extern void loggerFileFreeFiles(signed int **files);
// loggerFileGetFiles
// file logger_file.h line 43
extern signed int ** loggerFileGetFiles(const signed int *pattern, signed int sortMode);
// loggerFileGetSortMode
// file logger_file.h line 35
extern signed int loggerFileGetSortMode(const signed int *modeName);
// maintainLogger
// file logger.h line 294
extern void maintainLogger();
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// mbstowcs
// file /usr/include/stdlib.h line 873
extern unsigned long int mbstowcs(signed int *, const char *, unsigned long int);
// memcmpHM
// file wrapper_hashmap.c line 39
signed int memcmpHM(const void *vA, unsigned long int vALen, const void *vB, unsigned long int vBLen);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mkfifo
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 349
extern signed int mkfifo(const char *, unsigned int);
// multiByteToWideChar
// file wrapper_i18n.h line 61
extern signed int multiByteToWideChar(const char *multiByteChars, const char *multiByteEncoding, char *interumEncoding, signed int **outputBufferW, signed int localizeErrorMessage);
// nanosleep
// file /usr/include/time.h line 334
extern signed int nanosleep(struct timespec *, struct timespec *);
// newHashMap
// file wrapper_hashmap.h line 57
extern struct anonymous_23 * newHashMap(signed int bucketCount);
// nl_langinfo
// file /usr/include/langinfo.h line 583
extern char * nl_langinfo(signed int);
// open
// file /usr/include/fcntl.h line 149
extern signed int open(const char *, signed int, ...);
// openlog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 181
extern void openlog(const char *, signed int, signed int);
// outOfMemory
// file logger_base.h line 69
extern void outOfMemory(const signed int *context, signed int id);
// outOfMemoryQueued
// file logger.h line 103
extern void outOfMemoryQueued(const signed int *context, signed int id);
// pathconf
// file /usr/include/unistd.h line 612
extern signed long int pathconf(const char *, signed int);
// pauseThread
// file logger.c line 2094
void pauseThread(signed int pauseTime);
// pipe
// file /usr/include/unistd.h line 417
extern signed int pipe(signed int *);
// preparePrintBuffer
// file logger.c line 1270
signed int * preparePrintBuffer(unsigned long int reqSize);
// prepareProperty
// file property.c line 75
void prepareProperty(struct Properties *properties, struct Property *property, signed int warnUndefinedVars);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// propIntMax
// file property.h line 288
extern signed int propIntMax(signed int value1, signed int value2);
// propIntMin
// file property.h line 283
extern signed int propIntMin(signed int value1, signed int value2);
// protocolClosePipe
// file wrapper.c line 1751
void protocolClosePipe();
// protocolCloseSocket
// file wrapper.c line 1799
void protocolCloseSocket();
// protocolOpen
// file wrapper.c line 1741
void protocolOpen();
// protocolOpenPipe
// file wrapper.c line 1533
void protocolOpenPipe();
// protocolOpenSocket
// file wrapper.c line 1582
void protocolOpenSocket(signed int IPv4);
// protocolStartServer
// file wrapper.c line 1465
void protocolStartServer();
// protocolStartServerPipe
// file wrapper.c line 1066
signed int protocolStartServerPipe();
// protocolStartServerSocket
// file wrapper.c line 1231
signed int protocolStartServerSocket(signed int IPv4);
// protocolStopServer
// file wrapper.c line 1056
void protocolStopServer();
// protocolStopServerPipe
// file wrapper.c line 1008
void protocolStopServerPipe();
// protocolStopServerSocket
// file wrapper.c line 1032
void protocolStopServerSocket();
// pthread_cancel
// file /usr/include/pthread.h line 515
extern signed int pthread_cancel(unsigned long int);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_detach
// file /usr/include/pthread.h line 273
extern signed int pthread_detach(unsigned long int);
// pthread_equal
// file /usr/include/pthread.h line 1155
static inline signed int pthread_equal(unsigned long int __thread1, unsigned long int __thread2);
// pthread_equal_link1
// file /usr/include/pthread.h line 1155
static inline signed int pthread_equal_link1(unsigned long int __thread1_link1, unsigned long int __thread2_link1);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_2 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_2 *);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// pthread_sigmask
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 30
extern signed int pthread_sigmask(signed int, const struct anonymous_4 *, struct anonymous_4 *);
// rand
// file /usr/include/stdlib.h line 374
extern signed int rand(void);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// readlink
// file /usr/include/unistd.h line 809
extern signed long int readlink(const char *, char *, unsigned long int);
// realpath
// file /usr/include/stdlib.h line 733
extern char * realpath(const char *, char *);
// recv
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 156
extern signed long int recv(signed int, void *, unsigned long int, signed int);
// registerSigAction
// file wrapper_unix.c line 645
signed int registerSigAction(signed int sigNum, void (*sigAction)(signed int, struct anonymous_3 *, void *));
// registerSigAction::sigAction_object
//
void sigAction_object(signed int, struct anonymous_3 *, void *);
// registerSyslogMessageFile
// file logger.h line 254
extern signed int registerSyslogMessageFile();
// releaseLoggingMutex
// file logger.c line 1057
signed int releaseLoggingMutex();
// releaseProtocolMutex
// file wrapper.c line 1995
signed int releaseProtocolMutex();
// remove
// file /usr/include/stdio.h line 178
extern signed int remove(const char *);
// removeProperty
// file property.c line 619
extern void removeProperty(struct Properties *properties, const signed int *propertyName);
// rename
// file /usr/include/stdio.h line 180
extern signed int rename(const char *, const char *);
// replaceStringLongWithShort
// file logger.c line 323
signed int * replaceStringLongWithShort(signed int *string, const signed int *oldToken, const signed int *newToken);
// resetDuration
// file logger.h line 258
extern void resetDuration();
// rollLogs
// file logger.h line 266
extern void rollLogs();
// safeMemCpy
// file wrapper.c line 3785
void safeMemCpy(char *buffer, unsigned long int target, unsigned long int src, unsigned long int nbyte);
// send
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 149
extern signed long int send(signed int, const void *, unsigned long int, signed int);
// sendLogFileName
// file wrapper.c line 4065
void sendLogFileName();
// sendLoginfoMessage
// file logger.c line 2631
void sendLoginfoMessage(signed int source_id, signed int level, const signed int *szBuff);
// sendProperties
// file wrapper.c line 4080
void sendProperties();
// setConsoleErrorToStdErr
// file logger.h line 242
extern void setConsoleErrorToStdErr(signed int toStdErr);
// setConsoleFatalToStdErr
// file logger.h line 241
extern void setConsoleFatalToStdErr(signed int toStdErr);
// setConsoleFlush
// file logger.h line 237
extern void setConsoleFlush(signed int flush);
// setConsoleLogFormat
// file logger.h line 233
extern void setConsoleLogFormat(const signed int *console_log_format);
// setConsoleLogLevel
// file logger.h line 236
extern void setConsoleLogLevel(const signed int *console_log_level);
// setConsoleLogLevelInt
// file logger.h line 234
extern void setConsoleLogLevelInt(signed int console_log_level);
// setConsoleWarnToStdErr
// file logger.h line 243
extern void setConsoleWarnToStdErr(signed int toStdErr);
// setEnv
// file property.h line 102
extern signed int setEnv(const signed int *name, const signed int *value, signed int source);
// setEnvInner
// file property.c line 665
signed int setEnvInner(const signed int *name, const signed int *value);
// setEscapedProperties
// file property.c line 925
extern void setEscapedProperties(const signed int **propertyNames);
// setInnerProperty
// file property.c line 427
void setInnerProperty(struct Properties *properties, struct Property *property, const signed int *propertyValue, signed int warnUndefinedVars);
// setLogBufferGrowth
// file logger.h line 156
void setLogBufferGrowth(signed int log);
// setLogPropertyWarningLogLevel
// file property.h line 278
extern void setLogPropertyWarningLogLevel(struct Properties *properties, signed int logLevel);
// setLogPropertyWarnings
// file property.h line 273
extern void setLogPropertyWarnings(struct Properties *properties, signed int logWarnings);
// setLogWarningThreshold
// file logger.h line 125
extern void setLogWarningThreshold(signed int threshold);
// setLogfileAutoClose
// file logger.h line 224
extern void setLogfileAutoClose(signed int autoClose);
// setLogfileAutoFlush
// file logger.h line 221
extern void setLogfileAutoFlush(signed int autoFlush);
// setLogfileFormat
// file logger.h line 209
extern void setLogfileFormat(const signed int *log_file_format);
// setLogfileLevel
// file logger.h line 212
extern void setLogfileLevel(const signed int *log_file_level);
// setLogfileLevelInt
// file logger.h line 210
extern void setLogfileLevelInt(signed int log_file_level);
// setLogfileMaxFileSize
// file logger.h line 213
extern void setLogfileMaxFileSize(const signed int *max_file_size);
// setLogfileMaxFileSizeInt
// file logger.c line 987
extern void setLogfileMaxFileSizeInt(signed int max_file_size);
// setLogfileMaxLogFiles
// file logger.h line 215
extern void setLogfileMaxLogFiles(signed int max_log_files);
// setLogfilePath
// file logger.h line 177
extern signed int setLogfilePath(const signed int *log_file_path, const signed int *workingDir, signed int preload);
// setLogfilePurgePattern
// file logger.h line 216
extern void setLogfilePurgePattern(const signed int *pattern);
// setLogfilePurgeSortMode
// file logger.h line 217
extern void setLogfilePurgeSortMode(signed int sortMode);
// setLogfileRollMode
// file logger.h line 206
extern void setLogfileRollMode(signed int log_file_roll_mode);
// setLogfileUmask
// file logger.h line 208
extern void setLogfileUmask(signed int log_file_umask);
// setPauseTime
// file logger.h line 149
extern void setPauseTime(signed int pauseTime);
// setSilentLogLevels
// file logger.c line 599
extern void setSilentLogLevels();
// setSimpleLogLevels
// file logger.h line 135
extern void setSimpleLogLevels();
// setSyslogEventSourceName
// file logger.h line 253
extern void setSyslogEventSourceName(const signed int *event_source_name);
// setSyslogFacility
// file logger.h line 251
extern void setSyslogFacility(const signed int *loginfo_level);
// setSyslogFacilityInt
// file logger.c line 1194
void setSyslogFacilityInt(signed int logfacility_level);
// setSyslogLevel
// file logger.h line 248
extern void setSyslogLevel(const signed int *loginfo_level);
// setSyslogLevelInt
// file logger.h line 246
extern void setSyslogLevelInt(signed int loginfo_level);
// setSyslogSplitMessages
// file logger.h line 249
extern void setSyslogSplitMessages(signed int splitMessages);
// setUptime
// file logger.h line 265
extern void setUptime(signed int uptime, signed int flipped);
// setWorkingDir
// file wrapper_unix.c line 1751
signed int setWorkingDir(signed int *app);
// setenv
// file /usr/include/stdlib.h line 584
extern signed int setenv(const char *, const char *, signed int);
// setlocale
// file /usr/include/locale.h line 124
extern char * setlocale(signed int, const char *);
// setsid
// file /usr/include/unistd.h line 667
extern signed int setsid(void);
// showHelp
// file testsuite.c line 30
static void showHelp(signed int *app);
// showHostIds
// file wrapper.c line 376
extern signed int showHostIds(signed int logLevel);
// sigActionAlarm
// file wrapper_unix.c line 508
void sigActionAlarm(signed int sigNum, struct anonymous_3 *sigInfo, void *na);
// sigActionChildDeath
// file wrapper_unix.c line 567
void sigActionChildDeath(signed int sigNum, struct anonymous_3 *sigInfo, void *na);
// sigActionHangup
// file wrapper_unix.c line 609
void sigActionHangup(signed int sigNum, struct anonymous_3 *sigInfo, void *na);
// sigActionInterrupt
// file wrapper_unix.c line 532
void sigActionInterrupt(signed int sigNum, struct anonymous_3 *sigInfo, void *na);
// sigActionQuit
// file wrapper_unix.c line 544
void sigActionQuit(signed int sigNum, struct anonymous_3 *sigInfo, void *na);
// sigActionTermination
// file wrapper_unix.c line 597
void sigActionTermination(signed int sigNum, struct anonymous_3 *sigInfo, void *na);
// sigActionUSR1
// file wrapper_unix.c line 621
void sigActionUSR1(signed int sigNum, struct anonymous_3 *sigInfo, void *na);
// sigActionUSR2
// file wrapper_unix.c line 633
void sigActionUSR2(signed int sigNum, struct anonymous_3 *sigInfo, void *na);
// sigaction
// file /usr/include/signal.h line 259
extern signed int sigaction(signed int, struct sigaction *, struct sigaction *);
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous_4 *, signed int);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous_4 *);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// sortFilesNamesAsc
// file logger_file.c line 193
signed int sortFilesNamesAsc(signed int **files, signed int cnt);
// sortFilesNamesDec
// file logger_file.c line 212
signed int sortFilesNamesDec(signed int **files, signed int cnt);
// sortFilesTimes
// file logger_file.c line 60
signed int sortFilesTimes(signed int **files, signed long int *fileTimes, signed int cnt);
// sortStringProperties
// file property.c line 1378
void sortStringProperties(unsigned long int *propertyIndices, signed int **propertyNames, signed int **propertyValues, signed int low, signed int high);
// srand
// file /usr/include/stdlib.h line 376
extern void srand(unsigned int);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf);
// strcasecmp
// file /usr/include/string.h line 533
extern signed int strcasecmp(const char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// syslog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 190
extern void syslog(signed int, const char *, ...);
// takeSignalAction
// file wrapper_unix.c line 217
void takeSignalAction(signed int sigNum, const signed int *sigName, signed int mode);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// timerRunner
// file wrapper_unix.c line 783
void * timerRunner(void *arg);
// towupper
// file /usr/include/wctype.h line 197
extern unsigned int towupper(unsigned int);
// trim
// file property.c line 888
void trim(const signed int *in, signed int *out);
// tsEX_clean_suite1
// file test_example.c line 36
signed int tsEX_clean_suite1(void);
// tsEX_init_suite1
// file test_example.c line 27
signed int tsEX_init_suite1(void);
// tsEX_suiteExample
// file test_example.c line 54
signed int tsEX_suiteExample();
// tsEX_testFail
// file test_example.c line 50
void tsEX_testFail(void);
// tsEX_testPass
// file test_example.c line 43
void tsEX_testPass(void);
// tsFLTR_clean_wrapper
// file test_filter.c line 40
signed int tsFLTR_clean_wrapper(void);
// tsFLTR_dummyLogFileChanged
// file test_filter.c line 26
void tsFLTR_dummyLogFileChanged(const signed int *logFile);
// tsFLTR_init_wrapper
// file test_filter.c line 29
signed int tsFLTR_init_wrapper(void);
// tsFLTR_subTestWrapperWildcardMatch
// file test_filter.c line 45
void tsFLTR_subTestWrapperWildcardMatch(const signed int *pattern, const signed int *text, unsigned long int expectedMinLen, signed int expectedMatch);
// tsFLTR_suiteFilter
// file test_filter.c line 110
signed int tsFLTR_suiteFilter();
// tsFLTR_testWrapperWildcardMatch
// file test_filter.c line 72
void tsFLTR_testWrapperWildcardMatch();
// tsHASH_buildRandomString
// file test_hashmap.c line 55
signed int * tsHASH_buildRandomString(signed int minLen, signed int maxLen);
// tsHASH_buildRandomStringWithTail
// file test_hashmap.c line 87
signed int * tsHASH_buildRandomStringWithTail(signed int minLen, signed int maxLen, signed int tail);
// tsHASH_freeTCHARArray
// file test_hashmap.c line 121
void tsHASH_freeTCHARArray(signed int **array, signed int len);
// tsHASH_getRandom
// file test_hashmap.c line 27
signed int tsHASH_getRandom(signed int min, signed int max);
// tsHASH_hashMapCommon
// file test_hashmap.c line 135
void tsHASH_hashMapCommon(signed int buckets, signed int valueCount);
// tsHASH_suiteHashMap
// file test_hashmap.c line 247
signed int tsHASH_suiteHashMap();
// tsHASH_testHashMapEmpty
// file test_hashmap.c line 229
void tsHASH_testHashMapEmpty();
// tsHASH_testHashMapLarge
// file test_hashmap.c line 243
void tsHASH_testHashMapLarge();
// tsHASH_testHashMapSparse
// file test_hashmap.c line 236
void tsHASH_testHashMapSparse();
// tsJAP_clean_properties
// file test_javaadditionalparam.c line 42
signed int tsJAP_clean_properties(void);
// tsJAP_dummyLogFileChanged
// file test_javaadditionalparam.c line 26
void tsJAP_dummyLogFileChanged(const signed int *logFile);
// tsJAP_init_properties
// file test_javaadditionalparam.c line 29
signed int tsJAP_init_properties(void);
// tsJAP_subTestJavaAdditionalParamSuite
// file wrapper.c line 9019
static void tsJAP_subTestJavaAdditionalParamSuite(signed int stripQuote, signed int *config, signed int **strings, signed int strings_len, signed int isJVMParam);
// tsJAP_suiteJavaAdditionalParam
// file test_javaadditionalparam.c line 49
signed int tsJAP_suiteJavaAdditionalParam();
// tsJAP_testJavaAdditionalParamSuite
// file wrapper.h line 1094
extern void tsJAP_testJavaAdditionalParamSuite(void);
// tzset
// file /usr/include/time.h line 293
extern void tzset(void);
// umask
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 311
extern unsigned int umask(unsigned int);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// unregisterSyslogMessageFile
// file logger.c line 2467
extern signed int unregisterSyslogMessageFile();
// unsetenv
// file /usr/include/stdlib.h line 588
extern signed int unsetenv(const char *);
// updateStringValue
// file wrapper.c line 492
void updateStringValue(signed int **ptr, const signed int *value);
// validateTimeout
// file wrapper.c line 7439
signed int validateTimeout(const signed int *propertyName, signed int value);
// vfwprintf
// file /usr/include/wchar.h line 612
extern signed int vfwprintf(struct _IO_FILE *, const signed int *, void **);
// vswprintf
// file /usr/include/wchar.h line 625
extern signed int vswprintf(signed int *, unsigned long int, const signed int *, void **);
// vwprintf
// file /usr/include/wchar.h line 620
extern signed int vwprintf(const signed int *, void **);
// wStatePaused
// file wrappereventloop.c line 865
void wStatePaused(unsigned int nowTicks);
// wStatePausing
// file wrappereventloop.c line 805
void wStatePausing(unsigned int nowTicks);
// wStateResuming
// file wrappereventloop.c line 877
void wStateResuming(unsigned int nowTicks);
// wStateStarted
// file wrappereventloop.c line 793
void wStateStarted(unsigned int nowTicks);
// wStateStarting
// file wrappereventloop.c line 751
void wStateStarting(unsigned int nowTicks);
// wStateStopped
// file wrappereventloop.c line 941
void wStateStopped(unsigned int nowTicks);
// wStateStopping
// file wrappereventloop.c line 910
void wStateStopping(unsigned int nowTicks);
// waitpid
// file /usr/include/x86_64-linux-gnu/sys/wait.h line 125
extern signed int waitpid(signed int, signed int *, signed int);
// wcscasecmp
// file /usr/include/wchar.h line 172
extern signed int wcscasecmp(const signed int *, const signed int *);
// wcschr
// file /usr/include/wchar.h line 227
extern signed int * wcschr(const signed int *, signed int);
// wcscmp
// file /usr/include/wchar.h line 163
extern signed int wcscmp(const signed int *, const signed int *);
// wcslen
// file /usr/include/wchar.h line 287
extern unsigned long int wcslen(const signed int *);
// wcsncat
// file /usr/include/wchar.h line 158
extern signed int * wcsncat(signed int *, const signed int *, unsigned long int);
// wcsncmp
// file /usr/include/wchar.h line 166
extern signed int wcsncmp(const signed int *, const signed int *, unsigned long int);
// wcsncpy
// file /usr/include/wchar.h line 150
extern signed int * wcsncpy(signed int *, const signed int *, unsigned long int);
// wcsrchr
// file /usr/include/wchar.h line 237
extern signed int * wcsrchr(const signed int *, signed int);
// wcsstr
// file /usr/include/wchar.h line 277
extern signed int * wcsstr(const signed int *, const signed int *);
// wcstok
// file /usr/include/wchar.h line 282
extern signed int * wcstok(signed int *, const signed int *, signed int ** restrict );
// wcstol
// file /usr/include/wchar.h line 468
extern signed long int wcstol(const signed int *, signed int ** restrict , signed int);
// wcstombs
// file /usr/include/stdlib.h line 876
extern unsigned long int wcstombs(char *, const signed int *, unsigned long int);
// wcstoul
// file /usr/include/wchar.h line 473
extern unsigned long int wcstoul(const signed int *, signed int ** restrict , signed int);
// wildcardMatchInner
// file wrapper.c line 3436
signed int wildcardMatchInner(const signed int *text, unsigned long int textLen, const signed int *pattern, unsigned long int patternLen, unsigned long int minTextLen);
// wrapperAddDefaultProperties
// file wrapper.c line 221
extern void wrapperAddDefaultProperties();
// wrapperAddToTicks
// file wrapper.c line 8454
extern unsigned int wrapperAddToTicks(unsigned int start, signed int seconds);
// wrapperBuildJavaClasspath
// file wrapper.c line 6093
extern signed int wrapperBuildJavaClasspath(signed int **classpath);
// wrapperBuildJavaCommand
// file wrapper.h line 987
extern signed int wrapperBuildJavaCommand();
// wrapperBuildJavaCommandArray
// file wrapper.c line 7043
extern signed int wrapperBuildJavaCommandArray(signed int ***stringsPtr, signed int *length, signed int addQuotes, const signed int *classpath);
// wrapperBuildJavaCommandArrayAppParameters
// file wrapper.c line 6357
signed int wrapperBuildJavaCommandArrayAppParameters(signed int **strings, signed int addQuotes, signed int index, signed int thisIsTestWrapper);
// wrapperBuildJavaCommandArrayClasspath
// file wrapper.c line 6296
signed int wrapperBuildJavaCommandArrayClasspath(signed int **strings, signed int addQuotes, signed int index, const signed int *classpath);
// wrapperBuildJavaCommandArrayInner
// file wrapper.c line 6480
signed int wrapperBuildJavaCommandArrayInner(signed int **strings, signed int addQuotes, const signed int *classpath);
// wrapperBuildJavaCommandArrayJavaAdditional
// file wrapper.c line 5557
signed int wrapperBuildJavaCommandArrayJavaAdditional(signed int **strings, signed int addQuotes, signed int detectDebugJVM, signed int index);
// wrapperBuildJavaCommandArrayJavaCommand
// file wrapper.c line 5423
signed int wrapperBuildJavaCommandArrayJavaCommand(signed int **strings, signed int addQuotes, signed int detectDebugJVM, signed int index);
// wrapperBuildJavaCommandArrayLibraryPath
// file wrapper.c line 5863
signed int wrapperBuildJavaCommandArrayLibraryPath(signed int **strings, signed int addQuotes, signed int index);
// wrapperBuildKey
// file wrapper.c line 7238
extern void wrapperBuildKey();
// wrapperBuildUnixDaemonInfo
// file wrapper.c line 531
signed int wrapperBuildUnixDaemonInfo();
// wrapperCalculateEnvironmentLength
// file wrapper_unix.c line 1163
unsigned long int wrapperCalculateEnvironmentLength();
// wrapperCheckQuotes
// file wrapper.c line 5097
extern signed int wrapperCheckQuotes(const signed int *value, const signed int *propName);
// wrapperCheckServerBackend
// file wrapper.c line 2303
extern signed int wrapperCheckServerBackend(signed int forceOpen);
// wrapperCorrectWindowsPath
// file wrapper_i18n.h line 504
extern void wrapperCorrectWindowsPath(signed int *filename);
// wrapperDataDispose
// file wrapper.c line 2824
void wrapperDataDispose();
// wrapperDetachJava
// file wrapper.h line 913
extern void wrapperDetachJava();
// wrapperDispose
// file wrapper.c line 3006
extern void wrapperDispose();
// wrapperDumpCPUUsage
// file wrapper.h line 866
extern void wrapperDumpCPUUsage();
// wrapperDumpMemory
// file wrapper.h line 860
extern void wrapperDumpMemory();
// wrapperDumpMemoryBanner
// file wrapper.h line 854
extern void wrapperDumpMemoryBanner();
// wrapperEventLoop
// file wrapper.h line 973
extern void wrapperEventLoop();
// wrapperExecute
// file wrapper.h line 838
extern signed int wrapperExecute();
// wrapperFileExists
// file wrapper_file.h line 33
extern signed int wrapperFileExists(const signed int *filename);
// wrapperFreeJavaCommandArray
// file wrapper.c line 7086
extern void wrapperFreeJavaCommandArray(signed int **strings, signed int length);
// wrapperGetActionListForNames
// file wrapper.c line 7589
extern signed int * wrapperGetActionListForNames(const signed int *actionNameList, const signed int *propertyName);
// wrapperGetBuildTime
// file wrapper.c line 210
extern struct tm wrapperGetBuildTime();
// wrapperGetCurrentTime
// file wrapper.c line 994
extern void wrapperGetCurrentTime(struct timeb *timeBuffer);
// wrapperGetFileBase
// file wrapper.c line 3065
extern void wrapperGetFileBase(const signed int *fileName, signed int *baseName);
// wrapperGetJState
// file wrappereventloop.c line 108
extern const signed int * wrapperGetJState(signed int jState);
// wrapperGetLastError
// file wrapper_i18n.h line 496
extern signed int wrapperGetLastError();
// wrapperGetMinimumTextLengthForPattern
// file wrapper.h line 596
extern unsigned long int wrapperGetMinimumTextLengthForPattern(const signed int *pattern);
// wrapperGetProcessStatus
// file wrapper.h line 826
extern signed int wrapperGetProcessStatus(unsigned int nowTicks, signed int sigChild);
// wrapperGetReleaseTime
// file wrapper.c line 206
extern struct tm wrapperGetReleaseTime();
// wrapperGetRestartProcessMessage
// file wrapper.c line 4793
extern const signed int * wrapperGetRestartProcessMessage();
// wrapperGetSystemTicks
// file wrapper.c line 8352
extern unsigned int wrapperGetSystemTicks();
// wrapperGetTickAgeSeconds
// file wrapper.c line 8399
extern signed int wrapperGetTickAgeSeconds(unsigned int start, unsigned int end);
// wrapperGetTickAgeTicks
// file wrapper.c line 8419
extern signed int wrapperGetTickAgeTicks(unsigned int start, unsigned int end);
// wrapperGetTicks
// file wrapper.h line 844
extern unsigned int wrapperGetTicks();
// wrapperGetWState
// file wrappereventloop.c line 70
extern const signed int * wrapperGetWState(signed int wState);
// wrapperInitialize
// file wrapper.c line 2679
extern signed int wrapperInitialize();
// wrapperInitializeRun
// file wrapper.h line 788
extern signed int wrapperInitializeRun();
// wrapperJVMDownCleanup
// file wrapper.c line 4094
void wrapperJVMDownCleanup(signed int setState);
// wrapperJVMProcessExited
// file wrapper.c line 7106
extern void wrapperJVMProcessExited(unsigned int nowTicks, signed int exitCode);
// wrapperKeyRegistered
// file wrapper.c line 8633
extern void wrapperKeyRegistered(signed int *key);
// wrapperKillProcess
// file wrapper.c line 4176
extern void wrapperKillProcess();
// wrapperKillProcessNow
// file wrapper.c line 4129
extern signed int wrapperKillProcessNow();
// wrapperLoadConfigurationProperties
// file wrapper.c line 736
extern signed int wrapperLoadConfigurationProperties(signed int preload);
// wrapperLoadHostName
// file wrapper.c line 7458
extern void wrapperLoadHostName();
// wrapperLoadLoggingProperties
// file wrapper.c line 614
void wrapperLoadLoggingProperties(signed int preload);
// wrapperLoadParameterFile
// file wrapper.c line 5820
signed int wrapperLoadParameterFile(signed int **strings, signed int addQuotes, signed int detectDebugJVM, signed int index, signed int *parameterName, signed int isJVMParameter);
// wrapperLockTickMutex
// file wrapper.c line 8300
extern signed int wrapperLockTickMutex();
// wrapperLogFileChanged
// file wrapper.c line 2664
void wrapperLogFileChanged(const signed int *logFile);
// wrapperLogSignaled
// file wrapper.c line 8623
extern void wrapperLogSignaled(signed int logLevel, signed int *msg);
// wrapperMaintainSignals
// file wrapper.h line 781
extern void wrapperMaintainSignals();
// wrapperParseArguments
// file wrapper.c line 3196
extern signed int wrapperParseArguments(signed int argc, signed int **argv);
// wrapperPauseProcess
// file wrapper.c line 4851
extern void wrapperPauseProcess(signed int actionSourceCode);
// wrapperPauseThread
// file wrapper.c line 3591
extern void wrapperPauseThread(signed int pauseTime, const signed int *threadName);
// wrapperPingResponded
// file wrapper.c line 8715
extern void wrapperPingResponded(unsigned int pingSendTicks, signed int queueWarnings);
// wrapperPingRespondedSlow
// file wrapper.c line 8705
extern void wrapperPingRespondedSlow(signed int tickAge);
// wrapperPingSlow
// file wrapper.c line 8697
extern void wrapperPingSlow();
// wrapperPingTimeoutResponded
// file wrapper.c line 8857
extern void wrapperPingTimeoutResponded();
// wrapperPostProcessCommandElement
// file wrapper.c line 3516
extern signed int * wrapperPostProcessCommandElement(signed int *command);
// wrapperProcessActionList
// file wrapper.c line 3336
extern void wrapperProcessActionList(signed int *actionList, const signed int *triggerMsg, signed int actionSourceCode, signed int logForActionNone, signed int exitCode);
// wrapperProtocolClose
// file wrapper.c line 1824
extern void wrapperProtocolClose();
// wrapperProtocolFunction
// file wrapper.c line 2021
extern signed int wrapperProtocolFunction(char function, const signed int *messageW);
// wrapperProtocolGetCodeName
// file wrapper.c line 1835
signed int * wrapperProtocolGetCodeName(char code);
// wrapperProtocolRead
// file wrapper.c line 2371
extern signed int wrapperProtocolRead();
// wrapperQuoteValue
// file wrapper.c line 5032
extern unsigned long int wrapperQuoteValue(const signed int *value, signed int *buffer, unsigned long int bufferSize);
// wrapperReadChildOutput
// file wrapper.c line 3809
extern signed int wrapperReadChildOutput(signed int maxTimeMS);
// wrapperReadChildOutputBlock
// file wrapper.h line 820
extern signed int wrapperReadChildOutputBlock(char *blockBuffer, signed int blockSize, signed int *readCount);
// wrapperReleaseTickMutex
// file wrapper.c line 8331
extern signed int wrapperReleaseTickMutex();
// wrapperReportStatus
// file wrapper.h line 808
extern void wrapperReportStatus(signed int useLoggerQueue, signed int status, signed int errorCode, signed int waitHint);
// wrapperRequestDumpJVMState
// file wrapper.h line 980
extern void wrapperRequestDumpJVMState();
// wrapperRequestJVMGC
// file wrapper.c line 4964
extern void wrapperRequestJVMGC(signed int actionSourceCode);
// wrapperRestartProcess
// file wrapper.c line 4818
extern void wrapperRestartProcess();
// wrapperRestartRequested
// file wrapper.c line 8873
extern void wrapperRestartRequested();
// wrapperResumeProcess
// file wrapper.c line 4905
extern void wrapperResumeProcess(signed int actionSourceCode);
// wrapperRunCommon
// file wrapper.c line 4668
signed int wrapperRunCommon(const signed int *runMode);
// wrapperRunCommonInner
// file wrapper.c line 4488
signed int wrapperRunCommonInner();
// wrapperRunConsole
// file wrapper.c line 4702
extern signed int wrapperRunConsole();
// wrapperRunService
// file wrapper.c line 4709
extern signed int wrapperRunService();
// wrapperSetJavaState
// file wrapper.h line 760
extern void wrapperSetJavaState(signed int jState, unsigned int nowTicks, signed int delay);
// wrapperSetWorkingDir
// file wrapper.c line 8593
extern signed int wrapperSetWorkingDir(const signed int *dir, signed int logErrors);
// wrapperSetWrapperState
// file wrapper.h line 738
extern void wrapperSetWrapperState(signed int wState);
// wrapperSleep
// file wrapper.h line 798
extern signed int wrapperSleep(signed int ms);
// wrapperStartPendingSignaled
// file wrapper.c line 8953
extern void wrapperStartPendingSignaled(signed int waitHint);
// wrapperStartedSignaled
// file wrapper.c line 8978
extern void wrapperStartedSignaled();
// wrapperStopPendingSignaled
// file wrapper.c line 8887
extern void wrapperStopPendingSignaled(signed int waitHint);
// wrapperStopProcess
// file wrapper.c line 4728
extern void wrapperStopProcess(signed int exitCode, signed int force);
// wrapperStopRequested
// file wrapper.c line 8862
extern void wrapperStopRequested(signed int exitCode);
// wrapperStoppedSignaled
// file wrapper.c line 8913
extern void wrapperStoppedSignaled();
// wrapperStripQuotes
// file wrapper.c line 5020
extern void wrapperStripQuotes(const signed int *prop, signed int *propStripped);
// wrapperStripQuotesInner
// file wrapper.c line 4982
static unsigned long int wrapperStripQuotesInner(const signed int *prop, unsigned long int propLen, signed int *propStripped);
// wrapperTickAssertions
// file wrapper.c line 8464
extern signed int wrapperTickAssertions();
// wrapperTickExpired
// file wrapper.c line 8436
extern signed int wrapperTickExpired(unsigned int nowTicks, unsigned int timeoutTicks);
// wrapperUpdateJavaStateTimeout
// file wrapper.h line 748
extern void wrapperUpdateJavaStateTimeout(unsigned int nowTicks, signed int delay);
// wrapperUsage
// file wrapper.c line 3132
extern void wrapperUsage(signed int *appName);
// wrapperVersionBanner
// file wrapper.c line 3120
extern void wrapperVersionBanner();
// wrapperWildcardMatch
// file wrapper.h line 584
extern signed int wrapperWildcardMatch(const signed int *text, const signed int *pattern, unsigned long int minTextLen);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// writePidFile
// file wrapper_unix.c line 175
signed int writePidFile(const signed int *filename, unsigned long int pid, signed int newUmask, signed int strict);
// writeStateFile
// file wrappereventloop.c line 167
void writeStateFile(const signed int *filename, const signed int *state, signed int newUmask);

struct anonymous_32
{
  // _call_addr
  void *_call_addr;
  // _syscall
  signed int _syscall;
  // _arch
  unsigned int _arch;
};

struct anonymous_30
{
  // si_addr
  void *si_addr;
  // si_addr_lsb
  signed short int si_addr_lsb;
};

struct anonymous_4
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous_23
{
  // bucketCount
  signed int bucketCount;
  // size
  signed int size;
  // buckets
  struct anonymous_24 **buckets;
};

struct anonymous_26
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
};

struct anonymous_29
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

struct anonymous_28
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous_27
{
  // si_tid
  signed int si_tid;
  // si_overrun
  signed int si_overrun;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous_31
{
  // si_band
  signed long int si_band;
  // si_fd
  signed int si_fd;
};

union anonymous_33
{
  // _pad
  signed int _pad[28l];
  // _kill
  struct anonymous_26 _kill;
  // _timer
  struct anonymous_27 _timer;
  // _rt
  struct anonymous_28 _rt;
  // _sigchld
  struct anonymous_29 _sigchld;
  // _sigfault
  struct anonymous_30 _sigfault;
  // _sigpoll
  struct anonymous_31 _sigpoll;
  // _sigsys
  struct anonymous_32 _sigsys;
};

struct anonymous_3
{
  // si_signo
  signed int si_signo;
  // si_errno
  signed int si_errno;
  // si_code
  signed int si_code;
  // _sifields
  union anonymous_33 _sifields;
};

struct anonymous_24
{
  // size
  signed int size;
  // firstEntry
  struct HashEntry *firstEntry;
};

struct anonymous_22
{
  // gl_pathc
  unsigned long int gl_pathc;
  // gl_pathv
  char **gl_pathv;
  // gl_offs
  unsigned long int gl_offs;
  // gl_flags
  signed int gl_flags;
  // gl_closedir
  void (*gl_closedir)(void *);
  // gl_readdir
  struct dirent * (*gl_readdir)(void *);
  // gl_opendir
  void * (*gl_opendir)(const char *);
  // gl_lstat
  signed int (*gl_lstat)(const char *, struct stat *);
  // gl_stat
  signed int (*gl_stat)(const char *, struct stat *);
};

union anonymous
{
  // sa_handler
  void (*sa_handler)(signed int);
  // sa_sigaction
  void (*sa_sigaction)(signed int, struct anonymous_3 *, void *);
};

union anonymous_21
{
  // __u6_addr8
  unsigned char __u6_addr8[16l];
  // __u6_addr16
  unsigned short int __u6_addr16[8l];
  // __u6_addr32
  unsigned int __u6_addr32[4l];
};

union anonymous_8
{
  // ru_idrss
  signed long int ru_idrss;
  // __ru_idrss_word
  signed long int __ru_idrss_word;
};

union anonymous_13
{
  // ru_inblock
  signed long int ru_inblock;
  // __ru_inblock_word
  signed long int __ru_inblock_word;
};

union anonymous_9
{
  // ru_isrss
  signed long int ru_isrss;
  // __ru_isrss_word
  signed long int __ru_isrss_word;
};

union anonymous_7
{
  // ru_ixrss
  signed long int ru_ixrss;
  // __ru_ixrss_word
  signed long int __ru_ixrss_word;
};

union anonymous_11
{
  // ru_majflt
  signed long int ru_majflt;
  // __ru_majflt_word
  signed long int __ru_majflt_word;
};

union anonymous_6
{
  // ru_maxrss
  signed long int ru_maxrss;
  // __ru_maxrss_word
  signed long int __ru_maxrss_word;
};

union anonymous_10
{
  // ru_minflt
  signed long int ru_minflt;
  // __ru_minflt_word
  signed long int __ru_minflt_word;
};

union anonymous_16
{
  // ru_msgrcv
  signed long int ru_msgrcv;
  // __ru_msgrcv_word
  signed long int __ru_msgrcv_word;
};

union anonymous_15
{
  // ru_msgsnd
  signed long int ru_msgsnd;
  // __ru_msgsnd_word
  signed long int __ru_msgsnd_word;
};

union anonymous_19
{
  // ru_nivcsw
  signed long int ru_nivcsw;
  // __ru_nivcsw_word
  signed long int __ru_nivcsw_word;
};

union anonymous_17
{
  // ru_nsignals
  signed long int ru_nsignals;
  // __ru_nsignals_word
  signed long int __ru_nsignals_word;
};

union anonymous_12
{
  // ru_nswap
  signed long int ru_nswap;
  // __ru_nswap_word
  signed long int __ru_nswap_word;
};

union anonymous_18
{
  // ru_nvcsw
  signed long int ru_nvcsw;
  // __ru_nvcsw_word
  signed long int __ru_nvcsw_word;
};

union anonymous_14
{
  // ru_oublock
  signed long int ru_oublock;
  // __ru_oublock_word
  signed long int __ru_oublock_word;
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

union anonymous_2
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

union anonymous_5
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

union anonymous_25
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

struct CU_Suite
{
  // pName
  char *pName;
  // fActive
  signed int fActive;
  // pTest
  struct CU_Test *pTest;
  // pInitializeFunc
  signed int (*pInitializeFunc)(void);
  // pCleanupFunc
  signed int (*pCleanupFunc)(void);
  // pSetUpFunc
  void (*pSetUpFunc)(void);
  // pTearDownFunc
  void (*pTearDownFunc)(void);
  // uiNumberOfTests
  unsigned int uiNumberOfTests;
  // pNext
  struct CU_Suite *pNext;
  // pPrev
  struct CU_Suite *pPrev;
  // uiNumberOfTestsFailed
  unsigned int uiNumberOfTestsFailed;
  // uiNumberOfTestsSuccess
  unsigned int uiNumberOfTestsSuccess;
};

struct CU_Test
{
  // pName
  char *pName;
  // fActive
  signed int fActive;
  // pTestFunc
  void (*pTestFunc)(void);
  // pJumpBuf
  struct __jmp_buf_tag (*pJumpBuf)[1l];
  // pNext
  struct CU_Test *pNext;
  // pPrev
  struct CU_Test *pPrev;
};

struct ConfigFileReader
{
  // callback
  signed int (*callback)(void *, const signed int *, signed int, signed int *, signed int);
  // callbackParam
  void *callbackParam;
  // enableIncludes
  signed int enableIncludes;
  // preload
  signed int preload;
  // debugIncludes
  signed int debugIncludes;
  // debugProperties
  signed int debugProperties;
};

struct EnvSrc
{
  // source
  signed int source;
  // name
  signed int *name;
  // next
  struct EnvSrc *next;
};

struct HashEntry
{
  // keySize
  unsigned long int keySize;
  // key
  void *key;
  // valueSize
  unsigned long int valueSize;
  // value
  void *value;
  // nextEntry
  struct HashEntry *nextEntry;
};

struct LoadParameterFileCallbackParam
{
  // stripQuote
  signed int stripQuote;
  // strings
  signed int **strings;
  // index
  signed int index;
  // isJVMParam
  signed int isJVMParam;
};

struct PendingPing
{
  // sentTicks
  unsigned int sentTicks;
  // timeoutTicks
  unsigned int timeoutTicks;
  // slowTicks
  unsigned int slowTicks;
  // nextPendingPing
  struct PendingPing *nextPendingPing;
};

struct Properties
{
  // debugProperties
  signed int debugProperties;
  // logWarnings
  signed int logWarnings;
  // logWarningLogLevel
  signed int logWarningLogLevel;
  // first
  struct Property *first;
  // last
  struct Property *last;
  // warnedVarMap
  struct anonymous_23 *warnedVarMap;
};

struct Property
{
  // name
  signed int *name;
  // value
  signed int *value;
  // finalValue
  signed int finalValue;
  // quotable
  signed int quotable;
  // internal
  signed int internal;
  // next
  struct Property *next;
  // previous
  struct Property *previous;
};

struct WrapperConfig
{
  // argBinary
  signed int *argBinary;
  // argCommand
  signed int *argCommand;
  // argCommandArg
  signed int *argCommandArg;
  // argConfFile
  signed int *argConfFile;
  // confDir
  signed int *confDir;
  // argConfFileDefault
  signed int argConfFileDefault;
  // argConfFileFound
  signed int argConfFileFound;
  // argCount
  signed int argCount;
  // argValues
  signed int **argValues;
  // javaArgValues
  signed int **javaArgValues;
  // javaArgValueCount
  signed int javaArgValueCount;
  // initialPath
  signed int *initialPath;
  // language
  signed int *language;
  // backendType
  signed int backendType;
  // configured
  signed int configured;
  // useSystemTime
  signed int useSystemTime;
  // logBufferGrowth
  signed int logBufferGrowth;
  // timerFastThreshold
  signed int timerFastThreshold;
  // timerSlowThreshold
  signed int timerSlowThreshold;
  // useTickMutex
  signed int useTickMutex;
  // uptimeFlipped
  signed int uptimeFlipped;
  // ignoreSequenceGaps
  signed int ignoreSequenceGaps;
  // port
  signed int port;
  // portMin
  signed int portMin;
  // portMax
  signed int portMax;
  // actualPort
  signed int actualPort;
  // jvmPort
  signed int jvmPort;
  // jvmPortMin
  signed int jvmPortMin;
  // jvmPortMax
  signed int jvmPortMax;
  // sock
  signed int sock;
  // portAddress
  signed int *portAddress;
  // originalWorkingDir
  signed int *originalWorkingDir;
  // workingDir
  signed int *workingDir;
  // configFile
  signed int *configFile;
  // commandLogLevel
  signed int commandLogLevel;
  // printJVMVersion
  signed int printJVMVersion;
  // jvmVersionCommand
  signed int **jvmVersionCommand;
  // jvmCommand
  signed int **jvmCommand;
  // detachStarted
  signed int detachStarted;
  // environmentClasspath
  signed int environmentClasspath;
  // classpath
  signed int *classpath;
  // debugJVM
  signed int debugJVM;
  // debugJVMTimeoutNotified
  signed int debugJVMTimeoutNotified;
  // key
  signed int key[17l];
  // isConsole
  signed int isConsole;
  // cpuTimeout
  signed int cpuTimeout;
  // startupTimeout
  signed int startupTimeout;
  // pingTimeout
  signed int pingTimeout;
  // pingAlertThreshold
  signed int pingAlertThreshold;
  // pingAlertLogLevel
  signed int pingAlertLogLevel;
  // pingInterval
  signed int pingInterval;
  // pingIntervalLogged
  signed int pingIntervalLogged;
  // pingActionList
  signed int *pingActionList;
  // pingTimedOut
  signed int pingTimedOut;
  // shutdownTimeout
  signed int shutdownTimeout;
  // jvmExitTimeout
  signed int jvmExitTimeout;
  // jvmCleanupTimeout
  signed int jvmCleanupTimeout;
  // jvmTerminateTimeout
  signed int jvmTerminateTimeout;
  // useJavaIOThread
  signed int useJavaIOThread;
  // pauseThreadMain
  signed int pauseThreadMain;
  // pauseThreadTimer
  signed int pauseThreadTimer;
  // pauseThreadJavaIO
  signed int pauseThreadJavaIO;
  // wrapperPID
  signed int wrapperPID;
  // javaPID
  signed int javaPID;
  // wState
  signed int wState;
  // jState
  signed int jState;
  // jStateTimeoutTicks
  unsigned int jStateTimeoutTicks;
  // jStateTimeoutTicksSet
  signed int jStateTimeoutTicksSet;
  // lastPingTicks
  unsigned int lastPingTicks;
  // lastLoggedPingTicks
  unsigned int lastLoggedPingTicks;
  // isDebugging
  signed int isDebugging;
  // isAdviserEnabled
  signed int isAdviserEnabled;
  // nativeLibrary
  const signed int *nativeLibrary;
  // libraryPathAppendPath
  signed int libraryPathAppendPath;
  // isStateOutputEnabled
  signed int isStateOutputEnabled;
  // isJavaIOOutputEnabled
  signed int isJavaIOOutputEnabled;
  // isTickOutputEnabled
  signed int isTickOutputEnabled;
  // isLoopOutputEnabled
  signed int isLoopOutputEnabled;
  // isSleepOutputEnabled
  signed int isSleepOutputEnabled;
  // isMemoryOutputEnabled
  signed int isMemoryOutputEnabled;
  // memoryOutputInterval
  signed int memoryOutputInterval;
  // memoryOutputTimeoutTicks
  unsigned int memoryOutputTimeoutTicks;
  // isCPUOutputEnabled
  signed int isCPUOutputEnabled;
  // cpuOutputInterval
  signed int cpuOutputInterval;
  // cpuOutputTimeoutTicks
  unsigned int cpuOutputTimeoutTicks;
  // isPageFaultOutputEnabled
  signed int isPageFaultOutputEnabled;
  // pageFaultOutputInterval
  signed int pageFaultOutputInterval;
  // pageFaultOutputTimeoutTicks
  unsigned int pageFaultOutputTimeoutTicks;
  // logfileFlushTimeout
  signed int logfileFlushTimeout;
  // logfileFlushTimeoutTicks
  unsigned int logfileFlushTimeoutTicks;
  // logfileFlushTimeoutTicksSet
  signed int logfileFlushTimeoutTicksSet;
  // logfileCloseTimeout
  signed int logfileCloseTimeout;
  // logfileCloseTimeoutTicks
  unsigned int logfileCloseTimeoutTicks;
  // logfileCloseTimeoutTicksSet
  signed int logfileCloseTimeoutTicksSet;
  // isTestsDisabled
  signed int isTestsDisabled;
  // isShutdownHookDisabled
  signed int isShutdownHookDisabled;
  // isForcedShutdownDisabled
  signed int isForcedShutdownDisabled;
  // startupDelayConsole
  signed int startupDelayConsole;
  // startupDelayService
  signed int startupDelayService;
  // exitCode
  signed int exitCode;
  // exitRequested
  signed int exitRequested;
  // restartRequested
  signed int restartRequested;
  // stoppedPacketReceived
  signed int stoppedPacketReceived;
  // restartPacketReceived
  signed int restartPacketReceived;
  // jvmRestarts
  signed int jvmRestarts;
  // restartDelay
  signed int restartDelay;
  // restartReloadConf
  signed int restartReloadConf;
  // isRestartDisabled
  signed int isRestartDisabled;
  // isAutoRestartDisabled
  signed int isAutoRestartDisabled;
  // requestThreadDumpOnFailedJVMExit
  signed int requestThreadDumpOnFailedJVMExit;
  // requestThreadDumpOnFailedJVMExitDelay
  signed int requestThreadDumpOnFailedJVMExitDelay;
  // jvmLaunchTicks
  unsigned int jvmLaunchTicks;
  // failedInvocationCount
  signed int failedInvocationCount;
  // successfulInvocationTime
  signed int successfulInvocationTime;
  // maxFailedInvocations
  signed int maxFailedInvocations;
  // outputFilterCount
  signed int outputFilterCount;
  // outputFilters
  signed int **outputFilters;
  // outputFilterActionLists
  signed int **outputFilterActionLists;
  // outputFilterMessages
  signed int **outputFilterMessages;
  // outputFilterAllowWildFlags
  signed int *outputFilterAllowWildFlags;
  // outputFilterMinLens
  unsigned long int *outputFilterMinLens;
  // pidFilename
  signed int *pidFilename;
  // pidFileStrict
  signed int pidFileStrict;
  // lockFilename
  signed int *lockFilename;
  // javaPidFilename
  signed int *javaPidFilename;
  // javaIdFilename
  signed int *javaIdFilename;
  // statusFilename
  signed int *statusFilename;
  // javaStatusFilename
  signed int *javaStatusFilename;
  // commandFilename
  signed int *commandFilename;
  // commandFileTests
  signed int commandFileTests;
  // commandPollInterval
  signed int commandPollInterval;
  // commandTimeoutTicks
  unsigned int commandTimeoutTicks;
  // anchorFilename
  signed int *anchorFilename;
  // anchorPollInterval
  signed int anchorPollInterval;
  // anchorTimeoutTicks
  unsigned int anchorTimeoutTicks;
  // umask
  signed int umask;
  // javaUmask
  signed int javaUmask;
  // pidFileUmask
  signed int pidFileUmask;
  // lockFileUmask
  signed int lockFileUmask;
  // javaPidFileUmask
  signed int javaPidFileUmask;
  // javaIdFileUmask
  signed int javaIdFileUmask;
  // statusFileUmask
  signed int statusFileUmask;
  // javaStatusFileUmask
  signed int javaStatusFileUmask;
  // anchorFileUmask
  signed int anchorFileUmask;
  // ignoreSignals
  signed int ignoreSignals;
  // consoleTitle
  signed int *consoleTitle;
  // serviceName
  signed int *serviceName;
  // serviceDisplayName
  signed int *serviceDisplayName;
  // serviceDescription
  signed int *serviceDescription;
  // hostName
  signed int *hostName;
  // pausable
  signed int pausable;
  // pausableStopJVM
  signed int pausableStopJVM;
  // initiallyPaused
  signed int initiallyPaused;
  // logLFDelayThreshold
  signed int logLFDelayThreshold;
  // daemonize
  signed int daemonize;
  // signalHUPMode
  signed int signalHUPMode;
  // signalUSR1Mode
  signed int signalUSR1Mode;
  // signalUSR2Mode
  signed int signalUSR2Mode;
  // jvmStopped
  signed int jvmStopped;
  // pendingPingQueueOverflow
  signed int pendingPingQueueOverflow;
  // pendingPingQueueOverflowEmptied
  signed int pendingPingQueueOverflowEmptied;
  // pendingPingCount
  signed int pendingPingCount;
  // firstPendingPing
  struct PendingPing *firstPendingPing;
  // firstUnwarnedPendingPing
  struct PendingPing *firstUnwarnedPendingPing;
  // lastPendingPing
  struct PendingPing *lastPendingPing;
  // signalInterruptTrapped
  signed int signalInterruptTrapped;
  // signalQuitTrapped
  signed int signalQuitTrapped;
  // signalChildTrapped
  signed int signalChildTrapped;
  // signalTermTrapped
  signed int signalTermTrapped;
  // signalHUPTrapped
  signed int signalHUPTrapped;
  // signalUSR1Trapped
  signed int signalUSR1Trapped;
  // signalUSR2Trapped
  signed int signalUSR2Trapped;
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

struct __jmp_buf_tag
{
  // __jmpbuf
  signed long int __jmpbuf[8l];
  // __mask_was_saved
  signed int __mask_was_saved;
  // __saved_mask
  struct anonymous_4 __saved_mask;
};

struct in6_addr
{
  // __in6_u
  union anonymous_21 __in6_u;
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
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

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct rusage
{
  // ru_utime
  struct timeval ru_utime;
  // ru_stime
  struct timeval ru_stime;
  // _anon0
  union anonymous_6 _anon0;
  // _anon1
  union anonymous_7 _anon1;
  // _anon2
  union anonymous_8 _anon2;
  // _anon3
  union anonymous_9 _anon3;
  // _anon4
  union anonymous_10 _anon4;
  // _anon5
  union anonymous_11 _anon5;
  // _anon6
  union anonymous_12 _anon6;
  // _anon7
  union anonymous_13 _anon7;
  // _anon8
  union anonymous_14 _anon8;
  // _anon9
  union anonymous_15 _anon9;
  // _anon10
  union anonymous_16 _anon10;
  // _anon11
  union anonymous_17 _anon11;
  // _anon12
  union anonymous_18 _anon12;
  // _anon13
  union anonymous_19 _anon13;
};

struct sigaction
{
  // __sigaction_handler
  union anonymous __sigaction_handler;
  // sa_mask
  struct anonymous_4 sa_mask;
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

struct timeb
{
  // time
  signed long int time;
  // millitm
  unsigned short int millitm;
  // timezone
  signed short int timezone;
  // dstflag
  signed short int dstflag;
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


// LOOPBACK_IPv6
// file wrapper.c line 154
struct in6_addr LOOPBACK_IPv6 = { .__in6_u={ .__u6_addr8={ (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)1 } } };
// autoCloseLogfile
// file logger.c line 237
signed int autoCloseLogfile = 0;
// autoFlushLogfile
// file logger.c line 234
signed int autoFlushLogfile = 0;
// baseEnvSrc
// file property.c line 64
struct EnvSrc *baseEnvSrc = (struct EnvSrc *)(void *)0;
// consoleErrorToStdErr
// file logger.c line 166
signed int consoleErrorToStdErr = -1;
// consoleFatalToStdErr
// file logger.c line 165
signed int consoleFatalToStdErr = -1;
// consoleFlush
// file logger.c line 157
signed int consoleFlush = 0;
// consoleFormat
// file logger.c line 154
signed int consoleFormat[32l];
// consoleWarnToStdErr
// file logger.c line 167
signed int consoleWarnToStdErr = 0;
// currentConsoleLevel
// file logger.c line 113
signed int currentConsoleLevel = 0;
// currentLogFileName
// file logger.c line 134
signed int *currentLogFileName;
// currentLogFileNameSize
// file logger.c line 133
unsigned long int currentLogFileNameSize;
// currentLogSplitMessages
// file logger.c line 116
signed int currentLogSplitMessages = 0;
// currentLogfacilityLevel
// file logger.c line 119
signed int currentLogfacilityLevel = 1 << 3;
// currentLogfileLevel
// file logger.c line 114
signed int currentLogfileLevel = 0;
// currentLoginfoLevel
// file logger.c line 115
signed int currentLoginfoLevel = 0;
// daylight
// file /usr/include/time.h line 297
extern signed int daylight;
// defaultLogFile
// file logger.c line 98
const signed int *defaultLogFile = L"wrapper.log";
// defaultLoginfoSourceName
// file logger.c line 144
char *defaultLoginfoSourceName = "wrapper";
// disposed
// file wrapper.c line 156
signed int disposed = 0;
// environ
// file /usr/include/unistd.h line 545
extern char **environ;
// escapedPropertyNames
// file property.c line 69
const signed int **escapedPropertyNames = (const signed int **)(void *)0;
// formatMessages
// file logger.c line 202
signed int formatMessages[6l][517l];
// generateValueBuffer
// file property.c line 198
signed int generateValueBuffer[256l];
// javaIOThreadId
// file wrapper_unix.c line 98
unsigned long int javaIOThreadId;
// javaIOThreadSet
// file wrapper_unix.c line 97
signed int javaIOThreadSet = 0;
// javaIOThreadStarted
// file wrapper_unix.c line 99
signed int javaIOThreadStarted = 0;
// javaIOThreadStopped
// file wrapper_unix.c line 101
signed int javaIOThreadStopped = 0;
// keyChars
// file wrapper.c line 125
signed int *keyChars = L"0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_-";
// lastErrorTextBufferW
// file logger.c line 2335
signed int lastErrorTextBufferW[1024l];
// loadPropertiesTM
// file property.c line 67
struct tm loadPropertiesTM;
// logBufferGrowth
// file logger.c line 128
signed int logBufferGrowth = 0;
// logFileAccessed
// file logger.c line 228
signed int logFileAccessed = 0;
// logFileChangedCallback
// file logger.c line 122
void (*logFileChangedCallback)(const signed int *);
// logFileLastNowDate
// file logger.c line 152
signed int logFileLastNowDate[9l];
// logFileMaxLogFiles
// file logger.c line 148
signed int logFileMaxLogFiles = -1;
// logFileMaxSize
// file logger.c line 147
signed int logFileMaxSize = -1;
// logFilePath
// file logger.c line 130
signed int *logFilePath;
// logFilePurgePattern
// file logger.c line 149
signed int *logFilePurgePattern = (signed int *)(void *)0;
// logFilePurgeSortMode
// file logger.c line 150
signed int logFilePurgeSortMode = 100;
// logFileRollMode
// file logger.c line 137
signed int logFileRollMode = 2;
// logFileUmask
// file logger.c line 138
signed int logFileUmask = 0022;
// logLevelNames
// file logger.c line 139
signed int *logLevelNames[9l] = { L"NONE  ", L"DEBUG ", L"INFO  ", L"STATUS", L"WARN  ", L"ERROR ", L"FATAL ", L"ADVICE", L"NOTICE" };
// logPauseTime
// file logger.c line 127
signed int logPauseTime = -1;
// logPrintfWarnThreshold
// file logger.c line 103
signed int logPrintfWarnThreshold = 0;
// log_printfMutex
// file logger.c line 247
union anonymous_2 log_printfMutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// logfileActivityCount
// file logger.c line 240
unsigned long int logfileActivityCount = (unsigned long int)0;
// logfileFP
// file logger.c line 231
struct _IO_FILE *logfileFP = (struct _IO_FILE *)(void *)0;
// logfileFormat
// file logger.c line 155
signed int logfileFormat[32l];
// loginfoSourceName
// file logger.c line 145
char *loginfoSourceName = (char *)(void *)0;
// packetBufferMB
// file wrapper.c line 123
char packetBufferMB[4097l];
// packetBufferW
// file wrapper.c line 124
signed int packetBufferW[4097l];
// pendingLogFileChange
// file logger.c line 125
signed int *pendingLogFileChange = (signed int *)(void *)0;
// pipedes
// file wrapper_unix.c line 85
signed int pipedes[2l] = { -1, -1 };
// previousLogLag
// file logger.c line 106
signed long int previousLogLag;
// previousNow
// file logger.c line 109
signed long int previousNow;
// previousNowMillis
// file logger.c line 110
signed int previousNowMillis;
// properties
// file wrapper.c line 128
struct Properties *properties;
// protocolActiveBackendSD
// file wrapper.c line 146
signed int protocolActiveBackendSD = -1;
// protocolActiveServerPipeConnected
// file wrapper.c line 141
signed int protocolActiveServerPipeConnected = 0;
// protocolActiveServerPipeIn
// file wrapper.c line 138
signed int protocolActiveServerPipeIn = -1;
// protocolActiveServerPipeOut
// file wrapper.c line 139
signed int protocolActiveServerPipeOut = -1;
// protocolActiveServerPipeStarted
// file wrapper.c line 1064
signed int protocolActiveServerPipeStarted = 0;
// protocolActiveServerSD
// file wrapper.c line 144
signed int protocolActiveServerSD = -1;
// protocolMutex
// file wrapper.c line 1960
union anonymous_2 protocolMutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// protocolSendBuffer
// file wrapper.c line 2012
char *protocolSendBuffer = (char *)(void *)0;
// protocolSendBufferSize
// file wrapper.c line 2011
unsigned long int protocolSendBufferSize = (unsigned long int)0;
// queueLevels
// file logger.c line 209
signed int queueLevels[6l][20l];
// queueMessages
// file logger.c line 207
signed int queueMessages[6l][20l][517l];
// queueReadIndex
// file logger.c line 206
signed int queueReadIndex[6l];
// queueSourceIds
// file logger.c line 208
signed int queueSourceIds[6l][20l];
// queueWrapped
// file logger.c line 204
signed int queueWrapped[6l];
// queueWriteIndex
// file logger.c line 205
signed int queueWriteIndex[6l];
// rollFailure
// file logger.c line 2923
signed int rollFailure = 0;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// stopJavaIOThread
// file wrapper_unix.c line 100
signed int stopJavaIOThread = 0;
// stopTimerThread
// file wrapper_unix.c line 106
signed int stopTimerThread = 0;
// threadIds
// file logger.c line 216
unsigned long int threadIds[6l];
// threadMessageBuffer
// file logger.c line 218
signed int *threadMessageBuffer = (signed int *)(void *)0;
// threadMessageBufferSize
// file logger.c line 219
unsigned long int threadMessageBufferSize = (unsigned long int)0;
// threadPrintBuffer
// file logger.c line 220
signed int *threadPrintBuffer = (signed int *)(void *)0;
// threadPrintBufferSize
// file logger.c line 221
unsigned long int threadPrintBufferSize = (unsigned long int)0;
// threadSets
// file logger.c line 212
signed int threadSets[6l];
// tickMutex
// file wrapper.c line 134
union anonymous_2 tickMutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// timerThreadId
// file wrapper_unix.c line 104
unsigned long int timerThreadId;
// timerThreadSet
// file wrapper_unix.c line 103
signed int timerThreadSet = 0;
// timerThreadStarted
// file wrapper_unix.c line 105
signed int timerThreadStarted = 0;
// timerThreadStopped
// file wrapper_unix.c line 107
signed int timerThreadStopped = 0;
// timerTicks
// file wrapper_unix.c line 109
unsigned int timerTicks = 0xfffffe00;
// timezone
// file /usr/include/time.h line 298
extern signed long int timezone;
// tsFLTR_workBuffer
// file test_filter.c line 24
signed int tsFLTR_workBuffer[4096l];
// tsHASH_randomChars
// file test_hashmap.c line 23
signed int *tsHASH_randomChars = L"0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_-";
// tsHASH_workBuffer
// file test_hashmap.c line 25
signed int tsHASH_workBuffer[4096l];
// tzname
// file /usr/include/time.h line 289
extern char *tzname[2l];
// uptimeFlipped
// file logger.c line 172
signed int uptimeFlipped = 0;
// uptimeSeconds
// file logger.c line 170
signed int uptimeSeconds = 0;
// workLogFileName
// file logger.c line 135
signed int *workLogFileName;
// wrapperArch
// file wrapperinfo.c line 31
signed int *wrapperArch = L"x86";
// wrapperBits
// file wrapperinfo.c line 30
signed int *wrapperBits = L"64";
// wrapperBuildDate
// file wrapperinfo.c line 35
signed int *wrapperBuildDate = L"20160126";
// wrapperBuildTime
// file wrapperinfo.c line 36
signed int *wrapperBuildTime = L"1140";
// wrapperChildWorkBuffer
// file wrapper.c line 160
char *wrapperChildWorkBuffer = (char *)(void *)0;
// wrapperChildWorkBufferLen
// file wrapper.c line 162
unsigned long int wrapperChildWorkBufferLen = (unsigned long int)0;
// wrapperChildWorkBufferSize
// file wrapper.c line 161
unsigned long int wrapperChildWorkBufferSize = (unsigned long int)0;
// wrapperChildWorkLastDataTime
// file wrapper.c line 163
signed long int wrapperChildWorkLastDataTime = (signed long int)0;
// wrapperChildWorkLastDataTimeMillis
// file wrapper.c line 164
signed int wrapperChildWorkLastDataTimeMillis = 0;
// wrapperClasspathSeparator
// file wrapper_unix.c line 95
signed int wrapperClasspathSeparator = 58;
// wrapperData
// file wrapper.c line 122
struct WrapperConfig *wrapperData;
// wrapperOS
// file wrapperinfo.c line 32
signed int *wrapperOS = L"linux";
// wrapperReleaseDate
// file wrapperinfo.c line 33
signed int *wrapperReleaseDate = L"20141205";
// wrapperReleaseTime
// file wrapperinfo.c line 34
signed int *wrapperReleaseTime = L"0000";
// wrapperVersion
// file wrapperinfo.c line 29
signed int *wrapperVersion = L"3.5.26";
// wrapperVersionRoot
// file wrapperinfo.c line 28
signed int *wrapperVersionRoot = L"3.5.26";

// _ftprintf
// file wrapper_i18n.h line 223
extern signed int _ftprintf(struct _IO_FILE *stream, const signed int *fmt, ...)
{
  signed int i;
  signed int flag;
  signed int *msg;
  void **args;
  signed int *return_value_wcsstr_8;
  return_value_wcsstr_8=wcsstr(fmt, L"%s");
  unsigned long int return_value_wcslen_4;
  unsigned long int return_value_wcslen_6;
  _Bool tmp_if_expr_5;
  if(!(return_value_wcsstr_8 == ((signed int *)NULL)))
  {
    unsigned long int return_value_wcslen_1;
    return_value_wcslen_1=wcslen(fmt);
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_1 + (unsigned long int)1));
    msg = (signed int *)return_value_malloc_2;
    if(!(msg == ((signed int *)NULL)))
    {
      unsigned long int return_value_wcslen_3;
      return_value_wcslen_3=wcslen(fmt);
      wcsncpy(msg, fmt, return_value_wcslen_3 + (unsigned long int)1);
      i = 0;
      do
      {
        return_value_wcslen_4=wcslen(fmt);
        if((unsigned long int)i >= return_value_wcslen_4)
          break;

        if(fmt[(signed long int)i] == 37)
        {
          return_value_wcslen_6=wcslen(fmt);
          if(!((unsigned long int)i >= return_value_wcslen_6))
          {
            if(fmt[(signed long int)(1 + i)] == 115)
            {
              if(i == 0)
                tmp_if_expr_5 = (_Bool)1;

              else
                tmp_if_expr_5 = fmt[(signed long int)(i - 1)] != 37 ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr_5)
              {
                msg[(signed long int)(i + 1)] = 83;
                i = i + 1;
              }

            }

          }

        }

        i = i + 1;
      }
      while((_Bool)1);
      unsigned long int return_value_wcslen_7;
      return_value_wcslen_7=wcslen(fmt);
      msg[(signed long int)return_value_wcslen_7] = 0;
    }

    flag = -1;
  }

  else
  {
    msg = (signed int *)fmt;
    flag = 0;
  }
  if(!(msg == ((signed int *)NULL)))
  {
    args = (void **)&fmt;
    i=vfwprintf(stream, msg, args);
    args = ((void **)NULL);
    if(flag == -1)
      free((void *)msg);

    return i;
  }

  else
    return -1;
}

// _sntprintf
// file wrapper_i18n.h line 221
extern signed int _sntprintf(signed int *str, unsigned long int size, const signed int *fmt, ...)
{
  signed int i;
  signed int flag;
  signed int *msg;
  void **args;
  signed int *return_value_wcsstr_8;
  return_value_wcsstr_8=wcsstr(fmt, L"%s");
  unsigned long int return_value_wcslen_4;
  unsigned long int return_value_wcslen_6;
  _Bool tmp_if_expr_5;
  if(!(return_value_wcsstr_8 == ((signed int *)NULL)))
  {
    unsigned long int return_value_wcslen_1;
    return_value_wcslen_1=wcslen(fmt);
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_1 + (unsigned long int)1));
    msg = (signed int *)return_value_malloc_2;
    if(!(msg == ((signed int *)NULL)))
    {
      unsigned long int return_value_wcslen_3;
      return_value_wcslen_3=wcslen(fmt);
      wcsncpy(msg, fmt, return_value_wcslen_3 + (unsigned long int)1);
      i = 0;
      do
      {
        return_value_wcslen_4=wcslen(fmt);
        if((unsigned long int)i >= return_value_wcslen_4)
          break;

        if(fmt[(signed long int)i] == 37)
        {
          return_value_wcslen_6=wcslen(fmt);
          if(!((unsigned long int)i >= return_value_wcslen_6))
          {
            if(fmt[(signed long int)(1 + i)] == 115)
            {
              if(i == 0)
                tmp_if_expr_5 = (_Bool)1;

              else
                tmp_if_expr_5 = fmt[(signed long int)(i - 1)] != 37 ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr_5)
              {
                msg[(signed long int)(i + 1)] = 83;
                i = i + 1;
              }

            }

          }

        }

        i = i + 1;
      }
      while((_Bool)1);
      unsigned long int return_value_wcslen_7;
      return_value_wcslen_7=wcslen(fmt);
      msg[(signed long int)return_value_wcslen_7] = 0;
    }

    flag = -1;
  }

  else
  {
    msg = (signed int *)fmt;
    flag = 0;
  }
  if(!(msg == ((signed int *)NULL)))
  {
    args = (void **)&fmt;
    i=vswprintf(str, size, msg, args);
    args = ((void **)NULL);
    if(flag == -1)
      free((void *)msg);

    return i;
  }

  else
    return -1;
}

// _tchdir
// file wrapper_i18n.h line 67
extern signed int _tchdir(const signed int *path)
{
  signed int r;
  unsigned long int size;
  char *cStr;
  r = -1;
  size=wcstombs((char *)(void *)0, path, (unsigned long int)0);
  if(size == 18446744073709551615ul)
    return r;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(size + (unsigned long int)1);
    cStr = (char *)return_value_malloc_1;
    if(!(cStr == ((char *)NULL)))
    {
      wcstombs(cStr, path, size + (unsigned long int)1);
      r=chdir(cStr);
      free((void *)cStr);
    }

    return r;
  }
}

// _texecve
// file wrapper_i18n.c line 860
extern signed int _texecve(signed int *arg, signed int **cmd, signed int **env)
{
  char **cCmd;
  char *cArg;
  char **cEnv;
  signed int i;
  signed int sizeCmd;
  signed int sizeEnv;
  unsigned long int req;
  i = 0;
  for( ; !(cmd[(signed long int)i] == ((signed int *)NULL)); i = i + 1)
    ;
  sizeCmd = i;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)(i + 1) * sizeof(char *) /*8ul*/ );
  cCmd = (char **)return_value_malloc_1;
  if(!(cCmd == ((char **)NULL)))
  {
    i = 0;
    for( ; !(i >= sizeCmd); i = i + 1)
    {
      req=wcstombs((char *)(void *)0, cmd[(signed long int)i], (unsigned long int)0);
      if(req == 18446744073709551615ul)
      {
        i = i - 1;
        for( ; i >= 1; i = i - 1)
          free((void *)cCmd[(signed long int)i]);
        free((void *)cCmd);
        return -1;
      }

      void *return_value_malloc_2;
      return_value_malloc_2=malloc(req + (unsigned long int)1);
      cCmd[(signed long int)i] = (char *)return_value_malloc_2;
      if(!(cCmd[(signed long int)i] == ((char *)NULL)))
        wcstombs(cCmd[(signed long int)i], cmd[(signed long int)i], req + (unsigned long int)1);

      else
      {
        i = i - 1;
        for( ; i >= 1; i = i - 1)
          free((void *)cCmd[(signed long int)i]);
        free((void *)cCmd);
        return -1;
      }
    }
    cCmd[(signed long int)sizeCmd] = ((char *)NULL);
    i = 0;
    for( ; !(env[(signed long int)i] == ((signed int *)NULL)); i = i + 1)
      ;
    sizeEnv = i;
    void *return_value_malloc_3;
    return_value_malloc_3=malloc((unsigned long int)(i + 1) * sizeof(char *) /*8ul*/ );
    cEnv = (char **)return_value_malloc_3;
    if(cEnv == ((char **)NULL))
    {
      for( ; sizeCmd >= 0; sizeCmd = sizeCmd - 1)
        free((void *)cCmd[(signed long int)sizeCmd]);
      free((void *)cCmd);
      return -1;
    }

    i = 0;
    for( ; !(i >= sizeEnv); i = i + 1)
    {
      req=wcstombs((char *)(void *)0, env[(signed long int)i], (unsigned long int)0);
      if(req == 18446744073709551615ul)
      {
        i = i - 1;
        for( ; i >= 1; i = i - 1)
          free((void *)cEnv[(signed long int)i]);
        free((void *)cEnv);
        for( ; sizeCmd >= 0; sizeCmd = sizeCmd - 1)
          free((void *)cCmd[(signed long int)sizeCmd]);
        free((void *)cCmd);
        return -1;
      }

      void *return_value_malloc_4;
      return_value_malloc_4=malloc(req + (unsigned long int)1);
      cEnv[(signed long int)i] = (char *)return_value_malloc_4;
      if(!(cEnv[(signed long int)i] == ((char *)NULL)))
        wcstombs(cEnv[(signed long int)i], env[(signed long int)i], req + (unsigned long int)1);

      else
      {
        i = i - 1;
        for( ; i >= 1; i = i - 1)
          free((void *)cEnv[(signed long int)i]);
        free((void *)cEnv);
        for( ; sizeCmd >= 0; sizeCmd = sizeCmd - 1)
          free((void *)cCmd[(signed long int)sizeCmd]);
        free((void *)cCmd);
        return -1;
      }
    }
    cEnv[(signed long int)sizeEnv] = ((char *)NULL);
    req=wcstombs((char *)(void *)0, arg, (unsigned long int)0);
    if(req == 18446744073709551615ul)
    {
      for( ; sizeEnv >= 0; sizeEnv = sizeEnv - 1)
        free((void *)cEnv[(signed long int)sizeEnv]);
      free((void *)cEnv);
      for( ; sizeCmd >= 0; sizeCmd = sizeCmd - 1)
        free((void *)cCmd[(signed long int)sizeCmd]);
      free((void *)cCmd);
      return -1;
    }

    void *return_value_malloc_5;
    return_value_malloc_5=malloc(req + (unsigned long int)1);
    cArg = (char *)return_value_malloc_5;
    if(!(cArg == ((char *)NULL)))
    {
      wcstombs(cArg, arg, req + (unsigned long int)1);
      i=execve(cArg, cCmd, cEnv);
      free((void *)cArg);
    }

    else
      i = -1;
    for( ; sizeEnv >= 0; sizeEnv = sizeEnv - 1)
      free((void *)cEnv[(signed long int)sizeEnv]);
    free((void *)cEnv);
    for( ; sizeCmd >= 0; sizeCmd = sizeCmd - 1)
      free((void *)cCmd[(signed long int)sizeCmd]);
    free((void *)cCmd);
    return i;
  }

  return -1;
}

// _texecvp
// file wrapper_i18n.h line 68
extern signed int _texecvp(signed int *arg, signed int **cmd)
{
  char **cCmd;
  char *cArg;
  signed int i;
  signed int size;
  unsigned long int req;
  i = 0;
  for( ; !(cmd[(signed long int)i] == ((signed int *)NULL)); i = i + 1)
    ;
  size = i;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)(i + 1) * sizeof(char *) /*8ul*/ );
  cCmd = (char **)return_value_malloc_1;
  if(!(cCmd == ((char **)NULL)))
  {
    i = 0;
    for( ; !(i >= size); i = i + 1)
    {
      req=wcstombs((char *)(void *)0, cmd[(signed long int)i], (unsigned long int)0);
      if(req == 18446744073709551615ul)
      {
        i = i - 1;
        for( ; i >= 1; i = i - 1)
          free((void *)cCmd[(signed long int)i]);
        free((void *)cCmd);
        return -1;
      }

      void *return_value_malloc_2;
      return_value_malloc_2=malloc(req + (unsigned long int)1);
      cCmd[(signed long int)i] = (char *)return_value_malloc_2;
      if(!(cCmd[(signed long int)i] == ((char *)NULL)))
        wcstombs(cCmd[(signed long int)i], cmd[(signed long int)i], req + (unsigned long int)1);

      else
      {
        i = i - 1;
        for( ; i >= 1; i = i - 1)
          free((void *)cCmd[(signed long int)i]);
        free((void *)cCmd);
        return -1;
      }
    }
    cCmd[(signed long int)size] = ((char *)NULL);
    req=wcstombs((char *)(void *)0, arg, (unsigned long int)0);
    if(req == 18446744073709551615ul)
    {
      for( ; size >= 0; size = size - 1)
        free((void *)cCmd[(signed long int)size]);
      free((void *)cCmd);
      return -1;
    }

    void *return_value_malloc_3;
    return_value_malloc_3=malloc(req + (unsigned long int)1);
    cArg = (char *)return_value_malloc_3;
    if(!(cArg == ((char *)NULL)))
    {
      wcstombs(cArg, arg, req + (unsigned long int)1);
      i=execvp(cArg, cCmd);
      free((void *)cArg);
    }

    else
      i = -1;
    for( ; size >= 0; size = size - 1)
      free((void *)cCmd[(signed long int)size]);
    free((void *)cCmd);
    return i;
  }

  return -1;
}

// _tfopen
// file wrapper_i18n.h line 180
extern struct _IO_FILE * _tfopen(const signed int *file, const signed int *mode)
{
  signed int sizeFile;
  signed int sizeMode;
  char *cFile;
  char *cMode;
  struct _IO_FILE *f = (struct _IO_FILE *)(void *)0;
  unsigned long int return_value_wcstombs_1;
  return_value_wcstombs_1=wcstombs((char *)(void *)0, (signed int *)file, (unsigned long int)0);
  sizeFile = (signed int)return_value_wcstombs_1;
  if((unsigned long int)sizeFile == 18446744073709551615ul)
    return (struct _IO_FILE *)(void *)0;

  else
  {
    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)(sizeFile + 1));
    cFile = (char *)return_value_malloc_2;
    if(!(cFile == ((char *)NULL)))
    {
      wcstombs(cFile, (signed int *)file, (unsigned long int)(sizeFile + 1));
      unsigned long int return_value_wcstombs_3;
      return_value_wcstombs_3=wcstombs((char *)(void *)0, (signed int *)mode, (unsigned long int)0);
      sizeMode = (signed int)return_value_wcstombs_3;
      if((unsigned long int)sizeMode == 18446744073709551615ul)
      {
        free((void *)cFile);
        return (struct _IO_FILE *)(void *)0;
      }

      void *return_value_malloc_4;
      return_value_malloc_4=malloc((unsigned long int)(sizeMode + 1));
      cMode = (char *)return_value_malloc_4;
      if(!(cMode == ((char *)NULL)))
      {
        wcstombs(cMode, (signed int *)mode, (unsigned long int)(sizeMode + 1));
        f=fopen(cFile, cMode);
        free((void *)cMode);
      }

      free((void *)cFile);
    }

    return f;
  }
}

// _tgetcwd
// file wrapper_i18n.h line 94
extern signed int * _tgetcwd(signed int *buf, unsigned long int size)
{
  char *cBuf;
  unsigned long int len;
  if(!(buf == ((signed int *)NULL)))
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(size);
    cBuf = (char *)return_value_malloc_1;
    if(!(cBuf == ((char *)NULL)))
    {
      char *return_value_getcwd_2;
      return_value_getcwd_2=getcwd(cBuf, size);
      if(!(return_value_getcwd_2 == ((char *)NULL)))
      {
        len=mbstowcs(buf, cBuf, size);
        if(len == 18446744073709551615ul)
        {
          free((void *)cBuf);
          return (signed int *)(void *)0;
        }

        buf[(signed long int)(size - (unsigned long int)1)] = 0;
        free((void *)cBuf);
        return buf;
      }

      free((void *)cBuf);
    }

  }

  return (signed int *)(void *)0;
}

// _tgetenv
// file wrapper_i18n.h line 194
extern signed int * _tgetenv(const signed int *name)
{
  char *cName;
  signed int *val;
  unsigned long int req;
  char *cVal;
  req=wcstombs((char *)(void *)0, name, (unsigned long int)0);
  if(req == 18446744073709551615ul)
    return (signed int *)(void *)0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(char) /*1ul*/  * (req + (unsigned long int)1));
    cName = (char *)return_value_malloc_1;
    if(!(cName == ((char *)NULL)))
    {
      wcstombs(cName, name, req + (unsigned long int)1);
      cVal=getenv(cName);
      free((void *)cName);
      if(cVal == ((char *)NULL))
        return (signed int *)(void *)0;

      req=mbstowcs((signed int *)(void *)0, cVal, (unsigned long int)0);
      if(req == 18446744073709551615ul)
        return (signed int *)(void *)0;

      void *return_value_malloc_2;
      return_value_malloc_2=malloc(sizeof(signed int) /*4ul*/  * (req + (unsigned long int)1));
      val = (signed int *)return_value_malloc_2;
      if(!(val == ((signed int *)NULL)))
      {
        mbstowcs(val, cVal, req + (unsigned long int)1);
        val[(signed long int)req] = 0;
        return val;
      }

    }

    return (signed int *)(void *)0;
  }
}

// _tmkfifo
// file wrapper_i18n.h line 69
extern signed int _tmkfifo(signed int *arg, unsigned int mode)
{
  unsigned long int size;
  char *cStr;
  signed int r = -1;
  size=wcstombs((char *)(void *)0, arg, (unsigned long int)0);
  if(size == 18446744073709551615ul)
    return r;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(size + (unsigned long int)1);
    cStr = (char *)return_value_malloc_1;
    if(!(cStr == ((char *)NULL)))
    {
      wcstombs(cStr, arg, size + (unsigned long int)1);
      r=mkfifo(cStr, mode);
      free((void *)cStr);
    }

    return r;
  }
}

// _topen
// file wrapper_i18n.h line 100
extern signed int _topen(const signed int *path, signed int oflag, unsigned int mode)
{
  char *cPath;
  signed int r;
  unsigned long int size;
  size=wcstombs((char *)(void *)0, path, (unsigned long int)0);
  if(size == 18446744073709551615ul)
    return -1;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(size + (unsigned long int)1);
    cPath = (char *)return_value_malloc_1;
    if(!(cPath == ((char *)NULL)))
    {
      wcstombs(cPath, path, size + (unsigned long int)1);
      r=open(cPath, oflag, mode);
      free((void *)cPath);
      return r;
    }

    else
      return -1;
  }
}

// _tpathconf
// file wrapper_i18n.c line 402
extern signed long int _tpathconf(const signed int *path, signed int name)
{
  char *cPath;
  unsigned long int req;
  signed long int retVal;
  req=wcstombs((char *)(void *)0, path, (unsigned long int)0);
  if(req == 18446744073709551615ul)
    return (signed long int)-1;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(req + (unsigned long int)1);
    cPath = (char *)return_value_malloc_1;
    if(!(cPath == ((char *)NULL)))
    {
      wcstombs(cPath, path, req + (unsigned long int)1);
      retVal=pathconf(cPath, name);
      free((void *)cPath);
      return retVal;
    }

    else
      return (signed long int)-1;
  }
}

// _tprintf
// file wrapper_i18n.h line 60
extern signed int _tprintf(const signed int *fmt, ...)
{
  signed int i;
  signed int flag;
  signed int *msg;
  void **args;
  signed int *return_value_wcsstr_8;
  return_value_wcsstr_8=wcsstr(fmt, L"%s");
  unsigned long int return_value_wcslen_4;
  unsigned long int return_value_wcslen_6;
  _Bool tmp_if_expr_5;
  if(!(return_value_wcsstr_8 == ((signed int *)NULL)))
  {
    unsigned long int return_value_wcslen_1;
    return_value_wcslen_1=wcslen(fmt);
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_1 + (unsigned long int)1));
    msg = (signed int *)return_value_malloc_2;
    if(!(msg == ((signed int *)NULL)))
    {
      unsigned long int return_value_wcslen_3;
      return_value_wcslen_3=wcslen(fmt);
      wcsncpy(msg, fmt, return_value_wcslen_3 + (unsigned long int)1);
      i = 0;
      do
      {
        return_value_wcslen_4=wcslen(fmt);
        if((unsigned long int)i >= return_value_wcslen_4)
          break;

        if(fmt[(signed long int)i] == 37)
        {
          return_value_wcslen_6=wcslen(fmt);
          if(!((unsigned long int)i >= return_value_wcslen_6))
          {
            if(fmt[(signed long int)(1 + i)] == 115)
            {
              if(i == 0)
                tmp_if_expr_5 = (_Bool)1;

              else
                tmp_if_expr_5 = fmt[(signed long int)(i - 1)] != 37 ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr_5)
              {
                msg[(signed long int)(i + 1)] = 83;
                i = i + 1;
              }

            }

          }

        }

        i = i + 1;
      }
      while((_Bool)1);
      unsigned long int return_value_wcslen_7;
      return_value_wcslen_7=wcslen(fmt);
      msg[(signed long int)return_value_wcslen_7] = 0;
    }

    flag = -1;
  }

  else
  {
    msg = (signed int *)fmt;
    flag = 0;
  }
  if(!(msg == ((signed int *)NULL)))
  {
    args = (void **)&fmt;
    i=vwprintf(msg, args);
    args = ((void **)NULL);
    if(flag == -1)
      free((void *)msg);

    return i;
  }

  else
    return -1;
}

// _treadlink
// file wrapper_i18n.c line 335
extern unsigned long int _treadlink(signed int *exe, signed int *fullPath, unsigned long int size)
{
  char *cExe;
  char *cFullPath;
  unsigned long int req;
  req=wcstombs((char *)(void *)0, exe, (unsigned long int)0);
  if(req == 18446744073709551615ul)
    return (unsigned long int)-1;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(req + (unsigned long int)1);
    cExe = (char *)return_value_malloc_1;
    if(!(cExe == ((char *)NULL)))
    {
      wcstombs(cExe, exe, req + (unsigned long int)1);
      void *return_value_malloc_2;
      return_value_malloc_2=malloc(size);
      cFullPath = (char *)return_value_malloc_2;
      if(!(cFullPath == ((char *)NULL)))
      {
        signed long int return_value_readlink_3;
        return_value_readlink_3=readlink(cExe, cFullPath, size);
        req = (unsigned long int)return_value_readlink_3;
        if(req == 18446744073709551615ul)
        {
          free((void *)cFullPath);
          free((void *)cExe);
          return (unsigned long int)-1;
        }

        req=mbstowcs(fullPath, cFullPath, size);
        if(req == 18446744073709551615ul)
        {
          free((void *)cFullPath);
          free((void *)cExe);
          return (unsigned long int)-1;
        }

        fullPath[(signed long int)(size - (unsigned long int)1)] = 0;
        free((void *)cFullPath);
        free((void *)cExe);
        return req * sizeof(signed int) /*4ul*/ ;
      }

      else
        free((void *)cExe);
    }

    return (unsigned long int)-1;
  }
}

// _trealpathN
// file wrapper_i18n.h line 135
extern signed int * _trealpathN(const signed int *fileName, signed int *resolvedName, unsigned long int resolvedNameSize)
{
  char *cFile;
  char resolved[4097l];
  signed int sizeFile;
  signed int req;
  char *returnVal;
  resolvedName[(signed long int)0] = 0;
  unsigned long int return_value_wcstombs_1;
  return_value_wcstombs_1=wcstombs((char *)(void *)0, fileName, (unsigned long int)0);
  sizeFile = (signed int)return_value_wcstombs_1;
  if((unsigned long int)sizeFile == 18446744073709551615ul)
    return (signed int *)(void *)0;

  else
  {
    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)(sizeFile + 1));
    cFile = (char *)return_value_malloc_2;
    if(!(cFile == ((char *)NULL)))
    {
      wcstombs(cFile, fileName, (unsigned long int)(sizeFile + 1));
      returnVal=realpath(cFile, resolved);
      free((void *)cFile);
      unsigned long int return_value_mbstowcs_3;
      return_value_mbstowcs_3=mbstowcs((signed int *)(void *)0, resolved, (unsigned long int)0);
      req = (signed int)return_value_mbstowcs_3;
      if((unsigned long int)req == 18446744073709551615ul)
      {
        resolvedName[(signed long int)0] = 0;
        return (signed int *)(void *)0;
      }

      mbstowcs(resolvedName, resolved, resolvedNameSize);
      resolvedName[(signed long int)(resolvedNameSize - (unsigned long int)1)] = 0;
      if(returnVal == ((char *)NULL))
        return (signed int *)(void *)0;

      else
        return resolvedName;
    }

    return (signed int *)(void *)0;
  }
}

// _tremove
// file wrapper_i18n.h line 215
extern signed int _tremove(const signed int *path)
{
  char *cPath;
  unsigned long int req;
  signed int result;
  req=wcstombs((char *)(void *)0, path, (unsigned long int)0);
  if(req == 18446744073709551615ul)
    return -1;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(req + (unsigned long int)1);
    cPath = (char *)return_value_malloc_1;
    if(!(cPath == ((char *)NULL)))
    {
      wcstombs(cPath, path, req + (unsigned long int)1);
      result=remove(cPath);
      free((void *)cPath);
      return result;
    }

    else
      return -1;
  }
}

// _trename
// file wrapper_i18n.h line 216
extern signed int _trename(const signed int *path, const signed int *to)
{
  char *cPath;
  char *cTo;
  unsigned long int req;
  signed int ret = -1;
  req=wcstombs((char *)(void *)0, path, (unsigned long int)0);
  if(req == 18446744073709551615ul)
    return ret;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(req + (unsigned long int)1);
    cPath = (char *)return_value_malloc_1;
    if(!(cPath == ((char *)NULL)))
    {
      wcstombs(cPath, path, req + (unsigned long int)1);
      req=wcstombs((char *)(void *)0, to, (unsigned long int)0);
      if(req == 18446744073709551615ul)
      {
        free((void *)cPath);
        return ret;
      }

      void *return_value_malloc_2;
      return_value_malloc_2=malloc(req + (unsigned long int)1);
      cTo = (char *)return_value_malloc_2;
      if(!(cTo == ((char *)NULL)))
      {
        wcstombs(cTo, to, req + (unsigned long int)1);
        ret=rename(cPath, cTo);
        free((void *)cTo);
      }

      free((void *)cPath);
    }

    return ret;
  }
}

// _tsetenv
// file wrapper_i18n.h line 106
extern signed int _tsetenv(const signed int *name, const signed int *value, signed int overwrite)
{
  signed int r = -1;
  unsigned long int size;
  char *cName;
  char *cValue;
  size=wcstombs((char *)(void *)0, (signed int *)name, (unsigned long int)0);
  if(size == 18446744073709551615ul)
    return -1;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(size + (unsigned long int)1);
    cName = (char *)return_value_malloc_1;
    if(!(cName == ((char *)NULL)))
    {
      wcstombs(cName, name, size + (unsigned long int)1);
      size=wcstombs((char *)(void *)0, (signed int *)value, (unsigned long int)0);
      if(size == 18446744073709551615ul)
      {
        free((void *)cName);
        return -1;
      }

      void *return_value_malloc_2;
      return_value_malloc_2=malloc(size + (unsigned long int)1);
      cValue = (char *)return_value_malloc_2;
      if(!(cValue == ((char *)NULL)))
      {
        wcstombs(cValue, value, size + (unsigned long int)1);
        r=setenv(cName, cValue, overwrite);
        free((void *)cValue);
      }

      free((void *)cName);
    }

    return r;
  }
}

// _tsetlocale
// file wrapper_i18n.h line 220
extern signed int * _tsetlocale(signed int category, const signed int *locale)
{
  char *cLocale;
  char *cReturn;
  signed int *tReturn;
  unsigned long int req;
  req=wcstombs((char *)(void *)0, locale, (unsigned long int)0);
  if(req == 18446744073709551615ul)
    return (signed int *)(void *)0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(char) /*1ul*/  * (req + (unsigned long int)1));
    cLocale = (char *)return_value_malloc_1;
    if(!(cLocale == ((char *)NULL)))
    {
      wcstombs(cLocale, locale, req + (unsigned long int)1);
      cReturn=setlocale(category, cLocale);
      free((void *)cLocale);
      if(!(cReturn == ((char *)NULL)))
      {
        req=mbstowcs((signed int *)(void *)0, cReturn, (unsigned long int)0);
        if(!(req == 18446744073709551615ul))
        {
          void *return_value_malloc_2;
          return_value_malloc_2=malloc(sizeof(signed int) /*4ul*/  * (req + (unsigned long int)1));
          tReturn = (signed int *)return_value_malloc_2;
          if(!(tReturn == ((signed int *)NULL)))
          {
            mbstowcs(tReturn, cReturn, req + (unsigned long int)1);
            tReturn[(signed long int)req] = 0;
            return tReturn;
          }

        }

      }

    }

    return (signed int *)(void *)0;
  }
}

// _tstat
// file wrapper_i18n.h line 125
extern signed int _tstat(const signed int *filename, struct stat *buf)
{
  signed int size;
  char *cFileName;
  unsigned long int return_value_wcstombs_1;
  return_value_wcstombs_1=wcstombs((char *)(void *)0, (signed int *)filename, (unsigned long int)0);
  size = (signed int)return_value_wcstombs_1;
  if((unsigned long int)size == 18446744073709551615ul)
    return -1;

  else
  {
    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)(size + 1));
    cFileName = (char *)return_value_malloc_2;
    if(!(cFileName == ((char *)NULL)))
    {
      wcstombs(cFileName, (signed int *)filename, (unsigned long int)(size + 1));
      size=stat(cFileName, buf);
      free((void *)cFileName);
    }

    return size;
  }
}

// _tsyslog
// file wrapper_i18n.h line 218
extern void _tsyslog(signed int priority, const signed int *message)
{
  char *cMessage;
  unsigned long int req;
  req=wcstombs((char *)(void *)0, message, (unsigned long int)0);
  if(!(req == 18446744073709551615ul))
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(req + (unsigned long int)1);
    cMessage = (char *)return_value_malloc_1;
    if(!(cMessage == ((char *)NULL)))
    {
      wcstombs(cMessage, message, req + (unsigned long int)1);
      syslog(priority, "%s", cMessage);
      free((void *)cMessage);
    }

  }

}

// _tunlink
// file wrapper_i18n.h line 162
extern signed int _tunlink(const signed int *address)
{
  signed int size;
  char *cAddress;
  unsigned long int return_value_wcstombs_1;
  return_value_wcstombs_1=wcstombs((char *)(void *)0, (signed int *)address, (unsigned long int)0);
  size = (signed int)return_value_wcstombs_1;
  if((unsigned long int)size == 18446744073709551615ul)
    return -1;

  else
  {
    void *return_value_malloc_2;
    return_value_malloc_2=malloc((unsigned long int)(size + 1));
    cAddress = (char *)return_value_malloc_2;
    if(!(cAddress == ((char *)NULL)))
    {
      wcstombs(cAddress, (signed int *)address, (unsigned long int)(size + 1));
      size=unlink(cAddress);
      free((void *)cAddress);
      return size;
    }

    else
      return -1;
  }
}

// _tunsetenv
// file wrapper_i18n.h line 107
extern void _tunsetenv(const signed int *name)
{
  unsigned long int size;
  char *cName;
  size=wcstombs((char *)(void *)0, (signed int *)name, (unsigned long int)0);
  if(!(size == 18446744073709551615ul))
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(size + (unsigned long int)1);
    cName = (char *)return_value_malloc_1;
    if(!(cName == ((char *)NULL)))
    {
      wcstombs(cName, name, size + (unsigned long int)1);
      unsetenv(cName);
      free((void *)cName);
    }

  }

}

// addProperty
// file property.c line 1122
extern struct Property * addProperty(struct Properties *properties, const signed int *filename, signed int lineNum, const signed int *propertyName, const signed int *propertyValue, signed int finalValue, signed int quotable, signed int escapable, signed int internal)
{
  signed int setValue;
  struct Property *property;
  signed int *oldVal;
  signed int *propertyNameTrim;
  signed int *propertyValueTrim;
  signed int *propertyExpandedValue;
  unsigned long int return_value_wcslen_1;
  return_value_wcslen_1=wcslen(propertyName);
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_1 + (unsigned long int)1));
  propertyNameTrim = (signed int *)return_value_malloc_2;
  const signed int *tmp_if_expr_8;
  const signed int *tmp_if_expr_9;
  const signed int *tmp_if_expr_10;
  _Bool tmp_if_expr_12;
  signed int return_value_isEscapedProperty_11;
  _Bool tmp_if_expr_17;
  signed int *return_value_wcsstr_16;
  unsigned long int return_value_wcslen_14;
  signed int *return_value_wcsstr_13;
  if(propertyNameTrim == ((signed int *)NULL))
  {
    outOfMemory(L"AP", 1);
    return (struct Property *)(void *)0;
  }

  else
  {
    trim(propertyName, propertyNameTrim);
    unsigned long int return_value_wcslen_3;
    return_value_wcslen_3=wcslen(propertyValue);
    void *return_value_malloc_4;
    return_value_malloc_4=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_3 + (unsigned long int)1));
    propertyValueTrim = (signed int *)return_value_malloc_4;
    if(propertyValueTrim == ((signed int *)NULL))
    {
      outOfMemory(L"AP", 4);
      free((void *)propertyNameTrim);
      return (struct Property *)(void *)0;
    }

    else
    {
      trim(propertyValue, propertyValueTrim);
      setValue = -1;
      property=getInnerProperty(properties, propertyNameTrim, 0);
      if(property == ((struct Property *)NULL))
      {
        property=createInnerProperty();
        if(property == ((struct Property *)NULL))
        {
          free((void *)propertyNameTrim);
          free((void *)propertyValueTrim);
          return (struct Property *)(void *)0;
        }

        unsigned long int return_value_wcslen_5;
        return_value_wcslen_5=wcslen(propertyNameTrim);
        void *return_value_malloc_6;
        return_value_malloc_6=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_5 + (unsigned long int)1));
        property->name = (signed int *)return_value_malloc_6;
        if(property->name == ((signed int *)NULL))
        {
          outOfMemory(L"AP", 3);
          disposeInnerProperty(property);
          free((void *)propertyNameTrim);
          free((void *)propertyValueTrim);
          return (struct Property *)(void *)0;
        }

        unsigned long int return_value_wcslen_7;
        return_value_wcslen_7=wcslen(propertyNameTrim);
        wcsncpy(property->name, propertyNameTrim, return_value_wcslen_7 + (unsigned long int)1);
        insertInnerProperty(properties, property);
      }

      else
        if(!(property->internal == 0))
        {
          setValue = 0;
          if(!(properties->debugProperties == 0))
          {
            if(!(filename == ((const signed int *)NULL)))
              tmp_if_expr_8 = filename;

            else
              tmp_if_expr_8 = L"<NULL>";
            log_printf(-1, 3, L"The \"%s\" property is defined by the Wrapper internally and can not be overwritten.\n  Ignoring redefinition on line #%d of configuration file: %s\n  Fixed Value %s=%s\n  Ignored Value %s=%s", propertyNameTrim, lineNum, tmp_if_expr_8, propertyNameTrim, property->value, propertyNameTrim, propertyValueTrim);
          }

        }

        else
          if(!(property->finalValue == 0))
          {
            setValue = 0;
            if(!(properties->debugProperties == 0))
            {
              if(!(filename == ((const signed int *)NULL)))
                tmp_if_expr_9 = filename;

              else
                tmp_if_expr_9 = L"<NULL>";
              log_printf(-1, 3, L"The \"%s\" property was defined on the Wrapper command line and can not be overwritten.\n  Ignoring redefinition on line #%d of configuration file: %s\n  Fixed Value %s=%s\n  Ignored Value %s=%s", propertyNameTrim, lineNum, tmp_if_expr_9, propertyNameTrim, property->value, propertyNameTrim, propertyValueTrim);
            }

          }

          else
            if(!(properties->debugProperties == 0))
            {
              if(!(filename == ((const signed int *)NULL)))
                tmp_if_expr_10 = filename;

              else
                tmp_if_expr_10 = L"<NULL>";
              log_printf(-1, 3, L"The \"%s\" property was redefined on line #%d of configuration file: %s\n  Old Value %s=%s\n  New Value %s=%s", propertyNameTrim, lineNum, tmp_if_expr_10, propertyNameTrim, property->value, propertyNameTrim, propertyValueTrim);
            }

      free((void *)propertyNameTrim);
      if(!(setValue == 0))
      {
        if(!(escapable == 0))
        {
          return_value_isEscapedProperty_11=isEscapedProperty(property->name);
          tmp_if_expr_12 = return_value_isEscapedProperty_11 != 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_12 = (_Bool)0;
        if(tmp_if_expr_12)
        {
          propertyExpandedValue=expandEscapedCharacters(propertyValueTrim);
          if(propertyExpandedValue == ((signed int *)NULL))
          {
            free((void *)propertyValueTrim);
            return (struct Property *)(void *)0;
          }

          setInnerProperty(properties, property, propertyExpandedValue, 0);
          free((void *)propertyExpandedValue);
        }

        else
          setInnerProperty(properties, property, propertyValueTrim, 0);
        if(property->value == ((signed int *)NULL))
        {
          free((void *)propertyValueTrim);
          return (struct Property *)(void *)0;
        }

        property->finalValue = finalValue;
        property->quotable = quotable;
        property->internal = internal;
        prepareProperty(properties, property, 0);
        unsigned long int return_value_wcslen_15;
        return_value_wcslen_15=wcslen(property->name);
        if(return_value_wcslen_15 >= 13ul)
        {
          return_value_wcsstr_16=wcsstr(property->name, L"set.default.");
          tmp_if_expr_17 = return_value_wcsstr_16 == property->name ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_17 = (_Bool)0;
        if(tmp_if_expr_17)
        {
          oldVal=_tgetenv(property->name + (signed long int)12);
          if(oldVal == ((signed int *)NULL))
            setEnv(property->name + (signed long int)12, property->value, internal != 0 ? 2 : 4);

          else
            free((void *)oldVal);
        }

        else
        {
          return_value_wcslen_14=wcslen(property->name);
          if(return_value_wcslen_14 >= 5ul)
          {
            return_value_wcsstr_13=wcsstr(property->name, L"set.");
            if(return_value_wcsstr_13 == property->name)
              setEnv(property->name + (signed long int)4, property->value, internal != 0 ? 2 : 4);

          }

        }
      }

      free((void *)propertyValueTrim);
      return property;
    }
  }
}

// addPropertyPair
// file property.h line 224
extern signed int addPropertyPair(struct Properties *properties, const signed int *filename, signed int lineNum, const signed int *propertyNameValue, signed int finalValue, signed int quotable, signed int internal)
{
  signed int buffer[16897l];
  signed int *d;
  unsigned long int return_value_wcslen_1;
  return_value_wcslen_1=wcslen(propertyNameValue);
  if(1ul + return_value_wcslen_1 >= 16897ul)
  {
    log_printf(-1, 6, L"The following property name value pair is too large.  Need to increase the internal buffer size: %s", propertyNameValue);
    return 1;
  }

  else
  {
    wcsncpy(buffer, propertyNameValue, (unsigned long int)(512 + 1 + 16384));
    d=wcschr(buffer, 61);
    if(!(d == ((signed int *)NULL)))
    {
      *d = 0;
      d = d + 1l;
      struct Property *return_value_addProperty_2;
      return_value_addProperty_2=addProperty(properties, filename, lineNum, buffer, d, finalValue, quotable, 0, internal);
      if(!(return_value_addProperty_2 == ((struct Property *)NULL)))
        return 0;

      else
        return 1;
    }

    else
      return 1;
  }
}

// anchorPoll
// file wrappereventloop.c line 369
void anchorPoll(unsigned int nowTicks)
{
  struct stat fileStat;
  signed int result;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_11;
  if(!(wrapperData->anchorFilename == ((signed int *)NULL)))
  {
    signed int return_value_wrapperTickExpired_12;
    return_value_wrapperTickExpired_12=wrapperTickExpired(nowTicks, wrapperData->anchorTimeoutTicks);
    if(!(return_value_wrapperTickExpired_12 == 0))
    {
      if(!(wrapperData->isLoopOutputEnabled == 0))
        log_printf(-1, 3, L"    Loop: check anchor file");

      result=_tstat(wrapperData->anchorFilename, &fileStat);
      if(!(result == 0))
      {
        if(!(wrapperData->exitRequested == 0))
          tmp_if_expr_1 = (_Bool)1;

        else
          tmp_if_expr_1 = wrapperData->restartRequested != 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_1)
          tmp_if_expr_2 = (_Bool)1;

        else
          tmp_if_expr_2 = wrapperData->jState == 80 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_2)
          tmp_if_expr_3 = (_Bool)1;

        else
          tmp_if_expr_3 = wrapperData->jState == 81 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_3)
          tmp_if_expr_4 = (_Bool)1;

        else
          tmp_if_expr_4 = wrapperData->jState == 82 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_4)
          tmp_if_expr_5 = (_Bool)1;

        else
          tmp_if_expr_5 = wrapperData->jState == 83 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_5)
          tmp_if_expr_6 = (_Bool)1;

        else
          tmp_if_expr_6 = wrapperData->jState == 84 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_6)
          tmp_if_expr_7 = (_Bool)1;

        else
          tmp_if_expr_7 = wrapperData->jState == 85 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_7)
          tmp_if_expr_8 = (_Bool)1;

        else
          tmp_if_expr_8 = wrapperData->jState == 70 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_8)
          tmp_if_expr_9 = (_Bool)1;

        else
          tmp_if_expr_9 = wrapperData->jState == 71 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_9)
          tmp_if_expr_10 = (_Bool)1;

        else
          tmp_if_expr_10 = wrapperData->jState == 72 ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr_10)
          wrapperStopProcess(0, -1);

        if(wrapperData->wState == 56)
          tmp_if_expr_11 = (_Bool)1;

        else
          tmp_if_expr_11 = wrapperData->wState == 57 ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr_11)
        {
          log_printf(-1, 3, L"Anchor file deleted.  Shutting down.");
          wrapperSetWrapperState(56);
        }

      }

      wrapperData->anchorTimeoutTicks=wrapperAddToTicks(nowTicks, wrapperData->anchorPollInterval);
    }

  }

}

// appExit
// file wrapper_unix.c line 118
void appExit(signed int exitCode, signed int argc, signed int **argv)
{
  signed int i;
  if(!(wrapperData->pidFilename == ((signed int *)NULL)))
    _tunlink(wrapperData->pidFilename);

  if(!(wrapperData->lockFilename == ((signed int *)NULL)))
    _tunlink(wrapperData->lockFilename);

  if(!(wrapperData->statusFilename == ((signed int *)NULL)))
    _tunlink(wrapperData->statusFilename);

  if(!(wrapperData->javaStatusFilename == ((signed int *)NULL)))
    _tunlink(wrapperData->javaStatusFilename);

  if(!(wrapperData->javaIdFilename == ((signed int *)NULL)))
    _tunlink(wrapperData->javaIdFilename);

  if(!(wrapperData->anchorFilename == ((signed int *)NULL)))
    _tunlink(wrapperData->anchorFilename);

  wrapperDispose();
  i = 0;
  for( ; !(i >= argc); i = i + 1)
    if(!(argv[(signed long int)i] == ((signed int *)NULL)))
      free((void *)argv[(signed long int)i]);

  if(!(argv == ((signed int **)NULL)))
    free((void *)argv);

  exit(exitCode);
}

// buildPrintBuffer
// file logger.c line 1295
signed int * buildPrintBuffer(signed int source_id, signed int level, signed int threadId, signed int queued, struct tm *nowTM, signed int nowMillis, signed long int durationMillis, const signed int *format, const signed int *defaultFormat, const signed int *message)
{
  signed int i;
  unsigned long int reqSize;
  signed int numColumns;
  signed int *pos;
  signed int currentColumn;
  signed int handledFormat;
  signed int temp;
  signed int len;
  reqSize = (unsigned long int)0;
  i = 0;
  numColumns = 0;
  unsigned long int return_value_wcslen_1;
  unsigned long int return_value_wcslen_2;
  do
  {
    return_value_wcslen_1=wcslen(format);
    if(i >= (signed int)return_value_wcslen_1)
      break;

    switch(format[(signed long int)i])
    {
      case 80:

      case 112:
      {
        reqSize = reqSize + (unsigned long int)(8 + 3);
        numColumns = numColumns + 1;
        goto __CPROVER_DUMP_L12;
      }
      case 76:

      case 108:
      {
        reqSize = reqSize + (unsigned long int)(6 + 3);
        numColumns = numColumns + 1;
        goto __CPROVER_DUMP_L12;
      }
      case 68:

      case 100:
      {
        reqSize = reqSize + (unsigned long int)(7 + 3);
        numColumns = numColumns + 1;
        goto __CPROVER_DUMP_L12;
      }
      case 81:

      case 113:
      {
        reqSize = reqSize + (unsigned long int)(1 + 3);
        numColumns = numColumns + 1;
        goto __CPROVER_DUMP_L12;
      }
      case 84:

      case 116:
      {
        reqSize = reqSize + (unsigned long int)(19 + 3);
        numColumns = numColumns + 1;
        goto __CPROVER_DUMP_L12;
      }
      case 90:

      case 122:
      {
        reqSize = reqSize + (unsigned long int)(23 + 3);
        numColumns = numColumns + 1;
        goto __CPROVER_DUMP_L12;
      }
      case 85:

      case 117:
      {
        reqSize = reqSize + (unsigned long int)(8 + 3);
        numColumns = numColumns + 1;
        goto __CPROVER_DUMP_L12;
      }
      case 82:

      case 114:
      {
        reqSize = reqSize + (unsigned long int)(8 + 3);
        numColumns = numColumns + 1;
        goto __CPROVER_DUMP_L12;
      }
      case 71:

      case 103:
      {
        reqSize = reqSize + (unsigned long int)(10 + 3);
        numColumns = numColumns + 1;
        goto __CPROVER_DUMP_L12;
      }
      case 77:

      case 109:
      {
        return_value_wcslen_2=wcslen(message);
        reqSize = reqSize + return_value_wcslen_2 + (unsigned long int)3;
        numColumns = numColumns + 1;
      }
      default:
      {

      __CPROVER_DUMP_L12:
        ;
        i = i + 1;
      }
    }
  }
  while((_Bool)1);
  if(reqSize == 0ul && !(defaultFormat == ((const signed int *)NULL)))
  {
    signed int *return_value_buildPrintBuffer_3;
    return_value_buildPrintBuffer_3=buildPrintBuffer(source_id, level, threadId, queued, nowTM, nowMillis, durationMillis, defaultFormat, (const signed int *)(void *)0, message);
    return return_value_buildPrintBuffer_3;
  }

  reqSize = reqSize + (unsigned long int)1;
  signed int *return_value_preparePrintBuffer_4;
  return_value_preparePrintBuffer_4=preparePrintBuffer(reqSize);
  unsigned long int return_value_wcslen_5;
  if(return_value_preparePrintBuffer_4 == ((signed int *)NULL))
    return (signed int *)(void *)0;

  else
  {
    threadPrintBuffer[(signed long int)0] = 0;
    pos = threadPrintBuffer;
    i = 0;
    currentColumn = 0;
    len = 0;
    temp = 0;
    do
    {
      return_value_wcslen_5=wcslen(format);
      if(i >= (signed int)return_value_wcslen_5)
        break;

      handledFormat = -1;
      switch(format[(signed long int)i])
      {
        case 80:

        case 112:
        {
          if(!(source_id == -1))
          {
            if(source_id == -2)
              goto __CPROVER_DUMP_L19;

          }

          else
          {
            temp=_sntprintf(pos, reqSize - (unsigned long int)len, L"wrapper ");
            goto __CPROVER_DUMP_L21;

          __CPROVER_DUMP_L19:
            ;
            temp=_sntprintf(pos, reqSize - (unsigned long int)len, L"wrapperp");
            goto __CPROVER_DUMP_L21;
          }
          temp=_sntprintf(pos, reqSize - (unsigned long int)len, L"jvm %-4d", source_id);

        __CPROVER_DUMP_L21:
          ;
          currentColumn = currentColumn + 1;
          break;
        }
        case 76:

        case 108:
        {
          temp=_sntprintf(pos, reqSize - (unsigned long int)len, L"%s", logLevelNames[(signed long int)level]);
          currentColumn = currentColumn + 1;
          break;
        }
        case 68:

        case 100:
        {
          switch(threadId)
          {
            case 0:
            {
              temp=_sntprintf(pos, reqSize - (unsigned long int)len, L"signal ");
              break;
            }
            case 1:
            {
              temp=_sntprintf(pos, reqSize - (unsigned long int)len, L"main   ");
              break;
            }
            case 2:
            {
              temp=_sntprintf(pos, reqSize - (unsigned long int)len, L"srvmain");
              break;
            }
            case 3:
            {
              temp=_sntprintf(pos, reqSize - (unsigned long int)len, L"timer  ");
              break;
            }
            case 4:
            {
              temp=_sntprintf(pos, reqSize - (unsigned long int)len, L"javaio ");
              break;
            }
            case 5:
            {
              temp=_sntprintf(pos, reqSize - (unsigned long int)len, L"startup");
              break;
            }
            default:
              temp=_sntprintf(pos, reqSize - (unsigned long int)len, L"unknown");
          }
          currentColumn = currentColumn + 1;
          break;
        }
        case 81:

        case 113:
        {
          temp=_sntprintf(pos, reqSize - (unsigned long int)len, L"%c", queued != 0 ? 81 : 32);
          currentColumn = currentColumn + 1;
          break;
        }
        case 84:

        case 116:
        {
          temp=_sntprintf(pos, reqSize - (unsigned long int)len, L"%04d/%02d/%02d %02d:%02d:%02d", nowTM->tm_year + 1900, nowTM->tm_mon + 1, nowTM->tm_mday, nowTM->tm_hour, nowTM->tm_min, nowTM->tm_sec);
          currentColumn = currentColumn + 1;
          break;
        }
        case 90:

        case 122:
        {
          temp=_sntprintf(pos, reqSize - (unsigned long int)len, L"%04d/%02d/%02d %02d:%02d:%02d.%03d", nowTM->tm_year + 1900, nowTM->tm_mon + 1, nowTM->tm_mday, nowTM->tm_hour, nowTM->tm_min, nowTM->tm_sec, nowMillis);
          currentColumn = currentColumn + 1;
          break;
        }
        case 85:

        case 117:
        {
          if(!(uptimeFlipped == 0))
            temp=_sntprintf(pos, reqSize - (unsigned long int)len, L"--------");

          else
            temp=_sntprintf(pos, reqSize - (unsigned long int)len, L"%8d", uptimeSeconds);
          currentColumn = currentColumn + 1;
          break;
        }
        case 82:

        case 114:
        {
          if(durationMillis == -1l)
            temp=_sntprintf(pos, reqSize - (unsigned long int)len, L"        ");

          else
            if(durationMillis >= 100000000l)
              temp=_sntprintf(pos, reqSize - (unsigned long int)len, L"99999999");

            else
              temp=_sntprintf(pos, reqSize - (unsigned long int)len, L"%8d", durationMillis);
          currentColumn = currentColumn + 1;
          break;
        }
        case 71:

        case 103:
        {
          temp=_sntprintf(pos, reqSize - (unsigned long int)len, L"%8d", previousLogLag < (signed long int)99999999 ? previousLogLag : (signed long int)99999999);
          currentColumn = currentColumn + 1;
          break;
        }
        case 77:

        case 109:
        {
          temp=_sntprintf(pos, reqSize - (unsigned long int)len, L"%s", message);
          currentColumn = currentColumn + 1;
          break;
        }
        default:
          handledFormat = 0;
      }
      if(!(handledFormat == 0))
      {
        pos = pos + (signed long int)temp;
        len = len + temp;
        if(!(currentColumn == numColumns))
        {
          temp=_sntprintf(pos, reqSize - (unsigned long int)len, L" | ");
          pos = pos + (signed long int)temp;
          len = len + temp;
        }

      }

      i = i + 1;
    }
    while((_Bool)1);
    return threadPrintBuffer;
  }
}

// checkAndRollLogs
// file logger.c line 3102
void checkAndRollLogs(const signed int *nowDate)
{
  signed long int position;
  struct stat fileStat;
  signed int return_value_getLastError_3;
  if(!((2 & logFileRollMode) == 0))
  {
    if(!(logFileMaxSize >= 1))
      goto __CPROVER_DUMP_L17;

    if(!(logfileFP == ((struct _IO_FILE *)NULL)))
    {
      position=ftell(logfileFP);
      if(!(position >= 0l))
      {
        const signed int *return_value_getLastErrorText_1;
        return_value_getLastErrorText_1=getLastErrorText();
        _tprintf(L"Unable to get the current logfile size with ftell: %s\n", return_value_getLastErrorText_1);
        goto __CPROVER_DUMP_L17;
      }

    }

    else
    {
      signed int return_value__tstat_5;
      return_value__tstat_5=_tstat(logFilePath, &fileStat);
      if(!(return_value__tstat_5 == 0))
      {
        signed int return_value_getLastError_4;
        return_value_getLastError_4=getLastError();
        if(return_value_getLastError_4 == 2)
          position = (signed long int)0;

        else
        {
          return_value_getLastError_3=getLastError();
          if(return_value_getLastError_3 == 3)
            position = (signed long int)0;

          else
          {
            const signed int *return_value_getLastErrorText_2;
            return_value_getLastErrorText_2=getLastErrorText();
            _tprintf(L"Unable to get the current logfile size with stat: %s\n", return_value_getLastErrorText_2);
            goto __CPROVER_DUMP_L17;
          }
        }
      }

      else
        position = fileStat.st_size;
    }
    if(position >= (signed long int)logFileMaxSize)
      rollLogs();

  }

  else
    if(!((16 & logFileRollMode) == 0))
    {
      signed int return_value_wcscmp_6;
      return_value_wcscmp_6=wcscmp(nowDate, logFileLastNowDate);
      if(!(return_value_wcscmp_6 == 0))
      {
        if(!(logfileFP == ((struct _IO_FILE *)NULL)))
        {
          fclose(logfileFP);
          logfileFP = (struct _IO_FILE *)(void *)0;
        }

        currentLogFileName[(signed long int)0] = 0;
        if(logFileMaxLogFiles >= 1)
        {
          generateLogFileName(currentLogFileName, currentLogFileNameSize, logFilePath, nowDate, (const signed int *)(void *)0);
          if(!(logFilePurgePattern == ((signed int *)NULL)))
            limitLogFileCount(currentLogFileName, logFilePurgePattern, logFilePurgeSortMode, logFileMaxLogFiles + 1);

          else
          {
            generateLogFileName(workLogFileName, currentLogFileNameSize, logFilePath, L"????????", (const signed int *)(void *)0);
            limitLogFileCount(currentLogFileName, workLogFileName, 102, logFileMaxLogFiles + 1);
          }
          currentLogFileName[(signed long int)0] = 0;
          workLogFileName[(signed long int)0] = 0;
        }

      }

    }


__CPROVER_DUMP_L17:
  ;
}

// checkForTestWrapperScripts
// file wrapper.c line 4217
signed int checkForTestWrapperScripts()
{
  const signed int *prop;
  prop=getStringProperty(properties, L"wrapper.java.mainclass", (const signed int *)(void *)0);
  signed int return_value_wcscmp_1;
  if(!(prop == ((const signed int *)NULL)))
  {
    signed int return_value_wcscmp_3;
    return_value_wcscmp_3=wcscmp(prop, L"org.tanukisoftware.wrapper.test.Main");
    if(!(return_value_wcscmp_3 == 0))
    {
      prop=getStringProperty(properties, L"wrapper.app.parameter.2", (const signed int *)(void *)0);
      if(!(prop == ((const signed int *)NULL)))
      {
        signed int return_value_wcscmp_2;
        return_value_wcscmp_2=wcscmp(prop, L"{{TestWrapperBat}}");
        if(return_value_wcscmp_2 == 0)
        {
          log_printf(-1, 5, L"");
          log_printf(-1, 5, L"--------------------------------------------------------------------");
          log_printf(-1, 5, L"We have detected that you are making use of the sample batch files\nthat are designed for the TestWrapper Example Application.  When\nsetting up your own application, please copy fresh files over from\nthe Wrapper's src\\bin directory.");
          log_printf(-1, 5, L"");
          log_printf(-1, 5, L"Shutting down as this will likely cause problems with your\napplication startup.");
          log_printf(-1, 5, L"");
          log_printf(-1, 5, L"Please see the integration section of the documentation for more\ninformation.");
          log_printf(-1, 5, L"  http://wrapper.tanukisoftware.com/integrate");
          log_printf(-1, 5, L"--------------------------------------------------------------------");
          return -1;
        }

        else
        {
          return_value_wcscmp_1=wcscmp(prop, L"{{TestWrapperSh}}");
          if(return_value_wcscmp_1 == 0)
          {
            log_printf(-1, 5, L"");
            log_printf(-1, 5, L"--------------------------------------------------------------------");
            log_printf(-1, 5, L"We have detected that you are making use of the sample shell scripts\nthat are designed for the TestWrapper Example Application.  When\nsetting up your own application, please copy fresh files over from\nthe Wrapper's src/bin directory.");
            log_printf(-1, 5, L"");
            log_printf(-1, 5, L"Shutting down as this will likely cause problems with your\napplication startup.");
            log_printf(-1, 5, L"");
            log_printf(-1, 5, L"Please see the integration section of the documentation for more\ninformation.");
            log_printf(-1, 5, L"  http://wrapper.tanukisoftware.com/integrate");
            log_printf(-1, 5, L"--------------------------------------------------------------------");
            return -1;
          }

        }
      }

    }

  }

  return 0;
}

// checkIfBinary
// file wrapper.c line 5170
signed int checkIfBinary(const signed int *filename)
{
  struct _IO_FILE *f;
  unsigned char head[5l];
  signed int r;
  f=_tfopen(filename, L"rb");
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  if(f == ((struct _IO_FILE *)NULL))
    return 1;

  else
  {
    unsigned long int return_value_fread_1;
    return_value_fread_1=fread((void *)head, (unsigned long int)1, (unsigned long int)4, f);
    r = (signed int)return_value_fread_1;
    if(!(r == 4))
    {
      fclose(f);
      return 0;
    }

    fclose(f);
    head[(signed long int)4] = (unsigned char)0;
    if(!(wrapperData->isDebugging == 0))
      log_printf(-1, 1, L"Magic number for file %s: 0x%02x%02x%02x%02x", filename, head[(signed long int)0], head[(signed long int)1], head[(signed long int)2], head[(signed long int)3]);

    if((signed int)head[1l] == 69)
      tmp_if_expr_2 = (signed int)head[(signed long int)2] == 76 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
      tmp_if_expr_3 = (signed int)head[(signed long int)3] == 70 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_3 = (_Bool)0;
    if(tmp_if_expr_3)
      return 1;

    else
      return 0;
  }
}

// checkIfExecutable
// file wrapper.c line 5144
signed int checkIfExecutable(const signed int *filename)
{
  signed int result;
  struct stat statInfo;
  result=_tstat(filename, &statInfo);
  if(!(result >= 0))
    return 0;

  else
    if(!((61440u & statInfo.st_mode) == 32768u))
      return 0;

    else
    {
      unsigned int return_value_geteuid_1;
      return_value_geteuid_1=geteuid();
      if(statInfo.st_uid == return_value_geteuid_1)
        return (signed int)(statInfo.st_mode & (unsigned int)0100);

      else
      {
        unsigned int return_value_getegid_2;
        return_value_getegid_2=getegid();
        if(statInfo.st_gid == return_value_getegid_2)
          return (signed int)(statInfo.st_mode & (unsigned int)(0100 >> 3));

        else
          return (signed int)(statInfo.st_mode & (unsigned int)((0100 >> 3) >> 3));
      }
    }
}

// checkIfRegularExe
// file wrapper.c line 5371
void checkIfRegularExe(signed int **para)
{
  signed int *path;
  signed int replacePath;
  path=findPathOf(*para, L"wrapper.java.command");
  if(path == ((signed int *)NULL))
    log_printf(-1, 4, L"The configured wrapper.java.command could not be found, attempting to launch anyway: %s", *para);

  else
  {
    replacePath=getBooleanProperty(properties, L"wrapper.java.command.resolve", -1);
    if(replacePath == -1)
    {
      free((void *)*para);
      unsigned long int return_value_wcslen_1;
      return_value_wcslen_1=wcslen(path);
      void *return_value_malloc_2;
      return_value_malloc_2=malloc((return_value_wcslen_1 + (unsigned long int)1) * sizeof(signed int) /*4ul*/ );
      *para = (signed int *)return_value_malloc_2;
      if(*para == ((signed int *)NULL))
      {
        outOfMemory(L"CIRE", 2);
        free((void *)path);
        goto __CPROVER_DUMP_L6;
      }

      unsigned long int return_value_wcslen_3;
      return_value_wcslen_3=wcslen(path);
      wcsncpy(*para, path, return_value_wcslen_3 + (unsigned long int)1);
    }

    signed int return_value_checkIfBinary_4;
    return_value_checkIfBinary_4=checkIfBinary(path);
    if(return_value_checkIfBinary_4 == 0)
    {
      log_printf(-1, 4, L"The value of wrapper.java.command does not appear to be a java binary.");
      log_printf(-1, 4, L"The use of scripts is not supported. Trying to continue, but some features may not work correctly..");
    }

    free((void *)path);
  }

__CPROVER_DUMP_L6:
  ;
}

// checkLogfileDir
// file logger.h line 203
extern signed int checkLogfileDir()
{
  unsigned long int len;
  signed int *c;
  signed int *logFileDir;
  signed int *testfile;
  signed int fd;
  unsigned long int return_value_wcslen_1;
  return_value_wcslen_1=wcslen(logFilePath);
  len = return_value_wcslen_1 + (unsigned long int)1;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(len * sizeof(signed int) /*4ul*/ );
  logFileDir = (signed int *)return_value_malloc_2;
  signed int *return_value___errno_location_9;
  if(logFileDir == ((signed int *)NULL))
  {
    outOfMemory(L"CLD", 1);
    return -1;
  }

  else
  {
    wcsncpy(logFileDir, logFilePath, len);
    c=wcsrchr(logFileDir, 47);
    if(!(c == ((signed int *)NULL)))
    {
      c[(signed long int)0] = 0;
      unsigned long int return_value_wcslen_3;
      return_value_wcslen_3=wcslen(logFileDir);
      len = return_value_wcslen_3 + (unsigned long int)23 + (unsigned long int)1 + (unsigned long int)1000;
      void *return_value_malloc_4;
      return_value_malloc_4=malloc(len * sizeof(signed int) /*4ul*/ );
      testfile = (signed int *)return_value_malloc_4;
      if(testfile == ((signed int *)NULL))
      {
        outOfMemory(L"CLD", 1);
        free((void *)logFileDir);
        return -1;
      }

      signed int return_value_rand_5;
      return_value_rand_5=rand();
      signed int return_value_rand_6;
      return_value_rand_6=rand();
      _sntprintf(testfile, len, L"%s%c.wrapper_test-%.4d%.4d", logFileDir, 47, return_value_rand_5 % 9999, return_value_rand_6 % 9999);
      fd=_topen(testfile, 01 | 0100 | 0200, (unsigned int)(0400 | 0200));
      if(fd == -1)
      {
        signed int *return_value___errno_location_10;
        return_value___errno_location_10=__errno_location();
        if(*return_value___errno_location_10 == 13)
        {
          const signed int *return_value_getLastErrorText_7;
          return_value_getLastErrorText_7=getLastErrorText();
          log_printf_queue(-1, -1, 4, L"Unable to write to the configured log directory: %s (%s)\n  The Wrapper may also have problems writing or rolling the log file.\n  Please make sure that the current user has read/write access.", logFileDir, return_value_getLastErrorText_7);
        }

        else
        {
          return_value___errno_location_9=__errno_location();
          if(*return_value___errno_location_9 == 2)
          {
            const signed int *return_value_getLastErrorText_8;
            return_value_getLastErrorText_8=getLastErrorText();
            log_printf_queue(-1, -1, 4, L"Unable to write to the configured log directory: %s (%s)\n  The directory does not exist.", logFileDir, return_value_getLastErrorText_8);
          }

        }
      }

      else
      {
        close(fd);
        signed int return_value__tremove_12;
        return_value__tremove_12=_tremove(testfile);
        if(!(return_value__tremove_12 == 0))
        {
          const signed int *return_value_getLastErrorText_11;
          return_value_getLastErrorText_11=getLastErrorText();
          log_printf_queue(-1, -1, 4, L"Unable to remove temporary file: %s (%s)\n  The Wrapper may also have problems writing or rolling the log file.\n  Please make sure that the current user has read/write access.", testfile, return_value_getLastErrorText_11);
        }

      }
      free((void *)testfile);
    }

    free((void *)logFileDir);
    return 0;
  }
}

// closeLogfile
// file logger.h line 227
extern void closeLogfile()
{
  signed int return_value_lockLoggingMutex_1;
  return_value_lockLoggingMutex_1=lockLoggingMutex();
  if(return_value_lockLoggingMutex_1 == 0)
  {
    if(!(logfileFP == ((struct _IO_FILE *)NULL)))
    {
      fclose(logfileFP);
      logfileFP = (struct _IO_FILE *)(void *)0;
    }

    signed int return_value_releaseLoggingMutex_2;
    return_value_releaseLoggingMutex_2=releaseLoggingMutex();
  }

}

// commandPoll
// file wrappereventloop.c line 445
void commandPoll(unsigned int nowTicks)
{
  struct stat fileStat;
  signed int result;
  struct _IO_FILE *stream;
  signed int cnt;
  signed int buffer[80l];
  signed int *c;
  signed int *d;
  signed int *command;
  signed int *param1;
  signed int *param2;
  signed int exitCode;
  signed int pauseTime;
  signed int logLevel;
  signed int oldLowLogLevel;
  signed int newLowLogLevel;
  signed int flag;
  signed int accessViolation = 0;
  signed int return_value_wcscasecmp_59;
  _Bool tmp_if_expr_3;
  signed int return_value_wcscasecmp_58;
  signed int return_value_wcscasecmp_57;
  signed int return_value_wcscasecmp_56;
  signed int return_value_wcscasecmp_55;
  signed int return_value_wcscasecmp_50;
  _Bool tmp_if_expr_52;
  signed int return_value_wcscasecmp_51;
  _Bool tmp_if_expr_54;
  signed int return_value_wcscasecmp_53;
  signed int return_value_wcscasecmp_5;
  signed int return_value_wcscasecmp_4;
  signed int return_value_wcscasecmp_39;
  _Bool tmp_if_expr_41;
  signed int return_value_wcscasecmp_40;
  _Bool tmp_if_expr_43;
  signed int return_value_wcscasecmp_42;
  _Bool tmp_if_expr_45;
  signed int return_value_wcscasecmp_44;
  _Bool tmp_if_expr_47;
  signed int return_value_wcscasecmp_46;
  _Bool tmp_if_expr_49;
  signed int return_value_wcscasecmp_48;
  _Bool tmp_if_expr_9;
  signed int return_value_wcscasecmp_8;
  signed int return_value_wcscasecmp_14;
  signed int return_value_wcscasecmp_13;
  signed int return_value_wcscasecmp_12;
  signed int return_value_wcscasecmp_11;
  signed int return_value_wcscasecmp_10;
  signed int return_value_wcscasecmp_36;
  _Bool tmp_if_expr_38;
  signed int return_value_wcscasecmp_37;
  signed int return_value_wcscasecmp_35;
  signed long int tmp_if_expr_18;
  signed long int return_value_wcstol_17;
  signed long int tmp_if_expr_22;
  signed long int return_value_wcstol_19;
  signed long int tmp_if_expr_21;
  signed long int return_value_wcstol_20;
  signed int return_value_wcscasecmp_24;
  signed int return_value_wcscasecmp_23;
  signed int return_value_wcscasecmp_34;
  signed long int tmp_if_expr_28;
  signed long int return_value_wcstol_27;
  signed long int tmp_if_expr_32;
  signed long int return_value_wcstol_29;
  signed long int tmp_if_expr_31;
  signed long int return_value_wcstol_30;
  signed int return_value_wcscasecmp_33;
  if(!(wrapperData->commandFilename == ((signed int *)NULL)))
  {
    signed int return_value_wrapperTickExpired_63;
    return_value_wrapperTickExpired_63=wrapperTickExpired(nowTicks, wrapperData->commandTimeoutTicks);
    if(!(return_value_wrapperTickExpired_63 == 0))
    {
      if(!(wrapperData->isLoopOutputEnabled == 0))
        log_printf(-1, 3, L"    Loop: check command file");

      result=_tstat(wrapperData->commandFilename, &fileStat);
      if(result == 0)
      {
        cnt = 0;
        do
        {
          stream=_tfopen(wrapperData->commandFilename, L"r+t");
          if(stream == ((struct _IO_FILE *)NULL))
            wrapperSleep(100);

          cnt = cnt + 1;
        }
        while(stream == ((struct _IO_FILE *)NULL) && !(cnt >= 10));
        if(stream == ((struct _IO_FILE *)NULL))
          log_printf(-1, 4, L"Unable to read the command file: %s", wrapperData->commandFilename);

        else
        {
          do
          {
            c=fgetws(buffer, 80, stream);
            if(!(c == ((signed int *)NULL)))
            {
              d=wcschr(buffer, 13);
              if(!(d == ((signed int *)NULL)))
                d[(signed long int)0] = 0;

              d=wcschr(buffer, 10);
              if(!(d == ((signed int *)NULL)))
                d[(signed long int)0] = 0;

              command = buffer;
              param1=wcschr(buffer, 32);
              if(!(param1 == ((signed int *)NULL)))
              {
                param1[(signed long int)0] = 0;
                do
                  param1 = param1 + 1l;
                while(*param1 == 32);
              }

              if(!(param1 == ((signed int *)NULL)))
              {
                param2=wcschr(param1, 32);
                if(!(param2 == ((signed int *)NULL)))
                {
                  param2[(signed long int)0] = 0;
                  do
                    param2 = param2 + 1l;
                  while(*param2 == 32);
                }

                if(!(param2 == ((signed int *)NULL)))
                {
                  d=wcschr(param2, 32);
                  if(!(d == ((signed int *)NULL)))
                    d[(signed long int)0] = 0;

                }

              }

              else
                param2 = (signed int *)(void *)0;
              signed int return_value_wcscasecmp_60;
              return_value_wcscasecmp_60=wcscasecmp(command, L"RESTART");
              if(return_value_wcscasecmp_60 == 0)
              {
                const signed int *return_value_wrapperGetRestartProcessMessage_1;
                return_value_wrapperGetRestartProcessMessage_1=wrapperGetRestartProcessMessage();
                log_printf(-1, 3, L"Command '%s'.  %s", command, return_value_wrapperGetRestartProcessMessage_1);
                wrapperRestartProcess();
              }

              else
              {
                return_value_wcscasecmp_59=wcscasecmp(command, L"STOP");
                if(return_value_wcscasecmp_59 == 0)
                {
                  if(param1 == ((signed int *)NULL))
                    exitCode = 0;

                  else
                  {
                    signed long int return_value_wcstol_2;
                    return_value_wcstol_2=wcstol(param1, (signed int ** restrict )(void *)0, 10);
                    exitCode = (signed int)return_value_wcstol_2;
                  }
                  log_printf(-1, 3, L"Command '%s'. Shutting down with exit code %d.", command, exitCode);
                  wrapperStopProcess(exitCode, -1);
                  if(wrapperData->wState == 56)
                    tmp_if_expr_3 = (_Bool)1;

                  else
                    tmp_if_expr_3 = wrapperData->wState == 57 ? (_Bool)1 : (_Bool)0;
                  if(!tmp_if_expr_3)
                    wrapperSetWrapperState(56);

                }

                else
                {
                  return_value_wcscasecmp_58=wcscasecmp(command, L"PAUSE");
                  if(return_value_wcscasecmp_58 == 0)
                  {
                    log_printf(-1, 3, L"Command '%s'. Pausing JVM.", command);
                    wrapperPauseProcess(2);
                  }

                  else
                  {
                    return_value_wcscasecmp_57=wcscasecmp(command, L"RESUME");
                    if(return_value_wcscasecmp_57 == 0)
                    {
                      log_printf(-1, 3, L"Command '%s'. Resuming JVM.", command);
                      wrapperResumeProcess(2);
                    }

                    else
                    {
                      return_value_wcscasecmp_56=wcscasecmp(command, L"DUMP");
                      if(return_value_wcscasecmp_56 == 0)
                      {
                        log_printf(-1, 3, L"Command '%s'. Requesting a Thread Dump.", command);
                        wrapperRequestDumpJVMState();
                      }

                      else
                      {
                        return_value_wcscasecmp_55=wcscasecmp(command, L"GC");
                        if(return_value_wcscasecmp_55 == 0)
                        {
                          log_printf(-1, 3, L"Command '%s'. Requesting a GC.", command);
                          wrapperRequestJVMGC(2);
                        }

                        else
                        {
                          return_value_wcscasecmp_50=wcscasecmp(command, L"CONSOLE_LOGLEVEL");
                          if(return_value_wcscasecmp_50 == 0)
                            tmp_if_expr_52 = (_Bool)1;

                          else
                          {
                            return_value_wcscasecmp_51=wcscasecmp(command, L"LOGFILE_LOGLEVEL");
                            tmp_if_expr_52 = return_value_wcscasecmp_51 == 0 ? (_Bool)1 : (_Bool)0;
                          }
                          if(tmp_if_expr_52)
                            tmp_if_expr_54 = (_Bool)1;

                          else
                          {
                            return_value_wcscasecmp_53=wcscasecmp(command, L"SYSLOG_LOGLEVEL");
                            tmp_if_expr_54 = return_value_wcscasecmp_53 == 0 ? (_Bool)1 : (_Bool)0;
                          }
                          if(tmp_if_expr_54)
                          {
                            if(param1 == ((signed int *)NULL))
                              log_printf(-1, 4, L"Command '%s' is missing its log level.", command);

                            else
                            {
                              logLevel=getLogLevelForName(param1);
                              if(logLevel == 0)
                                log_printf(-1, 4, L"Command '%s' specified an unknown log level: '%'", command, param1);

                              else
                              {
                                oldLowLogLevel=getLowLogLevel();
                                signed int return_value_wcscasecmp_6;
                                return_value_wcscasecmp_6=wcscasecmp(command, L"CONSOLE_LOGLEVEL");
                                if(return_value_wcscasecmp_6 == 0)
                                {
                                  setConsoleLogLevelInt(logLevel);
                                  log_printf(-1, 3, L"Command '%s'. Set console log level to '%s'.", command, param1);
                                }

                                else
                                {
                                  return_value_wcscasecmp_5=wcscasecmp(command, L"LOGFILE_LOGLEVEL");
                                  if(return_value_wcscasecmp_5 == 0)
                                  {
                                    setLogfileLevelInt(logLevel);
                                    log_printf(-1, 3, L"Command '%s'. Set log file log level to '%s'.", command, param1);
                                  }

                                  else
                                  {
                                    return_value_wcscasecmp_4=wcscasecmp(command, L"SYSLOG_LOGLEVEL");
                                    if(return_value_wcscasecmp_4 == 0)
                                    {
                                      setSyslogLevelInt(logLevel);
                                      log_printf(-1, 3, L"Command '%s'. Set syslog log level to '%s'.", command, param1);
                                    }

                                    else
                                      log_printf(-1, 4, L"Command '%s' lead to an unexpected state.", command);
                                  }
                                }
                                newLowLogLevel=getLowLogLevel();
                                if(!(oldLowLogLevel == newLowLogLevel))
                                {
                                  wrapperData->isDebugging = (signed int)(newLowLogLevel <= 1);
                                  signed int return_value_getLowLogLevel_7;
                                  return_value_getLowLogLevel_7=getLowLogLevel();
                                  _sntprintf(buffer, (unsigned long int)80, L"%d", return_value_getLowLogLevel_7);
                                  wrapperProtocolFunction((char)112, buffer);
                                }

                              }
                            }
                          }

                          else
                          {
                            return_value_wcscasecmp_39=wcscasecmp(command, L"LOOP_OUTPUT");
                            if(return_value_wcscasecmp_39 == 0)
                              tmp_if_expr_41 = (_Bool)1;

                            else
                            {
                              return_value_wcscasecmp_40=wcscasecmp(command, L"STATE_OUTPUT");
                              tmp_if_expr_41 = return_value_wcscasecmp_40 == 0 ? (_Bool)1 : (_Bool)0;
                            }
                            if(tmp_if_expr_41)
                              tmp_if_expr_43 = (_Bool)1;

                            else
                            {
                              return_value_wcscasecmp_42=wcscasecmp(command, L"MEMORY_OUTPUT");
                              tmp_if_expr_43 = return_value_wcscasecmp_42 == 0 ? (_Bool)1 : (_Bool)0;
                            }
                            if(tmp_if_expr_43)
                              tmp_if_expr_45 = (_Bool)1;

                            else
                            {
                              return_value_wcscasecmp_44=wcscasecmp(command, L"CPU_OUTPUT");
                              tmp_if_expr_45 = return_value_wcscasecmp_44 == 0 ? (_Bool)1 : (_Bool)0;
                            }
                            if(tmp_if_expr_45)
                              tmp_if_expr_47 = (_Bool)1;

                            else
                            {
                              return_value_wcscasecmp_46=wcscasecmp(command, L"TIMER_OUTPUT");
                              tmp_if_expr_47 = return_value_wcscasecmp_46 == 0 ? (_Bool)1 : (_Bool)0;
                            }
                            if(tmp_if_expr_47)
                              tmp_if_expr_49 = (_Bool)1;

                            else
                            {
                              return_value_wcscasecmp_48=wcscasecmp(command, L"SLEEP_OUTPUT");
                              tmp_if_expr_49 = return_value_wcscasecmp_48 == 0 ? (_Bool)1 : (_Bool)0;
                            }
                            if(tmp_if_expr_49)
                            {
                              if(!(param1 == ((signed int *)NULL)))
                              {
                                return_value_wcscasecmp_8=wcscasecmp(param1, L"TRUE");
                                tmp_if_expr_9 = return_value_wcscasecmp_8 == 0 ? (_Bool)1 : (_Bool)0;
                              }

                              else
                                tmp_if_expr_9 = (_Bool)0;
                              flag = (signed int)tmp_if_expr_9;
                              signed int return_value_wcscasecmp_15;
                              return_value_wcscasecmp_15=wcscasecmp(command, L"LOOP_OUTPUT");
                              if(return_value_wcscasecmp_15 == 0)
                                wrapperData->isLoopOutputEnabled = flag;

                              else
                              {
                                return_value_wcscasecmp_14=wcscasecmp(command, L"STATE_OUTPUT");
                                if(return_value_wcscasecmp_14 == 0)
                                  wrapperData->isStateOutputEnabled = flag;

                                else
                                {
                                  return_value_wcscasecmp_13=wcscasecmp(command, L"MEMORY_OUTPUT");
                                  if(return_value_wcscasecmp_13 == 0)
                                    wrapperData->isMemoryOutputEnabled = flag;

                                  else
                                  {
                                    return_value_wcscasecmp_12=wcscasecmp(command, L"CPU_OUTPUT");
                                    if(return_value_wcscasecmp_12 == 0)
                                      wrapperData->isCPUOutputEnabled = flag;

                                    else
                                    {
                                      return_value_wcscasecmp_11=wcscasecmp(command, L"TIMER_OUTPUT");
                                      if(return_value_wcscasecmp_11 == 0)
                                        wrapperData->isTickOutputEnabled = flag;

                                      else
                                      {
                                        return_value_wcscasecmp_10=wcscasecmp(command, L"SLEEP_OUTPUT");
                                        if(return_value_wcscasecmp_10 == 0)
                                          wrapperData->isSleepOutputEnabled = flag;

                                      }
                                    }
                                  }
                                }
                              }
                              if(!(flag == 0))
                                log_printf(-1, 3, L"Command '%s'. Enable %s.", command, command);

                              else
                                log_printf(-1, 3, L"Command '%s'. Disable %s.", command, command);
                            }

                            else
                            {
                              return_value_wcscasecmp_36=wcscasecmp(command, L"CLOSE_SOCKET");
                              if(return_value_wcscasecmp_36 == 0)
                                tmp_if_expr_38 = (_Bool)1;

                              else
                              {
                                return_value_wcscasecmp_37=wcscasecmp(command, L"CLOSE_BACKEND");
                                tmp_if_expr_38 = return_value_wcscasecmp_37 == 0 ? (_Bool)1 : (_Bool)0;
                              }
                              if(tmp_if_expr_38)
                              {
                                if(!(wrapperData->commandFileTests == 0))
                                {
                                  log_printf(-1, 4, L"Command '%s'.  Closing backend socket to JVM...", command);
                                  wrapperProtocolClose();
                                }

                                else
                                  log_printf(-1, 4, L"Command '%s'.  Tests disabled.", command);
                              }

                              else
                              {
                                return_value_wcscasecmp_35=wcscasecmp(command, L"PAUSE_THREAD");
                                if(return_value_wcscasecmp_35 == 0)
                                {
                                  if(!(wrapperData->commandFileTests == 0))
                                  {
                                    if(param2 == ((signed int *)NULL))
                                      pauseTime = -1;

                                    else
                                    {
                                      signed long int return_value_wcstol_16;
                                      return_value_wcstol_16=wcstol(param2, (signed int ** restrict )(void *)0, 10);
                                      if(return_value_wcstol_16 >= 3601l)
                                        tmp_if_expr_18 = (signed long int)3600;

                                      else
                                      {
                                        return_value_wcstol_17=wcstol(param2, (signed int ** restrict )(void *)0, 10);
                                        tmp_if_expr_18 = return_value_wcstol_17;
                                      }
                                      if(!(tmp_if_expr_18 >= 0l))
                                        tmp_if_expr_22 = (signed long int)0;

                                      else
                                      {
                                        return_value_wcstol_19=wcstol(param2, (signed int ** restrict )(void *)0, 10);
                                        if(return_value_wcstol_19 >= 3601l)
                                          tmp_if_expr_21 = (signed long int)3600;

                                        else
                                        {
                                          return_value_wcstol_20=wcstol(param2, (signed int ** restrict )(void *)0, 10);
                                          tmp_if_expr_21 = return_value_wcstol_20;
                                        }
                                        tmp_if_expr_22 = tmp_if_expr_21;
                                      }
                                      pauseTime = (signed int)tmp_if_expr_22;
                                    }
                                    signed int return_value_wcscasecmp_25;
                                    return_value_wcscasecmp_25=wcscasecmp(param1, L"MAIN");
                                    if(return_value_wcscasecmp_25 == 0)
                                      wrapperData->pauseThreadMain = pauseTime;

                                    else
                                    {
                                      return_value_wcscasecmp_24=wcscasecmp(param1, L"TIMER");
                                      if(return_value_wcscasecmp_24 == 0)
                                        wrapperData->pauseThreadTimer = pauseTime;

                                      else
                                      {
                                        return_value_wcscasecmp_23=wcscasecmp(param1, L"JAVAIO");
                                        if(return_value_wcscasecmp_23 == 0)
                                          wrapperData->pauseThreadJavaIO = pauseTime;

                                        else
                                        {
                                          log_printf(-1, 4, L"Command '%s'.  Enqueue request to pause unknown thread.", command);
                                          pauseTime = 0;
                                        }
                                      }
                                    }
                                    if(pauseTime >= 1)
                                      log_printf(-1, 4, L"Command '%s'.  Enqueue request to pause %s thread for %d seconds...", command, param1, pauseTime);

                                    else
                                      if(!(pauseTime >= 0))
                                        log_printf(-1, 4, L"Command '%s'.  Enqueue request to pause %s thread indefinitely...", command, param1);

                                  }

                                  else
                                    log_printf(-1, 4, L"Command '%s'.  Tests disabled.", command);
                                }

                                else
                                {
                                  return_value_wcscasecmp_34=wcscasecmp(command, L"PAUSE_LOGGER");
                                  if(return_value_wcscasecmp_34 == 0)
                                  {
                                    if(!(wrapperData->commandFileTests == 0))
                                    {
                                      if(param1 == ((signed int *)NULL))
                                        pauseTime = -1;

                                      else
                                      {
                                        signed long int return_value_wcstol_26;
                                        return_value_wcstol_26=wcstol(param1, (signed int ** restrict )(void *)0, 10);
                                        if(return_value_wcstol_26 >= 3601l)
                                          tmp_if_expr_28 = (signed long int)3600;

                                        else
                                        {
                                          return_value_wcstol_27=wcstol(param1, (signed int ** restrict )(void *)0, 10);
                                          tmp_if_expr_28 = return_value_wcstol_27;
                                        }
                                        if(!(tmp_if_expr_28 >= 0l))
                                          tmp_if_expr_32 = (signed long int)0;

                                        else
                                        {
                                          return_value_wcstol_29=wcstol(param1, (signed int ** restrict )(void *)0, 10);
                                          if(return_value_wcstol_29 >= 3601l)
                                            tmp_if_expr_31 = (signed long int)3600;

                                          else
                                          {
                                            return_value_wcstol_30=wcstol(param1, (signed int ** restrict )(void *)0, 10);
                                            tmp_if_expr_31 = return_value_wcstol_30;
                                          }
                                          tmp_if_expr_32 = tmp_if_expr_31;
                                        }
                                        pauseTime = (signed int)tmp_if_expr_32;
                                      }
                                      if(pauseTime >= 1)
                                        log_printf(-1, 4, L"Command '%s'.  Enqueue request to pause logger for %d seconds...", command, pauseTime);

                                      else
                                        log_printf(-1, 4, L"Command '%s'.  Enqueue request to pause logger indefinitely...", command);
                                      setPauseTime(pauseTime);
                                    }

                                    else
                                      log_printf(-1, 4, L"Command '%s'.  Tests disabled.", command);
                                  }

                                  else
                                  {
                                    return_value_wcscasecmp_33=wcscasecmp(command, L"ACCESS_VIOLATION");
                                    if(return_value_wcscasecmp_33 == 0)
                                    {
                                      if(!(wrapperData->commandFileTests == 0))
                                      {
                                        log_printf(-1, 6, L"Command '%s'.  Intentionally causing an Access Violation in Wrapper...", command);
                                        accessViolation = -1;
                                      }

                                      else
                                        log_printf(-1, 4, L"Command '%s'.  Tests disabled.", command);
                                    }

                                    else
                                      log_printf(-1, 4, L"Command '%s' is unknown, ignoring.", command);
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
          while(!(c == ((signed int *)NULL)));
          fclose(stream);
          signed int return_value__tremove_62;
          return_value__tremove_62=_tremove(wrapperData->commandFilename);
          if(return_value__tremove_62 == -1)
          {
            const signed int *return_value_getLastErrorText_61;
            return_value_getLastErrorText_61=getLastErrorText();
            log_printf(-1, 6, L"Unable to delete the command file, %s: %s", wrapperData->commandFilename, return_value_getLastErrorText_61);
          }

          if(!(accessViolation == 0))
          {
            flushLogfile();
            c = (signed int *)(void *)0;
            c[(signed long int)0] = 0;
          }

        }
      }

      wrapperData->commandTimeoutTicks=wrapperAddToTicks(nowTicks, wrapperData->commandPollInterval);
    }

  }

}

// compareFileNames
// file logger_file.c line 91
signed int compareFileNames(const signed int *file1, const signed int *file2)
{
  signed int pos1;
  signed int pos2;
  signed int c1;
  signed int c2;
  signed int numeric1;
  signed int numeric2;
  signed long int num1;
  signed long int num2;
  signed int afterNumber = 0;
  pos1 = 0;
  pos2 = 0;
  for( ; (_Bool)1; pos2 = pos2 + 1)
  {
    c1 = file1[(signed long int)pos1];
    c2 = file2[(signed long int)pos2];
    if(c1 == 0)
    {
      if(c2 == 0)
        return 0;

      else
        return 1;
    }

    else
      if(c2 == 0)
        return -1;

    numeric1 = (signed int)(c1 >= 48 && c1 <= 57);
    numeric2 = (signed int)(c2 >= 48 && c2 <= 57);
    if(!(numeric1 == 0))
    {
      if(!(numeric2 == 0))
      {
        num1 = (signed long int)(c1 - 48);
        c1 = file1[(signed long int)(pos1 + 1)];
        for( ; c1 >= 48 && !(c1 >= 58); c1 = file1[(signed long int)(pos1 + 1)])
        {
          num1 = num1 * (signed long int)10 + (signed long int)(c1 - 48);
          pos1 = pos1 + 1;
        }
        num2 = (signed long int)(c2 - 48);
        c2 = file2[(signed long int)(pos2 + 1)];
        for( ; c2 >= 48 && !(c2 >= 58); c2 = file2[(signed long int)(pos2 + 1)])
        {
          num2 = num2 * (signed long int)10 + (signed long int)(c2 - 48);
          pos2 = pos2 + 1;
        }
        if(!(num2 >= num1))
          return -1;

        else
          if(!(num1 >= num2))
            return 1;

        afterNumber = -1;
      }

      else
        if(!(afterNumber == 0))
          return -1;

        else
          return 1;
    }

    else
      if(!(numeric2 == 0))
      {
        if(!(afterNumber == 0))
          return 1;

        else
          return -1;
      }

    if(!(c2 >= c1))
      return -1;

    else
      if(!(c1 >= c2))
        return 1;

      else
        if(!(c1 == 45) && !(c1 == 46) && !(c1 == 95))
          afterNumber = 0;

    pos1 = pos1 + 1;
  }
}

// configFileReader
// file wrapper_file.h line 75
extern signed int configFileReader(const signed int *filename, signed int fileRequired, signed int (*callback)(void *, const signed int *, signed int, signed int *, signed int), void *callbackParam, signed int enableIncludes, signed int preload, const signed int *argCommand, const signed int *originalWorkingDir, struct anonymous_23 *warnedVarMap, signed int logWarnings, signed int logWarningLogLevel, signed int isDebugging)
{
  struct ConfigFileReader reader;
  reader.callback = callback;
  reader.callbackParam = callbackParam;
  reader.enableIncludes = enableIncludes;
  reader.preload = preload;
  reader.debugIncludes = 0;
  reader.debugProperties = 0;
  signed int return_value_configFileReader_Read_1;
  return_value_configFileReader_Read_1=configFileReader_Read(&reader, filename, fileRequired, 0, (const signed int *)(void *)0, 0, argCommand, originalWorkingDir, warnedVarMap, logWarnings, logWarningLogLevel, isDebugging);
  return return_value_configFileReader_Read_1;
}

// configFileReader_Read
// file wrapper_file.c line 114
signed int configFileReader_Read(struct ConfigFileReader *reader, const signed int *filename, signed int fileRequired, signed int depth, const signed int *parentFilename, signed int parentLineNumber, const signed int *argCommand, const signed int *originalWorkingDir, struct anonymous_23 *warnedVarMap, signed int logWarnings, signed int logWarningLogLevel, signed int isDebugging)
{
  struct _IO_FILE *stream;
  char bufferMB[16897l];
  signed int expBuffer[16897l];
  signed int *trimmedBuffer;
  unsigned long int trimmedBufferLen;
  signed int *c;
  signed int *d;
  unsigned long int i;
  unsigned long int j;
  unsigned long int len;
  signed int quoted;
  signed int *absoluteBuffer;
  signed int hadBOM;
  signed int lineNumber;
  char *encodingMB;
  char *encoding;
  char *interumEncoding;
  signed int includeRequired;
  signed int readResult = 101;
  signed int ret;
  signed int *bufferW;
  stream=_tfopen(filename, L"rb");
  int *tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  unsigned long int tmp_post_6;
  _Bool tmp_if_expr_8;
  unsigned long int tmp_post_7;
  _Bool tmp_if_expr_10;
  unsigned long int tmp_post_9;
  _Bool tmp_if_expr_12;
  unsigned long int tmp_post_11;
  _Bool tmp_if_expr_14;
  unsigned long int tmp_post_13;
  _Bool tmp_if_expr_16;
  unsigned long int tmp_post_15;
  _Bool tmp_if_expr_18;
  unsigned long int tmp_post_17;
  _Bool tmp_if_expr_20;
  unsigned long int tmp_post_19;
  _Bool tmp_if_expr_22;
  unsigned long int tmp_post_21;
  _Bool tmp_if_expr_24;
  unsigned long int tmp_post_23;
  signed int return_value_strcasecmp_4;
  int *tmp_if_expr_26;
  int *tmp_if_expr_28;
  _Bool tmp_if_expr_44;
  signed int return_value_wcscasecmp_43;
  _Bool tmp_if_expr_42;
  signed int *return_value_wcsstr_39;
  _Bool tmp_if_expr_41;
  signed int *return_value_wcsstr_40;
  signed int return_value_wcscmp_30;
  int *tmp_if_expr_34;
  int *tmp_if_expr_35;
  int *tmp_if_expr_36;
  int *tmp_if_expr_37;
  signed int return_value_wcscasecmp_38;
  if(stream == ((struct _IO_FILE *)NULL))
  {
    if(!(reader->debugIncludes == 0) || !(fileRequired == 0))
    {
      if(depth >= 1)
      {
        if(!(reader->debugIncludes == 0))
          tmp_if_expr_1 = L"  ";

        else
          tmp_if_expr_1 = L"";
        log_printf(-1, 3, L"%sIncluded configuration file not found: %s\n  Referenced from: %s (line %d)\n  Current working directory: %s", tmp_if_expr_1, filename, parentFilename, parentLineNumber, originalWorkingDir);
      }

      else
        log_printf(-1, 3, L"Configuration file not found: %s\n  Current working directory: %s", filename, originalWorkingDir);
    }

    return 102;
  }

  else
  {
    if(!(reader->debugIncludes == 0))
    {
      if(reader->preload == 0)
      {
        if(depth >= 1)
          log_printf(-1, 3, L"  Reading included configuration file, %s", filename);

      }

    }

    char *return_value_fgets_25;
    return_value_fgets_25=fgets(bufferMB, 512 + 1 + 16384, stream);
    if(!(return_value_fgets_25 == ((char *)NULL)))
    {
      if(bufferMB[0l] == -17)
        tmp_if_expr_2 = bufferMB[(signed long int)1] == (char)0xbb ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
        tmp_if_expr_3 = bufferMB[(signed long int)2] == (char)0xbf ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_3 = (_Bool)0;
      if(tmp_if_expr_3)
      {
        i = (unsigned long int)3;
        hadBOM = -1;
      }

      else
      {
        i = (unsigned long int)0;
        hadBOM = 0;
      }
      tmp_post_6 = i;
      i = i + 1ul;
      if((signed int)bufferMB[(signed long int)tmp_post_6] == 35)
      {
        tmp_post_7 = i;
        i = i + 1ul;
        tmp_if_expr_8 = (signed int)bufferMB[(signed long int)tmp_post_7] == 101 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_8 = (_Bool)0;
      if(tmp_if_expr_8)
      {
        tmp_post_9 = i;
        i = i + 1ul;
        tmp_if_expr_10 = (signed int)bufferMB[(signed long int)tmp_post_9] == 110 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_10 = (_Bool)0;
      if(tmp_if_expr_10)
      {
        tmp_post_11 = i;
        i = i + 1ul;
        tmp_if_expr_12 = (signed int)bufferMB[(signed long int)tmp_post_11] == 99 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_12 = (_Bool)0;
      if(tmp_if_expr_12)
      {
        tmp_post_13 = i;
        i = i + 1ul;
        tmp_if_expr_14 = (signed int)bufferMB[(signed long int)tmp_post_13] == 111 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_14 = (_Bool)0;
      if(tmp_if_expr_14)
      {
        tmp_post_15 = i;
        i = i + 1ul;
        tmp_if_expr_16 = (signed int)bufferMB[(signed long int)tmp_post_15] == 100 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_16 = (_Bool)0;
      if(tmp_if_expr_16)
      {
        tmp_post_17 = i;
        i = i + 1ul;
        tmp_if_expr_18 = (signed int)bufferMB[(signed long int)tmp_post_17] == 105 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_18 = (_Bool)0;
      if(tmp_if_expr_18)
      {
        tmp_post_19 = i;
        i = i + 1ul;
        tmp_if_expr_20 = (signed int)bufferMB[(signed long int)tmp_post_19] == 110 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_20 = (_Bool)0;
      if(tmp_if_expr_20)
      {
        tmp_post_21 = i;
        i = i + 1ul;
        tmp_if_expr_22 = (signed int)bufferMB[(signed long int)tmp_post_21] == 103 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_22 = (_Bool)0;
      if(tmp_if_expr_22)
      {
        tmp_post_23 = i;
        i = i + 1ul;
        tmp_if_expr_24 = (signed int)bufferMB[(signed long int)tmp_post_23] == 61 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_24 = (_Bool)0;
      if(tmp_if_expr_24)
      {
        encodingMB = bufferMB + (signed long int)i;
        i = (unsigned long int)0;
        for( ; !((signed int)encodingMB[(signed long int)i] == 32); i = i + 1ul)
        {
          if((signed int)encodingMB[(signed long int)i] == 10)
            break;

          if((signed int)encodingMB[(signed long int)i] == 13)
            break;

        }
        encodingMB[(signed long int)i] = (char)0;
        if(!(hadBOM == 0))
          return_value_strcasecmp_4=strcasecmp(encodingMB, "UTF-8");

        signed int return_value_getEncodingByName_5;
        return_value_getEncodingByName_5=getEncodingByName(encodingMB, &encoding);
        if(return_value_getEncodingByName_5 == -1)
        {
          fclose(stream);
          return 102;
        }

      }

      else
        encoding=nl_langinfo(14);
    }

    else
      encoding=nl_langinfo(14);
    fclose(stream);
    stream=_tfopen(filename, L"rb");
    if(stream == ((struct _IO_FILE *)NULL))
    {
      if(!(reader->debugIncludes == 0) || !(fileRequired == 0))
      {
        if(depth >= 1)
        {
          if(!(reader->debugIncludes == 0))
            tmp_if_expr_26 = L"  ";

          else
            tmp_if_expr_26 = L"";
          log_printf(-1, 3, L"%sIncluded configuration file, %s, was not found.", tmp_if_expr_26, filename);
        }

        else
          log_printf(-1, 3, L"Configuration file, %s, was not found.", filename);
      }

      return 102;
    }

    else
    {
      lineNumber = 1;
      do
      {
        char *return_value_fgets_27;
        return_value_fgets_27=fgets(bufferMB, 512 + 1 + 16384, stream);
        c = (signed int *)return_value_fgets_27;
        if(!(c == ((signed int *)NULL)))
        {
          interumEncoding=nl_langinfo(14);
          ret=multiByteToWideChar(bufferMB, encoding, interumEncoding, &bufferW, -1);
          if(!(ret == 0))
          {
            if(!(bufferW == ((signed int *)NULL)))
            {
              if(reader->preload == 0)
              {
                if(depth >= 1)
                {
                  if(!(reader->debugIncludes == 0))
                    tmp_if_expr_28 = L"  ";

                  else
                    tmp_if_expr_28 = L"";
                  log_printf(-1, 4, L"%sIncluded configuration file, %s, contains a problem on line #%d and could not be read. (%s)", tmp_if_expr_28, filename, lineNumber, bufferW);
                }

                else
                  log_printf(-1, 4, L"Configuration file, %s, contains a problem on line #%d and could not be read. (%s)", filename, lineNumber, bufferW);
              }

              free((void *)bufferW);
            }

            else
              outOfMemory(L"RCF", 1);
            fclose(stream);
            return 102;
          }

          c = bufferW;
          d=wcschr(bufferW, 0x0d);
          if(!(d == ((signed int *)NULL)))
            d[(signed long int)0] = 0;

          d=wcschr(bufferW, 0x0a);
          if(!(d == ((signed int *)NULL)))
            d[(signed long int)0] = 0;

          trimmedBuffer = bufferW;
          for( ; (_Bool)1; trimmedBuffer = trimmedBuffer + 1l)
            if(!(*trimmedBuffer == 32))
            {
              if(!(*trimmedBuffer == 0x08))
                goto __CPROVER_DUMP_L56;

            }


        __CPROVER_DUMP_L56:
          ;
          if(!(*trimmedBuffer == 35))
          {
            len=wcslen(trimmedBuffer);
            i = (unsigned long int)0;
            quoted = 0;
            for( ; !(i >= len); i = i + 1ul)
              if(trimmedBuffer[(signed long int)i] == 34)
                quoted = (signed int)!(quoted != 0);

              else
                if(trimmedBuffer[(signed long int)i] == 35)
                {
                  if(quoted == 0)
                  {
                    if(trimmedBuffer[1l + (signed long int)i] == 35)
                    {
                      j = i + (unsigned long int)1;
                      for( ; len >= j; j = j + 1ul)
                        trimmedBuffer[(signed long int)(j - (unsigned long int)1)] = trimmedBuffer[(signed long int)j];
                      len = len - 1ul;
                    }

                    else
                    {
                      trimmedBuffer[(signed long int)i] = 0;
                      len = i;
                    }
                  }

                }

          }

          trimmedBufferLen=wcslen(trimmedBuffer);
          for( ; trimmedBufferLen >= 1ul; trimmedBuffer[(signed long int)trimmedBufferLen] = 0)
          {
            if(!(trimmedBuffer[-1l + (signed long int)trimmedBufferLen] == 32))
            {
              if(!(trimmedBuffer[-1l + (signed long int)trimmedBufferLen] == 0x08))
                break;

            }

            trimmedBufferLen = trimmedBufferLen - 1ul;
          }
          unsigned long int return_value_wcslen_45;
          return_value_wcslen_45=wcslen(trimmedBuffer);
          if(return_value_wcslen_45 >= 1ul)
          {
            if(!(reader->enableIncludes == 0))
            {
              return_value_wcscasecmp_43=wcscasecmp(trimmedBuffer, L"#include.debug");
              tmp_if_expr_44 = return_value_wcscasecmp_43 == 0 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_44 = (_Bool)0;
            if(tmp_if_expr_44)
            {
              if(reader->preload == 0)
              {
                reader->debugIncludes = -1;
                if(depth == 0)
                  log_printf(-1, 3, L"Base configuration file is %s", filename);

              }

              else
                reader->debugIncludes = 0;
            }

            else
            {
              if(!(reader->enableIncludes == 0))
              {
                return_value_wcsstr_39=wcsstr(trimmedBuffer, L"#include ");
                if(return_value_wcsstr_39 == trimmedBuffer)
                  tmp_if_expr_41 = (_Bool)1;

                else
                {
                  return_value_wcsstr_40=wcsstr(trimmedBuffer, L"#include.required ");
                  tmp_if_expr_41 = return_value_wcsstr_40 == trimmedBuffer ? (_Bool)1 : (_Bool)0;
                }
                tmp_if_expr_42 = tmp_if_expr_41 ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr_42 = (_Bool)0;
              if(tmp_if_expr_42)
              {
                signed int *return_value_wcsstr_29;
                return_value_wcsstr_29=wcsstr(trimmedBuffer, L"#include.required ");
                if(return_value_wcsstr_29 == trimmedBuffer)
                {
                  includeRequired = -1;
                  c = trimmedBuffer + (signed long int)18;
                }

                else
                {
                  includeRequired = 0;
                  c = trimmedBuffer + (signed long int)9;
                }
                for( ; !(*c == 0); c = c + 1l)
                  if(!(*c == 32))
                    break;

                if(!(reader->debugIncludes == 0))
                  log_printf(-1, 3, L"Found #include file in %s: %s", filename, c);

                evaluateEnvironmentVariables(c, expBuffer, 512 + 1 + 16384, logWarnings, warnedVarMap, logWarningLogLevel);
                if(!(reader->debugIncludes == 0))
                {
                  return_value_wcscmp_30=wcscmp(c, expBuffer);
                  if(!(return_value_wcscmp_30 == 0))
                    log_printf(-1, 3, L"  After environment variable replacements: %s", (const void *)expBuffer);

                }

                void *return_value_malloc_31;
                return_value_malloc_31=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(4096 + 1));
                absoluteBuffer = (signed int *)return_value_malloc_31;
                if(absoluteBuffer == ((signed int *)NULL))
                  outOfMemory(L"RCF", 2);

                else
                {
                  signed int *return_value__trealpathN_33;
                  return_value__trealpathN_33=_trealpathN(expBuffer, absoluteBuffer, (unsigned long int)(4096 + 1));
                  if(return_value__trealpathN_33 == ((signed int *)NULL))
                  {
                    if(!(reader->debugIncludes == 0) || !(includeRequired == 0))
                    {
                      const signed int *return_value_getLastErrorText_32;
                      return_value_getLastErrorText_32=getLastErrorText();
                      log_printf(-1, 3, L"Unable to resolve the full path of included configuration file: %s (%s)\n  Referenced from: %s (line %d)\n  Current working directory: %s", (const void *)expBuffer, return_value_getLastErrorText_32, filename, lineNumber, originalWorkingDir);
                    }

                    free((void *)absoluteBuffer);
                    absoluteBuffer = (signed int *)(void *)0;
                  }

                }
                if(!(absoluteBuffer == ((signed int *)NULL)))
                {
                  if(!(depth >= 10))
                  {
                    readResult=configFileReader_Read(reader, absoluteBuffer, includeRequired, depth + 1, filename, lineNumber, argCommand, originalWorkingDir, warnedVarMap, logWarnings, logWarningLogLevel, isDebugging);
                    if(!(readResult == 101))
                    {
                      if(readResult == 102 || readResult == 103)
                      {
                        if(!(includeRequired == 0))
                        {
                          if(reader->preload == 0)
                          {
                            if(!(reader->debugIncludes == 0))
                              tmp_if_expr_34 = L"  ";

                            else
                              tmp_if_expr_34 = L"";
                            if(!(reader->debugIncludes == 0))
                              tmp_if_expr_35 = L"  ";

                            else
                              tmp_if_expr_35 = L"";
                            log_printf(-1, 4, L"%sThe required configuration file, %s, was not loaded.\n%s  Referenced from: %s (line %d)", tmp_if_expr_34, absoluteBuffer, tmp_if_expr_35, filename, lineNumber);
                          }

                          readResult = 103;
                        }

                        if(readResult == 103)
                          break;

                        else
                          readResult = 101;
                      }

                      else
                      {
                        _tprintf(L"Unexpected load error %d\n", readResult);
                        readResult = 101;
                      }
                    }

                  }

                  else
                    if(!(reader->debugIncludes == 0))
                      log_printf(-1, 3, L"  Unable to include configuration file, %s, because the max include depth was reached.", absoluteBuffer);

                  free((void *)absoluteBuffer);
                }

                else
                  if(!(includeRequired == 0))
                  {
                    if(reader->preload == 0)
                    {
                      if(!(reader->debugIncludes == 0))
                        tmp_if_expr_36 = L"  ";

                      else
                        tmp_if_expr_36 = L"";
                      if(!(reader->debugIncludes == 0))
                        tmp_if_expr_37 = L"  ";

                      else
                        tmp_if_expr_37 = L"";
                      log_printf(-1, 4, L"%sThe required configuration file, %s, was not read.\n%s  Referenced from: %s (line %d)", tmp_if_expr_36, (const void *)expBuffer, tmp_if_expr_37, filename, lineNumber);
                    }

                    readResult = 103;
                    break;
                  }

              }

              else
              {
                return_value_wcscasecmp_38=wcscasecmp(trimmedBuffer, L"#properties.debug");
                if(return_value_wcscasecmp_38 == 0)
                {
                  if(reader->preload == 0)
                    reader->debugProperties = -1;

                }

                else
                  if(!(*trimmedBuffer == 35))
                  {
                    signed int return_value;
                    return_value=reader->callback(reader->callbackParam, filename, lineNumber, trimmedBuffer, reader->debugProperties);
                    if(return_value == 0)
                    {
                      readResult = 103;
                      break;
                    }

                  }

              }
            }
          }

          free((void *)bufferW);
        }

        lineNumber = lineNumber + 1;
      }
      while(!(c == ((signed int *)NULL)));
      fclose(stream);
      return readResult;
    }
  }
}

// createInnerProperty
// file property.c line 168
struct Property * createInnerProperty()
{
  struct Property *property;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct Property) /*48ul*/ );
  property = (struct Property *)return_value_malloc_1;
  if(property == ((struct Property *)NULL))
  {
    outOfMemory(L"CIP", 1);
    return (struct Property *)(void *)0;
  }

  else
  {
    property->name = (signed int *)(void *)0;
    property->next = (struct Property *)(void *)0;
    property->previous = (struct Property *)(void *)0;
    property->value = (signed int *)(void *)0;
    return property;
  }
}

// createProperties
// file property.h line 151
extern struct Properties * createProperties()
{
  struct Properties *createProperties__1__properties;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct Properties) /*40ul*/ );
  createProperties__1__properties = (struct Properties *)return_value_malloc_1;
  if(createProperties__1__properties == ((struct Properties *)NULL))
  {
    outOfMemory(L"CP", 1);
    return (struct Properties *)(void *)0;
  }

  else
  {
    createProperties__1__properties->debugProperties = 0;
    createProperties__1__properties->logWarnings = -1;
    createProperties__1__properties->logWarningLogLevel = 4;
    createProperties__1__properties->first = (struct Property *)(void *)0;
    createProperties__1__properties->last = (struct Property *)(void *)0;
    createProperties__1__properties->warnedVarMap=newHashMap(8);
    if(createProperties__1__properties->warnedVarMap == ((struct anonymous_23 *)NULL))
    {
      disposeProperties(createProperties__1__properties);
      return (struct Properties *)(void *)0;
    }

    else
      return createProperties__1__properties;
  }
}

// daemonize
// file wrapper_unix.c line 1670
void daemonize(signed int argc, signed int **argv)
{
  signed int pid;
  signed int fd;
  setLogfileAutoClose(-1);
  closeLogfile();
  if(!(wrapperData->isDebugging == 0))
    log_printf(-1, 1, L"Spawning intermediate process...");

  pid=fork();
  if(!(pid >= 0))
  {
    const signed int *return_value_getLastErrorText_1;
    return_value_getLastErrorText_1=getLastErrorText();
    log_printf(-1, 5, L"Could not spawn daemon process: %s", return_value_getLastErrorText_1);
    appExit(1, argc, argv);
  }

  else
    if(!(pid == 0))
    {
      wrapperSleep(500);
      exit(0);
    }

  signed int return_value_setsid_3;
  return_value_setsid_3=setsid();
  if(return_value_setsid_3 == -1)
  {
    const signed int *return_value_getLastErrorText_2;
    return_value_getLastErrorText_2=getLastErrorText();
    log_printf(-1, 5, L"setsid() failed: %s", return_value_getLastErrorText_2);
    appExit(1, argc, argv);
  }

  signal(1, (void (*)(signed int))1);
  fd=_topen(L"/dev/null", 02, (unsigned int)0);
  if(!(fd == -1))
  {
    close(0);
    dup2(fd, 0);
    close(1);
    dup2(fd, 1);
    close(2);
    dup2(fd, 2);
    if(!(fd == 0) && !(fd == 1) && !(fd == 2))
      close(fd);

  }

  setConsoleLogLevelInt(9);
  if(!(wrapperData->isDebugging == 0))
    log_printf(-1, 1, L"Spawning daemon process...");

  pid=fork();
  if(!(pid >= 0))
  {
    const signed int *return_value_getLastErrorText_4;
    return_value_getLastErrorText_4=getLastErrorText();
    log_printf(-1, 5, L"Could not spawn daemon process: %s", return_value_getLastErrorText_4);
    appExit(1, argc, argv);
  }

  else
    if(!(pid == 0))
      exit(0);

  setLogfileAutoClose((signed int)(wrapperData->logfileCloseTimeout == 0));
}

// descSignal
// file wrapper_unix.c line 429
void descSignal(struct anonymous_3 *sigInfo)
{
  struct passwd *pw;
  unsigned long int req;
  signed int uName[33l];
  if(sigInfo == ((struct anonymous_3 *)NULL))
    log_printf_queue(-1, -1, 1, L"Signal trapped.  No details available.");

  else
    if(!(wrapperData->isDebugging == 0))
    {
      log_printf_queue(-1, -1, 1, L"Signal trapped.  Details:");
      const signed int *return_value_getSignalName_1;
      return_value_getSignalName_1=getSignalName(sigInfo->si_signo);
      const signed int *return_value_getSignalCodeDesc_2;
      return_value_getSignalCodeDesc_2=getSignalCodeDesc(sigInfo->si_code);
      log_printf_queue(-1, -1, 1, L"  signal number=%d (%S), source=\"%S\"", sigInfo->si_signo, return_value_getSignalName_1, return_value_getSignalCodeDesc_2);
      if(!(sigInfo->si_errno == 0))
      {
        char *return_value_strerror_3;
        return_value_strerror_3=strerror(sigInfo->si_errno);
        log_printf_queue(-1, -1, 1, L"  signal err=%d, \"%S\"", sigInfo->si_errno, return_value_strerror_3);
      }

      if(sigInfo->si_code == 0)
      {
        pw=getpwuid(sigInfo->_sifields._kill.si_uid);
        if(pw == ((struct passwd *)NULL))
          _sntprintf(uName, (unsigned long int)(32 + 1), L"<unknown>");

        else
        {
          req=mbstowcs((signed int *)(void *)0, pw->pw_name, (unsigned long int)0);
          if(req == 18446744073709551615ul)
            goto __CPROVER_DUMP_L9;

          if(req >= 33ul)
            req = (unsigned long int)32;

          mbstowcs(uName, pw->pw_name, req + (unsigned long int)1);
          uName[(signed long int)req] = 0;
        }
        signed int return_value_getsid_4;
        return_value_getsid_4=getsid(sigInfo->_sifields._kill.si_pid);
        log_printf_queue(-1, -1, 1, L"  signal generated by PID: %d (Session PID: %d), UID: %d (%S)", sigInfo->_sifields._kill.si_pid, return_value_getsid_4, sigInfo->_sifields._kill.si_uid, (const void *)uName);
      }

    }


__CPROVER_DUMP_L9:
  ;
}

// displayLaunchingTimeoutMessage
// file wrappereventloop.c line 305
void displayLaunchingTimeoutMessage()
{
  const signed int *mainClass;
  log_printf(-1, 5, L"Startup failed: Timed out waiting for a signal from the JVM.");
  mainClass=getStringProperty(properties, L"wrapper.java.mainclass", L"Main");
  signed int *return_value_wcsstr_1;
  return_value_wcsstr_1=wcsstr(mainClass, L"org.tanukisoftware.wrapper.WrapperSimpleApp");
  _Bool tmp_if_expr_3;
  signed int *return_value_wcsstr_2;
  if(!(return_value_wcsstr_1 == ((signed int *)NULL)))
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_wcsstr_2=wcsstr(mainClass, L"org.tanukisoftware.wrapper.WrapperStartStopApp");
    tmp_if_expr_3 = return_value_wcsstr_2 != (signed int *)(void *)0 ? (_Bool)1 : (_Bool)0;
  }
  if(!tmp_if_expr_3)
  {
    if(!(wrapperData->isAdviserEnabled == 0))
    {
      log_printf(-1, 7, L"");
      log_printf(-1, 7, L"------------------------------------------------------------------------");
      log_printf(-1, 7, L"Advice:");
      log_printf(-1, 7, L"The Wrapper consists of a native component as well as a set of classes\nwhich run within the JVM that it launches.  The Java component of the\nWrapper must be initialized promptly after the JVM is launched or the\nWrapper will timeout, as just happened.  Most likely the main class\nspecified in the Wrapper configuration file is not correctly initializing\nthe Wrapper classes:");
      log_printf(-1, 7, L"    %s", mainClass);
      log_printf(-1, 7, L"While it is possible to do so manually, the Wrapper ships with helper\nclasses to make this initialization processes automatic.\nPlease review the integration section of the Wrapper's documentation\nfor the various methods which can be employed to launch an application\nwithin the Wrapper:");
      log_printf(-1, 7, L"    http://wrapper.tanukisoftware.com/doc/english/integrate.html");
      log_printf(-1, 7, L"------------------------------------------------------------------------");
      log_printf(-1, 7, L"");
    }

  }

}

// disposeEnvironment
// file property.h line 163
extern void disposeEnvironment()
{
  struct EnvSrc *current;
  struct EnvSrc *previous;
  if(!(baseEnvSrc == ((struct EnvSrc *)NULL)))
  {
    current = baseEnvSrc;
    while(!(current == ((struct EnvSrc *)NULL)))
    {
      free((void *)current->name);
      previous = current;
      current = current->next;
      free((void *)previous);
    }
    baseEnvSrc = (struct EnvSrc *)(void *)0;
  }

}

// disposeInnerProperty
// file property.c line 188
void disposeInnerProperty(struct Property *property)
{
  if(!(property->name == ((signed int *)NULL)))
    free((void *)property->name);

  if(!(property->value == ((signed int *)NULL)))
    free((void *)property->value);

  free((void *)property);
}

// disposeJavaIO
// file wrapper.h line 623
extern void disposeJavaIO()
{
  stopJavaIOThread = -1;
  if(!(javaIOThreadStarted == 0))
  {
    while(javaIOThreadStopped == 0)
      wrapperSleep(100);
    pthread_cancel(javaIOThreadId);
  }

}

// disposeLogging
// file logger.h line 264
extern signed int disposeLogging()
{
  if(threadPrintBufferSize >= 1ul && !(threadPrintBuffer == ((signed int *)NULL)))
  {
    free((void *)threadPrintBuffer);
    threadPrintBuffer = (signed int *)(void *)0;
    threadPrintBufferSize = (unsigned long int)0;
  }

  if(threadMessageBufferSize >= 1ul && !(threadMessageBuffer == ((signed int *)NULL)))
  {
    free((void *)threadMessageBuffer);
    threadMessageBuffer = (signed int *)(void *)0;
    threadMessageBufferSize = (unsigned long int)0;
  }

  if(!(logFilePath == ((signed int *)NULL)))
  {
    free((void *)logFilePath);
    logFilePath = (signed int *)(void *)0;
  }

  if(!(currentLogFileName == ((signed int *)NULL)))
  {
    free((void *)currentLogFileName);
    currentLogFileName = (signed int *)(void *)0;
  }

  if(!(workLogFileName == ((signed int *)NULL)))
  {
    free((void *)workLogFileName);
    workLogFileName = (signed int *)(void *)0;
  }

  if(!(loginfoSourceName == ((char *)NULL)) && !(loginfoSourceName == defaultLoginfoSourceName))
  {
    free((void *)loginfoSourceName);
    loginfoSourceName = (char *)(void *)0;
  }

  if(!(logfileFP == ((struct _IO_FILE *)NULL)))
  {
    fclose(logfileFP);
    logfileFP = (struct _IO_FILE *)(void *)0;
  }

  return 0;
}

// disposeProperties
// file property.h line 157
extern void disposeProperties(struct Properties *properties)
{
  struct Property *tempProperty;
  struct Property *property;
  if(!(properties == ((struct Properties *)NULL)))
  {
    property = properties->first;
    properties->first = (struct Property *)(void *)0;
    properties->last = (struct Property *)(void *)0;
    for( ; !(property == ((struct Property *)NULL)); property = tempProperty)
    {
      tempProperty = property->next;
      disposeInnerProperty(property);
      property = (struct Property *)(void *)0;
    }
    if(!(properties->warnedVarMap == ((struct anonymous_23 *)NULL)))
      freeHashMap(properties->warnedVarMap);

    free((void *)properties);
    properties = (struct Properties *)(void *)0;
  }

}

// disposeTimer
// file wrapper.h line 624
extern void disposeTimer()
{
  stopTimerThread = -1;
  if(!(timerThreadStarted == 0))
  {
    while(timerThreadStopped == 0)
      wrapperSleep(100);
    pthread_cancel(timerThreadId);
  }

}

// dumpEnvironment
// file wrapper.c line 555
void dumpEnvironment(signed int logLevel)
{
  struct EnvSrc *envSrc;
  signed int *envVal;
  log_printf(-1, logLevel, L"");
  log_printf(-1, logLevel, L"Environment variables (Source | Name=Value) BEGIN:");
  envSrc = baseEnvSrc;
  signed int *tmp_if_expr_1;
  for( ; !(envSrc == ((struct EnvSrc *)NULL)); envSrc = envSrc->next)
  {
    envVal=_tgetenv(envSrc->name);
    if(!(envVal == ((signed int *)NULL)))
      tmp_if_expr_1 = envVal;

    else
      tmp_if_expr_1 = L"<null>";
    log_printf(-1, logLevel, L"  %c%c%c%c%c | %s=%s", (envSrc->source & 1) != 0 ? 80 : 45, 45, 45, (envSrc->source & 2) != 0 ? 87 : 45, (envSrc->source & 4) != 0 ? 67 : 45, envSrc->name, tmp_if_expr_1);
    if(!(envVal == ((signed int *)NULL)))
      free((void *)envVal);

  }
  log_printf(-1, logLevel, L"Environment variables END:");
  log_printf(-1, logLevel, L"");
}

// dumpProperties
// file property.c line 1716
extern void dumpProperties(struct Properties *properties)
{
  struct Property *property = properties->first;
  for( ; !(property == ((struct Property *)NULL)); property = property->next)
    log_printf(-1, 3, L"    name:%s value:%s", property->name, property->value);
}

// evaluateEnvironmentVariables
// file property.h line 113
extern void evaluateEnvironmentVariables(const signed int *propertyValue, signed int *buffer, signed int bufferLength, signed int warnUndefinedVars, struct anonymous_23 *warnedUndefVarMap, signed int warnLogLevel)
{
  const signed int *in;
  signed int *out;
  signed int *envName;
  signed int *envValue;
  signed int envValueNeedFree;
  signed int *start;
  signed int *end;
  unsigned long int len;
  unsigned long int outLen;
  unsigned long int bufferAvailable;
  buffer[(signed long int)0] = 0;
  in = propertyValue;
  out = buffer;
  bufferAvailable = (unsigned long int)(bufferLength - 1);
  signed int *return_value_wcsstr_2;
  while(!(*in == 0))
  {
    start=wcschr(in, 37);
    if(!(start == ((signed int *)NULL)))
    {
      end=wcschr(start + (signed long int)1, 37);
      if(!(end == ((signed int *)NULL)))
      {
        len = (unsigned long int)(signed int)((end - start) - (signed long int)1);
        void *return_value_malloc_1;
        return_value_malloc_1=malloc(sizeof(signed int) /*4ul*/  * (len + (unsigned long int)1));
        envName = (signed int *)return_value_malloc_1;
        if(envName == ((signed int *)NULL))
        {
          outOfMemory(L"EEV", 1);
          goto __CPROVER_DUMP_L25;
        }

        wcsncpy(envName, start + (signed long int)1, len);
        envName[(signed long int)len] = 0;
        envValueNeedFree = 0;
        signed int *return_value_wcsstr_3;
        return_value_wcsstr_3=wcsstr(envName, L"WRAPPER_TIME_");
        if(return_value_wcsstr_3 == envName)
          envValue=generateTimeValue(envName + (signed long int)13, &loadPropertiesTM);

        else
        {
          return_value_wcsstr_2=wcsstr(envName, L"WRAPPER_RAND_");
          if(return_value_wcsstr_2 == envName)
            envValue=generateRandValue(envName + (signed long int)13);

          else
          {
            envValue=_tgetenv(envName);
            envValueNeedFree = -1;
          }
        }
        if(!(envValue == ((signed int *)NULL)))
        {
          outLen = (unsigned long int)(signed int)(start - in);
          if(!(bufferAvailable >= outLen))
            outLen = bufferAvailable;

          if(outLen >= 1ul)
          {
            wcsncpy(out, in, outLen);
            out = out + (signed long int)outLen;
            bufferAvailable = bufferAvailable - outLen;
          }

          outLen=wcslen(envValue);
          if(!(bufferAvailable >= outLen))
            outLen = bufferAvailable;

          if(outLen >= 1ul)
          {
            wcsncpy(out, envValue, outLen);
            out = out + (signed long int)outLen;
            bufferAvailable = bufferAvailable - outLen;
          }

          if(!(envValueNeedFree == 0))
            free((void *)envValue);

          out[(signed long int)0] = 0;
          in = end + (signed long int)1;
        }

        else
        {
          len = (unsigned long int)((end - in) + (signed long int)1);
          outLen = len;
          if(!(bufferAvailable >= outLen))
            outLen = bufferAvailable;

          if(outLen >= 1ul)
          {
            wcsncpy(out, in, outLen);
            out = out + (signed long int)outLen;
            bufferAvailable = bufferAvailable - outLen;
          }

          in = in + (signed long int)len;
          out[(signed long int)0] = 0;
          if(!(warnUndefinedVars == 0))
          {
            const signed int *return_value_hashMapGetKWVW_4;
            return_value_hashMapGetKWVW_4=hashMapGetKWVW(warnedUndefVarMap, envName);
            if(return_value_hashMapGetKWVW_4 == ((const signed int *)NULL))
            {
              log_printf(-1, warnLogLevel, L"The '%s' environment variable was referenced but has not been defined.", envName);
              hashMapPutKWVW(warnedUndefVarMap, envName, envName);
            }

          }

        }
        free((void *)envName);
      }

      else
      {
        len=wcslen(in);
        outLen = len;
        if(!(bufferAvailable >= outLen))
          outLen = bufferAvailable;

        if(outLen >= 1ul)
        {
          wcsncpy(out, in, outLen);
          out = out + (signed long int)outLen;
          bufferAvailable = bufferAvailable - outLen;
        }

        in = in + (signed long int)len;
        out[(signed long int)0] = 0;
      }
    }

    else
    {
      len=wcslen(in);
      outLen = len;
      if(!(bufferAvailable >= outLen))
        outLen = bufferAvailable;

      if(outLen >= 1ul)
      {
        wcsncpy(out, in, outLen);
        out = out + (signed long int)outLen;
        bufferAvailable = bufferAvailable - outLen;
      }

      in = in + (signed long int)len;
      out[(signed long int)0] = 0;
    }
  }

__CPROVER_DUMP_L25:
  ;
}

// expandEscapedCharacters
// file property.c line 1022
signed int * expandEscapedCharacters(const signed int *buffer)
{
  unsigned long int inPos;
  unsigned long int outPos;
  signed int *outBuffer;
  signed int i;
  signed int c1;
  signed int c2;
  outBuffer = (signed int *)(void *)0;
  i = 0;
  for( ; !(i >= 2); i = i + 1)
  {
    inPos = (unsigned long int)0;
    outPos = (unsigned long int)0;
    do
    {
      c1 = buffer[(signed long int)inPos];
      if(c1 == 92 || c1 == 165)
      {
        c2 = buffer[(signed long int)(inPos + (unsigned long int)1)];
        if(c2 == 110)
        {
          inPos = inPos + 1ul;
          if(!(outBuffer == ((signed int *)NULL)))
            outBuffer[(signed long int)outPos] = 10;

          outPos = outPos + 1ul;
        }

        else
          if(c2 == 92 || c2 == 165)
          {
            inPos = inPos + 1ul;
            if(!(outBuffer == ((signed int *)NULL)))
              outBuffer[(signed long int)outPos] = c1;

            outPos = outPos + 1ul;
          }

          else
            if(c2 == 0)
            {
              if(!(outBuffer == ((signed int *)NULL)))
                outBuffer[(signed long int)outPos] = c1;

              outPos = outPos + 1ul;
              c1 = 0;
            }

            else
            {
              inPos = inPos + 1ul;
              if(!(outBuffer == ((signed int *)NULL)))
              {
                outBuffer[(signed long int)outPos] = c1;
                outBuffer[(signed long int)(outPos + (unsigned long int)1)] = c2;
              }

              outPos = outPos + (unsigned long int)2;
            }
        inPos = inPos + 1ul;
      }

      else
        if(!(c1 == 0))
        {
          if(!(outBuffer == ((signed int *)NULL)))
            outBuffer[(signed long int)outPos] = c1;

          outPos = outPos + 1ul;
          inPos = inPos + 1ul;
        }

    }
    while(!(c1 == 0));
    if(!(outBuffer == ((signed int *)NULL)))
      outBuffer[(signed long int)outPos] = 0;

    outPos = outPos + 1ul;
    if(outBuffer == ((signed int *)NULL))
    {
      void *return_value_malloc_1;
      return_value_malloc_1=malloc(outPos * sizeof(signed int) /*4ul*/ );
      outBuffer = (signed int *)return_value_malloc_1;
      if(outBuffer == ((signed int *)NULL))
      {
        outOfMemory(L"ELF", 1);
        return (signed int *)(void *)0;
      }

    }

  }
  return outBuffer;
}

// findPathOf
// file wrapper.c line 5230
extern signed int * findPathOf(const signed int *exe, const signed int *name)
{
  signed int *searchPath;
  signed int *beg;
  signed int *end;
  signed int stop;
  signed int found;
  signed int pth[4097l];
  signed int *ret;
  signed int resolvedPath[4097l];
  if(*exe == 47)
  {
    signed int *return_value__trealpathN_5;
    return_value__trealpathN_5=_trealpathN(exe, resolvedPath, (unsigned long int)(4096 + 1));
    if(!(return_value__trealpathN_5 == ((signed int *)NULL)))
    {
      wcsncpy(pth, resolvedPath, (unsigned long int)(4096 + 1));
      signed int return_value_checkIfExecutable_4;
      return_value_checkIfExecutable_4=checkIfExecutable(pth);
      if(!(return_value_checkIfExecutable_4 == 0))
      {
        unsigned long int return_value_wcslen_1;
        return_value_wcslen_1=wcslen(pth);
        void *return_value_malloc_2;
        return_value_malloc_2=malloc((return_value_wcslen_1 + (unsigned long int)1) * sizeof(signed int) /*4ul*/ );
        ret = (signed int *)return_value_malloc_2;
        if(ret == ((signed int *)NULL))
        {
          outOfMemory(L"FPO", 1);
          return (signed int *)(void *)0;
        }

        unsigned long int return_value_wcslen_3;
        return_value_wcslen_3=wcslen(pth);
        wcsncpy(ret, pth, return_value_wcslen_3 + (unsigned long int)1);
        if(!(wrapperData->isDebugging == 0))
          log_printf(-1, 1, L"Resolved the real path of %s as an absolute reference: %s", name, ret);

        return ret;
      }

    }

    else
      if(!(wrapperData->isDebugging == 0))
        log_printf(-1, 1, L"Unable to resolve the real path of %s as an absolute reference: %s (Problem at: %s)", name, exe, (const void *)resolvedPath);

    return (signed int *)(void *)0;
  }

  signed int *return_value__trealpathN_10;
  return_value__trealpathN_10=_trealpathN(exe, resolvedPath, (unsigned long int)(4096 + 1));
  if(!(return_value__trealpathN_10 == ((signed int *)NULL)))
  {
    wcsncpy(pth, resolvedPath, (unsigned long int)(4096 + 1));
    signed int return_value_checkIfExecutable_9;
    return_value_checkIfExecutable_9=checkIfExecutable(pth);
    if(!(return_value_checkIfExecutable_9 == 0))
    {
      unsigned long int return_value_wcslen_6;
      return_value_wcslen_6=wcslen(pth);
      void *return_value_malloc_7;
      return_value_malloc_7=malloc((return_value_wcslen_6 + (unsigned long int)1) * sizeof(signed int) /*4ul*/ );
      ret = (signed int *)return_value_malloc_7;
      if(ret == ((signed int *)NULL))
      {
        outOfMemory(L"FPO", 2);
        return (signed int *)(void *)0;
      }

      unsigned long int return_value_wcslen_8;
      return_value_wcslen_8=wcslen(pth);
      wcsncpy(ret, pth, return_value_wcslen_8 + (unsigned long int)1);
      if(!(wrapperData->isDebugging == 0))
        log_printf(-1, 1, L"Resolved the real path of %s as a relative reference: %s", name, ret);

      return ret;
    }

  }

  else
    if(!(wrapperData->isDebugging == 0))
      log_printf(-1, 1, L"Unable to resolve the real path of %s as a relative reference: %s", name, exe);

  signed int *return_value_wcschr_17;
  return_value_wcschr_17=wcschr(exe, 47);
  unsigned long int return_value_wcslen_11;
  if(return_value_wcschr_17 == ((signed int *)NULL))
  {
    searchPath=_tgetenv(L"PATH");
    if(!(searchPath == ((signed int *)NULL)))
    {
      return_value_wcslen_11=wcslen(searchPath);
      if(!(return_value_wcslen_11 >= 1ul))
      {
        free((void *)searchPath);
        searchPath = (signed int *)(void *)0;
      }

    }

    if(!(searchPath == ((signed int *)NULL)))
    {
      if(!(wrapperData->isDebugging == 0))
        log_printf(-1, 1, L"Attempt to locate %s on system PATH: %s", name, exe);

      beg = searchPath;
      stop = 0;
      found = 0;
      do
      {
        end=wcschr(beg, 58);
        if(end == ((signed int *)NULL))
        {
          stop = 1;
          wcsncpy(pth, beg, (unsigned long int)(4096 + 1));
        }

        else
        {
          wcsncpy(pth, beg, (unsigned long int)(end - beg));
          pth[end - beg] = 0;
        }
        unsigned long int return_value_wcslen_12;
        return_value_wcslen_12=wcslen(pth);
        if(!(pth[-1l + (signed long int)return_value_wcslen_12] == 47))
          wcsncat(pth, L"/", (unsigned long int)(4096 + 1));

        wcsncat(pth, exe, (unsigned long int)(4096 + 1));
        signed int *return_value__trealpathN_13;
        return_value__trealpathN_13=_trealpathN(pth, resolvedPath, (unsigned long int)(4096 + 1));
        if(!(return_value__trealpathN_13 == ((signed int *)NULL)))
        {
          wcsncpy(pth, resolvedPath, (unsigned long int)(4096 + 1));
          found=checkIfExecutable(pth);
        }

        if(stop == 0)
          beg = end + (signed long int)1;

      }
      while(found == 0 && stop == 0);
      free((void *)searchPath);
      if(!(found == 0))
      {
        unsigned long int return_value_wcslen_14;
        return_value_wcslen_14=wcslen(pth);
        void *return_value_malloc_15;
        return_value_malloc_15=malloc((return_value_wcslen_14 + (unsigned long int)1) * sizeof(signed int) /*4ul*/ );
        ret = (signed int *)return_value_malloc_15;
        if(ret == ((signed int *)NULL))
        {
          outOfMemory(L"FPO", 3);
          return (signed int *)(void *)0;
        }

        unsigned long int return_value_wcslen_16;
        return_value_wcslen_16=wcslen(pth);
        wcsncpy(ret, pth, return_value_wcslen_16 + (unsigned long int)1);
        if(!(wrapperData->isDebugging == 0))
          log_printf(-1, 1, L"Resolved the real path of %s from system PATH: %s", name, ret);

        return ret;
      }

      else
        if(!(wrapperData->isDebugging == 0))
          log_printf(-1, 1, L"Unable to resolve the real path of %s on the system PATH: %s", name, exe);

    }

  }

  return (signed int *)(void *)0;
}

// flushLogfile
// file logger.h line 230
extern void flushLogfile()
{
  signed int return_value_lockLoggingMutex_1;
  return_value_lockLoggingMutex_1=lockLoggingMutex();
  if(return_value_lockLoggingMutex_1 == 0)
  {
    if(!(logfileFP == ((struct _IO_FILE *)NULL)))
      fflush(logfileFP);

    signed int return_value_releaseLoggingMutex_2;
    return_value_releaseLoggingMutex_2=releaseLoggingMutex();
  }

}

// freeHashMap
// file wrapper_hashmap.h line 46
extern void freeHashMap(struct anonymous_23 *hashMap)
{
  signed int i;
  struct anonymous_24 *bucket;
  struct HashEntry *thisEntry;
  struct HashEntry *nextEntry;
  if(!(hashMap == ((struct anonymous_23 *)NULL)))
  {
    if(!(hashMap->buckets == ((struct anonymous_24 **)NULL)))
    {
      i = 0;
      for( ; !(i >= hashMap->bucketCount); i = i + 1)
      {
        bucket = hashMap->buckets[(signed long int)i];
        thisEntry = bucket->firstEntry;
        for( ; !(thisEntry == ((struct HashEntry *)NULL)); thisEntry = nextEntry)
        {
          nextEntry = thisEntry->nextEntry;
          if(!(thisEntry->key == NULL))
            free(thisEntry->key);

          if(!(thisEntry->value == NULL))
            free(thisEntry->value);

          free((void *)thisEntry);
        }
        free((void *)bucket);
      }
      free((void *)hashMap->buckets);
    }

    free((void *)hashMap);
  }

}

// freeStringProperties
// file property.h line 260
extern void freeStringProperties(signed int **propertyNames, signed int **propertyValues, unsigned long int *propertyIndices)
{
  free((void *)propertyNames);
  free((void *)propertyValues);
  free((void *)propertyIndices);
}

// generateLogFileName
// file logger.c line 1550
void generateLogFileName(signed int *buffer, unsigned long int bufferSize, const signed int *template, const signed int *nowDate, const signed int *rollNum)
{
  unsigned long int bufferLen;
  unsigned long int return_value_wcslen_1;
  return_value_wcslen_1=wcslen(logFilePath);
  wcsncpy(buffer, template, return_value_wcslen_1 + (unsigned long int)11);
  signed int *return_value_wcsstr_2;
  return_value_wcsstr_2=wcsstr(buffer, L"YYYYMMDD");
  if(!(return_value_wcsstr_2 == ((signed int *)NULL)))
  {
    if(nowDate == ((const signed int *)NULL))
    {
      replaceStringLongWithShort(buffer, L"-YYYYMMDD", (const signed int *)(void *)0);
      replaceStringLongWithShort(buffer, L"_YYYYMMDD", (const signed int *)(void *)0);
      replaceStringLongWithShort(buffer, L".YYYYMMDD", (const signed int *)(void *)0);
      replaceStringLongWithShort(buffer, L"YYYYMMDD", (const signed int *)(void *)0);
    }

    else
      replaceStringLongWithShort(buffer, L"YYYYMMDD", nowDate);
  }

  signed int *return_value_wcsstr_3;
  return_value_wcsstr_3=wcsstr(buffer, L"ROLLNUM");
  if(!(return_value_wcsstr_3 == ((signed int *)NULL)))
  {
    if(rollNum == ((const signed int *)NULL))
    {
      replaceStringLongWithShort(buffer, L"-ROLLNUM", (const signed int *)(void *)0);
      replaceStringLongWithShort(buffer, L"_ROLLNUM", (const signed int *)(void *)0);
      replaceStringLongWithShort(buffer, L".ROLLNUM", (const signed int *)(void *)0);
      replaceStringLongWithShort(buffer, L"ROLLNUM", (const signed int *)(void *)0);
    }

    else
      replaceStringLongWithShort(buffer, L"ROLLNUM", rollNum);
  }

  else
    if(!(rollNum == ((const signed int *)NULL)))
    {
      bufferLen=wcslen(buffer);
      _sntprintf(buffer + (signed long int)bufferLen, bufferSize - bufferLen, L".%s", rollNum);
      buffer[(signed long int)(bufferSize - (unsigned long int)1)] = 0;
    }

}

// generateRandValue
// file property.c line 238
extern signed int * generateRandValue(const signed int *format)
{
  signed int return_value_wcscasecmp_14;
  return_value_wcscasecmp_14=wcscasecmp(format, L"N");
  signed int return_value_wcscasecmp_13;
  signed int return_value_wcscasecmp_12;
  signed int return_value_wcscasecmp_11;
  signed int return_value_wcscasecmp_10;
  signed int return_value_wcscasecmp_9;
  if(return_value_wcscasecmp_14 == 0)
  {
    signed int return_value_rand_1;
    return_value_rand_1=rand();
    _sntprintf(generateValueBuffer, (unsigned long int)256, L"%01d", return_value_rand_1 % 10);
  }

  else
  {
    return_value_wcscasecmp_13=wcscasecmp(format, L"NN");
    if(return_value_wcscasecmp_13 == 0)
    {
      signed int return_value_rand_2;
      return_value_rand_2=rand();
      _sntprintf(generateValueBuffer, (unsigned long int)256, L"%02d", return_value_rand_2 % 100);
    }

    else
    {
      return_value_wcscasecmp_12=wcscasecmp(format, L"NNN");
      if(return_value_wcscasecmp_12 == 0)
      {
        signed int return_value_rand_3;
        return_value_rand_3=rand();
        _sntprintf(generateValueBuffer, (unsigned long int)256, L"%03d", return_value_rand_3 % 1000);
      }

      else
      {
        return_value_wcscasecmp_11=wcscasecmp(format, L"NNNN");
        if(return_value_wcscasecmp_11 == 0)
        {
          signed int return_value_rand_4;
          return_value_rand_4=rand();
          _sntprintf(generateValueBuffer, (unsigned long int)256, L"%04d", return_value_rand_4 % 10000);
        }

        else
        {
          return_value_wcscasecmp_10=wcscasecmp(format, L"NNNNN");
          if(return_value_wcscasecmp_10 == 0)
          {
            signed int return_value_rand_5;
            return_value_rand_5=rand();
            signed int return_value_rand_6;
            return_value_rand_6=rand();
            _sntprintf(generateValueBuffer, (unsigned long int)256, L"%04d%01d", return_value_rand_5 % 10000, return_value_rand_6 % 10);
          }

          else
          {
            return_value_wcscasecmp_9=wcscasecmp(format, L"NNNNNN");
            if(return_value_wcscasecmp_9 == 0)
            {
              signed int return_value_rand_7;
              return_value_rand_7=rand();
              signed int return_value_rand_8;
              return_value_rand_8=rand();
              _sntprintf(generateValueBuffer, (unsigned long int)256, L"%04d%02d", return_value_rand_7 % 10000, return_value_rand_8 % 100);
            }

            else
              _sntprintf(generateValueBuffer, (unsigned long int)256, L"{INVALID}");
          }
        }
      }
    }
  }
  return generateValueBuffer;
}

// generateTimeValue
// file property.c line 206
extern signed int * generateTimeValue(const signed int *format, struct tm *timeTM)
{
  signed int return_value_wcscasecmp_5;
  return_value_wcscasecmp_5=wcscasecmp(format, L"YYYYMMDDHHIISS");
  signed int return_value_wcscasecmp_4;
  signed int return_value_wcscasecmp_3;
  signed int return_value_wcscasecmp_2;
  signed int return_value_wcscasecmp_1;
  if(return_value_wcscasecmp_5 == 0)
    _sntprintf(generateValueBuffer, (unsigned long int)256, L"%04d%02d%02d%02d%02d%02d", timeTM->tm_year + 1900, timeTM->tm_mon + 1, timeTM->tm_mday, timeTM->tm_hour, timeTM->tm_min, timeTM->tm_sec);

  else
  {
    return_value_wcscasecmp_4=wcscasecmp(format, L"YYYYMMDD_HHIISS");
    if(return_value_wcscasecmp_4 == 0)
      _sntprintf(generateValueBuffer, (unsigned long int)256, L"%04d%02d%02d_%02d%02d%02d", timeTM->tm_year + 1900, timeTM->tm_mon + 1, timeTM->tm_mday, timeTM->tm_hour, timeTM->tm_min, timeTM->tm_sec);

    else
    {
      return_value_wcscasecmp_3=wcscasecmp(format, L"YYYYMMDDHHII");
      if(return_value_wcscasecmp_3 == 0)
        _sntprintf(generateValueBuffer, (unsigned long int)256, L"%04d%02d%02d%02d%02d", timeTM->tm_year + 1900, timeTM->tm_mon + 1, timeTM->tm_mday, timeTM->tm_hour, timeTM->tm_min);

      else
      {
        return_value_wcscasecmp_2=wcscasecmp(format, L"YYYYMMDDHH");
        if(return_value_wcscasecmp_2 == 0)
          _sntprintf(generateValueBuffer, (unsigned long int)256, L"%04d%02d%02d%02d", timeTM->tm_year + 1900, timeTM->tm_mon + 1, timeTM->tm_mday, timeTM->tm_hour);

        else
        {
          return_value_wcscasecmp_1=wcscasecmp(format, L"YYYYMMDD");
          if(return_value_wcscasecmp_1 == 0)
            _sntprintf(generateValueBuffer, (unsigned long int)256, L"%04d%02d%02d", timeTM->tm_year + 1900, timeTM->tm_mon + 1, timeTM->tm_mday);

          else
            _sntprintf(generateValueBuffer, (unsigned long int)256, L"{INVALID}");
        }
      }
    }
  }
  return generateValueBuffer;
}

// generateVersionBanner
// file wrapper.c line 3098
signed int * generateVersionBanner()
{
  signed int *banner = L"Java Service Wrapper %s Edition %s-bit %s\n  Copyright (C) 1999-%s Tanuki Software, Ltd. All Rights Reserved.\n    http://wrapper.tanukisoftware.com";
  signed int *product = L"Community";
  signed int *copyright = L"2014";
  signed int *buffer;
  unsigned long int len;
  unsigned long int return_value_wcslen_1;
  return_value_wcslen_1=wcslen(banner);
  unsigned long int return_value_wcslen_2;
  return_value_wcslen_2=wcslen(product);
  unsigned long int return_value_wcslen_3;
  return_value_wcslen_3=wcslen(wrapperBits);
  unsigned long int return_value_wcslen_4;
  return_value_wcslen_4=wcslen(wrapperVersionRoot);
  unsigned long int return_value_wcslen_5;
  return_value_wcslen_5=wcslen(copyright);
  len = return_value_wcslen_1 + return_value_wcslen_2 + return_value_wcslen_3 + return_value_wcslen_4 + return_value_wcslen_5 + (unsigned long int)1;
  void *return_value_malloc_6;
  return_value_malloc_6=malloc(sizeof(signed int) /*4ul*/  * len);
  buffer = (signed int *)return_value_malloc_6;
  if(buffer == ((signed int *)NULL))
  {
    outOfMemory(L"GVB", 1);
    return (signed int *)(void *)0;
  }

  else
  {
    _sntprintf(buffer, len, banner, product, wrapperBits, wrapperVersionRoot, copyright);
    return buffer;
  }
}

// getActionForName
// file wrapper.c line 7531
signed int getActionForName(signed int *actionName, const signed int *propertyName, signed int logErrors)
{
  unsigned long int len;
  unsigned long int i;
  signed int action;
  len=wcslen(actionName);
  i = (unsigned long int)0;
  for( ; !(i >= len); i = i + 1ul)
  {
    unsigned int return_value_towupper_1;
    return_value_towupper_1=towupper((unsigned int)actionName[(signed long int)i]);
    actionName[(signed long int)i] = (signed int)return_value_towupper_1;
  }
  signed int return_value_wcscmp_11;
  return_value_wcscmp_11=wcscmp(actionName, L"RESTART");
  signed int return_value_wcscmp_10;
  signed int return_value_wcscmp_9;
  signed int return_value_wcscmp_8;
  signed int return_value_wcscmp_7;
  signed int return_value_wcscmp_6;
  signed int return_value_wcscmp_5;
  signed int return_value_wcscmp_4;
  signed int return_value_wcscmp_3;
  signed int *return_value_wcsstr_2;
  if(return_value_wcscmp_11 == 0)
    action = -2;

  else
  {
    return_value_wcscmp_10=wcscmp(actionName, L"SHUTDOWN");
    if(return_value_wcscmp_10 == 0)
      action = -3;

    else
    {
      return_value_wcscmp_9=wcscmp(actionName, L"DUMP");
      if(return_value_wcscmp_9 == 0)
        action = -4;

      else
      {
        return_value_wcscmp_8=wcscmp(actionName, L"NONE");
        if(return_value_wcscmp_8 == 0)
          action = -1;

        else
        {
          return_value_wcscmp_7=wcscmp(actionName, L"DEBUG");
          if(return_value_wcscmp_7 == 0)
            action = -5;

          else
          {
            return_value_wcscmp_6=wcscmp(actionName, L"SUCCESS");
            if(return_value_wcscmp_6 == 0)
              action = -8;

            else
            {
              return_value_wcscmp_5=wcscmp(actionName, L"GC");
              if(return_value_wcscmp_5 == 0)
                action = -9;

              else
              {
                return_value_wcscmp_4=wcscmp(actionName, L"PAUSE");
                if(return_value_wcscmp_4 == 0)
                {
                  if(!(logErrors == 0))
                    log_printf(-1, 4, L"Pause actions require the Standard Edition.  Ignoring action '%s' in the %s property.", actionName, propertyName);

                  action = 0;
                }

                else
                {
                  return_value_wcscmp_3=wcscmp(actionName, L"RESUME");
                  if(return_value_wcscmp_3 == 0)
                  {
                    if(!(logErrors == 0))
                      log_printf(-1, 4, L"Resume actions require the Standard Edition.  Ignoring action '%s' in the %s property.", actionName, propertyName);

                    action = 0;
                  }

                  else
                  {
                    return_value_wcsstr_2=wcsstr(actionName, L"USER_");
                    if(return_value_wcsstr_2 == actionName)
                    {
                      if(!(logErrors == 0))
                        log_printf(-1, 4, L"User actions require the Professional Edition.  Ignoring action '%s' in the %s property.", actionName, propertyName);

                      action = 0;
                    }

                    else
                    {
                      if(!(logErrors == 0))
                        log_printf(-1, 4, L"Encountered an unknown action '%s' in the %s property.  Skipping.", actionName, propertyName);

                      action = 0;
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
  return action;
}

// getBackendTypeForName
// file wrapper.c line 7845
signed int getBackendTypeForName(const signed int *typeName)
{
  signed int return_value_wcscasecmp_5;
  return_value_wcscasecmp_5=wcscasecmp(typeName, L"SOCKET");
  signed int return_value_wcscasecmp_4;
  signed int return_value_wcscasecmp_3;
  signed int return_value_wcscasecmp_2;
  signed int return_value_wcscasecmp_1;
  if(return_value_wcscasecmp_5 == 0)
    return 0x01 | 0x02;

  else
  {
    return_value_wcscasecmp_4=wcscasecmp(typeName, L"SOCKET_IPv4");
    if(return_value_wcscasecmp_4 == 0)
      return 0x01;

    else
    {
      return_value_wcscasecmp_3=wcscasecmp(typeName, L"SOCKET_IPv6");
      if(return_value_wcscasecmp_3 == 0)
        return 0x02;

      else
      {
        return_value_wcscasecmp_2=wcscasecmp(typeName, L"PIPE");
        if(return_value_wcscasecmp_2 == 0)
          return 0x04;

        else
        {
          return_value_wcscasecmp_1=wcscasecmp(typeName, L"AUTO");
          if(return_value_wcscasecmp_1 == 0)
            return 0x01 | 0x02 | 0x04;

          else
            return 0;
        }
      }
    }
  }
}

// getBooleanProperty
// file property.h line 264
extern signed int getBooleanProperty(struct Properties *properties, const signed int *propertyName, signed int defaultValue)
{
  const signed int *defaultValueS;
  struct Property *property;
  const signed int *propertyValue;
  if(!(defaultValue == 0))
    defaultValueS = L"true";

  else
    defaultValueS = L"false";
  property=getInnerProperty(properties, propertyName, -1);
  if(property == ((struct Property *)NULL))
    propertyValue = defaultValueS;

  else
    propertyValue = property->value;
  signed int return_value_wcscasecmp_2;
  return_value_wcscasecmp_2=wcscasecmp(propertyValue, L"true");
  signed int return_value_wcscasecmp_1;
  if(return_value_wcscasecmp_2 == 0)
    return -1;

  else
  {
    return_value_wcscasecmp_1=wcscasecmp(propertyValue, L"false");
    if(return_value_wcscasecmp_1 == 0)
      return 0;

    else
    {
      if(!(properties->logWarnings == 0))
        log_printf(-1, properties->logWarningLogLevel, L"Encountered an invalid boolean value for configuration property %s=%s.  Resolving to %s.", propertyName, propertyValue, (const void *)L"FALSE");

      return 0;
    }
  }
}

// getBucketId
// file wrapper_hashmap.c line 164
signed int getBucketId(struct anonymous_23 *hashMap, const signed int *key)
{
  unsigned long int len;
  len=wcslen(key);
  unsigned long int i;
  signed int hash = 0;
  i = (unsigned long int)0;
  for( ; !(i >= len); i = i + 1ul)
    hash = hash + key[(signed long int)i] & 0xffff;
  return hash % hashMap->bucketCount;
}

// getConsoleLogLevelInt
// file logger.c line 1146
extern signed int getConsoleLogLevelInt()
{
  return currentConsoleLevel;
}

// getCurrentLogfilePath
// file logger.h line 195
extern signed int * getCurrentLogfilePath()
{
  signed int *logFileCopy;
  signed int return_value_lockLoggingMutex_1;
  return_value_lockLoggingMutex_1=lockLoggingMutex();
  if(!(return_value_lockLoggingMutex_1 == 0))
    return (signed int *)(void *)0;

  else
  {
    unsigned long int return_value_wcslen_2;
    return_value_wcslen_2=wcslen(currentLogFileName);
    void *return_value_malloc_3;
    return_value_malloc_3=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_2 + (unsigned long int)1));
    logFileCopy = (signed int *)return_value_malloc_3;
    if(logFileCopy == ((signed int *)NULL))
      _tprintf(L"Out of memory in logging code (%s)\n", (const void *)L"CLFP1");

    else
    {
      unsigned long int return_value_wcslen_4;
      return_value_wcslen_4=wcslen(currentLogFileName);
      wcsncpy(logFileCopy, currentLogFileName, return_value_wcslen_4 + (unsigned long int)1);
    }
    signed int return_value_releaseLoggingMutex_5;
    return_value_releaseLoggingMutex_5=releaseLoggingMutex();
    if(!(return_value_releaseLoggingMutex_5 == 0))
    {
      if(!(logFileCopy == ((signed int *)NULL)))
        free((void *)logFileCopy);

      return (signed int *)(void *)0;
    }

    else
      return logFileCopy;
  }
}

// getDefaultLogfilePath
// file logger.c line 709
extern const signed int * getDefaultLogfilePath()
{
  return defaultLogFile;
}

// getEncodingByName
// file wrapper_i18n.h line 490
extern signed int getEncodingByName(char *encodingMB, char **encoding)
{
  signed int return_value_strcasecmp_24;
  return_value_strcasecmp_24=strcasecmp(encodingMB, "Shift_JIS");
  signed int return_value_strcasecmp_23;
  signed int return_value_strcasecmp_22;
  signed int return_value_strcasecmp_21;
  signed int return_value_strcasecmp_20;
  signed int return_value_strcasecmp_19;
  signed int return_value_strcasecmp_18;
  signed int return_value_strcasecmp_17;
  signed int return_value_strcasecmp_16;
  signed int return_value_strcasecmp_15;
  signed int return_value_strcasecmp_14;
  signed int return_value_strcasecmp_13;
  signed int return_value_strcasecmp_12;
  signed int return_value_strcasecmp_11;
  signed int return_value_strcasecmp_10;
  signed int return_value_strcasecmp_9;
  signed int return_value_strcasecmp_8;
  signed int return_value_strcasecmp_7;
  signed int return_value_strcasecmp_6;
  signed int return_value_strcasecmp_5;
  signed int return_value_strcasecmp_4;
  signed int return_value_strcasecmp_3;
  signed int return_value_strcasecmp_2;
  signed int return_value_strcasecmp_1;
  if(return_value_strcasecmp_24 == 0)
    *encoding = "shiftjis";

  else
  {
    return_value_strcasecmp_23=strcasecmp(encodingMB, "eucJP");
    if(return_value_strcasecmp_23 == 0)
      *encoding = "eucJP";

    else
    {
      return_value_strcasecmp_22=strcasecmp(encodingMB, "UTF-8");
      if(return_value_strcasecmp_22 == 0)
        *encoding = "UTF-8";

      else
      {
        return_value_strcasecmp_21=strcasecmp(encodingMB, "ISO-8859-1");
        if(return_value_strcasecmp_21 == 0)
          *encoding = "ISO-8859-1";

        else
        {
          return_value_strcasecmp_20=strcasecmp(encodingMB, "CP1252");
          if(return_value_strcasecmp_20 == 0)
            *encoding = "CP1252";

          else
          {
            return_value_strcasecmp_19=strcasecmp(encodingMB, "ISO-8859-2");
            if(return_value_strcasecmp_19 == 0)
              *encoding = "ISO-8859-2";

            else
            {
              return_value_strcasecmp_18=strcasecmp(encodingMB, "ISO-8859-3");
              if(return_value_strcasecmp_18 == 0)
                *encoding = "ISO-8859-3";

              else
              {
                return_value_strcasecmp_17=strcasecmp(encodingMB, "ISO-8859-4");
                if(return_value_strcasecmp_17 == 0)
                  *encoding = "ISO-8859-4";

                else
                {
                  return_value_strcasecmp_16=strcasecmp(encodingMB, "ISO-8859-5");
                  if(return_value_strcasecmp_16 == 0)
                    *encoding = "ISO-8859-5";

                  else
                  {
                    return_value_strcasecmp_15=strcasecmp(encodingMB, "ISO-8859-6");
                    if(return_value_strcasecmp_15 == 0)
                      *encoding = "ISO-8859-6";

                    else
                    {
                      return_value_strcasecmp_14=strcasecmp(encodingMB, "ISO-8859-7");
                      if(return_value_strcasecmp_14 == 0)
                        *encoding = "ISO-8859-7";

                      else
                      {
                        return_value_strcasecmp_13=strcasecmp(encodingMB, "ISO-8859-8");
                        if(return_value_strcasecmp_13 == 0)
                          *encoding = "ISO-8859-8";

                        else
                        {
                          return_value_strcasecmp_12=strcasecmp(encodingMB, "ISO-8859-9");
                          if(return_value_strcasecmp_12 == 0)
                            *encoding = "ISO-8859-9";

                          else
                          {
                            return_value_strcasecmp_11=strcasecmp(encodingMB, "ISO-8859-10");
                            if(return_value_strcasecmp_11 == 0)
                              *encoding = "ISO-8859-10";

                            else
                            {
                              return_value_strcasecmp_10=strcasecmp(encodingMB, "ISO-8859-11");
                              if(return_value_strcasecmp_10 == 0)
                                *encoding = "ISO-8859-11";

                              else
                              {
                                return_value_strcasecmp_9=strcasecmp(encodingMB, "ISO-8859-13");
                                if(return_value_strcasecmp_9 == 0)
                                  *encoding = "ISO-8859-13";

                                else
                                {
                                  return_value_strcasecmp_8=strcasecmp(encodingMB, "ISO-8859-14");
                                  if(return_value_strcasecmp_8 == 0)
                                    *encoding = "ISO-8859-14";

                                  else
                                  {
                                    return_value_strcasecmp_7=strcasecmp(encodingMB, "ISO-8859-15");
                                    if(return_value_strcasecmp_7 == 0)
                                      *encoding = "ISO-8859-15";

                                    else
                                    {
                                      return_value_strcasecmp_6=strcasecmp(encodingMB, "ISO-8859-16");
                                      if(return_value_strcasecmp_6 == 0)
                                        *encoding = "ISO-8859-16";

                                      else
                                      {
                                        return_value_strcasecmp_5=strcasecmp(encodingMB, "CP1250");
                                        if(return_value_strcasecmp_5 == 0)
                                          *encoding = "CP1250";

                                        else
                                        {
                                          return_value_strcasecmp_4=strcasecmp(encodingMB, "CP1251");
                                          if(return_value_strcasecmp_4 == 0)
                                            *encoding = "CP1251";

                                          else
                                          {
                                            return_value_strcasecmp_3=strcasecmp(encodingMB, "KOI8-R");
                                            if(return_value_strcasecmp_3 == 0)
                                              *encoding = "KOI8-R";

                                            else
                                            {
                                              return_value_strcasecmp_2=strcasecmp(encodingMB, "KOI8-U");
                                              if(return_value_strcasecmp_2 == 0)
                                                *encoding = "KOI8-U";

                                              else
                                              {
                                                return_value_strcasecmp_1=strcasecmp(encodingMB, "DEFAULT");
                                                if(return_value_strcasecmp_1 == 0)
                                                  *encoding=nl_langinfo(14);

                                                else
                                                  return -1;
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
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

// getFileSafeStringProperty
// file property.h line 228
extern const signed int * getFileSafeStringProperty(struct Properties *properties, const signed int *propertyName, const signed int *defaultValue)
{
  struct Property *property;
  signed int *buffer;
  signed int i;
  property=getInnerProperty(properties, propertyName, -1);
  if(property == ((struct Property *)NULL))
  {
    if(!(defaultValue == ((const signed int *)NULL)))
      addProperty(properties, (const signed int *)(void *)0, 0, propertyName, defaultValue, 0, 0, 0, 0);

    return defaultValue;
  }

  else
  {
    buffer = property->value;
    signed int *return_value_wcschr_1;
    return_value_wcschr_1=wcschr(buffer, 37);
    if(!(return_value_wcschr_1 == ((signed int *)NULL)))
    {
      i = 0;
      for( ; !(buffer[(signed long int)i] == 0); i = i + 1)
        if(buffer[(signed long int)i] == 37)
          buffer[(signed long int)i] = 95;

    }

    return buffer;
  }
}

// getInfoTime
// file wrapper.c line 172
struct tm getInfoTime(const signed int *date, const signed int *time)
{
  struct tm buildTM;
  signed int temp[5l];
  memset((void *)&buildTM, 0, sizeof(struct tm) /*56ul*/ );
  wcsncpy(temp, date, (unsigned long int)4);
  temp[(signed long int)4] = 0;
  signed long int return_value_wcstol_1;
  return_value_wcstol_1=wcstol(temp, (signed int ** restrict )(void *)0, 10);
  buildTM.tm_year = (signed int)(return_value_wcstol_1 - (signed long int)1900);
  wcsncpy(temp, date + (signed long int)4, (unsigned long int)2);
  temp[(signed long int)2] = 0;
  signed long int return_value_wcstol_2;
  return_value_wcstol_2=wcstol(temp, (signed int ** restrict )(void *)0, 10);
  buildTM.tm_mon = (signed int)(return_value_wcstol_2 - (signed long int)1);
  wcsncpy(temp, date + (signed long int)6, (unsigned long int)2);
  temp[(signed long int)2] = 0;
  signed long int return_value_wcstol_3;
  return_value_wcstol_3=wcstol(temp, (signed int ** restrict )(void *)0, 10);
  buildTM.tm_mday = (signed int)return_value_wcstol_3;
  wcsncpy(temp, time, (unsigned long int)2);
  temp[(signed long int)2] = 0;
  signed long int return_value_wcstol_4;
  return_value_wcstol_4=wcstol(temp, (signed int ** restrict )(void *)0, 10);
  buildTM.tm_hour = (signed int)return_value_wcstol_4;
  wcsncpy(temp, time + (signed long int)2, (unsigned long int)2);
  temp[(signed long int)2] = 0;
  signed long int return_value_wcstol_5;
  return_value_wcstol_5=wcstol(temp, (signed int ** restrict )(void *)0, 10);
  buildTM.tm_min = (signed int)return_value_wcstol_5;
  return buildTM;
}

// getInnerProperty
// file property.c line 103
struct Property * getInnerProperty(struct Properties *properties, const signed int *propertyName, signed int warnUndefinedVars)
{
  struct Property *property;
  signed int cmp;
  property = properties->first;
  _Bool tmp_if_expr_1;
  for( ; !(property == ((struct Property *)NULL)); property = property->next)
  {
    cmp=wcscasecmp(property->name, propertyName);
    if(cmp >= 1)
      return (struct Property *)(void *)0;

    else
      if(cmp == 0)
      {
        if(!(warnUndefinedVars == 0))
          tmp_if_expr_1 = properties->logWarnings != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_1 = (_Bool)0;
        prepareProperty(properties, property, (signed int)tmp_if_expr_1);
        return property;
      }

  }
  return (struct Property *)(void *)0;
}

// getIntProperty
// file property.h line 262
extern signed int getIntProperty(struct Properties *properties, const signed int *propertyName, signed int defaultValue)
{
  signed int buffer[16l];
  struct Property *property;
  signed int i;
  signed int c;
  signed int value;
  property=getInnerProperty(properties, propertyName, -1);
  if(property == ((struct Property *)NULL))
  {
    _sntprintf(buffer, (unsigned long int)16, L"%d", defaultValue);
    addProperty(properties, (const signed int *)(void *)0, 0, propertyName, buffer, 0, 0, 0, 0);
    return defaultValue;
  }

  else
  {
    signed long int return_value_wcstol_1;
    return_value_wcstol_1=wcstol(property->value, (signed int ** restrict )(void *)0, 0);
    value = (signed int)return_value_wcstol_1;
    i = 0;
    do
    {
      c = property->value[(signed long int)i];
      if(!(c == 0) || !(i >= 1))
      {
        if(!(c == 45) || !(i == 0))
        {
          if(c >= 58 || !(c >= 48))
          {
            if(i == 0)
              value = defaultValue;

            if(!(properties->logWarnings == 0))
              log_printf(-1, properties->logWarningLogLevel, L"Encountered an invalid numerical value for configuration property %s=%s.  Resolving to %d.", propertyName, property->value, value);

            break;
          }

        }

      }

      i = i + 1;
    }
    while(!(c == 0));
    return value;
  }
}

// getLastError
// file logger_base.h line 67
extern signed int getLastError()
{
  signed int *return_value___errno_location_1;
  return_value___errno_location_1=__errno_location();
  return *return_value___errno_location_1;
}

// getLastErrorText
// file logger_base.h line 60
extern const signed int * getLastErrorText()
{
  signed int errorNum;
  char *lastErrorTextMB;
  unsigned long int req;
  signed int *return_value___errno_location_1;
  return_value___errno_location_1=__errno_location();
  errorNum = *return_value___errno_location_1;
  lastErrorTextMB=strerror(errorNum);
  req=mbstowcs((signed int *)(void *)0, lastErrorTextMB, (unsigned long int)0);
  if(req == 18446744073709551615ul)
  {
    invalidMultiByteSequence(L"GLET", 1);
    _sntprintf(lastErrorTextBufferW, (unsigned long int)1024, L"Error Message could not be decoded (Error 0x%x)", errorNum);
  }

  else
    if(req >= 1024ul)
      _sntprintf(lastErrorTextBufferW, (unsigned long int)1024, L"Error Message too large (Size %d) (Error 0x%x)", req, errorNum);

    else
      mbstowcs(lastErrorTextBufferW, lastErrorTextMB, (unsigned long int)1024);
  lastErrorTextBufferW[(signed long int)(1024 - 1)] = 0;
  return lastErrorTextBufferW;
}

// getLogFacilityForName
// file logger.c line 561
extern signed int getLogFacilityForName(const signed int *logFacilityName)
{
  signed int return_value_wcscasecmp_9;
  return_value_wcscasecmp_9=wcscasecmp(logFacilityName, L"USER");
  signed int return_value_wcscasecmp_8;
  signed int return_value_wcscasecmp_7;
  signed int return_value_wcscasecmp_6;
  signed int return_value_wcscasecmp_5;
  signed int return_value_wcscasecmp_4;
  signed int return_value_wcscasecmp_3;
  signed int return_value_wcscasecmp_2;
  signed int return_value_wcscasecmp_1;
  if(return_value_wcscasecmp_9 == 0)
    return 1 << 3;

  else
  {
    return_value_wcscasecmp_8=wcscasecmp(logFacilityName, L"LOCAL0");
    if(return_value_wcscasecmp_8 == 0)
      return 16 << 3;

    else
    {
      return_value_wcscasecmp_7=wcscasecmp(logFacilityName, L"LOCAL1");
      if(return_value_wcscasecmp_7 == 0)
        return 17 << 3;

      else
      {
        return_value_wcscasecmp_6=wcscasecmp(logFacilityName, L"LOCAL2");
        if(return_value_wcscasecmp_6 == 0)
          return 18 << 3;

        else
        {
          return_value_wcscasecmp_5=wcscasecmp(logFacilityName, L"LOCAL3");
          if(return_value_wcscasecmp_5 == 0)
            return 19 << 3;

          else
          {
            return_value_wcscasecmp_4=wcscasecmp(logFacilityName, L"LOCAL4");
            if(return_value_wcscasecmp_4 == 0)
              return 20 << 3;

            else
            {
              return_value_wcscasecmp_3=wcscasecmp(logFacilityName, L"LOCAL5");
              if(return_value_wcscasecmp_3 == 0)
                return 21 << 3;

              else
              {
                return_value_wcscasecmp_2=wcscasecmp(logFacilityName, L"LOCAL6");
                if(return_value_wcscasecmp_2 == 0)
                  return 22 << 3;

                else
                {
                  return_value_wcscasecmp_1=wcscasecmp(logFacilityName, L"LOCAL7");
                  if(return_value_wcscasecmp_1 == 0)
                    return 23 << 3;

                  else
                    return 1 << 3;
                }
              }
            }
          }
        }
      }
    }
  }
}

// getLogLevelForName
// file logger.h line 267
extern signed int getLogLevelForName(const signed int *logLevelName)
{
  signed int return_value_wcscasecmp_9;
  return_value_wcscasecmp_9=wcscasecmp(logLevelName, L"NONE");
  signed int return_value_wcscasecmp_8;
  signed int return_value_wcscasecmp_7;
  signed int return_value_wcscasecmp_6;
  signed int return_value_wcscasecmp_5;
  signed int return_value_wcscasecmp_4;
  signed int return_value_wcscasecmp_3;
  signed int return_value_wcscasecmp_2;
  signed int return_value_wcscasecmp_1;
  if(return_value_wcscasecmp_9 == 0)
    return 9;

  else
  {
    return_value_wcscasecmp_8=wcscasecmp(logLevelName, L"NOTICE");
    if(return_value_wcscasecmp_8 == 0)
      return 8;

    else
    {
      return_value_wcscasecmp_7=wcscasecmp(logLevelName, L"ADVICE");
      if(return_value_wcscasecmp_7 == 0)
        return 7;

      else
      {
        return_value_wcscasecmp_6=wcscasecmp(logLevelName, L"FATAL");
        if(return_value_wcscasecmp_6 == 0)
          return 6;

        else
        {
          return_value_wcscasecmp_5=wcscasecmp(logLevelName, L"ERROR");
          if(return_value_wcscasecmp_5 == 0)
            return 5;

          else
          {
            return_value_wcscasecmp_4=wcscasecmp(logLevelName, L"WARN");
            if(return_value_wcscasecmp_4 == 0)
              return 4;

            else
            {
              return_value_wcscasecmp_3=wcscasecmp(logLevelName, L"STATUS");
              if(return_value_wcscasecmp_3 == 0)
                return 3;

              else
              {
                return_value_wcscasecmp_2=wcscasecmp(logLevelName, L"INFO");
                if(return_value_wcscasecmp_2 == 0)
                  return 2;

                else
                {
                  return_value_wcscasecmp_1=wcscasecmp(logLevelName, L"DEBUG");
                  if(return_value_wcscasecmp_1 == 0)
                    return 1;

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
}

// getLogfileActivity
// file logger.h line 218
extern unsigned long int getLogfileActivity()
{
  unsigned long int logfileLines = logfileActivityCount;
  logfileActivityCount = (unsigned long int)0;
  return logfileLines;
}

// getLogfileLevelInt
// file logger.c line 927
extern signed int getLogfileLevelInt()
{
  return currentLogfileLevel;
}

// getLogfilePath
// file logger.c line 717
extern const signed int * getLogfilePath()
{
  return logFilePath;
}

// getLogfileRollMode
// file logger.h line 207
extern signed int getLogfileRollMode()
{
  return logFileRollMode;
}

// getLogfileRollModeForName
// file logger.h line 205
extern signed int getLogfileRollModeForName(const signed int *logfileRollName)
{
  signed int return_value_wcscasecmp_7;
  return_value_wcscasecmp_7=wcscasecmp(logfileRollName, L"NONE");
  signed int return_value_wcscasecmp_6;
  signed int return_value_wcscasecmp_5;
  signed int return_value_wcscasecmp_4;
  signed int return_value_wcscasecmp_3;
  signed int return_value_wcscasecmp_2;
  signed int return_value_wcscasecmp_1;
  if(return_value_wcscasecmp_7 == 0)
    return 1;

  else
  {
    return_value_wcscasecmp_6=wcscasecmp(logfileRollName, L"SIZE");
    if(return_value_wcscasecmp_6 == 0)
      return 2;

    else
    {
      return_value_wcscasecmp_5=wcscasecmp(logfileRollName, L"WRAPPER");
      if(return_value_wcscasecmp_5 == 0)
        return 4;

      else
      {
        return_value_wcscasecmp_4=wcscasecmp(logfileRollName, L"JVM");
        if(return_value_wcscasecmp_4 == 0)
          return 8;

        else
        {
          return_value_wcscasecmp_3=wcscasecmp(logfileRollName, L"SIZE_OR_WRAPPER");
          if(return_value_wcscasecmp_3 == 0)
            return 2 + 4;

          else
          {
            return_value_wcscasecmp_2=wcscasecmp(logfileRollName, L"SIZE_OR_JVM");
            if(return_value_wcscasecmp_2 == 0)
              return 2 + 8;

            else
            {
              return_value_wcscasecmp_1=wcscasecmp(logfileRollName, L"DATE");
              if(return_value_wcscasecmp_1 == 0)
                return 16;

              else
                return 0;
            }
          }
        }
      }
    }
  }
}

// getLowLogLevel
// file logger.h line 260
extern signed int getLowLogLevel()
{
  signed int lowLogLevel = currentLogfileLevel < currentConsoleLevel ? currentLogfileLevel : currentConsoleLevel;
  lowLogLevel = currentLoginfoLevel < lowLogLevel ? currentLoginfoLevel : lowLogLevel;
  return lowLogLevel;
}

// getSignalCodeDesc
// file wrapper_unix.c line 388
const signed int * getSignalCodeDesc(signed int code)
{
  switch(code)
  {
    case 0:
      return L"kill, sigsend or raise";
    case 128:
      return L"the kernel";
    case -1:
      return L"sigqueue";
    case -2:
      return L"timer expired";
    case -3:
      return L"mesq state changed";
    case -4:
      return L"AIO completed";
    case -5:
      return L"queued SIGIO";
    default:
      return L"unknown";
  }
}

// getSignalMode
// file wrapper.c line 510
signed int getSignalMode(const signed int *modeName, signed int defaultMode)
{
  signed int return_value_wcscasecmp_3;
  signed int return_value_wcscasecmp_2;
  signed int return_value_wcscasecmp_1;
  if(modeName == ((const signed int *)NULL))
    return defaultMode;

  else
  {
    signed int return_value_wcscasecmp_4;
    return_value_wcscasecmp_4=wcscasecmp(modeName, L"IGNORE");
    if(return_value_wcscasecmp_4 == 0)
      return (signed int)(char)100;

    else
    {
      return_value_wcscasecmp_3=wcscasecmp(modeName, L"RESTART");
      if(return_value_wcscasecmp_3 == 0)
        return (signed int)(char)101;

      else
      {
        return_value_wcscasecmp_2=wcscasecmp(modeName, L"SHUTDOWN");
        if(return_value_wcscasecmp_2 == 0)
          return (signed int)(char)102;

        else
        {
          return_value_wcscasecmp_1=wcscasecmp(modeName, L"FORWARD");
          if(return_value_wcscasecmp_1 == 0)
            return (signed int)(char)103;

          else
            return defaultMode;
        }
      }
    }
  }
}

// getSignalName
// file wrapper_unix.c line 358
const signed int * getSignalName(signed int signo)
{
  switch(signo)
  {
    case 14:
      return L"SIGALRM";
    case 2:
      return L"SIGINT";
    case 9:
      return L"SIGKILL";
    case 3:
      return L"SIGQUIT";
    case 17:
      return L"SIGCHLD";
    case 15:
      return L"SIGTERM";
    case 1:
      return L"SIGHUP";
    case 10:
      return L"SIGUSR1";
    case 12:
      return L"SIGUSR2";
    case 11:
      return L"SIGSEGV";
    default:
      return L"UNKNOWN";
  }
}

// getStringProperties
// file property.h line 255
extern signed int getStringProperties(struct Properties *properties, const signed int *propertyNameHead, const signed int *propertyNameTail, signed int all, signed int matchAny, signed int ***propertyNames, signed int ***propertyValues, unsigned long int **propertyIndices)
{
  signed int j;
  signed int k;
  unsigned long int headLen;
  unsigned long int tailLen;
  unsigned long int thisLen;
  signed int *thisHead;
  signed int *thisTail;
  unsigned long int i;
  struct Property *property;
  unsigned long int indexLen;
  signed int indexS[11l];
  signed int ok;
  signed int c;
  signed int count;
  *propertyIndices = (unsigned long int *)(void *)0;
  headLen=wcslen(propertyNameHead);
  tailLen=wcslen(propertyNameTail);
  j = 0;
  for( ; !(j >= 2); j = j + 1)
  {
    count = 0;
    property = properties->first;
    for( ; !(property == ((struct Property *)NULL)); property = property->next)
    {
      thisLen=wcslen(property->name);
      if(matchAny == 0 || thisLen >= headLen + tailLen + 18446744073709551615ul)
      {
        if(!(matchAny == 0) || thisLen >= 1ul + headLen + tailLen)
        {
          void *return_value_malloc_1;
          return_value_malloc_1=malloc(sizeof(signed int) /*4ul*/  * (headLen + (unsigned long int)1));
          thisHead = (signed int *)return_value_malloc_1;
          if(thisHead == ((signed int *)NULL))
            outOfMemory(L"GSPS", 1);

          else
          {
            wcsncpy(thisHead, property->name, headLen);
            thisHead[(signed long int)headLen] = 0;
            signed int return_value_wcscasecmp_4;
            return_value_wcscasecmp_4=wcscasecmp(thisHead, propertyNameHead);
            if(return_value_wcscasecmp_4 == 0)
            {
              void *return_value_malloc_2;
              return_value_malloc_2=malloc(sizeof(signed int) /*4ul*/  * (tailLen + (unsigned long int)1));
              thisTail = (signed int *)return_value_malloc_2;
              if(thisTail == ((signed int *)NULL))
                outOfMemory(L"GSPS", 2);

              else
              {
                wcsncpy(thisTail, (property->name + (signed long int)thisLen) - (signed long int)tailLen, tailLen + (unsigned long int)1);
                signed int return_value_wcscasecmp_3;
                return_value_wcscasecmp_3=wcscasecmp(thisTail, propertyNameTail);
                if(return_value_wcscasecmp_3 == 0)
                {
                  if(!(matchAny == 0))
                    indexLen = ((thisLen - headLen) - tailLen) + (unsigned long int)1;

                  else
                    indexLen = (thisLen - headLen) - tailLen;
                  if(!(indexLen >= 11ul))
                  {
                    wcsncpy(indexS, property->name + (signed long int)headLen, indexLen);
                    indexS[(signed long int)indexLen] = 0;
                    ok = -1;
                    i = (unsigned long int)0;
                    for( ; !(i >= indexLen); i = i + 1ul)
                    {
                      c = indexS[(signed long int)i];
                      if(matchAny == 0 && (c >= 58 || !(c >= 48)))
                      {
                        ok = 0;
                        break;
                      }

                    }
                    if(!(ok == 0))
                    {
                      if(!(*propertyIndices == ((unsigned long int *)NULL)))
                      {
                        prepareProperty(properties, property, 0);
                        (*propertyIndices)[(signed long int)count]=wcstoul(indexS, (signed int ** restrict )(void *)0, 10);
                        (*propertyNames)[(signed long int)count] = property->name;
                        (*propertyValues)[(signed long int)count] = property->value;
                      }

                      count = count + 1;
                    }

                  }

                }

                free((void *)thisTail);
              }
            }

            free((void *)thisHead);
          }
        }

      }

    }
    if(*propertyIndices == ((unsigned long int *)NULL))
    {
      void *return_value_malloc_5;
      return_value_malloc_5=malloc(sizeof(signed int *) /*8ul*/  * (unsigned long int)(count + 1));
      *propertyNames = (signed int **)return_value_malloc_5;
      if(*propertyNames == ((signed int **)NULL))
      {
        outOfMemory(L"GSPS", 3);
        *propertyNames = (signed int **)(void *)0;
        *propertyValues = (signed int **)(void *)0;
        *propertyIndices = (unsigned long int *)(void *)0;
        return -1;
      }

      void *return_value_malloc_6;
      return_value_malloc_6=malloc(sizeof(signed int *) /*8ul*/  * (unsigned long int)(count + 1));
      *propertyValues = (signed int **)return_value_malloc_6;
      if(*propertyValues == ((signed int **)NULL))
      {
        outOfMemory(L"GSPS", 4);
        free((void *)*propertyNames);
        *propertyNames = (signed int **)(void *)0;
        *propertyValues = (signed int **)(void *)0;
        *propertyIndices = (unsigned long int *)(void *)0;
        return -1;
      }

      void *return_value_malloc_7;
      return_value_malloc_7=malloc(sizeof(unsigned long int) /*8ul*/  * (unsigned long int)(count + 1));
      *propertyIndices = (unsigned long int *)return_value_malloc_7;
      if(*propertyIndices == ((unsigned long int *)NULL))
      {
        outOfMemory(L"GSPS", 5);
        free((void *)*propertyNames);
        free((void *)*propertyValues);
        *propertyNames = (signed int **)(void *)0;
        *propertyValues = (signed int **)(void *)0;
        *propertyIndices = (unsigned long int *)(void *)0;
        return -1;
      }

      if(count == 0)
      {
        (*propertyNames)[(signed long int)0] = (signed int *)(void *)0;
        (*propertyValues)[(signed long int)0] = (signed int *)(void *)0;
        (*propertyIndices)[(signed long int)0] = (unsigned long int)0;
        return 0;
      }

    }

    else
    {
      (*propertyNames)[(signed long int)count] = (signed int *)(void *)0;
      (*propertyValues)[(signed long int)count] = (signed int *)(void *)0;
      (*propertyIndices)[(signed long int)count] = (unsigned long int)0;
      sortStringProperties(*propertyIndices, *propertyNames, *propertyValues, 0, count - 1);
      if(all == 0)
      {
        k = 0;
        for( ; !(k >= count); k = k + 1)
          if(!((*propertyIndices)[(signed long int)k] == (unsigned long int)(1 + k)))
          {
            (*propertyNames)[(signed long int)k] = (signed int *)(void *)0;
            (*propertyValues)[(signed long int)k] = (signed int *)(void *)0;
            (*propertyIndices)[(signed long int)k] = (unsigned long int)0;
          }

      }

      return 0;
    }
  }
  return 0;
}

// getStringProperty
// file property.h line 226
extern const signed int * getStringProperty(struct Properties *properties, const signed int *propertyName, const signed int *defaultValue)
{
  struct Property *property;
  property=getInnerProperty(properties, propertyName, -1);
  if(property == ((struct Property *)NULL))
  {
    if(!(defaultValue == ((const signed int *)NULL)))
    {
      property=addProperty(properties, (const signed int *)(void *)0, 0, propertyName, defaultValue, 0, 0, 0, 0);
      if(!(property == ((struct Property *)NULL)))
        return property->value;

      else
        return defaultValue;
    }

    else
      return (const signed int *)(void *)0;
  }

  else
    return property->value;
}

// getSyslogLevelInt
// file logger.h line 247
extern signed int getSyslogLevelInt()
{
  return currentLoginfoLevel;
}

// getThreadId
// file logger.c line 489
signed int getThreadId()
{
  signed int i;
  unsigned long int threadId;
  threadId=pthread_self();
  i = 0;
  signed int return_value_pthread_equal_1;
  for( ; !(i >= 6); i = i + 1)
    if(!(threadSets[(signed long int)i] == 0))
    {
      return_value_pthread_equal_1=pthread_equal_link1(threadIds[(signed long int)i], threadId);
      if(!(return_value_pthread_equal_1 == 0))
        return i;

    }

  _tprintf(L"WARNING - Encountered an unknown thread %ld in getThreadId().\n", (signed long int)threadId);
  return 0;
}

// handleDebugJVMTimeout
// file wrappereventloop.c line 343
void handleDebugJVMTimeout(unsigned int nowTicks, const signed int *message, const signed int *timer)
{
  if(wrapperData->debugJVMTimeoutNotified == 0)
  {
    log_printf(-1, 4, L"------------------------------------------------------------------------");
    log_printf(-1, 4, L"%s", message);
    log_printf(-1, 4, L"The JVM was launched with debug options so this may be because the JVM\nis currently suspended by a debugger.  Any future timeouts during this\nJVM invocation will be silently ignored.");
    log_printf(-1, 4, L"------------------------------------------------------------------------");
  }

  wrapperData->debugJVMTimeoutNotified = -1;
  if(!(wrapperData->isStateOutputEnabled == 0))
    log_printf(-1, 3, L"      DebugJVM timeout.  Disable current %s timeout.", timer);

  wrapperUpdateJavaStateTimeout(nowTicks, -1);
}

// hashMapGetKMBVW
// file wrapper_hashmap.c line 398
extern const signed int * hashMapGetKMBVW(struct anonymous_23 *hashMap, const char *key)
{
  unsigned long int keySize;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(key);
  keySize = sizeof(char) /*1ul*/  * (return_value_strlen_1 + (unsigned long int)1);
  const void *return_value_hashMapGetKVVV_2;
  return_value_hashMapGetKVVV_2=hashMapGetKVVV(hashMap, (const void *)key, keySize, (unsigned long int *)(void *)0);
  return (const signed int *)return_value_hashMapGetKVVV_2;
}

// hashMapGetKVVV
// file wrapper_hashmap.c line 338
extern const void * hashMapGetKVVV(struct anonymous_23 *hashMap, const void *key, unsigned long int keySize, unsigned long int *valueSize)
{
  signed int bucketId;
  struct anonymous_24 *bucket;
  struct HashEntry *thisEntry;
  signed int cmp;
  if(!(valueSize == ((unsigned long int *)NULL)))
    *valueSize = (unsigned long int)0;

  bucketId=getBucketId(hashMap, (const signed int *)key);
  bucket = hashMap->buckets[(signed long int)bucketId];
  thisEntry = bucket->firstEntry;
  while(!(thisEntry == ((struct HashEntry *)NULL)))
  {
    cmp=memcmpHM(thisEntry->key, thisEntry->keySize, key, keySize);
    if(cmp >= 1)
      return (void *)0;

    else
      if(cmp == 0)
      {
        if(!(valueSize == ((unsigned long int *)NULL)))
          *valueSize = thisEntry->valueSize;

        return thisEntry->value;
      }

      else
        thisEntry = thisEntry->nextEntry;
  }
  return (void *)0;
}

// hashMapGetKWVW
// file wrapper_hashmap.h line 110
extern const signed int * hashMapGetKWVW(struct anonymous_23 *hashMap, const signed int *key)
{
  unsigned long int keySize;
  unsigned long int return_value_wcslen_1;
  return_value_wcslen_1=wcslen(key);
  keySize = sizeof(signed int) /*4ul*/  * (return_value_wcslen_1 + (unsigned long int)1);
  const void *return_value_hashMapGetKVVV_2;
  return_value_hashMapGetKVVV_2=hashMapGetKVVV(hashMap, (const void *)key, keySize, (unsigned long int *)(void *)0);
  return (const signed int *)return_value_hashMapGetKVVV_2;
}

// hashMapPutKMBVW
// file wrapper_hashmap.c line 321
extern void hashMapPutKMBVW(struct anonymous_23 *hashMap, const char *key, const signed int *value)
{
  unsigned long int keySize;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(key);
  keySize = sizeof(char) /*1ul*/  * (return_value_strlen_1 + (unsigned long int)1);
  unsigned long int valueSize;
  unsigned long int return_value_wcslen_2;
  return_value_wcslen_2=wcslen(value);
  valueSize = sizeof(signed int) /*4ul*/  * (return_value_wcslen_2 + (unsigned long int)1);
  hashMapPutKVVV(hashMap, (const void *)key, keySize, (const void *)value, valueSize);
}

// hashMapPutKVVV
// file wrapper_hashmap.c line 188
extern signed int hashMapPutKVVV(struct anonymous_23 *hashMap, const void *key, unsigned long int keySize, const void *value, unsigned long int valueSize)
{
  void *keyCopy;
  void *valueCopy;
  signed int bucketId;
  struct anonymous_24 *bucket;
  struct HashEntry **thisEntryLoc;
  struct HashEntry *thisEntry;
  signed int cmp;
  struct HashEntry *newEntry;
  keyCopy=malloc(keySize);
  if(keyCopy == NULL)
  {
    _tprintf(L"Out of memory (%s)\n", (const void *)L"HMP1");
    return -1;
  }

  else
  {
    memcpy(keyCopy, key, keySize);
    valueCopy=malloc(valueSize);
    if(valueCopy == NULL)
    {
      _tprintf(L"Out of memory (%s)\n", (const void *)L"HMP2");
      free(keyCopy);
      return -1;
    }

    else
    {
      memcpy(valueCopy, value, valueSize);
      bucketId=getBucketId(hashMap, (const signed int *)key);
      bucket = hashMap->buckets[(signed long int)bucketId];
      thisEntryLoc = &bucket->firstEntry;
      thisEntry = bucket->firstEntry;
      while(!(thisEntry == ((struct HashEntry *)NULL)))
      {
        cmp=memcmpHM(thisEntry->key, thisEntry->keySize, key, keySize);
        if(cmp >= 1)
        {
          void *return_value_malloc_1;
          return_value_malloc_1=malloc(sizeof(struct HashEntry) /*40ul*/ );
          newEntry = (struct HashEntry *)return_value_malloc_1;
          if(newEntry == ((struct HashEntry *)NULL))
          {
            _tprintf(L"Out of memory (%s)\n", (const void *)L"HMP3");
            free(keyCopy);
            free(valueCopy);
            return -1;
          }

          newEntry->key = keyCopy;
          newEntry->keySize = keySize;
          newEntry->value = valueCopy;
          newEntry->valueSize = valueSize;
          newEntry->nextEntry = thisEntry;
          *thisEntryLoc = newEntry;
          bucket->size = bucket->size + 1;
          hashMap->size = hashMap->size + 1;
          return 0;
        }

        else
          if(cmp == 0)
          {
            free(thisEntry->value);
            thisEntry->value = valueCopy;
            thisEntry->valueSize = valueSize;
            free(keyCopy);
            return 0;
          }

          else
          {
            thisEntryLoc = &thisEntry->nextEntry;
            thisEntry = thisEntry->nextEntry;
          }
      }
      void *return_value_malloc_2;
      return_value_malloc_2=malloc(sizeof(struct HashEntry) /*40ul*/ );
      newEntry = (struct HashEntry *)return_value_malloc_2;
      if(newEntry == ((struct HashEntry *)NULL))
      {
        _tprintf(L"Out of memory (%s)\n", (const void *)L"HMP4");
        free(keyCopy);
        free(valueCopy);
        return -1;
      }

      else
      {
        newEntry->key = keyCopy;
        newEntry->keySize = keySize;
        newEntry->value = valueCopy;
        newEntry->valueSize = valueSize;
        newEntry->nextEntry = (struct HashEntry *)(void *)0;
        *thisEntryLoc = newEntry;
        bucket->size = bucket->size + 1;
        hashMap->size = hashMap->size + 1;
        return 0;
      }
    }
  }
}

// hashMapPutKWVW
// file wrapper_hashmap.h line 79
extern void hashMapPutKWVW(struct anonymous_23 *hashMap, const signed int *key, const signed int *value)
{
  unsigned long int keySize;
  unsigned long int return_value_wcslen_1;
  return_value_wcslen_1=wcslen(key);
  keySize = sizeof(signed int) /*4ul*/  * (return_value_wcslen_1 + (unsigned long int)1);
  unsigned long int valueSize;
  unsigned long int return_value_wcslen_2;
  return_value_wcslen_2=wcslen(value);
  valueSize = sizeof(signed int) /*4ul*/  * (return_value_wcslen_2 + (unsigned long int)1);
  hashMapPutKVVV(hashMap, (const void *)key, keySize, (const void *)value, valueSize);
}

// hexToTICKS
// file wrapper.c line 2341
unsigned int hexToTICKS(signed int *buffer)
{
  unsigned int value = (unsigned int)0;
  signed int c;
  signed int pos = 0;
  for( ; (_Bool)1; pos = pos + 1)
  {
    c = buffer[(signed long int)pos];
    if(c >= 97 && !(c >= 103))
      value = (value << 4) + (unsigned int)((10 + c) - 97);

    else
      if(c >= 65 && !(c >= 71))
        value = (value << 4) + (unsigned int)((10 + c) - 65);

      else
        if(c >= 48 && !(c >= 58))
          value = (value << 4) + (unsigned int)(c - 48);

        else
          return value;
  }
}

// initLogging
// file logger.h line 263
extern signed int initLogging(void (*logFileChanged)(const signed int *))
{
  signed int threadId;
  signed int i;
  logFileChangedCallback = logFileChanged;
  logPauseTime = -1;
  loginfoSourceName = defaultLoginfoSourceName;
  logFileAccessed = 0;
  logFileLastNowDate[(signed long int)0] = 0;
  threadId = 0;
  for( ; !(threadId >= 6); threadId = threadId + 1)
  {
    threadSets[(signed long int)threadId] = 0;
    formatMessages[(signed long int)threadId][(signed long int)0] = 0;
    i = 0;
    for( ; !(i >= 20); i = i + 1)
    {
      queueWrapped[(signed long int)threadId] = 0;
      queueWriteIndex[(signed long int)threadId] = 0;
      queueReadIndex[(signed long int)threadId] = 0;
      queueMessages[(signed long int)threadId][(signed long int)i][(signed long int)0] = 0;
      queueSourceIds[(signed long int)threadId][(signed long int)i] = 0;
      queueLevels[(signed long int)threadId][(signed long int)i] = 0;
    }
  }
  return 0;
}

// initializeJavaIO
// file wrapper_unix.c line 735
signed int initializeJavaIO()
{
  signed int res;
  if(!(wrapperData->isJavaIOOutputEnabled == 0))
    log_printf(-1, 3, L"Launching JavaIO thread.");

  res=pthread_create(&javaIOThreadId, (const union pthread_attr_t *)(void *)0, javaIORunner, (void *)0);
  if(!(res == 0))
  {
    const signed int *return_value_getLastErrorText_1;
    return_value_getLastErrorText_1=getLastErrorText();
    log_printf(-1, 6, L"Unable to create a javaIO thread: %d, %s", res, return_value_getLastErrorText_1);
    javaIOThreadSet = -1;
    return 1;
  }

  else
  {
    signed int return_value_pthread_detach_2;
    return_value_pthread_detach_2=pthread_detach(javaIOThreadId);
    if(!(return_value_pthread_detach_2 == 0))
    {
      javaIOThreadSet = -1;
      return 1;
    }

    javaIOThreadSet = 0;
    return 0;
  }
}

// initializeTimer
// file wrapper_unix.c line 885
signed int initializeTimer()
{
  signed int res;
  if(!(wrapperData->isTickOutputEnabled == 0))
    log_printf(-1, 3, L"Launching Timer thread.");

  res=pthread_create(&timerThreadId, (const union pthread_attr_t *)(void *)0, timerRunner, (void *)0);
  if(!(res == 0))
  {
    const signed int *return_value_getLastErrorText_1;
    return_value_getLastErrorText_1=getLastErrorText();
    log_printf(-1, 6, L"Unable to create a timer thread: %d, %s", res, return_value_getLastErrorText_1);
    timerThreadSet = -1;
    return 1;
  }

  else
  {
    signed int return_value_pthread_detach_2;
    return_value_pthread_detach_2=pthread_detach(timerThreadId);
    if(!(return_value_pthread_detach_2 == 0))
    {
      timerThreadSet = -1;
      return 1;
    }

    timerThreadSet = 0;
    return 0;
  }
}

// insertInnerProperty
// file property.c line 127
void insertInnerProperty(struct Properties *properties, struct Property *newProperty)
{
  struct Property *property;
  signed int cmp;
  property = properties->first;
  for( ; !(property == ((struct Property *)NULL)); property = property->next)
  {
    cmp=wcscasecmp(property->name, newProperty->name);
    if(cmp >= 1)
    {
      newProperty->previous = property->previous;
      newProperty->next = property;
      if(property->previous == ((struct Property *)NULL))
        properties->first = newProperty;

      else
        property->previous->next = newProperty;
      property->previous = newProperty;
      goto __CPROVER_DUMP_L8;
    }

  }
  newProperty->previous = properties->last;
  if(properties->last == ((struct Property *)NULL))
    properties->first = newProperty;

  else
    properties->last->next = newProperty;
  properties->last = newProperty;
  newProperty->next = (struct Property *)(void *)0;

__CPROVER_DUMP_L8:
  ;
}

// invalidMultiByteSequence
// file logger.c line 312
extern void invalidMultiByteSequence(const signed int *context, signed int id)
{
  const signed int *return_value_getLastErrorText_1;
  return_value_getLastErrorText_1=getLastErrorText();
  log_printf(-1, 6, L"Invalid multibyte Sequence found in (%s%02d). %s", context, id, return_value_getLastErrorText_1);
}

// isEscapedProperty
// file property.c line 937
extern signed int isEscapedProperty(const signed int *propertyName)
{
  unsigned long int nameLen;
  unsigned long int i;
  const signed int *pattern;
  signed int *wildPos;
  unsigned long int headLen;
  unsigned long int tailLen;
  signed int matched;
  unsigned long int patternI;
  unsigned long int nameI;
  if(!(escapedPropertyNames == ((const signed int **)NULL)))
  {
    nameLen=wcslen(propertyName);
    i = (unsigned long int)0;
    while(!(escapedPropertyNames[(signed long int)i] == ((const signed int *)NULL)))
    {
      pattern = escapedPropertyNames[(signed long int)i];
      signed int return_value_wcscasecmp_2;
      return_value_wcscasecmp_2=wcscasecmp(pattern, propertyName);
      if(return_value_wcscasecmp_2 == 0)
        return -1;

      else
      {
        wildPos=wcschr(pattern, 42);
        if(!(wildPos == ((signed int *)NULL)))
        {
          headLen = (unsigned long int)(wildPos - pattern);
          if(!(headLen >= nameLen))
          {
            matched = -1;
            patternI = (unsigned long int)0;
            nameI = (unsigned long int)0;
            for( ; !(patternI >= headLen); nameI = nameI + 1ul)
            {
              if(!(pattern[(signed long int)patternI] == propertyName[(signed long int)nameI]))
              {
                matched = 0;
                break;
              }

              patternI = patternI + 1ul;
            }
            if(!(matched == 0))
            {
              unsigned long int return_value_wcslen_1;
              return_value_wcslen_1=wcslen(pattern);
              tailLen = (return_value_wcslen_1 - headLen) - (unsigned long int)1;
              if(!(tailLen >= nameLen + -headLen))
              {
                matched = -1;
                patternI = headLen + (unsigned long int)1;
                nameI = nameLen - tailLen;
                for( ; !(nameI >= nameLen); nameI = nameI + 1ul)
                {
                  if(!(pattern[(signed long int)patternI] == propertyName[(signed long int)nameI]))
                  {
                    matched = 0;
                    break;
                  }

                  patternI = patternI + 1ul;
                }
                if(!(matched == 0))
                  return -1;

              }

            }

          }

        }

      }
      i = i + 1ul;
    }
  }

  return 0;
}

// isLogfileAccessed
// file logger.c line 630
extern signed int isLogfileAccessed()
{
  return logFileAccessed;
}

// isQuotableProperty
// file property.h line 266
extern signed int isQuotableProperty(struct Properties *properties, const signed int *propertyName)
{
  struct Property *property;
  property=getInnerProperty(properties, propertyName, 0);
  if(property == ((struct Property *)NULL))
    return 0;

  else
    return property->quotable;
}

// jStateDownCheck
// file wrappereventloop.c line 1825
void jStateDownCheck(unsigned int nowTicks, signed int nextSleep)
{
  wrapperSetJavaState(71, nowTicks, -1);
}

// jStateDownClean
// file wrappereventloop.c line 963
void jStateDownClean(unsigned int nowTicks, signed int nextSleep)
{
  signed int onExitParamBuffer[27l];
  const signed int *onExitAction;
  signed int startupDelay;
  signed int restartMode;
  _Bool tmp_if_expr_13;
  if(wrapperData->wState == 51)
    tmp_if_expr_13 = (_Bool)1;

  else
    tmp_if_expr_13 = wrapperData->wState == 52 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_14;
  if(tmp_if_expr_13)
    tmp_if_expr_14 = (_Bool)1;

  else
    tmp_if_expr_14 = wrapperData->wState == 55 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  signed int return_value_wrapperGetTickAgeSeconds_2;
  signed int return_value_wcscasecmp_7;
  signed int return_value_wcscasecmp_11;
  if(tmp_if_expr_14)
  {
    if(!(wrapperData->restartRequested == 0))
    {
      restartMode = wrapperData->restartRequested;
      wrapperData->restartRequested = 0;
      wrapperData->stoppedPacketReceived = 0;
      wrapperData->restartPacketReceived = 0;
      if(!(wrapperData->isDebugging == 0))
        log_printf(-1, 1, L"Preparing to restart with mode %d.", restartMode);

      if(wrapperData->jvmRestarts >= 1)
      {
        if(wrapperData->wState == 55)
          tmp_if_expr_4 = wrapperData->pausableStopJVM != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_4 = (_Bool)0;
        if(tmp_if_expr_4)
        {
          wrapperData->failedInvocationCount = 0;
          wrapperSetJavaState(73, nowTicks, 0);
        }

        else
        {
          if(restartMode == 2)
            tmp_if_expr_3 = wrapperData->isAutoRestartDisabled != 0 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_3 = (_Bool)0;
          if(tmp_if_expr_3)
          {
            log_printf(-1, 3, L"Automatic JVM Restarts disabled.  Shutting down.");
            wrapperSetWrapperState(56);
          }

          else
            if(!(wrapperData->isRestartDisabled == 0))
            {
              log_printf(-1, 3, L"JVM Restarts disabled.  Shutting down.");
              wrapperSetWrapperState(56);
            }

            else
            {
              return_value_wrapperGetTickAgeSeconds_2=wrapperGetTickAgeSeconds(wrapperData->jvmLaunchTicks, nowTicks);
              if(return_value_wrapperGetTickAgeSeconds_2 >= wrapperData->successfulInvocationTime)
              {
                wrapperData->failedInvocationCount = 0;
                wrapperSetJavaState(73, nowTicks, wrapperData->restartDelay);
                if(wrapperData->restartDelay >= 1)
                {
                  if(!(wrapperData->isDebugging == 0))
                    log_printf(-1, 1, L"Waiting %d seconds before launching another JVM.", wrapperData->restartDelay);

                }

              }

              else
              {
                wrapperData->failedInvocationCount = wrapperData->failedInvocationCount + 1;
                if(!(wrapperData->isDebugging == 0))
                {
                  signed int return_value_wrapperGetTickAgeSeconds_1;
                  return_value_wrapperGetTickAgeSeconds_1=wrapperGetTickAgeSeconds(wrapperData->jvmLaunchTicks, nowTicks);
                  log_printf(-1, 1, L"JVM was only running for %d seconds leading to a failed restart count of %d.", return_value_wrapperGetTickAgeSeconds_1, wrapperData->failedInvocationCount);
                }

                if(!(wrapperData->failedInvocationCount >= wrapperData->maxFailedInvocations))
                {
                  wrapperSetJavaState(73, nowTicks, wrapperData->restartDelay);
                  if(wrapperData->restartDelay >= 1)
                  {
                    if(!(wrapperData->isDebugging == 0))
                      log_printf(-1, 1, L"Waiting %d seconds before launching another JVM.", wrapperData->restartDelay);

                  }

                }

                else
                {
                  log_printf(-1, 6, L"There were %d failed launches in a row, each lasting less than %d seconds.  Giving up.", wrapperData->failedInvocationCount, wrapperData->successfulInvocationTime);
                  log_printf(-1, 6, L"  There may be a configuration problem: please check the logs.");
                  wrapperSetWrapperState(56);
                }
              }
            }
        }
      }

      else
      {
        wrapperData->failedInvocationCount = 0;
        if(!(wrapperData->isConsole == 0))
          startupDelay = wrapperData->startupDelayConsole;

        else
          startupDelay = wrapperData->startupDelayService;
        wrapperSetJavaState(73, nowTicks, startupDelay);
        if(startupDelay >= 1)
        {
          if(!(wrapperData->isDebugging == 0))
            log_printf(-1, 1, L"Waiting %d seconds before launching the first JVM.", startupDelay);

        }

      }
    }

    else
    {
      _sntprintf(onExitParamBuffer, (unsigned long int)(16 + 10 + 1), L"wrapper.on_exit.%d", wrapperData->exitCode);
      const signed int *return_value_getStringProperty_5;
      return_value_getStringProperty_5=getStringProperty(properties, L"wrapper.on_exit.default", L"shutdown");
      onExitAction=getStringProperty(properties, onExitParamBuffer, return_value_getStringProperty_5);
      signed int return_value_wcscasecmp_8;
      return_value_wcscasecmp_8=wcscasecmp(onExitAction, L"restart");
      if(return_value_wcscasecmp_8 == 0)
      {
        log_printf(-1, 3, L"on_exit trigger matched.  Restarting the JVM.  (Exit code: %d)", wrapperData->exitCode);
        wrapperData->restartRequested = 4;
      }

      else
      {
        return_value_wcscasecmp_7=wcscasecmp(onExitAction, L"pause");
        if(return_value_wcscasecmp_7 == 0)
        {
          if(!(wrapperData->pausable == 0))
          {
            log_printf(-1, 3, L"on_exit trigger matched.  Pausing the Wrapper.  (Exit code: %d)", wrapperData->exitCode);
            wrapperPauseProcess(4);
          }

          else
          {
            log_printf(-1, 3, L"on_exit trigger matched.  Pausing not enabled.  Restarting the JVM.  (Exit code: %d)", wrapperData->exitCode);
            wrapperData->restartRequested = 4;
          }
        }

        else
        {
          signed int return_value_wcscasecmp_6;
          return_value_wcscasecmp_6=wcscasecmp(onExitAction, L"shutdown");
          if(!(return_value_wcscasecmp_6 == 0))
            log_printf(-1, 4, L"Encountered an unexpected value for configuration property %s=%s.  Resolving to %s.", (const void *)onExitParamBuffer, onExitAction, (const void *)L"SHUTDOWN");

          wrapperSetWrapperState(56);
        }
      }
    }
  }

  else
    if(wrapperData->wState == 54)
    {
      if(!(wrapperData->pausableStopJVM == 0))
        wrapperData->restartRequested = 4;

      else
        if(wrapperData->restartRequested == 0)
        {
          _sntprintf(onExitParamBuffer, (unsigned long int)(16 + 10 + 1), L"wrapper.on_exit.%d", wrapperData->exitCode);
          const signed int *return_value_getStringProperty_9;
          return_value_getStringProperty_9=getStringProperty(properties, L"wrapper.on_exit.default", L"shutdown");
          onExitAction=getStringProperty(properties, onExitParamBuffer, return_value_getStringProperty_9);
          signed int return_value_wcscasecmp_12;
          return_value_wcscasecmp_12=wcscasecmp(onExitAction, L"restart");
          if(return_value_wcscasecmp_12 == 0)
          {
            log_printf(-1, 3, L"on_exit trigger matched.  Service is paused, will restart the JVM when resumed.  (Exit code: %d)", wrapperData->exitCode);
            wrapperData->restartRequested = 4;
          }

          else
          {
            return_value_wcscasecmp_11=wcscasecmp(onExitAction, L"pause");
            if(return_value_wcscasecmp_11 == 0)
              wrapperData->restartRequested = 4;

            else
            {
              signed int return_value_wcscasecmp_10;
              return_value_wcscasecmp_10=wcscasecmp(onExitAction, L"shutdown");
              if(!(return_value_wcscasecmp_10 == 0))
                log_printf(-1, 4, L"Encountered an unexpected value for configuration property %s=%s.  Resolving to %d.", (const void *)onExitParamBuffer, onExitAction, (const void *)L"SHUTDOWN");

              wrapperSetWrapperState(56);
            }
          }
        }

    }

  wrapperData->lastPingTicks = nowTicks;
  wrapperData->lastLoggedPingTicks = nowTicks;
}

// jStateDownFlush
// file wrappereventloop.c line 1840
void jStateDownFlush(unsigned int nowTicks, signed int nextSleep)
{
  struct PendingPing *pendingPing;
  wrapperProtocolClose();
  if(!(wrapperData->firstPendingPing == ((struct PendingPing *)NULL)))
  {
    if(!(wrapperData->isDebugging == 0))
      log_printf(-1, 1, L"%d pings were not replied to when the JVM process exited.", wrapperData->pendingPingCount);

    while(!(wrapperData->firstPendingPing == ((struct PendingPing *)NULL)))
    {
      pendingPing = wrapperData->firstPendingPing;
      if(!(pendingPing->nextPendingPing == ((struct PendingPing *)NULL)))
      {
        wrapperData->pendingPingCount = wrapperData->pendingPingCount - 1;
        if(wrapperData->firstUnwarnedPendingPing == wrapperData->firstPendingPing)
          wrapperData->firstUnwarnedPendingPing = pendingPing->nextPendingPing;

        wrapperData->firstPendingPing = pendingPing->nextPendingPing;
        pendingPing->nextPendingPing = (struct PendingPing *)(void *)0;
      }

      else
      {
        wrapperData->pendingPingCount = 0;
        wrapperData->firstUnwarnedPendingPing = (struct PendingPing *)(void *)0;
        wrapperData->firstPendingPing = (struct PendingPing *)(void *)0;
        wrapperData->lastPendingPing = (struct PendingPing *)(void *)0;
      }
      if(!(pendingPing == ((struct PendingPing *)NULL)))
      {
        free((void *)pendingPing);
        pendingPing = (struct PendingPing *)(void *)0;
      }

    }
  }

  if(!(wrapperData->pendingPingQueueOverflow == 0))
  {
    wrapperData->pendingPingQueueOverflow = 0;
    wrapperData->pendingPingQueueOverflowEmptied = 0;
  }

  wrapperSetJavaState(72, nowTicks, -1);
}

// jStateKill
// file wrappereventloop.c line 1758
void jStateKill(unsigned int nowTicks, signed int nextSleep)
{
  _Bool tmp_if_expr_5;
  signed int return_value_wrapperGetProcessStatus_4;
  if(!(nextSleep == 0))
  {
    return_value_wrapperGetProcessStatus_4=wrapperGetProcessStatus(nowTicks, 0);
    tmp_if_expr_5 = return_value_wrapperGetProcessStatus_4 == 200 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_5 = (_Bool)0;
  _Bool tmp_if_expr_3;
  signed int return_value_wrapperGetTickAgeSeconds_2;
  if(!tmp_if_expr_5)
  {
    if(!(wrapperData->jStateTimeoutTicksSet == 0))
    {
      return_value_wrapperGetTickAgeSeconds_2=wrapperGetTickAgeSeconds(wrapperData->jStateTimeoutTicks, nowTicks);
      tmp_if_expr_3 = return_value_wrapperGetTickAgeSeconds_2 >= 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_3 = (_Bool)0;
    if(tmp_if_expr_3)
    {
      signed int return_value_wrapperKillProcessNow_1;
      return_value_wrapperKillProcessNow_1=wrapperKillProcessNow();
      if(!(return_value_wrapperKillProcessNow_1 == 0))
      {
        if(!(wrapperData->restartRequested == 0))
        {
          log_printf(-1, 5, L"Failed to terminate the JVM, abort all restart.");
          wrapperData->restartRequested = 0;
          wrapperData->isRestartDisabled = -1;
        }

      }

      else
        if(wrapperData->jvmTerminateTimeout >= 1)
          wrapperSetJavaState(85, nowTicks, 5 + wrapperData->jvmTerminateTimeout);

        else
          wrapperSetJavaState(85, nowTicks, -1);
    }

  }

}

// jStateKillConfirm
// file wrappereventloop.c line 1795
void jStateKillConfirm(unsigned int nowTicks, signed int nextSleep)
{
  _Bool tmp_if_expr_4;
  signed int return_value_wrapperGetProcessStatus_3;
  if(!(nextSleep == 0))
  {
    return_value_wrapperGetProcessStatus_3=wrapperGetProcessStatus(nowTicks, 0);
    tmp_if_expr_4 = return_value_wrapperGetProcessStatus_3 == 200 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_4 = (_Bool)0;
  _Bool tmp_if_expr_2;
  signed int return_value_wrapperGetTickAgeSeconds_1;
  if(!tmp_if_expr_4)
  {
    if(!(wrapperData->jStateTimeoutTicksSet == 0))
    {
      return_value_wrapperGetTickAgeSeconds_1=wrapperGetTickAgeSeconds(wrapperData->jStateTimeoutTicks, nowTicks);
      tmp_if_expr_2 = return_value_wrapperGetTickAgeSeconds_1 >= 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
    {
      if(!(wrapperData->restartRequested == 0))
      {
        log_printf(-1, 5, L"Failed to terminate the JVM, abort all restart.");
        wrapperData->restartRequested = 0;
        wrapperData->isRestartDisabled = -1;
      }

      log_printf(-1, 5, L"Failed to terminate the JVM.");
      wrapperSetJavaState(70, nowTicks, -1);
      wrapperStopProcess(1, -1);
    }

  }

}

// jStateKilling
// file wrappereventloop.c line 1733
void jStateKilling(unsigned int nowTicks, signed int nextSleep)
{
  _Bool tmp_if_expr_4;
  signed int return_value_wrapperGetProcessStatus_3;
  if(!(nextSleep == 0))
  {
    return_value_wrapperGetProcessStatus_3=wrapperGetProcessStatus(nowTicks, 0);
    tmp_if_expr_4 = return_value_wrapperGetProcessStatus_3 == 200 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_4 = (_Bool)0;
  _Bool tmp_if_expr_2;
  signed int return_value_wrapperGetTickAgeSeconds_1;
  if(!tmp_if_expr_4)
  {
    if(!(wrapperData->jStateTimeoutTicksSet == 0))
    {
      return_value_wrapperGetTickAgeSeconds_1=wrapperGetTickAgeSeconds(wrapperData->jStateTimeoutTicks, nowTicks);
      tmp_if_expr_2 = return_value_wrapperGetTickAgeSeconds_1 >= 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
      wrapperSetJavaState(84, nowTicks, 0);

  }

}

// jStateLaunch
// file wrappereventloop.c line 1345
void jStateLaunch(unsigned int nowTicks, signed int nextSleep)
{
  _Bool tmp_if_expr_2;
  if(wrapperData->wState == 51)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = wrapperData->wState == 52 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_3;
  if(tmp_if_expr_2)
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = wrapperData->wState == 55 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_3)
  {
    log_printf(-1, 3, L"Launching a JVM...");
    signed int return_value_wrapperExecute_1;
    return_value_wrapperExecute_1=wrapperExecute();
    if(!(return_value_wrapperExecute_1 == 0))
      wrapperSetJavaState(72, nowTicks, -1);

    else
      if(wrapperData->startupTimeout >= 1)
        wrapperSetJavaState(76, nowTicks, wrapperData->startupTimeout);

      else
        wrapperSetJavaState(76, nowTicks, -1);
  }

  else
    wrapperSetJavaState(72, nowTicks, -1);
}

// jStateLaunchDelay
// file wrappereventloop.c line 1175
void jStateLaunchDelay(unsigned int nowTicks, signed int nextSleep)
{
  const signed int *mainClass;
  _Bool tmp_if_expr_10;
  if(wrapperData->wState == 51)
    tmp_if_expr_10 = (_Bool)1;

  else
    tmp_if_expr_10 = wrapperData->wState == 52 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_11;
  if(tmp_if_expr_10)
    tmp_if_expr_11 = (_Bool)1;

  else
    tmp_if_expr_11 = wrapperData->wState == 55 ? (_Bool)1 : (_Bool)0;
  signed int return_value_wrapperGetTickAgeSeconds_9;
  signed int return_value_wrapperSetWorkingDir_4;
  signed int *return_value_wcsstr_5;
  if(tmp_if_expr_11)
  {
    if(!(wrapperData->jStateTimeoutTicksSet == 0))
    {
      return_value_wrapperGetTickAgeSeconds_9=wrapperGetTickAgeSeconds(wrapperData->jStateTimeoutTicks, nowTicks);
      if(return_value_wrapperGetTickAgeSeconds_9 >= 0)
      {
        if(wrapperData->jvmRestarts >= 1)
        {
          signed int return_value_getLogfileRollMode_1;
          return_value_getLogfileRollMode_1=getLogfileRollMode();
          if(!((8 & return_value_getLogfileRollMode_1) == 0))
            rollLogs();

          if(!(wrapperData->restartReloadConf == 0))
          {
            log_printf(-1, 3, L"Reloading Wrapper configuration...");
            if(!(wrapperData->workingDir == ((signed int *)NULL)))
            {
              if(!(wrapperData->originalWorkingDir == ((signed int *)NULL)))
              {
                signed int return_value_wrapperSetWorkingDir_2;
                return_value_wrapperSetWorkingDir_2=wrapperSetWorkingDir(wrapperData->originalWorkingDir, -1);
                if(!(return_value_wrapperSetWorkingDir_2 == 0))
                {
                  wrapperSetWrapperState(56);
                  wrapperData->exitCode = 1;
                  goto __CPROVER_DUMP_L22;
                }

              }

            }

            signed int return_value_wrapperLoadConfigurationProperties_3;
            return_value_wrapperLoadConfigurationProperties_3=wrapperLoadConfigurationProperties(0);
            if(!(return_value_wrapperLoadConfigurationProperties_3 == 0))
            {
              wrapperSetWrapperState(56);
              wrapperData->exitCode = 1;
              goto __CPROVER_DUMP_L22;
            }

            if(!(wrapperData->workingDir == ((signed int *)NULL)))
            {
              return_value_wrapperSetWorkingDir_4=wrapperSetWorkingDir(wrapperData->workingDir, -1);
              if(!(return_value_wrapperSetWorkingDir_4 == 0))
              {
                wrapperSetWrapperState(56);
                wrapperData->exitCode = 1;
                goto __CPROVER_DUMP_L22;
              }

            }

          }

        }

        mainClass=getStringProperty(properties, L"wrapper.java.mainclass", L"Main");
        signed int *return_value_wcsstr_6;
        return_value_wcsstr_6=wcsstr(mainClass, L"com.silveregg.wrapper.WrapperSimpleApp");
        if(!(return_value_wcsstr_6 == ((signed int *)NULL)))
        {
          log_printf(-1, 5, L"The %s class is no longer supported.", (const void *)L"com.silveregg.wrapper.WrapperSimpleApp");
          log_printf(-1, 5, L"Please use the %s class instead.", (const void *)L"com.silveregg.wrapper.WrapperSimpleApp");
          wrapperSetWrapperState(56);
          wrapperData->exitCode = 1;
          goto __CPROVER_DUMP_L22;
        }

        else
        {
          return_value_wcsstr_5=wcsstr(mainClass, L"com.silveregg.wrapper.WrapperStartStopApp");
          if(!(return_value_wcsstr_5 == ((signed int *)NULL)))
          {
            log_printf(-1, 5, L"The %s class is no longer supported.", (const void *)L"com.silveregg.wrapper.WrapperStartStopApp");
            log_printf(-1, 5, L"Please use the %s class instead.", (const void *)L"com.silveregg.wrapper.WrapperStartStopApp");
            wrapperSetWrapperState(56);
            wrapperData->exitCode = 1;
            goto __CPROVER_DUMP_L22;
          }

        }
        wrapperData->jvmLaunchTicks = nowTicks;
        wrapperBuildKey();
        signed int return_value_wrapperCheckServerBackend_7;
        return_value_wrapperCheckServerBackend_7=wrapperCheckServerBackend(-1);
        if(return_value_wrapperCheckServerBackend_7 == 0)
        {
          wrapperSetWrapperState(56);
          wrapperData->exitCode = 1;
          goto __CPROVER_DUMP_L22;
        }

        signed int return_value_wrapperBuildJavaCommand_8;
        return_value_wrapperBuildJavaCommand_8=wrapperBuildJavaCommand();
        if(!(return_value_wrapperBuildJavaCommand_8 == 0))
        {
          wrapperSetWrapperState(56);
          wrapperData->exitCode = 1;
          goto __CPROVER_DUMP_L22;
        }

        if(!(wrapperData->isDebugging == 0))
        {
          log_printf(-1, 1, L"%s wrapper.startup.timeout=%d, wrapper.startup.delay.console=%d, wrapper.startup.delay.service=%d, wrapper.restart.delay=%d", (const void *)L"Startup Timeouts:", wrapperData->startupTimeout, wrapperData->startupDelayConsole, wrapperData->startupDelayService, wrapperData->restartDelay);
          log_printf(-1, 1, L"%s wrapper.ping.interval=%d, wrapper.ping.interval.logged=%d, wrapper.ping.timeout=%d, wrapper.ping.alert.threshold=%d", (const void *)L"Ping settings:", wrapperData->pingInterval, wrapperData->pingIntervalLogged, wrapperData->pingTimeout, wrapperData->pingAlertThreshold);
          log_printf(-1, 1, L"%s wrapper.shutdown.timeout=%d, wrapper.jvm_exit.timeout=%d, wrapper.jvm_cleanup.timeout=%d, wrapper.jvm_terminate.timeout=%d", (const void *)L"Shutdown Timeouts:", wrapperData->shutdownTimeout, wrapperData->jvmExitTimeout, wrapperData->jvmCleanupTimeout, wrapperData->jvmTerminateTimeout);
        }

        if(wrapperData->jvmRestarts >= 1)
          wrapperSetJavaState(74, nowTicks, -1);

        else
        {
          wrapperData->jvmRestarts = wrapperData->jvmRestarts + 1;
          wrapperSetJavaState(75, nowTicks, -1);
        }
      }

    }

  }

  else
    wrapperSetJavaState(72, nowTicks, -1);

__CPROVER_DUMP_L22:
  ;
}

// jStateLaunched
// file wrappereventloop.c line 1425
void jStateLaunched(unsigned int nowTicks, signed int nextSleep)
{
  signed int ret;
  if(!(wrapperData->isDebugging == 0))
    log_printf(-1, 1, L"Start Application.");

  ret=wrapperProtocolFunction((char)100, L"start");
  if(!(ret == 0))
  {
    log_printf(-1, 5, L"Unable to send the start command to the JVM.");
    wrapperKillProcess();
    wrapperData->restartRequested = 2;
  }

  else
    if(wrapperData->startupTimeout >= 1)
      wrapperSetJavaState(78, nowTicks, wrapperData->startupTimeout);

    else
      wrapperSetJavaState(78, nowTicks, -1);
}

// jStateLaunching
// file wrappereventloop.c line 1388
void jStateLaunching(unsigned int nowTicks, signed int nextSleep)
{
  _Bool tmp_if_expr_3;
  signed int return_value_wrapperGetProcessStatus_2;
  if(!(nextSleep == 0))
  {
    return_value_wrapperGetProcessStatus_2=wrapperGetProcessStatus(nowTicks, 0);
    tmp_if_expr_3 = return_value_wrapperGetProcessStatus_2 == 200 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_3 = (_Bool)0;
  signed int return_value_wrapperGetTickAgeSeconds_1;
  if(!tmp_if_expr_3)
  {
    if(!(wrapperData->jStateTimeoutTicksSet == 0))
    {
      return_value_wrapperGetTickAgeSeconds_1=wrapperGetTickAgeSeconds(wrapperData->jStateTimeoutTicks, nowTicks);
      if(return_value_wrapperGetTickAgeSeconds_1 >= 0)
      {
        if(!(wrapperData->debugJVM == 0))
          handleDebugJVMTimeout(nowTicks, L"Startup: Timed out waiting for a signal from the JVM.", L"startup");

        else
        {
          displayLaunchingTimeoutMessage();
          wrapperKillProcess();
          wrapperData->restartRequested = 2;
        }
      }

    }

  }

}

// jStateRestart
// file wrappereventloop.c line 1319
void jStateRestart(unsigned int nowTicks, signed int nextSleep)
{
  _Bool tmp_if_expr_1;
  if(wrapperData->wState == 51)
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = wrapperData->wState == 52 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = wrapperData->wState == 55 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    wrapperData->jvmRestarts = wrapperData->jvmRestarts + 1;
    wrapperSetJavaState(75, nowTicks, -1);
  }

  else
    wrapperSetJavaState(72, nowTicks, -1);
}

// jStateStarted
// file wrappereventloop.c line 1508
void jStateStarted(unsigned int nowTicks, signed int nextSleep)
{
  signed int ret;
  signed int protocolMessage[16l];
  struct PendingPing *pendingPing;
  _Bool tmp_if_expr_11;
  signed int return_value_wrapperGetProcessStatus_10;
  if(!(nextSleep == 0))
  {
    return_value_wrapperGetProcessStatus_10=wrapperGetProcessStatus(nowTicks, 0);
    tmp_if_expr_11 = return_value_wrapperGetProcessStatus_10 == 200 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_11 = (_Bool)0;
  signed int return_value_wrapperGetTickAgeSeconds_1;
  _Bool tmp_if_expr_9;
  signed int return_value_wrapperGetTickAgeSeconds_8;
  unsigned int return_value_wrapperAddToTicks_6;
  signed int return_value_wrapperGetTickAgeSeconds_7;
  _Bool tmp_if_expr_5;
  if(!tmp_if_expr_11)
  {
    if(!(wrapperData->firstUnwarnedPendingPing == ((struct PendingPing *)NULL)))
    {
      if(wrapperData->pingAlertThreshold >= 1)
      {
        return_value_wrapperGetTickAgeSeconds_1=wrapperGetTickAgeSeconds(wrapperData->firstUnwarnedPendingPing->slowTicks, nowTicks);
        if(return_value_wrapperGetTickAgeSeconds_1 >= 0)
        {
          wrapperPingSlow();
          wrapperData->firstUnwarnedPendingPing = wrapperData->firstUnwarnedPendingPing->nextPendingPing;
        }

      }

    }

    if(!(wrapperData->jStateTimeoutTicksSet == 0))
    {
      return_value_wrapperGetTickAgeSeconds_8=wrapperGetTickAgeSeconds(wrapperData->jStateTimeoutTicks, nowTicks);
      tmp_if_expr_9 = return_value_wrapperGetTickAgeSeconds_8 >= 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_9 = (_Bool)0;
    if(tmp_if_expr_9)
    {
      if(!(wrapperData->debugJVM == 0))
        handleDebugJVMTimeout(nowTicks, L"Ping: Timed out waiting for signal from JVM.", L"ping");

      else
        if(wrapperData->pingTimedOut == 0)
        {
          wrapperPingTimeoutResponded();
          wrapperData->pingTimedOut = -1;
        }

    }

    else
    {
      return_value_wrapperAddToTicks_6=wrapperAddToTicks(wrapperData->lastPingTicks, wrapperData->pingInterval);
      return_value_wrapperGetTickAgeSeconds_7=wrapperGetTickAgeSeconds(return_value_wrapperAddToTicks_6, nowTicks);
      if(return_value_wrapperGetTickAgeSeconds_7 >= 0)
      {
        unsigned int return_value_wrapperAddToTicks_2;
        return_value_wrapperAddToTicks_2=wrapperAddToTicks(wrapperData->lastLoggedPingTicks, wrapperData->pingIntervalLogged);
        signed int return_value_wrapperGetTickAgeSeconds_3;
        return_value_wrapperGetTickAgeSeconds_3=wrapperGetTickAgeSeconds(return_value_wrapperAddToTicks_2, nowTicks);
        if(return_value_wrapperGetTickAgeSeconds_3 >= 0)
        {
          if(!(wrapperData->isLoopOutputEnabled == 0))
            log_printf(-1, 3, L"    Loop: Sending a ping packet.");

          _sntprintf(protocolMessage, (unsigned long int)(7 + 8 + 1), L"ping %08x", nowTicks);
          ret=wrapperProtocolFunction((char)103, protocolMessage);
          wrapperData->lastLoggedPingTicks = nowTicks;
        }

        else
        {
          if(!(wrapperData->isLoopOutputEnabled == 0))
            log_printf(-1, 3, L"    Loop: Sending a silent ping packet.");

          _sntprintf(protocolMessage, (unsigned long int)(7 + 8 + 1), L"silent %08x", nowTicks);
          ret=wrapperProtocolFunction((char)103, protocolMessage);
        }
        if(!(ret == 0))
        {
          if(!(wrapperData->isDebugging == 0))
            log_printf(-1, 1, L"JVM Ping Failed.");

        }

        else
        {
          if(!(wrapperData->pendingPingQueueOverflow == 0))
            tmp_if_expr_5 = !(wrapperData->pendingPingQueueOverflowEmptied != 0) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_5 = (_Bool)0;
          if(!tmp_if_expr_5)
          {
            if(wrapperData->pendingPingCount >= 10)
            {
              if(!(wrapperData->isDebugging == 0))
                log_printf(-1, 1, L"Too many Pending Pings.  Disabling some ping checks until the JVM has caught up.");

              wrapperData->pendingPingQueueOverflow = -1;
              wrapperData->pendingPingQueueOverflowEmptied = 0;
            }

            else
            {
              void *return_value_malloc_4;
              return_value_malloc_4=malloc(sizeof(struct PendingPing) /*24ul*/ );
              pendingPing = (struct PendingPing *)return_value_malloc_4;
              if(pendingPing == ((struct PendingPing *)NULL))
                outOfMemory(L"JSS", 1);

              else
              {
                memset((void *)pendingPing, 0, sizeof(struct PendingPing) /*24ul*/ );
                pendingPing->sentTicks = nowTicks;
                pendingPing->timeoutTicks=wrapperAddToTicks(nowTicks, wrapperData->pingTimeout);
                pendingPing->slowTicks=wrapperAddToTicks(nowTicks, wrapperData->pingAlertThreshold);
                if(wrapperData->firstPendingPing == ((struct PendingPing *)NULL))
                {
                  wrapperData->pendingPingCount = 1;
                  wrapperData->firstUnwarnedPendingPing = pendingPing;
                  wrapperData->firstPendingPing = pendingPing;
                  wrapperData->lastPendingPing = pendingPing;
                }

                else
                {
                  wrapperData->pendingPingCount = wrapperData->pendingPingCount + 1;
                  if(wrapperData->firstUnwarnedPendingPing == ((struct PendingPing *)NULL))
                    wrapperData->firstUnwarnedPendingPing = pendingPing;

                  wrapperData->lastPendingPing->nextPendingPing = pendingPing;
                  wrapperData->lastPendingPing = pendingPing;
                }
                if(wrapperData->pendingPingCount >= 2)
                {
                  if(!(wrapperData->isDebugging == 0))
                    log_printf(-1, 1, L"Pending Pings %d", wrapperData->pendingPingCount);

                }

              }
            }
          }

        }
        if(!(wrapperData->isLoopOutputEnabled == 0))
          log_printf(-1, 3, L"    Loop: Sent a ping packet.");

        wrapperData->lastPingTicks = nowTicks;
      }

    }
  }

}

// jStateStarting
// file wrappereventloop.c line 1467
void jStateStarting(unsigned int nowTicks, signed int nextSleep)
{
  _Bool tmp_if_expr_4;
  signed int return_value_wrapperGetProcessStatus_3;
  if(!(nextSleep == 0))
  {
    return_value_wrapperGetProcessStatus_3=wrapperGetProcessStatus(nowTicks, 0);
    tmp_if_expr_4 = return_value_wrapperGetProcessStatus_3 == 200 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_4 = (_Bool)0;
  _Bool tmp_if_expr_2;
  signed int return_value_wrapperGetTickAgeSeconds_1;
  if(!tmp_if_expr_4)
  {
    if(!(wrapperData->jStateTimeoutTicksSet == 0))
    {
      return_value_wrapperGetTickAgeSeconds_1=wrapperGetTickAgeSeconds(wrapperData->jStateTimeoutTicks, nowTicks);
      tmp_if_expr_2 = return_value_wrapperGetTickAgeSeconds_1 >= 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
    {
      if(!(wrapperData->debugJVM == 0))
        handleDebugJVMTimeout(nowTicks, L"Startup: Timed out waiting for a signal from the JVM.", L"startup");

      else
      {
        log_printf(-1, 5, L"Startup failed: Timed out waiting for signal from JVM.");
        wrapperKillProcess();
        wrapperData->restartRequested = 2;
      }
    }

  }

}

// jStateStop
// file wrappereventloop.c line 1632
void jStateStop(unsigned int nowTicks, signed int nextSleep)
{
  _Bool tmp_if_expr_2;
  signed int return_value_wrapperGetProcessStatus_1;
  if(!(nextSleep == 0))
  {
    return_value_wrapperGetProcessStatus_1=wrapperGetProcessStatus(nowTicks, 0);
    tmp_if_expr_2 = return_value_wrapperGetProcessStatus_1 == 200 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_2 = (_Bool)0;
  if(!tmp_if_expr_2)
  {
    wrapperProtocolFunction((char)101, (const signed int *)(void *)0);
    if(wrapperData->shutdownTimeout >= 1)
      wrapperSetJavaState(81, nowTicks, 5 + wrapperData->shutdownTimeout);

    else
      wrapperSetJavaState(81, nowTicks, -1);
  }

}

// jStateStopped
// file wrappereventloop.c line 1698
void jStateStopped(unsigned int nowTicks, signed int nextSleep)
{
  _Bool tmp_if_expr_4;
  signed int return_value_wrapperGetProcessStatus_3;
  if(!(nextSleep == 0))
  {
    return_value_wrapperGetProcessStatus_3=wrapperGetProcessStatus(nowTicks, 0);
    tmp_if_expr_4 = return_value_wrapperGetProcessStatus_3 == 200 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_4 = (_Bool)0;
  _Bool tmp_if_expr_2;
  signed int return_value_wrapperGetTickAgeSeconds_1;
  if(!tmp_if_expr_4)
  {
    if(!(wrapperData->jStateTimeoutTicksSet == 0))
    {
      return_value_wrapperGetTickAgeSeconds_1=wrapperGetTickAgeSeconds(wrapperData->jStateTimeoutTicks, nowTicks);
      tmp_if_expr_2 = return_value_wrapperGetTickAgeSeconds_1 >= 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
    {
      if(!(wrapperData->debugJVM == 0))
        handleDebugJVMTimeout(nowTicks, L"Shutdown: Timed out waiting for the JVM to terminate.", L"JVM exit");

      else
      {
        log_printf(-1, 5, L"Shutdown failed: Timed out waiting for the JVM to terminate.");
        wrapperKillProcess();
      }
    }

  }

}

// jStateStopping
// file wrappereventloop.c line 1661
void jStateStopping(unsigned int nowTicks, signed int nextSleep)
{
  _Bool tmp_if_expr_4;
  signed int return_value_wrapperGetProcessStatus_3;
  if(!(nextSleep == 0))
  {
    return_value_wrapperGetProcessStatus_3=wrapperGetProcessStatus(nowTicks, 0);
    tmp_if_expr_4 = return_value_wrapperGetProcessStatus_3 == 200 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_4 = (_Bool)0;
  _Bool tmp_if_expr_2;
  signed int return_value_wrapperGetTickAgeSeconds_1;
  if(!tmp_if_expr_4)
  {
    if(!(wrapperData->jStateTimeoutTicksSet == 0))
    {
      return_value_wrapperGetTickAgeSeconds_1=wrapperGetTickAgeSeconds(wrapperData->jStateTimeoutTicks, nowTicks);
      tmp_if_expr_2 = return_value_wrapperGetTickAgeSeconds_1 >= 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
    {
      if(!(wrapperData->debugJVM == 0))
        handleDebugJVMTimeout(nowTicks, L"Shutdown: Timed out waiting for a signal from the JVM.", L"shutdown");

      else
      {
        log_printf(-1, 5, L"Shutdown failed: Timed out waiting for signal from JVM.");
        wrapperKillProcess();
      }
    }

  }

}

// javaIORunner
// file wrapper_unix.c line 668
void * javaIORunner(void *arg)
{
  struct anonymous_4 signal_mask;
  signed int nextSleep;
  signed int rc;
  javaIOThreadStarted = -1;
  logRegisterThread(4);
  sigemptyset(&signal_mask);
  sigaddset(&signal_mask, 15);
  sigaddset(&signal_mask, 2);
  sigaddset(&signal_mask, 3);
  sigaddset(&signal_mask, 14);
  sigaddset(&signal_mask, 1);
  sigaddset(&signal_mask, 10);
  sigaddset(&signal_mask, 12);
  rc=pthread_sigmask(0, &signal_mask, (struct anonymous_4 *)(void *)0);
  if(!(rc == 0))
    log_printf(-1, 5, L"Could not mask signals for javaIO thread.");

  if(!(wrapperData->isJavaIOOutputEnabled == 0))
    log_printf(-1, 3, L"JavaIO thread started.");

  nextSleep = -1;
  while(nextSleep == 0 || stopJavaIOThread == 0)
  {
    if(!(nextSleep == 0))
      wrapperSleep(1);

    nextSleep = -1;
    if(!(wrapperData->pauseThreadJavaIO == 0))
    {
      wrapperPauseThread(wrapperData->pauseThreadJavaIO, L"javaio");
      wrapperData->pauseThreadJavaIO = 0;
    }

    signed int return_value_wrapperReadChildOutput_1;
    return_value_wrapperReadChildOutput_1=wrapperReadChildOutput(0);
    if(!(return_value_wrapperReadChildOutput_1 == 0))
    {
      if(!(wrapperData->isDebugging == 0))
        log_printf(-1, 1, L"Pause reading child process output to share cycles.");

      nextSleep = 0;
    }

  }
  javaIOThreadStopped = -1;
  if(!(wrapperData->isJavaIOOutputEnabled == 0))
    log_printf_queue(-1, -1, 3, L"JavaIO thread stopped.");

  return (void *)0;
}

// limitLogFileCount
// file logger.c line 2848
void limitLogFileCount(const signed int *current, const signed int *pattern, signed int sortMode, signed int count)
{
  signed int **files;
  signed int index;
  signed int foundCurrent;
  files=loggerFileGetFiles(pattern, sortMode);
  signed int return_value__tremove_3;
  if(!(files == ((signed int **)NULL)))
  {
    foundCurrent = 0;
    index = 0;
    for( ; !(files[(signed long int)index] == ((signed int *)NULL)); index = index + 1)
      if(!(index >= count))
      {
        signed int return_value_wcscmp_1;
        return_value_wcscmp_1=wcscmp(current, files[(signed long int)index]);
        if(return_value_wcscmp_1 == 0)
          foundCurrent = -1;

      }

      else
      {
        signed int return_value_wcscmp_4;
        return_value_wcscmp_4=wcscmp(current, files[(signed long int)index]);
        if(return_value_wcscmp_4 == 0)
        {
          _tprintf(L"Log file sort order would result in current log file being deleted: %s\n", current);
          foundCurrent = -1;
        }

        else
        {
          return_value__tremove_3=_tremove(files[(signed long int)index]);
          if(!(return_value__tremove_3 == 0))
          {
            const signed int *return_value_getLastErrorText_2;
            return_value_getLastErrorText_2=getLastErrorText();
            _tprintf(L"Unable to delete old log file: %s (%s)\n", files[(signed long int)index], return_value_getLastErrorText_2);
          }

        }
      }
    if(foundCurrent == 0)
    {
      if(index >= count)
      {
        signed int return_value__tremove_6;
        return_value__tremove_6=_tremove(files[(signed long int)(count - 1)]);
        if(!(return_value__tremove_6 == 0))
        {
          const signed int *return_value_getLastErrorText_5;
          return_value_getLastErrorText_5=getLastErrorText();
          _tprintf(L"Unable to delete old log file: %s (%s)\n", files[(signed long int)(count - 1)], return_value_getLastErrorText_5);
        }

      }

    }

    loggerFileFreeFiles(files);
  }

}

// linearizeProperties
// file property.h line 292
extern signed int * linearizeProperties(struct Properties *properties, signed int separator)
{
  struct Property *property;
  unsigned long int size;
  signed int *c;
  signed int *fullBuffer;
  signed int *work;
  signed int *buffer;
  size = (unsigned long int)0;
  property = properties->first;
  while(!(property == ((struct Property *)NULL)))
  {
    unsigned long int return_value_wcslen_1;
    return_value_wcslen_1=wcslen(property->name);
    size = size + return_value_wcslen_1;
    size = size + 1ul;
    unsigned long int return_value_wcslen_2;
    return_value_wcslen_2=wcslen(property->value);
    size = size + return_value_wcslen_2;
    c = property->name;
    do
    {
      c=wcschr(c, separator);
      if(c == ((signed int *)NULL))
        break;

      size = size + 1ul;
      c = c + 1l;
    }
    while((_Bool)1);
    c = property->value;
    do
    {
      c=wcschr(c, separator);
      if(c == ((signed int *)NULL))
        break;

      size = size + 1ul;
      c = c + 1l;
    }
    while((_Bool)1);
    size = size + 1ul;
    property = property->next;
  }
  size = size + 1ul;
  void *return_value_calloc_3;
  return_value_calloc_3=calloc(sizeof(signed int) /*4ul*/ , size);
  buffer = (signed int *)return_value_calloc_3;
  fullBuffer = buffer;
  if(fullBuffer == ((signed int *)NULL))
  {
    outOfMemory(L"LP", 1);
    return (signed int *)(void *)0;
  }

  else
  {
    property = properties->first;
    while(!(property == ((struct Property *)NULL)))
    {
      work = property->name;
      do
      {
        c=wcschr(work, separator);
        if(c == ((signed int *)NULL))
          break;

        wcsncpy(buffer, work, (unsigned long int)((c - work) + (signed long int)1));
        buffer = buffer + (c - work) + (signed long int)1;
        buffer[(signed long int)0] = separator;
        buffer = buffer + 1l;
        work = c + (signed long int)1;
      }
      while((_Bool)1);
      unsigned long int return_value_wcslen_4;
      return_value_wcslen_4=wcslen(fullBuffer);
      wcsncpy(buffer, work, size - return_value_wcslen_4);
      unsigned long int return_value_wcslen_5;
      return_value_wcslen_5=wcslen(work);
      buffer = buffer + (signed long int)return_value_wcslen_5;
      buffer[(signed long int)0] = 61;
      buffer = buffer + 1l;
      work = property->value;
      do
      {
        c=wcschr(work, separator);
        if(c == ((signed int *)NULL))
          break;

        wcsncpy(buffer, work, (unsigned long int)((c - work) + (signed long int)1));
        buffer = buffer + (c - work) + (signed long int)1;
        buffer[(signed long int)0] = separator;
        buffer = buffer + 1l;
        work = c + (signed long int)1;
      }
      while((_Bool)1);
      unsigned long int return_value_wcslen_6;
      return_value_wcslen_6=wcslen(fullBuffer);
      wcsncpy(buffer, work, size - return_value_wcslen_6);
      unsigned long int return_value_wcslen_7;
      return_value_wcslen_7=wcslen(work);
      buffer = buffer + (signed long int)return_value_wcslen_7;
      buffer[(signed long int)0] = separator;
      buffer = buffer + 1l;
      property = property->next;
    }
    buffer[(signed long int)0] = 0;
    buffer = buffer + 1l;
    return fullBuffer;
  }
}

// loadConfiguration
// file wrapper.c line 7864
signed int loadConfiguration()
{
  signed int propName[256l];
  const signed int *val;
  signed int startupDelay;
  wrapperLoadLoggingProperties(0);
  val=getStringProperty(properties, L"wrapper.backend.type", L"AUTO");
  wrapperData->backendType=getBackendTypeForName(val);
  if(wrapperData->backendType == 0)
  {
    log_printf(-1, 1, L"Unknown value for wrapper.backend.type: %s. Setting it to AUTO.", val);
    wrapperData->backendType = 0x01 | 0x02 | 0x04;
  }

  wrapperData->environmentClasspath=getBooleanProperty(properties, L"wrapper.java.classpath.use_environment", 0);
  wrapperData->ignoreSequenceGaps=getBooleanProperty(properties, L"wrapper.ignore_sequence_gaps", 0);
  checkLogfileDir();
  closeLogfile();
  maintainLogger();
  maintainLogger();
  wrapperData->exitCode = 0;
  const signed int *return_value_getStringProperty_1;
  return_value_getStringProperty_1=getStringProperty(properties, L"wrapper.port.address", (const signed int *)(void *)0);
  updateStringValue(&wrapperData->portAddress, return_value_getStringProperty_1);
  wrapperData->port=getIntProperty(properties, L"wrapper.port", 0);
  wrapperData->portMin=getIntProperty(properties, L"wrapper.port.min", 32000);
  _Bool tmp_if_expr_2;
  if(!(wrapperData->portMin >= 1))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = wrapperData->portMin > 65535 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_2)
  {
    wrapperData->portMin = 32000;
    log_printf(-1, 4, L"%s must be in the range %d to %d.  Changing to %d.", (const void *)L"wrapper.port.min", 1, 65535, wrapperData->portMin);
  }

  wrapperData->portMax=getIntProperty(properties, L"wrapper.port.max", 32999);
  _Bool tmp_if_expr_5;
  if(!(wrapperData->portMax >= 1))
    tmp_if_expr_5 = (_Bool)1;

  else
    tmp_if_expr_5 = wrapperData->portMax > 65535 ? (_Bool)1 : (_Bool)0;
  signed int tmp_if_expr_3;
  signed int tmp_if_expr_4;
  if(tmp_if_expr_5)
  {
    if(!(999 + wrapperData->portMin >= 65535))
      tmp_if_expr_3 = wrapperData->portMin + 999;

    else
      tmp_if_expr_3 = 65535;
    wrapperData->portMax = tmp_if_expr_3;
    log_printf(-1, 4, L"%s must be in the range %d to %d.  Changing to %d.", (const void *)L"wrapper.port.max", 1, 65535, wrapperData->portMax);
  }

  else
    if(!(wrapperData->portMax >= wrapperData->portMin))
    {
      if(!(999 + wrapperData->portMin >= 65535))
        tmp_if_expr_4 = wrapperData->portMin + 999;

      else
        tmp_if_expr_4 = 65535;
      wrapperData->portMax = tmp_if_expr_4;
      log_printf(-1, 4, L"%s must be greater than or equal to %s.  Changing to %d.", (const void *)L"wrapper.port.max", (const void *)L"wrapper.port.min", wrapperData->portMax);
    }

  wrapperData->jvmPort=getIntProperty(properties, L"wrapper.jvm.port", -1);
  if(wrapperData->jvmPort >= 1)
  {
    if(wrapperData->jvmPort == wrapperData->port)
    {
      wrapperData->jvmPort = -1;
      log_printf(-1, 4, L"wrapper.jvm.port must not equal wrapper.port.  Changing to the default.");
    }

  }

  wrapperData->jvmPortMin=getIntProperty(properties, L"wrapper.jvm.port.min", 31000);
  _Bool tmp_if_expr_6;
  if(!(wrapperData->jvmPortMin >= 1))
    tmp_if_expr_6 = (_Bool)1;

  else
    tmp_if_expr_6 = wrapperData->jvmPortMin > 65535 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_6)
  {
    wrapperData->jvmPortMin = 31000;
    log_printf(-1, 4, L"%s must be in the range %d to %d.  Changing to %d.", (const void *)L"wrapper.jvm.port.min", 1, 65535, wrapperData->jvmPortMin);
  }

  wrapperData->jvmPortMax=getIntProperty(properties, L"wrapper.jvm.port.max", 31999);
  _Bool tmp_if_expr_9;
  if(!(wrapperData->jvmPortMax >= 1))
    tmp_if_expr_9 = (_Bool)1;

  else
    tmp_if_expr_9 = wrapperData->jvmPortMax > 65535 ? (_Bool)1 : (_Bool)0;
  signed int tmp_if_expr_7;
  signed int tmp_if_expr_8;
  if(tmp_if_expr_9)
  {
    if(!(999 + wrapperData->jvmPortMin >= 65535))
      tmp_if_expr_7 = wrapperData->jvmPortMin + 999;

    else
      tmp_if_expr_7 = 65535;
    wrapperData->jvmPortMax = tmp_if_expr_7;
    log_printf(-1, 4, L"%s must be in the range %d to %d.  Changing to %d.", (const void *)L"wrapper.jvm.port.max", 1, 65535, wrapperData->jvmPortMax);
  }

  else
    if(!(wrapperData->jvmPortMax >= wrapperData->jvmPortMin))
    {
      if(!(999 + wrapperData->jvmPortMin >= 65535))
        tmp_if_expr_8 = wrapperData->jvmPortMin + 999;

      else
        tmp_if_expr_8 = 65535;
      wrapperData->jvmPortMax = tmp_if_expr_8;
      log_printf(-1, 4, L"%s must be greater than or equal to %s.  Changing to %d.", (const void *)L"wrapper.jvm.port.max", (const void *)L"wrapper.jvm.port.min", wrapperData->jvmPortMax);
    }

  wrapperData->printJVMVersion=getBooleanProperty(properties, L"wrapper.java.version.output", 0);
  const signed int *return_value_getStringProperty_10;
  return_value_getStringProperty_10=getStringProperty(properties, L"wrapper.java.command.loglevel", L"DEBUG");
  wrapperData->commandLogLevel=getLogLevelForName(return_value_getStringProperty_10);
  if(wrapperData->commandLogLevel >= 9)
    wrapperData->commandLogLevel = 1;

  if(!(wrapperData->isConsole == 0))
    wrapperData->detachStarted=getBooleanProperty(properties, L"wrapper.jvm_detach_started", 0);

  wrapperData->isAdviserEnabled=getBooleanProperty(properties, L"wrapper.adviser", -1);
  if(!(wrapperData->isDebugging == 0))
    wrapperData->isAdviserEnabled = -1;

  if(wrapperData->configured == 0)
    wrapperData->useSystemTime=getBooleanProperty(properties, L"wrapper.use_system_time", 0);

  if(wrapperData->configured == 0)
  {
    wrapperData->logBufferGrowth=getBooleanProperty(properties, L"wrapper.log_buffer_growth", 0);
    setLogBufferGrowth(wrapperData->logBufferGrowth);
  }

  if(wrapperData->configured == 0)
  {
    signed int return_value_getBooleanProperty_11;
    return_value_getBooleanProperty_11=getBooleanProperty(properties, L"wrapper.use_javaio_thread", 0);
    wrapperData->useJavaIOThread=getBooleanProperty(properties, L"wrapper.javaio.use_thread", return_value_getBooleanProperty_11);
  }

  if(wrapperData->configured == 0)
    wrapperData->useTickMutex=getBooleanProperty(properties, L"wrapper.use_tick_mutex", 0);

  signed int return_value_getIntProperty_12;
  return_value_getIntProperty_12=getIntProperty(properties, L"wrapper.timer_fast_threshold", (((2 * 24 * 3600 * 1000) / 100) * 100) / 1000);
  wrapperData->timerFastThreshold = (return_value_getIntProperty_12 * 1000) / 100;
  signed int return_value_getIntProperty_13;
  return_value_getIntProperty_13=getIntProperty(properties, L"wrapper.timer_slow_threshold", (((2 * 24 * 3600 * 1000) / 100) * 100) / 1000);
  wrapperData->timerSlowThreshold = (return_value_getIntProperty_13 * 1000) / 100;
  wrapperData->nativeLibrary=getStringProperty(properties, L"wrapper.native_library", L"wrapper");
  wrapperData->libraryPathAppendPath=getBooleanProperty(properties, L"wrapper.java.library.path.append_system_path", 0);
  wrapperData->isStateOutputEnabled=getBooleanProperty(properties, L"wrapper.state_output", 0);
  wrapperData->isTickOutputEnabled=getBooleanProperty(properties, L"wrapper.tick_output", 0);
  wrapperData->isLoopOutputEnabled=getBooleanProperty(properties, L"wrapper.loop_output", 0);
  wrapperData->isSleepOutputEnabled=getBooleanProperty(properties, L"wrapper.sleep_output", 0);
  wrapperData->isMemoryOutputEnabled=getBooleanProperty(properties, L"wrapper.memory_output", 0);
  wrapperData->memoryOutputInterval=getIntProperty(properties, L"wrapper.memory_output.interval", 1);
  wrapperData->isCPUOutputEnabled=getBooleanProperty(properties, L"wrapper.cpu_output", 0);
  wrapperData->cpuOutputInterval=getIntProperty(properties, L"wrapper.cpu_output.interval", 1);
  if(wrapperData->configured == 0)
  {
    wrapperData->isPageFaultOutputEnabled=getBooleanProperty(properties, L"wrapper.pagefault_output", 0);
    wrapperData->pageFaultOutputInterval=getIntProperty(properties, L"wrapper.pagefault_output.interval", 1);
  }

  wrapperData->isTestsDisabled=getBooleanProperty(properties, L"wrapper.disable_tests", 0);
  wrapperData->isShutdownHookDisabled=getBooleanProperty(properties, L"wrapper.disable_shutdown_hook", 0);
  wrapperData->isForcedShutdownDisabled=getBooleanProperty(properties, L"wrapper.disable_forced_shutdown", 0);
  startupDelay=getIntProperty(properties, L"wrapper.startup.delay", 0);
  wrapperData->startupDelayConsole=getIntProperty(properties, L"wrapper.startup.delay.console", startupDelay);
  if(!(wrapperData->startupDelayConsole >= 0))
    wrapperData->startupDelayConsole = 0;

  wrapperData->startupDelayService=getIntProperty(properties, L"wrapper.startup.delay.service", startupDelay);
  if(!(wrapperData->startupDelayService >= 0))
    wrapperData->startupDelayService = 0;

  wrapperData->restartDelay=getIntProperty(properties, L"wrapper.restart.delay", 5);
  if(!(wrapperData->restartDelay >= 0))
    wrapperData->restartDelay = 0;

  wrapperData->restartReloadConf=getBooleanProperty(properties, L"wrapper.restart.reload_configuration", 0);
  wrapperData->isRestartDisabled=getBooleanProperty(properties, L"wrapper.disable_restarts", 0);
  wrapperData->isAutoRestartDisabled=getBooleanProperty(properties, L"wrapper.disable_restarts.automatic", wrapperData->isRestartDisabled);
  wrapperData->cpuTimeout=getIntProperty(properties, L"wrapper.cpu.timeout", 10);
  wrapperData->startupTimeout=getIntProperty(properties, L"wrapper.startup.timeout", 30);
  wrapperData->pingTimeout=getIntProperty(properties, L"wrapper.ping.timeout", 30);
  if(!(wrapperData->pingActionList == ((signed int *)NULL)))
    free((void *)wrapperData->pingActionList);

  const signed int *return_value_getStringProperty_14;
  return_value_getStringProperty_14=getStringProperty(properties, L"wrapper.ping.timeout.action", L"RESTART");
  wrapperData->pingActionList=wrapperGetActionListForNames(return_value_getStringProperty_14, L"wrapper.ping.timeout.action");
  signed int tmp_if_expr_15;
  if(!(wrapperData->pingTimeout / 4 >= 1))
    tmp_if_expr_15 = 1;

  else
    tmp_if_expr_15 = wrapperData->pingTimeout / 4;
  wrapperData->pingAlertThreshold=getIntProperty(properties, L"wrapper.ping.alert.threshold", tmp_if_expr_15);
  const signed int *return_value_getStringProperty_16;
  return_value_getStringProperty_16=getStringProperty(properties, L"wrapper.ping.alert.loglevel", L"STATUS");
  wrapperData->pingAlertLogLevel=getLogLevelForName(return_value_getStringProperty_16);
  wrapperData->pingInterval=getIntProperty(properties, L"wrapper.ping.interval", 5);
  wrapperData->pingIntervalLogged=getIntProperty(properties, L"wrapper.ping.interval.logged", 1);
  wrapperData->shutdownTimeout=getIntProperty(properties, L"wrapper.shutdown.timeout", 30);
  wrapperData->jvmExitTimeout=getIntProperty(properties, L"wrapper.jvm_exit.timeout", 15);
  wrapperData->jvmCleanupTimeout=getIntProperty(properties, L"wrapper.jvm_cleanup.timeout", 10);
  wrapperData->jvmTerminateTimeout=getIntProperty(properties, L"wrapper.jvm_terminate.timeout", 10);
  wrapperData->cpuTimeout=validateTimeout(L"wrapper.cpu.timeout", wrapperData->cpuTimeout);
  wrapperData->startupTimeout=validateTimeout(L"wrapper.startup.timeout", wrapperData->startupTimeout);
  wrapperData->pingTimeout=validateTimeout(L"wrapper.ping.timeout", wrapperData->pingTimeout);
  wrapperData->shutdownTimeout=validateTimeout(L"wrapper.shutdown.timeout", wrapperData->shutdownTimeout);
  wrapperData->jvmExitTimeout=validateTimeout(L"wrapper.jvm_exit.timeout", wrapperData->jvmExitTimeout);
  wrapperData->jvmTerminateTimeout=validateTimeout(L"wrapper.jvm_terminate.timeout", wrapperData->jvmTerminateTimeout);
  wrapperData->jvmCleanupTimeout=validateTimeout(L"wrapper.jvm_cleanup.timeout", wrapperData->jvmCleanupTimeout);
  if(!(wrapperData->pingInterval >= 1))
  {
    wrapperData->pingInterval = 1;
    log_printf(-1, 4, L"The value of %s must be at least %d second(s).  Changing to %d.", (const void *)L"wrapper.ping.interval", 1, wrapperData->pingInterval);
  }

  else
    if(wrapperData->pingInterval >= 3601)
    {
      wrapperData->pingInterval = 3600;
      log_printf(-1, 4, L"wrapper.ping.interval must be less than or equal to 1 hour (3600 seconds).  Changing to 3600.");
    }

  if(!(wrapperData->pingIntervalLogged >= 1))
  {
    wrapperData->pingIntervalLogged = 1;
    log_printf(-1, 4, L"The value of %s must be at least %d second(s).  Changing to %d.", (const void *)L"wrapper.ping.interval.logged", 1, wrapperData->pingIntervalLogged);
  }

  else
    if(wrapperData->pingIntervalLogged >= 86401)
    {
      wrapperData->pingIntervalLogged = 86400;
      log_printf(-1, 4, L"wrapper.ping.interval.logged must be less than or equal to 1 day (86400 seconds).  Changing to 86400.");
    }

  if(wrapperData->pingTimeout >= 1)
  {
    if(!(wrapperData->pingTimeout >= 5 + wrapperData->pingInterval))
    {
      wrapperData->pingTimeout = wrapperData->pingInterval + 5;
      log_printf(-1, 4, L"wrapper.ping.timeout must be at least 5 seconds longer than wrapper.ping.interval.  Changing to %d.", wrapperData->pingTimeout);
    }

  }

  if(!(wrapperData->pingAlertThreshold >= 1))
    wrapperData->pingAlertThreshold = 0;

  else
    if(wrapperData->pingTimeout >= 1)
    {
      if(!(wrapperData->pingTimeout >= wrapperData->pingAlertThreshold))
      {
        wrapperData->pingAlertThreshold = wrapperData->pingTimeout;
        log_printf(-1, 4, L"wrapper.ping.alert.threshold must be less than or equal to the value of wrapper.ping.timeout (%d seconds).  Changing to %d.", wrapperData->pingInterval, wrapperData->pingTimeout);
      }

    }

  if(wrapperData->cpuTimeout >= 1)
  {
    if(wrapperData->startupTimeout >= 1)
    {
      if(!(wrapperData->startupTimeout >= wrapperData->cpuTimeout))
        log_printf(-1, 4, L"CPU timeout detection may not operate correctly during startup because wrapper.cpu.timeout is not smaller than wrapper.startup.timeout.");

    }

    if(wrapperData->pingTimeout >= 1)
    {
      if(!(wrapperData->pingTimeout >= wrapperData->cpuTimeout))
        log_printf(-1, 4, L"CPU timeout detection may not operate correctly because wrapper.cpu.timeout is not smaller than wrapper.ping.timeout.");

    }

    if(wrapperData->shutdownTimeout >= 1)
    {
      if(!(wrapperData->shutdownTimeout >= wrapperData->cpuTimeout))
        log_printf(-1, 4, L"CPU timeout detection may not operate correctly during shutdown because wrapper.cpu.timeout is not smaller than wrapper.shutdown.timeout.");

    }

  }

  wrapperData->maxFailedInvocations=getIntProperty(properties, L"wrapper.max_failed_invocations", 5);
  wrapperData->successfulInvocationTime=getIntProperty(properties, L"wrapper.successful_invocation_time", 300);
  if(!(wrapperData->maxFailedInvocations >= 1))
  {
    wrapperData->maxFailedInvocations = 1;
    log_printf(-1, 5, L"The value of %s must be at least %d second(s).  Changing to %d.", (const void *)L"wrapper.max_failed_invocations", 1, wrapperData->maxFailedInvocations);
  }

  wrapperData->requestThreadDumpOnFailedJVMExit=getBooleanProperty(properties, L"wrapper.request_thread_dump_on_failed_jvm_exit", 0);
  wrapperData->requestThreadDumpOnFailedJVMExitDelay=getIntProperty(properties, L"wrapper.request_thread_dump_on_failed_jvm_exit.delay", 5);
  if(!(wrapperData->requestThreadDumpOnFailedJVMExitDelay >= 1))
  {
    wrapperData->requestThreadDumpOnFailedJVMExitDelay = 1;
    log_printf(-1, 5, L"The value of %s must be at least %d second(s).  Changing to %d.", (const void *)L"wrapper.request_thread_dump_on_failed_jvm_exit.delay", 1, wrapperData->requestThreadDumpOnFailedJVMExitDelay);
  }

  signed int return_value_loadConfigurationTriggers_17;
  return_value_loadConfigurationTriggers_17=loadConfigurationTriggers();
  _Bool tmp_if_expr_34;
  signed int return_value_wcscasecmp_33;
  signed int return_value_wcscasecmp_31;
  signed int return_value_wcscasecmp_30;
  if(!(return_value_loadConfigurationTriggers_17 == 0))
    return -1;

  else
  {
    if(wrapperData->configured == 0)
    {
      const signed int *return_value_getFileSafeStringProperty_18;
      return_value_getFileSafeStringProperty_18=getFileSafeStringProperty(properties, L"wrapper.pidfile", (const signed int *)(void *)0);
      updateStringValue(&wrapperData->pidFilename, return_value_getFileSafeStringProperty_18);
      wrapperCorrectWindowsPath(wrapperData->pidFilename);
    }

    wrapperData->pidFileStrict=getBooleanProperty(properties, L"wrapper.pidfile.strict", 0);
    const signed int *return_value_getFileSafeStringProperty_19;
    return_value_getFileSafeStringProperty_19=getFileSafeStringProperty(properties, L"wrapper.java.pidfile", (const signed int *)(void *)0);
    updateStringValue(&wrapperData->javaPidFilename, return_value_getFileSafeStringProperty_19);
    wrapperCorrectWindowsPath(wrapperData->javaPidFilename);
    if(wrapperData->configured == 0)
    {
      const signed int *return_value_getFileSafeStringProperty_20;
      return_value_getFileSafeStringProperty_20=getFileSafeStringProperty(properties, L"wrapper.lockfile", (const signed int *)(void *)0);
      updateStringValue(&wrapperData->lockFilename, return_value_getFileSafeStringProperty_20);
      wrapperCorrectWindowsPath(wrapperData->lockFilename);
    }

    const signed int *return_value_getFileSafeStringProperty_21;
    return_value_getFileSafeStringProperty_21=getFileSafeStringProperty(properties, L"wrapper.java.idfile", (const signed int *)(void *)0);
    updateStringValue(&wrapperData->javaIdFilename, return_value_getFileSafeStringProperty_21);
    wrapperCorrectWindowsPath(wrapperData->javaIdFilename);
    if(wrapperData->configured == 0)
    {
      const signed int *return_value_getFileSafeStringProperty_22;
      return_value_getFileSafeStringProperty_22=getFileSafeStringProperty(properties, L"wrapper.statusfile", (const signed int *)(void *)0);
      updateStringValue(&wrapperData->statusFilename, return_value_getFileSafeStringProperty_22);
      wrapperCorrectWindowsPath(wrapperData->statusFilename);
    }

    const signed int *return_value_getFileSafeStringProperty_23;
    return_value_getFileSafeStringProperty_23=getFileSafeStringProperty(properties, L"wrapper.java.statusfile", (const signed int *)(void *)0);
    updateStringValue(&wrapperData->javaStatusFilename, return_value_getFileSafeStringProperty_23);
    wrapperCorrectWindowsPath(wrapperData->javaStatusFilename);
    const signed int *return_value_getFileSafeStringProperty_24;
    return_value_getFileSafeStringProperty_24=getFileSafeStringProperty(properties, L"wrapper.commandfile", (const signed int *)(void *)0);
    updateStringValue(&wrapperData->commandFilename, return_value_getFileSafeStringProperty_24);
    wrapperCorrectWindowsPath(wrapperData->commandFilename);
    wrapperData->commandFileTests=getBooleanProperty(properties, L"wrapper.commandfile.enable_tests", 0);
    signed int return_value_getIntProperty_25;
    return_value_getIntProperty_25=getIntProperty(properties, L"wrapper.command.poll_interval", 5);
    signed int return_value_propIntMax_26;
    return_value_propIntMax_26=propIntMax(return_value_getIntProperty_25, 1);
    wrapperData->commandPollInterval=propIntMin(return_value_propIntMax_26, 3600);
    if(wrapperData->configured == 0)
    {
      const signed int *return_value_getFileSafeStringProperty_27;
      return_value_getFileSafeStringProperty_27=getFileSafeStringProperty(properties, L"wrapper.anchorfile", (const signed int *)(void *)0);
      updateStringValue(&wrapperData->anchorFilename, return_value_getFileSafeStringProperty_27);
      wrapperCorrectWindowsPath(wrapperData->anchorFilename);
    }

    signed int return_value_getIntProperty_28;
    return_value_getIntProperty_28=getIntProperty(properties, L"wrapper.anchor.poll_interval", 5);
    signed int return_value_propIntMax_29;
    return_value_propIntMax_29=propIntMax(return_value_getIntProperty_28, 1);
    wrapperData->anchorPollInterval=propIntMin(return_value_propIntMax_29, 3600);
    val=getStringProperty(properties, L"wrapper.ignore_signals", L"FALSE");
    signed int return_value_wcscasecmp_32;
    return_value_wcscasecmp_32=wcscasecmp(val, L"TRUE");
    if(return_value_wcscasecmp_32 == 0)
      tmp_if_expr_34 = (_Bool)1;

    else
    {
      return_value_wcscasecmp_33=wcscasecmp(val, L"BOTH");
      tmp_if_expr_34 = return_value_wcscasecmp_33 == 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_34)
      wrapperData->ignoreSignals = 1 + 2;

    else
    {
      return_value_wcscasecmp_31=wcscasecmp(val, L"WRAPPER");
      if(return_value_wcscasecmp_31 == 0)
        wrapperData->ignoreSignals = 1;

      else
      {
        return_value_wcscasecmp_30=wcscasecmp(val, L"JAVA");
        if(return_value_wcscasecmp_30 == 0)
          wrapperData->ignoreSignals = 2;

        else
          wrapperData->ignoreSignals = 0;
      }
    }
    _sntprintf(propName, (unsigned long int)256, L"wrapper.console.title.%s", wrapperOS);
    const signed int *return_value_getStringProperty_35;
    return_value_getStringProperty_35=getStringProperty(properties, L"wrapper.console.title", (const signed int *)(void *)0);
    const signed int *return_value_getStringProperty_36;
    return_value_getStringProperty_36=getStringProperty(properties, propName, return_value_getStringProperty_35);
    updateStringValue(&wrapperData->consoleTitle, return_value_getStringProperty_36);
    const signed int *return_value_getStringProperty_37;
    return_value_getStringProperty_37=getStringProperty(properties, L"wrapper.ntservice.name", L"wrapper");
    const signed int *return_value_getStringProperty_38;
    return_value_getStringProperty_38=getStringProperty(properties, L"wrapper.name", return_value_getStringProperty_37);
    updateStringValue(&wrapperData->serviceName, return_value_getStringProperty_38);
    const signed int *return_value_getStringProperty_39;
    return_value_getStringProperty_39=getStringProperty(properties, L"wrapper.ntservice.displayname", wrapperData->serviceName);
    const signed int *return_value_getStringProperty_40;
    return_value_getStringProperty_40=getStringProperty(properties, L"wrapper.displayname", return_value_getStringProperty_39);
    updateStringValue(&wrapperData->serviceDisplayName, return_value_getStringProperty_40);
    const signed int *return_value_getStringProperty_41;
    return_value_getStringProperty_41=getStringProperty(properties, L"wrapper.ntservice.description", wrapperData->serviceDisplayName);
    const signed int *return_value_getStringProperty_42;
    return_value_getStringProperty_42=getStringProperty(properties, L"wrapper.description", return_value_getStringProperty_41);
    updateStringValue(&wrapperData->serviceDescription, return_value_getStringProperty_42);
    signed int return_value_getBooleanProperty_43;
    return_value_getBooleanProperty_43=getBooleanProperty(properties, L"wrapper.ntservice.pausable", 0);
    wrapperData->pausable=getBooleanProperty(properties, L"wrapper.pausable", return_value_getBooleanProperty_43);
    signed int return_value_getBooleanProperty_44;
    return_value_getBooleanProperty_44=getBooleanProperty(properties, L"wrapper.ntservice.pausable.stop_jvm", -1);
    wrapperData->pausableStopJVM=getBooleanProperty(properties, L"wrapper.pausable.stop_jvm", return_value_getBooleanProperty_44);
    if(wrapperData->configured == 0)
      wrapperData->initiallyPaused=getBooleanProperty(properties, L"wrapper.pause_on_startup", 0);

    signed int return_value_wrapperBuildUnixDaemonInfo_45;
    return_value_wrapperBuildUnixDaemonInfo_45=wrapperBuildUnixDaemonInfo();
    if(!(return_value_wrapperBuildUnixDaemonInfo_45 == 0))
      return -1;

    else
    {
      const signed int *return_value_getStringProperty_47;
      return_value_getStringProperty_47=getStringProperty(properties, L"wrapper.script.version", wrapperVersionRoot);
      signed int return_value_wcscmp_48;
      return_value_wcscmp_48=wcscmp(wrapperVersionRoot, return_value_getStringProperty_47);
      if(!(return_value_wcscmp_48 == 0))
      {
        const signed int *return_value_getStringProperty_46;
        return_value_getStringProperty_46=getStringProperty(properties, L"wrapper.script.version", wrapperVersionRoot);
        log_printf(-1, 4, L"The version of the script (%s) doesn't match the version of this Wrapper (%s). This might cause some problems", return_value_getStringProperty_46, wrapperVersionRoot);
      }

      wrapperData->configured = -1;
      return 0;
    }
  }
}

// loadConfigurationTriggers
// file wrapper.c line 7681
signed int loadConfigurationTriggers()
{
  const signed int *prop;
  signed int propName[256l];
  signed int i;
  signed int **propertyNames;
  signed int **propertyValues;
  unsigned long int *propertyIndices;
  if(wrapperData->outputFilterCount >= 1)
  {
    i = 0;
    for( ; !(i >= wrapperData->outputFilterCount); i = i + 1)
    {
      free((void *)wrapperData->outputFilters[(signed long int)i]);
      wrapperData->outputFilters[(signed long int)i] = (signed int *)(void *)0;
    }
    free((void *)wrapperData->outputFilters);
    wrapperData->outputFilters = (signed int **)(void *)0;
    if(!(wrapperData->outputFilterActionLists == ((signed int **)NULL)))
    {
      i = 0;
      for( ; !(i >= wrapperData->outputFilterCount); i = i + 1)
      {
        free((void *)wrapperData->outputFilterActionLists[(signed long int)i]);
        wrapperData->outputFilterActionLists[(signed long int)i] = (signed int *)(void *)0;
      }
      free((void *)wrapperData->outputFilterActionLists);
      wrapperData->outputFilterActionLists = (signed int **)(void *)0;
    }

    free((void *)wrapperData->outputFilterMessages);
    wrapperData->outputFilterMessages = (signed int **)(void *)0;
    free((void *)wrapperData->outputFilterAllowWildFlags);
    wrapperData->outputFilterAllowWildFlags = (signed int *)(void *)0;
    free((void *)wrapperData->outputFilterMinLens);
    wrapperData->outputFilterMinLens = (unsigned long int *)(void *)0;
  }

  wrapperData->outputFilterCount = 0;
  signed int return_value_getStringProperties_1;
  return_value_getStringProperties_1=getStringProperties(properties, L"wrapper.filter.trigger.", L"", wrapperData->ignoreSequenceGaps, 0, &propertyNames, &propertyValues, &propertyIndices);
  if(!(return_value_getStringProperties_1 == 0))
    return -1;

  else
  {
    i = 0;
    for( ; !(propertyNames[(signed long int)i] == ((signed int *)NULL)); i = i + 1)
      wrapperData->outputFilterCount = wrapperData->outputFilterCount + 1;
    if(wrapperData->outputFilterCount >= 1)
    {
      void *return_value_malloc_2;
      return_value_malloc_2=malloc(sizeof(signed int *) /*8ul*/  * (unsigned long int)wrapperData->outputFilterCount);
      wrapperData->outputFilters = (signed int **)return_value_malloc_2;
      if(wrapperData->outputFilters == ((signed int **)NULL))
      {
        outOfMemory(L"LC", 1);
        return -1;
      }

      memset((void *)wrapperData->outputFilters, 0, sizeof(signed int *) /*8ul*/  * (unsigned long int)wrapperData->outputFilterCount);
      void *return_value_malloc_3;
      return_value_malloc_3=malloc(sizeof(signed int *) /*8ul*/  * (unsigned long int)wrapperData->outputFilterCount);
      wrapperData->outputFilterActionLists = (signed int **)return_value_malloc_3;
      if(wrapperData->outputFilterActionLists == ((signed int **)NULL))
      {
        outOfMemory(L"LC", 2);
        return -1;
      }

      memset((void *)wrapperData->outputFilterActionLists, 0, sizeof(signed int *) /*8ul*/  * (unsigned long int)wrapperData->outputFilterCount);
      void *return_value_malloc_4;
      return_value_malloc_4=malloc(sizeof(signed int *) /*8ul*/  * (unsigned long int)wrapperData->outputFilterCount);
      wrapperData->outputFilterMessages = (signed int **)return_value_malloc_4;
      if(wrapperData->outputFilterMessages == ((signed int **)NULL))
      {
        outOfMemory(L"LC", 3);
        return -1;
      }

      void *return_value_malloc_5;
      return_value_malloc_5=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)wrapperData->outputFilterCount);
      wrapperData->outputFilterAllowWildFlags = (signed int *)return_value_malloc_5;
      if(wrapperData->outputFilterAllowWildFlags == ((signed int *)NULL))
      {
        outOfMemory(L"LC", 4);
        return -1;
      }

      memset((void *)wrapperData->outputFilterAllowWildFlags, 0, sizeof(signed int) /*4ul*/  * (unsigned long int)wrapperData->outputFilterCount);
      void *return_value_malloc_6;
      return_value_malloc_6=malloc(sizeof(unsigned long int) /*8ul*/  * (unsigned long int)wrapperData->outputFilterCount);
      wrapperData->outputFilterMinLens = (unsigned long int *)return_value_malloc_6;
      if(wrapperData->outputFilterMinLens == ((unsigned long int *)NULL))
      {
        outOfMemory(L"LC", 5);
        return -1;
      }

      memset((void *)wrapperData->outputFilterMinLens, 0, sizeof(unsigned long int) /*8ul*/  * (unsigned long int)wrapperData->outputFilterCount);
      i = 0;
      while(!(propertyNames[(signed long int)i] == ((signed int *)NULL)))
      {
        prop = propertyValues[(signed long int)i];
        unsigned long int return_value_wcslen_7;
        return_value_wcslen_7=wcslen(prop);
        void *return_value_malloc_8;
        return_value_malloc_8=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_7 + (unsigned long int)1));
        wrapperData->outputFilters[(signed long int)i] = (signed int *)return_value_malloc_8;
        if(wrapperData->outputFilters[(signed long int)i] == ((signed int *)NULL))
        {
          outOfMemory(L"LC", 3);
          return -1;
        }

        unsigned long int return_value_wcslen_9;
        return_value_wcslen_9=wcslen(prop);
        wcsncpy(wrapperData->outputFilters[(signed long int)i], prop, return_value_wcslen_9 + (unsigned long int)1);
        _sntprintf(propName, (unsigned long int)256, L"wrapper.filter.action.%lu", propertyIndices[(signed long int)i]);
        prop=getStringProperty(properties, propName, L"RESTART");
        wrapperData->outputFilterActionLists[(signed long int)i]=wrapperGetActionListForNames(prop, propName);
        _sntprintf(propName, (unsigned long int)256, L"wrapper.filter.message.%lu", propertyIndices[(signed long int)i]);
        prop=getStringProperty(properties, propName, (const signed int *)(void *)0);
        wrapperData->outputFilterMessages[(signed long int)i] = (signed int *)prop;
        _sntprintf(propName, (unsigned long int)256, L"wrapper.filter.allow_wildcards.%lu", propertyIndices[(signed long int)i]);
        wrapperData->outputFilterAllowWildFlags[(signed long int)i]=getBooleanProperty(properties, propName, 0);
        if(!(wrapperData->outputFilterAllowWildFlags[(signed long int)i] == 0))
          wrapperData->outputFilterMinLens[(signed long int)i]=wrapperGetMinimumTextLengthForPattern(wrapperData->outputFilters[(signed long int)i]);

        i = i + 1;
      }
    }

    freeStringProperties(propertyNames, propertyValues, propertyIndices);
    return 0;
  }
}

// loadEnvironment
// file wrapper.c line 393
signed int loadEnvironment()
{
  unsigned long int len;
  signed int *sourcePair;
  signed int *pair;
  signed int *equal;
  signed int *name;
  signed int *value;
  char **environment = environ;
  signed int i = 0;
  for( ; !(environment[(signed long int)i] == ((char *)NULL)); i = i + 1)
  {
    len=mbstowcs((signed int *)(void *)0, environment[(signed long int)i], (unsigned long int)0);
    if(!(len == 18446744073709551615ul))
    {
      void *return_value_malloc_1;
      return_value_malloc_1=malloc(sizeof(signed int) /*4ul*/  * (len + (unsigned long int)1));
      sourcePair = (signed int *)return_value_malloc_1;
      if(sourcePair == ((signed int *)NULL))
      {
        outOfMemory(L"LE", 1);
        const signed int *return_value_getLastErrorText_2;
        return_value_getLastErrorText_2=getLastErrorText();
        _tprintf(L" Invalid character string: %s (%s)\n", environment[(signed long int)i], return_value_getLastErrorText_2);
        return -1;
      }

      mbstowcs(sourcePair, environment[(signed long int)i], len + (unsigned long int)1);
      sourcePair[(signed long int)len] = 0;
      len=wcslen(sourcePair);
      void *return_value_malloc_3;
      return_value_malloc_3=malloc(sizeof(signed int) /*4ul*/  * (len + (unsigned long int)1));
      pair = (signed int *)return_value_malloc_3;
      if(pair == ((signed int *)NULL))
      {
        outOfMemory(L"LE", 1);
        free((void *)sourcePair);
        return -1;
      }

      _sntprintf(pair, len + (unsigned long int)1, L"%s", sourcePair);
      equal=wcschr(pair, 61);
      if(!(equal == ((signed int *)NULL)))
      {
        name = pair;
        value = &equal[(signed long int)1];
        equal[(signed long int)0] = 0;
        unsigned long int return_value_wcslen_4;
        return_value_wcslen_4=wcslen(name);
        if(!(return_value_wcslen_4 >= 1ul))
          name = (signed int *)(void *)0;

        unsigned long int return_value_wcslen_5;
        return_value_wcslen_5=wcslen(value);
        if(!(return_value_wcslen_5 >= 1ul))
          value = (signed int *)(void *)0;

        if(!(name == ((signed int *)NULL)))
          setEnv(name, value, 1);

      }

      free((void *)pair);
      free((void *)sourcePair);
    }

  }
  return 0;
}

// loadParameterFileCallback
// file wrapper.c line 5748
static signed int loadParameterFileCallback(void *callbackParam, const signed int *fileName, signed int lineNumber, signed int *config, signed int debugProperties)
{
  struct LoadParameterFileCallbackParam *param = (struct LoadParameterFileCallbackParam *)callbackParam;
  signed int *tail_bound;
  signed int *arg;
  signed int *s;
  signed int InDelim = 0;
  signed int InQuotes = 0;
  signed int Escaped = 0;
  _Bool tmp_if_expr_2;
  unsigned long int return_value_wcslen_1;
  if(!(config == ((signed int *)NULL)))
  {
    return_value_wcslen_1=wcslen(config);
    tmp_if_expr_2 = return_value_wcslen_1 > (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_2 = (_Bool)0;
  /* assertion config && wcslen(config) > 0 */
  assert(tmp_if_expr_2);
  _Bool tmp_if_expr_4;
  unsigned long int return_value_wcslen_3;
  if(!(*config == 32))
  {
    return_value_wcslen_3=wcslen(config);
    tmp_if_expr_4 = config[(signed long int)(return_value_wcslen_3 - (unsigned long int)1)] != 32 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_4 = (_Bool)0;
  /* assertion config[0] != L' ' && config[wcslen(config) - 1] != L' ' */
  assert(tmp_if_expr_4);
  unsigned long int return_value_wcslen_5;
  return_value_wcslen_5=wcslen(config);
  tail_bound = config + (signed long int)return_value_wcslen_5 + (signed long int)1;
  s = config;
  arg = s;
  signed int return_value_loadParameterFileCallbackParam_AddArg_6;
  for( ; !(s >= tail_bound); s = s + 1l)
    switch(*s)
    {
      case 0:
      {
        return_value_loadParameterFileCallbackParam_AddArg_6=loadParameterFileCallbackParam_AddArg(param, arg, (unsigned long int)(s - arg));
        if(return_value_loadParameterFileCallbackParam_AddArg_6 == 0)
        {
          outOfMemory(L"LJAC", 1);
          return 0;
        }

        break;
      }
      case 32:
      {
        Escaped = 0;
        if(InDelim == 0 && InQuotes == 0)
        {
          InDelim = -1;
          signed int return_value_loadParameterFileCallbackParam_AddArg_7;
          return_value_loadParameterFileCallbackParam_AddArg_7=loadParameterFileCallbackParam_AddArg(param, arg, (unsigned long int)(s - arg));
          if(return_value_loadParameterFileCallbackParam_AddArg_7 == 0)
          {
            outOfMemory(L"LJAC", 2);
            return 0;
          }

        }

        break;
      }
      case 34:
      {
        if(Escaped == 0)
          InQuotes = (signed int)!(InQuotes != 0);

        Escaped = 0;
        if(!(InDelim == 0))
        {
          InDelim = 0;
          arg = s;
        }

        break;
      }
      case 92:
      {
        Escaped = (signed int)!(Escaped != 0);
        if(!(InDelim == 0))
        {
          InDelim = 0;
          arg = s;
        }

        break;
      }
      default:
      {
        Escaped = 0;
        if(!(InDelim == 0))
        {
          InDelim = 0;
          arg = s;
        }

      }
    }
  return -1;
}

// loadParameterFileCallbackParam_AddArg
// file wrapper.c line 5677
static signed int loadParameterFileCallbackParam_AddArg(struct LoadParameterFileCallbackParam *param, signed int *arg, unsigned long int argLen)
{
  signed int *argTerm;
  signed int *argStripped;
  signed int argExpanded[16384l];
  unsigned long int len;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(signed int) /*4ul*/  * (argLen + (unsigned long int)1));
  argTerm = (signed int *)return_value_malloc_1;
  _Bool tmp_if_expr_2;
  if(argTerm == ((signed int *)NULL))
  {
    outOfMemory(L"LPFCPAA", 1);
    return 0;
  }

  else
  {
    memcpy((void *)argTerm, (const void *)arg, sizeof(signed int) /*4ul*/  * argLen);
    argTerm[(signed long int)argLen] = 0;
    if(param->isJVMParam == -1)
    {
      if(*argTerm == 45)
        goto __CPROVER_DUMP_L5;

      if(*argTerm == 34)
        tmp_if_expr_2 = argTerm[(signed long int)1] == 45 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
        goto __CPROVER_DUMP_L5;

      if(!(param->strings == ((signed int **)NULL)))
        log_printf(-1, 4, L"The value '%s' is not a valid argument to the JVM.  Skipping.", argTerm);

      free((void *)argTerm);
      return -1;
    }

    else
    {

    __CPROVER_DUMP_L5:
      ;
      if(!(param->strings == ((signed int **)NULL)))
      {
        len=wcslen(argTerm);
        void *return_value_malloc_3;
        return_value_malloc_3=malloc(sizeof(signed int) /*4ul*/  * (len + (unsigned long int)1));
        argStripped = (signed int *)return_value_malloc_3;
        if(argStripped == ((signed int *)NULL))
        {
          outOfMemory(L"LPFCPAA", 2);
          free((void *)argTerm);
          return 0;
        }

        if(param->stripQuote == 0)
          wcsncpy(argStripped, argTerm, len + (unsigned long int)1);

        else
          wrapperStripQuotes(argTerm, argStripped);
        free((void *)argTerm);
        evaluateEnvironmentVariables(argStripped, argExpanded, 16384, properties->logWarnings, properties->warnedVarMap, properties->logWarningLogLevel);
        free((void *)argStripped);
        len=wcslen(argExpanded);
        void *return_value_malloc_4;
        return_value_malloc_4=malloc(sizeof(signed int) /*4ul*/  * (len + (unsigned long int)1));
        param->strings[(signed long int)param->index] = (signed int *)return_value_malloc_4;
        if(param->strings[(signed long int)param->index] == ((signed int *)NULL))
          return 0;

        wcsncpy(param->strings[(signed long int)param->index], argExpanded, len + (unsigned long int)1);
      }

      else
        free((void *)argTerm);
      param->index = param->index + 1;
      return -1;
    }
  }
}

// loadProperties
// file property.h line 140
extern signed int loadProperties(struct Properties *properties, const signed int *filename, signed int preload, const signed int *argCommand, const signed int *originalWorkingDir, signed int isDebugging)
{
  struct timeval timevalNow;
  signed long int now;
  struct tm *nowTM;
  signed int loadResult;
  gettimeofday(&timevalNow, (struct timezone *)(void *)0);
  now = (signed long int)timevalNow.tv_sec;
  nowTM=localtime(&now);
  memcpy((void *)&loadPropertiesTM, (const void *)nowTM, sizeof(struct tm) /*56ul*/ );
  loadResult=configFileReader(filename, 0, loadPropertiesCallback, (void *)properties, -1, preload, argCommand, originalWorkingDir, properties->warnedVarMap, properties->logWarnings, properties->logWarningLogLevel, isDebugging);
  switch(loadResult)
  {
    case 101:
      return 0;
    case 102:

    case 103:
      return -1;
    default:
    {
      _tprintf(L"Unexpected load error %d\n", loadResult);
      return -1;
    }
  }
}

// loadPropertiesCallback
// file property.c line 471
static signed int loadPropertiesCallback(void *callbackParam, const signed int *fileName, signed int lineNumber, signed int *config, signed int debugProperties)
{
  struct Properties *loadPropertiesCallback__1__properties = (struct Properties *)callbackParam;
  signed int *d;
  loadPropertiesCallback__1__properties->debugProperties = debugProperties;
  signed int *return_value_wcsstr_1;
  return_value_wcsstr_1=wcsstr(config, L"include");
  if(return_value_wcsstr_1 == config)
    log_printf(-1, 7, L"Include file reference missing leading '#': %s", config);

  else
  {
    d=wcschr(config, 61);
    if(!(d == ((signed int *)NULL)))
    {
      *d = 0;
      d = d + 1l;
      addProperty(loadPropertiesCallback__1__properties, fileName, lineNumber, config, d, 0, 0, -1, 0);
    }

  }
  return -1;
}

// lockLoggingMutex
// file logger.c line 1030
signed int lockLoggingMutex()
{
  signed int return_value_pthread_mutex_lock_2;
  return_value_pthread_mutex_lock_2=pthread_mutex_lock(&log_printfMutex);
  if(!(return_value_pthread_mutex_lock_2 == 0))
  {
    const signed int *return_value_getLastErrorText_1;
    return_value_getLastErrorText_1=getLastErrorText();
    _tprintf(L"Failed to lock the Logging mutex. %s\n", return_value_getLastErrorText_1);
    return -1;
  }

  return 0;
}

// lockProtocolMutex
// file wrapper.c line 1965
signed int lockProtocolMutex()
{
  signed int return_value_pthread_mutex_lock_2;
  return_value_pthread_mutex_lock_2=pthread_mutex_lock(&protocolMutex);
  if(!(return_value_pthread_mutex_lock_2 == 0))
  {
    const signed int *return_value_getLastErrorText_1;
    return_value_getLastErrorText_1=getLastErrorText();
    _tprintf(L"Failed to lock the Protocol mutex. %s\n", return_value_getLastErrorText_1);
    return -1;
  }

  return 0;
}

// logApplyFilters
// file wrapper.c line 3677
void logApplyFilters(const signed int *log)
{
  signed int i;
  const signed int *filter;
  const signed int *filterMessage;
  signed int matched;
  i = 0;
  _Bool tmp_if_expr_4;
  unsigned long int return_value_wcslen_3;
  for( ; !(i >= wrapperData->outputFilterCount); i = i + 1)
  {
    unsigned long int return_value_wcslen_5;
    return_value_wcslen_5=wcslen(wrapperData->outputFilters[(signed long int)i]);
    if(return_value_wcslen_5 >= 1ul)
    {
      matched = 0;
      filter = wrapperData->outputFilters[(signed long int)i];
      if(!(wrapperData->outputFilterAllowWildFlags[(signed long int)i] == 0))
      {
        signed int return_value_wrapperWildcardMatch_1;
        return_value_wrapperWildcardMatch_1=wrapperWildcardMatch(log, filter, wrapperData->outputFilterMinLens[(signed long int)i]);
        if(!(return_value_wrapperWildcardMatch_1 == 0))
          matched = -1;

      }

      else
      {
        signed int *return_value_wcsstr_2;
        return_value_wcsstr_2=wcsstr(log, filter);
        if(!(return_value_wcsstr_2 == ((signed int *)NULL)))
          matched = -1;

      }
      if(!(matched == 0))
      {
        filterMessage = wrapperData->outputFilterMessages[(signed long int)i];
        if(filterMessage == ((const signed int *)NULL))
          tmp_if_expr_4 = (_Bool)1;

        else
        {
          return_value_wcslen_3=wcslen(filterMessage);
          tmp_if_expr_4 = return_value_wcslen_3 <= (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_4)
          filterMessage = L"Filter trigger matched.";

        wrapperProcessActionList(wrapperData->outputFilterActionLists[(signed long int)i], filterMessage, 1, 0, 1);
        break;
      }

    }

  }
}

// logChildOutput
// file wrapper.c line 3721
void logChildOutput(const char *log)
{
  signed int *tlog;
  signed int size;
  unsigned long int return_value_mbstowcs_1;
  return_value_mbstowcs_1=mbstowcs((signed int *)(void *)0, log, (unsigned long int)0);
  size = (signed int)return_value_mbstowcs_1;
  if((unsigned long int)size == 18446744073709551615ul)
  {
    const signed int *return_value_getLastErrorText_2;
    return_value_getLastErrorText_2=getLastErrorText();
    log_printf(-1, 4, L"Invalid multibyte sequence in %s: %s", (const void *)L"JVM console output", return_value_getLastErrorText_2);
    goto __CPROVER_DUMP_L3;
  }

  void *return_value_malloc_3;
  return_value_malloc_3=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(size + 1));
  tlog = (signed int *)return_value_malloc_3;
  if(tlog == ((signed int *)NULL))
    outOfMemory(L"WLCO", 1);

  else
  {
    mbstowcs(tlog, log, (unsigned long int)(size + 1));
    tlog[(signed long int)size] = 0;
    log_printf(wrapperData->jvmRestarts, 2, tlog);
    logApplyFilters(tlog);
    free((void *)tlog);
  }

__CPROVER_DUMP_L3:
  ;
}

// logRegisterThread
// file logger.h line 271
extern void logRegisterThread(signed int thread_id)
{
  unsigned long int threadId;
  threadId=pthread_self();
  if(thread_id >= 0 && !(thread_id >= 6))
  {
    threadSets[(signed long int)thread_id] = -1;
    threadIds[(signed long int)thread_id] = threadId;
  }

}

// logSleep
// file logger.c line 845
void logSleep(signed int ms)
{
  struct timespec ts;
  if(ms >= 1000)
  {
    ts.tv_sec = (signed long int)((ms * 1000000) / 1000000000);
    ts.tv_nsec = (signed long int)((ms * 1000000) % 1000000000);
  }

  else
  {
    ts.tv_sec = (signed long int)0;
    ts.tv_nsec = (signed long int)(ms * 1000000);
  }
  signed int return_value_nanosleep_4;
  return_value_nanosleep_4=nanosleep(&ts, (struct timespec *)(void *)0);
  signed int *return_value___errno_location_2;
  if(!(return_value_nanosleep_4 == 0))
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    if(*return_value___errno_location_3 == 4)
      goto __CPROVER_DUMP_L7;

    else
    {
      return_value___errno_location_2=__errno_location();
      if(*return_value___errno_location_2 == 11)
        goto __CPROVER_DUMP_L7;

      else
      {
        const signed int *return_value_getLastErrorText_1;
        return_value_getLastErrorText_1=getLastErrorText();
        _tprintf(L"nanosleep(%dms) failed. \n", ms, return_value_getLastErrorText_1);
      }
    }
  }


__CPROVER_DUMP_L7:
  ;
}

// logTickTimerStats
// file wrappereventloop.c line 1904
void logTickTimerStats()
{
  struct tm when;
  signed long int now;
  signed long int overflowTime;
  unsigned int sysTicks;
  unsigned int ticks;
  time(&now);
  sysTicks=wrapperGetSystemTicks();
  overflowTime = (signed long int)(now - (signed long int)(sysTicks / (unsigned int)(1000 / 100)));
  struct tm *return_value_localtime_1;
  return_value_localtime_1=localtime(&overflowTime);
  when = *return_value_localtime_1;
  log_printf(-1, 3, L"    Last system time tick overflow at: %04d/%02d/%02d %02d:%02d:%02d", when.tm_year + 1900, when.tm_mon + 1, when.tm_mday, when.tm_hour, when.tm_min, when.tm_sec);
  overflowTime = (signed long int)((unsigned long int)now + (0xffffffffUL - (unsigned long int)sysTicks) / (unsigned long int)(1000 / 100));
  struct tm *return_value_localtime_2;
  return_value_localtime_2=localtime(&overflowTime);
  when = *return_value_localtime_2;
  log_printf(-1, 3, L"    Next system time tick overflow at: %04d/%02d/%02d %02d:%02d:%02d", when.tm_year + 1900, when.tm_mon + 1, when.tm_mday, when.tm_hour, when.tm_min, when.tm_sec);
  if(wrapperData->useSystemTime == 0)
  {
    ticks=wrapperGetTicks();
    overflowTime = (signed long int)(now - (signed long int)(ticks / (unsigned int)(1000 / 100)));
    struct tm *return_value_localtime_3;
    return_value_localtime_3=localtime(&overflowTime);
    when = *return_value_localtime_3;
    log_printf(-1, 3, L"    Last tick overflow at: %04d/%02d/%02d %02d:%02d:%02d", when.tm_year + 1900, when.tm_mon + 1, when.tm_mday, when.tm_hour, when.tm_min, when.tm_sec);
    overflowTime = (signed long int)((unsigned long int)now + (0xffffffffUL - (unsigned long int)ticks) / (unsigned long int)(1000 / 100));
    struct tm *return_value_localtime_4;
    return_value_localtime_4=localtime(&overflowTime);
    when = *return_value_localtime_4;
    log_printf(-1, 3, L"    Next tick overflow at: %04d/%02d/%02d %02d:%02d:%02d", when.tm_year + 1900, when.tm_mon + 1, when.tm_mday, when.tm_hour, when.tm_min, when.tm_sec);
  }

}

// log_printf
// file logger.h line 279
extern void log_printf(signed int source_id, signed int level, const signed int *lpszFmt, ...)
{
  void **vargs;
  signed int count;
  signed int threadId;
  signed int logFileChanged;
  signed int *logFileCopy;
  signed int *msg = (signed int *)(void *)0;
  signed int i;
  signed int flag;
  struct timeval timevalNow;
  signed long int startNow;
  signed int startNowMillis;
  signed long int endNow;
  signed int endNowMillis;
  _Bool tmp_if_expr_10;
  signed int *return_value_wcsstr_9;
  unsigned long int return_value_wcslen_4;
  unsigned long int return_value_wcslen_6;
  _Bool tmp_if_expr_5;
  if(!(level == 9))
  {
    if(logPrintfWarnThreshold >= 1)
    {
      gettimeofday(&timevalNow, (struct timezone *)(void *)0);
      startNow = (signed long int)timevalNow.tv_sec;
      startNowMillis = (signed int)(timevalNow.tv_usec / (signed long int)1000);
    }

    else
    {
      startNow = (signed long int)0;
      startNowMillis = 0;
    }
    signed int return_value_lockLoggingMutex_1;
    return_value_lockLoggingMutex_1=lockLoggingMutex();
    if(return_value_lockLoggingMutex_1 == 0)
    {
      if(logPauseTime >= 0 && level >= 2 && !(source_id >= 0))
      {
        pauseThread(logPauseTime);
        logPauseTime = -1;
      }

      if(!(source_id >= 1))
      {
        return_value_wcsstr_9=wcsstr(lpszFmt, L"%s");
        tmp_if_expr_10 = return_value_wcsstr_9 != (signed int *)(void *)0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_10 = (_Bool)0;
      if(tmp_if_expr_10)
      {
        unsigned long int return_value_wcslen_2;
        return_value_wcslen_2=wcslen(lpszFmt);
        void *return_value_malloc_3;
        return_value_malloc_3=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_2 + (unsigned long int)1));
        msg = (signed int *)return_value_malloc_3;
        if(!(msg == ((signed int *)NULL)))
        {
          unsigned long int return_value_wcslen_7;
          return_value_wcslen_7=wcslen(lpszFmt);
          if(return_value_wcslen_7 >= 1ul)
          {
            i = 0;
            do
            {
              return_value_wcslen_4=wcslen(lpszFmt);
              if((unsigned long int)i >= return_value_wcslen_4)
                break;

              msg[(signed long int)i] = lpszFmt[(signed long int)i];
              if(lpszFmt[(signed long int)i] == 37)
              {
                return_value_wcslen_6=wcslen(lpszFmt);
                if(!((unsigned long int)i >= return_value_wcslen_6))
                {
                  if(lpszFmt[(signed long int)(1 + i)] == 115)
                  {
                    if(i == 0)
                      tmp_if_expr_5 = (_Bool)1;

                    else
                      tmp_if_expr_5 = lpszFmt[(signed long int)(i - 1)] != 37 ? (_Bool)1 : (_Bool)0;
                    if(tmp_if_expr_5)
                    {
                      msg[(signed long int)(i + 1)] = 83;
                      i = i + 1;
                    }

                  }

                }

              }

              i = i + 1;
            }
            while((_Bool)1);
          }

          unsigned long int return_value_wcslen_8;
          return_value_wcslen_8=wcslen(lpszFmt);
          msg[(signed long int)return_value_wcslen_8] = 0;
        }

        else
        {
          _tprintf(L"Out of memory in logging code (%s)\n", (const void *)L"P1");
          goto __CPROVER_DUMP_L35;
        }
        flag = -1;
      }

      else
      {
        msg = (signed int *)lpszFmt;
        flag = 0;
      }
      threadId=getThreadId();
      if(!(source_id >= 1))
        while((_Bool)1)
        {
          if(threadMessageBufferSize == 0ul)
          {
            threadMessageBufferSize = (unsigned long int)100;
            void *return_value_malloc_11;
            return_value_malloc_11=malloc(sizeof(signed int) /*4ul*/  * threadMessageBufferSize);
            threadMessageBuffer = (signed int *)return_value_malloc_11;
            if(threadMessageBuffer == ((signed int *)NULL))
            {
              _tprintf(L"Out of memory in logging code (%s)\n", (const void *)L"P2");
              threadMessageBufferSize = (unsigned long int)0;
              if(flag == -1)
                free((void *)msg);

              goto __CPROVER_DUMP_L35;
            }

          }

          vargs = (void **)&lpszFmt;
          count=vswprintf(threadMessageBuffer, threadMessageBufferSize, msg, vargs);
          vargs = ((void **)NULL);
          if(count >= (signed int)threadMessageBufferSize || !(count >= 0))
          {
            free((void *)threadMessageBuffer);
            threadMessageBufferSize = threadMessageBufferSize + (unsigned long int)1024 > (threadMessageBufferSize + threadMessageBufferSize / (unsigned long int)10 > (unsigned long int)count + (unsigned long int)1 ? threadMessageBufferSize + threadMessageBufferSize / (unsigned long int)10 : (unsigned long int)count + (unsigned long int)1) ? threadMessageBufferSize + (unsigned long int)1024 : (threadMessageBufferSize + threadMessageBufferSize / (unsigned long int)10 > (unsigned long int)count + (unsigned long int)1 ? threadMessageBufferSize + threadMessageBufferSize / (unsigned long int)10 : (unsigned long int)count + (unsigned long int)1);
            void *return_value_malloc_12;
            return_value_malloc_12=malloc(sizeof(signed int) /*4ul*/  * threadMessageBufferSize);
            threadMessageBuffer = (signed int *)return_value_malloc_12;
            if(threadMessageBuffer == ((signed int *)NULL))
            {
              _tprintf(L"Out of memory in logging code (%s)\n", (const void *)L"P3");
              threadMessageBufferSize = (unsigned long int)0;
              if(flag == -1)
                free((void *)msg);

              goto __CPROVER_DUMP_L35;
            }

            count = -1;
          }

          if(count >= 0)
            break;

        }

      if(flag == -1)
        free((void *)msg);

      logFileCopy = (signed int *)(void *)0;
      if(source_id >= 1)
        logFileChanged=log_printf_message(source_id, level, threadId, 0, msg, -1);

      else
        logFileChanged=log_printf_message(source_id, level, threadId, 0, threadMessageBuffer, -1);
      if(!(logFileChanged == 0))
      {
        unsigned long int return_value_wcslen_13;
        return_value_wcslen_13=wcslen(currentLogFileName);
        void *return_value_malloc_14;
        return_value_malloc_14=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_13 + (unsigned long int)1));
        logFileCopy = (signed int *)return_value_malloc_14;
        if(logFileCopy == ((signed int *)NULL))
          _tprintf(L"Out of memory in logging code (%s)\n", (const void *)L"P4");

        else
        {
          unsigned long int return_value_wcslen_15;
          return_value_wcslen_15=wcslen(currentLogFileName);
          wcsncpy(logFileCopy, currentLogFileName, return_value_wcslen_15 + (unsigned long int)1);
          if(!(pendingLogFileChange == ((signed int *)NULL)))
            free((void *)pendingLogFileChange);

          pendingLogFileChange = logFileCopy;
        }
      }

      signed int return_value_releaseLoggingMutex_16;
      return_value_releaseLoggingMutex_16=releaseLoggingMutex();
      if(return_value_releaseLoggingMutex_16 == 0)
      {
        if(logPrintfWarnThreshold >= 1)
        {
          gettimeofday(&timevalNow, (struct timezone *)(void *)0);
          endNow = (signed long int)timevalNow.tv_sec;
          endNowMillis = (signed int)(timevalNow.tv_usec / (signed long int)1000);
          previousLogLag = ((endNow - startNow < (signed long int)3600 ? endNow - startNow : (signed long int)3600) * (signed long int)1000 + (signed long int)endNowMillis) - (signed long int)startNowMillis;
          if(previousLogLag >= (signed long int)logPrintfWarnThreshold)
            log_printf_queue(-1, -1, 4, L"Write to log took %d milliseconds.", previousLogLag);

        }

      }

    }

  }


__CPROVER_DUMP_L35:
  ;
}

// log_printf_message
// file logger.c line 1893
signed int log_printf_message(signed int source_id, signed int level, signed int threadId, signed int queued, signed int *message, signed int sysLogEnabled)
{
  signed int *printBuffer;
  struct _IO_FILE *target;
  signed int logFileChanged = 0;
  signed int *subMessage;
  signed int *nextLF;
  unsigned long int reqSize;
  struct timeval timevalNow;
  signed int intBuffer[3l];
  signed int *pos;
  signed long int now;
  signed int nowMillis;
  struct tm *nowTM;
  signed long int durationMillis;
  signed int *return_value_wcsstr_7;
  return_value_wcsstr_7=wcsstr(message, L"#!#WrApPeRsPeCiAl#!#");
  unsigned long int return_value_wcslen_5;
  unsigned long int return_value_wcslen_6;
  if(return_value_wcsstr_7 == message)
  {
    return_value_wcslen_5=wcslen(message);
    return_value_wcslen_6=wcslen(L"#!#WrApPeRsPeCiAl#!#");
    if(return_value_wcslen_5 >= 10ul + return_value_wcslen_6)
    {
      unsigned long int return_value_wcslen_1;
      return_value_wcslen_1=wcslen(L"#!#WrApPeRsPeCiAl#!#");
      pos = (signed int *)(message + (signed long int)return_value_wcslen_1 + (signed long int)1);
      wcsncpy(intBuffer, pos, (unsigned long int)2);
      intBuffer[(signed long int)2] = 0;
      signed long int return_value_wcstol_2;
      return_value_wcstol_2=wcstol(intBuffer, (signed int ** restrict )(void *)0, 10);
      source_id = (signed int)return_value_wcstol_2;
      pos = pos + (signed long int)3;
      wcsncpy(intBuffer, pos, (unsigned long int)2);
      intBuffer[(signed long int)2] = 0;
      signed long int return_value_wcstol_3;
      return_value_wcstol_3=wcstol(intBuffer, (signed int ** restrict )(void *)0, 10);
      level = (signed int)return_value_wcstol_3;
      pos = pos + (signed long int)3;
      wcsncpy(intBuffer, pos, (unsigned long int)2);
      intBuffer[(signed long int)2] = 0;
      signed long int return_value_wcstol_4;
      return_value_wcstol_4=wcstol(intBuffer, (signed int ** restrict )(void *)0, 10);
      threadId = (signed int)return_value_wcstol_4;
      pos = pos + (signed long int)3;
      message = pos;
    }

  }

  gettimeofday(&timevalNow, (struct timezone *)(void *)0);
  now = (signed long int)timevalNow.tv_sec;
  nowMillis = (signed int)(timevalNow.tv_usec / (signed long int)1000);
  nowTM=localtime(&now);
  if(source_id == -2 || source_id == -1)
  {
    durationMillis = (signed long int)-1;
    goto __CPROVER_DUMP_L6;
  }

  if(now + -previousNow >= 100001l)
    durationMillis = (signed long int)100000000;

  else
    durationMillis = ((now - previousNow) * (signed long int)1000 + (signed long int)nowMillis) - (signed long int)previousNowMillis;
  previousNow = now;
  previousNowMillis = nowMillis;

__CPROVER_DUMP_L6:
  ;
  signed int *return_value_wcsstr_8;
  if(currentLogSplitMessages == 0)
  {
    if(!(sysLogEnabled == 0))
    {
      return_value_wcsstr_8=wcsstr(message, L"#!#WrApPeR#!#");
      if(!(return_value_wcsstr_8 == message))
        log_printf_message_sysLog(source_id, level, message, nowTM, 0);

    }

  }

  subMessage = message;
  nextLF=wcschr(subMessage, 10);
  if(!(nextLF == ((signed int *)NULL)))
  {
    while(!(nextLF == ((signed int *)NULL)))
    {
      nextLF[(signed long int)0] = 0;
      signed int return_value_log_printf_message_9;
      return_value_log_printf_message_9=log_printf_message(source_id, level, threadId, queued, subMessage, 0);
      logFileChanged = logFileChanged | return_value_log_printf_message_9;
      subMessage = &nextLF[(signed long int)1];
      nextLF=wcschr(subMessage, 10);
    }
    signed int return_value_log_printf_message_10;
    return_value_log_printf_message_10=log_printf_message(source_id, level, threadId, queued, subMessage, 0);
    logFileChanged = logFileChanged | return_value_log_printf_message_10;
    return logFileChanged;
  }

  signed int *return_value_wcsstr_15;
  return_value_wcsstr_15=wcsstr(message, L"#!#WrApPeR#!#");
  if(return_value_wcsstr_15 == message)
  {
    unsigned long int return_value_wcslen_11;
    return_value_wcslen_11=wcslen(L"#!#WrApPeRsPeCiAl#!#");
    unsigned long int return_value_wcslen_12;
    return_value_wcslen_12=wcslen(message);
    unsigned long int return_value_wcslen_13;
    return_value_wcslen_13=wcslen(L"#!#WrApPeR#!#");
    reqSize = ((return_value_wcslen_11 + (unsigned long int)1 + (unsigned long int)2 + (unsigned long int)1 + (unsigned long int)2 + (unsigned long int)1 + (unsigned long int)2 + (unsigned long int)1 + return_value_wcslen_12) - return_value_wcslen_13) + (unsigned long int)1;
    printBuffer=preparePrintBuffer(reqSize);
    if(printBuffer == ((signed int *)NULL))
      return 0;

    unsigned long int return_value_wcslen_14;
    return_value_wcslen_14=wcslen(L"#!#WrApPeR#!#");
    _sntprintf(printBuffer, reqSize, L"%s|%02d|%02d|%02d|%s", (const void *)L"#!#WrApPeRsPeCiAl#!#", source_id, level, threadId, message + (signed long int)return_value_wcslen_14);
    switch(level)
    {
      case 6:
      {
        if(!(consoleFatalToStdErr == 0))
          target = stderr;

        else
          target = stdout;
        break;
      }
      case 5:
      {
        if(!(consoleErrorToStdErr == 0))
          target = stderr;

        else
          target = stdout;
        break;
      }
      case 4:
      {
        if(!(consoleWarnToStdErr == 0))
          target = stderr;

        else
          target = stdout;
        break;
      }
      default:
        target = stdout;
    }
    _ftprintf(target, L"%s\n", printBuffer);
    if(!(consoleFlush == 0))
      fflush(target);

    return 0;
  }

  if(!(threadId >= 0))
    threadId=getThreadId();

  if(!(currentLogSplitMessages == 0))
    log_printf_message_sysLog(source_id, level, message, nowTM, 0);

  log_printf_message_console(source_id, level, threadId, queued, message, nowTM, nowMillis, durationMillis);
  logFileChanged=log_printf_message_logFile(source_id, level, threadId, queued, message, nowTM, nowMillis, durationMillis);
  return logFileChanged;
}

// log_printf_message_console
// file logger.c line 1874
void log_printf_message_console(signed int source_id, signed int level, signed int threadId, signed int queued, signed int *message, struct tm *nowTM, signed int nowMillis, signed long int durationMillis)
{
  if(level >= currentConsoleLevel)
    log_printf_message_consoleInner(source_id, level, threadId, queued, message, nowTM, nowMillis, durationMillis);

}

// log_printf_message_consoleInner
// file logger.c line 1802
void log_printf_message_consoleInner(signed int source_id, signed int level, signed int threadId, signed int queued, signed int *message, struct tm *nowTM, signed int nowMillis, signed long int durationMillis)
{
  signed int *printBuffer;
  struct _IO_FILE *target;
  printBuffer=buildPrintBuffer(source_id, level, threadId, queued, nowTM, nowMillis, durationMillis, consoleFormat, L"PM", message);
  if(!(printBuffer == ((signed int *)NULL)))
  {
    switch(level)
    {
      case 6:
      {
        if(!(consoleFatalToStdErr == 0))
          target = stderr;

        else
          target = stdout;
        break;
      }
      case 5:
      {
        if(!(consoleErrorToStdErr == 0))
          target = stderr;

        else
          target = stdout;
        break;
      }
      case 4:
      {
        if(!(consoleWarnToStdErr == 0))
          target = stderr;

        else
          target = stdout;
        break;
      }
      default:
        target = stdout;
    }
    _ftprintf(target, L"%s\n", printBuffer);
    if(!(consoleFlush == 0))
      fflush(target);

  }

}

// log_printf_message_logFile
// file logger.c line 1786
signed int log_printf_message_logFile(signed int source_id, signed int level, signed int threadId, signed int queued, signed int *message, struct tm *nowTM, signed int nowMillis, signed long int durationMillis)
{
  signed int logFileChanged = 0;
  if(level >= currentLogfileLevel)
    logFileChanged=log_printf_message_logFileInner(source_id, level, threadId, queued, message, nowTM, nowMillis, durationMillis);

  return logFileChanged;
}

// log_printf_message_logFileInner
// file logger.c line 1642
signed int log_printf_message_logFileInner(signed int source_id, signed int level, signed int threadId, signed int queued, signed int *message, struct tm *nowTM, signed int nowMillis, signed long int durationMillis)
{
  signed int logFileChanged = 0;
  signed int nowDate[9l];
  signed int *printBuffer;
  signed int old_umask;
  const signed int *tempBufferFormat;
  const signed int *tempBufferLastErrorText;
  unsigned long int tempBufferLen;
  signed int *tempBuffer;
  unsigned long int return_value_wcslen_13;
  if(!(logFilePath == ((signed int *)NULL)))
  {
    return_value_wcslen_13=wcslen(logFilePath);
    if(return_value_wcslen_13 >= 1ul)
    {
      if(!((16 & logFileRollMode) == 0))
        _sntprintf(nowDate, (unsigned long int)9, L"%04d%02d%02d", nowTM->tm_year + 1900, nowTM->tm_mon + 1, nowTM->tm_mday);

      else
        nowDate[(signed long int)0] = 0;
      checkAndRollLogs(nowDate);
      if(logfileFP == ((struct _IO_FILE *)NULL))
      {
        if(*currentLogFileName == 0)
        {
          if(!((16 & logFileRollMode) == 0))
            generateLogFileName(currentLogFileName, currentLogFileNameSize, logFilePath, nowDate, (const signed int *)(void *)0);

          else
            generateLogFileName(currentLogFileName, currentLogFileNameSize, logFilePath, (const signed int *)(void *)0, (const signed int *)(void *)0);
          logFileChanged = -1;
        }

        unsigned int return_value_umask_1;
        return_value_umask_1=umask((unsigned int)logFileUmask);
        old_umask = (signed int)return_value_umask_1;
        logfileFP=_tfopen(currentLogFileName, L"a");
        if(logfileFP == ((struct _IO_FILE *)NULL))
        {
          tempBufferFormat = L"Unable to write to the configured log file: %s (%s)\n  Falling back to the default file in the current working directory: %s";
          tempBufferLastErrorText=getLastErrorText();
          unsigned long int return_value_wcslen_2;
          return_value_wcslen_2=wcslen(tempBufferFormat);
          unsigned long int return_value_wcslen_3;
          return_value_wcslen_3=wcslen(currentLogFileName);
          unsigned long int return_value_wcslen_4;
          return_value_wcslen_4=wcslen(tempBufferLastErrorText);
          unsigned long int return_value_wcslen_5;
          return_value_wcslen_5=wcslen(defaultLogFile);
          tempBufferLen = (((return_value_wcslen_2 - (unsigned long int)2) - (unsigned long int)2) - (unsigned long int)2) + return_value_wcslen_3 + return_value_wcslen_4 + return_value_wcslen_5 + (unsigned long int)1;
          void *return_value_malloc_6;
          return_value_malloc_6=malloc(sizeof(signed int) /*4ul*/  * tempBufferLen);
          tempBuffer = (signed int *)return_value_malloc_6;
          if(tempBuffer == ((signed int *)NULL))
            outOfMemoryQueued(L"LPML", 1);

          else
          {
            const signed int *return_value_getLastErrorText_7;
            return_value_getLastErrorText_7=getLastErrorText();
            _sntprintf(tempBuffer, tempBufferLen, tempBufferFormat, currentLogFileName, return_value_getLastErrorText_7, defaultLogFile);
            log_printf_queue(-1, -1, 4, L"%s", tempBuffer);
            log_printf_message_sysLog(-1, 4, tempBuffer, nowTM, -1);
            free((void *)tempBuffer);
          }
          setLogfilePath(defaultLogFile, (const signed int *)(void *)0, -1);
          _sntprintf(currentLogFileName, currentLogFileNameSize, defaultLogFile);
          logFileChanged = -1;
          logfileFP=_tfopen(currentLogFileName, L"a");
          if(logfileFP == ((struct _IO_FILE *)NULL))
          {
            tempBufferFormat = L"Unable to write to the default log file: %s (%s)\n  Disabling log file.";
            tempBufferLastErrorText=getLastErrorText();
            unsigned long int return_value_wcslen_8;
            return_value_wcslen_8=wcslen(tempBufferFormat);
            unsigned long int return_value_wcslen_9;
            return_value_wcslen_9=wcslen(currentLogFileName);
            unsigned long int return_value_wcslen_10;
            return_value_wcslen_10=wcslen(tempBufferLastErrorText);
            tempBufferLen = ((return_value_wcslen_8 - (unsigned long int)2) - (unsigned long int)2) + return_value_wcslen_9 + return_value_wcslen_10 + (unsigned long int)1;
            void *return_value_malloc_11;
            return_value_malloc_11=malloc(sizeof(signed int) /*4ul*/  * tempBufferLen);
            tempBuffer = (signed int *)return_value_malloc_11;
            if(tempBuffer == ((signed int *)NULL))
              outOfMemoryQueued(L"LPML", 1);

            else
            {
              const signed int *return_value_getLastErrorText_12;
              return_value_getLastErrorText_12=getLastErrorText();
              _sntprintf(tempBuffer, tempBufferLen, tempBufferFormat, currentLogFileName, return_value_getLastErrorText_12);
              log_printf_queue(-1, -1, 4, L"%s", tempBuffer);
              log_printf_message_sysLog(-1, 4, tempBuffer, nowTM, -1);
              free((void *)tempBuffer);
            }
            setLogfileLevelInt(9);
            logFileChanged = 0;
          }

        }

        umask((unsigned int)old_umask);
      }

      if(logfileFP == ((struct _IO_FILE *)NULL))
        currentLogFileName[(signed long int)0] = 0;

      else
      {
        wcsncpy(logFileLastNowDate, nowDate, (unsigned long int)9);
        printBuffer=buildPrintBuffer(source_id, level, threadId, queued, nowTM, nowMillis, durationMillis, logfileFormat, L"LPTM", message);
        if(!(printBuffer == ((signed int *)NULL)))
        {
          _ftprintf(logfileFP, L"%s\n", printBuffer);
          logFileAccessed = -1;
          logfileActivityCount = logfileActivityCount + 1ul;
          if(!(autoCloseLogfile == 0))
          {
            fclose(logfileFP);
            logfileFP = (struct _IO_FILE *)(void *)0;
          }

          else
            if(!(autoFlushLogfile == 0))
              fflush(logfileFP);

        }

      }
    }

  }

  return logFileChanged;
}

// log_printf_message_sysLog
// file logger.c line 1612
void log_printf_message_sysLog(signed int source_id, signed int level, signed int *message, struct tm *nowTM, signed int invertLogLevelCheck)
{
  if(level == 7 || level == 8)
    goto __CPROVER_DUMP_L5;

  if(!(invertLogLevelCheck == 0))
  {
    if(!(level >= currentLoginfoLevel))
      log_printf_message_sysLogInner(source_id, level, message, nowTM);

  }

  else
    if(level >= currentLoginfoLevel)
      log_printf_message_sysLogInner(source_id, level, message, nowTM);


__CPROVER_DUMP_L5:
  ;
}

// log_printf_message_sysLogInner
// file logger.c line 1599
void log_printf_message_sysLogInner(signed int source_id, signed int level, signed int *message, struct tm *nowTM)
{
  sendLoginfoMessage(source_id, level, message);
}

// log_printf_queue
// file logger.h line 292
extern void log_printf_queue(signed int useQueue, signed int source_id, signed int level, const signed int *lpszFmt, ...)
{
  signed int threadId;
  signed int localWriteIndex;
  signed int localReadIndex;
  void **vargs;
  signed int count;
  signed int *format;
  unsigned long int i;
  unsigned long int len;
  signed int *buffer;
  signed int *return_value_wcsstr_2;
  return_value_wcsstr_2=wcsstr(lpszFmt, L"%s");
  _Bool tmp_if_expr_1;
  if(!(return_value_wcsstr_2 == ((signed int *)NULL)))
  {
    threadId=getThreadId();
    wcsncpy(formatMessages[(signed long int)threadId], lpszFmt, (unsigned long int)(512 + 1 + 4));
    formatMessages[(signed long int)threadId][(signed long int)((512 + 1 + 4) - 1)] = 0;
    format = formatMessages[(signed long int)threadId];
    len=wcslen(format);
    if(len >= 1ul)
    {
      i = (unsigned long int)0;
      for( ; !(i >= len); i = i + 1ul)
        if(i >= 1ul)
        {
          if(format[-1l + (signed long int)i] == 37)
          {
            if(format[(signed long int)i] == 115)
            {
              if(i >= 2ul)
                tmp_if_expr_1 = format[(signed long int)(i - (unsigned long int)2)] == 37 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_1 = (_Bool)0;
              if(!tmp_if_expr_1)
                format[(signed long int)i] = 83;

            }

          }

        }

    }

    lpszFmt = format;
  }

  if(!(useQueue == 0))
  {
    threadId=getThreadId();
    localWriteIndex = queueWriteIndex[(signed long int)threadId];
    localReadIndex = queueReadIndex[(signed long int)threadId];
    if(localWriteIndex == localReadIndex + -1 || localReadIndex == 0 && localWriteIndex == 20)
    {
      _tprintf(L"WARNING log queue overflow for thread[%d]:%d:%d dropping entry: %s\n", threadId, localWriteIndex, localReadIndex, lpszFmt);
      goto __CPROVER_DUMP_L15;
    }

    buffer = queueMessages[(signed long int)threadId][(signed long int)queueWriteIndex[(signed long int)threadId]];
  }

  else
  {
    void *return_value_malloc_3;
    return_value_malloc_3=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(512 + 1 + 4));
    buffer = (signed int *)return_value_malloc_3;
    if(buffer == ((signed int *)NULL))
    {
      _tprintf(L"Out of memory in logging code (%s)\n", (const void *)L"PQ1");
      goto __CPROVER_DUMP_L15;
    }

    threadId = -1;
    localWriteIndex = -1;
  }
  vargs = (void **)&lpszFmt;
  count=vswprintf(buffer, (unsigned long int)(512 + 1), lpszFmt, vargs);
  vargs = ((void **)NULL);
  if(count >= 1 || !(count >= 0))
    _sntprintf(buffer, (unsigned long int)(512 + 1 + 4), L"(Message too long to be logged as a queued message.  Please report this.)");

  if(!(useQueue == 0))
  {
    queueSourceIds[(signed long int)threadId][(signed long int)localWriteIndex] = source_id;
    queueLevels[(signed long int)threadId][(signed long int)localWriteIndex] = level;
    queueWriteIndex[(signed long int)threadId] = queueWriteIndex[(signed long int)threadId] + 1;
    if(queueWriteIndex[(signed long int)threadId] >= 20)
    {
      queueWriteIndex[(signed long int)threadId] = 0;
      queueWrapped[(signed long int)threadId] = 1;
    }

  }

  else
  {
    log_printf(source_id, level, L"%S", buffer);
    free((void *)buffer);
  }

__CPROVER_DUMP_L15:
  ;
}

// loggerFileFreeFiles
// file logger_file.h line 48
extern void loggerFileFreeFiles(signed int **files)
{
  signed int i = 0;
  for( ; !(files[(signed long int)i] == ((signed int *)NULL)); i = i + 1)
    free((void *)files[(signed long int)i]);
  free((void *)files);
}

// loggerFileGetFiles
// file logger_file.h line 43
extern signed int ** loggerFileGetFiles(const signed int *pattern, signed int sortMode)
{
  signed int cnt;
  signed int filesSize;
  signed int **files;
  signed int result;
  struct anonymous_22 g;
  signed int findex;
  signed long int *fileTimes;
  struct stat fileStat;
  char *cPattern;
  unsigned long int req;
  unsigned long int return_value_wcstombs_1;
  return_value_wcstombs_1=wcstombs((char *)(void *)0, pattern, (unsigned long int)0);
  req = return_value_wcstombs_1 + (unsigned long int)1;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(req);
  cPattern = (char *)return_value_malloc_2;
  if(cPattern == ((char *)NULL))
  {
    outOfMemoryQueued(L"WFGF", 8);
    return (signed int **)(void *)0;
  }

  else
  {
    wcstombs(cPattern, pattern, req);
    result=glob(cPattern, 1 << 1 | 1 << 2, (signed int (*)(const char *, signed int))(void *)0, &g);
    free((void *)cPattern);
    cnt = 0;
    if(result == 0)
    {
      if(g.gl_pathc >= 1ul)
      {
        filesSize = (signed int)(g.gl_pathc + (unsigned long int)1);
        void *return_value_malloc_3;
        return_value_malloc_3=malloc(sizeof(signed int *) /*8ul*/  * (unsigned long int)filesSize);
        files = (signed int **)return_value_malloc_3;
        if(files == ((signed int **)NULL))
        {
          outOfMemoryQueued(L"WFGF", 9);
          return (signed int **)(void *)0;
        }

        memset((void *)files, 0, sizeof(signed int *) /*8ul*/  * (unsigned long int)filesSize);
        void *return_value_malloc_4;
        return_value_malloc_4=malloc(sizeof(signed long int) /*8ul*/  * (unsigned long int)filesSize);
        fileTimes = (signed long int *)return_value_malloc_4;
        if(fileTimes == ((signed long int *)NULL))
        {
          outOfMemoryQueued(L"WFGF", 10);
          loggerFileFreeFiles(files);
          return (signed int **)(void *)0;
        }

        memset((void *)fileTimes, 0, sizeof(signed long int) /*8ul*/  * (unsigned long int)filesSize);
        findex = 0;
        for( ; !((unsigned long int)findex >= g.gl_pathc); findex = findex + 1)
        {
          req=mbstowcs((signed int *)(void *)0, g.gl_pathv[(signed long int)findex], (unsigned long int)0);
          if(req == 18446744073709551615ul)
            invalidMultiByteSequence(L"GLET", 1);

          void *return_value_malloc_5;
          return_value_malloc_5=malloc((req + (unsigned long int)1) * sizeof(signed int) /*4ul*/ );
          files[(signed long int)cnt] = (signed int *)return_value_malloc_5;
          if(files[(signed long int)cnt] == ((signed int *)NULL))
          {
            outOfMemoryQueued(L"WFGF", 11);
            free((void *)fileTimes);
            loggerFileFreeFiles(files);
            return (signed int **)(void *)0;
          }

          mbstowcs(files[(signed long int)cnt], g.gl_pathv[(signed long int)findex], req + (unsigned long int)1);
          if(sortMode == 100)
          {
            signed int return_value__tstat_7;
            return_value__tstat_7=_tstat(files[(signed long int)cnt], &fileStat);
            if(return_value__tstat_7 == 0)
              fileTimes[(signed long int)cnt] = fileStat.st_mtim.tv_sec;

            else
            {
              const signed int *return_value_getLastErrorText_6;
              return_value_getLastErrorText_6=getLastErrorText();
              log_printf_queue(-1, -1, 4, L"Failed to stat %s: %s", files[(signed long int)cnt], return_value_getLastErrorText_6);
            }
          }

          cnt = cnt + 1;
        }
      }

      else
      {
        filesSize = 1;
        void *return_value_malloc_8;
        return_value_malloc_8=malloc(sizeof(signed int *) /*8ul*/  * (unsigned long int)filesSize);
        files = (signed int **)return_value_malloc_8;
        if(files == ((signed int **)NULL))
        {
          outOfMemoryQueued(L"WFGF", 12);
          return (signed int **)(void *)0;
        }

        memset((void *)files, 0, sizeof(signed int *) /*8ul*/  * (unsigned long int)filesSize);
        void *return_value_malloc_9;
        return_value_malloc_9=malloc(sizeof(signed long int) /*8ul*/  * (unsigned long int)filesSize);
        fileTimes = (signed long int *)return_value_malloc_9;
        if(fileTimes == ((signed long int *)NULL))
        {
          free((void *)files);
          outOfMemoryQueued(L"WFGF", 13);
          return (signed int **)(void *)0;
        }

        memset((void *)fileTimes, 0, sizeof(signed long int) /*8ul*/  * (unsigned long int)filesSize);
      }
      globfree(&g);
    }

    else
      if(result == 3)
      {
        filesSize = 1;
        void *return_value_malloc_10;
        return_value_malloc_10=malloc(sizeof(signed int *) /*8ul*/  * (unsigned long int)filesSize);
        files = (signed int **)return_value_malloc_10;
        if(files == ((signed int **)NULL))
        {
          outOfMemoryQueued(L"WFGF", 14);
          return (signed int **)(void *)0;
        }

        memset((void *)files, 0, sizeof(signed int *) /*8ul*/  * (unsigned long int)filesSize);
        void *return_value_malloc_11;
        return_value_malloc_11=malloc(sizeof(signed long int) /*8ul*/  * (unsigned long int)filesSize);
        fileTimes = (signed long int *)return_value_malloc_11;
        if(fileTimes == ((signed long int *)NULL))
        {
          free((void *)files);
          outOfMemoryQueued(L"WFGF", 15);
          return (signed int **)(void *)0;
        }

        memset((void *)fileTimes, 0, sizeof(signed long int) /*8ul*/  * (unsigned long int)filesSize);
      }

      else
      {
        const signed int *return_value_getLastErrorText_12;
        return_value_getLastErrorText_12=getLastErrorText();
        log_printf_queue(-1, -1, 5, L"Error listing files, %s: %s", pattern, return_value_getLastErrorText_12);
        return (signed int **)(void *)0;
      }
    if(sortMode == 100)
    {
      signed int return_value_sortFilesTimes_13;
      return_value_sortFilesTimes_13=sortFilesTimes(files, fileTimes, cnt);
      if(return_value_sortFilesTimes_13 == 0)
      {
        free((void *)fileTimes);
        loggerFileFreeFiles(files);
        return (signed int **)(void *)0;
      }

    }

    else
      if(sortMode == 102)
      {
        signed int return_value_sortFilesNamesDec_14;
        return_value_sortFilesNamesDec_14=sortFilesNamesDec(files, cnt);
        if(return_value_sortFilesNamesDec_14 == 0)
        {
          free((void *)fileTimes);
          loggerFileFreeFiles(files);
          return (signed int **)(void *)0;
        }

      }

      else
      {
        signed int return_value_sortFilesNamesAsc_15;
        return_value_sortFilesNamesAsc_15=sortFilesNamesAsc(files, cnt);
        if(return_value_sortFilesNamesAsc_15 == 0)
        {
          free((void *)fileTimes);
          loggerFileFreeFiles(files);
          return (signed int **)(void *)0;
        }

      }
    free((void *)fileTimes);
    return files;
  }
}

// loggerFileGetSortMode
// file logger_file.h line 35
extern signed int loggerFileGetSortMode(const signed int *modeName)
{
  signed int return_value_wcscasecmp_2;
  return_value_wcscasecmp_2=wcscasecmp(modeName, L"NAMES_ASC");
  signed int return_value_wcscasecmp_1;
  if(return_value_wcscasecmp_2 == 0)
    return 101;

  else
  {
    return_value_wcscasecmp_1=wcscasecmp(modeName, L"NAMES_DEC");
    if(return_value_wcscasecmp_1 == 0)
      return 102;

    else
      return 100;
  }
}

// main
// file testsuite.c line 47
signed int main(signed int argc, char **cargv)
{
  signed int **argv;
  signed int i;
  unsigned long int req;
  signed int errorCode;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)argc * sizeof(signed int *) /*8ul*/ );
  argv = (signed int **)return_value_malloc_1;
  signed int return_value_wcscasecmp_19;
  signed int return_value_wcscasecmp_18;
  signed int return_value_wcscasecmp_17;
  if(argv == ((signed int **)NULL))
  {
    _tprintf(L"Out of Memory in Main\n");
    return 1;
  }

  else
  {
    i = 0;
    for( ; !(i >= argc); i = i + 1)
    {
      req=mbstowcs((signed int *)(void *)0, cargv[(signed long int)i], (unsigned long int)0);
      if(req == 18446744073709551615ul)
      {
        _tprintf(L"Encoding problem with arguments in Main\n");
        do
        {
          i = i - 1;
          if(!(i >= 1))
            break;

          free((void *)argv[(signed long int)i]);
        }
        while((_Bool)1);
        free((void *)argv);
        return 1;
      }

      void *return_value_malloc_2;
      return_value_malloc_2=malloc(sizeof(signed int) /*4ul*/  * (req + (unsigned long int)1));
      argv[(signed long int)i] = (signed int *)return_value_malloc_2;
      if(argv[(signed long int)i] == ((signed int *)NULL))
      {
        _tprintf(L"Out of Memory in Main\n");
        do
        {
          i = i - 1;
          if(!(i >= 1))
            break;

          free((void *)argv[(signed long int)i]);
        }
        while((_Bool)1);
        free((void *)argv);
        return 1;
      }

      mbstowcs(argv[(signed long int)i], cargv[(signed long int)i], req + (unsigned long int)1);
      argv[(signed long int)i][(signed long int)req] = 0;
    }
    signed long int return_value_time_3;
    return_value_time_3=time((signed long int *)(void *)0);
    srand((unsigned int)return_value_time_3);
    enum anonymous_0 return_value_CU_initialize_registry_5;
    return_value_CU_initialize_registry_5=CU_initialize_registry();
    if(!((signed int)return_value_CU_initialize_registry_5 == CUE_SUCCESS))
    {
      enum anonymous_0 return_value_CU_get_error_4;
      return_value_CU_get_error_4=CU_get_error();
      errorCode = (signed int)return_value_CU_get_error_4;
      goto error;
    }

    signed int return_value_tsEX_suiteExample_7;
    return_value_tsEX_suiteExample_7=tsEX_suiteExample();
    if(!(return_value_tsEX_suiteExample_7 == 0))
    {
      CU_cleanup_registry();
      enum anonymous_0 return_value_CU_get_error_6;
      return_value_CU_get_error_6=CU_get_error();
      errorCode = (signed int)return_value_CU_get_error_6;
      goto error;
    }

    signed int return_value_tsFLTR_suiteFilter_9;
    return_value_tsFLTR_suiteFilter_9=tsFLTR_suiteFilter();
    if(!(return_value_tsFLTR_suiteFilter_9 == 0))
    {
      CU_cleanup_registry();
      enum anonymous_0 return_value_CU_get_error_8;
      return_value_CU_get_error_8=CU_get_error();
      errorCode = (signed int)return_value_CU_get_error_8;
      goto error;
    }

    signed int return_value_tsJAP_suiteJavaAdditionalParam_11;
    return_value_tsJAP_suiteJavaAdditionalParam_11=tsJAP_suiteJavaAdditionalParam();
    if(!(return_value_tsJAP_suiteJavaAdditionalParam_11 == 0))
    {
      CU_cleanup_registry();
      enum anonymous_0 return_value_CU_get_error_10;
      return_value_CU_get_error_10=CU_get_error();
      errorCode = (signed int)return_value_CU_get_error_10;
      goto error;
    }

    signed int return_value_tsHASH_suiteHashMap_13;
    return_value_tsHASH_suiteHashMap_13=tsHASH_suiteHashMap();
    if(!(return_value_tsHASH_suiteHashMap_13 == 0))
    {
      CU_cleanup_registry();
      enum anonymous_0 return_value_CU_get_error_12;
      return_value_CU_get_error_12=CU_get_error();
      errorCode = (signed int)return_value_CU_get_error_12;
      goto error;
    }

    if(!(argc >= 2))
    {
      showHelp(argv[(signed long int)0]);
      errorCode = 1;
    }

    else
    {
      return_value_wcscasecmp_19=wcscasecmp(argv[(signed long int)1], L"--basic");
      if(return_value_wcscasecmp_19 == 0)
      {
        CU_set_output_filename("testsuite");
        CU_basic_set_mode((enum anonymous_1)CU_BRM_VERBOSE);
        CU_basic_run_tests();
        CU_cleanup_registry();
        enum anonymous_0 return_value_CU_get_error_14;
        return_value_CU_get_error_14=CU_get_error();
        errorCode = (signed int)return_value_CU_get_error_14;
      }

      else
      {
        return_value_wcscasecmp_18=wcscasecmp(argv[(signed long int)1], L"--auto");
        if(return_value_wcscasecmp_18 == 0)
        {
          CU_list_tests_to_file();
          CU_automated_run_tests();
          CU_cleanup_registry();
          enum anonymous_0 return_value_CU_get_error_15;
          return_value_CU_get_error_15=CU_get_error();
          errorCode = (signed int)return_value_CU_get_error_15;
        }

        else
        {
          return_value_wcscasecmp_17=wcscasecmp(argv[(signed long int)1], L"--console");
          if(return_value_wcscasecmp_17 == 0)
          {
            CU_console_run_tests();
            CU_cleanup_registry();
            enum anonymous_0 return_value_CU_get_error_16;
            return_value_CU_get_error_16=CU_get_error();
            errorCode = (signed int)return_value_CU_get_error_16;
          }

          else
          {
            showHelp(argv[(signed long int)0]);
            errorCode = 1;
          }
        }
      }
    }

  error:
    ;
    i = 0;
    for( ; !(i >= argc); i = i + 1)
      free((void *)argv[(signed long int)i]);
    free((void *)argv);
    return errorCode;
  }
}

// maintainLogger
// file logger.h line 294
extern void maintainLogger()
{
  signed int localWriteIndex;
  signed int source_id;
  signed int level;
  signed int threadId;
  signed int *buffer;
  signed int logFileChanged;
  signed int *logFileCopy;
  if(!(pendingLogFileChange == ((signed int *)NULL)))
  {
    signed int return_value_lockLoggingMutex_1;
    return_value_lockLoggingMutex_1=lockLoggingMutex();
    if(!(return_value_lockLoggingMutex_1 == 0))
      goto __CPROVER_DUMP_L18;

    logFileCopy = pendingLogFileChange;
    pendingLogFileChange = (signed int *)(void *)0;
    signed int return_value_releaseLoggingMutex_2;
    return_value_releaseLoggingMutex_2=releaseLoggingMutex();
    if(!(return_value_releaseLoggingMutex_2 == 0))
      goto __CPROVER_DUMP_L18;

    if(!(logFileCopy == ((signed int *)NULL)))
    {
      logFileChangedCallback(logFileCopy);
      free((void *)logFileCopy);
      logFileCopy = (signed int *)(void *)0;
    }

  }

  threadId = 0;
  for( ; !(threadId >= 6); threadId = threadId + 1)
  {
    localWriteIndex = queueWriteIndex[(signed long int)threadId];
    if(!(queueReadIndex[(signed long int)threadId] == localWriteIndex))
    {
      logFileChanged = 0;
      logFileCopy = (signed int *)(void *)0;
      signed int return_value_lockLoggingMutex_3;
      return_value_lockLoggingMutex_3=lockLoggingMutex();
      if(!(return_value_lockLoggingMutex_3 == 0))
        goto __CPROVER_DUMP_L18;

      localWriteIndex = queueWriteIndex[(signed long int)threadId];
      while(!(queueReadIndex[(signed long int)threadId] == localWriteIndex))
      {
        source_id = queueSourceIds[(signed long int)threadId][(signed long int)queueReadIndex[(signed long int)threadId]];
        level = queueLevels[(signed long int)threadId][(signed long int)queueReadIndex[(signed long int)threadId]];
        buffer = queueMessages[(signed long int)threadId][(signed long int)queueReadIndex[(signed long int)threadId]];
        logFileChanged=log_printf_message(source_id, level, threadId, -1, buffer, -1);
        if(!(logFileChanged == 0))
        {
          unsigned long int return_value_wcslen_4;
          return_value_wcslen_4=wcslen(currentLogFileName);
          void *return_value_malloc_5;
          return_value_malloc_5=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_4 + (unsigned long int)1));
          logFileCopy = (signed int *)return_value_malloc_5;
          if(logFileCopy == ((signed int *)NULL))
            _tprintf(L"Out of memory in logging code (%s)\n", (const void *)L"ML1");

          else
          {
            unsigned long int return_value_wcslen_6;
            return_value_wcslen_6=wcslen(currentLogFileName);
            wcsncpy(logFileCopy, currentLogFileName, return_value_wcslen_6 + (unsigned long int)1);
          }
        }

        buffer[(signed long int)0] = 0;
        queueReadIndex[(signed long int)threadId] = queueReadIndex[(signed long int)threadId] + 1;
        if(queueReadIndex[(signed long int)threadId] >= 20)
          queueReadIndex[(signed long int)threadId] = 0;

      }
      signed int return_value_releaseLoggingMutex_7;
      return_value_releaseLoggingMutex_7=releaseLoggingMutex();
      if(!(return_value_releaseLoggingMutex_7 == 0))
      {
        if(!(logFileCopy == ((signed int *)NULL)) && !(logFileChanged == 0))
          free((void *)logFileCopy);

        goto __CPROVER_DUMP_L18;
      }

      if(!(logFileCopy == ((signed int *)NULL)) && !(logFileChanged == 0))
      {
        logFileChangedCallback(logFileCopy);
        free((void *)logFileCopy);
      }

    }

  }

__CPROVER_DUMP_L18:
  ;
}

// memcmpHM
// file wrapper_hashmap.c line 39
signed int memcmpHM(const void *vA, unsigned long int vALen, const void *vB, unsigned long int vBLen)
{
  unsigned long int i;
  unsigned char cA;
  unsigned char cB;
  i = (unsigned long int)0;
  for( ; !(i >= vALen) && !(i >= vBLen); i = i + 1ul)
  {
    cA = ((unsigned char *)vA)[(signed long int)i];
    cB = ((unsigned char *)vB)[(signed long int)i];
    if(!((signed int)cA >= (signed int)cB))
      return -1;

    else
      if(!((signed int)cB >= (signed int)cA))
        return 1;

  }
  if(!(vALen >= vBLen))
    return -1;

  else
    if(!(vBLen >= vALen))
      return 1;

    else
      return 0;
}

// multiByteToWideChar
// file wrapper_i18n.h line 61
extern signed int multiByteToWideChar(const char *multiByteChars, const char *multiByteEncoding, char *interumEncoding, signed int **outputBufferW, signed int localizeErrorMessage)
{
  const signed int *errorTemplate;
  unsigned long int errorTemplateLen;
  unsigned long int iconv_value;
  char *nativeCharStart;
  char *nativeCharStartCopy;
  unsigned long int multiByteCharsLen;
  unsigned long int nativeCharLen;
  unsigned long int nativeCharLenCopy;
  unsigned long int multiByteCharsLenStart;
  char *multiByteCharsStart;
  void *conv_desc;
  signed int didIConv;
  signed int redoIConv;
  unsigned long int wideCharLen;
  *outputBufferW = (signed int *)(void *)0;
  signed int tmp_statement_expression_29;
  unsigned long int __s1_len;
  unsigned long int __s2_len;
  signed int return_value___builtin_strcmp_30;
  return_value___builtin_strcmp_30=__builtin_strcmp(multiByteEncoding, interumEncoding);
  tmp_statement_expression_29 = return_value___builtin_strcmp_30;
  _Bool tmp_if_expr_33;
  signed int tmp_statement_expression_31;
  if(!(tmp_statement_expression_29 == 0))
  {
    unsigned long int multiByteToWideChar__1__2____s1_len;
    unsigned long int multiByteToWideChar__1__2____s2_len;
    signed int return_value___builtin_strcmp_32;
    return_value___builtin_strcmp_32=__builtin_strcmp(interumEncoding, "646");
    tmp_statement_expression_31 = return_value___builtin_strcmp_32;
    tmp_if_expr_33 = tmp_statement_expression_31 != 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_33 = (_Bool)0;
  int *tmp_if_expr_1;
  int *tmp_if_expr_6;
  int *tmp_if_expr_14;
  unsigned long int return_value_wcslen_15;
  void *return_value_malloc_16;
  int *tmp_if_expr_17;
  unsigned long int return_value_wcslen_18;
  void *return_value_malloc_19;
  int *tmp_if_expr_20;
  unsigned long int return_value_wcslen_21;
  void *return_value_malloc_22;
  int *tmp_if_expr_24;
  if(tmp_if_expr_33)
  {
    conv_desc=iconv_open(interumEncoding, multiByteEncoding);
    if(conv_desc == (void *)-1)
    {
      signed int *return_value___errno_location_10;
      return_value___errno_location_10=__errno_location();
      if(*return_value___errno_location_10 == 22)
      {
        if(!(localizeErrorMessage == 0))
          tmp_if_expr_1 = L"Conversion from '% s' to '% s' is not supported.";

        else
          tmp_if_expr_1 = L"Conversion from '% s' to '% s' is not supported.";
        errorTemplate = tmp_if_expr_1;
        unsigned long int return_value_wcslen_2;
        return_value_wcslen_2=wcslen(errorTemplate);
        unsigned long int return_value_strlen_3;
        return_value_strlen_3=strlen(multiByteEncoding);
        unsigned long int return_value_strlen_4;
        return_value_strlen_4=strlen(interumEncoding);
        errorTemplateLen = return_value_wcslen_2 + return_value_strlen_3 + return_value_strlen_4 + (unsigned long int)1;
        void *return_value_malloc_5;
        return_value_malloc_5=malloc(sizeof(signed int) /*4ul*/  * errorTemplateLen);
        *outputBufferW = (signed int *)return_value_malloc_5;
        if(!(*outputBufferW == ((signed int *)NULL)))
          _sntprintf(*outputBufferW, errorTemplateLen, errorTemplate, multiByteEncoding, interumEncoding);

        return -1;
      }

      else
      {
        if(!(localizeErrorMessage == 0))
          tmp_if_expr_6 = L"Initialization failure in iconv: %d";

        else
          tmp_if_expr_6 = L"Initialization failure in iconv: %d";
        errorTemplate = tmp_if_expr_6;
        unsigned long int return_value_wcslen_7;
        return_value_wcslen_7=wcslen(errorTemplate);
        errorTemplateLen = return_value_wcslen_7 + (unsigned long int)10 + (unsigned long int)1;
        void *return_value_malloc_8;
        return_value_malloc_8=malloc(sizeof(signed int) /*4ul*/  * errorTemplateLen);
        *outputBufferW = (signed int *)return_value_malloc_8;
        if(!(*outputBufferW == ((signed int *)NULL)))
        {
          signed int *return_value___errno_location_9;
          return_value___errno_location_9=__errno_location();
          _sntprintf(*outputBufferW, errorTemplateLen, errorTemplate, *return_value___errno_location_9);
        }

        return -1;
      }
    }

    multiByteCharsLen=strlen(multiByteChars);
    if(multiByteCharsLen == 0ul)
    {
      void *return_value_malloc_11;
      return_value_malloc_11=malloc(sizeof(signed int) /*4ul*/ );
      *outputBufferW = (signed int *)return_value_malloc_11;
      if(!(*outputBufferW == ((signed int *)NULL)))
      {
        (*outputBufferW)[(signed long int)0] = 0;
        return 0;
      }

      else
        return -1;
    }

    multiByteCharsLen = multiByteCharsLen + 1ul;
    nativeCharLen = multiByteCharsLen;
    nativeCharStart = (char *)(void *)0;
    do
    {
      redoIConv = 0;
      if(!(nativeCharStart == ((char *)NULL)))
        free((void *)nativeCharStart);

      multiByteCharsLenStart = multiByteCharsLen;
      multiByteCharsStart = (char *)multiByteChars;
      void *return_value_malloc_12;
      return_value_malloc_12=malloc(nativeCharLen);
      nativeCharStart = (char *)return_value_malloc_12;
      if(nativeCharStart == ((char *)NULL))
      {
        *outputBufferW = (signed int *)(void *)0;
        return -1;
      }

      nativeCharLenCopy = nativeCharLen;
      nativeCharStartCopy = nativeCharStart;
      iconv_value=iconv(conv_desc, &multiByteCharsStart, &multiByteCharsLenStart, &nativeCharStartCopy, &nativeCharLenCopy);
      if(iconv_value == 18446744073709551615ul)
      {
        signed int *return_value___errno_location_13;
        return_value___errno_location_13=__errno_location();
        switch(*return_value___errno_location_13)
        {
          case 84:
          {
            free((void *)nativeCharStart);
            if(!(localizeErrorMessage == 0))
              tmp_if_expr_14 = L"Invalid multibyte sequence.";

            else
              tmp_if_expr_14 = L"Invalid multibyte sequence.";
            errorTemplate = tmp_if_expr_14;
            return_value_wcslen_15=wcslen(errorTemplate);
            errorTemplateLen = return_value_wcslen_15 + (unsigned long int)1;
            return_value_malloc_16=malloc(sizeof(signed int) /*4ul*/  * errorTemplateLen);
            *outputBufferW = (signed int *)return_value_malloc_16;
            if(!(*outputBufferW == ((signed int *)NULL)))
              _sntprintf(*outputBufferW, errorTemplateLen, errorTemplate);

            return -1;
          }
          case 22:
          {
            free((void *)nativeCharStart);
            if(!(localizeErrorMessage == 0))
              tmp_if_expr_17 = L"Incomplete multibyte sequence.";

            else
              tmp_if_expr_17 = L"Incomplete multibyte sequence.";
            errorTemplate = tmp_if_expr_17;
            return_value_wcslen_18=wcslen(errorTemplate);
            errorTemplateLen = return_value_wcslen_18 + (unsigned long int)1;
            return_value_malloc_19=malloc(sizeof(signed int) /*4ul*/  * errorTemplateLen);
            *outputBufferW = (signed int *)return_value_malloc_19;
            if(!(*outputBufferW == ((signed int *)NULL)))
              _sntprintf(*outputBufferW, errorTemplateLen, errorTemplate);

            return -1;
          }
          case 7:
          {
            nativeCharLen = nativeCharLen + multiByteCharsLen;
            redoIConv = -1;
            break;
          }
          default:
          {
            free((void *)nativeCharStart);
            if(!(localizeErrorMessage == 0))
              tmp_if_expr_20 = L"Unexpected iconv error: %d";

            else
              tmp_if_expr_20 = L"Unexpected iconv error: %d";
            errorTemplate = tmp_if_expr_20;
            return_value_wcslen_21=wcslen(errorTemplate);
            errorTemplateLen = return_value_wcslen_21 + (unsigned long int)10 + (unsigned long int)1;
            return_value_malloc_22=malloc(sizeof(signed int) /*4ul*/  * errorTemplateLen);
            *outputBufferW = (signed int *)return_value_malloc_22;
            if(!(*outputBufferW == ((signed int *)NULL)))
            {
              signed int *return_value___errno_location_23;
              return_value___errno_location_23=__errno_location();
              _sntprintf(*outputBufferW, errorTemplateLen, errorTemplate, *return_value___errno_location_23);
            }

            return -1;
          }
        }
      }

    }
    while(!(redoIConv == 0));
    signed int return_value_iconv_close_28;
    return_value_iconv_close_28=iconv_close(conv_desc);
    if(!(return_value_iconv_close_28 == 0))
    {
      free((void *)nativeCharStart);
      if(!(localizeErrorMessage == 0))
        tmp_if_expr_24 = L"Cleanup failure in iconv: %d";

      else
        tmp_if_expr_24 = L"Cleanup failure in iconv: %d";
      errorTemplate = tmp_if_expr_24;
      unsigned long int return_value_wcslen_25;
      return_value_wcslen_25=wcslen(errorTemplate);
      errorTemplateLen = return_value_wcslen_25 + (unsigned long int)10 + (unsigned long int)1;
      void *return_value_malloc_26;
      return_value_malloc_26=malloc(sizeof(signed int) /*4ul*/  * errorTemplateLen);
      *outputBufferW = (signed int *)return_value_malloc_26;
      if(!(*outputBufferW == ((signed int *)NULL)))
      {
        signed int *return_value___errno_location_27;
        return_value___errno_location_27=__errno_location();
        _sntprintf(*outputBufferW, errorTemplateLen, errorTemplate, *return_value___errno_location_27);
      }

      return -1;
    }

    didIConv = -1;
  }

  else
  {
    nativeCharStart = (char *)multiByteChars;
    didIConv = 0;
  }
  wideCharLen=mbstowcs((signed int *)(void *)0, nativeCharStart, (unsigned long int)0);
  int *tmp_if_expr_34;
  int *tmp_if_expr_36;
  if(wideCharLen == 18446744073709551615ul)
  {
    if(!(didIConv == 0))
      free((void *)nativeCharStart);

    signed int *return_value___errno_location_38;
    return_value___errno_location_38=__errno_location();
    if(*return_value___errno_location_38 == 84)
    {
      if(!(localizeErrorMessage == 0))
        tmp_if_expr_34 = L"Invalid multibyte sequence.";

      else
        tmp_if_expr_34 = L"Invalid multibyte sequence.";
      errorTemplate = tmp_if_expr_34;
      unsigned long int return_value_wcslen_35;
      return_value_wcslen_35=wcslen(errorTemplate);
      errorTemplateLen = return_value_wcslen_35 + (unsigned long int)1;
    }

    else
    {
      if(!(localizeErrorMessage == 0))
        tmp_if_expr_36 = L"Unexpected iconv error: %d";

      else
        tmp_if_expr_36 = L"Unexpected iconv error: %d";
      errorTemplate = tmp_if_expr_36;
      unsigned long int return_value_wcslen_37;
      return_value_wcslen_37=wcslen(errorTemplate);
      errorTemplateLen = return_value_wcslen_37 + (unsigned long int)10 + (unsigned long int)1;
    }
    void *return_value_malloc_39;
    return_value_malloc_39=malloc(sizeof(signed int) /*4ul*/  * errorTemplateLen);
    *outputBufferW = (signed int *)return_value_malloc_39;
    if(!(*outputBufferW == ((signed int *)NULL)))
    {
      signed int *return_value___errno_location_40;
      return_value___errno_location_40=__errno_location();
      _sntprintf(*outputBufferW, errorTemplateLen, errorTemplate, *return_value___errno_location_40);
    }

    return -1;
  }

  void *return_value_malloc_41;
  return_value_malloc_41=malloc(sizeof(signed int) /*4ul*/  * (wideCharLen + (unsigned long int)1));
  *outputBufferW = (signed int *)return_value_malloc_41;
  if(*outputBufferW == ((signed int *)NULL))
  {
    if(!(didIConv == 0))
      free((void *)nativeCharStart);

    return -1;
  }

  else
  {
    mbstowcs(*outputBufferW, nativeCharStart, wideCharLen + (unsigned long int)1);
    (*outputBufferW)[(signed long int)wideCharLen] = 0;
    if(!(didIConv == 0))
      free((void *)nativeCharStart);

    return 0;
  }
}

// newHashMap
// file wrapper_hashmap.h line 57
extern struct anonymous_23 * newHashMap(signed int bucketCount)
{
  signed int i;
  struct anonymous_23 *hashMap;
  struct anonymous_24 *bucket;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct anonymous_23) /*16ul*/ );
  hashMap = (struct anonymous_23 *)return_value_malloc_1;
  if(hashMap == ((struct anonymous_23 *)NULL))
  {
    _tprintf(L"Out of memory (%s)\n", (const void *)L"NHM1");
    return (struct anonymous_23 *)(void *)0;
  }

  else
  {
    memset((void *)hashMap, 0, sizeof(struct anonymous_23) /*16ul*/ );
    hashMap->bucketCount = bucketCount;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct anonymous_24 *) /*8ul*/  * (unsigned long int)bucketCount);
    hashMap->buckets = (struct anonymous_24 **)return_value_malloc_2;
    if(hashMap->buckets == ((struct anonymous_24 **)NULL))
    {
      _tprintf(L"Out of memory (%s)\n", (const void *)L"NHM2");
      freeHashMap(hashMap);
      return (struct anonymous_23 *)(void *)0;
    }

    else
    {
      memset((void *)hashMap->buckets, 0, sizeof(struct anonymous_24 *) /*8ul*/  * (unsigned long int)bucketCount);
      i = 0;
      for( ; !(i >= hashMap->bucketCount); i = i + 1)
      {
        void *return_value_malloc_3;
        return_value_malloc_3=malloc(sizeof(struct anonymous_24) /*16ul*/ );
        bucket = (struct anonymous_24 *)return_value_malloc_3;
        if(bucket == ((struct anonymous_24 *)NULL))
        {
          _tprintf(L"Out of memory (%s)\n", (const void *)L"NHM3");
          freeHashMap(hashMap);
          return (struct anonymous_23 *)(void *)0;
        }

        memset((void *)bucket, 0, sizeof(struct anonymous_24) /*16ul*/ );
        hashMap->buckets[(signed long int)i] = bucket;
      }
      return hashMap;
    }
  }
}

// outOfMemory
// file logger_base.h line 69
extern void outOfMemory(const signed int *context, signed int id)
{
  const signed int *return_value_getLastErrorText_1;
  return_value_getLastErrorText_1=getLastErrorText();
  log_printf(-1, 6, L"Out of memory (%s%02d). %s", context, id, return_value_getLastErrorText_1);
}

// outOfMemoryQueued
// file logger.h line 103
extern void outOfMemoryQueued(const signed int *context, signed int id)
{
  const signed int *return_value_getLastErrorText_1;
  return_value_getLastErrorText_1=getLastErrorText();
  _tprintf(L"Out of memory (%s%02d). %s\n", context, id, return_value_getLastErrorText_1);
  const signed int *return_value_getLastErrorText_2;
  return_value_getLastErrorText_2=getLastErrorText();
  log_printf_queue(-1, -1, 6, L"Out of memory (%s%02d). %s", context, id, return_value_getLastErrorText_2);
}

// pauseThread
// file logger.c line 2094
void pauseThread(signed int pauseTime)
{
  signed int i;
  if(pauseTime >= 1)
  {
    i = 0;
    for( ; !(i >= pauseTime); i = i + 1)
      logSleep(1000);
  }

  else
    while((_Bool)1)
      logSleep(1000);
}

// preparePrintBuffer
// file logger.c line 1270
signed int * preparePrintBuffer(unsigned long int reqSize)
{
  if(threadPrintBuffer == ((signed int *)NULL))
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(signed int) /*4ul*/  * reqSize);
    threadPrintBuffer = (signed int *)return_value_malloc_1;
    if(threadPrintBuffer == ((signed int *)NULL))
    {
      _tprintf(L"Out of memory in logging code (%s)\n", (const void *)L"PPB1");
      threadPrintBufferSize = (unsigned long int)0;
      return (signed int *)(void *)0;
    }

    threadPrintBufferSize = reqSize;
  }

  else
    if(!(threadPrintBufferSize >= reqSize))
    {
      free((void *)threadPrintBuffer);
      void *return_value_malloc_2;
      return_value_malloc_2=malloc(sizeof(signed int) /*4ul*/  * reqSize);
      threadPrintBuffer = (signed int *)return_value_malloc_2;
      if(threadPrintBuffer == ((signed int *)NULL))
      {
        _tprintf(L"Out of memory in logging code (%s)\n", (const void *)L"PPB2");
        threadPrintBufferSize = (unsigned long int)0;
        return (signed int *)(void *)0;
      }

      threadPrintBufferSize = reqSize;
    }

  return threadPrintBuffer;
}

// prepareProperty
// file property.c line 75
void prepareProperty(struct Properties *properties, struct Property *property, signed int warnUndefinedVars)
{
  signed int *oldValue;
  signed int *return_value_wcsstr_4;
  return_value_wcsstr_4=wcsstr(property->value, L"%");
  if(!(return_value_wcsstr_4 == ((signed int *)NULL)))
  {
    unsigned long int return_value_wcslen_1;
    return_value_wcslen_1=wcslen(property->value);
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_1 + (unsigned long int)1));
    oldValue = (signed int *)return_value_malloc_2;
    if(oldValue == ((signed int *)NULL))
      outOfMemory(L"PP", 1);

    else
    {
      unsigned long int return_value_wcslen_3;
      return_value_wcslen_3=wcslen(property->value);
      wcsncpy(oldValue, property->value, return_value_wcslen_3 + (unsigned long int)1);
      setInnerProperty(properties, property, oldValue, warnUndefinedVars);
      free((void *)oldValue);
    }
  }

}

// propIntMax
// file property.h line 288
extern signed int propIntMax(signed int value1, signed int value2)
{
  if(!(value2 >= value1))
    return value1;

  else
    return value2;
}

// propIntMin
// file property.h line 283
extern signed int propIntMin(signed int value1, signed int value2)
{
  if(!(value1 >= value2))
    return value1;

  else
    return value2;
}

// protocolClosePipe
// file wrapper.c line 1751
void protocolClosePipe()
{
  unsigned long int pipeNameLen;
  signed int *pipeName;
  pipeNameLen = (unsigned long int)(12 + 10 + 1 + 10 + 3);
  if(!(protocolActiveServerPipeConnected == 0))
  {
    if(!(wrapperData->isDebugging == 0))
      log_printf(-2, 1, L"Closing backend pipe.");

    signed int return_value_close_2;
    return_value_close_2=close(protocolActiveServerPipeIn);
    if(return_value_close_2 == -1)
    {
      const signed int *return_value_getLastErrorText_1;
      return_value_getLastErrorText_1=getLastErrorText();
      log_printf(-2, 5, L"Failed to close backend pipe: %s", return_value_getLastErrorText_1);
    }

    signed int return_value_close_4;
    return_value_close_4=close(protocolActiveServerPipeOut);
    if(return_value_close_4 == -1)
    {
      const signed int *return_value_getLastErrorText_3;
      return_value_getLastErrorText_3=getLastErrorText();
      log_printf(-2, 5, L"Failed to close backend pipe: %s", return_value_getLastErrorText_3);
    }

    void *return_value_malloc_5;
    return_value_malloc_5=malloc(sizeof(signed int) /*4ul*/  * (pipeNameLen + (unsigned long int)1));
    pipeName = (signed int *)return_value_malloc_5;
    if(pipeName == ((signed int *)NULL))
    {
      outOfMemory(L"PCP", 1);
      goto __CPROVER_DUMP_L6;
    }

    _sntprintf(pipeName, pipeNameLen, L"/tmp/wrapper-%d-%d-in", wrapperData->wrapperPID, wrapperData->jvmRestarts);
    _tunlink(pipeName);
    _sntprintf(pipeName, pipeNameLen, L"/tmp/wrapper-%d-%d-out", wrapperData->wrapperPID, wrapperData->jvmRestarts);
    _tunlink(pipeName);
    protocolActiveServerPipeConnected = 0;
    protocolActiveServerPipeStarted = 0;
    protocolActiveServerPipeIn = -1;
    protocolActiveServerPipeOut = -1;
  }


__CPROVER_DUMP_L6:
  ;
}

// protocolCloseSocket
// file wrapper.c line 1799
void protocolCloseSocket()
{
  signed int rc;
  if(!(protocolActiveBackendSD == -1))
  {
    if(!(wrapperData->isDebugging == 0))
      log_printf(-2, 1, L"Closing backend socket.");

    rc=close(protocolActiveBackendSD);
    if(rc == -1)
    {
      if(!(wrapperData->isDebugging == 0))
      {
        signed int return_value_wrapperGetLastError_1;
        return_value_wrapperGetLastError_1=wrapperGetLastError();
        log_printf(-2, 1, L"socket close failed. (%d)", return_value_wrapperGetLastError_1);
      }

    }

    protocolActiveBackendSD = -1;
  }

}

// protocolOpen
// file wrapper.c line 1741
void protocolOpen()
{
  if(wrapperData->backendType == 0x04)
    protocolOpenPipe();

  else
    if(wrapperData->backendType == 0x02)
      protocolOpenSocket(0);

    else
      protocolOpenSocket(-1);
}

// protocolOpenPipe
// file wrapper.c line 1533
void protocolOpenPipe()
{
  unsigned long int pipeNameLen;
  signed int *pipeName;
  pipeNameLen = (unsigned long int)(12 + 10 + 1 + 10 + 3);
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(signed int) /*4ul*/  * (pipeNameLen + (unsigned long int)1));
  pipeName = (signed int *)return_value_malloc_1;
  if(pipeName == ((signed int *)NULL))
    outOfMemory(L"PSSP", 1);

  else
  {
    _sntprintf(pipeName, pipeNameLen, L"/tmp/wrapper-%d-%d-out", wrapperData->wrapperPID, wrapperData->jvmRestarts);
    protocolActiveServerPipeOut=_topen(pipeName, 01 | 04000, (unsigned int)(0200 | 0400));
    if(protocolActiveServerPipeOut == -1)
      free((void *)pipeName);

    else
    {
      _sntprintf(pipeName, pipeNameLen, L"/tmp/wrapper-%d-%d-in", wrapperData->wrapperPID, wrapperData->jvmRestarts);
      protocolActiveServerPipeIn=_topen(pipeName, 00 | 04000, (unsigned int)0400);
      if(protocolActiveServerPipeIn == -1)
        free((void *)pipeName);

      else
      {
        free((void *)pipeName);
        protocolActiveServerPipeConnected = -1;
      }
    }
  }
}

// protocolOpenSocket
// file wrapper.c line 1582
void protocolOpenSocket(signed int IPv4)
{
  struct sockaddr_in6 addr_srv6;
  struct sockaddr_in addr_srv4;
  signed int rc;
  signed int *socketSource;
  signed int req;
  unsigned int addr_srv_len;
  signed int newBackendSD = -1;
  char straddr[256l] = { (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  signed int port;
  unsigned short int tmp_statement_expression_5;
  unsigned short int tmp_statement_expression_6;
  unsigned short int tmp_statement_expression_8;
  unsigned short int tmp_statement_expression_9;
  if(!(protocolActiveServerSD == -1))
  {
    if(!(IPv4 == 0))
      addr_srv_len = (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ ;

    else
      addr_srv_len = (unsigned int)sizeof(struct sockaddr_in6) /*28ul*/ ;
    if(!(IPv4 == 0))
      newBackendSD=accept(protocolActiveServerSD, (struct sockaddr *)&addr_srv4, &addr_srv_len);

    else
      newBackendSD=accept(protocolActiveServerSD, (struct sockaddr *)&addr_srv6, &addr_srv_len);
    if(newBackendSD == -1)
    {
      rc=wrapperGetLastError();
      if(rc == 11)
        goto __CPROVER_DUMP_L30;

      if(!(wrapperData->isDebugging == 0))
      {
        const signed int *return_value_getLastErrorText_1;
        return_value_getLastErrorText_1=getLastErrorText();
        log_printf(-2, 1, L"socket creation failed. (%s)", return_value_getLastErrorText_1);
      }

    }

    else
    {
      if(!(IPv4 == 0))
        inet_ntop(2, (const void *)&addr_srv4.sin_addr, straddr, (unsigned int)sizeof(char [256l]) /*256ul*/ );

      else
        inet_ntop(10, (const void *)&addr_srv6.sin6_addr, straddr, (unsigned int)sizeof(char [256l]) /*256ul*/ );
      unsigned long int return_value_mbstowcs_2;
      return_value_mbstowcs_2=mbstowcs((signed int *)(void *)0, straddr, (unsigned long int)0);
      req = (signed int)return_value_mbstowcs_2;
      if((unsigned long int)req == 18446744073709551615ul)
      {
        const signed int *return_value_getLastErrorText_3;
        return_value_getLastErrorText_3=getLastErrorText();
        log_printf(-2, 4, L"Invalid multibyte sequence in %s: %s", (const void *)L"network address", return_value_getLastErrorText_3);
        goto __CPROVER_DUMP_L30;
      }

      void *return_value_malloc_4;
      return_value_malloc_4=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(req + 1));
      socketSource = (signed int *)return_value_malloc_4;
      if(socketSource == ((signed int *)NULL))
        outOfMemory(L"PO", 2);

      else
      {
        mbstowcs(socketSource, straddr, (unsigned long int)(req + 1));
        socketSource[(signed long int)req] = 0;
        if(!(protocolActiveBackendSD == -1))
        {
          if(!(IPv4 == 0))
          {
            unsigned short int __v;
            unsigned short int __x = (unsigned short int)addr_srv4.sin_port;
            asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
            tmp_statement_expression_5 = __v;
            port = (signed int)tmp_statement_expression_5;
          }

          else
          {
            unsigned short int protocolOpenSocket__1__11__2__1____v;
            unsigned short int protocolOpenSocket__1__11__2__1____x = (unsigned short int)addr_srv6.sin6_port;
            asm("rorw _8, %w0" : "=r"(protocolOpenSocket__1__11__2__1____v) : "0"(protocolOpenSocket__1__11__2__1____x) : "cc");
            tmp_statement_expression_6 = protocolOpenSocket__1__11__2__1____v;
            port = (signed int)tmp_statement_expression_6;
          }
          log_printf(-2, 4, L"Ignoring unexpected backend socket connection from %s on port %d", socketSource, port);
          free((void *)socketSource);
          rc=close(newBackendSD);
          if(rc == -1)
          {
            if(!(wrapperData->isDebugging == 0))
            {
              signed int return_value_wrapperGetLastError_7;
              return_value_wrapperGetLastError_7=wrapperGetLastError();
              log_printf(-2, 1, L"socket close failed. (%d)", return_value_wrapperGetLastError_7);
            }

          }

        }

        else
        {
          protocolActiveBackendSD = newBackendSD;
          if(!(wrapperData->isDebugging == 0))
          {
            if(!(IPv4 == 0))
            {
              unsigned short int protocolOpenSocket__1__12__1__1____v;
              unsigned short int protocolOpenSocket__1__12__1__1____x = (unsigned short int)addr_srv4.sin_port;
              asm("rorw _8, %w0" : "=r"(protocolOpenSocket__1__12__1__1____v) : "0"(protocolOpenSocket__1__12__1__1____x) : "cc");
              tmp_statement_expression_8 = protocolOpenSocket__1__12__1__1____v;
              port = (signed int)tmp_statement_expression_8;
            }

            else
            {
              unsigned short int protocolOpenSocket__1__12__2__1____v;
              unsigned short int protocolOpenSocket__1__12__2__1____x = (unsigned short int)addr_srv6.sin6_port;
              asm("rorw _8, %w0" : "=r"(protocolOpenSocket__1__12__2__1____v) : "0"(protocolOpenSocket__1__12__2__1____x) : "cc");
              tmp_statement_expression_9 = protocolOpenSocket__1__12__2__1____v;
              port = (signed int)tmp_statement_expression_9;
            }
            log_printf(-2, 2, L"accepted a socket from %s on port %d", socketSource, port);
          }

          free((void *)socketSource);
          rc=fcntl(protocolActiveBackendSD, 4, 04000);
          if(rc == -1)
          {
            if(!(wrapperData->isDebugging == 0))
            {
              const signed int *return_value_getLastErrorText_10;
              return_value_getLastErrorText_10=getLastErrorText();
              log_printf(-2, 1, L"socket ioctlsocket failed. (%s)", return_value_getLastErrorText_10);
            }

            wrapperProtocolClose();
          }

          else
            protocolStopServer();
        }
      }
    }
  }


__CPROVER_DUMP_L30:
  ;
}

// protocolStartServer
// file wrapper.c line 1465
void protocolStartServer()
{
  signed int useFallbackAuto = 0;
  signed int useFallbackSocket = 0;
  signed int result;
  if(wrapperData->backendType == 7)
    useFallbackAuto = -1;

  if(wrapperData->backendType == 3)
    useFallbackSocket = -1;

  if(!((0x01 & wrapperData->backendType) == 0))
  {
    result=protocolStartServerSocket(-1);
    if(result == 99 && (!(useFallbackAuto == 0) || !(useFallbackSocket == 0)))
    {
      log_printf(-1, 1, L"Failed to start server using socket IPv4, will try with socket IPv6...");
      goto __CPROVER_DUMP_L4;
    }

    if(!(result == 0))
      goto __CPROVER_DUMP_L4;

    wrapperData->backendType = 0x01;
  }

  else
  {

  __CPROVER_DUMP_L4:
    ;
    if(!((0x02 & wrapperData->backendType) == 0))
    {
      result=protocolStartServerSocket(0);
      if(result == 99 && !(useFallbackAuto == 0))
      {
        log_printf(-1, 1, L"Failed to start server socket IPv6, will try with Pipe...");
        goto __CPROVER_DUMP_L6;
      }

      if(!(result == 0))
        goto __CPROVER_DUMP_L6;

      wrapperData->backendType = 0x02;
    }

    else
    {

    __CPROVER_DUMP_L6:
      ;
      if(!((0x04 & wrapperData->backendType) == 0))
      {
        result=protocolStartServerPipe();
        if(result == 99 && !(useFallbackAuto == 0))
        {
          log_printf(-1, 1, L"Failed to start server socket when trying with socket (IPv4 and IPv6) and pipe...");
          goto __CPROVER_DUMP_L8;
        }

        if(!(result == 0))
          goto __CPROVER_DUMP_L8;

        wrapperData->backendType = 0x04;
      }

      else
      {

      __CPROVER_DUMP_L8:
        ;
        log_printf(-1, 5, L"Unable to start server socket.");
        if(useFallbackAuto == 0)
        {
          log_printf(-1, 7, L"You can set wrapper.backend.type=AUTO, so the wrapper will try to connect to the JVM using ipv4, ipv6 and pipe.");
          if(useFallbackSocket == 0)
            log_printf(-1, 7, L"You can set wrapper.backend.type=SOCKET, so the wrapper will try to connect to the JVM using ipv4 and ipv6.");

        }

        goto __CPROVER_DUMP_L10;
      }
    }
  }

__CPROVER_DUMP_L10:
  ;
}

// protocolStartServerPipe
// file wrapper.c line 1066
signed int protocolStartServerPipe()
{
  unsigned long int pipeNameLen;
  signed int *pipeName;
  pipeNameLen = (unsigned long int)(12 + 10 + 1 + 10 + 3);
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(signed int) /*4ul*/  * (pipeNameLen + (unsigned long int)1));
  pipeName = (signed int *)return_value_malloc_1;
  if(pipeName == ((signed int *)NULL))
  {
    outOfMemory(L"PSSP", 1);
    return -1;
  }

  else
  {
    _sntprintf(pipeName, pipeNameLen, L"/tmp/wrapper-%d-%d-out", wrapperData->wrapperPID, wrapperData->jvmRestarts + 1);
    signed int return_value__tmkfifo_3;
    return_value__tmkfifo_3=_tmkfifo(pipeName, (unsigned int)(0200 | 0400 | 0400 >> 3 | (0400 >> 3) >> 3));
    if(return_value__tmkfifo_3 == -1)
    {
      const signed int *return_value_getLastErrorText_2;
      return_value_getLastErrorText_2=getLastErrorText();
      log_printf(-2, 5, L"Unable to create backend pipe: %s", return_value_getLastErrorText_2);
      free((void *)pipeName);
      return -1;
    }

    if(!(wrapperData->isDebugging == 0))
      log_printf(-2, 1, L"server listening on pipe %s.", pipeName);

    _sntprintf(pipeName, pipeNameLen, L"/tmp/wrapper-%d-%d-in", wrapperData->wrapperPID, wrapperData->jvmRestarts + 1);
    signed int return_value__tmkfifo_5;
    return_value__tmkfifo_5=_tmkfifo(pipeName, (unsigned int)(0200 | 0400 | 0400 >> 3 | (0400 >> 3) >> 3));
    if(return_value__tmkfifo_5 == -1)
    {
      const signed int *return_value_getLastErrorText_4;
      return_value_getLastErrorText_4=getLastErrorText();
      log_printf(-2, 5, L"Unable to create backend pipe: %s", return_value_getLastErrorText_4);
      free((void *)pipeName);
      return -1;
    }

    if(!(wrapperData->isDebugging == 0))
      log_printf(-2, 1, L"server listening on pipe %s.", pipeName);

    protocolActiveServerPipeStarted = -1;
    free((void *)pipeName);
    return 0;
  }
}

// protocolStartServerSocket
// file wrapper.c line 1231
signed int protocolStartServerSocket(signed int IPv4)
{
  struct sockaddr_in addr_srv4;
  struct sockaddr_in6 addr_srv6;
  signed int rc;
  signed int port;
  signed int fixedPort;
  char *tempAddress;
  unsigned long int len;
  if(!(IPv4 == 0))
    protocolActiveServerSD=socket(2, 1, 0);

  else
    protocolActiveServerSD=socket(10, 1, 0);
  if(protocolActiveServerSD == -1)
  {
    const signed int *return_value_getLastErrorText_1;
    return_value_getLastErrorText_1=getLastErrorText();
    log_printf(-2, 5, L"server socket creation failed. (%s)", return_value_getLastErrorText_1);
    return 99;
  }

  rc=fcntl(protocolActiveServerSD, 4, 04000);
  if(rc == -1)
  {
    const signed int *return_value_getLastErrorText_2;
    return_value_getLastErrorText_2=getLastErrorText();
    log_printf(-2, 5, L"server socket ioctlsocket failed. (%s)", return_value_getLastErrorText_2);
    wrapperProtocolClose();
    protocolStopServer();
    return -1;
  }

  port = wrapperData->port;
  if(!(port >= 1))
  {
    port = wrapperData->portMin;
    fixedPort = 0;
  }

  else
    fixedPort = -1;

tryagain:
  ;
  unsigned short int tmp_statement_expression_3;
  unsigned short int tmp_statement_expression_4;
  while((_Bool)1)
  {
    if(!(IPv4 == 0))
    {
      memset((void *)&addr_srv4, 0, sizeof(struct sockaddr_in) /*16ul*/ );
      addr_srv4.sin_family = (unsigned short int)2;
      unsigned short int protocolStartServerSocket__1__7__1____v;
      unsigned short int protocolStartServerSocket__1__7__1____x = (unsigned short int)port;
      asm("rorw _8, %w0" : "=r"(protocolStartServerSocket__1__7__1____v) : "0"(protocolStartServerSocket__1__7__1____x) : "cc");
      tmp_statement_expression_3 = protocolStartServerSocket__1__7__1____v;
      addr_srv4.sin_port = tmp_statement_expression_3;
    }

    else
    {
      memset((void *)&addr_srv6, 0, sizeof(struct sockaddr_in6) /*28ul*/ );
      addr_srv6.sin6_family = (unsigned short int)10;
      addr_srv6.sin6_flowinfo = (unsigned int)0;
      unsigned short int __v;
      unsigned short int __x = (unsigned short int)port;
      asm("rorw _8, %w0" : "=r"(__v) : "0"(__x) : "cc");
      tmp_statement_expression_4 = __v;
      addr_srv6.sin6_port = tmp_statement_expression_4;
    }
    if(wrapperData->portAddress == ((signed int *)NULL))
    {
      if(!(IPv4 == 0))
        addr_srv4.sin_addr.s_addr=inet_addr("127.0.0.1");

      else
        addr_srv6.sin6_addr = LOOPBACK_IPv6;
    }

    else
    {
      len=wcstombs((char *)(void *)0, wrapperData->portAddress, (unsigned long int)0);
      if(len == 18446744073709551615ul)
      {
        const signed int *return_value_getLastErrorText_5;
        return_value_getLastErrorText_5=getLastErrorText();
        log_printf(-2, 4, L"Invalid multibyte sequence in port address \"%s\" : %s", wrapperData->portAddress, return_value_getLastErrorText_5);
        return -1;
      }

      void *return_value_malloc_6;
      return_value_malloc_6=malloc(len + (unsigned long int)1);
      tempAddress = (char *)return_value_malloc_6;
      if(tempAddress == ((char *)NULL))
      {
        outOfMemory(L"PSSS", 2);
        return -1;
      }

      wcstombs(tempAddress, wrapperData->portAddress, len + (unsigned long int)1);
      if(!(IPv4 == 0))
        inet_pton(2, (const char *)tempAddress, (void *)&addr_srv4.sin_addr);

      else
        inet_pton(10, (const char *)tempAddress, (void *)&addr_srv6.sin6_addr);
      free((void *)tempAddress);
    }
    if(!(IPv4 == 0))
      rc=bind(protocolActiveServerSD, (struct sockaddr *)&addr_srv4, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );

    else
      rc=bind(protocolActiveServerSD, (struct sockaddr *)&addr_srv6, (unsigned int)sizeof(struct sockaddr_in6) /*28ul*/ );
    if(!(rc == -1))
      goto __CPROVER_DUMP_L27;

    rc=wrapperGetLastError();
    if(!(rc == 13) && !(rc == 98))
      break;

    if(!(fixedPort == 0))
    {
      port = wrapperData->portMin;
      fixedPort = 0;
      goto tryagain;
      break;
    }

    port = port + 1;
    if(!(wrapperData->portMax >= port))
      break;

  }
  if(!(wrapperData->port >= 1))
  {
    const signed int *return_value_getLastErrorText_7;
    return_value_getLastErrorText_7=getLastErrorText();
    log_printf(-2, 6, L"unable to bind listener to any port in the range %d to %d. (%s)", wrapperData->portMin, wrapperData->portMax, return_value_getLastErrorText_7);
  }

  else
  {
    const signed int *return_value_getLastErrorText_8;
    return_value_getLastErrorText_8=getLastErrorText();
    log_printf(-2, 6, L"unable to bind listener port %d, or any port in the range %d to %d. (%s)", wrapperData->port, wrapperData->portMin, wrapperData->portMax, return_value_getLastErrorText_8);
  }
  signed int return_value_getLastError_9;
  return_value_getLastError_9=getLastError();
  wrapperStopProcess(return_value_getLastError_9, -1);
  wrapperProtocolClose();
  protocolStopServer();
  wrapperData->exitRequested = -1;
  wrapperData->restartRequested = 0;
  return -1;

__CPROVER_DUMP_L27:
  ;
  if(wrapperData->port >= 1)
  {
    if(!(port == wrapperData->port))
      log_printf(-2, 2, L"port %d already in use, using port %d instead.", wrapperData->port, port);

  }

  wrapperData->actualPort = port;
  if(!(wrapperData->isDebugging == 0))
    log_printf(-2, 1, L"server listening on port %d.", wrapperData->actualPort);

  rc=listen(protocolActiveServerSD, 1);
  if(rc == -1)
  {
    signed int return_value_wrapperGetLastError_10;
    return_value_wrapperGetLastError_10=wrapperGetLastError();
    log_printf(-2, 5, L"server socket listen failed. (%d)", return_value_wrapperGetLastError_10);
    wrapperProtocolClose();
    protocolStopServer();
    return -1;
  }

  return 0;
}

// protocolStopServer
// file wrapper.c line 1056
void protocolStopServer()
{
  if(wrapperData->backendType == 0x04)
    protocolStopServerPipe();

  else
    protocolStopServerSocket();
}

// protocolStopServerPipe
// file wrapper.c line 1008
void protocolStopServerPipe()
{
  if(!(protocolActiveServerPipeIn == -1))
  {
    close(protocolActiveServerPipeIn);
    protocolActiveServerPipeIn = -1;
    log_printf(-2, 2, L"backend pipe closed.");
  }

  if(!(protocolActiveServerPipeOut == -1))
  {
    close(protocolActiveServerPipeOut);
    protocolActiveServerPipeOut = -1;
    log_printf(-2, 2, L"backend pipe closed.");
  }

}

// protocolStopServerSocket
// file wrapper.c line 1032
void protocolStopServerSocket()
{
  signed int rc;
  if(!(protocolActiveServerSD == -1))
  {
    if(!(wrapperData->isDebugging == 0))
      log_printf(-2, 1, L"closing backend server.");

    rc=close(protocolActiveServerSD);
    if(rc == -1)
    {
      if(!(wrapperData->isDebugging == 0))
      {
        signed int return_value_wrapperGetLastError_1;
        return_value_wrapperGetLastError_1=wrapperGetLastError();
        log_printf(-2, 1, L"server socket close failed. (%d)", return_value_wrapperGetLastError_1);
      }

    }

    protocolActiveServerSD = -1;
  }

  wrapperData->actualPort = 0;
}

// pthread_equal
// file /usr/include/pthread.h line 1155
static inline signed int pthread_equal(unsigned long int __thread1, unsigned long int __thread2)
{
  return (signed int)(__thread1 == __thread2);
}

// pthread_equal_link1
// file /usr/include/pthread.h line 1155
static inline signed int pthread_equal_link1(unsigned long int __thread1_link1, unsigned long int __thread2_link1)
{
  return (signed int)(__thread1_link1 == __thread2_link1);
}

// registerSigAction
// file wrapper_unix.c line 645
signed int registerSigAction(signed int sigNum, void (*sigAction)(signed int, struct anonymous_3 *, void *))
{
  struct sigaction newAct;
  newAct.__sigaction_handler.sa_sigaction = sigAction;
  sigemptyset(&newAct.sa_mask);
  newAct.sa_flags = 4;
  signed int return_value_sigaction_2;
  return_value_sigaction_2=sigaction(sigNum, &newAct, (struct sigaction *)(void *)0);
  if(!(return_value_sigaction_2 == 0))
  {
    const signed int *return_value_getLastErrorText_1;
    return_value_getLastErrorText_1=getLastErrorText();
    log_printf(-1, 6, L"Unable to register signal handler for signal %d.  %s", sigNum, return_value_getLastErrorText_1);
    return 1;
  }

  return 0;
}

// registerSyslogMessageFile
// file logger.h line 254
extern signed int registerSyslogMessageFile()
{
  return 0;
}

// releaseLoggingMutex
// file logger.c line 1057
signed int releaseLoggingMutex()
{
  signed int return_value_pthread_mutex_unlock_2;
  return_value_pthread_mutex_unlock_2=pthread_mutex_unlock(&log_printfMutex);
  if(!(return_value_pthread_mutex_unlock_2 == 0))
  {
    const signed int *return_value_getLastErrorText_1;
    return_value_getLastErrorText_1=getLastErrorText();
    _tprintf(L"Failed to unlock the Logging mutex. %s\n", return_value_getLastErrorText_1);
    return -1;
  }

  return 0;
}

// releaseProtocolMutex
// file wrapper.c line 1995
signed int releaseProtocolMutex()
{
  signed int return_value_pthread_mutex_unlock_2;
  return_value_pthread_mutex_unlock_2=pthread_mutex_unlock(&protocolMutex);
  if(!(return_value_pthread_mutex_unlock_2 == 0))
  {
    const signed int *return_value_getLastErrorText_1;
    return_value_getLastErrorText_1=getLastErrorText();
    _tprintf(L"Failed to unlock the Protocol mutex. %s\n", return_value_getLastErrorText_1);
    return -1;
  }

  return 0;
}

// removeProperty
// file property.c line 619
extern void removeProperty(struct Properties *properties, const signed int *propertyName)
{
  struct Property *property;
  struct Property *next;
  struct Property *previous;
  property=getInnerProperty(properties, propertyName, 0);
  if(!(property == ((struct Property *)NULL)))
  {
    next = property->next;
    previous = property->previous;
    if(next == ((struct Property *)NULL))
      properties->last = previous;

    else
      next->previous = property->previous;
    if(previous == ((struct Property *)NULL))
      properties->first = next;

    else
      previous->next = property->next;
    disposeInnerProperty(property);
  }

}

// replaceStringLongWithShort
// file logger.c line 323
signed int * replaceStringLongWithShort(signed int *string, const signed int *oldToken, const signed int *newToken)
{
  unsigned long int oldLen;
  oldLen=wcslen(oldToken);
  unsigned long int newLen;
  signed int *in = string;
  signed int *out = string;
  if(!(newToken == ((const signed int *)NULL)))
    newLen=wcslen(newToken);

  else
    newLen = (unsigned long int)0;
  if(!(oldLen >= newLen))
    return string;

  else
  {
    while(!(*in == 0))
    {
      signed int return_value_wcsncmp_1;
      return_value_wcsncmp_1=wcsncmp(in, oldToken, oldLen);
      if(return_value_wcsncmp_1 == 0)
      {
        if(newLen >= 1ul)
          wcsncpy(out, newToken, newLen);

        in = in + (signed long int)oldLen;
        out = out + (signed long int)newLen;
      }

      else
      {
        out[(signed long int)0] = in[(signed long int)0];
        in = in + 1l;
        out = out + 1l;
      }
    }
    out[(signed long int)0] = 0;
    return string;
  }
}

// resetDuration
// file logger.h line 258
extern void resetDuration()
{
  struct timeval timevalNow;
  signed long int now;
  signed int nowMillis;
  gettimeofday(&timevalNow, (struct timezone *)(void *)0);
  now = (signed long int)timevalNow.tv_sec;
  nowMillis = (signed int)(timevalNow.tv_usec / (signed long int)1000);
  previousNow = now;
  previousNowMillis = nowMillis;
}

// rollLogs
// file logger.h line 266
extern void rollLogs()
{
  signed int i;
  signed int rollNum[11l];
  struct stat fileStat;
  signed int result;
  signed int return_value_getLastError_3;
  signed int return_value_getLastError_11;
  signed int *return_value___errno_location_10;
  if(!(logFilePath == ((signed int *)NULL)))
  {
    if(!(logfileFP == ((struct _IO_FILE *)NULL)))
    {
      fclose(logfileFP);
      logfileFP = (struct _IO_FILE *)(void *)0;
      currentLogFileName[(signed long int)0] = 0;
    }

    i = 0;
    do
    {
      i = i + 1;
      _sntprintf(rollNum, (unsigned long int)11, L"%d", i);
      generateLogFileName(workLogFileName, currentLogFileNameSize, logFilePath, (const signed int *)(void *)0, rollNum);
      result=_tstat(workLogFileName, &fileStat);
    }
    while(result == 0);
    for( ; i >= 2; i = i - 1)
    {
      unsigned long int return_value_wcslen_1;
      return_value_wcslen_1=wcslen(logFilePath);
      wcsncpy(currentLogFileName, workLogFileName, return_value_wcslen_1 + (unsigned long int)11);
      _sntprintf(rollNum, (unsigned long int)11, L"%d", i - 1);
      generateLogFileName(workLogFileName, currentLogFileNameSize, logFilePath, (const signed int *)(void *)0, rollNum);
      if(logFilePurgePattern == ((signed int *)NULL) && logFileMaxLogFiles >= 1 && !(logFileMaxLogFiles >= i))
      {
        signed int return_value__tremove_6;
        return_value__tremove_6=_tremove(workLogFileName);
        if(!(return_value__tremove_6 == 0))
        {
          signed int return_value_getLastError_4;
          return_value_getLastError_4=getLastError();
          if(!(return_value_getLastError_4 == 2))
          {
            return_value_getLastError_3=getLastError();
            if(!(return_value_getLastError_3 == 3))
            {
              if(rollFailure == 0)
              {
                const signed int *return_value_getLastErrorText_2;
                return_value_getLastErrorText_2=getLastErrorText();
                log_printf_queue(-1, -1, 4, L"Unable to delete old log file: %s (%s)", workLogFileName, return_value_getLastErrorText_2);
              }

              rollFailure = -1;
              generateLogFileName(currentLogFileName, currentLogFileNameSize, logFilePath, (const signed int *)(void *)0, (const signed int *)(void *)0);
              goto __CPROVER_DUMP_L22;
            }

          }

        }

        else
        {
          signed int return_value__tstat_5;
          return_value__tstat_5=_tstat(workLogFileName, &fileStat);
          if(return_value__tstat_5 == 0)
          {
            if(rollFailure == 0)
              log_printf_queue(-1, -1, 4, L"Unable to delete old log file: %s", workLogFileName);

            rollFailure = -1;
            generateLogFileName(currentLogFileName, currentLogFileNameSize, logFilePath, (const signed int *)(void *)0, (const signed int *)(void *)0);
            goto __CPROVER_DUMP_L22;
          }

        }
      }

      else
      {
        signed int return_value__trename_8;
        return_value__trename_8=_trename(workLogFileName, currentLogFileName);
        if(!(return_value__trename_8 == 0))
        {
          if(rollFailure == 0)
          {
            const signed int *return_value_getLastErrorText_7;
            return_value_getLastErrorText_7=getLastErrorText();
            log_printf_queue(-1, -1, 4, L"Unable to rename log file %s to %s. (%s)", workLogFileName, currentLogFileName, return_value_getLastErrorText_7);
          }

          rollFailure = -1;
          generateLogFileName(currentLogFileName, currentLogFileNameSize, logFilePath, (const signed int *)(void *)0, (const signed int *)(void *)0);
          goto __CPROVER_DUMP_L22;
        }

      }
    }
    generateLogFileName(currentLogFileName, currentLogFileNameSize, logFilePath, (const signed int *)(void *)0, (const signed int *)(void *)0);
    signed int return_value__trename_13;
    return_value__trename_13=_trename(currentLogFileName, workLogFileName);
    if(!(return_value__trename_13 == 0))
    {
      if(rollFailure == 0)
      {
        signed int return_value_getLastError_12;
        return_value_getLastError_12=getLastError();
        if(!(return_value_getLastError_12 == 2))
        {
          return_value_getLastError_11=getLastError();
          if(!(return_value_getLastError_11 == 3))
          {
            return_value___errno_location_10=__errno_location();
            if(*return_value___errno_location_10 == 13)
              log_printf_queue(-1, -1, 4, L"Unable to rename log file %s to %s.  File is in use by another application.", currentLogFileName, workLogFileName);

            else
            {
              const signed int *return_value_getLastErrorText_9;
              return_value_getLastErrorText_9=getLastErrorText();
              log_printf_queue(-1, -1, 4, L"Unable to rename log file %s to %s. (%s)", currentLogFileName, workLogFileName, return_value_getLastErrorText_9);
            }
          }

        }

      }

      rollFailure = -1;
      generateLogFileName(currentLogFileName, currentLogFileNameSize, logFilePath, (const signed int *)(void *)0, (const signed int *)(void *)0);
    }

    else
    {
      if(logFileMaxLogFiles >= 1)
      {
        if(!(logFilePurgePattern == ((signed int *)NULL)))
          limitLogFileCount(currentLogFileName, logFilePurgePattern, logFilePurgeSortMode, logFileMaxLogFiles + 1);

      }

      if(rollFailure == -1)
        log_printf_queue(-1, -1, 1, L"Logfile rolling is working again.");

      rollFailure = 0;
      currentLogFileName[(signed long int)0] = 0;
    }
  }


__CPROVER_DUMP_L22:
  ;
}

// safeMemCpy
// file wrapper.c line 3785
void safeMemCpy(char *buffer, unsigned long int target, unsigned long int src, unsigned long int nbyte)
{
  unsigned long int i = (unsigned long int)0;
  for( ; !(i >= nbyte); i = i + 1ul)
    buffer[(signed long int)(target + i)] = buffer[(signed long int)(src + i)];
}

// sendLogFileName
// file wrapper.c line 4065
void sendLogFileName()
{
  signed int *currentLogFilePath;
  currentLogFilePath=getCurrentLogfilePath();
  if(!(currentLogFilePath == ((signed int *)NULL)))
  {
    wrapperProtocolFunction((char)134, currentLogFilePath);
    free((void *)currentLogFilePath);
  }

}

// sendLoginfoMessage
// file logger.c line 2631
void sendLoginfoMessage(signed int source_id, signed int level, const signed int *szBuff)
{
  signed int eventType;
  switch(level)
  {
    case 6:
    {
      eventType = 2;
      break;
    }
    case 5:
    {
      eventType = 3;
      break;
    }
    case 4:

    case 3:
    {
      eventType = 5;
      break;
    }
    case 2:
    {
      eventType = 6;
      break;
    }
    case 1:
    {
      eventType = 7;
      break;
    }
    default:
      eventType = 7;
  }
  openlog(loginfoSourceName, 0x01 | 0x08, currentLogfacilityLevel);
  _tsyslog(eventType, szBuff);
  closelog();
}

// sendProperties
// file wrapper.c line 4080
void sendProperties()
{
  signed int *buffer;
  buffer=linearizeProperties(properties, 9);
  if(!(buffer == ((signed int *)NULL)))
  {
    wrapperProtocolFunction((char)115, buffer);
    free((void *)buffer);
  }

}

// setConsoleErrorToStdErr
// file logger.h line 242
extern void setConsoleErrorToStdErr(signed int toStdErr)
{
  consoleErrorToStdErr = toStdErr;
}

// setConsoleFatalToStdErr
// file logger.h line 241
extern void setConsoleFatalToStdErr(signed int toStdErr)
{
  consoleFatalToStdErr = toStdErr;
}

// setConsoleFlush
// file logger.h line 237
extern void setConsoleFlush(signed int flush)
{
  consoleFlush = flush;
}

// setConsoleLogFormat
// file logger.h line 233
extern void setConsoleLogFormat(const signed int *console_log_format)
{
  signed int *return_value_wcschr_1;
  if(!(console_log_format == ((const signed int *)NULL)))
  {
    wcsncpy(consoleFormat, console_log_format, (unsigned long int)32);
    if(!(logPrintfWarnThreshold >= 1))
    {
      return_value_wcschr_1=wcschr(console_log_format, 71);
      if(!(return_value_wcschr_1 == ((signed int *)NULL)))
        logPrintfWarnThreshold = 99999999;

    }

  }

}

// setConsoleLogLevel
// file logger.h line 236
extern void setConsoleLogLevel(const signed int *console_log_level)
{
  signed int return_value_getLogLevelForName_1;
  return_value_getLogLevelForName_1=getLogLevelForName(console_log_level);
  setConsoleLogLevelInt(return_value_getLogLevelForName_1);
}

// setConsoleLogLevelInt
// file logger.h line 234
extern void setConsoleLogLevelInt(signed int console_log_level)
{
  currentConsoleLevel = console_log_level;
}

// setConsoleWarnToStdErr
// file logger.h line 243
extern void setConsoleWarnToStdErr(signed int toStdErr)
{
  consoleWarnToStdErr = toStdErr;
}

// setEnv
// file property.h line 102
extern signed int setEnv(const signed int *name, const signed int *value, signed int source)
{
  struct EnvSrc **thisEnvSrcRef;
  struct EnvSrc *thisEnvSrc;
  unsigned long int len;
  signed int *nameCopy;
  struct EnvSrc *newEnvSrc;
  signed int cmpRes;
  thisEnvSrcRef = &baseEnvSrc;
  thisEnvSrc = baseEnvSrc;
  unsigned long int return_value_wcslen_1;
  return_value_wcslen_1=wcslen(name);
  len = return_value_wcslen_1 + (unsigned long int)1;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(signed int) /*4ul*/  * len);
  nameCopy = (signed int *)return_value_malloc_2;
  if(nameCopy == ((signed int *)NULL))
  {
    outOfMemory(L"SE", 1);
    return -1;
  }

  else
  {
    _sntprintf(nameCopy, len, L"%s", name);
    while(!(thisEnvSrc == ((struct EnvSrc *)NULL)))
    {
      cmpRes=wcscasecmp(thisEnvSrc->name, name);
      if(cmpRes == 0)
      {
        free((void *)nameCopy);
        thisEnvSrc->source = thisEnvSrc->source | source;
        if(!(source == 1))
        {
          signed int return_value_setEnvInner_3;
          return_value_setEnvInner_3=setEnvInner(name, value);
          return return_value_setEnvInner_3;
        }

        return 0;
      }

      else
        if(cmpRes >= 1)
        {
          void *return_value_malloc_4;
          return_value_malloc_4=malloc(sizeof(struct EnvSrc) /*24ul*/ );
          newEnvSrc = (struct EnvSrc *)return_value_malloc_4;
          if(newEnvSrc == ((struct EnvSrc *)NULL))
          {
            outOfMemory(L"SEV", 2);
            return -1;
          }

          newEnvSrc->source = source;
          newEnvSrc->name = nameCopy;
          newEnvSrc->next = thisEnvSrc;
          *thisEnvSrcRef = newEnvSrc;
          if(!(source == 1))
          {
            signed int return_value_setEnvInner_5;
            return_value_setEnvInner_5=setEnvInner(name, value);
            return return_value_setEnvInner_5;
          }

          return 0;
        }

        else
        {
          thisEnvSrcRef = &thisEnvSrc->next;
          thisEnvSrc = thisEnvSrc->next;
        }
    }
    void *return_value_malloc_6;
    return_value_malloc_6=malloc(sizeof(struct EnvSrc) /*24ul*/ );
    thisEnvSrc = (struct EnvSrc *)return_value_malloc_6;
    if(thisEnvSrc == ((struct EnvSrc *)NULL))
    {
      outOfMemory(L"SEV", 3);
      return -1;
    }

    else
    {
      thisEnvSrc->source = source;
      thisEnvSrc->name = nameCopy;
      thisEnvSrc->next = (struct EnvSrc *)(void *)0;
      *thisEnvSrcRef = thisEnvSrc;
      if(!(source == 1))
      {
        signed int return_value_setEnvInner_7;
        return_value_setEnvInner_7=setEnvInner(name, value);
        return return_value_setEnvInner_7;
      }

      return 0;
    }
  }
}

// setEnvInner
// file property.c line 665
signed int setEnvInner(const signed int *name, const signed int *value)
{
  signed int result = 0;
  signed int *oldVal;
  oldVal=_tgetenv(name);
  _Bool tmp_if_expr_3;
  signed int return_value_wcscmp_2;
  if(value == ((const signed int *)NULL))
  {
    if(!(oldVal == ((signed int *)NULL)))
      _tunsetenv(name);

  }

  else
  {
    if(oldVal == ((signed int *)NULL))
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      return_value_wcscmp_2=wcscmp(oldVal, value);
      tmp_if_expr_3 = return_value_wcscmp_2 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_3)
    {
      signed int return_value__tsetenv_1;
      return_value__tsetenv_1=_tsetenv(name, value, -1);
      if(!(return_value__tsetenv_1 == 0))
      {
        log_printf(-1, 6, L"Unable to set the '%s' environment variable to: %s", name, value);
        result = -1;
      }

    }

  }
  if(!(oldVal == ((signed int *)NULL)))
    free((void *)oldVal);

  return result;
}

// setEscapedProperties
// file property.c line 925
extern void setEscapedProperties(const signed int **propertyNames)
{
  escapedPropertyNames = propertyNames;
}

// setInnerProperty
// file property.c line 427
void setInnerProperty(struct Properties *properties, struct Property *property, const signed int *propertyValue, signed int warnUndefinedVars)
{
  signed int i;
  signed int count;
  signed int *buffer;
  if(!(property->value == ((signed int *)NULL)))
  {
    free((void *)property->value);
    property->value = (signed int *)(void *)0;
  }

  unsigned long int return_value_wcslen_4;
  _Bool tmp_if_expr_7;
  signed int return_value_iswcntrl_6;
  signed int tmp_post_5;
  if(propertyValue == ((const signed int *)NULL))
    property->value = (signed int *)(void *)0;

  else
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc((unsigned long int)16384 * sizeof(signed int) /*4ul*/ );
    buffer = (signed int *)return_value_malloc_1;
    if(!(buffer == ((signed int *)NULL)))
    {
      evaluateEnvironmentVariables(propertyValue, buffer, 16384, warnUndefinedVars, properties->warnedVarMap, properties->logWarningLogLevel);
      unsigned long int return_value_wcslen_2;
      return_value_wcslen_2=wcslen(buffer);
      void *return_value_malloc_3;
      return_value_malloc_3=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_2 + (unsigned long int)1));
      property->value = (signed int *)return_value_malloc_3;
      if(property->value == ((signed int *)NULL))
        outOfMemoryQueued(L"SIP", 1);

      else
      {
        i = 0;
        count = 0;
        do
        {
          return_value_wcslen_4=wcslen(buffer);
          if(i >= (signed int)return_value_wcslen_4)
            break;

          if(buffer[(signed long int)i] == 10)
            tmp_if_expr_7 = (_Bool)1;

          else
          {
            return_value_iswcntrl_6=iswcntrl((unsigned int)buffer[(signed long int)i]);
            tmp_if_expr_7 = !(return_value_iswcntrl_6 != 0) ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_7)
          {
            tmp_post_5 = count;
            count = count + 1;
            property->value[(signed long int)tmp_post_5] = buffer[(signed long int)i];
          }

          i = i + 1;
        }
        while((_Bool)1);
        property->value[(signed long int)count] = 0;
      }
      free((void *)buffer);
    }

    else
      outOfMemoryQueued(L"SIP", 2);
  }
}

// setLogBufferGrowth
// file logger.h line 156
void setLogBufferGrowth(signed int log)
{
  logBufferGrowth = log;
}

// setLogPropertyWarningLogLevel
// file property.h line 278
extern void setLogPropertyWarningLogLevel(struct Properties *properties, signed int logLevel)
{
  properties->logWarningLogLevel = logLevel;
}

// setLogPropertyWarnings
// file property.h line 273
extern void setLogPropertyWarnings(struct Properties *properties, signed int logWarnings)
{
  properties->logWarnings = logWarnings;
}

// setLogWarningThreshold
// file logger.h line 125
extern void setLogWarningThreshold(signed int threshold)
{
  logPrintfWarnThreshold = (threshold < 3600000 ? threshold : 3600000) > 0 ? (threshold < 3600000 ? threshold : 3600000) : 0;
}

// setLogfileAutoClose
// file logger.h line 224
extern void setLogfileAutoClose(signed int autoClose)
{
  autoCloseLogfile = autoClose;
}

// setLogfileAutoFlush
// file logger.h line 221
extern void setLogfileAutoFlush(signed int autoFlush)
{
  autoFlushLogfile = autoFlush;
}

// setLogfileFormat
// file logger.h line 209
extern void setLogfileFormat(const signed int *log_file_format)
{
  signed int *return_value_wcschr_1;
  if(!(log_file_format == ((const signed int *)NULL)))
  {
    wcsncpy(logfileFormat, log_file_format, (unsigned long int)32);
    if(!(logPrintfWarnThreshold >= 1))
    {
      return_value_wcschr_1=wcschr(log_file_format, 71);
      if(!(return_value_wcschr_1 == ((signed int *)NULL)))
        logPrintfWarnThreshold = 99999999;

    }

  }

}

// setLogfileLevel
// file logger.h line 212
extern void setLogfileLevel(const signed int *log_file_level)
{
  signed int return_value_getLogLevelForName_1;
  return_value_getLogLevelForName_1=getLogLevelForName(log_file_level);
  setLogfileLevelInt(return_value_getLogLevelForName_1);
}

// setLogfileLevelInt
// file logger.h line 210
extern void setLogfileLevelInt(signed int log_file_level)
{
  currentLogfileLevel = log_file_level;
}

// setLogfileMaxFileSize
// file logger.h line 213
extern void setLogfileMaxFileSize(const signed int *max_file_size)
{
  signed int multiple;
  signed int i;
  signed int newLength;
  signed int *tmpFileSizeBuff;
  signed int chr;
  unsigned long int return_value_wcslen_3;
  signed int tmp_post_4;
  if(!(max_file_size == ((const signed int *)NULL)))
  {
    unsigned long int return_value_wcslen_1;
    return_value_wcslen_1=wcslen(max_file_size);
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_1 + (unsigned long int)1));
    tmpFileSizeBuff = (signed int *)return_value_malloc_2;
    if(tmpFileSizeBuff == ((signed int *)NULL))
    {
      outOfMemoryQueued(L"SLMFS", 1);
      goto __CPROVER_DUMP_L11;
    }

    multiple = 1;
    newLength = 0;
    i = 0;
    do
    {
      return_value_wcslen_3=wcslen(max_file_size);
      if(i >= (signed int)return_value_wcslen_3)
        break;

      chr = max_file_size[(signed long int)i];
      switch(chr)
      {
        case 107:

        case 75:
        {
          multiple = 1024;
          goto __CPROVER_DUMP_L5;
        }
        case 77:

        case 109:
          multiple = 1048576;
        default:
        {

        __CPROVER_DUMP_L5:
          ;
          if(chr == 45 || chr >= 48 && !(chr >= 58))
          {
            tmp_post_4 = newLength;
            newLength = newLength + 1;
            tmpFileSizeBuff[(signed long int)tmp_post_4] = max_file_size[(signed long int)i];
          }

          i = i + 1;
        }
      }
    }
    while((_Bool)1);
    tmpFileSizeBuff[(signed long int)newLength] = 0;
    signed long int return_value_wcstol_5;
    return_value_wcstol_5=wcstol(tmpFileSizeBuff, (signed int ** restrict )(void *)0, 10);
    logFileMaxSize = (signed int)return_value_wcstol_5;
    if(logFileMaxSize >= 1)
      logFileMaxSize = logFileMaxSize * multiple;

    free((void *)tmpFileSizeBuff);
    tmpFileSizeBuff = (signed int *)(void *)0;
    if(logFileMaxSize >= 1 && !(logFileMaxSize >= 1024))
    {
      log_printf(-1, 4, L"wrapper.logfile.maxsize must be 0 or at least 1024.  Changing to %d.", logFileMaxSize);
      logFileMaxSize = 1024;
    }

  }


__CPROVER_DUMP_L11:
  ;
}

// setLogfileMaxFileSizeInt
// file logger.c line 987
extern void setLogfileMaxFileSizeInt(signed int max_file_size)
{
  logFileMaxSize = max_file_size;
}

// setLogfileMaxLogFiles
// file logger.h line 215
extern void setLogfileMaxLogFiles(signed int max_log_files)
{
  logFileMaxLogFiles = max_log_files;
}

// setLogfilePath
// file logger.h line 177
extern signed int setLogfilePath(const signed int *log_file_path, const signed int *workingDir, signed int preload)
{
  unsigned long int len;
  len=wcslen(log_file_path);
  currentLogFileNameSize = len + (unsigned long int)10 + (unsigned long int)1;
  if(!(logFilePath == ((signed int *)NULL)))
  {
    free((void *)logFilePath);
    free((void *)currentLogFileName);
    free((void *)workLogFileName);
  }

  logFilePath = (signed int *)(void *)0;
  currentLogFileName = (signed int *)(void *)0;
  workLogFileName = (signed int *)(void *)0;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(signed int) /*4ul*/  * (len + (unsigned long int)1));
  logFilePath = (signed int *)return_value_malloc_1;
  if(logFilePath == ((signed int *)NULL))
  {
    outOfMemoryQueued(L"SLP", 1);
    return -1;
  }

  else
  {
    wcsncpy(logFilePath, log_file_path, len + (unsigned long int)1);
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(signed int) /*4ul*/  * currentLogFileNameSize);
    currentLogFileName = (signed int *)return_value_malloc_2;
    if(currentLogFileName == ((signed int *)NULL))
    {
      outOfMemoryQueued(L"SLP", 2);
      free((void *)logFilePath);
      logFilePath = (signed int *)(void *)0;
      return -1;
    }

    else
    {
      currentLogFileName[(signed long int)0] = 0;
      void *return_value_malloc_3;
      return_value_malloc_3=malloc(sizeof(signed int) /*4ul*/  * currentLogFileNameSize);
      workLogFileName = (signed int *)return_value_malloc_3;
      if(workLogFileName == ((signed int *)NULL))
      {
        outOfMemoryQueued(L"SLP", 3);
        free((void *)logFilePath);
        logFilePath = (signed int *)(void *)0;
        free((void *)currentLogFileName);
        currentLogFileNameSize = (unsigned long int)0;
        currentLogFileName = (signed int *)(void *)0;
        return -1;
      }

      else
      {
        workLogFileName[(signed long int)0] = 0;
        return 0;
      }
    }
  }
}

// setLogfilePurgePattern
// file logger.h line 216
extern void setLogfilePurgePattern(const signed int *pattern)
{
  unsigned long int len;
  if(!(logFilePurgePattern == ((signed int *)NULL)))
  {
    free((void *)logFilePurgePattern);
    logFilePurgePattern = (signed int *)(void *)0;
  }

  len=wcslen(pattern);
  if(len >= 1ul)
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(signed int) /*4ul*/  * (len + (unsigned long int)1));
    logFilePurgePattern = (signed int *)return_value_malloc_1;
    if(logFilePurgePattern == ((signed int *)NULL))
    {
      outOfMemoryQueued(L"SLPP", 1);
      goto __CPROVER_DUMP_L4;
    }

    wcsncpy(logFilePurgePattern, pattern, len + (unsigned long int)1);
  }


__CPROVER_DUMP_L4:
  ;
}

// setLogfilePurgeSortMode
// file logger.h line 217
extern void setLogfilePurgeSortMode(signed int sortMode)
{
  logFilePurgeSortMode = sortMode;
}

// setLogfileRollMode
// file logger.h line 206
extern void setLogfileRollMode(signed int log_file_roll_mode)
{
  logFileRollMode = log_file_roll_mode;
}

// setLogfileUmask
// file logger.h line 208
extern void setLogfileUmask(signed int log_file_umask)
{
  logFileUmask = log_file_umask;
}

// setPauseTime
// file logger.h line 149
extern void setPauseTime(signed int pauseTime)
{
  logPauseTime = pauseTime;
}

// setSilentLogLevels
// file logger.c line 599
extern void setSilentLogLevels()
{
  setConsoleLogLevelInt(9);
  setLogfileLevelInt(9);
  setSyslogLevelInt(9);
}

// setSimpleLogLevels
// file logger.h line 135
extern void setSimpleLogLevels()
{
  setConsoleLogFormat(L"M");
  setConsoleLogLevelInt(2);
  setLogfileLevelInt(9);
  setSyslogLevelInt(9);
}

// setSyslogEventSourceName
// file logger.h line 253
extern void setSyslogEventSourceName(const signed int *event_source_name)
{
  unsigned long int size;
  if(!(event_source_name == ((const signed int *)NULL)))
  {
    if(!(loginfoSourceName == defaultLoginfoSourceName))
    {
      if(!(loginfoSourceName == ((char *)NULL)))
        free((void *)loginfoSourceName);

    }

    size=wcstombs((char *)(void *)0, event_source_name, (unsigned long int)0);
    if(size == 18446744073709551615ul)
      goto __CPROVER_DUMP_L6;

    size = size + 1ul;
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(size);
    loginfoSourceName = (char *)return_value_malloc_1;
    if(loginfoSourceName == ((char *)NULL))
    {
      _tprintf(L"Out of memory in logging code (%s)\n", (const void *)L"SSESN");
      loginfoSourceName = defaultLoginfoSourceName;
      goto __CPROVER_DUMP_L6;
    }

    wcstombs(loginfoSourceName, event_source_name, size);
    unsigned long int return_value_strlen_2;
    return_value_strlen_2=strlen(loginfoSourceName);
    if(return_value_strlen_2 >= 33ul)
      loginfoSourceName[(signed long int)32] = (char)0;

  }


__CPROVER_DUMP_L6:
  ;
}

// setSyslogFacility
// file logger.h line 251
extern void setSyslogFacility(const signed int *loginfo_level)
{
  signed int return_value_getLogFacilityForName_1;
  return_value_getLogFacilityForName_1=getLogFacilityForName(loginfo_level);
  setSyslogFacilityInt(return_value_getLogFacilityForName_1);
}

// setSyslogFacilityInt
// file logger.c line 1194
void setSyslogFacilityInt(signed int logfacility_level)
{
  currentLogfacilityLevel = logfacility_level;
}

// setSyslogLevel
// file logger.h line 248
extern void setSyslogLevel(const signed int *loginfo_level)
{
  signed int return_value_getLogLevelForName_1;
  return_value_getLogLevelForName_1=getLogLevelForName(loginfo_level);
  setSyslogLevelInt(return_value_getLogLevelForName_1);
}

// setSyslogLevelInt
// file logger.h line 246
extern void setSyslogLevelInt(signed int loginfo_level)
{
  currentLoginfoLevel = loginfo_level;
}

// setSyslogSplitMessages
// file logger.h line 249
extern void setSyslogSplitMessages(signed int splitMessages)
{
  currentLogSplitMessages = splitMessages;
}

// setUptime
// file logger.h line 265
extern void setUptime(signed int uptime, signed int flipped)
{
  uptimeSeconds = uptime;
  uptimeFlipped = flipped;
}

// setWorkingDir
// file wrapper_unix.c line 1751
signed int setWorkingDir(signed int *app)
{
  signed int *szPath;
  signed int *pos;
  szPath=findPathOf(app, L"Wrapper binary");
  if(szPath == ((signed int *)NULL))
  {
    const signed int *return_value_getLastErrorText_1;
    return_value_getLastErrorText_1=getLastErrorText();
    log_printf(-1, 6, L"Unable to get the path for '%s'-%s", app, return_value_getLastErrorText_1);
    return 1;
  }

  pos=wcsrchr(szPath, 47);
  if(pos == ((signed int *)NULL))
  {
    log_printf(-1, 6, L"Unable to extract path from: %s", szPath);
    free((void *)szPath);
    return 1;
  }

  else
    pos[(signed long int)0] = (signed int)0;
  setEnv(L"WRAPPER_BIN_DIR", szPath, 2);
  signed int return_value_wrapperSetWorkingDir_2;
  return_value_wrapperSetWorkingDir_2=wrapperSetWorkingDir(szPath, -1);
  if(!(return_value_wrapperSetWorkingDir_2 == 0))
  {
    free((void *)szPath);
    return 1;
  }

  else
  {
    free((void *)szPath);
    return 0;
  }
}

// showHelp
// file testsuite.c line 30
static void showHelp(signed int *app)
{
  _tprintf(L"Wrapper testsuite help.\n");
  _tprintf(L"%s <COMMAND>\n", app);
  _tprintf(L"\n");
  _tprintf(L"Commands:\n");
  _tprintf(L"  --basic   : Runs all tests in basic mode.  Only summaries visible.\n");
  _tprintf(L"  --auto    : Runs all tests in automatic mode.  Output visible but results output to file.\n");
  _tprintf(L"              See CUnitAutomated-Results.xml for results.\n");
  _tprintf(L"  --console : Interactive mode.\n");
  _tprintf(L"  --help    : This help.\n");
  _tprintf(L"\n");
}

// showHostIds
// file wrapper.c line 376
extern signed int showHostIds(signed int logLevel)
{
  log_printf(-1, logLevel, L"");
  log_printf(-1, logLevel, L"The Community Edition of the Java Service Wrapper does not implement\nHostIds.");
  log_printf(-1, logLevel, L"");
  log_printf(-1, logLevel, L"If you have requested a trial license, or purchased a license, you\nmay be looking for the Standard or Professional Editions of the Java\nService Wrapper.  They can be downloaded here:");
  log_printf(-1, logLevel, L"  http://wrapper.tanukisoftware.com/download");
  log_printf(-1, logLevel, L"");
  return 0;
}

// sigActionAlarm
// file wrapper_unix.c line 508
void sigActionAlarm(signed int sigNum, struct anonymous_3 *sigInfo, void *na)
{
  unsigned long int threadId;
  descSignal(sigInfo);
  threadId=pthread_self();
  _Bool tmp_if_expr_2;
  signed int return_value_pthread_equal_1;
  if(!(wrapperData->isDebugging == 0))
  {
    if(!(timerThreadSet == 0))
    {
      return_value_pthread_equal_1=pthread_equal(threadId, timerThreadId);
      tmp_if_expr_2 = return_value_pthread_equal_1 != 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_2 = (_Bool)0;
    if(tmp_if_expr_2)
      log_printf_queue(-1, -1, 1, L"Timer thread received an Alarm signal.  Ignoring.");

    else
      log_printf_queue(-1, -1, 1, L"Received an Alarm signal.  Ignoring.");
  }

}

// sigActionChildDeath
// file wrapper_unix.c line 567
void sigActionChildDeath(signed int sigNum, struct anonymous_3 *sigInfo, void *na)
{
  unsigned long int threadId;
  threadId=pthread_self();
  _Bool tmp_if_expr_2;
  signed int return_value_pthread_equal_1;
  if(!(timerThreadSet == 0))
  {
    return_value_pthread_equal_1=pthread_equal(threadId, timerThreadId);
    tmp_if_expr_2 = return_value_pthread_equal_1 != 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_2 = (_Bool)0;
  if(tmp_if_expr_2)
  {
    if(!(wrapperData->isDebugging == 0))
      log_printf_queue(-1, -1, 1, L"Timer thread received a SigChild signal.  Ignoring.");

  }

  else
  {
    descSignal(sigInfo);
    if(!(wrapperData->isDebugging == 0))
      log_printf_queue(-1, -1, 1, L"Received SIGCHLD, checking JVM process status.");

    wrapperData->signalChildTrapped = -1;
  }
}

// sigActionHangup
// file wrapper_unix.c line 609
void sigActionHangup(signed int sigNum, struct anonymous_3 *sigInfo, void *na)
{
  descSignal(sigInfo);
  wrapperData->signalHUPTrapped = -1;
}

// sigActionInterrupt
// file wrapper_unix.c line 532
void sigActionInterrupt(signed int sigNum, struct anonymous_3 *sigInfo, void *na)
{
  descSignal(sigInfo);
  wrapperData->signalInterruptTrapped = -1;
}

// sigActionQuit
// file wrapper_unix.c line 544
void sigActionQuit(signed int sigNum, struct anonymous_3 *sigInfo, void *na)
{
  unsigned long int threadId;
  descSignal(sigInfo);
  threadId=pthread_self();
  _Bool tmp_if_expr_2;
  signed int return_value_pthread_equal_1;
  if(!(timerThreadSet == 0))
  {
    return_value_pthread_equal_1=pthread_equal(threadId, timerThreadId);
    tmp_if_expr_2 = return_value_pthread_equal_1 != 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_2 = (_Bool)0;
  if(tmp_if_expr_2)
  {
    if(!(wrapperData->isDebugging == 0))
      log_printf_queue(-1, -1, 1, L"Timer thread received an Quit signal.  Ignoring.");

  }

  else
    wrapperData->signalQuitTrapped = -1;
}

// sigActionTermination
// file wrapper_unix.c line 597
void sigActionTermination(signed int sigNum, struct anonymous_3 *sigInfo, void *na)
{
  descSignal(sigInfo);
  wrapperData->signalTermTrapped = -1;
}

// sigActionUSR1
// file wrapper_unix.c line 621
void sigActionUSR1(signed int sigNum, struct anonymous_3 *sigInfo, void *na)
{
  descSignal(sigInfo);
  wrapperData->signalUSR1Trapped = -1;
}

// sigActionUSR2
// file wrapper_unix.c line 633
void sigActionUSR2(signed int sigNum, struct anonymous_3 *sigInfo, void *na)
{
  descSignal(sigInfo);
  wrapperData->signalUSR2Trapped = -1;
}

// sortFilesNamesAsc
// file logger_file.c line 193
signed int sortFilesNamesAsc(signed int **files, signed int cnt)
{
  signed int i;
  signed int j;
  signed int *temp;
  signed int cmp;
  i = 0;
  for( ; !(i >= cnt); i = i + 1)
  {
    j = 0;
    for( ; !(j >= cnt + -1); j = j + 1)
    {
      cmp=compareFileNames(files[(signed long int)j], files[(signed long int)(j + 1)]);
      if(!(cmp >= 0))
      {
        temp = files[(signed long int)(j + 1)];
        files[(signed long int)(j + 1)] = files[(signed long int)j];
        files[(signed long int)j] = temp;
      }

    }
  }
  return -1;
}

// sortFilesNamesDec
// file logger_file.c line 212
signed int sortFilesNamesDec(signed int **files, signed int cnt)
{
  signed int i;
  signed int j;
  signed int *temp;
  signed int cmp;
  i = 0;
  for( ; !(i >= cnt); i = i + 1)
  {
    j = 0;
    for( ; !(j >= cnt + -1); j = j + 1)
    {
      cmp=compareFileNames(files[(signed long int)j], files[(signed long int)(j + 1)]);
      if(cmp >= 1)
      {
        temp = files[(signed long int)(j + 1)];
        files[(signed long int)(j + 1)] = files[(signed long int)j];
        files[(signed long int)j] = temp;
      }

    }
  }
  return -1;
}

// sortFilesTimes
// file logger_file.c line 60
signed int sortFilesTimes(signed int **files, signed long int *fileTimes, signed int cnt)
{
  signed int i;
  signed int j;
  signed int *temp;
  signed long int tempTime;
  i = 0;
  for( ; !(i >= cnt); i = i + 1)
  {
    j = 0;
    for( ; !(j >= cnt + -1); j = j + 1)
      if(!(fileTimes[(signed long int)j] >= fileTimes[(signed long int)(1 + j)]))
      {
        temp = files[(signed long int)(j + 1)];
        tempTime = fileTimes[(signed long int)(j + 1)];
        files[(signed long int)(j + 1)] = files[(signed long int)j];
        fileTimes[(signed long int)(j + 1)] = fileTimes[(signed long int)j];
        files[(signed long int)j] = temp;
        fileTimes[(signed long int)j] = tempTime;
      }

  }
  return -1;
}

// sortStringProperties
// file property.c line 1378
void sortStringProperties(unsigned long int *propertyIndices, signed int **propertyNames, signed int **propertyValues, signed int low, signed int high)
{
  signed int i = low;
  signed int j = high;
  signed long int tempIndex;
  signed int *tempName;
  signed int *tempValue;
  unsigned long int x = propertyIndices[(signed long int)((low + high) / 2)];

__CPROVER_DUMP_L1:
  ;
  while((_Bool)1)
  {
    if(!(propertyIndices[(signed long int)i] >= x))
    {
      i = i + 1;
      goto __CPROVER_DUMP_L1;
    }

    for( ; !(x >= propertyIndices[(signed long int)j]); j = j - 1)
      ;
    if(j >= i)
    {
      tempIndex = (signed long int)propertyIndices[(signed long int)i];
      tempName = propertyNames[(signed long int)i];
      tempValue = propertyValues[(signed long int)i];
      propertyIndices[(signed long int)i] = propertyIndices[(signed long int)j];
      propertyNames[(signed long int)i] = propertyNames[(signed long int)j];
      propertyValues[(signed long int)i] = propertyValues[(signed long int)j];
      propertyIndices[(signed long int)j] = (unsigned long int)tempIndex;
      propertyNames[(signed long int)j] = tempName;
      propertyValues[(signed long int)j] = tempValue;
      i = i + 1;
      j = j - 1;
    }

    if(!(j >= i))
      break;

  }
  if(!(low >= j))
    sortStringProperties(propertyIndices, propertyNames, propertyValues, low, j);

  if(!(i >= high))
    sortStringProperties(propertyIndices, propertyNames, propertyValues, i, high);

}

// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf)
{
  signed int return_value___xstat_1;
  return_value___xstat_1=__xstat(1, __path, __statbuf);
  return return_value___xstat_1;
}

// takeSignalAction
// file wrapper_unix.c line 217
void takeSignalAction(signed int sigNum, const signed int *sigName, signed int mode)
{
  const signed int *return_value_wrapperGetRestartProcessMessage_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_11;
  if(!((1 & wrapperData->ignoreSignals) == 0))
    log_printf(-1, 3, L"%s trapped, but ignored.", sigName);

  else
    switch(mode)
    {
      case (signed int)(char)101:
      {
        return_value_wrapperGetRestartProcessMessage_1=wrapperGetRestartProcessMessage();
        log_printf(-1, 3, L"%s trapped.  %s", sigName, return_value_wrapperGetRestartProcessMessage_1);
        wrapperRestartProcess();
        break;
      }
      case (signed int)(char)102:
      {
        if(!(wrapperData->exitRequested == 0))
          tmp_if_expr_2 = (_Bool)1;

        else
          tmp_if_expr_2 = wrapperData->restartRequested != 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_2)
          tmp_if_expr_3 = (_Bool)1;

        else
          tmp_if_expr_3 = wrapperData->jState == 72 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_3)
          tmp_if_expr_4 = (_Bool)1;

        else
          tmp_if_expr_4 = wrapperData->jState == 80 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_4)
          tmp_if_expr_5 = (_Bool)1;

        else
          tmp_if_expr_5 = wrapperData->jState == 81 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_5)
          tmp_if_expr_6 = (_Bool)1;

        else
          tmp_if_expr_6 = wrapperData->jState == 82 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_6)
          tmp_if_expr_7 = (_Bool)1;

        else
          tmp_if_expr_7 = wrapperData->jState == 83 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_7)
          tmp_if_expr_8 = (_Bool)1;

        else
          tmp_if_expr_8 = wrapperData->jState == 84 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_8)
          tmp_if_expr_9 = (_Bool)1;

        else
          tmp_if_expr_9 = wrapperData->jState == 70 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_9)
          tmp_if_expr_10 = (_Bool)1;

        else
          tmp_if_expr_10 = wrapperData->jState == 71 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_10)
        {
          if(!(wrapperData->isForcedShutdownDisabled == 0))
            log_printf(-1, 3, L"%s trapped.  Already shutting down.", sigName);

          else
          {
            log_printf(-1, 3, L"%s trapped.  Forcing immediate shutdown.", sigName);
            wrapperData->requestThreadDumpOnFailedJVMExit = 0;
            wrapperKillProcess();
          }
        }

        else
        {
          log_printf(-1, 3, L"%s trapped.  Shutting down.", sigName);
          wrapperStopProcess(0, -1);
        }
        if(wrapperData->wState == 56)
          tmp_if_expr_11 = (_Bool)1;

        else
          tmp_if_expr_11 = wrapperData->wState == 57 ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr_11)
          wrapperSetWrapperState(56);

        break;
      }
      case (signed int)(char)103:
      {
        if(wrapperData->javaPID >= 1)
        {
          if(!(wrapperData->isDebugging == 0))
            log_printf(-1, 1, L"%s trapped.  Forwarding to JVM process.", sigName);

          signed int return_value_kill_13;
          return_value_kill_13=kill(wrapperData->javaPID, sigNum);
          if(!(return_value_kill_13 == 0))
          {
            const signed int *return_value_getLastErrorText_12;
            return_value_getLastErrorText_12=getLastErrorText();
            log_printf(-1, 4, L"Unable to forward %s signal to JVM process.  %s", sigName, return_value_getLastErrorText_12);
          }

        }

        else
          log_printf(-1, 3, L"%s trapped.  Unable to forward signal to JVM because it is not running.", sigName);
        break;
      }
      default:
        log_printf(-1, 3, L"%s trapped, but ignored.", sigName);
    }
}

// timerRunner
// file wrapper_unix.c line 783
void * timerRunner(void *arg)
{
  unsigned int sysTicks;
  unsigned int lastTickOffset = (unsigned int)0;
  unsigned int tickOffset;
  unsigned int nowTicks;
  signed int offsetDiff;
  signed int first = -1;
  struct anonymous_4 signal_mask;
  signed int rc;
  timerThreadStarted = -1;
  logRegisterThread(3);
  sigemptyset(&signal_mask);
  sigaddset(&signal_mask, 15);
  sigaddset(&signal_mask, 2);
  sigaddset(&signal_mask, 3);
  sigaddset(&signal_mask, 14);
  sigaddset(&signal_mask, 1);
  sigaddset(&signal_mask, 10);
  sigaddset(&signal_mask, 12);
  rc=pthread_sigmask(0, &signal_mask, (struct anonymous_4 *)(void *)0);
  if(!(rc == 0))
    log_printf(-1, 5, L"Could not mask signals for timer thread.");

  if(!(wrapperData->isTickOutputEnabled == 0))
    log_printf(-1, 3, L"Timer thread started.");

  signed int return_value_wrapperLockTickMutex_1;
  unsigned int tmp_post_2;
  signed int return_value_wrapperReleaseTickMutex_3;
  while(stopTimerThread == 0)
  {
    wrapperSleep(100);
    if(!(wrapperData->pauseThreadTimer == 0))
    {
      wrapperPauseThread(wrapperData->pauseThreadTimer, L"timer");
      wrapperData->pauseThreadTimer = 0;
    }

    sysTicks=wrapperGetSystemTicks();
    if(!(wrapperData->useTickMutex == 0))
    {
      return_value_wrapperLockTickMutex_1=wrapperLockTickMutex();
      if(!(return_value_wrapperLockTickMutex_1 == 0))
      {
        timerThreadStopped = -1;
        return (void *)0;
      }

    }

    tmp_post_2 = timerTicks;
    timerTicks = timerTicks + 1u;
    nowTicks = tmp_post_2;
    if(!(wrapperData->useTickMutex == 0))
    {
      return_value_wrapperReleaseTickMutex_3=wrapperReleaseTickMutex();
      if(!(return_value_wrapperReleaseTickMutex_3 == 0))
      {
        timerThreadStopped = -1;
        return (void *)0;
      }

    }

    tickOffset = sysTicks - nowTicks;
    offsetDiff=wrapperGetTickAgeTicks(lastTickOffset, tickOffset);
    if(!(first == 0))
      first = 0;

    else
    {
      if(!(wrapperData->timerSlowThreshold >= offsetDiff))
        log_printf(-1, 2, L"The timer fell behind the system clock by %ldms.", offsetDiff * 100);

      else
        if(!(offsetDiff >= -1 * wrapperData->timerFastThreshold))
          log_printf(-1, 2, L"The system clock fell behind the timer by %ldms.", -1 * offsetDiff * 100);

      if(!(wrapperData->isTickOutputEnabled == 0))
        log_printf(-1, 3, L"    Timer: ticks=0x%08x, system ticks=0x%08x, offset=0x%08x, offsetDiff=0x%08x", nowTicks, sysTicks, tickOffset, offsetDiff);

    }
    lastTickOffset = tickOffset;
  }
  timerThreadStopped = -1;
  if(!(wrapperData->isTickOutputEnabled == 0))
    log_printf(-1, 3, L"Timer thread stopped.");

  return (void *)0;
}

// trim
// file property.c line 888
void trim(const signed int *in, signed int *out)
{
  unsigned long int len;
  unsigned long int first;
  unsigned long int last;
  len=wcslen(in);
  if(len >= 1ul)
  {
    first = (unsigned long int)0;
    last = len - (unsigned long int)1;
    for( ; (_Bool)1; first = first + 1ul)
    {
      if(!(in[(signed long int)first] == 32))
      {
        if(!(in[(signed long int)first] == 9))
          goto __CPROVER_DUMP_L3;

      }

      if(first >= last)
        break;

    }

  __CPROVER_DUMP_L3:
    ;
    for( ; !(first >= last); last = last - 1ul)
      if(!(in[(signed long int)last] == 32))
      {
        if(!(in[(signed long int)last] == 9))
          break;

      }

    len = (last - first) + (unsigned long int)1;
    if(len >= 1ul)
      wcsncpy(out, in + (signed long int)first, len);

  }

  out[(signed long int)len] = 0;
}

// tsEX_clean_suite1
// file test_example.c line 36
signed int tsEX_clean_suite1(void)
{
  return 0;
}

// tsEX_init_suite1
// file test_example.c line 27
signed int tsEX_init_suite1(void)
{
  return 0;
}

// tsEX_suiteExample
// file test_example.c line 54
signed int tsEX_suiteExample()
{
  struct CU_Suite *exampleSuite;
  exampleSuite=CU_add_suite("Example Suite", tsEX_init_suite1, tsEX_clean_suite1);
  if(exampleSuite == ((struct CU_Suite *)NULL))
  {
    enum anonymous_0 return_value_CU_get_error_1;
    return_value_CU_get_error_1=CU_get_error();
    return (signed int)return_value_CU_get_error_1;
  }

  CU_add_test(exampleSuite, "Pass", tsEX_testPass);
  CU_add_test(exampleSuite, "Fail", tsEX_testFail);
  return 0;
}

// tsEX_testFail
// file test_example.c line 50
void tsEX_testFail(void)
{
  CU_assertImplementation((signed int)(0 != 1), (unsigned int)51, "CU_ASSERT_NOT_EQUAL(0,1)", "test_example.c", "", 0);
}

// tsEX_testPass
// file test_example.c line 43
void tsEX_testPass(void)
{
  CU_assertImplementation((signed int)(0 == 0), (unsigned int)44, "CU_ASSERT_EQUAL(0,0)", "test_example.c", "", 0);
}

// tsFLTR_clean_wrapper
// file test_filter.c line 40
signed int tsFLTR_clean_wrapper(void)
{
  disposeLogging();
  return 0;
}

// tsFLTR_dummyLogFileChanged
// file test_filter.c line 26
void tsFLTR_dummyLogFileChanged(const signed int *logFile)
{
  ;
}

// tsFLTR_init_wrapper
// file test_filter.c line 29
signed int tsFLTR_init_wrapper(void)
{
  initLogging(tsFLTR_dummyLogFileChanged);
  logRegisterThread(1);
  setLogfileLevelInt(9);
  setConsoleLogFormat(L"LPM");
  setConsoleLogLevelInt(1);
  setConsoleFlush(-1);
  setSyslogLevelInt(9);
  return 0;
}

// tsFLTR_subTestWrapperWildcardMatch
// file test_filter.c line 45
void tsFLTR_subTestWrapperWildcardMatch(const signed int *pattern, const signed int *text, unsigned long int expectedMinLen, signed int expectedMatch)
{
  unsigned long int minLen;
  signed int matched;
  minLen=wrapperGetMinimumTextLengthForPattern(pattern);
  if(!(minLen == expectedMinLen))
  {
    _sntprintf(tsFLTR_workBuffer, (unsigned long int)4096, L"wrapperGetMinimumTextLengthForPattern(\"%s\") returned %d rather than expected %d.", pattern, minLen, expectedMinLen);
    _tprintf(L"%s\n", (const void *)tsFLTR_workBuffer);
    CU_assertImplementation(0, (unsigned int)53, "CU_FAIL(tsFLTR_workBuffer)", "test_filter.c", "", 0);
  }

  else
  {
    _sntprintf(tsFLTR_workBuffer, (unsigned long int)4096, L"wrapperGetMinimumTextLengthForPattern(\"%s\") returned %d.", pattern, minLen);
    CU_assertImplementation(1, (unsigned int)56, "CU_PASS(tsFLTR_workBuffer)", "test_filter.c", "", 0);
  }
  matched=wrapperWildcardMatch(text, pattern, expectedMinLen);
  int *tmp_if_expr_1;
  int *tmp_if_expr_2;
  int *tmp_if_expr_3;
  if(!(matched == expectedMatch))
  {
    if(!(matched == 0))
      tmp_if_expr_1 = L"TRUE";

    else
      tmp_if_expr_1 = L"FALSE";
    if(!(expectedMatch == 0))
      tmp_if_expr_2 = L"TRUE";

    else
      tmp_if_expr_2 = L"FALSE";
    _sntprintf(tsFLTR_workBuffer, (unsigned long int)4096, L"wrapperWildcardMatch(\"%s\", \"%s\", %d) returned %s rather than expected %s.", text, pattern, expectedMinLen, tmp_if_expr_1, tmp_if_expr_2);
    _tprintf(L"%s\n", (const void *)tsFLTR_workBuffer);
    CU_assertImplementation(0, (unsigned int)64, "CU_FAIL(tsFLTR_workBuffer)", "test_filter.c", "", 0);
  }

  else
  {
    if(!(matched == 0))
      tmp_if_expr_3 = L"TRUE";

    else
      tmp_if_expr_3 = L"FALSE";
    _sntprintf(tsFLTR_workBuffer, (unsigned long int)4096, L"wrapperWildcardMatch(\"%s\", \"%s\", %d) returned %s.", text, pattern, expectedMinLen, tmp_if_expr_3);
    CU_assertImplementation(1, (unsigned int)68, "CU_PASS(tsFLTR_workBuffer)", "test_filter.c", "", 0);
  }
}

// tsFLTR_suiteFilter
// file test_filter.c line 110
signed int tsFLTR_suiteFilter()
{
  struct CU_Suite *filterSuite;
  filterSuite=CU_add_suite("Filter Suite", tsFLTR_init_wrapper, tsFLTR_clean_wrapper);
  if(filterSuite == ((struct CU_Suite *)NULL))
  {
    enum anonymous_0 return_value_CU_get_error_1;
    return_value_CU_get_error_1=CU_get_error();
    return (signed int)return_value_CU_get_error_1;
  }

  CU_add_test(filterSuite, "wrapperWildcardMatch", (void (*)(void))tsFLTR_testWrapperWildcardMatch);
  return 0;
}

// tsFLTR_testWrapperWildcardMatch
// file test_filter.c line 72
void tsFLTR_testWrapperWildcardMatch()
{
  tsFLTR_subTestWrapperWildcardMatch(L"a", L"a", (unsigned long int)1, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"a", L"b", (unsigned long int)1, 0);
  tsFLTR_subTestWrapperWildcardMatch(L"a", L"", (unsigned long int)1, 0);
  tsFLTR_subTestWrapperWildcardMatch(L"a", L"abc", (unsigned long int)1, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"b", L"abc", (unsigned long int)1, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"c", L"abc", (unsigned long int)1, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"d", L"abc", (unsigned long int)1, 0);
  tsFLTR_subTestWrapperWildcardMatch(L"?", L"a", (unsigned long int)1, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"?", L"", (unsigned long int)1, 0);
  tsFLTR_subTestWrapperWildcardMatch(L"*", L"", (unsigned long int)0, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"*", L"a", (unsigned long int)0, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"*", L"abc", (unsigned long int)0, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"*a", L"a", (unsigned long int)1, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"*a", L"abc", (unsigned long int)1, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"*b", L"abc", (unsigned long int)1, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"a*", L"a", (unsigned long int)1, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"a*", L"abc", (unsigned long int)1, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"b*", L"abc", (unsigned long int)1, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"*a*", L"a", (unsigned long int)1, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"*a*", L"abc", (unsigned long int)1, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"*b*", L"abc", (unsigned long int)1, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"HEAD*TAIL", L"This is the HEAD and this is the TAIL.....", (unsigned long int)8, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"HEAD**TAIL", L"This is the HEAD and this is the TAIL.....", (unsigned long int)8, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"*HEAD*TAIL*", L"This is the HEAD and this is the TAIL.....", (unsigned long int)8, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"HEAD*TAIL", L"This is the HEAD and this is the TaIL.....", (unsigned long int)8, 0);
  tsFLTR_subTestWrapperWildcardMatch(L"HEAD**TAIL", L"This is the HEAD and this is the TaIL.....", (unsigned long int)8, 0);
  tsFLTR_subTestWrapperWildcardMatch(L"*HEAD*TAIL*", L"This is the HEAD and this is the TaIL.....", (unsigned long int)8, 0);
  tsFLTR_subTestWrapperWildcardMatch(L"HEAD*TA?L", L"This is the HEAD and this is the TAIL.....", (unsigned long int)8, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"HEAD**TA?L", L"This is the HEAD and this is the TAIL.....", (unsigned long int)8, -1);
  tsFLTR_subTestWrapperWildcardMatch(L"*HEAD*TA?L*", L"This is the HEAD and this is the TAIL.....", (unsigned long int)8, -1);
}

// tsHASH_buildRandomString
// file test_hashmap.c line 55
signed int * tsHASH_buildRandomString(signed int minLen, signed int maxLen)
{
  signed int num;
  signed int len;
  signed int *str;
  signed int i;
  unsigned long int return_value_wcslen_1;
  return_value_wcslen_1=wcslen(tsHASH_randomChars);
  num = (signed int)return_value_wcslen_1;
  len=tsHASH_getRandom(minLen, maxLen);
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(len + 1));
  str = (signed int *)return_value_malloc_2;
  if(str == ((signed int *)NULL))
    return (signed int *)(void *)0;

  else
  {
    i = 0;
    for( ; !(i >= len); i = i + 1)
    {
      signed int return_value_tsHASH_getRandom_3;
      return_value_tsHASH_getRandom_3=tsHASH_getRandom(0, num - 1);
      str[(signed long int)i] = tsHASH_randomChars[(signed long int)return_value_tsHASH_getRandom_3];
    }
    str[(signed long int)len] = 0;
    return str;
  }
}

// tsHASH_buildRandomStringWithTail
// file test_hashmap.c line 87
signed int * tsHASH_buildRandomStringWithTail(signed int minLen, signed int maxLen, signed int tail)
{
  signed int num;
  unsigned long int len;
  unsigned long int strLen;
  signed int *str;
  unsigned long int i;
  signed int tailStr[32l];
  _sntprintf(tailStr, (unsigned long int)32, L"-%d", tail);
  unsigned long int return_value_wcslen_1;
  return_value_wcslen_1=wcslen(tsHASH_randomChars);
  num = (signed int)return_value_wcslen_1;
  signed int return_value_tsHASH_getRandom_2;
  return_value_tsHASH_getRandom_2=tsHASH_getRandom(minLen, maxLen);
  len = (unsigned long int)return_value_tsHASH_getRandom_2;
  unsigned long int return_value_wcslen_3;
  return_value_wcslen_3=wcslen(tailStr);
  strLen = len + return_value_wcslen_3 + (unsigned long int)1;
  void *return_value_malloc_4;
  return_value_malloc_4=malloc(sizeof(signed int) /*4ul*/  * strLen);
  str = (signed int *)return_value_malloc_4;
  if(str == ((signed int *)NULL))
    return (signed int *)(void *)0;

  else
  {
    i = (unsigned long int)0;
    for( ; !(i >= len); i = i + 1ul)
    {
      signed int return_value_tsHASH_getRandom_5;
      return_value_tsHASH_getRandom_5=tsHASH_getRandom(0, num - 1);
      str[(signed long int)i] = tsHASH_randomChars[(signed long int)return_value_tsHASH_getRandom_5];
    }
    str[(signed long int)len] = 0;
    wcsncat(str, tailStr, strLen);
    return str;
  }
}

// tsHASH_freeTCHARArray
// file test_hashmap.c line 121
void tsHASH_freeTCHARArray(signed int **array, signed int len)
{
  signed int i;
  if(!(array == ((signed int **)NULL)))
  {
    i = 0;
    for( ; !(i >= len); i = i + 1)
      if(!(array[(signed long int)i] == ((signed int *)NULL)))
        free((void *)array[(signed long int)i]);

    free((void *)array);
  }

}

// tsHASH_getRandom
// file test_hashmap.c line 27
signed int tsHASH_getRandom(signed int min, signed int max)
{
  signed int num;
  signed int rNum;
  num = (max + 1) - min;
  if(!(num >= 1))
    return min;

  else
  {
    {
      signed int return_value_rand_1;
      return_value_rand_1=rand();
      rNum = (signed int)(((return_value_rand_1 >> 8) * num) / (2147483647 >> 8));
    }
    return min + rNum;
  }
}

// tsHASH_hashMapCommon
// file test_hashmap.c line 135
void tsHASH_hashMapCommon(signed int buckets, signed int valueCount)
{
  struct anonymous_23 *hashMap;
  signed int i;
  signed int **keys = (signed int **)(void *)0;
  signed int **values = (signed int **)(void *)0;
  const signed int *value;
  hashMap=newHashMap(buckets);
  if(valueCount >= 1)
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(signed int *) /*8ul*/  * (unsigned long int)valueCount);
    keys = (signed int **)return_value_malloc_1;
    if(keys == ((signed int **)NULL))
    {
      CU_assertImplementation(0, (unsigned int)147, "CU_FAIL(TEXT(\"Out of memory HMC1\"))", "test_hashmap.c", "", 0);
      freeHashMap(hashMap);
      goto __CPROVER_DUMP_L16;
    }

    memset((void *)keys, 0, sizeof(signed int *) /*8ul*/  * (unsigned long int)valueCount);
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(signed int *) /*8ul*/  * (unsigned long int)valueCount);
    values = (signed int **)return_value_malloc_2;
    if(values == ((signed int **)NULL))
    {
      CU_assertImplementation(0, (unsigned int)155, "CU_FAIL(TEXT(\"Out of memory HMC2\"))", "test_hashmap.c", "", 0);
      tsHASH_freeTCHARArray(keys, valueCount);
      freeHashMap(hashMap);
      goto __CPROVER_DUMP_L16;
    }

    memset((void *)values, 0, sizeof(signed int *) /*8ul*/  * (unsigned long int)valueCount);
    i = 0;
    for( ; !(i >= valueCount); i = i + 1)
    {
      keys[(signed long int)i]=tsHASH_buildRandomStringWithTail(1, 20, i);
      if(keys[(signed long int)i] == ((signed int *)NULL))
      {
        CU_assertImplementation(0, (unsigned int)166, "CU_FAIL(TEXT(\"Out of memory HMC3\"))", "test_hashmap.c", "", 0);
        tsHASH_freeTCHARArray(keys, valueCount);
        tsHASH_freeTCHARArray(values, valueCount);
        freeHashMap(hashMap);
        goto __CPROVER_DUMP_L16;
      }

      values[(signed long int)i]=tsHASH_buildRandomString(1, 255);
      if(values[(signed long int)i] == ((signed int *)NULL))
      {
        CU_assertImplementation(0, (unsigned int)175, "CU_FAIL(TEXT(\"Out of memory HMC3\"))", "test_hashmap.c", "", 0);
        tsHASH_freeTCHARArray(keys, valueCount);
        tsHASH_freeTCHARArray(values, valueCount);
        freeHashMap(hashMap);
        goto __CPROVER_DUMP_L16;
      }

      hashMapPutKWVW(hashMap, keys[(signed long int)i], values[(signed long int)i]);
    }
    i = 0;
    for( ; !(i >= valueCount); i = i + 1)
    {
      value=hashMapGetKWVW(hashMap, keys[(signed long int)i]);
      if(!(value == ((const signed int *)NULL)))
      {
        signed int return_value_wcscmp_3;
        return_value_wcscmp_3=wcscmp(values[(signed long int)i], value);
        if(!(return_value_wcscmp_3 == 0))
        {
          _sntprintf(tsHASH_workBuffer, (unsigned long int)4096, L"hashMapGetKWVW(map, \"%s\") returned \"%s\" rather than expected \"%s\".", keys[(signed long int)i], value, values[(signed long int)i]);
          _tprintf(L"%s\n", (const void *)tsHASH_workBuffer);
          CU_assertImplementation(0, (unsigned int)196, "CU_FAIL(tsHASH_workBuffer)", "test_hashmap.c", "", 0);
        }

        else
        {
          _sntprintf(tsHASH_workBuffer, (unsigned long int)4096, L"hashMapGetKWVW(map, \"%s\") returned \"%s\" as expected.", keys[(signed long int)i], value);
          CU_assertImplementation(1, (unsigned int)199, "CU_PASS(tsHASH_workBuffer)", "test_hashmap.c", "", 0);
        }
      }

      else
      {
        _sntprintf(tsHASH_workBuffer, (unsigned long int)4096, L"hashMapGetKWVW(map, \"%s\") returned NULL rather than expected \"%s\".", keys[(signed long int)i], values[(signed long int)i]);
        _tprintf(L"%s\n", (const void *)tsHASH_workBuffer);
        CU_assertImplementation(0, (unsigned int)204, "CU_FAIL(tsHASH_workBuffer)", "test_hashmap.c", "", 0);
      }
    }
    value=hashMapGetKWVW(hashMap, L"_");
    if(!(value == ((const signed int *)NULL)))
    {
      _sntprintf(tsHASH_workBuffer, (unsigned long int)4096, L"hashMapGetKWVW(map, \"_\") returned \"%s\" rather than expected NULL.", value);
      _tprintf(L"%s\n", (const void *)tsHASH_workBuffer);
      CU_assertImplementation(0, (unsigned int)213, "CU_FAIL(tsHASH_workBuffer)", "test_hashmap.c", "", 0);
    }

    else
    {
      _sntprintf(tsHASH_workBuffer, (unsigned long int)4096, L"hashMapGetKWVW(map, \"_\") returned NULL as expected.");
      CU_assertImplementation(1, (unsigned int)216, "CU_PASS(tsHASH_workBuffer)", "test_hashmap.c", "", 0);
    }
    tsHASH_freeTCHARArray(keys, valueCount);
    tsHASH_freeTCHARArray(values, valueCount);
  }

  freeHashMap(hashMap);

__CPROVER_DUMP_L16:
  ;
}

// tsHASH_suiteHashMap
// file test_hashmap.c line 247
signed int tsHASH_suiteHashMap()
{
  struct CU_Suite *hashMapSuite;
  hashMapSuite=CU_add_suite("HashMap Suite", (signed int (*)(void))(void *)0, (signed int (*)(void))(void *)0);
  if(hashMapSuite == ((struct CU_Suite *)NULL))
  {
    enum anonymous_0 return_value_CU_get_error_1;
    return_value_CU_get_error_1=CU_get_error();
    return (signed int)return_value_CU_get_error_1;
  }

  CU_add_test(hashMapSuite, "empty HashMap", (void (*)(void))tsHASH_testHashMapEmpty);
  CU_add_test(hashMapSuite, "sparce HashMap", (void (*)(void))tsHASH_testHashMapSparse);
  CU_add_test(hashMapSuite, "large HashMap", (void (*)(void))tsHASH_testHashMapLarge);
  return 0;
}

// tsHASH_testHashMapEmpty
// file test_hashmap.c line 229
void tsHASH_testHashMapEmpty()
{
  tsHASH_hashMapCommon(100, 0);
}

// tsHASH_testHashMapLarge
// file test_hashmap.c line 243
void tsHASH_testHashMapLarge()
{
  tsHASH_hashMapCommon(100, 10000);
}

// tsHASH_testHashMapSparse
// file test_hashmap.c line 236
void tsHASH_testHashMapSparse()
{
  tsHASH_hashMapCommon(100, 10);
}

// tsJAP_clean_properties
// file test_javaadditionalparam.c line 42
signed int tsJAP_clean_properties(void)
{
  disposeLogging();
  disposeProperties(properties);
  return 0;
}

// tsJAP_dummyLogFileChanged
// file test_javaadditionalparam.c line 26
void tsJAP_dummyLogFileChanged(const signed int *logFile)
{
  ;
}

// tsJAP_init_properties
// file test_javaadditionalparam.c line 29
signed int tsJAP_init_properties(void)
{
  initLogging(tsJAP_dummyLogFileChanged);
  logRegisterThread(1);
  setLogfileLevelInt(9);
  setConsoleLogFormat(L"LPM");
  setConsoleLogLevelInt(1);
  setConsoleFlush(-1);
  setSyslogLevelInt(9);
  properties=createProperties();
  return properties != ((struct Properties *)NULL) ? 0 : 1;
}

// tsJAP_subTestJavaAdditionalParamSuite
// file wrapper.c line 9019
static void tsJAP_subTestJavaAdditionalParamSuite(signed int stripQuote, signed int *config, signed int **strings, signed int strings_len, signed int isJVMParam)
{
  struct LoadParameterFileCallbackParam param;
  signed int ret;
  param.stripQuote = stripQuote;
  param.strings = (signed int **)(void *)0;
  param.index = 0;
  param.isJVMParam = isJVMParam;
  ret=loadParameterFileCallback((void *)&param, (const signed int *)(void *)0, 0, config, 0);
  CU_assertImplementation(ret, (unsigned int)9029, "CU_ASSERT_TRUE(ret)", "wrapper.c", "", 0);
  if(!(ret == 0))
  {
    CU_assertImplementation((signed int)(strings_len == param.index), (unsigned int)9033, "strings_len == param.index", "wrapper.c", "", 0);
    param.stripQuote = stripQuote;
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(signed int *) /*8ul*/  * (unsigned long int)strings_len);
    param.strings = (signed int **)return_value_malloc_1;
    if(!(param.strings == ((signed int **)NULL)))
    {
      param.index = 0;
      param.isJVMParam = isJVMParam;
      ret=loadParameterFileCallback((void *)&param, (const signed int *)(void *)0, 0, config, 0);
      CU_assertImplementation(ret, (unsigned int)9045, "CU_ASSERT_TRUE(ret)", "wrapper.c", "", 0);
      if(!(ret == 0))
      {
        CU_assertImplementation((signed int)(strings_len == param.index), (unsigned int)9049, "strings_len == param.index", "wrapper.c", "", 0);
        if(!(param.strings == ((signed int **)NULL)))
          free((void *)param.strings);

      }

    }

  }

}

// tsJAP_suiteJavaAdditionalParam
// file test_javaadditionalparam.c line 49
signed int tsJAP_suiteJavaAdditionalParam()
{
  struct CU_Suite *javaAdditionalParamSuite;
  javaAdditionalParamSuite=CU_add_suite("Java Additional Parameter Suite", tsJAP_init_properties, tsJAP_clean_properties);
  if(javaAdditionalParamSuite == ((struct CU_Suite *)NULL))
  {
    enum anonymous_0 return_value_CU_get_error_1;
    return_value_CU_get_error_1=CU_get_error();
    return (signed int)return_value_CU_get_error_1;
  }

  CU_add_test(javaAdditionalParamSuite, "loadJavaAdditionalCallback()", tsJAP_testJavaAdditionalParamSuite);
  return 0;
}

// tsJAP_testJavaAdditionalParamSuite
// file wrapper.h line 1094
extern void tsJAP_testJavaAdditionalParamSuite(void)
{
  signed int stripQuote;
  signed int i = 0;
  signed int isJVM = -1;
  i = 0;
  for( ; !(i >= 2); i = i + 1)
  {
    _tprintf(L"%d round\n", i);
    if(i >= 1)
      isJVM = 0;

    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__2__config = L"-Dsomething=something";
    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__2__strings[1l];
    tsJAP_testJavaAdditionalParamSuite__1__1__1__2__strings[(signed long int)0] = L"-Dsomething=something";
    tsJAP_subTestJavaAdditionalParamSuite(0, tsJAP_testJavaAdditionalParamSuite__1__1__1__2__config, tsJAP_testJavaAdditionalParamSuite__1__1__1__2__strings, (signed int)(sizeof(signed int *[1l]) /*8ul*/  / sizeof(signed int *) /*8ul*/ ), isJVM);
    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__3__config = L"-Dsomething=something -Dxxx=xxx";
    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__3__strings[2l];
    tsJAP_testJavaAdditionalParamSuite__1__1__1__3__strings[(signed long int)0] = L"-Dsomething=something";
    tsJAP_testJavaAdditionalParamSuite__1__1__1__3__strings[(signed long int)1] = L"-Dxxx=xxx";
    tsJAP_subTestJavaAdditionalParamSuite(0, tsJAP_testJavaAdditionalParamSuite__1__1__1__3__config, tsJAP_testJavaAdditionalParamSuite__1__1__1__3__strings, (signed int)(sizeof(signed int *[2l]) /*16ul*/  / sizeof(signed int *) /*8ul*/ ), isJVM);
    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__4__config = L"-Dsomething1=something1\t-Dsomething2=something2 -Dxxx=xxx";
    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__4__strings[2l];
    tsJAP_testJavaAdditionalParamSuite__1__1__1__4__strings[(signed long int)0] = L"-Dsomething1=something1\t-Dsomething2=something2";
    tsJAP_testJavaAdditionalParamSuite__1__1__1__4__strings[(signed long int)1] = L"-Dxxx=xxx";
    tsJAP_subTestJavaAdditionalParamSuite(0, tsJAP_testJavaAdditionalParamSuite__1__1__1__4__config, tsJAP_testJavaAdditionalParamSuite__1__1__1__4__strings, (signed int)(sizeof(signed int *[2l]) /*16ul*/  / sizeof(signed int *) /*8ul*/ ), isJVM);
    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__5__config = L"-Dsomething1=something1\t-Dsomething2=something2 -Dxxx=xxx";
    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__5__strings[2l];
    tsJAP_testJavaAdditionalParamSuite__1__1__1__5__strings[(signed long int)0] = L"-Dsomething1=something1\t-Dsomething2=something2";
    tsJAP_testJavaAdditionalParamSuite__1__1__1__5__strings[(signed long int)1] = L"-Dxxx=xxx";
    tsJAP_subTestJavaAdditionalParamSuite(0, tsJAP_testJavaAdditionalParamSuite__1__1__1__5__config, tsJAP_testJavaAdditionalParamSuite__1__1__1__5__strings, (signed int)(sizeof(signed int *[2l]) /*16ul*/  / sizeof(signed int *) /*8ul*/ ), isJVM);
    if(isJVM == -1)
    {
      signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__6__1__config = L"something=something -Dxxx=xxx";
      signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__6__1__strings[1l];
      tsJAP_testJavaAdditionalParamSuite__1__1__1__6__1__strings[(signed long int)0] = L"-Dxxx=xxx";
      tsJAP_subTestJavaAdditionalParamSuite(0, tsJAP_testJavaAdditionalParamSuite__1__1__1__6__1__config, tsJAP_testJavaAdditionalParamSuite__1__1__1__6__1__strings, (signed int)(sizeof(signed int *[1l]) /*8ul*/  / sizeof(signed int *) /*8ul*/ ), isJVM);
    }

    else
    {
      signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__7__1__config = L"something=something -Dxxx=xxx";
      signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__7__1__strings[2l];
      tsJAP_testJavaAdditionalParamSuite__1__1__1__7__1__strings[(signed long int)0] = L"something=something";
      tsJAP_testJavaAdditionalParamSuite__1__1__1__7__1__strings[(signed long int)1] = L"-Dxxx=xxx";
      tsJAP_subTestJavaAdditionalParamSuite(0, tsJAP_testJavaAdditionalParamSuite__1__1__1__7__1__config, tsJAP_testJavaAdditionalParamSuite__1__1__1__7__1__strings, (signed int)(sizeof(signed int *[2l]) /*16ul*/  / sizeof(signed int *) /*8ul*/ ), isJVM);
    }
    stripQuote = 0;
    signed int *config = L"-DmyApp.x1=\"Hello World.\" -DmyApp.x2=x2";
    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__8__strings[2l];
    tsJAP_testJavaAdditionalParamSuite__1__1__1__8__strings[(signed long int)0] = L"-DmyApp.x1=\"Hello World.\"";
    tsJAP_testJavaAdditionalParamSuite__1__1__1__8__strings[(signed long int)1] = L"-DmyApp.x2=x2";
    tsJAP_subTestJavaAdditionalParamSuite(stripQuote, config, tsJAP_testJavaAdditionalParamSuite__1__1__1__8__strings, (signed int)(sizeof(signed int *[2l]) /*16ul*/  / sizeof(signed int *) /*8ul*/ ), isJVM);
    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__9__config = L"\"-DmyApp.x1=Hello World.\" -DmyApp.x2=x2";
    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__9__strings[2l];
    tsJAP_testJavaAdditionalParamSuite__1__1__1__9__strings[(signed long int)0] = L"\"-DmyApp.x1=Hello World.\"";
    tsJAP_testJavaAdditionalParamSuite__1__1__1__9__strings[(signed long int)1] = L"-DmyApp.x2=x2";
    tsJAP_subTestJavaAdditionalParamSuite(stripQuote, tsJAP_testJavaAdditionalParamSuite__1__1__1__9__config, tsJAP_testJavaAdditionalParamSuite__1__1__1__9__strings, (signed int)(sizeof(signed int *[2l]) /*16ul*/  / sizeof(signed int *) /*8ul*/ ), isJVM);
    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__10__config = L"-DmyApp.x1=\"Hello \\\"World.\" -DmyApp.x2=x2";
    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__10__strings[2l];
    tsJAP_testJavaAdditionalParamSuite__1__1__1__10__strings[(signed long int)0] = L"-DmyApp.x1=\"Hello \\\"World.\"";
    tsJAP_testJavaAdditionalParamSuite__1__1__1__10__strings[(signed long int)1] = L"-DmyApp.x2=x2";
    tsJAP_subTestJavaAdditionalParamSuite(stripQuote, tsJAP_testJavaAdditionalParamSuite__1__1__1__10__config, tsJAP_testJavaAdditionalParamSuite__1__1__1__10__strings, (signed int)(sizeof(signed int *[2l]) /*16ul*/  / sizeof(signed int *) /*8ul*/ ), isJVM);
    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__11__config = L"-DmyApp.x1=\"Hello World.\\\\\" -DmyApp.x2=x2";
    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__11__strings[2l];
    tsJAP_testJavaAdditionalParamSuite__1__1__1__11__strings[(signed long int)0] = L"-DmyApp.x1=\"Hello World.\\\\\"";
    tsJAP_testJavaAdditionalParamSuite__1__1__1__11__strings[(signed long int)1] = L"-DmyApp.x2=x2";
    tsJAP_subTestJavaAdditionalParamSuite(stripQuote, tsJAP_testJavaAdditionalParamSuite__1__1__1__11__config, tsJAP_testJavaAdditionalParamSuite__1__1__1__11__strings, (signed int)(sizeof(signed int *[2l]) /*16ul*/  / sizeof(signed int *) /*8ul*/ ), isJVM);
    stripQuote = -1;
    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__12__config = L"-DmyApp.x1=\"Hello World.\" -DmyApp.x2=x2";
    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__12__strings[2l];
    tsJAP_testJavaAdditionalParamSuite__1__1__1__12__strings[(signed long int)0] = L"-DmyApp.x1=Hello World.";
    tsJAP_testJavaAdditionalParamSuite__1__1__1__12__strings[(signed long int)1] = L"-DmyApp.x2=x2";
    tsJAP_subTestJavaAdditionalParamSuite(stripQuote, tsJAP_testJavaAdditionalParamSuite__1__1__1__12__config, tsJAP_testJavaAdditionalParamSuite__1__1__1__12__strings, (signed int)(sizeof(signed int *[2l]) /*16ul*/  / sizeof(signed int *) /*8ul*/ ), isJVM);
    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__13__config = L"\"-DmyApp.x1=Hello World.\" -DmyApp.x2=x2";
    signed int *strings[2l];
    strings[(signed long int)0] = L"-DmyApp.x1=Hello World.";
    strings[(signed long int)1] = L"-DmyApp.x2=x2";
    tsJAP_subTestJavaAdditionalParamSuite(stripQuote, tsJAP_testJavaAdditionalParamSuite__1__1__1__13__config, strings, (signed int)(sizeof(signed int *[2l]) /*16ul*/  / sizeof(signed int *) /*8ul*/ ), isJVM);
    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__14__config = L"-DmyApp.x1=\"Hello \\\"World.\" -DmyApp.x2=x2";
    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__14__strings[2l];
    tsJAP_testJavaAdditionalParamSuite__1__1__1__14__strings[(signed long int)0] = L"-DmyApp.x1=Hello \"World.";
    tsJAP_testJavaAdditionalParamSuite__1__1__1__14__strings[(signed long int)1] = L"-DmyApp.x2=x2";
    tsJAP_subTestJavaAdditionalParamSuite(stripQuote, tsJAP_testJavaAdditionalParamSuite__1__1__1__14__config, tsJAP_testJavaAdditionalParamSuite__1__1__1__14__strings, (signed int)(sizeof(signed int *[2l]) /*16ul*/  / sizeof(signed int *) /*8ul*/ ), isJVM);
    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__15__config = L"-DmyApp.x1=\"Hello World.\\\\\" -DmyApp.x2=x2";
    signed int *tsJAP_testJavaAdditionalParamSuite__1__1__1__15__strings[2l];
    tsJAP_testJavaAdditionalParamSuite__1__1__1__15__strings[(signed long int)0] = L"-DmyApp.x1=Hello World.\\";
    tsJAP_testJavaAdditionalParamSuite__1__1__1__15__strings[(signed long int)1] = L"-DmyApp.x2=x2";
    tsJAP_subTestJavaAdditionalParamSuite(stripQuote, tsJAP_testJavaAdditionalParamSuite__1__1__1__15__config, tsJAP_testJavaAdditionalParamSuite__1__1__1__15__strings, (signed int)(sizeof(signed int *[2l]) /*16ul*/  / sizeof(signed int *) /*8ul*/ ), isJVM);
  }
}

// unregisterSyslogMessageFile
// file logger.c line 2467
extern signed int unregisterSyslogMessageFile()
{
  return 0;
}

// updateStringValue
// file wrapper.c line 492
void updateStringValue(signed int **ptr, const signed int *value)
{
  if(!(*ptr == ((signed int *)NULL)))
  {
    free((void *)*ptr);
    *ptr = (signed int *)(void *)0;
  }

  if(!(value == ((const signed int *)NULL)))
  {
    unsigned long int return_value_wcslen_1;
    return_value_wcslen_1=wcslen(value);
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_1 + (unsigned long int)1));
    *ptr = (signed int *)return_value_malloc_2;
    if(*ptr == ((signed int *)NULL))
      outOfMemory(L"USV", 1);

    else
    {
      unsigned long int return_value_wcslen_3;
      return_value_wcslen_3=wcslen(value);
      wcsncpy(*ptr, value, return_value_wcslen_3 + (unsigned long int)1);
    }
  }

}

// validateTimeout
// file wrapper.c line 7439
signed int validateTimeout(const signed int *propertyName, signed int value)
{
  signed int okValue;
  if(!(value >= 1))
    okValue = 0;

  else
    if(value >= 1728001)
      okValue = 1728000;

    else
      okValue = value;
  if(!(okValue == value))
    log_printf(-1, 4, L"The value of %s must be in the range 1 to %d seconds (%d days), or 0 to disable.  Changing to %d.", propertyName, 1728000, 1728000 / 86400, okValue);

  return okValue;
}

// wStatePaused
// file wrappereventloop.c line 865
void wStatePaused(unsigned int nowTicks)
{
  ;
}

// wStatePausing
// file wrappereventloop.c line 805
void wStatePausing(unsigned int nowTicks)
{
  signed int timeout;
  _Bool tmp_if_expr_2;
  signed int tmp_if_expr_1;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_10;
  if(!(wrapperData->pausableStopJVM == 0))
  {
    if(wrapperData->jState == 72)
    {
      wrapperSetWrapperState(54);
      wrapperReportStatus(0, 54, 0, 0);
    }

    else
    {
      if(!(wrapperData->shutdownTimeout >= 1))
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = wrapperData->jvmExitTimeout <= 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
        timeout = 86400000;

      else
      {
        if(!(wrapperData->jvmExitTimeout >= wrapperData->shutdownTimeout))
          tmp_if_expr_1 = wrapperData->shutdownTimeout;

        else
          tmp_if_expr_1 = wrapperData->jvmExitTimeout;
        timeout = tmp_if_expr_1 * 1000;
      }
      wrapperReportStatus(0, 53, 0, timeout);
      if(!(wrapperData->exitRequested == 0))
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = wrapperData->jState == 80 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_3)
        tmp_if_expr_4 = (_Bool)1;

      else
        tmp_if_expr_4 = wrapperData->jState == 81 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_4)
        tmp_if_expr_5 = (_Bool)1;

      else
        tmp_if_expr_5 = wrapperData->jState == 82 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_5)
        tmp_if_expr_6 = (_Bool)1;

      else
        tmp_if_expr_6 = wrapperData->jState == 83 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_6)
        tmp_if_expr_7 = (_Bool)1;

      else
        tmp_if_expr_7 = wrapperData->jState == 84 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_7)
        tmp_if_expr_8 = (_Bool)1;

      else
        tmp_if_expr_8 = wrapperData->jState == 85 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_8)
        tmp_if_expr_9 = (_Bool)1;

      else
        tmp_if_expr_9 = wrapperData->jState == 70 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_9)
        tmp_if_expr_10 = (_Bool)1;

      else
        tmp_if_expr_10 = wrapperData->jState == 71 ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr_10)
      {
        wrapperData->exitRequested = -1;
        wrapperData->restartRequested = 4;
      }

    }
  }

  else
  {
    wrapperSetWrapperState(54);
    wrapperReportStatus(0, 54, 0, 0);
  }
}

// wStateResuming
// file wrappereventloop.c line 877
void wStateResuming(unsigned int nowTicks)
{
  signed int timeout;
  if(wrapperData->jState == 79)
  {
    wrapperSetWrapperState(52);
    wrapperReportStatus(0, 52, 0, 0);
  }

  else
  {
    if(wrapperData->startupTimeout >= 1)
      timeout = wrapperData->startupTimeout * 1000;

    else
      timeout = 86400000;
    wrapperReportStatus(0, 55, 0, timeout);
  }
}

// wStateStarted
// file wrappereventloop.c line 793
void wStateStarted(unsigned int nowTicks)
{
  ;
}

// wStateStarting
// file wrappereventloop.c line 751
void wStateStarting(unsigned int nowTicks)
{
  signed int timeout;
  if(wrapperData->startupTimeout >= 1)
    timeout = wrapperData->startupTimeout * 1000;

  else
    timeout = 86400000;
  wrapperReportStatus(0, 51, 0, timeout);
  _Bool tmp_if_expr_1;
  if(!(wrapperData->initiallyPaused == 0))
    tmp_if_expr_1 = wrapperData->pausable != 0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  if(tmp_if_expr_1)
  {
    log_printf(-1, 3, L"Initially Paused.");
    wrapperSetWrapperState(54);
    wrapperReportStatus(0, 54, 0, 0);
  }

  else
    if(wrapperData->jState == 79)
    {
      wrapperSetWrapperState(52);
      wrapperReportStatus(0, 52, 0, 0);
    }

}

// wStateStopped
// file wrappereventloop.c line 941
void wStateStopped(unsigned int nowTicks)
{
  ;
}

// wStateStopping
// file wrappereventloop.c line 910
void wStateStopping(unsigned int nowTicks)
{
  signed int timeout;
  _Bool tmp_if_expr_2;
  if(!(wrapperData->shutdownTimeout >= 1))
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = wrapperData->jvmExitTimeout <= 0 ? (_Bool)1 : (_Bool)0;
  signed int tmp_if_expr_1;
  if(tmp_if_expr_2)
    timeout = 86400000;

  else
  {
    if(!(wrapperData->jvmExitTimeout >= wrapperData->shutdownTimeout))
      tmp_if_expr_1 = wrapperData->shutdownTimeout;

    else
      tmp_if_expr_1 = wrapperData->jvmExitTimeout;
    timeout = tmp_if_expr_1 * 1000;
  }
  wrapperReportStatus(0, 56, wrapperData->exitCode, timeout);
  if(wrapperData->jState == 72)
    wrapperSetWrapperState(57);

}

// wildcardMatchInner
// file wrapper.c line 3436
signed int wildcardMatchInner(const signed int *text, unsigned long int textLen, const signed int *pattern, unsigned long int patternLen, unsigned long int minTextLen)
{
  unsigned long int textIndex;
  unsigned long int patternIndex;
  signed int patternChar;
  unsigned long int textIndex2;
  signed int textChar;
  textIndex = (unsigned long int)0;
  patternIndex = (unsigned long int)0;
  while(!(patternIndex >= patternLen) && !(textIndex >= textLen))
  {
    patternChar = pattern[(signed long int)patternIndex];
    if(patternChar == 42)
    {
      textIndex2 = textIndex;
      while(!(textIndex2 >= textLen + -(minTextLen + -(1ul + patternIndex))))
      {
        signed int return_value_wildcardMatchInner_1;
        return_value_wildcardMatchInner_1=wildcardMatchInner(&text[(signed long int)textIndex2], textLen - textIndex2, &pattern[(signed long int)(patternIndex + (unsigned long int)1)], patternLen - (patternIndex + (unsigned long int)1), minTextLen - patternIndex);
        if(!(return_value_wildcardMatchInner_1 == 0))
          return -1;

        else
          textIndex2 = textIndex2 + 1ul;
      }
      return 0;
    }

    else
      if(patternChar == 63)
      {
        patternIndex = patternIndex + 1ul;
        textIndex = textIndex + 1ul;
      }

      else
      {
        textChar = text[(signed long int)textIndex];
        if(patternChar == textChar)
        {
          patternIndex = patternIndex + 1ul;
          textIndex = textIndex + 1ul;
        }

        else
          return 0;
      }
  }
  for( ; !(patternIndex >= patternLen); patternIndex = patternIndex + 1ul)
    if(!(pattern[(signed long int)patternIndex] == 42))
      return 0;

  return -1;
}

// wrapperAddDefaultProperties
// file wrapper.c line 221
extern void wrapperAddDefaultProperties()
{
  unsigned long int bufferLen;
  signed int *buffer;
  signed int *langTemp;
  signed int *confDirTemp;
  signed int pathSep = 47;
  signed int pos;
  bufferLen = (unsigned long int)1;
  unsigned long int return_value_wcslen_1;
  return_value_wcslen_1=wcslen(L"set.WRAPPER_LANG=");
  unsigned long int tmp_if_expr_3;
  unsigned long int return_value_wcslen_2;
  if(!(4ul + return_value_wcslen_1 >= bufferLen))
    tmp_if_expr_3 = bufferLen;

  else
  {
    return_value_wcslen_2=wcslen(L"set.WRAPPER_LANG=");
    tmp_if_expr_3 = return_value_wcslen_2 + (unsigned long int)3 + (unsigned long int)1;
  }
  bufferLen = tmp_if_expr_3;
  unsigned long int return_value_wcslen_4;
  return_value_wcslen_4=wcslen(L"set.WRAPPER_PID=");
  unsigned long int tmp_if_expr_6;
  unsigned long int return_value_wcslen_5;
  if(!(11ul + return_value_wcslen_4 >= bufferLen))
    tmp_if_expr_6 = bufferLen;

  else
  {
    return_value_wcslen_5=wcslen(L"set.WRAPPER_PID=");
    tmp_if_expr_6 = return_value_wcslen_5 + (unsigned long int)10 + (unsigned long int)1;
  }
  bufferLen = tmp_if_expr_6;
  unsigned long int return_value_wcslen_7;
  return_value_wcslen_7=wcslen(L"set.WRAPPER_BITS=");
  unsigned long int return_value_wcslen_8;
  return_value_wcslen_8=wcslen(wrapperBits);
  unsigned long int tmp_if_expr_11;
  unsigned long int return_value_wcslen_9;
  unsigned long int return_value_wcslen_10;
  if(!(1ul + return_value_wcslen_7 + return_value_wcslen_8 >= bufferLen))
    tmp_if_expr_11 = bufferLen;

  else
  {
    return_value_wcslen_9=wcslen(L"set.WRAPPER_BITS=");
    return_value_wcslen_10=wcslen(wrapperBits);
    tmp_if_expr_11 = return_value_wcslen_9 + return_value_wcslen_10 + (unsigned long int)1;
  }
  bufferLen = tmp_if_expr_11;
  unsigned long int return_value_wcslen_12;
  return_value_wcslen_12=wcslen(L"set.WRAPPER_ARCH=");
  unsigned long int return_value_wcslen_13;
  return_value_wcslen_13=wcslen(wrapperArch);
  unsigned long int tmp_if_expr_16;
  unsigned long int return_value_wcslen_14;
  unsigned long int return_value_wcslen_15;
  if(!(1ul + return_value_wcslen_12 + return_value_wcslen_13 >= bufferLen))
    tmp_if_expr_16 = bufferLen;

  else
  {
    return_value_wcslen_14=wcslen(L"set.WRAPPER_ARCH=");
    return_value_wcslen_15=wcslen(wrapperArch);
    tmp_if_expr_16 = return_value_wcslen_14 + return_value_wcslen_15 + (unsigned long int)1;
  }
  bufferLen = tmp_if_expr_16;
  unsigned long int return_value_wcslen_17;
  return_value_wcslen_17=wcslen(L"set.WRAPPER_OS=");
  unsigned long int return_value_wcslen_18;
  return_value_wcslen_18=wcslen(wrapperOS);
  unsigned long int tmp_if_expr_21;
  unsigned long int return_value_wcslen_19;
  unsigned long int return_value_wcslen_20;
  if(!(1ul + return_value_wcslen_17 + return_value_wcslen_18 >= bufferLen))
    tmp_if_expr_21 = bufferLen;

  else
  {
    return_value_wcslen_19=wcslen(L"set.WRAPPER_OS=");
    return_value_wcslen_20=wcslen(wrapperOS);
    tmp_if_expr_21 = return_value_wcslen_19 + return_value_wcslen_20 + (unsigned long int)1;
  }
  bufferLen = tmp_if_expr_21;
  unsigned long int return_value_wcslen_22;
  return_value_wcslen_22=wcslen(L"set.WRAPPER_HOSTNAME=");
  unsigned long int return_value_wcslen_23;
  return_value_wcslen_23=wcslen(wrapperData->hostName);
  unsigned long int tmp_if_expr_26;
  unsigned long int return_value_wcslen_24;
  unsigned long int return_value_wcslen_25;
  if(!(1ul + return_value_wcslen_22 + return_value_wcslen_23 >= bufferLen))
    tmp_if_expr_26 = bufferLen;

  else
  {
    return_value_wcslen_24=wcslen(L"set.WRAPPER_HOSTNAME=");
    return_value_wcslen_25=wcslen(wrapperData->hostName);
    tmp_if_expr_26 = return_value_wcslen_24 + return_value_wcslen_25 + (unsigned long int)1;
  }
  bufferLen = tmp_if_expr_26;
  unsigned long int return_value_wcslen_27;
  return_value_wcslen_27=wcslen(L"set.WRAPPER_HOST_NAME=");
  unsigned long int return_value_wcslen_28;
  return_value_wcslen_28=wcslen(wrapperData->hostName);
  unsigned long int tmp_if_expr_31;
  unsigned long int return_value_wcslen_29;
  unsigned long int return_value_wcslen_30;
  if(!(1ul + return_value_wcslen_27 + return_value_wcslen_28 >= bufferLen))
    tmp_if_expr_31 = bufferLen;

  else
  {
    return_value_wcslen_29=wcslen(L"set.WRAPPER_HOST_NAME=");
    return_value_wcslen_30=wcslen(wrapperData->hostName);
    tmp_if_expr_31 = return_value_wcslen_29 + return_value_wcslen_30 + (unsigned long int)1;
  }
  bufferLen = tmp_if_expr_31;
  if(wrapperData->confDir == ((signed int *)NULL))
  {
    signed int *return_value_wcsrchr_33;
    return_value_wcsrchr_33=wcsrchr(wrapperData->argConfFile, pathSep);
    if(!(return_value_wcsrchr_33 == ((signed int *)NULL)))
    {
      signed int *return_value_wcsrchr_32;
      return_value_wcsrchr_32=wcsrchr(wrapperData->argConfFile, pathSep);
      pos = (signed int)(return_value_wcsrchr_32 - wrapperData->argConfFile);
    }

    else
      pos = -1;
    if(pos == -1)
    {
      void *return_value_malloc_34;
      return_value_malloc_34=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)2);
      confDirTemp = (signed int *)return_value_malloc_34;
      if(confDirTemp == ((signed int *)NULL))
      {
        outOfMemory(L"WADP", 1);
        goto __CPROVER_DUMP_L32;
      }

      wcsncpy(confDirTemp, L".", (unsigned long int)2);
    }

    else
      if(pos == 0)
      {
        void *return_value_malloc_35;
        return_value_malloc_35=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)2);
        confDirTemp = (signed int *)return_value_malloc_35;
        if(confDirTemp == ((signed int *)NULL))
        {
          outOfMemory(L"WADP", 2);
          goto __CPROVER_DUMP_L32;
        }

        _sntprintf(confDirTemp, (unsigned long int)2, L"%c", pathSep);
      }

      else
      {
        void *return_value_malloc_36;
        return_value_malloc_36=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(pos + 1));
        confDirTemp = (signed int *)return_value_malloc_36;
        if(confDirTemp == ((signed int *)NULL))
        {
          outOfMemory(L"WADP", 3);
          goto __CPROVER_DUMP_L32;
        }

        wcsncpy(confDirTemp, wrapperData->argConfFile, (unsigned long int)pos);
        confDirTemp[(signed long int)pos] = 0;
      }
    void *return_value_malloc_37;
    return_value_malloc_37=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(4096 + 1));
    wrapperData->confDir = (signed int *)return_value_malloc_37;
    if(wrapperData->confDir == ((signed int *)NULL))
    {
      outOfMemory(L"WADP", 5);
      free((void *)confDirTemp);
      goto __CPROVER_DUMP_L32;
    }

    signed int *return_value__trealpathN_39;
    return_value__trealpathN_39=_trealpathN(confDirTemp, wrapperData->confDir, (unsigned long int)(4096 + 1));
    if(return_value__trealpathN_39 == ((signed int *)NULL))
    {
      const signed int *return_value_getLastErrorText_38;
      return_value_getLastErrorText_38=getLastErrorText();
      log_printf(-1, 6, L"Unable to resolve the original working directory: %s", return_value_getLastErrorText_38);
      free((void *)confDirTemp);
      goto __CPROVER_DUMP_L32;
    }

    setEnv(L"WRAPPER_CONF_DIR", wrapperData->confDir, 2);
    free((void *)confDirTemp);
  }

  void *return_value_malloc_40;
  return_value_malloc_40=malloc(sizeof(signed int) /*4ul*/  * bufferLen);
  buffer = (signed int *)return_value_malloc_40;
  _Bool tmp_if_expr_42;
  unsigned long int return_value_wcslen_41;
  if(buffer == ((signed int *)NULL))
    outOfMemory(L"WADP", 1);

  else
  {
    langTemp=_tgetenv(L"LANG");
    if(langTemp == ((signed int *)NULL))
      tmp_if_expr_42 = (_Bool)1;

    else
    {
      return_value_wcslen_41=wcslen(langTemp);
      tmp_if_expr_42 = return_value_wcslen_41 == (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_42)
      _sntprintf(buffer, bufferLen, L"set.WRAPPER_LANG=en");

    else
      _sntprintf(buffer, bufferLen, L"set.WRAPPER_LANG=%.2S", langTemp);
    if(!(langTemp == ((signed int *)NULL)))
      free((void *)langTemp);

    addPropertyPair(properties, (const signed int *)(void *)0, 0, buffer, -1, 0, -1);
    _sntprintf(buffer, bufferLen, L"set.WRAPPER_PID=%d", wrapperData->wrapperPID);
    addPropertyPair(properties, (const signed int *)(void *)0, 0, buffer, -1, 0, -1);
    _sntprintf(buffer, bufferLen, L"set.WRAPPER_BITS=%s", wrapperBits);
    addPropertyPair(properties, (const signed int *)(void *)0, 0, buffer, -1, 0, -1);
    _sntprintf(buffer, bufferLen, L"set.WRAPPER_ARCH=%s", wrapperArch);
    addPropertyPair(properties, (const signed int *)(void *)0, 0, buffer, -1, 0, -1);
    _sntprintf(buffer, bufferLen, L"set.WRAPPER_OS=%s", wrapperOS);
    addPropertyPair(properties, (const signed int *)(void *)0, 0, buffer, -1, 0, -1);
    _sntprintf(buffer, bufferLen, L"set.WRAPPER_HOSTNAME=%s", wrapperData->hostName);
    addPropertyPair(properties, (const signed int *)(void *)0, 0, buffer, -1, 0, -1);
    _sntprintf(buffer, bufferLen, L"set.WRAPPER_HOST_NAME=%s", wrapperData->hostName);
    addPropertyPair(properties, (const signed int *)(void *)0, 0, buffer, -1, 0, -1);
    addPropertyPair(properties, (const signed int *)(void *)0, 0, L"set.WRAPPER_FILE_SEPARATOR=/", -1, 0, -1);
    addPropertyPair(properties, (const signed int *)(void *)0, 0, L"set.WRAPPER_PATH_SEPARATOR=:", -1, 0, -1);
    free((void *)buffer);
  }

__CPROVER_DUMP_L32:
  ;
}

// wrapperAddToTicks
// file wrapper.c line 8454
extern unsigned int wrapperAddToTicks(unsigned int start, signed int seconds)
{
  return start + (unsigned int)((seconds * 1000) / 100);
}

// wrapperBuildJavaClasspath
// file wrapper.c line 6093
extern signed int wrapperBuildJavaClasspath(signed int **classpath)
{
  const signed int *prop;
  signed int *propStripped;
  signed int *propBaseDir;
  signed int i;
  signed int j;
  unsigned long int cpLen;
  unsigned long int cpLenAlloc;
  unsigned long int len2;
  signed int *tmpString;
  struct stat statBuffer;
  signed int **propertyNames;
  signed int **propertyValues;
  unsigned long int *propertyIndices;
  signed int **files;
  signed int cnt;
  signed int missingLogLevel;
  cpLen = (unsigned long int)0;
  cpLenAlloc = (unsigned long int)1024;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(signed int) /*4ul*/  * cpLenAlloc);
  *classpath = (signed int *)return_value_malloc_1;
  _Bool tmp_if_expr_25;
  signed int *return_value_wcschr_24;
  unsigned long int tmp_post_8;
  _Bool tmp_if_expr_15;
  unsigned long int return_value_wcslen_14;
  _Bool tmp_if_expr_19;
  signed int *return_value___errno_location_18;
  unsigned long int tmp_post_22;
  if(*classpath == ((signed int *)NULL))
  {
    outOfMemory(L"WBJCP", 1);
    return -1;
  }

  else
  {
    signed int return_value_getStringProperties_2;
    return_value_getStringProperties_2=getStringProperties(properties, L"wrapper.java.classpath.", L"", wrapperData->ignoreSequenceGaps, 0, &propertyNames, &propertyValues, &propertyIndices);
    if(!(return_value_getStringProperties_2 == 0))
      return -1;

    else
    {
      const signed int *return_value_getStringProperty_3;
      return_value_getStringProperty_3=getStringProperty(properties, L"wrapper.java.classpath.missing.loglevel", L"DEBUG");
      missingLogLevel=getLogLevelForName(return_value_getStringProperty_3);
      i = 0;
      j = 0;
      while(!(propertyNames[(signed long int)i] == ((signed int *)NULL)))
      {
        prop = propertyValues[(signed long int)i];
        signed int *return_value_wcschr_6;
        return_value_wcschr_6=wcschr(prop, 34);
        if(!(return_value_wcschr_6 == ((signed int *)NULL)))
        {
          unsigned long int return_value_wcslen_4;
          return_value_wcslen_4=wcslen(prop);
          void *return_value_malloc_5;
          return_value_malloc_5=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_4 + (unsigned long int)1));
          propStripped = (signed int *)return_value_malloc_5;
          if(propStripped == ((signed int *)NULL))
          {
            outOfMemory(L"WBJCP", 2);
            freeStringProperties(propertyNames, propertyValues, propertyIndices);
            return -1;
          }

          wrapperStripQuotes(prop, propStripped);
          log_printf(-1, 1, L"Classpath element, %s, should not contain quotes: %s, stripping and continuing: %s", propertyNames[(signed long int)i], prop, propStripped);
        }

        else
          propStripped = (signed int *)prop;
        len2=wcslen(propStripped);
        if(len2 >= 1ul)
        {
          signed int *return_value_wcsrchr_23;
          return_value_wcsrchr_23=wcsrchr(propStripped, 42);
          if(!(return_value_wcsrchr_23 == ((signed int *)NULL)))
            tmp_if_expr_25 = (_Bool)1;

          else
          {
            return_value_wcschr_24=wcschr(propStripped, 63);
            tmp_if_expr_25 = return_value_wcschr_24 != (signed int *)(void *)0 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr_25)
          {
            files=loggerFileGetFiles(propStripped, 101);
            if(files == ((signed int **)NULL))
            {
              if(!(propStripped == prop))
                free((void *)propStripped);

              freeStringProperties(propertyNames, propertyValues, propertyIndices);
              return -1;
            }

            cnt = 0;
            for( ; !(files[(signed long int)cnt] == ((signed int *)NULL)); cnt = cnt + 1)
            {
              len2=wcslen(files[(signed long int)cnt]);
              if(!(cpLenAlloc >= 3ul + cpLen + len2))
              {
                tmpString = *classpath;
                cpLenAlloc = cpLenAlloc + len2 + (unsigned long int)3;
                void *return_value_malloc_7;
                return_value_malloc_7=malloc(sizeof(signed int) /*4ul*/  * cpLenAlloc);
                *classpath = (signed int *)return_value_malloc_7;
                if(*classpath == ((signed int *)NULL))
                {
                  if(!(propStripped == prop))
                    free((void *)propStripped);

                  loggerFileFreeFiles(files);
                  freeStringProperties(propertyNames, propertyValues, propertyIndices);
                  outOfMemory(L"WBJCP", 2);
                  return -1;
                }

                if(j >= 1)
                  _sntprintf(*classpath, cpLenAlloc, L"%s", tmpString);

                free((void *)tmpString);
                tmpString = (signed int *)(void *)0;
              }

              if(j >= 1)
              {
                tmp_post_8 = cpLen;
                cpLen = cpLen + 1ul;
                (*classpath)[(signed long int)tmp_post_8] = wrapperClasspathSeparator;
              }

              _sntprintf(&(*classpath)[(signed long int)cpLen], cpLenAlloc - cpLen, L"%s", files[(signed long int)cnt]);
              cpLen = cpLen + len2;
              j = j + 1;
            }
            loggerFileFreeFiles(files);
          }

          else
          {
            propBaseDir = (signed int *)propStripped;
            unsigned long int return_value_wcslen_13;
            return_value_wcslen_13=wcslen(propStripped);
            if(propStripped[-1l + (signed long int)return_value_wcslen_13] == 47)
              tmp_if_expr_15 = (_Bool)1;

            else
            {
              return_value_wcslen_14=wcslen(propStripped);
              tmp_if_expr_15 = propStripped[(signed long int)(return_value_wcslen_14 - (unsigned long int)1)] == 92 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr_15)
            {
              unsigned long int return_value_wcslen_9;
              return_value_wcslen_9=wcslen(propStripped);
              void *return_value_malloc_10;
              return_value_malloc_10=malloc(sizeof(signed int) /*4ul*/  * return_value_wcslen_9);
              propBaseDir = (signed int *)return_value_malloc_10;
              if(propBaseDir == ((signed int *)NULL))
              {
                outOfMemory(L"WBJCP", 3);
                if(!(propStripped == prop))
                  free((void *)propStripped);

                freeStringProperties(propertyNames, propertyValues, propertyIndices);
                return -1;
              }

              unsigned long int return_value_wcslen_11;
              return_value_wcslen_11=wcslen(propStripped);
              wcsncpy(propBaseDir, propStripped, return_value_wcslen_11 - (unsigned long int)1);
              unsigned long int return_value_wcslen_12;
              return_value_wcslen_12=wcslen(propStripped);
              propBaseDir[(signed long int)(return_value_wcslen_12 - (unsigned long int)1)] = 0;
            }

            signed int return_value__tstat_20;
            return_value__tstat_20=_tstat(propBaseDir, &statBuffer);
            if(!(return_value__tstat_20 == 0))
            {
              signed int *return_value___errno_location_17;
              return_value___errno_location_17=__errno_location();
              if(*return_value___errno_location_17 == 2)
                tmp_if_expr_19 = (_Bool)1;

              else
              {
                return_value___errno_location_18=__errno_location();
                tmp_if_expr_19 = *return_value___errno_location_18 == 3 ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr_19)
                log_printf(-1, missingLogLevel, L"Classpath element, %s, does not exist: %s", propertyNames[(signed long int)i], propStripped);

              else
              {
                const signed int *return_value_getLastErrorText_16;
                return_value_getLastErrorText_16=getLastErrorText();
                log_printf(-1, 5, L"Unable to get information of classpath element: %s (%s)", propStripped, return_value_getLastErrorText_16);
              }
            }

            if(!(propBaseDir == propStripped))
              free((void *)propBaseDir);

            propBaseDir = (signed int *)(void *)0;
            if(!(cpLenAlloc >= 3ul + cpLen + len2))
            {
              tmpString = *classpath;
              cpLenAlloc = cpLenAlloc + len2 + (unsigned long int)3;
              void *return_value_malloc_21;
              return_value_malloc_21=malloc(sizeof(signed int) /*4ul*/  * cpLenAlloc);
              *classpath = (signed int *)return_value_malloc_21;
              if(*classpath == ((signed int *)NULL))
              {
                outOfMemory(L"WBJCP", 4);
                if(!(propStripped == prop))
                  free((void *)propStripped);

                freeStringProperties(propertyNames, propertyValues, propertyIndices);
                return -1;
              }

              if(j >= 1)
                _sntprintf(*classpath, cpLenAlloc, L"%s", tmpString);

              free((void *)tmpString);
              tmpString = (signed int *)(void *)0;
            }

            if(j >= 1)
            {
              tmp_post_22 = cpLen;
              cpLen = cpLen + 1ul;
              (*classpath)[(signed long int)tmp_post_22] = wrapperClasspathSeparator;
            }

            _sntprintf(&(*classpath)[(signed long int)cpLen], cpLenAlloc - cpLen, L"%s", propStripped);
            cpLen = cpLen + len2;
            j = j + 1;
          }
        }

        if(!(propStripped == prop))
          free((void *)propStripped);

        propStripped = (signed int *)(void *)0;
        i = i + 1;
      }
      freeStringProperties(propertyNames, propertyValues, propertyIndices);
      if(j == 0)
      {
        _sntprintf(&(*classpath[(signed long int)cpLen]), cpLenAlloc - cpLen, L"./");
        cpLen = cpLen + 1ul;
      }

      return 0;
    }
  }
}

// wrapperBuildJavaCommand
// file wrapper.h line 987
extern signed int wrapperBuildJavaCommand()
{
  signed int **strings;
  signed int length;
  signed int i;
  if(!(wrapperData->jvmVersionCommand == ((signed int **)NULL)))
  {
    i = 0;
    for( ; !(wrapperData->jvmVersionCommand[(signed long int)i] == ((signed int *)NULL)); i = i + 1)
    {
      free((void *)wrapperData->jvmVersionCommand[(signed long int)i]);
      wrapperData->jvmVersionCommand[(signed long int)i] = (signed int *)(void *)0;
    }
    free((void *)wrapperData->jvmVersionCommand);
    wrapperData->jvmVersionCommand = (signed int **)(void *)0;
  }

  if(!(wrapperData->jvmCommand == ((signed int **)NULL)))
  {
    i = 0;
    for( ; !(wrapperData->jvmCommand[(signed long int)i] == ((signed int *)NULL)); i = i + 1)
    {
      free((void *)wrapperData->jvmCommand[(signed long int)i]);
      wrapperData->jvmCommand[(signed long int)i] = (signed int *)(void *)0;
    }
    free((void *)wrapperData->jvmCommand);
    wrapperData->jvmCommand = (signed int **)(void *)0;
  }

  if(!(wrapperData->classpath == ((signed int *)NULL)))
  {
    free((void *)wrapperData->classpath);
    wrapperData->classpath = (signed int *)(void *)0;
  }

  signed int return_value_wrapperBuildJavaClasspath_1;
  return_value_wrapperBuildJavaClasspath_1=wrapperBuildJavaClasspath(&wrapperData->classpath);
  if(!(return_value_wrapperBuildJavaClasspath_1 >= 0))
    return -1;

  else
  {
    strings = (signed int **)(void *)0;
    length = 0;
    signed int return_value_wrapperBuildJavaCommandArray_2;
    return_value_wrapperBuildJavaCommandArray_2=wrapperBuildJavaCommandArray(&strings, &length, 0, wrapperData->classpath);
    if(!(return_value_wrapperBuildJavaCommandArray_2 == 0))
      return -1;

    else
    {
      void *return_value_malloc_3;
      return_value_malloc_3=malloc(sizeof(signed int *) /*8ul*/  * (unsigned long int)(2 + 1));
      wrapperData->jvmVersionCommand = (signed int **)return_value_malloc_3;
      if(wrapperData->jvmVersionCommand == ((signed int **)NULL))
      {
        outOfMemory(L"WBJC", 1);
        return -1;
      }

      else
      {
        memset((void *)wrapperData->jvmVersionCommand, 0, sizeof(signed int *) /*8ul*/  * (unsigned long int)(2 + 1));
        unsigned long int return_value_wcslen_4;
        return_value_wcslen_4=wcslen(strings[(signed long int)0]);
        void *return_value_malloc_5;
        return_value_malloc_5=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_4 + (unsigned long int)1));
        wrapperData->jvmVersionCommand[(signed long int)0] = (signed int *)return_value_malloc_5;
        if(*wrapperData->jvmVersionCommand == ((signed int *)NULL))
        {
          outOfMemory(L"WBJC", 2);
          return -1;
        }

        else
        {
          unsigned long int return_value_wcslen_6;
          return_value_wcslen_6=wcslen(strings[(signed long int)0]);
          wcsncpy(wrapperData->jvmVersionCommand[(signed long int)0], strings[(signed long int)0], return_value_wcslen_6 + (unsigned long int)1);
          void *return_value_malloc_7;
          return_value_malloc_7=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(8 + 1));
          wrapperData->jvmVersionCommand[(signed long int)1] = (signed int *)return_value_malloc_7;
          if(wrapperData->jvmVersionCommand[1l] == ((signed int *)NULL))
          {
            outOfMemory(L"WBJC", 3);
            return -1;
          }

          else
          {
            wcsncpy(wrapperData->jvmVersionCommand[(signed long int)1], L"-version", (unsigned long int)(8 + 1));
            wrapperData->jvmVersionCommand[(signed long int)2] = (signed int *)(void *)0;
            void *return_value_malloc_8;
            return_value_malloc_8=malloc(sizeof(signed int *) /*8ul*/  * (unsigned long int)(length + 1));
            wrapperData->jvmCommand = (signed int **)return_value_malloc_8;
            if(wrapperData->jvmCommand == ((signed int **)NULL))
            {
              outOfMemory(L"WBJC", 1);
              return -1;
            }

            else
            {
              memset((void *)wrapperData->jvmCommand, 0, sizeof(signed int *) /*8ul*/  * (unsigned long int)(length + 1));
              i = 0;
              for( ; length >= i; i = i + 1)
                if(!(i >= length))
                {
                  unsigned long int return_value_wcslen_9;
                  return_value_wcslen_9=wcslen(strings[(signed long int)i]);
                  void *return_value_malloc_10;
                  return_value_malloc_10=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_9 + (unsigned long int)1));
                  wrapperData->jvmCommand[(signed long int)i] = (signed int *)return_value_malloc_10;
                  if(wrapperData->jvmCommand[(signed long int)i] == ((signed int *)NULL))
                  {
                    outOfMemory(L"WBJC", 2);
                    return -1;
                  }

                  unsigned long int return_value_wcslen_11;
                  return_value_wcslen_11=wcslen(strings[(signed long int)i]);
                  wcsncpy(wrapperData->jvmCommand[(signed long int)i], strings[(signed long int)i], return_value_wcslen_11 + (unsigned long int)1);
                  wrapperData->jvmCommand[(signed long int)i]=wrapperPostProcessCommandElement(wrapperData->jvmCommand[(signed long int)i]);
                }

                else
                  wrapperData->jvmCommand[(signed long int)i] = (signed int *)(void *)0;
              wrapperFreeJavaCommandArray(strings, length);
              return 0;
            }
          }
        }
      }
    }
  }
}

// wrapperBuildJavaCommandArray
// file wrapper.c line 7043
extern signed int wrapperBuildJavaCommandArray(signed int ***stringsPtr, signed int *length, signed int addQuotes, const signed int *classpath)
{
  signed int reqLen;
  wrapperData->debugJVM = 0;
  wrapperData->debugJVMTimeoutNotified = 0;
  reqLen=wrapperBuildJavaCommandArrayInner((signed int **)(void *)0, addQuotes, classpath);
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  if(!(reqLen >= 0))
    return -1;

  else
  {
    *length = reqLen;
    void *return_value_malloc_1;
    return_value_malloc_1=malloc((unsigned long int)*length * sizeof(signed int *) /*8ul*/ );
    *stringsPtr = (signed int **)return_value_malloc_1;
    if(*stringsPtr == ((signed int **)NULL))
    {
      outOfMemory(L"WBJCA", 1);
      return -1;
    }

    else
    {
      reqLen=wrapperBuildJavaCommandArrayInner(*stringsPtr, addQuotes, classpath);
      if(!(reqLen >= 0))
        return -1;

      else
      {
        if(!(wrapperData->debugJVM == 0))
        {
          if(wrapperData->startupTimeout >= 1)
            tmp_if_expr_2 = (_Bool)1;

          else
            tmp_if_expr_2 = wrapperData->pingTimeout > 0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_2)
            tmp_if_expr_3 = (_Bool)1;

          else
            tmp_if_expr_3 = wrapperData->shutdownTimeout > 0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_3)
            tmp_if_expr_4 = (_Bool)1;

          else
            tmp_if_expr_4 = wrapperData->jvmExitTimeout > 0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_4)
          {
            log_printf(-1, 4, L"---------------------------------------------------------------------");
            log_printf(-1, 4, L"The JVM is being launched with a debugger enabled and could possibly\nbe suspended.  To avoid unwanted shutdowns, timeouts will be\ndisabled, removing the ability to detect and restart frozen JVMs.");
            log_printf(-1, 4, L"---------------------------------------------------------------------");
          }

        }

        return 0;
      }
    }
  }
}

// wrapperBuildJavaCommandArrayAppParameters
// file wrapper.c line 6357
signed int wrapperBuildJavaCommandArrayAppParameters(signed int **strings, signed int addQuotes, signed int index, signed int thisIsTestWrapper)
{
  const signed int *prop;
  signed int i;
  signed int quotable;
  signed int *propStripped;
  signed int defaultStripQuote;
  signed int stripQuote;
  signed int paramBuffer2[128l];
  unsigned long int len;
  signed int **propertyNames;
  signed int **propertyValues;
  unsigned long int *propertyIndices;
  signed int return_value_getStringProperties_1;
  return_value_getStringProperties_1=getStringProperties(properties, L"wrapper.app.parameter.", L"", wrapperData->ignoreSequenceGaps, 0, &propertyNames, &propertyValues, &propertyIndices);
  _Bool tmp_if_expr_13;
  signed int return_value_wcscmp_10;
  _Bool tmp_if_expr_12;
  signed int return_value_wcscmp_11;
  _Bool tmp_if_expr_9;
  signed int *return_value_wcschr_8;
  _Bool tmp_if_expr_20;
  signed int *return_value_wcschr_19;
  if(!(return_value_getStringProperties_1 == 0))
    return -1;

  else
  {
    defaultStripQuote=getBooleanProperty(properties, L"wrapper.app.parameter.default.stripquotes", 0);
    i = 0;
    while(!(propertyNames[(signed long int)i] == ((signed int *)NULL)))
    {
      prop = propertyValues[(signed long int)i];
      unsigned long int return_value_wcslen_14;
      return_value_wcslen_14=wcslen(prop);
      if(return_value_wcslen_14 >= 1ul)
      {
        if(i == 1 && !(thisIsTestWrapper == 0))
        {
          return_value_wcscmp_10=wcscmp(prop, L"{{TestWrapperBat}}");
          if(return_value_wcscmp_10 == 0)
            tmp_if_expr_12 = (_Bool)1;

          else
          {
            return_value_wcscmp_11=wcscmp(prop, L"{{TestWrapperSh}}");
            tmp_if_expr_12 = return_value_wcscmp_11 == 0 ? (_Bool)1 : (_Bool)0;
          }
          tmp_if_expr_13 = tmp_if_expr_12 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_13 = (_Bool)0;
        if(!tmp_if_expr_13)
        {
          if(!(strings == ((signed int **)NULL)))
          {
            quotable=isQuotableProperty(properties, propertyNames[(signed long int)i]);
            _sntprintf(paramBuffer2, (unsigned long int)128, L"wrapper.app.parameter.%lu.stripquotes", propertyIndices[(signed long int)i]);
            if(!(addQuotes == 0))
              stripQuote = 0;

            else
              stripQuote=getBooleanProperty(properties, paramBuffer2, defaultStripQuote);
            if(!(stripQuote == 0))
            {
              unsigned long int return_value_wcslen_2;
              return_value_wcslen_2=wcslen(prop);
              void *return_value_malloc_3;
              return_value_malloc_3=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_2 + (unsigned long int)1));
              propStripped = (signed int *)return_value_malloc_3;
              if(propStripped == ((signed int *)NULL))
              {
                outOfMemory(L"WBJCAAP", 1);
                freeStringProperties(propertyNames, propertyValues, propertyIndices);
                return -1;
              }

              wrapperStripQuotes(prop, propStripped);
            }

            else
              propStripped = (signed int *)prop;
            if(!(quotable == 0) && !(addQuotes == 0))
            {
              return_value_wcschr_8=wcschr(propStripped, 32);
              tmp_if_expr_9 = return_value_wcschr_8 != ((signed int *)NULL) ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr_9 = (_Bool)0;
            if(tmp_if_expr_9)
            {
              len=wrapperQuoteValue(propStripped, (signed int *)(void *)0, (unsigned long int)0);
              void *return_value_malloc_4;
              return_value_malloc_4=malloc(sizeof(signed int) /*4ul*/  * len);
              strings[(signed long int)index] = (signed int *)return_value_malloc_4;
              if(strings[(signed long int)index] == ((signed int *)NULL))
              {
                outOfMemory(L"WBJCAAP", 2);
                if(!(stripQuote == 0))
                  free((void *)propStripped);

                freeStringProperties(propertyNames, propertyValues, propertyIndices);
                return -1;
              }

              wrapperQuoteValue(propStripped, strings[(signed long int)index], len);
            }

            else
            {
              unsigned long int return_value_wcslen_5;
              return_value_wcslen_5=wcslen(propStripped);
              void *return_value_malloc_6;
              return_value_malloc_6=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_5 + (unsigned long int)1));
              strings[(signed long int)index] = (signed int *)return_value_malloc_6;
              if(strings[(signed long int)index] == ((signed int *)NULL))
              {
                if(!(stripQuote == 0))
                  free((void *)propStripped);

                freeStringProperties(propertyNames, propertyValues, propertyIndices);
                outOfMemory(L"WBJCAAP", 3);
                return -1;
              }

              unsigned long int return_value_wcslen_7;
              return_value_wcslen_7=wcslen(propStripped);
              _sntprintf(strings[(signed long int)index], return_value_wcslen_7 + (unsigned long int)1, L"%s", propStripped);
            }
            if(!(addQuotes == 0))
              wrapperCheckQuotes(strings[(signed long int)index], propertyNames[(signed long int)i]);

            if(!(stripQuote == 0))
            {
              free((void *)propStripped);
              propStripped = (signed int *)(void *)0;
            }

          }

          index = index + 1;
        }

      }

      i = i + 1;
    }
    freeStringProperties(propertyNames, propertyValues, propertyIndices);
    if(wrapperData->javaArgValueCount >= 1)
    {
      i = 0;
      for( ; !(i >= wrapperData->javaArgValueCount); i = i + 1)
      {
        if(!(strings == ((signed int **)NULL)))
        {
          if(!(addQuotes == 0))
          {
            return_value_wcschr_19=wcschr(wrapperData->javaArgValues[(signed long int)i], 32);
            tmp_if_expr_20 = return_value_wcschr_19 != ((signed int *)NULL) ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_20 = (_Bool)0;
          if(tmp_if_expr_20)
          {
            len=wrapperQuoteValue(wrapperData->javaArgValues[(signed long int)i], (signed int *)(void *)0, (unsigned long int)0);
            void *return_value_malloc_15;
            return_value_malloc_15=malloc(sizeof(signed int) /*4ul*/  * len);
            strings[(signed long int)index] = (signed int *)return_value_malloc_15;
            if(strings[(signed long int)index] == ((signed int *)NULL))
            {
              outOfMemory(L"WBJCAAP", 4);
              return -1;
            }

            wrapperQuoteValue(wrapperData->javaArgValues[(signed long int)i], strings[(signed long int)index], len);
          }

          else
          {
            unsigned long int return_value_wcslen_16;
            return_value_wcslen_16=wcslen(wrapperData->javaArgValues[(signed long int)i]);
            void *return_value_malloc_17;
            return_value_malloc_17=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_16 + (unsigned long int)1));
            strings[(signed long int)index] = (signed int *)return_value_malloc_17;
            if(strings[(signed long int)index] == ((signed int *)NULL))
            {
              outOfMemory(L"WBJCAAP", 5);
              return -1;
            }

            unsigned long int return_value_wcslen_18;
            return_value_wcslen_18=wcslen(wrapperData->javaArgValues[(signed long int)i]);
            _sntprintf(strings[(signed long int)index], return_value_wcslen_18 + (unsigned long int)1, L"%s", wrapperData->javaArgValues[(signed long int)i]);
          }
        }

        index = index + 1;
      }
    }

    return index;
  }
}

// wrapperBuildJavaCommandArrayClasspath
// file wrapper.c line 6296
signed int wrapperBuildJavaCommandArrayClasspath(signed int **strings, signed int addQuotes, signed int index, const signed int *classpath)
{
  unsigned long int len;
  unsigned long int cpLen;
  if(!(strings == ((signed int **)NULL)))
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(10 + 1));
    strings[(signed long int)index] = (signed int *)return_value_malloc_1;
    if(strings[(signed long int)index] == ((signed int *)NULL))
    {
      outOfMemory(L"WBJCAC", 1);
      return -1;
    }

    _sntprintf(strings[(signed long int)index], (unsigned long int)(10 + 1), L"-classpath");
  }

  index = index + 1;
  if(!(strings == ((signed int **)NULL)))
  {
    cpLen = (unsigned long int)0;
    len=wcslen(classpath);
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(signed int) /*4ul*/  * (len + (unsigned long int)4));
    strings[(signed long int)index] = (signed int *)return_value_malloc_2;
    if(strings[(signed long int)index] == ((signed int *)NULL))
    {
      outOfMemory(L"WBJCAC", 2);
      return -1;
    }

    if(!(addQuotes == 0))
    {
      _sntprintf(&strings[(signed long int)index][(signed long int)cpLen], (len + (unsigned long int)4) - cpLen, L"\"");
      cpLen = cpLen + 1ul;
    }

    _sntprintf(&strings[(signed long int)index][(signed long int)cpLen], (len + (unsigned long int)4) - cpLen, L"%s", classpath);
    cpLen = cpLen + len;
    if(!(addQuotes == 0))
    {
      if(strings[(signed long int)index][-1l + (signed long int)cpLen] == 92)
      {
        _sntprintf(&strings[(signed long int)index][(signed long int)cpLen], (len + (unsigned long int)4) - cpLen, L"\\");
        cpLen = cpLen + 1ul;
      }

      _sntprintf(&strings[(signed long int)index][(signed long int)cpLen], (len + (unsigned long int)4) - cpLen, L"\"");
      cpLen = cpLen + 1ul;
    }

    if(!(addQuotes == 0))
      wrapperCheckQuotes(strings[(signed long int)index], L"wrapper.java.classpath.<n>");

  }

  index = index + 1;
  return index;
}

// wrapperBuildJavaCommandArrayInner
// file wrapper.c line 6480
signed int wrapperBuildJavaCommandArrayInner(signed int **strings, signed int addQuotes, const signed int *classpath)
{
  signed int index;
  signed int detectDebugJVM;
  const signed int *prop;
  signed int initMemory = 0;
  signed int maxMemory;
  signed int thisIsTestWrapper;
  setLogPropertyWarnings(properties, (signed int)(strings != (signed int **)(void *)0));
  index = 0;
  detectDebugJVM=getBooleanProperty(properties, L"wrapper.java.detect_debug_jvm", -1);
  index=wrapperBuildJavaCommandArrayJavaCommand(strings, addQuotes, detectDebugJVM, index);
  if(!(index >= 0))
    return -1;

  else
  {
    index=wrapperBuildJavaCommandArrayJavaAdditional(strings, addQuotes, detectDebugJVM, index);
    if(!(index >= 0))
      return -1;

    else
    {
      index=wrapperLoadParameterFile(strings, addQuotes, detectDebugJVM, index, L"wrapper.java.additional_file", -1);
      if(!(index >= 0))
        return -1;

      else
      {
        initMemory=getIntProperty(properties, L"wrapper.java.initmemory", 0);
        if(initMemory >= 1)
        {
          if(!(strings == ((signed int **)NULL)))
          {
            initMemory = initMemory > 1 ? initMemory : 1;
            void *return_value_malloc_1;
            return_value_malloc_1=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(5 + 10 + 1));
            strings[(signed long int)index] = (signed int *)return_value_malloc_1;
            if(strings[(signed long int)index] == ((signed int *)NULL))
            {
              outOfMemory(L"WBJCAI", 8);
              return -1;
            }

            _sntprintf(strings[(signed long int)index], (unsigned long int)(5 + 10 + 1), L"-Xms%dm", initMemory);
          }

          index = index + 1;
        }

        else
          initMemory = 3;
        maxMemory=getIntProperty(properties, L"wrapper.java.maxmemory", 0);
        if(maxMemory >= 1)
        {
          if(!(strings == ((signed int **)NULL)))
          {
            maxMemory = maxMemory > initMemory ? maxMemory : initMemory;
            void *return_value_malloc_2;
            return_value_malloc_2=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(5 + 10 + 1));
            strings[(signed long int)index] = (signed int *)return_value_malloc_2;
            if(strings[(signed long int)index] == ((signed int *)NULL))
            {
              outOfMemory(L"WBJCAI", 10);
              return -1;
            }

            _sntprintf(strings[(signed long int)index], (unsigned long int)(5 + 10 + 1), L"-Xmx%dm", maxMemory);
          }

          index = index + 1;
        }

        index=wrapperBuildJavaCommandArrayLibraryPath(strings, addQuotes, index);
        if(!(index >= 0))
          return -1;

        else
          if(wrapperData->environmentClasspath == 0)
          {
            index=wrapperBuildJavaCommandArrayClasspath(strings, addQuotes, index, classpath);
            if(index >= 0)
              goto __CPROVER_DUMP_L12;

            return -1;
          }

          else
          {

          __CPROVER_DUMP_L12:
            ;
            if(!(strings == ((signed int **)NULL)))
            {
              unsigned long int return_value_wcslen_3;
              return_value_wcslen_3=wcslen(wrapperData->key);
              void *return_value_malloc_4;
              return_value_malloc_4=malloc(sizeof(signed int) /*4ul*/  * ((unsigned long int)16 + return_value_wcslen_3 + (unsigned long int)1));
              strings[(signed long int)index] = (signed int *)return_value_malloc_4;
              if(strings[(signed long int)index] == ((signed int *)NULL))
              {
                outOfMemory(L"WBJCAI", 24);
                return -1;
              }

              if(!(addQuotes == 0))
              {
                unsigned long int return_value_wcslen_5;
                return_value_wcslen_5=wcslen(wrapperData->key);
                _sntprintf(strings[(signed long int)index], (unsigned long int)16 + return_value_wcslen_5 + (unsigned long int)1, L"-Dwrapper.key=\"%s\"", (const void *)wrapperData->key);
              }

              else
              {
                unsigned long int return_value_wcslen_6;
                return_value_wcslen_6=wcslen(wrapperData->key);
                _sntprintf(strings[(signed long int)index], (unsigned long int)16 + return_value_wcslen_6 + (unsigned long int)1, L"-Dwrapper.key=%s", (const void *)wrapperData->key);
              }
            }

            index = index + 1;
            if(wrapperData->backendType == 0x04)
            {
              if(!(strings == ((signed int **)NULL)))
              {
                void *return_value_malloc_7;
                return_value_malloc_7=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(22 + 1));
                strings[(signed long int)index] = (signed int *)return_value_malloc_7;
                if(strings[(signed long int)index] == ((signed int *)NULL))
                {
                  outOfMemory(L"WBJCAI", 25);
                  return -1;
                }

                _sntprintf(strings[(signed long int)index], (unsigned long int)(22 + 1), L"-Dwrapper.backend=pipe");
              }

              index = index + 1;
            }

            else
            {
              if(wrapperData->backendType == 0x02)
              {
                if(!(strings == ((signed int **)NULL)))
                {
                  void *return_value_malloc_8;
                  return_value_malloc_8=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(29 + 1));
                  strings[(signed long int)index] = (signed int *)return_value_malloc_8;
                  if(strings[(signed long int)index] == ((signed int *)NULL))
                  {
                    outOfMemory(L"WBJCAI", 261);
                    return -1;
                  }

                  _sntprintf(strings[(signed long int)index], (unsigned long int)(29 + 1), L"-Dwrapper.backend=socket_ipv6");
                }

                index = index + 1;
                if(!(strings == ((signed int **)NULL)))
                {
                  void *return_value_malloc_9;
                  return_value_malloc_9=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(35 + 1));
                  strings[(signed long int)index] = (signed int *)return_value_malloc_9;
                  if(strings[(signed long int)index] == ((signed int *)NULL))
                  {
                    outOfMemory(L"WBJCAI", 262);
                    return -1;
                  }

                  _sntprintf(strings[(signed long int)index], (unsigned long int)(35 + 1), L"-Djava.net.preferIPv6Addresses=TRUE");
                }

                index = index + 1;
              }

              if(!(strings == ((signed int **)NULL)))
              {
                void *return_value_malloc_10;
                return_value_malloc_10=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(15 + 5 + 1));
                strings[(signed long int)index] = (signed int *)return_value_malloc_10;
                if(strings[(signed long int)index] == ((signed int *)NULL))
                {
                  outOfMemory(L"WBJCAI", 26);
                  return -1;
                }

                _sntprintf(strings[(signed long int)index], (unsigned long int)(15 + 5 + 1), L"-Dwrapper.port=%d", (signed int)wrapperData->actualPort);
              }

              index = index + 1;
            }
            if(wrapperData->backendType == 3)
            {
              if(!(wrapperData->portAddress == ((signed int *)NULL)))
              {
                if(!(strings == ((signed int **)NULL)))
                {
                  unsigned long int return_value_wcslen_11;
                  return_value_wcslen_11=wcslen(L"-Dwrapper.port.address=");
                  unsigned long int return_value_wcslen_12;
                  return_value_wcslen_12=wcslen(wrapperData->portAddress);
                  void *return_value_malloc_13;
                  return_value_malloc_13=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_11 + return_value_wcslen_12 + (unsigned long int)1));
                  strings[(signed long int)index] = (signed int *)return_value_malloc_13;
                  if(strings[(signed long int)index] == ((signed int *)NULL))
                  {
                    outOfMemory(L"WBJCAI", 27);
                    return -1;
                  }

                  unsigned long int return_value_wcslen_14;
                  return_value_wcslen_14=wcslen(L"-Dwrapper.port.address=");
                  unsigned long int return_value_wcslen_15;
                  return_value_wcslen_15=wcslen(wrapperData->portAddress);
                  _sntprintf(strings[(signed long int)index], return_value_wcslen_14 + return_value_wcslen_15 + (unsigned long int)1, L"-Dwrapper.port.address=%s", wrapperData->portAddress);
                }

                index = index + 1;
              }

              if(wrapperData->jvmPort >= 0)
              {
                if(!(strings == ((signed int **)NULL)))
                {
                  void *return_value_malloc_16;
                  return_value_malloc_16=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(19 + 5 + 1));
                  strings[(signed long int)index] = (signed int *)return_value_malloc_16;
                  if(strings[(signed long int)index] == ((signed int *)NULL))
                  {
                    outOfMemory(L"WBJCAI", 28);
                    return -1;
                  }

                  _sntprintf(strings[(signed long int)index], (unsigned long int)(19 + 5 + 1), L"-Dwrapper.jvm.port=%d", (signed int)wrapperData->jvmPort);
                }

                index = index + 1;
              }

              if(!(strings == ((signed int **)NULL)))
              {
                void *return_value_malloc_17;
                return_value_malloc_17=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(23 + 5 + 1));
                strings[(signed long int)index] = (signed int *)return_value_malloc_17;
                if(strings[(signed long int)index] == ((signed int *)NULL))
                {
                  outOfMemory(L"WBJCAI", 29);
                  return -1;
                }

                _sntprintf(strings[(signed long int)index], (unsigned long int)(23 + 5 + 1), L"-Dwrapper.jvm.port.min=%d", (signed int)wrapperData->jvmPortMin);
              }

              index = index + 1;
              if(!(strings == ((signed int **)NULL)))
              {
                void *return_value_malloc_18;
                return_value_malloc_18=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(23 + 5 + 1));
                strings[(signed long int)index] = (signed int *)return_value_malloc_18;
                if(strings[(signed long int)index] == ((signed int *)NULL))
                {
                  outOfMemory(L"WBJCAI", 30);
                  return -1;
                }

                _sntprintf(strings[(signed long int)index], (unsigned long int)(23 + 5 + 1), L"-Dwrapper.jvm.port.max=%d", (signed int)wrapperData->jvmPortMax);
              }

              index = index + 1;
            }

            if(!(wrapperData->isDebugging == 0))
            {
              if(!(strings == ((signed int **)NULL)))
              {
                void *return_value_malloc_19;
                return_value_malloc_19=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(22 + 1));
                strings[(signed long int)index] = (signed int *)return_value_malloc_19;
                if(strings[(signed long int)index] == ((signed int *)NULL))
                {
                  outOfMemory(L"WBJCAI", 31);
                  return -1;
                }

                if(!(addQuotes == 0))
                  _sntprintf(strings[(signed long int)index], (unsigned long int)(22 + 1), L"-Dwrapper.debug=\"TRUE\"");

                else
                  _sntprintf(strings[(signed long int)index], (unsigned long int)(22 + 1), L"-Dwrapper.debug=TRUE");
              }

              index = index + 1;
            }

            signed int return_value_getBooleanProperty_21;
            return_value_getBooleanProperty_21=getBooleanProperty(properties, L"wrapper.disable_console_input", wrapperData->daemonize);
            if(!(return_value_getBooleanProperty_21 == 0))
            {
              if(!(strings == ((signed int **)NULL)))
              {
                void *return_value_malloc_20;
                return_value_malloc_20=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(38 + 1));
                strings[(signed long int)index] = (signed int *)return_value_malloc_20;
                if(strings[(signed long int)index] == ((signed int *)NULL))
                {
                  outOfMemory(L"WBJCAI", 32);
                  return -1;
                }

                if(!(addQuotes == 0))
                  _sntprintf(strings[(signed long int)index], (unsigned long int)(38 + 1), L"-Dwrapper.disable_console_input=\"TRUE\"");

                else
                  _sntprintf(strings[(signed long int)index], (unsigned long int)(38 + 1), L"-Dwrapper.disable_console_input=TRUE");
              }

              index = index + 1;
            }

            signed int return_value_getBooleanProperty_23;
            return_value_getBooleanProperty_23=getBooleanProperty(properties, L"wrapper.listener.force_stop", 0);
            if(!(return_value_getBooleanProperty_23 == 0))
            {
              if(!(strings == ((signed int **)NULL)))
              {
                void *return_value_malloc_22;
                return_value_malloc_22=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(38 + 1));
                strings[(signed long int)index] = (signed int *)return_value_malloc_22;
                if(strings[(signed long int)index] == ((signed int *)NULL))
                {
                  outOfMemory(L"WBJCAI", 33);
                  return -1;
                }

                if(!(addQuotes == 0))
                  _sntprintf(strings[(signed long int)index], (unsigned long int)(38 + 1), L"-Dwrapper.listener.force_stop=\"TRUE\"");

                else
                  _sntprintf(strings[(signed long int)index], (unsigned long int)(38 + 1), L"-Dwrapper.listener.force_stop=TRUE");
              }

              index = index + 1;
            }

            if(!(strings == ((signed int **)NULL)))
            {
              void *return_value_malloc_24;
              return_value_malloc_24=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(24 + 1));
              strings[(signed long int)index] = (signed int *)return_value_malloc_24;
              if(strings[(signed long int)index] == ((signed int *)NULL))
              {
                outOfMemory(L"WBJCAI", 34);
                return -1;
              }

              _sntprintf(strings[(signed long int)index], (unsigned long int)(24 + 1), L"-Dwrapper.pid=%d", wrapperData->wrapperPID);
            }

            index = index + 1;
            if(!(wrapperData->useSystemTime == 0))
            {
              if(!(strings == ((signed int **)NULL)))
              {
                void *return_value_malloc_25;
                return_value_malloc_25=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(32 + 1));
                strings[(signed long int)index] = (signed int *)return_value_malloc_25;
                if(strings[(signed long int)index] == ((signed int *)NULL))
                {
                  outOfMemory(L"WBJCAI", 35);
                  return -1;
                }

                if(!(addQuotes == 0))
                  _sntprintf(strings[(signed long int)index], (unsigned long int)(32 + 1), L"-Dwrapper.use_system_time=\"TRUE\"");

                else
                  _sntprintf(strings[(signed long int)index], (unsigned long int)(32 + 1), L"-Dwrapper.use_system_time=TRUE");
              }

              index = index + 1;
            }

            else
            {
              if(!(wrapperData->timerFastThreshold == 1728000))
              {
                if(!(strings == ((signed int **)NULL)))
                {
                  void *return_value_malloc_26;
                  return_value_malloc_26=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(43 + 1));
                  strings[(signed long int)index] = (signed int *)return_value_malloc_26;
                  if(strings[(signed long int)index] == ((signed int *)NULL))
                  {
                    outOfMemory(L"WBJCAI", 36);
                    return -1;
                  }

                  if(!(addQuotes == 0))
                    _sntprintf(strings[(signed long int)index], (unsigned long int)(43 + 1), L"-Dwrapper.timer_fast_threshold=\"%d\"", (wrapperData->timerFastThreshold * 100) / 1000);

                  else
                    _sntprintf(strings[(signed long int)index], (unsigned long int)(43 + 1), L"-Dwrapper.timer_fast_threshold=%d", (wrapperData->timerFastThreshold * 100) / 1000);
                }

                index = index + 1;
              }

              if(!(wrapperData->timerSlowThreshold == 1728000))
              {
                if(!(strings == ((signed int **)NULL)))
                {
                  void *return_value_malloc_27;
                  return_value_malloc_27=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(43 + 1));
                  strings[(signed long int)index] = (signed int *)return_value_malloc_27;
                  if(strings[(signed long int)index] == ((signed int *)NULL))
                  {
                    outOfMemory(L"WBJCAI", 37);
                    return -1;
                  }

                  if(!(addQuotes == 0))
                    _sntprintf(strings[(signed long int)index], (unsigned long int)(43 + 1), L"-Dwrapper.timer_slow_threshold=\"%d\"", (wrapperData->timerSlowThreshold * 100) / 1000);

                  else
                    _sntprintf(strings[(signed long int)index], (unsigned long int)(43 + 1), L"-Dwrapper.timer_slow_threshold=%d", (wrapperData->timerSlowThreshold * 100) / 1000);
                }

                index = index + 1;
              }

            }
            if(!(strings == ((signed int **)NULL)))
            {
              unsigned long int return_value_wcslen_28;
              return_value_wcslen_28=wcslen(wrapperVersion);
              void *return_value_malloc_29;
              return_value_malloc_29=malloc(sizeof(signed int) /*4ul*/  * ((unsigned long int)20 + return_value_wcslen_28 + (unsigned long int)1));
              strings[(signed long int)index] = (signed int *)return_value_malloc_29;
              if(strings[(signed long int)index] == ((signed int *)NULL))
              {
                outOfMemory(L"WBJCAI", 37);
                return -1;
              }

              if(!(addQuotes == 0))
              {
                unsigned long int return_value_wcslen_30;
                return_value_wcslen_30=wcslen(wrapperVersion);
                _sntprintf(strings[(signed long int)index], (unsigned long int)20 + return_value_wcslen_30 + (unsigned long int)1, L"-Dwrapper.version=\"%s\"", wrapperVersion);
              }

              else
              {
                unsigned long int return_value_wcslen_31;
                return_value_wcslen_31=wcslen(wrapperVersion);
                _sntprintf(strings[(signed long int)index], (unsigned long int)20 + return_value_wcslen_31 + (unsigned long int)1, L"-Dwrapper.version=%s", wrapperVersion);
              }
            }

            index = index + 1;
            if(!(strings == ((signed int **)NULL)))
            {
              unsigned long int return_value_wcslen_32;
              return_value_wcslen_32=wcslen(wrapperData->nativeLibrary);
              void *return_value_malloc_33;
              return_value_malloc_33=malloc(sizeof(signed int) /*4ul*/  * ((unsigned long int)27 + return_value_wcslen_32 + (unsigned long int)1));
              strings[(signed long int)index] = (signed int *)return_value_malloc_33;
              if(strings[(signed long int)index] == ((signed int *)NULL))
              {
                outOfMemory(L"WBJCAI", 38);
                return -1;
              }

              if(!(addQuotes == 0))
              {
                unsigned long int return_value_wcslen_34;
                return_value_wcslen_34=wcslen(wrapperData->nativeLibrary);
                _sntprintf(strings[(signed long int)index], (unsigned long int)27 + return_value_wcslen_34 + (unsigned long int)1, L"-Dwrapper.native_library=\"%s\"", wrapperData->nativeLibrary);
              }

              else
              {
                unsigned long int return_value_wcslen_35;
                return_value_wcslen_35=wcslen(wrapperData->nativeLibrary);
                _sntprintf(strings[(signed long int)index], (unsigned long int)27 + return_value_wcslen_35 + (unsigned long int)1, L"-Dwrapper.native_library=%s", wrapperData->nativeLibrary);
              }
            }

            index = index + 1;
            if(!(strings == ((signed int **)NULL)))
            {
              unsigned long int return_value_wcslen_36;
              return_value_wcslen_36=wcslen(wrapperArch);
              void *return_value_malloc_37;
              return_value_malloc_37=malloc(sizeof(signed int) /*4ul*/  * ((unsigned long int)17 + return_value_wcslen_36 + (unsigned long int)1));
              strings[(signed long int)index] = (signed int *)return_value_malloc_37;
              if(strings[(signed long int)index] == ((signed int *)NULL))
              {
                outOfMemory(L"WBJCAI", 39);
                return -1;
              }

              if(!(addQuotes == 0))
              {
                unsigned long int return_value_wcslen_38;
                return_value_wcslen_38=wcslen(wrapperArch);
                _sntprintf(strings[(signed long int)index], (unsigned long int)17 + return_value_wcslen_38 + (unsigned long int)1, L"-Dwrapper.arch=\"%s\"", wrapperArch);
              }

              else
              {
                unsigned long int return_value_wcslen_39;
                return_value_wcslen_39=wcslen(wrapperArch);
                _sntprintf(strings[(signed long int)index], (unsigned long int)17 + return_value_wcslen_39 + (unsigned long int)1, L"-Dwrapper.arch=%s", wrapperArch);
              }
            }

            index = index + 1;
            if(!((2 & wrapperData->ignoreSignals) == 0))
            {
              if(!(strings == ((signed int **)NULL)))
              {
                void *return_value_malloc_40;
                return_value_malloc_40=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(31 + 1));
                strings[(signed long int)index] = (signed int *)return_value_malloc_40;
                if(strings[(signed long int)index] == ((signed int *)NULL))
                {
                  outOfMemory(L"WBJCAI", 40);
                  return -1;
                }

                if(!(addQuotes == 0))
                  _sntprintf(strings[(signed long int)index], (unsigned long int)(31 + 1), L"-Dwrapper.ignore_signals=\"TRUE\"");

                else
                  _sntprintf(strings[(signed long int)index], (unsigned long int)(31 + 1), L"-Dwrapper.ignore_signals=TRUE");
              }

              index = index + 1;
            }

            if(wrapperData->isConsole == 0)
            {
              if(!(strings == ((signed int **)NULL)))
              {
                void *return_value_malloc_41;
                return_value_malloc_41=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(24 + 1));
                strings[(signed long int)index] = (signed int *)return_value_malloc_41;
                if(strings[(signed long int)index] == ((signed int *)NULL))
                {
                  outOfMemory(L"WBJCAI", 41);
                  return -1;
                }

                if(!(addQuotes == 0))
                  _sntprintf(strings[(signed long int)index], (unsigned long int)(24 + 1), L"-Dwrapper.service=\"TRUE\"");

                else
                  _sntprintf(strings[(signed long int)index], (unsigned long int)(24 + 1), L"-Dwrapper.service=TRUE");
              }

              index = index + 1;
            }

            if(!(wrapperData->isTestsDisabled == 0))
            {
              if(!(strings == ((signed int **)NULL)))
              {
                void *return_value_malloc_42;
                return_value_malloc_42=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(30 + 1));
                strings[(signed long int)index] = (signed int *)return_value_malloc_42;
                if(strings[(signed long int)index] == ((signed int *)NULL))
                {
                  outOfMemory(L"WBJCAI", 42);
                  return -1;
                }

                if(!(addQuotes == 0))
                  _sntprintf(strings[(signed long int)index], (unsigned long int)(30 + 1), L"-Dwrapper.disable_tests=\"TRUE\"");

                else
                  _sntprintf(strings[(signed long int)index], (unsigned long int)(30 + 1), L"-Dwrapper.disable_tests=TRUE");
              }

              index = index + 1;
            }

            if(!(wrapperData->isShutdownHookDisabled == 0))
            {
              if(!(strings == ((signed int **)NULL)))
              {
                void *return_value_malloc_43;
                return_value_malloc_43=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(38 + 1));
                strings[(signed long int)index] = (signed int *)return_value_malloc_43;
                if(strings[(signed long int)index] == ((signed int *)NULL))
                {
                  outOfMemory(L"WBJCAI", 43);
                  return -1;
                }

                if(!(addQuotes == 0))
                  _sntprintf(strings[(signed long int)index], (unsigned long int)(38 + 1), L"-Dwrapper.disable_shutdown_hook=\"TRUE\"");

                else
                  _sntprintf(strings[(signed long int)index], (unsigned long int)(38 + 1), L"-Dwrapper.disable_shutdown_hook=TRUE");
              }

              index = index + 1;
            }

            if(!(strings == ((signed int **)NULL)))
            {
              void *return_value_malloc_44;
              return_value_malloc_44=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(24 + 20 + 1));
              strings[(signed long int)index] = (signed int *)return_value_malloc_44;
              if(strings[(signed long int)index] == ((signed int *)NULL))
              {
                outOfMemory(L"WBJCAI", 44);
                return -1;
              }

              if(!(addQuotes == 0))
                _sntprintf(strings[(signed long int)index], (unsigned long int)(24 + 20 + 1), L"-Dwrapper.cpu.timeout=\"%d\"", wrapperData->cpuTimeout);

              else
                _sntprintf(strings[(signed long int)index], (unsigned long int)(24 + 20 + 1), L"-Dwrapper.cpu.timeout=%d", wrapperData->cpuTimeout);
            }

            index = index + 1;
            prop=getStringProperty(properties, L"wrapper.java.outfile", (const signed int *)(void *)0);
            if(!(prop == ((const signed int *)NULL)))
            {
              if(!(strings == ((signed int **)NULL)))
              {
                unsigned long int return_value_wcslen_45;
                return_value_wcslen_45=wcslen(prop);
                void *return_value_malloc_46;
                return_value_malloc_46=malloc(sizeof(signed int) /*4ul*/  * ((unsigned long int)25 + return_value_wcslen_45 + (unsigned long int)1));
                strings[(signed long int)index] = (signed int *)return_value_malloc_46;
                if(strings[(signed long int)index] == ((signed int *)NULL))
                {
                  outOfMemory(L"WBJCAI", 46);
                  return -1;
                }

                if(!(addQuotes == 0))
                {
                  unsigned long int return_value_wcslen_47;
                  return_value_wcslen_47=wcslen(prop);
                  _sntprintf(strings[(signed long int)index], (unsigned long int)25 + return_value_wcslen_47 + (unsigned long int)1, L"-Dwrapper.java.outfile=\"%s\"", prop);
                }

                else
                {
                  unsigned long int return_value_wcslen_48;
                  return_value_wcslen_48=wcslen(prop);
                  _sntprintf(strings[(signed long int)index], (unsigned long int)25 + return_value_wcslen_48 + (unsigned long int)1, L"-Dwrapper.java.outfile=%s", prop);
                }
              }

              index = index + 1;
            }

            prop=getStringProperty(properties, L"wrapper.java.errfile", (const signed int *)(void *)0);
            if(!(prop == ((const signed int *)NULL)))
            {
              if(!(strings == ((signed int **)NULL)))
              {
                unsigned long int return_value_wcslen_49;
                return_value_wcslen_49=wcslen(prop);
                void *return_value_malloc_50;
                return_value_malloc_50=malloc(sizeof(signed int) /*4ul*/  * ((unsigned long int)25 + return_value_wcslen_49 + (unsigned long int)1));
                strings[(signed long int)index] = (signed int *)return_value_malloc_50;
                if(strings[(signed long int)index] == ((signed int *)NULL))
                {
                  outOfMemory(L"WBJCAI", 47);
                  return -1;
                }

                if(!(addQuotes == 0))
                {
                  unsigned long int return_value_wcslen_51;
                  return_value_wcslen_51=wcslen(prop);
                  _sntprintf(strings[(signed long int)index], (unsigned long int)25 + return_value_wcslen_51 + (unsigned long int)1, L"-Dwrapper.java.errfile=\"%s\"", prop);
                }

                else
                {
                  unsigned long int return_value_wcslen_52;
                  return_value_wcslen_52=wcslen(prop);
                  _sntprintf(strings[(signed long int)index], (unsigned long int)25 + return_value_wcslen_52 + (unsigned long int)1, L"-Dwrapper.java.errfile=%s", prop);
                }
              }

              index = index + 1;
            }

            if(!(strings == ((signed int **)NULL)))
            {
              void *return_value_malloc_53;
              return_value_malloc_53=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(16 + 5 + 1));
              strings[(signed long int)index] = (signed int *)return_value_malloc_53;
              if(strings[(signed long int)index] == ((signed int *)NULL))
              {
                outOfMemory(L"WBJCAI", 48);
                return -1;
              }

              _sntprintf(strings[(signed long int)index], (unsigned long int)(16 + 5 + 1), L"-Dwrapper.jvmid=%d", wrapperData->jvmRestarts + 1);
            }

            index = index + 1;
            if(!(wrapperData->detachStarted == 0))
            {
              if(!(strings == ((signed int **)NULL)))
              {
                void *return_value_malloc_54;
                return_value_malloc_54=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(30 + 1));
                strings[(signed long int)index] = (signed int *)return_value_malloc_54;
                if(strings[(signed long int)index] == ((signed int *)NULL))
                {
                  outOfMemory(L"WBJCAI", 51);
                  return -1;
                }

                if(!(addQuotes == 0))
                  _sntprintf(strings[(signed long int)index], (unsigned long int)(30 + 1), L"-Dwrapper.detachStarted=\"TRUE\"");

                else
                  _sntprintf(strings[(signed long int)index], (unsigned long int)(30 + 1), L"-Dwrapper.detachStarted=TRUE");
              }

              index = index + 1;
            }

            prop=getStringProperty(properties, L"wrapper.java.mainclass", L"Main");
            signed int return_value_wcscmp_55;
            return_value_wcscmp_55=wcscmp(prop, L"org.tanukisoftware.wrapper.test.Main");
            if(return_value_wcscmp_55 == 0)
              thisIsTestWrapper = -1;

            else
              thisIsTestWrapper = 0;
            if(!(strings == ((signed int **)NULL)))
            {
              unsigned long int return_value_wcslen_56;
              return_value_wcslen_56=wcslen(prop);
              void *return_value_malloc_57;
              return_value_malloc_57=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_56 + (unsigned long int)1));
              strings[(signed long int)index] = (signed int *)return_value_malloc_57;
              if(strings[(signed long int)index] == ((signed int *)NULL))
              {
                outOfMemory(L"WBJCAI", 52);
                return -1;
              }

              unsigned long int return_value_wcslen_58;
              return_value_wcslen_58=wcslen(prop);
              _sntprintf(strings[(signed long int)index], return_value_wcslen_58 + (unsigned long int)1, L"%s", prop);
            }

            index = index + 1;
            index=wrapperBuildJavaCommandArrayAppParameters(strings, addQuotes, index, thisIsTestWrapper);
            if(!(index >= 0))
              return -1;

            else
            {
              index=wrapperLoadParameterFile(strings, addQuotes, detectDebugJVM, index, L"wrapper.app.parameter_file", 0);
              if(!(index >= 0))
                return -1;

              else
                return index;
            }
          }
      }
    }
  }
}

// wrapperBuildJavaCommandArrayJavaAdditional
// file wrapper.c line 5557
signed int wrapperBuildJavaCommandArrayJavaAdditional(signed int **strings, signed int addQuotes, signed int detectDebugJVM, signed int index)
{
  const signed int *prop;
  signed int i;
  unsigned long int len;
  signed int paramBuffer2[128l];
  signed int quotable;
  signed int defaultStripQuote;
  signed int stripQuote;
  signed int *propStripped;
  signed int **propertyNames;
  signed int **propertyValues;
  unsigned long int *propertyIndices;
  signed int return_value_getStringProperties_1;
  return_value_getStringProperties_1=getStringProperties(properties, L"wrapper.java.additional.", L"", wrapperData->ignoreSequenceGaps, 0, &propertyNames, &propertyValues, &propertyIndices);
  _Bool tmp_if_expr_13;
  signed int *return_value_wcsstr_12;
  _Bool tmp_if_expr_9;
  signed int *return_value_wcschr_8;
  if(!(return_value_getStringProperties_1 == 0))
    return -1;

  else
  {
    defaultStripQuote=getBooleanProperty(properties, L"wrapper.java.additional.default.stripquotes", 0);
    i = 0;
    while(!(propertyNames[(signed long int)i] == ((signed int *)NULL)))
    {
      prop = propertyValues[(signed long int)i];
      if(!(prop == ((const signed int *)NULL)))
      {
        unsigned long int return_value_wcslen_14;
        return_value_wcslen_14=wcslen(prop);
        if(return_value_wcslen_14 >= 1ul)
        {
          signed int *return_value_wcsstr_11;
          return_value_wcsstr_11=wcsstr(prop, L"-");
          if(return_value_wcsstr_11 == prop)
            tmp_if_expr_13 = (_Bool)1;

          else
          {
            return_value_wcsstr_12=wcsstr(prop, L"\"-");
            tmp_if_expr_13 = return_value_wcsstr_12 == prop ? (_Bool)1 : (_Bool)0;
          }
          if(!tmp_if_expr_13)
          {
            if(!(strings == ((signed int **)NULL)))
              log_printf(-1, 4, L"The value of property '%s', '%s' is not a valid argument to the JVM.  Skipping.", propertyNames[(signed long int)i], prop);

          }

          else
          {
            if(!(strings == ((signed int **)NULL)))
            {
              quotable=isQuotableProperty(properties, propertyNames[(signed long int)i]);
              prop=getStringProperty(properties, propertyNames[(signed long int)i], (const signed int *)(void *)0);
              propertyValues[(signed long int)i] = (signed int *)prop;
              if(prop == ((const signed int *)NULL))
              {
                freeStringProperties(propertyNames, propertyValues, propertyIndices);
                return -1;
              }

              _sntprintf(paramBuffer2, (unsigned long int)128, L"wrapper.java.additional.%lu.stripquotes", propertyIndices[(signed long int)i]);
              if(!(addQuotes == 0))
                stripQuote = 0;

              else
                stripQuote=getBooleanProperty(properties, paramBuffer2, defaultStripQuote);
              if(!(stripQuote == 0))
              {
                unsigned long int return_value_wcslen_2;
                return_value_wcslen_2=wcslen(prop);
                void *return_value_malloc_3;
                return_value_malloc_3=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_2 + (unsigned long int)1));
                propStripped = (signed int *)return_value_malloc_3;
                if(propStripped == ((signed int *)NULL))
                {
                  freeStringProperties(propertyNames, propertyValues, propertyIndices);
                  outOfMemory(L"WBJCAJA", 2);
                  return -1;
                }

                wrapperStripQuotes(prop, propStripped);
              }

              else
                propStripped = (signed int *)prop;
              if(!(quotable == 0) && !(addQuotes == 0))
              {
                return_value_wcschr_8=wcschr(propStripped, 32);
                tmp_if_expr_9 = return_value_wcschr_8 != ((signed int *)NULL) ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr_9 = (_Bool)0;
              if(tmp_if_expr_9)
              {
                len=wrapperQuoteValue(propStripped, (signed int *)(void *)0, (unsigned long int)0);
                void *return_value_malloc_4;
                return_value_malloc_4=malloc(sizeof(signed int) /*4ul*/  * len);
                strings[(signed long int)index] = (signed int *)return_value_malloc_4;
                if(strings[(signed long int)index] == ((signed int *)NULL))
                {
                  outOfMemory(L"WBJCAJA", 3);
                  freeStringProperties(propertyNames, propertyValues, propertyIndices);
                  if(!(stripQuote == 0))
                    free((void *)propStripped);

                  return -1;
                }

                wrapperQuoteValue(propStripped, strings[(signed long int)index], len);
              }

              else
              {
                unsigned long int return_value_wcslen_5;
                return_value_wcslen_5=wcslen(propStripped);
                void *return_value_malloc_6;
                return_value_malloc_6=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_5 + (unsigned long int)1));
                strings[(signed long int)index] = (signed int *)return_value_malloc_6;
                if(strings[(signed long int)index] == ((signed int *)NULL))
                {
                  outOfMemory(L"WBJCAJA", 4);
                  freeStringProperties(propertyNames, propertyValues, propertyIndices);
                  if(!(stripQuote == 0))
                    free((void *)propStripped);

                  return -1;
                }

                unsigned long int return_value_wcslen_7;
                return_value_wcslen_7=wcslen(propStripped);
                _sntprintf(strings[(signed long int)index], return_value_wcslen_7 + (unsigned long int)1, L"%s", propStripped);
              }
              if(!(addQuotes == 0))
                wrapperCheckQuotes(strings[(signed long int)index], propertyNames[(signed long int)i]);

              if(!(stripQuote == 0))
              {
                free((void *)propStripped);
                propStripped = (signed int *)(void *)0;
              }

              if(!(detectDebugJVM == 0))
              {
                signed int *return_value_wcsstr_10;
                return_value_wcsstr_10=wcsstr(strings[(signed long int)index], L"-Xdebug");
                if(return_value_wcsstr_10 == strings[(signed long int)index])
                  wrapperData->debugJVM = -1;

              }

            }

            index = index + 1;
          }
        }

        i = i + 1;
      }

    }
    freeStringProperties(propertyNames, propertyValues, propertyIndices);
    return index;
  }
}

// wrapperBuildJavaCommandArrayJavaCommand
// file wrapper.c line 5423
signed int wrapperBuildJavaCommandArrayJavaCommand(signed int **strings, signed int addQuotes, signed int detectDebugJVM, signed int index)
{
  const signed int *prop;
  signed int *c;
  _Bool tmp_if_expr_7;
  unsigned long int return_value_wcslen_6;
  unsigned long int return_value_wcslen_5;
  if(!(strings == ((signed int **)NULL)))
  {
    prop=getStringProperty(properties, L"wrapper.java.command", L"java");
    unsigned long int return_value_wcslen_1;
    return_value_wcslen_1=wcslen(prop);
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_1 + (unsigned long int)2 + (unsigned long int)1));
    strings[(signed long int)index] = (signed int *)return_value_malloc_2;
    if(strings[(signed long int)index] == ((signed int *)NULL))
    {
      outOfMemory(L"WBJCAJC", 3);
      return -1;
    }

    if(!(addQuotes == 0))
    {
      unsigned long int return_value_wcslen_3;
      return_value_wcslen_3=wcslen(prop);
      _sntprintf(strings[(signed long int)index], return_value_wcslen_3 + (unsigned long int)2 + (unsigned long int)1, L"\"%s\"", prop);
    }

    else
    {
      unsigned long int return_value_wcslen_4;
      return_value_wcslen_4=wcslen(prop);
      _sntprintf(strings[(signed long int)index], return_value_wcslen_4 + (unsigned long int)2 + (unsigned long int)1, L"%s", prop);
    }
    checkIfRegularExe(&strings[(signed long int)index]);
    if(!(detectDebugJVM == 0))
    {
      c=wcsstr(strings[(signed long int)index], L"jdb");
      if(!(c == ((signed int *)NULL)))
      {
        return_value_wcslen_6=wcslen(strings[(signed long int)index]);
        tmp_if_expr_7 = (unsigned long int)(unsigned int)(c - strings[(signed long int)index]) == (return_value_wcslen_6 - (unsigned long int)3) - (unsigned long int)1 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_7 = (_Bool)0;
      if(tmp_if_expr_7)
        wrapperData->debugJVM = -1;

      else
      {
        c=wcsstr(strings[(signed long int)index], L"jdb.exe");
        if(!(c == ((signed int *)NULL)))
        {
          return_value_wcslen_5=wcslen(strings[(signed long int)index]);
          if((unsigned long int)(unsigned int)(c - strings[(signed long int)index]) == return_value_wcslen_5 + 18446744073709551609ul + 18446744073709551615ul)
            wrapperData->debugJVM = -1;

        }

      }
    }

  }

  index = index + 1;
  return index;
}

// wrapperBuildJavaCommandArrayLibraryPath
// file wrapper.c line 5863
signed int wrapperBuildJavaCommandArrayLibraryPath(signed int **strings, signed int addQuotes, signed int index)
{
  const signed int *prop;
  signed int i;
  signed int j;
  unsigned long int len2;
  unsigned long int cpLen;
  unsigned long int cpLenAlloc;
  signed int *tmpString;
  signed int *systemPath;
  signed int **propertyNames;
  signed int **propertyValues;
  unsigned long int *propertyIndices;
  _Bool tmp_if_expr_10;
  unsigned long int return_value_wcslen_9;
  _Bool tmp_if_expr_19;
  unsigned long int return_value_wcslen_18;
  unsigned long int tmp_post_24;
  unsigned long int tmp_post_26;
  if(!(strings == ((signed int **)NULL)))
  {
    if(!(wrapperData->libraryPathAppendPath == 0))
    {
      systemPath=_tgetenv(L"LD_LIBRARY_PATH");
      if(!(systemPath == ((signed int *)NULL)))
      {
        if(!(addQuotes == 0))
        {
          i = 0;
          j = 0;
          while((_Bool)1)
          {
            if(!(systemPath[(signed long int)i] == 34))
            {
              systemPath[(signed long int)j] = systemPath[(signed long int)i];
              j = j + 1;
            }

            i = i + 1;
            if(systemPath[(signed long int)j] == 0)
              break;

          }
        }

      }

    }

    else
      systemPath = (signed int *)(void *)0;
    prop=getStringProperty(properties, L"wrapper.java.library.path", (const signed int *)(void *)0);
    if(!(prop == ((const signed int *)NULL)))
    {
      if(!(systemPath == ((signed int *)NULL)))
      {
        unsigned long int return_value_wcslen_1;
        return_value_wcslen_1=wcslen(prop);
        unsigned long int return_value_wcslen_2;
        return_value_wcslen_2=wcslen(systemPath);
        void *return_value_malloc_3;
        return_value_malloc_3=malloc(sizeof(signed int) /*4ul*/  * ((unsigned long int)22 + return_value_wcslen_1 + (unsigned long int)1 + return_value_wcslen_2 + (unsigned long int)1 + (unsigned long int)1));
        strings[(signed long int)index] = (signed int *)return_value_malloc_3;
        if(strings[(signed long int)index] == ((signed int *)NULL))
        {
          outOfMemory(L"WBJCALP", 1);
          free((void *)systemPath);
          return -1;
        }

        if(!(addQuotes == 0))
        {
          unsigned long int return_value_wcslen_8;
          return_value_wcslen_8=wcslen(systemPath);
          if(return_value_wcslen_8 >= 2ul)
          {
            return_value_wcslen_9=wcslen(systemPath);
            tmp_if_expr_10 = systemPath[(signed long int)(return_value_wcslen_9 - (unsigned long int)1)] == 92 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_10 = (_Bool)0;
          if(tmp_if_expr_10)
          {
            unsigned long int return_value_wcslen_4;
            return_value_wcslen_4=wcslen(prop);
            unsigned long int return_value_wcslen_5;
            return_value_wcslen_5=wcslen(systemPath);
            _sntprintf(strings[(signed long int)index], (unsigned long int)22 + return_value_wcslen_4 + (unsigned long int)1 + return_value_wcslen_5 + (unsigned long int)1 + (unsigned long int)1, L"-Djava.library.path=\"%s%c%s\\\"", prop, wrapperClasspathSeparator, systemPath);
          }

          else
          {
            unsigned long int return_value_wcslen_6;
            return_value_wcslen_6=wcslen(prop);
            unsigned long int return_value_wcslen_7;
            return_value_wcslen_7=wcslen(systemPath);
            _sntprintf(strings[(signed long int)index], (unsigned long int)22 + return_value_wcslen_6 + (unsigned long int)1 + return_value_wcslen_7 + (unsigned long int)1 + (unsigned long int)1, L"-Djava.library.path=\"%s%c%s\"", prop, wrapperClasspathSeparator, systemPath);
          }
        }

        else
        {
          unsigned long int return_value_wcslen_11;
          return_value_wcslen_11=wcslen(prop);
          unsigned long int return_value_wcslen_12;
          return_value_wcslen_12=wcslen(systemPath);
          _sntprintf(strings[(signed long int)index], (unsigned long int)22 + return_value_wcslen_11 + (unsigned long int)1 + return_value_wcslen_12 + (unsigned long int)1 + (unsigned long int)1, L"-Djava.library.path=%s%c%s", prop, wrapperClasspathSeparator, systemPath);
        }
      }

      else
      {
        unsigned long int return_value_wcslen_13;
        return_value_wcslen_13=wcslen(prop);
        void *return_value_malloc_14;
        return_value_malloc_14=malloc(sizeof(signed int) /*4ul*/  * ((unsigned long int)22 + return_value_wcslen_13 + (unsigned long int)1 + (unsigned long int)1));
        strings[(signed long int)index] = (signed int *)return_value_malloc_14;
        if(strings[(signed long int)index] == ((signed int *)NULL))
        {
          outOfMemory(L"WBJCALP", 2);
          return -1;
        }

        if(!(addQuotes == 0))
        {
          unsigned long int return_value_wcslen_17;
          return_value_wcslen_17=wcslen(prop);
          if(return_value_wcslen_17 >= 2ul)
          {
            return_value_wcslen_18=wcslen(prop);
            tmp_if_expr_19 = prop[(signed long int)(return_value_wcslen_18 - (unsigned long int)1)] == 92 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_19 = (_Bool)0;
          if(tmp_if_expr_19)
          {
            unsigned long int return_value_wcslen_15;
            return_value_wcslen_15=wcslen(prop);
            _sntprintf(strings[(signed long int)index], (unsigned long int)22 + return_value_wcslen_15 + (unsigned long int)1 + (unsigned long int)1, L"-Djava.library.path=\"%s\\\"", prop);
          }

          else
          {
            unsigned long int return_value_wcslen_16;
            return_value_wcslen_16=wcslen(prop);
            _sntprintf(strings[(signed long int)index], (unsigned long int)22 + return_value_wcslen_16 + (unsigned long int)1 + (unsigned long int)1, L"-Djava.library.path=\"%s\"", prop);
          }
        }

        else
        {
          unsigned long int return_value_wcslen_20;
          return_value_wcslen_20=wcslen(prop);
          _sntprintf(strings[(signed long int)index], (unsigned long int)22 + return_value_wcslen_20 + (unsigned long int)1 + (unsigned long int)1, L"-Djava.library.path=%s", prop);
        }
      }
      if(!(addQuotes == 0))
        wrapperCheckQuotes(strings[(signed long int)index], L"wrapper.java.library.path");

    }

    else
    {
      cpLen = (unsigned long int)0;
      cpLenAlloc = (unsigned long int)1024;
      void *return_value_malloc_21;
      return_value_malloc_21=malloc(sizeof(signed int) /*4ul*/  * cpLenAlloc);
      strings[(signed long int)index] = (signed int *)return_value_malloc_21;
      if(strings[(signed long int)index] == ((signed int *)NULL))
      {
        outOfMemory(L"WBJCALP", 3);
        if(!(systemPath == ((signed int *)NULL)))
          free((void *)systemPath);

        return -1;
      }

      _sntprintf(&strings[(signed long int)index][(signed long int)cpLen], cpLenAlloc - cpLen, L"-Djava.library.path=");
      cpLen = cpLen + (unsigned long int)20;
      if(!(addQuotes == 0))
      {
        _sntprintf(&strings[(signed long int)index][(signed long int)cpLen], cpLenAlloc - cpLen, L"\"");
        cpLen = cpLen + 1ul;
      }

      signed int return_value_getStringProperties_22;
      return_value_getStringProperties_22=getStringProperties(properties, L"wrapper.java.library.path.", L"", wrapperData->ignoreSequenceGaps, 0, &propertyNames, &propertyValues, &propertyIndices);
      if(!(return_value_getStringProperties_22 == 0))
      {
        if(!(systemPath == ((signed int *)NULL)))
          free((void *)systemPath);

        return -1;
      }

      i = 0;
      j = 0;
      while(!(propertyNames[(signed long int)i] == ((signed int *)NULL)))
      {
        prop = propertyValues[(signed long int)i];
        if(!(prop == ((const signed int *)NULL)))
        {
          len2=wcslen(prop);
          if(len2 >= 1ul)
          {
            while(!(cpLenAlloc >= 3ul + cpLen + len2))
            {
              tmpString = strings[(signed long int)index];
              cpLenAlloc = cpLenAlloc + (unsigned long int)1024;
              void *return_value_malloc_23;
              return_value_malloc_23=malloc(sizeof(signed int) /*4ul*/  * cpLenAlloc);
              strings[(signed long int)index] = (signed int *)return_value_malloc_23;
              if(strings[(signed long int)index] == ((signed int *)NULL))
              {
                outOfMemory(L"WBJCALP", 4);
                if(!(systemPath == ((signed int *)NULL)))
                  free((void *)systemPath);

                return -1;
              }

              _sntprintf(strings[(signed long int)index], cpLenAlloc, L"%s", tmpString);
              free((void *)tmpString);
              tmpString = (signed int *)(void *)0;
            }
            if(j >= 1)
            {
              tmp_post_24 = cpLen;
              cpLen = cpLen + 1ul;
              strings[(signed long int)index][(signed long int)tmp_post_24] = wrapperClasspathSeparator;
            }

            _sntprintf(&strings[(signed long int)index][(signed long int)cpLen], cpLenAlloc - cpLen, L"%s", prop);
            cpLen = cpLen + len2;
            j = j + 1;
          }

          i = i + 1;
        }

      }
      freeStringProperties(propertyNames, propertyValues, propertyIndices);
      if(!(systemPath == ((signed int *)NULL)))
      {
        len2=wcslen(systemPath);
        if(len2 >= 1ul)
        {
          while(!(cpLenAlloc >= 3ul + cpLen + len2))
          {
            tmpString = strings[(signed long int)index];
            cpLenAlloc = cpLenAlloc + (unsigned long int)1024;
            void *return_value_malloc_25;
            return_value_malloc_25=malloc(sizeof(signed int) /*4ul*/  * cpLenAlloc);
            strings[(signed long int)index] = (signed int *)return_value_malloc_25;
            if(strings[(signed long int)index] == ((signed int *)NULL))
            {
              outOfMemory(L"WBJCALP", 5);
              free((void *)systemPath);
              return -1;
            }

            _sntprintf(strings[(signed long int)index], cpLenAlloc, L"%s", tmpString);
            free((void *)tmpString);
            tmpString = (signed int *)(void *)0;
          }
          if(j >= 1)
          {
            tmp_post_26 = cpLen;
            cpLen = cpLen + 1ul;
            strings[(signed long int)index][(signed long int)tmp_post_26] = wrapperClasspathSeparator;
          }

          _sntprintf(&strings[(signed long int)index][(signed long int)cpLen], cpLenAlloc - cpLen, L"%s", systemPath);
          cpLen = cpLen + len2;
          j = j + 1;
        }

      }

      if(j == 0)
      {
        _sntprintf(&strings[(signed long int)index][(signed long int)cpLen], cpLenAlloc - cpLen, L"./");
        cpLen = cpLen + 1ul;
      }

      if(!(addQuotes == 0))
      {
        if(strings[(signed long int)index][-1l + (signed long int)cpLen] == 92)
        {
          _sntprintf(&strings[(signed long int)index][(signed long int)cpLen], cpLenAlloc - cpLen, L"\\");
          cpLen = cpLen + 1ul;
        }

        _sntprintf(&strings[(signed long int)index][(signed long int)cpLen], cpLenAlloc - cpLen, L"\"");
        cpLen = cpLen + 1ul;
      }

      if(!(addQuotes == 0))
        wrapperCheckQuotes(strings[(signed long int)index], L"wrapper.java.library.path.<n>");

    }
    if(!(systemPath == ((signed int *)NULL)))
      free((void *)systemPath);

  }

  index = index + 1;
  return index;
}

// wrapperBuildKey
// file wrapper.c line 7238
extern void wrapperBuildKey()
{
  signed int i;
  unsigned long int kcNum;
  unsigned long int num;
  static signed int seeded = 0;
  if(seeded == 0)
  {
    signed long int return_value_time_1;
    return_value_time_1=time((signed long int *)(void *)0);
    srand((unsigned int)return_value_time_1);
    seeded = -1;
  }

  num=wcslen(keyChars);
  i = 0;
  for( ; !(i >= 16); i = i + 1)
  {
    {
      signed int return_value_rand_2;
      return_value_rand_2=rand();
      kcNum = (unsigned long int)(((unsigned long int)(return_value_rand_2 >> 8) * num) / (unsigned long int)(2147483647 >> 8));
    }
    if(kcNum >= num)
      kcNum = num - (unsigned long int)1;

    wrapperData->key[(signed long int)i] = keyChars[(signed long int)kcNum];
  }
  wrapperData->key[(signed long int)16] = 0;
}

// wrapperBuildUnixDaemonInfo
// file wrapper.c line 531
signed int wrapperBuildUnixDaemonInfo()
{
  if(wrapperData->configured == 0)
  {
    wrapperData->daemonize=getBooleanProperty(properties, L"wrapper.daemonize", 0);
    const signed int *return_value_getStringProperty_1;
    return_value_getStringProperty_1=getStringProperty(properties, L"wrapper.signal.mode.hup", (const signed int *)(void *)0);
    wrapperData->signalHUPMode=getSignalMode(return_value_getStringProperty_1, (signed int)(char)103);
    const signed int *return_value_getStringProperty_2;
    return_value_getStringProperty_2=getStringProperty(properties, L"wrapper.signal.mode.usr1", (const signed int *)(void *)0);
    wrapperData->signalUSR1Mode=getSignalMode(return_value_getStringProperty_2, (signed int)(char)103);
    const signed int *return_value_getStringProperty_3;
    return_value_getStringProperty_3=getStringProperty(properties, L"wrapper.signal.mode.usr2", (const signed int *)(void *)0);
    wrapperData->signalUSR2Mode=getSignalMode(return_value_getStringProperty_3, (signed int)(char)103);
  }

  return 0;
}

// wrapperCalculateEnvironmentLength
// file wrapper_unix.c line 1163
unsigned long int wrapperCalculateEnvironmentLength()
{
  char **environment = environ;
  unsigned long int i;
  unsigned long int len;
  unsigned long int lenTotal;
  i = (unsigned long int)0;
  lenTotal = (unsigned long int)0;
  for( ; !(environment[(signed long int)i] == ((char *)NULL)); i = i + 1ul)
  {
    len=mbstowcs((signed int *)(void *)0, environment[(signed long int)i], (unsigned long int)0);
    if(!(len == 18446744073709551615ul))
      lenTotal = lenTotal + len + (unsigned long int)1 + sizeof(char *) /*8ul*/ ;

  }
  lenTotal = lenTotal + sizeof(char *) /*8ul*/  + sizeof(char *) /*8ul*/ ;
  return lenTotal;
}

// wrapperCheckQuotes
// file wrapper.c line 5097
extern signed int wrapperCheckQuotes(const signed int *value, const signed int *propName)
{
  unsigned long int len;
  len=wcslen(value);
  unsigned long int in = (unsigned long int)0;
  unsigned long int in2 = (unsigned long int)0;
  signed int inQuote = 0;
  signed int escaped;
  for( ; !(in >= len); in = in + 1ul)
    if(value[(signed long int)in] == 34)
    {
      in2 = in - (unsigned long int)1;
      escaped = 0;
      while(value[(signed long int)in2] == 92)
      {
        escaped = (signed int)!(escaped != 0);
        if(in2 >= 1ul)
          in2 = in2 - 1ul;

        else
          break;
      }
      if(escaped == 0)
        inQuote = (signed int)!(inQuote != 0);

    }

    else
      if(inQuote == 0)
      {
        if(value[(signed long int)in] == 32)
        {
          log_printf(-1, 5, L"The value of property '%s', '%s' contains unquoted spaces and will most likely result in an invalid java command line.", propName, value);
          return 1;
        }

      }

  if(!(inQuote == 0))
  {
    log_printf(-1, 5, L"The value of property '%s', '%s' contains an unterminated quote and will most likely result in an invalid java command line.", propName, value);
    return 1;
  }

  else
    return 0;
}

// wrapperCheckServerBackend
// file wrapper.c line 2303
extern signed int wrapperCheckServerBackend(signed int forceOpen)
{
  _Bool tmp_if_expr_11;
  if(protocolActiveServerSD == -1 && !((3 & wrapperData->backendType) == 0))
    tmp_if_expr_11 = (_Bool)1;

  else
    tmp_if_expr_11 = (wrapperData->backendType == 0x04 ? (protocolActiveServerPipeStarted == 0 ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_1;
  if(tmp_if_expr_11)
  {
    if(forceOpen == 0)
    {
      if(wrapperData->jState == 72)
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = wrapperData->jState == 73 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = wrapperData->jState == 74 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_3)
        tmp_if_expr_4 = (_Bool)1;

      else
        tmp_if_expr_4 = wrapperData->jState == 82 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_4)
        tmp_if_expr_5 = (_Bool)1;

      else
        tmp_if_expr_5 = wrapperData->jState == 83 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_5)
        tmp_if_expr_6 = (_Bool)1;

      else
        tmp_if_expr_6 = wrapperData->jState == 84 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_6)
        tmp_if_expr_7 = (_Bool)1;

      else
        tmp_if_expr_7 = wrapperData->jState == 85 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_7)
        tmp_if_expr_8 = (_Bool)1;

      else
        tmp_if_expr_8 = wrapperData->jState == 70 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_8)
        tmp_if_expr_9 = (_Bool)1;

      else
        tmp_if_expr_9 = wrapperData->jState == 71 ? (_Bool)1 : (_Bool)0;
      tmp_if_expr_10 = tmp_if_expr_9 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_10 = (_Bool)0;
    if(tmp_if_expr_10)
      return 0;

    else
    {
      protocolStartServer();
      if(protocolActiveServerSD == -1 && !((3 & wrapperData->backendType) == 0))
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = (wrapperData->backendType == 0x04 ? (protocolActiveServerPipeStarted == 0 ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
        return 0;

      else
        return -1;
    }
  }

  else
    return -1;
}

// wrapperCorrectWindowsPath
// file wrapper_i18n.h line 504
extern void wrapperCorrectWindowsPath(signed int *filename)
{
  ;
}

// wrapperDataDispose
// file wrapper.c line 2824
void wrapperDataDispose()
{
  signed int i;
  if(!(wrapperData->workingDir == ((signed int *)NULL)))
  {
    free((void *)wrapperData->workingDir);
    wrapperData->workingDir = (signed int *)(void *)0;
  }

  if(!(wrapperData->originalWorkingDir == ((signed int *)NULL)))
  {
    free((void *)wrapperData->originalWorkingDir);
    wrapperData->originalWorkingDir = (signed int *)(void *)0;
  }

  if(!(wrapperData->configFile == ((signed int *)NULL)))
  {
    free((void *)wrapperData->configFile);
    wrapperData->configFile = (signed int *)(void *)0;
  }

  if(!(wrapperData->initialPath == ((signed int *)NULL)))
  {
    free((void *)wrapperData->initialPath);
    wrapperData->initialPath = (signed int *)(void *)0;
  }

  if(!(wrapperData->classpath == ((signed int *)NULL)))
  {
    free((void *)wrapperData->classpath);
    wrapperData->classpath = (signed int *)(void *)0;
  }

  if(!(wrapperData->portAddress == ((signed int *)NULL)))
  {
    free((void *)wrapperData->portAddress);
    wrapperData->portAddress = (signed int *)(void *)0;
  }

  if(!(wrapperData->jvmVersionCommand == ((signed int **)NULL)))
  {
    i = 0;
    for( ; !(wrapperData->jvmVersionCommand[(signed long int)i] == ((signed int *)NULL)); i = i + 1)
    {
      free((void *)wrapperData->jvmVersionCommand[(signed long int)i]);
      wrapperData->jvmVersionCommand[(signed long int)i] = (signed int *)(void *)0;
    }
    free((void *)wrapperData->jvmVersionCommand);
    wrapperData->jvmVersionCommand = (signed int **)(void *)0;
  }

  if(!(wrapperData->jvmCommand == ((signed int **)NULL)))
  {
    i = 0;
    for( ; !(wrapperData->jvmCommand[(signed long int)i] == ((signed int *)NULL)); i = i + 1)
    {
      free((void *)wrapperData->jvmCommand[(signed long int)i]);
      wrapperData->jvmCommand[(signed long int)i] = (signed int *)(void *)0;
    }
    free((void *)wrapperData->jvmCommand);
    wrapperData->jvmCommand = (signed int **)(void *)0;
  }

  if(wrapperData->outputFilterCount >= 1)
  {
    i = 0;
    for( ; !(i >= wrapperData->outputFilterCount); i = i + 1)
    {
      if(!(wrapperData->outputFilters[(signed long int)i] == ((signed int *)NULL)))
      {
        free((void *)wrapperData->outputFilters[(signed long int)i]);
        wrapperData->outputFilters[(signed long int)i] = (signed int *)(void *)0;
      }

      if(!(wrapperData->outputFilterActionLists[(signed long int)i] == ((signed int *)NULL)))
      {
        free((void *)wrapperData->outputFilterActionLists[(signed long int)i]);
        wrapperData->outputFilterActionLists[(signed long int)i] = (signed int *)(void *)0;
      }

    }
    if(!(wrapperData->outputFilters == ((signed int **)NULL)))
    {
      free((void *)wrapperData->outputFilters);
      wrapperData->outputFilters = (signed int **)(void *)0;
    }

    if(!(wrapperData->outputFilterActionLists == ((signed int **)NULL)))
    {
      free((void *)wrapperData->outputFilterActionLists);
      wrapperData->outputFilterActionLists = (signed int **)(void *)0;
    }

    if(!(wrapperData->outputFilterMessages == ((signed int **)NULL)))
    {
      free((void *)wrapperData->outputFilterMessages);
      wrapperData->outputFilterMessages = (signed int **)(void *)0;
    }

    if(!(wrapperData->outputFilterAllowWildFlags == ((signed int *)NULL)))
    {
      free((void *)wrapperData->outputFilterAllowWildFlags);
      wrapperData->outputFilterAllowWildFlags = (signed int *)(void *)0;
    }

    if(!(wrapperData->outputFilterMinLens == ((unsigned long int *)NULL)))
    {
      free((void *)wrapperData->outputFilterMinLens);
      wrapperData->outputFilterMinLens = (unsigned long int *)(void *)0;
    }

  }

  if(!(wrapperData->pidFilename == ((signed int *)NULL)))
  {
    free((void *)wrapperData->pidFilename);
    wrapperData->pidFilename = (signed int *)(void *)0;
  }

  if(!(wrapperData->lockFilename == ((signed int *)NULL)))
  {
    free((void *)wrapperData->lockFilename);
    wrapperData->lockFilename = (signed int *)(void *)0;
  }

  if(!(wrapperData->javaPidFilename == ((signed int *)NULL)))
  {
    free((void *)wrapperData->javaPidFilename);
    wrapperData->javaPidFilename = (signed int *)(void *)0;
  }

  if(!(wrapperData->javaIdFilename == ((signed int *)NULL)))
  {
    free((void *)wrapperData->javaIdFilename);
    wrapperData->javaIdFilename = (signed int *)(void *)0;
  }

  if(!(wrapperData->statusFilename == ((signed int *)NULL)))
  {
    free((void *)wrapperData->statusFilename);
    wrapperData->statusFilename = (signed int *)(void *)0;
  }

  if(!(wrapperData->javaStatusFilename == ((signed int *)NULL)))
  {
    free((void *)wrapperData->javaStatusFilename);
    wrapperData->javaStatusFilename = (signed int *)(void *)0;
  }

  if(!(wrapperData->commandFilename == ((signed int *)NULL)))
  {
    free((void *)wrapperData->commandFilename);
    wrapperData->commandFilename = (signed int *)(void *)0;
  }

  if(!(wrapperData->consoleTitle == ((signed int *)NULL)))
  {
    free((void *)wrapperData->consoleTitle);
    wrapperData->consoleTitle = (signed int *)(void *)0;
  }

  if(!(wrapperData->serviceName == ((signed int *)NULL)))
  {
    free((void *)wrapperData->serviceName);
    wrapperData->serviceName = (signed int *)(void *)0;
  }

  if(!(wrapperData->serviceDisplayName == ((signed int *)NULL)))
  {
    free((void *)wrapperData->serviceDisplayName);
    wrapperData->serviceDisplayName = (signed int *)(void *)0;
  }

  if(!(wrapperData->serviceDescription == ((signed int *)NULL)))
  {
    free((void *)wrapperData->serviceDescription);
    wrapperData->serviceDescription = (signed int *)(void *)0;
  }

  if(!(wrapperData->hostName == ((signed int *)NULL)))
  {
    free((void *)wrapperData->hostName);
    wrapperData->hostName = (signed int *)(void *)0;
  }

  if(!(wrapperData->confDir == ((signed int *)NULL)))
  {
    free((void *)wrapperData->confDir);
    wrapperData->confDir = (signed int *)(void *)0;
  }

  if(!(wrapperData->argConfFileDefault == 0))
  {
    if(!(wrapperData->argConfFile == ((signed int *)NULL)))
    {
      free((void *)wrapperData->argConfFile);
      wrapperData->argConfFile = (signed int *)(void *)0;
    }

  }

  if(!(wrapperData == ((struct WrapperConfig *)NULL)))
  {
    free((void *)wrapperData);
    wrapperData = (struct WrapperConfig *)(void *)0;
  }

}

// wrapperDetachJava
// file wrapper.h line 913
extern void wrapperDetachJava()
{
  wrapperSetJavaState(72, (unsigned int)0, -1);
}

// wrapperDispose
// file wrapper.c line 3006
extern void wrapperDispose()
{
  if(!(disposed == 0))
    _tprintf(L"wrapperDispose was called more than once.\n");

  else
  {
    disposed = -1;
    if(!(wrapperData->useJavaIOThread == 0))
      disposeJavaIO();

    if(wrapperData->useSystemTime == 0)
      disposeTimer();

    disposeProperties(properties);
    properties = (struct Properties *)(void *)0;
    disposeEnvironment();
    if(!(wrapperChildWorkBuffer == ((char *)NULL)))
    {
      free((void *)wrapperChildWorkBuffer);
      wrapperChildWorkBuffer = (char *)(void *)0;
    }

    if(!(protocolSendBuffer == ((char *)NULL)))
    {
      free((void *)protocolSendBuffer);
      protocolSendBuffer = (char *)(void *)0;
    }

    disposeLogging();
    wrapperDataDispose();
  }
}

// wrapperDumpCPUUsage
// file wrapper.h line 866
extern void wrapperDumpCPUUsage()
{
  struct rusage wUsage;
  struct rusage jUsage;
  signed int return_value_getrusage_2;
  return_value_getrusage_2=getrusage((enum __rusage_who)RUSAGE_SELF, &wUsage);
  if(!(return_value_getrusage_2 == 0))
  {
    const signed int *return_value_getLastErrorText_1;
    return_value_getLastErrorText_1=getLastErrorText();
    log_printf(-1, 5, L"Call to getrusage failed for Wrapper process: %s", return_value_getLastErrorText_1);
    goto __CPROVER_DUMP_L3;
  }

  signed int return_value_getrusage_4;
  return_value_getrusage_4=getrusage((enum __rusage_who)RUSAGE_CHILDREN, &jUsage);
  if(!(return_value_getrusage_4 == 0))
  {
    const signed int *return_value_getLastErrorText_3;
    return_value_getLastErrorText_3=getLastErrorText();
    log_printf(-1, 5, L"Call to getrusage failed for Java process: %s", return_value_getLastErrorText_3);
    goto __CPROVER_DUMP_L3;
  }

  log_printf(-1, 3, L"Wrapper CPU: system %ld.%03ld, user %ld.%03ld  Java CPU: system %ld.%03ld, user %ld.%03ld", wUsage.ru_stime.tv_sec, wUsage.ru_stime.tv_usec / (signed long int)1000, wUsage.ru_utime.tv_sec, wUsage.ru_utime.tv_usec / (signed long int)1000, jUsage.ru_stime.tv_sec, jUsage.ru_stime.tv_usec / (signed long int)1000, jUsage.ru_utime.tv_sec, jUsage.ru_utime.tv_usec / (signed long int)1000);

__CPROVER_DUMP_L3:
  ;
}

// wrapperDumpMemory
// file wrapper.h line 860
extern void wrapperDumpMemory()
{
  struct rusage wUsage;
  struct rusage jUsage;
  signed int return_value_getrusage_2;
  return_value_getrusage_2=getrusage((enum __rusage_who)RUSAGE_SELF, &wUsage);
  if(!(return_value_getrusage_2 == 0))
  {
    const signed int *return_value_getLastErrorText_1;
    return_value_getLastErrorText_1=getLastErrorText();
    log_printf(-1, 5, L"Call to getrusage failed for Wrapper process: %s", return_value_getLastErrorText_1);
    goto __CPROVER_DUMP_L3;
  }

  signed int return_value_getrusage_4;
  return_value_getrusage_4=getrusage((enum __rusage_who)RUSAGE_CHILDREN, &jUsage);
  if(!(return_value_getrusage_4 == 0))
  {
    const signed int *return_value_getLastErrorText_3;
    return_value_getLastErrorText_3=getLastErrorText();
    log_printf(-1, 5, L"Call to getrusage failed for Java process: %s", return_value_getLastErrorText_3);
    goto __CPROVER_DUMP_L3;
  }

  log_printf(-1, 3, L"Wrapper Memory: maxrss=%ld, ixrss=%ld, idrss=%ld, isrss=%ld, minflt=%ld, majflt=%ld, nswap=%ld, inblock=%ld, oublock=%ld, msgsnd=%ld, msgrcv=%ld, nsignals=%ld, nvcsw=%ld, nvcsw=%ld", wUsage._anon0.ru_maxrss, wUsage._anon1.ru_ixrss, wUsage._anon2.ru_idrss, wUsage._anon3.ru_isrss, wUsage._anon4.ru_minflt, wUsage._anon5.ru_majflt, wUsage._anon6.ru_nswap, wUsage._anon7.ru_inblock, wUsage._anon8.ru_oublock, wUsage._anon9.ru_msgsnd, wUsage._anon10.ru_msgrcv, wUsage._anon11.ru_nsignals, wUsage._anon12.ru_nvcsw, wUsage._anon12.ru_nvcsw);

__CPROVER_DUMP_L3:
  ;
}

// wrapperDumpMemoryBanner
// file wrapper.h line 854
extern void wrapperDumpMemoryBanner()
{
  ;
}

// wrapperEventLoop
// file wrapper.h line 973
extern void wrapperEventLoop()
{
  unsigned int nowTicks;
  signed int wrapperEventLoop__1__uptimeSeconds;
  unsigned int lastCycleTicks;
  lastCycleTicks=wrapperGetTicks();
  signed int nextSleep;
  wrapperData->anchorTimeoutTicks = lastCycleTicks;
  wrapperData->commandTimeoutTicks = lastCycleTicks;
  wrapperData->memoryOutputTimeoutTicks = lastCycleTicks;
  wrapperData->cpuOutputTimeoutTicks = lastCycleTicks;
  wrapperData->pageFaultOutputTimeoutTicks = lastCycleTicks;
  wrapperData->logfileCloseTimeoutTicks = lastCycleTicks;
  wrapperData->logfileCloseTimeoutTicksSet = 0;
  wrapperData->logfileFlushTimeoutTicks = lastCycleTicks;
  wrapperData->logfileFlushTimeoutTicksSet = 0;
  int *tmp_if_expr_1;
  if(!(wrapperData->isDebugging == 0))
  {
    if(!(wrapperData->useTickMutex == 0))
      tmp_if_expr_1 = L"TRUE";

    else
      tmp_if_expr_1 = L"FALSE";
    log_printf(-1, 1, L"Use tick timer mutex=%s", tmp_if_expr_1);
  }

  if(!(wrapperData->isTickOutputEnabled == 0))
    logTickTimerStats();

  if(!(wrapperData->isLoopOutputEnabled == 0))
    log_printf(-1, 3, L"Event loop started.");

  if(!(wrapperData->isMemoryOutputEnabled == 0))
    wrapperDumpMemoryBanner();

  nextSleep = -1;
  int *tmp_if_expr_2;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_7;
  signed int return_value_wrapperTickExpired_11;
  signed int return_value_wrapperTickExpired_13;
  int *tmp_if_expr_20;
  int *tmp_if_expr_23;
  _Bool tmp_if_expr_32;
  _Bool tmp_if_expr_33;
  _Bool tmp_if_expr_25;
  _Bool tmp_if_expr_26;
  _Bool tmp_if_expr_27;
  _Bool tmp_if_expr_28;
  _Bool tmp_if_expr_29;
  _Bool tmp_if_expr_30;
  _Bool tmp_if_expr_31;
  while((_Bool)1)
  {
    if(!(wrapperData->isLoopOutputEnabled == 0))
    {
      if(!(nextSleep == 0))
        tmp_if_expr_2 = L"";

      else
        tmp_if_expr_2 = L"no ";
      log_printf(-1, 3, L"    Loop: %ssleep", tmp_if_expr_2);
    }

    if(!(nextSleep == 0))
      wrapperSleep(100);

    nextSleep = -1;
    if(!(wrapperData->isLoopOutputEnabled == 0))
      log_printf(-1, 3, L"    Loop: maintain logger");

    maintainLogger();
    if(!(wrapperData->pauseThreadMain == 0))
    {
      wrapperPauseThread(wrapperData->pauseThreadMain, L"main");
      wrapperData->pauseThreadMain = 0;
    }

    wrapperMaintainSignals();
    if(wrapperData->useJavaIOThread == 0)
    {
      if(!(wrapperData->isLoopOutputEnabled == 0))
        log_printf(-1, 3, L"    Loop: process JVM output");

      signed int return_value_wrapperReadChildOutput_3;
      return_value_wrapperReadChildOutput_3=wrapperReadChildOutput(250);
      if(!(return_value_wrapperReadChildOutput_3 == 0))
      {
        if(!(wrapperData->isDebugging == 0))
          log_printf(-1, 1, L"Pause reading child process output to share cycles.");

        nextSleep = 0;
      }

    }

    if(!(wrapperData->isLoopOutputEnabled == 0))
      log_printf(-1, 3, L"    Loop: process socket");

    if(wrapperData->jState == 70)
      tmp_if_expr_5 = (_Bool)1;

    else
      tmp_if_expr_5 = wrapperData->jState == 71 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_5)
      tmp_if_expr_6 = (_Bool)1;

    else
      tmp_if_expr_6 = wrapperData->jState == 72 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_6)
    {
      if(wrapperData->wState == 56)
        tmp_if_expr_7 = (_Bool)1;

      else
        tmp_if_expr_7 = wrapperData->wState == 57 ? (_Bool)1 : (_Bool)0;
      tmp_if_expr_8 = tmp_if_expr_7 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr_8 = (_Bool)0;
    if(!tmp_if_expr_8)
    {
      signed int return_value_wrapperProtocolRead_4;
      return_value_wrapperProtocolRead_4=wrapperProtocolRead();
      if(!(return_value_wrapperProtocolRead_4 == 0))
      {
        if(!(wrapperData->isDebugging == 0))
          log_printf(-1, 1, L"Pause reading socket data to share cycles.");

        nextSleep = 0;
      }

    }

    if(!(wrapperData->isLoopOutputEnabled == 0))
      log_printf(-1, 3, L"    Loop: maintain logger(2)");

    maintainLogger();
    nowTicks=wrapperGetTicks();
    if(wrapperData->uptimeFlipped == 0)
    {
      wrapperEventLoop__1__uptimeSeconds=wrapperGetTickAgeSeconds(0xfffffe00, nowTicks);
      if(wrapperEventLoop__1__uptimeSeconds >= 31536001)
      {
        wrapperData->uptimeFlipped = -1;
        setUptime(0, -1);
      }

      else
        setUptime(wrapperEventLoop__1__uptimeSeconds, 0);
    }

    if(!(wrapperData->isMemoryOutputEnabled == 0))
    {
      signed int return_value_wrapperTickExpired_9;
      return_value_wrapperTickExpired_9=wrapperTickExpired(nowTicks, wrapperData->memoryOutputTimeoutTicks);
      if(!(return_value_wrapperTickExpired_9 == 0))
      {
        wrapperDumpMemory();
        wrapperData->memoryOutputTimeoutTicks=wrapperAddToTicks(nowTicks, wrapperData->memoryOutputInterval);
      }

    }

    if(!(wrapperData->isCPUOutputEnabled == 0))
    {
      signed int return_value_wrapperTickExpired_10;
      return_value_wrapperTickExpired_10=wrapperTickExpired(nowTicks, wrapperData->cpuOutputTimeoutTicks);
      if(!(return_value_wrapperTickExpired_10 == 0))
      {
        wrapperDumpCPUUsage();
        wrapperData->cpuOutputTimeoutTicks=wrapperAddToTicks(nowTicks, wrapperData->cpuOutputInterval);
      }

    }

    unsigned long int return_value_getLogfileActivity_12;
    return_value_getLogfileActivity_12=getLogfileActivity();
    if(!(return_value_getLogfileActivity_12 == 0ul))
    {
      if(wrapperData->logfileCloseTimeout >= 1)
      {
        wrapperData->logfileCloseTimeoutTicks=wrapperAddToTicks(nowTicks, wrapperData->logfileCloseTimeout);
        wrapperData->logfileCloseTimeoutTicksSet = -1;
      }

      if(wrapperData->logfileFlushTimeout >= 1)
      {
        if(wrapperData->logfileFlushTimeoutTicksSet == 0)
        {
          wrapperData->logfileFlushTimeoutTicks=wrapperAddToTicks(nowTicks, wrapperData->logfileFlushTimeout);
          wrapperData->logfileFlushTimeoutTicksSet = -1;
        }

      }

    }

    else
      if(!(wrapperData->logfileCloseTimeoutTicksSet == 0))
      {
        return_value_wrapperTickExpired_11=wrapperTickExpired(nowTicks, wrapperData->logfileCloseTimeoutTicks);
        if(!(return_value_wrapperTickExpired_11 == 0))
        {
          closeLogfile();
          wrapperData->logfileCloseTimeoutTicksSet = 0;
          wrapperData->logfileFlushTimeoutTicksSet = 0;
        }

      }

    if(!(wrapperData->logfileFlushTimeoutTicksSet == 0))
    {
      return_value_wrapperTickExpired_13=wrapperTickExpired(nowTicks, wrapperData->logfileFlushTimeoutTicks);
      if(!(return_value_wrapperTickExpired_13 == 0))
      {
        flushLogfile();
        wrapperData->logfileFlushTimeoutTicksSet = 0;
      }

    }

    signed int return_value_wrapperGetTickAgeSeconds_16;
    return_value_wrapperGetTickAgeSeconds_16=wrapperGetTickAgeSeconds(lastCycleTicks, nowTicks);
    if(!(wrapperData->cpuTimeout >= return_value_wrapperGetTickAgeSeconds_16))
    {
      signed int return_value_wrapperGetTickAgeSeconds_14;
      return_value_wrapperGetTickAgeSeconds_14=wrapperGetTickAgeSeconds(lastCycleTicks, nowTicks);
      log_printf(-1, 2, L"Wrapper Process has not received any CPU time for %d seconds.  Extending timeouts.", return_value_wrapperGetTickAgeSeconds_14);
      if(!(wrapperData->jStateTimeoutTicksSet == 0))
      {
        signed int return_value_wrapperGetTickAgeSeconds_15;
        return_value_wrapperGetTickAgeSeconds_15=wrapperGetTickAgeSeconds(lastCycleTicks, nowTicks);
        wrapperData->jStateTimeoutTicks=wrapperAddToTicks(wrapperData->jStateTimeoutTicks, return_value_wrapperGetTickAgeSeconds_15);
      }

    }

    lastCycleTicks = nowTicks;
    if(!(wrapperData->isStateOutputEnabled == 0))
    {
      if(!(wrapperData->jStateTimeoutTicksSet == 0))
      {
        const signed int *return_value_wrapperGetWState_17;
        return_value_wrapperGetWState_17=wrapperGetWState(wrapperData->wState);
        const signed int *return_value_wrapperGetJState_18;
        return_value_wrapperGetJState_18=wrapperGetJState(wrapperData->jState);
        signed int return_value_wrapperGetTickAgeSeconds_19;
        return_value_wrapperGetTickAgeSeconds_19=wrapperGetTickAgeSeconds(nowTicks, wrapperData->jStateTimeoutTicks);
        if(!(wrapperData->exitRequested == 0))
          tmp_if_expr_20 = L"true";

        else
          tmp_if_expr_20 = L"false";
        log_printf(-1, 3, L"    Ticks=%08x, WrapperState=%s, JVMState=%s JVMStateTimeoutTicks=%08x (%ds), Exit=%s, RestartMode=%d", nowTicks, return_value_wrapperGetWState_17, return_value_wrapperGetJState_18, wrapperData->jStateTimeoutTicks, return_value_wrapperGetTickAgeSeconds_19, tmp_if_expr_20, wrapperData->restartRequested);
      }

      else
      {
        const signed int *return_value_wrapperGetWState_21;
        return_value_wrapperGetWState_21=wrapperGetWState(wrapperData->wState);
        const signed int *return_value_wrapperGetJState_22;
        return_value_wrapperGetJState_22=wrapperGetJState(wrapperData->jState);
        if(!(wrapperData->exitRequested == 0))
          tmp_if_expr_23 = L"true";

        else
          tmp_if_expr_23 = L"false";
        log_printf(-1, 3, L"    Ticks=%08x, WrapperState=%s, JVMState=%s JVMStateTimeoutTicks=%08x (N/A), Exit=%s, RestartMode=%d", nowTicks, return_value_wrapperGetWState_21, return_value_wrapperGetJState_22, wrapperData->jStateTimeoutTicks, tmp_if_expr_23, wrapperData->restartRequested);
      }
    }

    anchorPoll(nowTicks);
    commandPoll(nowTicks);
    if(!(wrapperData->exitRequested == 0))
    {
      if(!(wrapperData->isLoopOutputEnabled == 0))
        log_printf(-1, 3, L"    Loop: exit requested");

      wrapperData->exitRequested = 0;
      if(!(wrapperData->jState == 72))
      {
        if(wrapperData->jState == 73)
          tmp_if_expr_32 = (_Bool)1;

        else
          tmp_if_expr_32 = wrapperData->jState == 74 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_32)
          tmp_if_expr_33 = (_Bool)1;

        else
          tmp_if_expr_33 = wrapperData->jState == 75 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_33)
          wrapperSetJavaState(72, nowTicks, -1);

        else
        {
          if(wrapperData->jState == 80)
            tmp_if_expr_25 = (_Bool)1;

          else
            tmp_if_expr_25 = wrapperData->jState == 81 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_25)
            tmp_if_expr_26 = (_Bool)1;

          else
            tmp_if_expr_26 = wrapperData->jState == 82 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_26)
            tmp_if_expr_27 = (_Bool)1;

          else
            tmp_if_expr_27 = wrapperData->jState == 83 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_27)
            tmp_if_expr_28 = (_Bool)1;

          else
            tmp_if_expr_28 = wrapperData->jState == 84 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_28)
            tmp_if_expr_29 = (_Bool)1;

          else
            tmp_if_expr_29 = wrapperData->jState == 85 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_29)
            tmp_if_expr_30 = (_Bool)1;

          else
            tmp_if_expr_30 = wrapperData->jState == 70 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_30)
            tmp_if_expr_31 = (_Bool)1;

          else
            tmp_if_expr_31 = wrapperData->jState == 71 ? (_Bool)1 : (_Bool)0;
          if(!tmp_if_expr_31)
          {
            signed int return_value_wrapperGetProcessStatus_24;
            return_value_wrapperGetProcessStatus_24=wrapperGetProcessStatus(nowTicks, 0);
            if(return_value_wrapperGetProcessStatus_24 == 200)
            {
              if(wrapperData->restartPacketReceived == 0)
              {
                wrapperData->restartRequested = 0;
                if(!(wrapperData->isDebugging == 0))
                  log_printf(-1, 1, L"Reset the restart flag.");

              }

            }

            else
            {
              if(!(wrapperData->isDebugging == 0))
                log_printf(-1, 1, L"Sending stop signal to JVM");

              wrapperSetJavaState(80, nowTicks, -1);
            }
          }

        }
      }

    }

    if(!(wrapperData->isLoopOutputEnabled == 0))
    {
      const signed int *return_value_wrapperGetWState_34;
      return_value_wrapperGetWState_34=wrapperGetWState(wrapperData->wState);
      log_printf(-1, 3, L"    Loop: handle wrapper state: %s", return_value_wrapperGetWState_34);
    }

    switch(wrapperData->wState)
    {
      case 51:
      {
        wStateStarting(nowTicks);
        break;
      }
      case 52:
      {
        wStateStarted(nowTicks);
        break;
      }
      case 53:
      {
        wStatePausing(nowTicks);
        break;
      }
      case 54:
      {
        wStatePaused(nowTicks);
        break;
      }
      case 55:
      {
        wStateResuming(nowTicks);
        break;
      }
      case 56:
      {
        wStateStopping(nowTicks);
        break;
      }
      case 57:
      {
        wStateStopped(nowTicks);
        break;
      }
      default:
        log_printf(-1, 5, L"Unknown wState=%d", wrapperData->wState);
    }
    if(!(wrapperData->isLoopOutputEnabled == 0))
    {
      const signed int *return_value_wrapperGetJState_35;
      return_value_wrapperGetJState_35=wrapperGetJState(wrapperData->jState);
      log_printf(-1, 3, L"    Loop: handle JVM state: %s", return_value_wrapperGetJState_35);
    }

    switch(wrapperData->jState)
    {
      case 72:
      {
        jStateDownClean(nowTicks, nextSleep);
        break;
      }
      case 73:
      {
        jStateLaunchDelay(nowTicks, nextSleep);
        break;
      }
      case 74:
      {
        jStateRestart(nowTicks, nextSleep);
        break;
      }
      case 75:
      {
        jStateLaunch(nowTicks, nextSleep);
        break;
      }
      case 76:
      {
        jStateLaunching(nowTicks, nextSleep);
        break;
      }
      case 77:
      {
        jStateLaunched(nowTicks, nextSleep);
        break;
      }
      case 78:
      {
        jStateStarting(nowTicks, nextSleep);
        break;
      }
      case 79:
      {
        jStateStarted(nowTicks, nextSleep);
        break;
      }
      case 80:
      {
        jStateStop(nowTicks, nextSleep);
        break;
      }
      case 81:
      {
        jStateStopping(nowTicks, nextSleep);
        break;
      }
      case 82:
      {
        jStateStopped(nowTicks, nextSleep);
        break;
      }
      case 83:
      {
        jStateKilling(nowTicks, nextSleep);
        break;
      }
      case 84:
      {
        jStateKill(nowTicks, nextSleep);
        break;
      }
      case 85:
      {
        jStateKillConfirm(nowTicks, nextSleep);
        break;
      }
      case 70:
      {
        jStateDownCheck(nowTicks, nextSleep);
        break;
      }
      case 71:
      {
        jStateDownFlush(nowTicks, nextSleep);
        break;
      }
      default:
        log_printf(-1, 5, L"Unknown jState=%d", wrapperData->jState);
    }
    if(wrapperData->wState == 57)
      break;

  }
  if(!(wrapperData->jState == 72))
  {
    const signed int *return_value_wrapperGetJState_36;
    return_value_wrapperGetJState_36=wrapperGetJState(wrapperData->jState);
    log_printf(-1, 6, L"Wrapper shutting down while java state still %s.", return_value_wrapperGetJState_36);
  }

  if(!(wrapperData->isLoopOutputEnabled == 0))
    log_printf(-1, 3, L"Event loop stopped.");

}

// wrapperExecute
// file wrapper.h line 838
extern signed int wrapperExecute()
{
  signed int i;
  signed int proc;
  signed int execErrno;
  unsigned long int lenCmd;
  unsigned long int lenEnv;
  signed int return_value_pipe_2;
  return_value_pipe_2=pipe(pipedes);
  if(!(return_value_pipe_2 >= 0))
  {
    const signed int *return_value_getLastErrorText_1;
    return_value_getLastErrorText_1=getLastErrorText();
    log_printf(-1, 5, L"Could not init pipe: %s", return_value_getLastErrorText_1);
    return -1;
  }

  if(!(wrapperData->printJVMVersion == 0))
  {
    if(!(wrapperData->isDebugging == 0))
    {
      log_printf(-1, 1, L"Java Command Line (Query Java Version):");
      i = 0;
      for( ; !(wrapperData->jvmVersionCommand[(signed long int)i] == ((signed int *)NULL)); i = i + 1)
        log_printf(-1, 1, L"  Command[%d] : %s", i, wrapperData->jvmVersionCommand[(signed long int)i]);
    }

  }

  if(!(wrapperData->commandLogLevel == 9))
  {
    log_printf(-1, wrapperData->commandLogLevel, L"Java Command Line:");
    i = 0;
    for( ; !(wrapperData->jvmCommand[(signed long int)i] == ((signed int *)NULL)); i = i + 1)
      log_printf(-1, wrapperData->commandLogLevel, L"  Command[%d] : %s", i, wrapperData->jvmCommand[(signed long int)i]);
    if(!(wrapperData->environmentClasspath == 0))
      log_printf(-1, wrapperData->commandLogLevel, L"  Classpath in Environment : %s", wrapperData->classpath);

  }

  if(!(wrapperData->environmentClasspath == 0))
    setEnv(L"CLASSPATH", wrapperData->classpath, 2);

  setLogfileAutoClose(-1);
  closeLogfile();
  resetDuration();
  proc=fork();
  if(proc == -1)
  {
    setLogfileAutoClose((signed int)(wrapperData->logfileCloseTimeout == 0));
    const signed int *return_value_getLastErrorText_3;
    return_value_getLastErrorText_3=getLastErrorText();
    log_printf(-1, 6, L"Could not spawn JVM process: %s", return_value_getLastErrorText_3);
    return -1;
  }

  else
  {
    wrapperData->exitCode = 0;
    wrapperData->jvmStopped = 0;
    if(proc == 0)
    {
      umask((unsigned int)wrapperData->javaUmask);
      signed int return_value_dup2_5;
      return_value_dup2_5=dup2(pipedes[(signed long int)1], 1);
      if(!(return_value_dup2_5 >= 0))
      {
        const signed int *return_value_getLastErrorText_4;
        return_value_getLastErrorText_4=getLastErrorText();
        log_printf(-1, 5, L"%sUnable to set JVM's stdout: %s", (const void *)L"#!#WrApPeR#!#", return_value_getLastErrorText_4);
        exit(1);
        return -1;
      }

      signed int return_value_dup2_7;
      return_value_dup2_7=dup2(pipedes[(signed long int)1], 2);
      if(!(return_value_dup2_7 >= 0))
      {
        const signed int *return_value_getLastErrorText_6;
        return_value_getLastErrorText_6=getLastErrorText();
        log_printf(-1, 5, L"%sUnable to set JVM's stderr: %s", (const void *)L"#!#WrApPeR#!#", return_value_getLastErrorText_6);
        exit(1);
        return -1;
      }

      close(pipedes[(signed long int)0]);
      pipedes[(signed long int)0] = -1;
      close(pipedes[(signed long int)1]);
      pipedes[(signed long int)1] = -1;
      if(!(wrapperData->printJVMVersion == 0))
      {
        signed int return_value_fork_8;
        return_value_fork_8=fork();
        if(return_value_fork_8 == 0)
        {
          signed int *javaVersionArgv[3l];
          javaVersionArgv[(signed long int)0] = wrapperData->jvmCommand[(signed long int)0];
          javaVersionArgv[(signed long int)1] = L"-version";
          javaVersionArgv[(signed long int)2] = ((signed int *)NULL);
          _texecvp(wrapperData->jvmCommand[(signed long int)0], javaVersionArgv);
        }

      }

      _texecvp(wrapperData->jvmCommand[(signed long int)0], wrapperData->jvmCommand);
      signed int *return_value___errno_location_9;
      return_value___errno_location_9=__errno_location();
      execErrno = *return_value___errno_location_9;
      const signed int *return_value_getLastErrorText_10;
      return_value_getLastErrorText_10=getLastErrorText();
      log_printf(-1, 5, L"%sUnable to start JVM: %s (%d)", (const void *)L"#!#WrApPeR#!#", return_value_getLastErrorText_10, execErrno);
      if(execErrno == 7)
      {
        lenCmd = (unsigned long int)0;
        i = 0;
        for( ; !(wrapperData->jvmCommand[(signed long int)i] == ((signed int *)NULL)); i = i + 1)
        {
          unsigned long int return_value_wcslen_11;
          return_value_wcslen_11=wcslen(wrapperData->jvmCommand[(signed long int)i]);
          lenCmd = lenCmd + return_value_wcslen_11 + (unsigned long int)1;
        }
        lenEnv=wrapperCalculateEnvironmentLength();
        log_printf(-1, 5, L"%s  The generated command line plus the environment was larger than the maximum allowed.", (const void *)L"#!#WrApPeR#!#");
        log_printf(-1, 5, L"%s  The current length is %d bytes of which %d is the command line, and %d is the environment.", (const void *)L"#!#WrApPeR#!#", lenCmd + lenEnv + (unsigned long int)1, lenCmd, lenEnv);
        log_printf(-1, 5, L"%s  It is not possible to calculate an exact maximum length as it depends on a number of factors for each system.", (const void *)L"#!#WrApPeR#!#");
      }

      if(!(wrapperData->isAdviserEnabled == 0))
      {
        log_printf(-1, 7, L"%s", (const void *)L"#!#WrApPeR#!#");
        log_printf(-1, 7, L"%s------------------------------------------------------------------------", (const void *)L"#!#WrApPeR#!#");
        log_printf(-1, 7, L"%sAdvice:", (const void *)L"#!#WrApPeR#!#");
        log_printf(-1, 7, L"%sUsually when the Wrapper fails to start the JVM process, it is because", (const void *)L"#!#WrApPeR#!#");
        log_printf(-1, 7, L"%sof a problem with the value of the configured Java command.  Currently:", (const void *)L"#!#WrApPeR#!#");
        const signed int *return_value_getStringProperty_12;
        return_value_getStringProperty_12=getStringProperty(properties, L"wrapper.java.command", L"java");
        log_printf(-1, 7, L"%swrapper.java.command=%s", (const void *)L"#!#WrApPeR#!#", return_value_getStringProperty_12);
        log_printf(-1, 7, L"%sPlease make sure that the PATH or any other referenced environment", (const void *)L"#!#WrApPeR#!#");
        log_printf(-1, 7, L"%svariables are correctly defined for the current environment.", (const void *)L"#!#WrApPeR#!#");
        log_printf(-1, 7, L"%s------------------------------------------------------------------------", (const void *)L"#!#WrApPeR#!#");
        log_printf(-1, 7, L"%s", (const void *)L"#!#WrApPeR#!#");
      }

      exit(1);
      return -1;
    }

    else
    {
      wrapperData->javaPID = proc;
      close(pipedes[(signed long int)1]);
      pipedes[(signed long int)1] = -1;
      setLogfileAutoClose((signed int)(wrapperData->logfileCloseTimeout == 0));
      signed int return_value_fcntl_15;
      return_value_fcntl_15=fcntl(pipedes[(signed long int)0], 4, 04000);
      if(!(return_value_fcntl_15 >= 0))
      {
        const signed int *return_value_getLastErrorText_13;
        return_value_getLastErrorText_13=getLastErrorText();
        signed int *return_value___errno_location_14;
        return_value___errno_location_14=__errno_location();
        log_printf(-1, 5, L"Failed to set JVM output handle to non blocking mode: %s (%d)", return_value_getLastErrorText_13, *return_value___errno_location_14);
      }

      signed int return_value_fcntl_18;
      return_value_fcntl_18=fcntl(pipedes[(signed long int)0], 2, 1);
      if(!(return_value_fcntl_18 >= 0))
      {
        const signed int *return_value_getLastErrorText_16;
        return_value_getLastErrorText_16=getLastErrorText();
        signed int *return_value___errno_location_17;
        return_value___errno_location_17=__errno_location();
        log_printf(-1, 5, L"Failed to set JVM output handle to close on JVM exit: %s (%d)", return_value_getLastErrorText_16, *return_value___errno_location_17);
      }

      if(!(wrapperData->javaPidFilename == ((signed int *)NULL)))
      {
        signed int return_value_writePidFile_19;
        return_value_writePidFile_19=writePidFile(wrapperData->javaPidFilename, (unsigned long int)wrapperData->javaPID, wrapperData->javaPidFileUmask, 0);
        if(!(return_value_writePidFile_19 == 0))
          log_printf(-1, 4, L"Unable to write the Java PID file: %s", wrapperData->javaPidFilename);

      }

      if(!(wrapperData->javaIdFilename == ((signed int *)NULL)))
      {
        signed int return_value_writePidFile_20;
        return_value_writePidFile_20=writePidFile(wrapperData->javaIdFilename, (unsigned long int)wrapperData->jvmRestarts, wrapperData->javaIdFileUmask, 0);
        if(!(return_value_writePidFile_20 == 0))
          log_printf(-1, 4, L"Unable to write the Java Id file: %s", wrapperData->javaIdFilename);

      }

      return 0;
    }
  }
}

// wrapperFileExists
// file wrapper_file.h line 33
extern signed int wrapperFileExists(const signed int *filename)
{
  struct _IO_FILE *file;
  file=_tfopen(filename, L"r");
  if(!(file == ((struct _IO_FILE *)NULL)))
  {
    fclose(file);
    return -1;
  }

  else
    return 0;
}

// wrapperFreeJavaCommandArray
// file wrapper.c line 7086
extern void wrapperFreeJavaCommandArray(signed int **strings, signed int length)
{
  signed int i;
  if(!(strings == ((signed int **)NULL)))
  {
    i = 0;
    for( ; !(i >= length); i = i + 1)
      if(!(strings[(signed long int)i] == ((signed int *)NULL)))
      {
        free((void *)strings[(signed long int)i]);
        strings[(signed long int)i] = (signed int *)(void *)0;
      }

    free((void *)strings);
    strings = (signed int **)(void *)0;
  }

}

// wrapperGetActionListForNames
// file wrapper.c line 7589
extern signed int * wrapperGetActionListForNames(const signed int *actionNameList, const signed int *propertyName)
{
  unsigned long int len;
  signed int *workBuffer;
  signed int *token;
  signed int actionCount;
  signed int action;
  signed int *actionList = (signed int *)(void *)0;
  signed int *state;
  len=wcslen(actionNameList);
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(signed int) /*4ul*/  * (len + (unsigned long int)1));
  workBuffer = (signed int *)return_value_malloc_1;
  if(workBuffer == ((signed int *)NULL))
    outOfMemory(L"GALFN", 1);

  else
  {
    actionCount = 0;
    wcsncpy(workBuffer, actionNameList, len + (unsigned long int)1);
    token=wcstok(workBuffer, L" ,", &state);
    while(!(token == ((signed int *)NULL)))
    {
      action=getActionForName(token, propertyName, -1);
      if(!(action == 0))
        actionCount = actionCount + 1;

      token=wcstok((signed int *)(void *)0, L" ,", &state);
    }
    actionCount = actionCount + 1;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)actionCount);
    actionList = (signed int *)return_value_malloc_2;
    if(actionList == ((signed int *)NULL))
      outOfMemory(L"GALFN", 2);

    else
    {
      actionCount = 0;
      wcsncpy(workBuffer, actionNameList, len + (unsigned long int)1);
      token=wcstok(workBuffer, L" ,", &state);
      while(!(token == ((signed int *)NULL)))
      {
        action=getActionForName(token, propertyName, 0);
        if(!(action == 0))
        {
          actionList[(signed long int)actionCount] = action;
          actionCount = actionCount + 1;
        }

        token=wcstok((signed int *)(void *)0, L" ,", &state);
      }
      actionList[(signed long int)actionCount] = 0;
      actionCount = actionCount + 1;
    }
    free((void *)workBuffer);
  }
  return actionList;
}

// wrapperGetBuildTime
// file wrapper.c line 210
extern struct tm wrapperGetBuildTime()
{
  struct tm return_value_getInfoTime_1;
  return_value_getInfoTime_1=getInfoTime(wrapperBuildDate, wrapperBuildTime);
  return return_value_getInfoTime_1;
}

// wrapperGetCurrentTime
// file wrapper.c line 994
extern void wrapperGetCurrentTime(struct timeb *timeBuffer)
{
  struct timeval tv;
  gettimeofday(&tv, (struct timezone *)(void *)0);
  timeBuffer->time = (signed long int)tv.tv_sec;
  timeBuffer->millitm = (unsigned short int)(tv.tv_usec / (signed long int)1000);
}

// wrapperGetFileBase
// file wrapper.c line 3065
extern void wrapperGetFileBase(const signed int *fileName, signed int *baseName)
{
  const signed int *start;
  const signed int *end;
  const signed int *c;
  start = fileName;
  unsigned long int return_value_wcslen_1;
  return_value_wcslen_1=wcslen(fileName);
  end = &fileName[(signed long int)return_value_wcslen_1];
  c=wcsrchr(start, 47);
  if(!(c == ((const signed int *)NULL)))
    start = &c[(signed long int)1];

  c=wcsrchr(start, 46);
  if(!(c == ((const signed int *)NULL)))
    end = c;

  wcsncpy(baseName, start, (unsigned long int)(end - start));
  baseName[end - start] = 0;
}

// wrapperGetJState
// file wrappereventloop.c line 108
extern const signed int * wrapperGetJState(signed int jState)
{
  const signed int *name;
  switch(jState)
  {
    case 72:
    {
      name = L"DOWN_CLEAN";
      break;
    }
    case 73:
    {
      name = L"LAUNCH(DELAY)";
      break;
    }
    case 74:
    {
      name = L"RESTART";
      break;
    }
    case 75:
    {
      name = L"LAUNCH";
      break;
    }
    case 76:
    {
      name = L"LAUNCHING";
      break;
    }
    case 77:
    {
      name = L"LAUNCHED";
      break;
    }
    case 78:
    {
      name = L"STARTING";
      break;
    }
    case 79:
    {
      name = L"STARTED";
      break;
    }
    case 80:
    {
      name = L"STOP";
      break;
    }
    case 81:
    {
      name = L"STOPPING";
      break;
    }
    case 82:
    {
      name = L"STOPPED";
      break;
    }
    case 83:
    {
      name = L"KILLING";
      break;
    }
    case 84:
    {
      name = L"KILL";
      break;
    }
    case 70:
    {
      name = L"DOWN_CHECK";
      break;
    }
    case 71:
    {
      name = L"DOWN_FLUSH";
      break;
    }
    case 85:
    {
      name = L"KILLED";
      break;
    }
    default:
      name = L"UNKNOWN";
  }
  return name;
}

// wrapperGetLastError
// file wrapper_i18n.h line 496
extern signed int wrapperGetLastError()
{
  signed int *return_value___errno_location_1;
  return_value___errno_location_1=__errno_location();
  return *return_value___errno_location_1;
}

// wrapperGetMinimumTextLengthForPattern
// file wrapper.h line 596
extern unsigned long int wrapperGetMinimumTextLengthForPattern(const signed int *pattern)
{
  unsigned long int patternLen;
  unsigned long int patternIndex;
  unsigned long int minLen;
  patternLen=wcslen(pattern);
  minLen = (unsigned long int)0;
  patternIndex = (unsigned long int)0;
  for( ; !(patternIndex >= patternLen); patternIndex = patternIndex + 1ul)
    if(!(pattern[(signed long int)patternIndex] == 42))
      minLen = minLen + 1ul;

  return minLen;
}

// wrapperGetProcessStatus
// file wrapper.h line 826
extern signed int wrapperGetProcessStatus(unsigned int nowTicks, signed int sigChild)
{
  signed int retval;
  signed int status;
  signed int exitCode;
  signed int res;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  if(!(wrapperData->javaPID >= 1))
    return 200;

  else
  {
    retval=waitpid(wrapperData->javaPID, &status, 1 | 2);
    /* tag-#anon#lUN[lS32'__in'||S32'__i'|] */
union anonymous_20
{
  // __in
  signed int __in;
  // __i
  signed int __i;
};

/* */
    ;
    if(retval == 0)
    {
      if(!(sigChild == 0))
      {
        if(!(wrapperData->jvmStopped == 0))
        {
          log_printf(-1, 3, L"JVM process was continued.");
          wrapperData->jvmStopped = 0;
        }

      }

      res = 201;
    }

    else
      if(!(retval >= 0))
      {
        signed int *return_value___errno_location_5;
        return_value___errno_location_5=__errno_location();
        if(*return_value___errno_location_5 == 10)
        {
          if(wrapperData->jState == 70)
            tmp_if_expr_1 = (_Bool)1;

          else
            tmp_if_expr_1 = wrapperData->jState == 71 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_1)
            tmp_if_expr_2 = (_Bool)1;

          else
            tmp_if_expr_2 = wrapperData->jState == 72 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_2)
            tmp_if_expr_3 = (_Bool)1;

          else
            tmp_if_expr_3 = wrapperData->jState == 82 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr_3)
          {
            res = 200;
            wrapperJVMProcessExited(nowTicks, 0);
            return res;
          }

          else
            log_printf(-1, 3, L"JVM process is gone.");
        }

        else
        {
          const signed int *return_value_getLastErrorText_4;
          return_value_getLastErrorText_4=getLastErrorText();
          log_printf(-1, 4, L"Unable to request JVM process status: %s", return_value_getLastErrorText_4);
        }
        exitCode = 1;
        res = 200;
        wrapperJVMProcessExited(nowTicks, exitCode);
      }

      else
        if((0x7f & status) == 0)
        {
          exitCode = (((union anonymous_20){ .__in=status }).__i & 0xff00) >> 8;
          res = 200;
          wrapperJVMProcessExited(nowTicks, exitCode);
        }

        else
          if((signed int)((127 & (signed char)status) + 1) >> 1 >= 1)
          {
            const signed int *return_value_getSignalName_6;
            return_value_getSignalName_6=getSignalName(((union anonymous_20){ .__in=status }).__i & 0x7f);
            log_printf(-1, 3, L"JVM received a signal %s (%d).", return_value_getSignalName_6, ((union anonymous_20){ .__in=status }).__i & 0x7f);
            res = 201;
          }

          else
            if((0xff & status) == 0x7f)
            {
              log_printf(-1, 4, L"JVM process was stopped.  It will be killed if the ping timeout expires.");
              wrapperData->jvmStopped = -1;
              res = 201;
            }

            else
            {
              log_printf(-1, 1, L"JVM process signaled the Wrapper unexpectedly.");
              res = 201;
            }
    return res;
  }
}

// wrapperGetReleaseTime
// file wrapper.c line 206
extern struct tm wrapperGetReleaseTime()
{
  struct tm return_value_getInfoTime_1;
  return_value_getInfoTime_1=getInfoTime(wrapperReleaseDate, wrapperReleaseTime);
  return return_value_getInfoTime_1;
}

// wrapperGetRestartProcessMessage
// file wrapper.c line 4793
extern const signed int * wrapperGetRestartProcessMessage()
{
  _Bool tmp_if_expr_3;
  if(wrapperData->jState == 72)
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = wrapperData->jState == 80 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_4;
  if(tmp_if_expr_3)
    tmp_if_expr_4 = (_Bool)1;

  else
    tmp_if_expr_4 = wrapperData->jState == 81 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_5;
  if(tmp_if_expr_4)
    tmp_if_expr_5 = (_Bool)1;

  else
    tmp_if_expr_5 = wrapperData->jState == 82 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_6;
  if(tmp_if_expr_5)
    tmp_if_expr_6 = (_Bool)1;

  else
    tmp_if_expr_6 = wrapperData->jState == 83 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_7;
  if(tmp_if_expr_6)
    tmp_if_expr_7 = (_Bool)1;

  else
    tmp_if_expr_7 = wrapperData->jState == 84 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_8;
  if(tmp_if_expr_7)
    tmp_if_expr_8 = (_Bool)1;

  else
    tmp_if_expr_8 = wrapperData->jState == 70 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_9;
  if(tmp_if_expr_8)
    tmp_if_expr_9 = (_Bool)1;

  else
    tmp_if_expr_9 = wrapperData->jState == 71 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_10;
  if(tmp_if_expr_9)
    tmp_if_expr_10 = (_Bool)1;

  else
    tmp_if_expr_10 = wrapperData->jState == 73 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_10)
  {
    if(!(wrapperData->restartRequested == 0))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = wrapperData->jState == 73 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      return L"Restart JVM (Ignoring, already restarting).";

    else
      return L"Restart JVM (Ignoring, already shutting down).";
  }

  else
  {
    if(!(wrapperData->exitRequested == 0))
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = wrapperData->restartRequested != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_2)
      return L"Restart JVM (Ignoring, already restarting).";

    else
      return L"Restarting JVM.";
  }
}

// wrapperGetSystemTicks
// file wrapper.c line 8352
extern unsigned int wrapperGetSystemTicks()
{
  struct timeb timeBuffer;
  unsigned long int high;
  unsigned long int low;
  unsigned int sum;
  wrapperGetCurrentTime(&timeBuffer);
  high = (unsigned long int)(timeBuffer.time >> 16) & (unsigned long int)0xffff;
  low = (unsigned long int)(timeBuffer.time & (signed long int)0xffff);
  high = (high * (unsigned long int)1000) / (unsigned long int)100;
  low = (low * (unsigned long int)1000 + (unsigned long int)timeBuffer.millitm) / (unsigned long int)100;
  high = high + (low >> 16 & (unsigned long int)0xffff);
  sum = (unsigned int)(((high & (unsigned long int)0xffff) << 16) + (low & (unsigned long int)0xffff));
  return sum;
}

// wrapperGetTickAgeSeconds
// file wrapper.c line 8399
extern signed int wrapperGetTickAgeSeconds(unsigned int start, unsigned int end)
{
  return (signed int)((end - start) * (unsigned int)100) / 1000;
}

// wrapperGetTickAgeTicks
// file wrapper.c line 8419
extern signed int wrapperGetTickAgeTicks(unsigned int start, unsigned int end)
{
  return (signed int)(end - start);
}

// wrapperGetTicks
// file wrapper.h line 844
extern unsigned int wrapperGetTicks()
{
  unsigned int ticks;
  signed int return_value_wrapperLockTickMutex_1;
  signed int return_value_wrapperReleaseTickMutex_2;
  if(!(wrapperData->useSystemTime == 0))
    ticks=wrapperGetSystemTicks();

  else
  {
    if(!(wrapperData->useTickMutex == 0))
    {
      return_value_wrapperLockTickMutex_1=wrapperLockTickMutex();
      if(!(return_value_wrapperLockTickMutex_1 == 0))
        return (unsigned int)0;

    }

    ticks = timerTicks;
    if(!(wrapperData->useTickMutex == 0))
    {
      return_value_wrapperReleaseTickMutex_2=wrapperReleaseTickMutex();
      if(!(return_value_wrapperReleaseTickMutex_2 == 0))
        return (unsigned int)0;

    }

  }
  return ticks;
}

// wrapperGetWState
// file wrappereventloop.c line 70
extern const signed int * wrapperGetWState(signed int wState)
{
  const signed int *name;
  switch(wState)
  {
    case 51:
    {
      name = L"STARTING";
      break;
    }
    case 52:
    {
      name = L"STARTED";
      break;
    }
    case 53:
    {
      name = L"PAUSING";
      break;
    }
    case 54:
    {
      name = L"PAUSED";
      break;
    }
    case 55:
    {
      name = L"RESUMING";
      break;
    }
    case 56:
    {
      name = L"STOPPING";
      break;
    }
    case 57:
    {
      name = L"STOPPED";
      break;
    }
    default:
      name = L"UNKNOWN";
  }
  return name;
}

// wrapperInitialize
// file wrapper.c line 2679
extern signed int wrapperInitialize()
{
  signed int *retLocale;
  signed int maxPathLen = 4096;
  properties = (struct Properties *)(void *)0;
  signed long int return_value_time_1;
  return_value_time_1=time((signed long int *)(void *)0);
  srand((unsigned int)return_value_time_1);
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(struct WrapperConfig) /*944ul*/ );
  wrapperData = (struct WrapperConfig *)return_value_malloc_2;
  if(wrapperData == ((struct WrapperConfig *)NULL))
  {
    outOfMemory(L"WI", 1);
    return 1;
  }

  else
  {
    memset((void *)wrapperData, 0, sizeof(struct WrapperConfig) /*944ul*/ );
    wrapperData->configured = 0;
    wrapperData->isConsole = -1;
    wrapperSetWrapperState(51);
    wrapperSetJavaState(72, (unsigned int)0, -1);
    wrapperData->lastPingTicks=wrapperGetTicks();
    wrapperData->lastLoggedPingTicks=wrapperGetTicks();
    wrapperData->jvmVersionCommand = (signed int **)(void *)0;
    wrapperData->jvmCommand = (signed int **)(void *)0;
    wrapperData->exitRequested = 0;
    wrapperData->restartRequested = 1;
    wrapperData->exitCode = 0;
    wrapperData->jvmRestarts = 0;
    wrapperData->jvmLaunchTicks=wrapperGetTicks();
    wrapperData->failedInvocationCount = 0;
    wrapperData->originalWorkingDir = (signed int *)(void *)0;
    wrapperData->configFile = (signed int *)(void *)0;
    wrapperData->workingDir = (signed int *)(void *)0;
    wrapperData->outputFilterCount = 0;
    wrapperData->confDir = (signed int *)(void *)0;
    wrapperData->umask = -1;
    wrapperData->language = (signed int *)(void *)0;
    wrapperData->portAddress = (signed int *)(void *)0;
    wrapperData->pingTimedOut = 0;
    signed int return_value_initLogging_3;
    return_value_initLogging_3=initLogging(wrapperLogFileChanged);
    if(!(return_value_initLogging_3 == 0))
      return 1;

    else
    {
      logRegisterThread(1);
      setLogfilePath(L"wrapper.log", (const signed int *)(void *)0, 0);
      setLogfileRollMode(2);
      setLogfileFormat(L"LPTM");
      setLogfileLevelInt(1);
      setLogfileAutoClose(0);
      setConsoleLogFormat(L"LPM");
      setConsoleLogLevelInt(1);
      setConsoleFlush(-1);
      setSyslogLevelInt(9);
      void *return_value_malloc_4;
      return_value_malloc_4=malloc((unsigned long int)(maxPathLen + 1) * sizeof(signed int) /*4ul*/ );
      wrapperData->initialPath = (signed int *)return_value_malloc_4;
      if(wrapperData->initialPath == ((signed int *)NULL))
      {
        outOfMemory(L"WI", 3);
        return 1;
      }

      else
      {
        wrapperData->initialPath=_tgetcwd((signed int *)wrapperData->initialPath, (unsigned long int)(maxPathLen + 1));
        if(wrapperData->initialPath == ((signed int *)NULL))
        {
          const signed int *return_value_getLastErrorText_5;
          return_value_getLastErrorText_5=getLastErrorText();
          log_printf(-1, 6, L"Failed to get the initial directory. (%s)", return_value_getLastErrorText_5);
          return 1;
        }

      }
      setEnv(L"WRAPPER_INIT_DIR", wrapperData->initialPath, 2);
      {
        retLocale=_tsetlocale(6, L"");
        if(!(retLocale == ((signed int *)NULL)))
          free((void *)retLocale);

        signed int return_value_loadEnvironment_6;
        return_value_loadEnvironment_6=loadEnvironment();
        if(!(return_value_loadEnvironment_6 == 0))
          return 1;

        else
          return 0;
      }
    }
  }
}

// wrapperInitializeRun
// file wrapper.h line 788
extern signed int wrapperInitializeRun()
{
  signed int retval = 0;
  signed int res;
  signed int return_value_registerSigAction_1;
  return_value_registerSigAction_1=registerSigAction(14, sigActionAlarm);
  _Bool tmp_if_expr_3;
  signed int return_value_registerSigAction_2;
  if(!(return_value_registerSigAction_1 == 0))
    tmp_if_expr_3 = (_Bool)1;

  else
  {
    return_value_registerSigAction_2=registerSigAction(2, sigActionInterrupt);
    tmp_if_expr_3 = return_value_registerSigAction_2 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_5;
  signed int return_value_registerSigAction_4;
  if(tmp_if_expr_3)
    tmp_if_expr_5 = (_Bool)1;

  else
  {
    return_value_registerSigAction_4=registerSigAction(3, sigActionQuit);
    tmp_if_expr_5 = return_value_registerSigAction_4 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_7;
  signed int return_value_registerSigAction_6;
  if(tmp_if_expr_5)
    tmp_if_expr_7 = (_Bool)1;

  else
  {
    return_value_registerSigAction_6=registerSigAction(17, sigActionChildDeath);
    tmp_if_expr_7 = return_value_registerSigAction_6 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_9;
  signed int return_value_registerSigAction_8;
  if(tmp_if_expr_7)
    tmp_if_expr_9 = (_Bool)1;

  else
  {
    return_value_registerSigAction_8=registerSigAction(15, sigActionTermination);
    tmp_if_expr_9 = return_value_registerSigAction_8 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_11;
  signed int return_value_registerSigAction_10;
  if(tmp_if_expr_9)
    tmp_if_expr_11 = (_Bool)1;

  else
  {
    return_value_registerSigAction_10=registerSigAction(1, sigActionHangup);
    tmp_if_expr_11 = return_value_registerSigAction_10 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_13;
  signed int return_value_registerSigAction_12;
  if(tmp_if_expr_11)
    tmp_if_expr_13 = (_Bool)1;

  else
  {
    return_value_registerSigAction_12=registerSigAction(10, sigActionUSR1);
    tmp_if_expr_13 = return_value_registerSigAction_12 != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_15;
  signed int return_value_registerSigAction_14;
  if(tmp_if_expr_13)
    tmp_if_expr_15 = (_Bool)1;

  else
  {
    return_value_registerSigAction_14=registerSigAction(12, sigActionUSR2);
    tmp_if_expr_15 = return_value_registerSigAction_14 != 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_15)
    retval = -1;

  if(!(wrapperData->consoleTitle == ((signed int *)NULL)))
  {
    if(!(wrapperData->isConsole == 0))
      _tprintf(L"%c]0;%s%c", 27, wrapperData->consoleTitle, 7);

  }

  if(!(wrapperData->useSystemTime == 0))
    timerThreadSet = 0;

  else
  {
    res=initializeTimer();
    if(!(res == 0))
      return res;

  }
  if(!(wrapperData->useJavaIOThread == 0))
  {
    res=initializeJavaIO();
    if(!(res == 0))
      return res;

  }

  else
    javaIOThreadSet = 0;
  return retval;
}

// wrapperJVMDownCleanup
// file wrapper.c line 4094
void wrapperJVMDownCleanup(signed int setState)
{
  if(!(setState == 0))
  {
    if(wrapperData->jvmCleanupTimeout >= 1)
    {
      unsigned int return_value_wrapperGetTicks_1;
      return_value_wrapperGetTicks_1=wrapperGetTicks();
      wrapperSetJavaState(70, return_value_wrapperGetTicks_1, wrapperData->jvmCleanupTimeout);
    }

    else
    {
      unsigned int return_value_wrapperGetTicks_2;
      return_value_wrapperGetTicks_2=wrapperGetTicks();
      wrapperSetJavaState(70, return_value_wrapperGetTicks_2, -1);
    }
  }

  if(!(wrapperData->javaPidFilename == ((signed int *)NULL)))
    _tunlink(wrapperData->javaPidFilename);

  if(!(wrapperData->stoppedPacketReceived == 0))
    wrapperProtocolClose();

}

// wrapperJVMProcessExited
// file wrapper.c line 7106
extern void wrapperJVMProcessExited(unsigned int nowTicks, signed int exitCode)
{
  signed int setState = -1;
  if(exitCode == 0)
    log_printf(-1, 1, L"JVM process exited with a code of %d, leaving the wrapper exit code set to %d.", exitCode, wrapperData->exitCode);

  else
    if(wrapperData->exitCode == 0)
    {
      wrapperData->exitCode = exitCode;
      log_printf(-1, 1, L"JVM process exited with a code of %d, setting the wrapper exit code to %d.", exitCode, wrapperData->exitCode);
    }

    else
      log_printf(-1, 1, L"JVM process exited with a code of %d, however the wrapper exit code was already %d.", exitCode, wrapperData->exitCode);
  switch(wrapperData->jState)
  {
    case 72:

    case 70:

    case 71:
    {
      if(!(wrapperData->isDebugging == 0))
        log_printf(-1, 1, L"JVM already down.");

      setState = 0;
      break;
    }
    case 73:
    {
      if(!(wrapperData->isDebugging == 0))
        log_printf(-1, 1, L"Received a message that the JVM is down when in the LAUNCH(DELAY) state.");

      setState = 0;
      break;
    }
    case 74:
    {
      if(!(wrapperData->isDebugging == 0))
        log_printf(-1, 1, L"Received a message that the JVM is down when in the RESTART state.");

      setState = 0;
      break;
    }
    case 75:
    {
      if(!(wrapperData->isDebugging == 0))
        log_printf(-1, 1, L"Received a message that the JVM is down when in the LAUNCH state.");

      setState = 0;
      break;
    }
    case 76:
    {
      wrapperData->restartRequested = 2;
      log_printf(-1, 5, L"JVM exited while loading the application.");
      break;
    }
    case 77:
    {
      wrapperData->restartRequested = 2;
      log_printf(-1, 5, L"JVM exited before starting the application.");
      break;
    }
    case 78:
    {
      wrapperData->restartRequested = 2;
      log_printf(-1, 5, L"JVM exited while starting the application.");
      break;
    }
    case 79:
    {
      wrapperData->restartRequested = 2;
      log_printf(-1, 5, L"JVM exited unexpectedly.");
      break;
    }
    case 80:

    case 81:
    {
      log_printf(-1, 4, L"JVM exited unexpectedly while stopping the application.");
      break;
    }
    case 82:
    {
      if(!(wrapperData->isDebugging == 0))
        log_printf(-1, 1, L"JVM exited normally.");

      break;
    }
    case 83:

    case 84:
    {
      log_printf(-1, 2, L"JVM exited on its own while waiting to kill the application.");
      break;
    }
    case 85:
    {
      log_printf(-1, 3, L"JVM exited after being requested to terminate.");
      break;
    }
    default:
      log_printf(-1, 4, L"Unexpected jState=%d in wrapperJVMProcessExited.", wrapperData->jState);
  }
  wrapperJVMDownCleanup(setState);
}

// wrapperKeyRegistered
// file wrapper.c line 8633
extern void wrapperKeyRegistered(signed int *key)
{
  signed int buffer[11l];
  if(!(wrapperData->isDebugging == 0))
    log_printf(-1, 1, L"Got key from JVM: %s", key);

  signed int return_value_wcscmp_2;
  switch(wrapperData->jState)
  {
    case 76:
    {
      return_value_wcscmp_2=wcscmp(key, wrapperData->key);
      if(return_value_wcscmp_2 == 0)
      {
        wrapperSetJavaState(77, (unsigned int)0, -1);
        signed int return_value_getLowLogLevel_1;
        return_value_getLowLogLevel_1=getLowLogLevel();
        _sntprintf(buffer, (unsigned long int)11, L"%d", return_value_getLowLogLevel_1);
        wrapperProtocolFunction((char)112, buffer);
        sendLogFileName();
        sendProperties();
      }

      else
      {
        log_printf(-1, 5, L"Received a connection request with an incorrect key.  Waiting for another connection.");
        wrapperProtocolFunction((char)111, L"Incorrect key.  Connection rejected.");
        wrapperProtocolClose();
      }
      break;
    }
    case 80:
      break;
    case 81:
    {
      wrapperSetJavaState(80, (unsigned int)0, -1);
      break;
    }
    default:
      ;
  }
}

// wrapperKillProcess
// file wrapper.c line 4176
extern void wrapperKillProcess()
{
  signed int delay = 0;
  _Bool tmp_if_expr_2;
  if(wrapperData->jState == 72)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = wrapperData->jState == 73 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_3;
  if(tmp_if_expr_2)
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = wrapperData->jState == 70 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_4;
  if(tmp_if_expr_3)
    tmp_if_expr_4 = (_Bool)1;

  else
    tmp_if_expr_4 = wrapperData->jState == 71 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_4)
  {
    if(wrapperData->jState == 73)
    {
      unsigned int return_value_wrapperGetTicks_1;
      return_value_wrapperGetTicks_1=wrapperGetTicks();
      wrapperSetJavaState(72, return_value_wrapperGetTicks_1, 0);
    }

  }

  else
  {
    signed int return_value_waitpid_5;
    return_value_waitpid_5=waitpid(wrapperData->javaPID, (signed int *)(void *)0, 1);
    if(return_value_waitpid_5 == 0)
    {
      if(!(wrapperData->requestThreadDumpOnFailedJVMExit == 0))
      {
        wrapperRequestDumpJVMState();
        delay = wrapperData->requestThreadDumpOnFailedJVMExitDelay;
      }

    }

    unsigned int return_value_wrapperGetTicks_6;
    return_value_wrapperGetTicks_6=wrapperGetTicks();
    wrapperSetJavaState(83, return_value_wrapperGetTicks_6, delay);
  }
}

// wrapperKillProcessNow
// file wrapper.c line 4129
extern signed int wrapperKillProcessNow()
{
  signed int return_value_waitpid_3;
  return_value_waitpid_3=waitpid(wrapperData->javaPID, (signed int *)(void *)0, 1);
  if(return_value_waitpid_3 == 0)
  {
    signed int return_value_kill_2;
    return_value_kill_2=kill(wrapperData->javaPID, 9);
    if(return_value_kill_2 == 0)
    {
      log_printf(-1, 5, L"JVM did not exit on request, termination requested.");
      return 0;
    }

    else
    {
      log_printf(-1, 5, L"JVM did not exit on request.");
      const signed int *return_value_getLastErrorText_1;
      return_value_getLastErrorText_1=getLastErrorText();
      log_printf(-1, 5, L"  Attempt to terminate process failed: %s", return_value_getLastErrorText_1);
      wrapperJVMDownCleanup(-1);
      wrapperData->exitCode = 1;
      return -1;
    }
  }

  wrapperJVMDownCleanup(-1);
  return 0;
}

// wrapperLoadConfigurationProperties
// file wrapper.c line 736
extern signed int wrapperLoadConfigurationProperties(signed int preload)
{
  signed int i;
  signed int firstCall;
  unsigned int defaultUMask;
  const signed int *prop;
  if(!(properties == ((struct Properties *)NULL)))
  {
    firstCall = 0;
    disposeProperties(properties);
    properties = (struct Properties *)(void *)0;
  }

  else
  {
    firstCall = -1;
    if(!(wrapperData->originalWorkingDir == ((signed int *)NULL)))
      free((void *)wrapperData->originalWorkingDir);

    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(4096 + 1));
    wrapperData->originalWorkingDir = (signed int *)return_value_malloc_1;
    if(wrapperData->originalWorkingDir == ((signed int *)NULL))
    {
      outOfMemory(L"WLCP", 4);
      return -1;
    }

    signed int *return_value__trealpathN_3;
    return_value__trealpathN_3=_trealpathN(L".", wrapperData->originalWorkingDir, (unsigned long int)(4096 + 1));
    if(return_value__trealpathN_3 == ((signed int *)NULL))
    {
      const signed int *return_value_getLastErrorText_2;
      return_value_getLastErrorText_2=getLastErrorText();
      log_printf(-1, 6, L"Unable to resolve the original working directory: %s", return_value_getLastErrorText_2);
      return -1;
    }

    if(!(wrapperData->configFile == ((signed int *)NULL)))
      free((void *)wrapperData->configFile);

    void *return_value_malloc_4;
    return_value_malloc_4=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(4096 + 1));
    wrapperData->configFile = (signed int *)return_value_malloc_4;
    if(wrapperData->configFile == ((signed int *)NULL))
    {
      outOfMemory(L"WLCP", 2);
      return -1;
    }

    signed int *return_value__trealpathN_6;
    return_value__trealpathN_6=_trealpathN(wrapperData->argConfFile, wrapperData->configFile, (unsigned long int)(4096 + 1));
    if(return_value__trealpathN_6 == ((signed int *)NULL))
    {
      if(!(wrapperData->argConfFileDefault == 0))
        _sntprintf(wrapperData->configFile, (unsigned long int)(4096 + 1), L"%s", wrapperData->argConfFile);

      else
      {
        if(preload == 0)
        {
          const signed int *return_value_getLastErrorText_5;
          return_value_getLastErrorText_5=getLastErrorText();
          log_printf(-1, 6, L"Unable to open configuration file: %s (%s)\n  Current working directory: %s", wrapperData->argConfFile, return_value_getLastErrorText_5, wrapperData->originalWorkingDir);
        }

        return -1;
      }
    }

  }
  properties=createProperties();
  unsigned long int return_value_wcslen_13;
  signed int return_value_wrapperSetWorkingDir_14;
  signed int return_value_wrapperBuildUnixDaemonInfo_16;
  signed int return_value_loadConfiguration_17;
  if(properties == ((struct Properties *)NULL))
    return -1;

  else
  {
    setLogPropertyWarnings(properties, (signed int)!(preload != 0));
    wrapperAddDefaultProperties();
    signed int return_value_wcscasecmp_8;
    return_value_wcscasecmp_8=wcscasecmp(wrapperData->argCommand, L"-translate");
    if(!(return_value_wcscasecmp_8 == 0))
    {
      i = 0;
      for( ; !(i >= wrapperData->argCount); i = i + 1)
      {
        signed int return_value_addPropertyPair_7;
        return_value_addPropertyPair_7=addPropertyPair(properties, (const signed int *)(void *)0, 0, wrapperData->argValues[(signed long int)i], -1, -1, 0);
        if(!(return_value_addPropertyPair_7 == 0))
        {
          log_printf(-1, 6, L"The argument '%s' is not a valid property name-value pair.", wrapperData->argValues[(signed long int)i]);
          return -1;
        }

      }
    }

    signed int return_value_loadProperties_9;
    return_value_loadProperties_9=loadProperties(properties, wrapperData->configFile, preload | wrapperData->daemonize, wrapperData->argCommand, wrapperData->originalWorkingDir, wrapperData->isDebugging);
    if(!(return_value_loadProperties_9 == 0))
    {
      if(preload == 0)
      {
        if(wrapperData->argConfFileDefault == 0)
          log_printf(-1, 6, L"Failed to load configuration: %s", wrapperData->configFile);

      }

      return -1;
    }

    else
    {
      wrapperData->argConfFileFound = -1;
      if(!(firstCall == 0))
      {
        prop=getStringProperty(properties, L"wrapper.working.dir", L".");
        if(!(prop == ((const signed int *)NULL)))
        {
          return_value_wcslen_13=wcslen(prop);
          if(return_value_wcslen_13 >= 1ul)
          {
            if(!(wrapperData->workingDir == ((signed int *)NULL)))
              free((void *)wrapperData->workingDir);

            void *return_value_malloc_10;
            return_value_malloc_10=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(4096 + 1));
            wrapperData->workingDir = (signed int *)return_value_malloc_10;
            if(wrapperData->workingDir == ((signed int *)NULL))
            {
              outOfMemory(L"WLCP", 6);
              return -1;
            }

            signed int *return_value__trealpathN_12;
            return_value__trealpathN_12=_trealpathN(prop, wrapperData->workingDir, (unsigned long int)(4096 + 1));
            if(return_value__trealpathN_12 == ((signed int *)NULL))
            {
              const signed int *return_value_getLastErrorText_11;
              return_value_getLastErrorText_11=getLastErrorText();
              log_printf(-1, 6, L"Unable to resolve the working directory %s: %s", prop, return_value_getLastErrorText_11);
              return -1;
            }

          }

        }

      }

      if(!(wrapperData->workingDir == ((signed int *)NULL)))
      {
        return_value_wrapperSetWorkingDir_14=wrapperSetWorkingDir(wrapperData->workingDir, (signed int)!(preload != 0));
        if(return_value_wrapperSetWorkingDir_14 == 0)
          goto __CPROVER_DUMP_L22;

        return -1;
      }

      else
      {

      __CPROVER_DUMP_L22:
        ;
        if(wrapperData->umask == -1)
        {
          defaultUMask=umask((unsigned int)0);
          umask(defaultUMask);
          wrapperData->umask=getIntProperty(properties, L"wrapper.umask", (signed int)defaultUMask);
        }

        wrapperData->javaUmask=getIntProperty(properties, L"wrapper.java.umask", wrapperData->umask);
        wrapperData->pidFileUmask=getIntProperty(properties, L"wrapper.pidfile.umask", wrapperData->umask);
        wrapperData->lockFileUmask=getIntProperty(properties, L"wrapper.lockfile.umask", wrapperData->umask);
        wrapperData->javaPidFileUmask=getIntProperty(properties, L"wrapper.java.pidfile.umask", wrapperData->umask);
        wrapperData->javaIdFileUmask=getIntProperty(properties, L"wrapper.java.idfile.umask", wrapperData->umask);
        wrapperData->statusFileUmask=getIntProperty(properties, L"wrapper.statusfile.umask", wrapperData->umask);
        wrapperData->javaStatusFileUmask=getIntProperty(properties, L"wrapper.java.statusfile.umask", wrapperData->umask);
        wrapperData->anchorFileUmask=getIntProperty(properties, L"wrapper.anchorfile.umask", wrapperData->umask);
        signed int return_value_getIntProperty_15;
        return_value_getIntProperty_15=getIntProperty(properties, L"wrapper.logfile.umask", wrapperData->umask);
        setLogfileUmask(return_value_getIntProperty_15);
        if(firstCall == -1)
        {
          return_value_wrapperBuildUnixDaemonInfo_16=wrapperBuildUnixDaemonInfo();
          if(!(return_value_wrapperBuildUnixDaemonInfo_16 == 0))
            goto __CPROVER_DUMP_L24;

          if(wrapperData->daemonize == 0)
            goto __CPROVER_DUMP_L24;

          return 0;
        }

        else
        {

        __CPROVER_DUMP_L24:
          ;
          signed int return_value_wcscasecmp_18;
          return_value_wcscasecmp_18=wcscasecmp(wrapperData->argCommand, L"-translate");
          if(!(return_value_wcscasecmp_18 == 0))
          {
            return_value_loadConfiguration_17=loadConfiguration();
            if(return_value_loadConfiguration_17 == 0)
              goto __CPROVER_DUMP_L25;

            log_printf(-1, 6, L"Problem loading wrapper configuration file: %s", wrapperData->configFile);
            return -1;
          }

          else
          {

          __CPROVER_DUMP_L25:
            ;
            return 0;
          }
        }
      }
    }
  }
}

// wrapperLoadHostName
// file wrapper.c line 7458
extern void wrapperLoadHostName()
{
  char hostName[80l];
  signed int *hostName2;
  signed int len;
  signed int return_value_gethostname_8;
  return_value_gethostname_8=gethostname(hostName, sizeof(char [80l]) /*80ul*/ );
  if(!(return_value_gethostname_8 == 0))
  {
    const signed int *return_value_getLastErrorText_1;
    return_value_getLastErrorText_1=getLastErrorText();
    log_printf(-1, 4, L"Unable to obtain host name. %s", return_value_getLastErrorText_1);
  }

  else
  {
    unsigned long int return_value_mbstowcs_2;
    return_value_mbstowcs_2=mbstowcs((signed int *)(void *)0, hostName, (unsigned long int)0);
    len = (signed int)return_value_mbstowcs_2;
    if((unsigned long int)len == 18446744073709551615ul)
    {
      const signed int *return_value_getLastErrorText_3;
      return_value_getLastErrorText_3=getLastErrorText();
      log_printf(-1, 4, L"Invalid multibyte sequence in port address \"%s\" : %s", (const void *)hostName, return_value_getLastErrorText_3);
      goto __CPROVER_DUMP_L6;
    }

    void *return_value_malloc_4;
    return_value_malloc_4=malloc(sizeof(signed int) /*4ul*/  * (unsigned long int)(len + 1));
    hostName2 = (signed int *)return_value_malloc_4;
    if(hostName2 == ((signed int *)NULL))
    {
      outOfMemory(L"LHN", 2);
      goto __CPROVER_DUMP_L6;
    }

    mbstowcs(hostName2, hostName, (unsigned long int)(len + 1));
    hostName2[(signed long int)len] = 0;
    unsigned long int return_value_wcslen_5;
    return_value_wcslen_5=wcslen(hostName2);
    void *return_value_malloc_6;
    return_value_malloc_6=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_5 + (unsigned long int)1));
    wrapperData->hostName = (signed int *)return_value_malloc_6;
    if(wrapperData->hostName == ((signed int *)NULL))
    {
      outOfMemory(L"LHN", 4);
      free((void *)hostName2);
      goto __CPROVER_DUMP_L6;
    }

    unsigned long int return_value_wcslen_7;
    return_value_wcslen_7=wcslen(hostName2);
    wcsncpy(wrapperData->hostName, hostName2, return_value_wcslen_7 + (unsigned long int)1);
    free((void *)hostName2);
  }

__CPROVER_DUMP_L6:
  ;
}

// wrapperLoadLoggingProperties
// file wrapper.c line 614
void wrapperLoadLoggingProperties(signed int preload)
{
  const signed int *logfilePath;
  signed int logfileRollMode;
  signed int underCygwin = 0;
  setLogPropertyWarnings(properties, (signed int)!(preload != 0));
  const signed int *return_value_getStringProperty_1;
  return_value_getStringProperty_1=getStringProperty(properties, L"wrapper.property_warning.loglevel", L"WARN");
  signed int return_value_getLogLevelForName_2;
  return_value_getLogLevelForName_2=getLogLevelForName(return_value_getStringProperty_1);
  setLogPropertyWarningLogLevel(properties, return_value_getLogLevelForName_2);
  signed int return_value_getIntProperty_3;
  return_value_getIntProperty_3=getIntProperty(properties, L"wrapper.log.warning.threshold", 0);
  setLogWarningThreshold(return_value_getIntProperty_3);
  signed int return_value_getIntProperty_4;
  return_value_getIntProperty_4=getIntProperty(properties, L"wrapper.log.lf_delay.threshold", 500);
  signed int return_value_propIntMin_5;
  return_value_propIntMin_5=propIntMin(return_value_getIntProperty_4, 3600000);
  wrapperData->logLFDelayThreshold=propIntMax(return_value_propIntMin_5, 0);
  logfilePath=getFileSafeStringProperty(properties, L"wrapper.logfile", L"wrapper.log");
  setLogfilePath(logfilePath, wrapperData->workingDir, preload);
  const signed int *return_value_getStringProperty_6;
  return_value_getStringProperty_6=getStringProperty(properties, L"wrapper.logfile.rollmode", L"SIZE");
  logfileRollMode=getLogfileRollModeForName(return_value_getStringProperty_6);
  if(logfileRollMode == 0)
  {
    log_printf(-1, 4, L"wrapper.logfile.rollmode invalid.  Disabling log file rolling.");
    logfileRollMode = 1;
  }

  else
    if(logfileRollMode == 16)
    {
      signed int *return_value_wcsstr_7;
      return_value_wcsstr_7=wcsstr(logfilePath, L"YYYYMMDD");
      if(return_value_wcsstr_7 == ((signed int *)NULL))
      {
        log_printf(-1, 4, L"wrapper.logfile must contain \"%s\" for a roll mode of DATE.  Disabling log file rolling.", (const void *)L"YYYYMMDD");
        logfileRollMode = 1;
      }

    }

  setLogfileRollMode(logfileRollMode);
  const signed int *return_value_getStringProperty_8;
  return_value_getStringProperty_8=getStringProperty(properties, L"wrapper.logfile.format", L"LPTM");
  setLogfileFormat(return_value_getStringProperty_8);
  const signed int *return_value_getStringProperty_9;
  return_value_getStringProperty_9=getStringProperty(properties, L"wrapper.logfile.loglevel", L"INFO");
  setLogfileLevel(return_value_getStringProperty_9);
  const signed int *return_value_getStringProperty_10;
  return_value_getStringProperty_10=getStringProperty(properties, L"wrapper.logfile.maxsize", L"0");
  setLogfileMaxFileSize(return_value_getStringProperty_10);
  signed int return_value_getIntProperty_11;
  return_value_getIntProperty_11=getIntProperty(properties, L"wrapper.logfile.maxfiles", 0);
  setLogfileMaxLogFiles(return_value_getIntProperty_11);
  const signed int *return_value_getFileSafeStringProperty_12;
  return_value_getFileSafeStringProperty_12=getFileSafeStringProperty(properties, L"wrapper.logfile.purge.pattern", L"");
  setLogfilePurgePattern(return_value_getFileSafeStringProperty_12);
  const signed int *return_value_getStringProperty_13;
  return_value_getStringProperty_13=getStringProperty(properties, L"wrapper.logfile.purge.sort", L"TIMES");
  signed int return_value_loggerFileGetSortMode_14;
  return_value_loggerFileGetSortMode_14=loggerFileGetSortMode(return_value_getStringProperty_13);
  setLogfilePurgeSortMode(return_value_loggerFileGetSortMode_14);
  signed int return_value_getIntProperty_15;
  return_value_getIntProperty_15=getIntProperty(properties, L"wrapper.logfile.inactivity.timeout", 1);
  signed int return_value_getIntProperty_16;
  return_value_getIntProperty_16=getIntProperty(properties, L"wrapper.logfile.close.timeout", return_value_getIntProperty_15);
  signed int return_value_propIntMin_17;
  return_value_propIntMin_17=propIntMin(return_value_getIntProperty_16, 3600);
  wrapperData->logfileCloseTimeout=propIntMax(return_value_propIntMin_17, -1);
  setLogfileAutoClose((signed int)(wrapperData->logfileCloseTimeout == 0));
  signed int return_value_getIntProperty_18;
  return_value_getIntProperty_18=getIntProperty(properties, L"wrapper.logfile.flush.timeout", 1);
  signed int return_value_propIntMin_19;
  return_value_propIntMin_19=propIntMin(return_value_getIntProperty_18, 3600);
  wrapperData->logfileFlushTimeout=propIntMax(return_value_propIntMin_19, 0);
  setLogfileAutoFlush((signed int)(wrapperData->logfileFlushTimeout == 0));
  const signed int *return_value_getStringProperty_20;
  return_value_getStringProperty_20=getStringProperty(properties, L"wrapper.console.format", L"PM");
  setConsoleLogFormat(return_value_getStringProperty_20);
  const signed int *return_value_getStringProperty_21;
  return_value_getStringProperty_21=getStringProperty(properties, L"wrapper.console.loglevel", L"INFO");
  setConsoleLogLevel(return_value_getStringProperty_21);
  signed int return_value_getBooleanProperty_22;
  return_value_getBooleanProperty_22=getBooleanProperty(properties, L"wrapper.console.flush", (signed int)(0 != 0 || underCygwin != 0));
  setConsoleFlush(return_value_getBooleanProperty_22);
  signed int return_value_getBooleanProperty_23;
  return_value_getBooleanProperty_23=getBooleanProperty(properties, L"wrapper.console.fatal_to_stderr", -1);
  setConsoleFatalToStdErr(return_value_getBooleanProperty_23);
  signed int return_value_getBooleanProperty_24;
  return_value_getBooleanProperty_24=getBooleanProperty(properties, L"wrapper.console.error_to_stderr", -1);
  setConsoleErrorToStdErr(return_value_getBooleanProperty_24);
  signed int return_value_getBooleanProperty_25;
  return_value_getBooleanProperty_25=getBooleanProperty(properties, L"wrapper.console.warn_to_stderr", 0);
  setConsoleWarnToStdErr(return_value_getBooleanProperty_25);
  const signed int *return_value_getStringProperty_26;
  return_value_getStringProperty_26=getStringProperty(properties, L"wrapper.syslog.loglevel", L"NONE");
  setSyslogLevel(return_value_getStringProperty_26);
  signed int return_value_getBooleanProperty_27;
  return_value_getBooleanProperty_27=getBooleanProperty(properties, L"wrapper.syslog.split_messages", 0);
  setSyslogSplitMessages(return_value_getBooleanProperty_27);
  const signed int *return_value_getStringProperty_28;
  return_value_getStringProperty_28=getStringProperty(properties, L"wrapper.syslog.facility", L"USER");
  setSyslogFacility(return_value_getStringProperty_28);
  const signed int *return_value_getStringProperty_29;
  return_value_getStringProperty_29=getStringProperty(properties, L"wrapper.ntservice.name", L"wrapper");
  const signed int *return_value_getStringProperty_30;
  return_value_getStringProperty_30=getStringProperty(properties, L"wrapper.name", return_value_getStringProperty_29);
  const signed int *return_value_getStringProperty_31;
  return_value_getStringProperty_31=getStringProperty(properties, L"wrapper.syslog.ident", return_value_getStringProperty_30);
  setSyslogEventSourceName(return_value_getStringProperty_31);
  signed int return_value_getSyslogLevelInt_32;
  return_value_getSyslogLevelInt_32=getSyslogLevelInt();
  if(!(return_value_getSyslogLevelInt_32 >= 9))
    registerSyslogMessageFile();

  wrapperData->isDebugging=getBooleanProperty(properties, L"wrapper.debug", 0);
  if(!(wrapperData->isDebugging == 0))
  {
    setConsoleLogLevelInt(1);
    setLogfileLevelInt(1);
  }

  else
  {
    signed int return_value_getLowLogLevel_33;
    return_value_getLowLogLevel_33=getLowLogLevel();
    if(!(return_value_getLowLogLevel_33 >= 2))
      wrapperData->isDebugging = -1;

  }
}

// wrapperLoadParameterFile
// file wrapper.c line 5820
signed int wrapperLoadParameterFile(signed int **strings, signed int addQuotes, signed int detectDebugJVM, signed int index, signed int *parameterName, signed int isJVMParameter)
{
  const signed int *parameterFilePath;
  struct LoadParameterFileCallbackParam callbackParam;
  signed int readResult;
  signed int prop[256l];
  parameterFilePath=getFileSafeStringProperty(properties, parameterName, L"");
  unsigned long int return_value_wcslen_1;
  return_value_wcslen_1=wcslen(parameterFilePath);
  if(return_value_wcslen_1 == 0ul)
    return index;

  else
  {
    if(!(addQuotes == 0))
      callbackParam.stripQuote = 0;

    else
    {
      _sntprintf(prop, (unsigned long int)256, L"%s.stripquotes", parameterName);
      callbackParam.stripQuote=getBooleanProperty(properties, prop, 0);
    }
    callbackParam.strings = strings;
    callbackParam.index = index;
    callbackParam.isJVMParam = isJVMParameter;
    readResult=configFileReader(parameterFilePath, -1, loadParameterFileCallback, (void *)&callbackParam, 0, 0, wrapperData->argCommand, wrapperData->originalWorkingDir, properties->warnedVarMap, properties->logWarnings, properties->logWarningLogLevel, wrapperData->isDebugging);
    switch(readResult)
    {
      case 101:
        return callbackParam.index;
      case 102:

      case 103:
        return -1;
      default:
      {
        _tprintf(L"Unexpected read error %d\n", readResult);
        return index;
      }
    }
  }
}

// wrapperLockTickMutex
// file wrapper.c line 8300
extern signed int wrapperLockTickMutex()
{
  signed int return_value_pthread_mutex_lock_2;
  return_value_pthread_mutex_lock_2=pthread_mutex_lock(&tickMutex);
  if(!(return_value_pthread_mutex_lock_2 == 0))
  {
    const signed int *return_value_getLastErrorText_1;
    return_value_getLastErrorText_1=getLastErrorText();
    _tprintf(L"Failed to lock the Tick mutex. %s\n", return_value_getLastErrorText_1);
    return -1;
  }

  return 0;
}

// wrapperLogFileChanged
// file wrapper.c line 2664
void wrapperLogFileChanged(const signed int *logFile)
{
  if(!(wrapperData->isDebugging == 0))
    log_printf_queue(-1, -1, 1, L"active log file changed: %s", logFile);

  if(!(wrapperData->jState == 72))
    wrapperProtocolFunction((char)134, logFile);

}

// wrapperLogSignaled
// file wrapper.c line 8623
extern void wrapperLogSignaled(signed int logLevel, signed int *msg)
{
  if(!(wrapperData->isDebugging == 0))
    log_printf(-1, 1, L"Got a log message from JVM: %s", msg);

  log_printf(wrapperData->jvmRestarts, logLevel, msg);
}

// wrapperMaintainSignals
// file wrapper.h line 781
extern void wrapperMaintainSignals()
{
  if(!(wrapperData->signalInterruptTrapped == 0))
  {
    wrapperData->signalInterruptTrapped = 0;
    takeSignalAction(2, L"INT", (signed int)(char)102);
  }

  if(!(wrapperData->signalQuitTrapped == 0))
  {
    wrapperData->signalQuitTrapped = 0;
    wrapperRequestDumpJVMState();
  }

  if(!(wrapperData->signalChildTrapped == 0))
  {
    wrapperData->signalChildTrapped = 0;
    unsigned int return_value_wrapperGetTicks_1;
    return_value_wrapperGetTicks_1=wrapperGetTicks();
    wrapperGetProcessStatus(return_value_wrapperGetTicks_1, -1);
  }

  if(!(wrapperData->signalTermTrapped == 0))
  {
    wrapperData->signalTermTrapped = 0;
    takeSignalAction(15, L"TERM", (signed int)(char)102);
  }

  if(!(wrapperData->signalHUPTrapped == 0))
  {
    wrapperData->signalHUPTrapped = 0;
    takeSignalAction(1, L"HUP", wrapperData->signalHUPMode);
  }

  if(!(wrapperData->signalUSR1Trapped == 0))
  {
    wrapperData->signalUSR1Trapped = 0;
    takeSignalAction(10, L"USR1", wrapperData->signalUSR1Mode);
  }

  if(!(wrapperData->signalUSR2Trapped == 0))
  {
    wrapperData->signalUSR2Trapped = 0;
    takeSignalAction(12, L"USR2", wrapperData->signalUSR2Mode);
  }

}

// wrapperParseArguments
// file wrapper.c line 3196
extern signed int wrapperParseArguments(signed int argc, signed int **argv)
{
  signed int *argConfFileBase;
  signed int *c;
  signed int delimiter;
  signed int wrapperArgCount;
  wrapperData->javaArgValueCount = 0;
  delimiter = 1;
  if(argc >= 2)
  {
    delimiter = 0;
    for( ; !(delimiter >= argc); delimiter = delimiter + 1)
    {
      signed int return_value_wcscmp_1;
      return_value_wcscmp_1=wcscmp(argv[(signed long int)delimiter], L"--");
      if(return_value_wcscmp_1 == 0)
      {
        free((void *)argv[(signed long int)delimiter]);
        argv[(signed long int)delimiter] = (signed int *)(void *)0;
        wrapperData->javaArgValueCount = (argc - delimiter) - 1;
        if(!(1 + delimiter >= argc))
          wrapperData->javaArgValues = &argv[(signed long int)(delimiter + 1)];

        break;
      }

    }
  }

  wrapperArgCount = delimiter;
  if(wrapperArgCount >= 2)
  {
    wrapperData->argBinary = argv[(signed long int)0];
    if(*argv[1l] == 45)
    {
      wrapperData->argCommand = &argv[(signed long int)1][(signed long int)1];
      if(*wrapperData->argCommand == 0)
      {
        wrapperUsage(argv[(signed long int)0]);
        return 0;
      }

      c=wcschr(wrapperData->argCommand, 61);
      if(c == ((signed int *)NULL))
        wrapperData->argCommandArg = (signed int *)(void *)0;

      else
      {
        wrapperData->argCommandArg = (signed int *)(c + (signed long int)1);
        c[(signed long int)0] = 0;
      }
      if(wrapperArgCount >= 3)
      {
        signed int return_value_wcsncmp_2;
        return_value_wcsncmp_2=wcsncmp(wrapperData->argCommand, L"-translate", (unsigned long int)5);
        if(return_value_wcsncmp_2 == 0)
        {
          if(wrapperArgCount >= 4)
          {
            wrapperData->argConfFile = argv[(signed long int)3];
            wrapperData->argCount = wrapperArgCount - 4;
            wrapperData->argValues = &argv[(signed long int)4];
          }

          return -1;
        }

        wrapperData->argConfFile = argv[(signed long int)2];
        wrapperData->argCount = wrapperArgCount - 3;
        wrapperData->argValues = &argv[(signed long int)3];
      }

      else
      {
        unsigned long int return_value_wcslen_3;
        return_value_wcslen_3=wcslen(argv[(signed long int)0]);
        void *return_value_malloc_4;
        return_value_malloc_4=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_3 + (unsigned long int)1));
        argConfFileBase = (signed int *)return_value_malloc_4;
        if(argConfFileBase == ((signed int *)NULL))
        {
          outOfMemory(L"WPA", 1);
          return 0;
        }

        wrapperGetFileBase(argv[(signed long int)0], argConfFileBase);
        unsigned long int return_value_wcslen_5;
        return_value_wcslen_5=wcslen(argConfFileBase);
        void *return_value_malloc_6;
        return_value_malloc_6=malloc((return_value_wcslen_5 + (unsigned long int)5 + (unsigned long int)1) * sizeof(signed int) /*4ul*/ );
        wrapperData->argConfFile = (signed int *)return_value_malloc_6;
        if(wrapperData->argConfFile == ((signed int *)NULL))
        {
          outOfMemory(L"WPA", 2);
          free((void *)argConfFileBase);
          return 0;
        }

        unsigned long int return_value_wcslen_7;
        return_value_wcslen_7=wcslen(argConfFileBase);
        _sntprintf(wrapperData->argConfFile, return_value_wcslen_7 + (unsigned long int)5 + (unsigned long int)1, L"%s.conf", argConfFileBase);
        free((void *)argConfFileBase);
        wrapperData->argConfFileDefault = -1;
        wrapperData->argCount = wrapperArgCount - 2;
        wrapperData->argValues = &argv[(signed long int)2];
      }
    }

    else
    {
      wrapperData->argCommand = L"c";
      wrapperData->argCommandArg = (signed int *)(void *)0;
      wrapperData->argConfFile = argv[(signed long int)1];
      wrapperData->argCount = wrapperArgCount - 2;
      wrapperData->argValues = &argv[(signed long int)2];
    }
  }

  else
  {
    wrapperData->argCommand = L"c";
    wrapperData->argCommandArg = (signed int *)(void *)0;
    unsigned long int return_value_wcslen_8;
    return_value_wcslen_8=wcslen(argv[(signed long int)0]);
    void *return_value_malloc_9;
    return_value_malloc_9=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_8 + (unsigned long int)1));
    argConfFileBase = (signed int *)return_value_malloc_9;
    if(argConfFileBase == ((signed int *)NULL))
    {
      outOfMemory(L"WPA", 3);
      return 0;
    }

    wrapperGetFileBase(argv[(signed long int)0], argConfFileBase);
    unsigned long int return_value_wcslen_10;
    return_value_wcslen_10=wcslen(argConfFileBase);
    void *return_value_malloc_11;
    return_value_malloc_11=malloc((return_value_wcslen_10 + (unsigned long int)5 + (unsigned long int)1) * sizeof(signed int) /*4ul*/ );
    wrapperData->argConfFile = (signed int *)return_value_malloc_11;
    if(wrapperData->argConfFile == ((signed int *)NULL))
    {
      outOfMemory(L"WPA", 4);
      free((void *)argConfFileBase);
      return 0;
    }

    unsigned long int return_value_wcslen_12;
    return_value_wcslen_12=wcslen(argConfFileBase);
    _sntprintf(wrapperData->argConfFile, return_value_wcslen_12 + (unsigned long int)5 + (unsigned long int)1, L"%s.conf", argConfFileBase);
    free((void *)argConfFileBase);
    wrapperData->argConfFileDefault = -1;
    wrapperData->argCount = wrapperArgCount - 1;
    wrapperData->argValues = &argv[(signed long int)1];
  }
  return -1;
}

// wrapperPauseProcess
// file wrapper.c line 4851
extern void wrapperPauseProcess(signed int actionSourceCode)
{
  signed int msgBuffer[10l];
  _Bool tmp_if_expr_1;
  if(wrapperData->pausable == 0)
  {
    if(!(wrapperData->isDebugging == 0))
      log_printf(-1, 1, L"wrapperPauseProcess() called but wrapper.pausable is FALSE.  (IGNORED)");

  }

  else
  {
    if(wrapperData->wState == 56)
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = wrapperData->wState == 57 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
    {
      if(!(wrapperData->isDebugging == 0))
        log_printf(-1, 1, L"wrapperPauseProcess() called while stopping.  (IGNORED)");

    }

    else
      if(wrapperData->wState == 53)
      {
        if(!(wrapperData->isDebugging == 0))
          log_printf(-1, 1, L"wrapperPauseProcess() called while pausing.  (IGNORED)");

      }

      else
        if(wrapperData->wState == 54)
        {
          if(!(wrapperData->isDebugging == 0))
            log_printf(-1, 1, L"wrapperPauseProcess() called while paused.  (IGNORED)");

        }

        else
        {
          if(!(wrapperData->isDebugging == 0))
            log_printf(-1, 1, L"wrapperPauseProcess() called.");

          wrapperSetWrapperState(53);
          if(wrapperData->pausableStopJVM == 0)
          {
            _sntprintf(msgBuffer, (unsigned long int)10, L"%d", actionSourceCode);
            wrapperProtocolFunction((char)138, msgBuffer);
          }

        }
  }
}

// wrapperPauseThread
// file wrapper.c line 3591
extern void wrapperPauseThread(signed int pauseTime, const signed int *threadName)
{
  signed int i;
  if(pauseTime >= 1)
  {
    log_printf(-1, 4, L"Pausing the \"%s\" thread for %d seconds...", threadName, pauseTime);
    i = 0;
    for( ; !(i >= pauseTime); i = i + 1)
      wrapperSleep(1000);
    log_printf(-1, 4, L"Resuming the \"%s\" thread...", threadName);
  }

  else
    if(!(pauseTime >= 0))
    {
      log_printf(-1, 4, L"Pausing the \"%s\" thread indefinitely.", threadName);
      while((_Bool)1)
        wrapperSleep(1000);
    }

}

// wrapperPingResponded
// file wrapper.c line 8715
extern void wrapperPingResponded(unsigned int pingSendTicks, signed int queueWarnings)
{
  unsigned int nowTicks;
  signed int tickAge;
  struct PendingPing *pendingPing;
  signed int pingSearchDone;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  do
  {
    pendingPing = wrapperData->firstPendingPing;
    if(!(pendingPing == ((struct PendingPing *)NULL)))
    {
      tickAge=wrapperGetTickAgeTicks(pingSendTicks, pendingPing->sentTicks);
      if(tickAge >= 1)
      {
        if(!(queueWarnings == 0))
        {
          if(wrapperData->pendingPingQueueOverflow == 0)
            tmp_if_expr_1 = !(wrapperData->pendingPingQueueOverflowEmptied != 0) ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr_1 = (_Bool)0;
          if(tmp_if_expr_1)
            log_printf(-1, 5, L"Received an unexpected ping response, sent at tick %08x.  First expected ping was sent at tick %08x.", pingSendTicks, pendingPing->sentTicks);

        }

        pendingPing = (struct PendingPing *)(void *)0;
        pingSearchDone = -1;
      }

      else
      {
        if(!(tickAge >= 0))
        {
          if(!(queueWarnings == 0))
          {
            if(wrapperData->pendingPingQueueOverflow == 0)
              tmp_if_expr_2 = !(wrapperData->pendingPingQueueOverflowEmptied != 0) ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr_2 = (_Bool)0;
            if(tmp_if_expr_2)
              log_printf(-1, 5, L"Lost a ping response, sent at tick %08x.", pendingPing->sentTicks);

          }

          pingSearchDone = 0;
        }

        else
        {
          pingSearchDone = -1;
          if(!(wrapperData->pendingPingQueueOverflowEmptied == 0))
            wrapperData->pendingPingQueueOverflowEmptied = 0;

        }
        if(!(pendingPing->nextPendingPing == ((struct PendingPing *)NULL)))
        {
          wrapperData->pendingPingCount = wrapperData->pendingPingCount - 1;
          if(wrapperData->firstUnwarnedPendingPing == wrapperData->firstPendingPing)
            wrapperData->firstUnwarnedPendingPing = pendingPing->nextPendingPing;

          wrapperData->firstPendingPing = pendingPing->nextPendingPing;
          pendingPing->nextPendingPing = (struct PendingPing *)(void *)0;
        }

        else
        {
          wrapperData->pendingPingCount = 0;
          wrapperData->firstUnwarnedPendingPing = (struct PendingPing *)(void *)0;
          wrapperData->firstPendingPing = (struct PendingPing *)(void *)0;
          wrapperData->lastPendingPing = (struct PendingPing *)(void *)0;
          if(!(wrapperData->pendingPingQueueOverflow == 0))
          {
            wrapperData->pendingPingQueueOverflowEmptied = -1;
            wrapperData->pendingPingQueueOverflow = 0;
          }

        }
        if(!(pendingPing == ((struct PendingPing *)NULL)))
        {
          free((void *)pendingPing);
          pendingPing = (struct PendingPing *)(void *)0;
        }

      }
    }

    else
    {
      if(!(queueWarnings == 0))
      {
        if(wrapperData->pendingPingQueueOverflow == 0)
          tmp_if_expr_3 = !(wrapperData->pendingPingQueueOverflowEmptied != 0) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_3 = (_Bool)0;
        if(tmp_if_expr_3)
          log_printf(-1, 5, L"Received an unexpected ping response, sent at tick %08x.", pingSendTicks);

      }

      pingSearchDone = -1;
    }
  }
  while(pingSearchDone == 0);
  if(wrapperData->jState == 79)
  {
    nowTicks=wrapperGetTicks();
    tickAge=wrapperGetTickAgeSeconds(pingSendTicks, nowTicks);
    if(wrapperData->pingAlertThreshold >= 1)
    {
      if(tickAge >= wrapperData->pingAlertThreshold)
        wrapperPingRespondedSlow(tickAge);

    }

    if(wrapperData->pingTimeout >= 1)
      wrapperUpdateJavaStateTimeout(nowTicks, 5 + wrapperData->pingTimeout);

    else
      wrapperUpdateJavaStateTimeout(nowTicks, -1);
  }

}

// wrapperPingRespondedSlow
// file wrapper.c line 8705
extern void wrapperPingRespondedSlow(signed int tickAge)
{
  log_printf(-1, wrapperData->pingAlertLogLevel, L"Pinging the JVM took %d seconds to respond.", tickAge);
}

// wrapperPingSlow
// file wrapper.c line 8697
extern void wrapperPingSlow()
{
  ;
}

// wrapperPingTimeoutResponded
// file wrapper.c line 8857
extern void wrapperPingTimeoutResponded()
{
  wrapperProcessActionList(wrapperData->pingActionList, L"JVM appears hung: Timed out waiting for signal from JVM.", 11, -1, 1);
}

// wrapperPostProcessCommandElement
// file wrapper.c line 3516
extern signed int * wrapperPostProcessCommandElement(signed int *command)
{
  signed int *pos1;
  signed int *pos2;
  unsigned long int commandLen;
  unsigned long int commandLen2;
  unsigned long int commandLenLen;
  signed int commandLenBuffer[8l];
  unsigned long int fillerLen;
  signed int *tempCommand;
  unsigned long int index;
  pos1=wcsstr(command, L"%WRAPPER_COMMAND_FILLER_");
  signed long int tmp_if_expr_3;
  signed long int return_value_wcstol_2;
  signed long int tmp_if_expr_7;
  signed long int return_value_wcstol_4;
  signed long int tmp_if_expr_6;
  signed long int return_value_wcstol_5;
  if(pos1 == ((signed int *)NULL))
    return command;

  else
  {
    pos2=wcsstr(pos1 + (signed long int)1, L"%");
    if(pos2 == ((signed int *)NULL))
      return command;

    else
    {
      commandLen=wcslen(command);
      commandLenLen = (unsigned long int)((pos2 - pos1) - (signed long int)24);
      if(commandLenLen >= 8ul)
        return command;

      else
      {
        memcpy((void *)commandLenBuffer, (const void *)(pos1 + (signed long int)24), sizeof(signed int) /*4ul*/  * commandLenLen);
        commandLenBuffer[(signed long int)commandLenLen] = 0;
        signed long int return_value_wcstol_1;
        return_value_wcstol_1=wcstol(commandLenBuffer, (signed int ** restrict )(void *)0, 10);
        if(!(return_value_wcstol_1 >= 9999999l))
        {
          return_value_wcstol_2=wcstol(commandLenBuffer, (signed int ** restrict )(void *)0, 10);
          tmp_if_expr_3 = return_value_wcstol_2;
        }

        else
          tmp_if_expr_3 = (signed long int)9999999;
        if(!(tmp_if_expr_3 >= (signed long int)((signed int)commandLen + -((signed int)commandLenLen) + -25)))
          tmp_if_expr_7 = (signed long int)((signed int)(commandLen - commandLenLen) - 25);

        else
        {
          return_value_wcstol_4=wcstol(commandLenBuffer, (signed int ** restrict )(void *)0, 10);
          if(!(return_value_wcstol_4 >= 9999999l))
          {
            return_value_wcstol_5=wcstol(commandLenBuffer, (signed int ** restrict )(void *)0, 10);
            tmp_if_expr_6 = return_value_wcstol_5;
          }

          else
            tmp_if_expr_6 = (signed long int)9999999;
          tmp_if_expr_7 = tmp_if_expr_6;
        }
        commandLen2 = (unsigned long int)tmp_if_expr_7;
        fillerLen = (commandLen2 - commandLen) + commandLenLen + (unsigned long int)25;
        void *return_value_malloc_8;
        return_value_malloc_8=malloc(sizeof(signed int) /*4ul*/  * (((commandLen - commandLenLen) - (unsigned long int)25) + fillerLen + (unsigned long int)1));
        tempCommand = (signed int *)return_value_malloc_8;
        if(tempCommand == ((signed int *)NULL))
        {
          outOfMemory(L"WBJC", 3);
          return command;
        }

        else
        {
          memcpy((void *)tempCommand, (const void *)command, (unsigned long int)(pos1 - command) * sizeof(signed int) /*4ul*/ );
          index = (unsigned long int)(pos1 - command);
          if(fillerLen >= 12ul)
          {
            _sntprintf(&tempCommand[(signed long int)index], (commandLen2 + (unsigned long int)1) - index, L"FILL-%d-", fillerLen);
            unsigned long int return_value_wcslen_9;
            return_value_wcslen_9=wcslen(&tempCommand[(signed long int)index]);
            fillerLen = fillerLen - return_value_wcslen_9;
            unsigned long int return_value_wcslen_10;
            return_value_wcslen_10=wcslen(&tempCommand[(signed long int)index]);
            index = index + return_value_wcslen_10;
          }

          for( ; fillerLen >= 2ul; fillerLen = fillerLen - 1ul)
          {
            tempCommand[(signed long int)index] = 88;
            index = index + 1ul;
          }
          if(fillerLen >= 1ul)
          {
            tempCommand[(signed long int)index] = 89;
            index = index + 1ul;
            fillerLen = fillerLen - 1ul;
          }

          unsigned long int return_value_wcslen_11;
          return_value_wcslen_11=wcslen(pos2 + (signed long int)1);
          memcpy((void *)&tempCommand[(signed long int)index], (const void *)(pos2 + (signed long int)1), sizeof(signed int) /*4ul*/  * return_value_wcslen_11);
          tempCommand[(signed long int)commandLen2] = 0;
          free((void *)command);
          return tempCommand;
        }
      }
    }
  }
}

// wrapperProcessActionList
// file wrapper.c line 3336
extern void wrapperProcessActionList(signed int *actionList, const signed int *triggerMsg, signed int actionSourceCode, signed int logForActionNone, signed int exitCode)
{
  signed int i;
  signed int action;
  const signed int *return_value_wrapperGetRestartProcessMessage_1;
  if(!(actionList == ((signed int *)NULL)))
  {
    i = 0;
    do
    {
      action = actionList[(signed long int)i];
      if(action == 0)
        break;

      if(!(action == -2))
      {
        if(action == -3)
          goto __CPROVER_DUMP_L3;

        if(action == -4)
          goto __CPROVER_DUMP_L4;

        if(action == -5)
          goto __CPROVER_DUMP_L5;

        if(action == -6)
          goto __CPROVER_DUMP_L6;

        if(action == -7)
          goto __CPROVER_DUMP_L7;

        if(action == -1)
          goto __CPROVER_DUMP_L8;

        if(action == -8)
          goto __CPROVER_DUMP_L10;

        if(action == -9)
          goto __CPROVER_DUMP_L11;

      }

      else
      {
        return_value_wrapperGetRestartProcessMessage_1=wrapperGetRestartProcessMessage();
        log_printf(-1, 3, L"%s  %s", triggerMsg, return_value_wrapperGetRestartProcessMessage_1);
        wrapperRestartProcess();
        goto __CPROVER_DUMP_L13;

      __CPROVER_DUMP_L3:
        ;
        log_printf(-1, 3, L"%s  Shutting down.", triggerMsg);
        wrapperStopProcess(exitCode, 0);
        goto __CPROVER_DUMP_L13;

      __CPROVER_DUMP_L4:
        ;
        log_printf(-1, 3, L"%s  Requesting thread dump.", triggerMsg);
        wrapperRequestDumpJVMState();
        goto __CPROVER_DUMP_L13;

      __CPROVER_DUMP_L5:
        ;
        log_printf(-1, 3, L"%s  Debugging.", triggerMsg);
        goto __CPROVER_DUMP_L13;

      __CPROVER_DUMP_L6:
        ;
        log_printf(-1, 3, L"%s  Pausing...", triggerMsg);
        wrapperPauseProcess(actionSourceCode);
        goto __CPROVER_DUMP_L13;

      __CPROVER_DUMP_L7:
        ;
        log_printf(-1, 3, L"%s  Resuming...", triggerMsg);
        wrapperResumeProcess(actionSourceCode);
        goto __CPROVER_DUMP_L13;

      __CPROVER_DUMP_L8:
        ;
        if(!(logForActionNone == 0))
          log_printf(-1, 3, L"%s", triggerMsg);

        goto __CPROVER_DUMP_L13;

      __CPROVER_DUMP_L10:
        ;
        log_printf(-1, 3, L"%s  Application has signalled success, consider this application started successful...", triggerMsg);
        wrapperData->failedInvocationCount = 0;
        goto __CPROVER_DUMP_L13;

      __CPROVER_DUMP_L11:
        ;
        log_printf(-1, 3, L"%s  Requesting GC...", triggerMsg);
        wrapperRequestJVMGC(actionSourceCode);
        goto __CPROVER_DUMP_L13;
      }
      log_printf(-1, 4, L"Unknown action type: %d", action);

    __CPROVER_DUMP_L13:
      ;
      i = i + 1;
    }
    while((_Bool)1);
  }

}

// wrapperProtocolClose
// file wrapper.c line 1824
extern void wrapperProtocolClose()
{
  if(wrapperData->backendType == 0x04)
    protocolClosePipe();

  else
    protocolCloseSocket();
}

// wrapperProtocolFunction
// file wrapper.c line 2021
extern signed int wrapperProtocolFunction(char function, const signed int *messageW)
{
  signed int rc;
  signed int cnt;
  signed int sendCnt;
  signed int inWritten;
  unsigned long int len;
  signed int *logMsgW;
  const signed int *messageTemplate;
  char *messageMB = (char *)(void *)0;
  signed int returnVal = 0;
  signed int ok = -1;
  unsigned long int sent;
  signed int return_value_lockProtocolMutex_1;
  return_value_lockProtocolMutex_1=lockProtocolMutex();
  unsigned long int tmp_if_expr_7;
  unsigned long int return_value_strlen_6;
  _Bool tmp_if_expr_24;
  _Bool tmp_if_expr_26;
  _Bool tmp_if_expr_25;
  int *tmp_if_expr_11;
  _Bool tmp_if_expr_15;
  signed int *return_value_wcsstr_14;
  int *tmp_if_expr_13;
  if(!(return_value_lockProtocolMutex_1 == 0))
    return -1;

  else
  {
    if(!(ok == 0))
    {
      if(!(messageW == ((const signed int *)NULL)))
      {
        len=wcstombs((char *)(void *)0, messageW, (unsigned long int)0);
        if(len == 18446744073709551615ul)
        {
          const signed int *return_value_getLastErrorText_2;
          return_value_getLastErrorText_2=getLastErrorText();
          log_printf(-2, 4, L"Invalid multibyte sequence in %s \"%s\" : %s", (const void *)L"protocol message", messageW, return_value_getLastErrorText_2);
          returnVal = -1;
          ok = 0;
        }

        else
        {
          void *return_value_malloc_3;
          return_value_malloc_3=malloc(len + (unsigned long int)1);
          messageMB = (char *)return_value_malloc_3;
          if(messageMB == ((char *)NULL))
          {
            outOfMemory(L"WPF", 3);
            returnVal = -1;
            ok = 0;
          }

          else
            wcstombs(messageMB, messageW, len + (unsigned long int)1);
        }
      }

      else
        messageMB = (char *)(void *)0;
    }

    if(function == 's')
    {
      messageTemplate = L"(Property Values, Size=%d)";
      unsigned long int return_value_wcslen_4;
      return_value_wcslen_4=wcslen(messageTemplate);
      len = return_value_wcslen_4 + (unsigned long int)16 + (unsigned long int)1;
      void *return_value_malloc_5;
      return_value_malloc_5=malloc(sizeof(signed int) /*4ul*/  * len);
      logMsgW = (signed int *)return_value_malloc_5;
      if(logMsgW == ((signed int *)NULL))
      {
        outOfMemory(L"WPF", 1);
        logMsgW = (signed int *)messageW;
      }

      else
      {
        if(!(messageMB == ((char *)NULL)))
        {
          return_value_strlen_6=strlen(messageMB);
          tmp_if_expr_7 = return_value_strlen_6;
        }

        else
          tmp_if_expr_7 = (unsigned long int)0;
        _sntprintf(logMsgW, len, messageTemplate, tmp_if_expr_7);
      }
    }

    else
      logMsgW = (signed int *)messageW;
    if(!(ok == 0))
    {
      if(!(messageMB == ((char *)NULL)))
      {
        unsigned long int return_value_strlen_8;
        return_value_strlen_8=strlen(messageMB);
        len = (unsigned long int)1 + return_value_strlen_8 + (unsigned long int)1;
      }

      else
        len = (unsigned long int)2;
      if(!(protocolSendBufferSize >= len))
      {
        if(!(protocolSendBuffer == ((char *)NULL)))
          free((void *)protocolSendBuffer);

        void *return_value_malloc_9;
        return_value_malloc_9=malloc(sizeof(char) /*1ul*/  * len);
        protocolSendBuffer = (char *)return_value_malloc_9;
        if(protocolSendBuffer == ((char *)NULL))
        {
          outOfMemory(L"WPF", 4);
          returnVal = -1;
          ok = 0;
        }

        else
        {
          protocolSendBuffer[(signed long int)0] = function;
          if(!(messageMB == ((char *)NULL)))
            __builtin_strncpy(&protocolSendBuffer[(signed long int)1], messageMB, len - (unsigned long int)1);

          else
            protocolSendBuffer[(signed long int)1] = (char)0;
        }
      }

      if(!(messageMB == ((char *)NULL)))
        free((void *)messageMB);

    }

    if(!(ok == 0))
    {
      if(protocolActiveBackendSD == -1)
        tmp_if_expr_24 = wrapperData->backendType == (0x01 | 0x02) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_24 = (_Bool)0;
      if(tmp_if_expr_24)
        tmp_if_expr_26 = (_Bool)1;

      else
      {
        if(protocolActiveServerPipeConnected == 0)
          tmp_if_expr_25 = wrapperData->backendType == 0x04 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr_25 = (_Bool)0;
        tmp_if_expr_26 = tmp_if_expr_25 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_26)
      {
        if(!(wrapperData->isDebugging == 0))
        {
          signed int *return_value_wrapperProtocolGetCodeName_10;
          return_value_wrapperProtocolGetCodeName_10=wrapperProtocolGetCodeName(function);
          if(logMsgW == ((signed int *)NULL))
            tmp_if_expr_11 = L"NULL";

          else
            tmp_if_expr_11 = logMsgW;
          log_printf(-2, 1, L"Socket not open, so packet not sent %s : %s", return_value_wrapperProtocolGetCodeName_10, tmp_if_expr_11);
        }

        returnVal = -1;
      }

      else
      {
        if(!(wrapperData->isDebugging == 0))
        {
          if(function == 'g' && !(messageW == ((const signed int *)NULL)))
          {
            return_value_wcsstr_14=wcsstr(messageW, L"silent");
            tmp_if_expr_15 = return_value_wcsstr_14 == messageW ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_15 = (_Bool)0;
          if(!tmp_if_expr_15)
          {
            signed int *return_value_wrapperProtocolGetCodeName_12;
            return_value_wrapperProtocolGetCodeName_12=wrapperProtocolGetCodeName(function);
            if(logMsgW == ((signed int *)NULL))
              tmp_if_expr_13 = L"NULL";

            else
              tmp_if_expr_13 = logMsgW;
            log_printf(-2, 1, L"Send a packet %s : %s", return_value_wrapperProtocolGetCodeName_12, tmp_if_expr_13);
          }

        }

        if(wrapperData->backendType == 0x04)
        {
          sent = (unsigned long int)0;
          cnt = 0;
          sendCnt = 0;
          while(!(cnt >= 200) && !(sent >= len))
          {
            if(cnt >= 1)
              wrapperSleep(10);

            signed long int return_value_write_18;
            return_value_write_18=write(protocolActiveServerPipeOut, (const void *)(protocolSendBuffer + (signed long int)sent), sizeof(char) /*1ul*/  * (unsigned long int)(signed int)(len - sent));
            inWritten = (signed int)return_value_write_18;
            if(inWritten == -1)
            {
              signed int return_value_wrapperGetLastError_16;
              return_value_wrapperGetLastError_16=wrapperGetLastError();
              const signed int *return_value_getLastErrorText_17;
              return_value_getLastErrorText_17=getLastErrorText();
              log_printf(-2, 6, L"Writing to the backend pipe failed (%d): %s", return_value_wrapperGetLastError_16, return_value_getLastErrorText_17);
              returnVal = -1;
              break;
            }

            else
            {
              if(sendCnt >= 1 || !(sent + (unsigned long int)inWritten >= len))
              {
                if(!(wrapperData->isDebugging == 0))
                  log_printf(-2, 1, L"  Sent %d bytes, %d remaining.", inWritten, (len - sent) - (unsigned long int)inWritten);

              }

              sent = sent + (unsigned long int)inWritten;
              sendCnt = sendCnt + 1;
            }
            cnt = cnt + 1;
          }
          if(!(sent >= len))
          {
            log_printf(-2, 5, L"%s send failed.  Incomplete.  Sent %d of %d bytes.", (const void *)L"Pipe", sent, len);
            returnVal = -1;
          }

        }

        else
        {
          sent = (unsigned long int)0;
          cnt = 0;
          sendCnt = 0;
          rc = 0;
          while(!(cnt >= 200) && !(sent >= len))
          {
            if(cnt >= 1)
              wrapperSleep(10);

            signed long int return_value_send_19;
            return_value_send_19=send(protocolActiveBackendSD, (const void *)(protocolSendBuffer + (signed long int)sent), sizeof(char) /*1ul*/  * (unsigned long int)(signed int)(len - sent), 0);
            rc = (signed int)return_value_send_19;
            if(rc == -1)
            {
              signed int return_value_wrapperGetLastError_20;
              return_value_wrapperGetLastError_20=wrapperGetLastError();
              if(!(return_value_wrapperGetLastError_20 == 11))
                break;

            }

            else
              if(!(rc >= 0))
              {
                log_printf(-2, 5, L"Send unexpectedly returned %d", rc);
                break;
              }

              else
              {
                if(sendCnt >= 1 || !(sent + (unsigned long int)rc >= len))
                {
                  if(!(wrapperData->isDebugging == 0))
                    log_printf(-2, 1, L"  Sent %d bytes, %d remaining.", rc, (len - sent) - (unsigned long int)rc);

                }

                sent = sent + (unsigned long int)rc;
                sendCnt = sendCnt + 1;
              }
            cnt = cnt + 1;
          }
          if(rc == -1)
          {
            signed int return_value_wrapperGetLastError_23;
            return_value_wrapperGetLastError_23=wrapperGetLastError();
            if(return_value_wrapperGetLastError_23 == 11)
            {
              const signed int *return_value_getLastErrorText_21;
              return_value_getLastErrorText_21=getLastErrorText();
              log_printf(-2, 4, L"Socket send failed.  Blocked for 2 seconds.  %s", return_value_getLastErrorText_21);
            }

            else
              if(!(wrapperData->isDebugging == 0))
              {
                const signed int *return_value_getLastErrorText_22;
                return_value_getLastErrorText_22=getLastErrorText();
                log_printf(-2, 1, L"Socket send failed.  %s", return_value_getLastErrorText_22);
              }

            wrapperProtocolClose();
            returnVal = -1;
          }

          else
            if(!(sent >= len))
            {
              log_printf(-2, 5, L"%s send failed.  Incomplete.  Sent %d of %d bytes.", (const void *)L"Socket", sent, len);
              returnVal = -1;
            }

            else
              returnVal = 0;
        }
      }
    }

    if(!(logMsgW == messageW))
      free((void *)logMsgW);

    signed int return_value_releaseProtocolMutex_27;
    return_value_releaseProtocolMutex_27=releaseProtocolMutex();
    if(!(return_value_releaseProtocolMutex_27 == 0))
      returnVal = -1;

    return returnVal;
  }
}

// wrapperProtocolGetCodeName
// file wrapper.c line 1835
signed int * wrapperProtocolGetCodeName(char code)
{
  signed int *name;
  if(!((signed int)code == 100))
  {
    if((signed int)code == 101)
      goto __CPROVER_DUMP_L2;

    if((signed int)code == 102)
      goto __CPROVER_DUMP_L3;

    if((signed int)code == 103)
      goto __CPROVER_DUMP_L4;

    if((signed int)code == 104)
      goto __CPROVER_DUMP_L5;

    if((signed int)code == 105)
      goto __CPROVER_DUMP_L6;

    if((signed int)code == 106)
      goto __CPROVER_DUMP_L7;

    if((signed int)code == 107)
      goto __CPROVER_DUMP_L8;

    if((signed int)code == 110)
      goto __CPROVER_DUMP_L9;

    if((signed int)code == 111)
      goto __CPROVER_DUMP_L10;

    if((signed int)code == 112)
      goto __CPROVER_DUMP_L11;

    if((signed int)code == 113)
      goto __CPROVER_DUMP_L12;

    if((signed int)code == 114)
      goto __CPROVER_DUMP_L13;

    if((signed int)code == 115)
      goto __CPROVER_DUMP_L14;

    if((signed int)code == 1)
      goto __CPROVER_DUMP_L15;

    if((signed int)code == 2)
      goto __CPROVER_DUMP_L16;

    if((signed int)code == 3)
      goto __CPROVER_DUMP_L17;

    if((signed int)code == 4)
      goto __CPROVER_DUMP_L18;

    if((signed int)code == 5)
      goto __CPROVER_DUMP_L19;

    if((signed int)code == 6)
      goto __CPROVER_DUMP_L20;

    if((signed int)code == 7)
      goto __CPROVER_DUMP_L21;

    if((signed int)code == 8)
      goto __CPROVER_DUMP_L22;

    if((signed int)code == -122)
      goto __CPROVER_DUMP_L23;

    if((signed int)code == -119)
      goto __CPROVER_DUMP_L24;

    if((signed int)code == -118)
      goto __CPROVER_DUMP_L25;

    if((signed int)code == -117)
      goto __CPROVER_DUMP_L26;

    if((signed int)code == -116)
      goto __CPROVER_DUMP_L27;

  }

  else
  {
    name = L"START";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L2:
    ;
    name = L"STOP";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L3:
    ;
    name = L"RESTART";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L4:
    ;
    name = L"PING";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L5:
    ;
    name = L"STOP_PENDING";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L6:
    ;
    name = L"START_PENDING";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L7:
    ;
    name = L"STARTED";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L8:
    ;
    name = L"STOPPED";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L9:
    ;
    name = L"KEY";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L10:
    ;
    name = L"BADKEY";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L11:
    ;
    name = L"LOW_LOG_LEVEL";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L12:
    ;
    name = L"PING_TIMEOUT";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L13:
    ;
    name = L"SERVICE_CONTROL_CODE";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L14:
    ;
    name = L"PROPERTIES";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L15:
    ;
    name = L"LOG(DEBUG)";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L16:
    ;
    name = L"LOG(INFO)";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L17:
    ;
    name = L"LOG(STATUS)";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L18:
    ;
    name = L"LOG(WARN)";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L19:
    ;
    name = L"LOG(ERROR)";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L20:
    ;
    name = L"LOG(FATAL)";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L21:
    ;
    name = L"LOG(ADVICE)";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L22:
    ;
    name = L"LOG(NOTICE)";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L23:
    ;
    name = L"LOGFILE";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L24:
    ;
    name = L"APPEAR_ORPHAN";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L25:
    ;
    name = L"PAUSE";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L26:
    ;
    name = L"RESUME";
    goto __CPROVER_DUMP_L29;

  __CPROVER_DUMP_L27:
    ;
    name = L"GC";
    goto __CPROVER_DUMP_L29;
  }
  static signed int unknownBuffer[14l];
  _sntprintf(unknownBuffer, (unsigned long int)14, L"UNKNOWN(%d)", code);
  name = unknownBuffer;

__CPROVER_DUMP_L29:
  ;
  return name;
}

// wrapperProtocolRead
// file wrapper.c line 2371
extern signed int wrapperProtocolRead()
{
  char c;
  char code;
  signed int len;
  signed int pos;
  signed int *tc;
  signed int err;
  struct timeb timeBuffer;
  signed long int startTime;
  signed int startTimeMillis;
  signed long int now;
  signed int nowMillis;
  signed long int durr;
  unsigned long int req;
  wrapperGetCurrentTime(&timeBuffer);
  now = timeBuffer.time;
  startTime = now;
  nowMillis = (signed int)timeBuffer.millitm;
  startTimeMillis = nowMillis;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_13;
  signed int *return_value_wcsstr_12;
  signed long int return_value_wcstol_14;
  signed long int return_value_wcstol_17;
  signed long int return_value_wcstol_18;
  do
  {
    durr = (now - startTime) * (signed long int)1000 + (signed long int)(nowMillis - startTimeMillis);
    if(durr >= 250l)
      break;

    if(protocolActiveBackendSD == -1 && !((3 & wrapperData->backendType) == 0))
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = (wrapperData->backendType == 0x04 ? (protocolActiveServerPipeConnected == 0 ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
    {
      signed int return_value_wrapperCheckServerBackend_1;
      return_value_wrapperCheckServerBackend_1=wrapperCheckServerBackend(0);
      if(return_value_wrapperCheckServerBackend_1 == 0)
        return 0;

      protocolOpen();
      if(protocolActiveBackendSD == -1 && !((3 & wrapperData->backendType) == 0))
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = (wrapperData->backendType == 0x04 ? (protocolActiveServerPipeConnected == 0 ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
        return 0;

    }

    if(!((3 & wrapperData->backendType) == 0))
    {
      signed long int return_value_recv_4;
      return_value_recv_4=recv(protocolActiveBackendSD, (void *)&c, (unsigned long int)1, 0);
      len = (signed int)return_value_recv_4;
      if(len == -1)
      {
        err=wrapperGetLastError();
        if(!(err == 11))
        {
          if(!(wrapperData->isDebugging == 0))
          {
            const signed int *return_value_getLastErrorText_5;
            return_value_getLastErrorText_5=getLastErrorText();
            log_printf(-2, 1, L"socket read failed. (%s)", return_value_getLastErrorText_5);
          }

          wrapperProtocolClose();
        }

        return 0;
      }

      else
        if(!(len == 1))
        {
          if(!(wrapperData->isDebugging == 0))
            log_printf(-2, 1, L"socket read no code (closed?).");

          wrapperProtocolClose();
          return 0;
        }

      code = (char)c;
      pos = 0;
      do
      {
        signed long int return_value_recv_6;
        return_value_recv_6=recv(protocolActiveBackendSD, (void *)&c, (unsigned long int)1, 0);
        len = (signed int)return_value_recv_6;
        if(len == 1)
        {
          if((signed int)c == 0)
            len = 0;

          else
            if(!(pos >= 4096))
            {
              packetBufferMB[(signed long int)pos] = c;
              pos = pos + 1;
            }

        }

        else
          len = 0;
      }
      while(len == 1);
      packetBufferMB[(signed long int)pos] = (char)0;
    }

    else
      if(wrapperData->backendType == 0x04)
      {
        signed long int return_value_read_7;
        return_value_read_7=read(protocolActiveServerPipeIn, (void *)&c, (unsigned long int)1);
        len = (signed int)return_value_read_7;
        if(len == -1)
        {
          err=wrapperGetLastError();
          if(!(err == 11))
          {
            if(!(wrapperData->isDebugging == 0))
            {
              const signed int *return_value_getLastErrorText_8;
              return_value_getLastErrorText_8=getLastErrorText();
              log_printf(-2, 1, L"pipe read failed. (%s)", return_value_getLastErrorText_8);
            }

            wrapperProtocolClose();
          }

          return 0;
        }

        else
          if(len == 0)
            return 0;

        code = (char)c;
        pos = 0;
        do
        {
          signed long int return_value_read_9;
          return_value_read_9=read(protocolActiveServerPipeIn, (void *)&c, (unsigned long int)1);
          len = (signed int)return_value_read_9;
          if(len == 1)
          {
            if((signed int)c == 0)
              len = 0;

            else
              if(!(pos >= 4096))
              {
                packetBufferMB[(signed long int)pos] = c;
                pos = pos + 1;
              }

          }

          else
            len = 0;
        }
        while(len == 1);
        packetBufferMB[(signed long int)pos] = (char)0;
      }

      else
        return 0;
    req=mbstowcs(packetBufferW, packetBufferMB, (unsigned long int)(4096 + 1));
    if(req == 18446744073709551615ul)
    {
      const signed int *return_value_getLastErrorText_10;
      return_value_getLastErrorText_10=getLastErrorText();
      log_printf(-2, 4, L"Invalid multibyte sequence in %s: %s", (const void *)L"protocol message", return_value_getLastErrorText_10);
      packetBufferW[(signed long int)0] = 0;
    }

    if(!(wrapperData->isDebugging == 0))
    {
      if(code == 'g')
      {
        return_value_wcsstr_12=wcsstr(packetBufferW, L"silent");
        tmp_if_expr_13 = return_value_wcsstr_12 == packetBufferW ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_13 = (_Bool)0;
      if(!tmp_if_expr_13)
      {
        signed int *return_value_wrapperProtocolGetCodeName_11;
        return_value_wrapperProtocolGetCodeName_11=wrapperProtocolGetCodeName(code);
        log_printf(-2, 1, L"read a packet %s : %s", return_value_wrapperProtocolGetCodeName_11, (const void *)packetBufferW);
      }

    }

    if(!((signed int)code == 101))
    {
      if((signed int)code == 102)
        goto __CPROVER_DUMP_L37;

      if((signed int)code == 103)
        goto __CPROVER_DUMP_L38;

      if((signed int)code == 104)
        goto __CPROVER_DUMP_L41;

      if((signed int)code == 107)
        goto __CPROVER_DUMP_L42;

      if((signed int)code == 105)
        goto __CPROVER_DUMP_L43;

      if((signed int)code == 106)
        goto __CPROVER_DUMP_L44;

      if((signed int)code == 110)
        goto __CPROVER_DUMP_L45;

      if((signed int)code == 1 || (signed int)code == 2 || (signed int)code == 3 || (signed int)code == 4 || (signed int)code == 5 || (signed int)code == 6)
        goto __CPROVER_DUMP_L46;

      if((signed int)code == -119)
        goto __CPROVER_DUMP_L47;

    }

    else
    {
      return_value_wcstol_14=wcstol(packetBufferW, (signed int ** restrict )(void *)0, 10);
      wrapperStopRequested((signed int)return_value_wcstol_14);
      goto __CPROVER_DUMP_L50;

    __CPROVER_DUMP_L37:
      ;
      wrapperRestartRequested();
      goto __CPROVER_DUMP_L50;

    __CPROVER_DUMP_L38:
      ;
      tc=wcschr(packetBufferW, 32);
      if(!(tc == ((signed int *)NULL)))
      {
        unsigned int return_value_hexToTICKS_15;
        return_value_hexToTICKS_15=hexToTICKS(&tc[(signed long int)1]);
        wrapperPingResponded(return_value_hexToTICKS_15, -1);
      }

      else
      {
        unsigned int return_value_wrapperGetTicks_16;
        return_value_wrapperGetTicks_16=wrapperGetTicks();
        wrapperPingResponded(return_value_wrapperGetTicks_16, 0);
      }
      goto __CPROVER_DUMP_L50;

    __CPROVER_DUMP_L41:
      ;
      return_value_wcstol_17=wcstol(packetBufferW, (signed int ** restrict )(void *)0, 10);
      wrapperStopPendingSignaled((signed int)return_value_wcstol_17);
      goto __CPROVER_DUMP_L50;

    __CPROVER_DUMP_L42:
      ;
      wrapperStoppedSignaled();
      goto __CPROVER_DUMP_L50;

    __CPROVER_DUMP_L43:
      ;
      return_value_wcstol_18=wcstol(packetBufferW, (signed int ** restrict )(void *)0, 10);
      wrapperStartPendingSignaled((signed int)return_value_wcstol_18);
      goto __CPROVER_DUMP_L50;

    __CPROVER_DUMP_L44:
      ;
      wrapperStartedSignaled();
      goto __CPROVER_DUMP_L50;

    __CPROVER_DUMP_L45:
      ;
      wrapperKeyRegistered(packetBufferW);
      goto __CPROVER_DUMP_L50;

    __CPROVER_DUMP_L46:
      ;
      wrapperLogSignaled((signed int)code - (signed int)(char)116, packetBufferW);
      goto __CPROVER_DUMP_L50;

    __CPROVER_DUMP_L47:
      ;
      goto __CPROVER_DUMP_L50;
    }
    if(!(wrapperData->isDebugging == 0))
      log_printf(-2, 1, L"received unknown packet (%d:%s)", code, (const void *)packetBufferW);


  __CPROVER_DUMP_L50:
    ;
    wrapperGetCurrentTime(&timeBuffer);
    now = timeBuffer.time;
    nowMillis = (signed int)timeBuffer.millitm;
  }
  while((_Bool)1);
  durr = (now - startTime) * (signed long int)1000 + (signed long int)(nowMillis - startTimeMillis);
  if(!(durr >= 250l))
    return 0;

  else
    return 1;
}

// wrapperQuoteValue
// file wrapper.c line 5032
extern unsigned long int wrapperQuoteValue(const signed int *value, signed int *buffer, unsigned long int bufferSize)
{
  unsigned long int len;
  len=wcslen(value);
  unsigned long int in = (unsigned long int)0;
  unsigned long int out = (unsigned long int)0;
  unsigned long int in2;
  signed int escape;
  if(!(out >= bufferSize))
    buffer[(signed long int)out] = 34;

  out = out + 1ul;
  _Bool tmp_if_expr_1;
  for( ; !(in >= len); in = in + 1ul)
  {
    if(value[(signed long int)in] == 0)
      break;

    escape = 0;
    if(value[(signed long int)in] == 92)
    {
      in2 = in + (unsigned long int)1;
      for( ; !(in2 >= len); in2 = in2 + 1ul)
        if(!(value[(signed long int)in2] == 92))
          break;

      if(in2 >= len)
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = value[(signed long int)in2] == 34 ? (_Bool)1 : (_Bool)0;
      escape = (signed int)tmp_if_expr_1;
    }

    else
      if(value[(signed long int)in] == 34)
        escape = -1;

    if(!(escape == 0))
    {
      if(!(out >= bufferSize))
        buffer[(signed long int)out] = 92;

      out = out + 1ul;
    }

    if(!(out >= bufferSize))
      buffer[(signed long int)out] = value[(signed long int)in];

    out = out + 1ul;
  }
  if(!(out >= bufferSize))
    buffer[(signed long int)out] = 34;

  out = out + 1ul;
  if(!(out >= bufferSize))
    buffer[(signed long int)out] = 0;

  out = out + 1ul;
  if(bufferSize >= out)
    return (unsigned long int)0;

  else
    return out;
}

// wrapperReadChildOutput
// file wrapper.c line 3809
extern signed int wrapperReadChildOutput(signed int maxTimeMS)
{
  struct timeb timeBuffer;
  signed long int startTime;
  signed int startTimeMillis;
  signed long int now;
  signed int nowMillis;
  signed long int durr;
  char *tempBuffer;
  char *cLF;
  signed int currentBlockRead;
  unsigned long int loggedOffset;
  signed int defer = 0;
  signed int readThisPass = 0;
  if(wrapperChildWorkBuffer == ((char *)NULL))
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(char) /*1ul*/  * (unsigned long int)(1024 * 2 + 1));
    wrapperChildWorkBuffer = (char *)return_value_malloc_1;
    if(wrapperChildWorkBuffer == ((char *)NULL))
    {
      outOfMemory(L"WRCO", 1);
      return 0;
    }

    wrapperChildWorkBufferSize = (unsigned long int)(1024 * 2);
  }

  wrapperGetCurrentTime(&timeBuffer);
  now = timeBuffer.time;
  startTime = now;
  nowMillis = (signed int)timeBuffer.millitm;
  startTimeMillis = nowMillis;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  while((_Bool)1)
  {
    if(maxTimeMS >= 1)
    {
      durr = (now - startTime) * (signed long int)1000 + (signed long int)(nowMillis - startTimeMillis);
      if(durr >= (signed long int)maxTimeMS)
        goto __CPROVER_DUMP_L21;

    }

    if(!(wrapperChildWorkBufferSize >= 1024ul + wrapperChildWorkBufferLen))
    {
      wrapperChildWorkBufferSize = wrapperChildWorkBufferLen + (unsigned long int)1 > (wrapperChildWorkBufferSize + (unsigned long int)1024 > wrapperChildWorkBufferSize + wrapperChildWorkBufferSize / (unsigned long int)10 ? wrapperChildWorkBufferSize + (unsigned long int)1024 : wrapperChildWorkBufferSize + wrapperChildWorkBufferSize / (unsigned long int)10) ? wrapperChildWorkBufferLen + (unsigned long int)1 : (wrapperChildWorkBufferSize + (unsigned long int)1024 > wrapperChildWorkBufferSize + wrapperChildWorkBufferSize / (unsigned long int)10 ? wrapperChildWorkBufferSize + (unsigned long int)1024 : wrapperChildWorkBufferSize + wrapperChildWorkBufferSize / (unsigned long int)10);
      void *return_value_malloc_2;
      return_value_malloc_2=malloc(wrapperChildWorkBufferSize + (unsigned long int)1);
      tempBuffer = (char *)return_value_malloc_2;
      if(tempBuffer == ((char *)NULL))
      {
        outOfMemory(L"WRCO", 2);
        return 0;
      }

      memcpy((void *)tempBuffer, (const void *)wrapperChildWorkBuffer, wrapperChildWorkBufferLen);
      tempBuffer[(signed long int)wrapperChildWorkBufferLen] = (char)0;
      free((void *)wrapperChildWorkBuffer);
      wrapperChildWorkBuffer = tempBuffer;
    }

    signed int return_value_wrapperReadChildOutputBlock_3;
    return_value_wrapperReadChildOutputBlock_3=wrapperReadChildOutputBlock(wrapperChildWorkBuffer + (signed long int)wrapperChildWorkBufferLen, (signed int)(wrapperChildWorkBufferSize - wrapperChildWorkBufferLen), &currentBlockRead);
    if(!(return_value_wrapperReadChildOutputBlock_3 == 0))
      return 0;

    if(currentBlockRead >= 1)
    {
      wrapperChildWorkBufferLen = wrapperChildWorkBufferLen + (unsigned long int)currentBlockRead;
      wrapperChildWorkLastDataTime = now;
      wrapperChildWorkLastDataTimeMillis = nowMillis;
      readThisPass = -1;
    }

    wrapperChildWorkBuffer[(signed long int)wrapperChildWorkBufferLen] = (char)0;
    loggedOffset = (unsigned long int)0;
    defer = 0;
    while(defer == 0 && !(loggedOffset >= wrapperChildWorkBufferLen))
    {
      char *return_value___builtin_strchr_4;
      return_value___builtin_strchr_4=__builtin_strchr(wrapperChildWorkBuffer + (signed long int)loggedOffset, (signed int)(char)0x0a);
      cLF = return_value___builtin_strchr_4;
      if(!(cLF == ((char *)NULL)))
      {
        cLF[(signed long int)0] = (char)0;
        logChildOutput(wrapperChildWorkBuffer + (signed long int)loggedOffset);
        loggedOffset = (unsigned long int)((cLF - wrapperChildWorkBuffer) + (signed long int)1);
      }

      else
      {
        if(!(readThisPass == 0))
          tmp_if_expr_5 = (_Bool)1;

        else
          tmp_if_expr_5 = wrapperData->logLFDelayThreshold == 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_5)
          tmp_if_expr_6 = (_Bool)1;

        else
          tmp_if_expr_6 = (now - wrapperChildWorkLastDataTime) * (signed long int)1000 + (signed long int)(nowMillis - wrapperChildWorkLastDataTimeMillis) < (signed long int)wrapperData->logLFDelayThreshold ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_6)
          defer = -1;

        else
        {
          logChildOutput(wrapperChildWorkBuffer + (signed long int)loggedOffset);
          wrapperChildWorkBuffer[(signed long int)0] = (char)0;
          wrapperChildWorkBufferLen = (unsigned long int)0;
          loggedOffset = (unsigned long int)0;
        }
      }
    }
    if(loggedOffset >= 1ul)
    {
      if(loggedOffset >= wrapperChildWorkBufferLen)
      {
        wrapperChildWorkBuffer[(signed long int)0] = (char)0;
        wrapperChildWorkBufferLen = (unsigned long int)0;
      }

      else
      {
        wrapperChildWorkBufferLen = wrapperChildWorkBufferLen - loggedOffset;
        safeMemCpy(wrapperChildWorkBuffer, (unsigned long int)0, loggedOffset, wrapperChildWorkBufferLen);
        wrapperChildWorkBuffer[(signed long int)wrapperChildWorkBufferLen] = (char)0;
      }
    }

    if(!(currentBlockRead >= 1))
      return 0;

    wrapperGetCurrentTime(&timeBuffer);
    now = timeBuffer.time;
    nowMillis = (signed int)timeBuffer.millitm;
  }

__CPROVER_DUMP_L21:
  ;
  return -1;
}

// wrapperReadChildOutputBlock
// file wrapper.h line 820
extern signed int wrapperReadChildOutputBlock(char *blockBuffer, signed int blockSize, signed int *readCount)
{
  if(pipedes[0l] == -1)
  {
    *readCount = 0;
    return 0;
  }

  else
  {
    signed long int return_value_read_1;
    return_value_read_1=read(pipedes[(signed long int)0], (void *)blockBuffer, (unsigned long int)blockSize);
    *readCount = (signed int)return_value_read_1;
    if(!(*readCount >= 0))
    {
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      if(!(*return_value___errno_location_4 == 11))
      {
        const signed int *return_value_getLastErrorText_2;
        return_value_getLastErrorText_2=getLastErrorText();
        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        log_printf(-1, 5, L"Failed to read console output from the JVM: %s (%d)", return_value_getLastErrorText_2, *return_value___errno_location_3);
        return -1;
      }

    }

    else
      if(*readCount == 0)
      {
        close(pipedes[(signed long int)0]);
        pipedes[(signed long int)0] = -1;
      }

    return 0;
  }
}

// wrapperReleaseTickMutex
// file wrapper.c line 8331
extern signed int wrapperReleaseTickMutex()
{
  signed int return_value_pthread_mutex_unlock_2;
  return_value_pthread_mutex_unlock_2=pthread_mutex_unlock(&tickMutex);
  if(!(return_value_pthread_mutex_unlock_2 == 0))
  {
    const signed int *return_value_getLastErrorText_1;
    return_value_getLastErrorText_1=getLastErrorText();
    _tprintf(L"Failed to unlock the tick mutex. %s\n", return_value_getLastErrorText_1);
    return -1;
  }

  return 0;
}

// wrapperReportStatus
// file wrapper.h line 808
extern void wrapperReportStatus(signed int useLoggerQueue, signed int status, signed int errorCode, signed int waitHint)
{
  ;
}

// wrapperRequestDumpJVMState
// file wrapper.h line 980
extern void wrapperRequestDumpJVMState()
{
  log_printf(-1, 3, L"Dumping JVM state.");
  signed int return_value_kill_2;
  return_value_kill_2=kill(wrapperData->javaPID, 3);
  if(!(return_value_kill_2 >= 0))
  {
    const signed int *return_value_getLastErrorText_1;
    return_value_getLastErrorText_1=getLastErrorText();
    log_printf(-1, 5, L"Could not dump JVM state: %s", return_value_getLastErrorText_1);
  }

}

// wrapperRequestJVMGC
// file wrapper.c line 4964
extern void wrapperRequestJVMGC(signed int actionSourceCode)
{
  signed int msgBuffer[10l];
  _sntprintf(msgBuffer, (unsigned long int)10, L"%d", actionSourceCode);
  wrapperProtocolFunction((char)140, msgBuffer);
}

// wrapperRestartProcess
// file wrapper.c line 4818
extern void wrapperRestartProcess()
{
  _Bool tmp_if_expr_1;
  if(!(wrapperData->exitRequested == 0))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = wrapperData->restartRequested != 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = wrapperData->jState == 72 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_3;
  if(tmp_if_expr_2)
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = wrapperData->jState == 80 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_4;
  if(tmp_if_expr_3)
    tmp_if_expr_4 = (_Bool)1;

  else
    tmp_if_expr_4 = wrapperData->jState == 81 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_5;
  if(tmp_if_expr_4)
    tmp_if_expr_5 = (_Bool)1;

  else
    tmp_if_expr_5 = wrapperData->jState == 82 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_6;
  if(tmp_if_expr_5)
    tmp_if_expr_6 = (_Bool)1;

  else
    tmp_if_expr_6 = wrapperData->jState == 83 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_7;
  if(tmp_if_expr_6)
    tmp_if_expr_7 = (_Bool)1;

  else
    tmp_if_expr_7 = wrapperData->jState == 84 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_8;
  if(tmp_if_expr_7)
    tmp_if_expr_8 = (_Bool)1;

  else
    tmp_if_expr_8 = wrapperData->jState == 70 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_9;
  if(tmp_if_expr_8)
    tmp_if_expr_9 = (_Bool)1;

  else
    tmp_if_expr_9 = wrapperData->jState == 71 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_10;
  if(tmp_if_expr_9)
    tmp_if_expr_10 = (_Bool)1;

  else
    tmp_if_expr_10 = wrapperData->jState == 73 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_10)
  {
    if(!(wrapperData->isDebugging == 0))
      log_printf(-1, 1, L"wrapperRestartProcess() called.  (IGNORED)");

  }

  else
  {
    if(!(wrapperData->isDebugging == 0))
      log_printf(-1, 1, L"wrapperRestartProcess() called.");

    wrapperData->exitRequested = -1;
    wrapperData->restartRequested = 4;
  }
}

// wrapperRestartRequested
// file wrapper.c line 8873
extern void wrapperRestartRequested()
{
  log_printf(-1, 3, L"JVM requested a restart.");
  wrapperData->restartPacketReceived = -1;
  wrapperRestartProcess();
}

// wrapperResumeProcess
// file wrapper.c line 4905
extern void wrapperResumeProcess(signed int actionSourceCode)
{
  signed int msgBuffer[10l];
  _Bool tmp_if_expr_1;
  if(wrapperData->wState == 56)
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = wrapperData->wState == 57 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
  {
    if(!(wrapperData->isDebugging == 0))
      log_printf(-1, 1, L"wrapperResumeProcess() called while stopping.  (IGNORED)");

  }

  else
    if(wrapperData->wState == 51)
    {
      if(!(wrapperData->isDebugging == 0))
        log_printf(-1, 1, L"wrapperResumeProcess() called while starting.  (IGNORED)");

    }

    else
      if(wrapperData->wState == 52)
      {
        if(!(wrapperData->isDebugging == 0))
          log_printf(-1, 1, L"wrapperResumeProcess() called while started.  (IGNORED)");

      }

      else
        if(wrapperData->wState == 55)
        {
          if(!(wrapperData->isDebugging == 0))
            log_printf(-1, 1, L"wrapperResumeProcess() called while resuming.  (IGNORED)");

        }

        else
        {
          if(!(wrapperData->isDebugging == 0))
            log_printf(-1, 1, L"wrapperResumeProcess() called.");

          if(!(wrapperData->pausableStopJVM == 0))
            wrapperData->failedInvocationCount = 0;

          wrapperSetWrapperState(55);
          if(wrapperData->pausableStopJVM == 0)
          {
            _sntprintf(msgBuffer, (unsigned long int)10, L"%d", actionSourceCode);
            wrapperProtocolFunction((char)139, msgBuffer);
          }

        }
}

// wrapperRunCommon
// file wrapper.c line 4668
signed int wrapperRunCommon(const signed int *runMode)
{
  signed int exitCode;
  wrapperSetWrapperState(51);
  wrapperSetJavaState(72, (unsigned int)0, -1);
  log_printf(-1, 3, L"--> Wrapper Started as %s", runMode);
  exitCode=wrapperInitializeRun();
  if(exitCode == 0)
  {
    signed int return_value_wrapperRunCommonInner_1;
    return_value_wrapperRunCommonInner_1=wrapperRunCommonInner();
    if(return_value_wrapperRunCommonInner_1 == 0)
    {
      wrapperEventLoop();
      wrapperProtocolClose();
      protocolStopServer();
      exitCode = wrapperData->exitCode;
    }

    else
      exitCode = 1;
  }

  log_printf(-1, 3, L"<-- Wrapper Stopped");
  return exitCode;
}

// wrapperRunCommonInner
// file wrapper.c line 4488
signed int wrapperRunCommonInner()
{
  const signed int *prop;
  struct tm timeTM;
  signed int *tz1;
  signed int *tz2;
  unsigned long int req;
  signed int return_value_wrapperTickAssertions_1;
  return_value_wrapperTickAssertions_1=wrapperTickAssertions();
  signed int return_value_getBooleanProperty_8;
  if(!(return_value_wrapperTickAssertions_1 == 0))
    return 1;

  else
  {
    wrapperVersionBanner();
    prop=getStringProperty(properties, L"wrapper.license.type", L"");
    signed int return_value_wcscasecmp_4;
    return_value_wcscasecmp_4=wcscasecmp(prop, L"DEV");
    if(return_value_wcscasecmp_4 == 0)
    {
      const signed int *return_value_getStringProperty_2;
      return_value_getStringProperty_2=getStringProperty(properties, L"wrapper.license.licensee", L"(LICENSE INVALID)");
      const signed int *return_value_getStringProperty_3;
      return_value_getStringProperty_3=getStringProperty(properties, L"wrapper.license.dev_application", L"(LICENSE INVALID)");
      log_printf(-1, 3, L"  Licensed to %s for %s", return_value_getStringProperty_2, return_value_getStringProperty_3);
    }

    log_printf(-1, 3, L"");
    signed int return_value_checkForTestWrapperScripts_5;
    return_value_checkForTestWrapperScripts_5=checkForTestWrapperScripts();
    if(!(return_value_checkForTestWrapperScripts_5 == 0))
      return 1;

    else
    {
      if(!(wrapperData->isDebugging == 0))
      {
        timeTM=wrapperGetReleaseTime();
        log_printf(-1, 1, L"Release time: %04d/%02d/%02d %02d:%02d:%02d", timeTM.tm_year + 1900, timeTM.tm_mon + 1, timeTM.tm_mday, timeTM.tm_hour, timeTM.tm_min, timeTM.tm_sec);
        timeTM=wrapperGetBuildTime();
        log_printf(-1, 1, L"Build time:   %04d/%02d/%02d %02d:%02d:%02d", timeTM.tm_year + 1900, timeTM.tm_mon + 1, timeTM.tm_mday, timeTM.tm_hour, timeTM.tm_min, timeTM.tm_sec);
        tzset();
        req=mbstowcs((signed int *)(void *)0, tzname[(signed long int)0], (unsigned long int)0);
        if(req == 18446744073709551615ul)
          return 1;

        void *return_value_malloc_6;
        return_value_malloc_6=malloc(sizeof(signed int) /*4ul*/  * (req + (unsigned long int)1));
        tz1 = (signed int *)return_value_malloc_6;
        if(tz1 == ((signed int *)NULL))
          outOfMemory(L"LHN", 1);

        else
        {
          mbstowcs(tz1, tzname[(signed long int)0], req + (unsigned long int)1);
          tz1[(signed long int)req] = 0;
          req=mbstowcs((signed int *)(void *)0, tzname[(signed long int)1], (unsigned long int)0);
          if(req == 18446744073709551615ul)
          {
            free((void *)tz1);
            return 1;
          }

          void *return_value_malloc_7;
          return_value_malloc_7=malloc(sizeof(signed int) /*4ul*/  * (req + (unsigned long int)1));
          tz2 = (signed int *)return_value_malloc_7;
          if(tz2 == ((signed int *)NULL))
          {
            outOfMemory(L"LHN", 2);
            free((void *)tz1);
          }

          else
          {
            mbstowcs(tz2, tzname[(signed long int)1], req + (unsigned long int)1);
            tz2[(signed long int)req] = 0;
            log_printf(-1, 1, L"Timezone:     %s (%s) Offset: %ld, hasDaylight: %d", tz1, tz2, timezone, daylight);
            if(!(wrapperData->useSystemTime == 0))
              log_printf(-1, 1, L"Using system timer.");

            else
              log_printf(-1, 1, L"Using tick timer.");
            free((void *)tz1);
            free((void *)tz2);
          }
        }
      }

      signed int return_value_getBooleanProperty_9;
      return_value_getBooleanProperty_9=getBooleanProperty(properties, L"wrapper.environment.dump", 0);
      if(!(return_value_getBooleanProperty_9 == 0))
        dumpEnvironment(2);

      else
      {
        return_value_getBooleanProperty_8=getBooleanProperty(properties, L"wrapper.debug", 0);
        if(!(return_value_getBooleanProperty_8 == 0))
          dumpEnvironment(1);

      }
      return 0;
    }
  }
}

// wrapperRunConsole
// file wrapper.c line 4702
extern signed int wrapperRunConsole()
{
  signed int return_value_wrapperRunCommon_1;
  return_value_wrapperRunCommon_1=wrapperRunCommon(L"Console");
  return return_value_wrapperRunCommon_1;
}

// wrapperRunService
// file wrapper.c line 4709
extern signed int wrapperRunService()
{
  signed int return_value_wrapperRunCommon_1;
  return_value_wrapperRunCommon_1=wrapperRunCommon(L"Daemon");
  return return_value_wrapperRunCommon_1;
}

// wrapperSetJavaState
// file wrapper.h line 760
extern void wrapperSetJavaState(signed int jState, unsigned int nowTicks, signed int delay)
{
  if(!(wrapperData->isStateOutputEnabled == 0))
  {
    const signed int *return_value_wrapperGetJState_1;
    return_value_wrapperGetJState_1=wrapperGetJState(wrapperData->jState);
    const signed int *return_value_wrapperGetJState_2;
    return_value_wrapperGetJState_2=wrapperGetJState(jState);
    log_printf(-1, 3, L"      Set Java State %s -> %s", return_value_wrapperGetJState_1, return_value_wrapperGetJState_2);
  }

  if(!(wrapperData->jState == jState))
  {
    wrapperData->jStateTimeoutTicks = (unsigned int)0;
    wrapperData->jStateTimeoutTicksSet = 0;
  }

  wrapperData->jState = jState;
  wrapperUpdateJavaStateTimeout(nowTicks, delay);
  if(!(wrapperData->javaStatusFilename == ((signed int *)NULL)))
  {
    const signed int *return_value_wrapperGetJState_3;
    return_value_wrapperGetJState_3=wrapperGetJState(wrapperData->jState);
    writeStateFile(wrapperData->javaStatusFilename, return_value_wrapperGetJState_3, wrapperData->javaStatusFileUmask);
  }

}

// wrapperSetWorkingDir
// file wrapper.c line 8593
extern signed int wrapperSetWorkingDir(const signed int *dir, signed int logErrors)
{
  signed int showOutput = wrapperData->configured;
  signed int return_value__tchdir_2;
  return_value__tchdir_2=_tchdir(dir);
  if(!(return_value__tchdir_2 == 0))
  {
    if(!(logErrors == 0))
    {
      const signed int *return_value_getLastErrorText_1;
      return_value_getLastErrorText_1=getLastErrorText();
      log_printf(-1, 6, L"Unable to set working directory to: %s (%s)", dir, return_value_getLastErrorText_1);
    }

    return -1;
  }

  else
  {
    if(!(showOutput == 0))
      log_printf(-1, 1, L"Working directory set to: %s", dir);

    setEnv(L"WRAPPER_WORKING_DIR", dir, 2);
    return 0;
  }
}

// wrapperSetWrapperState
// file wrapper.h line 738
extern void wrapperSetWrapperState(signed int wState)
{
  if(!(wrapperData->isStateOutputEnabled == 0))
  {
    const signed int *return_value_wrapperGetWState_1;
    return_value_wrapperGetWState_1=wrapperGetWState(wrapperData->wState);
    const signed int *return_value_wrapperGetWState_2;
    return_value_wrapperGetWState_2=wrapperGetWState(wState);
    log_printf(-1, 3, L"      Set Wrapper State %s -> %s", return_value_wrapperGetWState_1, return_value_wrapperGetWState_2);
  }

  wrapperData->wState = wState;
  if(!(wrapperData->statusFilename == ((signed int *)NULL)))
  {
    const signed int *return_value_wrapperGetWState_3;
    return_value_wrapperGetWState_3=wrapperGetWState(wrapperData->wState);
    writeStateFile(wrapperData->statusFilename, return_value_wrapperGetWState_3, wrapperData->statusFileUmask);
  }

}

// wrapperSleep
// file wrapper.h line 798
extern signed int wrapperSleep(signed int ms)
{
  struct timespec ts;
  if(ms >= 1000)
  {
    ts.tv_sec = (signed long int)((ms * 1000000) / 1000000000);
    ts.tv_nsec = (signed long int)((ms * 1000000) % 1000000000);
  }

  else
  {
    ts.tv_sec = (signed long int)0;
    ts.tv_nsec = (signed long int)(ms * 1000000);
  }
  if(!(wrapperData->isSleepOutputEnabled == 0))
    log_printf(-1, 3, L"    Sleep: nanosleep %dms", ms);

  signed int return_value_nanosleep_4;
  return_value_nanosleep_4=nanosleep(&ts, (struct timespec *)(void *)0);
  signed int *return_value___errno_location_2;
  if(!(return_value_nanosleep_4 == 0))
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    if(*return_value___errno_location_3 == 4)
    {
      if(!(wrapperData->isSleepOutputEnabled == 0))
        log_printf(-1, 3, L"    Sleep: nanosleep interrupted");

      return -1;
    }

    else
    {
      return_value___errno_location_2=__errno_location();
      if(*return_value___errno_location_2 == 11)
      {
        if(!(wrapperData->isSleepOutputEnabled == 0))
          log_printf(-1, 3, L"    Sleep: nanosleep unavailable");

        return -1;
      }

      else
      {
        const signed int *return_value_getLastErrorText_1;
        return_value_getLastErrorText_1=getLastErrorText();
        log_printf(-1, 5, L"nanosleep(%dms) failed. %s", ms, return_value_getLastErrorText_1);
      }
    }
  }

  if(!(wrapperData->isSleepOutputEnabled == 0))
    log_printf(-1, 3, L"    Sleep: awake");

  return 0;
}

// wrapperStartPendingSignaled
// file wrapper.c line 8953
extern void wrapperStartPendingSignaled(signed int waitHint)
{
  if(!(wrapperData->isDebugging == 0))
    log_printf(-1, 1, L"JVM signaled a start pending with waitHint of %d millis.", waitHint);

  _Bool tmp_if_expr_3;
  if(wrapperData->jState == 78)
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = wrapperData->jState == 81 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_3)
  {
    if(!(waitHint >= 0))
      waitHint = 0;

    unsigned int return_value_wrapperGetTicks_1;
    return_value_wrapperGetTicks_1=wrapperGetTicks();
    double return_value_ceil_2;
    return_value_ceil_2=ceil((double)waitHint / 1000.0);
    wrapperUpdateJavaStateTimeout(return_value_wrapperGetTicks_1, (signed int)return_value_ceil_2);
  }

}

// wrapperStartedSignaled
// file wrapper.c line 8978
extern void wrapperStartedSignaled()
{
  if(!(wrapperData->isDebugging == 0))
    log_printf(-1, 1, L"JVM signaled that it was started.");

  if(wrapperData->jState == 78)
  {
    if(wrapperData->pingTimeout >= 1)
    {
      unsigned int return_value_wrapperGetTicks_1;
      return_value_wrapperGetTicks_1=wrapperGetTicks();
      wrapperSetJavaState(79, return_value_wrapperGetTicks_1, 5 + wrapperData->pingTimeout);
    }

    else
      wrapperSetJavaState(79, (unsigned int)0, -1);
    if(wrapperData->wState == 51)
    {
      wrapperSetWrapperState(52);
      if(wrapperData->isConsole == 0)
        wrapperReportStatus(0, 52, 0, 0);

    }

    if(!(wrapperData->detachStarted == 0))
    {
      log_printf(-1, 3, L"JVM launched and detached.  Wrapper Shutting down...");
      wrapperProtocolClose();
      wrapperDetachJava();
      wrapperStopProcess(0, 0);
    }

  }

  else
    if(!(wrapperData->jState == 80))
    {
      if(wrapperData->jState == 81)
        wrapperSetJavaState(80, (unsigned int)0, -1);

    }

}

// wrapperStopPendingSignaled
// file wrapper.c line 8887
extern void wrapperStopPendingSignaled(signed int waitHint)
{
  if(!(wrapperData->isDebugging == 0))
    log_printf(-1, 1, L"JVM signaled a stop pending with waitHint of %d millis.", waitHint);

  if(wrapperData->jState == 79)
    wrapperSetJavaState(81, (unsigned int)0, -1);

  if(wrapperData->jState == 81)
  {
    if(!(waitHint >= 0))
      waitHint = 0;

    unsigned int return_value_wrapperGetTicks_1;
    return_value_wrapperGetTicks_1=wrapperGetTicks();
    double return_value_ceil_2;
    return_value_ceil_2=ceil((double)waitHint / 1000.0);
    wrapperUpdateJavaStateTimeout(return_value_wrapperGetTicks_1, (signed int)return_value_ceil_2);
  }

}

// wrapperStopProcess
// file wrapper.c line 4728
extern void wrapperStopProcess(signed int exitCode, signed int force)
{
  _Bool tmp_if_expr_14;
  if(wrapperData->wState == 56)
    tmp_if_expr_14 = (_Bool)1;

  else
    tmp_if_expr_14 = wrapperData->wState == 57 ? (_Bool)1 : (_Bool)0;
  int *tmp_if_expr_1;
  int *tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_10;
  _Bool tmp_if_expr_11;
  _Bool tmp_if_expr_12;
  _Bool tmp_if_expr_13;
  if(tmp_if_expr_14)
  {
    if(!(wrapperData->isDebugging == 0))
    {
      if(!(force == 0))
        tmp_if_expr_1 = L"TRUE";

      else
        tmp_if_expr_1 = L"FALSE";
      log_printf(-1, 1, L"wrapperStopProcess(%d, %s) called while stopping.  (IGNORED)", exitCode, tmp_if_expr_1);
    }

  }

  else
  {
    if(!(wrapperData->isDebugging == 0))
    {
      if(!(force == 0))
        tmp_if_expr_2 = L"TRUE";

      else
        tmp_if_expr_2 = L"FALSE";
      log_printf(-1, 1, L"wrapperStopProcess(%d, %s) called.", exitCode, tmp_if_expr_2);
    }

    if(!(wrapperData->exitRequested == 0))
      tmp_if_expr_3 = (_Bool)1;

    else
      tmp_if_expr_3 = wrapperData->jState == 72 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_3)
      tmp_if_expr_4 = (_Bool)1;

    else
      tmp_if_expr_4 = wrapperData->jState == 80 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_4)
      tmp_if_expr_5 = (_Bool)1;

    else
      tmp_if_expr_5 = wrapperData->jState == 81 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_5)
      tmp_if_expr_6 = (_Bool)1;

    else
      tmp_if_expr_6 = wrapperData->jState == 82 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_6)
      tmp_if_expr_7 = (_Bool)1;

    else
      tmp_if_expr_7 = wrapperData->jState == 83 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_7)
      tmp_if_expr_8 = (_Bool)1;

    else
      tmp_if_expr_8 = wrapperData->jState == 85 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_8)
      tmp_if_expr_9 = (_Bool)1;

    else
      tmp_if_expr_9 = wrapperData->jState == 84 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_9)
      tmp_if_expr_10 = (_Bool)1;

    else
      tmp_if_expr_10 = wrapperData->jState == 70 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_10)
      tmp_if_expr_11 = (_Bool)1;

    else
      tmp_if_expr_11 = wrapperData->jState == 71 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_11)
      wrapperData->exitRequested = -1;

    wrapperData->exitCode = exitCode;
    if(!(force == 0))
    {
      wrapperData->restartRequested = 0;
      if(!(wrapperData->isDebugging == 0))
      {
        if(wrapperData->restartRequested == 2)
          tmp_if_expr_12 = (_Bool)1;

        else
          tmp_if_expr_12 = wrapperData->restartRequested == 4 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_12)
          log_printf(-1, 1, L"  Overriding request to restart JVM.");

      }

    }

    else
      if(!(wrapperData->isDebugging == 0))
      {
        if(wrapperData->restartRequested == 2)
          tmp_if_expr_13 = (_Bool)1;

        else
          tmp_if_expr_13 = wrapperData->restartRequested == 4 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_13)
          log_printf(-1, 1, L"  Stop ignored.  Continuing to restart JVM.");

      }

  }
}

// wrapperStopRequested
// file wrapper.c line 8862
extern void wrapperStopRequested(signed int exitCode)
{
  if(!(wrapperData->isDebugging == 0))
    log_printf(-1, 1, L"JVM requested a shutdown. (%d)", exitCode);

  wrapperStopProcess(exitCode, 0);
}

// wrapperStoppedSignaled
// file wrapper.c line 8913
extern void wrapperStoppedSignaled()
{
  if(!(wrapperData->isDebugging == 0))
    log_printf(-1, 1, L"JVM signaled that it was stopped.");

  if(wrapperData->restartRequested == 2)
  {
    if(wrapperData->restartPacketReceived == 0)
    {
      log_printf(-1, 3, L"Received Stopped packet late.  Cancel automatic restart.");
      wrapperData->restartRequested = 0;
    }

  }

  wrapperData->stoppedPacketReceived = -1;
  _Bool tmp_if_expr_2;
  if(wrapperData->jState == 78)
    tmp_if_expr_2 = (_Bool)1;

  else
    tmp_if_expr_2 = wrapperData->jState == 79 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_3;
  if(tmp_if_expr_2)
    tmp_if_expr_3 = (_Bool)1;

  else
    tmp_if_expr_3 = wrapperData->jState == 81 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_3)
  {
    if(wrapperData->jvmExitTimeout >= 1)
    {
      unsigned int return_value_wrapperGetTicks_1;
      return_value_wrapperGetTicks_1=wrapperGetTicks();
      wrapperSetJavaState(82, return_value_wrapperGetTicks_1, 5 + wrapperData->jvmExitTimeout);
    }

    else
      wrapperSetJavaState(82, (unsigned int)0, -1);
  }

}

// wrapperStripQuotes
// file wrapper.c line 5020
extern void wrapperStripQuotes(const signed int *prop, signed int *propStripped)
{
  unsigned long int len;
  unsigned long int return_value_wcslen_1;
  return_value_wcslen_1=wcslen(prop);
  len=wrapperStripQuotesInner(prop, return_value_wcslen_1, propStripped);
  propStripped[(signed long int)len] = 0;
}

// wrapperStripQuotesInner
// file wrapper.c line 4982
static unsigned long int wrapperStripQuotesInner(const signed int *prop, unsigned long int propLen, signed int *propStripped)
{
  unsigned long int len;
  signed int i;
  signed int j;
  len = propLen;
  j = 0;
  i = 0;
  for( ; !(i >= (signed int)len); i = i + 1)
    if(prop[(signed long int)i] == 92 && !(i >= (signed int)len + -1))
    {
      if(prop[(signed long int)(1 + i)] == 92)
      {
        propStripped[(signed long int)j] = prop[(signed long int)i];
        j = j + 1;
        i = i + 1;
      }

      else
        if(prop[(signed long int)(1 + i)] == 34)
        {
          propStripped[(signed long int)j] = prop[(signed long int)(i + 1)];
          j = j + 1;
          i = i + 1;
        }

        else
        {
          propStripped[(signed long int)j] = prop[(signed long int)i];
          j = j + 1;
        }
    }

    else
      if(!(prop[(signed long int)i] == 34))
      {
        propStripped[(signed long int)j] = prop[(signed long int)i];
        j = j + 1;
      }

  return (unsigned long int)j;
}

// wrapperTickAssertions
// file wrapper.c line 8464
extern signed int wrapperTickAssertions()
{
  signed int result = 0;
  unsigned int ticks1;
  unsigned int ticks2;
  unsigned int ticksR;
  unsigned int ticksE;
  signed int value1;
  signed int valueR;
  signed int valueE;
  ticks1 = 0xfffffffe;
  ticks2 = 0xffffffff;
  valueE = 1;
  valueR=wrapperGetTickAgeTicks(ticks1, ticks2);
  if(!(valueR == valueE))
  {
    log_printf(-1, 6, L"Assert Failed: wrapperGetTickAgeTicks(%08x, %08x) == %0d != %0d", ticks1, ticks2, valueR, valueE);
    result = -1;
  }

  ticks1 = 0xffffffff;
  ticks2 = 0xfffffffe;
  valueE = -1;
  valueR=wrapperGetTickAgeTicks(ticks1, ticks2);
  if(!(valueR == valueE))
  {
    log_printf(-1, 6, L"Assert Failed: wrapperGetTickAgeTicks(%08x, %08x) == %0d != %0d", ticks1, ticks2, valueR, valueE);
    result = -1;
  }

  ticks1 = 0xffffffff;
  ticks2 = (unsigned int)0x00000000;
  valueE = 1;
  valueR=wrapperGetTickAgeTicks(ticks1, ticks2);
  if(!(valueR == valueE))
  {
    log_printf(-1, 6, L"Assert Failed: wrapperGetTickAgeTicks(%08x, %08x) == %0d != %0d", ticks1, ticks2, valueR, valueE);
    result = -1;
  }

  ticks1 = (unsigned int)0x00000000;
  ticks2 = 0xffffffff;
  valueE = -1;
  valueR=wrapperGetTickAgeTicks(ticks1, ticks2);
  if(!(valueR == valueE))
  {
    log_printf(-1, 6, L"Assert Failed: wrapperGetTickAgeTicks(%08x, %08x) == %0d != %0d", ticks1, ticks2, valueR, valueE);
    result = -1;
  }

  ticks1 = 0xfffffff0;
  ticks2 = 0xffffffff;
  valueE = 1;
  valueR=wrapperGetTickAgeSeconds(ticks1, ticks2);
  if(!(valueR == valueE))
  {
    log_printf(-1, 6, L"Assert Failed: wrapperGetTickAgeSeconds(%08x, %08x) == %0d != %0d", ticks1, ticks2, valueR, valueE);
    result = -1;
  }

  ticks1 = 0xffffffff;
  ticks2 = (unsigned int)0x0000000f;
  valueE = 1;
  valueR=wrapperGetTickAgeSeconds(ticks1, ticks2);
  if(!(valueR == valueE))
  {
    log_printf(-1, 6, L"Assert Failed: wrapperGetTickAgeSeconds(%08x, %08x) == %0d != %0d", ticks1, ticks2, valueR, valueE);
    result = -1;
  }

  ticks1 = (unsigned int)0x0000000f;
  ticks2 = 0xffffffff;
  valueE = -1;
  valueR=wrapperGetTickAgeSeconds(ticks1, ticks2);
  if(!(valueR == valueE))
  {
    log_printf(-1, 6, L"Assert Failed: wrapperGetTickAgeSeconds(%08x, %08x) == %0d != %0d", ticks1, ticks2, valueR, valueE);
    result = -1;
  }

  ticks1 = 0xfffffffe;
  ticks2 = 0xffffffff;
  valueE = 0;
  valueR=wrapperTickExpired(ticks1, ticks2);
  if(!(valueR == valueE))
  {
    log_printf(-1, 6, L"Assert Failed: wrapperTickExpired(%08x, %08x) == %0d != %0d", ticks1, ticks2, valueR, valueE);
    result = -1;
  }

  ticks1 = 0xffffffff;
  ticks2 = 0xffffffff;
  valueE = -1;
  valueR=wrapperTickExpired(ticks1, ticks2);
  if(!(valueR == valueE))
  {
    log_printf(-1, 6, L"Assert Failed: wrapperTickExpired(%08x, %08x) == %0d != %0d", ticks1, ticks2, valueR, valueE);
    result = -1;
  }

  ticks1 = 0xffffffff;
  ticks2 = (unsigned int)0x00000001;
  valueE = 0;
  valueR=wrapperTickExpired(ticks1, ticks2);
  if(!(valueR == valueE))
  {
    log_printf(-1, 6, L"Assert Failed: wrapperTickExpired(%08x, %08x) == %0d != %0d", ticks1, ticks2, valueR, valueE);
    result = -1;
  }

  ticks1 = (unsigned int)0x00000001;
  ticks2 = 0xffffffff;
  valueE = -1;
  valueR=wrapperTickExpired(ticks1, ticks2);
  if(!(valueR == valueE))
  {
    log_printf(-1, 6, L"Assert Failed: wrapperTickExpired(%08x, %08x) == %0d != %0d", ticks1, ticks2, valueR, valueE);
    result = -1;
  }

  ticks1 = 0xffffffff;
  value1 = 1;
  ticksE = (unsigned int)0x00000009;
  ticksR=wrapperAddToTicks(ticks1, value1);
  if(!(ticksR == ticksE))
  {
    log_printf(-1, 6, L"Assert Failed: wrapperAddToTicks(%08x, %d) == %08x != %08x", ticks1, value1, ticksR, ticksE);
    result = -1;
  }

  return result;
}

// wrapperTickExpired
// file wrapper.c line 8436
extern signed int wrapperTickExpired(unsigned int nowTicks, unsigned int timeoutTicks)
{
  signed int age = (signed int)(nowTicks - timeoutTicks);
  if(age >= 0)
    return -1;

  else
    return 0;
}

// wrapperUpdateJavaStateTimeout
// file wrapper.h line 748
extern void wrapperUpdateJavaStateTimeout(unsigned int nowTicks, signed int delay)
{
  unsigned int newTicks;
  signed int ignore;
  signed int tickAge;
  if(delay >= 0)
  {
    newTicks=wrapperAddToTicks(nowTicks, delay);
    ignore = 0;
    if(!(wrapperData->jStateTimeoutTicksSet == 0))
    {
      tickAge=wrapperGetTickAgeTicks(wrapperData->jStateTimeoutTicks, newTicks);
      if(!(tickAge >= 1))
        ignore = -1;

    }

    if(!(ignore == 0))
    {
      if(!(wrapperData->isStateOutputEnabled == 0))
      {
        const signed int *return_value_wrapperGetJState_1;
        return_value_wrapperGetJState_1=wrapperGetJState(wrapperData->jState);
        log_printf(-1, 3, L"      Set Java State %s (%d) Ignored Timeout %08x", return_value_wrapperGetJState_1, delay, wrapperData->jStateTimeoutTicks);
      }

    }

    else
    {
      if(!(wrapperData->isStateOutputEnabled == 0))
      {
        const signed int *return_value_wrapperGetJState_2;
        return_value_wrapperGetJState_2=wrapperGetJState(wrapperData->jState);
        log_printf(-1, 3, L"      Set Java State %s (%d) Timeout %08x -> %08x", return_value_wrapperGetJState_2, delay, nowTicks, delay, newTicks);
      }

      wrapperData->jStateTimeoutTicks = newTicks;
      wrapperData->jStateTimeoutTicksSet = 1;
    }
  }

  else
  {
    wrapperData->jStateTimeoutTicks = (unsigned int)0;
    wrapperData->jStateTimeoutTicksSet = 0;
  }
}

// wrapperUsage
// file wrapper.c line 3132
extern void wrapperUsage(signed int *appName)
{
  signed int *confFileBase;
  unsigned long int return_value_wcslen_1;
  return_value_wcslen_1=wcslen(appName);
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(sizeof(signed int) /*4ul*/  * (return_value_wcslen_1 + (unsigned long int)1));
  confFileBase = (signed int *)return_value_malloc_2;
  if(confFileBase == ((signed int *)NULL))
    outOfMemory(L"WU", 1);

  else
  {
    wrapperGetFileBase(appName, confFileBase);
    setSimpleLogLevels();
    wrapperVersionBanner();
    log_printf(-1, 3, L"");
    log_printf(-1, 3, L"Usage:");
    log_printf(-1, 3, L"  %s <command> <configuration file> [configuration properties] [...]", appName);
    log_printf(-1, 3, L"  %s <configuration file> [configuration properties] [...]", appName);
    log_printf(-1, 3, L"     (<command> implicitly '-c')");
    log_printf(-1, 3, L"  %s <command>", appName);
    log_printf(-1, 3, L"     (<configuration file> implicitly '%s.conf')", confFileBase);
    log_printf(-1, 3, L"  %s", appName);
    log_printf(-1, 3, L"     (<command> implicitly '-c' and <configuration file> '%s.conf')", confFileBase);
    log_printf(-1, 3, L"");
    log_printf(-1, 3, L"where <command> can be one of:");
    log_printf(-1, 3, L"  -c  --console run as a Console application");
    log_printf(-1, 3, L"  -v  --version print the wrapper's version information.");
    log_printf(-1, 3, L"  -?  --help    print this help message");
    log_printf(-1, 3, L"  -- <args>     mark the end of Wrapper arguments.  All arguments after the\n                '--' will be passed through unmodified to the java application.");
    log_printf(-1, 3, L"");
    log_printf(-1, 3, L"<configuration file> is the wrapper.conf to use.  Name must be absolute or relative");
    log_printf(-1, 3, L"  to the location of %s", appName);
    log_printf(-1, 3, L"");
    log_printf(-1, 3, L"[configuration properties] are configuration name-value pairs which override values");
    log_printf(-1, 3, L"  in wrapper.conf.  For example:");
    log_printf(-1, 3, L"  wrapper.debug=true");
    log_printf(-1, 3, L"");
    log_printf(-1, 3, L"  Please note that any file references must be absolute or relative to the location\n  of the Wrapper executable.");
    log_printf(-1, 3, L"");
    free((void *)confFileBase);
  }
}

// wrapperVersionBanner
// file wrapper.c line 3120
extern void wrapperVersionBanner()
{
  signed int *banner;
  banner=generateVersionBanner();
  if(!(banner == ((signed int *)NULL)))
  {
    log_printf(-1, 3, banner);
    free((void *)banner);
  }

}

// wrapperWildcardMatch
// file wrapper.h line 584
extern signed int wrapperWildcardMatch(const signed int *text, const signed int *pattern, unsigned long int minTextLen)
{
  unsigned long int textLen;
  unsigned long int patternLen;
  unsigned long int textIndex;
  textLen=wcslen(text);
  if(!(textLen >= minTextLen))
    return 0;

  else
  {
    patternLen=wcslen(pattern);
    textIndex = (unsigned long int)0;
    while(textLen + -minTextLen >= textIndex)
    {
      signed int return_value_wildcardMatchInner_1;
      return_value_wildcardMatchInner_1=wildcardMatchInner(&text[(signed long int)textIndex], textLen - textIndex, pattern, patternLen, minTextLen);
      if(!(return_value_wildcardMatchInner_1 == 0))
        return -1;

      textIndex = textIndex + 1ul;
    }
    return 0;
  }
}

// writePidFile
// file wrapper_unix.c line 175
signed int writePidFile(const signed int *filename, unsigned long int pid, signed int newUmask, signed int strict)
{
  struct _IO_FILE *pid_fp = (struct _IO_FILE *)(void *)0;
  signed int old_umask;
  signed int return_value_wrapperFileExists_1;
  if(!(strict == 0))
  {
    return_value_wrapperFileExists_1=wrapperFileExists(filename);
    if(return_value_wrapperFileExists_1 == 0)
      goto __CPROVER_DUMP_L1;

    log_printf(-1, 5, L"%d pid file, %s, already exists.", pid, filename);
    return 1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    unsigned int return_value_umask_2;
    return_value_umask_2=umask((unsigned int)newUmask);
    old_umask = (signed int)return_value_umask_2;
    pid_fp=_tfopen(filename, L"w");
    umask((unsigned int)old_umask);
    if(!(pid_fp == ((struct _IO_FILE *)NULL)))
    {
      _ftprintf(pid_fp, L"%d\n", (signed int)pid);
      fclose(pid_fp);
    }

    else
      return 1;
    return 0;
  }
}

// writeStateFile
// file wrappereventloop.c line 167
void writeStateFile(const signed int *filename, const signed int *state, signed int newUmask)
{
  struct _IO_FILE *fp = (struct _IO_FILE *)(void *)0;
  signed int old_umask;
  signed int cnt = 0;
  while(!(cnt >= 10))
  {
    unsigned int return_value_umask_1;
    return_value_umask_1=umask((unsigned int)newUmask);
    old_umask = (signed int)return_value_umask_1;
    fp=_tfopen(filename, L"w");
    umask((unsigned int)old_umask);
    if(!(fp == ((struct _IO_FILE *)NULL)))
    {
      _ftprintf(fp, L"%s\n", state);
      fclose(fp);
      goto __CPROVER_DUMP_L4;
    }

    wrapperSleep(100);
    cnt = cnt + 1;
  }
  log_printf(-1, 4, L"Unable to write to the status file: %s", filename);

__CPROVER_DUMP_L4:
  ;
}

