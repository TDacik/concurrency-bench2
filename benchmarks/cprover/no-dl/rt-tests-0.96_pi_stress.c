// tag-#anon#ST[ARR16{U64}$U64$'__bits'|]
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 125
struct anonymous;

// tag-#anon#ST[ARR16{U64}$U64$'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous$0;

// tag-#anon#UN[ARR32{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 239
union anonymous$1;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$2;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
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

// tag-group_parameters
// file src/pi_tests/pi_stress.c line 188
struct group_parameters;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-sched_attr
// file src/include/rt-sched.h line 59
struct sched_attr;

// tag-sched_attr$link1
// file src/include/rt-sched.h line 59
struct sched_attr$0;

// tag-sched_param
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 72
struct sched_param;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

#ifndef NULL
#define NULL ((void*)0)
#endif

// _IO_getc
// file /usr/include/libio.h line 434
extern signed int _IO_getc(struct _IO_FILE *);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __rawmemchr
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 393
extern void * __rawmemchr(const void *, signed int);
// __strsep_1c
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1199
static inline char * __strsep_1c(char **__s, char __reject);
// __strsep_2c
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1209
static inline char * __strsep_2c(char **__s, char __reject1, char __reject2);
// __strsep_3c
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1237
static inline char * __strsep_3c(char **__s, char __reject1, char __reject2, char __reject3);
// __strsep_g
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1179
extern char * __strsep_g(char **, const char *);
// __xstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 400
extern signed int __xstat(signed int, const char *, struct stat *);
// allow_sigterm
// file src/pi_tests/pi_stress.c line 1071
signed int allow_sigterm(void);
// banner
// file src/pi_tests/pi_stress.c line 1409
void banner(void);
// barrier_init
// file src/pi_tests/pi_stress.c line 1443
signed int barrier_init(union anonymous$1 *b, const union anonymous$2 *attr, unsigned int count, const char *name);
// block_signals
// file src/pi_tests/pi_stress.c line 1051
signed int block_signals(void);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// check_privs
// file src/lib/rt-utils.c line 251
signed int check_privs(void);
// clock_nanosleep
// file /usr/include/time.h line 353
extern signed int clock_nanosleep(signed int, signed int, struct timespec *, struct timespec *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// create_group
// file src/pi_tests/pi_stress.c line 1176
signed int create_group(struct group_parameters *group);
// debug
// file src/include/error.h line 13
void debug(char *fmt, ...);
// err_doit
// file src/lib/error.c line 90
void err_doit(signed int err, const char *fmt, void **ap);
// err_exit
// file src/lib/error.c line 10
void err_exit(signed int err, char *fmt, ...);
// err_msg
// file src/include/error.h line 10
void err_msg(char *fmt, ...);
// err_msg_n
// file src/lib/error.c line 30
void err_msg_n(signed int err, char *fmt, ...);
// err_quit
// file src/lib/error.c line 40
void err_quit(char *fmt, ...);
// event_disable
// file src/lib/rt-utils.c line 243
signed int event_disable(char *event);
// event_disable_all
// file src/lib/rt-utils.c line 230
signed int event_disable_all(void);
// event_enable
// file src/lib/rt-utils.c line 235
signed int event_enable(char *event);
// event_enable_all
// file src/lib/rt-utils.c line 225
signed int event_enable_all(void);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fatal
// file src/lib/error.c line 79
void fatal(char *fmt, ...);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
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
// fscanf
// file /usr/include/stdio.h line 425
extern signed int fscanf(struct _IO_FILE *, const char *, ...);
// get_debugfileprefix
// file src/lib/rt-utils.c line 30
char * get_debugfileprefix(void);
// get_tracers
// file src/lib/rt-utils.c line 121
signed int get_tracers(char ***list);
// getchar
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 44
static inline signed int getchar(void);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// gettid
// file src/include/rt-utils.h line 25
signed int gettid(void);
// gmtime
// file /usr/include/time.h line 239
extern struct tm * gmtime(const signed long int *);
// high_priority
// file src/pi_tests/pi_stress.c line 883
void * high_priority(void *arg);
// info
// file src/include/error.h line 14
void info(char *fmt, ...);
// initialize_group
// file src/pi_tests/pi_stress.c line 1107
signed int initialize_group(struct group_parameters *group);
// kill
// file /usr/include/signal.h line 127
extern signed int kill(signed int, signed int);
// low_priority
// file src/pi_tests/pi_stress.c line 645
void * low_priority(void *arg);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// med_priority
// file src/pi_tests/pi_stress.c line 779
void * med_priority(void *arg);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// mlockall
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 111
extern signed int mlockall(signed int);
// mount_debugfs
// file src/lib/rt-utils.c line 86
signed int mount_debugfs(char *path);
// munlockall
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 115
extern signed int munlockall(void);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// parse_signed
// file src/pi_tests/pi_stress.c line 1247
signed long int parse_signed(const char *str);
// parse_unsigned
// file src/pi_tests/pi_stress.c line 1230
unsigned long int parse_unsigned(const char *str);
// pending_interrupt
// file src/pi_tests/pi_stress.c line 524
signed int pending_interrupt(void);
// policy_to_string
// file src/include/rt-utils.h line 22
const char * policy_to_string(signed int policy);
// print_sched_attr
// file src/pi_tests/pi_stress.c line 1388
void print_sched_attr(const char *name, struct sched_attr *sa);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// process_command_line
// file src/pi_tests/pi_stress.c line 1323
void process_command_line(signed int argc, char **argv);
// process_sched_line
// file src/pi_tests/pi_stress.c line 1264
signed int process_sched_line(const char *arg);
// pthread_attr_init
// file /usr/include/pthread.h line 289
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_attr_setaffinity_np
// file /usr/include/pthread.h line 398
extern signed int pthread_attr_setaffinity_np(union pthread_attr_t *, unsigned long int, const struct anonymous *);
// pthread_attr_setinheritsched
// file /usr/include/pthread.h line 342
extern signed int pthread_attr_setinheritsched(union pthread_attr_t *, signed int);
// pthread_attr_setschedparam
// file /usr/include/pthread.h line 323
extern signed int pthread_attr_setschedparam(union pthread_attr_t *, struct sched_param *);
// pthread_attr_setschedpolicy
// file /usr/include/pthread.h line 333
extern signed int pthread_attr_setschedpolicy(union pthread_attr_t *, signed int);
// pthread_barrier_init
// file /usr/include/pthread.h line 1070
extern signed int pthread_barrier_init(union anonymous$1 *, const union anonymous$2 *, unsigned int);
// pthread_barrier_wait
// file /usr/include/pthread.h line 1080
extern signed int pthread_barrier_wait(union anonymous$1 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$3 *, const union anonymous$2 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$3 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$3 *);
// pthread_mutexattr_init
// file /usr/include/pthread.h line 808
extern signed int pthread_mutexattr_init(union anonymous$2 *);
// pthread_mutexattr_setprotocol
// file /usr/include/pthread.h line 847
extern signed int pthread_mutexattr_setprotocol(union anonymous$2 *, signed int);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// pthread_setschedparam
// file /usr/include/pthread.h line 431
extern signed int pthread_setschedparam(unsigned long int, signed int, struct sched_param *);
// pthread_sigmask
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 30
extern signed int pthread_sigmask(signed int, const struct anonymous$0 *, struct anonymous$0 *);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// reporter
// file src/pi_tests/pi_stress.c line 549
void * reporter(void *arg);
// sched_get_priority_min
// file /usr/include/sched.h line 71
extern signed int sched_get_priority_min(signed int);
// sched_getaffinity
// file /usr/include/sched.h line 122
extern signed int sched_getaffinity(signed int, unsigned long int, struct anonymous *);
// sched_getattr
// file src/lib/rt-sched.c line 37
signed int sched_getattr(signed int pid, struct sched_attr$0 *attr, unsigned int size, unsigned int flags);
// sched_getparam
// file /usr/include/sched.h line 55
extern signed int sched_getparam(signed int, struct sched_param *);
// sched_getscheduler
// file /usr/include/sched.h line 62
extern signed int sched_getscheduler(signed int);
// sched_setaffinity
// file /usr/include/sched.h line 118
extern signed int sched_setaffinity(signed int, unsigned long int, const struct anonymous *);
// sched_setattr
// file src/lib/rt-sched.c line 30
signed int sched_setattr(signed int pid, struct sched_attr$0 *attr, unsigned int flags);
// sched_setscheduler
// file /usr/include/sched.h line 58
extern signed int sched_setscheduler(signed int, signed int, struct sched_param *);
// set_cpu_affinity
// file src/pi_tests/pi_stress.c line 436
signed int set_cpu_affinity(struct anonymous *test_mask, struct anonymous *admin_mask);
// set_shutdown_flag
// file src/pi_tests/pi_stress.c line 1095
void set_shutdown_flag(void);
// setevent
// file src/lib/rt-utils.c line 204
signed int setevent(char *event, char *val);
// setup_sched_attr
// file src/pi_tests/pi_stress.c line 1457
void setup_sched_attr(struct sched_attr *attr, signed int policy, signed int prio);
// setup_sched_config
// file src/pi_tests/pi_stress.c line 1463
void setup_sched_config(signed int policy);
// setup_thread_attr
// file src/pi_tests/pi_stress.c line 386
signed int setup_thread_attr(union pthread_attr_t *attr, struct sched_attr *sa, struct anonymous *mask);
// setvbuf
// file /usr/include/stdio.h line 336
extern signed int setvbuf(struct _IO_FILE *, char *, signed int, unsigned long int);
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous$0 *, signed int);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous$0 *);
// sigfillset
// file /usr/include/signal.h line 218
extern signed int sigfillset(struct anonymous$0 *);
// sigismember
// file /usr/include/signal.h line 227
extern signed int sigismember(const struct anonymous$0 *, signed int);
// sigpending
// file /usr/include/signal.h line 263
extern signed int sigpending(struct anonymous$0 *);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// string_to_policy
// file src/include/rt-utils.h line 23
unsigned int string_to_policy(const char *str);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strtok
// file /usr/include/string.h line 347
extern char * strtok(char *, const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// strtoul
// file /usr/include/stdlib.h line 187
extern unsigned long int strtoul(const char *, char ** restrict , signed int);
// summary
// file src/pi_tests/pi_stress.c line 1432
void summary(void);
// syscall
// file /usr/include/unistd.h line 1058
extern signed long int syscall(signed long int, ...);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// system
// file /usr/include/stdlib.h line 716
extern signed int system(const char *);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// total_inversions
// file src/pi_tests/pi_stress.c line 1378
unsigned long int total_inversions(void);
// tsnorm
// file src/pi_tests/pi_stress.c line 536
static inline void tsnorm(struct timespec *ts);
// usage
// file src/pi_tests/pi_stress.c line 1023
void usage(void);
// valid_tracer
// file src/lib/rt-utils.c line 186
signed int valid_tracer(char *tracername);
// verify_cpu
// file src/pi_tests/pi_stress.c line 625
signed int verify_cpu(signed int cpu);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// warn
// file src/lib/error.c line 69
void warn(char *fmt, ...);
// watchdog_check
// file src/pi_tests/pi_stress.c line 500
signed int watchdog_check(void);
// watchdog_clear
// file src/pi_tests/pi_stress.c line 492
void watchdog_clear(void);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);

struct anonymous
{
  // __bits
  unsigned long int __bits[16l];
};

struct anonymous$0
{
  // __val
  unsigned long int __val[16l];
};

union anonymous$1
{
  // __size
  char __size[32l];
  // __align
  signed long int __align;
};

union anonymous$2
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

union anonymous$3
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

struct group_parameters
{
  // id
  signed int id;
  // cpu
  signed long int cpu;
  // low_tid
  unsigned long int low_tid;
  // med_tid
  unsigned long int med_tid;
  // high_tid
  unsigned long int high_tid;
  // inversions
  signed int inversions;
  // mutex
  union anonymous$3 mutex;
  // start_barrier
  union anonymous$1 start_barrier;
  // locked_barrier
  union anonymous$1 locked_barrier;
  // elevate_barrier
  union anonymous$1 elevate_barrier;
  // finish_barrier
  union anonymous$1 finish_barrier;
  // loop_barr
  union anonymous$1 loop_barr;
  // loop_mtx
  union anonymous$3 loop_mtx;
  // loop
  signed int loop;
  // watchdog
  volatile signed int watchdog;
  // total
  unsigned long int total;
  // watchdog_hits
  signed int watchdog_hits;
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

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct sched_attr
{
  // size
  unsigned int size;
  // sched_policy
  unsigned int sched_policy;
  // sched_flags
  unsigned long int sched_flags;
  // sched_nice
  signed int sched_nice;
  // __sched_priority
  unsigned int __sched_priority;
  // sched_runtime
  unsigned long int sched_runtime;
  // sched_deadline
  unsigned long int sched_deadline;
  // sched_period
  unsigned long int sched_period;
};

struct sched_attr$0
{
  // size
  unsigned int size;
  // sched_policy
  unsigned int sched_policy;
  // sched_flags
  unsigned long int sched_flags;
  // sched_nice
  signed int sched_nice;
  // sched_priority
  unsigned int sched_priority;
  // sched_runtime
  unsigned long int sched_runtime;
  // sched_deadline
  unsigned long int sched_deadline;
  // sched_period
  unsigned long int sched_period;
};

struct sched_param
{
  // __sched_priority
  signed int __sched_priority;
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


// admin_cpu_mask
// file src/pi_tests/pi_stress.c line 171
struct anonymous admin_cpu_mask;
// admin_sa
// file src/pi_tests/pi_stress.c line 179
struct sched_attr admin_sa;
// all_threads_done
// file src/pi_tests/pi_stress.c line 169
union anonymous$1 all_threads_done;
// all_threads_ready
// file src/pi_tests/pi_stress.c line 168
union anonymous$1 all_threads_ready;
// debugfileprefix
// file src/lib/rt-utils.c line 25
static char debugfileprefix[256l];
// debugging
// file src/pi_tests/pi_stress.c line 122
signed int debugging = 0;
// duration
// file src/pi_tests/pi_stress.c line 106
signed int duration = -1;
// finish
// file src/pi_tests/pi_stress.c line 109
signed long int finish;
// groups
// file src/pi_tests/pi_stress.c line 227
struct group_parameters *groups;
// have_errors
// file src/pi_tests/pi_stress.c line 136
signed int have_errors = 0;
// high_sa
// file src/pi_tests/pi_stress.c line 178
struct sched_attr high_sa;
// interrupted
// file src/pi_tests/pi_stress.c line 139
signed int interrupted = 0;
// inversions
// file src/pi_tests/pi_stress.c line 116
signed int inversions = -1;
// lockall
// file src/pi_tests/pi_stress.c line 145
signed int lockall = 0;
// low_sa
// file src/pi_tests/pi_stress.c line 176
struct sched_attr low_sa;
// med_sa
// file src/pi_tests/pi_stress.c line 177
struct sched_attr med_sa;
// ngroups
// file src/pi_tests/pi_stress.c line 112
signed int ngroups = 0;
// num_processors
// file src/pi_tests/pi_stress.c line 233
signed long int num_processors = (signed long int)0;
// num_tracers
// file src/lib/rt-utils.c line 114
static signed int num_tracers;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// options
// file src/pi_tests/pi_stress.c line 148
struct option options[14l] = { { .name="duration", .has_arg=1, .flag=(signed int *)(void *)0, .val=116 },
    { .name="verbose", .has_arg=0, .flag=(signed int *)(void *)0, .val=118 },
    { .name="quiet", .has_arg=0, .flag=(signed int *)(void *)0, .val=113 },
    { .name="groups", .has_arg=1, .flag=(signed int *)(void *)0, .val=103 },
    { .name="inversions", .has_arg=1, .flag=(signed int *)(void *)0, .val=105 },
    { .name="rr", .has_arg=0, .flag=(signed int *)(void *)0, .val=114 },
    { .name="sched", .has_arg=1, .flag=(signed int *)(void *)0, .val=115 },
    { .name="uniprocessor", .has_arg=0, .flag=(signed int *)(void *)0, .val=117 },
    { .name="prompt", .has_arg=0, .flag=(signed int *)(void *)0, .val=112 },
    { .name="debug", .has_arg=0, .flag=(signed int *)(void *)0, .val=100 },
    { .name="version", .has_arg=0, .flag=(signed int *)(void *)0, .val=86 },
    { .name="mlockall", .has_arg=0, .flag=(signed int *)(void *)0, .val=109 },
    { .name="help", .has_arg=0, .flag=(signed int *)(void *)0, .val=104 },
    { .name=(const char *)(void *)0, .has_arg=0, .flag=(signed int *)(void *)0,
    .val=0 } };
// policy
// file src/pi_tests/pi_stress.c line 173
signed int policy = 1;
// prompt
// file src/pi_tests/pi_stress.c line 127
signed int prompt = 0;
// quiet
// file src/pi_tests/pi_stress.c line 124
signed int quiet = 0;
// report_interval
// file src/pi_tests/pi_stress.c line 130
unsigned long int report_interval = (unsigned long int)(0.75 * (double)1000000);
// sa_initialized
// file src/pi_tests/pi_stress.c line 186
unsigned int sa_initialized;
// shutdown
// file src/pi_tests/pi_stress.c line 132
signed int shutdown = 0;
// shutdown_mtx
// file src/pi_tests/pi_stress.c line 133
union anonymous$3 shutdown_mtx;
// start
// file src/pi_tests/pi_stress.c line 109
signed long int start;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// test_cpu_mask
// file src/pi_tests/pi_stress.c line 171
struct anonymous test_cpu_mask;
// tracer_buffer
// file src/lib/rt-utils.c line 113
static char *tracer_buffer;
// tracer_list
// file src/lib/rt-utils.c line 112
static char **tracer_list;
// uniprocessor
// file src/pi_tests/pi_stress.c line 142
signed int uniprocessor = 0;
// verbose
// file src/pi_tests/pi_stress.c line 119
signed int verbose = 0;

// __strsep_1c
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1199
static inline char * __strsep_1c(char **__s, char __reject)
{
  char *__retval = *__s;
  char *return_value___builtin_strchr$2;
  char *tmp_post$1;
  if(!(__retval == ((char *)NULL)))
  {
    return_value___builtin_strchr$2=__builtin_strchr(__retval, (signed int)__reject);
    *__s = return_value___builtin_strchr$2;
    if(!(*__s == ((char *)NULL)))
    {
      tmp_post$1 = *__s;
      *__s = *__s + 1l;
      *tmp_post$1 = (char)0;
    }

  }

  return __retval;
}

// __strsep_2c
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1209
static inline char * __strsep_2c(char **__s, char __reject1, char __reject2)
{
  char *__retval = *__s;
  _Bool tmp_if_expr$2;
  char *tmp_post$1;
  if(!(__retval == ((char *)NULL)))
  {
    char *__cp = __retval;
    for( ; (_Bool)1; __cp = __cp + 1l)
    {
      if((signed int)*__cp == 0)
      {
        __cp = (char *)(void *)0;
        break;
      }

      if(*__cp == __reject1)
        tmp_if_expr$2 = (_Bool)1;

      else
        tmp_if_expr$2 = *__cp == __reject2 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$2)
      {
        tmp_post$1 = __cp;
        __cp = __cp + 1l;
        *tmp_post$1 = (char)0;
        break;
      }

    }
    *__s = __cp;
  }

  return __retval;
}

// __strsep_3c
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1237
static inline char * __strsep_3c(char **__s, char __reject1, char __reject2, char __reject3)
{
  char *__retval = *__s;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$3;
  char *tmp_post$1;
  if(!(__retval == ((char *)NULL)))
  {
    char *__cp = __retval;
    for( ; (_Bool)1; __cp = __cp + 1l)
    {
      if((signed int)*__cp == 0)
      {
        __cp = (char *)(void *)0;
        break;
      }

      if(*__cp == __reject1)
        tmp_if_expr$2 = (_Bool)1;

      else
        tmp_if_expr$2 = *__cp == __reject2 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$2)
        tmp_if_expr$3 = (_Bool)1;

      else
        tmp_if_expr$3 = *__cp == __reject3 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$3)
      {
        tmp_post$1 = __cp;
        __cp = __cp + 1l;
        *tmp_post$1 = (char)0;
        break;
      }

    }
    *__s = __cp;
  }

  return __retval;
}

// allow_sigterm
// file src/pi_tests/pi_stress.c line 1071
signed int allow_sigterm(void)
{
  signed int status;
  struct anonymous$0 sigset;
  status=sigemptyset(&sigset);
  if(!(status == 0))
  {
    do
    {
      char *return_value_strerror$1;
      return_value_strerror$1=strerror(status);
      err_msg("creating empty signal set: %s\n", return_value_strerror$1);
      have_errors = 1;
    }
    while((_Bool)0);
    return 1;
  }

  else
  {
    status=sigaddset(&sigset, 15);
    if(!(status == 0))
    {
      do
      {
        char *return_value_strerror$2;
        return_value_strerror$2=strerror(status);
        err_msg("adding SIGTERM to signal set: %s\n", return_value_strerror$2);
        have_errors = 1;
      }
      while((_Bool)0);
      return 1;
    }

    else
    {
      status=pthread_sigmask(1, &sigset, (struct anonymous$0 *)(void *)0);
      if(!(status == 0))
      {
        do
        {
          char *return_value_strerror$3;
          return_value_strerror$3=strerror(status);
          err_msg("unblocking SIGTERM: %s\n", return_value_strerror$3);
          have_errors = 1;
        }
        while((_Bool)0);
        return 1;
      }

      else
        return 0;
    }
  }
}

// banner
// file src/pi_tests/pi_stress.c line 1409
void banner(void)
{
  if(quiet == 0)
  {
    printf("Starting PI Stress Test\n");
    printf("Number of thread groups: %d\n", ngroups);
    if(duration >= 0)
      printf("Duration of test run: %d seconds\n", duration);

    else
      printf("Duration of test run: infinite\n");
    if(!(inversions >= 0))
      printf("Number of inversions per group: unlimited\n");

    else
      printf("Number of inversions per group: %d\n", inversions);
    print_sched_attr("Admin", &admin_sa);
    printf("%d groups of 3 threads will be created\n", ngroups);
    print_sched_attr("High", &high_sa);
    print_sched_attr("Med", &med_sa);
    print_sched_attr("Low", &low_sa);
    printf("\n");
  }

}

// barrier_init
// file src/pi_tests/pi_stress.c line 1443
signed int barrier_init(union anonymous$1 *b, const union anonymous$2 *attr, unsigned int count, const char *name)
{
  signed int status;
  status=pthread_barrier_init(b, attr, count);
  if(!(status == 0))
  {
    do
    {
      err_msg("barrier_init: failed to initialize: %s\n", name);
      have_errors = 1;
    }
    while((_Bool)0);
    do
    {
      err_msg("status = %d\n", status);
      have_errors = 1;
    }
    while((_Bool)0);
    return 1;
  }

  else
    return 0;
}

// block_signals
// file src/pi_tests/pi_stress.c line 1051
signed int block_signals(void)
{
  signed int status;
  struct anonymous$0 sigset;
  status=sigfillset(&sigset);
  if(!(status == 0))
  {
    do
    {
      char *return_value_strerror$1;
      return_value_strerror$1=strerror(status);
      err_msg("setting up full signal set %s\n", return_value_strerror$1);
      have_errors = 1;
    }
    while((_Bool)0);
    return 1;
  }

  else
  {
    status=pthread_sigmask(0, &sigset, (struct anonymous$0 *)(void *)0);
    if(!(status == 0))
    {
      do
      {
        char *return_value_strerror$2;
        return_value_strerror$2=strerror(status);
        err_msg("setting signal mask: %s\n", return_value_strerror$2);
        have_errors = 1;
      }
      while((_Bool)0);
      return 1;
    }

    else
      return 0;
  }
}

// check_privs
// file src/lib/rt-utils.c line 251
signed int check_privs(void)
{
  signed int check_privs$$1$$policy;
  check_privs$$1$$policy=sched_getscheduler(0);
  struct sched_param param;
  struct sched_param old_param;
  if(check_privs$$1$$policy == 1 || check_privs$$1$$policy == 2)
    return 0;

  else
  {
    signed int return_value_sched_getparam$1;
    return_value_sched_getparam$1=sched_getparam(0, &old_param);
    if(!(return_value_sched_getparam$1 == 0))
    {
      fprintf(stderr, "unable to get scheduler parameters\n");
      return 1;
    }

    else
    {
      param = old_param;
      param.__sched_priority = 1;
      signed int return_value_sched_setscheduler$2;
      return_value_sched_setscheduler$2=sched_setscheduler(0, 1, &param);
      if(!(return_value_sched_setscheduler$2 == 0))
      {
        fprintf(stderr, "Unable to change scheduling policy!\n");
        fprintf(stderr, "Probably missing capabilities, either run as root or increase RLIMIT_RTPRIO limits.\n");
        return 1;
      }

      else
      {
        signed int return_value_sched_setscheduler$3;
        return_value_sched_setscheduler$3=sched_setscheduler(0, check_privs$$1$$policy, &old_param);
        return return_value_sched_setscheduler$3;
      }
    }
  }
}

// create_group
// file src/pi_tests/pi_stress.c line 1176
signed int create_group(struct group_parameters *group)
{
  signed int status;
  union pthread_attr_t thread_attr;
  struct anonymous mask;
  status=initialize_group(group);
  if(!(status == 0))
  {
    do
    {
      err_msg("initializing group %d\n", group->id);
      have_errors = 1;
    }
    while((_Bool)0);
    return 1;
  }

  else
  {
    do
      __builtin_memset((void *)&mask, 0, sizeof(struct anonymous) /*128ul*/ );
    while((_Bool)0);
    unsigned long int __cpu = (unsigned long int)group->cpu;
    if(!(__cpu / 8ul >= sizeof(struct anonymous) /*128ul*/ ))
      ((unsigned long int *)(&mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] = ((unsigned long int *)(&mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] | (unsigned long int)1 << __cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ );

    else
      (unsigned long int)0;
    do
      if(!(debugging == 0))
        debug("group %d bound to cpu %ld\n", group->id, group->cpu);

    while((_Bool)0);
    do
      if(!(debugging == 0))
        debug("creating low priority thread\n");

    while((_Bool)0);
    signed int return_value_setup_thread_attr$1;
    return_value_setup_thread_attr$1=setup_thread_attr(&thread_attr, &low_sa, &mask);
    if(!(return_value_setup_thread_attr$1 == 0))
      return 1;

    else
    {
      status=pthread_create(&group->low_tid, &thread_attr, low_priority, (void *)group);
      if(!(status == 0))
      {
        do
        {
          char *return_value_strerror$2;
          return_value_strerror$2=strerror(status);
          err_msg("creating low_priority thread: %s\n", return_value_strerror$2);
          have_errors = 1;
        }
        while((_Bool)0);
        return 1;
      }

      else
      {
        do
          if(!(debugging == 0))
            debug("creating medium priority thread\n");

        while((_Bool)0);
        signed int return_value_setup_thread_attr$3;
        return_value_setup_thread_attr$3=setup_thread_attr(&thread_attr, &med_sa, &mask);
        if(!(return_value_setup_thread_attr$3 == 0))
          return 1;

        else
        {
          status=pthread_create(&group->med_tid, &thread_attr, med_priority, (void *)group);
          if(!(status == 0))
          {
            do
            {
              char *return_value_strerror$4;
              return_value_strerror$4=strerror(status);
              err_msg("creating med_priority thread: %s\n", return_value_strerror$4);
              have_errors = 1;
            }
            while((_Bool)0);
            return 1;
          }

          else
          {
            do
              if(!(debugging == 0))
                debug("creating high priority thread\n");

            while((_Bool)0);
            signed int return_value_setup_thread_attr$5;
            return_value_setup_thread_attr$5=setup_thread_attr(&thread_attr, &high_sa, &mask);
            if(!(return_value_setup_thread_attr$5 == 0))
              return 1;

            else
            {
              status=pthread_create(&group->high_tid, &thread_attr, high_priority, (void *)group);
              if(!(status == 0))
              {
                do
                {
                  char *return_value_strerror$6;
                  return_value_strerror$6=strerror(status);
                  err_msg("creating high_priority thread: %s\n", return_value_strerror$6);
                  have_errors = 1;
                }
                while((_Bool)0);
                set_shutdown_flag();
                return 1;
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

// debug
// file src/include/error.h line 13
void debug(char *fmt, ...)
{
  void **ap = (void **)&fmt;
  fputs("DEBUG: ", stderr);
  err_doit(0, fmt, ap);
  ap = ((void **)NULL);
}

// err_doit
// file src/lib/error.c line 90
void err_doit(signed int err, const char *fmt, void **ap)
{
  vfprintf(stderr, fmt, ap);
  char *return_value_strerror$1;
  if(!(err == 0))
  {
    return_value_strerror$1=strerror(err);
    fprintf(stderr, ": %s\n", return_value_strerror$1);
  }

  goto __CPROVER_DUMP_L2;

__CPROVER_DUMP_L2:
  ;
}

// err_exit
// file src/lib/error.c line 10
void err_exit(signed int err, char *fmt, ...)
{
  void **ap = (void **)&fmt;
  err_doit(err, fmt, ap);
  ap = ((void **)NULL);
  exit(err);
}

// err_msg
// file src/include/error.h line 10
void err_msg(char *fmt, ...)
{
  void **ap = (void **)&fmt;
  err_doit(0, fmt, ap);
  ap = ((void **)NULL);
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// err_msg_n
// file src/lib/error.c line 30
void err_msg_n(signed int err, char *fmt, ...)
{
  void **ap = (void **)&fmt;
  err_doit(err, fmt, ap);
  ap = ((void **)NULL);
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// err_quit
// file src/lib/error.c line 40
void err_quit(char *fmt, ...)
{
  void **ap = (void **)&fmt;
  err_doit(0, fmt, ap);
  ap = ((void **)NULL);
  exit(1);
}

// event_disable
// file src/lib/rt-utils.c line 243
signed int event_disable(char *event)
{
  char path[256l];
  sprintf(path, "events/%s/enable", event);
  signed int return_value_setevent$1;
  return_value_setevent$1=setevent(path, "0");
  return return_value_setevent$1;
}

// event_disable_all
// file src/lib/rt-utils.c line 230
signed int event_disable_all(void)
{
  signed int return_value_setevent$1;
  return_value_setevent$1=setevent("events/enable", "0");
  return return_value_setevent$1;
}

// event_enable
// file src/lib/rt-utils.c line 235
signed int event_enable(char *event)
{
  char path[256l];
  sprintf(path, "events/%s/enable", event);
  signed int return_value_setevent$1;
  return_value_setevent$1=setevent(path, "1");
  return return_value_setevent$1;
}

// event_enable_all
// file src/lib/rt-utils.c line 225
signed int event_enable_all(void)
{
  signed int return_value_setevent$1;
  return_value_setevent$1=setevent("events/enable", "1");
  return return_value_setevent$1;
}

// fatal
// file src/lib/error.c line 79
void fatal(char *fmt, ...)
{
  void **ap = (void **)&fmt;
  fputs("FATAL: ", stderr);
  err_doit(0, fmt, ap);
  ap = ((void **)NULL);
  exit(1);
}

// get_debugfileprefix
// file src/lib/rt-utils.c line 30
char * get_debugfileprefix(void)
{
  char type[100l];
  struct _IO_FILE *fp;
  signed int size;
  signed int found = 0;
  struct stat s;
  signed int return_value_stat$1;
  signed int return_value_stat$2;
  signed int return_value_fscanf$3;
  signed int tmp_statement_expression$4;
  signed int tmp_statement_expression$8;
  signed int tmp_statement_expression$6;
  unsigned long int return_value_strlen$10;
  if((signed int)debugfileprefix[0l] == 0)
  {
    return_value_stat$1=stat("/sys/kernel/debug/tracing", &s);
    if(return_value_stat$1 == 0)
    {
      if(!((61440u & s.st_mode) == 16384u))
        goto __CPROVER_DUMP_L1;

      strcpy(debugfileprefix, "/sys/kernel/debug/tracing/");
    }

    else
    {

    __CPROVER_DUMP_L1:
      ;
      return_value_stat$2=stat("/debug/tracing", &s);
      if(return_value_stat$2 == 0)
      {
        if(!((61440u & s.st_mode) == 16384u))
          goto __CPROVER_DUMP_L2;

        strcpy(debugfileprefix, "/debug/tracing/");
      }

      else
      {

      __CPROVER_DUMP_L2:
        ;
        fp=fopen("/proc/mounts", "r");
        if(!(fp == ((struct _IO_FILE *)NULL)))
        {
          do
          {
            return_value_fscanf$3=fscanf(fp, "%*s %256s %99s %*s %*d %*d\n", (const void *)debugfileprefix, (const void *)type);
            if(!(return_value_fscanf$3 == 2))
              break;

            unsigned long int get_debugfileprefix$$1$$3$$1$$__s1_len;
            unsigned long int get_debugfileprefix$$1$$3$$1$$__s2_len;
            signed int return_value___builtin_strcmp$5;
            return_value___builtin_strcmp$5=__builtin_strcmp(type, "debugfs");
            tmp_statement_expression$4 = return_value___builtin_strcmp$5;
            if(tmp_statement_expression$4 == 0)
            {
              found = 1;
              break;
            }

            unsigned long int __s1_len;
            unsigned long int __s2_len;
            signed int return_value___builtin_strcmp$9;
            return_value___builtin_strcmp$9=__builtin_strcmp(debugfileprefix, "/sys/kernel/debug");
            tmp_statement_expression$8 = return_value___builtin_strcmp$9;
            if(tmp_statement_expression$8 == 0)
            {
              unsigned long int get_debugfileprefix$$1$$3$$4$$__s1_len;
              unsigned long int get_debugfileprefix$$1$$3$$4$$__s2_len;
              signed int return_value___builtin_strcmp$7;
              return_value___builtin_strcmp$7=__builtin_strcmp(type, "systemd");
              tmp_statement_expression$6 = return_value___builtin_strcmp$7;
              if(tmp_statement_expression$6 == 0)
              {
                found = 1;
                break;
              }

            }

          }
          while((_Bool)1);
          fclose(fp);
          if(found == 0)
            debugfileprefix[(signed long int)0] = (char)0;

          else
          {
            return_value_strlen$10=strlen(debugfileprefix);
            size = (signed int)(sizeof(char [256l]) /*256ul*/  - return_value_strlen$10);
            __builtin_strncat(debugfileprefix, "/tracing/", (unsigned long int)size);
          }
        }

      }
    }
  }


out:
  ;
  return debugfileprefix;
}

// get_tracers
// file src/lib/rt-utils.c line 121
signed int get_tracers(char ***list)
{
  signed int ret;
  struct _IO_FILE *fp;
  char buffer[1024l];
  char *prefix;
  prefix=get_debugfileprefix();
  char *tmpbuf = (char *)(void *)0;
  char *ptr;
  signed int tmpsz = 0;
  unsigned long int return_value_fread$2;
  signed int tmp_post$5;
  if(!(tracer_list == ((char **)NULL)))
  {
    *list = tracer_list;
    return num_tracers;
  }

  else
  {
    sprintf(buffer, "%savailable_tracers", prefix);
    fp=fopen(buffer, "r");
    if(fp == ((struct _IO_FILE *)NULL))
      fatal("Can't open %s for reading\n", (const void *)buffer);

    void *return_value_malloc$1;
    return_value_malloc$1=malloc((unsigned long int)1024);
    tmpbuf = (char *)return_value_malloc$1;
    ptr = tmpbuf;
    if(ptr == ((char *)NULL))
      fatal("error allocating initial space for tracer list\n");

    do
    {
      return_value_fread$2=fread((void *)buffer, sizeof(char) /*1ul*/ , (unsigned long int)1024, fp);
      ret = (signed int)return_value_fread$2;
      if(ret == 0)
        break;

      if(!(tmpbuf + (signed long int)tmpsz >= ptr + (signed long int)ret + 1l))
      {
        void *return_value_realloc$3;
        return_value_realloc$3=realloc((void *)tmpbuf, (unsigned long int)(tmpsz + 1024));
        tmpbuf = (char *)return_value_realloc$3;
        if(tmpbuf == ((char *)NULL))
          fatal("error allocating space for list of valid tracers\n");

        tmpsz = tmpsz + 1024;
      }

      __builtin_strncpy(ptr, buffer, (unsigned long int)ret);
      ptr = ptr + (signed long int)ret;
    }
    while((_Bool)1);
    fclose(fp);
    if(tmpsz == 0)
      fatal("error reading available tracers\n");

    tracer_buffer = tmpbuf;
    void *return_value_malloc$4;
    return_value_malloc$4=malloc(sizeof(char *) /*8ul*/ );
    tracer_list = (char **)return_value_malloc$4;
    if(tracer_list == ((char **)NULL))
      fatal("error allocatinging tracer list buffer\n");

    ptr=strtok(tmpbuf, " \t\n\r");
    do
    {
      tmp_post$5 = num_tracers;
      num_tracers = num_tracers + 1;
      tracer_list[(signed long int)tmp_post$5] = ptr;
      void *return_value_realloc$6;
      return_value_realloc$6=realloc((void *)tracer_list, sizeof(char *) /*8ul*/  * (unsigned long int)(num_tracers + 1));
      tracer_list = (char **)return_value_realloc$6;
      tracer_list[(signed long int)num_tracers] = (char *)(void *)0;
      ptr=strtok((char *)(void *)0, " \t\n\r");
    }
    while(!(ptr == ((char *)NULL)));
    *list = tracer_list;
    return num_tracers;
  }
}

// getchar
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 44
static inline signed int getchar(void)
{
  signed int return_value__IO_getc$1;
  return_value__IO_getc$1=_IO_getc(stdin);
  return return_value__IO_getc$1;
}

// gettid
// file src/include/rt-utils.h line 25
signed int gettid(void)
{
  signed long int return_value_syscall$1;
  return_value_syscall$1=syscall((signed long int)186);
  return (signed int)return_value_syscall$1;
}

// high_priority
// file src/pi_tests/pi_stress.c line 883
void * high_priority(void *arg)
{
  signed int status;
  signed int unbounded;
  unsigned long int count = (unsigned long int)0;
  struct group_parameters *p = (struct group_parameters *)arg;
  union anonymous$1 *loop_barr = &p->loop_barr;
  union anonymous$3 *loop_mtx = &p->loop_mtx;
  signed int *loop = &p->loop;
  struct anonymous cpu_mask;
  signed int i;
  if(high_sa.sched_policy == 6u)
  {
    do
      __builtin_memset((void *)&cpu_mask, 0, sizeof(struct anonymous) /*128ul*/ );
    while((_Bool)0);
    i = 0;
    for( ; !((signed long int)i >= num_processors); i = i + 1)
    {
      unsigned long int __cpu = (unsigned long int)i;
      if(!(__cpu / 8ul >= sizeof(struct anonymous) /*128ul*/ ))
        ((unsigned long int *)(&cpu_mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] = ((unsigned long int *)(&cpu_mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] | (unsigned long int)1 << __cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ );

      else
        (unsigned long int)0;
    }
    status=sched_setaffinity(0, sizeof(struct anonymous) /*128ul*/ , &cpu_mask);
    if(!(status >= 0))
    {
      do
      {
        err_msg("high_priority[%d]: set cpu affinity*dl): %x\n", p->id, status);
        have_errors = 1;
      }
      while((_Bool)0);
      return (void *)0;
    }

    signed int return_value_gettid$1;
    return_value_gettid$1=gettid();
    status=sched_setattr(return_value_gettid$1, &high_sa, (unsigned int)0);
    if(!(status >= 0))
    {
      do
      {
        err_msg("high_priority[%d]: sched_setattr(dl): %x\n", p->id, status);
        have_errors = 1;
      }
      while((_Bool)0);
      return (void *)0;
    }

  }

  allow_sigterm();
  signed int return_value_verify_cpu$2;
  return_value_verify_cpu$2=verify_cpu((signed int)p->cpu);
  unsigned long int tmp_post$3;
  if(!(return_value_verify_cpu$2 == 0))
  {
    do
    {
      err_msg("high_priority[%d]: not bound to %ld\n", p->id, p->cpu);
      have_errors = 1;
    }
    while((_Bool)0);
    return (void *)0;
  }

  else
  {
    do
      if(!(debugging == 0))
        debug("high_priority[%d]: entering ready state\n", p->id);

    while((_Bool)0);
    status=pthread_barrier_wait(&all_threads_ready);
    if(!(status == 0) && !(status == -1))
    {
      do
      {
        err_msg("high_priority[%d]: pthread_barrier_wait(all_threads_ready): %x", p->id, status);
        have_errors = 1;
      }
      while((_Bool)0);
      return (void *)0;
    }

    else
    {
      unbounded = (signed int)(p->inversions < 0);
      do
        if(!(debugging == 0))
          debug("high_priority[%d]: starting inversion loop\n", p->id);

      while((_Bool)0);
      for( ; (_Bool)1; p->watchdog = p->watchdog + 1)
      {
        if(unbounded == 0)
        {
          if(p->total >= (unsigned long int)p->inversions)
            set_shutdown_flag();

        }

        pthread_mutex_lock(loop_mtx);
        if(*loop == 0)
        {
          pthread_mutex_unlock(loop_mtx);
          break;
        }

        pthread_mutex_unlock(loop_mtx);
        status=pthread_barrier_wait(loop_barr);
        if(!(status == 0) && !(status == -1))
        {
          do
          {
            err_msg("%s[%d]: pthread_barrier_wait(loop): %x\n", (const void *)"high_priority", p->id, status);
            have_errors = 1;
          }
          while((_Bool)0);
          return (void *)0;
        }

        if(status == -1)
        {
          pthread_mutex_lock(&shutdown_mtx);
          if(!(shutdown == 0))
          {
            pthread_mutex_lock(loop_mtx);
            *loop = 0;
            pthread_mutex_unlock(loop_mtx);
          }

          pthread_mutex_unlock(&shutdown_mtx);
        }

        do
          if(!(debugging == 0))
          {
            tmp_post$3 = count;
            count = count + 1ul;
            debug("high_priority[%d]: entering start state (%d)\n", p->id, tmp_post$3);
          }

        while((_Bool)0);
        status=pthread_barrier_wait(&p->start_barrier);
        if(!(status == 0) && !(status == -1))
        {
          do
          {
            err_msg("high_priority[%d]: pthread_barrier_wait(start): %x", p->id, status);
            have_errors = 1;
          }
          while((_Bool)0);
          return (void *)0;
        }

        do
          if(!(debugging == 0))
            debug("high_priority[%d]: entering running state\n", p->id);

        while((_Bool)0);
        status=pthread_barrier_wait(&p->locked_barrier);
        if(!(status == 0) && !(status == -1))
        {
          do
          {
            err_msg("high_priority[%d]: pthread_barrier_wait(running): %x", p->id, status);
            have_errors = 1;
          }
          while((_Bool)0);
          return (void *)0;
        }

        do
          if(!(debugging == 0))
            debug("high_priority[%d]: locking mutex\n", p->id);

        while((_Bool)0);
        pthread_mutex_lock(&p->mutex);
        do
          if(!(debugging == 0))
            debug("high_priority[%d]: got mutex\n", p->id);

        while((_Bool)0);
        do
          if(!(debugging == 0))
            debug("high_priority[%d]: unlocking mutex\n", p->id);

        while((_Bool)0);
        pthread_mutex_unlock(&p->mutex);
        do
          if(!(debugging == 0))
            debug("high_priority[%d]: entering finish state\n", p->id);

        while((_Bool)0);
        status=pthread_barrier_wait(&p->finish_barrier);
        if(!(status == 0) && !(status == -1))
        {
          do
          {
            err_msg("high_priority[%d]: pthread_barrier_wait(finish): %x", status);
            have_errors = 1;
          }
          while((_Bool)0);
          return (void *)0;
        }

        p->total = p->total + 1ul;
      }
      set_shutdown_flag();
      do
        if(!(debugging == 0))
          debug("high_priority[%d]: entering done barrier\n", p->id);

      while((_Bool)0);
      if(have_errors == 0)
      {
        status=pthread_barrier_wait(&all_threads_done);
        if(status == 0 || status == -1)
          goto __CPROVER_DUMP_L44;

        do
        {
          err_msg("high_priority[%d]: pthread_barrier_wait(all_threads_done): %x", p->id, status);
          have_errors = 1;
        }
        while((_Bool)0);
        return (void *)0;
      }

      else
      {

      __CPROVER_DUMP_L44:
        ;
        do
          if(!(debugging == 0))
            debug("high_priority[%d]: exiting\n", p->id);

        while((_Bool)0);
        return (void *)0;
      }
    }
  }
}

// info
// file src/include/error.h line 14
void info(char *fmt, ...)
{
  void **ap = (void **)&fmt;
  fputs("INFO: ", stderr);
  err_doit(0, fmt, ap);
  ap = ((void **)NULL);
}

// initialize_group
// file src/pi_tests/pi_stress.c line 1107
signed int initialize_group(struct group_parameters *group)
{
  signed int status;
  union anonymous$2 mutex_attr;
  group->inversions = inversions;
  status=pthread_mutexattr_init(&mutex_attr);
  if(!(status == 0))
  {
    do
    {
      char *return_value_strerror$1;
      return_value_strerror$1=strerror(status);
      err_msg("initializing mutex attribute: %s\n", return_value_strerror$1);
      have_errors = 1;
    }
    while((_Bool)0);
    return 1;
  }

  else
  {
    status=pthread_mutexattr_setprotocol(&mutex_attr, 1);
    if(!(status == 0))
    {
      do
      {
        char *return_value_strerror$2;
        return_value_strerror$2=strerror(status);
        err_msg("setting mutex attribute policy: %s\n", return_value_strerror$2);
        have_errors = 1;
      }
      while((_Bool)0);
      return 1;
    }

    else
    {
      status=pthread_mutex_init(&group->mutex, &mutex_attr);
      if(!(status == 0))
      {
        do
        {
          char *return_value_strerror$3;
          return_value_strerror$3=strerror(status);
          err_msg("initializing mutex: %s\n", return_value_strerror$3);
          have_errors = 1;
        }
        while((_Bool)0);
        return 1;
      }

      else
      {
        signed int return_value_barrier_init$4;
        return_value_barrier_init$4=barrier_init(&group->start_barrier, (const union anonymous$2 *)(void *)0, (unsigned int)3, "start_barrier");
        if(!(return_value_barrier_init$4 == 0))
          return 1;

        else
        {
          signed int return_value_barrier_init$5;
          return_value_barrier_init$5=barrier_init(&group->locked_barrier, (const union anonymous$2 *)(void *)0, (unsigned int)2, "locked_barrier");
          if(!(return_value_barrier_init$5 == 0))
            return 1;

          else
          {
            signed int return_value_barrier_init$6;
            return_value_barrier_init$6=barrier_init(&group->elevate_barrier, (const union anonymous$2 *)(void *)0, (unsigned int)2, "elevate_barrier");
            if(!(return_value_barrier_init$6 == 0))
              return 1;

            else
            {
              signed int return_value_barrier_init$7;
              return_value_barrier_init$7=barrier_init(&group->finish_barrier, (const union anonymous$2 *)(void *)0, (unsigned int)3, "finish_barrier");
              if(!(return_value_barrier_init$7 == 0))
                return 1;

              else
              {
                signed int return_value_barrier_init$8;
                return_value_barrier_init$8=barrier_init(&group->loop_barr, (const union anonymous$2 *)(void *)0, (unsigned int)3, "loop_barrier");
                if(!(return_value_barrier_init$8 == 0))
                  return 1;

                else
                {
                  status=pthread_mutex_init(&group->loop_mtx, (const union anonymous$2 *)(void *)0);
                  if(!(status == 0))
                  {
                    do
                    {
                      err_msg("pthread_mutex_init, status = %d\n", status);
                      have_errors = 1;
                    }
                    while((_Bool)0);
                    return 1;
                  }

                  else
                  {
                    status=pthread_mutex_lock(&group->loop_mtx);
                    if(!(status == 0))
                    {
                      do
                      {
                        err_msg("pthread_mutex_lock, status = %d\n", status);
                        have_errors = 1;
                      }
                      while((_Bool)0);
                      return 1;
                    }

                    else
                    {
                      group->loop = 1;
                      status=pthread_mutex_unlock(&group->loop_mtx);
                      if(!(status == 0))
                      {
                        do
                        {
                          err_msg("pthread_mutex_unlock, status = %d\n", status);
                          have_errors = 1;
                        }
                        while((_Bool)0);
                        return 1;
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
    }
  }
}

// low_priority
// file src/pi_tests/pi_stress.c line 645
void * low_priority(void *arg)
{
  signed int status;
  signed int unbounded;
  unsigned long int count = (unsigned long int)0;
  struct group_parameters *p = (struct group_parameters *)arg;
  union anonymous$1 *loop_barr = &p->loop_barr;
  union anonymous$3 *loop_mtx = &p->loop_mtx;
  signed int *loop = &p->loop;
  allow_sigterm();
  signed int return_value_verify_cpu$1;
  return_value_verify_cpu$1=verify_cpu((signed int)p->cpu);
  unsigned long int tmp_post$2;
  if(!(return_value_verify_cpu$1 == 0))
  {
    do
    {
      err_msg("low_priority[%d]: not bound to %ld\n", p->id, p->cpu);
      have_errors = 1;
    }
    while((_Bool)0);
    return (void *)0;
  }

  else
  {
    do
      if(!(debugging == 0))
        debug("low_priority[%d]: entering ready state\n", p->id);

    while((_Bool)0);
    status=pthread_barrier_wait(&all_threads_ready);
    if(!(status == 0) && !(status == -1))
    {
      do
      {
        err_msg("low_priority[%d]: pthread_barrier_wait(all_threads_ready): %x", p->id, status);
        have_errors = 1;
      }
      while((_Bool)0);
      return (void *)0;
    }

    else
    {
      unbounded = (signed int)(p->inversions < 0);
      do
        if(!(debugging == 0))
          debug("low_priority[%d]: starting inversion loop\n", p->id);

      while((_Bool)0);
      while((_Bool)1)
      {
        if(unbounded == 0)
        {
          if(p->total >= (unsigned long int)p->inversions)
            set_shutdown_flag();

        }

        pthread_mutex_lock(loop_mtx);
        if(*loop == 0)
        {
          pthread_mutex_unlock(loop_mtx);
          break;
        }

        pthread_mutex_unlock(loop_mtx);
        status=pthread_barrier_wait(loop_barr);
        if(!(status == 0) && !(status == -1))
        {
          do
          {
            err_msg("%s[%d]: pthread_barrier_wait(loop): %x\n", (const void *)"low_priority", p->id, status);
            have_errors = 1;
          }
          while((_Bool)0);
          return (void *)0;
        }

        if(status == -1)
        {
          pthread_mutex_lock(&shutdown_mtx);
          if(!(shutdown == 0))
          {
            pthread_mutex_lock(loop_mtx);
            *loop = 0;
            pthread_mutex_unlock(loop_mtx);
          }

          pthread_mutex_unlock(&shutdown_mtx);
        }

        do
          if(!(debugging == 0))
          {
            tmp_post$2 = count;
            count = count + 1ul;
            debug("low_priority[%d]: entering start wait (%d)\n", p->id, tmp_post$2);
          }

        while((_Bool)0);
        status=pthread_barrier_wait(&p->start_barrier);
        if(!(status == 0) && !(status == -1))
        {
          do
          {
            err_msg("low_priority[%d]: pthread_barrier_wait(start): %x\n", p->id, status);
            have_errors = 1;
          }
          while((_Bool)0);
          return (void *)0;
        }

        do
          if(!(debugging == 0))
            debug("low_priority[%d]: claiming mutex\n", p->id);

        while((_Bool)0);
        pthread_mutex_lock(&p->mutex);
        do
          if(!(debugging == 0))
            debug("low_priority[%d]: mutex locked\n", p->id);

        while((_Bool)0);
        do
          if(!(debugging == 0))
            debug("low_priority[%d]: entering locked wait\n", p->id);

        while((_Bool)0);
        status=pthread_barrier_wait(&p->locked_barrier);
        if(!(status == 0) && !(status == -1))
        {
          do
          {
            err_msg("low_priority[%d]: pthread_barrier_wait(locked): %x\n", p->id, status);
            have_errors = 1;
          }
          while((_Bool)0);
          do
            if(!(debugging == 0))
              debug("low_priority[%d]: unlocking mutex\n", p->id);

          while((_Bool)0);
          pthread_mutex_unlock(&p->mutex);
          return (void *)0;
        }

        do
          if(!(debugging == 0))
            debug("low_priority[%d]: entering elevated wait\n", p->id);

        while((_Bool)0);
        status=pthread_barrier_wait(&p->elevate_barrier);
        if(!(status == 0) && !(status == -1))
        {
          do
          {
            err_msg("low_priority[%d]: pthread_barrier_wait(elevate): %x\n", p->id, status);
            have_errors = 1;
          }
          while((_Bool)0);
          do
            if(!(debugging == 0))
              debug("low_priority[%d]: unlocking mutex\n", p->id);

          while((_Bool)0);
          pthread_mutex_unlock(&p->mutex);
          return (void *)0;
        }

        do
          if(!(debugging == 0))
            debug("low_priority[%d]: unlocking mutex\n", p->id);

        while((_Bool)0);
        pthread_mutex_unlock(&p->mutex);
        do
          if(!(debugging == 0))
            debug("low_priority[%d]: entering finish wait\n", p->id);

        while((_Bool)0);
        status=pthread_barrier_wait(&p->finish_barrier);
        if(!(status == 0) && !(status == -1))
        {
          do
          {
            err_msg("low_priority[%d]: pthread_barrier_wait(elevate): %x\n", p->id, status);
            have_errors = 1;
          }
          while((_Bool)0);
          return (void *)0;
        }

      }
      set_shutdown_flag();
      do
        if(!(debugging == 0))
          debug("low_priority[%d]: entering done barrier\n", p->id);

      while((_Bool)0);
      status=pthread_barrier_wait(&all_threads_done);
      if(!(status == 0) && !(status == -1))
      {
        do
        {
          err_msg("low_priority[%d]: pthread_barrier_wait(all_threads_done): %x", p->id, status);
          have_errors = 1;
        }
        while((_Bool)0);
        return (void *)0;
      }

      else
      {
        do
          if(!(debugging == 0))
            debug("low_priority[%d]: exiting\n", p->id);

        while((_Bool)0);
        return (void *)0;
      }
    }
  }
}

// main
// file src/pi_tests/pi_stress.c line 260
signed int main(signed int argc, char **argv)
{
  signed int status;
  struct sched_param thread_param;
  signed int i;
  signed int retval = 1;
  signed int core;
  signed int nthreads;
  setvbuf(stdout, (char *)(void *)0, 2, (unsigned long int)0);
  num_processors=sysconf(84);
  ngroups = (signed int)(num_processors == (signed long int)1 ? (signed long int)1 : num_processors - (signed long int)1);
  process_command_line(argc, argv);
  setup_sched_config(policy);
  signed int return_value_mlockall$1;
  signed int tmp_statement_expression$7;
  signed int tmp_if_expr$8;
  signed int tmp_post$9;
  if(!(lockall == 0))
  {
    return_value_mlockall$1=mlockall(1 | 2);
    if(!(return_value_mlockall$1 == -1))
      goto __CPROVER_DUMP_L2;

    do
    {
      err_msg("mlockall failed\n");
      have_errors = 1;
    }
    while((_Bool)0);
    return 1;
  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    thread_param.__sched_priority = (signed int)admin_sa.__sched_priority;
    unsigned long int return_value_pthread_self$2;
    return_value_pthread_self$2=pthread_self();
    status=pthread_setschedparam(return_value_pthread_self$2, (signed int)admin_sa.sched_policy, &thread_param);
    if(!(status == 0))
    {
      do
      {
        err_msg("main: boosting to max priority: 0x%x\n", status);
        have_errors = 1;
      }
      while((_Bool)0);
      return 1;
    }

    else
    {
      block_signals();
      void *return_value_calloc$3;
      return_value_calloc$3=calloc((unsigned long int)ngroups, sizeof(struct group_parameters) /*312ul*/ );
      groups = (struct group_parameters *)return_value_calloc$3;
      if(groups == ((struct group_parameters *)NULL))
      {
        do
        {
          err_msg("main: failed to allocate %d groups\n", ngroups);
          have_errors = 1;
        }
        while((_Bool)0);
        return 1;
      }

      else
      {
        signed int return_value_set_cpu_affinity$4;
        return_value_set_cpu_affinity$4=set_cpu_affinity(&test_cpu_mask, &admin_cpu_mask);
        if(!(return_value_set_cpu_affinity$4 == 0))
          return 1;

        else
        {
          nthreads = ngroups * 3 + 1;
          signed int return_value_barrier_init$5;
          return_value_barrier_init$5=barrier_init(&all_threads_ready, (const union anonymous$2 *)(void *)0, (unsigned int)nthreads, "all_threads_ready");
          if(!(return_value_barrier_init$5 == 0))
            return 1;

          else
          {
            signed int return_value_barrier_init$6;
            return_value_barrier_init$6=barrier_init(&all_threads_done, (const union anonymous$2 *)(void *)0, (unsigned int)nthreads, "all_threads_done");
            if(!(return_value_barrier_init$6 == 0))
              return 1;

            else
            {
              do
                if(!(verbose == 0))
                  info("Creating %d test groups\n", ngroups);

              while((_Bool)0);
              core = 0;
              for( ; !((signed long int)core >= num_processors); core = core + 1)
              {
                unsigned long int __cpu = (unsigned long int)core;
                if(!(__cpu / 8ul >= sizeof(struct anonymous) /*128ul*/ ))
                  tmp_if_expr$8 = (signed int)((((const unsigned long int *)(&test_cpu_mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] & (unsigned long int)1 << __cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ )) != (unsigned long int)0);

                else
                  tmp_if_expr$8 = 0;
                tmp_statement_expression$7 = tmp_if_expr$8;
                if(!(tmp_statement_expression$7 == 0))
                  break;

              }
              i = 0;
              for( ; !(i >= ngroups); i = i + 1)
              {
                (groups + (signed long int)i)->id = i;
                tmp_post$9 = core;
                core = core + 1;
                (groups + (signed long int)i)->cpu = (signed long int)tmp_post$9;
                if((signed long int)core >= num_processors)
                  core = 0;

                signed int return_value_create_group$10;
                return_value_create_group$10=create_group(&groups[(signed long int)i]);
                if(!(return_value_create_group$10 == 0))
                  return 1;

              }
              if(!(prompt == 0))
              {
                printf("Press return to start test: ");
                getchar();
              }

              banner();
              start=time((signed long int *)(void *)0);
              do
                if(!(verbose == 0))
                  info("Releasing all threads\n");

              while((_Bool)0);
              status=pthread_barrier_wait(&all_threads_ready);
              if(!(status == 0) && !(status == -1))
              {
                do
                {
                  err_msg("main: pthread_barrier_wait(all_threads_ready): 0x%x\n", status);
                  have_errors = 1;
                }
                while((_Bool)0);
                set_shutdown_flag();
                return 1;
              }

              else
              {
                reporter((void *)0);
                if(quiet == 0)
                {
                  fputs("\033[1B", stdout);
                  printf("Stopping test\n");
                }

                set_shutdown_flag();
                if(have_errors == 0 && interrupted == 0)
                {
                  do
                    if(!(verbose == 0))
                      info("waiting for all threads to complete\n");

                  while((_Bool)0);
                  status=pthread_barrier_wait(&all_threads_done);
                  if(!(status == 0) && !(status == -1))
                  {
                    do
                    {
                      err_msg("main: pthread_barrier_wait(all_threads_ready): 0x%x\n", status);
                      have_errors = 1;
                    }
                    while((_Bool)0);
                    return 1;
                  }

                  do
                    if(!(verbose == 0))
                      info("All threads terminated!\n");

                  while((_Bool)0);
                  retval = 0;
                }

                else
                  kill(0, 15);
                finish=time((signed long int *)(void *)0);
                summary();
                if(!(lockall == 0))
                  munlockall();

                exit(retval);
              }
            }
          }
        }
      }
    }
  }
}

// med_priority
// file src/pi_tests/pi_stress.c line 779
void * med_priority(void *arg)
{
  signed int status;
  signed int unbounded;
  unsigned long int count = (unsigned long int)0;
  struct group_parameters *p = (struct group_parameters *)arg;
  union anonymous$1 *loop_barr = &p->loop_barr;
  union anonymous$3 *loop_mtx = &p->loop_mtx;
  signed int *loop = &p->loop;
  allow_sigterm();
  signed int return_value_verify_cpu$1;
  return_value_verify_cpu$1=verify_cpu((signed int)p->cpu);
  unsigned long int tmp_post$2;
  if(!(return_value_verify_cpu$1 == 0))
  {
    do
    {
      err_msg("med_priority[%d]: not bound to %ld\n", p->id, p->cpu);
      have_errors = 1;
    }
    while((_Bool)0);
    return (void *)0;
  }

  else
  {
    do
      if(!(debugging == 0))
        debug("med_priority[%d]: entering ready state\n", p->id);

    while((_Bool)0);
    status=pthread_barrier_wait(&all_threads_ready);
    if(!(status == 0) && !(status == -1))
    {
      do
      {
        err_msg("med_priority[%d]: pthread_barrier_wait(all_threads_ready): %x", p->id, status);
        have_errors = 1;
      }
      while((_Bool)0);
      return (void *)0;
    }

    else
    {
      unbounded = (signed int)(p->inversions < 0);
      do
        if(!(debugging == 0))
          debug("med_priority[%d]: starting inversion loop\n", p->id);

      while((_Bool)0);
      while((_Bool)1)
      {
        if(unbounded == 0)
        {
          if(p->total >= (unsigned long int)p->inversions)
            set_shutdown_flag();

        }

        pthread_mutex_lock(loop_mtx);
        if(*loop == 0)
        {
          pthread_mutex_unlock(loop_mtx);
          break;
        }

        pthread_mutex_unlock(loop_mtx);
        status=pthread_barrier_wait(loop_barr);
        if(!(status == 0) && !(status == -1))
        {
          do
          {
            err_msg("%s[%d]: pthread_barrier_wait(loop): %x\n", (const void *)"med_priority", p->id, status);
            have_errors = 1;
          }
          while((_Bool)0);
          return (void *)0;
        }

        if(status == -1)
        {
          pthread_mutex_lock(&shutdown_mtx);
          if(!(shutdown == 0))
          {
            pthread_mutex_lock(loop_mtx);
            *loop = 0;
            pthread_mutex_unlock(loop_mtx);
          }

          pthread_mutex_unlock(&shutdown_mtx);
        }

        do
          if(!(debugging == 0))
          {
            tmp_post$2 = count;
            count = count + 1ul;
            debug("med_priority[%d]: entering start state (%d)\n", p->id, tmp_post$2);
          }

        while((_Bool)0);
        status=pthread_barrier_wait(&p->start_barrier);
        if(!(status == 0) && !(status == -1))
        {
          do
          {
            err_msg("med_priority[%d]: pthread_barrier_wait(start): %x", p->id, status);
            have_errors = 1;
          }
          while((_Bool)0);
          return (void *)0;
        }

        do
          if(!(debugging == 0))
            debug("med_priority[%d]: entering elevate state\n", p->id);

        while((_Bool)0);
        status=pthread_barrier_wait(&p->elevate_barrier);
        if(!(status == 0) && !(status == -1))
        {
          do
          {
            err_msg("med_priority[%d]: pthread_barrier_wait(elevate): %x", p->id, status);
            have_errors = 1;
          }
          while((_Bool)0);
          return (void *)0;
        }

        do
          if(!(debugging == 0))
            debug("med_priority[%d]: entering finish state\n", p->id);

        while((_Bool)0);
        status=pthread_barrier_wait(&p->finish_barrier);
        if(!(status == 0) && !(status == -1))
        {
          do
          {
            err_msg("med_priority[%d]: pthread_barrier_wait(finished): %x", p->id, status);
            have_errors = 1;
          }
          while((_Bool)0);
          return (void *)0;
        }

      }
      set_shutdown_flag();
      do
        if(!(debugging == 0))
          debug("med_priority[%d]: entering done barrier\n", p->id);

      while((_Bool)0);
      if(have_errors == 0)
      {
        status=pthread_barrier_wait(&all_threads_done);
        if(status == 0 || status == -1)
          goto __CPROVER_DUMP_L28;

        do
        {
          err_msg("med_priority[%d]: pthread_barrier_wait(all_threads_done): %x", p->id, status);
          have_errors = 1;
        }
        while((_Bool)0);
        return (void *)0;
      }

      else
      {

      __CPROVER_DUMP_L28:
        ;
        do
          if(!(debugging == 0))
            debug("med_priority[%d]: exiting\n", p->id);

        while((_Bool)0);
        return (void *)0;
      }
    }
  }
}

// mount_debugfs
// file src/lib/rt-utils.c line 86
signed int mount_debugfs(char *path)
{
  char *mountpoint = path;
  char cmd[256l];
  char *prefix;
  signed int ret;
  prefix=get_debugfileprefix();
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(prefix);
  if(!(return_value_strlen$1 == 0ul))
  {
    info("debugfs mountpoint: %s\n", prefix);
    return 0;
  }

  else
  {
    if(mountpoint == ((char *)NULL))
      mountpoint = "/sys/kernel/debug";

    sprintf(cmd, "mount -t debugfs debugfs %s", mountpoint);
    ret=system(cmd);
    if(!(ret == 0))
    {
      signed int *return_value___errno_location$2;
      return_value___errno_location$2=__errno_location();
      char *return_value_strerror$3;
      return_value_strerror$3=strerror(*return_value___errno_location$2);
      fprintf(stderr, "Error mounting debugfs at %s: %s\n", mountpoint, return_value_strerror$3);
      return -1;
    }

    return 0;
  }
}

// parse_signed
// file src/pi_tests/pi_stress.c line 1247
signed long int parse_signed(const char *str)
{
  signed long int n;
  char *p;
  signed int *return_value___errno_location$1;
  return_value___errno_location$1=__errno_location();
  *return_value___errno_location$1 = 0;
  n=strtol(str, &p, 10);
  signed int *return_value___errno_location$2;
  return_value___errno_location$2=__errno_location();
  _Bool tmp_if_expr$4;
  if((n == 0x7fffffffffffffffL || n == -9223372036854775808l) && *return_value___errno_location$2 == 34)
  {
    tmp_if_expr$4 = (_Bool)1;
    goto __CPROVER_DUMP_L3;
  }

  signed int *return_value___errno_location$3;
  return_value___errno_location$3=__errno_location();
  tmp_if_expr$4 = (*return_value___errno_location$3 != 0 ? (n == (signed long int)0 ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? (_Bool)1 : (_Bool)0;

__CPROVER_DUMP_L3:
  ;
  if(tmp_if_expr$4)
  {
    do
    {
      err_msg("parsing number failed: %s\n", str);
      have_errors = 1;
    }
    while((_Bool)0);
    exit(1);
  }

  return n;
}

// parse_unsigned
// file src/pi_tests/pi_stress.c line 1230
unsigned long int parse_unsigned(const char *str)
{
  unsigned long int n;
  char *p;
  signed int *return_value___errno_location$1;
  return_value___errno_location$1=__errno_location();
  *return_value___errno_location$1 = 0;
  n=strtoul(str, &p, 10);
  signed int *return_value___errno_location$2;
  return_value___errno_location$2=__errno_location();
  _Bool tmp_if_expr$4;
  signed int *return_value___errno_location$3;
  if(*return_value___errno_location$2 == 34 && n == 1UL)
    tmp_if_expr$4 = (_Bool)1;

  else
  {
    return_value___errno_location$3=__errno_location();
    tmp_if_expr$4 = (*return_value___errno_location$3 != 0 ? (n == (unsigned long int)0 ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$4)
  {
    do
    {
      err_msg("parsing number failed: %s\n", str);
      have_errors = 1;
    }
    while((_Bool)0);
    exit(1);
  }

  return n;
}

// pending_interrupt
// file src/pi_tests/pi_stress.c line 524
signed int pending_interrupt(void)
{
  struct anonymous$0 pending;
  signed int return_value_sigpending$3;
  return_value_sigpending$3=sigpending(&pending);
  if(!(return_value_sigpending$3 >= 0))
  {
    do
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      char *return_value_strerror$2;
      return_value_strerror$2=strerror(*return_value___errno_location$1);
      err_msg("from sigpending: %s\n", return_value_strerror$2);
      have_errors = 1;
    }
    while((_Bool)0);
    return 0;
  }

  else
  {
    interrupted=sigismember(&pending, 2);
    return interrupted;
  }
}

// policy_to_string
// file src/include/rt-utils.h line 22
const char * policy_to_string(signed int policy)
{
  switch(policy)
  {
    case 0:
      return "SCHED_OTHER";
    case 1:
      return "SCHED_FIFO";
    case 2:
      return "SCHED_RR";
    case 3:
      return "SCHED_BATCH";
    case 5:
      return "SCHED_IDLE";
    case 6:
      return "SCHED_DEADLINE";
    default:
      return "unknown";
  }
}

// print_sched_attr
// file src/pi_tests/pi_stress.c line 1388
void print_sched_attr(const char *name, struct sched_attr *sa)
{
  printf("    %6s thread", name);
  const char *return_value_policy_to_string$1;
  return_value_policy_to_string$1=policy_to_string((signed int)sa->sched_policy);
  printf(" %s", return_value_policy_to_string$1);
  switch(sa->sched_policy)
  {
    case (unsigned int)0:
    {
      printf(" nice %d\n", sa->sched_nice);
      break;
    }
    case (unsigned int)1:

    case (unsigned int)2:
    {
      printf(" priority %d\n", sa->__sched_priority);
      break;
    }
    case (unsigned int)6:
      printf(" runtime %lu deadline %lu period %lu\n", sa->sched_runtime, sa->sched_deadline, sa->sched_period);
  }
}

// process_command_line
// file src/pi_tests/pi_stress.c line 1323
void process_command_line(signed int argc, char **argv)
{
  signed int opt;
  signed long int return_value_strtol$1;
  signed long int return_value_strtol$2;
  signed long int return_value_strtol$3;
  signed int return_value_process_sched_line$4;
  do
  {
    opt=getopt_long(argc, argv, "+", options, (signed int *)(void *)0);
    if(opt == -1)
      break;

    switch(opt)
    {
      case 63:

      case 104:
      {
        usage();
        exit(0);
      }
      case 116:
      {
        return_value_strtol$1=strtol(optarg, (char ** restrict )(void *)0, 10);
        duration = (signed int)return_value_strtol$1;
        break;
      }
      case 118:
      {
        verbose = 1;
        quiet = 0;
        break;
      }
      case 113:
      {
        verbose = 0;
        quiet = 1;
        break;
      }
      case 105:
      {
        return_value_strtol$2=strtol(optarg, (char ** restrict )(void *)0, 10);
        inversions = (signed int)return_value_strtol$2;
        do
          if(!(verbose == 0))
            info("doing %d inversion per group\n", inversions);

        while((_Bool)0);
        break;
      }
      case 103:
      {
        return_value_strtol$3=strtol(optarg, (char ** restrict )(void *)0, 10);
        ngroups = (signed int)return_value_strtol$3;
        do
          if(!(verbose == 0))
            info("number of groups set to %d\n", ngroups);

        while((_Bool)0);
        break;
      }
      case 114:
      {
        policy = 2;
        break;
      }
      case 115:
      {
        return_value_process_sched_line$4=process_sched_line(optarg);
        if(!(return_value_process_sched_line$4 == 0))
          do
          {
            err_msg("ignoring invalid options '%s'\n", optarg);
            have_errors = 1;
          }
          while((_Bool)0);

        break;
      }
      case 112:
      {
        prompt = 1;
        break;
      }
      case 100:
      {
        debugging = 1;
        break;
      }
      case 86:
      {
        printf("pi_stress v%1.2f ", 0.96);
        exit(0);
      }
      case 117:
      {
        uniprocessor = 1;
        break;
      }
      case 109:
        lockall = 1;
    }
  }
  while((_Bool)1);
}

// process_sched_line
// file src/pi_tests/pi_stress.c line 1264
signed int process_sched_line(const char *arg)
{
  char *buf;
  char *k;
  char *v;
  const char del[3l] = { ',', '=', 0 };
  struct sched_attr sa = { .size=(unsigned int)0, .sched_policy=0u, .sched_flags=0ul,
    .sched_nice=0, .__sched_priority=0u, .sched_runtime=0ul,
    .sched_deadline=0ul, .sched_period=0ul };
  char *id = (char *)(void *)0;
  signed int retval = 0;
  char *tmp_statement_expression$1;
  const char *__old = arg;
  unsigned long int __len;
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(__old);
  __len = return_value_strlen$2 + (unsigned long int)1;
  char *__new;
  void *return_value___builtin_alloca$3;
  return_value___builtin_alloca$3=__builtin_alloca(__len);
  __new = (char *)return_value___builtin_alloca$3;
  void *return_value_memcpy$4;
  return_value_memcpy$4=memcpy((void *)__new, (const void *)__old, __len);
  tmp_statement_expression$1 = (char *)return_value_memcpy$4;
  buf = tmp_statement_expression$1;
  char *tmp_statement_expression$5;
  char process_sched_line$$1$$2$$__r0;
  char process_sched_line$$1$$2$$__r1;
  char process_sched_line$$1$$2$$__r2;
  char *return_value___strsep_g$6;
  return_value___strsep_g$6=__strsep_g(&buf, del);
  tmp_statement_expression$5 = return_value___strsep_g$6;
  k = tmp_statement_expression$5;
  char *tmp_statement_expression$7;
  signed int tmp_statement_expression$23;
  signed int tmp_statement_expression$21;
  signed int tmp_statement_expression$19;
  signed long int return_value_parse_signed$9;
  signed int tmp_statement_expression$17;
  unsigned long int return_value_parse_unsigned$10;
  signed int tmp_statement_expression$15;
  signed int tmp_statement_expression$13;
  signed int tmp_statement_expression$11;
  char *tmp_statement_expression$25;
  while(!(k == ((char *)NULL)))
  {
    char process_sched_line$$1$$3$$1$$__r0;
    char process_sched_line$$1$$3$$1$$__r1;
    char process_sched_line$$1$$3$$1$$__r2;
    char *return_value___strsep_g$8;
    return_value___strsep_g$8=__strsep_g(&buf, del);
    tmp_statement_expression$7 = return_value___strsep_g$8;
    v = tmp_statement_expression$7;
    if(v == ((char *)NULL))
      break;

    unsigned long int process_sched_line$$1$$3$$2$$__s1_len;
    unsigned long int process_sched_line$$1$$3$$2$$__s2_len;
    signed int return_value___builtin_strcmp$24;
    return_value___builtin_strcmp$24=__builtin_strcmp(k, "id");
    tmp_statement_expression$23 = return_value___builtin_strcmp$24;
    if(tmp_statement_expression$23 == 0)
      id = v;

    else
    {
      unsigned long int process_sched_line$$1$$3$$3$$__s1_len;
      unsigned long int process_sched_line$$1$$3$$3$$__s2_len;
      signed int return_value___builtin_strcmp$22;
      return_value___builtin_strcmp$22=__builtin_strcmp(k, "policy");
      tmp_statement_expression$21 = return_value___builtin_strcmp$22;
      if(tmp_statement_expression$21 == 0)
        sa.sched_policy=string_to_policy(v);

      else
      {
        unsigned long int process_sched_line$$1$$3$$4$$__s1_len;
        unsigned long int process_sched_line$$1$$3$$4$$__s2_len;
        signed int return_value___builtin_strcmp$20;
        return_value___builtin_strcmp$20=__builtin_strcmp(k, "nice");
        tmp_statement_expression$19 = return_value___builtin_strcmp$20;
        if(tmp_statement_expression$19 == 0)
        {
          return_value_parse_signed$9=parse_signed(v);
          sa.sched_nice = (signed int)return_value_parse_signed$9;
        }

        else
        {
          unsigned long int process_sched_line$$1$$3$$5$$__s1_len;
          unsigned long int process_sched_line$$1$$3$$5$$__s2_len;
          signed int return_value___builtin_strcmp$18;
          return_value___builtin_strcmp$18=__builtin_strcmp(k, "priority");
          tmp_statement_expression$17 = return_value___builtin_strcmp$18;
          if(tmp_statement_expression$17 == 0)
          {
            return_value_parse_unsigned$10=parse_unsigned(v);
            sa.__sched_priority = (unsigned int)return_value_parse_unsigned$10;
          }

          else
          {
            unsigned long int __s1_len;
            unsigned long int __s2_len;
            signed int return_value___builtin_strcmp$16;
            return_value___builtin_strcmp$16=__builtin_strcmp(k, "runtime");
            tmp_statement_expression$15 = return_value___builtin_strcmp$16;
            if(tmp_statement_expression$15 == 0)
              sa.sched_runtime=parse_unsigned(v);

            else
            {
              unsigned long int process_sched_line$$1$$3$$7$$__s1_len;
              unsigned long int process_sched_line$$1$$3$$7$$__s2_len;
              signed int return_value___builtin_strcmp$14;
              return_value___builtin_strcmp$14=__builtin_strcmp(k, "deadline");
              tmp_statement_expression$13 = return_value___builtin_strcmp$14;
              if(tmp_statement_expression$13 == 0)
                sa.sched_deadline=parse_unsigned(v);

              else
              {
                unsigned long int process_sched_line$$1$$3$$8$$__s1_len;
                unsigned long int process_sched_line$$1$$3$$8$$__s2_len;
                signed int return_value___builtin_strcmp$12;
                return_value___builtin_strcmp$12=__builtin_strcmp(k, "period");
                tmp_statement_expression$11 = return_value___builtin_strcmp$12;
                if(tmp_statement_expression$11 == 0)
                  sa.sched_period=parse_unsigned(v);

              }
            }
          }
        }
      }
    }
    char __r0;
    char __r1;
    char __r2;
    char *return_value___strsep_g$26;
    return_value___strsep_g$26=__strsep_g(&buf, del);
    tmp_statement_expression$25 = return_value___strsep_g$26;
    k = tmp_statement_expression$25;
  }
  signed int tmp_statement_expression$31;
  signed int tmp_statement_expression$29;
  signed int tmp_statement_expression$27;
  if(id == ((char *)NULL))
  {
    free((void *)buf);
    return 1;
  }

  else
  {
    unsigned long int process_sched_line$$1$$5$$__s1_len;
    unsigned long int process_sched_line$$1$$5$$__s2_len;
    signed int return_value___builtin_strcmp$32;
    return_value___builtin_strcmp$32=__builtin_strcmp(id, "low");
    tmp_statement_expression$31 = return_value___builtin_strcmp$32;
    if(tmp_statement_expression$31 == 0)
    {
      memcpy((void *)&low_sa, (const void *)&sa, sizeof(struct sched_attr) /*48ul*/ );
      sa_initialized = sa_initialized | (unsigned int)(1 << 0);
    }

    else
    {
      unsigned long int process_sched_line$$1$$7$$__s1_len;
      unsigned long int process_sched_line$$1$$7$$__s2_len;
      signed int return_value___builtin_strcmp$30;
      return_value___builtin_strcmp$30=__builtin_strcmp(id, "med");
      tmp_statement_expression$29 = return_value___builtin_strcmp$30;
      if(tmp_statement_expression$29 == 0)
      {
        memcpy((void *)&med_sa, (const void *)&sa, sizeof(struct sched_attr) /*48ul*/ );
        sa_initialized = sa_initialized | (unsigned int)(1 << 1);
      }

      else
      {
        unsigned long int process_sched_line$$1$$9$$__s1_len;
        unsigned long int process_sched_line$$1$$9$$__s2_len;
        signed int return_value___builtin_strcmp$28;
        return_value___builtin_strcmp$28=__builtin_strcmp(id, "high");
        tmp_statement_expression$27 = return_value___builtin_strcmp$28;
        if(tmp_statement_expression$27 == 0)
        {
          memcpy((void *)&high_sa, (const void *)&sa, sizeof(struct sched_attr) /*48ul*/ );
          sa_initialized = sa_initialized | (unsigned int)(1 << 2);
        }

        else
          retval = 1;
      }
    }
    free((void *)buf);
    return retval;
  }
}

// reporter
// file src/pi_tests/pi_stress.c line 549
void * reporter(void *arg)
{
  signed int status;
  signed int end = 0;
  struct timespec ts;
  ts.tv_sec = (signed long int)0;
  ts.tv_nsec = (signed long int)(report_interval * (unsigned long int)1000);
  tsnorm(&ts);
  signed long int return_value_time$1;
  if(duration >= 0)
  {
    return_value_time$1=time((signed long int *)(void *)0);
    end = (signed int)((signed long int)duration + return_value_time$1);
  }

  status=clock_nanosleep(1, 0, &ts, (struct timespec *)(void *)0);
  signed long int return_value_time$5;
  if(!(status == 0))
  {
    do
    {
      char *return_value_strerror$2;
      return_value_strerror$2=strerror(status);
      err_msg("from clock_nanosleep: %s\n", return_value_strerror$2);
      have_errors = 1;
    }
    while((_Bool)0);
    return (void *)0;
  }

  else
  {
    do
      if(!(debugging == 0))
        debug("reporter: starting report loop\n");

    while((_Bool)0);
    do
      if(!(verbose == 0))
        info("Press Control-C to stop test\nCurrent Inversions: \n");

    while((_Bool)0);
    do
    {
      pthread_mutex_lock(&shutdown_mtx);
      if(!(shutdown == 0))
      {
        pthread_mutex_unlock(&shutdown_mtx);
        break;
      }

      pthread_mutex_unlock(&shutdown_mtx);
      status=clock_nanosleep(1, 0, &ts, (struct timespec *)(void *)0);
      if(!(status == 0))
      {
        do
        {
          char *return_value_strerror$3;
          return_value_strerror$3=strerror(status);
          err_msg("from clock_nanosleep: %s\n", return_value_strerror$3);
          have_errors = 1;
        }
        while((_Bool)0);
        break;
      }

      if(quiet == 0)
      {
        pthread_mutex_lock(&shutdown_mtx);
        if(shutdown == 0)
        {
          fputs("\033[1A", stdout);
          unsigned long int return_value_total_inversions$4;
          return_value_total_inversions$4=total_inversions();
          printf("Current Inversions: %lu\n", return_value_total_inversions$4);
        }

      }

      pthread_mutex_unlock(&shutdown_mtx);
      if(!(end == 0))
      {
        return_value_time$5=time((signed long int *)(void *)0);
        if((signed long int)end >= return_value_time$5)
          goto __CPROVER_DUMP_L14;

        do
          if(!(verbose == 0))
            info("duration reached (%d seconds)\n", duration);

        while((_Bool)0);
        set_shutdown_flag();
      }

      else
      {

      __CPROVER_DUMP_L14:
        ;
        signed int return_value_pending_interrupt$6;
        return_value_pending_interrupt$6=pending_interrupt();
        if(!(return_value_pending_interrupt$6 == 0))
        {
          do
            if(!(verbose == 0))
              info("Keyboard Interrupt!\n");

          while((_Bool)0);
          break;
        }

        signed int return_value_watchdog_check$7;
        return_value_watchdog_check$7=watchdog_check();
        if(!(return_value_watchdog_check$7 == 0))
        {
          do
          {
            err_msg("reporter stopping due to watchdog event\n");
            have_errors = 1;
          }
          while((_Bool)0);
          set_shutdown_flag();
          break;
        }

        watchdog_clear();
      }
    }
    while((_Bool)1);
    do
      if(!(debugging == 0))
        debug("reporter: finished\n");

    while((_Bool)0);
    set_shutdown_flag();
    return (void *)0;
  }
}

// sched_getattr
// file src/lib/rt-sched.c line 37
signed int sched_getattr(signed int pid, struct sched_attr$0 *attr, unsigned int size, unsigned int flags)
{
  signed long int return_value_syscall$1;
  return_value_syscall$1=syscall((signed long int)315, pid, attr, size, flags);
  return (signed int)return_value_syscall$1;
}

// sched_setattr
// file src/lib/rt-sched.c line 30
signed int sched_setattr(signed int pid, struct sched_attr$0 *attr, unsigned int flags)
{
  signed long int return_value_syscall$1;
  return_value_syscall$1=syscall((signed long int)314, pid, attr, flags);
  return (signed int)return_value_syscall$1;
}

// set_cpu_affinity
// file src/pi_tests/pi_stress.c line 436
signed int set_cpu_affinity(struct anonymous *test_mask, struct anonymous *admin_mask)
{
  signed int status;
  signed int i;
  signed int admin_proc;
  struct anonymous current_mask;
  signed int tmp_statement_expression$1;
  signed int tmp_if_expr$2;
  if(num_processors == 1l || !(uniprocessor == 0))
  {
    do
      __builtin_memset((void *)admin_mask, 0, sizeof(struct anonymous) /*128ul*/ );
    while((_Bool)0);
    do
      __builtin_memset((void *)test_mask, 0, sizeof(struct anonymous) /*128ul*/ );
    while((_Bool)0);
    unsigned long int set_cpu_affinity$$1$$1$$1$$__cpu = (unsigned long int)0;
    if(!(set_cpu_affinity$$1$$1$$1$$__cpu / 8ul >= sizeof(struct anonymous) /*128ul*/ ))
      ((unsigned long int *)admin_mask->__bits)[(signed long int)(set_cpu_affinity$$1$$1$$1$$__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] = ((unsigned long int *)admin_mask->__bits)[(signed long int)(set_cpu_affinity$$1$$1$$1$$__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] | (unsigned long int)1 << set_cpu_affinity$$1$$1$$1$$__cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ );

    else
      (unsigned long int)0;
    unsigned long int set_cpu_affinity$$1$$1$$2$$__cpu = (unsigned long int)0;
    if(!(set_cpu_affinity$$1$$1$$2$$__cpu / 8ul >= sizeof(struct anonymous) /*128ul*/ ))
      ((unsigned long int *)test_mask->__bits)[(signed long int)(set_cpu_affinity$$1$$1$$2$$__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] = ((unsigned long int *)test_mask->__bits)[(signed long int)(set_cpu_affinity$$1$$1$$2$$__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] | (unsigned long int)1 << set_cpu_affinity$$1$$1$$2$$__cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ );

    else
      (unsigned long int)0;
    do
      if(!(verbose == 0))
        info("admin and test threads running on one processor\n");

    while((_Bool)0);
    return 0;
  }

  else
  {
    status=sched_getaffinity(0, sizeof(struct anonymous) /*128ul*/ , &current_mask);
    if(!(status == 0))
    {
      do
      {
        err_msg("failed getting CPU affinity mask: 0x%x\n", status);
        have_errors = 1;
      }
      while((_Bool)0);
      return 1;
    }

    else
    {
      i = 0;
      for( ; !((signed long int)i >= num_processors); i = i + 1)
      {
        unsigned long int set_cpu_affinity$$1$$3$$1$$1$$__cpu = (unsigned long int)i;
        if(!(set_cpu_affinity$$1$$3$$1$$1$$__cpu / 8ul >= sizeof(struct anonymous) /*128ul*/ ))
          tmp_if_expr$2 = (signed int)((((const unsigned long int *)(&current_mask)->__bits)[(signed long int)(set_cpu_affinity$$1$$3$$1$$1$$__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] & (unsigned long int)1 << set_cpu_affinity$$1$$3$$1$$1$$__cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ )) != (unsigned long int)0);

        else
          tmp_if_expr$2 = 0;
        tmp_statement_expression$1 = tmp_if_expr$2;
        if(!(tmp_statement_expression$1 == 0))
          break;

      }
      if((signed long int)i >= num_processors)
      {
        do
        {
          err_msg("No schedulable CPU found for main!\n");
          have_errors = 1;
        }
        while((_Bool)0);
        return 1;
      }

      else
      {
        admin_proc = i;
        do
          __builtin_memset((void *)admin_mask, 0, sizeof(struct anonymous) /*128ul*/ );
        while((_Bool)0);
        unsigned long int __cpu = (unsigned long int)admin_proc;
        if(!(__cpu / 8ul >= sizeof(struct anonymous) /*128ul*/ ))
          ((unsigned long int *)admin_mask->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] = ((unsigned long int *)admin_mask->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] | (unsigned long int)1 << __cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ );

        else
          (unsigned long int)0;
        status=sched_setaffinity(0, sizeof(struct anonymous) /*128ul*/ , admin_mask);
        if(!(status == 0))
        {
          do
          {
            err_msg("set_cpu_affinity: setting CPU affinity mask: 0x%x\n", status);
            have_errors = 1;
          }
          while((_Bool)0);
          return 1;
        }

        else
        {
          do
            if(!(verbose == 0))
              info("Admin thread running on processor: %d\n", i);

          while((_Bool)0);
          do
            __builtin_memset((void *)test_mask, 0, sizeof(struct anonymous) /*128ul*/ );
          while((_Bool)0);
          i = admin_proc + 1;
          for( ; !((signed long int)i >= num_processors); i = i + 1)
          {
            unsigned long int set_cpu_affinity$$1$$8$$1$$__cpu = (unsigned long int)i;
            if(!(set_cpu_affinity$$1$$8$$1$$__cpu / 8ul >= sizeof(struct anonymous) /*128ul*/ ))
              ((unsigned long int *)test_mask->__bits)[(signed long int)(set_cpu_affinity$$1$$8$$1$$__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] = ((unsigned long int *)test_mask->__bits)[(signed long int)(set_cpu_affinity$$1$$8$$1$$__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] | (unsigned long int)1 << set_cpu_affinity$$1$$8$$1$$__cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ );

            else
              (unsigned long int)0;
          }
          if((signed long int)(1 + admin_proc) == num_processors + -1l)
            do
              if(!(verbose == 0))
                info("Test threads running on processor: %ld\n", num_processors - (signed long int)1);

            while((_Bool)0);

          else
            do
              if(!(verbose == 0))
                info("Test threads running on processors:  %d-%d\n", admin_proc + 1, (signed int)num_processors - 1);

            while((_Bool)0);
          return 0;
        }
      }
    }
  }
}

// set_shutdown_flag
// file src/pi_tests/pi_stress.c line 1095
void set_shutdown_flag(void)
{
  pthread_mutex_lock(&shutdown_mtx);
  if(shutdown == 0)
  {
    do
      if(!(verbose == 0))
        info("setting shutdown flag\n");

    while((_Bool)0);
    shutdown = 1;
  }

  pthread_mutex_unlock(&shutdown_mtx);
}

// setevent
// file src/lib/rt-utils.c line 204
signed int setevent(char *event, char *val)
{
  char *prefix;
  prefix=get_debugfileprefix();
  char buffer[256l];
  signed int fd;
  signed int ret;
  sprintf(buffer, "%s%s", prefix, event);
  fd=open(buffer, 01);
  if(!(fd >= 0))
  {
    warn("unable to open %s\n", (const void *)buffer);
    return -1;
  }

  else
  {
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(val);
    signed long int return_value_write$2;
    return_value_write$2=write(fd, (const void *)val, return_value_strlen$1);
    ret = (signed int)return_value_write$2;
    if(!(ret >= 0))
    {
      warn("unable to write %s to %s\n", val, (const void *)buffer);
      close(fd);
      return -1;
    }

    else
    {
      close(fd);
      return 0;
    }
  }
}

// setup_sched_attr
// file src/pi_tests/pi_stress.c line 1457
void setup_sched_attr(struct sched_attr *attr, signed int policy, signed int prio)
{
  attr->sched_policy = (unsigned int)policy;
  attr->__sched_priority = (unsigned int)prio;
}

// setup_sched_config
// file src/pi_tests/pi_stress.c line 1463
void setup_sched_config(signed int policy)
{
  signed int prio_min;
  prio_min=sched_get_priority_min(policy);
  if((1u & sa_initialized) == 0u)
    setup_sched_attr(&low_sa, policy, prio_min + 0);

  if((2u & sa_initialized) == 0u)
    setup_sched_attr(&med_sa, policy, prio_min + 1);

  if((4u & sa_initialized) == 0u)
    setup_sched_attr(&high_sa, policy, prio_min + 2);

  if((8u & sa_initialized) == 0u)
    setup_sched_attr(&admin_sa, policy, prio_min + 3);

}

// setup_thread_attr
// file src/pi_tests/pi_stress.c line 386
signed int setup_thread_attr(union pthread_attr_t *attr, struct sched_attr *sa, struct anonymous *mask)
{
  signed int status;
  struct sched_param thread_param;
  status=pthread_attr_init(attr);
  if(!(status == 0))
  {
    do
    {
      err_msg("setup_thread_attr: initializing thread attribute: 0x%x\n", status);
      have_errors = 1;
    }
    while((_Bool)0);
    return 1;
  }

  else
  {
    status=pthread_attr_setaffinity_np(attr, sizeof(struct anonymous) /*128ul*/ , mask);
    if(!(status == 0))
    {
      do
      {
        err_msg("setup_thread_attr: setting affinity attribute: 0x%x\n", status);
        have_errors = 1;
      }
      while((_Bool)0);
      return 1;
    }

    else
      if(sa->sched_policy == 6u)
        return 0;

      else
      {
        status=pthread_attr_setschedpolicy(attr, (signed int)sa->sched_policy);
        if(!(status == 0))
        {
          do
          {
            const char *return_value_policy_to_string$1;
            return_value_policy_to_string$1=policy_to_string((signed int)sa->sched_policy);
            err_msg("setup_thread_attr: setting attribute policy to %s: 0x%x\n", return_value_policy_to_string$1, status);
            have_errors = 1;
          }
          while((_Bool)0);
          return 1;
        }

        else
        {
          status=pthread_attr_setinheritsched(attr, 1);
          if(!(status == 0))
          {
            do
            {
              err_msg("setup_thread_attr: setting explicit scheduling inheritance: 0x%x\n", status);
              have_errors = 1;
            }
            while((_Bool)0);
            return 1;
          }

          else
          {
            thread_param.__sched_priority = (signed int)sa->__sched_priority;
            status=pthread_attr_setschedparam(attr, &thread_param);
            if(!(status == 0))
            {
              do
              {
                err_msg("setup_thread_attr: setting scheduler param: 0x%x\n", status);
                have_errors = 1;
              }
              while((_Bool)0);
              return 1;
            }

            else
              return 0;
          }
        }
      }
  }
}

// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf)
{
  signed int return_value___xstat$1;
  return_value___xstat$1=__xstat(1, __path, __statbuf);
  return return_value___xstat$1;
}

// string_to_policy
// file src/include/rt-utils.h line 23
unsigned int string_to_policy(const char *str)
{
  signed int tmp_statement_expression$11;
  unsigned long int string_to_policy$$1$$1$$__s1_len;
  unsigned long int string_to_policy$$1$$1$$__s2_len;
  signed int return_value___builtin_strcmp$12;
  return_value___builtin_strcmp$12=__builtin_strcmp(str, "other");
  tmp_statement_expression$11 = return_value___builtin_strcmp$12;
  signed int tmp_statement_expression$9;
  signed int tmp_statement_expression$7;
  signed int tmp_statement_expression$5;
  signed int tmp_statement_expression$3;
  signed int tmp_statement_expression$1;
  if(tmp_statement_expression$11 == 0)
    return (unsigned int)0;

  else
  {
    unsigned long int string_to_policy$$1$$2$$__s1_len;
    unsigned long int __s2_len;
    signed int return_value___builtin_strcmp$10;
    return_value___builtin_strcmp$10=__builtin_strcmp(str, "fifo");
    tmp_statement_expression$9 = return_value___builtin_strcmp$10;
    if(tmp_statement_expression$9 == 0)
      return (unsigned int)1;

    else
    {
      unsigned long int string_to_policy$$1$$3$$__s1_len;
      unsigned long int string_to_policy$$1$$3$$__s2_len;
      signed int return_value___builtin_strcmp$8;
      return_value___builtin_strcmp$8=__builtin_strcmp(str, "rr");
      tmp_statement_expression$7 = return_value___builtin_strcmp$8;
      if(tmp_statement_expression$7 == 0)
        return (unsigned int)2;

      else
      {
        unsigned long int __s1_len;
        unsigned long int string_to_policy$$1$$4$$__s2_len;
        signed int return_value___builtin_strcmp$6;
        return_value___builtin_strcmp$6=__builtin_strcmp(str, "batch");
        tmp_statement_expression$5 = return_value___builtin_strcmp$6;
        if(tmp_statement_expression$5 == 0)
          return (unsigned int)3;

        else
        {
          unsigned long int string_to_policy$$1$$5$$__s1_len;
          unsigned long int string_to_policy$$1$$5$$__s2_len;
          signed int return_value___builtin_strcmp$4;
          return_value___builtin_strcmp$4=__builtin_strcmp(str, "idle");
          tmp_statement_expression$3 = return_value___builtin_strcmp$4;
          if(tmp_statement_expression$3 == 0)
            return (unsigned int)5;

          else
          {
            unsigned long int string_to_policy$$1$$6$$__s1_len;
            unsigned long int string_to_policy$$1$$6$$__s2_len;
            signed int return_value___builtin_strcmp$2;
            return_value___builtin_strcmp$2=__builtin_strcmp(str, "deadline");
            tmp_statement_expression$1 = return_value___builtin_strcmp$2;
            if(tmp_statement_expression$1 == 0)
              return (unsigned int)6;

          }
        }
      }
    }
  }
  return (unsigned int)0;
}

// summary
// file src/pi_tests/pi_stress.c line 1432
void summary(void)
{
  signed long int interval = finish - start;
  struct tm *t;
  t=gmtime(&interval);
  unsigned long int return_value_total_inversions$1;
  return_value_total_inversions$1=total_inversions();
  printf("Total inversion performed: %lu\n", return_value_total_inversions$1);
  printf("Test Duration: %d days, %d hours, %d minutes, %d seconds\n", t->tm_yday, t->tm_hour, t->tm_min, t->tm_sec);
}

// total_inversions
// file src/pi_tests/pi_stress.c line 1378
unsigned long int total_inversions(void)
{
  signed int i;
  unsigned long int total = (unsigned long int)0;
  i = 0;
  for( ; !(i >= ngroups); i = i + 1)
    total = total + (groups + (signed long int)i)->total;
  return total;
}

// tsnorm
// file src/pi_tests/pi_stress.c line 536
static inline void tsnorm(struct timespec *ts)
{
  for( ; ts->tv_nsec >= 1000000000l; ts->tv_sec = ts->tv_sec + 1l)
    ts->tv_nsec = ts->tv_nsec - (signed long int)1000000000;
}

// usage
// file src/pi_tests/pi_stress.c line 1023
void usage(void)
{
  printf("usage: pi_stress <options>\n");
  printf("    options:\n");
  printf("\t--verbose\t- lots of output\n");
  printf("\t--quiet\t\t- suppress running output\n");
  printf("\t--duration=<n>- length of the test run in seconds [infinite]\n");
  printf("\t--groups=<n>\t- set the number of inversion groups [%d]\n", ngroups);
  printf("\t--inversions=<n>- number of inversions per group [infinite]\n");
  printf("\t--report=<path>\t- output to file [/dev/null]\n");
  printf("\t--rr\t\t- use SCHED_RR for test threads [SCHED_FIFO]\n");
  printf("\t--sched\t\t- scheduling options per thread type:\n");
  printf("\t\tid=[high|med|low]\t\t\t- select thread\n");
  printf("\t\t,policy=[fifo,rr],priority=<n>\t\t- SCHED_FIFO or SCHED_RR\n");
  printf("\t\t,policy=deadline,runtime=<n>,deadline=<n>,period=<n>\t- SCHED_DEADLINE\n");
  printf("\t--prompt\t- prompt before starting the test\n");
  printf("\t--uniprocessor\t- force all threads to run on one processor\n");
  printf("\t--mlockall\t- lock current and future memory\n");
  printf("\t--debug\t\t- turn on debug prints\n");
  printf("\t--version\t- print version number on output\n");
  printf("\t--help\t\t- print this message\n");
}

// valid_tracer
// file src/lib/rt-utils.c line 186
signed int valid_tracer(char *tracername)
{
  char **list;
  signed int ntracers;
  signed int i;
  ntracers=get_tracers(&list);
  unsigned long int return_value_strlen$1;
  signed int return_value_strncmp$2;
  if(tracername == ((char *)NULL) || ntracers == 0)
    return 0;

  else
  {
    i = 0;
    for( ; !(i >= ntracers); i = i + 1)
    {
      return_value_strlen$1=strlen(list[(signed long int)i]);
      return_value_strncmp$2=strncmp(list[(signed long int)i], tracername, return_value_strlen$1);
      if(return_value_strncmp$2 == 0)
        return 1;

    }
    return 0;
  }
}

// verify_cpu
// file src/pi_tests/pi_stress.c line 625
signed int verify_cpu(signed int cpu)
{
  signed int status;
  signed int err;
  struct anonymous mask;
  do
    __builtin_memset((void *)&mask, 0, sizeof(struct anonymous) /*128ul*/ );
  while((_Bool)0);
  status=sched_getaffinity(0, sizeof(struct anonymous) /*128ul*/ , &mask);
  if(status == -1)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    err = *return_value___errno_location$1;
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(err);
    fprintf(stderr, "sched_getaffinity %s\n", return_value_strerror$2);
    exit(-1);
  }

  signed int tmp_statement_expression$3;
  unsigned long int __cpu = (unsigned long int)cpu;
  signed int tmp_if_expr$4;
  if(!(__cpu / 8ul >= sizeof(struct anonymous) /*128ul*/ ))
    tmp_if_expr$4 = (signed int)((((const unsigned long int *)(&mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] & (unsigned long int)1 << __cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ )) != (unsigned long int)0);

  else
    tmp_if_expr$4 = 0;
  tmp_statement_expression$3 = tmp_if_expr$4;
  if(!(tmp_statement_expression$3 == 0))
    return 0;

  else
    return 1;
}

// warn
// file src/lib/error.c line 69
void warn(char *fmt, ...)
{
  void **ap = (void **)&fmt;
  fputs("WARN: ", stderr);
  err_doit(0, fmt, ap);
  ap = ((void **)NULL);
}

// watchdog_check
// file src/pi_tests/pi_stress.c line 500
signed int watchdog_check(void)
{
  signed int i;
  signed int failures = 0;
  struct group_parameters *g;
  i = 0;
  for( ; !(i >= ngroups); i = i + 1)
  {
    g = &groups[(signed long int)i];
    if(g->watchdog == 0)
    {
      if((unsigned long int)g->inversions == g->total)
        goto __CPROVER_DUMP_L5;

      g->watchdog_hits = g->watchdog_hits + 1;
      if(g->watchdog_hits >= 5)
      {
        do
        {
          err_msg("WATCHDOG triggered: group %d is deadlocked!\n", i);
          have_errors = 1;
        }
        while((_Bool)0);
        failures = failures + 1;
      }

    }

    else
      g->watchdog_hits = 0;

  __CPROVER_DUMP_L5:
    ;
  }
  return failures != 0 ? 1 : 0;
}

// watchdog_clear
// file src/pi_tests/pi_stress.c line 492
void watchdog_clear(void)
{
  signed int i = 0;
  for( ; !(i >= ngroups); i = i + 1)
    (groups + (signed long int)i)->watchdog = 0;
}

