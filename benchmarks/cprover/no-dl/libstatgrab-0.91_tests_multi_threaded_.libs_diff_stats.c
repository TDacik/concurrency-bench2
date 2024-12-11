// #anon_enum_SG_ERROR_NONE=0_SG_ERROR_INVALID_ARGUMENT=1_SG_ERROR_ASPRINTF=2_SG_ERROR_SPRINTF=3_SG_ERROR_DEVICES=4_SG_ERROR_DEVSTAT_GETDEVS=5_SG_ERROR_DEVSTAT_SELECTDEVS=6_SG_ERROR_DISKINFO=7_SG_ERROR_ENOENT=8_SG_ERROR_GETIFADDRS=9_SG_ERROR_GETMNTINFO=10_SG_ERROR_GETPAGESIZE=11_SG_ERROR_HOST=12_SG_ERROR_KSTAT_DATA_LOOKUP=13_SG_ERROR_KSTAT_LOOKUP=14_SG_ERROR_KSTAT_OPEN=15_SG_ERROR_KSTAT_READ=16_SG_ERROR_KVM_GETSWAPINFO=17_SG_ERROR_KVM_OPENFILES=18_SG_ERROR_MALLOC=19_SG_ERROR_MEMSTATUS=20_SG_ERROR_OPEN=21_SG_ERROR_OPENDIR=22_SG_ERROR_READDIR=23_SG_ERROR_PARSE=24_SG_ERROR_PDHADD=25_SG_ERROR_PDHCOLLECT=26_SG_ERROR_PDHOPEN=27_SG_ERROR_PDHREAD=28_SG_ERROR_PERMISSION=29_SG_ERROR_PSTAT=30_SG_ERROR_SETEGID=31_SG_ERROR_SETEUID=32_SG_ERROR_SETMNTENT=33_SG_ERROR_SOCKET=34_SG_ERROR_SWAPCTL=35_SG_ERROR_SYSCONF=36_SG_ERROR_SYSCTL=37_SG_ERROR_SYSCTLBYNAME=38_SG_ERROR_SYSCTLNAMETOMIB=39_SG_ERROR_SYSINFO=40_SG_ERROR_MACHCALL=41_SG_ERROR_IOKIT=42_SG_ERROR_UNAME=43_SG_ERROR_UNSUPPORTED=44_SG_ERROR_XSW_VER_MISMATCH=45_SG_ERROR_GETMSG=46_SG_ERROR_PUTMSG=47_SG_ERROR_INITIALISATION=48_SG_ERROR_MUTEX_LOCK=49_SG_ERROR_MUTEX_UNLOCK=50
// file ../../src/libstatgrab/statgrab.h line 55
enum anonymous_4 { SG_ERROR_NONE=0, SG_ERROR_INVALID_ARGUMENT=1, SG_ERROR_ASPRINTF=2, SG_ERROR_SPRINTF=3, SG_ERROR_DEVICES=4, SG_ERROR_DEVSTAT_GETDEVS=5, SG_ERROR_DEVSTAT_SELECTDEVS=6, SG_ERROR_DISKINFO=7, SG_ERROR_ENOENT=8, SG_ERROR_GETIFADDRS=9, SG_ERROR_GETMNTINFO=10, SG_ERROR_GETPAGESIZE=11, SG_ERROR_HOST=12, SG_ERROR_KSTAT_DATA_LOOKUP=13, SG_ERROR_KSTAT_LOOKUP=14, SG_ERROR_KSTAT_OPEN=15, SG_ERROR_KSTAT_READ=16, SG_ERROR_KVM_GETSWAPINFO=17, SG_ERROR_KVM_OPENFILES=18, SG_ERROR_MALLOC=19, SG_ERROR_MEMSTATUS=20, SG_ERROR_OPEN=21, SG_ERROR_OPENDIR=22, SG_ERROR_READDIR=23, SG_ERROR_PARSE=24, SG_ERROR_PDHADD=25, SG_ERROR_PDHCOLLECT=26, SG_ERROR_PDHOPEN=27, SG_ERROR_PDHREAD=28, SG_ERROR_PERMISSION=29, SG_ERROR_PSTAT=30, SG_ERROR_SETEGID=31, SG_ERROR_SETEUID=32, SG_ERROR_SETMNTENT=33, SG_ERROR_SOCKET=34, SG_ERROR_SWAPCTL=35, SG_ERROR_SYSCONF=36, SG_ERROR_SYSCTL=37, SG_ERROR_SYSCTLBYNAME=38, SG_ERROR_SYSCTLNAMETOMIB=39, SG_ERROR_SYSINFO=40, SG_ERROR_MACHCALL=41, SG_ERROR_IOKIT=42, SG_ERROR_UNAME=43, SG_ERROR_UNSUPPORTED=44, SG_ERROR_XSW_VER_MISMATCH=45, SG_ERROR_GETMSG=46, SG_ERROR_PUTMSG=47, SG_ERROR_INITIALISATION=48, SG_ERROR_MUTEX_LOCK=49, SG_ERROR_MUTEX_UNLOCK=50 };

// #anon_enum_SG_IFACE_DOWN=0_SG_IFACE_UP=1
// file statgrab.h line 355
enum anonymous_27 { SG_IFACE_DOWN=0, SG_IFACE_UP=1 };

// #anon_enum_SG_IFACE_DUPLEX_FULL=0_SG_IFACE_DUPLEX_HALF=1_SG_IFACE_DUPLEX_UNKNOWN=2
// file statgrab.h line 349
enum anonymous_26 { SG_IFACE_DUPLEX_FULL=0, SG_IFACE_DUPLEX_HALF=1, SG_IFACE_DUPLEX_UNKNOWN=2 };

// #anon_enum_SG_PROCESS_STATE_RUNNING=0_SG_PROCESS_STATE_SLEEPING=1_SG_PROCESS_STATE_STOPPED=2_SG_PROCESS_STATE_ZOMBIE=3_SG_PROCESS_STATE_UNKNOWN=4
// file statgrab.h line 388
enum anonymous_23 { SG_PROCESS_STATE_RUNNING=0, SG_PROCESS_STATE_SLEEPING=1, SG_PROCESS_STATE_STOPPED=2, SG_PROCESS_STATE_ZOMBIE=3, SG_PROCESS_STATE_UNKNOWN=4 };

// #anon_enum_sg_fs_unknown=0_sg_fs_regular=1_sg_fs_special=2_sg_fs_loopback=4_sg_fs_remote=8_sg_fs_local=3_sg_fs_alltypes=15
// file statgrab.h line 268
enum anonymous_8 { sg_fs_unknown=0, sg_fs_regular=1, sg_fs_special=2, sg_fs_loopback=4, sg_fs_remote=8, sg_fs_local=3, sg_fs_alltypes=15 };

// #anon_enum_sg_unknown_configuration=0_sg_physical_host=1_sg_virtual_machine=2_sg_paravirtual_machine=3_sg_hardware_virtualized=4
// file statgrab.h line 146
enum anonymous_2 { sg_unknown_configuration=0, sg_physical_host=1, sg_virtual_machine=2, sg_paravirtual_machine=3, sg_hardware_virtualized=4 };

// tag-#anon#ST[*{S8}_S8_'device_name'||*{S8}_S8_'device_canonical'||*{S8}_S8_'fs_type'||*{S8}_S8_'mnt_point'||EN#anon_enum_sg_fs_unknown=0_sg_fs_regular=1_sg_fs_special=2_sg_fs_loopback=4_sg_fs_remote=8_sg_fs_local=3_sg_fs_alltypes=15#{U32}_U32_'device_type'||U32'_pad0'||U64'size'||U64'used'||U64'free'||U64'avail'||U64'total_inodes'||U64'used_inodes'||U64'free_inodes'||U64'avail_inodes'||U64'io_size'||U64'block_size'||U64'total_blocks'||U64'free_blocks'||U64'used_blocks'||U64'avail_blocks'||S64'systime'|]
// file statgrab.h line 278
struct anonymous_11;

// tag-#anon#ST[*{S8}_S8_'disk_name'||U64'read_bytes'||U64'write_bytes'||S64'systime'|]
// file statgrab.h line 313
struct anonymous_12;

// tag-#anon#ST[*{S8}_S8_'interface_name'||U64'speed'||U64'factor'||EN#anon_enum_SG_IFACE_DUPLEX_FULL=0_SG_IFACE_DUPLEX_HALF=1_SG_IFACE_DUPLEX_UNKNOWN=2#{U32}_U32_'duplex'||EN#anon_enum_SG_IFACE_DOWN=0_SG_IFACE_UP=1#{U32}_U32_'up'||S64'systime'|]
// file statgrab.h line 360
struct anonymous_20;

// tag-#anon#ST[*{S8}_S8_'interface_name'||U64'tx'||U64'rx'||U64'ipackets'||U64'opackets'||U64'ierrors'||U64'oerrors'||U64'collisions'||S64'systime'|]
// file statgrab.h line 329
struct anonymous_21;

// tag-#anon#ST[*{S8}_S8_'login_name'||*{S8}_S8_'record_id'||U64'record_id_size'||*{S8}_S8_'device'||*{S8}_S8_'hostname'||S32'pid'||U32'_pad0'||S64'login_time'||S64'systime'|]
// file statgrab.h line 242
struct anonymous_18;

// tag-#anon#ST[*{S8}_S8_'os_name'||*{S8}_S8_'os_release'||*{S8}_S8_'os_version'||*{S8}_S8_'platform'||*{S8}_S8_'hostname'||U32'bitwidth'||EN#anon_enum_sg_unknown_configuration=0_sg_physical_host=1_sg_virtual_machine=2_sg_paravirtual_machine=3_sg_hardware_virtualized=4#{U32}_U32_'host_state'||U32'ncpus'||U32'maxcpus'||S64'uptime'||S64'systime'|]
// file statgrab.h line 154
struct anonymous_3;

// tag-#anon#ST[*{S8}_S8_'process_name'||*{S8}_S8_'proctitle'||S32'pid'||S32'parent'||S32'pgid'||S32'sessid'||U32'uid'||U32'euid'||U32'gid'||U32'egid'||U64'context_switches'||U64'voluntary_context_switches'||U64'involuntary_context_switches'||U64'proc_size'||U64'proc_resident'||S64'start_time'||S64'time_spent'||F64'cpu_percent'||S32'nice'||EN#anon_enum_SG_PROCESS_STATE_RUNNING=0_SG_PROCESS_STATE_SLEEPING=1_SG_PROCESS_STATE_STOPPED=2_SG_PROCESS_STATE_ZOMBIE=3_SG_PROCESS_STATE_UNKNOWN=4#{U32}_U32_'state'||S64'systime'|]
// file statgrab.h line 396
struct anonymous_7;

// tag-#anon#ST[F64'min1'||F64'min5'||F64'min15'||S64'systime'|]
// file statgrab.h line 231
struct anonymous_17;

// tag-#anon#ST[F64'user'||F64'kernel'||F64'idle'||F64'iowait'||F64'swap'||F64'nice'||S64'time_taken'|]
// file statgrab.h line 197
struct anonymous_25;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_10;

// tag-#anon#ST[S32'rm_so'||S32'rm_eo'|]
// file /usr/include/regex.h line 452
struct anonymous_6;

// tag-#anon#ST[S32'tv_sec'||S32'tv_usec'|]
// file /usr/include/x86_64-linux-gnu/bits/utmpx.h line 71
struct anonymous_24;

// tag-#anon#ST[U64'pages_pagein'||U64'pages_pageout'||S64'systime'|]
// file statgrab.h line 375
struct anonymous_5;

// tag-#anon#ST[U64'total'||U64'free'||U64'used'||U64'cache'||S64'systime'|]
// file statgrab.h line 219
struct anonymous_16;

// tag-#anon#ST[U64'total'||U64'running'||U64'sleeping'||U64'stopped'||U64'zombie'||U64'unknown'||S64'systime'|]
// file statgrab.h line 446
struct anonymous_22;

// tag-#anon#ST[U64'total'||U64'used'||U64'free'||S64'systime'|]
// file statgrab.h line 257
struct anonymous_19;

// tag-#anon#ST[U64'user'||U64'kernel'||U64'idle'||U64'iowait'||U64'swap'||U64'nice'||U64'total'||U64'context_switches'||U64'voluntary_context_switches'||U64'involuntary_context_switches'||U64'syscalls'||U64'interrupts'||U64'soft_interrupts'||S64'systime'|]
// file statgrab.h line 172
struct anonymous_15;

// tag-#anon#UN[ARR16{S8}_S8_'ifrn_name'|]
// file /usr/include/net/if.h line 130
union anonymous;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_1;

// tag-#anon#UN[S64's'||U64'u'||B'b'||*{S8}_S8_'str'|]
// file ../../tests/testlib/testlib.h line 68
union anonymous_14;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_9;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_13;

// tag-#anon#UN[SYM#tag-sockaddr#'ifru_addr'||SYM#tag-sockaddr#'ifru_dstaddr'||SYM#tag-sockaddr#'ifru_broadaddr'||SYM#tag-sockaddr#'ifru_netmask'||SYM#tag-sockaddr#'ifru_hwaddr'||S16'ifru_flags'||S32'ifru_ivalue'||S32'ifru_mtu'||SYM#tag-ifmap#'ifru_map'||ARR16{S8}_S8_'ifru_slave'||ARR16{S8}_S8_'ifru_newname'||*{S8}_S8_'ifru_data'|]
// file /usr/include/net/if.h line 135
union anonymous_0;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__dirstream
// file /usr/include/dirent.h line 127
struct __dirstream;

// tag-__exit_status
// file /usr/include/x86_64-linux-gnu/bits/utmpx.h line 42
struct __exit_status;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-ethtool_cmd
// file /usr/include/linux/ethtool.h line 93
struct ethtool_cmd;

// tag-exit_status
// file /usr/include/x86_64-linux-gnu/bits/utmp.h line 50
struct exit_status;

// tag-ifmap
// file /usr/include/net/if.h line 111
struct ifmap;

// tag-ifreq
// file /usr/include/net/if.h line 126
struct ifreq;

// tag-mntent
// file /usr/include/mntent.h line 53
struct mntent;

// tag-opt_def
// file ../../tests/testlib/testlib.h line 65
struct opt_def;

// tag-opt_type
// file ../../tests/testlib/testlib.h line 57
enum opt_type { opt_flag=0, opt_bool=1, opt_signed=2, opt_unsigned=3, opt_str=4 };

// tag-pids_in_proc_dir_t
// file process_stats.c line 136
struct pids_in_proc_dir_t;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-re_pattern_buffer
// file /usr/include/regex.h line 357
struct re_pattern_buffer;

// tag-sg_comp_info
// file globals.c line 27
struct sg_comp_info;

// tag-sg_comp_init
// file globals.h line 43
struct sg_comp_init;

// tag-sg_comp_status
// file globals.h line 31
struct sg_comp_status;

// tag-sg_cpu_glob
// file cpu_stats.c line 55
struct sg_cpu_glob;

// tag-sg_cpu_percent_source
// file statgrab.h line 207
enum sg_cpu_percent_source { sg_entire_cpu_percent=0, sg_last_diff_cpu_percent=1, sg_new_diff_cpu_percent=2 };

// tag-sg_disk_glob
// file disk_stats.c line 699
struct sg_disk_glob;

// tag-sg_error_details
// file statgrab.h line 109
struct sg_error_details;

// tag-sg_error_glob
// file error.c line 32
struct sg_error_glob;

// tag-sg_load_glob
// file load_stats.c line 108
struct sg_load_glob;

// tag-sg_mem_glob
// file memory_stats.c line 28
struct sg_mem_glob;

// tag-sg_named_mutex
// file globals.c line 85
struct sg_named_mutex;

// tag-sg_network_glob
// file network_stats.c line 147
struct sg_network_glob;

// tag-sg_os_glob
// file os_info.c line 598
struct sg_os_glob;

// tag-sg_page_glob
// file page_stats.c line 234
struct sg_page_glob;

// tag-sg_process_count_source
// file statgrab.h line 456
enum sg_process_count_source { sg_entire_process_count=0, sg_last_process_count=1 };

// tag-sg_process_glob
// file process_stats.c line 118
struct sg_process_glob;

// tag-sg_swap_glob
// file swap_stats.c line 28
struct sg_swap_glob;

// tag-sg_user_glob
// file user_stats.c line 360
struct sg_user_glob;

// tag-sg_vector
// file vector.h line 61
struct sg_vector;

// tag-sg_vector_init_info
// file vector.h line 36
struct sg_vector_init_info;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-statgrab_testfuncs
// file ../../tests/testlib/testlib.h line 30
struct statgrab_testfuncs;

// tag-statvfs64
// file /usr/include/x86_64-linux-gnu/bits/statvfs.h line 58
struct statvfs64;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

// tag-utmp
// file /usr/include/utmpx.h line 43
struct utmp;

// tag-utmpx
// file /usr/include/x86_64-linux-gnu/bits/utmpx.h line 55
struct utmpx;

// tag-utsname
// file /usr/include/x86_64-linux-gnu/sys/utsname.h line 48
struct utsname;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef IEEE_FLOAT_EQUAL
#define IEEE_FLOAT_EQUAL(x,y) ((x)==(y))
#endif
#ifndef IEEE_FLOAT_NOTEQUAL
#define IEEE_FLOAT_NOTEQUAL(x,y) ((x)!=(y))
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
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// access
// file /usr/include/unistd.h line 287
extern signed int access(const char *, signed int);
// add_pid_to_pids_in_proc_dir
// file process_stats.c line 185
static struct pids_in_proc_dir_t * add_pid_to_pids_in_proc_dir(signed int pid, struct pids_in_proc_dir_t *pipd);
// adjust_procname_cmndline
// file process_stats.c line 253
static char * adjust_procname_cmndline(char *proctitle, unsigned long int len);
// alloc_pids_in_proc_dir
// file process_stats.c line 149
static struct pids_in_proc_dir_t * alloc_pids_in_proc_dir(void);
// asprintf
// file /usr/include/stdio.h line 405
extern signed int asprintf(char ** restrict , const char *, ...);
// atexit
// file /usr/include/stdlib.h line 519
extern signed int atexit(void (*)(void));
// atoll
// file /usr/include/stdlib.h line 157
extern signed long long int atoll(const char *);
// bsearch
// file /usr/include/stdlib.h line 754
extern void * bsearch(const void *, const void *, unsigned long int, unsigned long int, signed int (*)(const void *, const void *));
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closedir
// file /usr/include/dirent.h line 149
extern signed int closedir(struct __dirstream *);
// cmp_named_locks
// file globals.c line 100
static signed int cmp_named_locks(const void *va, const void *vb);
// cmp_valid_fs
// file disk_stats.c line 249
static signed int cmp_valid_fs(const void *va, const void *vb);
// counter_diff
// file cpu_stats.c line 376
static unsigned long long int counter_diff(unsigned long long int new, unsigned long long int old);
// die
// file ../../tests/testlib/testlib.h line 54
void die(signed int error, const char *fmt, ...);
// done_func
// file ../../tests/testlib/testlib.h line 49
void done_func(unsigned long int func_index, signed int succeeded);
// endmntent
// file /usr/include/mntent.h line 87
extern signed int endmntent(struct _IO_FILE *);
// endutent
// file /usr/include/utmp.h line 68
extern void endutent(void);
// endutxent
// file /usr/include/utmpx.h line 59
extern void endutxent(void);
// err_doit
// file err.c line 80
static void err_doit(signed int errnoflag, signed int error, const char *fmt, void **ap);
// ethtool_cmd_speed
// file /usr/include/linux/ethtool.h line 121
static inline unsigned int ethtool_cmd_speed(struct ethtool_cmd *ep);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// feof
// file /usr/include/stdio.h line 828
extern signed int feof(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// find_diff_func
// file routines.c line 74
static unsigned long int find_diff_func(const char *func_name, unsigned long int namelen);
// find_full_func
// file routines.c line 62
static unsigned long int find_full_func(const char *func_name, unsigned long int namelen);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fputs
// file /usr/include/stdio.h line 689
extern signed int fputs(const char *, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_pids_in_proc_dir
// file process_stats.c line 168
static struct pids_in_proc_dir_t * free_pids_in_proc_dir(struct pids_in_proc_dir_t *pipd, _Bool include_children);
// fscanf
// file /usr/include/stdio.h line 425
extern signed int fscanf(struct _IO_FILE *, const char *, ...);
// funcnames_to_indices
// file ../../tests/testlib/testlib.h line 43
unsigned long int funcnames_to_indices(const char *name_list, unsigned long int **indices, signed int full);
// get_params
// file ../../tests/testlib/testlib.h line 76
signed int get_params(struct opt_def *opt_defs, signed int argc, char **argv);
// get_testable_functions
// file ../../tests/testlib/testlib.h line 42
struct statgrab_testfuncs * get_testable_functions(unsigned long int *entries);
// getgid
// file /usr/include/unistd.h line 681
extern unsigned int getgid(void);
// getloadavg
// file /usr/include/stdlib.h line 950
extern signed int getloadavg(double *, signed int);
// getmntent_r
// file /usr/include/mntent.h line 75
extern struct mntent * getmntent_r(struct _IO_FILE *, struct mntent *, char *, signed int);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// getuid
// file /usr/include/unistd.h line 675
extern unsigned int getuid(void);
// getutent
// file /usr/include/utmp.h line 62
extern struct utmp * getutent(void);
// getutxent
// file /usr/include/utmpx.h line 65
extern struct utmpx * getutxent(void);
// help
// file diff_stats.c line 101
void help(char *prgname);
// init_valid_fs_types
// file disk_stats.c line 264
static enum anonymous_4 init_valid_fs_types(void);
// ioctl
// file /usr/include/x86_64-linux-gnu/sys/ioctl.h line 41
extern signed int ioctl(signed int, unsigned long int, ...);
// is_valid_fs_type
// file disk_stats.c line 644
static signed int is_valid_fs_type(const char *type);
// lstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 262
extern signed int lstat(const char *, struct stat *);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// mark_func
// file ../../tests/testlib/testlib.h line 47
void mark_func(unsigned long int func_index);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// print_testable_functions
// file ../../tests/testlib/testlib.h line 44
void print_testable_functions(signed int full);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// prove_libcall
// file diff_stats.c line 28
static void prove_libcall(char *libcall, signed int err_code);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous_9 *);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous_9 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_9 *);
// pthread_cond_timedwait
// file /usr/include/pthread.h line 1002
extern signed int pthread_cond_timedwait(union anonymous_9 *, union anonymous_13 *, struct timespec *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_9 *, union anonymous_13 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_getspecific
// file /usr/include/pthread.h line 1121
extern void * pthread_getspecific(unsigned int);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_key_create
// file /usr/include/pthread.h line 1113
extern signed int pthread_key_create(unsigned int *, void (*)(void *));
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous_13 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_13 *, const union anonymous_1 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_13 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_13 *);
// pthread_mutexattr_destroy
// file /usr/include/pthread.h line 812
extern signed int pthread_mutexattr_destroy(union anonymous_1 *);
// pthread_mutexattr_init
// file /usr/include/pthread.h line 808
extern signed int pthread_mutexattr_init(union anonymous_1 *);
// pthread_mutexattr_settype
// file /usr/include/pthread.h line 835
extern signed int pthread_mutexattr_settype(union anonymous_1 *, signed int);
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
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// readdir_r
// file /usr/include/dirent.h line 183
extern signed int readdir_r(struct __dirstream *, struct dirent *, struct dirent ** restrict );
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// realpath
// file /usr/include/stdlib.h line 733
extern char * realpath(const char *, char *);
// regcomp
// file /usr/include/regex.h line 562
extern signed int regcomp(struct re_pattern_buffer *, const char *, signed int);
// regexec
// file /usr/include/regex.h line 566
extern signed int regexec(const struct re_pattern_buffer *, const char *, unsigned long int, struct anonymous_6 *, signed int);
// regfree
// file /usr/include/regex.h line 574
extern void regfree(struct re_pattern_buffer *);
// report_testable_functions
// file ../../tests/testlib/testlib.h line 45
unsigned long int report_testable_functions(signed int full);
// run_func
// file ../../tests/testlib/testlib.h line 48
signed int run_func(unsigned long int func_index, signed int full);
// scan_proc_dir
// file process_stats.c line 202
static struct pids_in_proc_dir_t * scan_proc_dir(const char *path_to_proc_dir);
// sched_yield
// file /usr/include/sched.h line 65
extern signed int sched_yield(void);
// setegid
// file /usr/include/unistd.h line 727
extern signed int setegid(unsigned int);
// seteuid
// file /usr/include/unistd.h line 710
extern signed int seteuid(unsigned int);
// setmntent
// file /usr/include/mntent.h line 66
extern struct _IO_FILE * setmntent(const char *, const char *);
// setutent
// file /usr/include/utmp.h line 65
extern void setutent(void);
// setutxent
// file /usr/include/utmpx.h line 53
extern void setutxent(void);
// sg_alloc_globals
// file globals.c line 418
static void * sg_alloc_globals(void);
// sg_clear_error
// file error.h line 27
void sg_clear_error(void);
// sg_comp_destroy
// file globals.h line 449
enum anonymous_4 sg_comp_destroy(void);
// sg_comp_get_tls
// file globals.h line 54
void * sg_comp_get_tls(unsigned int id);
// sg_comp_init
// file globals.h line 448
enum anonymous_4 sg_comp_init(signed int ignore_init_errors);
// sg_concat_string
// file tools.c line 535
enum anonymous_4 sg_concat_string(char **dest, const char *src);
// sg_cpu_cleanup_comp
// file cpu_stats.c line 55
static void sg_cpu_cleanup_comp(void *p);
// sg_cpu_destroy_comp
// file cpu_stats.c line 55
static void sg_cpu_destroy_comp(void);
// sg_cpu_init_comp
// file cpu_stats.c line 55
static enum anonymous_4 sg_cpu_init_comp(unsigned int id);
// sg_destroy_globals
// file globals.c line 464
static void sg_destroy_globals(void *glob_buf);
// sg_destroy_main_globals
// file globals.c line 224
static void sg_destroy_main_globals(void);
// sg_die
// file err.c line 55
void sg_die(const char *prefix, signed int exit_code);
// sg_disk_cleanup_comp
// file disk_stats.c line 771
static void sg_disk_cleanup_comp(void *p);
// sg_disk_destroy_comp
// file disk_stats.c line 740
static void sg_disk_destroy_comp(void);
// sg_disk_init_comp
// file disk_stats.c line 711
static enum anonymous_4 sg_disk_init_comp(unsigned int id);
// sg_disk_io_compare_name
// file disk_stats.c line 2003
signed int sg_disk_io_compare_name(const void *va, const void *vb);
// sg_disk_io_compare_traffic
// file disk_stats.c line 2009
signed int sg_disk_io_compare_traffic(const void *va, const void *vb);
// sg_disk_io_stats_item_compare
// file disk_stats.c line 235
static signed int sg_disk_io_stats_item_compare(const struct anonymous_12 *a, const struct anonymous_12 *b);
// sg_disk_io_stats_item_compute_diff
// file disk_stats.c line 225
static enum anonymous_4 sg_disk_io_stats_item_compute_diff(const struct anonymous_12 *s, struct anonymous_12 *d);
// sg_disk_io_stats_item_copy
// file disk_stats.c line 211
static enum anonymous_4 sg_disk_io_stats_item_copy(const struct anonymous_12 *s, struct anonymous_12 *d);
// sg_disk_io_stats_item_destroy
// file disk_stats.c line 240
static void sg_disk_io_stats_item_destroy(struct anonymous_12 *d);
// sg_disk_io_stats_item_init
// file disk_stats.c line 206
static void sg_disk_io_stats_item_init(struct anonymous_12 *d);
// sg_drop_privileges
// file tools.c line 598
enum anonymous_4 sg_drop_privileges(void);
// sg_error_cleanup_comp
// file error.c line 66
static void sg_error_cleanup_comp(void *p);
// sg_error_destroy_comp
// file error.c line 65
static void sg_error_destroy_comp(void);
// sg_error_init_comp
// file error.c line 53
static enum anonymous_4 sg_error_init_comp(unsigned int id);
// sg_f_read_line
// file tools.h line 521
char * sg_f_read_line(struct _IO_FILE *f, char *linebuf, unsigned long int buf_size, const char *string);
// sg_fill_fs_stat_int
// file disk_stats.c line 1080
static enum anonymous_4 sg_fill_fs_stat_int(struct anonymous_11 *fs_stats_ptr);
// sg_first_init
// file globals.c line 187
static void sg_first_init(void);
// sg_free_stats_buf
// file vector.c line 308
enum anonymous_4 sg_free_stats_buf(void *data);
// sg_fs_compare_device_name
// file disk_stats.c line 1272
signed int sg_fs_compare_device_name(const void *va, const void *vb);
// sg_fs_compare_mnt_point
// file disk_stats.c line 1278
signed int sg_fs_compare_mnt_point(const void *va, const void *vb);
// sg_fs_stats_item_compare
// file disk_stats.c line 175
static signed int sg_fs_stats_item_compare(const struct anonymous_11 *a, const struct anonymous_11 *b);
// sg_fs_stats_item_compute_diff
// file disk_stats.c line 155
static enum anonymous_4 sg_fs_stats_item_compute_diff(const struct anonymous_11 *s, struct anonymous_11 *d);
// sg_fs_stats_item_copy
// file disk_stats.c line 125
static enum anonymous_4 sg_fs_stats_item_copy(const struct anonymous_11 *s, struct anonymous_11 *d);
// sg_fs_stats_item_destroy
// file disk_stats.c line 199
static void sg_fs_stats_item_destroy(struct anonymous_11 *d);
// sg_fs_stats_item_init
// file disk_stats.c line 116
static void sg_fs_stats_item_init(struct anonymous_11 *d);
// sg_get_cpu_percents_int
// file cpu_stats.c line 437
static enum anonymous_4 sg_get_cpu_percents_int(struct anonymous_25 *cpu_percent_buf, const struct anonymous_15 *cpu_stats_buf);
// sg_get_cpu_percents_of
// file cpu_stats.c line 486
struct anonymous_25 * sg_get_cpu_percents_of(enum sg_cpu_percent_source cps, unsigned long int *entries);
// sg_get_cpu_percents_r
// file cpu_stats.c line 560
struct anonymous_25 * sg_get_cpu_percents_r(const struct anonymous_15 *whereof, unsigned long int *entries);
// sg_get_cpu_stats
// file cpu_stats.c line 373
struct anonymous_15 * sg_get_cpu_stats(unsigned long int *entries);
// sg_get_cpu_stats_diff
// file cpu_stats.c line 432
struct anonymous_15 * sg_get_cpu_stats_diff(unsigned long int *entries);
// sg_get_cpu_stats_diff_between
// file cpu_stats.c line 432
struct anonymous_15 * sg_get_cpu_stats_diff_between(const struct anonymous_15 *cpu_now, const struct anonymous_15 *cpu_last, unsigned long int *entries);
// sg_get_cpu_stats_diff_int
// file cpu_stats.c line 400
static enum anonymous_4 sg_get_cpu_stats_diff_int(struct anonymous_15 *tgt, const struct anonymous_15 *now, const struct anonymous_15 *last);
// sg_get_cpu_stats_int
// file cpu_stats.c line 62
static enum anonymous_4 sg_get_cpu_stats_int(struct anonymous_15 *cpu_stats_buf);
// sg_get_cpu_stats_r
// file cpu_stats.c line 373
struct anonymous_15 * sg_get_cpu_stats_r(unsigned long int *entries);
// sg_get_disk_io_stats
// file disk_stats.c line 1999
struct anonymous_12 * sg_get_disk_io_stats(unsigned long int *entries);
// sg_get_disk_io_stats_diff
// file disk_stats.c line 2000
struct anonymous_12 * sg_get_disk_io_stats_diff(unsigned long int *entries);
// sg_get_disk_io_stats_diff_between
// file disk_stats.c line 2000
struct anonymous_12 * sg_get_disk_io_stats_diff_between(const struct anonymous_12 *cur, const struct anonymous_12 *last, unsigned long int *entries);
// sg_get_disk_io_stats_int
// file disk_stats.c line 1297
static enum anonymous_4 sg_get_disk_io_stats_int(struct sg_vector **disk_io_stats_vector_ptr);
// sg_get_disk_io_stats_r
// file disk_stats.c line 1999
struct anonymous_12 * sg_get_disk_io_stats_r(unsigned long int *entries);
// sg_get_error
// file statgrab.h line 115
enum anonymous_4 sg_get_error(void);
// sg_get_error_arg
// file error.c line 152
const char * sg_get_error_arg(void);
// sg_get_error_details
// file error.c line 168
enum anonymous_4 sg_get_error_details(struct sg_error_details *err_details);
// sg_get_error_errno
// file error.c line 160
signed int sg_get_error_errno(void);
// sg_get_error_glob
// file error.c line 73
static struct sg_error_glob * sg_get_error_glob(void);
// sg_get_fs_list_int
// file disk_stats.c line 778
static enum anonymous_4 sg_get_fs_list_int(struct sg_vector **fs_stats_vector_ptr);
// sg_get_fs_stats
// file disk_stats.c line 1268
struct anonymous_11 * sg_get_fs_stats(unsigned long int *entries);
// sg_get_fs_stats_diff
// file disk_stats.c line 1269
struct anonymous_11 * sg_get_fs_stats_diff(unsigned long int *entries);
// sg_get_fs_stats_diff_between
// file disk_stats.c line 1269
struct anonymous_11 * sg_get_fs_stats_diff_between(const struct anonymous_11 *cur, const struct anonymous_11 *last, unsigned long int *entries);
// sg_get_fs_stats_int
// file disk_stats.c line 1221
static enum anonymous_4 sg_get_fs_stats_int(struct sg_vector **fs_stats_vector_ptr);
// sg_get_fs_stats_r
// file disk_stats.c line 1268
struct anonymous_11 * sg_get_fs_stats_r(unsigned long int *entries);
// sg_get_host_info
// file os_info.c line 631
struct anonymous_3 * sg_get_host_info(unsigned long int *entries);
// sg_get_host_info_int
// file os_info.c line 185
static enum anonymous_4 sg_get_host_info_int(struct anonymous_3 *host_info_buf);
// sg_get_host_info_r
// file os_info.c line 631
struct anonymous_3 * sg_get_host_info_r(unsigned long int *entries);
// sg_get_ll_match
// file tools.h line 518
signed long long int sg_get_ll_match(char *line, struct anonymous_6 *match);
// sg_get_load_stats
// file load_stats.c line 114
struct anonymous_17 * sg_get_load_stats(unsigned long int *entries);
// sg_get_load_stats_int
// file load_stats.c line 27
static enum anonymous_4 sg_get_load_stats_int(struct anonymous_17 *load_stats_buf);
// sg_get_load_stats_r
// file load_stats.c line 114
struct anonymous_17 * sg_get_load_stats_r(unsigned long int *entries);
// sg_get_mem_stats
// file memory_stats.c line 406
struct anonymous_16 * sg_get_mem_stats(unsigned long int *entries);
// sg_get_mem_stats_int
// file memory_stats.c line 76
static enum anonymous_4 sg_get_mem_stats_int(struct anonymous_16 *mem_stats_buf);
// sg_get_mem_stats_r
// file memory_stats.c line 406
struct anonymous_16 * sg_get_mem_stats_r(unsigned long int *entries);
// sg_get_nelements
// file vector.c line 212
unsigned long int sg_get_nelements(const void *data);
// sg_get_network_iface_stats
// file network_stats.c line 1399
struct anonymous_20 * sg_get_network_iface_stats(unsigned long int *entries);
// sg_get_network_iface_stats_int
// file network_stats.c line 710
static enum anonymous_4 sg_get_network_iface_stats_int(struct sg_vector **network_iface_vector_ptr);
// sg_get_network_iface_stats_r
// file network_stats.c line 1399
struct anonymous_20 * sg_get_network_iface_stats_r(unsigned long int *entries);
// sg_get_network_io_stats
// file network_stats.c line 698
struct anonymous_21 * sg_get_network_io_stats(unsigned long int *entries);
// sg_get_network_io_stats_diff
// file network_stats.c line 699
struct anonymous_21 * sg_get_network_io_stats_diff(unsigned long int *entries);
// sg_get_network_io_stats_diff_between
// file network_stats.c line 699
struct anonymous_21 * sg_get_network_io_stats_diff_between(const struct anonymous_21 *cur, const struct anonymous_21 *last, unsigned long int *entries);
// sg_get_network_io_stats_int
// file network_stats.c line 235
static enum anonymous_4 sg_get_network_io_stats_int(struct sg_vector **network_io_stats_vector_ptr);
// sg_get_network_io_stats_r
// file network_stats.c line 698
struct anonymous_21 * sg_get_network_io_stats_r(unsigned long int *entries);
// sg_get_page_stats
// file page_stats.c line 242
struct anonymous_5 * sg_get_page_stats(unsigned long int *entries);
// sg_get_page_stats_diff
// file page_stats.c line 243
struct anonymous_5 * sg_get_page_stats_diff(unsigned long int *entries);
// sg_get_page_stats_diff_between
// file page_stats.c line 243
struct anonymous_5 * sg_get_page_stats_diff_between(const struct anonymous_5 *page_now, const struct anonymous_5 *page_last, unsigned long int *entries);
// sg_get_page_stats_diff_int
// file page_stats.c line 198
static enum anonymous_4 sg_get_page_stats_diff_int(struct anonymous_5 *tgt, const struct anonymous_5 *now, const struct anonymous_5 *last);
// sg_get_page_stats_int
// file page_stats.c line 32
static enum anonymous_4 sg_get_page_stats_int(struct anonymous_5 *page_stats_buf);
// sg_get_page_stats_r
// file page_stats.c line 242
struct anonymous_5 * sg_get_page_stats_r(unsigned long int *entries);
// sg_get_process_count_int
// file process_stats.c line 1404
static enum anonymous_4 sg_get_process_count_int(struct anonymous_22 *process_count_buf, const struct sg_vector *process_stats_vector);
// sg_get_process_count_of
// file process_stats.c line 1447
struct anonymous_22 * sg_get_process_count_of(enum sg_process_count_source pcs);
// sg_get_process_count_r
// file process_stats.c line 1505
struct anonymous_22 * sg_get_process_count_r(const struct anonymous_7 *whereof);
// sg_get_process_stats
// file process_stats.c line 1351
struct anonymous_7 * sg_get_process_stats(unsigned long int *entries);
// sg_get_process_stats_int
// file process_stats.c line 298
static enum anonymous_4 sg_get_process_stats_int(struct sg_vector **proc_stats_vector_ptr);
// sg_get_process_stats_r
// file process_stats.c line 1351
struct anonymous_7 * sg_get_process_stats_r(unsigned long int *entries);
// sg_get_string_match
// file tools.h line 519
char * sg_get_string_match(char *line, struct anonymous_6 *match);
// sg_get_swap_stats
// file swap_stats.c line 382
struct anonymous_19 * sg_get_swap_stats(unsigned long int *entries);
// sg_get_swap_stats_int
// file swap_stats.c line 71
static enum anonymous_4 sg_get_swap_stats_int(struct anonymous_19 *swap_stats_buf);
// sg_get_swap_stats_r
// file swap_stats.c line 382
struct anonymous_19 * sg_get_swap_stats_r(unsigned long int *entries);
// sg_get_sys_page_size
// file tools.h line 541
static inline signed long int sg_get_sys_page_size(void);
// sg_get_sys_page_size_link1
// file tools.h line 541
static inline signed long int sg_get_sys_page_size_link1(void);
// sg_get_sys_page_size_link2
// file tools.h line 541
static inline signed long int sg_get_sys_page_size_link2(void);
// sg_get_user_stats
// file user_stats.c line 365
struct anonymous_18 * sg_get_user_stats(unsigned long int *entries);
// sg_get_user_stats_int
// file user_stats.c line 95
static enum anonymous_4 sg_get_user_stats_int(struct sg_vector **user_stats_vector_ptr);
// sg_get_user_stats_r
// file user_stats.c line 365
struct anonymous_18 * sg_get_user_stats_r(unsigned long int *entries);
// sg_get_valid_filesystems
// file disk_stats.c line 588
const char ** sg_get_valid_filesystems(unsigned long int *entries);
// sg_global_lock
// file globals.c line 157
enum anonymous_4 sg_global_lock(void);
// sg_global_unlock
// file globals.c line 172
enum anonymous_4 sg_global_unlock(void);
// sg_init
// file ../../src/libstatgrab/statgrab.h line 130
enum anonymous_4 sg_init(signed int ignore_init_errors);
// sg_init_thread_local
// file globals.c line 208
static enum anonymous_4 sg_init_thread_local(void);
// sg_load_cleanup_comp
// file load_stats.c line 108
static void sg_load_cleanup_comp(void *p);
// sg_load_destroy_comp
// file load_stats.c line 108
static void sg_load_destroy_comp(void);
// sg_load_init_comp
// file load_stats.c line 108
static enum anonymous_4 sg_load_init_comp(unsigned int id);
// sg_lock_mutex
// file statgrab.h line 139
enum anonymous_4 sg_lock_mutex(const char *mutex_name);
// sg_lupdate_string
// file tools.h line 513
enum anonymous_4 sg_lupdate_string(char **dest, const char *src, unsigned long int maxlen);
// sg_mem_cleanup_comp
// file memory_stats.c line 73
static void sg_mem_cleanup_comp(void *p);
// sg_mem_destroy_comp
// file memory_stats.c line 72
static void sg_mem_destroy_comp(void);
// sg_mem_init_comp
// file memory_stats.c line 42
static enum anonymous_4 sg_mem_init_comp(unsigned int id);
// sg_network_cleanup_comp
// file network_stats.c line 197
static void sg_network_cleanup_comp(void *p);
// sg_network_destroy_comp
// file network_stats.c line 191
static void sg_network_destroy_comp(void);
// sg_network_iface_compare_name
// file network_stats.c line 1402
signed int sg_network_iface_compare_name(const void *va, const void *vb);
// sg_network_iface_stats_item_copy
// file network_stats.c line 112
static enum anonymous_4 sg_network_iface_stats_item_copy(struct anonymous_20 *d, const struct anonymous_20 *s);
// sg_network_iface_stats_item_destroy
// file network_stats.c line 131
static void sg_network_iface_stats_item_destroy(struct anonymous_20 *d);
// sg_network_iface_stats_item_init
// file network_stats.c line 102
static void sg_network_iface_stats_item_init(struct anonymous_20 *d);
// sg_network_init_comp
// file network_stats.c line 155
static enum anonymous_4 sg_network_init_comp(unsigned int id);
// sg_network_io_compare_name
// file network_stats.c line 702
signed int sg_network_io_compare_name(const void *va, const void *vb);
// sg_network_io_stats_item_compare
// file network_stats.c line 91
static signed int sg_network_io_stats_item_compare(const struct anonymous_21 *a, const struct anonymous_21 *b);
// sg_network_io_stats_item_compute_diff
// file network_stats.c line 76
static enum anonymous_4 sg_network_io_stats_item_compute_diff(const struct anonymous_21 *s, struct anonymous_21 *d);
// sg_network_io_stats_item_copy
// file network_stats.c line 40
static enum anonymous_4 sg_network_io_stats_item_copy(const struct anonymous_21 *s, struct anonymous_21 *d);
// sg_network_io_stats_item_destroy
// file network_stats.c line 96
static void sg_network_io_stats_item_destroy(struct anonymous_21 *d);
// sg_network_io_stats_item_init
// file network_stats.c line 35
static void sg_network_io_stats_item_init(struct anonymous_21 *d);
// sg_os_cleanup_comp
// file os_info.c line 598
static void sg_os_cleanup_comp(void *p);
// sg_os_destroy_comp
// file os_info.c line 598
static void sg_os_destroy_comp(void);
// sg_os_init_comp
// file os_info.c line 598
static enum anonymous_4 sg_os_init_comp(unsigned int id);
// sg_os_stats_item_destroy
// file os_info.c line 617
static void sg_os_stats_item_destroy(struct anonymous_3 *d);
// sg_os_stats_item_init
// file os_info.c line 604
static void sg_os_stats_item_init(struct anonymous_3 *d);
// sg_page_cleanup_comp
// file page_stats.c line 234
static void sg_page_cleanup_comp(void *p);
// sg_page_destroy_comp
// file page_stats.c line 234
static void sg_page_destroy_comp(void);
// sg_page_init_comp
// file page_stats.c line 234
static enum anonymous_4 sg_page_init_comp(unsigned int id);
// sg_process_cleanup_comp
// file process_stats.c line 133
static void sg_process_cleanup_comp(void *p);
// sg_process_compare_cpu
// file process_stats.c line 1383
signed int sg_process_compare_cpu(const void *va, const void *vb);
// sg_process_compare_gid
// file process_stats.c line 1368
signed int sg_process_compare_gid(const void *va, const void *vb);
// sg_process_compare_name
// file process_stats.c line 1353
signed int sg_process_compare_name(const void *va, const void *vb);
// sg_process_compare_pid
// file process_stats.c line 1358
signed int sg_process_compare_pid(const void *va, const void *vb);
// sg_process_compare_res
// file process_stats.c line 1378
signed int sg_process_compare_res(const void *va, const void *vb);
// sg_process_compare_size
// file process_stats.c line 1373
signed int sg_process_compare_size(const void *va, const void *vb);
// sg_process_compare_time
// file process_stats.c line 1388
signed int sg_process_compare_time(const void *va, const void *vb);
// sg_process_compare_uid
// file process_stats.c line 1363
signed int sg_process_compare_uid(const void *va, const void *vb);
// sg_process_destroy_comp
// file process_stats.c line 132
static void sg_process_destroy_comp(void);
// sg_process_init_comp
// file process_stats.c line 121
static enum anonymous_4 sg_process_init_comp(unsigned int id);
// sg_process_stats_item_destroy
// file process_stats.c line 103
static void sg_process_stats_item_destroy(struct anonymous_7 *d);
// sg_process_stats_item_init
// file process_stats.c line 43
static void sg_process_stats_item_init(struct anonymous_7 *d);
// sg_prove_vector
// file vector.h line 69
enum anonymous_4 sg_prove_vector(const struct sg_vector *vec);
// sg_prove_vector_compat
// file vector.c line 81
static enum anonymous_4 sg_prove_vector_compat(const struct sg_vector *one, const struct sg_vector *two);
// sg_realloc
// file tools.h line 556
void * sg_realloc(void *ptr, unsigned long int size);
// sg_set_error_fmt
// file error.h line 28
enum anonymous_4 sg_set_error_fmt(enum anonymous_4 code, const char *arg, ...);
// sg_set_error_int
// file error.c line 81
static enum anonymous_4 sg_set_error_int(enum anonymous_4 code, signed int errno_value, const char *arg, void **ap);
// sg_set_error_with_errno_code_fmt
// file error.h line 30
enum anonymous_4 sg_set_error_with_errno_code_fmt(enum anonymous_4 code, signed int errno_value, const char *arg, ...);
// sg_set_error_with_errno_fmt
// file error.h line 29
enum anonymous_4 sg_set_error_with_errno_fmt(enum anonymous_4 code, const char *arg, ...);
// sg_set_valid_filesystems
// file disk_stats.c line 595
enum anonymous_4 sg_set_valid_filesystems(const char **valid_fs);
// sg_shutdown
// file tools.c line 586
enum anonymous_4 sg_shutdown(void);
// sg_snapshot
// file tools.c line 590
enum anonymous_4 sg_snapshot(void);
// sg_str_error
// file error.c line 189
const char * sg_str_error(enum anonymous_4 code);
// sg_strperror
// file error.c line 300
char * sg_strperror(char **buf, const struct sg_error_details * const err_details);
// sg_swap_cleanup_comp
// file swap_stats.c line 68
static void sg_swap_cleanup_comp(void *p);
// sg_swap_destroy_comp
// file swap_stats.c line 67
static void sg_swap_destroy_comp(void);
// sg_swap_init_comp
// file swap_stats.c line 37
static enum anonymous_4 sg_swap_init_comp(unsigned int id);
// sg_unlock_mutex
// file statgrab.h line 140
enum anonymous_4 sg_unlock_mutex(const char *mutex_name);
// sg_update_mem
// file tools.h line 514
enum anonymous_4 sg_update_mem(void **dest, const void *src, unsigned long int len);
// sg_update_string
// file tools.h line 512
enum anonymous_4 sg_update_string(char **dest, const char *src);
// sg_user_cleanup_comp
// file user_stats.c line 360
static void sg_user_cleanup_comp(void *p);
// sg_user_destroy_comp
// file user_stats.c line 360
static void sg_user_destroy_comp(void);
// sg_user_init_comp
// file user_stats.c line 360
static enum anonymous_4 sg_user_init_comp(unsigned int id);
// sg_user_stats_item_destroy
// file user_stats.c line 60
static void sg_user_stats_item_destroy(struct anonymous_18 *d);
// sg_user_stats_item_init
// file user_stats.c line 27
static void sg_user_stats_item_init(struct anonymous_18 *d);
// sg_vector_clear
// file vector.h line 85
void sg_vector_clear(struct sg_vector *vector);
// sg_vector_clone
// file vector.h line 163
struct sg_vector * sg_vector_clone(const struct sg_vector *src);
// sg_vector_clone_into
// file vector.c line 250
enum anonymous_4 sg_vector_clone_into(struct sg_vector **dest, const struct sg_vector *src);
// sg_vector_clone_into_int
// file vector.c line 218
static enum anonymous_4 sg_vector_clone_into_int(struct sg_vector **dest, const struct sg_vector *src);
// sg_vector_compute_diff
// file vector.h line 166
enum anonymous_4 sg_vector_compute_diff(struct sg_vector **dest_vector_ptr, const struct sg_vector *cur_vector, const struct sg_vector *last_vector);
// sg_vector_create
// file vector.h line 83
struct sg_vector * sg_vector_create(unsigned long int block_size, unsigned long int alloc_count, unsigned long int initial_used, const struct sg_vector_init_info * const info);
// sg_vector_create_int
// file vector.c line 98
static struct sg_vector * sg_vector_create_int(unsigned long int block_shift, unsigned long int alloc_count, unsigned long int initial_used, const struct sg_vector_init_info * const info);
// sg_vector_destroy_unused
// file vector.c line 33
static void sg_vector_destroy_unused(struct sg_vector *vector, unsigned long int new_count);
// sg_vector_free
// file vector.h line 98
void sg_vector_free(struct sg_vector *vector);
// sg_vector_init_new
// file vector.c line 57
static void sg_vector_init_new(struct sg_vector *vector, unsigned long int new_count);
// sg_vector_resize
// file vector.h line 95
struct sg_vector * sg_vector_resize(struct sg_vector *vector, unsigned long int new_count);
// sg_warn
// file err.c line 29
signed int sg_warn(const char *prefix);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// statvfs64
// file /usr/include/x86_64-linux-gnu/sys/statvfs.h line 65
extern signed int statvfs64(const char *, struct statvfs64 *);
// strcasecmp
// file /usr/include/string.h line 533
extern signed int strcasecmp(const char *, const char *);
// strchr
// file /usr/include/string.h line 235
extern char * strchr(const char *, signed int);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strerror_r
// file /usr/include/string.h line 437
extern char * strerror_r(signed int, char *, unsigned long int);
// strlcat
// file tools.c line 418
static unsigned long int strlcat(char *dst, const char *src, unsigned long int siz);
// strlcpy
// file tools.c line 364
static unsigned long int strlcpy(char *dst, const char *src, unsigned long int siz);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strndup
// file /usr/include/string.h line 183
extern char * strndup(const char *, unsigned long int);
// strnlen
// file /usr/include/string.h line 405
extern unsigned long int strnlen(const char *, unsigned long int);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// threadfunc
// file diff_stats.c line 62
void * threadfunc(void *parm);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// transfer_diff
// file network_stats.c line 59
static unsigned long long int transfer_diff(unsigned long long int new, unsigned long long int old);
// uname
// file /usr/include/x86_64-linux-gnu/sys/utsname.h line 81
extern signed int uname(struct utsname *);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);

struct anonymous_11
{
  // device_name
  char *device_name;
  // device_canonical
  char *device_canonical;
  // fs_type
  char *fs_type;
  // mnt_point
  char *mnt_point;
  // device_type
  enum anonymous_8 device_type;
  // size
  unsigned long long int size;
  // used
  unsigned long long int used;
  // free
  unsigned long long int free;
  // avail
  unsigned long long int avail;
  // total_inodes
  unsigned long long int total_inodes;
  // used_inodes
  unsigned long long int used_inodes;
  // free_inodes
  unsigned long long int free_inodes;
  // avail_inodes
  unsigned long long int avail_inodes;
  // io_size
  unsigned long long int io_size;
  // block_size
  unsigned long long int block_size;
  // total_blocks
  unsigned long long int total_blocks;
  // free_blocks
  unsigned long long int free_blocks;
  // used_blocks
  unsigned long long int used_blocks;
  // avail_blocks
  unsigned long long int avail_blocks;
  // systime
  signed long int systime;
};

struct anonymous_12
{
  // disk_name
  char *disk_name;
  // read_bytes
  unsigned long long int read_bytes;
  // write_bytes
  unsigned long long int write_bytes;
  // systime
  signed long int systime;
};

struct anonymous_20
{
  // interface_name
  char *interface_name;
  // speed
  unsigned long long int speed;
  // factor
  unsigned long long int factor;
  // duplex
  enum anonymous_26 duplex;
  // up
  enum anonymous_27 up;
  // systime
  signed long int systime;
};

struct anonymous_21
{
  // interface_name
  char *interface_name;
  // tx
  unsigned long long int tx;
  // rx
  unsigned long long int rx;
  // ipackets
  unsigned long long int ipackets;
  // opackets
  unsigned long long int opackets;
  // ierrors
  unsigned long long int ierrors;
  // oerrors
  unsigned long long int oerrors;
  // collisions
  unsigned long long int collisions;
  // systime
  signed long int systime;
};

struct anonymous_18
{
  // login_name
  char *login_name;
  // record_id
  char *record_id;
  // record_id_size
  unsigned long int record_id_size;
  // device
  char *device;
  // hostname
  char *hostname;
  // pid
  signed int pid;
  // login_time
  signed long int login_time;
  // systime
  signed long int systime;
};

struct anonymous_3
{
  // os_name
  char *os_name;
  // os_release
  char *os_release;
  // os_version
  char *os_version;
  // platform
  char *platform;
  // hostname
  char *hostname;
  // bitwidth
  unsigned int bitwidth;
  // host_state
  enum anonymous_2 host_state;
  // ncpus
  unsigned int ncpus;
  // maxcpus
  unsigned int maxcpus;
  // uptime
  signed long int uptime;
  // systime
  signed long int systime;
};

struct anonymous_7
{
  // process_name
  char *process_name;
  // proctitle
  char *proctitle;
  // pid
  signed int pid;
  // parent
  signed int parent;
  // pgid
  signed int pgid;
  // sessid
  signed int sessid;
  // uid
  unsigned int uid;
  // euid
  unsigned int euid;
  // gid
  unsigned int gid;
  // egid
  unsigned int egid;
  // context_switches
  unsigned long long int context_switches;
  // voluntary_context_switches
  unsigned long long int voluntary_context_switches;
  // involuntary_context_switches
  unsigned long long int involuntary_context_switches;
  // proc_size
  unsigned long long int proc_size;
  // proc_resident
  unsigned long long int proc_resident;
  // start_time
  signed long int start_time;
  // time_spent
  signed long int time_spent;
  // cpu_percent
  double cpu_percent;
  // nice
  signed int nice;
  // state
  enum anonymous_23 state;
  // systime
  signed long int systime;
};

struct anonymous_17
{
  // min1
  double min1;
  // min5
  double min5;
  // min15
  double min15;
  // systime
  signed long int systime;
};

struct anonymous_25
{
  // user
  double user;
  // kernel
  double kernel;
  // idle
  double idle;
  // iowait
  double iowait;
  // swap
  double swap;
  // nice
  double nice;
  // time_taken
  signed long int time_taken;
};

struct anonymous_10
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

struct anonymous_6
{
  // rm_so
  signed int rm_so;
  // rm_eo
  signed int rm_eo;
};

struct anonymous_24
{
  // tv_sec
  signed int tv_sec;
  // tv_usec
  signed int tv_usec;
};

struct anonymous_5
{
  // pages_pagein
  unsigned long long int pages_pagein;
  // pages_pageout
  unsigned long long int pages_pageout;
  // systime
  signed long int systime;
};

struct anonymous_16
{
  // total
  unsigned long long int total;
  // free
  unsigned long long int free;
  // used
  unsigned long long int used;
  // cache
  unsigned long long int cache;
  // systime
  signed long int systime;
};

struct anonymous_22
{
  // total
  unsigned long long int total;
  // running
  unsigned long long int running;
  // sleeping
  unsigned long long int sleeping;
  // stopped
  unsigned long long int stopped;
  // zombie
  unsigned long long int zombie;
  // unknown
  unsigned long long int unknown;
  // systime
  signed long int systime;
};

struct anonymous_19
{
  // total
  unsigned long long int total;
  // used
  unsigned long long int used;
  // free
  unsigned long long int free;
  // systime
  signed long int systime;
};

struct anonymous_15
{
  // user
  unsigned long long int user;
  // kernel
  unsigned long long int kernel;
  // idle
  unsigned long long int idle;
  // iowait
  unsigned long long int iowait;
  // swap
  unsigned long long int swap;
  // nice
  unsigned long long int nice;
  // total
  unsigned long long int total;
  // context_switches
  unsigned long long int context_switches;
  // voluntary_context_switches
  unsigned long long int voluntary_context_switches;
  // involuntary_context_switches
  unsigned long long int involuntary_context_switches;
  // syscalls
  unsigned long long int syscalls;
  // interrupts
  unsigned long long int interrupts;
  // soft_interrupts
  unsigned long long int soft_interrupts;
  // systime
  signed long int systime;
};

union anonymous
{
  // ifrn_name
  char ifrn_name[16l];
};

union anonymous_1
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_14
{
  // s
  signed long int s;
  // u
  unsigned long int u;
  // b
  _Bool b;
  // str
  char *str;
};

union anonymous_9
{
  // __data
  struct anonymous_10 __data;
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

union anonymous_13
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
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

struct ifmap
{
  // mem_start
  unsigned long int mem_start;
  // mem_end
  unsigned long int mem_end;
  // base_addr
  unsigned short int base_addr;
  // irq
  unsigned char irq;
  // dma
  unsigned char dma;
  // port
  unsigned char port;
};

union anonymous_0
{
  // ifru_addr
  struct sockaddr ifru_addr;
  // ifru_dstaddr
  struct sockaddr ifru_dstaddr;
  // ifru_broadaddr
  struct sockaddr ifru_broadaddr;
  // ifru_netmask
  struct sockaddr ifru_netmask;
  // ifru_hwaddr
  struct sockaddr ifru_hwaddr;
  // ifru_flags
  signed short int ifru_flags;
  // ifru_ivalue
  signed int ifru_ivalue;
  // ifru_mtu
  signed int ifru_mtu;
  // ifru_map
  struct ifmap ifru_map;
  // ifru_slave
  char ifru_slave[16l];
  // ifru_newname
  char ifru_newname[16l];
  // ifru_data
  char *ifru_data;
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

struct __exit_status
{
  // e_termination
  signed short int e_termination;
  // e_exit
  signed short int e_exit;
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

struct ethtool_cmd
{
  // cmd
  unsigned int cmd;
  // supported
  unsigned int supported;
  // advertising
  unsigned int advertising;
  // speed
  unsigned short int speed;
  // duplex
  unsigned char duplex;
  // port
  unsigned char port;
  // phy_address
  unsigned char phy_address;
  // transceiver
  unsigned char transceiver;
  // autoneg
  unsigned char autoneg;
  // mdio_support
  unsigned char mdio_support;
  // maxtxpkt
  unsigned int maxtxpkt;
  // maxrxpkt
  unsigned int maxrxpkt;
  // speed_hi
  unsigned short int speed_hi;
  // eth_tp_mdix
  unsigned char eth_tp_mdix;
  // eth_tp_mdix_ctrl
  unsigned char eth_tp_mdix_ctrl;
  // lp_advertising
  unsigned int lp_advertising;
  // reserved
  unsigned int reserved[2l];
};

struct exit_status
{
  // e_termination
  signed short int e_termination;
  // e_exit
  signed short int e_exit;
};

struct ifreq
{
  // ifr_ifrn
  union anonymous ifr_ifrn;
  // ifr_ifru
  union anonymous_0 ifr_ifru;
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

struct opt_def
{
  // optchr
  char optchr;
  // opttype
  enum opt_type opttype;
  // optarg
  union anonymous_14 optarg;
};

struct pids_in_proc_dir_t
{
  // nitems
  unsigned long int nitems;
  // next
  struct pids_in_proc_dir_t *next;
  // items
  signed int items[0l];
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct re_pattern_buffer
{
  // buffer
  unsigned char *buffer;
  // allocated
  unsigned long int allocated;
  // used
  unsigned long int used;
  // syntax
  unsigned long int syntax;
  // fastmap
  char *fastmap;
  // translate
  unsigned char *translate;
  // re_nsub
  unsigned long int re_nsub;
  // can_be_null
  unsigned int can_be_null : 1;
  // regs_allocated
  unsigned int regs_allocated : 2;
  // fastmap_accurate
  unsigned int fastmap_accurate : 1;
  // no_sub
  unsigned int no_sub : 1;
  // not_bol
  unsigned int not_bol : 1;
  // not_eol
  unsigned int not_eol : 1;
  // newline_anchor
  unsigned int newline_anchor : 1;
};

struct sg_comp_info
{
  // init_comp
  struct sg_comp_init * const init_comp;
  // glob_ofs
  unsigned long int glob_ofs;
};

struct sg_comp_init
{
  // init_fn
  enum anonymous_4 (*init_fn)(unsigned int);
  // destroy_fn
  void (*destroy_fn)(void);
  // cleanup_fn
  void (*cleanup_fn)(void *);
  // static_buf_size
  unsigned long int static_buf_size;
  // required_locks
  const char **required_locks;
  // status
  struct sg_comp_status *status;
};

struct sg_comp_status
{
  // init_error
  enum anonymous_4 init_error;
};

struct sg_vector_init_info
{
  // item_size
  unsigned long int item_size;
  // init_fn
  void (*init_fn)(void *);
  // copy_fn
  enum anonymous_4 (*copy_fn)(const void *, void *);
  // compute_diff_fn
  enum anonymous_4 (*compute_diff_fn)(const void *, void *);
  // compare_fn
  signed int (*compare_fn)(const void *, const void *);
  // destroy_fn
  void (*destroy_fn)(void *);
};

struct sg_vector
{
  // start_eye
  unsigned long int start_eye;
  // used_count
  unsigned long int used_count;
  // alloc_count
  unsigned long int alloc_count;
  // block_shift
  unsigned long int block_shift;
  // info
  struct sg_vector_init_info info;
  // final_eye
  unsigned long int final_eye;
};

struct sg_cpu_glob
{
  // cpu_vectors
  struct sg_vector *cpu_vectors[3l];
};

struct sg_disk_glob
{
  // disk_vectors
  struct sg_vector *disk_vectors[4l];
};

struct sg_error_details
{
  // error
  enum anonymous_4 error;
  // errno_value
  signed int errno_value;
  // error_arg
  const char *error_arg;
};

struct sg_error_glob
{
  // error
  enum anonymous_4 error;
  // errno_value
  signed int errno_value;
  // error_arg
  char error_arg[4096l];
};

struct sg_load_glob
{
  // load_vectors
  struct sg_vector *load_vectors[1l];
};

struct sg_mem_glob
{
  // mem_vectors
  struct sg_vector *mem_vectors[1l];
};

struct sg_named_mutex
{
  // name
  const char *name;
  // mutex
  union anonymous_13 mutex;
};

struct sg_network_glob
{
  // network_vectors
  struct sg_vector *network_vectors[3l];
};

struct sg_os_glob
{
  // os_vectors
  struct sg_vector *os_vectors[1l];
};

struct sg_page_glob
{
  // page_vectors
  struct sg_vector *page_vectors[2l];
};

struct sg_process_glob
{
  // process_vectors
  struct sg_vector *process_vectors[2l];
};

struct sg_swap_glob
{
  // swap_vectors
  struct sg_vector *swap_vectors[1l];
};

struct sg_user_glob
{
  // user_vectors
  struct sg_vector *user_vectors[1l];
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

struct statgrab_testfuncs
{
  // stat_name
  const char *stat_name;
  // full_name
  const char *full_name;
  // full_fn
  void * (*full_fn)(unsigned long int *);
  // diff_name
  const char *diff_name;
  // diff_fn
  void * (*diff_fn)(unsigned long int *);
  // needed
  unsigned int needed;
  // succeeded
  unsigned int succeeded;
  // done
  unsigned int done;
};

struct statvfs64
{
  // f_bsize
  unsigned long int f_bsize;
  // f_frsize
  unsigned long int f_frsize;
  // f_blocks
  unsigned long int f_blocks;
  // f_bfree
  unsigned long int f_bfree;
  // f_bavail
  unsigned long int f_bavail;
  // f_files
  unsigned long int f_files;
  // f_ffree
  unsigned long int f_ffree;
  // f_favail
  unsigned long int f_favail;
  // f_fsid
  unsigned long int f_fsid;
  // f_flag
  unsigned long int f_flag;
  // f_namemax
  unsigned long int f_namemax;
  // __f_spare
  signed int __f_spare[6l];
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

struct utmp
{
  // ut_type
  signed short int ut_type;
  // ut_pid
  signed int ut_pid;
  // ut_line
  char ut_line[32l];
  // ut_id
  char ut_id[4l];
  // ut_user
  char ut_user[32l];
  // ut_host
  char ut_host[256l];
  // ut_exit
  struct exit_status ut_exit;
  // ut_session
  signed int ut_session;
  // ut_tv
  struct anonymous_24 ut_tv;
  // ut_addr_v6
  signed int ut_addr_v6[4l];
  // __glibc_reserved
  char __glibc_reserved[20l];
};

struct utmpx
{
  // ut_type
  signed short int ut_type;
  // ut_pid
  signed int ut_pid;
  // ut_line
  char ut_line[32l];
  // ut_id
  char ut_id[4l];
  // ut_user
  char ut_user[32l];
  // ut_host
  char ut_host[256l];
  // ut_exit
  struct __exit_status ut_exit;
  // ut_session
  signed int ut_session;
  // ut_tv
  struct anonymous_24 ut_tv;
  // ut_addr_v6
  signed int ut_addr_v6[4l];
  // __glibc_reserved
  char __glibc_reserved[20l];
};

struct utsname
{
  // sysname
  char sysname[65l];
  // nodename
  char nodename[65l];
  // release
  char release[65l];
  // version
  char version[65l];
  // machine
  char machine[65l];
  // domainname
  char domainname[65l];
};


// comp_info
// file globals.c line 44
static struct sg_comp_info comp_info[11l];
// sg_cpu_init
// file cpu_stats.c line 55
struct sg_comp_init sg_cpu_init;
// sg_cpu_lock_names
// file cpu_stats.c line 55
static const char *sg_cpu_lock_names[1l] = { (const char *)(void *)0 };
// sg_cpu_status
// file cpu_stats.c line 55
static struct sg_comp_status sg_cpu_status;
// sg_cpu_init
// file cpu_stats.c line 55
struct sg_comp_init sg_cpu_init = { .init_fn=sg_cpu_init_comp, .destroy_fn=sg_cpu_destroy_comp, .cleanup_fn=sg_cpu_cleanup_comp,
    .static_buf_size=sizeof(struct sg_cpu_glob) /*24ul*/ , .required_locks=sg_cpu_lock_names,
    .status=&sg_cpu_status };
// sg_disk_init
// file disk_stats.c line 699
struct sg_comp_init sg_disk_init;
// sg_disk_lock_names
// file disk_stats.c line 699
static const char *sg_disk_lock_names[1l] = { (const char *)(void *)0 };
// sg_disk_status
// file disk_stats.c line 699
static struct sg_comp_status sg_disk_status;
// sg_disk_init
// file disk_stats.c line 699
struct sg_comp_init sg_disk_init = { .init_fn=sg_disk_init_comp, .destroy_fn=sg_disk_destroy_comp, .cleanup_fn=sg_disk_cleanup_comp,
    .static_buf_size=sizeof(struct sg_disk_glob) /*32ul*/ , .required_locks=sg_disk_lock_names,
    .status=&sg_disk_status };
// sg_error_init
// file error.c line 48
struct sg_comp_init sg_error_init;
// sg_error_lock_names
// file error.c line 48
static const char *sg_error_lock_names[1l] = { (const char *)(void *)0 };
// sg_error_status
// file error.c line 48
static struct sg_comp_status sg_error_status;
// sg_error_init
// file error.c line 48
struct sg_comp_init sg_error_init = { .init_fn=sg_error_init_comp, .destroy_fn=sg_error_destroy_comp, .cleanup_fn=sg_error_cleanup_comp,
    .static_buf_size=sizeof(struct sg_error_glob) /*4104ul*/ , .required_locks=sg_error_lock_names,
    .status=&sg_error_status };
// sg_load_init
// file load_stats.c line 108
struct sg_comp_init sg_load_init;
// sg_load_lock_names
// file load_stats.c line 108
static const char *sg_load_lock_names[1l] = { (const char *)(void *)0 };
// sg_load_status
// file load_stats.c line 108
static struct sg_comp_status sg_load_status;
// sg_load_init
// file load_stats.c line 108
struct sg_comp_init sg_load_init = { .init_fn=sg_load_init_comp, .destroy_fn=sg_load_destroy_comp, .cleanup_fn=sg_load_cleanup_comp,
    .static_buf_size=sizeof(struct sg_load_glob) /*8ul*/ , .required_locks=sg_load_lock_names,
    .status=&sg_load_status };
// sg_mem_init
// file memory_stats.c line 28
struct sg_comp_init sg_mem_init;
// sg_mem_lock_names
// file memory_stats.c line 28
static const char *sg_mem_lock_names[1l] = { (const char *)(void *)0 };
// sg_mem_status
// file memory_stats.c line 28
static struct sg_comp_status sg_mem_status;
// sg_mem_init
// file memory_stats.c line 28
struct sg_comp_init sg_mem_init = { .init_fn=sg_mem_init_comp, .destroy_fn=sg_mem_destroy_comp, .cleanup_fn=sg_mem_cleanup_comp,
    .static_buf_size=sizeof(struct sg_mem_glob) /*8ul*/ , .required_locks=sg_mem_lock_names,
    .status=&sg_mem_status };
// sg_network_init
// file network_stats.c line 147
struct sg_comp_init sg_network_init;
// sg_network_lock_names
// file network_stats.c line 147
static const char *sg_network_lock_names[1l] = { (const char *)(void *)0 };
// sg_network_status
// file network_stats.c line 147
static struct sg_comp_status sg_network_status;
// sg_network_init
// file network_stats.c line 147
struct sg_comp_init sg_network_init = { .init_fn=sg_network_init_comp, .destroy_fn=sg_network_destroy_comp, .cleanup_fn=sg_network_cleanup_comp,
    .static_buf_size=sizeof(struct sg_network_glob) /*24ul*/ ,
    .required_locks=sg_network_lock_names,
    .status=&sg_network_status };
// sg_os_init
// file os_info.c line 598
struct sg_comp_init sg_os_init;
// sg_os_lock_names
// file os_info.c line 598
static const char *sg_os_lock_names[1l] = { (const char *)(void *)0 };
// sg_os_status
// file os_info.c line 598
static struct sg_comp_status sg_os_status;
// sg_os_init
// file os_info.c line 598
struct sg_comp_init sg_os_init = { .init_fn=sg_os_init_comp, .destroy_fn=sg_os_destroy_comp, .cleanup_fn=sg_os_cleanup_comp,
    .static_buf_size=sizeof(struct sg_os_glob) /*8ul*/ , .required_locks=sg_os_lock_names,
    .status=&sg_os_status };
// sg_page_init
// file page_stats.c line 234
struct sg_comp_init sg_page_init;
// sg_page_lock_names
// file page_stats.c line 234
static const char *sg_page_lock_names[1l] = { (const char *)(void *)0 };
// sg_page_status
// file page_stats.c line 234
static struct sg_comp_status sg_page_status;
// sg_page_init
// file page_stats.c line 234
struct sg_comp_init sg_page_init = { .init_fn=sg_page_init_comp, .destroy_fn=sg_page_destroy_comp, .cleanup_fn=sg_page_cleanup_comp,
    .static_buf_size=sizeof(struct sg_page_glob) /*16ul*/ , .required_locks=sg_page_lock_names,
    .status=&sg_page_status };
// sg_process_init
// file process_stats.c line 118
struct sg_comp_init sg_process_init;
// sg_process_lock_names
// file process_stats.c line 118
static const char *sg_process_lock_names[1l] = { (const char *)(void *)0 };
// sg_process_status
// file process_stats.c line 118
static struct sg_comp_status sg_process_status;
// sg_process_init
// file process_stats.c line 118
struct sg_comp_init sg_process_init = { .init_fn=sg_process_init_comp, .destroy_fn=sg_process_destroy_comp, .cleanup_fn=sg_process_cleanup_comp,
    .static_buf_size=sizeof(struct sg_process_glob) /*16ul*/ ,
    .required_locks=sg_process_lock_names,
    .status=&sg_process_status };
// sg_swap_init
// file swap_stats.c line 28
struct sg_comp_init sg_swap_init;
// sg_swap_lock_names
// file swap_stats.c line 28
static const char *sg_swap_lock_names[1l] = { (const char *)(void *)0 };
// sg_swap_status
// file swap_stats.c line 28
static struct sg_comp_status sg_swap_status;
// sg_swap_init
// file swap_stats.c line 28
struct sg_comp_init sg_swap_init = { .init_fn=sg_swap_init_comp, .destroy_fn=sg_swap_destroy_comp, .cleanup_fn=sg_swap_cleanup_comp,
    .static_buf_size=sizeof(struct sg_swap_glob) /*8ul*/ , .required_locks=sg_swap_lock_names,
    .status=&sg_swap_status };
// sg_user_init
// file user_stats.c line 360
struct sg_comp_init sg_user_init;
// sg_user_lock_names
// file user_stats.c line 360
static const char *sg_user_lock_names[2l] = { "utmp", (const char *)(void *)0 };
// sg_user_status
// file user_stats.c line 360
static struct sg_comp_status sg_user_status;
// sg_user_init
// file user_stats.c line 360
struct sg_comp_init sg_user_init = { .init_fn=sg_user_init_comp, .destroy_fn=sg_user_destroy_comp, .cleanup_fn=sg_user_cleanup_comp,
    .static_buf_size=sizeof(struct sg_user_glob) /*8ul*/ , .required_locks=sg_user_lock_names,
    .status=&sg_user_status };
// comp_info
// file globals.c line 44
static struct sg_comp_info comp_info[11l] = { { .init_comp=&sg_error_init, .glob_ofs=(unsigned long int)0 },
    { .init_comp=&sg_cpu_init, .glob_ofs=(unsigned long int)0 },
    { .init_comp=&sg_disk_init, .glob_ofs=(unsigned long int)0 },
    { .init_comp=&sg_load_init, .glob_ofs=(unsigned long int)0 },
    { .init_comp=&sg_mem_init, .glob_ofs=(unsigned long int)0 },
    { .init_comp=&sg_network_init, .glob_ofs=(unsigned long int)0 },
    { .init_comp=&sg_os_init, .glob_ofs=(unsigned long int)0 },
    { .init_comp=&sg_page_init, .glob_ofs=(unsigned long int)0 },
    { .init_comp=&sg_process_init, .glob_ofs=(unsigned long int)0 },
    { .init_comp=&sg_swap_init, .glob_ofs=(unsigned long int)0 },
    { .init_comp=&sg_user_init, .glob_ofs=(unsigned long int)0 } };
// cond
// file diff_stats.c line 38
union anonymous_9 cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// conditionMet
// file diff_stats.c line 36
signed int conditionMet = 0;
// empty_ap
// file error.c line 50
static void **empty_ap;
// glob_key
// file globals.c line 71
static unsigned int glob_key;
// glob_lock
// file globals.c line 93
static struct sg_named_mutex glob_lock = { .name="statgrab", .mutex={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } } };
// glob_size
// file globals.c line 62
static unsigned long int glob_size = (unsigned long int)0;
// initialized
// file globals.c line 97
static unsigned int initialized = (unsigned int)0;
// mutex
// file diff_stats.c line 42
union anonymous_13 mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// network_io_rx
// file network_stats.c line 150
static struct re_pattern_buffer network_io_rx;
// num_required_locks
// file globals.c line 96
static unsigned long int num_required_locks = (unsigned long int)0;
// num_valid_file_systems
// file disk_stats.c line 112
static unsigned long int num_valid_file_systems = (unsigned long int)0;
// once_control
// file globals.c line 75
static signed int once_control = 0;
// opt_def
// file diff_stats.c line 45
struct opt_def opt_def[7l] = { { .optchr=(char)104, .opttype=(enum opt_type)0, .optarg={ .s=(signed long int)0 } },
    { .optchr=(char)108, .opttype=(enum opt_type)0, .optarg={ .s=(signed long int)0 } },
    { .optchr=(char)114, .opttype=(enum opt_type)4, .optarg={ .s=(signed long int)0 } },
    { .optchr=(char)110, .opttype=(enum opt_type)3, .optarg={ .s=(signed long int)-1 } },
    { .optchr=(char)109, .opttype=(enum opt_type)3, .optarg={ .s=(signed long int)1 } },
    { .optchr=(char)115, .opttype=(enum opt_type)1, .optarg={ .s=(signed long int)0 } },
    { .optchr=(char)0, .opttype=(enum opt_type)0, .optarg={ .s=(signed long int)0 } } };
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// pre_init_errs
// file error.c line 45
static struct sg_error_glob pre_init_errs = { .error=(enum anonymous_4)SG_ERROR_NONE, .errno_value=0,
    .error_arg={ (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
// required_locks
// file globals.c line 95
static struct sg_named_mutex *required_locks = (struct sg_named_mutex *)(void *)0;
// sg_cpu_glob_id
// file cpu_stats.c line 55
static unsigned int sg_cpu_glob_id;
// sg_cpu_percents_vector_init_info
// file cpu_stats.c line 434
struct sg_vector_init_info sg_cpu_percents_vector_init_info = { .item_size=sizeof(struct anonymous_25) /*56ul*/ , .init_fn=(void (*)(void *))(void *)0,
    .copy_fn=(enum anonymous_4 (*)(const void *, void *))(void *)0,
    .compute_diff_fn=(enum anonymous_4 (*)(const void *, void *))(void *)0,
    .compare_fn=(signed int (*)(const void *, const void *))(void *)0,
    .destroy_fn=(void (*)(void *))(void *)0 };
// sg_cpu_stats_vector_init_info
// file cpu_stats.c line 371
struct sg_vector_init_info sg_cpu_stats_vector_init_info = { .item_size=sizeof(struct anonymous_15) /*112ul*/ , .init_fn=(void (*)(void *))(void *)0,
    .copy_fn=(enum anonymous_4 (*)(const void *, void *))(void *)0,
    .compute_diff_fn=(enum anonymous_4 (*)(const void *, void *))(void *)0,
    .compare_fn=(signed int (*)(const void *, const void *))(void *)0,
    .destroy_fn=(void (*)(void *))(void *)0 };
// sg_disk_glob_id
// file disk_stats.c line 699
static unsigned int sg_disk_glob_id;
// sg_disk_io_stats_vector_init_info
// file disk_stats.c line 246
struct sg_vector_init_info sg_disk_io_stats_vector_init_info;
// sg_disk_io_stats_vector_init_info
// file disk_stats.c line 246
struct sg_vector_init_info sg_disk_io_stats_vector_init_info = { .item_size=sizeof(struct anonymous_12) /*32ul*/ , .init_fn=(void (*)(void *))sg_disk_io_stats_item_init,
    .copy_fn=(enum anonymous_4 (*)(const void *, void *))sg_disk_io_stats_item_copy,
    .compute_diff_fn=(enum anonymous_4 (*)(const void *, void *))sg_disk_io_stats_item_compute_diff,
    .compare_fn=(signed int (*)(const void *, const void *))sg_disk_io_stats_item_compare,
    .destroy_fn=(void (*)(void *))sg_disk_io_stats_item_destroy };
// sg_error_glob_id
// file error.c line 48
static unsigned int sg_error_glob_id;
// sg_fs_stats_vector_init_info
// file disk_stats.c line 245
struct sg_vector_init_info sg_fs_stats_vector_init_info;
// sg_fs_stats_vector_init_info
// file disk_stats.c line 245
struct sg_vector_init_info sg_fs_stats_vector_init_info = { .item_size=sizeof(struct anonymous_11) /*160ul*/ , .init_fn=(void (*)(void *))sg_fs_stats_item_init,
    .copy_fn=(enum anonymous_4 (*)(const void *, void *))sg_fs_stats_item_copy,
    .compute_diff_fn=(enum anonymous_4 (*)(const void *, void *))sg_fs_stats_item_compute_diff,
    .compare_fn=(signed int (*)(const void *, const void *))sg_fs_stats_item_compare,
    .destroy_fn=(void (*)(void *))sg_fs_stats_item_destroy };
// sg_load_glob_id
// file load_stats.c line 108
static unsigned int sg_load_glob_id;
// sg_load_stats_vector_init_info
// file load_stats.c line 110
struct sg_vector_init_info sg_load_stats_vector_init_info = { .item_size=sizeof(struct anonymous_17) /*32ul*/ , .init_fn=(void (*)(void *))(void *)0,
    .copy_fn=(enum anonymous_4 (*)(const void *, void *))(void *)0,
    .compute_diff_fn=(enum anonymous_4 (*)(const void *, void *))(void *)0,
    .compare_fn=(signed int (*)(const void *, const void *))(void *)0,
    .destroy_fn=(void (*)(void *))(void *)0 };
// sg_mem_glob_id
// file memory_stats.c line 28
static unsigned int sg_mem_glob_id;
// sg_mem_stats_vector_init_info
// file memory_stats.c line 402
struct sg_vector_init_info sg_mem_stats_vector_init_info = { .item_size=sizeof(struct anonymous_16) /*40ul*/ , .init_fn=(void (*)(void *))(void *)0,
    .copy_fn=(enum anonymous_4 (*)(const void *, void *))(void *)0,
    .compute_diff_fn=(enum anonymous_4 (*)(const void *, void *))(void *)0,
    .compare_fn=(signed int (*)(const void *, const void *))(void *)0,
    .destroy_fn=(void (*)(void *))(void *)0 };
// sg_network_glob_id
// file network_stats.c line 147
static unsigned int sg_network_glob_id;
// sg_network_iface_stats_vector_init_info
// file network_stats.c line 136
struct sg_vector_init_info sg_network_iface_stats_vector_init_info;
// sg_network_iface_stats_vector_init_info
// file network_stats.c line 136
struct sg_vector_init_info sg_network_iface_stats_vector_init_info = { .item_size=sizeof(struct anonymous_20) /*40ul*/ , .init_fn=(void (*)(void *))sg_network_iface_stats_item_init,
    .copy_fn=(enum anonymous_4 (*)(const void *, void *))sg_network_iface_stats_item_copy,
    .compute_diff_fn=(enum anonymous_4 (*)(const void *, void *))(void *)0,
    .compare_fn=(signed int (*)(const void *, const void *))(void *)0,
    .destroy_fn=(void (*)(void *))sg_network_iface_stats_item_destroy };
// sg_network_io_stats_vector_init_info
// file network_stats.c line 135
struct sg_vector_init_info sg_network_io_stats_vector_init_info;
// sg_network_io_stats_vector_init_info
// file network_stats.c line 135
struct sg_vector_init_info sg_network_io_stats_vector_init_info = { .item_size=sizeof(struct anonymous_21) /*72ul*/ , .init_fn=(void (*)(void *))sg_network_io_stats_item_init,
    .copy_fn=(enum anonymous_4 (*)(const void *, void *))sg_network_io_stats_item_copy,
    .compute_diff_fn=(enum anonymous_4 (*)(const void *, void *))sg_network_io_stats_item_compute_diff,
    .compare_fn=(signed int (*)(const void *, const void *))sg_network_io_stats_item_compare,
    .destroy_fn=(void (*)(void *))sg_network_io_stats_item_destroy };
// sg_os_glob_id
// file os_info.c line 598
static unsigned int sg_os_glob_id;
// sg_os_stats_vector_init_info
// file os_info.c line 627
struct sg_vector_init_info sg_os_stats_vector_init_info;
// sg_os_stats_vector_init_info
// file os_info.c line 627
struct sg_vector_init_info sg_os_stats_vector_init_info = { .item_size=sizeof(struct anonymous_3) /*72ul*/ , .init_fn=(void (*)(void *))sg_os_stats_item_init,
    .copy_fn=(enum anonymous_4 (*)(const void *, void *))(void *)0,
    .compute_diff_fn=(enum anonymous_4 (*)(const void *, void *))(void *)0,
    .compare_fn=(signed int (*)(const void *, const void *))(void *)0,
    .destroy_fn=(void (*)(void *))sg_os_stats_item_destroy };
// sg_page_glob_id
// file page_stats.c line 234
static unsigned int sg_page_glob_id;
// sg_page_stats_vector_init_info
// file page_stats.c line 237
struct sg_vector_init_info sg_page_stats_vector_init_info = { .item_size=sizeof(struct anonymous_5) /*24ul*/ , .init_fn=(void (*)(void *))(void *)0,
    .copy_fn=(enum anonymous_4 (*)(const void *, void *))(void *)0,
    .compute_diff_fn=(enum anonymous_4 (*)(const void *, void *))(void *)0,
    .compare_fn=(signed int (*)(const void *, const void *))(void *)0,
    .destroy_fn=(void (*)(void *))(void *)0 };
// sg_process_count_vector_init_info
// file process_stats.c line 110
struct sg_vector_init_info sg_process_count_vector_init_info = { .item_size=sizeof(struct anonymous_22) /*56ul*/ , .init_fn=(void (*)(void *))(void *)0,
    .copy_fn=(enum anonymous_4 (*)(const void *, void *))(void *)0,
    .compute_diff_fn=(enum anonymous_4 (*)(const void *, void *))(void *)0,
    .compare_fn=(signed int (*)(const void *, const void *))(void *)0,
    .destroy_fn=(void (*)(void *))(void *)0 };
// sg_process_glob_id
// file process_stats.c line 118
static unsigned int sg_process_glob_id;
// sg_process_stats_vector_init_info
// file process_stats.c line 109
struct sg_vector_init_info sg_process_stats_vector_init_info;
// sg_process_stats_vector_init_info
// file process_stats.c line 109
struct sg_vector_init_info sg_process_stats_vector_init_info = { .item_size=sizeof(struct anonymous_7) /*128ul*/ , .init_fn=(void (*)(void *))sg_process_stats_item_init,
    .copy_fn=(enum anonymous_4 (*)(const void *, void *))(void *)0,
    .compute_diff_fn=(enum anonymous_4 (*)(const void *, void *))(void *)0,
    .compare_fn=(signed int (*)(const void *, const void *))(void *)0,
    .destroy_fn=(void (*)(void *))sg_process_stats_item_destroy };
// sg_swap_glob_id
// file swap_stats.c line 28
static unsigned int sg_swap_glob_id;
// sg_swap_stats_vector_init_info
// file swap_stats.c line 378
struct sg_vector_init_info sg_swap_stats_vector_init_info = { .item_size=sizeof(struct anonymous_19) /*32ul*/ , .init_fn=(void (*)(void *))(void *)0,
    .copy_fn=(enum anonymous_4 (*)(const void *, void *))(void *)0,
    .compute_diff_fn=(enum anonymous_4 (*)(const void *, void *))(void *)0,
    .compare_fn=(signed int (*)(const void *, const void *))(void *)0,
    .destroy_fn=(void (*)(void *))(void *)0 };
// sg_user_glob_id
// file user_stats.c line 360
static unsigned int sg_user_glob_id;
// sg_user_stats_vector_init_info
// file user_stats.c line 67
struct sg_vector_init_info sg_user_stats_vector_init_info;
// sg_user_stats_vector_init_info
// file user_stats.c line 67
struct sg_vector_init_info sg_user_stats_vector_init_info = { .item_size=sizeof(struct anonymous_18) /*64ul*/ , .init_fn=(void (*)(void *))sg_user_stats_item_init,
    .copy_fn=(enum anonymous_4 (*)(const void *, void *))(void *)0,
    .compute_diff_fn=(enum anonymous_4 (*)(const void *, void *))(void *)0,
    .compare_fn=(signed int (*)(const void *, const void *))(void *)0,
    .destroy_fn=(void (*)(void *))sg_user_stats_item_destroy };
// statgrab_test_funcs
// file routines.c line 37
static struct statgrab_testfuncs statgrab_test_funcs[12l];
// statgrab_test_funcs
// file routines.c line 37
static struct statgrab_testfuncs statgrab_test_funcs[12l] = { { .stat_name="host_info", .full_name="sg_get_host_info", .full_fn=(void * (*)(unsigned long int *))sg_get_host_info,
    .diff_name=(const char *)(void *)0,
    .diff_fn=(void * (*)(unsigned long int *))(void *)0, .needed=(unsigned int)0,
    .succeeded=(unsigned int)0, .done=(unsigned int)0 },
    { .stat_name="cpu_stats", .full_name="sg_get_cpu_stats", .full_fn=(void * (*)(unsigned long int *))sg_get_cpu_stats,
    .diff_name="sg_get_cpu_stats_diff",
    .diff_fn=(void * (*)(unsigned long int *))sg_get_cpu_stats_diff, .needed=(unsigned int)0,
    .succeeded=(unsigned int)0, .done=(unsigned int)0 },
    { .stat_name="mem_stats", .full_name="sg_get_mem_stats", .full_fn=(void * (*)(unsigned long int *))sg_get_mem_stats,
    .diff_name=(const char *)(void *)0,
    .diff_fn=(void * (*)(unsigned long int *))(void *)0, .needed=(unsigned int)0,
    .succeeded=(unsigned int)0, .done=(unsigned int)0 },
    { .stat_name="load_stats", .full_name="sg_get_load_stats", .full_fn=(void * (*)(unsigned long int *))sg_get_load_stats,
    .diff_name=(const char *)(void *)0,
    .diff_fn=(void * (*)(unsigned long int *))(void *)0, .needed=(unsigned int)0,
    .succeeded=(unsigned int)0, .done=(unsigned int)0 },
    { .stat_name="user_stats", .full_name="sg_get_user_stats", .full_fn=(void * (*)(unsigned long int *))sg_get_user_stats,
    .diff_name=(const char *)(void *)0,
    .diff_fn=(void * (*)(unsigned long int *))(void *)0, .needed=(unsigned int)0,
    .succeeded=(unsigned int)0, .done=(unsigned int)0 },
    { .stat_name="swap_stats", .full_name="sg_get_swap_stats", .full_fn=(void * (*)(unsigned long int *))sg_get_swap_stats,
    .diff_name=(const char *)(void *)0,
    .diff_fn=(void * (*)(unsigned long int *))(void *)0, .needed=(unsigned int)0,
    .succeeded=(unsigned int)0, .done=(unsigned int)0 },
    { .stat_name="fs_stats", .full_name="sg_get_fs_stats", .full_fn=(void * (*)(unsigned long int *))sg_get_fs_stats,
    .diff_name="sg_get_fs_stats_diff",
    .diff_fn=(void * (*)(unsigned long int *))sg_get_fs_stats_diff, .needed=(unsigned int)0,
    .succeeded=(unsigned int)0, .done=(unsigned int)0 },
    { .stat_name="disk_io_stats", .full_name="sg_get_disk_io_stats", .full_fn=(void * (*)(unsigned long int *))sg_get_disk_io_stats,
    .diff_name="sg_get_disk_io_stats_diff",
    .diff_fn=(void * (*)(unsigned long int *))sg_get_disk_io_stats_diff,
    .needed=(unsigned int)0,
    .succeeded=(unsigned int)0, .done=(unsigned int)0 },
    { .stat_name="network_iface_stats", .full_name="sg_get_network_iface_stats", .full_fn=(void * (*)(unsigned long int *))sg_get_network_iface_stats,
    .diff_name=(const char *)(void *)0,
    .diff_fn=(void * (*)(unsigned long int *))(void *)0, .needed=(unsigned int)0,
    .succeeded=(unsigned int)0, .done=(unsigned int)0 },
    { .stat_name="network_io_stats", .full_name="sg_get_network_io_stats", .full_fn=(void * (*)(unsigned long int *))sg_get_network_io_stats,
    .diff_name="sg_get_network_io_stats_diff",
    .diff_fn=(void * (*)(unsigned long int *))sg_get_network_io_stats_diff,
    .needed=(unsigned int)0,
    .succeeded=(unsigned int)0, .done=(unsigned int)0 },
    { .stat_name="page_stats", .full_name="sg_get_page_stats", .full_fn=(void * (*)(unsigned long int *))sg_get_page_stats,
    .diff_name="sg_get_page_stats_diff",
    .diff_fn=(void * (*)(unsigned long int *))sg_get_page_stats_diff,
    .needed=(unsigned int)0,
    .succeeded=(unsigned int)0, .done=(unsigned int)0 },
    { .stat_name="process_stats", .full_name="sg_get_process_stats", .full_fn=(void * (*)(unsigned long int *))sg_get_process_stats,
    .diff_name=(const char *)(void *)0,
    .diff_fn=(void * (*)(unsigned long int *))(void *)0, .needed=(unsigned int)0,
    .succeeded=(unsigned int)0, .done=(unsigned int)0 } };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// sys_page_size
// file tools.h line 525
static signed long int sys_page_size;
// sys_page_size_link1
// file tools.h line 525
static signed long int sys_page_size_link1;
// sys_page_size_link2
// file tools.h line 525
static signed long int sys_page_size_link2;
// test_counter
// file diff_stats.c line 37
unsigned long int test_counter = (unsigned long int)0;
// valid_file_systems
// file disk_stats.c line 113
static char **valid_file_systems = (char **)(void *)0;

// add_pid_to_pids_in_proc_dir
// file process_stats.c line 185
static struct pids_in_proc_dir_t * add_pid_to_pids_in_proc_dir(signed int pid, struct pids_in_proc_dir_t *pipd)
{
  /* assertion pipd != ((void *)0) */
  assert(pipd != (struct pids_in_proc_dir_t *)(void *)0);
  /* assertion ((void *)0) == pipd->next */
  assert((struct pids_in_proc_dir_t *)(void *)0 == pipd->next);
  if(!((unsigned long int)sys_page_size_link1 >= (1ul + pipd->nitems) * 4ul + 16ul))
  {
    pipd->next=alloc_pids_in_proc_dir();
    if(pipd->next == ((struct pids_in_proc_dir_t *)NULL))
      return (struct pids_in_proc_dir_t *)(void *)0;

    pipd = pipd->next;
  }

  unsigned long int tmp_post_1 = pipd->nitems;
  pipd->nitems = pipd->nitems + 1ul;
  pipd->items[(signed long int)tmp_post_1] = pid;
  return pipd;
}

// adjust_procname_cmndline
// file process_stats.c line 253
static char * adjust_procname_cmndline(char *proctitle, unsigned long int len)
{
  char *p;
  char *pt;
  if(len >= 9ul)
    memcpy((void *)&p, (const void *)proctitle, sizeof(char *) /*8ul*/ );

  else
    p = (proctitle - (signed long int)len) - (signed long int)1;
  if(len >= (unsigned long int)(p - proctitle) && !(len == 0ul))
  {
    pt = p;
    len = len - (unsigned long int)(p - proctitle);
  }

  else
  {
    p = proctitle;
    pt = p;
  }
  char *tmp_post_1;
  while(len == 0ul || !(len == 0ul) && !(p >= pt + (signed long int)len))
  {
    if((signed int)p[1l] == 0)
      break;

    if((signed int)*p == 0)
    {
      tmp_post_1 = p;
      p = p + 1l;
      *tmp_post_1 = (char)32;
    }

    else
    {
      unsigned long int return_value_strlen_2;
      return_value_strlen_2=strlen(p);
      p = p + (signed long int)return_value_strlen_2;
    }
  }
  if(!(len == 0ul))
    pt[(signed long int)len] = (char)0;

  else
    *p = (char)0;
  return pt;
}

// alloc_pids_in_proc_dir
// file process_stats.c line 149
static struct pids_in_proc_dir_t * alloc_pids_in_proc_dir(void)
{
  struct pids_in_proc_dir_t *pipd;
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)sys_page_size_link1);
  pipd = (struct pids_in_proc_dir_t *)return_value_malloc_1;
  if(!(pipd == ((struct pids_in_proc_dir_t *)NULL)))
  {
    pipd->nitems = (unsigned long int)0;
    pipd->next = (struct pids_in_proc_dir_t *)(void *)0;
  }

  return pipd;
}

// cmp_named_locks
// file globals.c line 100
static signed int cmp_named_locks(const void *va, const void *vb)
{
  struct sg_named_mutex *a = (struct sg_named_mutex *)va;
  struct sg_named_mutex *b = (struct sg_named_mutex *)vb;
  /* assertion a->name */
  assert(a->name != ((const char *)NULL));
  /* assertion b->name */
  assert(b->name != ((const char *)NULL));
  signed int return_value_strcmp_1;
  return_value_strcmp_1=strcmp(a->name, b->name);
  return return_value_strcmp_1;
}

// cmp_valid_fs
// file disk_stats.c line 249
static signed int cmp_valid_fs(const void *va, const void *vb)
{
  const char *a = *((char * const *)va);
  const char *b = *((char * const *)vb);
  signed int return_value_strcasecmp_1;
  if(!(a == ((const char *)NULL)) && !(b == ((const char *)NULL)))
  {
    return_value_strcasecmp_1=strcasecmp(a, b);
    return return_value_strcasecmp_1;
  }

  else
    if(b == ((const char *)NULL) && !(a == ((const char *)NULL)))
      return -1;

    else
      if(a == ((const char *)NULL) && !(b == ((const char *)NULL)))
        return 1;

      else
        return 0;
}

// counter_diff
// file cpu_stats.c line 376
static unsigned long long int counter_diff(unsigned long long int new, unsigned long long int old)
{
  return new - old;
}

// die
// file ../../tests/testlib/testlib.h line 54
void die(signed int error, const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  err_doit(1, error, fmt, ap);
  ap = ((void **)NULL);
  exit(1);
}

// done_func
// file ../../tests/testlib/testlib.h line 49
void done_func(unsigned long int func_index, signed int succeeded)
{
  if(func_index >= 12ul)
  {
    fprintf(stderr, "done_func: index out of range: %lu\n", (unsigned long int)func_index);
    exit(1);
  }

  statgrab_test_funcs[(signed long int)func_index].done = statgrab_test_funcs[(signed long int)func_index].done + 1u;
  if(!(succeeded == 0))
    statgrab_test_funcs[(signed long int)func_index].succeeded = statgrab_test_funcs[(signed long int)func_index].succeeded + 1u;

}

// err_doit
// file err.c line 80
static void err_doit(signed int errnoflag, signed int error, const char *fmt, void **ap)
{
  char buf[4096l];
  signed int printed;
  printed=vsnprintf(buf, sizeof(char [4096l]) /*4096ul*/ , fmt, ap);
  char *return_value_strerror_1;
  if(!(errnoflag == 0))
  {
    return_value_strerror_1=strerror(error);
    snprintf(buf + (signed long int)printed, sizeof(char [4096l]) /*4096ul*/  - (unsigned long int)printed, ": %s", return_value_strerror_1);
  }

  fflush(stderr);
  fputs(buf, stderr);
  fputs("\n", stderr);
  fflush((struct _IO_FILE *)(void *)0);
}

// ethtool_cmd_speed
// file /usr/include/linux/ethtool.h line 121
static inline unsigned int ethtool_cmd_speed(struct ethtool_cmd *ep)
{
  return (unsigned int)((signed int)ep->speed_hi << 16 | (signed int)ep->speed);
}

// find_diff_func
// file routines.c line 74
static unsigned long int find_diff_func(const char *func_name, unsigned long int namelen)
{
  unsigned long int idx = (unsigned long int)0;
  for( ; !(idx >= 12ul); idx = idx + 1ul)
    if(!(statgrab_test_funcs[(signed long int)idx].diff_name == ((const char *)NULL)))
    {
      signed int return_value_strncmp_1;
      return_value_strncmp_1=strncmp(func_name, statgrab_test_funcs[(signed long int)idx].diff_name, namelen);
      if(return_value_strncmp_1 == 0)
        break;

    }

  return idx;
}

// find_full_func
// file routines.c line 62
static unsigned long int find_full_func(const char *func_name, unsigned long int namelen)
{
  unsigned long int idx = (unsigned long int)0;
  for( ; !(idx >= 12ul); idx = idx + 1ul)
  {
    signed int return_value_strncmp_1;
    return_value_strncmp_1=strncmp(func_name, statgrab_test_funcs[(signed long int)idx].full_name, namelen);
    if(return_value_strncmp_1 == 0)
      break;

  }
  return idx;
}

// free_pids_in_proc_dir
// file process_stats.c line 168
static struct pids_in_proc_dir_t * free_pids_in_proc_dir(struct pids_in_proc_dir_t *pipd, _Bool include_children)
{
  struct pids_in_proc_dir_t *next = (struct pids_in_proc_dir_t *)(void *)0;
  while(!(pipd == ((struct pids_in_proc_dir_t *)NULL)))
  {
    next = pipd->next;
    free((void *)pipd);
    if(!(include_children == (_Bool)0))
      pipd = next;

    else
      pipd = (struct pids_in_proc_dir_t *)(void *)0;
  }
  return next;
}

// funcnames_to_indices
// file ../../tests/testlib/testlib.h line 43
unsigned long int funcnames_to_indices(const char *name_list, unsigned long int **indices, signed int full)
{
  unsigned long int i = (unsigned long int)0;
  const char *name_start;
  _Bool tmp_if_expr_1;
  if(indices == ((unsigned long int **)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = *indices != (unsigned long int *)(void *)0 ? (_Bool)1 : (_Bool)0;
  unsigned long int tmp_if_expr_5;
  unsigned long int return_value_find_full_func_3;
  unsigned long int return_value_find_diff_func_4;
  unsigned long int tmp_post_6;
  unsigned long int tmp_if_expr_9;
  unsigned long int return_value_find_full_func_7;
  unsigned long int return_value_find_diff_func_8;
  unsigned long int tmp_post_10;
  if(tmp_if_expr_1)
    return (unsigned long int)0;

  else
  {
    void *return_value_calloc_2;
    return_value_calloc_2=calloc(sizeof(struct statgrab_testfuncs [12l]) /*672ul*/  / sizeof(struct statgrab_testfuncs) /*56ul*/ , sizeof(unsigned long int *) /*8ul*/ );
    *indices = (unsigned long int *)return_value_calloc_2;
    if(*indices == ((unsigned long int *)NULL))
      return (unsigned long int)0;

    else
    {
      name_start = name_list;
      for( ; !(*name_list == 0); name_list = name_list + 1l)
        if((signed int)*name_list == 44)
        {
          unsigned long int idx;
          if(!(full == 0))
          {
            return_value_find_full_func_3=find_full_func(name_start, (unsigned long int)(name_list - name_start));
            tmp_if_expr_5 = return_value_find_full_func_3;
          }

          else
          {
            return_value_find_diff_func_4=find_diff_func(name_start, (unsigned long int)(name_list - name_start));
            tmp_if_expr_5 = return_value_find_diff_func_4;
          }
          idx = tmp_if_expr_5;
          if(idx >= 12ul)
          {
            fprintf(stderr, "invalid function name for testing: %s\n", name_start);
            exit(255);
          }

          tmp_post_6 = i;
          i = i + 1ul;
          (*indices)[(signed long int)tmp_post_6] = idx;
          name_start = name_list + (signed long int)1;
        }

      if(!(name_start >= name_list))
      {
        unsigned long int funcnames_to_indices__1__2__idx;
        if(!(full == 0))
        {
          return_value_find_full_func_7=find_full_func(name_start, (unsigned long int)(name_list - name_start));
          tmp_if_expr_9 = return_value_find_full_func_7;
        }

        else
        {
          return_value_find_diff_func_8=find_diff_func(name_start, (unsigned long int)(name_list - name_start));
          tmp_if_expr_9 = return_value_find_diff_func_8;
        }
        funcnames_to_indices__1__2__idx = tmp_if_expr_9;
        if(funcnames_to_indices__1__2__idx >= 12ul)
        {
          fprintf(stderr, "invalid function name for testing: %s\n", name_start);
          exit(255);
        }

        tmp_post_10 = i;
        i = i + 1ul;
        (*indices)[(signed long int)tmp_post_10] = funcnames_to_indices__1__2__idx;
        name_start = name_list + (signed long int)1;
      }

      return i;
    }
  }
}

// get_params
// file ../../tests/testlib/testlib.h line 76
signed int get_params(struct opt_def *opt_defs, signed int argc, char **argv)
{
  char optlst[256l] = { (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  struct opt_def *opt_def_map[256l];
  unsigned long int optlst_idx = (unsigned long int)0;
  struct opt_def *opt_l;
  signed int ch;
  memset((void *)opt_def_map, 0, sizeof(struct opt_def *[256l]) /*2048ul*/ );
  opt_l = opt_defs;
  _Bool tmp_if_expr_1;
  unsigned long int tmp_post_2;
  unsigned long int tmp_post_3;
  do
  {
    if(!(opt_l == ((struct opt_def *)NULL)))
      tmp_if_expr_1 = opt_l->optchr != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    if(!(opt_def_map[(signed long int)(unsigned int)opt_l->optchr] == ((struct opt_def *)NULL)))
      die(22, "duplicate option def for '%c'", opt_l->optchr);

    opt_def_map[(signed long int)(unsigned int)opt_l->optchr] = opt_l;
    tmp_post_2 = optlst_idx;
    optlst_idx = optlst_idx + 1ul;
    optlst[(signed long int)tmp_post_2] = opt_l->optchr;
    if(!((signed int)opt_l->opttype == opt_flag))
    {
      tmp_post_3 = optlst_idx;
      optlst_idx = optlst_idx + 1ul;
      optlst[(signed long int)tmp_post_3] = (char)58;
    }

    opt_l = opt_l + 1l;
  }
  while((_Bool)1);
  optlst[(signed long int)optlst_idx] = (char)0;
  signed int return_value_sscanf_5;
  signed int return_value_sscanf_6;
  do
  {
    ch=getopt(argc, argv, optlst);
    if(!(ch >= 0))
      break;

    if(ch >= 256)
      die(22, "getopt error, rc = %d", ch);

    if(!(opt_def_map[(signed long int)ch] == ((struct opt_def *)NULL)))
      switch((signed int)opt_def_map[(signed long int)ch]->opttype)
      {
        case opt_flag:
        {
          opt_def_map[(signed long int)ch]->optarg.b = (_Bool)1;
          break;
        }
        case opt_bool:
        {
          unsigned int tmp;
          signed int return_value_sscanf_4;
          return_value_sscanf_4=sscanf(optarg, "%u", &tmp);
          if(!(return_value_sscanf_4 == 1))
            die(22, "getopt: invalid argument for -%c: %s", ch, optarg);

          opt_def_map[(signed long int)ch]->optarg.b = tmp != (unsigned int)0;
          break;
        }
        case opt_signed:
        {
          return_value_sscanf_5=sscanf(optarg, "%ld", &opt_def_map[(signed long int)ch]->optarg.s);
          if(!(return_value_sscanf_5 == 1))
            die(22, "getopt: invalid argument for -%c: %s", ch, optarg);

          break;
        }
        case opt_unsigned:
        {
          return_value_sscanf_6=sscanf(optarg, "%lu", &opt_def_map[(signed long int)ch]->optarg.u);
          if(!(return_value_sscanf_6 == 1))
            die(22, "getopt: invalid argument for -%c: %s", ch, optarg);

          break;
        }
        case opt_str:
          opt_def_map[(signed long int)ch]->optarg.str=strdup(optarg);
      }

    else
      return ch;
  }
  while((_Bool)1);
  return 0;
}

// get_testable_functions
// file ../../tests/testlib/testlib.h line 42
struct statgrab_testfuncs * get_testable_functions(unsigned long int *entries)
{
  if(!(entries == ((unsigned long int *)NULL)))
    *entries = sizeof(struct statgrab_testfuncs [12l]) /*672ul*/  / sizeof(struct statgrab_testfuncs) /*56ul*/ ;

  return statgrab_test_funcs;
}

// help
// file diff_stats.c line 101
void help(char *prgname)
{
  printf("%s -h|-l|-r <test list> [options]\n\t-h\tshow help\n\t-l\tlist available test functions\n\t-r\trun specified list of test calls (comma separated list\n\t\tof test functions from the list showed by -l)\n\t-n\tnumber of threads to use (must be greater or equal to\n\t\tnumber of test calls)\n\t-m\tmultiple threads/calls per function\n\t-s\tsequencial calling of test functions\n", prgname);
}

// init_valid_fs_types
// file disk_stats.c line 264
static enum anonymous_4 init_valid_fs_types(void)
{
  enum anonymous_4 errc = (enum anonymous_4)SG_ERROR_NONE;
  unsigned long int i;
  struct _IO_FILE *fh;
  const char *int_valid_fs[34l] = { "adfs", "affs", "befs", "bfs", "btrfs", "cifs", "efs", "ext2", "ext3", "ext4", "vxfs", "hfs", "hfsplus", "hpfs", "jffs", "jffs2", "jfs", "minix", "msdos", "nfs", "ntfs", "ocfs", "qnx4", "ramfs", "rootfs", "reiserfs", "sysv", "tmpfs", "v7", "udf", "ufs", "umsdos", "vfat", "xfs" };
  fh=fopen("/proc/filesystems", "r");
  char *return_value_fgets_2;
  if(!(fh == ((struct _IO_FILE *)NULL)))
  {
    struct re_pattern_buffer re;
    const char *proc_fs_list_regex = "^([[:alnum:]]+)?[[:blank:]]+([[:alnum:]]+)";
    signed int rc;
    char line[4096l];
    struct anonymous_6 pmatch[3l];
    i = (unsigned long int)0;
    num_valid_file_systems = (unsigned long int)15;
    void *return_value_calloc_1;
    return_value_calloc_1=calloc(num_valid_file_systems + (unsigned long int)1, sizeof(char *) /*8ul*/ );
    valid_file_systems = (char **)return_value_calloc_1;
    rc=regcomp(&re, proc_fs_list_regex, 1);
    if(!(rc == 0))
    {
      free((void *)valid_file_systems);
      fclose(fh);
      goto use_builtin_fs;
    }

    do
    {
      return_value_fgets_2=fgets(line, (signed int)sizeof(char [4096l]) /*4096ul*/ , fh);
      if(return_value_fgets_2 == ((char *)NULL))
        break;

      rc=regexec(&re, line, sizeof(struct anonymous_6 [3l]) /*24ul*/  / sizeof(struct anonymous_6) /*8ul*/ , pmatch, 0);
      if(rc == 0)
      {
        char *fs_name = line + (signed long int)pmatch[(signed long int)2].rm_so;
        line[(signed long int)pmatch[(signed long int)2].rm_eo] = (char)0;
        if(i >= num_valid_file_systems)
        {
          char **init_valid_fs_types__1__1__2__1__1__tmp;
          num_valid_file_systems = num_valid_file_systems + (unsigned long int)16;
          void *return_value_sg_realloc_3;
          return_value_sg_realloc_3=sg_realloc((void *)valid_file_systems, sizeof(char *) /*8ul*/  * (num_valid_file_systems + (unsigned long int)1));
          init_valid_fs_types__1__1__2__1__1__tmp = (char **)return_value_sg_realloc_3;
          if(init_valid_fs_types__1__1__2__1__1__tmp == ((char **)NULL))
          {
            regfree(&re);
            fclose(fh);
            free((void *)valid_file_systems);
            num_valid_file_systems = (unsigned long int)0;
            valid_file_systems = (char **)(void *)0;
            do
            {
              char *__errinfobuf = (char *)(void *)0;
              free((void *)__errinfobuf);
            }
            while((_Bool)0);
            enum anonymous_4 return_value_sg_get_error_4;
            return_value_sg_get_error_4=sg_get_error();
            return return_value_sg_get_error_4;
          }

          valid_file_systems = init_valid_fs_types__1__1__2__1__1__tmp;
          memset((void *)&valid_file_systems[(signed long int)i], 0, ((num_valid_file_systems + (unsigned long int)1) - i) * sizeof(char *) /*8ul*/ );
        }

        errc=sg_update_string(&valid_file_systems[(signed long int)i], fs_name);
        if(!((signed int)errc == SG_ERROR_NONE))
        {
          regfree(&re);
          fclose(fh);
          free((void *)valid_file_systems);
          num_valid_file_systems = (unsigned long int)0;
          valid_file_systems = (char **)(void *)0;
          do
          {
            char *init_valid_fs_types__1__1__2__1__2__1____errinfobuf = (char *)(void *)0;
            free((void *)init_valid_fs_types__1__1__2__1__2__1____errinfobuf);
          }
          while((_Bool)0);
          return errc;
        }

        i = i + 1ul;
      }

    }
    while((_Bool)1);
    regfree(&re);
    fclose(fh);
  }

  else
  {

  use_builtin_fs:
    ;
    void *return_value_calloc_5;
    return_value_calloc_5=calloc(num_valid_file_systems + (unsigned long int)1, sizeof(char *) /*8ul*/ );
    valid_file_systems = (char **)return_value_calloc_5;
    if(valid_file_systems == ((char **)NULL))
    {
      do
      {
        char *init_valid_fs_types__1__2__1__1____errinfobuf = (char *)(void *)0;
        sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_MALLOC, "init_valid_fs_types");
        free((void *)init_valid_fs_types__1__2__1__1____errinfobuf);
      }
      while((_Bool)0);
      return (enum anonymous_4)SG_ERROR_MALLOC;
    }

    i = (unsigned long int)0;
    for( ; !(i >= num_valid_file_systems); i = i + 1ul)
    {
      errc=sg_update_string(&valid_file_systems[(signed long int)i], int_valid_fs[(signed long int)i]);
      if(!((signed int)errc == SG_ERROR_NONE))
      {
        do
        {
          char *init_valid_fs_types__1__2__2__1__1__1____errinfobuf = (char *)(void *)0;
          free((void *)init_valid_fs_types__1__2__2__1__1__1____errinfobuf);
        }
        while((_Bool)0);
        return errc;
      }

    }
  }
  qsort((void *)valid_file_systems, num_valid_file_systems, sizeof(char *) /*8ul*/ , cmp_valid_fs);
  if(!(i >= num_valid_file_systems))
  {
    char **tmp;
    num_valid_file_systems = i;
    void *return_value_sg_realloc_6;
    return_value_sg_realloc_6=sg_realloc((void *)valid_file_systems, (num_valid_file_systems + (unsigned long int)1) * sizeof(char *) /*8ul*/ );
    tmp = (char **)return_value_sg_realloc_6;
    if(!(tmp == ((char **)NULL)))
      valid_file_systems = tmp;

  }

  return (enum anonymous_4)SG_ERROR_NONE;
}

// is_valid_fs_type
// file disk_stats.c line 644
static signed int is_valid_fs_type(const char *type)
{
  char *key;
  void *return_value_bsearch_1;
  return_value_bsearch_1=bsearch((const void *)&type, (const void *)valid_file_systems, num_valid_file_systems, sizeof(char *) /*8ul*/ , cmp_valid_fs);
  key = (char *)return_value_bsearch_1;
  return (signed int)(key != (char *)(void *)0);
}

// main
// file diff_stats.c line 114
signed int main(signed int argc, char **argv)
{
  do
  {
    (void)"libstatgrab-test";
    (void)"SGTEST_LOG_PROPERTIES";
    if(!(argc == 0))
      argv[(signed long int)0];

    else
      (char *)(void *)0;
  }
  while((_Bool)0);
  sg_init(1);
  signed int return_value_get_params_1;
  return_value_get_params_1=get_params(opt_def, argc, argv);
  if(!(return_value_get_params_1 == 0))
  {
    help(argv[(signed long int)0]);
    return 1;
  }

  else
  {
    if(!(opt_def[0l].optarg.b == (_Bool)0))
    {
      help(argv[(signed long int)0]);
      return 0;
    }

    else
      if(!(opt_def[1l].optarg.b == (_Bool)0))
      {
        print_testable_functions(0);
        return 0;
      }

      else
        if(!(opt_def[2l].optarg.str == ((char *)NULL)))
        {
          unsigned long int numthreads;
          unsigned long int i;
          unsigned long int *test_routines = (unsigned long int *)(void *)0;
          unsigned long int nfuncs;
          unsigned long int ok;
          struct statgrab_testfuncs *sg_testfuncs;
          sg_testfuncs=get_testable_functions(&nfuncs);
          unsigned long int entries;
          entries=funcnames_to_indices(opt_def[(signed long int)2].optarg.str, &test_routines, 0);
          unsigned long int *threadid = (unsigned long int *)(void *)0;
          signed int rc;
          signed int errors = 0;
          if(entries == 0ul)
          {
            die(3, "no functions to test");
            return 255;
          }

          if(!(opt_def[3l].optarg.s == -1l))
          {
            numthreads = opt_def[(signed long int)3].optarg.u;
            if(!(numthreads >= entries))
              die(34, "%s %s - to small number for thread count", argv[(signed long int)0], argv[(signed long int)2]);

          }

          else
            if(opt_def[4l].optarg.u >= 2ul)
              numthreads = entries * opt_def[(signed long int)4].optarg.u;

            else
              numthreads = entries;
          void *return_value_calloc_2;
          return_value_calloc_2=calloc(sizeof(unsigned long int) /*8ul*/ , numthreads);
          threadid = (unsigned long int *)return_value_calloc_2;
          if(threadid == ((unsigned long int *)NULL))
            die(12, "%s", argv[(signed long int)0]);

          rc=pthread_mutex_lock(&mutex);
          prove_libcall("pthread_mutex_lock", rc);
          i = (unsigned long int)0;
          for( ; !(i >= numthreads); i = i + 1ul)
          {
            mark_func(test_routines[(signed long int)(i % entries)]);
            rc=pthread_create(&threadid[(signed long int)i], (const union pthread_attr_t *)(void *)0, threadfunc, (void *)&test_routines[(signed long int)(i % entries)]);
            prove_libcall("pthread_create", rc);
          }
          rc=pthread_mutex_unlock(&mutex);
          prove_libcall("pthread_mutex_unlock", rc);
          while(!(test_counter >= numthreads))
            sched_yield();
          rc=pthread_mutex_lock(&mutex);
          prove_libcall("pthread_mutex_lock", rc);
          conditionMet = 1;
          rc=pthread_cond_broadcast(&cond);
          prove_libcall("pthread_cond_broadcast", rc);
          rc=pthread_mutex_unlock(&mutex);
          prove_libcall("pthread_mutex_unlock", rc);
          do
          {
            struct timespec ts = { .tv_sec=(signed long int)1, .tv_nsec=(signed long int)0 };
            struct timeval tv;
            gettimeofday(&tv, (struct timezone *)(void *)0);
            ts.tv_sec = ts.tv_sec + tv.tv_sec;
            rc=pthread_mutex_lock(&mutex);
            prove_libcall("pthread_mutex_lock", rc);
            pthread_cond_timedwait(&cond, &mutex, &ts);
            prove_libcall("pthread_cond_timedwait", rc);
            ok=report_testable_functions(0);
            rc=pthread_mutex_unlock(&mutex);
            prove_libcall("pthread_mutex_unlock", rc);
            if(!(ok == nfuncs))
              printf("---------------\n");

            fflush(stdout);
          }
          while(!(ok == nfuncs));
          i = (unsigned long int)0;
          for( ; !(i >= numthreads); i = i + 1ul)
          {
            rc=pthread_join(threadid[(signed long int)i], (void **)(void *)0);
            prove_libcall("pthread_join", rc);
          }
          pthread_cond_destroy(&cond);
          pthread_mutex_destroy(&mutex);
          i = (unsigned long int)0;
          for( ; !(i >= nfuncs); i = i + 1ul)
            errors = errors + (signed int)((sg_testfuncs + (signed long int)i)->needed - (sg_testfuncs + (signed long int)i)->succeeded);
          return errors;
        }

    help(argv[(signed long int)0]);
    return 1;
  }
}

// mark_func
// file ../../tests/testlib/testlib.h line 47
void mark_func(unsigned long int func_index)
{
  if(func_index >= 12ul)
  {
    fprintf(stderr, "mark_func: index out of range: %lu\n", (unsigned long int)func_index);
    exit(1);
  }

  statgrab_test_funcs[(signed long int)func_index].needed = statgrab_test_funcs[(signed long int)func_index].needed + 1u;
}

// print_testable_functions
// file ../../tests/testlib/testlib.h line 44
void print_testable_functions(signed int full)
{
  unsigned long int i = (unsigned long int)0;
  const char *tmp_if_expr_1;
  for( ; !(i >= 12ul); i = i + 1ul)
  {
    if(full == 0)
    {
      if(statgrab_test_funcs[(signed long int)i].diff_name == ((const char *)NULL))
        goto __CPROVER_DUMP_L5;

    }

    if(!(full == 0))
      tmp_if_expr_1 = statgrab_test_funcs[(signed long int)i].full_name;

    else
      tmp_if_expr_1 = statgrab_test_funcs[(signed long int)i].diff_name;
    printf("%s\n", tmp_if_expr_1);

  __CPROVER_DUMP_L5:
    ;
  }
}

// prove_libcall
// file diff_stats.c line 28
static void prove_libcall(char *libcall, signed int err_code)
{
  if(!(err_code == 0))
    die(err_code, "invoking %s failed", libcall);

}

// report_testable_functions
// file ../../tests/testlib/testlib.h line 45
unsigned long int report_testable_functions(signed int full)
{
  unsigned long int i;
  unsigned long int ok = (unsigned long int)0;
  i = (unsigned long int)0;
  const char *tmp_if_expr_1;
  for( ; !(i >= 12ul); i = i + 1ul)
  {
    if(!(statgrab_test_funcs[(signed long int)i].needed == 0u))
    {
      if(!(full == 0))
        tmp_if_expr_1 = statgrab_test_funcs[(signed long int)i].full_name;

      else
        tmp_if_expr_1 = statgrab_test_funcs[(signed long int)i].diff_name;
      printf("%s (%s) - needed: %d, succeeded: %d, done: %d\n", statgrab_test_funcs[(signed long int)i].stat_name, tmp_if_expr_1, statgrab_test_funcs[(signed long int)i].needed, statgrab_test_funcs[(signed long int)i].succeeded, statgrab_test_funcs[(signed long int)i].done);
    }

    if(statgrab_test_funcs[(signed long int)i].needed == statgrab_test_funcs[(signed long int)i].done)
      ok = ok + 1ul;

  }
  return ok;
}

// run_func
// file ../../tests/testlib/testlib.h line 48
signed int run_func(unsigned long int func_index, signed int full)
{
  unsigned long int entries;
  void *stats;
  if(func_index >= 12ul)
  {
    fprintf(stderr, "run_func: index out of range: %lu\n", (unsigned long int)func_index);
    exit(1);
  }

  void *tmp_if_expr_1;
  void *return_value;
  void *return_value_1;
  if(!(full == 0))
  {
    return_value=statgrab_test_funcs[(signed long int)func_index].full_fn(&entries);
    tmp_if_expr_1 = return_value;
  }

  else
  {
    return_value_1=statgrab_test_funcs[(signed long int)func_index].diff_fn(&entries);
    tmp_if_expr_1 = return_value_1;
  }
  stats = tmp_if_expr_1;
  char *return_value_sg_strperror_5;
  const char *tmp_if_expr_4;
  if(stats == NULL)
  {
    struct sg_error_details err_det;
    char *errmsg = (char *)(void *)0;
    enum anonymous_4 errc;
    errc=sg_get_error_details(&err_det);
    if(!((signed int)errc == SG_ERROR_NONE))
    {
      const char *return_value_sg_str_error_2;
      return_value_sg_str_error_2=sg_str_error(errc);
      fprintf(stderr, "panic: can't get error details (%d, %s)\n", errc, return_value_sg_str_error_2);
    }

    else
    {
      return_value_sg_strperror_5=sg_strperror(&errmsg, &err_det);
      if(return_value_sg_strperror_5 == ((char *)NULL))
      {
        errc=sg_get_error();
        const char *return_value_sg_str_error_3;
        return_value_sg_str_error_3=sg_str_error(errc);
        fprintf(stderr, "panic: can't prepare error message (%d, %s)\n", errc, return_value_sg_str_error_3);
      }

      else
      {
        if(!(full == 0))
          tmp_if_expr_4 = statgrab_test_funcs[(signed long int)func_index].full_name;

        else
          tmp_if_expr_4 = statgrab_test_funcs[(signed long int)func_index].diff_name;
        fprintf(stderr, "%s: %s\n", tmp_if_expr_4, errmsg);
      }
    }
    free((void *)errmsg);
  }

  return (signed int)(stats != NULL);
}

// scan_proc_dir
// file process_stats.c line 202
static struct pids_in_proc_dir_t * scan_proc_dir(const char *path_to_proc_dir)
{
  struct __dirstream *proc_dir;
  struct dirent *dir_entry;
  struct dirent *result = (struct dirent *)(void *)0;
  unsigned long int dir_entry_size = (sizeof(struct dirent) /*280ul*/  - sizeof(char [256l]) /*256ul*/ ) + (unsigned long int)4096 + (unsigned long int)1;
  struct pids_in_proc_dir_t *cnt;
  cnt=alloc_pids_in_proc_dir();
  struct pids_in_proc_dir_t *wrk;
  signed int rc;
  if(cnt == ((struct pids_in_proc_dir_t *)NULL))
    return (struct pids_in_proc_dir_t *)(void *)0;

  else
  {
    void *return_value_calloc_1;
    return_value_calloc_1=calloc((unsigned long int)1, dir_entry_size);
    dir_entry = (struct dirent *)return_value_calloc_1;
    if(dir_entry == ((struct dirent *)NULL))
    {
      free_pids_in_proc_dir(cnt, (_Bool)1);
      return (struct pids_in_proc_dir_t *)(void *)0;
    }

    else
    {
      proc_dir=opendir(path_to_proc_dir);
      if(proc_dir == ((struct __dirstream *)NULL))
      {
        do
        {
          char *__errinfobuf = (char *)(void *)0;
          sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_OPENDIR, path_to_proc_dir);
          free((void *)__errinfobuf);
        }
        while((_Bool)0);
        free_pids_in_proc_dir(cnt, (_Bool)1);
        free((void *)dir_entry);
        return (struct pids_in_proc_dir_t *)(void *)0;
      }

      else
      {
        wrk = cnt;
        do
        {
          rc=readdir_r(proc_dir, dir_entry, &result);
          if(!(rc == 0))
            break;

          signed int pid;
          if(result == ((struct dirent *)NULL))
            break;

          signed int return_value_sscanf_2;
          return_value_sscanf_2=sscanf(dir_entry->d_name, "%d", &pid);
          if(!(return_value_sscanf_2 == 0))
          {
            wrk=add_pid_to_pids_in_proc_dir(pid, wrk);
            if(wrk == ((struct pids_in_proc_dir_t *)NULL))
            {
              free_pids_in_proc_dir(cnt, (_Bool)1);
              cnt = (struct pids_in_proc_dir_t *)(void *)0;
              break;
            }

          }

        }
        while((_Bool)1);
        if(!(rc == 0))
          do
          {
            char *scan_proc_dir__1__4__1____errinfobuf = (char *)(void *)0;
            sg_set_error_with_errno_code_fmt((enum anonymous_4)SG_ERROR_READDIR, rc, path_to_proc_dir);
            free((void *)scan_proc_dir__1__4__1____errinfobuf);
          }
          while((_Bool)0);

        free((void *)dir_entry);
        closedir(proc_dir);
        return cnt;
      }
    }
  }
}

// sg_alloc_globals
// file globals.c line 418
static void * sg_alloc_globals(void)
{
  void *glob_buf = (void *)0;
  if(!(glob_size == 0ul))
  {
    signed int rc;
    glob_buf=malloc(glob_size);
    if(glob_buf == NULL)
    {
      do
      {
        char *__errinfobuf = (char *)(void *)0;
        sg_set_error_fmt((enum anonymous_4)SG_ERROR_MALLOC, "sg_alloc_globals: malloc() failed or no components registered");
        free((void *)__errinfobuf);
      }
      while((_Bool)0);
      return (void *)0;
    }

    memset(glob_buf, 0, glob_size);
    rc=pthread_setspecific(glob_key, glob_buf);
    if(!(rc == 0))
    {
      free(glob_buf);
      glob_buf = NULL;
    }

  }

  return glob_buf;
}

// sg_clear_error
// file error.h line 27
void sg_clear_error(void)
{
  struct sg_error_glob *error_glob;
  error_glob=sg_get_error_glob();
  if(!(error_glob == ((struct sg_error_glob *)NULL)))
  {
    error_glob->error = (enum anonymous_4)SG_ERROR_NONE;
    error_glob->errno_value = 0;
    error_glob->error_arg[(signed long int)0] = (char)0;
  }

}

// sg_comp_destroy
// file globals.h line 449
enum anonymous_4 sg_comp_destroy(void)
{
  unsigned long int i = sizeof(struct sg_comp_info [11l]) /*176ul*/  / sizeof(struct sg_comp_info) /*16ul*/ ;
  sg_global_lock();
  initialized = initialized - 1u;
  enum anonymous_4 return_value_sg_global_unlock_1;
  unsigned long int tmp_post_2;
  if(!(initialized == 0u))
  {
    return_value_sg_global_unlock_1=sg_global_unlock();
    return return_value_sg_global_unlock_1;
  }

  else
  {
    glob_size = (unsigned long int)0U;
    do
    {
      tmp_post_2 = i;
      i = i - 1ul;
      if(tmp_post_2 == 0ul)
        break;

      if(!(comp_info[(signed long int)i].init_comp->destroy_fn == ((void (*)(void))NULL)))
        comp_info[(signed long int)i].init_comp->destroy_fn();

    }
    while((_Bool)1);
    i = (unsigned long int)0;
    for( ; !(i >= num_required_locks); i = i + 1ul)
      if(!(glob_lock.name == (required_locks + (signed long int)i)->name))
        pthread_mutex_destroy(&(required_locks + (signed long int)i)->mutex);

    free((void *)required_locks);
    num_required_locks = (unsigned long int)0;
    enum anonymous_4 return_value_sg_global_unlock_3;
    return_value_sg_global_unlock_3=sg_global_unlock();
    return return_value_sg_global_unlock_3;
  }
}

// sg_comp_get_tls
// file globals.h line 54
void * sg_comp_get_tls(unsigned int id)
{
  char *glob_buf;
  void *return_value_pthread_getspecific_1;
  return_value_pthread_getspecific_1=pthread_getspecific(glob_key);
  glob_buf = (char *)return_value_pthread_getspecific_1;
  void *return_value_sg_alloc_globals_2;
  if(glob_buf == ((char *)NULL))
  {
    return_value_sg_alloc_globals_2=sg_alloc_globals();
    glob_buf = (char *)return_value_sg_alloc_globals_2;
  }

  if(glob_buf == ((char *)NULL))
    return (void *)0;

  else
  {
    id = id - (((unsigned int)103 & (unsigned int)0xFF) + (((unsigned int)108 & (unsigned int)0xFF) << 8) + (((unsigned int)111 & (unsigned int)0xFF) << 16) + (((unsigned int)98 & (unsigned int)0xFF) << 24));
    if((unsigned long int)id >= 11ul)
    {
      do
      {
        char *__errinfobuf = (char *)(void *)0;
        sg_set_error_fmt((enum anonymous_4)SG_ERROR_INVALID_ARGUMENT, "sg_comp_get_tls: invalid id (%u)", id);
        free((void *)__errinfobuf);
      }
      while((_Bool)0);
      return (void *)0;
    }

    else
      return (void *)(glob_buf + (signed long int)comp_info[(signed long int)id].glob_ofs);
  }
}

// sg_comp_init
// file globals.h line 448
enum anonymous_4 sg_comp_init(signed int ignore_init_errors)
{
  unsigned long int i;
  enum anonymous_4 errc = (enum anonymous_4)SG_ERROR_NONE;
  errc=sg_init_thread_local();
  unsigned int tmp_post_2;
  enum anonymous_4 return_value_sg_global_unlock_1;
  _Bool tmp_if_expr_4;
  unsigned long int tmp_post_8;
  unsigned int tmp_post_9;
  if(!((signed int)errc == SG_ERROR_NONE))
    return errc;

  else
  {
    sg_global_lock();
    tmp_post_2 = initialized;
    initialized = initialized + 1u;
    if(!(tmp_post_2 == 0u))
    {
      return_value_sg_global_unlock_1=sg_global_unlock();
      return return_value_sg_global_unlock_1;
    }

    else
    {
      atexit((void (*)(void))sg_destroy_main_globals);
      glob_size = (unsigned long int)0U;
      i = (unsigned long int)0;
      for( ; !(i >= 11ul); i = i + 1ul)
      {
        comp_info[(signed long int)i].glob_ofs = glob_size;
        glob_size = glob_size + comp_info[(signed long int)i].init_comp->static_buf_size;
      }
      void *return_value_sg_realloc_3;
      return_value_sg_realloc_3=sg_realloc((void *)0, sizeof(struct sg_named_mutex) /*48ul*/ );
      required_locks = (struct sg_named_mutex *)return_value_sg_realloc_3;
      if(required_locks == ((struct sg_named_mutex *)NULL))
      {
        do
        {
          char *sg_comp_init__1__2__1____errinfobuf = (char *)(void *)0;
          sg_set_error_fmt((enum anonymous_4)SG_ERROR_MALLOC, "sg_comp_init");
          free((void *)sg_comp_init__1__2__1____errinfobuf);
        }
        while((_Bool)0);
        return (enum anonymous_4)SG_ERROR_MALLOC;
      }

      else
      {
        required_locks[(signed long int)0] = glob_lock;
        num_required_locks = (unsigned long int)1;
        i = (unsigned long int)0;
        for( ; !(i >= 11ul); i = i + 1ul)
        {
          unsigned int mtx_idx;
          unsigned int new_mtx_count;
          struct sg_named_mutex *tmp = (struct sg_named_mutex *)(void *)0;
          if(!(comp_info[(signed long int)i].init_comp->init_fn == ((enum anonymous_4 (*)(unsigned int))NULL)))
          {
            enum anonymous_4 comp_errc;
            comp_errc=comp_info[(signed long int)i].init_comp->init_fn((unsigned int)(i + (unsigned long int)(((unsigned int)103 & (unsigned int)0xFF) + (((unsigned int)108 & (unsigned int)0xFF) << 8) + (((unsigned int)111 & (unsigned int)0xFF) << 16) + (((unsigned int)98 & (unsigned int)0xFF) << 24))));
            if(!((signed int)comp_errc == SG_ERROR_NONE))
            {
              if(!(ignore_init_errors == 0))
                tmp_if_expr_4 = (struct sg_comp_status *)(void *)0 != comp_info[(signed long int)i].init_comp->status ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr_4 = (_Bool)0;
              if(tmp_if_expr_4)
              {
                char *buf = (char *)(void *)0;
                comp_info[(signed long int)i].init_comp->status->init_error = comp_errc;
                free((void *)buf);
                errc = (enum anonymous_4)SG_ERROR_INITIALISATION;
              }

              else
              {
                char *__errinfobuf = (char *)(void *)0;
                free((void *)__errinfobuf);
                return comp_errc;
              }
            }

          }

          mtx_idx = (unsigned int)0;
          new_mtx_count = (unsigned int)0;
          for( ; !(comp_info[(signed long int)i].init_comp->required_locks[(signed long int)mtx_idx] == ((const char *)NULL)); mtx_idx = mtx_idx + 1u)
          {
            if(!(required_locks == ((struct sg_named_mutex *)NULL)))
            {
              void *return_value_bsearch_5;
              return_value_bsearch_5=bsearch((const void *)&comp_info[(signed long int)i].init_comp->required_locks[(signed long int)mtx_idx], (const void *)required_locks, num_required_locks, sizeof(struct sg_named_mutex) /*48ul*/ , cmp_named_locks);
              tmp = (struct sg_named_mutex *)return_value_bsearch_5;
              if(!(tmp == ((struct sg_named_mutex *)NULL)))
                goto __CPROVER_DUMP_L16;

            }

            new_mtx_count = new_mtx_count + 1u;

          __CPROVER_DUMP_L16:
            ;
          }
          if(!(new_mtx_count == 0u))
          {
            void *return_value_sg_realloc_6;
            return_value_sg_realloc_6=sg_realloc((void *)required_locks, sizeof(struct sg_named_mutex) /*48ul*/  * (num_required_locks + (unsigned long int)new_mtx_count));
            tmp = (struct sg_named_mutex *)return_value_sg_realloc_6;
            if(tmp == ((struct sg_named_mutex *)NULL))
            {
              do
              {
                char *sg_comp_init__1__3__1__3__1____errinfobuf = (char *)(void *)0;
                sg_set_error_fmt((enum anonymous_4)SG_ERROR_MALLOC, "sg_comp_init");
                free((void *)sg_comp_init__1__3__1__3__1____errinfobuf);
              }
              while((_Bool)0);
              return (enum anonymous_4)SG_ERROR_MALLOC;
            }

            required_locks = tmp;
            mtx_idx = (unsigned int)0;
            while(!(comp_info[(signed long int)i].init_comp->required_locks[(signed long int)mtx_idx] == ((const char *)NULL)))
            {
              void *return_value_bsearch_7;
              return_value_bsearch_7=bsearch((const void *)&comp_info[(signed long int)i].init_comp->required_locks[(signed long int)mtx_idx], (const void *)required_locks, num_required_locks, sizeof(struct sg_named_mutex) /*48ul*/ , cmp_named_locks);
              tmp = (struct sg_named_mutex *)return_value_bsearch_7;
              if(!(tmp == ((struct sg_named_mutex *)NULL)))
                mtx_idx = mtx_idx + 1u;

              else
              {
                tmp_post_8 = num_required_locks;
                num_required_locks = num_required_locks + 1ul;
                tmp_post_9 = mtx_idx;
                mtx_idx = mtx_idx + 1u;
                (required_locks + (signed long int)tmp_post_8)->name = comp_info[(signed long int)i].init_comp->required_locks[(signed long int)tmp_post_9];
                qsort((void *)required_locks, num_required_locks, sizeof(struct sg_named_mutex) /*48ul*/ , cmp_named_locks);
              }
            }
          }

        }
        if(!(num_required_locks == 0ul))
        {
          union anonymous_1 attr;
          signed int rc;
          rc=pthread_mutexattr_init(&attr);
          if(!(rc == 0))
          {
            do
            {
              fprintf(stderr, "panic condition: sg_comp_init: pthread_mutexattr_init() fails with %d in statgrab.globals at %s:%d", rc, (const void *)"globals.c", 356);
              exit(255);
            }
            while((_Bool)0);
            return (enum anonymous_4)SG_ERROR_INITIALISATION;
          }

          rc=pthread_mutexattr_settype(&attr, 1);
          if(!(rc == 0))
          {
            do
            {
              fprintf(stderr, "panic condition: sg_comp_init: pthread_mutexattr_settype() fails with %d in statgrab.globals at %s:%d", rc, (const void *)"globals.c", 361);
              exit(255);
            }
            while((_Bool)0);
            return (enum anonymous_4)SG_ERROR_INITIALISATION;
          }

          i = (unsigned long int)0;
          for( ; !(i >= num_required_locks); i = i + 1ul)
            if(!((required_locks + (signed long int)i)->name == glob_lock.name))
              pthread_mutex_init(&(required_locks + (signed long int)i)->mutex, &attr);

          pthread_mutexattr_destroy(&attr);
        }

        sg_global_unlock();
        return errc;
      }
    }
  }
}

// sg_concat_string
// file tools.c line 535
enum anonymous_4 sg_concat_string(char **dest, const char *src)
{
  char *new;
  unsigned long int len = (unsigned long int)0;
  unsigned long int return_value_strlen_1;
  unsigned long int return_value_strlen_2;
  if(dest == ((char **)NULL))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      sg_set_error_fmt((enum anonymous_4)SG_ERROR_INVALID_ARGUMENT, "dest");
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_INVALID_ARGUMENT;
  }

  else
  {
    if(!(*dest == ((char *)NULL)))
    {
      return_value_strlen_1=strlen(*dest);
      len = len + return_value_strlen_1;
    }

    if(!(src == ((const char *)NULL)))
    {
      return_value_strlen_2=strlen(src);
      len = len + return_value_strlen_2;
    }

    len = len + 1ul;
    void *return_value_sg_realloc_3;
    return_value_sg_realloc_3=sg_realloc((void *)*dest, len);
    new = (char *)return_value_sg_realloc_3;
    if(new == ((char *)NULL))
    {
      do
      {
        char *sg_concat_string__1__2__1____errinfobuf = (char *)(void *)0;
        free((void *)sg_concat_string__1__2__1____errinfobuf);
      }
      while((_Bool)0);
      enum anonymous_4 return_value_sg_get_error_4;
      return_value_sg_get_error_4=sg_get_error();
      return return_value_sg_get_error_4;
    }

    *dest = new;
    strlcat(*dest, src, len);
    return (enum anonymous_4)SG_ERROR_NONE;
  }
}

// sg_cpu_cleanup_comp
// file cpu_stats.c line 55
static void sg_cpu_cleanup_comp(void *p)
{
  struct sg_cpu_glob *cpu_glob = (struct sg_cpu_glob *)p;
  unsigned int i;
  /* assertion cpu_glob */
  assert(cpu_glob != ((struct sg_cpu_glob *)NULL));
  i = (unsigned int)0;
  for( ; !(i >= 3u); i = i + 1u)
    sg_vector_free(cpu_glob->cpu_vectors[(signed long int)i]);
  memset((void *)cpu_glob->cpu_vectors, 0, sizeof(struct sg_vector *[3l]) /*24ul*/ );
}

// sg_cpu_destroy_comp
// file cpu_stats.c line 55
static void sg_cpu_destroy_comp(void)
{
  ;
}

// sg_cpu_init_comp
// file cpu_stats.c line 55
static enum anonymous_4 sg_cpu_init_comp(unsigned int id)
{
  sg_cpu_glob_id = id;
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_destroy_globals
// file globals.c line 464
static void sg_destroy_globals(void *glob_buf)
{
  unsigned long int tmp_post_1;
  if(!(glob_buf == NULL))
  {
    signed int rc;
    unsigned long int i = sizeof(struct sg_comp_info [11l]) /*176ul*/  / sizeof(struct sg_comp_info) /*16ul*/  - (unsigned long int)1;
    unsigned long int zero_size = comp_info[(signed long int)i].glob_ofs + comp_info[(signed long int)i].init_comp->static_buf_size;
    do
    {
      tmp_post_1 = i;
      i = i - 1ul;
      if(tmp_post_1 == 0ul)
        break;

      if(!(comp_info[(signed long int)i].init_comp->cleanup_fn == ((void (*)(void *))NULL)))
        comp_info[(signed long int)i].init_comp->cleanup_fn((void *)((char *)glob_buf + (signed long int)comp_info[(signed long int)i].glob_ofs));

    }
    while((_Bool)1);
    memset(glob_buf, 0, zero_size);
    free(glob_buf);
    glob_buf = NULL;
    rc=pthread_setspecific(glob_key, (void *)0);
  }

}

// sg_destroy_main_globals
// file globals.c line 224
static void sg_destroy_main_globals(void)
{
  char *glob_buf;
  void *return_value_pthread_getspecific_1;
  do
  {
    return_value_pthread_getspecific_1=pthread_getspecific(glob_key);
    glob_buf = (char *)return_value_pthread_getspecific_1;
    if(glob_buf == ((char *)NULL))
      break;

    sg_destroy_globals((void *)glob_buf);
  }
  while((_Bool)1);
}

// sg_die
// file err.c line 55
void sg_die(const char *prefix, signed int exit_code)
{
  struct sg_error_details err_det;
  char *errmsg = (char *)(void *)0;
  enum anonymous_4 errc;
  errc=sg_get_error_details(&err_det);
  if(!((signed int)errc == SG_ERROR_NONE))
  {
    const char *return_value_sg_str_error_1;
    return_value_sg_str_error_1=sg_str_error(errc);
    fprintf(stderr, "panic: can't get error details (%d, %s)\n", errc, return_value_sg_str_error_1);
    exit(exit_code);
  }

  char *return_value_sg_strperror_3;
  return_value_sg_strperror_3=sg_strperror(&errmsg, &err_det);
  if(return_value_sg_strperror_3 == ((char *)NULL))
  {
    errc=sg_get_error();
    const char *return_value_sg_str_error_2;
    return_value_sg_str_error_2=sg_str_error(errc);
    fprintf(stderr, "panic: can't prepare error message (%d, %s)\n", errc, return_value_sg_str_error_2);
    exit(exit_code);
  }

  fprintf(stderr, "%s: %s\n", prefix, errmsg);
  free((void *)errmsg);
  exit(exit_code);
}

// sg_disk_cleanup_comp
// file disk_stats.c line 771
static void sg_disk_cleanup_comp(void *p)
{
  struct sg_disk_glob *disk_glob = (struct sg_disk_glob *)p;
  unsigned int i;
  /* assertion disk_glob */
  assert(disk_glob != ((struct sg_disk_glob *)NULL));
  i = (unsigned int)0;
  for( ; !(i >= 4u); i = i + 1u)
    sg_vector_free(disk_glob->disk_vectors[(signed long int)i]);
  memset((void *)disk_glob->disk_vectors, 0, sizeof(struct sg_vector *[4l]) /*32ul*/ );
}

// sg_disk_destroy_comp
// file disk_stats.c line 740
static void sg_disk_destroy_comp(void)
{
  if(!(valid_file_systems == ((char **)NULL)))
  {
    unsigned long int i = (unsigned long int)0;
    for( ; !(i >= num_valid_file_systems); i = i + 1ul)
      free((void *)valid_file_systems[(signed long int)i]);
    free((void *)valid_file_systems);
    valid_file_systems = (char **)(void *)0;
  }

}

// sg_disk_init_comp
// file disk_stats.c line 711
static enum anonymous_4 sg_disk_init_comp(unsigned int id)
{
  enum anonymous_4 rc;
  sg_disk_glob_id = id;
  rc=init_valid_fs_types();
  if(!((signed int)rc == SG_ERROR_NONE))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return rc;
  }

  else
    return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_disk_io_compare_name
// file disk_stats.c line 2003
signed int sg_disk_io_compare_name(const void *va, const void *vb)
{
  const struct anonymous_12 *a = (const struct anonymous_12 *)va;
  const struct anonymous_12 *b = (const struct anonymous_12 *)vb;
  signed int return_value_strcmp_1;
  return_value_strcmp_1=strcmp(a->disk_name, b->disk_name);
  return return_value_strcmp_1;
}

// sg_disk_io_compare_traffic
// file disk_stats.c line 2009
signed int sg_disk_io_compare_traffic(const void *va, const void *vb)
{
  const struct anonymous_12 *a = (const struct anonymous_12 *)va;
  const struct anonymous_12 *b = (const struct anonymous_12 *)vb;
  unsigned long long int tot_a = a->read_bytes + a->write_bytes;
  unsigned long long int tot_b = b->read_bytes + b->write_bytes;
  return tot_a == tot_b ? 0 : (tot_a > tot_b ? -1 : 1);
}

// sg_disk_io_stats_item_compare
// file disk_stats.c line 235
static signed int sg_disk_io_stats_item_compare(const struct anonymous_12 *a, const struct anonymous_12 *b)
{
  signed int return_value_strcmp_1;
  return_value_strcmp_1=strcmp(a->disk_name, b->disk_name);
  return return_value_strcmp_1;
}

// sg_disk_io_stats_item_compute_diff
// file disk_stats.c line 225
static enum anonymous_4 sg_disk_io_stats_item_compute_diff(const struct anonymous_12 *s, struct anonymous_12 *d)
{
  d->read_bytes = d->read_bytes - s->read_bytes;
  d->write_bytes = d->write_bytes - s->write_bytes;
  d->systime = d->systime - s->systime;
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_disk_io_stats_item_copy
// file disk_stats.c line 211
static enum anonymous_4 sg_disk_io_stats_item_copy(const struct anonymous_12 *s, struct anonymous_12 *d)
{
  enum anonymous_4 return_value_sg_update_string_2;
  return_value_sg_update_string_2=sg_update_string(&d->disk_name, s->disk_name);
  if(!((signed int)return_value_sg_update_string_2 == SG_ERROR_NONE))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    enum anonymous_4 return_value_sg_get_error_1;
    return_value_sg_get_error_1=sg_get_error();
    return return_value_sg_get_error_1;
  }

  d->read_bytes = s->read_bytes;
  d->write_bytes = s->write_bytes;
  d->systime = s->systime;
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_disk_io_stats_item_destroy
// file disk_stats.c line 240
static void sg_disk_io_stats_item_destroy(struct anonymous_12 *d)
{
  free((void *)d->disk_name);
  d->disk_name = (char *)(void *)0;
}

// sg_disk_io_stats_item_init
// file disk_stats.c line 206
static void sg_disk_io_stats_item_init(struct anonymous_12 *d)
{
  d->disk_name = (char *)(void *)0;
}

// sg_drop_privileges
// file tools.c line 598
enum anonymous_4 sg_drop_privileges(void)
{
  unsigned int return_value_getgid_1;
  return_value_getgid_1=getgid();
  signed int return_value_setegid_2;
  return_value_setegid_2=setegid(return_value_getgid_1);
  if(!(return_value_setegid_2 == 0))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_SETEGID, (const char *)(void *)0);
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_SETEGID;
  }

  else
  {
    unsigned int return_value_getuid_3;
    return_value_getuid_3=getuid();
    signed int return_value_seteuid_4;
    return_value_seteuid_4=seteuid(return_value_getuid_3);
    if(!(return_value_seteuid_4 == 0))
    {
      do
      {
        char *sg_drop_privileges__1__2__1____errinfobuf = (char *)(void *)0;
        sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_SETEUID, (const char *)(void *)0);
        free((void *)sg_drop_privileges__1__2__1____errinfobuf);
      }
      while((_Bool)0);
      return (enum anonymous_4)SG_ERROR_SETEUID;
    }

    else
      return (enum anonymous_4)SG_ERROR_NONE;
  }
}

// sg_error_cleanup_comp
// file error.c line 66
static void sg_error_cleanup_comp(void *p)
{
  (void)p;
}

// sg_error_destroy_comp
// file error.c line 65
static void sg_error_destroy_comp(void)
{
  ;
}

// sg_error_init_comp
// file error.c line 53
static enum anonymous_4 sg_error_init_comp(unsigned int id)
{
  struct sg_error_glob *error_glob;
  void *return_value_sg_comp_get_tls_1;
  return_value_sg_comp_get_tls_1=sg_comp_get_tls(id);
  error_glob = (struct sg_error_glob *)return_value_sg_comp_get_tls_1;
  sg_error_glob_id = id;
  if(!(error_glob == ((struct sg_error_glob *)NULL)) && !((signed int)pre_init_errs.error == SG_ERROR_NONE))
    *error_glob = pre_init_errs;

  memset((void *)&empty_ap, 0, sizeof(void **) /*8ul*/ );
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_f_read_line
// file tools.h line 521
char * sg_f_read_line(struct _IO_FILE *f, char *linebuf, unsigned long int buf_size, const char *string)
{
  /* assertion linebuf */
  assert(linebuf != ((char *)NULL));
  char *return_value_fgets_1;
  unsigned long int return_value_strlen_2;
  signed int return_value_strncmp_3;
  if(linebuf == ((char *)NULL))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      sg_set_error_fmt((enum anonymous_4)SG_ERROR_INVALID_ARGUMENT, "sg_f_read_line(linebuf = %p", linebuf);
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return (char *)(void *)0;
  }

  else
  {
    do
    {
      return_value_fgets_1=fgets(linebuf, (signed int)buf_size, f);
      if(return_value_fgets_1 == ((char *)NULL))
        break;

      if(!(string == ((const char *)NULL)))
      {
        return_value_strlen_2=strlen(string);
        return_value_strncmp_3=strncmp(string, linebuf, return_value_strlen_2);
        if(return_value_strncmp_3 == 0)
          return linebuf;

      }

    }
    while((_Bool)1);
    signed int return_value_feof_4;
    return_value_feof_4=feof(f);
    if(return_value_feof_4 == 0)
      do
      {
        char *sg_f_read_line__1__3__1____errinfobuf = (char *)(void *)0;
        sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_PARSE, "sg_f_read_line(string = %s)", string != ((const char *)NULL) ? string : "<NULL>");
        free((void *)sg_f_read_line__1__3__1____errinfobuf);
      }
      while((_Bool)0);

    return (char *)(void *)0;
  }
}

// sg_fill_fs_stat_int
// file disk_stats.c line 1080
static enum anonymous_4 sg_fill_fs_stat_int(struct anonymous_11 *fs_stats_ptr)
{
  struct statvfs64 fs;
  memset((void *)&fs, 0, sizeof(struct statvfs64) /*112ul*/ );
  signed int return_value_statvfs64_1;
  return_value_statvfs64_1=statvfs64(fs_stats_ptr->mnt_point, &fs);
  if(!(return_value_statvfs64_1 == 0))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_DISKINFO, "statvfs64 for mnt_point at %s (device: %s, fs_type: %s)", fs_stats_ptr->mnt_point, fs_stats_ptr->device_name, fs_stats_ptr->fs_type);
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_DISKINFO;
  }

  else
  {
    fs_stats_ptr->total_inodes = fs.f_files;
    fs_stats_ptr->free_inodes = fs.f_ffree;
    fs_stats_ptr->avail_inodes = fs.f_favail;
    fs_stats_ptr->used_inodes = fs_stats_ptr->total_inodes - fs_stats_ptr->free_inodes;
    fs_stats_ptr->io_size = fs.f_bsize;
    fs_stats_ptr->block_size = fs.f_frsize;
    fs_stats_ptr->total_blocks = fs.f_blocks;
    fs_stats_ptr->free_blocks = fs.f_bfree;
    fs_stats_ptr->avail_blocks = fs.f_bavail;
    fs_stats_ptr->used_blocks = fs_stats_ptr->total_blocks - fs_stats_ptr->free_blocks;
    fs_stats_ptr->size = fs_stats_ptr->block_size * fs_stats_ptr->total_blocks;
    fs_stats_ptr->avail = fs_stats_ptr->block_size * fs_stats_ptr->avail_blocks;
    fs_stats_ptr->free = fs_stats_ptr->block_size * fs_stats_ptr->free_blocks;
    fs_stats_ptr->used = fs_stats_ptr->block_size * fs_stats_ptr->used_blocks;
    fs_stats_ptr->systime=time((signed long int *)(void *)0);
    return (enum anonymous_4)SG_ERROR_NONE;
  }
}

// sg_first_init
// file globals.c line 187
static void sg_first_init(void)
{
  union anonymous_1 attr;
  signed int rc;
  rc=pthread_key_create(&glob_key, sg_destroy_globals);
  if(!(rc == 0))
    abort();

  rc=pthread_mutexattr_init(&attr);
  if(!(rc == 0))
    abort();

  rc=pthread_mutexattr_settype(&attr, 2);
  if(!(rc == 0))
    abort();

  rc=pthread_mutex_init(&glob_lock.mutex, (const union anonymous_1 *)(void *)0);
  if(!(rc == 0))
    abort();

}

// sg_free_stats_buf
// file vector.c line 308
enum anonymous_4 sg_free_stats_buf(void *data)
{
  struct sg_vector *tmp_if_expr_3;
  enum anonymous_4 return_value_sg_prove_vector_1;
  struct sg_vector *tmp_if_expr_2;
  if(!(data == NULL))
  {
    struct sg_vector *data_vector;
    if(!(data == NULL))
    {
      return_value_sg_prove_vector_1=sg_prove_vector(&((struct sg_vector *)data)[(signed long int)-1]);
      if((signed int)return_value_sg_prove_vector_1 == SG_ERROR_NONE)
        tmp_if_expr_2 = &((struct sg_vector *)data)[(signed long int)-1];

      else
        tmp_if_expr_2 = (struct sg_vector *)(void *)0;
      tmp_if_expr_3 = tmp_if_expr_2;
    }

    else
      tmp_if_expr_3 = (struct sg_vector *)(void *)0;
    data_vector = tmp_if_expr_3;
    sg_vector_free(data_vector);
    return (enum anonymous_4)SG_ERROR_NONE;
  }

  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_fs_compare_device_name
// file disk_stats.c line 1272
signed int sg_fs_compare_device_name(const void *va, const void *vb)
{
  const struct anonymous_11 *a = (const struct anonymous_11 *)va;
  const struct anonymous_11 *b = (const struct anonymous_11 *)vb;
  signed int return_value_strcmp_1;
  return_value_strcmp_1=strcmp(a->device_name, b->device_name);
  return return_value_strcmp_1;
}

// sg_fs_compare_mnt_point
// file disk_stats.c line 1278
signed int sg_fs_compare_mnt_point(const void *va, const void *vb)
{
  const struct anonymous_11 *a = (const struct anonymous_11 *)va;
  const struct anonymous_11 *b = (const struct anonymous_11 *)vb;
  signed int return_value_strcmp_1;
  return_value_strcmp_1=strcmp(a->mnt_point, b->mnt_point);
  return return_value_strcmp_1;
}

// sg_fs_stats_item_compare
// file disk_stats.c line 175
static signed int sg_fs_stats_item_compare(const struct anonymous_11 *a, const struct anonymous_11 *b)
{
  signed int rc;
  rc=strcmp(a->device_name, b->device_name);
  if(!(rc == 0))
    return rc;

  else
  {
    rc=strcmp(a->device_canonical, b->device_canonical);
    if(!(rc == 0))
      return rc;

    else
    {
      rc=strcmp(a->mnt_point, b->mnt_point);
      if(!(rc == 0))
        return rc;

      else
      {
        rc=strcmp(a->fs_type, b->fs_type);
        if(!(rc == 0))
          return rc;

        else
          return 0;
      }
    }
  }
}

// sg_fs_stats_item_compute_diff
// file disk_stats.c line 155
static enum anonymous_4 sg_fs_stats_item_compute_diff(const struct anonymous_11 *s, struct anonymous_11 *d)
{
  d->size = d->size - s->size;
  d->used = d->used - s->used;
  d->avail = d->avail - s->avail;
  d->total_inodes = d->total_inodes - s->total_inodes;
  d->used_inodes = d->used_inodes - s->used_inodes;
  d->free_inodes = d->free_inodes - s->free_inodes;
  d->avail_inodes = d->avail_inodes - s->avail_inodes;
  d->io_size = d->io_size - s->io_size;
  d->block_size = d->block_size - s->block_size;
  d->total_blocks = d->total_blocks - s->total_blocks;
  d->free_blocks = d->free_blocks - s->free_blocks;
  d->used_blocks = d->used_blocks - s->used_blocks;
  d->avail_blocks = d->avail_blocks - s->avail_blocks;
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_fs_stats_item_copy
// file disk_stats.c line 125
static enum anonymous_4 sg_fs_stats_item_copy(const struct anonymous_11 *s, struct anonymous_11 *d)
{
  enum anonymous_4 return_value_sg_update_string_2;
  return_value_sg_update_string_2=sg_update_string(&d->device_name, s->device_name);
  _Bool tmp_if_expr_4;
  enum anonymous_4 return_value_sg_update_string_3;
  if(!((signed int)return_value_sg_update_string_2 == SG_ERROR_NONE))
    tmp_if_expr_4 = (_Bool)1;

  else
  {
    return_value_sg_update_string_3=sg_update_string(&d->device_canonical, s->device_canonical);
    tmp_if_expr_4 = SG_ERROR_NONE != (signed int)return_value_sg_update_string_3 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_6;
  enum anonymous_4 return_value_sg_update_string_5;
  if(tmp_if_expr_4)
    tmp_if_expr_6 = (_Bool)1;

  else
  {
    return_value_sg_update_string_5=sg_update_string(&d->fs_type, s->fs_type);
    tmp_if_expr_6 = SG_ERROR_NONE != (signed int)return_value_sg_update_string_5 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr_8;
  enum anonymous_4 return_value_sg_update_string_7;
  if(tmp_if_expr_6)
    tmp_if_expr_8 = (_Bool)1;

  else
  {
    return_value_sg_update_string_7=sg_update_string(&d->mnt_point, s->mnt_point);
    tmp_if_expr_8 = SG_ERROR_NONE != (signed int)return_value_sg_update_string_7 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_8)
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    enum anonymous_4 return_value_sg_get_error_1;
    return_value_sg_get_error_1=sg_get_error();
    return return_value_sg_get_error_1;
  }

  d->device_type = s->device_type;
  d->size = s->size;
  d->used = s->used;
  d->free = s->free;
  d->avail = s->avail;
  d->total_inodes = s->total_inodes;
  d->used_inodes = s->used_inodes;
  d->free_inodes = s->free_inodes;
  d->avail_inodes = s->avail_inodes;
  d->io_size = s->io_size;
  d->block_size = s->block_size;
  d->total_blocks = s->total_blocks;
  d->free_blocks = s->free_blocks;
  d->used_blocks = s->used_blocks;
  d->avail_blocks = s->avail_blocks;
  d->systime = s->systime;
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_fs_stats_item_destroy
// file disk_stats.c line 199
static void sg_fs_stats_item_destroy(struct anonymous_11 *d)
{
  free((void *)d->device_name);
  free((void *)d->device_canonical);
  free((void *)d->fs_type);
  free((void *)d->mnt_point);
}

// sg_fs_stats_item_init
// file disk_stats.c line 116
static void sg_fs_stats_item_init(struct anonymous_11 *d)
{
  d->device_name = (char *)(void *)0;
  d->device_canonical = (char *)(void *)0;
  d->fs_type = (char *)(void *)0;
  d->mnt_point = (char *)(void *)0;
}

// sg_get_cpu_percents_int
// file cpu_stats.c line 437
static enum anonymous_4 sg_get_cpu_percents_int(struct anonymous_25 *cpu_percent_buf, const struct anonymous_15 *cpu_stats_buf)
{
  cpu_percent_buf->user = ((double)cpu_stats_buf->user / (double)cpu_stats_buf->total) * (double)100;
  cpu_percent_buf->kernel = ((double)cpu_stats_buf->kernel / (double)cpu_stats_buf->total) * (double)100;
  cpu_percent_buf->idle = ((double)cpu_stats_buf->idle / (double)cpu_stats_buf->total) * (double)100;
  cpu_percent_buf->iowait = ((double)cpu_stats_buf->iowait / (double)cpu_stats_buf->total) * (double)100;
  cpu_percent_buf->swap = ((double)cpu_stats_buf->swap / (double)cpu_stats_buf->total) * (double)100;
  cpu_percent_buf->nice = ((double)cpu_stats_buf->nice / (double)cpu_stats_buf->total) * (double)100;
  cpu_percent_buf->time_taken = cpu_stats_buf->systime;
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_get_cpu_percents_of
// file cpu_stats.c line 486
struct anonymous_25 * sg_get_cpu_percents_of(enum sg_cpu_percent_source cps, unsigned long int *entries)
{
  struct sg_cpu_glob *cpu_glob;
  void *return_value_sg_comp_get_tls_1;
  return_value_sg_comp_get_tls_1=sg_comp_get_tls(sg_cpu_glob_id);
  cpu_glob = (struct sg_cpu_glob *)return_value_sg_comp_get_tls_1;
  struct sg_vector *cpu_stats_vector = (struct sg_vector *)(void *)0;
  struct anonymous_15 *cs_ptr = (struct anonymous_15 *)(void *)0;
  struct anonymous_25 *cpu_usage;
  void *tmp_if_expr_2;
  void *tmp_if_expr_3;
  unsigned long int tmp_if_expr_4;
  if(cpu_glob == ((struct sg_cpu_glob *)NULL))
    return (struct anonymous_25 *)(void *)0;

  else
  {
    if(cpu_glob->cpu_vectors[2l] == ((struct sg_vector *)NULL))
      cpu_glob->cpu_vectors[(signed long int)2]=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)1, &sg_cpu_percents_vector_init_info);

    if(cpu_glob->cpu_vectors[2l] == ((struct sg_vector *)NULL))
    {
      sg_set_error_fmt((enum anonymous_4)SG_ERROR_MALLOC, "sg_get_cpu_percents_of");
      return (struct anonymous_25 *)(void *)0;
    }

    else
    {
      if(!(cpu_glob->cpu_vectors[2l] == ((struct sg_vector *)NULL)))
        tmp_if_expr_2 = (void *)&cpu_glob->cpu_vectors[(signed long int)2][(signed long int)1];

      else
        tmp_if_expr_2 = (void *)0;
      cpu_usage = (struct anonymous_25 *)tmp_if_expr_2;
      switch((signed int)cps)
      {
        case sg_entire_cpu_percent:
        {
          cpu_stats_vector = cpu_glob->cpu_vectors[(signed long int)0];
          if(cpu_stats_vector == ((struct sg_vector *)NULL))
            cs_ptr=sg_get_cpu_stats((unsigned long int *)(void *)0);

          break;
        }
        case sg_last_diff_cpu_percent:
        {
          cpu_stats_vector = cpu_glob->cpu_vectors[(signed long int)1];
          if(!(cpu_stats_vector == ((struct sg_vector *)NULL)))
            break;

        }
        case sg_new_diff_cpu_percent:
        {
          cs_ptr=sg_get_cpu_stats_diff((unsigned long int *)(void *)0);
          break;
        }
        default:
          do
          {
            char *__errinfobuf = (char *)(void *)0;
            sg_set_error_fmt((enum anonymous_4)SG_ERROR_INVALID_ARGUMENT, "sg_get_cpu_percents_of(cps = %d)", (signed int)cps);
            free((void *)__errinfobuf);
          }
          while((_Bool)0);
      }
      if(cs_ptr == ((struct anonymous_15 *)NULL) && cpu_stats_vector == ((struct sg_vector *)NULL))
      {
        if(!(entries == ((unsigned long int *)NULL)))
          *entries = (unsigned long int)0;

        return (struct anonymous_25 *)(void *)0;
      }

      else
      {
        if(cs_ptr == ((struct anonymous_15 *)NULL) && !(cpu_stats_vector == ((struct sg_vector *)NULL)))
        {
          if(!(cpu_stats_vector == ((struct sg_vector *)NULL)))
            tmp_if_expr_3 = (void *)&cpu_stats_vector[(signed long int)1];

          else
            tmp_if_expr_3 = (void *)0;
          cs_ptr = (struct anonymous_15 *)tmp_if_expr_3;
        }

        enum anonymous_4 return_value_sg_get_cpu_percents_int_5;
        return_value_sg_get_cpu_percents_int_5=sg_get_cpu_percents_int(cpu_usage, cs_ptr);
        if((signed int)return_value_sg_get_cpu_percents_int_5 == SG_ERROR_NONE)
        {
          if(!(entries == ((unsigned long int *)NULL)))
          {
            if(!(cpu_stats_vector == ((struct sg_vector *)NULL)))
              tmp_if_expr_4 = cpu_stats_vector->used_count;

            else
              tmp_if_expr_4 = (unsigned long int)0;
            *entries = tmp_if_expr_4;
          }

          return cpu_usage;
        }

        else
        {
          if(!(entries == ((unsigned long int *)NULL)))
            *entries = (unsigned long int)0;

          return (struct anonymous_25 *)(void *)0;
        }
      }
    }
  }
}

// sg_get_cpu_percents_r
// file cpu_stats.c line 560
struct anonymous_25 * sg_get_cpu_percents_r(const struct anonymous_15 *whereof, unsigned long int *entries)
{
  struct sg_vector *cpu_percents_result_vector;
  struct anonymous_25 *cpu_usage;
  void *tmp_if_expr_1;
  unsigned long int tmp_if_expr_2;
  if(whereof == ((const struct anonymous_15 *)NULL))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      sg_set_error_fmt((enum anonymous_4)SG_ERROR_INVALID_ARGUMENT, "sg_get_cpu_percents_r(whereof = %p)", whereof);
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_25 *)(void *)0;
  }

  else
  {
    cpu_percents_result_vector=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)1, &sg_cpu_percents_vector_init_info);
    if(cpu_percents_result_vector == ((struct sg_vector *)NULL))
    {
      if(!(entries == ((unsigned long int *)NULL)))
        *entries = (unsigned long int)0;

      return (struct anonymous_25 *)(void *)0;
    }

    else
    {
      if(!(cpu_percents_result_vector == ((struct sg_vector *)NULL)))
        tmp_if_expr_1 = (void *)&cpu_percents_result_vector[(signed long int)1];

      else
        tmp_if_expr_1 = (void *)0;
      cpu_usage = (struct anonymous_25 *)tmp_if_expr_1;
      enum anonymous_4 return_value_sg_get_cpu_percents_int_3;
      return_value_sg_get_cpu_percents_int_3=sg_get_cpu_percents_int(cpu_usage, whereof);
      if((signed int)return_value_sg_get_cpu_percents_int_3 == SG_ERROR_NONE)
      {
        if(!(entries == ((unsigned long int *)NULL)))
        {
          if(!(cpu_percents_result_vector == ((struct sg_vector *)NULL)))
            tmp_if_expr_2 = cpu_percents_result_vector->used_count;

          else
            tmp_if_expr_2 = (unsigned long int)0;
          *entries = tmp_if_expr_2;
        }

        return cpu_usage;
      }

      else
      {
        sg_vector_free(cpu_percents_result_vector);
        if(!(entries == ((unsigned long int *)NULL)))
          *entries = (unsigned long int)0;

        return (struct anonymous_25 *)(void *)0;
      }
    }
  }
}

// sg_get_cpu_stats
// file cpu_stats.c line 373
struct anonymous_15 * sg_get_cpu_stats(unsigned long int *entries)
{
  struct sg_cpu_glob *cpu_glob;
  void *return_value_sg_comp_get_tls_1;
  return_value_sg_comp_get_tls_1=sg_comp_get_tls(sg_cpu_glob_id);
  cpu_glob = (struct sg_cpu_glob *)return_value_sg_comp_get_tls_1;
  enum anonymous_4 rc;
  void *tmp_if_expr_2;
  unsigned long int tmp_if_expr_3;
  if(cpu_glob == ((struct sg_cpu_glob *)NULL))
  {
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_15 *)(void *)0;
  }

  else
  {
    if(cpu_glob->cpu_vectors[0l] == ((struct sg_vector *)NULL))
      cpu_glob->cpu_vectors[(signed long int)0]=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)1, &sg_cpu_stats_vector_init_info);

    if(!(cpu_glob->cpu_vectors[0l] == ((struct sg_vector *)NULL)))
    {
      struct anonymous_15 *cpu_stats;
      if(!(cpu_glob->cpu_vectors[0l] == ((struct sg_vector *)NULL)))
        tmp_if_expr_2 = (void *)&cpu_glob->cpu_vectors[(signed long int)0][(signed long int)1];

      else
        tmp_if_expr_2 = (void *)0;
      cpu_stats = (struct anonymous_15 *)tmp_if_expr_2;
      rc=sg_get_cpu_stats_int(cpu_stats);
      if((signed int)rc == SG_ERROR_NONE)
      {
        sg_clear_error();
        if(!(entries == ((unsigned long int *)NULL)))
        {
          if(!(cpu_glob->cpu_vectors[0l] == ((struct sg_vector *)NULL)))
            tmp_if_expr_3 = cpu_glob->cpu_vectors[(signed long int)0]->used_count;

          else
            tmp_if_expr_3 = (unsigned long int)0;
          *entries = tmp_if_expr_3;
        }

        return cpu_stats;
      }

    }

    else
      rc=sg_get_error();
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_15 *)(void *)0;
  }
}

// sg_get_cpu_stats_diff
// file cpu_stats.c line 432
struct anonymous_15 * sg_get_cpu_stats_diff(unsigned long int *entries)
{
  struct sg_cpu_glob *cpu_glob;
  void *return_value_sg_comp_get_tls_1;
  return_value_sg_comp_get_tls_1=sg_comp_get_tls(sg_cpu_glob_id);
  cpu_glob = (struct sg_cpu_glob *)return_value_sg_comp_get_tls_1;
  void *tmp_if_expr_3;
  void *tmp_if_expr_4;
  enum anonymous_4 return_value_sg_get_cpu_stats_diff_int_6;
  unsigned long int tmp_if_expr_5;
  if(cpu_glob == ((struct sg_cpu_glob *)NULL))
  {
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_15 *)(void *)0;
  }

  else
  {
    if(cpu_glob->cpu_vectors[0l] == ((struct sg_vector *)NULL))
    {
      struct anonymous_15 *return_value_sg_get_cpu_stats_2;
      return_value_sg_get_cpu_stats_2=sg_get_cpu_stats(entries);
      return return_value_sg_get_cpu_stats_2;
    }

    if(cpu_glob->cpu_vectors[1l] == ((struct sg_vector *)NULL))
      cpu_glob->cpu_vectors[(signed long int)1]=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)1, &sg_cpu_stats_vector_init_info);

    if(!(cpu_glob->cpu_vectors[1l] == ((struct sg_vector *)NULL)))
    {
      struct anonymous_15 cpu_last;
      if(!(cpu_glob->cpu_vectors[0l] == ((struct sg_vector *)NULL)))
        tmp_if_expr_3 = (void *)&cpu_glob->cpu_vectors[(signed long int)0][(signed long int)1];

      else
        tmp_if_expr_3 = (void *)0;
      cpu_last = *((struct anonymous_15 *)tmp_if_expr_3);
      struct anonymous_15 *cpu_diff;
      if(!(cpu_glob->cpu_vectors[1l] == ((struct sg_vector *)NULL)))
        tmp_if_expr_4 = (void *)&cpu_glob->cpu_vectors[(signed long int)1][(signed long int)1];

      else
        tmp_if_expr_4 = (void *)0;
      cpu_diff = (struct anonymous_15 *)tmp_if_expr_4;
      struct anonymous_15 *cpu_now;
      cpu_now=sg_get_cpu_stats((unsigned long int *)(void *)0);
      if(!(cpu_now == ((struct anonymous_15 *)NULL)))
      {
        return_value_sg_get_cpu_stats_diff_int_6=sg_get_cpu_stats_diff_int(cpu_diff, cpu_now, &cpu_last);
        if((signed int)return_value_sg_get_cpu_stats_diff_int_6 == SG_ERROR_NONE)
        {
          sg_clear_error();
          if(!(entries == ((unsigned long int *)NULL)))
          {
            if(!(cpu_glob->cpu_vectors[1l] == ((struct sg_vector *)NULL)))
              tmp_if_expr_5 = cpu_glob->cpu_vectors[(signed long int)1]->used_count;

            else
              tmp_if_expr_5 = (unsigned long int)0;
            *entries = tmp_if_expr_5;
          }

          return cpu_diff;
        }

      }

    }

    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_15 *)(void *)0;
  }
}

// sg_get_cpu_stats_diff_between
// file cpu_stats.c line 432
struct anonymous_15 * sg_get_cpu_stats_diff_between(const struct anonymous_15 *cpu_now, const struct anonymous_15 *cpu_last, unsigned long int *entries)
{
  struct sg_vector *cpu_diff_vector;
  cpu_diff_vector=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)1, &sg_cpu_stats_vector_init_info);
  void *tmp_if_expr_1;
  unsigned long int tmp_if_expr_2;
  if(!(cpu_diff_vector == ((struct sg_vector *)NULL)))
  {
    enum anonymous_4 rc;
    struct anonymous_15 *cpu_diff;
    if(!(cpu_diff_vector == ((struct sg_vector *)NULL)))
      tmp_if_expr_1 = (void *)&cpu_diff_vector[(signed long int)1];

    else
      tmp_if_expr_1 = (void *)0;
    cpu_diff = (struct anonymous_15 *)tmp_if_expr_1;
    rc=sg_get_cpu_stats_diff_int(cpu_diff, cpu_now, cpu_last);
    if((signed int)rc == SG_ERROR_NONE)
    {
      sg_clear_error();
      if(!(entries == ((unsigned long int *)NULL)))
      {
        if(!(cpu_diff_vector == ((struct sg_vector *)NULL)))
          tmp_if_expr_2 = cpu_diff_vector->used_count;

        else
          tmp_if_expr_2 = (unsigned long int)0;
        *entries = tmp_if_expr_2;
      }

      return cpu_diff;
    }

    sg_vector_free(cpu_diff_vector);
  }

  if(!(entries == ((unsigned long int *)NULL)))
    *entries = (unsigned long int)0;

  return (struct anonymous_15 *)(void *)0;
}

// sg_get_cpu_stats_diff_int
// file cpu_stats.c line 400
static enum anonymous_4 sg_get_cpu_stats_diff_int(struct anonymous_15 *tgt, const struct anonymous_15 *now, const struct anonymous_15 *last)
{
  if(tgt == ((struct anonymous_15 *)NULL))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      sg_set_error_fmt((enum anonymous_4)SG_ERROR_INVALID_ARGUMENT, "sg_get_cpu_stats_diff_int(tgt)");
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_INVALID_ARGUMENT;
  }

  else
  {
    if(!(now == ((const struct anonymous_15 *)NULL)))
    {
      *tgt = *now;
      if(!(last == ((const struct anonymous_15 *)NULL)))
      {
        tgt->user = tgt->user - last->user;
        tgt->kernel = tgt->kernel - last->kernel;
        tgt->idle = tgt->idle - last->idle;
        tgt->iowait = tgt->iowait - last->iowait;
        tgt->swap = tgt->swap - last->swap;
        tgt->nice = tgt->nice - last->nice;
        tgt->total = tgt->total - last->total;
        tgt->context_switches=counter_diff(tgt->context_switches, last->context_switches);
        tgt->voluntary_context_switches=counter_diff(tgt->voluntary_context_switches, last->voluntary_context_switches);
        tgt->involuntary_context_switches=counter_diff(tgt->involuntary_context_switches, last->involuntary_context_switches);
        tgt->syscalls=counter_diff(tgt->syscalls, last->syscalls);
        tgt->interrupts=counter_diff(tgt->interrupts, last->interrupts);
        tgt->soft_interrupts=counter_diff(tgt->soft_interrupts, last->soft_interrupts);
        tgt->systime = tgt->systime - last->systime;
      }

    }

    else
      memset((void *)tgt, 0, sizeof(struct anonymous_15) /*112ul*/ );
    return (enum anonymous_4)SG_ERROR_NONE;
  }
}

// sg_get_cpu_stats_int
// file cpu_stats.c line 62
static enum anonymous_4 sg_get_cpu_stats_int(struct anonymous_15 *cpu_stats_buf)
{
  struct _IO_FILE *f;
  signed int proc_stat_cpu;
  char line[1024l];
  signed int matched = 0;
  memset((void *)cpu_stats_buf, 0, sizeof(struct anonymous_15) /*112ul*/ );
  f=fopen("/proc/stat", "r");
  char *return_value_fgets_1;
  _Bool tmp_if_expr_20;
  const unsigned short int **return_value___ctype_b_loc_18;
  unsigned long int return_value_strlen_19;
  unsigned long int return_value_strlen_11;
  signed int return_value_strncmp_12;
  _Bool tmp_if_expr_15;
  const unsigned short int **return_value___ctype_b_loc_13;
  unsigned long int return_value_strlen_14;
  unsigned long int return_value_strlen_6;
  signed int return_value_strncmp_7;
  _Bool tmp_if_expr_10;
  const unsigned short int **return_value___ctype_b_loc_8;
  unsigned long int return_value_strlen_9;
  unsigned long int return_value_strlen_4;
  signed int return_value_strncmp_5;
  const unsigned short int **return_value___ctype_b_loc_2;
  unsigned long int return_value_strlen_3;
  if(f == ((struct _IO_FILE *)NULL))
  {
    do
    {
      char *sg_get_cpu_stats_int__1__1__1____errinfobuf = (char *)(void *)0;
      sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_OPEN, "/proc/stat");
      free((void *)sg_get_cpu_stats_int__1__1__1____errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_OPEN;
  }

  else
  {
    do
    {
      return_value_fgets_1=fgets(line, (signed int)sizeof(char [1024l]) /*1024ul*/ , f);
      if(return_value_fgets_1 == ((char *)NULL))
        break;

      if(matched >= 4)
        break;

      unsigned long int return_value_strlen_16;
      return_value_strlen_16=strlen("cpu");
      signed int return_value_strncmp_17;
      return_value_strncmp_17=strncmp(line, "cpu", return_value_strlen_16);
      if(return_value_strncmp_17 == 0)
      {
        return_value___ctype_b_loc_18=__ctype_b_loc();
        return_value_strlen_19=strlen("cpu");
        tmp_if_expr_20 = ((signed int)(*return_value___ctype_b_loc_18)[(signed long int)(signed int)line[(signed long int)return_value_strlen_19]] & (signed int)(unsigned short int)1) != 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_20 = (_Bool)0;
      if(tmp_if_expr_20)
      {
        proc_stat_cpu=sscanf(line, "cpu %llu %llu %llu %llu %llu", &cpu_stats_buf->user, &cpu_stats_buf->nice, &cpu_stats_buf->kernel, &cpu_stats_buf->idle, &cpu_stats_buf->iowait);
        if(proc_stat_cpu >= 6 || !(proc_stat_cpu >= 4))
        {
          do
          {
            char *sg_get_cpu_stats_int__1__2__1__1__1____errinfobuf = (char *)(void *)0;
            sg_set_error_fmt((enum anonymous_4)SG_ERROR_PARSE, "cpu");
            free((void *)sg_get_cpu_stats_int__1__2__1__1__1____errinfobuf);
          }
          while((_Bool)0);
          return (enum anonymous_4)SG_ERROR_PARSE;
        }

        matched = matched + 1;
      }

      else
      {
        return_value_strlen_11=strlen("intr");
        return_value_strncmp_12=strncmp(line, "intr", return_value_strlen_11);
        if(return_value_strncmp_12 == 0)
        {
          return_value___ctype_b_loc_13=__ctype_b_loc();
          return_value_strlen_14=strlen("intr");
          tmp_if_expr_15 = ((signed int)(*return_value___ctype_b_loc_13)[(signed long int)(signed int)line[(signed long int)return_value_strlen_14]] & (signed int)(unsigned short int)1) != 0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr_15 = (_Bool)0;
        if(tmp_if_expr_15)
        {
          proc_stat_cpu=sscanf(line, "intr %llu", &cpu_stats_buf->interrupts);
          if(!(proc_stat_cpu == 1))
          {
            do
            {
              char *sg_get_cpu_stats_int__1__2__2__1__1____errinfobuf = (char *)(void *)0;
              sg_set_error_fmt((enum anonymous_4)SG_ERROR_PARSE, "intr");
              free((void *)sg_get_cpu_stats_int__1__2__2__1__1____errinfobuf);
            }
            while((_Bool)0);
            return (enum anonymous_4)SG_ERROR_PARSE;
          }

          matched = matched + 1;
        }

        else
        {
          return_value_strlen_6=strlen("ctxt");
          return_value_strncmp_7=strncmp(line, "ctxt", return_value_strlen_6);
          if(return_value_strncmp_7 == 0)
          {
            return_value___ctype_b_loc_8=__ctype_b_loc();
            return_value_strlen_9=strlen("ctxt");
            tmp_if_expr_10 = ((signed int)(*return_value___ctype_b_loc_8)[(signed long int)(signed int)line[(signed long int)return_value_strlen_9]] & (signed int)(unsigned short int)1) != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr_10 = (_Bool)0;
          if(tmp_if_expr_10)
          {
            proc_stat_cpu=sscanf(line, "ctxt %llu", &cpu_stats_buf->context_switches);
            if(!(proc_stat_cpu == 1))
            {
              do
              {
                char *__errinfobuf = (char *)(void *)0;
                sg_set_error_fmt((enum anonymous_4)SG_ERROR_PARSE, "ctxt");
                free((void *)__errinfobuf);
              }
              while((_Bool)0);
              return (enum anonymous_4)SG_ERROR_PARSE;
            }

            matched = matched + 1;
          }

          else
          {
            return_value_strlen_4=strlen("softirq");
            return_value_strncmp_5=strncmp(line, "softirq", return_value_strlen_4);
            if(return_value_strncmp_5 == 0)
            {
              return_value___ctype_b_loc_2=__ctype_b_loc();
              return_value_strlen_3=strlen("softirq");
              if(!((1 & (signed int)(*return_value___ctype_b_loc_2)[(signed long int)(signed int)line[(signed long int)return_value_strlen_3]]) == 0))
              {
                proc_stat_cpu=sscanf(line, "softirq %llu", &cpu_stats_buf->soft_interrupts);
                if(!(proc_stat_cpu == 1))
                {
                  do
                  {
                    char *sg_get_cpu_stats_int__1__2__4__1__1____errinfobuf = (char *)(void *)0;
                    sg_set_error_fmt((enum anonymous_4)SG_ERROR_PARSE, "softirq");
                    free((void *)sg_get_cpu_stats_int__1__2__4__1__1____errinfobuf);
                  }
                  while((_Bool)0);
                  return (enum anonymous_4)SG_ERROR_PARSE;
                }

                matched = matched + 1;
              }

            }

          }
        }
      }
    }
    while((_Bool)1);
    fclose(f);
    cpu_stats_buf->total = cpu_stats_buf->user + cpu_stats_buf->nice + cpu_stats_buf->kernel + cpu_stats_buf->idle;
    cpu_stats_buf->systime=time((signed long int *)(void *)0);
    return (enum anonymous_4)SG_ERROR_NONE;
  }
}

// sg_get_cpu_stats_r
// file cpu_stats.c line 373
struct anonymous_15 * sg_get_cpu_stats_r(unsigned long int *entries)
{
  struct sg_vector *cpu_stats_vector;
  cpu_stats_vector=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)1, &sg_cpu_stats_vector_init_info);
  enum anonymous_4 rc;
  void *tmp_if_expr_1;
  unsigned long int tmp_if_expr_2;
  if(!(cpu_stats_vector == ((struct sg_vector *)NULL)))
  {
    struct anonymous_15 *cpu_stats;
    if(!(cpu_stats_vector == ((struct sg_vector *)NULL)))
      tmp_if_expr_1 = (void *)&cpu_stats_vector[(signed long int)1];

    else
      tmp_if_expr_1 = (void *)0;
    cpu_stats = (struct anonymous_15 *)tmp_if_expr_1;
    rc=sg_get_cpu_stats_int(cpu_stats);
    if((signed int)rc == SG_ERROR_NONE)
    {
      sg_clear_error();
      if(!(entries == ((unsigned long int *)NULL)))
      {
        if(!(cpu_stats_vector == ((struct sg_vector *)NULL)))
          tmp_if_expr_2 = cpu_stats_vector->used_count;

        else
          tmp_if_expr_2 = (unsigned long int)0;
        *entries = tmp_if_expr_2;
      }

      return cpu_stats;
    }

    sg_vector_free(cpu_stats_vector);
  }

  else
    rc=sg_get_error();
  if(!(entries == ((unsigned long int *)NULL)))
    *entries = (unsigned long int)0;

  return (struct anonymous_15 *)(void *)0;
}

// sg_get_disk_io_stats
// file disk_stats.c line 1999
struct anonymous_12 * sg_get_disk_io_stats(unsigned long int *entries)
{
  struct sg_disk_glob *disk_glob;
  void *return_value_sg_comp_get_tls_1;
  return_value_sg_comp_get_tls_1=sg_comp_get_tls(sg_disk_glob_id);
  disk_glob = (struct sg_disk_glob *)return_value_sg_comp_get_tls_1;
  enum anonymous_4 rc;
  void *tmp_if_expr_2;
  unsigned long int tmp_if_expr_3;
  if(disk_glob == ((struct sg_disk_glob *)NULL))
  {
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_12 *)(void *)0;
  }

  else
  {
    if(disk_glob->disk_vectors[2l] == ((struct sg_vector *)NULL))
      disk_glob->disk_vectors[(signed long int)2]=sg_vector_create((unsigned long int)16, (unsigned long int)16, (unsigned long int)0, &sg_disk_io_stats_vector_init_info);

    else
      sg_vector_clear(disk_glob->disk_vectors[(signed long int)2]);
    if(!(disk_glob->disk_vectors[2l] == ((struct sg_vector *)NULL)))
    {
      rc=sg_get_disk_io_stats_int(&disk_glob->disk_vectors[(signed long int)2]);
      if((signed int)rc == SG_ERROR_NONE)
      {
        struct anonymous_12 *disk_io_stats;
        if(!(disk_glob->disk_vectors[2l] == ((struct sg_vector *)NULL)))
          tmp_if_expr_2 = (void *)&disk_glob->disk_vectors[(signed long int)2][(signed long int)1];

        else
          tmp_if_expr_2 = (void *)0;
        disk_io_stats = (struct anonymous_12 *)tmp_if_expr_2;
        sg_clear_error();
        if(!(entries == ((unsigned long int *)NULL)))
        {
          if(!(disk_glob->disk_vectors[2l] == ((struct sg_vector *)NULL)))
            tmp_if_expr_3 = disk_glob->disk_vectors[(signed long int)2]->used_count;

          else
            tmp_if_expr_3 = (unsigned long int)0;
          *entries = tmp_if_expr_3;
        }

        return disk_io_stats;
      }

    }

    else
      rc=sg_get_error();
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_12 *)(void *)0;
  }
}

// sg_get_disk_io_stats_diff
// file disk_stats.c line 2000
struct anonymous_12 * sg_get_disk_io_stats_diff(unsigned long int *entries)
{
  struct sg_disk_glob *disk_glob;
  void *return_value_sg_comp_get_tls_1;
  return_value_sg_comp_get_tls_1=sg_comp_get_tls(sg_disk_glob_id);
  disk_glob = (struct sg_disk_glob *)return_value_sg_comp_get_tls_1;
  unsigned long int tmp_if_expr_3;
  void *tmp_if_expr_4;
  if(disk_glob == ((struct sg_disk_glob *)NULL))
  {
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_12 *)(void *)0;
  }

  else
  {
    if(disk_glob->disk_vectors[2l] == ((struct sg_vector *)NULL))
    {
      struct anonymous_12 *return_value_sg_get_disk_io_stats_2;
      return_value_sg_get_disk_io_stats_2=sg_get_disk_io_stats(entries);
      return return_value_sg_get_disk_io_stats_2;
    }

    if(disk_glob->disk_vectors[3l] == ((struct sg_vector *)NULL))
      disk_glob->disk_vectors[(signed long int)3]=sg_vector_create((unsigned long int)disk_glob->disk_vectors[(signed long int)2]->used_count, (unsigned long int)disk_glob->disk_vectors[(signed long int)2]->used_count, (unsigned long int)0, &sg_disk_io_stats_vector_init_info);

    if(!(disk_glob->disk_vectors[3l] == ((struct sg_vector *)NULL)))
    {
      enum anonymous_4 rc;
      struct sg_vector *last;
      last=sg_vector_clone(disk_glob->disk_vectors[(signed long int)2]);
      if(!(last == ((struct sg_vector *)NULL)))
      {
        sg_get_disk_io_stats((unsigned long int *)(void *)0);
        rc=sg_vector_compute_diff(&disk_glob->disk_vectors[(signed long int)3], disk_glob->disk_vectors[(signed long int)2], last);
        sg_vector_free(last);
        if((signed int)rc == SG_ERROR_NONE)
        {
          sg_clear_error();
          if(!(entries == ((unsigned long int *)NULL)))
          {
            if(!(disk_glob->disk_vectors[3l] == ((struct sg_vector *)NULL)))
              tmp_if_expr_3 = disk_glob->disk_vectors[(signed long int)3]->used_count;

            else
              tmp_if_expr_3 = (unsigned long int)0;
            *entries = tmp_if_expr_3;
          }

          if(!(disk_glob->disk_vectors[3l] == ((struct sg_vector *)NULL)))
            tmp_if_expr_4 = (void *)&disk_glob->disk_vectors[(signed long int)3][(signed long int)1];

          else
            tmp_if_expr_4 = (void *)0;
          return (struct anonymous_12 *)tmp_if_expr_4;
        }

      }

    }


  err_out:
    ;
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_12 *)(void *)0;
  }
}

// sg_get_disk_io_stats_diff_between
// file disk_stats.c line 2000
struct anonymous_12 * sg_get_disk_io_stats_diff_between(const struct anonymous_12 *cur, const struct anonymous_12 *last, unsigned long int *entries)
{
  struct sg_vector *disk_io_diff_vector;
  enum anonymous_4 rc;
  disk_io_diff_vector=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)0, &sg_disk_io_stats_vector_init_info);
  struct sg_vector *tmp_if_expr_3;
  enum anonymous_4 return_value_sg_prove_vector_1;
  struct sg_vector *tmp_if_expr_2;
  struct sg_vector *tmp_if_expr_6;
  enum anonymous_4 return_value_sg_prove_vector_4;
  struct sg_vector *tmp_if_expr_5;
  unsigned long int tmp_if_expr_7;
  void *tmp_if_expr_8;
  if(!(disk_io_diff_vector == ((struct sg_vector *)NULL)))
  {
    if(!(cur == ((const struct anonymous_12 *)NULL)))
    {
      return_value_sg_prove_vector_1=sg_prove_vector(&((struct sg_vector *)cur)[(signed long int)-1]);
      if((signed int)return_value_sg_prove_vector_1 == SG_ERROR_NONE)
        tmp_if_expr_2 = &((struct sg_vector *)cur)[(signed long int)-1];

      else
        tmp_if_expr_2 = (struct sg_vector *)(void *)0;
      tmp_if_expr_3 = tmp_if_expr_2;
    }

    else
      tmp_if_expr_3 = (struct sg_vector *)(void *)0;
    if(!(last == ((const struct anonymous_12 *)NULL)))
    {
      return_value_sg_prove_vector_4=sg_prove_vector(&((struct sg_vector *)last)[(signed long int)-1]);
      if((signed int)return_value_sg_prove_vector_4 == SG_ERROR_NONE)
        tmp_if_expr_5 = &((struct sg_vector *)last)[(signed long int)-1];

      else
        tmp_if_expr_5 = (struct sg_vector *)(void *)0;
      tmp_if_expr_6 = tmp_if_expr_5;
    }

    else
      tmp_if_expr_6 = (struct sg_vector *)(void *)0;
    rc=sg_vector_compute_diff(&disk_io_diff_vector, tmp_if_expr_3, tmp_if_expr_6);
    if((signed int)rc == SG_ERROR_NONE)
    {
      sg_clear_error();
      if(!(entries == ((unsigned long int *)NULL)))
      {
        if(!(disk_io_diff_vector == ((struct sg_vector *)NULL)))
          tmp_if_expr_7 = disk_io_diff_vector->used_count;

        else
          tmp_if_expr_7 = (unsigned long int)0;
        *entries = tmp_if_expr_7;
      }

      if(!(disk_io_diff_vector == ((struct sg_vector *)NULL)))
        tmp_if_expr_8 = (void *)&disk_io_diff_vector[(signed long int)1];

      else
        tmp_if_expr_8 = (void *)0;
      return (struct anonymous_12 *)tmp_if_expr_8;
    }

    sg_vector_free(disk_io_diff_vector);
  }

  else
    rc=sg_get_error();
  if(!(entries == ((unsigned long int *)NULL)))
    *entries = (unsigned long int)0;

  return (struct anonymous_12 *)(void *)0;
}

// sg_get_disk_io_stats_int
// file disk_stats.c line 1297
static enum anonymous_4 sg_get_disk_io_stats_int(struct sg_vector **disk_io_stats_vector_ptr)
{
  unsigned long int num_diskio = (unsigned long int)0;
  struct anonymous_12 *disk_io_stats;
  signed long int now;
  now=time((signed long int *)(void *)0);
  struct _IO_FILE *f;
  char line_buf[256l];
  const char *format;
  /* assertion disk_io_stats_vector_ptr */
  assert(disk_io_stats_vector_ptr != ((struct sg_vector **)NULL));
  _Bool tmp_if_expr_1;
  if(disk_io_stats_vector_ptr == ((struct sg_vector **)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (struct sg_vector *)(void *)0 == *disk_io_stats_vector_ptr ? (_Bool)1 : (_Bool)0;
  char *return_value_fgets_2;
  struct sg_vector *tmp_if_expr_8;
  struct sg_vector *return_value_sg_vector_resize_6;
  struct sg_vector *return_value_sg_vector_create_7;
  unsigned long int tmp_if_expr_3;
  void *tmp_if_expr_4;
  if(tmp_if_expr_1)
  {
    do
    {
      char *sg_get_disk_io_stats_int__1__1__1____errinfobuf = (char *)(void *)0;
      sg_set_error_fmt((enum anonymous_4)SG_ERROR_INVALID_ARGUMENT, "disk_io_stats_vector_ptr");
      free((void *)sg_get_disk_io_stats_int__1__1__1____errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_INVALID_ARGUMENT;
  }

  else
  {
    num_diskio = (unsigned long int)0;
    f=fopen("/proc/diskstats", "r");
    format = " %*d %*d %99s %*d %*d %llu %*d %*d %*d %llu";
    if(f == ((struct _IO_FILE *)NULL))
    {
      do
      {
        char *__errinfobuf = (char *)(void *)0;
        sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_OPEN, "/proc/diskstats");
        free((void *)__errinfobuf);
      }
      while((_Bool)0);
      return (enum anonymous_4)SG_ERROR_OPEN;
    }

    else
    {
      do
      {
        return_value_fgets_2=fgets(line_buf, (signed int)sizeof(char [256l]) /*256ul*/ , f);
        if(return_value_fgets_2 == ((char *)NULL))
          break;

        char name[100l];
        unsigned long long int rsect;
        unsigned long long int wsect;
        signed int nr;
        nr=sscanf(line_buf, format, (const void *)name, &rsect, &wsect);
        if(nr == 3)
        {
          do
          {
            if(!(*disk_io_stats_vector_ptr == ((struct sg_vector *)NULL)))
            {
              return_value_sg_vector_resize_6=sg_vector_resize(*disk_io_stats_vector_ptr, (unsigned long int)(num_diskio + (unsigned long int)1));
              tmp_if_expr_8 = return_value_sg_vector_resize_6;
            }

            else
            {
              return_value_sg_vector_create_7=sg_vector_create((unsigned long int)(num_diskio + (unsigned long int)1), (unsigned long int)(num_diskio + (unsigned long int)1), (unsigned long int)(num_diskio + (unsigned long int)1), &sg_disk_io_stats_vector_init_info);
              tmp_if_expr_8 = return_value_sg_vector_create_7;
            }
            *disk_io_stats_vector_ptr = tmp_if_expr_8;
            if(!(*disk_io_stats_vector_ptr == ((struct sg_vector *)NULL)))
            {
              if(!(*disk_io_stats_vector_ptr == ((struct sg_vector *)NULL)))
                tmp_if_expr_3 = (*disk_io_stats_vector_ptr)->used_count;

              else
                tmp_if_expr_3 = (unsigned long int)0;
              /* assertion (*(disk_io_stats_vector_ptr) ? (*(disk_io_stats_vector_ptr))->used_count : 0) == ((size_t)(num_diskio + 1)) */
              assert(tmp_if_expr_3 == (unsigned long int)(num_diskio + (unsigned long int)1));
              if(!(*disk_io_stats_vector_ptr == ((struct sg_vector *)NULL)))
                tmp_if_expr_4 = (void *)&(*disk_io_stats_vector_ptr)[(signed long int)1];

              else
                tmp_if_expr_4 = (void *)0;
              disk_io_stats = (struct anonymous_12 *)tmp_if_expr_4;
            }

            else
              if(!((signed int)(num_diskio == 0ul) == -1))
                disk_io_stats = (struct anonymous_12 *)(void *)0;

              else
              {
                fclose(f);
                enum anonymous_4 return_value_sg_get_error_5;
                return_value_sg_get_error_5=sg_get_error();
                return return_value_sg_get_error_5;
              }
          }
          while((_Bool)0);
          enum anonymous_4 return_value_sg_update_string_10;
          return_value_sg_update_string_10=sg_update_string(&(disk_io_stats + (signed long int)num_diskio)->disk_name, name);
          if(!((signed int)return_value_sg_update_string_10 == SG_ERROR_NONE))
          {
            fclose(f);
            do
            {
              char *sg_get_disk_io_stats_int__1__3__2__1____errinfobuf = (char *)(void *)0;
              free((void *)sg_get_disk_io_stats_int__1__3__2__1____errinfobuf);
            }
            while((_Bool)0);
            enum anonymous_4 return_value_sg_get_error_9;
            return_value_sg_get_error_9=sg_get_error();
            return return_value_sg_get_error_9;
          }

          (disk_io_stats + (signed long int)num_diskio)->read_bytes = rsect * (unsigned long int)512;
          (disk_io_stats + (signed long int)num_diskio)->write_bytes = wsect * (unsigned long int)512;
          (disk_io_stats + (signed long int)num_diskio)->systime = now;
          num_diskio = num_diskio + 1ul;
        }

      }
      while((_Bool)1);
      fclose(f);
      return (enum anonymous_4)SG_ERROR_NONE;
    }
  }
}

// sg_get_disk_io_stats_r
// file disk_stats.c line 1999
struct anonymous_12 * sg_get_disk_io_stats_r(unsigned long int *entries)
{
  struct sg_vector *disk_io_vector;
  disk_io_vector=sg_vector_create((unsigned long int)16, (unsigned long int)16, (unsigned long int)0, &sg_disk_io_stats_vector_init_info);
  enum anonymous_4 rc;
  void *tmp_if_expr_1;
  unsigned long int tmp_if_expr_2;
  if(!(disk_io_vector == ((struct sg_vector *)NULL)))
  {
    rc=sg_get_disk_io_stats_int(&disk_io_vector);
    if((signed int)rc == SG_ERROR_NONE)
    {
      struct anonymous_12 *disk_io_stats;
      if(!(disk_io_vector == ((struct sg_vector *)NULL)))
        tmp_if_expr_1 = (void *)&disk_io_vector[(signed long int)1];

      else
        tmp_if_expr_1 = (void *)0;
      disk_io_stats = (struct anonymous_12 *)tmp_if_expr_1;
      sg_clear_error();
      if(!(entries == ((unsigned long int *)NULL)))
      {
        if(!(disk_io_vector == ((struct sg_vector *)NULL)))
          tmp_if_expr_2 = disk_io_vector->used_count;

        else
          tmp_if_expr_2 = (unsigned long int)0;
        *entries = tmp_if_expr_2;
      }

      return disk_io_stats;
    }

    sg_vector_free(disk_io_vector);
  }

  else
    rc=sg_get_error();
  if(!(entries == ((unsigned long int *)NULL)))
    *entries = (unsigned long int)0;

  return (struct anonymous_12 *)(void *)0;
}

// sg_get_error
// file statgrab.h line 115
enum anonymous_4 sg_get_error(void)
{
  struct sg_error_glob *error_glob;
  error_glob=sg_get_error_glob();
  if(error_glob == ((struct sg_error_glob *)NULL))
    return (enum anonymous_4)SG_ERROR_MEMSTATUS;

  else
    return error_glob->error;
}

// sg_get_error_arg
// file error.c line 152
const char * sg_get_error_arg(void)
{
  struct sg_error_glob *error_glob;
  error_glob=sg_get_error_glob();
  if(error_glob == ((struct sg_error_glob *)NULL))
    return (const char *)(void *)0;

  else
    return error_glob->error_arg;
}

// sg_get_error_details
// file error.c line 168
enum anonymous_4 sg_get_error_details(struct sg_error_details *err_details)
{
  struct sg_error_glob *error_glob;
  error_glob=sg_get_error_glob();
  if(err_details == ((struct sg_error_details *)NULL))
  {
    enum anonymous_4 return_value_sg_set_error_int_1;
    return_value_sg_set_error_int_1=sg_set_error_int((enum anonymous_4)SG_ERROR_INVALID_ARGUMENT, 0, "sg_get_error_details", empty_ap);
    return return_value_sg_set_error_int_1;
  }

  if(error_glob == ((struct sg_error_glob *)NULL))
  {
    err_details->error = (enum anonymous_4)SG_ERROR_MEMSTATUS;
    err_details->errno_value = 22;
    err_details->error_arg = "Can't get tls buffer";
    return (enum anonymous_4)SG_ERROR_MEMSTATUS;
  }

  else
  {
    err_details->error = error_glob->error;
    err_details->errno_value = error_glob->errno_value;
    err_details->error_arg = error_glob->error_arg;
    return (enum anonymous_4)SG_ERROR_NONE;
  }
}

// sg_get_error_errno
// file error.c line 160
signed int sg_get_error_errno(void)
{
  struct sg_error_glob *error_glob;
  error_glob=sg_get_error_glob();
  if(error_glob == ((struct sg_error_glob *)NULL))
    return 11;

  else
    return error_glob->errno_value;
}

// sg_get_error_glob
// file error.c line 73
static struct sg_error_glob * sg_get_error_glob(void)
{
  struct sg_error_glob *error_glob;
  void *return_value_sg_comp_get_tls_1;
  return_value_sg_comp_get_tls_1=sg_comp_get_tls(sg_error_glob_id);
  error_glob = (struct sg_error_glob *)return_value_sg_comp_get_tls_1;
  if(error_glob == ((struct sg_error_glob *)NULL))
    error_glob = &pre_init_errs;

  return error_glob;
}

// sg_get_fs_list_int
// file disk_stats.c line 778
static enum anonymous_4 sg_get_fs_list_int(struct sg_vector **fs_stats_vector_ptr)
{
  unsigned long int num_fs = (unsigned long int)0;
  struct anonymous_11 *fs_ptr;
  signed long int now;
  now=time((signed long int *)(void *)0);
  struct _IO_FILE *f;
  char buf[4096l];
  struct mntent mp;
  struct mntent *rc;
  /* assertion fs_stats_vector_ptr */
  assert(fs_stats_vector_ptr != ((struct sg_vector **)NULL));
  f=setmntent("/proc/mounts", "r");
  struct sg_vector *tmp_if_expr_7;
  struct sg_vector *return_value_sg_vector_resize_5;
  struct sg_vector *return_value_sg_vector_create_6;
  unsigned long int tmp_if_expr_2;
  void *tmp_if_expr_3;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_9;
  _Bool tmp_if_expr_10;
  signed int return_value_lstat_11;
  if(f == ((struct _IO_FILE *)NULL))
  {
    do
    {
      char *sg_get_fs_list_int__1__1__1____errinfobuf = (char *)(void *)0;
      sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_SETMNTENT, (const char *)(void *)0);
      free((void *)sg_get_fs_list_int__1__1__1____errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_SETMNTENT;
  }

  else
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 0;
    rc=getmntent_r(f, &mp, buf, (signed int)sizeof(char [4096l]) /*4096ul*/ );
    while(!(rc == ((struct mntent *)NULL)))
    {
      enum anonymous_4 upderr;
      struct stat statbuf;
      do
      {
        if(!(*fs_stats_vector_ptr == ((struct sg_vector *)NULL)))
        {
          return_value_sg_vector_resize_5=sg_vector_resize(*fs_stats_vector_ptr, (unsigned long int)(num_fs + (unsigned long int)1));
          tmp_if_expr_7 = return_value_sg_vector_resize_5;
        }

        else
        {
          return_value_sg_vector_create_6=sg_vector_create((unsigned long int)(num_fs + (unsigned long int)1), (unsigned long int)(num_fs + (unsigned long int)1), (unsigned long int)(num_fs + (unsigned long int)1), &sg_fs_stats_vector_init_info);
          tmp_if_expr_7 = return_value_sg_vector_create_6;
        }
        *fs_stats_vector_ptr = tmp_if_expr_7;
        if(!(*fs_stats_vector_ptr == ((struct sg_vector *)NULL)))
        {
          if(!(*fs_stats_vector_ptr == ((struct sg_vector *)NULL)))
            tmp_if_expr_2 = (*fs_stats_vector_ptr)->used_count;

          else
            tmp_if_expr_2 = (unsigned long int)0;
          /* assertion (*(fs_stats_vector_ptr) ? (*(fs_stats_vector_ptr))->used_count : 0) == ((size_t)(num_fs + 1)) */
          assert(tmp_if_expr_2 == (unsigned long int)(num_fs + (unsigned long int)1));
          if(!(*fs_stats_vector_ptr == ((struct sg_vector *)NULL)))
            tmp_if_expr_3 = (void *)&(*fs_stats_vector_ptr)[(signed long int)1];

          else
            tmp_if_expr_3 = (void *)0;
          fs_ptr = (struct anonymous_11 *)tmp_if_expr_3;
        }

        else
          if(!((signed int)(num_fs == 0ul) == -1))
            fs_ptr = (struct anonymous_11 *)(void *)0;

          else
          {
            endmntent(f);
            enum anonymous_4 return_value_sg_get_error_4;
            return_value_sg_get_error_4=sg_get_error();
            return return_value_sg_get_error_4;
          }
      }
      while((_Bool)0);
      upderr=sg_update_string(&(fs_ptr + (signed long int)num_fs)->device_name, mp.mnt_fsname);
      if(!((signed int)upderr == SG_ERROR_NONE))
        tmp_if_expr_8 = (_Bool)1;

      else
      {
        upderr=sg_update_string(&(fs_ptr + (signed long int)num_fs)->device_canonical, mp.mnt_fsname);
        tmp_if_expr_8 = (signed int)upderr != SG_ERROR_NONE ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_8)
        tmp_if_expr_9 = (_Bool)1;

      else
      {
        upderr=sg_update_string(&(fs_ptr + (signed long int)num_fs)->fs_type, mp.mnt_type);
        tmp_if_expr_9 = (signed int)upderr != SG_ERROR_NONE ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_9)
        tmp_if_expr_10 = (_Bool)1;

      else
      {
        upderr=sg_update_string(&(fs_ptr + (signed long int)num_fs)->mnt_point, mp.mnt_dir);
        tmp_if_expr_10 = (signed int)upderr != SG_ERROR_NONE ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_10)
      {
        do
        {
          char *sg_get_fs_list_int__1__2__1__2__1____errinfobuf = (char *)(void *)0;
          free((void *)sg_get_fs_list_int__1__2__1__2__1____errinfobuf);
        }
        while((_Bool)0);
        return upderr;
      }

      do
      {
        return_value_lstat_11=lstat((fs_ptr + (signed long int)num_fs)->device_canonical, &statbuf);
        if(return_value_lstat_11 == -1)
          break;

        if(!((61440u & statbuf.st_mode) == 40960u))
          break;

        char lnktgt[4097l];
        char *p;
        p=realpath((fs_ptr + (signed long int)num_fs)->device_canonical, lnktgt);
        if(p == ((char *)NULL))
          break;

        upderr=sg_lupdate_string(&(fs_ptr + (signed long int)num_fs)->device_canonical, lnktgt, sizeof(char [4097l]) /*4097ul*/ );
        if(!((signed int)upderr == SG_ERROR_NONE))
        {
          do
          {
            char *__errinfobuf = (char *)(void *)0;
            free((void *)__errinfobuf);
          }
          while((_Bool)0);
          return upderr;
        }

      }
      while((_Bool)1);
      signed int *return_value___errno_location_12;
      return_value___errno_location_12=__errno_location();
      *return_value___errno_location_12 = 0;
      (fs_ptr + (signed long int)num_fs)->device_type = (enum anonymous_8)sg_fs_unknown;
      (fs_ptr + (signed long int)num_fs)->systime = now;
      num_fs = num_fs + 1ul;
      rc=getmntent_r(f, &mp, buf, (signed int)sizeof(char [4096l]) /*4096ul*/ );
    }
    endmntent(f);
    signed int *return_value___errno_location_13;
    return_value___errno_location_13=__errno_location();
    if(!(*return_value___errno_location_13 == 0))
    {
      do
      {
        char *sg_get_fs_list_int__1__3__1____errinfobuf = (char *)(void *)0;
        sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_DISKINFO, "getmntent");
        free((void *)sg_get_fs_list_int__1__3__1____errinfobuf);
      }
      while((_Bool)0);
      return (enum anonymous_4)SG_ERROR_DISKINFO;
    }

    else
      return (enum anonymous_4)SG_ERROR_NONE;
  }
}

// sg_get_fs_stats
// file disk_stats.c line 1268
struct anonymous_11 * sg_get_fs_stats(unsigned long int *entries)
{
  struct sg_disk_glob *disk_glob;
  void *return_value_sg_comp_get_tls_1;
  return_value_sg_comp_get_tls_1=sg_comp_get_tls(sg_disk_glob_id);
  disk_glob = (struct sg_disk_glob *)return_value_sg_comp_get_tls_1;
  enum anonymous_4 rc;
  void *tmp_if_expr_2;
  unsigned long int tmp_if_expr_3;
  if(disk_glob == ((struct sg_disk_glob *)NULL))
  {
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_11 *)(void *)0;
  }

  else
  {
    if(disk_glob->disk_vectors[0l] == ((struct sg_vector *)NULL))
      disk_glob->disk_vectors[(signed long int)0]=sg_vector_create((unsigned long int)16, (unsigned long int)16, (unsigned long int)0, &sg_fs_stats_vector_init_info);

    else
      sg_vector_clear(disk_glob->disk_vectors[(signed long int)0]);
    if(!(disk_glob->disk_vectors[0l] == ((struct sg_vector *)NULL)))
    {
      rc=sg_get_fs_stats_int(&disk_glob->disk_vectors[(signed long int)0]);
      if((signed int)rc == SG_ERROR_NONE)
      {
        struct anonymous_11 *fs_stats;
        if(!(disk_glob->disk_vectors[0l] == ((struct sg_vector *)NULL)))
          tmp_if_expr_2 = (void *)&disk_glob->disk_vectors[(signed long int)0][(signed long int)1];

        else
          tmp_if_expr_2 = (void *)0;
        fs_stats = (struct anonymous_11 *)tmp_if_expr_2;
        sg_clear_error();
        if(!(entries == ((unsigned long int *)NULL)))
        {
          if(!(disk_glob->disk_vectors[0l] == ((struct sg_vector *)NULL)))
            tmp_if_expr_3 = disk_glob->disk_vectors[(signed long int)0]->used_count;

          else
            tmp_if_expr_3 = (unsigned long int)0;
          *entries = tmp_if_expr_3;
        }

        return fs_stats;
      }

    }

    else
      rc=sg_get_error();
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_11 *)(void *)0;
  }
}

// sg_get_fs_stats_diff
// file disk_stats.c line 1269
struct anonymous_11 * sg_get_fs_stats_diff(unsigned long int *entries)
{
  struct sg_disk_glob *disk_glob;
  void *return_value_sg_comp_get_tls_1;
  return_value_sg_comp_get_tls_1=sg_comp_get_tls(sg_disk_glob_id);
  disk_glob = (struct sg_disk_glob *)return_value_sg_comp_get_tls_1;
  unsigned long int tmp_if_expr_3;
  void *tmp_if_expr_4;
  if(disk_glob == ((struct sg_disk_glob *)NULL))
  {
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_11 *)(void *)0;
  }

  else
  {
    if(disk_glob->disk_vectors[0l] == ((struct sg_vector *)NULL))
    {
      struct anonymous_11 *return_value_sg_get_fs_stats_2;
      return_value_sg_get_fs_stats_2=sg_get_fs_stats(entries);
      return return_value_sg_get_fs_stats_2;
    }

    if(disk_glob->disk_vectors[1l] == ((struct sg_vector *)NULL))
      disk_glob->disk_vectors[(signed long int)1]=sg_vector_create((unsigned long int)disk_glob->disk_vectors[(signed long int)0]->used_count, (unsigned long int)disk_glob->disk_vectors[(signed long int)0]->used_count, (unsigned long int)0, &sg_fs_stats_vector_init_info);

    if(!(disk_glob->disk_vectors[1l] == ((struct sg_vector *)NULL)))
    {
      enum anonymous_4 rc;
      struct sg_vector *last;
      last=sg_vector_clone(disk_glob->disk_vectors[(signed long int)0]);
      if(!(last == ((struct sg_vector *)NULL)))
      {
        sg_get_fs_stats((unsigned long int *)(void *)0);
        rc=sg_vector_compute_diff(&disk_glob->disk_vectors[(signed long int)1], disk_glob->disk_vectors[(signed long int)0], last);
        sg_vector_free(last);
        if((signed int)rc == SG_ERROR_NONE)
        {
          sg_clear_error();
          if(!(entries == ((unsigned long int *)NULL)))
          {
            if(!(disk_glob->disk_vectors[1l] == ((struct sg_vector *)NULL)))
              tmp_if_expr_3 = disk_glob->disk_vectors[(signed long int)1]->used_count;

            else
              tmp_if_expr_3 = (unsigned long int)0;
            *entries = tmp_if_expr_3;
          }

          if(!(disk_glob->disk_vectors[1l] == ((struct sg_vector *)NULL)))
            tmp_if_expr_4 = (void *)&disk_glob->disk_vectors[(signed long int)1][(signed long int)1];

          else
            tmp_if_expr_4 = (void *)0;
          return (struct anonymous_11 *)tmp_if_expr_4;
        }

      }

    }


  err_out:
    ;
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_11 *)(void *)0;
  }
}

// sg_get_fs_stats_diff_between
// file disk_stats.c line 1269
struct anonymous_11 * sg_get_fs_stats_diff_between(const struct anonymous_11 *cur, const struct anonymous_11 *last, unsigned long int *entries)
{
  struct sg_vector *fs_diff_vector;
  enum anonymous_4 rc;
  fs_diff_vector=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)0, &sg_fs_stats_vector_init_info);
  struct sg_vector *tmp_if_expr_3;
  enum anonymous_4 return_value_sg_prove_vector_1;
  struct sg_vector *tmp_if_expr_2;
  struct sg_vector *tmp_if_expr_6;
  enum anonymous_4 return_value_sg_prove_vector_4;
  struct sg_vector *tmp_if_expr_5;
  unsigned long int tmp_if_expr_7;
  void *tmp_if_expr_8;
  if(!(fs_diff_vector == ((struct sg_vector *)NULL)))
  {
    if(!(cur == ((const struct anonymous_11 *)NULL)))
    {
      return_value_sg_prove_vector_1=sg_prove_vector(&((struct sg_vector *)cur)[(signed long int)-1]);
      if((signed int)return_value_sg_prove_vector_1 == SG_ERROR_NONE)
        tmp_if_expr_2 = &((struct sg_vector *)cur)[(signed long int)-1];

      else
        tmp_if_expr_2 = (struct sg_vector *)(void *)0;
      tmp_if_expr_3 = tmp_if_expr_2;
    }

    else
      tmp_if_expr_3 = (struct sg_vector *)(void *)0;
    if(!(last == ((const struct anonymous_11 *)NULL)))
    {
      return_value_sg_prove_vector_4=sg_prove_vector(&((struct sg_vector *)last)[(signed long int)-1]);
      if((signed int)return_value_sg_prove_vector_4 == SG_ERROR_NONE)
        tmp_if_expr_5 = &((struct sg_vector *)last)[(signed long int)-1];

      else
        tmp_if_expr_5 = (struct sg_vector *)(void *)0;
      tmp_if_expr_6 = tmp_if_expr_5;
    }

    else
      tmp_if_expr_6 = (struct sg_vector *)(void *)0;
    rc=sg_vector_compute_diff(&fs_diff_vector, tmp_if_expr_3, tmp_if_expr_6);
    if((signed int)rc == SG_ERROR_NONE)
    {
      sg_clear_error();
      if(!(entries == ((unsigned long int *)NULL)))
      {
        if(!(fs_diff_vector == ((struct sg_vector *)NULL)))
          tmp_if_expr_7 = fs_diff_vector->used_count;

        else
          tmp_if_expr_7 = (unsigned long int)0;
        *entries = tmp_if_expr_7;
      }

      if(!(fs_diff_vector == ((struct sg_vector *)NULL)))
        tmp_if_expr_8 = (void *)&fs_diff_vector[(signed long int)1];

      else
        tmp_if_expr_8 = (void *)0;
      return (struct anonymous_11 *)tmp_if_expr_8;
    }

    sg_vector_free(fs_diff_vector);
  }

  else
    rc=sg_get_error();
  if(!(entries == ((unsigned long int *)NULL)))
    *entries = (unsigned long int)0;

  return (struct anonymous_11 *)(void *)0;
}

// sg_get_fs_stats_int
// file disk_stats.c line 1221
static enum anonymous_4 sg_get_fs_stats_int(struct sg_vector **fs_stats_vector_ptr)
{
  struct sg_vector *tmp = (struct sg_vector *)(void *)0;
  enum anonymous_4 err;
  err=sg_get_fs_list_int(&tmp);
  unsigned long int i;
  unsigned long int j;
  unsigned long int n = (unsigned long int)0;
  struct anonymous_11 *items;
  struct anonymous_11 *item;
  void *tmp_if_expr_1;
  if(!(tmp == ((struct sg_vector *)NULL)))
    tmp_if_expr_1 = (void *)&tmp[(signed long int)1];

  else
    tmp_if_expr_1 = (void *)0;
  item = (struct anonymous_11 *)tmp_if_expr_1;
  signed long int item_array_size0;
  unsigned long int tmp_if_expr_2;
  if(!(tmp == ((struct sg_vector *)NULL)))
    tmp_if_expr_2 = tmp->used_count;

  else
    tmp_if_expr_2 = (unsigned long int)0;
  item_array_size0 = (signed long int)(tmp_if_expr_2 / ((unsigned long int)8 * sizeof(unsigned int) /*4ul*/ ) + (unsigned long int)1);
  unsigned int valid[item_array_size0];
  memset((void *)valid, 0, 4ul * (unsigned long int)item_array_size0);
  unsigned long int tmp_if_expr_3;
  if((signed int)err == SG_ERROR_NONE && !(tmp == ((struct sg_vector *)NULL)))
  {
    if(!(tmp == ((struct sg_vector *)NULL)))
      tmp_if_expr_3 = tmp->used_count;

    else
      tmp_if_expr_3 = (unsigned long int)0;
    i = tmp_if_expr_3;
    item = item + (signed long int)i;
    while(!(i == 0ul))
    {
      i = i - 1ul;
      item = item - 1l;
      signed int return_value_is_valid_fs_type_5;
      return_value_is_valid_fs_type_5=is_valid_fs_type(item->fs_type);
      if(!(return_value_is_valid_fs_type_5 == 0))
      {
        enum anonymous_4 return_value_sg_fill_fs_stat_int_4;
        return_value_sg_fill_fs_stat_int_4=sg_fill_fs_stat_int(item);
        if(!((signed int)return_value_sg_fill_fs_stat_int_4 == SG_ERROR_NONE))
          continue;

        valid[(signed long int)(i / ((unsigned long int)8 * sizeof(unsigned int) /*4ul*/ ))] = valid[(signed long int)(i / ((unsigned long int)8 * sizeof(unsigned int) /*4ul*/ ))] | (unsigned int)(1 << i % ((unsigned long int)8 * sizeof(unsigned int) /*4ul*/ ));
        n = n + 1ul;
      }

    }
  }

  struct sg_vector *tmp_if_expr_11;
  struct sg_vector *return_value_sg_vector_resize_9;
  struct sg_vector *return_value_sg_vector_create_10;
  unsigned long int tmp_if_expr_6;
  void *tmp_if_expr_7;
  do
  {
    if(!(*fs_stats_vector_ptr == ((struct sg_vector *)NULL)))
    {
      return_value_sg_vector_resize_9=sg_vector_resize(*fs_stats_vector_ptr, (unsigned long int)n);
      tmp_if_expr_11 = return_value_sg_vector_resize_9;
    }

    else
    {
      return_value_sg_vector_create_10=sg_vector_create((unsigned long int)n, (unsigned long int)n, (unsigned long int)n, &sg_fs_stats_vector_init_info);
      tmp_if_expr_11 = return_value_sg_vector_create_10;
    }
    *fs_stats_vector_ptr = tmp_if_expr_11;
    if(!(*fs_stats_vector_ptr == ((struct sg_vector *)NULL)))
    {
      if(!(*fs_stats_vector_ptr == ((struct sg_vector *)NULL)))
        tmp_if_expr_6 = (*fs_stats_vector_ptr)->used_count;

      else
        tmp_if_expr_6 = (unsigned long int)0;
      /* assertion (*(fs_stats_vector_ptr) ? (*(fs_stats_vector_ptr))->used_count : 0) == ((size_t)(n)) */
      assert(tmp_if_expr_6 == (unsigned long int)n);
      if(!(*fs_stats_vector_ptr == ((struct sg_vector *)NULL)))
        tmp_if_expr_7 = (void *)&(*fs_stats_vector_ptr)[(signed long int)1];

      else
        tmp_if_expr_7 = (void *)0;
      items = (struct anonymous_11 *)tmp_if_expr_7;
    }

    else
      if(n == 0ul)
        items = (struct anonymous_11 *)(void *)0;

      else
      {
        enum anonymous_4 return_value_sg_get_error_8;
        return_value_sg_get_error_8=sg_get_error();
        return return_value_sg_get_error_8;
      }
  }
  while((_Bool)0);
  i = (unsigned long int)0;
  void *tmp_if_expr_12;
  if(!(tmp == ((struct sg_vector *)NULL)))
    tmp_if_expr_12 = (void *)&tmp[(signed long int)1];

  else
    tmp_if_expr_12 = (void *)0;
  item = (struct anonymous_11 *)tmp_if_expr_12;
  j = (unsigned long int)0;
  unsigned long int tmp_if_expr_13;
  for( ; !(j >= n); i = i + 1ul)
  {
    for( ; (valid[(signed long int)(i / sizeof(unsigned int) * 8 /*32ul*/ )] & (unsigned int)(1 << i % sizeof(unsigned int) * 8 /*32ul*/ )) == 0u; i = i + 1ul)
      ;
    if(!(tmp == ((struct sg_vector *)NULL)))
      tmp_if_expr_13 = tmp->used_count;

    else
      tmp_if_expr_13 = (unsigned long int)0;
    if(i >= tmp_if_expr_13)
      break;

    sg_fs_stats_item_copy(item + (signed long int)i, items + (signed long int)j);
    j = j + 1ul;
  }
  /* assertion j == n */
  assert(j == n);
  sg_vector_free(tmp);
  return err;
}

// sg_get_fs_stats_r
// file disk_stats.c line 1268
struct anonymous_11 * sg_get_fs_stats_r(unsigned long int *entries)
{
  struct sg_vector *fs_vector;
  fs_vector=sg_vector_create((unsigned long int)16, (unsigned long int)16, (unsigned long int)0, &sg_fs_stats_vector_init_info);
  enum anonymous_4 rc;
  void *tmp_if_expr_1;
  unsigned long int tmp_if_expr_2;
  if(!(fs_vector == ((struct sg_vector *)NULL)))
  {
    rc=sg_get_fs_stats_int(&fs_vector);
    if((signed int)rc == SG_ERROR_NONE)
    {
      struct anonymous_11 *fs_stats;
      if(!(fs_vector == ((struct sg_vector *)NULL)))
        tmp_if_expr_1 = (void *)&fs_vector[(signed long int)1];

      else
        tmp_if_expr_1 = (void *)0;
      fs_stats = (struct anonymous_11 *)tmp_if_expr_1;
      sg_clear_error();
      if(!(entries == ((unsigned long int *)NULL)))
      {
        if(!(fs_vector == ((struct sg_vector *)NULL)))
          tmp_if_expr_2 = fs_vector->used_count;

        else
          tmp_if_expr_2 = (unsigned long int)0;
        *entries = tmp_if_expr_2;
      }

      return fs_stats;
    }

    sg_vector_free(fs_vector);
  }

  else
    rc=sg_get_error();
  if(!(entries == ((unsigned long int *)NULL)))
    *entries = (unsigned long int)0;

  return (struct anonymous_11 *)(void *)0;
}

// sg_get_host_info
// file os_info.c line 631
struct anonymous_3 * sg_get_host_info(unsigned long int *entries)
{
  struct sg_os_glob *os_glob;
  void *return_value_sg_comp_get_tls_1;
  return_value_sg_comp_get_tls_1=sg_comp_get_tls(sg_os_glob_id);
  os_glob = (struct sg_os_glob *)return_value_sg_comp_get_tls_1;
  enum anonymous_4 rc;
  void *tmp_if_expr_2;
  unsigned long int tmp_if_expr_3;
  if(os_glob == ((struct sg_os_glob *)NULL))
  {
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_3 *)(void *)0;
  }

  else
  {
    if(os_glob->os_vectors[0l] == ((struct sg_vector *)NULL))
      os_glob->os_vectors[(signed long int)0]=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)1, &sg_os_stats_vector_init_info);

    if(!(os_glob->os_vectors[0l] == ((struct sg_vector *)NULL)))
    {
      struct anonymous_3 *os_stats;
      if(!(os_glob->os_vectors[0l] == ((struct sg_vector *)NULL)))
        tmp_if_expr_2 = (void *)&os_glob->os_vectors[(signed long int)0][(signed long int)1];

      else
        tmp_if_expr_2 = (void *)0;
      os_stats = (struct anonymous_3 *)tmp_if_expr_2;
      rc=sg_get_host_info_int(os_stats);
      if((signed int)rc == SG_ERROR_NONE)
      {
        sg_clear_error();
        if(!(entries == ((unsigned long int *)NULL)))
        {
          if(!(os_glob->os_vectors[0l] == ((struct sg_vector *)NULL)))
            tmp_if_expr_3 = os_glob->os_vectors[(signed long int)0]->used_count;

          else
            tmp_if_expr_3 = (unsigned long int)0;
          *entries = tmp_if_expr_3;
        }

        return os_stats;
      }

    }

    else
      rc=sg_get_error();
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_3 *)(void *)0;
  }
}

// sg_get_host_info_int
// file os_info.c line 185
static enum anonymous_4 sg_get_host_info_int(struct anonymous_3 *host_info_buf)
{
  struct utsname os;
  struct _IO_FILE *f;
  host_info_buf->ncpus = (unsigned int)0;
  host_info_buf->maxcpus = (unsigned int)0;
  host_info_buf->bitwidth = (unsigned int)0;
  host_info_buf->host_state = (enum anonymous_2)sg_unknown_configuration;
  host_info_buf->uptime = (signed long int)0;
  host_info_buf->systime = (signed long int)0;
  signed int return_value_uname_1;
  return_value_uname_1=uname(&os);
  _Bool tmp_if_expr_18;
  signed int return_value_access_17;
  if(!(return_value_uname_1 >= 0))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_UNAME, (const char *)(void *)0);
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_UNAME;
  }

  else
  {
    enum anonymous_4 return_value_sg_update_string_3;
    return_value_sg_update_string_3=sg_update_string(&host_info_buf->os_name, os.sysname);
    if(!((signed int)return_value_sg_update_string_3 == SG_ERROR_NONE))
    {
      do
      {
        char *sg_get_host_info_int__1__2__1____errinfobuf = (char *)(void *)0;
        free((void *)sg_get_host_info_int__1__2__1____errinfobuf);
      }
      while((_Bool)0);
      enum anonymous_4 return_value_sg_get_error_2;
      return_value_sg_get_error_2=sg_get_error();
      return return_value_sg_get_error_2;
    }

    enum anonymous_4 return_value_sg_update_string_5;
    return_value_sg_update_string_5=sg_update_string(&host_info_buf->os_release, os.release);
    if(!((signed int)return_value_sg_update_string_5 == SG_ERROR_NONE))
    {
      do
      {
        char *sg_get_host_info_int__1__3__1____errinfobuf = (char *)(void *)0;
        free((void *)sg_get_host_info_int__1__3__1____errinfobuf);
      }
      while((_Bool)0);
      enum anonymous_4 return_value_sg_get_error_4;
      return_value_sg_get_error_4=sg_get_error();
      return return_value_sg_get_error_4;
    }

    enum anonymous_4 return_value_sg_update_string_7;
    return_value_sg_update_string_7=sg_update_string(&host_info_buf->os_version, os.version);
    if(!((signed int)return_value_sg_update_string_7 == SG_ERROR_NONE))
    {
      do
      {
        char *sg_get_host_info_int__1__4__1____errinfobuf = (char *)(void *)0;
        free((void *)sg_get_host_info_int__1__4__1____errinfobuf);
      }
      while((_Bool)0);
      enum anonymous_4 return_value_sg_get_error_6;
      return_value_sg_get_error_6=sg_get_error();
      return return_value_sg_get_error_6;
    }

    enum anonymous_4 return_value_sg_update_string_9;
    return_value_sg_update_string_9=sg_update_string(&host_info_buf->platform, os.machine);
    if(!((signed int)return_value_sg_update_string_9 == SG_ERROR_NONE))
    {
      do
      {
        char *sg_get_host_info_int__1__5__1____errinfobuf = (char *)(void *)0;
        free((void *)sg_get_host_info_int__1__5__1____errinfobuf);
      }
      while((_Bool)0);
      enum anonymous_4 return_value_sg_get_error_8;
      return_value_sg_get_error_8=sg_get_error();
      return return_value_sg_get_error_8;
    }

    enum anonymous_4 return_value_sg_update_string_11;
    return_value_sg_update_string_11=sg_update_string(&host_info_buf->hostname, os.nodename);
    if(!((signed int)return_value_sg_update_string_11 == SG_ERROR_NONE))
    {
      do
      {
        char *sg_get_host_info_int__1__6__1____errinfobuf = (char *)(void *)0;
        free((void *)sg_get_host_info_int__1__6__1____errinfobuf);
      }
      while((_Bool)0);
      enum anonymous_4 return_value_sg_get_error_10;
      return_value_sg_get_error_10=sg_get_error();
      return return_value_sg_get_error_10;
    }

    f=fopen("/proc/uptime", "r");
    if(f == ((struct _IO_FILE *)NULL))
    {
      do
      {
        char *sg_get_host_info_int__1__7__1____errinfobuf = (char *)(void *)0;
        sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_OPEN, "/proc/uptime");
        free((void *)sg_get_host_info_int__1__7__1____errinfobuf);
      }
      while((_Bool)0);
      return (enum anonymous_4)SG_ERROR_OPEN;
    }

    else
    {
      signed int return_value_fscanf_12;
      return_value_fscanf_12=fscanf(f, sizeof(signed int [1l]) /*4ul*/  == sizeof(signed int [1l]) /*4ul*/  ? "%ld %*d" : "%lu %*d", &host_info_buf->uptime);
      if(!(return_value_fscanf_12 == 1))
      {
        fclose(f);
        do
        {
          char *sg_get_host_info_int__1__8__1____errinfobuf = (char *)(void *)0;
          sg_set_error_fmt((enum anonymous_4)SG_ERROR_PARSE, (const char *)(void *)0);
          free((void *)sg_get_host_info_int__1__8__1____errinfobuf);
        }
        while((_Bool)0);
        return (enum anonymous_4)SG_ERROR_PARSE;
      }

      else
      {
        fclose(f);
        signed long int return_value_sysconf_13;
        return_value_sysconf_13=sysconf(84);
        host_info_buf->ncpus = (unsigned int)return_value_sysconf_13;
        signed long int return_value_sysconf_14;
        return_value_sysconf_14=sysconf(83);
        host_info_buf->maxcpus = (unsigned int)return_value_sysconf_14;
        signed int return_value_access_16;
        return_value_access_16=access("/proc/sys/kernel/vsyscall64", 0);
        if(return_value_access_16 == 0)
          tmp_if_expr_18 = (_Bool)1;

        else
        {
          return_value_access_17=access("/proc/sys/abi/vsyscall32", 0);
          tmp_if_expr_18 = return_value_access_17 == 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_18)
          host_info_buf->bitwidth = (unsigned int)64;

        else
        {
          signed long int return_value_sysconf_15;
          return_value_sysconf_15=sysconf(106);
          host_info_buf->bitwidth = (unsigned int)return_value_sysconf_15;
        }
        host_info_buf->host_state = (enum anonymous_2)sg_unknown_configuration;
        host_info_buf->systime=time((signed long int *)(void *)0);
        return (enum anonymous_4)SG_ERROR_NONE;
      }
    }
  }
}

// sg_get_host_info_r
// file os_info.c line 631
struct anonymous_3 * sg_get_host_info_r(unsigned long int *entries)
{
  struct sg_vector *os_stats_vector;
  os_stats_vector=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)1, &sg_os_stats_vector_init_info);
  enum anonymous_4 rc;
  void *tmp_if_expr_1;
  unsigned long int tmp_if_expr_2;
  if(!(os_stats_vector == ((struct sg_vector *)NULL)))
  {
    struct anonymous_3 *os_stats;
    if(!(os_stats_vector == ((struct sg_vector *)NULL)))
      tmp_if_expr_1 = (void *)&os_stats_vector[(signed long int)1];

    else
      tmp_if_expr_1 = (void *)0;
    os_stats = (struct anonymous_3 *)tmp_if_expr_1;
    rc=sg_get_host_info_int(os_stats);
    if((signed int)rc == SG_ERROR_NONE)
    {
      sg_clear_error();
      if(!(entries == ((unsigned long int *)NULL)))
      {
        if(!(os_stats_vector == ((struct sg_vector *)NULL)))
          tmp_if_expr_2 = os_stats_vector->used_count;

        else
          tmp_if_expr_2 = (unsigned long int)0;
        *entries = tmp_if_expr_2;
      }

      return os_stats;
    }

    sg_vector_free(os_stats_vector);
  }

  else
    rc=sg_get_error();
  if(!(entries == ((unsigned long int *)NULL)))
    *entries = (unsigned long int)0;

  return (struct anonymous_3 *)(void *)0;
}

// sg_get_ll_match
// file tools.h line 518
signed long long int sg_get_ll_match(char *line, struct anonymous_6 *match)
{
  char *ptr;
  signed long long int num;
  ptr = line + (signed long int)match->rm_so;
  num=atoll(ptr);
  return num;
}

// sg_get_load_stats
// file load_stats.c line 114
struct anonymous_17 * sg_get_load_stats(unsigned long int *entries)
{
  struct sg_load_glob *load_glob;
  void *return_value_sg_comp_get_tls_1;
  return_value_sg_comp_get_tls_1=sg_comp_get_tls(sg_load_glob_id);
  load_glob = (struct sg_load_glob *)return_value_sg_comp_get_tls_1;
  enum anonymous_4 rc;
  void *tmp_if_expr_2;
  unsigned long int tmp_if_expr_3;
  if(load_glob == ((struct sg_load_glob *)NULL))
  {
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_17 *)(void *)0;
  }

  else
  {
    if(load_glob->load_vectors[0l] == ((struct sg_vector *)NULL))
      load_glob->load_vectors[(signed long int)0]=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)1, &sg_load_stats_vector_init_info);

    if(!(load_glob->load_vectors[0l] == ((struct sg_vector *)NULL)))
    {
      struct anonymous_17 *load_stats;
      if(!(load_glob->load_vectors[0l] == ((struct sg_vector *)NULL)))
        tmp_if_expr_2 = (void *)&load_glob->load_vectors[(signed long int)0][(signed long int)1];

      else
        tmp_if_expr_2 = (void *)0;
      load_stats = (struct anonymous_17 *)tmp_if_expr_2;
      rc=sg_get_load_stats_int(load_stats);
      if((signed int)rc == SG_ERROR_NONE)
      {
        sg_clear_error();
        if(!(entries == ((unsigned long int *)NULL)))
        {
          if(!(load_glob->load_vectors[0l] == ((struct sg_vector *)NULL)))
            tmp_if_expr_3 = load_glob->load_vectors[(signed long int)0]->used_count;

          else
            tmp_if_expr_3 = (unsigned long int)0;
          *entries = tmp_if_expr_3;
        }

        return load_stats;
      }

    }

    else
      rc=sg_get_error();
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_17 *)(void *)0;
  }
}

// sg_get_load_stats_int
// file load_stats.c line 27
static enum anonymous_4 sg_get_load_stats_int(struct anonymous_17 *load_stats_buf)
{
  double loadav[3l];
  load_stats_buf->min15 = (double)0;
  load_stats_buf->min5 = load_stats_buf->min15;
  load_stats_buf->min1 = load_stats_buf->min5;
  getloadavg(loadav, 3);
  load_stats_buf->min1 = loadav[(signed long int)0];
  load_stats_buf->min5 = loadav[(signed long int)1];
  load_stats_buf->min15 = loadav[(signed long int)2];
  load_stats_buf->systime=time((signed long int *)(void *)0);
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_get_load_stats_r
// file load_stats.c line 114
struct anonymous_17 * sg_get_load_stats_r(unsigned long int *entries)
{
  struct sg_vector *load_stats_vector;
  load_stats_vector=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)1, &sg_load_stats_vector_init_info);
  enum anonymous_4 rc;
  void *tmp_if_expr_1;
  unsigned long int tmp_if_expr_2;
  if(!(load_stats_vector == ((struct sg_vector *)NULL)))
  {
    struct anonymous_17 *load_stats;
    if(!(load_stats_vector == ((struct sg_vector *)NULL)))
      tmp_if_expr_1 = (void *)&load_stats_vector[(signed long int)1];

    else
      tmp_if_expr_1 = (void *)0;
    load_stats = (struct anonymous_17 *)tmp_if_expr_1;
    rc=sg_get_load_stats_int(load_stats);
    if((signed int)rc == SG_ERROR_NONE)
    {
      sg_clear_error();
      if(!(entries == ((unsigned long int *)NULL)))
      {
        if(!(load_stats_vector == ((struct sg_vector *)NULL)))
          tmp_if_expr_2 = load_stats_vector->used_count;

        else
          tmp_if_expr_2 = (unsigned long int)0;
        *entries = tmp_if_expr_2;
      }

      return load_stats;
    }

    sg_vector_free(load_stats_vector);
  }

  else
    rc=sg_get_error();
  if(!(entries == ((unsigned long int *)NULL)))
    *entries = (unsigned long int)0;

  return (struct anonymous_17 *)(void *)0;
}

// sg_get_mem_stats
// file memory_stats.c line 406
struct anonymous_16 * sg_get_mem_stats(unsigned long int *entries)
{
  struct sg_mem_glob *mem_glob;
  void *return_value_sg_comp_get_tls_1;
  return_value_sg_comp_get_tls_1=sg_comp_get_tls(sg_mem_glob_id);
  mem_glob = (struct sg_mem_glob *)return_value_sg_comp_get_tls_1;
  enum anonymous_4 rc;
  void *tmp_if_expr_2;
  unsigned long int tmp_if_expr_3;
  if(mem_glob == ((struct sg_mem_glob *)NULL))
  {
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_16 *)(void *)0;
  }

  else
  {
    if(mem_glob->mem_vectors[0l] == ((struct sg_vector *)NULL))
      mem_glob->mem_vectors[(signed long int)0]=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)1, &sg_mem_stats_vector_init_info);

    if(!(mem_glob->mem_vectors[0l] == ((struct sg_vector *)NULL)))
    {
      struct anonymous_16 *mem_stats;
      if(!(mem_glob->mem_vectors[0l] == ((struct sg_vector *)NULL)))
        tmp_if_expr_2 = (void *)&mem_glob->mem_vectors[(signed long int)0][(signed long int)1];

      else
        tmp_if_expr_2 = (void *)0;
      mem_stats = (struct anonymous_16 *)tmp_if_expr_2;
      rc=sg_get_mem_stats_int(mem_stats);
      if((signed int)rc == SG_ERROR_NONE)
      {
        sg_clear_error();
        if(!(entries == ((unsigned long int *)NULL)))
        {
          if(!(mem_glob->mem_vectors[0l] == ((struct sg_vector *)NULL)))
            tmp_if_expr_3 = mem_glob->mem_vectors[(signed long int)0]->used_count;

          else
            tmp_if_expr_3 = (unsigned long int)0;
          *entries = tmp_if_expr_3;
        }

        return mem_stats;
      }

    }

    else
      rc=sg_get_error();
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_16 *)(void *)0;
  }
}

// sg_get_mem_stats_int
// file memory_stats.c line 76
static enum anonymous_4 sg_get_mem_stats_int(struct anonymous_16 *mem_stats_buf)
{
  char *line_ptr;
  char line_buf[256l];
  signed long long int value;
  struct _IO_FILE *f;
  f=fopen("/proc/meminfo", "r");
  signed int return_value_strncmp_3;
  signed int return_value_strncmp_2;
  if(f == ((struct _IO_FILE *)NULL))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_OPEN, "/proc/meminfo");
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_OPEN;
  }

  else
  {
    do
    {
      line_ptr=fgets(line_buf, (signed int)sizeof(char [256l]) /*256ul*/ , f);
      if(line_ptr == ((char *)NULL))
        break;

      signed int return_value_sscanf_1;
      return_value_sscanf_1=sscanf(line_buf, "%*s %lld kB", &value);
      if(return_value_sscanf_1 == 1)
      {
        signed int return_value_strncmp_4;
        return_value_strncmp_4=strncmp(line_buf, "MemTotal:", sizeof(char [10l]) /*10ul*/  - (unsigned long int)1);
        if(return_value_strncmp_4 == 0)
          mem_stats_buf->total = (unsigned long long int)value;

        else
        {
          return_value_strncmp_3=strncmp(line_buf, "MemFree:", sizeof(char [9l]) /*9ul*/  - (unsigned long int)1);
          if(return_value_strncmp_3 == 0)
            mem_stats_buf->free = (unsigned long long int)value;

          else
          {
            return_value_strncmp_2=strncmp(line_buf, "Cached:", sizeof(char [8l]) /*8ul*/  - (unsigned long int)1);
            if(return_value_strncmp_2 == 0)
              mem_stats_buf->cache = (unsigned long long int)value;

          }
        }
      }

    }
    while((_Bool)1);
    mem_stats_buf->free = mem_stats_buf->free + mem_stats_buf->cache;
    mem_stats_buf->total = mem_stats_buf->total * (unsigned long long int)1024;
    mem_stats_buf->free = mem_stats_buf->free * (unsigned long long int)1024;
    mem_stats_buf->cache = mem_stats_buf->cache * (unsigned long long int)1024;
    fclose(f);
    mem_stats_buf->used = mem_stats_buf->total - mem_stats_buf->free;
    mem_stats_buf->systime=time((signed long int *)(void *)0);
    return (enum anonymous_4)SG_ERROR_NONE;
  }
}

// sg_get_mem_stats_r
// file memory_stats.c line 406
struct anonymous_16 * sg_get_mem_stats_r(unsigned long int *entries)
{
  struct sg_vector *mem_stats_vector;
  mem_stats_vector=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)1, &sg_mem_stats_vector_init_info);
  enum anonymous_4 rc;
  void *tmp_if_expr_1;
  unsigned long int tmp_if_expr_2;
  if(!(mem_stats_vector == ((struct sg_vector *)NULL)))
  {
    struct anonymous_16 *mem_stats;
    if(!(mem_stats_vector == ((struct sg_vector *)NULL)))
      tmp_if_expr_1 = (void *)&mem_stats_vector[(signed long int)1];

    else
      tmp_if_expr_1 = (void *)0;
    mem_stats = (struct anonymous_16 *)tmp_if_expr_1;
    rc=sg_get_mem_stats_int(mem_stats);
    if((signed int)rc == SG_ERROR_NONE)
    {
      sg_clear_error();
      if(!(entries == ((unsigned long int *)NULL)))
      {
        if(!(mem_stats_vector == ((struct sg_vector *)NULL)))
          tmp_if_expr_2 = mem_stats_vector->used_count;

        else
          tmp_if_expr_2 = (unsigned long int)0;
        *entries = tmp_if_expr_2;
      }

      return mem_stats;
    }

    sg_vector_free(mem_stats_vector);
  }

  else
    rc=sg_get_error();
  if(!(entries == ((unsigned long int *)NULL)))
    *entries = (unsigned long int)0;

  return (struct anonymous_16 *)(void *)0;
}

// sg_get_nelements
// file vector.c line 212
unsigned long int sg_get_nelements(const void *data)
{
  const struct sg_vector *vector;
  struct sg_vector *tmp_if_expr_3;
  enum anonymous_4 return_value_sg_prove_vector_1;
  struct sg_vector *tmp_if_expr_2;
  if(!(data == NULL))
  {
    return_value_sg_prove_vector_1=sg_prove_vector(&((struct sg_vector *)data)[(signed long int)-1]);
    if((signed int)return_value_sg_prove_vector_1 == SG_ERROR_NONE)
      tmp_if_expr_2 = &((struct sg_vector *)data)[(signed long int)-1];

    else
      tmp_if_expr_2 = (struct sg_vector *)(void *)0;
    tmp_if_expr_3 = tmp_if_expr_2;
  }

  else
    tmp_if_expr_3 = (struct sg_vector *)(void *)0;
  vector = tmp_if_expr_3;
  unsigned long int tmp_if_expr_4;
  if(!(vector == ((const struct sg_vector *)NULL)))
    tmp_if_expr_4 = vector->used_count;

  else
    tmp_if_expr_4 = (unsigned long int)0;
  return tmp_if_expr_4;
}

// sg_get_network_iface_stats
// file network_stats.c line 1399
struct anonymous_20 * sg_get_network_iface_stats(unsigned long int *entries)
{
  struct sg_network_glob *network_glob;
  void *return_value_sg_comp_get_tls_1;
  return_value_sg_comp_get_tls_1=sg_comp_get_tls(sg_network_glob_id);
  network_glob = (struct sg_network_glob *)return_value_sg_comp_get_tls_1;
  enum anonymous_4 rc;
  void *tmp_if_expr_2;
  unsigned long int tmp_if_expr_3;
  if(network_glob == ((struct sg_network_glob *)NULL))
  {
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_20 *)(void *)0;
  }

  else
  {
    if(network_glob->network_vectors[2l] == ((struct sg_vector *)NULL))
      network_glob->network_vectors[(signed long int)2]=sg_vector_create((unsigned long int)16, (unsigned long int)16, (unsigned long int)0, &sg_network_iface_stats_vector_init_info);

    else
      sg_vector_clear(network_glob->network_vectors[(signed long int)2]);
    if(!(network_glob->network_vectors[2l] == ((struct sg_vector *)NULL)))
    {
      rc=sg_get_network_iface_stats_int(&network_glob->network_vectors[(signed long int)2]);
      if((signed int)rc == SG_ERROR_NONE)
      {
        struct anonymous_20 *network_iface_stats;
        if(!(network_glob->network_vectors[2l] == ((struct sg_vector *)NULL)))
          tmp_if_expr_2 = (void *)&network_glob->network_vectors[(signed long int)2][(signed long int)1];

        else
          tmp_if_expr_2 = (void *)0;
        network_iface_stats = (struct anonymous_20 *)tmp_if_expr_2;
        sg_clear_error();
        if(!(entries == ((unsigned long int *)NULL)))
        {
          if(!(network_glob->network_vectors[2l] == ((struct sg_vector *)NULL)))
            tmp_if_expr_3 = network_glob->network_vectors[(signed long int)2]->used_count;

          else
            tmp_if_expr_3 = (unsigned long int)0;
          *entries = tmp_if_expr_3;
        }

        return network_iface_stats;
      }

    }

    else
      rc=sg_get_error();
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_20 *)(void *)0;
  }
}

// sg_get_network_iface_stats_int
// file network_stats.c line 710
static enum anonymous_4 sg_get_network_iface_stats_int(struct sg_vector **network_iface_vector_ptr)
{
  struct anonymous_20 *network_iface_stat;
  unsigned long int ifaces = (unsigned long int)0;
  signed long int now;
  now=time((signed long int *)(void *)0);
  struct _IO_FILE *f;
  char line[8096l];
  signed int sock;
  f=fopen("/proc/net/dev", "r");
  char *return_value_fgets_3;
  const unsigned short int **return_value___ctype_b_loc_4;
  struct sg_vector *tmp_if_expr_11;
  struct sg_vector *return_value_sg_vector_resize_9;
  struct sg_vector *return_value_sg_vector_create_10;
  unsigned long int tmp_if_expr_6;
  void *tmp_if_expr_7;
  if(f == ((struct _IO_FILE *)NULL))
  {
    do
    {
      char *sg_get_network_iface_stats_int__1__1__1____errinfobuf = (char *)(void *)0;
      sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_OPEN, "/proc/net/dev");
      free((void *)sg_get_network_iface_stats_int__1__1__1____errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_OPEN;
  }

  else
  {
    sock=socket(2, 2, 0);
    if(!(sock >= 0))
    {
      fclose(f);
      do
      {
        char *__errinfobuf = (char *)(void *)0;
        sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_SOCKET, (const char *)(void *)0);
        free((void *)__errinfobuf);
      }
      while((_Bool)0);
      return (enum anonymous_4)SG_ERROR_SOCKET;
    }

    else
    {
      char *return_value_fgets_1;
      return_value_fgets_1=fgets(line, (signed int)sizeof(char [8096l]) /*8096ul*/ , f);
      if(return_value_fgets_1 == ((char *)NULL))
      {
        close(sock);
        fclose(f);
        do
        {
          char *sg_get_network_iface_stats_int__1__3__1____errinfobuf = (char *)(void *)0;
          sg_set_error_fmt((enum anonymous_4)SG_ERROR_PARSE, (const char *)(void *)0);
          free((void *)sg_get_network_iface_stats_int__1__3__1____errinfobuf);
        }
        while((_Bool)0);
        return (enum anonymous_4)SG_ERROR_PARSE;
      }

      else
      {
        char *return_value_fgets_2;
        return_value_fgets_2=fgets(line, (signed int)sizeof(char [8096l]) /*8096ul*/ , f);
        if(return_value_fgets_2 == ((char *)NULL))
        {
          close(sock);
          fclose(f);
          do
          {
            char *sg_get_network_iface_stats_int__1__4__1____errinfobuf = (char *)(void *)0;
            sg_set_error_fmt((enum anonymous_4)SG_ERROR_PARSE, (const char *)(void *)0);
            free((void *)sg_get_network_iface_stats_int__1__4__1____errinfobuf);
          }
          while((_Bool)0);
          return (enum anonymous_4)SG_ERROR_PARSE;
        }

        else
        {
          do
          {
            return_value_fgets_3=fgets(line, (signed int)sizeof(char [8096l]) /*8096ul*/ , f);
            if(return_value_fgets_3 == ((char *)NULL))
              break;

            char *name;
            char *ptr;
            struct ifreq ifr;
            struct ethtool_cmd ethcmd;
            signed int err;
            ptr=strchr(line, 58);
            if(!(ptr == ((char *)NULL)))
            {
              *ptr = (char)0;
              name = line;
              do
              {
                return_value___ctype_b_loc_4=__ctype_b_loc();
                if((8192 & (signed int)(*return_value___ctype_b_loc_4)[(signed long int)(signed int)*name]) == 0)
                  break;

                name = name + 1l;
              }
              while((_Bool)1);
              memset((void *)&ifr, 0, sizeof(struct ifreq) /*40ul*/ );
              strncpy(ifr.ifr_ifrn.ifrn_name, name, sizeof(char [16l]) /*16ul*/ );
              signed int return_value_ioctl_5;
              return_value_ioctl_5=ioctl(sock, (unsigned long int)0x8913, &ifr);
              if(return_value_ioctl_5 >= 0)
              {
                do
                {
                  if(!(*network_iface_vector_ptr == ((struct sg_vector *)NULL)))
                  {
                    return_value_sg_vector_resize_9=sg_vector_resize(*network_iface_vector_ptr, (unsigned long int)(ifaces + (unsigned long int)1));
                    tmp_if_expr_11 = return_value_sg_vector_resize_9;
                  }

                  else
                  {
                    return_value_sg_vector_create_10=sg_vector_create((unsigned long int)(ifaces + (unsigned long int)1), (unsigned long int)(ifaces + (unsigned long int)1), (unsigned long int)(ifaces + (unsigned long int)1), &sg_network_iface_stats_vector_init_info);
                    tmp_if_expr_11 = return_value_sg_vector_create_10;
                  }
                  *network_iface_vector_ptr = tmp_if_expr_11;
                  if(!(*network_iface_vector_ptr == ((struct sg_vector *)NULL)))
                  {
                    if(!(*network_iface_vector_ptr == ((struct sg_vector *)NULL)))
                      tmp_if_expr_6 = (*network_iface_vector_ptr)->used_count;

                    else
                      tmp_if_expr_6 = (unsigned long int)0;
                    /* assertion (*(network_iface_vector_ptr) ? (*(network_iface_vector_ptr))->used_count : 0) == ((size_t)(ifaces + 1)) */
                    assert(tmp_if_expr_6 == (unsigned long int)(ifaces + (unsigned long int)1));
                    if(!(*network_iface_vector_ptr == ((struct sg_vector *)NULL)))
                      tmp_if_expr_7 = (void *)&(*network_iface_vector_ptr)[(signed long int)1];

                    else
                      tmp_if_expr_7 = (void *)0;
                    network_iface_stat = (struct anonymous_20 *)tmp_if_expr_7;
                  }

                  else
                    if(!((signed int)(ifaces == 0ul) == -1))
                      network_iface_stat = (struct anonymous_20 *)(void *)0;

                    else
                    {
                      close(sock);
                      fclose(f);
                      enum anonymous_4 return_value_sg_get_error_8;
                      return_value_sg_get_error_8=sg_get_error();
                      return return_value_sg_get_error_8;
                    }
                }
                while((_Bool)0);
                enum anonymous_4 return_value_sg_update_string_13;
                return_value_sg_update_string_13=sg_update_string(&(network_iface_stat + (signed long int)ifaces)->interface_name, name);
                if(!((signed int)return_value_sg_update_string_13 == SG_ERROR_NONE))
                {
                  close(sock);
                  fclose(f);
                  do
                  {
                    char *sg_get_network_iface_stats_int__1__5__4__1____errinfobuf = (char *)(void *)0;
                    free((void *)sg_get_network_iface_stats_int__1__5__4__1____errinfobuf);
                  }
                  while((_Bool)0);
                  enum anonymous_4 return_value_sg_get_error_12;
                  return_value_sg_get_error_12=sg_get_error();
                  return return_value_sg_get_error_12;
                }

                (network_iface_stat + (signed long int)ifaces)->up = (enum anonymous_27)(((signed int)ifr.ifr_ifru.ifru_flags & 1) != 0 ? SG_IFACE_UP : SG_IFACE_DOWN);
                memset((void *)&ethcmd, 0, sizeof(struct ethtool_cmd) /*44ul*/ );
                ethcmd.cmd = (unsigned int)0x00000001;
                ifr.ifr_ifru.ifru_data = (char *)&ethcmd;
                err=ioctl(sock, (unsigned long int)0x8946, &ifr);
                if(err == 0)
                {
                  unsigned int return_value_ethtool_cmd_speed_14;
                  return_value_ethtool_cmd_speed_14=ethtool_cmd_speed(&ethcmd);
                  (network_iface_stat + (signed long int)ifaces)->speed = (unsigned long long int)return_value_ethtool_cmd_speed_14;
                  (network_iface_stat + (signed long int)ifaces)->factor = (unsigned long long int)(1000U * 1000U);
                  switch((signed int)ethcmd.duplex)
                  {
                    case 0x01:
                    {
                      (network_iface_stat + (signed long int)ifaces)->duplex = (enum anonymous_26)SG_IFACE_DUPLEX_FULL;
                      break;
                    }
                    case 0x00:
                    {
                      (network_iface_stat + (signed long int)ifaces)->duplex = (enum anonymous_26)SG_IFACE_DUPLEX_HALF;
                      break;
                    }
                    default:
                      (network_iface_stat + (signed long int)ifaces)->duplex = (enum anonymous_26)SG_IFACE_DUPLEX_UNKNOWN;
                  }
                }

                else
                {
                  (network_iface_stat + (signed long int)ifaces)->speed = (unsigned long long int)0;
                  (network_iface_stat + (signed long int)ifaces)->factor = (unsigned long long int)0;
                  (network_iface_stat + (signed long int)ifaces)->duplex = (enum anonymous_26)SG_IFACE_DUPLEX_UNKNOWN;
                }
                (network_iface_stat + (signed long int)ifaces)->systime = now;
                ifaces = ifaces + 1ul;
              }

            }

          }
          while((_Bool)1);
          close(sock);
          fclose(f);
          return (enum anonymous_4)SG_ERROR_NONE;
        }
      }
    }
  }
}

// sg_get_network_iface_stats_r
// file network_stats.c line 1399
struct anonymous_20 * sg_get_network_iface_stats_r(unsigned long int *entries)
{
  struct sg_vector *network_iface_vector;
  network_iface_vector=sg_vector_create((unsigned long int)16, (unsigned long int)16, (unsigned long int)0, &sg_network_iface_stats_vector_init_info);
  enum anonymous_4 rc;
  void *tmp_if_expr_1;
  unsigned long int tmp_if_expr_2;
  if(!(network_iface_vector == ((struct sg_vector *)NULL)))
  {
    rc=sg_get_network_iface_stats_int(&network_iface_vector);
    if((signed int)rc == SG_ERROR_NONE)
    {
      struct anonymous_20 *network_iface_stats;
      if(!(network_iface_vector == ((struct sg_vector *)NULL)))
        tmp_if_expr_1 = (void *)&network_iface_vector[(signed long int)1];

      else
        tmp_if_expr_1 = (void *)0;
      network_iface_stats = (struct anonymous_20 *)tmp_if_expr_1;
      sg_clear_error();
      if(!(entries == ((unsigned long int *)NULL)))
      {
        if(!(network_iface_vector == ((struct sg_vector *)NULL)))
          tmp_if_expr_2 = network_iface_vector->used_count;

        else
          tmp_if_expr_2 = (unsigned long int)0;
        *entries = tmp_if_expr_2;
      }

      return network_iface_stats;
    }

    sg_vector_free(network_iface_vector);
  }

  else
    rc=sg_get_error();
  if(!(entries == ((unsigned long int *)NULL)))
    *entries = (unsigned long int)0;

  return (struct anonymous_20 *)(void *)0;
}

// sg_get_network_io_stats
// file network_stats.c line 698
struct anonymous_21 * sg_get_network_io_stats(unsigned long int *entries)
{
  struct sg_network_glob *network_glob;
  void *return_value_sg_comp_get_tls_1;
  return_value_sg_comp_get_tls_1=sg_comp_get_tls(sg_network_glob_id);
  network_glob = (struct sg_network_glob *)return_value_sg_comp_get_tls_1;
  enum anonymous_4 rc;
  void *tmp_if_expr_2;
  unsigned long int tmp_if_expr_3;
  if(network_glob == ((struct sg_network_glob *)NULL))
  {
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_21 *)(void *)0;
  }

  else
  {
    if(network_glob->network_vectors[0l] == ((struct sg_vector *)NULL))
      network_glob->network_vectors[(signed long int)0]=sg_vector_create((unsigned long int)16, (unsigned long int)16, (unsigned long int)0, &sg_network_io_stats_vector_init_info);

    else
      sg_vector_clear(network_glob->network_vectors[(signed long int)0]);
    if(!(network_glob->network_vectors[0l] == ((struct sg_vector *)NULL)))
    {
      rc=sg_get_network_io_stats_int(&network_glob->network_vectors[(signed long int)0]);
      if((signed int)rc == SG_ERROR_NONE)
      {
        struct anonymous_21 *network_io_stats;
        if(!(network_glob->network_vectors[0l] == ((struct sg_vector *)NULL)))
          tmp_if_expr_2 = (void *)&network_glob->network_vectors[(signed long int)0][(signed long int)1];

        else
          tmp_if_expr_2 = (void *)0;
        network_io_stats = (struct anonymous_21 *)tmp_if_expr_2;
        sg_clear_error();
        if(!(entries == ((unsigned long int *)NULL)))
        {
          if(!(network_glob->network_vectors[0l] == ((struct sg_vector *)NULL)))
            tmp_if_expr_3 = network_glob->network_vectors[(signed long int)0]->used_count;

          else
            tmp_if_expr_3 = (unsigned long int)0;
          *entries = tmp_if_expr_3;
        }

        return network_io_stats;
      }

    }

    else
      rc=sg_get_error();
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_21 *)(void *)0;
  }
}

// sg_get_network_io_stats_diff
// file network_stats.c line 699
struct anonymous_21 * sg_get_network_io_stats_diff(unsigned long int *entries)
{
  struct sg_network_glob *network_glob;
  void *return_value_sg_comp_get_tls_1;
  return_value_sg_comp_get_tls_1=sg_comp_get_tls(sg_network_glob_id);
  network_glob = (struct sg_network_glob *)return_value_sg_comp_get_tls_1;
  unsigned long int tmp_if_expr_3;
  void *tmp_if_expr_4;
  if(network_glob == ((struct sg_network_glob *)NULL))
  {
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_21 *)(void *)0;
  }

  else
  {
    if(network_glob->network_vectors[0l] == ((struct sg_vector *)NULL))
    {
      struct anonymous_21 *return_value_sg_get_network_io_stats_2;
      return_value_sg_get_network_io_stats_2=sg_get_network_io_stats(entries);
      return return_value_sg_get_network_io_stats_2;
    }

    if(network_glob->network_vectors[1l] == ((struct sg_vector *)NULL))
      network_glob->network_vectors[(signed long int)1]=sg_vector_create((unsigned long int)network_glob->network_vectors[(signed long int)0]->used_count, (unsigned long int)network_glob->network_vectors[(signed long int)0]->used_count, (unsigned long int)0, &sg_network_io_stats_vector_init_info);

    if(!(network_glob->network_vectors[1l] == ((struct sg_vector *)NULL)))
    {
      enum anonymous_4 rc;
      struct sg_vector *last;
      last=sg_vector_clone(network_glob->network_vectors[(signed long int)0]);
      if(!(last == ((struct sg_vector *)NULL)))
      {
        sg_get_network_io_stats((unsigned long int *)(void *)0);
        rc=sg_vector_compute_diff(&network_glob->network_vectors[(signed long int)1], network_glob->network_vectors[(signed long int)0], last);
        sg_vector_free(last);
        if((signed int)rc == SG_ERROR_NONE)
        {
          sg_clear_error();
          if(!(entries == ((unsigned long int *)NULL)))
          {
            if(!(network_glob->network_vectors[1l] == ((struct sg_vector *)NULL)))
              tmp_if_expr_3 = network_glob->network_vectors[(signed long int)1]->used_count;

            else
              tmp_if_expr_3 = (unsigned long int)0;
            *entries = tmp_if_expr_3;
          }

          if(!(network_glob->network_vectors[1l] == ((struct sg_vector *)NULL)))
            tmp_if_expr_4 = (void *)&network_glob->network_vectors[(signed long int)1][(signed long int)1];

          else
            tmp_if_expr_4 = (void *)0;
          return (struct anonymous_21 *)tmp_if_expr_4;
        }

      }

    }


  err_out:
    ;
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_21 *)(void *)0;
  }
}

// sg_get_network_io_stats_diff_between
// file network_stats.c line 699
struct anonymous_21 * sg_get_network_io_stats_diff_between(const struct anonymous_21 *cur, const struct anonymous_21 *last, unsigned long int *entries)
{
  struct sg_vector *network_io_diff_vector;
  enum anonymous_4 rc;
  network_io_diff_vector=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)0, &sg_network_io_stats_vector_init_info);
  struct sg_vector *tmp_if_expr_3;
  enum anonymous_4 return_value_sg_prove_vector_1;
  struct sg_vector *tmp_if_expr_2;
  struct sg_vector *tmp_if_expr_6;
  enum anonymous_4 return_value_sg_prove_vector_4;
  struct sg_vector *tmp_if_expr_5;
  unsigned long int tmp_if_expr_7;
  void *tmp_if_expr_8;
  if(!(network_io_diff_vector == ((struct sg_vector *)NULL)))
  {
    if(!(cur == ((const struct anonymous_21 *)NULL)))
    {
      return_value_sg_prove_vector_1=sg_prove_vector(&((struct sg_vector *)cur)[(signed long int)-1]);
      if((signed int)return_value_sg_prove_vector_1 == SG_ERROR_NONE)
        tmp_if_expr_2 = &((struct sg_vector *)cur)[(signed long int)-1];

      else
        tmp_if_expr_2 = (struct sg_vector *)(void *)0;
      tmp_if_expr_3 = tmp_if_expr_2;
    }

    else
      tmp_if_expr_3 = (struct sg_vector *)(void *)0;
    if(!(last == ((const struct anonymous_21 *)NULL)))
    {
      return_value_sg_prove_vector_4=sg_prove_vector(&((struct sg_vector *)last)[(signed long int)-1]);
      if((signed int)return_value_sg_prove_vector_4 == SG_ERROR_NONE)
        tmp_if_expr_5 = &((struct sg_vector *)last)[(signed long int)-1];

      else
        tmp_if_expr_5 = (struct sg_vector *)(void *)0;
      tmp_if_expr_6 = tmp_if_expr_5;
    }

    else
      tmp_if_expr_6 = (struct sg_vector *)(void *)0;
    rc=sg_vector_compute_diff(&network_io_diff_vector, tmp_if_expr_3, tmp_if_expr_6);
    if((signed int)rc == SG_ERROR_NONE)
    {
      sg_clear_error();
      if(!(entries == ((unsigned long int *)NULL)))
      {
        if(!(network_io_diff_vector == ((struct sg_vector *)NULL)))
          tmp_if_expr_7 = network_io_diff_vector->used_count;

        else
          tmp_if_expr_7 = (unsigned long int)0;
        *entries = tmp_if_expr_7;
      }

      if(!(network_io_diff_vector == ((struct sg_vector *)NULL)))
        tmp_if_expr_8 = (void *)&network_io_diff_vector[(signed long int)1];

      else
        tmp_if_expr_8 = (void *)0;
      return (struct anonymous_21 *)tmp_if_expr_8;
    }

    sg_vector_free(network_io_diff_vector);
  }

  else
    rc=sg_get_error();
  if(!(entries == ((unsigned long int *)NULL)))
    *entries = (unsigned long int)0;

  return (struct anonymous_21 *)(void *)0;
}

// sg_get_network_io_stats_int
// file network_stats.c line 235
static enum anonymous_4 sg_get_network_io_stats_int(struct sg_vector **network_io_stats_vector_ptr)
{
  signed long int interfaces = (signed long int)0;
  struct anonymous_21 *network_io_ptr;
  struct _IO_FILE *f;
  char line[1024l];
  struct anonymous_6 line_match[9l];
  f=fopen("/proc/net/dev", "r");
  _Bool tmp_if_expr_3;
  char *return_value_fgets_2;
  char *return_value_fgets_4;
  struct sg_vector *tmp_if_expr_11;
  struct sg_vector *return_value_sg_vector_resize_9;
  struct sg_vector *return_value_sg_vector_create_10;
  unsigned long int tmp_if_expr_6;
  void *tmp_if_expr_7;
  if(f == ((struct _IO_FILE *)NULL))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_OPEN, "/proc/net/dev");
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_OPEN;
  }

  else
  {
    char *return_value_fgets_1;
    return_value_fgets_1=fgets(line, (signed int)sizeof(char [1024l]) /*1024ul*/ , f);
    if(return_value_fgets_1 == ((char *)NULL))
      tmp_if_expr_3 = (_Bool)1;

    else
    {
      return_value_fgets_2=fgets(line, (signed int)sizeof(char [1024l]) /*1024ul*/ , f);
      tmp_if_expr_3 = (char *)(void *)0 == return_value_fgets_2 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_3)
    {
      do
      {
        char *sg_get_network_io_stats_int__1__2__1____errinfobuf = (char *)(void *)0;
        sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_PARSE, "/proc/net/dev");
        free((void *)sg_get_network_io_stats_int__1__2__1____errinfobuf);
      }
      while((_Bool)0);
      return (enum anonymous_4)SG_ERROR_PARSE;
    }

    else
    {
      do
      {
        return_value_fgets_4=fgets(line, (signed int)sizeof(char [1024l]) /*1024ul*/ , f);
        if(return_value_fgets_4 == ((char *)NULL))
          break;

        signed int return_value_regexec_5;
        return_value_regexec_5=regexec(&network_io_rx, line, (unsigned long int)(8 + 1), line_match, 0);
        if(return_value_regexec_5 == 0)
        {
          do
          {
            if(!(*network_io_stats_vector_ptr == ((struct sg_vector *)NULL)))
            {
              return_value_sg_vector_resize_9=sg_vector_resize(*network_io_stats_vector_ptr, (unsigned long int)(interfaces + (signed long int)1));
              tmp_if_expr_11 = return_value_sg_vector_resize_9;
            }

            else
            {
              return_value_sg_vector_create_10=sg_vector_create((unsigned long int)(interfaces + (signed long int)1), (unsigned long int)(interfaces + (signed long int)1), (unsigned long int)(interfaces + (signed long int)1), &sg_network_io_stats_vector_init_info);
              tmp_if_expr_11 = return_value_sg_vector_create_10;
            }
            *network_io_stats_vector_ptr = tmp_if_expr_11;
            if(!(*network_io_stats_vector_ptr == ((struct sg_vector *)NULL)))
            {
              if(!(*network_io_stats_vector_ptr == ((struct sg_vector *)NULL)))
                tmp_if_expr_6 = (*network_io_stats_vector_ptr)->used_count;

              else
                tmp_if_expr_6 = (unsigned long int)0;
              /* assertion (*(network_io_stats_vector_ptr) ? (*(network_io_stats_vector_ptr))->used_count : 0) == ((size_t)(interfaces + 1)) */
              assert(tmp_if_expr_6 == (unsigned long int)(interfaces + (signed long int)1));
              if(!(*network_io_stats_vector_ptr == ((struct sg_vector *)NULL)))
                tmp_if_expr_7 = (void *)&(*network_io_stats_vector_ptr)[(signed long int)1];

              else
                tmp_if_expr_7 = (void *)0;
              network_io_ptr = (struct anonymous_21 *)tmp_if_expr_7;
            }

            else
              if(!((signed int)(interfaces == 0l) == -1))
                network_io_ptr = (struct anonymous_21 *)(void *)0;

              else
              {
                fclose(f);
                enum anonymous_4 return_value_sg_get_error_8;
                return_value_sg_get_error_8=sg_get_error();
                return return_value_sg_get_error_8;
              }
          }
          while((_Bool)0);
          if(!((network_io_ptr + interfaces)->interface_name == ((char *)NULL)))
          {
            free((void *)(network_io_ptr + interfaces)->interface_name);
            (network_io_ptr + interfaces)->interface_name = (char *)(void *)0;
          }

          (network_io_ptr + interfaces)->interface_name=sg_get_string_match(line, &line_match[(signed long int)1]);
          signed long long int return_value_sg_get_ll_match_12;
          return_value_sg_get_ll_match_12=sg_get_ll_match(line, &line_match[(signed long int)2]);
          (network_io_ptr + interfaces)->rx = (unsigned long long int)return_value_sg_get_ll_match_12;
          signed long long int return_value_sg_get_ll_match_13;
          return_value_sg_get_ll_match_13=sg_get_ll_match(line, &line_match[(signed long int)5]);
          (network_io_ptr + interfaces)->tx = (unsigned long long int)return_value_sg_get_ll_match_13;
          signed long long int return_value_sg_get_ll_match_14;
          return_value_sg_get_ll_match_14=sg_get_ll_match(line, &line_match[(signed long int)3]);
          (network_io_ptr + interfaces)->ipackets = (unsigned long long int)return_value_sg_get_ll_match_14;
          signed long long int return_value_sg_get_ll_match_15;
          return_value_sg_get_ll_match_15=sg_get_ll_match(line, &line_match[(signed long int)6]);
          (network_io_ptr + interfaces)->opackets = (unsigned long long int)return_value_sg_get_ll_match_15;
          signed long long int return_value_sg_get_ll_match_16;
          return_value_sg_get_ll_match_16=sg_get_ll_match(line, &line_match[(signed long int)4]);
          (network_io_ptr + interfaces)->ierrors = (unsigned long long int)return_value_sg_get_ll_match_16;
          signed long long int return_value_sg_get_ll_match_17;
          return_value_sg_get_ll_match_17=sg_get_ll_match(line, &line_match[(signed long int)7]);
          (network_io_ptr + interfaces)->oerrors = (unsigned long long int)return_value_sg_get_ll_match_17;
          signed long long int return_value_sg_get_ll_match_18;
          return_value_sg_get_ll_match_18=sg_get_ll_match(line, &line_match[(signed long int)8]);
          (network_io_ptr + interfaces)->collisions = (unsigned long long int)return_value_sg_get_ll_match_18;
          (network_io_ptr + interfaces)->systime=time((signed long int *)(void *)0);
          interfaces = interfaces + 1l;
        }

      }
      while((_Bool)1);
      fclose(f);
      return (enum anonymous_4)SG_ERROR_NONE;
    }
  }
}

// sg_get_network_io_stats_r
// file network_stats.c line 698
struct anonymous_21 * sg_get_network_io_stats_r(unsigned long int *entries)
{
  struct sg_vector *network_io_vector;
  network_io_vector=sg_vector_create((unsigned long int)16, (unsigned long int)16, (unsigned long int)0, &sg_network_io_stats_vector_init_info);
  enum anonymous_4 rc;
  void *tmp_if_expr_1;
  unsigned long int tmp_if_expr_2;
  if(!(network_io_vector == ((struct sg_vector *)NULL)))
  {
    rc=sg_get_network_io_stats_int(&network_io_vector);
    if((signed int)rc == SG_ERROR_NONE)
    {
      struct anonymous_21 *network_io_stats;
      if(!(network_io_vector == ((struct sg_vector *)NULL)))
        tmp_if_expr_1 = (void *)&network_io_vector[(signed long int)1];

      else
        tmp_if_expr_1 = (void *)0;
      network_io_stats = (struct anonymous_21 *)tmp_if_expr_1;
      sg_clear_error();
      if(!(entries == ((unsigned long int *)NULL)))
      {
        if(!(network_io_vector == ((struct sg_vector *)NULL)))
          tmp_if_expr_2 = network_io_vector->used_count;

        else
          tmp_if_expr_2 = (unsigned long int)0;
        *entries = tmp_if_expr_2;
      }

      return network_io_stats;
    }

    sg_vector_free(network_io_vector);
  }

  else
    rc=sg_get_error();
  if(!(entries == ((unsigned long int *)NULL)))
    *entries = (unsigned long int)0;

  return (struct anonymous_21 *)(void *)0;
}

// sg_get_page_stats
// file page_stats.c line 242
struct anonymous_5 * sg_get_page_stats(unsigned long int *entries)
{
  struct sg_page_glob *page_glob;
  void *return_value_sg_comp_get_tls_1;
  return_value_sg_comp_get_tls_1=sg_comp_get_tls(sg_page_glob_id);
  page_glob = (struct sg_page_glob *)return_value_sg_comp_get_tls_1;
  enum anonymous_4 rc;
  void *tmp_if_expr_2;
  unsigned long int tmp_if_expr_3;
  if(page_glob == ((struct sg_page_glob *)NULL))
  {
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_5 *)(void *)0;
  }

  else
  {
    if(page_glob->page_vectors[0l] == ((struct sg_vector *)NULL))
      page_glob->page_vectors[(signed long int)0]=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)1, &sg_page_stats_vector_init_info);

    if(!(page_glob->page_vectors[0l] == ((struct sg_vector *)NULL)))
    {
      struct anonymous_5 *page_stats;
      if(!(page_glob->page_vectors[0l] == ((struct sg_vector *)NULL)))
        tmp_if_expr_2 = (void *)&page_glob->page_vectors[(signed long int)0][(signed long int)1];

      else
        tmp_if_expr_2 = (void *)0;
      page_stats = (struct anonymous_5 *)tmp_if_expr_2;
      rc=sg_get_page_stats_int(page_stats);
      if((signed int)rc == SG_ERROR_NONE)
      {
        sg_clear_error();
        if(!(entries == ((unsigned long int *)NULL)))
        {
          if(!(page_glob->page_vectors[0l] == ((struct sg_vector *)NULL)))
            tmp_if_expr_3 = page_glob->page_vectors[(signed long int)0]->used_count;

          else
            tmp_if_expr_3 = (unsigned long int)0;
          *entries = tmp_if_expr_3;
        }

        return page_stats;
      }

    }

    else
      rc=sg_get_error();
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_5 *)(void *)0;
  }
}

// sg_get_page_stats_diff
// file page_stats.c line 243
struct anonymous_5 * sg_get_page_stats_diff(unsigned long int *entries)
{
  struct sg_page_glob *page_glob;
  void *return_value_sg_comp_get_tls_1;
  return_value_sg_comp_get_tls_1=sg_comp_get_tls(sg_page_glob_id);
  page_glob = (struct sg_page_glob *)return_value_sg_comp_get_tls_1;
  void *tmp_if_expr_3;
  void *tmp_if_expr_4;
  enum anonymous_4 return_value_sg_get_page_stats_diff_int_6;
  unsigned long int tmp_if_expr_5;
  if(page_glob == ((struct sg_page_glob *)NULL))
  {
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_5 *)(void *)0;
  }

  else
  {
    if(page_glob->page_vectors[0l] == ((struct sg_vector *)NULL))
    {
      struct anonymous_5 *return_value_sg_get_page_stats_2;
      return_value_sg_get_page_stats_2=sg_get_page_stats(entries);
      return return_value_sg_get_page_stats_2;
    }

    if(page_glob->page_vectors[1l] == ((struct sg_vector *)NULL))
      page_glob->page_vectors[(signed long int)1]=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)1, &sg_page_stats_vector_init_info);

    if(!(page_glob->page_vectors[1l] == ((struct sg_vector *)NULL)))
    {
      struct anonymous_5 page_last;
      if(!(page_glob->page_vectors[0l] == ((struct sg_vector *)NULL)))
        tmp_if_expr_3 = (void *)&page_glob->page_vectors[(signed long int)0][(signed long int)1];

      else
        tmp_if_expr_3 = (void *)0;
      page_last = *((struct anonymous_5 *)tmp_if_expr_3);
      struct anonymous_5 *page_diff;
      if(!(page_glob->page_vectors[1l] == ((struct sg_vector *)NULL)))
        tmp_if_expr_4 = (void *)&page_glob->page_vectors[(signed long int)1][(signed long int)1];

      else
        tmp_if_expr_4 = (void *)0;
      page_diff = (struct anonymous_5 *)tmp_if_expr_4;
      struct anonymous_5 *page_now;
      page_now=sg_get_page_stats((unsigned long int *)(void *)0);
      if(!(page_now == ((struct anonymous_5 *)NULL)))
      {
        return_value_sg_get_page_stats_diff_int_6=sg_get_page_stats_diff_int(page_diff, page_now, &page_last);
        if((signed int)return_value_sg_get_page_stats_diff_int_6 == SG_ERROR_NONE)
        {
          sg_clear_error();
          if(!(entries == ((unsigned long int *)NULL)))
          {
            if(!(page_glob->page_vectors[1l] == ((struct sg_vector *)NULL)))
              tmp_if_expr_5 = page_glob->page_vectors[(signed long int)1]->used_count;

            else
              tmp_if_expr_5 = (unsigned long int)0;
            *entries = tmp_if_expr_5;
          }

          return page_diff;
        }

      }

    }

    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_5 *)(void *)0;
  }
}

// sg_get_page_stats_diff_between
// file page_stats.c line 243
struct anonymous_5 * sg_get_page_stats_diff_between(const struct anonymous_5 *page_now, const struct anonymous_5 *page_last, unsigned long int *entries)
{
  struct sg_vector *page_diff_vector;
  page_diff_vector=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)1, &sg_page_stats_vector_init_info);
  void *tmp_if_expr_1;
  unsigned long int tmp_if_expr_2;
  if(!(page_diff_vector == ((struct sg_vector *)NULL)))
  {
    enum anonymous_4 rc;
    struct anonymous_5 *page_diff;
    if(!(page_diff_vector == ((struct sg_vector *)NULL)))
      tmp_if_expr_1 = (void *)&page_diff_vector[(signed long int)1];

    else
      tmp_if_expr_1 = (void *)0;
    page_diff = (struct anonymous_5 *)tmp_if_expr_1;
    rc=sg_get_page_stats_diff_int(page_diff, page_now, page_last);
    if((signed int)rc == SG_ERROR_NONE)
    {
      sg_clear_error();
      if(!(entries == ((unsigned long int *)NULL)))
      {
        if(!(page_diff_vector == ((struct sg_vector *)NULL)))
          tmp_if_expr_2 = page_diff_vector->used_count;

        else
          tmp_if_expr_2 = (unsigned long int)0;
        *entries = tmp_if_expr_2;
      }

      return page_diff;
    }

    sg_vector_free(page_diff_vector);
  }

  if(!(entries == ((unsigned long int *)NULL)))
    *entries = (unsigned long int)0;

  return (struct anonymous_5 *)(void *)0;
}

// sg_get_page_stats_diff_int
// file page_stats.c line 198
static enum anonymous_4 sg_get_page_stats_diff_int(struct anonymous_5 *tgt, const struct anonymous_5 *now, const struct anonymous_5 *last)
{
  if(tgt == ((struct anonymous_5 *)NULL))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      sg_set_error_fmt((enum anonymous_4)SG_ERROR_INVALID_ARGUMENT, "sg_get_page_stats_diff_int(tgt)");
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_INVALID_ARGUMENT;
  }

  else
  {
    if(!(now == ((const struct anonymous_5 *)NULL)))
    {
      *tgt = *now;
      if(!(last == ((const struct anonymous_5 *)NULL)))
      {
        tgt->pages_pagein = tgt->pages_pagein - last->pages_pagein;
        tgt->pages_pageout = tgt->pages_pageout - last->pages_pageout;
        tgt->systime = tgt->systime - last->systime;
      }

    }

    else
      memset((void *)tgt, 0, sizeof(struct anonymous_5) /*24ul*/ );
    return (enum anonymous_4)SG_ERROR_NONE;
  }
}

// sg_get_page_stats_int
// file page_stats.c line 32
static enum anonymous_4 sg_get_page_stats_int(struct anonymous_5 *page_stats_buf)
{
  struct _IO_FILE *f;
  char line_buf[256l];
  page_stats_buf->systime=time((signed long int *)(void *)0);
  page_stats_buf->pages_pagein = (unsigned long long int)0;
  page_stats_buf->pages_pageout = (unsigned long long int)0;
  f=fopen("/proc/vmstat", "r");
  char *return_value_fgets_1;
  signed int return_value_strncmp_3;
  if(!(f == ((struct _IO_FILE *)NULL)))
  {
    unsigned int matches = (unsigned int)0;
    while(!(matches >= 2u))
    {
      return_value_fgets_1=fgets(line_buf, (signed int)sizeof(char [256l]) /*256ul*/ , f);
      if(return_value_fgets_1 == ((char *)NULL))
        break;

      unsigned long long int value;
      signed int return_value_sscanf_2;
      return_value_sscanf_2=sscanf(line_buf, "%*s %llu", &value);
      if(return_value_sscanf_2 == 1)
      {
        signed int return_value_strncmp_4;
        return_value_strncmp_4=strncmp(line_buf, "pgpgin ", (unsigned long int)7);
        if(return_value_strncmp_4 == 0)
        {
          page_stats_buf->pages_pagein = value;
          matches = matches + 1u;
        }

        else
        {
          return_value_strncmp_3=strncmp(line_buf, "pgpgout ", (unsigned long int)8);
          if(return_value_strncmp_3 == 0)
          {
            page_stats_buf->pages_pageout = value;
            matches = matches + 1u;
          }

        }
      }

    }
    fclose(f);
    if(!(matches >= 2u))
    {
      do
      {
        char *__errinfobuf = (char *)(void *)0;
        sg_set_error_fmt((enum anonymous_4)SG_ERROR_PARSE, "/proc/vmstat");
        free((void *)__errinfobuf);
      }
      while((_Bool)0);
      return (enum anonymous_4)SG_ERROR_PARSE;
    }

  }

  else
  {
    f=fopen("/proc/stat", "r");
    if(!(f == ((struct _IO_FILE *)NULL)))
    {
      char *return_value_sg_f_read_line_6;
      return_value_sg_f_read_line_6=sg_f_read_line(f, line_buf, sizeof(char [256l]) /*256ul*/ , "page");
      if(return_value_sg_f_read_line_6 == ((char *)NULL))
      {
        fclose(f);
        do
        {
          char *sg_get_page_stats_int__1__2__1__1____errinfobuf = (char *)(void *)0;
          free((void *)sg_get_page_stats_int__1__2__1__1____errinfobuf);
        }
        while((_Bool)0);
        enum anonymous_4 return_value_sg_get_error_5;
        return_value_sg_get_error_5=sg_get_error();
        return return_value_sg_get_error_5;
      }

      fclose(f);
      signed int return_value_sscanf_7;
      return_value_sscanf_7=sscanf(line_buf, "page %llu %llu", &page_stats_buf->pages_pagein, &page_stats_buf->pages_pageout);
      if(!(return_value_sscanf_7 == 2))
      {
        do
        {
          char *sg_get_page_stats_int__1__2__2__1____errinfobuf = (char *)(void *)0;
          sg_set_error_fmt((enum anonymous_4)SG_ERROR_PARSE, "page");
          free((void *)sg_get_page_stats_int__1__2__2__1____errinfobuf);
        }
        while((_Bool)0);
        return (enum anonymous_4)SG_ERROR_PARSE;
      }

    }

    else
    {
      do
      {
        char *sg_get_page_stats_int__1__3__1____errinfobuf = (char *)(void *)0;
        sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_OPEN, "/proc/stat");
        free((void *)sg_get_page_stats_int__1__3__1____errinfobuf);
      }
      while((_Bool)0);
      return (enum anonymous_4)SG_ERROR_OPEN;
    }
  }
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_get_page_stats_r
// file page_stats.c line 242
struct anonymous_5 * sg_get_page_stats_r(unsigned long int *entries)
{
  struct sg_vector *page_stats_vector;
  page_stats_vector=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)1, &sg_page_stats_vector_init_info);
  enum anonymous_4 rc;
  void *tmp_if_expr_1;
  unsigned long int tmp_if_expr_2;
  if(!(page_stats_vector == ((struct sg_vector *)NULL)))
  {
    struct anonymous_5 *page_stats;
    if(!(page_stats_vector == ((struct sg_vector *)NULL)))
      tmp_if_expr_1 = (void *)&page_stats_vector[(signed long int)1];

    else
      tmp_if_expr_1 = (void *)0;
    page_stats = (struct anonymous_5 *)tmp_if_expr_1;
    rc=sg_get_page_stats_int(page_stats);
    if((signed int)rc == SG_ERROR_NONE)
    {
      sg_clear_error();
      if(!(entries == ((unsigned long int *)NULL)))
      {
        if(!(page_stats_vector == ((struct sg_vector *)NULL)))
          tmp_if_expr_2 = page_stats_vector->used_count;

        else
          tmp_if_expr_2 = (unsigned long int)0;
        *entries = tmp_if_expr_2;
      }

      return page_stats;
    }

    sg_vector_free(page_stats_vector);
  }

  else
    rc=sg_get_error();
  if(!(entries == ((unsigned long int *)NULL)))
    *entries = (unsigned long int)0;

  return (struct anonymous_5 *)(void *)0;
}

// sg_get_process_count_int
// file process_stats.c line 1404
static enum anonymous_4 sg_get_process_count_int(struct anonymous_22 *process_count_buf, const struct sg_vector *process_stats_vector)
{
  const struct anonymous_7 *ps;
  const void *tmp_if_expr_1;
  if(!(process_stats_vector == ((const struct sg_vector *)NULL)))
    tmp_if_expr_1 = (const void *)&process_stats_vector[(signed long int)1];

  else
    tmp_if_expr_1 = (void *)0;
  ps = (const struct anonymous_7 *)tmp_if_expr_1;
  unsigned long int proc_count = process_stats_vector->used_count;
  process_count_buf->total = (unsigned long long int)0;
  process_count_buf->sleeping = (unsigned long long int)0;
  process_count_buf->running = (unsigned long long int)0;
  process_count_buf->zombie = (unsigned long long int)0;
  process_count_buf->stopped = (unsigned long long int)0;
  process_count_buf->unknown = (unsigned long long int)0;
  process_count_buf->total = proc_count;
  process_count_buf->systime = ps->systime;
  unsigned long int tmp_post_2;
  do
  {
    tmp_post_2 = proc_count;
    proc_count = proc_count - 1ul;
    if(tmp_post_2 == 0ul)
      break;

    switch((signed int)(ps + (signed long int)proc_count)->state)
    {
      case SG_PROCESS_STATE_RUNNING:
      {
        process_count_buf->running = process_count_buf->running + 1ull;
        break;
      }
      case SG_PROCESS_STATE_SLEEPING:
      {
        process_count_buf->sleeping = process_count_buf->sleeping + 1ull;
        break;
      }
      case SG_PROCESS_STATE_STOPPED:
      {
        process_count_buf->stopped = process_count_buf->stopped + 1ull;
        break;
      }
      case SG_PROCESS_STATE_ZOMBIE:
      {
        process_count_buf->zombie = process_count_buf->zombie + 1ull;
        break;
      }
      case SG_PROCESS_STATE_UNKNOWN:
        process_count_buf->unknown = process_count_buf->unknown + 1ull;
    }
  }
  while((_Bool)1);
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_get_process_count_of
// file process_stats.c line 1447
struct anonymous_22 * sg_get_process_count_of(enum sg_process_count_source pcs)
{
  struct sg_process_glob *process_glob;
  void *return_value_sg_comp_get_tls_1;
  return_value_sg_comp_get_tls_1=sg_comp_get_tls(sg_process_glob_id);
  process_glob = (struct sg_process_glob *)return_value_sg_comp_get_tls_1;
  const struct sg_vector *process_stats_vector = (const struct sg_vector *)(void *)0;
  struct anonymous_22 *process_count;
  void *tmp_if_expr_2;
  if(process_glob == ((struct sg_process_glob *)NULL))
    return (struct anonymous_22 *)(void *)0;

  else
  {
    if(process_glob->process_vectors[1l] == ((struct sg_vector *)NULL))
      process_glob->process_vectors[(signed long int)1]=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)0, &sg_process_count_vector_init_info);

    if(process_glob->process_vectors[1l] == ((struct sg_vector *)NULL))
    {
      do
      {
        char *sg_get_process_count_of__1__2__1____errinfobuf = (char *)(void *)0;
        sg_set_error_fmt((enum anonymous_4)SG_ERROR_MALLOC, "sg_get_process_count_of");
        free((void *)sg_get_process_count_of__1__2__1____errinfobuf);
      }
      while((_Bool)0);
      return (struct anonymous_22 *)(void *)0;
    }

    else
    {
      if(!(process_glob->process_vectors[1l] == ((struct sg_vector *)NULL)))
        tmp_if_expr_2 = (void *)&process_glob->process_vectors[(signed long int)1][(signed long int)1];

      else
        tmp_if_expr_2 = (void *)0;
      process_count = (struct anonymous_22 *)tmp_if_expr_2;
      switch((signed int)pcs)
      {
        case sg_last_process_count:
        {
          process_stats_vector = process_glob->process_vectors[(signed long int)0];
          if(!(process_stats_vector == ((const struct sg_vector *)NULL)))
            break;

        }
        case sg_entire_process_count:
        {
          sg_get_process_stats((unsigned long int *)(void *)0);
          process_stats_vector = process_glob->process_vectors[(signed long int)0];
          break;
        }
        default:
          do
          {
            char *__errinfobuf = (char *)(void *)0;
            sg_set_error_fmt((enum anonymous_4)SG_ERROR_INVALID_ARGUMENT, "sg_get_process_count_of(sg_process_count_source = %d)", (signed int)pcs);
            free((void *)__errinfobuf);
          }
          while((_Bool)0);
      }
      if(process_stats_vector == ((const struct sg_vector *)NULL))
        return (struct anonymous_22 *)(void *)0;

      else
      {
        enum anonymous_4 return_value_sg_get_process_count_int_3;
        return_value_sg_get_process_count_int_3=sg_get_process_count_int(process_count, process_stats_vector);
        if((signed int)return_value_sg_get_process_count_int_3 == SG_ERROR_NONE)
          return process_count;

        else
          return (struct anonymous_22 *)(void *)0;
      }
    }
  }
}

// sg_get_process_count_r
// file process_stats.c line 1505
struct anonymous_22 * sg_get_process_count_r(const struct anonymous_7 *whereof)
{
  struct sg_vector *process_count_result_vector;
  struct anonymous_22 *process_count;
  const struct sg_vector *process_stats_vector;
  const void *tmp_if_expr_1;
  if(!(whereof == ((const struct anonymous_7 *)NULL)))
    tmp_if_expr_1 = (const void *)&whereof[(signed long int)1];

  else
    tmp_if_expr_1 = (void *)0;
  process_stats_vector = (const struct sg_vector *)tmp_if_expr_1;
  void *tmp_if_expr_2;
  if(process_stats_vector == ((const struct sg_vector *)NULL))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      sg_set_error_fmt((enum anonymous_4)SG_ERROR_INVALID_ARGUMENT, "sg_get_process_count_r(whereof = %p)", whereof);
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return (struct anonymous_22 *)(void *)0;
  }

  else
  {
    process_count_result_vector=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)0, &sg_process_count_vector_init_info);
    if(process_count_result_vector == ((struct sg_vector *)NULL))
      return (struct anonymous_22 *)(void *)0;

    else
    {
      if(!(process_count_result_vector == ((struct sg_vector *)NULL)))
        tmp_if_expr_2 = (void *)&process_count_result_vector[(signed long int)1];

      else
        tmp_if_expr_2 = (void *)0;
      process_count = (struct anonymous_22 *)tmp_if_expr_2;
      enum anonymous_4 return_value_sg_get_process_count_int_3;
      return_value_sg_get_process_count_int_3=sg_get_process_count_int(process_count, process_stats_vector);
      if((signed int)return_value_sg_get_process_count_int_3 == SG_ERROR_NONE)
        return process_count;

      else
      {
        sg_vector_free(process_count_result_vector);
        return (struct anonymous_22 *)(void *)0;
      }
    }
  }
}

// sg_get_process_stats
// file process_stats.c line 1351
struct anonymous_7 * sg_get_process_stats(unsigned long int *entries)
{
  struct sg_process_glob *process_glob;
  void *return_value_sg_comp_get_tls_1;
  return_value_sg_comp_get_tls_1=sg_comp_get_tls(sg_process_glob_id);
  process_glob = (struct sg_process_glob *)return_value_sg_comp_get_tls_1;
  enum anonymous_4 rc;
  void *tmp_if_expr_2;
  unsigned long int tmp_if_expr_3;
  if(process_glob == ((struct sg_process_glob *)NULL))
  {
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_7 *)(void *)0;
  }

  else
  {
    if(process_glob->process_vectors[0l] == ((struct sg_vector *)NULL))
      process_glob->process_vectors[(signed long int)0]=sg_vector_create((unsigned long int)16, (unsigned long int)16, (unsigned long int)0, &sg_process_stats_vector_init_info);

    else
      sg_vector_clear(process_glob->process_vectors[(signed long int)0]);
    if(!(process_glob->process_vectors[0l] == ((struct sg_vector *)NULL)))
    {
      rc=sg_get_process_stats_int(&process_glob->process_vectors[(signed long int)0]);
      if((signed int)rc == SG_ERROR_NONE)
      {
        struct anonymous_7 *process_stats;
        if(!(process_glob->process_vectors[0l] == ((struct sg_vector *)NULL)))
          tmp_if_expr_2 = (void *)&process_glob->process_vectors[(signed long int)0][(signed long int)1];

        else
          tmp_if_expr_2 = (void *)0;
        process_stats = (struct anonymous_7 *)tmp_if_expr_2;
        sg_clear_error();
        if(!(entries == ((unsigned long int *)NULL)))
        {
          if(!(process_glob->process_vectors[0l] == ((struct sg_vector *)NULL)))
            tmp_if_expr_3 = process_glob->process_vectors[(signed long int)0]->used_count;

          else
            tmp_if_expr_3 = (unsigned long int)0;
          *entries = tmp_if_expr_3;
        }

        return process_stats;
      }

    }

    else
      rc=sg_get_error();
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_7 *)(void *)0;
  }
}

// sg_get_process_stats_int
// file process_stats.c line 298
static enum anonymous_4 sg_get_process_stats_int(struct sg_vector **proc_stats_vector_ptr)
{
  unsigned long int proc_items = (unsigned long int)0;
  struct anonymous_7 *proc_stats_ptr;
  signed long int now;
  now=time((signed long int *)(void *)0);
  struct pids_in_proc_dir_t *pids_in_proc_dir;
  unsigned long int pid_item = (unsigned long int)0;
  char filename[4096l];
  struct _IO_FILE *f;
  char s;
  char read_buf[4096l];
  char *read_ptr;
  unsigned long int stime;
  unsigned long int utime;
  unsigned long long int starttime;
  signed int fd;
  signed int rc;
  unsigned long int len;
  signed long int uptime;
  signed long int tickspersec;
  f=fopen("/proc/uptime", "r");
  struct sg_vector *tmp_if_expr_8;
  struct sg_vector *return_value_sg_vector_resize_6;
  struct sg_vector *return_value_sg_vector_create_7;
  unsigned long int tmp_if_expr_3;
  void *tmp_if_expr_4;
  struct sg_vector *tmp_if_expr_14;
  struct sg_vector *return_value_sg_vector_resize_12;
  struct sg_vector *return_value_sg_vector_create_13;
  unsigned long int tmp_if_expr_9;
  void *tmp_if_expr_10;
  struct sg_vector *tmp_if_expr_20;
  struct sg_vector *return_value_sg_vector_resize_18;
  struct sg_vector *return_value_sg_vector_create_19;
  unsigned long int tmp_if_expr_15;
  void *tmp_if_expr_16;
  struct sg_vector *tmp_if_expr_37;
  struct sg_vector *return_value_sg_vector_resize_35;
  struct sg_vector *return_value_sg_vector_create_36;
  unsigned long int tmp_if_expr_32;
  void *tmp_if_expr_33;
  if(f == ((struct _IO_FILE *)NULL))
  {
    do
    {
      char *sg_get_process_stats_int__1__1__1____errinfobuf = (char *)(void *)0;
      sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_OPEN, "/proc/uptime");
      free((void *)sg_get_process_stats_int__1__1__1____errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_OPEN;
  }

  else
  {
    signed int return_value_fscanf_1;
    return_value_fscanf_1=fscanf(f, "%ld %*d", &uptime);
    if(!(return_value_fscanf_1 == 1))
    {
      fclose(f);
      do
      {
        char *sg_get_process_stats_int__1__2__1____errinfobuf = (char *)(void *)0;
        sg_set_error_fmt((enum anonymous_4)SG_ERROR_PARSE, (const char *)(void *)0);
        free((void *)sg_get_process_stats_int__1__2__1____errinfobuf);
      }
      while((_Bool)0);
      return (enum anonymous_4)SG_ERROR_PARSE;
    }

    else
    {
      fclose(f);
      pids_in_proc_dir=scan_proc_dir("/proc");
      if(pids_in_proc_dir == ((struct pids_in_proc_dir_t *)NULL))
      {
        do
        {
          char *sg_get_process_stats_int__1__3__1____errinfobuf = (char *)(void *)0;
          free((void *)sg_get_process_stats_int__1__3__1____errinfobuf);
        }
        while((_Bool)0);
        enum anonymous_4 return_value_sg_get_error_2;
        return_value_sg_get_error_2=sg_get_error();
        return return_value_sg_get_error_2;
      }

      tickspersec=sysconf(2);
      do
      {
        if(!(*proc_stats_vector_ptr == ((struct sg_vector *)NULL)))
        {
          return_value_sg_vector_resize_6=sg_vector_resize(*proc_stats_vector_ptr, (unsigned long int)(proc_items + pids_in_proc_dir->nitems));
          tmp_if_expr_8 = return_value_sg_vector_resize_6;
        }

        else
        {
          return_value_sg_vector_create_7=sg_vector_create((unsigned long int)(proc_items + pids_in_proc_dir->nitems), (unsigned long int)(proc_items + pids_in_proc_dir->nitems), (unsigned long int)(proc_items + pids_in_proc_dir->nitems), &sg_process_stats_vector_init_info);
          tmp_if_expr_8 = return_value_sg_vector_create_7;
        }
        *proc_stats_vector_ptr = tmp_if_expr_8;
        if(!(*proc_stats_vector_ptr == ((struct sg_vector *)NULL)))
        {
          if(!(*proc_stats_vector_ptr == ((struct sg_vector *)NULL)))
            tmp_if_expr_3 = (*proc_stats_vector_ptr)->used_count;

          else
            tmp_if_expr_3 = (unsigned long int)0;
          /* assertion (*(proc_stats_vector_ptr) ? (*(proc_stats_vector_ptr))->used_count : 0) == ((size_t)(proc_items + pids_in_proc_dir->nitems)) */
          assert(tmp_if_expr_3 == (unsigned long int)(proc_items + pids_in_proc_dir->nitems));
          if(!(*proc_stats_vector_ptr == ((struct sg_vector *)NULL)))
            tmp_if_expr_4 = (void *)&(*proc_stats_vector_ptr)[(signed long int)1];

          else
            tmp_if_expr_4 = (void *)0;
          proc_stats_ptr = (struct anonymous_7 *)tmp_if_expr_4;
        }

        else
          if(!(pids_in_proc_dir->nitems + (unsigned long int)(proc_items == 0ul) == 0ul))
            proc_stats_ptr = (struct anonymous_7 *)(void *)0;

          else
          {
            fclose(f);
            enum anonymous_4 return_value_sg_get_error_5;
            return_value_sg_get_error_5=sg_get_error();
            return return_value_sg_get_error_5;
          }
      }
      while((_Bool)0);
      while(!(pids_in_proc_dir == ((struct pids_in_proc_dir_t *)NULL)))
        if(pid_item >= pids_in_proc_dir->nitems)
        {
          pids_in_proc_dir=free_pids_in_proc_dir(pids_in_proc_dir, (_Bool)0);
          if(!(pids_in_proc_dir == ((struct pids_in_proc_dir_t *)NULL)))
            do
            {
              if(!(*proc_stats_vector_ptr == ((struct sg_vector *)NULL)))
              {
                return_value_sg_vector_resize_12=sg_vector_resize(*proc_stats_vector_ptr, (unsigned long int)(proc_items + pids_in_proc_dir->nitems));
                tmp_if_expr_14 = return_value_sg_vector_resize_12;
              }

              else
              {
                return_value_sg_vector_create_13=sg_vector_create((unsigned long int)(proc_items + pids_in_proc_dir->nitems), (unsigned long int)(proc_items + pids_in_proc_dir->nitems), (unsigned long int)(proc_items + pids_in_proc_dir->nitems), &sg_process_stats_vector_init_info);
                tmp_if_expr_14 = return_value_sg_vector_create_13;
              }
              *proc_stats_vector_ptr = tmp_if_expr_14;
              if(!(*proc_stats_vector_ptr == ((struct sg_vector *)NULL)))
              {
                if(!(*proc_stats_vector_ptr == ((struct sg_vector *)NULL)))
                  tmp_if_expr_9 = (*proc_stats_vector_ptr)->used_count;

                else
                  tmp_if_expr_9 = (unsigned long int)0;
                /* assertion (*(proc_stats_vector_ptr) ? (*(proc_stats_vector_ptr))->used_count : 0) == ((size_t)(proc_items + pids_in_proc_dir->nitems)) */
                assert(tmp_if_expr_9 == (unsigned long int)(proc_items + pids_in_proc_dir->nitems));
                if(!(*proc_stats_vector_ptr == ((struct sg_vector *)NULL)))
                  tmp_if_expr_10 = (void *)&(*proc_stats_vector_ptr)[(signed long int)1];

                else
                  tmp_if_expr_10 = (void *)0;
                proc_stats_ptr = (struct anonymous_7 *)tmp_if_expr_10;
              }

              else
                if(!(pids_in_proc_dir->nitems + (unsigned long int)(proc_items == 0ul) == 0ul))
                  proc_stats_ptr = (struct anonymous_7 *)(void *)0;

                else
                {
                  fclose(f);
                  enum anonymous_4 return_value_sg_get_error_11;
                  return_value_sg_get_error_11=sg_get_error();
                  return return_value_sg_get_error_11;
                }
            }
            while((_Bool)0);

          pid_item = (unsigned long int)0;
        }

        else
        {
          snprintf(filename, (unsigned long int)4096, "/proc/%d/stat", pids_in_proc_dir->items[(signed long int)pid_item]);
          f=fopen(filename, "r");
          if(f == ((struct _IO_FILE *)NULL))
            pid_item = pid_item + 1ul;

          else
          {
            do
            {
              if(!(*proc_stats_vector_ptr == ((struct sg_vector *)NULL)))
              {
                return_value_sg_vector_resize_18=sg_vector_resize(*proc_stats_vector_ptr, (unsigned long int)(proc_items + (unsigned long int)1));
                tmp_if_expr_20 = return_value_sg_vector_resize_18;
              }

              else
              {
                return_value_sg_vector_create_19=sg_vector_create((unsigned long int)(proc_items + (unsigned long int)1), (unsigned long int)(proc_items + (unsigned long int)1), (unsigned long int)(proc_items + (unsigned long int)1), &sg_process_stats_vector_init_info);
                tmp_if_expr_20 = return_value_sg_vector_create_19;
              }
              *proc_stats_vector_ptr = tmp_if_expr_20;
              if(!(*proc_stats_vector_ptr == ((struct sg_vector *)NULL)))
              {
                if(!(*proc_stats_vector_ptr == ((struct sg_vector *)NULL)))
                  tmp_if_expr_15 = (*proc_stats_vector_ptr)->used_count;

                else
                  tmp_if_expr_15 = (unsigned long int)0;
                /* assertion (*(proc_stats_vector_ptr) ? (*(proc_stats_vector_ptr))->used_count : 0) == ((size_t)(proc_items + 1)) */
                assert(tmp_if_expr_15 == (unsigned long int)(proc_items + (unsigned long int)1));
                if(!(*proc_stats_vector_ptr == ((struct sg_vector *)NULL)))
                  tmp_if_expr_16 = (void *)&(*proc_stats_vector_ptr)[(signed long int)1];

                else
                  tmp_if_expr_16 = (void *)0;
                proc_stats_ptr = (struct anonymous_7 *)tmp_if_expr_16;
              }

              else
                if(!((signed int)(proc_items == 0ul) == -1))
                  proc_stats_ptr = (struct anonymous_7 *)(void *)0;

                else
                {
                  fclose(f);
                  enum anonymous_4 return_value_sg_get_error_17;
                  return_value_sg_get_error_17=sg_get_error();
                  return return_value_sg_get_error_17;
                }
            }
            while((_Bool)0);
            signed int return_value_fscanf_21;
            return_value_fscanf_21=fscanf(f, "%d%4095s %c %d %d %*d %*d %*d %*u %*u %*u %*u %*u %lu %lu %*d %*d %*d %d %*d %*d %llu %llu %llu %*u %*u %*u %*u %*u %*u %*u %*u %*u %*u %*u %*u %*u %*d %*d\n", &(proc_stats_ptr + (signed long int)proc_items)->pid, (const void *)read_buf, &s, &(proc_stats_ptr + (signed long int)proc_items)->parent, &(proc_stats_ptr + (signed long int)proc_items)->pgid, &utime, &stime, &(proc_stats_ptr + (signed long int)proc_items)->nice, &starttime, &(proc_stats_ptr + (signed long int)proc_items)->proc_size, &(proc_stats_ptr + (signed long int)proc_items)->proc_resident);
            if(!(return_value_fscanf_21 >= 11))
              pid_item = pid_item + 1ul;

            else
            {
              (proc_stats_ptr + (signed long int)proc_items)->proc_resident = ((proc_stats_ptr + (signed long int)proc_items)->proc_resident + (unsigned long int)3) * (unsigned long int)sys_page_size_link1;
              switch((signed int)s)
              {
                case 83:
                {
                  (proc_stats_ptr + (signed long int)proc_items)->state = (enum anonymous_23)SG_PROCESS_STATE_SLEEPING;
                  goto __CPROVER_DUMP_L45;
                }
                case 82:
                {
                  (proc_stats_ptr + (signed long int)proc_items)->state = (enum anonymous_23)SG_PROCESS_STATE_RUNNING;
                  goto __CPROVER_DUMP_L45;
                }
                case 90:
                {
                  (proc_stats_ptr + (signed long int)proc_items)->state = (enum anonymous_23)SG_PROCESS_STATE_ZOMBIE;
                  goto __CPROVER_DUMP_L45;
                }
                case 84:

                case 68:
                  (proc_stats_ptr + (signed long int)proc_items)->state = (enum anonymous_23)SG_PROCESS_STATE_STOPPED;
                default:
                {

                __CPROVER_DUMP_L45:
                  ;
                  read_ptr=strchr(&read_buf[(signed long int)1], 41);
                  if(!(read_ptr == ((char *)NULL)))
                    *read_ptr = (char)0;

                  enum anonymous_4 return_value_sg_update_string_23;
                  return_value_sg_update_string_23=sg_update_string(&(proc_stats_ptr + (signed long int)proc_items)->process_name, &read_buf[(signed long int)1]);
                  if(!((signed int)return_value_sg_update_string_23 == SG_ERROR_NONE))
                  {
                    fclose(f);
                    do
                    {
                      char *sg_get_process_stats_int__1__5__7__1____errinfobuf = (char *)(void *)0;
                      free((void *)sg_get_process_stats_int__1__5__7__1____errinfobuf);
                    }
                    while((_Bool)0);
                    enum anonymous_4 return_value_sg_get_error_22;
                    return_value_sg_get_error_22=sg_get_error();
                    return return_value_sg_get_error_22;
                  }

                  (proc_stats_ptr + (signed long int)proc_items)->cpu_percent = (100.0 * (double)(utime + stime)) / ((double)uptime * 100.0 - (double)starttime);
                  if(!(tickspersec >= 0l))
                  {
                    (proc_stats_ptr + (signed long int)proc_items)->time_spent = (signed long int)0;
                    (proc_stats_ptr + (signed long int)proc_items)->start_time = (signed long int)0;
                  }

                  else
                  {
                    (proc_stats_ptr + (signed long int)proc_items)->time_spent = (signed long int)((utime + stime) / (unsigned long int)tickspersec);
                    (proc_stats_ptr + (signed long int)proc_items)->start_time = (signed long int)((unsigned long int)(now - uptime) + starttime / (unsigned long int)tickspersec);
                  }
                  fclose(f);
                  snprintf(filename, (unsigned long int)4096, "/proc/%d/status", pids_in_proc_dir->items[(signed long int)pid_item]);
                  f=fopen(filename, "r");
                  if(f == ((struct _IO_FILE *)NULL))
                    pid_item = pid_item + 1ul;

                  else
                  {
                    char *return_value_sg_f_read_line_24;
                    return_value_sg_f_read_line_24=sg_f_read_line(f, read_buf, sizeof(char [4096l]) /*4096ul*/ , "Uid:");
                    if(return_value_sg_f_read_line_24 == ((char *)NULL))
                    {
                      fclose(f);
                      pid_item = pid_item + 1ul;
                    }

                    else
                    {
                      sscanf(read_buf, "Uid:\t%u\t%u\t%*d\t%*d\n", &(proc_stats_ptr + (signed long int)proc_items)->uid, &(proc_stats_ptr + (signed long int)proc_items)->euid);
                      char *return_value_sg_f_read_line_25;
                      return_value_sg_f_read_line_25=sg_f_read_line(f, read_buf, sizeof(char [4096l]) /*4096ul*/ , "Gid:");
                      if(return_value_sg_f_read_line_25 == ((char *)NULL))
                      {
                        fclose(f);
                        pid_item = pid_item + 1ul;
                      }

                      else
                      {
                        sscanf(read_buf, "Gid:\t%u\t%u\t%*d\t%*d\n", &(proc_stats_ptr + (signed long int)proc_items)->gid, &(proc_stats_ptr + (signed long int)proc_items)->egid);
                        char *return_value_sg_f_read_line_26;
                        return_value_sg_f_read_line_26=sg_f_read_line(f, read_buf, sizeof(char [4096l]) /*4096ul*/ , "voluntary_ctxt_switches:");
                        if(!(return_value_sg_f_read_line_26 == ((char *)NULL)))
                          sscanf(read_buf, "voluntary_ctxt_switches:\t%llu", &(proc_stats_ptr + (signed long int)proc_items)->voluntary_context_switches);

                        else
                          (proc_stats_ptr + (signed long int)proc_items)->voluntary_context_switches = (unsigned long long int)0;
                        char *return_value_sg_f_read_line_27;
                        return_value_sg_f_read_line_27=sg_f_read_line(f, read_buf, sizeof(char [4096l]) /*4096ul*/ , "nonvoluntary_ctxt_switches:");
                        if(!(return_value_sg_f_read_line_27 == ((char *)NULL)))
                          sscanf(read_buf, "nonvoluntary_ctxt_switches:\t%llu", &(proc_stats_ptr + (signed long int)proc_items)->involuntary_context_switches);

                        else
                          (proc_stats_ptr + (signed long int)proc_items)->involuntary_context_switches = (unsigned long long int)0;
                        (proc_stats_ptr + (signed long int)proc_items)->context_switches = (proc_stats_ptr + (signed long int)proc_items)->voluntary_context_switches + (proc_stats_ptr + (signed long int)proc_items)->involuntary_context_switches;
                        fclose(f);
                        snprintf(filename, (unsigned long int)4096, "/proc/%d/cmdline", pids_in_proc_dir->items[(signed long int)pid_item]);
                        fd=open(filename, 00);
                        if(fd == -1)
                          pid_item = pid_item + 1ul;

                        else
                        {
                          len = (unsigned long int)0;
                          do
                          {
                            signed long int return_value_read_28;
                            return_value_read_28=read(fd, (void *)read_buf, sizeof(char [4096l]) /*4096ul*/ );
                            rc = (signed int)return_value_read_28;
                            if(rc >= 1)
                            {
                              void *return_value_sg_realloc_29;
                              return_value_sg_realloc_29=sg_realloc((void *)(proc_stats_ptr + (signed long int)proc_items)->proctitle, len + (unsigned long int)rc + (unsigned long int)1);
                              read_ptr = (char *)return_value_sg_realloc_29;
                              if(read_ptr == ((char *)NULL))
                              {
                                free((void *)(proc_stats_ptr + (signed long int)proc_items)->proctitle);
                                (proc_stats_ptr + (signed long int)proc_items)->proctitle = (char *)(void *)0;
                                close(fd);
                                do
                                {
                                  char *__errinfobuf = (char *)(void *)0;
                                  free((void *)__errinfobuf);
                                }
                                while((_Bool)0);
                                enum anonymous_4 return_value_sg_get_error_30;
                                return_value_sg_get_error_30=sg_get_error();
                                return return_value_sg_get_error_30;
                              }

                              (proc_stats_ptr + (signed long int)proc_items)->proctitle = read_ptr;
                              memcpy((void *)((proc_stats_ptr + (signed long int)proc_items)->proctitle + (signed long int)len), (const void *)read_buf, (unsigned long int)rc);
                              len = len + (unsigned long int)rc;
                            }

                          }
                          while(rc >= 1);
                          close(fd);
                          if(rc == -1)
                          {
                            free((void *)(proc_stats_ptr + (signed long int)proc_items)->proctitle);
                            (proc_stats_ptr + (signed long int)proc_items)->proctitle = (char *)(void *)0;
                            pid_item = pid_item + 1ul;
                          }

                          else
                          {
                            if(!((proc_stats_ptr + (signed long int)proc_items)->proctitle == ((char *)NULL)))
                            {
                              (proc_stats_ptr + (signed long int)proc_items)->proctitle[(signed long int)len] = (char)0;
                              adjust_procname_cmndline((proc_stats_ptr + (signed long int)proc_items)->proctitle, len);
                            }

                            else
                            {
                              signed int return_value_asprintf_31;
                              return_value_asprintf_31=asprintf(&(proc_stats_ptr + (signed long int)proc_items)->proctitle, "[%s]", (proc_stats_ptr + (signed long int)proc_items)->process_name);
                              if(return_value_asprintf_31 == -1)
                              {
                                fclose(f);
                                do
                                {
                                  char *sg_get_process_stats_int__1__5__17__1__1____errinfobuf = (char *)(void *)0;
                                  sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_ASPRINTF, (const char *)(void *)0);
                                  free((void *)sg_get_process_stats_int__1__5__17__1__1____errinfobuf);
                                }
                                while((_Bool)0);
                                return (enum anonymous_4)SG_ERROR_ASPRINTF;
                              }

                            }
                            (proc_stats_ptr + (signed long int)proc_items)->systime = now;
                            pid_item = pid_item + 1ul;
                            proc_items = proc_items + 1ul;
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
      if(!(proc_stats_vector_ptr == ((struct sg_vector **)NULL)))
      {
        if(!(*proc_stats_vector_ptr == ((struct sg_vector *)NULL)))
        {
          if(!(proc_items == (*proc_stats_vector_ptr)->used_count))
            do
            {
              if(!(*proc_stats_vector_ptr == ((struct sg_vector *)NULL)))
              {
                return_value_sg_vector_resize_35=sg_vector_resize(*proc_stats_vector_ptr, (unsigned long int)proc_items);
                tmp_if_expr_37 = return_value_sg_vector_resize_35;
              }

              else
              {
                return_value_sg_vector_create_36=sg_vector_create((unsigned long int)proc_items, (unsigned long int)proc_items, (unsigned long int)proc_items, &sg_process_stats_vector_init_info);
                tmp_if_expr_37 = return_value_sg_vector_create_36;
              }
              *proc_stats_vector_ptr = tmp_if_expr_37;
              if(!(*proc_stats_vector_ptr == ((struct sg_vector *)NULL)))
              {
                if(!(*proc_stats_vector_ptr == ((struct sg_vector *)NULL)))
                  tmp_if_expr_32 = (*proc_stats_vector_ptr)->used_count;

                else
                  tmp_if_expr_32 = (unsigned long int)0;
                /* assertion (*(proc_stats_vector_ptr) ? (*(proc_stats_vector_ptr))->used_count : 0) == ((size_t)(proc_items)) */
                assert(tmp_if_expr_32 == (unsigned long int)proc_items);
                if(!(*proc_stats_vector_ptr == ((struct sg_vector *)NULL)))
                  tmp_if_expr_33 = (void *)&(*proc_stats_vector_ptr)[(signed long int)1];

                else
                  tmp_if_expr_33 = (void *)0;
                proc_stats_ptr = (struct anonymous_7 *)tmp_if_expr_33;
              }

              else
                if(proc_items == 0ul)
                  proc_stats_ptr = (struct anonymous_7 *)(void *)0;

                else
                {
                  enum anonymous_4 return_value_sg_get_error_34;
                  return_value_sg_get_error_34=sg_get_error();
                  return return_value_sg_get_error_34;
                }
            }
            while((_Bool)0);

        }

      }

      return (enum anonymous_4)SG_ERROR_NONE;
    }
  }
}

// sg_get_process_stats_r
// file process_stats.c line 1351
struct anonymous_7 * sg_get_process_stats_r(unsigned long int *entries)
{
  struct sg_vector *process_vector;
  process_vector=sg_vector_create((unsigned long int)16, (unsigned long int)16, (unsigned long int)0, &sg_process_stats_vector_init_info);
  enum anonymous_4 rc;
  void *tmp_if_expr_1;
  unsigned long int tmp_if_expr_2;
  if(!(process_vector == ((struct sg_vector *)NULL)))
  {
    rc=sg_get_process_stats_int(&process_vector);
    if((signed int)rc == SG_ERROR_NONE)
    {
      struct anonymous_7 *process_stats;
      if(!(process_vector == ((struct sg_vector *)NULL)))
        tmp_if_expr_1 = (void *)&process_vector[(signed long int)1];

      else
        tmp_if_expr_1 = (void *)0;
      process_stats = (struct anonymous_7 *)tmp_if_expr_1;
      sg_clear_error();
      if(!(entries == ((unsigned long int *)NULL)))
      {
        if(!(process_vector == ((struct sg_vector *)NULL)))
          tmp_if_expr_2 = process_vector->used_count;

        else
          tmp_if_expr_2 = (unsigned long int)0;
        *entries = tmp_if_expr_2;
      }

      return process_stats;
    }

    sg_vector_free(process_vector);
  }

  else
    rc=sg_get_error();
  if(!(entries == ((unsigned long int *)NULL)))
    *entries = (unsigned long int)0;

  return (struct anonymous_7 *)(void *)0;
}

// sg_get_string_match
// file tools.h line 519
char * sg_get_string_match(char *line, struct anonymous_6 *match)
{
  signed int len;
  char *match_string;
  /* assertion line */
  assert(line != ((char *)NULL));
  /* assertion match */
  assert(match != ((struct anonymous_6 *)NULL));
  if(line == ((char *)NULL) || match == ((struct anonymous_6 *)NULL))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      sg_set_error_fmt((enum anonymous_4)SG_ERROR_INVALID_ARGUMENT, "sg_get_string_match(line = %p, match = %p)", line, match);
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return (char *)(void *)0;
  }

  else
  {
    len = match->rm_eo - match->rm_so;
    match_string=strndup(line + (signed long int)match->rm_so, (unsigned long int)len);
    if(match_string == ((char *)NULL))
      do
      {
        char *sg_get_string_match__1__2__1____errinfobuf = (char *)(void *)0;
        sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_MALLOC, "sg_get_string_match: couldn't strndup()");
        free((void *)sg_get_string_match__1__2__1____errinfobuf);
      }
      while((_Bool)0);

    return match_string;
  }
}

// sg_get_swap_stats
// file swap_stats.c line 382
struct anonymous_19 * sg_get_swap_stats(unsigned long int *entries)
{
  struct sg_swap_glob *swap_glob;
  void *return_value_sg_comp_get_tls_1;
  return_value_sg_comp_get_tls_1=sg_comp_get_tls(sg_swap_glob_id);
  swap_glob = (struct sg_swap_glob *)return_value_sg_comp_get_tls_1;
  enum anonymous_4 rc;
  void *tmp_if_expr_2;
  unsigned long int tmp_if_expr_3;
  if(swap_glob == ((struct sg_swap_glob *)NULL))
  {
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_19 *)(void *)0;
  }

  else
  {
    if(swap_glob->swap_vectors[0l] == ((struct sg_vector *)NULL))
      swap_glob->swap_vectors[(signed long int)0]=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)1, &sg_swap_stats_vector_init_info);

    if(!(swap_glob->swap_vectors[0l] == ((struct sg_vector *)NULL)))
    {
      struct anonymous_19 *swap_stats;
      if(!(swap_glob->swap_vectors[0l] == ((struct sg_vector *)NULL)))
        tmp_if_expr_2 = (void *)&swap_glob->swap_vectors[(signed long int)0][(signed long int)1];

      else
        tmp_if_expr_2 = (void *)0;
      swap_stats = (struct anonymous_19 *)tmp_if_expr_2;
      rc=sg_get_swap_stats_int(swap_stats);
      if((signed int)rc == SG_ERROR_NONE)
      {
        sg_clear_error();
        if(!(entries == ((unsigned long int *)NULL)))
        {
          if(!(swap_glob->swap_vectors[0l] == ((struct sg_vector *)NULL)))
            tmp_if_expr_3 = swap_glob->swap_vectors[(signed long int)0]->used_count;

          else
            tmp_if_expr_3 = (unsigned long int)0;
          *entries = tmp_if_expr_3;
        }

        return swap_stats;
      }

    }

    else
      rc=sg_get_error();
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_19 *)(void *)0;
  }
}

// sg_get_swap_stats_int
// file swap_stats.c line 71
static enum anonymous_4 sg_get_swap_stats_int(struct anonymous_19 *swap_stats_buf)
{
  struct _IO_FILE *f;
  char line_buf[256l];
  unsigned long long int value;
  unsigned int matches = (unsigned int)0;
  swap_stats_buf->total = (unsigned long long int)0;
  swap_stats_buf->used = (unsigned long long int)0;
  swap_stats_buf->free = (unsigned long long int)0;
  f=fopen("/proc/meminfo", "r");
  char *return_value_fgets_1;
  signed int return_value_strncmp_3;
  if(f == ((struct _IO_FILE *)NULL))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_OPEN, "/proc/meminfo");
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_OPEN;
  }

  else
  {
    while(!(matches >= 2u))
    {
      return_value_fgets_1=fgets(line_buf, (signed int)sizeof(char [256l]) /*256ul*/ , f);
      if(return_value_fgets_1 == ((char *)NULL))
        break;

      signed int return_value_sscanf_2;
      return_value_sscanf_2=sscanf(line_buf, "%*s %llu kB", &value);
      if(return_value_sscanf_2 == 1)
      {
        value = value * (unsigned long long int)1024;
        signed int return_value_strncmp_4;
        return_value_strncmp_4=strncmp(line_buf, "SwapTotal:", (unsigned long int)10);
        if(return_value_strncmp_4 == 0)
        {
          swap_stats_buf->total = value;
          matches = matches + 1u;
        }

        else
        {
          return_value_strncmp_3=strncmp(line_buf, "SwapFree:", (unsigned long int)9);
          if(return_value_strncmp_3 == 0)
          {
            swap_stats_buf->free = value;
            matches = matches + 1u;
          }

        }
      }

    }
    fclose(f);
    if(!(matches >= 2u))
    {
      do
      {
        char *sg_get_swap_stats_int__1__3__1____errinfobuf = (char *)(void *)0;
        sg_set_error_fmt((enum anonymous_4)SG_ERROR_PARSE, "/proc/meminfo");
        free((void *)sg_get_swap_stats_int__1__3__1____errinfobuf);
      }
      while((_Bool)0);
      return (enum anonymous_4)SG_ERROR_PARSE;
    }

    else
    {
      swap_stats_buf->used = swap_stats_buf->total - swap_stats_buf->free;
      swap_stats_buf->systime=time((signed long int *)(void *)0);
      return (enum anonymous_4)SG_ERROR_NONE;
    }
  }
}

// sg_get_swap_stats_r
// file swap_stats.c line 382
struct anonymous_19 * sg_get_swap_stats_r(unsigned long int *entries)
{
  struct sg_vector *swap_stats_vector;
  swap_stats_vector=sg_vector_create((unsigned long int)1, (unsigned long int)1, (unsigned long int)1, &sg_swap_stats_vector_init_info);
  enum anonymous_4 rc;
  void *tmp_if_expr_1;
  unsigned long int tmp_if_expr_2;
  if(!(swap_stats_vector == ((struct sg_vector *)NULL)))
  {
    struct anonymous_19 *swap_stats;
    if(!(swap_stats_vector == ((struct sg_vector *)NULL)))
      tmp_if_expr_1 = (void *)&swap_stats_vector[(signed long int)1];

    else
      tmp_if_expr_1 = (void *)0;
    swap_stats = (struct anonymous_19 *)tmp_if_expr_1;
    rc=sg_get_swap_stats_int(swap_stats);
    if((signed int)rc == SG_ERROR_NONE)
    {
      sg_clear_error();
      if(!(entries == ((unsigned long int *)NULL)))
      {
        if(!(swap_stats_vector == ((struct sg_vector *)NULL)))
          tmp_if_expr_2 = swap_stats_vector->used_count;

        else
          tmp_if_expr_2 = (unsigned long int)0;
        *entries = tmp_if_expr_2;
      }

      return swap_stats;
    }

    sg_vector_free(swap_stats_vector);
  }

  else
    rc=sg_get_error();
  if(!(entries == ((unsigned long int *)NULL)))
    *entries = (unsigned long int)0;

  return (struct anonymous_19 *)(void *)0;
}

// sg_get_sys_page_size
// file tools.h line 541
static inline signed long int sg_get_sys_page_size(void)
{
  if(sys_page_size == 0l)
  {
    sys_page_size=sysconf(30);
    if(sys_page_size == -1l)
      do
      {
        char *__errinfobuf = (char *)(void *)0;
        sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_SYSCONF, "_SC_PAGESIZE");
        free((void *)__errinfobuf);
      }
      while((_Bool)0);

  }

  return sys_page_size;
}

// sg_get_sys_page_size_link1
// file tools.h line 541
static inline signed long int sg_get_sys_page_size_link1(void)
{
  if(sys_page_size_link1 == 0l)
  {
    sys_page_size_link1=sysconf(30);
    if(sys_page_size_link1 == -1l)
      do
      {
        char *__errinfobuf_link1 = (char *)(void *)0;
        sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_SYSCONF, "_SC_PAGESIZE");
        free((void *)__errinfobuf_link1);
      }
      while((_Bool)0);

  }

  return sys_page_size_link1;
}

// sg_get_sys_page_size_link2
// file tools.h line 541
static inline signed long int sg_get_sys_page_size_link2(void)
{
  if(sys_page_size_link2 == 0l)
  {
    sys_page_size_link2=sysconf(30);
    if(sys_page_size_link2 == -1l)
      do
      {
        char *__errinfobuf_link2 = (char *)(void *)0;
        sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_SYSCONF, "_SC_PAGESIZE");
        free((void *)__errinfobuf_link2);
      }
      while((_Bool)0);

  }

  return sys_page_size_link2;
}

// sg_get_user_stats
// file user_stats.c line 365
struct anonymous_18 * sg_get_user_stats(unsigned long int *entries)
{
  struct sg_user_glob *user_glob;
  void *return_value_sg_comp_get_tls_1;
  return_value_sg_comp_get_tls_1=sg_comp_get_tls(sg_user_glob_id);
  user_glob = (struct sg_user_glob *)return_value_sg_comp_get_tls_1;
  enum anonymous_4 rc;
  void *tmp_if_expr_2;
  unsigned long int tmp_if_expr_3;
  if(user_glob == ((struct sg_user_glob *)NULL))
  {
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_18 *)(void *)0;
  }

  else
  {
    if(user_glob->user_vectors[0l] == ((struct sg_vector *)NULL))
      user_glob->user_vectors[(signed long int)0]=sg_vector_create((unsigned long int)16, (unsigned long int)16, (unsigned long int)0, &sg_user_stats_vector_init_info);

    else
      sg_vector_clear(user_glob->user_vectors[(signed long int)0]);
    if(!(user_glob->user_vectors[0l] == ((struct sg_vector *)NULL)))
    {
      rc=sg_get_user_stats_int(&user_glob->user_vectors[(signed long int)0]);
      if((signed int)rc == SG_ERROR_NONE)
      {
        struct anonymous_18 *user_stats;
        if(!(user_glob->user_vectors[0l] == ((struct sg_vector *)NULL)))
          tmp_if_expr_2 = (void *)&user_glob->user_vectors[(signed long int)0][(signed long int)1];

        else
          tmp_if_expr_2 = (void *)0;
        user_stats = (struct anonymous_18 *)tmp_if_expr_2;
        sg_clear_error();
        if(!(entries == ((unsigned long int *)NULL)))
        {
          if(!(user_glob->user_vectors[0l] == ((struct sg_vector *)NULL)))
            tmp_if_expr_3 = user_glob->user_vectors[(signed long int)0]->used_count;

          else
            tmp_if_expr_3 = (unsigned long int)0;
          *entries = tmp_if_expr_3;
        }

        return user_stats;
      }

    }

    else
      rc=sg_get_error();
    if(!(entries == ((unsigned long int *)NULL)))
      *entries = (unsigned long int)0;

    return (struct anonymous_18 *)(void *)0;
  }
}

// sg_get_user_stats_int
// file user_stats.c line 95
static enum anonymous_4 sg_get_user_stats_int(struct sg_vector **user_stats_vector_ptr)
{
  unsigned long int num_users = (unsigned long int)0;
  struct anonymous_18 *user_ptr;
  signed long int now;
  now=time((signed long int *)(void *)0);
  struct utmpx *utx;
  struct utmp *ut;
  sg_lock_mutex("utmp");
  setutxent();
  struct sg_vector *tmp_if_expr_6;
  struct sg_vector *return_value_sg_vector_resize_4;
  struct sg_vector *return_value_sg_vector_create_5;
  unsigned long int tmp_if_expr_1;
  void *tmp_if_expr_2;
  signed int tmp_if_expr_10;
  enum anonymous_4 return_value_sg_lupdate_string_8;
  enum anonymous_4 return_value_sg_update_string_9;
  _Bool tmp_if_expr_14;
  signed int tmp_if_expr_13;
  enum anonymous_4 return_value_sg_lupdate_string_11;
  enum anonymous_4 return_value_sg_update_string_12;
  _Bool tmp_if_expr_18;
  signed int tmp_if_expr_17;
  enum anonymous_4 return_value_sg_lupdate_string_15;
  enum anonymous_4 return_value_sg_update_string_16;
  _Bool tmp_if_expr_20;
  enum anonymous_4 return_value_sg_update_mem_19;
  do
  {
    utx=getutxent();
    if(utx == ((struct utmpx *)NULL))
      break;

    if((signed int)utx->ut_type == 7)
    {
      do
      {
        if(!(*user_stats_vector_ptr == ((struct sg_vector *)NULL)))
        {
          return_value_sg_vector_resize_4=sg_vector_resize(*user_stats_vector_ptr, (unsigned long int)(num_users + (unsigned long int)1));
          tmp_if_expr_6 = return_value_sg_vector_resize_4;
        }

        else
        {
          return_value_sg_vector_create_5=sg_vector_create((unsigned long int)(num_users + (unsigned long int)1), (unsigned long int)(num_users + (unsigned long int)1), (unsigned long int)(num_users + (unsigned long int)1), &sg_user_stats_vector_init_info);
          tmp_if_expr_6 = return_value_sg_vector_create_5;
        }
        *user_stats_vector_ptr = tmp_if_expr_6;
        if(!(*user_stats_vector_ptr == ((struct sg_vector *)NULL)))
        {
          if(!(*user_stats_vector_ptr == ((struct sg_vector *)NULL)))
            tmp_if_expr_1 = (*user_stats_vector_ptr)->used_count;

          else
            tmp_if_expr_1 = (unsigned long int)0;
          /* assertion (*(user_stats_vector_ptr) ? (*(user_stats_vector_ptr))->used_count : 0) == ((size_t)(num_users + 1)) */
          assert(tmp_if_expr_1 == (unsigned long int)(num_users + (unsigned long int)1));
          if(!(*user_stats_vector_ptr == ((struct sg_vector *)NULL)))
            tmp_if_expr_2 = (void *)&(*user_stats_vector_ptr)[(signed long int)1];

          else
            tmp_if_expr_2 = (void *)0;
          user_ptr = (struct anonymous_18 *)tmp_if_expr_2;
        }

        else
          if(!((signed int)(num_users == 0ul) == -1))
            user_ptr = (struct anonymous_18 *)(void *)0;

          else
          {
            endutxent();
            sg_unlock_mutex("utmp");
            enum anonymous_4 return_value_sg_get_error_3;
            return_value_sg_get_error_3=sg_get_error();
            return return_value_sg_get_error_3;
          }
      }
      while((_Bool)0);
      if((void *)&utx->ut_user == (void *)utx->ut_user)
      {
        return_value_sg_lupdate_string_8=sg_lupdate_string(&(user_ptr + (signed long int)num_users)->login_name, utx->ut_user, sizeof(char [32l]) /*32ul*/ );
        tmp_if_expr_10 = (signed int)return_value_sg_lupdate_string_8;
      }

      else
      {
        return_value_sg_update_string_9=sg_update_string(&(user_ptr + (signed long int)num_users)->login_name, utx->ut_user);
        tmp_if_expr_10 = (signed int)return_value_sg_update_string_9;
      }
      if(!(tmp_if_expr_10 == 0))
        tmp_if_expr_14 = (_Bool)1;

      else
      {
        if((void *)&utx->ut_host == (void *)utx->ut_host)
        {
          return_value_sg_lupdate_string_11=sg_lupdate_string(&(user_ptr + (signed long int)num_users)->hostname, utx->ut_host, sizeof(char [256l]) /*256ul*/ );
          tmp_if_expr_13 = (signed int)return_value_sg_lupdate_string_11;
        }

        else
        {
          return_value_sg_update_string_12=sg_update_string(&(user_ptr + (signed long int)num_users)->hostname, utx->ut_host);
          tmp_if_expr_13 = (signed int)return_value_sg_update_string_12;
        }
        tmp_if_expr_14 = tmp_if_expr_13 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_14)
        tmp_if_expr_18 = (_Bool)1;

      else
      {
        if((void *)&utx->ut_line == (void *)utx->ut_line)
        {
          return_value_sg_lupdate_string_15=sg_lupdate_string(&(user_ptr + (signed long int)num_users)->device, utx->ut_line, sizeof(char [32l]) /*32ul*/ );
          tmp_if_expr_17 = (signed int)return_value_sg_lupdate_string_15;
        }

        else
        {
          return_value_sg_update_string_16=sg_update_string(&(user_ptr + (signed long int)num_users)->device, utx->ut_line);
          tmp_if_expr_17 = (signed int)return_value_sg_update_string_16;
        }
        tmp_if_expr_18 = tmp_if_expr_17 != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_18)
        tmp_if_expr_20 = (_Bool)1;

      else
      {
        return_value_sg_update_mem_19=sg_update_mem((void **)(void *)&(user_ptr + (signed long int)num_users)->record_id, (const void *)utx->ut_id, sizeof(char [4l]) /*4ul*/ );
        tmp_if_expr_20 = SG_ERROR_NONE != (signed int)return_value_sg_update_mem_19 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr_20)
      {
        endutxent();
        sg_unlock_mutex("utmp");
        do
        {
          char *__errinfobuf = (char *)(void *)0;
          free((void *)__errinfobuf);
        }
        while((_Bool)0);
        enum anonymous_4 return_value_sg_get_error_7;
        return_value_sg_get_error_7=sg_get_error();
        return return_value_sg_get_error_7;
      }

      (user_ptr + (signed long int)num_users)->record_id_size = sizeof(char [4l]) /*4ul*/ ;
      (user_ptr + (signed long int)num_users)->pid = utx->ut_pid;
      (user_ptr + (signed long int)num_users)->login_time = (signed long int)utx->ut_tv.tv_sec;
      (user_ptr + (signed long int)num_users)->systime = now;
      num_users = num_users + 1ul;
    }

  }
  while((_Bool)1);
  endutxent();
  struct sg_vector *tmp_if_expr_26;
  struct sg_vector *return_value_sg_vector_resize_24;
  struct sg_vector *return_value_sg_vector_create_25;
  unsigned long int tmp_if_expr_21;
  void *tmp_if_expr_22;
  signed int tmp_if_expr_30;
  enum anonymous_4 return_value_sg_lupdate_string_28;
  enum anonymous_4 return_value_sg_update_string_29;
  _Bool tmp_if_expr_34;
  signed int tmp_if_expr_33;
  enum anonymous_4 return_value_sg_lupdate_string_31;
  enum anonymous_4 return_value_sg_update_string_32;
  _Bool tmp_if_expr_38;
  signed int tmp_if_expr_37;
  enum anonymous_4 return_value_sg_lupdate_string_35;
  enum anonymous_4 return_value_sg_update_string_36;
  _Bool tmp_if_expr_40;
  enum anonymous_4 return_value_sg_update_mem_39;
  if(num_users == 0ul)
  {
    setutent();
    do
    {
      ut=getutent();
      if(ut == ((struct utmp *)NULL))
        break;

      if((signed int)ut->ut_type == 7)
      {
        do
        {
          if(!(*user_stats_vector_ptr == ((struct sg_vector *)NULL)))
          {
            return_value_sg_vector_resize_24=sg_vector_resize(*user_stats_vector_ptr, (unsigned long int)(num_users + (unsigned long int)1));
            tmp_if_expr_26 = return_value_sg_vector_resize_24;
          }

          else
          {
            return_value_sg_vector_create_25=sg_vector_create((unsigned long int)(num_users + (unsigned long int)1), (unsigned long int)(num_users + (unsigned long int)1), (unsigned long int)(num_users + (unsigned long int)1), &sg_user_stats_vector_init_info);
            tmp_if_expr_26 = return_value_sg_vector_create_25;
          }
          *user_stats_vector_ptr = tmp_if_expr_26;
          if(!(*user_stats_vector_ptr == ((struct sg_vector *)NULL)))
          {
            if(!(*user_stats_vector_ptr == ((struct sg_vector *)NULL)))
              tmp_if_expr_21 = (*user_stats_vector_ptr)->used_count;

            else
              tmp_if_expr_21 = (unsigned long int)0;
            /* assertion (*(user_stats_vector_ptr) ? (*(user_stats_vector_ptr))->used_count : 0) == ((size_t)(num_users + 1)) */
            assert(tmp_if_expr_21 == (unsigned long int)(num_users + (unsigned long int)1));
            if(!(*user_stats_vector_ptr == ((struct sg_vector *)NULL)))
              tmp_if_expr_22 = (void *)&(*user_stats_vector_ptr)[(signed long int)1];

            else
              tmp_if_expr_22 = (void *)0;
            user_ptr = (struct anonymous_18 *)tmp_if_expr_22;
          }

          else
            if(!((signed int)(num_users == 0ul) == -1))
              user_ptr = (struct anonymous_18 *)(void *)0;

            else
            {
              endutent();
              sg_unlock_mutex("utmp");
              enum anonymous_4 return_value_sg_get_error_23;
              return_value_sg_get_error_23=sg_get_error();
              return return_value_sg_get_error_23;
            }
        }
        while((_Bool)0);
        if((void *)&ut->ut_line == (void *)ut->ut_line)
        {
          return_value_sg_lupdate_string_28=sg_lupdate_string(&(user_ptr + (signed long int)num_users)->device, ut->ut_line, sizeof(char [32l]) /*32ul*/ );
          tmp_if_expr_30 = (signed int)return_value_sg_lupdate_string_28;
        }

        else
        {
          return_value_sg_update_string_29=sg_update_string(&(user_ptr + (signed long int)num_users)->device, ut->ut_line);
          tmp_if_expr_30 = (signed int)return_value_sg_update_string_29;
        }
        if(!(tmp_if_expr_30 == 0))
          tmp_if_expr_34 = (_Bool)1;

        else
        {
          if((void *)&ut->ut_user == (void *)ut->ut_user)
          {
            return_value_sg_lupdate_string_31=sg_lupdate_string(&(user_ptr + (signed long int)num_users)->login_name, ut->ut_user, sizeof(char [32l]) /*32ul*/ );
            tmp_if_expr_33 = (signed int)return_value_sg_lupdate_string_31;
          }

          else
          {
            return_value_sg_update_string_32=sg_update_string(&(user_ptr + (signed long int)num_users)->login_name, ut->ut_user);
            tmp_if_expr_33 = (signed int)return_value_sg_update_string_32;
          }
          tmp_if_expr_34 = tmp_if_expr_33 != 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_34)
          tmp_if_expr_38 = (_Bool)1;

        else
        {
          if((void *)&ut->ut_host == (void *)ut->ut_host)
          {
            return_value_sg_lupdate_string_35=sg_lupdate_string(&(user_ptr + (signed long int)num_users)->hostname, ut->ut_host, sizeof(char [256l]) /*256ul*/ );
            tmp_if_expr_37 = (signed int)return_value_sg_lupdate_string_35;
          }

          else
          {
            return_value_sg_update_string_36=sg_update_string(&(user_ptr + (signed long int)num_users)->hostname, ut->ut_host);
            tmp_if_expr_37 = (signed int)return_value_sg_update_string_36;
          }
          tmp_if_expr_38 = tmp_if_expr_37 != 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_38)
          tmp_if_expr_40 = (_Bool)1;

        else
        {
          return_value_sg_update_mem_39=sg_update_mem((void **)&(user_ptr + (signed long int)num_users)->record_id, (const void *)ut->ut_id, sizeof(char [4l]) /*4ul*/ );
          tmp_if_expr_40 = SG_ERROR_NONE != (signed int)return_value_sg_update_mem_39 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr_40)
        {
          endutent();
          sg_unlock_mutex("utmp");
          do
          {
            char *sg_get_user_stats_int__1__2__1__2__1____errinfobuf = (char *)(void *)0;
            free((void *)sg_get_user_stats_int__1__2__1__2__1____errinfobuf);
          }
          while((_Bool)0);
          enum anonymous_4 return_value_sg_get_error_27;
          return_value_sg_get_error_27=sg_get_error();
          return return_value_sg_get_error_27;
        }

        (user_ptr + (signed long int)num_users)->record_id_size = sizeof(char [4l]) /*4ul*/ ;
        (user_ptr + (signed long int)num_users)->pid = ut->ut_pid;
        (user_ptr + (signed long int)num_users)->login_time = (signed long int)ut->ut_tv.tv_sec;
        (user_ptr + (signed long int)num_users)->systime = now;
        num_users = num_users + 1ul;
      }

    }
    while((_Bool)1);
    endutent();
  }

  sg_unlock_mutex("utmp");
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_get_user_stats_r
// file user_stats.c line 365
struct anonymous_18 * sg_get_user_stats_r(unsigned long int *entries)
{
  struct sg_vector *user_vector;
  user_vector=sg_vector_create((unsigned long int)16, (unsigned long int)16, (unsigned long int)0, &sg_user_stats_vector_init_info);
  enum anonymous_4 rc;
  void *tmp_if_expr_1;
  unsigned long int tmp_if_expr_2;
  if(!(user_vector == ((struct sg_vector *)NULL)))
  {
    rc=sg_get_user_stats_int(&user_vector);
    if((signed int)rc == SG_ERROR_NONE)
    {
      struct anonymous_18 *user_stats;
      if(!(user_vector == ((struct sg_vector *)NULL)))
        tmp_if_expr_1 = (void *)&user_vector[(signed long int)1];

      else
        tmp_if_expr_1 = (void *)0;
      user_stats = (struct anonymous_18 *)tmp_if_expr_1;
      sg_clear_error();
      if(!(entries == ((unsigned long int *)NULL)))
      {
        if(!(user_vector == ((struct sg_vector *)NULL)))
          tmp_if_expr_2 = user_vector->used_count;

        else
          tmp_if_expr_2 = (unsigned long int)0;
        *entries = tmp_if_expr_2;
      }

      return user_stats;
    }

    sg_vector_free(user_vector);
  }

  else
    rc=sg_get_error();
  if(!(entries == ((unsigned long int *)NULL)))
    *entries = (unsigned long int)0;

  return (struct anonymous_18 *)(void *)0;
}

// sg_get_valid_filesystems
// file disk_stats.c line 588
const char ** sg_get_valid_filesystems(unsigned long int *entries)
{
  if(!(entries == ((unsigned long int *)NULL)))
    *entries = num_valid_file_systems;

  return (const char **)valid_file_systems;
}

// sg_global_lock
// file globals.c line 157
enum anonymous_4 sg_global_lock(void)
{
  signed int rc;
  rc=pthread_mutex_lock(&glob_lock.mutex);
  if(!(rc == 0))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      unsigned long int return_value_pthread_self_1;
      return_value_pthread_self_1=pthread_self();
      sg_set_error_with_errno_code_fmt((enum anonymous_4)SG_ERROR_MUTEX_LOCK, rc, "error %d locking mutex '%s' in thread %p", rc, (const void *)"statgrab", (void *)return_value_pthread_self_1);
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_MUTEX_LOCK;
  }

  else
    return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_global_unlock
// file globals.c line 172
enum anonymous_4 sg_global_unlock(void)
{
  signed int rc;
  rc=pthread_mutex_unlock(&glob_lock.mutex);
  if(!(rc == 0))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      unsigned long int return_value_pthread_self_1;
      return_value_pthread_self_1=pthread_self();
      sg_set_error_with_errno_code_fmt((enum anonymous_4)SG_ERROR_MUTEX_LOCK, rc, "error %d unlocking mutex '%s' in thread %p", rc, (const void *)"statgrab", (void *)return_value_pthread_self_1);
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_MUTEX_LOCK;
  }

  else
    return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_init
// file ../../src/libstatgrab/statgrab.h line 130
enum anonymous_4 sg_init(signed int ignore_init_errors)
{
  enum anonymous_4 rc;
  rc=sg_comp_init(ignore_init_errors);
  return rc;
}

// sg_init_thread_local
// file globals.c line 208
static enum anonymous_4 sg_init_thread_local(void)
{
  signed int return_value_pthread_once_1;
  return_value_pthread_once_1=pthread_once(&once_control, sg_first_init);
  if(!(return_value_pthread_once_1 == 0))
    abort();

  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_load_cleanup_comp
// file load_stats.c line 108
static void sg_load_cleanup_comp(void *p)
{
  struct sg_load_glob *load_glob = (struct sg_load_glob *)p;
  unsigned int i;
  /* assertion load_glob */
  assert(load_glob != ((struct sg_load_glob *)NULL));
  i = (unsigned int)0;
  for( ; !(i >= 1u); i = i + 1u)
    sg_vector_free(load_glob->load_vectors[(signed long int)i]);
  memset((void *)load_glob->load_vectors, 0, sizeof(struct sg_vector *[1l]) /*8ul*/ );
}

// sg_load_destroy_comp
// file load_stats.c line 108
static void sg_load_destroy_comp(void)
{
  ;
}

// sg_load_init_comp
// file load_stats.c line 108
static enum anonymous_4 sg_load_init_comp(unsigned int id)
{
  sg_load_glob_id = id;
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_lock_mutex
// file statgrab.h line 139
enum anonymous_4 sg_lock_mutex(const char *mutex_name)
{
  struct sg_named_mutex *found;
  signed int rc;
  void *return_value_bsearch_1;
  return_value_bsearch_1=bsearch((const void *)&mutex_name, (const void *)required_locks, num_required_locks, sizeof(struct sg_named_mutex) /*48ul*/ , cmp_named_locks);
  found = (struct sg_named_mutex *)return_value_bsearch_1;
  if(found == ((struct sg_named_mutex *)NULL))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      sg_set_error_fmt((enum anonymous_4)SG_ERROR_INVALID_ARGUMENT, mutex_name);
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_INVALID_ARGUMENT;
  }

  else
  {
    rc=pthread_mutex_lock(&found->mutex);
    if(!(rc == 0))
    {
      do
      {
        char *sg_lock_mutex__1__2__1____errinfobuf = (char *)(void *)0;
        unsigned long int return_value_pthread_self_2;
        return_value_pthread_self_2=pthread_self();
        sg_set_error_with_errno_code_fmt((enum anonymous_4)SG_ERROR_MUTEX_LOCK, rc, "error %d locking mutex '%s' for thread %p", rc, mutex_name, (void *)return_value_pthread_self_2);
        free((void *)sg_lock_mutex__1__2__1____errinfobuf);
      }
      while((_Bool)0);
      return (enum anonymous_4)SG_ERROR_MUTEX_LOCK;
    }

    else
      return (enum anonymous_4)SG_ERROR_NONE;
  }
}

// sg_lupdate_string
// file tools.h line 513
enum anonymous_4 sg_lupdate_string(char **dest, const char *src, unsigned long int maxlen)
{
  char *new;
  unsigned long int newlen;
  if(src == ((const char *)NULL))
  {
    free((void *)*dest);
    *dest = (char *)(void *)0;
    return (enum anonymous_4)SG_ERROR_NONE;
  }

  else
  {
    unsigned long int return_value_strnlen_1;
    return_value_strnlen_1=strnlen(src, maxlen);
    newlen = return_value_strnlen_1 + (unsigned long int)1;
    void *return_value_sg_realloc_2;
    return_value_sg_realloc_2=sg_realloc((void *)*dest, newlen);
    new = (char *)return_value_sg_realloc_2;
    if(new == ((char *)NULL))
    {
      do
      {
        char *__errinfobuf = (char *)(void *)0;
        free((void *)__errinfobuf);
      }
      while((_Bool)0);
      enum anonymous_4 return_value_sg_get_error_3;
      return_value_sg_get_error_3=sg_get_error();
      return return_value_sg_get_error_3;
    }

    strlcpy(new, src, newlen);
    *dest = new;
    return (enum anonymous_4)SG_ERROR_NONE;
  }
}

// sg_mem_cleanup_comp
// file memory_stats.c line 73
static void sg_mem_cleanup_comp(void *p)
{
  struct sg_mem_glob *mem_glob = (struct sg_mem_glob *)p;
  unsigned int i;
  /* assertion mem_glob */
  assert(mem_glob != ((struct sg_mem_glob *)NULL));
  i = (unsigned int)0;
  for( ; !(i >= 1u); i = i + 1u)
    sg_vector_free(mem_glob->mem_vectors[(signed long int)i]);
  memset((void *)mem_glob->mem_vectors, 0, sizeof(struct sg_vector *[1l]) /*8ul*/ );
}

// sg_mem_destroy_comp
// file memory_stats.c line 72
static void sg_mem_destroy_comp(void)
{
  ;
}

// sg_mem_init_comp
// file memory_stats.c line 42
static enum anonymous_4 sg_mem_init_comp(unsigned int id)
{
  signed long int pagesize;
  sg_mem_glob_id = id;
  pagesize=sg_get_sys_page_size();
  if(pagesize == -1l)
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_SYSCONF, "_SC_PAGESIZE");
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_SYSCONF;
  }

  else
    return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_network_cleanup_comp
// file network_stats.c line 197
static void sg_network_cleanup_comp(void *p)
{
  struct sg_network_glob *network_glob = (struct sg_network_glob *)p;
  unsigned int i;
  /* assertion network_glob */
  assert(network_glob != ((struct sg_network_glob *)NULL));
  i = (unsigned int)0;
  for( ; !(i >= 3u); i = i + 1u)
    sg_vector_free(network_glob->network_vectors[(signed long int)i]);
  memset((void *)network_glob->network_vectors, 0, sizeof(struct sg_vector *[3l]) /*24ul*/ );
}

// sg_network_destroy_comp
// file network_stats.c line 191
static void sg_network_destroy_comp(void)
{
  regfree(&network_io_rx);
}

// sg_network_iface_compare_name
// file network_stats.c line 1402
signed int sg_network_iface_compare_name(const void *va, const void *vb)
{
  const struct anonymous_20 *a = (const struct anonymous_20 *)va;
  const struct anonymous_20 *b = (const struct anonymous_20 *)vb;
  signed int return_value_strcmp_1;
  return_value_strcmp_1=strcmp(a->interface_name, b->interface_name);
  return return_value_strcmp_1;
}

// sg_network_iface_stats_item_copy
// file network_stats.c line 112
static enum anonymous_4 sg_network_iface_stats_item_copy(struct anonymous_20 *d, const struct anonymous_20 *s)
{
  enum anonymous_4 return_value_sg_update_string_2;
  return_value_sg_update_string_2=sg_update_string(&d->interface_name, s->interface_name);
  if(!((signed int)return_value_sg_update_string_2 == SG_ERROR_NONE))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    enum anonymous_4 return_value_sg_get_error_1;
    return_value_sg_get_error_1=sg_get_error();
    return return_value_sg_get_error_1;
  }

  d->speed = s->speed;
  d->factor = s->factor;
  d->duplex = s->duplex;
  d->up = s->up;
  d->systime = s->systime;
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_network_iface_stats_item_destroy
// file network_stats.c line 131
static void sg_network_iface_stats_item_destroy(struct anonymous_20 *d)
{
  free((void *)d->interface_name);
}

// sg_network_iface_stats_item_init
// file network_stats.c line 102
static void sg_network_iface_stats_item_init(struct anonymous_20 *d)
{
  d->interface_name = (char *)(void *)0;
  d->speed = (unsigned long long int)0;
  d->factor = (unsigned long long int)0;
  d->duplex = (enum anonymous_26)SG_IFACE_DUPLEX_UNKNOWN;
  d->up = (enum anonymous_27)SG_IFACE_DOWN;
  d->systime = (signed long int)0;
}

// sg_network_init_comp
// file network_stats.c line 155
static enum anonymous_4 sg_network_init_comp(unsigned int id)
{
  sg_network_glob_id = id;
  signed int return_value_regcomp_1;
  return_value_regcomp_1=regcomp(&network_io_rx, "^[[:space:]]*([^:]+):[[:space:]]*([0-9]+)[[:space:]]+([0-9]+)[[:space:]]+([0-9]+)[[:space:]]+[0-9]+[[:space:]]+[0-9]+[[:space:]]+[0-9]+[[:space:]]+[0-9]+[[:space:]]+[0-9]+[[:space:]]+([0-9]+)[[:space:]]+([0-9]+)[[:space:]]+([0-9]+)[[:space:]]+[0-9]+[[:space:]]+[0-9]+[[:space:]]+([0-9]+)", 1);
  if(!(return_value_regcomp_1 == 0))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      sg_set_error_fmt((enum anonymous_4)SG_ERROR_PARSE, "regcomp");
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_PARSE;
  }

  else
    return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_network_io_compare_name
// file network_stats.c line 702
signed int sg_network_io_compare_name(const void *va, const void *vb)
{
  const struct anonymous_21 *a = (const struct anonymous_21 *)va;
  const struct anonymous_21 *b = (const struct anonymous_21 *)vb;
  signed int return_value_strcmp_1;
  return_value_strcmp_1=strcmp(a->interface_name, b->interface_name);
  return return_value_strcmp_1;
}

// sg_network_io_stats_item_compare
// file network_stats.c line 91
static signed int sg_network_io_stats_item_compare(const struct anonymous_21 *a, const struct anonymous_21 *b)
{
  signed int return_value_strcmp_1;
  return_value_strcmp_1=strcmp(a->interface_name, b->interface_name);
  return return_value_strcmp_1;
}

// sg_network_io_stats_item_compute_diff
// file network_stats.c line 76
static enum anonymous_4 sg_network_io_stats_item_compute_diff(const struct anonymous_21 *s, struct anonymous_21 *d)
{
  d->tx=transfer_diff(d->tx, s->tx);
  d->rx=transfer_diff(d->rx, s->rx);
  d->ipackets=transfer_diff(d->ipackets, s->ipackets);
  d->opackets=transfer_diff(d->opackets, s->opackets);
  d->ierrors=transfer_diff(d->ierrors, s->ierrors);
  d->oerrors=transfer_diff(d->oerrors, s->oerrors);
  d->collisions=transfer_diff(d->collisions, s->collisions);
  d->systime = d->systime - s->systime;
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_network_io_stats_item_copy
// file network_stats.c line 40
static enum anonymous_4 sg_network_io_stats_item_copy(const struct anonymous_21 *s, struct anonymous_21 *d)
{
  enum anonymous_4 return_value_sg_update_string_2;
  return_value_sg_update_string_2=sg_update_string(&d->interface_name, s->interface_name);
  if(!((signed int)return_value_sg_update_string_2 == SG_ERROR_NONE))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    enum anonymous_4 return_value_sg_get_error_1;
    return_value_sg_get_error_1=sg_get_error();
    return return_value_sg_get_error_1;
  }

  d->tx = s->tx;
  d->rx = s->rx;
  d->ipackets = s->ipackets;
  d->opackets = s->opackets;
  d->ierrors = s->ierrors;
  d->oerrors = s->oerrors;
  d->collisions = s->collisions;
  d->systime = s->systime;
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_network_io_stats_item_destroy
// file network_stats.c line 96
static void sg_network_io_stats_item_destroy(struct anonymous_21 *d)
{
  free((void *)d->interface_name);
  d->interface_name = (char *)(void *)0;
}

// sg_network_io_stats_item_init
// file network_stats.c line 35
static void sg_network_io_stats_item_init(struct anonymous_21 *d)
{
  memset((void *)d, 0, sizeof(struct anonymous_21) /*72ul*/ );
}

// sg_os_cleanup_comp
// file os_info.c line 598
static void sg_os_cleanup_comp(void *p)
{
  struct sg_os_glob *os_glob = (struct sg_os_glob *)p;
  unsigned int i;
  /* assertion os_glob */
  assert(os_glob != ((struct sg_os_glob *)NULL));
  i = (unsigned int)0;
  for( ; !(i >= 1u); i = i + 1u)
    sg_vector_free(os_glob->os_vectors[(signed long int)i]);
  memset((void *)os_glob->os_vectors, 0, sizeof(struct sg_vector *[1l]) /*8ul*/ );
}

// sg_os_destroy_comp
// file os_info.c line 598
static void sg_os_destroy_comp(void)
{
  ;
}

// sg_os_init_comp
// file os_info.c line 598
static enum anonymous_4 sg_os_init_comp(unsigned int id)
{
  sg_os_glob_id = id;
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_os_stats_item_destroy
// file os_info.c line 617
static void sg_os_stats_item_destroy(struct anonymous_3 *d)
{
  free((void *)d->os_name);
  free((void *)d->os_release);
  free((void *)d->os_version);
  free((void *)d->platform);
  free((void *)d->hostname);
  memset((void *)d, 0, sizeof(struct anonymous_3) /*72ul*/ );
}

// sg_os_stats_item_init
// file os_info.c line 604
static void sg_os_stats_item_init(struct anonymous_3 *d)
{
  memset((void *)d, 0, sizeof(struct anonymous_3) /*72ul*/ );
}

// sg_page_cleanup_comp
// file page_stats.c line 234
static void sg_page_cleanup_comp(void *p)
{
  struct sg_page_glob *page_glob = (struct sg_page_glob *)p;
  unsigned int i;
  /* assertion page_glob */
  assert(page_glob != ((struct sg_page_glob *)NULL));
  i = (unsigned int)0;
  for( ; !(i >= 2u); i = i + 1u)
    sg_vector_free(page_glob->page_vectors[(signed long int)i]);
  memset((void *)page_glob->page_vectors, 0, sizeof(struct sg_vector *[2l]) /*16ul*/ );
}

// sg_page_destroy_comp
// file page_stats.c line 234
static void sg_page_destroy_comp(void)
{
  ;
}

// sg_page_init_comp
// file page_stats.c line 234
static enum anonymous_4 sg_page_init_comp(unsigned int id)
{
  sg_page_glob_id = id;
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_process_cleanup_comp
// file process_stats.c line 133
static void sg_process_cleanup_comp(void *p)
{
  struct sg_process_glob *process_glob = (struct sg_process_glob *)p;
  unsigned int i;
  /* assertion process_glob */
  assert(process_glob != ((struct sg_process_glob *)NULL));
  i = (unsigned int)0;
  for( ; !(i >= 2u); i = i + 1u)
    sg_vector_free(process_glob->process_vectors[(signed long int)i]);
  memset((void *)process_glob->process_vectors, 0, sizeof(struct sg_vector *[2l]) /*16ul*/ );
}

// sg_process_compare_cpu
// file process_stats.c line 1383
signed int sg_process_compare_cpu(const void *va, const void *vb)
{
  const struct anonymous_7 *a = (const struct anonymous_7 *)va;
  const struct anonymous_7 *b = (const struct anonymous_7 *)vb;
  signed int tmp_if_expr_1;
  if(IEEE_FLOAT_EQUAL(a->cpu_percent, b->cpu_percent))
    tmp_if_expr_1 = 0;

  else
    tmp_if_expr_1 = a->cpu_percent < b->cpu_percent ? -1 : 1;
  return tmp_if_expr_1;
}

// sg_process_compare_gid
// file process_stats.c line 1368
signed int sg_process_compare_gid(const void *va, const void *vb)
{
  const struct anonymous_7 *a = (const struct anonymous_7 *)va;
  const struct anonymous_7 *b = (const struct anonymous_7 *)vb;
  signed int tmp_if_expr_1;
  if(a->gid == b->gid)
    tmp_if_expr_1 = 0;

  else
    tmp_if_expr_1 = a->gid < b->gid ? -1 : 1;
  return tmp_if_expr_1;
}

// sg_process_compare_name
// file process_stats.c line 1353
signed int sg_process_compare_name(const void *va, const void *vb)
{
  const struct anonymous_7 *a = (const struct anonymous_7 *)va;
  const struct anonymous_7 *b = (const struct anonymous_7 *)vb;
  signed int return_value_strcmp_1;
  return_value_strcmp_1=strcmp(a->process_name, b->process_name);
  return return_value_strcmp_1;
}

// sg_process_compare_pid
// file process_stats.c line 1358
signed int sg_process_compare_pid(const void *va, const void *vb)
{
  const struct anonymous_7 *a = (const struct anonymous_7 *)va;
  const struct anonymous_7 *b = (const struct anonymous_7 *)vb;
  signed int tmp_if_expr_1;
  if(a->pid == b->pid)
    tmp_if_expr_1 = 0;

  else
    tmp_if_expr_1 = a->pid < b->pid ? -1 : 1;
  return tmp_if_expr_1;
}

// sg_process_compare_res
// file process_stats.c line 1378
signed int sg_process_compare_res(const void *va, const void *vb)
{
  const struct anonymous_7 *a = (const struct anonymous_7 *)va;
  const struct anonymous_7 *b = (const struct anonymous_7 *)vb;
  signed int tmp_if_expr_1;
  if(a->proc_resident == b->proc_resident)
    tmp_if_expr_1 = 0;

  else
    tmp_if_expr_1 = a->proc_resident < b->proc_resident ? -1 : 1;
  return tmp_if_expr_1;
}

// sg_process_compare_size
// file process_stats.c line 1373
signed int sg_process_compare_size(const void *va, const void *vb)
{
  const struct anonymous_7 *a = (const struct anonymous_7 *)va;
  const struct anonymous_7 *b = (const struct anonymous_7 *)vb;
  signed int tmp_if_expr_1;
  if(a->proc_size == b->proc_size)
    tmp_if_expr_1 = 0;

  else
    tmp_if_expr_1 = a->proc_size < b->proc_size ? -1 : 1;
  return tmp_if_expr_1;
}

// sg_process_compare_time
// file process_stats.c line 1388
signed int sg_process_compare_time(const void *va, const void *vb)
{
  const struct anonymous_7 *a = (const struct anonymous_7 *)va;
  const struct anonymous_7 *b = (const struct anonymous_7 *)vb;
  signed int tmp_if_expr_1;
  if(a->time_spent == b->time_spent)
    tmp_if_expr_1 = 0;

  else
    tmp_if_expr_1 = a->time_spent < b->time_spent ? -1 : 1;
  return tmp_if_expr_1;
}

// sg_process_compare_uid
// file process_stats.c line 1363
signed int sg_process_compare_uid(const void *va, const void *vb)
{
  const struct anonymous_7 *a = (const struct anonymous_7 *)va;
  const struct anonymous_7 *b = (const struct anonymous_7 *)vb;
  signed int tmp_if_expr_1;
  if(a->uid == b->uid)
    tmp_if_expr_1 = 0;

  else
    tmp_if_expr_1 = a->uid < b->uid ? -1 : 1;
  return tmp_if_expr_1;
}

// sg_process_destroy_comp
// file process_stats.c line 132
static void sg_process_destroy_comp(void)
{
  ;
}

// sg_process_init_comp
// file process_stats.c line 121
static enum anonymous_4 sg_process_init_comp(unsigned int id)
{
  signed long int pagesize;
  sg_process_glob_id = id;
  pagesize=sg_get_sys_page_size_link1();
  if(pagesize == -1l)
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_SYSCONF, "_SC_PAGESIZE");
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_SYSCONF;
  }

  else
    return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_process_stats_item_destroy
// file process_stats.c line 103
static void sg_process_stats_item_destroy(struct anonymous_7 *d)
{
  free((void *)d->process_name);
  free((void *)d->proctitle);
}

// sg_process_stats_item_init
// file process_stats.c line 43
static void sg_process_stats_item_init(struct anonymous_7 *d)
{
  d->process_name = (char *)(void *)0;
  d->proctitle = (char *)(void *)0;
}

// sg_prove_vector
// file vector.h line 69
enum anonymous_4 sg_prove_vector(const struct sg_vector *vec)
{
  /* assertion (((unsigned)('s') & 0xFF) + (((unsigned)('g') & 0xFF) << 8) + (((unsigned)('v') & 0xFF) << 16) + (((unsigned)('s') & 0xFF) << 24)) == vec->start_eye */
  assert((unsigned long int)(((unsigned int)115 & (unsigned int)0xFF) + (((unsigned int)103 & (unsigned int)0xFF) << 8) + (((unsigned int)118 & (unsigned int)0xFF) << 16) + (((unsigned int)115 & (unsigned int)0xFF) << 24)) == vec->start_eye);
  /* assertion (((unsigned)('f') & 0xFF) + (((unsigned)('v') & 0xFF) << 8) + (((unsigned)('g') & 0xFF) << 16) + (((unsigned)('s') & 0xFF) << 24)) == vec->final_eye */
  assert((unsigned long int)(((unsigned int)102 & (unsigned int)0xFF) + (((unsigned int)118 & (unsigned int)0xFF) << 8) + (((unsigned int)103 & (unsigned int)0xFF) << 16) + (((unsigned int)115 & (unsigned int)0xFF) << 24)) == vec->final_eye);
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_prove_vector_compat
// file vector.c line 81
static enum anonymous_4 sg_prove_vector_compat(const struct sg_vector *one, const struct sg_vector *two)
{
  /* assertion one */
  assert(one != ((const struct sg_vector *)NULL));
  /* assertion two */
  assert(two != ((const struct sg_vector *)NULL));
  _Bool tmp_if_expr_1;
  if(one->info.item_size == two->info.item_size)
    tmp_if_expr_1 = one->info.init_fn == two->info.init_fn ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  _Bool tmp_if_expr_2;
  if(tmp_if_expr_1)
    tmp_if_expr_2 = one->info.copy_fn == two->info.copy_fn ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_2 = (_Bool)0;
  _Bool tmp_if_expr_3;
  if(tmp_if_expr_2)
    tmp_if_expr_3 = one->info.compute_diff_fn == two->info.compute_diff_fn ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_3 = (_Bool)0;
  _Bool tmp_if_expr_4;
  if(tmp_if_expr_3)
    tmp_if_expr_4 = one->info.compare_fn == two->info.compare_fn ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_4 = (_Bool)0;
  _Bool tmp_if_expr_5;
  if(tmp_if_expr_4)
    tmp_if_expr_5 = one->info.destroy_fn == two->info.destroy_fn ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_5 = (_Bool)0;
  /* assertion ( one->info.item_size == two->info.item_size ) && ( one->info.init_fn == two->info.init_fn ) && ( one->info.copy_fn == two->info.copy_fn ) && ( one->info.compute_diff_fn == two->info.compute_diff_fn ) && ( one->info.compare_fn == two->info.compare_fn ) && ( one->info.destroy_fn == two->info.destroy_fn ) */
  assert(tmp_if_expr_5);
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_realloc
// file tools.h line 556
void * sg_realloc(void *ptr, unsigned long int size)
{
  if(size == 0ul)
  {
    free(ptr);
    return (void *)0;
  }

  else
  {
    void *tmp;
    tmp=realloc(ptr, size);
    if(tmp == NULL)
      do
      {
        char *__errinfobuf = (char *)(void *)0;
        sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_MALLOC, "sg_realloc: couldn't realloc(to %lu bytes)", (unsigned long int)size);
        free((void *)__errinfobuf);
      }
      while((_Bool)0);

    return tmp;
  }
}

// sg_set_error_fmt
// file error.h line 28
enum anonymous_4 sg_set_error_fmt(enum anonymous_4 code, const char *arg, ...)
{
  void **ap;
  enum anonymous_4 rc;
  ap = (void **)&arg;
  rc=sg_set_error_int(code, 0, arg, ap);
  ap = ((void **)NULL);
  return rc;
}

// sg_set_error_int
// file error.c line 81
static enum anonymous_4 sg_set_error_int(enum anonymous_4 code, signed int errno_value, const char *arg, void **ap)
{
  struct sg_error_glob *error_glob;
  error_glob=sg_get_error_glob();
  error_glob->errno_value = errno_value;
  error_glob->error = code;
  if(!(arg == ((const char *)NULL)))
    vsnprintf(error_glob->error_arg, sizeof(char [4096l]) /*4096ul*/ , arg, ap);

  else
    error_glob->error_arg[(signed long int)0] = (char)0;
  return code;
}

// sg_set_error_with_errno_code_fmt
// file error.h line 30
enum anonymous_4 sg_set_error_with_errno_code_fmt(enum anonymous_4 code, signed int errno_value, const char *arg, ...)
{
  void **ap;
  enum anonymous_4 rc;
  ap = (void **)&arg;
  rc=sg_set_error_int(code, errno_value, arg, ap);
  ap = ((void **)NULL);
  return rc;
}

// sg_set_error_with_errno_fmt
// file error.h line 29
enum anonymous_4 sg_set_error_with_errno_fmt(enum anonymous_4 code, const char *arg, ...)
{
  void **ap;
  enum anonymous_4 rc;
  ap = (void **)&arg;
  signed int *return_value___errno_location_1;
  return_value___errno_location_1=__errno_location();
  rc=sg_set_error_int(code, *return_value___errno_location_1, arg, ap);
  ap = ((void **)NULL);
  return rc;
}

// sg_set_valid_filesystems
// file disk_stats.c line 595
enum anonymous_4 sg_set_valid_filesystems(const char **valid_fs)
{
  unsigned long int num_new_valid_fs = (unsigned long int)0;
  unsigned long int tmp;
  char **new_valid_fs = (char **)(void *)0;
  char **old_valid_fs = valid_file_systems;
  unsigned long int num_old_valid_fs = num_valid_file_systems;
  unsigned long int tmp_post_2;
  if(!(valid_fs == ((const char **)NULL)))
  {
    if(!(*valid_fs == ((const char *)NULL)))
    {
      for( ; !(valid_fs[(signed long int)num_new_valid_fs] == ((const char *)NULL)); num_new_valid_fs = num_new_valid_fs + 1ul)
        ;
      void *return_value_calloc_1;
      return_value_calloc_1=calloc(num_new_valid_fs + (unsigned long int)1, sizeof(char *) /*8ul*/ );
      new_valid_fs = (char **)return_value_calloc_1;
      if(new_valid_fs == ((char **)NULL))
      {
        do
        {
          char *sg_set_valid_filesystems__1__1__2__1____errinfobuf = (char *)(void *)0;
          sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_MALLOC, "set_valid_filesystems");
          free((void *)sg_set_valid_filesystems__1__1__2__1____errinfobuf);
        }
        while((_Bool)0);
        return (enum anonymous_4)SG_ERROR_MALLOC;
      }

      tmp = num_new_valid_fs;
      do
      {
        tmp_post_2 = tmp;
        tmp = tmp - 1ul;
        if(tmp_post_2 == 0ul)
          break;

        enum anonymous_4 errc;
        errc=sg_update_string(&new_valid_fs[(signed long int)tmp], valid_fs[(signed long int)tmp]);
        if(!((signed int)errc == SG_ERROR_NONE))
        {
          for( ; !(valid_fs[(signed long int)tmp] == ((const char *)NULL)); tmp = tmp + 1ul)
            free((void *)new_valid_fs[(signed long int)tmp]);
          do
          {
            char *__errinfobuf = (char *)(void *)0;
            free((void *)__errinfobuf);
          }
          while((_Bool)0);
          return errc;
        }

      }
      while((_Bool)1);
      qsort((void *)new_valid_fs, num_new_valid_fs, sizeof(char *) /*8ul*/ , cmp_valid_fs);
    }

  }

  valid_file_systems = new_valid_fs;
  num_valid_file_systems = num_new_valid_fs;
  if(!(old_valid_fs == ((char **)NULL)))
  {
    unsigned long int i = (unsigned long int)0;
    for( ; !(i >= num_old_valid_fs); i = i + 1ul)
      free((void *)old_valid_fs[(signed long int)i]);
    free((void *)old_valid_fs);
  }

  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_shutdown
// file tools.c line 586
enum anonymous_4 sg_shutdown(void)
{
  enum anonymous_4 return_value_sg_comp_destroy_1;
  return_value_sg_comp_destroy_1=sg_comp_destroy();
  return return_value_sg_comp_destroy_1;
}

// sg_snapshot
// file tools.c line 590
enum anonymous_4 sg_snapshot(void)
{
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_str_error
// file error.c line 189
const char * sg_str_error(enum anonymous_4 code)
{
  switch((signed int)code)
  {
    case SG_ERROR_NONE:
      return "no error";
    case SG_ERROR_INVALID_ARGUMENT:
      return "invalid argument";
    case SG_ERROR_ASPRINTF:
      return "asprintf failed";
    case SG_ERROR_SPRINTF:
      return "sprintf failed";
    case SG_ERROR_DEVSTAT_GETDEVS:
      return "devstat_getdevs failed";
    case SG_ERROR_DEVSTAT_SELECTDEVS:
      return "devstat_selectdevs failed";
    case SG_ERROR_ENOENT:
      return "system call received ENOENT";
    case SG_ERROR_GETIFADDRS:
      return "getifaddress failed";
    case SG_ERROR_GETMNTINFO:
      return "getmntinfo failed";
    case SG_ERROR_GETPAGESIZE:
      return "getpagesize failed";
    case SG_ERROR_HOST:
      return "gather host information faile";
    case SG_ERROR_KSTAT_DATA_LOOKUP:
      return "kstat_data_lookup failed";
    case SG_ERROR_KSTAT_LOOKUP:
      return "kstat_lookup failed";
    case SG_ERROR_KSTAT_OPEN:
      return "kstat_open failed";
    case SG_ERROR_KSTAT_READ:
      return "kstat_read failed";
    case SG_ERROR_KVM_GETSWAPINFO:
      return "kvm_getswapinfo failed";
    case SG_ERROR_KVM_OPENFILES:
      return "kvm_openfiles failed";
    case SG_ERROR_MALLOC:
      return "malloc failed";
    case SG_ERROR_OPEN:
      return "failed to open file";
    case SG_ERROR_OPENDIR:
      return "failed to open directory";
    case SG_ERROR_READDIR:
      return "failed to read directory";
    case SG_ERROR_PARSE:
      return "failed to parse input";
    case SG_ERROR_SETEGID:
      return "setegid failed";
    case SG_ERROR_SETEUID:
      return "seteuid failed";
    case SG_ERROR_SETMNTENT:
      return "setmntent failed";
    case SG_ERROR_SOCKET:
      return "socket failed";
    case SG_ERROR_SWAPCTL:
      return "swapctl failed";
    case SG_ERROR_SYSINFO:
      return "sysinfo failed";
    case SG_ERROR_SYSCONF:
      return "sysconf failed";
    case SG_ERROR_SYSCTL:
      return "sysctl failed";
    case SG_ERROR_SYSCTLBYNAME:
      return "sysctlbyname failed";
    case SG_ERROR_SYSCTLNAMETOMIB:
      return "sysctlnametomib failed";
    case SG_ERROR_MACHCALL:
      return "mach kernel operation failed";
    case SG_ERROR_IOKIT:
      return "I/O Kit operation failed";
    case SG_ERROR_UNAME:
      return "uname failed";
    case SG_ERROR_UNSUPPORTED:
      return "unsupported function";
    case SG_ERROR_XSW_VER_MISMATCH:
      return "XSW version mismatch";
    case SG_ERROR_PSTAT:
      return "pstat failed";
    case SG_ERROR_PDHOPEN:
      return "PDH open failed";
    case SG_ERROR_PDHCOLLECT:
      return "PDH snapshot failed";
    case SG_ERROR_PDHADD:
      return "PDH add counter failed";
    case SG_ERROR_PDHREAD:
      return "PDH read counter failed";
    case SG_ERROR_DEVICES:
      return "failed to get device list";
    case SG_ERROR_PERMISSION:
      return "access violation";
    case SG_ERROR_DISKINFO:
      return "disk function failed";
    case SG_ERROR_MEMSTATUS:
      return "memory status failed";
    case SG_ERROR_GETMSG:
      return "getmsg failed";
    case SG_ERROR_PUTMSG:
      return "putmsg failed";
    case SG_ERROR_INITIALISATION:
      return "initialization error";
    case SG_ERROR_MUTEX_LOCK:
      return "lock mutex failed";
    case SG_ERROR_MUTEX_UNLOCK:
      return "unlock mutex failed";
    default:
      return "unknown error";
  }
}

// sg_strperror
// file error.c line 300
char * sg_strperror(char **buf, const struct sg_error_details * const err_details)
{
  char errno_buf[128l] = { (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  char *errno_msg = (char *)(void *)0;
  struct sg_error_details err_det;
  _Bool tmp_if_expr_1;
  if(buf == ((char **)NULL))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = (char *)(void *)0 != *buf ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
  {
    sg_set_error_int((enum anonymous_4)SG_ERROR_INVALID_ARGUMENT, 0, "strperror", empty_ap);
    return (char *)(void *)0;
  }

  else
  {
    if(err_details == ((const struct sg_error_details *)NULL))
      sg_get_error_details(&err_det);

    else
      err_det = *err_details;
    void *return_value_malloc_4;
    return_value_malloc_4=malloc((unsigned long int)1024);
    *buf = (char *)return_value_malloc_4;
    if(!(*buf == ((char *)NULL)))
    {
      if(!(err_det.errno_value == 0))
      {
        char *rc;
        rc=strerror_r(err_det.errno_value, errno_buf, sizeof(char [128l]) /*128ul*/ );
        if(rc == ((char *)NULL))
        {
          signed int *return_value___errno_location_2;
          return_value___errno_location_2=__errno_location();
          sg_set_error_int((enum anonymous_4)SG_ERROR_MALLOC, *return_value___errno_location_2, "strerror_r", empty_ap);
          free((void *)*buf);
          *buf = (char *)(void *)0;
          return (char *)(void *)0;
        }

        else
          errno_msg = rc;
      }

      const char *return_value_sg_str_error_3;
      return_value_sg_str_error_3=sg_str_error(err_det.error);
      snprintf(*buf, (unsigned long int)1024, "%s (%s%s%s)", return_value_sg_str_error_3, err_det.errno_value != 0 ? errno_msg : "", err_det.errno_value != 0 ? ": " : "", err_det.error_arg != ((const char *)NULL) ? err_det.error_arg : "");
    }

    else
      sg_set_error_int((enum anonymous_4)SG_ERROR_MALLOC, 0, "sg_strperror", empty_ap);
    return *buf;
  }
}

// sg_swap_cleanup_comp
// file swap_stats.c line 68
static void sg_swap_cleanup_comp(void *p)
{
  struct sg_swap_glob *swap_glob = (struct sg_swap_glob *)p;
  unsigned int i;
  /* assertion swap_glob */
  assert(swap_glob != ((struct sg_swap_glob *)NULL));
  i = (unsigned int)0;
  for( ; !(i >= 1u); i = i + 1u)
    sg_vector_free(swap_glob->swap_vectors[(signed long int)i]);
  memset((void *)swap_glob->swap_vectors, 0, sizeof(struct sg_vector *[1l]) /*8ul*/ );
}

// sg_swap_destroy_comp
// file swap_stats.c line 67
static void sg_swap_destroy_comp(void)
{
  ;
}

// sg_swap_init_comp
// file swap_stats.c line 37
static enum anonymous_4 sg_swap_init_comp(unsigned int id)
{
  signed long int pagesize;
  sg_swap_glob_id = id;
  pagesize=sg_get_sys_page_size_link2();
  if(pagesize == -1l)
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      sg_set_error_with_errno_fmt((enum anonymous_4)SG_ERROR_SYSCONF, "_SC_PAGESIZE");
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_SYSCONF;
  }

  else
    return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_unlock_mutex
// file statgrab.h line 140
enum anonymous_4 sg_unlock_mutex(const char *mutex_name)
{
  struct sg_named_mutex *found;
  signed int rc;
  void *return_value_bsearch_1;
  return_value_bsearch_1=bsearch((const void *)&mutex_name, (const void *)required_locks, num_required_locks, sizeof(struct sg_named_mutex) /*48ul*/ , cmp_named_locks);
  found = (struct sg_named_mutex *)return_value_bsearch_1;
  if(found == ((struct sg_named_mutex *)NULL))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      sg_set_error_fmt((enum anonymous_4)SG_ERROR_INVALID_ARGUMENT, mutex_name);
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_INVALID_ARGUMENT;
  }

  else
  {
    rc=pthread_mutex_unlock(&found->mutex);
    if(!(rc == 0))
    {
      do
      {
        char *sg_unlock_mutex__1__2__1____errinfobuf = (char *)(void *)0;
        unsigned long int return_value_pthread_self_2;
        return_value_pthread_self_2=pthread_self();
        sg_set_error_with_errno_code_fmt((enum anonymous_4)SG_ERROR_MUTEX_LOCK, rc, "error %d unlocking mutex '%s' in thread %p", rc, mutex_name, (void *)return_value_pthread_self_2);
        free((void *)sg_unlock_mutex__1__2__1____errinfobuf);
      }
      while((_Bool)0);
      return (enum anonymous_4)SG_ERROR_MUTEX_LOCK;
    }

    else
      return (enum anonymous_4)SG_ERROR_NONE;
  }
}

// sg_update_mem
// file tools.h line 514
enum anonymous_4 sg_update_mem(void **dest, const void *src, unsigned long int len)
{
  char *new;
  if(src == NULL)
  {
    free(*dest);
    *dest = (void *)0;
    return (enum anonymous_4)SG_ERROR_NONE;
  }

  else
  {
    void *return_value_sg_realloc_1;
    return_value_sg_realloc_1=sg_realloc(*dest, len);
    new = (char *)return_value_sg_realloc_1;
    if(new == ((char *)NULL))
    {
      do
      {
        char *__errinfobuf = (char *)(void *)0;
        free((void *)__errinfobuf);
      }
      while((_Bool)0);
      enum anonymous_4 return_value_sg_get_error_2;
      return_value_sg_get_error_2=sg_get_error();
      return return_value_sg_get_error_2;
    }

    memcpy((void *)new, src, len);
    *dest = (void *)new;
    return (enum anonymous_4)SG_ERROR_NONE;
  }
}

// sg_update_string
// file tools.h line 512
enum anonymous_4 sg_update_string(char **dest, const char *src)
{
  char *new;
  unsigned long int newlen;
  if(src == ((const char *)NULL))
  {
    free((void *)*dest);
    *dest = (char *)(void *)0;
    return (enum anonymous_4)SG_ERROR_NONE;
  }

  else
  {
    unsigned long int return_value_strlen_1;
    return_value_strlen_1=strlen(src);
    newlen = return_value_strlen_1 + (unsigned long int)1;
    void *return_value_sg_realloc_2;
    return_value_sg_realloc_2=sg_realloc((void *)*dest, newlen);
    new = (char *)return_value_sg_realloc_2;
    if(new == ((char *)NULL))
    {
      do
      {
        char *__errinfobuf = (char *)(void *)0;
        free((void *)__errinfobuf);
      }
      while((_Bool)0);
      enum anonymous_4 return_value_sg_get_error_3;
      return_value_sg_get_error_3=sg_get_error();
      return return_value_sg_get_error_3;
    }

    strlcpy(new, src, newlen);
    *dest = new;
    return (enum anonymous_4)SG_ERROR_NONE;
  }
}

// sg_user_cleanup_comp
// file user_stats.c line 360
static void sg_user_cleanup_comp(void *p)
{
  struct sg_user_glob *user_glob = (struct sg_user_glob *)p;
  unsigned int i;
  /* assertion user_glob */
  assert(user_glob != ((struct sg_user_glob *)NULL));
  i = (unsigned int)0;
  for( ; !(i >= 1u); i = i + 1u)
    sg_vector_free(user_glob->user_vectors[(signed long int)i]);
  memset((void *)user_glob->user_vectors, 0, sizeof(struct sg_vector *[1l]) /*8ul*/ );
}

// sg_user_destroy_comp
// file user_stats.c line 360
static void sg_user_destroy_comp(void)
{
  ;
}

// sg_user_init_comp
// file user_stats.c line 360
static enum anonymous_4 sg_user_init_comp(unsigned int id)
{
  sg_user_glob_id = id;
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_user_stats_item_destroy
// file user_stats.c line 60
static void sg_user_stats_item_destroy(struct anonymous_18 *d)
{
  free((void *)d->login_name);
  free((void *)d->record_id);
  free((void *)d->device);
  free((void *)d->hostname);
}

// sg_user_stats_item_init
// file user_stats.c line 27
static void sg_user_stats_item_init(struct anonymous_18 *d)
{
  d->login_name = (char *)(void *)0;
  d->record_id = (char *)(void *)0;
  d->record_id_size = (unsigned long int)0;
  d->device = (char *)(void *)0;
  d->hostname = (char *)(void *)0;
  d->login_time = (signed long int)0;
  d->systime = (signed long int)0;
}

// sg_vector_clear
// file vector.h line 85
void sg_vector_clear(struct sg_vector *vector)
{
  if(!(vector == ((struct sg_vector *)NULL)))
  {
    enum anonymous_4 return_value_sg_prove_vector_1;
    return_value_sg_prove_vector_1=sg_prove_vector(vector);
    if((signed int)return_value_sg_prove_vector_1 == SG_ERROR_NONE)
      sg_vector_destroy_unused(vector, (unsigned long int)0);

  }

}

// sg_vector_clone
// file vector.h line 163
struct sg_vector * sg_vector_clone(const struct sg_vector *src)
{
  struct sg_vector *dest = (struct sg_vector *)(void *)0;
  enum anonymous_4 return_value_sg_vector_clone_into_int_1;
  if(src == ((const struct sg_vector *)NULL))
    return (struct sg_vector *)(void *)0;

  else
  {
    enum anonymous_4 return_value_sg_prove_vector_2;
    return_value_sg_prove_vector_2=sg_prove_vector(src);
    if((signed int)return_value_sg_prove_vector_2 == SG_ERROR_NONE)
    {
      dest=sg_vector_create_int(src->block_shift, src->alloc_count, src->used_count, &src->info);
      if(dest == ((struct sg_vector *)NULL))
        goto __CPROVER_DUMP_L2;

      return_value_sg_vector_clone_into_int_1=sg_vector_clone_into_int(&dest, src);
      if(!((signed int)return_value_sg_vector_clone_into_int_1 == SG_ERROR_NONE))
        goto __CPROVER_DUMP_L2;

      return dest;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      sg_vector_free(dest);
      return (struct sg_vector *)(void *)0;
    }
  }
}

// sg_vector_clone_into
// file vector.c line 250
enum anonymous_4 sg_vector_clone_into(struct sg_vector **dest, const struct sg_vector *src)
{
  enum anonymous_4 return_value_sg_prove_vector_4;
  enum anonymous_4 return_value_sg_prove_vector_compat_3;
  enum anonymous_4 return_value_sg_vector_clone_into_int_2;
  if(dest == ((struct sg_vector **)NULL))
  {
    do
    {
      char *sg_vector_clone_into__1__1__1____errinfobuf = (char *)(void *)0;
      sg_set_error_fmt((enum anonymous_4)SG_ERROR_INVALID_ARGUMENT, "dest");
      free((void *)sg_vector_clone_into__1__1__1____errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_INVALID_ARGUMENT;
  }

  else
    if(src == ((const struct sg_vector *)NULL))
    {
      if(!(*dest == ((struct sg_vector *)NULL)))
      {
        sg_vector_free(*dest);
        *dest = (struct sg_vector *)(void *)0;
      }

      return (enum anonymous_4)SG_ERROR_NONE;
    }

    else
    {
      enum anonymous_4 return_value_sg_prove_vector_1;
      return_value_sg_prove_vector_1=sg_prove_vector(src);
      if(!((signed int)return_value_sg_prove_vector_1 == SG_ERROR_NONE))
      {
        do
        {
          char *__errinfobuf = (char *)(void *)0;
          sg_set_error_fmt((enum anonymous_4)SG_ERROR_INVALID_ARGUMENT, "src");
          free((void *)__errinfobuf);
        }
        while((_Bool)0);
        return (enum anonymous_4)SG_ERROR_INVALID_ARGUMENT;
      }

      else
      {
        if(*dest == ((struct sg_vector *)NULL))
        {
          *dest=sg_vector_clone(src);
          if(!(*dest == ((struct sg_vector *)NULL)))
            return (enum anonymous_4)SG_ERROR_NONE;

        }

        else
        {
          return_value_sg_prove_vector_4=sg_prove_vector(*dest);
          if((signed int)return_value_sg_prove_vector_4 == SG_ERROR_NONE)
          {
            return_value_sg_prove_vector_compat_3=sg_prove_vector_compat(*dest, src);
            if((signed int)return_value_sg_prove_vector_compat_3 == SG_ERROR_NONE)
            {
              return_value_sg_vector_clone_into_int_2=sg_vector_clone_into_int(dest, src);
              if((signed int)return_value_sg_vector_clone_into_int_2 == SG_ERROR_NONE)
                return (enum anonymous_4)SG_ERROR_NONE;

            }

          }

        }
        sg_vector_free(*dest);
        *dest = (struct sg_vector *)(void *)0;
        enum anonymous_4 return_value_sg_get_error_5;
        return_value_sg_get_error_5=sg_get_error();
        return return_value_sg_get_error_5;
      }
    }
}

// sg_vector_clone_into_int
// file vector.c line 218
static enum anonymous_4 sg_vector_clone_into_int(struct sg_vector **dest, const struct sg_vector *src)
{
  unsigned long int i;
  struct sg_vector *tmp;
  struct sg_vector *tmp_if_expr_2;
  struct sg_vector *return_value_sg_vector_resize_1;
  if((*dest)->used_count == src->used_count)
    tmp_if_expr_2 = *dest;

  else
  {
    return_value_sg_vector_resize_1=sg_vector_resize(*dest, src->used_count);
    tmp_if_expr_2 = return_value_sg_vector_resize_1;
  }
  tmp = tmp_if_expr_2;
  const char *src_data;
  const void *tmp_if_expr_3;
  if(!(src == ((const struct sg_vector *)NULL)))
    tmp_if_expr_3 = (const void *)&src[(signed long int)1];

  else
    tmp_if_expr_3 = (void *)0;
  src_data = (const char *)tmp_if_expr_3;
  char *dest_data;
  void *tmp_if_expr_4;
  if(!(tmp == ((struct sg_vector *)NULL)))
    tmp_if_expr_4 = (void *)&tmp[(signed long int)1];

  else
    tmp_if_expr_4 = (void *)0;
  dest_data = (char *)tmp_if_expr_4;
  unsigned long int item_size = src->info.item_size;
  /* assertion src->info.copy_fn */
  assert(src->info.copy_fn != ((enum anonymous_4 (*)(const void *, void *))NULL));
  if(tmp == ((struct sg_vector *)NULL))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    enum anonymous_4 return_value_sg_get_error_5;
    return_value_sg_get_error_5=sg_get_error();
    return return_value_sg_get_error_5;
  }

  i = (unsigned long int)0;
  if(!(i >= src->used_count))
  {
    enum anonymous_4 rc;
    rc=src->info.copy_fn((const void *)(src_data + (signed long int)(i * item_size)), (void *)(dest_data + (signed long int)(i * item_size)));
    if(!((signed int)rc == SG_ERROR_NONE))
    {
      sg_vector_free(tmp);
      *dest = (struct sg_vector *)(void *)0;
      return rc;
    }

    i = i + 1ul;
  }

  *dest = tmp;
  return (enum anonymous_4)SG_ERROR_NONE;
}

// sg_vector_compute_diff
// file vector.h line 166
enum anonymous_4 sg_vector_compute_diff(struct sg_vector **dest_vector_ptr, const struct sg_vector *cur_vector, const struct sg_vector *last_vector)
{
  enum anonymous_4 return_value_sg_prove_vector_4;
  enum anonymous_4 return_value_sg_prove_vector_compat_3;
  void *tmp_if_expr_1;
  const void *tmp_if_expr_2;
  if(dest_vector_ptr == ((struct sg_vector **)NULL))
  {
    do
    {
      char *sg_vector_compute_diff__1__1__1____errinfobuf = (char *)(void *)0;
      sg_set_error_fmt((enum anonymous_4)SG_ERROR_INVALID_ARGUMENT, "sg_vector_compute_diff(dest_vector_ptr)");
      free((void *)sg_vector_compute_diff__1__1__1____errinfobuf);
    }
    while((_Bool)0);
    return (enum anonymous_4)SG_ERROR_INVALID_ARGUMENT;
  }

  else
  {
    if(!(cur_vector == ((const struct sg_vector *)NULL)))
    {
      enum anonymous_4 rc;
      rc=sg_vector_clone_into(dest_vector_ptr, cur_vector);
      if(!((signed int)rc == SG_ERROR_NONE))
      {
        do
        {
          char *__errinfobuf = (char *)(void *)0;
          free((void *)__errinfobuf);
        }
        while((_Bool)0);
        return rc;
      }

      if(*dest_vector_ptr == ((struct sg_vector *)NULL))
        return (enum anonymous_4)SG_ERROR_NONE;

      /* assertion cur_vector->info.compute_diff_fn */
      assert(cur_vector->info.compute_diff_fn != ((enum anonymous_4 (*)(const void *, void *))NULL));
      /* assertion cur_vector->info.compare_fn */
      assert(cur_vector->info.compare_fn != ((signed int (*)(const void *, const void *))NULL));
      if(!(last_vector == ((const struct sg_vector *)NULL)))
      {
        return_value_sg_prove_vector_4=sg_prove_vector(last_vector);
        if((signed int)return_value_sg_prove_vector_4 == SG_ERROR_NONE)
        {
          return_value_sg_prove_vector_compat_3=sg_prove_vector_compat(cur_vector, last_vector);
          if((signed int)return_value_sg_prove_vector_compat_3 == SG_ERROR_NONE)
          {
            unsigned long int i;
            unsigned long int item_size = last_vector->info.item_size;
            const signed long int item_size_array_size0 = (signed long int)(cur_vector->used_count / ((unsigned long int)8 * sizeof(unsigned int) /*4ul*/ ) + (unsigned long int)1);
            unsigned int matched[item_size_array_size0];
            char *diff;
            if(!(*dest_vector_ptr == ((struct sg_vector *)NULL)))
              tmp_if_expr_1 = (void *)&(*dest_vector_ptr)[(signed long int)1];

            else
              tmp_if_expr_1 = (void *)0;
            diff = (char *)tmp_if_expr_1;
            const char *last;
            if(!(last_vector == ((const struct sg_vector *)NULL)))
              tmp_if_expr_2 = (const void *)&last_vector[(signed long int)1];

            else
              tmp_if_expr_2 = (void *)0;
            last = (const char *)tmp_if_expr_2;
            memset((void *)matched, 0, 4ul * (unsigned long int)item_size_array_size0);
            i = (unsigned long int)0;
            for( ; !(i >= (*dest_vector_ptr)->used_count); i = i + 1ul)
            {
              unsigned long int j = (unsigned long int)0;
              for( ; !(j >= last_vector->used_count); j = j + 1ul)
                if((matched[(signed long int)(j / sizeof(unsigned int) * 8 /*32ul*/ )] & (unsigned int)(1 << j % sizeof(unsigned int) * 8 /*32ul*/ )) == 0u)
                {
                  signed int return_value;
                  return_value=last_vector->info.compare_fn((const void *)(last + (signed long int)(j * item_size)), (const void *)(diff + (signed long int)(i * item_size)));
                  if(return_value == 0)
                  {
                    matched[(signed long int)(j / ((unsigned long int)8 * sizeof(unsigned int) /*4ul*/ ))] = matched[(signed long int)(j / ((unsigned long int)8 * sizeof(unsigned int) /*4ul*/ ))] | (unsigned int)(1 << j % ((unsigned long int)8 * sizeof(unsigned int) /*4ul*/ ));
                    last_vector->info.compute_diff_fn((const void *)(last + (signed long int)(j * item_size)), (void *)(diff + (signed long int)(i * item_size)));
                  }

                }

            }
          }

        }

      }

    }

    else
    {
      sg_vector_free(*dest_vector_ptr);
      *dest_vector_ptr = (struct sg_vector *)(void *)0;
      do
      {
        char *sg_vector_compute_diff__1__3__1____errinfobuf = (char *)(void *)0;
        sg_set_error_fmt((enum anonymous_4)SG_ERROR_INVALID_ARGUMENT, "sg_vector_compute_diff(cur_vector)");
        free((void *)sg_vector_compute_diff__1__3__1____errinfobuf);
      }
      while((_Bool)0);
      return (enum anonymous_4)SG_ERROR_INVALID_ARGUMENT;
    }
    return (enum anonymous_4)SG_ERROR_NONE;
  }
}

// sg_vector_create
// file vector.h line 83
struct sg_vector * sg_vector_create(unsigned long int block_size, unsigned long int alloc_count, unsigned long int initial_used, const struct sg_vector_init_info * const info)
{
  unsigned long int block_shift = (unsigned long int)0;
  for( ; !((unsigned long int)(1u << block_shift) >= block_size); block_shift = block_shift + 1ul)
    ;
  struct sg_vector *return_value_sg_vector_create_int_1;
  return_value_sg_vector_create_int_1=sg_vector_create_int(block_shift, alloc_count, initial_used, info);
  return return_value_sg_vector_create_int_1;
}

// sg_vector_create_int
// file vector.c line 98
static struct sg_vector * sg_vector_create_int(unsigned long int block_shift, unsigned long int alloc_count, unsigned long int initial_used, const struct sg_vector_init_info * const info)
{
  unsigned long int round_count = ((alloc_count > initial_used ? alloc_count : initial_used) - (unsigned long int)1 >> block_shift) + (unsigned long int)1 << block_shift;
  struct sg_vector *vector;
  void *return_value_sg_realloc_1;
  return_value_sg_realloc_1=sg_realloc((void *)0, (unsigned long int)((struct sg_vector *)0 + (signed long int)(unsigned long int)1) + round_count * info->item_size);
  vector = (struct sg_vector *)return_value_sg_realloc_1;
  if(!(vector == ((struct sg_vector *)NULL)))
  {
    vector->start_eye = (unsigned long int)(((unsigned int)115 & (unsigned int)0xFF) + (((unsigned int)103 & (unsigned int)0xFF) << 8) + (((unsigned int)118 & (unsigned int)0xFF) << 16) + (((unsigned int)115 & (unsigned int)0xFF) << 24));
    vector->final_eye = (unsigned long int)(((unsigned int)102 & (unsigned int)0xFF) + (((unsigned int)118 & (unsigned int)0xFF) << 8) + (((unsigned int)103 & (unsigned int)0xFF) << 16) + (((unsigned int)115 & (unsigned int)0xFF) << 24));
    vector->info = *info;
    vector->block_shift = block_shift;
    vector->alloc_count = 1LU << block_shift;
    vector->used_count = (unsigned long int)0;
    sg_vector_init_new(vector, initial_used);
  }

  return vector;
}

// sg_vector_destroy_unused
// file vector.c line 33
static void sg_vector_destroy_unused(struct sg_vector *vector, unsigned long int new_count)
{
  void *tmp_if_expr_1;
  if(!(new_count >= vector->used_count))
  {
    if(!(vector->info.destroy_fn == ((void (*)(void *))NULL)))
    {
      char *data;
      if(!(vector == ((struct sg_vector *)NULL)))
        tmp_if_expr_1 = (void *)&vector[(signed long int)1];

      else
        tmp_if_expr_1 = (void *)0;
      data = (char *)tmp_if_expr_1;
      unsigned long int i = vector->used_count;
      if(!(new_count >= i))
      {
        i = i - 1ul;
        vector->info.destroy_fn((void *)(data + (signed long int)(i * vector->info.item_size)));
      }

    }

  }

  if(!(new_count >= vector->used_count))
    vector->used_count = new_count;

}

// sg_vector_free
// file vector.h line 98
void sg_vector_free(struct sg_vector *vector)
{
  if(!(vector == ((struct sg_vector *)NULL)))
  {
    enum anonymous_4 return_value_sg_prove_vector_1;
    return_value_sg_prove_vector_1=sg_prove_vector(vector);
    if((signed int)return_value_sg_prove_vector_1 == SG_ERROR_NONE)
    {
      sg_vector_destroy_unused(vector, (unsigned long int)0);
      free((void *)vector);
    }

  }

}

// sg_vector_init_new
// file vector.c line 57
static void sg_vector_init_new(struct sg_vector *vector, unsigned long int new_count)
{
  void *tmp_if_expr_1;
  if(!(vector->used_count >= new_count))
  {
    if(!(vector->info.init_fn == ((void (*)(void *))NULL)))
    {
      char *data;
      if(!(vector == ((struct sg_vector *)NULL)))
        tmp_if_expr_1 = (void *)&vector[(signed long int)1];

      else
        tmp_if_expr_1 = (void *)0;
      data = (char *)tmp_if_expr_1;
      unsigned long int i = vector->used_count;
      if(!(i >= new_count))
      {
        vector->info.init_fn((void *)(data + (signed long int)(i * vector->info.item_size)));
        i = i + 1ul;
      }

    }

  }

  if(!(vector->used_count >= new_count))
    vector->used_count = new_count;

}

// sg_vector_resize
// file vector.h line 95
struct sg_vector * sg_vector_resize(struct sg_vector *vector, unsigned long int new_count)
{
  unsigned long int round_count;
  /* assertion vector */
  assert(vector != ((struct sg_vector *)NULL));
  if(vector == ((struct sg_vector *)NULL))
  {
    do
    {
      char *__errinfobuf = (char *)(void *)0;
      sg_set_error_fmt((enum anonymous_4)SG_ERROR_INVALID_ARGUMENT, "sg_vector_resize: invalid argument value for vector");
      free((void *)__errinfobuf);
    }
    while((_Bool)0);
    return (struct sg_vector *)(void *)0;
  }

  else
  {
    enum anonymous_4 return_value_sg_prove_vector_1;
    return_value_sg_prove_vector_1=sg_prove_vector(vector);
    if(!((signed int)return_value_sg_prove_vector_1 == SG_ERROR_NONE))
    {
      do
      {
        char *sg_vector_resize__1__2__1____errinfobuf = (char *)(void *)0;
        sg_set_error_fmt((enum anonymous_4)SG_ERROR_INVALID_ARGUMENT, "sg_vector_resize: invalid vector");
        free((void *)sg_vector_resize__1__2__1____errinfobuf);
      }
      while((_Bool)0);
      return (struct sg_vector *)(void *)0;
    }

    else
      if(new_count == 0ul)
      {
        sg_vector_free(vector);
        sg_clear_error();
        return (struct sg_vector *)(void *)0;
      }

      else
      {
        sg_vector_destroy_unused(vector, new_count);
        round_count = (new_count - (unsigned long int)1 >> vector->block_shift) + (unsigned long int)1 << vector->block_shift;
        if(!(round_count == vector->alloc_count))
        {
          struct sg_vector *new_vector;
          void *return_value_sg_realloc_2;
          return_value_sg_realloc_2=sg_realloc((void *)vector, (unsigned long int)((struct sg_vector *)0 + (signed long int)(unsigned long int)1) + round_count * vector->info.item_size);
          new_vector = (struct sg_vector *)return_value_sg_realloc_2;
          if(new_vector == ((struct sg_vector *)NULL) && !(round_count == 0ul))
          {
            sg_vector_free(vector);
            return (struct sg_vector *)(void *)0;
          }

          vector = new_vector;
          vector->alloc_count = round_count;
        }

        sg_vector_init_new(vector, new_count);
        return vector;
      }
  }
}

// sg_warn
// file err.c line 29
signed int sg_warn(const char *prefix)
{
  struct sg_error_details err_det;
  char *errmsg = (char *)(void *)0;
  signed int rc;
  enum anonymous_4 errc;
  errc=sg_get_error_details(&err_det);
  if(!((signed int)errc == SG_ERROR_NONE))
  {
    const char *return_value_sg_str_error_1;
    return_value_sg_str_error_1=sg_str_error(errc);
    fprintf(stderr, "can't get error details (%d, %s)\n", errc, return_value_sg_str_error_1);
    return 0;
  }

  char *return_value_sg_strperror_3;
  return_value_sg_strperror_3=sg_strperror(&errmsg, &err_det);
  if(return_value_sg_strperror_3 == ((char *)NULL))
  {
    errc=sg_get_error();
    const char *return_value_sg_str_error_2;
    return_value_sg_str_error_2=sg_str_error(errc);
    fprintf(stderr, "panic: can't prepare error message (%d, %s)\n", errc, return_value_sg_str_error_2);
    return 0;
  }

  rc=fprintf(stderr, "%s: %s\n", prefix, errmsg);
  free((void *)errmsg);
  return rc;
}

// strlcat
// file tools.c line 418
static unsigned long int strlcat(char *dst, const char *src, unsigned long int siz)
{
  char *d = dst;
  const char *s = src;
  unsigned long int n = siz;
  unsigned long int dlen;
  unsigned long int tmp_post_1;
  do
  {
    tmp_post_1 = n;
    n = n - 1ul;
    if(tmp_post_1 == 0ul)
      break;

    if((signed int)*d == 0)
      break;

    d = d + 1l;
  }
  while((_Bool)1);
  dlen = (unsigned long int)(d - dst);
  n = siz - dlen;
  unsigned long int return_value_strlen_2;
  char *tmp_post_3;
  if(n == 0ul)
  {
    return_value_strlen_2=strlen(s);
    return dlen + return_value_strlen_2;
  }

  else
  {
    for( ; !((signed int)*s == 0); s = s + 1l)
      if(!(n == 1ul))
      {
        tmp_post_3 = d;
        d = d + 1l;
        *tmp_post_3 = *s;
        n = n - 1ul;
      }

    *d = (char)0;
    return dlen + (unsigned long int)(s - src);
  }
}

// strlcpy
// file tools.c line 364
static unsigned long int strlcpy(char *dst, const char *src, unsigned long int siz)
{
  char *d = dst;
  const char *s = src;
  unsigned long int n = siz;
  char *tmp_post_1;
  const char *tmp_post_2;
  if(!(n == 0ul))
    do
    {
      n = n - 1ul;
      if(n == 0ul)
        break;

      tmp_post_1 = d;
      d = d + 1l;
      tmp_post_2 = s;
      s = s + 1l;
      *tmp_post_1 = *tmp_post_2;
      if((signed int)*tmp_post_1 == 0)
        break;

    }
    while((_Bool)1);

  const char *tmp_post_3;
  if(n == 0ul)
  {
    if(!(siz == 0ul))
      *d = (char)0;

    do
    {
      tmp_post_3 = s;
      s = s + 1l;
      if(*tmp_post_3 == 0)
        break;

    }
    while((_Bool)1);
  }

  return (unsigned long int)((s - src) - (signed long int)1);
}

// threadfunc
// file diff_stats.c line 62
void * threadfunc(void *parm)
{
  signed int rc;
  signed int success;
  unsigned long int func_idx = *((unsigned long int *)parm);
  rc=pthread_mutex_lock(&mutex);
  prove_libcall("pthread_mutex_lock", rc);
  test_counter = test_counter + 1ul;
  while(conditionMet == 0)
  {
    rc=pthread_cond_wait(&cond, &mutex);
    prove_libcall("pthread_cond_wait", rc);
  }
  if(opt_def[5l].optarg.b == (_Bool)0)
  {
    rc=pthread_mutex_unlock(&mutex);
    prove_libcall("pthread_mutex_unlock", rc);
  }

  success=run_func(func_idx, 0);
  if(opt_def[5l].optarg.b == (_Bool)0)
  {
    rc=pthread_mutex_lock(&mutex);
    prove_libcall("pthread_mutex_lock", rc);
  }

  done_func(func_idx, success);
  rc=pthread_mutex_unlock(&mutex);
  prove_libcall("pthread_mutex_unlock", rc);
  pthread_cond_signal(&cond);
  return (void *)0;
}

// transfer_diff
// file network_stats.c line 59
static unsigned long long int transfer_diff(unsigned long long int new, unsigned long long int old)
{
  signed long long int cmp_new = (signed long long int)new;
  signed long long int cmp_old = (signed long long int)old;
  if(cmp_new >= cmp_old)
    return new - old;

  else
    return (unsigned long long int)((0x100000000LL + cmp_new) - cmp_old);
}

