// tag-#anon#ST[*{V(SYM#tag-sigval#)->V}$V(SYM#tag-sigval#)->V$'_function'||*{SYM#tag-pthread_attr_t#}$SYM#tag-pthread_attr_t#$'_attribute'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 327
struct anonymous;

// tag-#anon#ST[ARR16{U64}$U64$'__bits'|]
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 125
struct anonymous$7;

// tag-#anon#ST[ARR16{U64}$U64$'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous$0;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$4;

// tag-#anon#UN[ARR12{S32}$S32$'_pad'||S32'_tid'||SYM#tag-#anon#ST[*{V(SYM#tag-sigval#)->V}$V(SYM#tag-sigval#)->V$'_function'||*{SYM#tag-pthread_attr_t#}$SYM#tag-pthread_attr_t#$'_attribute'|]#'_sigev_thread'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 319
union anonymous$1;

// tag-#anon#UN[ARR32{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 239
union anonymous$6;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$3;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$5;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$2;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__itimer_which
// file /usr/include/x86_64-linux-gnu/sys/time.h line 91
enum __itimer_which { ITIMER_REAL=0, ITIMER_VIRTUAL=1, ITIMER_PROF=2 };

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-__rlimit_resource
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 31
enum __rlimit_resource { RLIMIT_CPU=0, RLIMIT_FSIZE=1, RLIMIT_DATA=2, RLIMIT_STACK=3, RLIMIT_CORE=4, __RLIMIT_RSS=5, RLIMIT_NOFILE=7, __RLIMIT_OFILE=7, RLIMIT_AS=9, __RLIMIT_NPROC=6, __RLIMIT_MEMLOCK=8, __RLIMIT_LOCKS=10, __RLIMIT_SIGPENDING=11, __RLIMIT_MSGQUEUE=12, __RLIMIT_NICE=13, __RLIMIT_RTPRIO=14, __RLIMIT_RTTIME=15, __RLIMIT_NLIMITS=16, __RLIM_NLIMITS=16 };

// tag-bitmask
// file /usr/include/numa.h line 44
struct bitmask;

// tag-itimerspec
// file /usr/include/time.h line 161
struct itimerspec;

// tag-itimerval
// file /usr/include/x86_64-linux-gnu/sys/time.h line 107
struct itimerval;

// tag-kvars
// file src/cyclictest/cyclictest.c line 230
struct kvars;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rlimit
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 139
struct rlimit;

// tag-sched_attr
// file src/include/rt-sched.h line 59
struct sched_attr;

// tag-sched_param
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 72
struct sched_param;

// tag-sigevent
// file /usr/include/time.h line 168
struct sigevent;

// tag-sigval
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 32
union sigval;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-thread_param
// file src/cyclictest/cyclictest.c line 132
struct thread_param;

// tag-thread_stat
// file src/cyclictest/cyclictest.c line 140
struct thread_stat;

// tag-thread_trigger
// file src/cyclictest/cyclictest.c line 175
struct thread_trigger;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

// tag-utsname
// file /usr/include/x86_64-linux-gnu/sys/utsname.h line 48
struct utsname;

#ifndef NULL
#define NULL ((void*)0)
#endif

// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __xstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 400
extern signed int __xstat(signed int, const char *, struct stat *);
// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr);
// bzero
// file /usr/include/string.h line 458
extern void bzero(void *, unsigned long int);
// calcdiff
// file src/cyclictest/cyclictest.c line 406
static inline signed long int calcdiff(struct timespec t1, struct timespec t2);
// calcdiff_ns
// file src/cyclictest/cyclictest.c line 414
static inline signed long int calcdiff_ns(struct timespec t1, struct timespec t2);
// calctime
// file src/cyclictest/cyclictest.c line 422
static inline signed long int calctime(struct timespec t);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// check_kernel
// file src/cyclictest/cyclictest.c line 1636
static signed int check_kernel(void);
// check_privs
// file src/include/rt-utils.h line 10
signed int check_privs(void);
// check_timer
// file src/cyclictest/cyclictest.c line 1673
static signed int check_timer(void);
// clock_getres
// file /usr/include/time.h line 339
extern signed int clock_getres(signed int, struct timespec *);
// clock_gettime
// file /usr/include/time.h line 342
extern signed int clock_gettime(signed int, struct timespec *);
// clock_nanosleep
// file /usr/include/time.h line 353
extern signed int clock_nanosleep(signed int, signed int, struct timespec *, struct timespec *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// cpu_for_thread
// file src/cyclictest/cyclictest.c line 1185
static signed int cpu_for_thread(signed int thread_num, signed int max_cpus);
// debug
// file src/lib/error.c line 49
void debug(char *fmt, ...);
// display_help
// file src/cyclictest/cyclictest.c line 1052
static void display_help(signed int error);
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
// file src/include/error.h line 11
void err_msg_n(signed int err, char *fmt, ...);
// err_quit
// file src/lib/error.c line 40
void err_quit(char *fmt, ...);
// event_disable
// file src/lib/rt-utils.c line 243
signed int event_disable(char *event);
// event_disable_all
// file src/include/rt-utils.h line 20
signed int event_disable_all(void);
// event_enable
// file src/include/rt-utils.h line 17
signed int event_enable(char *event);
// event_enable_all
// file src/include/rt-utils.h line 19
signed int event_enable_all(void);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fatal
// file src/include/error.h line 16
void fatal(char *fmt, ...);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fdopen
// file /usr/include/stdio.h line 306
extern struct _IO_FILE * fdopen(signed int, const char *);
// fifothread
// file src/cyclictest/cyclictest.c line 1847
static void * fifothread(void *param);
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
// file src/include/rt-utils.h line 11
char * get_debugfileprefix(void);
// get_tracers
// file src/lib/rt-utils.c line 121
signed int get_tracers(char ***list);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// getrlimit
// file /usr/include/x86_64-linux-gnu/sys/resource.h line 50
extern signed int getrlimit(enum __rlimit_resource, struct rlimit *);
// gettid
// file src/lib/rt-utils.c line 320
signed int gettid(void);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// handlepolicy
// file src/cyclictest/cyclictest.c line 1224
static void handlepolicy(char *polname);
// info
// file src/include/error.h line 14
void info(char *fmt, ...);
// is_cpumask_zero
// file src/cyclictest/cyclictest.c line 1180
static unsigned int is_cpumask_zero(struct bitmask *mask);
// kernvar
// file src/cyclictest/cyclictest.c line 316
static signed int kernvar(signed int mode, const char *name, char *value, unsigned long int sizeofvalue);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mkfifo
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 349
extern signed int mkfifo(const char *, unsigned int);
// mlockall
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 111
extern signed int mlockall(signed int);
// mount_debugfs
// file src/include/rt-utils.h line 12
signed int mount_debugfs(char *path);
// munlockall
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 115
extern signed int munlockall(void);
// nanosleep
// file /usr/include/time.h line 334
extern signed int nanosleep(struct timespec *, struct timespec *);
// numa_alloc_onnode
// file /usr/include/numa.h line 211
void * numa_alloc_onnode(unsigned long int, signed int);
// numa_available
// file /usr/include/numa.h line 134
signed int numa_available(void);
// numa_bitmask_free
// file /usr/include/numa.h line 58
void numa_bitmask_free(struct bitmask *);
// numa_bitmask_isbitset
// file /usr/include/numa.h line 50
signed int numa_bitmask_isbitset(struct bitmask *, unsigned int);
// numa_free
// file /usr/include/numa.h line 219
void numa_free(void *, unsigned long int);
// numa_node_of_cpu
// file /usr/include/numa.h line 286
signed int numa_node_of_cpu(signed int);
// numa_on_and_available
// file src/cyclictest/rt_numa.h line 195
static void numa_on_and_available();
// numa_parse_cpustring
// file /usr/include/numa.h line 323
struct bitmask * numa_parse_cpustring(const char *);
// numa_run_on_node
// file /usr/include/numa.h line 244
signed int numa_run_on_node(signed int);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// parse_cpumask
// file src/cyclictest/cyclictest.c line 1205
static void parse_cpumask(const char *option, const signed int max_cpus);
// parse_time_string
// file src/cyclictest/cyclictest.c line 676
static signed int parse_time_string(char *val);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// policy_to_string
// file src/lib/rt-utils.c line 282
const char * policy_to_string(signed int policy);
// policyname
// file src/cyclictest/cyclictest.c line 1240
static char * policyname(signed int policy);
// prctl
// file /usr/include/x86_64-linux-gnu/sys/prctl.h line 27
extern signed int prctl(signed int, ...);
// print_hist
// file src/cyclictest/cyclictest.c line 1715
static void print_hist(struct thread_param **par, signed int nthreads);
// print_stat
// file src/cyclictest/cyclictest.c line 1804
static void print_stat(struct _IO_FILE *fp, struct thread_param *par, signed int index, signed int verbose, signed int quiet);
// print_tids
// file src/cyclictest/cyclictest.c line 1705
static void print_tids(struct thread_param **par, signed int nthreads);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// process_options
// file src/cyclictest/cyclictest.c line 1279
static void process_options(signed int argc, char **argv, signed int max_cpus);
// pthread_attr_getstack
// file /usr/include/pthread.h line 383
extern signed int pthread_attr_getstack(const union pthread_attr_t *, void ** restrict , unsigned long int *);
// pthread_attr_init
// file /usr/include/pthread.h line 289
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_attr_setstack
// file /usr/include/pthread.h line 391
extern signed int pthread_attr_setstack(union pthread_attr_t *, void *, unsigned long int);
// pthread_barrier_init
// file /usr/include/pthread.h line 1070
extern signed int pthread_barrier_init(union anonymous$6 *, const union anonymous$3 *, unsigned int);
// pthread_barrier_wait
// file /usr/include/pthread.h line 1080
extern signed int pthread_barrier_wait(union anonymous$6 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous$5 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous$5 *, union anonymous$2 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_kill
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 35
extern signed int pthread_kill(unsigned long int, signed int);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$2 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$2 *);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// pthread_setaffinity_np
// file /usr/include/pthread.h line 476
extern signed int pthread_setaffinity_np(unsigned long int, unsigned long int, const struct anonymous$7 *);
// raise_soft_prio
// file src/cyclictest/cyclictest.c line 709
static signed int raise_soft_prio(signed int policy, struct sched_param *param);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// restorekernvars
// file src/cyclictest/cyclictest.c line 378
static void restorekernvars(void);
// rt_bitmask_free
// file src/cyclictest/rt_numa.h line 108
static inline void rt_bitmask_free(struct bitmask *mask);
// rt_numa_bitmask_count
// file src/cyclictest/rt_numa.h line 272
static inline unsigned int rt_numa_bitmask_count(struct bitmask *mask);
// rt_numa_bitmask_isbitset
// file src/cyclictest/rt_numa.h line 86
static inline unsigned int rt_numa_bitmask_isbitset(struct bitmask *mask, unsigned long int i);
// rt_numa_numa_alloc_onnode
// file src/cyclictest/rt_numa.h line 62
static void * rt_numa_numa_alloc_onnode(unsigned long int size, signed int node, signed int cpu);
// rt_numa_numa_node_of_cpu
// file src/cyclictest/rt_numa.h line 77
static signed int rt_numa_numa_node_of_cpu(signed int cpu);
// rt_numa_parse_cpustring
// file src/cyclictest/rt_numa.h line 92
static inline struct bitmask * rt_numa_parse_cpustring(const char *s, signed int max_cpus);
// rt_numa_set_numa_run_on_node
// file src/cyclictest/rt_numa.h line 52
static void rt_numa_set_numa_run_on_node(signed int node, signed int cpu);
// sched_get_priority_max
// file /usr/include/sched.h line 68
extern signed int sched_get_priority_max(signed int);
// sched_getattr
// file src/lib/rt-sched.c line 37
signed int sched_getattr(signed int pid, struct sched_attr *attr, unsigned int size, unsigned int flags);
// sched_getparam
// file /usr/include/sched.h line 55
extern signed int sched_getparam(signed int, struct sched_param *);
// sched_getscheduler
// file /usr/include/sched.h line 62
extern signed int sched_getscheduler(signed int);
// sched_setattr
// file src/lib/rt-sched.c line 30
signed int sched_setattr(signed int pid, struct sched_attr *attr, unsigned int flags);
// sched_setscheduler
// file /usr/include/sched.h line 58
extern signed int sched_setscheduler(signed int, signed int, struct sched_param *);
// set_latency_target
// file src/cyclictest/cyclictest.c line 262
static void set_latency_target(void);
// setevent
// file src/lib/rt-utils.c line 204
signed int setevent(char *event, char *val);
// setitimer
// file /usr/include/x86_64-linux-gnu/sys/time.h line 131
extern signed int setitimer(enum __itimer_which, struct itimerval *, struct itimerval *);
// setkernvar
// file src/cyclictest/cyclictest.c line 348
static void setkernvar(const char *name, char *value);
// setrlimit
// file /usr/include/x86_64-linux-gnu/sys/resource.h line 69
extern signed int setrlimit(enum __rlimit_resource, struct rlimit *);
// setscheduler
// file src/cyclictest/cyclictest.c line 757
static signed int setscheduler(signed int pid, signed int policy, struct sched_param *param);
// settracer
// file src/cyclictest/cyclictest.c line 505
static signed int settracer(char *tracer);
// setup_tracer
// file src/cyclictest/cyclictest.c line 514
static void setup_tracer(void);
// setvbuf
// file /usr/include/stdio.h line 336
extern signed int setvbuf(struct _IO_FILE *, char *, signed int, unsigned long int);
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous$0 *, signed int);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous$0 *);
// sighand
// file src/cyclictest/cyclictest.c line 1683
static void sighand(signed int sig);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// sigprocmask
// file /usr/include/signal.h line 248
extern signed int sigprocmask(signed int, const struct anonymous$0 *, struct anonymous$0 *);
// sigwait
// file /usr/include/signal.h line 270
extern signed int sigwait(const struct anonymous$0 *, signed int *);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf);
// stat$link1
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat$link1(const char *__path$link1, struct stat *__statbuf$link1);
// strcat
// file /usr/include/string.h line 137
extern char * strcat(char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// string_to_policy
// file src/lib/rt-utils.c line 302
unsigned int string_to_policy(const char *str);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncasecmp
// file /usr/include/string.h line 537
extern signed int strncasecmp(const char *, const char *, unsigned long int);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strtok
// file /usr/include/string.h line 347
extern char * strtok(char *, const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// syscall
// file /usr/include/unistd.h line 1058
extern signed long int syscall(signed long int, ...);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// system
// file /usr/include/stdlib.h line 716
extern signed int system(const char *);
// threadalloc
// file src/cyclictest/rt_numa.h line 36
static void * threadalloc(unsigned long int size, signed int node);
// threadfree
// file src/cyclictest/rt_numa.h line 44
static void threadfree(void *ptr, unsigned long int size, signed int node);
// timer_create
// file /usr/include/time.h line 363
extern signed int timer_create(signed int, struct sigevent *, void ** restrict );
// timer_delete
// file /usr/include/time.h line 368
extern signed int timer_delete(void *);
// timer_getoverrun
// file /usr/include/time.h line 380
extern signed int timer_getoverrun(void *);
// timer_settime
// file /usr/include/time.h line 371
extern signed int timer_settime(void *, signed int, struct itimerspec *, struct itimerspec *);
// timerthread
// file src/cyclictest/cyclictest.c line 787
static void * timerthread(void *param);
// trace_file_exists
// file src/cyclictest/cyclictest.c line 449
static signed int trace_file_exists(char *name);
// tracemark
// file src/cyclictest/cyclictest.c line 462
static void tracemark(char *fmt, ...);
// traceopt
// file src/cyclictest/cyclictest.c line 430
static void traceopt(char *option);
// tracing
// file src/cyclictest/cyclictest.c line 480
static void tracing(signed int on);
// trigger_init
// file src/cyclictest/cyclictest.c line 1876
static signed int trigger_init();
// trigger_print
// file src/cyclictest/cyclictest.c line 1901
static void trigger_print();
// trigger_update
// file src/cyclictest/cyclictest.c line 1916
static void trigger_update(struct thread_param *par, signed int diff, signed long int ts);
// tsgreater
// file src/cyclictest/cyclictest.c line 400
static inline signed int tsgreater(struct timespec *a, struct timespec *b);
// tsnorm
// file src/cyclictest/cyclictest.c line 392
static inline void tsnorm(struct timespec *ts);
// uname
// file /usr/include/x86_64-linux-gnu/sys/utsname.h line 81
extern signed int uname(struct utsname *);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// valid_tracer
// file src/include/rt-utils.h line 14
signed int valid_tracer(char *tracername);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// vsnprintf
// file /usr/include/stdio.h line 390
extern signed int vsnprintf(char *, unsigned long int, const char *, void **);
// warn
// file src/include/error.h line 15
void warn(char *fmt, ...);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);

struct anonymous
{
  // _function
  void (*_function)(union sigval);
  // _attribute
  union pthread_attr_t *_attribute;
};

struct anonymous$7
{
  // __bits
  unsigned long int __bits[16l];
};

struct anonymous$0
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous$4
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

union anonymous$1
{
  // _pad
  signed int _pad[12l];
  // _tid
  signed int _tid;
  // _sigev_thread
  struct anonymous _sigev_thread;
};

union anonymous$6
{
  // __size
  char __size[32l];
  // __align
  signed long int __align;
};

union anonymous$3
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous$5
{
  // __data
  struct anonymous$4 __data;
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

union anonymous$2
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

struct bitmask
{
  // size
  unsigned long int size;
  // maskp
  unsigned long int *maskp;
};

struct timespec
{
  // tv_sec
  signed long int tv_sec;
  // tv_nsec
  signed long int tv_nsec;
};

struct itimerspec
{
  // it_interval
  struct timespec it_interval;
  // it_value
  struct timespec it_value;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct itimerval
{
  // it_interval
  struct timeval it_interval;
  // it_value
  struct timeval it_value;
};

struct kvars
{
  // name
  char name[32l];
  // value
  char value[32l];
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

struct rlimit
{
  // rlim_cur
  unsigned long int rlim_cur;
  // rlim_max
  unsigned long int rlim_max;
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

union sigval
{
  // sival_int
  signed int sival_int;
  // sival_ptr
  void *sival_ptr;
};

struct sigevent
{
  // sigev_value
  union sigval sigev_value;
  // sigev_signo
  signed int sigev_signo;
  // sigev_notify
  signed int sigev_notify;
  // _sigev_un
  union anonymous$1 _sigev_un;
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

struct thread_param
{
  // prio
  signed int prio;
  // policy
  signed int policy;
  // mode
  signed int mode;
  // timermode
  signed int timermode;
  // signal
  signed int signal;
  // clock
  signed int clock;
  // max_cycles
  unsigned long int max_cycles;
  // stats
  struct thread_stat *stats;
  // bufmsk
  signed int bufmsk;
  // interval
  unsigned long int interval;
  // cpu
  signed int cpu;
  // node
  signed int node;
  // tnum
  signed int tnum;
};

struct thread_stat
{
  // cycles
  unsigned long int cycles;
  // cyclesread
  unsigned long int cyclesread;
  // min
  signed long int min;
  // max
  signed long int max;
  // act
  signed long int act;
  // avg
  double avg;
  // values
  signed long int *values;
  // hist_array
  signed long int *hist_array;
  // outliers
  signed long int *outliers;
  // thread
  unsigned long int thread;
  // threadstarted
  signed int threadstarted;
  // tid
  signed int tid;
  // reduce
  signed long int reduce;
  // redmax
  signed long int redmax;
  // cycleofmax
  signed long int cycleofmax;
  // hist_overflow
  signed long int hist_overflow;
  // num_outliers
  signed long int num_outliers;
};

struct thread_trigger
{
  // cpu
  signed int cpu;
  // tnum
  signed int tnum;
  // ts
  signed long int ts;
  // diff
  signed int diff;
  // next
  struct thread_trigger *next;
};

struct timezone
{
  // tz_minuteswest
  signed int tz_minuteswest;
  // tz_dsttime
  signed int tz_dsttime;
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


// affinity_mask
// file src/cyclictest/cyclictest.c line 1165
static struct bitmask *affinity_mask = (struct bitmask *)(void *)0;
// align_barr
// file src/cyclictest/cyclictest.c line 225
static union anonymous$6 align_barr;
// aligned
// file src/cyclictest/cyclictest.c line 222
static signed int aligned = 0;
// break_thread_id
// file src/cyclictest/cyclictest.c line 219
static signed int break_thread_id = 0;
// break_thread_id_lock
// file src/cyclictest/cyclictest.c line 218
static union anonymous$2 break_thread_id_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// break_thread_value
// file src/cyclictest/cyclictest.c line 220
static unsigned long int break_thread_value = (unsigned long int)0;
// check_clock_resolution
// file src/cyclictest/cyclictest.c line 208
static signed int check_clock_resolution;
// clocksel
// file src/cyclictest/cyclictest.c line 1161
static signed int clocksel = 0;
// clocksources
// file src/cyclictest/cyclictest.c line 1175
static signed int clocksources[2l] = { 1, 0 };
// ct_debug
// file src/cyclictest/cyclictest.c line 209
static signed int ct_debug;
// current
// file src/cyclictest/cyclictest.c line 185
struct thread_trigger *current = (struct thread_trigger *)(void *)0;
// debugfileprefix
// file src/lib/rt-utils.c line 25
static char debugfileprefix[256l];
// distance
// file src/cyclictest/cyclictest.c line 1164
static signed int distance = -1;
// duration
// file src/cyclictest/cyclictest.c line 203
static signed int duration = 0;
// enable_events
// file src/cyclictest/cyclictest.c line 114
signed int enable_events;
// fifo_threadid
// file src/cyclictest/cyclictest.c line 211
static unsigned long int fifo_threadid;
// fifopath
// file src/cyclictest/cyclictest.c line 238
static char fifopath[256l];
// fileprefix
// file src/cyclictest/cyclictest.c line 236
static char *fileprefix;
// force_sched_other
// file src/cyclictest/cyclictest.c line 206
static signed int force_sched_other;
// ftrace
// file src/cyclictest/cyclictest.c line 195
static signed int ftrace = 0;
// functiontracer
// file src/cyclictest/cyclictest.c line 310
static char functiontracer[256l];
// globalt
// file src/cyclictest/cyclictest.c line 227
static struct timespec globalt;
// globalt_barr
// file src/cyclictest/cyclictest.c line 226
static union anonymous$6 globalt_barr;
// head
// file src/cyclictest/cyclictest.c line 183
struct thread_trigger *head = (struct thread_trigger *)(void *)0;
// histfile
// file src/cyclictest/cyclictest.c line 239
static char histfile[256l];
// histofall
// file src/cyclictest/cyclictest.c line 202
static signed int histofall = 0;
// histogram
// file src/cyclictest/cyclictest.c line 201
static signed int histogram = 0;
// interval
// file src/cyclictest/cyclictest.c line 1163
static signed int interval = 1000;
// kernelversion
// file src/cyclictest/cyclictest.c line 196
static signed int kernelversion;
// kv
// file src/cyclictest/cyclictest.c line 233
static struct kvars kv[32l];
// laptop
// file src/cyclictest/cyclictest.c line 212
static signed int laptop = 0;
// latency_target_fd
// file src/cyclictest/cyclictest.c line 249
static signed int latency_target_fd = -1;
// latency_target_value
// file src/cyclictest/cyclictest.c line 250
static signed int latency_target_value = 0;
// lockall
// file src/cyclictest/cyclictest.c line 199
static signed int lockall = 0;
// max_cycles
// file src/cyclictest/cyclictest.c line 1160
static signed int max_cycles;
// notrace
// file src/cyclictest/cyclictest.c line 194
static signed int notrace = 0;
// num_threads
// file src/cyclictest/cyclictest.c line 1159
static signed int num_threads = 1;
// num_tracers
// file src/lib/rt-utils.c line 114
static signed int num_tracers;
// numa
// file src/cyclictest/rt_numa.h line 26
static signed int numa = 0;
// offset
// file src/cyclictest/cyclictest.c line 224
static signed int offset = 0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// oscope_reduction
// file src/cyclictest/cyclictest.c line 198
static signed int oscope_reduction = 1;
// parameters
// file src/cyclictest/cyclictest.c line 244
static struct thread_param **parameters;
// policy
// file src/cyclictest/cyclictest.c line 1158
static signed int policy = 0;
// priority
// file src/cyclictest/cyclictest.c line 1157
static signed int priority;
// priospread
// file src/cyclictest/cyclictest.c line 207
static signed int priospread = 0;
// procfileprefix
// file src/cyclictest/cyclictest.c line 235
static char *procfileprefix = "/proc/sys/kernel/";
// quiet
// file src/cyclictest/cyclictest.c line 1162
static signed int quiet;
// refresh_on_max
// file src/cyclictest/cyclictest.c line 205
static signed int refresh_on_max;
// refresh_on_max_cond
// file src/cyclictest/cyclictest.c line 215
static union anonymous$5 refresh_on_max_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// refresh_on_max_lock
// file src/cyclictest/cyclictest.c line 216
static union anonymous$2 refresh_on_max_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// secaligned
// file src/cyclictest/cyclictest.c line 223
static signed int secaligned = 0;
// setaffinity
// file src/cyclictest/cyclictest.c line 1173
static signed int setaffinity = 0;
// shutdown
// file src/cyclictest/cyclictest.c line 192
static signed int shutdown;
// smp
// file src/cyclictest/cyclictest.c line 1166
static signed int smp = 0;
// spikes
// file src/cyclictest/cyclictest.c line 186
static signed int spikes;
// statistics
// file src/cyclictest/cyclictest.c line 245
static struct thread_stat **statistics;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// tail
// file src/cyclictest/cyclictest.c line 184
struct thread_trigger *tail = (struct thread_trigger *)(void *)0;
// timermode
// file src/cyclictest/cyclictest.c line 1155
static signed int timermode = 1;
// trace_fd
// file src/cyclictest/cyclictest.c line 313
static signed int trace_fd = -1;
// tracebuf
// file src/cyclictest/cyclictest.c line 459
static char tracebuf[1024l];
// tracelimit
// file src/cyclictest/cyclictest.c line 193
static signed int tracelimit = 0;
// tracemark_fd
// file src/cyclictest/cyclictest.c line 314
static signed int tracemark_fd = -1;
// traceopt_count
// file src/cyclictest/cyclictest.c line 241
static signed int traceopt_count;
// traceopt_size
// file src/cyclictest/cyclictest.c line 242
static signed int traceopt_size;
// traceptr
// file src/cyclictest/cyclictest.c line 240
static char **traceptr;
// tracer
// file src/cyclictest/cyclictest.c line 237
static char tracer[256l];
// tracer_buffer
// file src/lib/rt-utils.c line 113
static char *tracer_buffer;
// tracer_list
// file src/lib/rt-utils.c line 112
static char **tracer_list;
// traceroptions
// file src/cyclictest/cyclictest.c line 311
static char traceroptions[256l];
// tracetype
// file src/cyclictest/cyclictest.c line 200
static signed int tracetype = 0;
// trigger
// file src/cyclictest/cyclictest.c line 171
static signed int trigger = 0;
// trigger_list_size
// file src/cyclictest/cyclictest.c line 172
static signed int trigger_list_size = 1024;
// trigger_lock
// file src/cyclictest/cyclictest.c line 169
static union anonymous$2 trigger_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// use_fifo
// file src/cyclictest/cyclictest.c line 210
static signed int use_fifo = 0;
// use_histfile
// file src/cyclictest/cyclictest.c line 213
static signed int use_histfile = 0;
// use_nanosleep
// file src/cyclictest/cyclictest.c line 1154
static signed int use_nanosleep;
// use_nsecs
// file src/cyclictest/cyclictest.c line 204
static signed int use_nsecs = 0;
// use_system
// file src/cyclictest/cyclictest.c line 1156
static signed int use_system;
// verbose
// file src/cyclictest/cyclictest.c line 197
static signed int verbose = 0;

// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr)
{
  signed long int return_value_strtol$1;
  return_value_strtol$1=strtol(__nptr, (char **)(void *)0, 10);
  return (signed int)return_value_strtol$1;
}

// calcdiff
// file src/cyclictest/cyclictest.c line 406
static inline signed long int calcdiff(struct timespec t1, struct timespec t2)
{
  signed long int diff = (signed long int)1000000 * (signed long long int)((signed int)t1.tv_sec - (signed int)t2.tv_sec);
  diff = diff + (signed long int)(((signed int)t1.tv_nsec - (signed int)t2.tv_nsec) / 1000);
  return diff;
}

// calcdiff_ns
// file src/cyclictest/cyclictest.c line 414
static inline signed long int calcdiff_ns(struct timespec t1, struct timespec t2)
{
  signed long int diff = (signed long int)1000000000 * (signed long int)((signed int)t1.tv_sec - (signed int)t2.tv_sec);
  diff = diff + (signed long int)((signed int)t1.tv_nsec - (signed int)t2.tv_nsec);
  return diff;
}

// calctime
// file src/cyclictest/cyclictest.c line 422
static inline signed long int calctime(struct timespec t)
{
  signed long int time = (signed long int)1000000 * t.tv_sec;
  time = time + (signed long int)((signed int)t.tv_nsec / 1000);
  return time;
}

// check_kernel
// file src/cyclictest/cyclictest.c line 1636
static signed int check_kernel(void)
{
  struct utsname kname;
  signed int maj;
  signed int min;
  signed int sub;
  signed int check_kernel$$1$$kv;
  signed int ret;
  ret=uname(&kname);
  if(!(ret == 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(*return_value___errno_location$1);
    fprintf(stderr, "uname failed: %s. Assuming not 2.6\n", return_value_strerror$2);
    return 0;
  }

  sscanf(kname.release, "%d.%d.%d", &maj, &min, &sub);
  if(maj == 2 && min == 6)
  {
    if(!(sub >= 18))
      check_kernel$$1$$kv = 1;

    else
      if(!(sub >= 24))
        check_kernel$$1$$kv = 2;

      else
        if(!(sub >= 28))
        {
          check_kernel$$1$$kv = 3;
          strcpy(functiontracer, "ftrace");
          strcpy(traceroptions, "iter_ctrl");
        }

        else
        {
          check_kernel$$1$$kv = 3;
          strcpy(functiontracer, "function");
          strcpy(traceroptions, "trace_options");
        }
  }

  else
    if(maj >= 3)
    {
      check_kernel$$1$$kv = 4;
      strcpy(functiontracer, "function");
      strcpy(traceroptions, "trace_options");
    }

    else
      check_kernel$$1$$kv = 0;
  return check_kernel$$1$$kv;
}

// check_privs
// file src/include/rt-utils.h line 10
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

// check_timer
// file src/cyclictest/cyclictest.c line 1673
static signed int check_timer(void)
{
  struct timespec ts;
  signed int return_value_clock_getres$1;
  return_value_clock_getres$1=clock_getres(1, &ts);
  if(!(return_value_clock_getres$1 == 0))
    return 1;

  else
    return (signed int)(ts.tv_sec != (signed long int)0 || ts.tv_nsec != (signed long int)1);
}

// cpu_for_thread
// file src/cyclictest/cyclictest.c line 1185
static signed int cpu_for_thread(signed int thread_num, signed int max_cpus)
{
  unsigned int m;
  unsigned int cpu;
  unsigned int i;
  unsigned int num_cpus;
  num_cpus=rt_numa_bitmask_count(affinity_mask);
  m = (unsigned int)thread_num % num_cpus;
  i = (unsigned int)0;
  cpu = (unsigned int)0;
  for( ; !(i >= (unsigned int)max_cpus); i = i + 1u)
  {
    unsigned int return_value_rt_numa_bitmask_isbitset$1;
    return_value_rt_numa_bitmask_isbitset$1=rt_numa_bitmask_isbitset(affinity_mask, (unsigned long int)i);
    if(!(return_value_rt_numa_bitmask_isbitset$1 == 0u))
    {
      if(cpu == m)
        return (signed int)i;

      cpu = cpu + 1u;
    }

  }
  fprintf(stderr, "Bug in cpu mask handling code.\n");
  return 0;
}

// debug
// file src/lib/error.c line 49
void debug(char *fmt, ...)
{
  void **ap = (void **)&fmt;
  fputs("DEBUG: ", stderr);
  err_doit(0, fmt, ap);
  ap = ((void **)NULL);
}

// display_help
// file src/cyclictest/cyclictest.c line 1052
static void display_help(signed int error)
{
  char tracers[256l];
  char *prefix;
  prefix=get_debugfileprefix();
  if((signed int)*prefix == 0)
    strcpy(tracers, "unavailable (debugfs not mounted)");

  else
  {
    fileprefix = prefix;
    signed int return_value_kernvar$1;
    return_value_kernvar$1=kernvar(00, "available_tracers", tracers, sizeof(char [256l]) /*256ul*/ );
    if(!(return_value_kernvar$1 == 0))
      strcpy(tracers, "none");

  }
  printf("cyclictest V %1.2f\n", 0.96);
  printf("Usage:\ncyclictest <options>\n\n-a [CPUSET] --affinity     Run thread #N on processor #N, if possible, or if CPUSET\n                           given, pin threads to that set of processors in round-\n                           robin order.  E.g. -a 2 pins all threads to CPU 2,\n                           but -a 3-5,0 -t 5 will run the first and fifth\n                           threads on CPU (0),thread #2 on CPU 3, thread #3\n                           on CPU 4, and thread #5 on CPU 5.\n-A USEC  --aligned=USEC    align thread wakeups to a specific offset\n-b USEC  --breaktrace=USEC send break trace command when latency > USEC\n-B       --preemptirqs     both preempt and irqsoff tracing (used with -b)\n-c CLOCK --clock=CLOCK     select clock\n                           0 = CLOCK_MONOTONIC (default)\n                           1 = CLOCK_REALTIME\n-C       --context         context switch tracing (used with -b)\n-d DIST  --distance=DIST   distance of thread intervals in us default=500\n-D       --duration=t      specify a length for the test run\n                           default is in seconds, but 'm', 'h', or 'd' maybe added\n                           to modify value to minutes, hours or days\n\t --latency=PM_QOS  write PM_QOS to /dev/cpu_dma_latency\n-E       --event           event tracing (used with -b)\n-f       --ftrace          function trace (when -b is active)\n-F       --fifo=<path>     create a named pipe at path and write stats to it\n-h       --histogram=US    dump a latency histogram to stdout after the run\n                           (with same priority about many threads)\n                           US is the max time to be be tracked in microseconds\n-H       --histofall=US    same as -h except with an additional summary column\n\t --histfile=<path> dump the latency histogram to <path> instead of stdout\n-i INTV  --interval=INTV   base interval of thread in us default=1000\n-I       --irqsoff         Irqsoff tracing (used with -b)\n-l LOOPS --loops=LOOPS     number of loops: default=0(endless)\n\t --laptop\t   Save battery when running cyclictest\n\t\t\t   This will give you poorer realtime results\n\t\t\t   but will not drain your battery so quickly\n-m       --mlockall        lock current and future memory allocations\n-M       --refresh_on_max  delay updating the screen until a new max latency is hit\n-n       --nanosleep       use clock_nanosleep\n\t --notrace\t   suppress tracing\n-N       --nsecs           print results in ns instead of us (default us)\n-o RED   --oscope=RED      oscilloscope mode, reduce verbose output by RED\n-O TOPT  --traceopt=TOPT   trace option\n-p PRIO  --priority=PRIO   priority of highest prio thread\n-P       --preemptoff      Preempt off tracing (used with -b)\n-q       --quiet           print only a summary on exit\n\t --priospread       spread priority levels starting at specified value\n-r       --relative        use relative timer instead of absolute\n-R       --resolution      check clock resolution, calling clock_gettime() many\n                           times.  list of clock_gettime() values will be\n                           reported with -X\n         --secaligned [USEC] align thread wakeups to the next full second,\n                           and apply the optional offset\n-s       --system          use sys_nanosleep and sys_setitimer\n-S       --smp             Standard SMP testing: options -a -t -n and\n                           same priority of all threads\n\t--spike=trigger\t   record all spikes > trigger\n\t--spike-nodes\t   these are the number of spikes we can record\n\t\t\t   the default is 1024 if not specified\n-t       --threads         one thread per available processor\n-t [NUM] --threads=NUM     number of threads:\n                           without NUM, threads = max_cpus\n                           without -t default = 1\n-T TRACE --tracer=TRACER   set tracing function\n    configured tracers: %s\n-u       --unbuffered      force unbuffered output for live processing\n-U       --numa            Standard NUMA testing (similar to SMP option)\n                           thread data structures allocated from local node\n-v       --verbose         output values on stdout for statistics\n                           format: n:c:v n=tasknum c=count v=value in us\n-w       --wakeup          task wakeup tracing (used with -b)\n-W       --wakeuprt        rt task wakeup tracing (used with -b)\n\t --dbg_cyclictest  print info useful for debugging cyclictest\n\t --policy=POLI     policy of realtime thread, POLI may be fifo(default) or rr\n                           format: --policy=fifo(default) or --policy=rr\n", (const void *)tracers);
  if(!(error == 0))
    exit(1);

  exit(0);
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
// file src/include/error.h line 11
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
// file src/include/rt-utils.h line 20
signed int event_disable_all(void)
{
  signed int return_value_setevent$1;
  return_value_setevent$1=setevent("events/enable", "0");
  return return_value_setevent$1;
}

// event_enable
// file src/include/rt-utils.h line 17
signed int event_enable(char *event)
{
  char path[256l];
  sprintf(path, "events/%s/enable", event);
  signed int return_value_setevent$1;
  return_value_setevent$1=setevent(path, "1");
  return return_value_setevent$1;
}

// event_enable_all
// file src/include/rt-utils.h line 19
signed int event_enable_all(void)
{
  signed int return_value_setevent$1;
  return_value_setevent$1=setevent("events/enable", "1");
  return return_value_setevent$1;
}

// fatal
// file src/include/error.h line 16
void fatal(char *fmt, ...)
{
  void **ap = (void **)&fmt;
  fputs("FATAL: ", stderr);
  err_doit(0, fmt, ap);
  ap = ((void **)NULL);
  exit(1);
}

// fifothread
// file src/cyclictest/cyclictest.c line 1847
static void * fifothread(void *param)
{
  signed int ret;
  signed int fd;
  struct _IO_FILE *fp;
  signed int i;
  unlink(fifopath);
  ret=mkfifo(fifopath, (unsigned int)0666);
  if(!(ret == 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(*return_value___errno_location$1);
    fprintf(stderr, "Error creating fifo %s: %s\n", (const void *)fifopath, return_value_strerror$2);
    return (void *)0;
  }

  while(shutdown == 0)
  {
    fd=open(fifopath, 01 | 04000);
    if(!(fd >= 0))
      usleep((unsigned int)500000);

    else
    {
      fp=fdopen(fd, "w");
      i = 0;
      for( ; !(i >= num_threads); i = i + 1)
        print_stat(fp, parameters[(signed long int)i], i, 0, 0);
      fclose(fp);
      usleep((unsigned int)250);
    }
  }
  unlink(fifopath);
  return (void *)0;
}

// get_debugfileprefix
// file src/include/rt-utils.h line 11
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
    return_value_stat$1=stat$link1("/sys/kernel/debug/tracing", &s);
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
      return_value_stat$2=stat$link1("/debug/tracing", &s);
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

            unsigned long int __s1_len;
            unsigned long int __s2_len;
            signed int return_value___builtin_strcmp$5;
            return_value___builtin_strcmp$5=__builtin_strcmp(type, "debugfs");
            tmp_statement_expression$4 = return_value___builtin_strcmp$5;
            if(tmp_statement_expression$4 == 0)
            {
              found = 1;
              break;
            }

            unsigned long int get_debugfileprefix$$1$$3$$3$$__s1_len;
            unsigned long int get_debugfileprefix$$1$$3$$3$$__s2_len;
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

// gettid
// file src/lib/rt-utils.c line 320
signed int gettid(void)
{
  signed long int return_value_syscall$1;
  return_value_syscall$1=syscall((signed long int)186);
  return (signed int)return_value_syscall$1;
}

// handlepolicy
// file src/cyclictest/cyclictest.c line 1224
static void handlepolicy(char *polname)
{
  signed int return_value_strncasecmp$5;
  return_value_strncasecmp$5=strncasecmp(polname, "other", (unsigned long int)5);
  signed int return_value_strncasecmp$4;
  signed int return_value_strncasecmp$3;
  signed int return_value_strncasecmp$2;
  signed int return_value_strncasecmp$1;
  if(return_value_strncasecmp$5 == 0)
    policy = 0;

  else
  {
    return_value_strncasecmp$4=strncasecmp(polname, "batch", (unsigned long int)5);
    if(return_value_strncasecmp$4 == 0)
      policy = 3;

    else
    {
      return_value_strncasecmp$3=strncasecmp(polname, "idle", (unsigned long int)4);
      if(return_value_strncasecmp$3 == 0)
        policy = 5;

      else
      {
        return_value_strncasecmp$2=strncasecmp(polname, "fifo", (unsigned long int)4);
        if(return_value_strncasecmp$2 == 0)
          policy = 1;

        else
        {
          return_value_strncasecmp$1=strncasecmp(polname, "rr", (unsigned long int)2);
          if(return_value_strncasecmp$1 == 0)
            policy = 2;

          else
            policy = 0;
        }
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

// is_cpumask_zero
// file src/cyclictest/cyclictest.c line 1180
static unsigned int is_cpumask_zero(struct bitmask *mask)
{
  unsigned int return_value_rt_numa_bitmask_count$1;
  return_value_rt_numa_bitmask_count$1=rt_numa_bitmask_count(mask);
  return (unsigned int)(return_value_rt_numa_bitmask_count$1 == (unsigned int)0);
}

// kernvar
// file src/cyclictest/cyclictest.c line 316
static signed int kernvar(signed int mode, const char *name, char *value, unsigned long int sizeofvalue)
{
  char filename[128l];
  signed int retval = 1;
  signed int path;
  unsigned long int len_prefix;
  len_prefix=strlen(fileprefix);
  unsigned long int len_name;
  len_name=strlen(name);
  if(1ul + len_name + len_prefix >= 129ul)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 12;
    return 1;
  }

  memcpy((void *)filename, (const void *)fileprefix, len_prefix);
  memcpy((void *)(filename + (signed long int)len_prefix), (const void *)name, len_name + (unsigned long int)1);
  path=open(filename, mode);
  if(path >= 0)
  {
    if(mode == 00)
    {
      signed int got;
      signed long int return_value_read$2;
      return_value_read$2=read(path, (void *)value, sizeofvalue);
      got = (signed int)return_value_read$2;
      if(got >= 1)
      {
        retval = 0;
        value[(signed long int)(got - 1)] = (char)0;
      }

    }

    else
      if(mode == 01)
      {
        signed long int return_value_write$3;
        return_value_write$3=write(path, (const void *)value, sizeofvalue);
        if((unsigned long int)return_value_write$3 == sizeofvalue)
          retval = 0;

      }

    close(path);
  }

  return retval;
}

// main
// file src/cyclictest/cyclictest.c line 1929
signed int main(signed int argc, char **argv)
{
  struct anonymous$0 sigset;
  signed int signum = 14;
  signed int mode;
  signed int max_cpus;
  signed long int return_value_sysconf$1;
  return_value_sysconf$1=sysconf(84);
  max_cpus = (signed int)return_value_sysconf$1;
  signed int i;
  signed int ret = -1;
  signed int status;
  process_options(argc, argv, max_cpus);
  signed int return_value_check_privs$2;
  return_value_check_privs$2=check_privs();
  if(!(return_value_check_privs$2 == 0))
    exit(1);

  if(!(verbose == 0))
    printf("Max CPUs = %d\n", max_cpus);

  if(!(trigger == 0))
  {
    signed int retval;
    retval=trigger_init();
    if(!(retval == 0))
    {
      fprintf(stderr, "trigger_init() failed\n");
      exit(1);
    }

  }

  signed int return_value_mlockall$3;
  signed int return_value_check_timer$4;
  void *return_value_calloc$9;
  void *return_value_calloc$10;
  char *return_value_strerror$11;
  _Bool tmp_if_expr$18;
  char *return_value_strerror$20;
  char *return_value_strerror$21;
  if(!(lockall == 0))
  {
    return_value_mlockall$3=mlockall(1 | 2);
    if(!(return_value_mlockall$3 == -1))
      goto __CPROVER_DUMP_L5;

    perror("mlockall");
  }

  else
  {

  __CPROVER_DUMP_L5:
    ;
    set_latency_target();
    kernelversion=check_kernel();
    if(kernelversion == 0)
      warn("Running on unknown kernel version...YMMV\n");

    setup_tracer();
    return_value_check_timer$4=check_timer();
    if(!(return_value_check_timer$4 == 0))
      warn("High resolution timers not available\n");

    if(!(check_clock_resolution == 0))
    {
      signed int clock;
      unsigned long int diff;
      signed int k;
      unsigned long int min_non_zero_diff = 18446744073709551615UL;
      struct timespec now;
      struct timespec prev;
      unsigned long int reported_resolution = 18446744073709551615UL;
      struct timespec res;
      struct timespec *time;
      signed int times;
      clock = clocksources[(signed long int)clocksel];
      signed int return_value_clock_getres$5;
      return_value_clock_getres$5=clock_getres(clock, &res);
      if(!(return_value_clock_getres$5 == 0))
        warn("clock_getres failed");

      else
        reported_resolution = (unsigned long int)((signed long int)1000000000 * res.tv_sec + res.tv_nsec);
      times = 1000;
      clock_gettime(clock, &prev);
      k = 0;
      for( ; !(k >= times); k = k + 1)
        clock_gettime(clock, &now);
      signed long int return_value_calcdiff_ns$6;
      return_value_calcdiff_ns$6=calcdiff_ns(now, prev);
      diff = (unsigned long int)return_value_calcdiff_ns$6;
      if(diff == 0ul)
        times = -1;

      else
      {
        signed int call_time = (signed int)(diff / (unsigned long int)times);
        times = 1000000000 / call_time;
        times = times / 1000;
        if(!(times >= 1000))
          times = 1000;

      }
      if(times >= 100001 || !(times >= 1))
        times = 100000;

      void *return_value_calloc$7;
      return_value_calloc$7=calloc((unsigned long int)times, sizeof(struct timespec) /*16ul*/ );
      time = (struct timespec *)return_value_calloc$7;
      k = 0;
      for( ; !(k >= times); k = k + 1)
        clock_gettime(clock, &time[(signed long int)k]);
      if(!(ct_debug == 0))
      {
        info("For %d consecutive calls to clock_gettime():\n", times);
        info("time, delta time (nsec)\n");
      }

      prev = time[(signed long int)0];
      k = 1;
      for( ; !(k >= times); k = k + 1)
      {
        signed long int return_value_calcdiff_ns$8;
        return_value_calcdiff_ns$8=calcdiff_ns(time[(signed long int)k], prev);
        diff = (unsigned long int)return_value_calcdiff_ns$8;
        prev = time[(signed long int)k];
        if(!(diff == 0ul) && !(diff >= min_non_zero_diff))
          min_non_zero_diff = diff;

        if(!(ct_debug == 0))
          info("%ld.%06ld  %5llu\n", (time + (signed long int)k)->tv_sec, (time + (signed long int)k)->tv_nsec, (unsigned long long int)diff);

      }
      free((void *)time);
      if(!(min_non_zero_diff == 0ul) && !(reported_resolution >= min_non_zero_diff) || !(verbose == 0))
      {
        warn("reported clock resolution: %llu nsec\n", (unsigned long long int)reported_resolution);
        warn("measured clock resolution approximately: %llu nsec\n", (unsigned long long int)min_non_zero_diff);
      }

    }

    mode = use_nanosleep + use_system;
    sigemptyset(&sigset);
    sigaddset(&sigset, signum);
    sigprocmask(0, &sigset, (struct anonymous$0 *)(void *)0);
    signal(2, sighand);
    signal(15, sighand);
    signal(10, sighand);
    return_value_calloc$9=calloc((unsigned long int)num_threads, sizeof(struct thread_param *) /*8ul*/ );
    parameters = (struct thread_param **)return_value_calloc$9;
    if(!(parameters == ((struct thread_param **)NULL)))
    {
      return_value_calloc$10=calloc((unsigned long int)num_threads, sizeof(struct thread_stat *) /*8ul*/ );
      statistics = (struct thread_stat **)return_value_calloc$10;
      if(!(statistics == ((struct thread_stat **)NULL)))
      {
        i = 0;
        for( ; !(i >= num_threads); i = i + 1)
        {
          union pthread_attr_t attr;
          signed int node;
          struct thread_param *par;
          struct thread_stat *main$$1$$4$$1$$stat;
          status=pthread_attr_init(&attr);
          if(!(status == 0))
          {
            return_value_strerror$11=strerror(status);
            fatal("error from pthread_attr_init for thread %d: %s\n", i, return_value_strerror$11);
          }

          node = -1;
          if(!(numa == 0))
          {
            void *stack;
            void *currstk;
            unsigned long int stksize;
            node=rt_numa_numa_node_of_cpu(i);
            signed int return_value_pthread_attr_getstack$12;
            return_value_pthread_attr_getstack$12=pthread_attr_getstack(&attr, &currstk, &stksize);
            if(!(return_value_pthread_attr_getstack$12 == 0))
              fatal("failed to get stack size for thread %d\n", i);

            if(stksize == 0ul)
              stksize = (unsigned long int)(16384 * 2);

            stack=rt_numa_numa_alloc_onnode(stksize, node, i);
            signed int return_value_pthread_attr_setstack$13;
            return_value_pthread_attr_setstack$13=pthread_attr_setstack(&attr, stack, stksize);
            if(!(return_value_pthread_attr_setstack$13 == 0))
              fatal("failed to set stack addr for thread %d to 0x%x\n", i, stack + (signed long int)stksize);

          }

          void *return_value_threadalloc$14;
          return_value_threadalloc$14=threadalloc(sizeof(struct thread_param) /*72ul*/ , node);
          par = (struct thread_param *)return_value_threadalloc$14;
          parameters[(signed long int)i] = par;
          if(par == ((struct thread_param *)NULL))
            fatal("error allocating thread_param struct for thread %d\n", i);

          memset((void *)par, 0, sizeof(struct thread_param) /*72ul*/ );
          void *return_value_threadalloc$15;
          return_value_threadalloc$15=threadalloc(sizeof(struct thread_stat) /*128ul*/ , node);
          main$$1$$4$$1$$stat = (struct thread_stat *)return_value_threadalloc$15;
          statistics[(signed long int)i] = main$$1$$4$$1$$stat;
          if(main$$1$$4$$1$$stat == ((struct thread_stat *)NULL))
            fatal("error allocating thread status struct for thread %d\n", i);

          memset((void *)main$$1$$4$$1$$stat, 0, sizeof(struct thread_stat) /*128ul*/ );
          if(!(histogram == 0))
          {
            signed int bufsize = (signed int)((unsigned long int)histogram * sizeof(signed long int) /*8ul*/ );
            void *return_value_threadalloc$16;
            return_value_threadalloc$16=threadalloc((unsigned long int)bufsize, node);
            main$$1$$4$$1$$stat->hist_array = (signed long int *)return_value_threadalloc$16;
            void *return_value_threadalloc$17;
            return_value_threadalloc$17=threadalloc((unsigned long int)bufsize, node);
            main$$1$$4$$1$$stat->outliers = (signed long int *)return_value_threadalloc$17;
            if(main$$1$$4$$1$$stat->hist_array == ((signed long int *)NULL))
              tmp_if_expr$18 = (_Bool)1;

            else
              tmp_if_expr$18 = main$$1$$4$$1$$stat->outliers == (signed long int *)(void *)0 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr$18)
              fatal("failed to allocate histogram of size %d on node %d\n", histogram, i);

            memset((void *)main$$1$$4$$1$$stat->hist_array, 0, (unsigned long int)bufsize);
            memset((void *)main$$1$$4$$1$$stat->outliers, 0, (unsigned long int)bufsize);
          }

          if(!(verbose == 0))
          {
            signed int main$$1$$4$$1$$3$$bufsize = (signed int)((unsigned long int)16384 * sizeof(signed long int) /*8ul*/ );
            void *return_value_threadalloc$19;
            return_value_threadalloc$19=threadalloc((unsigned long int)main$$1$$4$$1$$3$$bufsize, node);
            main$$1$$4$$1$$stat->values = (signed long int *)return_value_threadalloc$19;
            if(main$$1$$4$$1$$stat->values == ((signed long int *)NULL))
              goto outall;

            memset((void *)main$$1$$4$$1$$stat->values, 0, (unsigned long int)main$$1$$4$$1$$3$$bufsize);
            par->bufmsk = 16384 - 1;
          }

          par->prio = priority;
          if(!(priority == 0) && (policy == 1 || policy == 2))
            par->policy = policy;

          else
          {
            par->policy = 0;
            force_sched_other = 1;
          }
          if(!(priospread == 0))
            priority = priority - 1;

          par->clock = clocksources[(signed long int)clocksel];
          par->mode = mode;
          par->timermode = timermode;
          par->signal = signum;
          par->interval = (unsigned long int)interval;
          if(histogram == 0)
            interval = interval + distance;

          if(!(verbose == 0))
            printf("Thread %d Interval: %d\n", i, interval);

          par->max_cycles = (unsigned long int)max_cycles;
          par->stats = main$$1$$4$$1$$stat;
          par->node = node;
          par->tnum = i;
          switch(setaffinity)
          {
            case 0:
            {
              par->cpu = -1;
              break;
            }
            case 1:
            {
              par->cpu=cpu_for_thread(i, max_cpus);
              if(!(verbose == 0))
                printf("Thread %d using cpu %d.\n", i, par->cpu);

              break;
            }
            case 2:
              par->cpu = i % max_cpus;
          }
          main$$1$$4$$1$$stat->min = (signed long int)1000000;
          main$$1$$4$$1$$stat->max = (signed long int)0;
          main$$1$$4$$1$$stat->avg = 0.0;
          main$$1$$4$$1$$stat->threadstarted = 1;
          status=pthread_create(&main$$1$$4$$1$$stat->thread, &attr, timerthread, (void *)par);
          if(!(status == 0))
          {
            return_value_strerror$20=strerror(status);
            fatal("failed to create thread %d: %s\n", i, return_value_strerror$20);
          }

        }
        if(!(use_fifo == 0))
        {
          status=pthread_create(&fifo_threadid, (const union pthread_attr_t *)(void *)0, fifothread, (void *)0);
          if(!(status == 0))
          {
            return_value_strerror$21=strerror(status);
            fatal("failed to create fifo thread: %s\n", return_value_strerror$21);
          }

        }

        while(shutdown == 0)
        {
          char lavg[256l];
          signed int fd;
          signed int len;
          signed int allstopped = 0;
          static char *policystr = (char *)(void *)0;
          if(policystr == ((char *)NULL))
            policystr=policyname(policy);

          static char *policystr2;
          static char *slash = (char *)(void *)0;
          if(slash == ((char *)NULL))
          {
            if(!(force_sched_other == 0))
            {
              slash = "/";
              policystr2=policyname(0);
            }

            else
            {
              policystr2 = "";
              slash = policystr2;
            }
          }

          if(quiet == 0 && verbose == 0)
          {
            fd=open("/proc/loadavg", 00, 0666);
            signed long int return_value_read$22;
            return_value_read$22=read(fd, (void *)&lavg, (unsigned long int)255);
            len = (signed int)return_value_read$22;
            close(fd);
            lavg[(signed long int)(len - 1)] = (char)0x0;
            printf("policy: %s%s%s: loadavg: %s          \n\n", policystr, slash, policystr2, (const void *)lavg);
          }

          i = 0;
          for( ; !(i >= num_threads); i = i + 1)
          {
            print_stat(stdout, parameters[(signed long int)i], i, verbose, quiet);
            if(!(max_cycles == 0))
            {
              if(statistics[(signed long int)i]->cycles >= (unsigned long int)max_cycles)
                allstopped = allstopped + 1;

            }

          }
          usleep((unsigned int)10000);
          if(!(allstopped == 0) || !(shutdown == 0))
            break;

          if(quiet == 0 && verbose == 0)
            printf("\033[%dA", num_threads + 2);

          if(!(refresh_on_max == 0))
          {
            pthread_mutex_lock(&refresh_on_max_lock);
            pthread_cond_wait(&refresh_on_max_cond, &refresh_on_max_lock);
            pthread_mutex_unlock(&refresh_on_max_lock);
          }

        }
        ret = 0;

      outall:
        ;
        shutdown = 1;
        usleep((unsigned int)50000);
        if(!(quiet == 0))
          quiet = 2;

        i = 0;
        for( ; !(i >= num_threads); i = i + 1)
        {
          if(statistics[(signed long int)i]->threadstarted >= 1)
            pthread_kill(statistics[(signed long int)i]->thread, 15);

          if(!(statistics[(signed long int)i]->threadstarted == 0))
          {
            pthread_join(statistics[(signed long int)i]->thread, (void **)(void *)0);
            if(histogram == 0 && !(quiet == 0))
              print_stat(stdout, parameters[(signed long int)i], i, 0, 0);

          }

          if(!(statistics[(signed long int)i]->values == ((signed long int *)NULL)))
            threadfree((void *)statistics[(signed long int)i]->values, (unsigned long int)16384 * sizeof(signed long int) /*8ul*/ , parameters[(signed long int)i]->node);

        }
        if(!(trigger == 0))
          trigger_print();

        if(!(histogram == 0))
        {
          print_hist(parameters, num_threads);
          i = 0;
          for( ; !(i >= num_threads); i = i + 1)
          {
            threadfree((void *)statistics[(signed long int)i]->hist_array, (unsigned long int)histogram * sizeof(signed long int) /*8ul*/ , parameters[(signed long int)i]->node);
            threadfree((void *)statistics[(signed long int)i]->outliers, (unsigned long int)histogram * sizeof(signed long int) /*8ul*/ , parameters[(signed long int)i]->node);
          }
        }

        if(!(tracelimit == 0))
        {
          print_tids(parameters, num_threads);
          if(!(break_thread_id == 0))
          {
            printf("# Break thread: %d\n", break_thread_id);
            printf("# Break value: %llu\n", (unsigned long long int)break_thread_value);
          }

        }

        i = 0;
        for( ; !(i >= num_threads); i = i + 1)
          if(!(statistics[(signed long int)i] == ((struct thread_stat *)NULL)))
            threadfree((void *)statistics[(signed long int)i], sizeof(struct thread_stat) /*128ul*/ , parameters[(signed long int)i]->node);

      }


    outpar:
      ;
      i = 0;
      for( ; !(i >= num_threads); i = i + 1)
        if(!(parameters[(signed long int)i] == ((struct thread_param *)NULL)))
          threadfree((void *)parameters[(signed long int)i], sizeof(struct thread_param) /*72ul*/ , parameters[(signed long int)i]->node);

    }

  }

out:
  ;
  if(notrace == 0 && !(tracelimit == 0))
    tracing(0);

  if(tracemark_fd >= 0)
    close(tracemark_fd);

  if(trace_fd >= 0)
    close(trace_fd);

  if(!(enable_events == 0))
    event_disable_all();

  fileprefix = procfileprefix;
  if(notrace == 0 && !(tracetype == 0))
    setkernvar("ftrace_enabled", "0");

  fileprefix=get_debugfileprefix();
  if(!(lockall == 0))
    munlockall();

  if(!(kernelversion >= 3))
    restorekernvars();

  if(latency_target_fd >= 0)
    close(latency_target_fd);

  if(!(affinity_mask == ((struct bitmask *)NULL)))
    rt_bitmask_free(affinity_mask);

  exit(ret);
}

// mount_debugfs
// file src/include/rt-utils.h line 12
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

// numa_on_and_available
// file src/cyclictest/rt_numa.h line 195
static void numa_on_and_available()
{
  signed int return_value_numa_available$1;
  if(!(numa == 0))
  {
    return_value_numa_available$1=numa_available();
    if(return_value_numa_available$1 == -1)
      fatal("--numa specified and numa functions not available.\n");

  }

}

// parse_cpumask
// file src/cyclictest/cyclictest.c line 1205
static void parse_cpumask(const char *option, const signed int max_cpus)
{
  affinity_mask=rt_numa_parse_cpustring(option, max_cpus);
  if(!(affinity_mask == ((struct bitmask *)NULL)))
  {
    unsigned int return_value_is_cpumask_zero$1;
    return_value_is_cpumask_zero$1=is_cpumask_zero(affinity_mask);
    if(!(return_value_is_cpumask_zero$1 == 0u))
    {
      rt_bitmask_free(affinity_mask);
      affinity_mask = (struct bitmask *)(void *)0;
    }

  }

  if(affinity_mask == ((struct bitmask *)NULL))
    display_help(1);

  if(!(verbose == 0))
  {
    unsigned int return_value_rt_numa_bitmask_count$2;
    return_value_rt_numa_bitmask_count$2=rt_numa_bitmask_count(affinity_mask);
    printf("%s: Using %u cpus.\n", (const void *)"parse_cpumask", return_value_rt_numa_bitmask_count$2);
  }

}

// parse_time_string
// file src/cyclictest/cyclictest.c line 676
static signed int parse_time_string(char *val)
{
  char *end;
  signed int t;
  signed long int return_value_strtol$1;
  return_value_strtol$1=strtol(val, &end, 10);
  t = (signed int)return_value_strtol$1;
  if(!(end == ((char *)NULL)))
    switch((signed int)*end)
    {
      case 109:

      case 77:
      {
        t = t * 60;
        break;
      }
      case 104:

      case 72:
      {
        t = t * 60 * 60;
        break;
      }
      case 100:

      case 68:
        t = t * 24 * 60 * 60;
      default:
        ;
    }

  return t;
}

// policy_to_string
// file src/lib/rt-utils.c line 282
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

// policyname
// file src/cyclictest/cyclictest.c line 1240
static char * policyname(signed int policy)
{
  char *policystr = "";
  switch(policy)
  {
    case 0:
    {
      policystr = "other";
      break;
    }
    case 1:
    {
      policystr = "fifo";
      break;
    }
    case 2:
    {
      policystr = "rr";
      break;
    }
    case 3:
    {
      policystr = "batch";
      break;
    }
    case 5:
      policystr = "idle";
  }
  return policystr;
}

// print_hist
// file src/cyclictest/cyclictest.c line 1715
static void print_hist(struct thread_param **par, signed int nthreads)
{
  signed int i;
  signed int j;
  const signed long int j$array_size0 = (signed long int)(nthreads + 1);
  unsigned long long int log_entries[j$array_size0];
  unsigned long int maxmax;
  unsigned long int alloverflows;
  struct _IO_FILE *fd;
  bzero((void *)log_entries, 8ul * (unsigned long int)j$array_size0);
  if(!(use_histfile == 0))
  {
    fd=fopen(histfile, "w");
    if(fd == ((struct _IO_FILE *)NULL))
    {
      perror("opening histogram file:");
      goto __CPROVER_DUMP_L32;
    }

  }

  else
    fd = stdout;
  fprintf(fd, "# Histogram\n");
  i = 0;
  for( ; !(i >= histogram); i = i + 1)
  {
    unsigned long long int allthreads = (unsigned long long int)0;
    fprintf(fd, "%06d ", i);
    j = 0;
    for( ; !(j >= nthreads); j = j + 1)
    {
      unsigned long int curr_latency = (unsigned long int)par[(signed long int)j]->stats->hist_array[(signed long int)i];
      fprintf(fd, "%06lu", curr_latency);
      if(!(j >= nthreads + -1))
        fprintf(fd, "\t");

      log_entries[(signed long int)j] = log_entries[(signed long int)j] + curr_latency;
      allthreads = allthreads + curr_latency;
    }
    if(nthreads >= 2 && !(histofall == 0))
    {
      fprintf(fd, "\t%06llu", allthreads);
      log_entries[(signed long int)nthreads] = log_entries[(signed long int)nthreads] + allthreads;
    }

    fprintf(fd, "\n");
  }
  fprintf(fd, "# Total:");
  j = 0;
  for( ; !(j >= nthreads); j = j + 1)
    fprintf(fd, " %09llu", log_entries[(signed long int)j]);
  if(nthreads >= 2 && !(histofall == 0))
    fprintf(fd, " %09llu", log_entries[(signed long int)nthreads]);

  fprintf(fd, "\n");
  fprintf(fd, "# Min Latencies:");
  j = 0;
  for( ; !(j >= nthreads); j = j + 1)
    fprintf(fd, " %05lu", par[(signed long int)j]->stats->min);
  fprintf(fd, "\n");
  fprintf(fd, "# Avg Latencies:");
  j = 0;
  signed long int tmp_if_expr$1;
  for( ; !(j >= nthreads); j = j + 1)
  {
    if(!(par[(signed long int)j]->stats->cycles == 0ul))
      tmp_if_expr$1 = (signed long int)(par[(signed long int)j]->stats->avg / (double)par[(signed long int)j]->stats->cycles);

    else
      tmp_if_expr$1 = (signed long int)0;
    fprintf(fd, " %05lu", tmp_if_expr$1);
  }
  fprintf(fd, "\n");
  fprintf(fd, "# Max Latencies:");
  maxmax = (unsigned long int)0;
  j = 0;
  for( ; !(j >= nthreads); j = j + 1)
  {
    fprintf(fd, " %05lu", par[(signed long int)j]->stats->max);
    if(!(maxmax >= (unsigned long int)par[(signed long int)j]->stats->max))
      maxmax = (unsigned long int)par[(signed long int)j]->stats->max;

  }
  if(nthreads >= 2 && !(histofall == 0))
    fprintf(fd, " %05lu", maxmax);

  fprintf(fd, "\n");
  fprintf(fd, "# Histogram Overflows:");
  alloverflows = (unsigned long int)0;
  j = 0;
  for( ; !(j >= nthreads); j = j + 1)
  {
    fprintf(fd, " %05lu", par[(signed long int)j]->stats->hist_overflow);
    alloverflows = alloverflows + (unsigned long int)par[(signed long int)j]->stats->hist_overflow;
  }
  if(nthreads >= 2 && !(histofall == 0))
    fprintf(fd, " %05lu", alloverflows);

  fprintf(fd, "\n");
  fprintf(fd, "# Histogram Overflow at cycle number:\n");
  i = 0;
  for( ; !(i >= nthreads); i = i + 1)
  {
    fprintf(fd, "# Thread %d:", i);
    j = 0;
    for( ; !((signed long int)j >= par[(signed long int)i]->stats->num_outliers); j = j + 1)
      fprintf(fd, " %05lu", par[(signed long int)i]->stats->outliers[(signed long int)j]);
    if(!(par[(signed long int)i]->stats->num_outliers >= par[(signed long int)i]->stats->hist_overflow))
      fprintf(fd, " # %05lu others", par[(signed long int)i]->stats->hist_overflow - par[(signed long int)i]->stats->num_outliers);

    fprintf(fd, "\n");
  }
  fprintf(fd, "\n");
  if(!(use_histfile == 0))
    fclose(fd);


__CPROVER_DUMP_L32:
  ;
}

// print_stat
// file src/cyclictest/cyclictest.c line 1804
static void print_stat(struct _IO_FILE *fp, struct thread_param *par, signed int index, signed int verbose, signed int quiet)
{
  struct thread_stat *print_stat$$1$$stat = par->stats;
  signed long int tmp_if_expr$1;
  if(verbose == 0)
  {
    if(!(quiet == 1))
    {
      char *fmt;
      if(!(use_nsecs == 0))
        fmt = "T:%2d (%5d) P:%2d I:%ld C:%7lu Min:%7ld Act:%8ld Avg:%8ld Max:%8ld\n";

      else
        fmt = "T:%2d (%5d) P:%2d I:%ld C:%7lu Min:%7ld Act:%5ld Avg:%5ld Max:%8ld\n";
      if(!(print_stat$$1$$stat->cycles == 0ul))
        tmp_if_expr$1 = (signed long int)(print_stat$$1$$stat->avg / (double)print_stat$$1$$stat->cycles);

      else
        tmp_if_expr$1 = (signed long int)0;
      fprintf(fp, fmt, index, print_stat$$1$$stat->tid, par->prio, par->interval, print_stat$$1$$stat->cycles, print_stat$$1$$stat->min, print_stat$$1$$stat->act, tmp_if_expr$1, print_stat$$1$$stat->max);
    }

  }

  else
    while(!(print_stat$$1$$stat->cycles == print_stat$$1$$stat->cyclesread))
    {
      signed long int diff = print_stat$$1$$stat->values[(signed long int)(print_stat$$1$$stat->cyclesread & (unsigned long int)par->bufmsk)];
      if(!(print_stat$$1$$stat->redmax >= diff))
      {
        print_stat$$1$$stat->redmax = diff;
        print_stat$$1$$stat->cycleofmax = (signed long int)print_stat$$1$$stat->cyclesread;
      }

      print_stat$$1$$stat->reduce = print_stat$$1$$stat->reduce + 1l;
      if(print_stat$$1$$stat->reduce == (signed long int)oscope_reduction)
      {
        fprintf(fp, "%8d:%8lu:%8ld\n", index, print_stat$$1$$stat->cycleofmax, print_stat$$1$$stat->redmax);
        print_stat$$1$$stat->reduce = (signed long int)0;
        print_stat$$1$$stat->redmax = (signed long int)0;
      }

      print_stat$$1$$stat->cyclesread = print_stat$$1$$stat->cyclesread + 1ul;
    }
}

// print_tids
// file src/cyclictest/cyclictest.c line 1705
static void print_tids(struct thread_param **par, signed int nthreads)
{
  signed int i;
  printf("# Thread Ids:");
  i = 0;
  for( ; !(i >= nthreads); i = i + 1)
    printf(" %05d", par[(signed long int)i]->stats->tid);
  printf("\n");
}

// process_options
// file src/cyclictest/cyclictest.c line 1279
static void process_options(signed int argc, char **argv, signed int max_cpus)
{
  signed int error = 0;
  signed int option_affinity = 0;
  _Bool tmp_if_expr$2;
  signed int return_value_atoi$1;
  signed int return_value_atoi$3;
  _Bool tmp_if_expr$6;
  signed int return_value_atoi$5;
  signed int return_value_atoi$4;
  unsigned long int return_value_strlen$7;
  unsigned long int return_value_strlen$8;
  signed int return_value_atoi$9;
  _Bool tmp_if_expr$12;
  signed int return_value_atoi$11;
  signed int return_value_atoi$10;
  _Bool tmp_if_expr$14;
  signed int return_value_atoi$13;
  do
  {
    signed int option_index = 0;
    signed int c;
    static struct option long_options[48l] = { { .name="affinity", .has_arg=2, .flag=(signed int *)(void *)0, .val=1 },
    { .name="notrace", .has_arg=0, .flag=(signed int *)(void *)0, .val=2 },
    { .name="aligned", .has_arg=2, .flag=(signed int *)(void *)0, .val=46 },
    { .name="breaktrace", .has_arg=1, .flag=(signed int *)(void *)0, .val=3 },
    { .name="preemptirqs", .has_arg=0, .flag=(signed int *)(void *)0, .val=4 },
    { .name="clock", .has_arg=1, .flag=(signed int *)(void *)0, .val=5 },
    { .name="context", .has_arg=0, .flag=(signed int *)(void *)0, .val=6 },
    { .name="distance", .has_arg=1, .flag=(signed int *)(void *)0, .val=7 },
    { .name="duration", .has_arg=1, .flag=(signed int *)(void *)0, .val=8 },
    { .name="latency", .has_arg=1, .flag=(signed int *)(void *)0, .val=9 },
    { .name="event", .has_arg=0, .flag=(signed int *)(void *)0, .val=10 },
    { .name="ftrace", .has_arg=0, .flag=(signed int *)(void *)0, .val=11 },
    { .name="fifo", .has_arg=1, .flag=(signed int *)(void *)0, .val=12 },
    { .name="histogram", .has_arg=1, .flag=(signed int *)(void *)0, .val=13 },
    { .name="histofall", .has_arg=1, .flag=(signed int *)(void *)0, .val=14 },
    { .name="histfile", .has_arg=1, .flag=(signed int *)(void *)0, .val=15 },
    { .name="interval", .has_arg=1, .flag=(signed int *)(void *)0, .val=16 },
    { .name="irqsoff", .has_arg=0, .flag=(signed int *)(void *)0, .val=17 },
    { .name="laptop", .has_arg=0, .flag=(signed int *)(void *)0, .val=48 },
    { .name="loops", .has_arg=1, .flag=(signed int *)(void *)0, .val=18 },
    { .name="mlockall", .has_arg=0, .flag=(signed int *)(void *)0, .val=19 },
    { .name="refresh_on_max", .has_arg=0, .flag=(signed int *)(void *)0, .val=20 },
    { .name="nanosleep", .has_arg=0, .flag=(signed int *)(void *)0, .val=21 },
    { .name="nsecs", .has_arg=0, .flag=(signed int *)(void *)0, .val=22 },
    { .name="oscope", .has_arg=1, .flag=(signed int *)(void *)0, .val=23 },
    { .name="traceopt", .has_arg=1, .flag=(signed int *)(void *)0, .val=24 },
    { .name="priority", .has_arg=1, .flag=(signed int *)(void *)0, .val=25 },
    { .name="preemptoff", .has_arg=0, .flag=(signed int *)(void *)0, .val=26 },
    { .name="quiet", .has_arg=0, .flag=(signed int *)(void *)0, .val=27 },
    { .name="priospread", .has_arg=0, .flag=(signed int *)(void *)0, .val=28 },
    { .name="relative", .has_arg=0, .flag=(signed int *)(void *)0, .val=29 },
    { .name="resolution", .has_arg=0, .flag=(signed int *)(void *)0, .val=30 },
    { .name="secaligned", .has_arg=2, .flag=(signed int *)(void *)0, .val=47 },
    { .name="system", .has_arg=0, .flag=(signed int *)(void *)0, .val=31 },
    { .name="smp", .has_arg=0, .flag=(signed int *)(void *)0, .val=32 },
    { .name="spike", .has_arg=1, .flag=(signed int *)(void *)0, .val=35 },
    { .name="spike-nodes", .has_arg=1, .flag=(signed int *)(void *)0, .val=36 },
    { .name="threads", .has_arg=2, .flag=(signed int *)(void *)0, .val=33 },
    { .name="tracer", .has_arg=1, .flag=(signed int *)(void *)0, .val=34 },
    { .name="unbuffered", .has_arg=0, .flag=(signed int *)(void *)0, .val=37 },
    { .name="numa", .has_arg=0, .flag=(signed int *)(void *)0, .val=38 },
    { .name="verbose", .has_arg=0, .flag=(signed int *)(void *)0, .val=39 },
    { .name="wakeup", .has_arg=0, .flag=(signed int *)(void *)0, .val=40 },
    { .name="wakeuprt", .has_arg=0, .flag=(signed int *)(void *)0, .val=41 },
    { .name="dbg_cyclictest", .has_arg=0, .flag=(signed int *)(void *)0, .val=42 },
    { .name="policy", .has_arg=1, .flag=(signed int *)(void *)0, .val=43 },
    { .name="help", .has_arg=0, .flag=(signed int *)(void *)0, .val=44 },
    { .name=(const char *)(void *)0, .has_arg=0, .flag=(signed int *)(void *)0,
    .val=0 } };
    c=getopt_long(argc, argv, "a::A::b:Bc:Cd:D:Efh:H:i:Il:MnNo:O:p:PmqrRsSt::uUvD:wWT:", long_options, &option_index);
    if(c == -1)
      break;

    switch(c)
    {
      case 97:

      case 1:
      {
        option_affinity = 1;
        if(!(numa == 0) || !(smp == 0))
          break;

        if(!(optarg == ((char *)NULL)))
        {
          parse_cpumask(optarg, max_cpus);
          setaffinity = 1;
        }

        else
        {
          if(!(optind >= argc))
          {
            return_value_atoi$1=atoi(argv[(signed long int)optind]);
            tmp_if_expr$2 = return_value_atoi$1 != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$2 = (_Bool)0;
          if(tmp_if_expr$2)
          {
            parse_cpumask(argv[(signed long int)optind], max_cpus);
            setaffinity = 1;
          }

          else
            setaffinity = 2;
        }
        break;
      }
      case 65:

      case 46:
      {
        aligned = 1;
        if(!(optarg == ((char *)NULL)))
        {
          return_value_atoi$3=atoi(optarg);
          offset = return_value_atoi$3 * 1000;
        }

        else
        {
          if(!(optind >= argc))
          {
            return_value_atoi$5=atoi(argv[(signed long int)optind]);
            tmp_if_expr$6 = return_value_atoi$5 != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$6 = (_Bool)0;
          if(tmp_if_expr$6)
          {
            return_value_atoi$4=atoi(argv[(signed long int)optind]);
            offset = return_value_atoi$4 * 1000;
          }

          else
            offset = 0;
        }
        break;
      }
      case 98:

      case 3:
      {
        tracelimit=atoi(optarg);
        break;
      }
      case 66:

      case 4:
      {
        tracetype = 4;
        break;
      }
      case 99:

      case 5:
      {
        clocksel=atoi(optarg);
        break;
      }
      case 67:

      case 6:
      {
        tracetype = 1;
        break;
      }
      case 100:

      case 7:
      {
        distance=atoi(optarg);
        break;
      }
      case 68:

      case 8:
      {
        duration=parse_time_string(optarg);
        break;
      }
      case 69:

      case 10:
      {
        enable_events = 1;
        break;
      }
      case 102:

      case 11:
      {
        tracetype = 8;
        ftrace = 1;
        break;
      }
      case 70:

      case 12:
      {
        use_fifo = 1;
        return_value_strlen$7=strlen(optarg);
        __builtin_strncpy(fifopath, optarg, return_value_strlen$7);
        break;
      }
      case 72:

      case 14:
        histofall = 1;
      case 104:

      case 13:
      {
        histogram=atoi(optarg);
        break;
      }
      case 15:
      {
        use_histfile = 1;
        return_value_strlen$8=strlen(optarg);
        __builtin_strncpy(histfile, optarg, return_value_strlen$8);
        break;
      }
      case 105:

      case 16:
      {
        interval=atoi(optarg);
        break;
      }
      case 73:

      case 17:
      {
        if(tracetype == 3)
        {
          tracetype = 4;
          __builtin_strncpy(tracer, "preemptirqsoff", sizeof(char [256l]) /*256ul*/ );
        }

        else
        {
          tracetype = 2;
          __builtin_strncpy(tracer, "irqsoff", sizeof(char [256l]) /*256ul*/ );
        }
        break;
      }
      case 108:

      case 18:
      {
        max_cycles=atoi(optarg);
        break;
      }
      case 109:

      case 19:
      {
        lockall = 1;
        break;
      }
      case 77:

      case 20:
      {
        refresh_on_max = 1;
        break;
      }
      case 110:

      case 21:
      {
        use_nanosleep = 1;
        break;
      }
      case 78:

      case 22:
      {
        use_nsecs = 1;
        break;
      }
      case 111:

      case 23:
      {
        oscope_reduction=atoi(optarg);
        break;
      }
      case 79:

      case 24:
      {
        traceopt(optarg);
        break;
      }
      case 112:

      case 25:
      {
        priority=atoi(optarg);
        if(!(policy == 1) && !(policy == 2))
          policy = 1;

        break;
      }
      case 80:

      case 26:
      {
        if(tracetype == 2)
        {
          tracetype = 4;
          __builtin_strncpy(tracer, "preemptirqsoff", sizeof(char [256l]) /*256ul*/ );
        }

        else
        {
          tracetype = 3;
          __builtin_strncpy(tracer, "preemptoff", sizeof(char [256l]) /*256ul*/ );
        }
        break;
      }
      case 113:

      case 27:
      {
        quiet = 1;
        break;
      }
      case 114:

      case 29:
      {
        timermode = 0;
        break;
      }
      case 82:

      case 30:
      {
        check_clock_resolution = 1;
        break;
      }
      case 115:

      case 47:
      {
        secaligned = 1;
        if(!(optarg == ((char *)NULL)))
        {
          return_value_atoi$9=atoi(optarg);
          offset = return_value_atoi$9 * 1000;
        }

        else
        {
          if(!(optind >= argc))
          {
            return_value_atoi$11=atoi(argv[(signed long int)optind]);
            tmp_if_expr$12 = return_value_atoi$11 != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$12 = (_Bool)0;
          if(tmp_if_expr$12)
          {
            return_value_atoi$10=atoi(argv[(signed long int)optind]);
            offset = return_value_atoi$10 * 1000;
          }

          else
            offset = 0;
        }
        break;
      }
      case 31:
      {
        use_system = 2;
        break;
      }
      case 83:

      case 32:
      {
        if(!(numa == 0))
          fatal("numa and smp options are mutually exclusive\n");

        smp = 1;
        num_threads = max_cpus;
        setaffinity = 2;
        use_nanosleep = 1;
        break;
      }
      case 116:

      case 33:
      {
        if(!(smp == 0))
        {
          warn("-t ignored due to --smp\n");
          break;
        }

        if(!(optarg == ((char *)NULL)))
          num_threads=atoi(optarg);

        else
        {
          if(!(optind >= argc))
          {
            return_value_atoi$13=atoi(argv[(signed long int)optind]);
            tmp_if_expr$14 = return_value_atoi$13 != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$14 = (_Bool)0;
          if(tmp_if_expr$14)
            num_threads=atoi(argv[(signed long int)optind]);

          else
            num_threads = max_cpus;
        }
        break;
      }
      case 35:
      {
        trigger=atoi(optarg);
        break;
      }
      case 36:
      {
        if(!(trigger == 0))
          trigger_list_size=atoi(optarg);

        break;
      }
      case 84:

      case 34:
      {
        tracetype = 9;
        __builtin_strncpy(tracer, optarg, sizeof(char [256l]) /*256ul*/ );
        break;
      }
      case 117:

      case 37:
      {
        setvbuf(stdout, (char *)(void *)0, 2, (unsigned long int)0);
        break;
      }
      case 85:

      case 38:
      {
        numa = 1;
        if(!(smp == 0))
          fatal("numa and smp options are mutually exclusive\n");

        numa_on_and_available();
        num_threads = max_cpus;
        setaffinity = 2;
        use_nanosleep = 1;
        break;
      }
      case 118:

      case 39:
      {
        verbose = 1;
        break;
      }
      case 119:

      case 40:
      {
        tracetype = 5;
        break;
      }
      case 87:

      case 41:
      {
        tracetype = 6;
        break;
      }
      case 63:

      case 44:
      {
        display_help(0);
        break;
      }
      case 28:
      {
        priospread = 1;
        break;
      }
      case 9:
      {
        latency_target_value=atoi(optarg);
        if(!(latency_target_value >= 0))
          latency_target_value = 0;

        break;
      }
      case 2:
      {
        notrace = 1;
        break;
      }
      case 43:
      {
        handlepolicy(optarg);
        break;
      }
      case 42:
      {
        ct_debug = 1;
        break;
      }
      case 48:
        laptop = 1;
    }
  }
  while((_Bool)1);
  if(!(option_affinity == 0))
  {
    if(!(smp == 0))
      warn("-a ignored due to --smp\n");

    else
      if(!(numa == 0))
        warn("-a ignored due to --numa\n");

  }

  if(!(tracelimit == 0))
    fileprefix = procfileprefix;

  if((unsigned long int)clocksel >= 3ul || !(clocksel >= 0))
    error = 1;

  if(!(oscope_reduction >= 1))
    error = 1;

  if(verbose == 0 && oscope_reduction >= 2)
  {
    warn("-o option only meaningful, if verbose\n");
    error = 1;
  }

  if(!(histogram >= 0))
    error = 1;

  if(histogram >= 1000001)
    histogram = 1000000;

  if(!(distance == -1) && !(histogram == 0))
    warn("distance is ignored and set to 0, if histogram enabled\n");

  if(distance == -1)
    distance = 500;

  if(priority >= 100 || !(priority >= 0))
    error = 1;

  if(priority == 0 && !(priospread == 0))
  {
    fprintf(stderr, "defaulting realtime priority to %d\n", num_threads + 1);
    priority = num_threads + 1;
  }

  if(!(policy == 1) && !(policy == 2) && !(priority == 0))
  {
    fprintf(stderr, "policy and priority don't match: setting policy to SCHED_FIFO\n");
    policy = 1;
  }

  if(priority == 0 && (policy == 1 || policy == 2))
  {
    fprintf(stderr, "defaulting realtime priority to %d\n", num_threads + 1);
    priority = num_threads + 1;
  }

  if(!(num_threads >= 1))
    error = 1;

  if(!(aligned == 0) && !(secaligned == 0))
    error = 1;

  if(!(aligned == 0) || !(secaligned == 0))
  {
    pthread_barrier_init(&globalt_barr, (const union anonymous$3 *)(void *)0, (unsigned int)num_threads);
    pthread_barrier_init(&align_barr, (const union anonymous$3 *)(void *)0, (unsigned int)num_threads);
  }

  if(!(error == 0))
  {
    if(!(affinity_mask == ((struct bitmask *)NULL)))
      rt_bitmask_free(affinity_mask);

    display_help(1);
  }

}

// raise_soft_prio
// file src/cyclictest/cyclictest.c line 709
static signed int raise_soft_prio(signed int policy, struct sched_param *param)
{
  signed int err;
  signed int policy_max;
  signed int soft_max;
  signed int hard_max;
  signed int prio;
  struct rlimit rlim;
  prio = param->__sched_priority;
  policy_max=sched_get_priority_max(policy);
  if(policy_max == -1)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    err = *return_value___errno_location$1;
    err_msg("WARN: no such policy\n");
    return err;
  }

  err=getrlimit((enum __rlimit_resource)__RLIMIT_RTPRIO, &rlim);
  if(!(err == 0))
  {
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    err = *return_value___errno_location$2;
    err_msg_n(err, "WARN: getrlimit failed");
    return err;
  }

  soft_max = (signed int)(rlim.rlim_cur == (unsigned long int)-1 ? (unsigned long int)policy_max : rlim.rlim_cur);
  hard_max = (signed int)(rlim.rlim_max == (unsigned long int)-1 ? (unsigned long int)policy_max : rlim.rlim_max);
  if(hard_max >= prio && !(soft_max >= prio))
  {
    rlim.rlim_cur = (unsigned long int)prio;
    err=setrlimit((enum __rlimit_resource)__RLIMIT_RTPRIO, &rlim);
    if(!(err == 0))
    {
      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      err = *return_value___errno_location$3;
      err_msg_n(err, "WARN: setrlimit failed");
    }

  }

  else
    err = -1;
  return err;
}

// restorekernvars
// file src/cyclictest/cyclictest.c line 378
static void restorekernvars(void)
{
  signed int i = 0;
  for( ; !(i >= 32); i = i + 1)
    if(!((signed int)kv[(signed long int)i].name[0l] == 0))
    {
      unsigned long int return_value_strlen$1;
      return_value_strlen$1=strlen(kv[(signed long int)i].value);
      signed int return_value_kernvar$2;
      return_value_kernvar$2=kernvar(01, kv[(signed long int)i].name, kv[(signed long int)i].value, return_value_strlen$1);
      if(!(return_value_kernvar$2 == 0))
        fprintf(stderr, "could not restore %s to %s\n", (const void *)kv[(signed long int)i].name, (const void *)kv[(signed long int)i].value);

    }

}

// rt_bitmask_free
// file src/cyclictest/rt_numa.h line 108
static inline void rt_bitmask_free(struct bitmask *mask)
{
  numa_bitmask_free(mask);
}

// rt_numa_bitmask_count
// file src/cyclictest/rt_numa.h line 272
static inline unsigned int rt_numa_bitmask_count(struct bitmask *mask)
{
  unsigned int num_bits = (unsigned int)0;
  unsigned int i = (unsigned int)0;
  for( ; !((unsigned long int)i >= mask->size); i = i + 1u)
  {
    unsigned int return_value_rt_numa_bitmask_isbitset$1;
    return_value_rt_numa_bitmask_isbitset$1=rt_numa_bitmask_isbitset(mask, (unsigned long int)i);
    if(!(return_value_rt_numa_bitmask_isbitset$1 == 0u))
      num_bits = num_bits + 1u;

  }
  return num_bits;
}

// rt_numa_bitmask_isbitset
// file src/cyclictest/rt_numa.h line 86
static inline unsigned int rt_numa_bitmask_isbitset(struct bitmask *mask, unsigned long int i)
{
  signed int return_value_numa_bitmask_isbitset$1;
  return_value_numa_bitmask_isbitset$1=numa_bitmask_isbitset(mask, (unsigned int)i);
  return (unsigned int)return_value_numa_bitmask_isbitset$1;
}

// rt_numa_numa_alloc_onnode
// file src/cyclictest/rt_numa.h line 62
static void * rt_numa_numa_alloc_onnode(unsigned long int size, signed int node, signed int cpu)
{
  void *stack;
  stack=numa_alloc_onnode(size, node);
  if(stack == NULL)
    fatal("failed to allocate %d bytes on node %d for cpu %d\n", size, node, cpu);

  return stack;
}

// rt_numa_numa_node_of_cpu
// file src/cyclictest/rt_numa.h line 77
static signed int rt_numa_numa_node_of_cpu(signed int cpu)
{
  signed int node;
  node=numa_node_of_cpu(cpu);
  if(node == -1)
    fatal("invalid cpu passed to numa_node_of_cpu(%d)\n", cpu);

  return node;
}

// rt_numa_parse_cpustring
// file src/cyclictest/rt_numa.h line 92
static inline struct bitmask * rt_numa_parse_cpustring(const char *s, signed int max_cpus)
{
  struct bitmask *return_value_numa_parse_cpustring$1;
  return_value_numa_parse_cpustring$1=numa_parse_cpustring((char *)s);
  return return_value_numa_parse_cpustring$1;
}

// rt_numa_set_numa_run_on_node
// file src/cyclictest/rt_numa.h line 52
static void rt_numa_set_numa_run_on_node(signed int node, signed int cpu)
{
  signed int res;
  res=numa_run_on_node(node);
  signed int *return_value___errno_location$1;
  char *return_value_strerror$2;
  if(!(res == 0))
  {
    return_value___errno_location$1=__errno_location();
    return_value_strerror$2=strerror(*return_value___errno_location$1);
    warn("Could not set NUMA node %d for thread %d: %s\n", node, cpu, return_value_strerror$2);
  }

  goto __CPROVER_DUMP_L2;

__CPROVER_DUMP_L2:
  ;
}

// sched_getattr
// file src/lib/rt-sched.c line 37
signed int sched_getattr(signed int pid, struct sched_attr *attr, unsigned int size, unsigned int flags)
{
  signed long int return_value_syscall$1;
  return_value_syscall$1=syscall((signed long int)315, pid, attr, size, flags);
  return (signed int)return_value_syscall$1;
}

// sched_setattr
// file src/lib/rt-sched.c line 30
signed int sched_setattr(signed int pid, struct sched_attr *attr, unsigned int flags)
{
  signed long int return_value_syscall$1;
  return_value_syscall$1=syscall((signed long int)314, pid, attr, flags);
  return (signed int)return_value_syscall$1;
}

// set_latency_target
// file src/cyclictest/cyclictest.c line 262
static void set_latency_target(void)
{
  struct stat s;
  signed int err;
  if(!(laptop == 0))
    warn("not setting cpu_dma_latency to save battery power\n");

  else
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 0;
    err=stat("/dev/cpu_dma_latency", &s);
    if(err == -1)
    {
      signed int *return_value___errno_location$2;
      return_value___errno_location$2=__errno_location();
      err_msg_n(*return_value___errno_location$2, "WARN: stat /dev/cpu_dma_latency failed");
      goto __CPROVER_DUMP_L5;
    }

    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    *return_value___errno_location$3 = 0;
    latency_target_fd=open("/dev/cpu_dma_latency", 02);
    if(latency_target_fd == -1)
    {
      signed int *return_value___errno_location$4;
      return_value___errno_location$4=__errno_location();
      err_msg_n(*return_value___errno_location$4, "WARN: open /dev/cpu_dma_latency");
      goto __CPROVER_DUMP_L5;
    }

    signed int *return_value___errno_location$5;
    return_value___errno_location$5=__errno_location();
    *return_value___errno_location$5 = 0;
    signed long int return_value_write$6;
    return_value_write$6=write(latency_target_fd, (const void *)&latency_target_value, (unsigned long int)4);
    err = (signed int)return_value_write$6;
    if(!(err >= 1))
    {
      signed int *return_value___errno_location$7;
      return_value___errno_location$7=__errno_location();
      err_msg_n(*return_value___errno_location$7, "# error setting cpu_dma_latency to %d!", latency_target_value);
      close(latency_target_fd);
      goto __CPROVER_DUMP_L5;
    }

    printf("# /dev/cpu_dma_latency set to %dus\n", latency_target_value);
  }

__CPROVER_DUMP_L5:
  ;
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

// setkernvar
// file src/cyclictest/cyclictest.c line 348
static void setkernvar(const char *name, char *value)
{
  signed int i;
  char oldvalue[32l];
  signed int tmp_statement_expression$1;
  if(!(kernelversion >= 3))
  {
    signed int return_value_kernvar$3;
    return_value_kernvar$3=kernvar(00, name, oldvalue, sizeof(char [32l]) /*32ul*/ );
    if(!(return_value_kernvar$3 == 0))
      fprintf(stderr, "could not retrieve %s\n", name);

    else
    {
      i = 0;
      for( ; !(i >= 32); i = i + 1)
      {
        unsigned long int __s1_len;
        unsigned long int __s2_len;
        signed int return_value___builtin_strcmp$2;
        return_value___builtin_strcmp$2=__builtin_strcmp(kv[(signed long int)i].name, name);
        tmp_statement_expression$1 = return_value___builtin_strcmp$2;
        if(tmp_statement_expression$1 == 0)
          break;

        if((signed int)kv[(signed long int)i].name[0l] == 0)
        {
          __builtin_strncpy(kv[(signed long int)i].name, name, sizeof(char [32l]) /*32ul*/ );
          __builtin_strncpy(kv[(signed long int)i].value, oldvalue, sizeof(char [32l]) /*32ul*/ );
          break;
        }

      }
      if(i == 32)
        fprintf(stderr, "could not backup %s (%s)\n", name, (const void *)oldvalue);

    }
  }

  unsigned long int return_value_strlen$4;
  return_value_strlen$4=strlen(value);
  signed int return_value_kernvar$5;
  return_value_kernvar$5=kernvar(01, name, value, return_value_strlen$4);
  if(!(return_value_kernvar$5 == 0))
    fprintf(stderr, "could not set %s to %s\n", name, value);

}

// setscheduler
// file src/cyclictest/cyclictest.c line 757
static signed int setscheduler(signed int pid, signed int policy, struct sched_param *param)
{
  signed int err = 0;
  signed int *return_value___errno_location$1;
  signed int err1;
  do
  {

  try_again:
    ;
    err=sched_setscheduler(pid, policy, param);
    if(err == 0)
      goto __CPROVER_DUMP_L3;

    return_value___errno_location$1=__errno_location();
    err = *return_value___errno_location$1;
    if(!(err == 1))
      goto __CPROVER_DUMP_L2;

    err1=raise_soft_prio(policy, param);
  }
  while(err1 == 0);

__CPROVER_DUMP_L2:
  ;

__CPROVER_DUMP_L3:
  ;
  return err;
}

// settracer
// file src/cyclictest/cyclictest.c line 505
static signed int settracer(char *tracer)
{
  signed int return_value_valid_tracer$1;
  return_value_valid_tracer$1=valid_tracer(tracer);
  if(!(return_value_valid_tracer$1 == 0))
  {
    setkernvar("current_tracer", tracer);
    return 0;
  }

  else
    return -1;
}

// setup_tracer
// file src/cyclictest/cyclictest.c line 514
static void setup_tracer(void)
{
  signed int return_value_trace_file_exists$2;
  signed int return_value_trace_file_exists$4;
  signed int return_value_valid_tracer$6;
  unsigned long int return_value_strlen$9;
  signed int tmp_statement_expression$7;
  if(!(tracelimit == 0) && notrace == 0)
  {
    signed int return_value_mount_debugfs$1;
    return_value_mount_debugfs$1=mount_debugfs((char *)(void *)0);
    if(!(return_value_mount_debugfs$1 == 0))
      fatal("could not mount debugfs");

    if(kernelversion >= 3)
    {
      char testname[256l];
      fileprefix=get_debugfileprefix();
      signed int return_value_trace_file_exists$3;
      return_value_trace_file_exists$3=trace_file_exists("tracing_enabled");
      if(return_value_trace_file_exists$3 == 0)
      {
        return_value_trace_file_exists$2=trace_file_exists("tracing_on");
        if(return_value_trace_file_exists$2 == 0)
          warn("tracing_enabled or tracing_on not found\ndebug fs not mounted, TRACERs not configured?\n", (const void *)testname);

      }

    }

    else
      fileprefix = procfileprefix;
    if(kernelversion >= 3)
    {
      signed int ret;
      signed int return_value_trace_file_exists$5;
      return_value_trace_file_exists$5=trace_file_exists("tracing_enabled");
      if(!(return_value_trace_file_exists$5 == 0))
      {
        return_value_trace_file_exists$4=trace_file_exists("tracing_on");
        if(return_value_trace_file_exists$4 == 0)
          setkernvar("tracing_enabled", "1");

      }

      fileprefix = procfileprefix;
      if(!(tracetype == 0))
        setkernvar("ftrace_enabled", "1");

      else
        setkernvar("ftrace_enabled", "0");
      fileprefix=get_debugfileprefix();
      ret=settracer("nop");
      switch(tracetype)
      {
        case 0:
        {
          enable_events = 1;
          break;
        }
        case 8:
        {
          ret=settracer("function");
          break;
        }
        case 2:
        {
          ret=settracer("irqsoff");
          break;
        }
        case 3:
        {
          ret=settracer("preemptoff");
          break;
        }
        case 4:
        {
          ret=settracer("preemptirqsoff");
          break;
        }
        case 1:
        {
          return_value_valid_tracer$6=valid_tracer("sched_switch");
          if(!(return_value_valid_tracer$6 == 0))
            ret=settracer("sched_switch");

          else
          {
            ret=event_enable("sched/sched_wakeup");
            if(!(ret == 0))
              break;

            ret=event_enable("sched/sched_switch");
          }
          break;
        }
        case 5:
        {
          ret=settracer("wakeup");
          break;
        }
        case 6:
        {
          ret=settracer("wakeup_rt");
          break;
        }
        default:
        {
          return_value_strlen$9=strlen(tracer);
          if(!(return_value_strlen$9 == 0ul))
          {
            ret=settracer(tracer);
            unsigned long int __s1_len;
            unsigned long int __s2_len;
            signed int return_value___builtin_strcmp$8;
            return_value___builtin_strcmp$8=__builtin_strcmp(tracer, "events");
            tmp_statement_expression$7 = return_value___builtin_strcmp$8;
            if(tmp_statement_expression$7 == 0)
            {
              if(!(ftrace == 0))
                ret=settracer(functiontracer);

            }

          }

          else
          {
            printf("cyclictest: unknown tracer!\n");
            ret = 0;
          }
        }
      }
      if(!(enable_events == 0))
        event_enable_all();

      if(!(ret == 0))
        fprintf(stderr, "Requested tracer '%s' not available\n", (const void *)tracer);

      setkernvar(traceroptions, "print-parent");
      setkernvar(traceroptions, "latency-format");
      if(!(verbose == 0))
      {
        setkernvar(traceroptions, "sym-offset");
        setkernvar(traceroptions, "sym-addr");
        setkernvar(traceroptions, "verbose");
      }

      else
      {
        setkernvar(traceroptions, "nosym-offset");
        setkernvar(traceroptions, "nosym-addr");
        setkernvar(traceroptions, "noverbose");
      }
      if(!(traceopt_count == 0))
      {
        signed int i = 0;
        for( ; !(i >= traceopt_count); i = i + 1)
          setkernvar(traceroptions, traceptr[(signed long int)i]);
      }

      setkernvar("tracing_max_latency", "0");
      signed int return_value_trace_file_exists$10;
      return_value_trace_file_exists$10=trace_file_exists("latency_hist");
      if(!(return_value_trace_file_exists$10 == 0))
        setkernvar("latency_hist/wakeup/reset", "1");

      if(trace_fd == -1)
      {
        char path[256l];
        strcpy(path, fileprefix);
        signed int return_value_trace_file_exists$11;
        return_value_trace_file_exists$11=trace_file_exists("tracing_on");
        if(!(return_value_trace_file_exists$11 == 0))
          strcat(path, "tracing_on");

        else
          strcat(path, "tracing_enabled");
        trace_fd=open(path, 01);
        if(trace_fd == -1)
          fatal("unable to open %s for tracing", (const void *)path);

      }

      if(tracemark_fd == -1)
      {
        char setup_tracer$$1$$2$$6$$path[256l];
        char *return_value_strcpy$12;
        return_value_strcpy$12=strcpy(setup_tracer$$1$$2$$6$$path, fileprefix);
        strcat(return_value_strcpy$12, "trace_marker");
        tracemark_fd=open(setup_tracer$$1$$2$$6$$path, 01);
        if(tracemark_fd == -1)
          warn("unable to open trace_marker file: %s\n", (const void *)setup_tracer$$1$$2$$6$$path);

      }

    }

    else
    {
      setkernvar("trace_all_cpus", "1");
      setkernvar("trace_freerunning", "1");
      setkernvar("trace_print_on_crash", "0");
      setkernvar("trace_user_triggered", "1");
      setkernvar("trace_user_trigger_irq", "-1");
      setkernvar("trace_verbose", "0");
      setkernvar("preempt_thresh", "0");
      setkernvar("wakeup_timing", "0");
      setkernvar("preempt_max_latency", "0");
      if(!(ftrace == 0))
        setkernvar("mcount_enabled", "1");

      setkernvar("trace_enabled", "1");
      setkernvar("latency_hist/wakeup_latency/reset", "1");
    }
    tracing(1);
  }

}

// sighand
// file src/cyclictest/cyclictest.c line 1683
static void sighand(signed int sig)
{
  if(sig == 10)
  {
    signed int i;
    signed int oldquiet = quiet;
    quiet = 0;
    fprintf(stderr, "#---------------------------\n");
    fprintf(stderr, "# cyclictest current status:\n");
    i = 0;
    for( ; !(i >= num_threads); i = i + 1)
      print_stat(stderr, parameters[(signed long int)i], i, 0, 0);
    fprintf(stderr, "#---------------------------\n");
    quiet = oldquiet;
    goto __CPROVER_DUMP_L5;
  }

  shutdown = 1;
  if(!(refresh_on_max == 0))
    pthread_cond_signal(&refresh_on_max_cond);

  if(notrace == 0 && !(tracelimit == 0))
    tracing(0);


__CPROVER_DUMP_L5:
  ;
}

// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf)
{
  signed int return_value___xstat$1;
  return_value___xstat$1=__xstat(1, __path, __statbuf);
  return return_value___xstat$1;
}

// stat$link1
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat$link1(const char *__path$link1, struct stat *__statbuf$link1)
{
  signed int return_value___xstat$1$link1;
  return_value___xstat$1$link1=__xstat(1, __path$link1, __statbuf$link1);
  return return_value___xstat$1$link1;
}

// string_to_policy
// file src/lib/rt-utils.c line 302
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
    unsigned long int string_to_policy$$1$$2$$__s2_len;
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
        unsigned long int string_to_policy$$1$$4$$__s1_len;
        unsigned long int string_to_policy$$1$$4$$__s2_len;
        signed int return_value___builtin_strcmp$6;
        return_value___builtin_strcmp$6=__builtin_strcmp(str, "batch");
        tmp_statement_expression$5 = return_value___builtin_strcmp$6;
        if(tmp_statement_expression$5 == 0)
          return (unsigned int)3;

        else
        {
          unsigned long int __s1_len;
          unsigned long int __s2_len;
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

// threadalloc
// file src/cyclictest/rt_numa.h line 36
static void * threadalloc(unsigned long int size, signed int node)
{
  void *return_value_malloc$1;
  if(node == -1)
  {
    return_value_malloc$1=malloc(size);
    return return_value_malloc$1;
  }

  else
  {
    void *return_value_numa_alloc_onnode$2;
    return_value_numa_alloc_onnode$2=numa_alloc_onnode(size, node);
    return return_value_numa_alloc_onnode$2;
  }
}

// threadfree
// file src/cyclictest/rt_numa.h line 44
static void threadfree(void *ptr, unsigned long int size, signed int node)
{
  if(node == -1)
    free(ptr);

  else
    numa_free(ptr, size);
}

// timerthread
// file src/cyclictest/cyclictest.c line 787
static void * timerthread(void *param)
{
  struct thread_param *par = (struct thread_param *)param;
  struct sched_param schedp;
  struct sigevent sigev;
  struct anonymous$0 sigset;
  void *timer;
  struct timespec now;
  struct timespec next;
  struct timespec timerthread$$1$$interval;
  struct timespec stop;
  struct itimerval itimer;
  struct itimerspec tspec;
  struct thread_stat *timerthread$$1$$stat = par->stats;
  signed int stopped = 0;
  struct anonymous$7 mask;
  unsigned long int thread;
  if(!(par->node == -1))
    rt_numa_set_numa_run_on_node(par->node, par->cpu);

  if(!(par->cpu == -1))
  {
    do
      __builtin_memset((void *)&mask, 0, sizeof(struct anonymous$7) /*128ul*/ );
    while((_Bool)0);
    unsigned long int __cpu = (unsigned long int)par->cpu;
    if(!(__cpu / 8ul >= sizeof(struct anonymous$7) /*128ul*/ ))
      ((unsigned long int *)(&mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] = ((unsigned long int *)(&mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] | (unsigned long int)1 << __cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ );

    else
      (unsigned long int)0;
    thread=pthread_self();
    signed int return_value_pthread_setaffinity_np$1;
    return_value_pthread_setaffinity_np$1=pthread_setaffinity_np(thread, sizeof(struct anonymous$7) /*128ul*/ , &mask);
    if(return_value_pthread_setaffinity_np$1 == -1)
      warn("Could not set CPU affinity to CPU #%d\n", par->cpu);

  }

  timerthread$$1$$interval.tv_sec = (signed long int)(par->interval / (unsigned long int)1000000);
  timerthread$$1$$interval.tv_nsec = (signed long int)((par->interval % (unsigned long int)1000000) * (unsigned long int)1000);
  signed long int return_value_syscall$2;
  return_value_syscall$2=syscall((signed long int)186);
  timerthread$$1$$stat->tid = (signed int)return_value_syscall$2;
  sigemptyset(&sigset);
  sigaddset(&sigset, par->signal);
  sigprocmask(0, &sigset, (struct anonymous$0 *)(void *)0);
  if(par->mode == 0)
  {
    sigev.sigev_notify = 4 | 0;
    sigev.sigev_signo = par->signal;
    sigev._sigev_un._tid = timerthread$$1$$stat->tid;
    timer_create(par->clock, &sigev, &timer);
    tspec.it_interval = timerthread$$1$$interval;
  }

  memset((void *)&schedp, 0, sizeof(struct sched_param) /*4ul*/ );
  schedp.__sched_priority = par->prio;
  signed int return_value_setscheduler$3;
  return_value_setscheduler$3=setscheduler(0, par->policy, &schedp);
  if(!(return_value_setscheduler$3 == 0))
    fatal("timerthread%d: failed to set priority to %d\n", par->cpu, par->prio);

  if(!(aligned == 0) || !(secaligned == 0))
  {
    pthread_barrier_wait(&globalt_barr);
    if(par->tnum == 0)
    {
      clock_gettime(par->clock, &globalt);
      if(!(secaligned == 0))
      {
        if(globalt.tv_nsec >= 900000001l)
          globalt.tv_sec = globalt.tv_sec + (signed long int)2;

        else
          globalt.tv_sec = globalt.tv_sec + 1l;
        globalt.tv_nsec = (signed long int)0;
      }

    }

    pthread_barrier_wait(&align_barr);
    now = globalt;
    if(!(offset == 0))
    {
      if(!(aligned == 0))
        now.tv_nsec = now.tv_nsec + (signed long int)(offset * par->tnum);

      else
        now.tv_nsec = now.tv_nsec + (signed long int)offset;
      tsnorm(&now);
    }

  }

  else
    clock_gettime(par->clock, &now);
  next = now;
  next.tv_sec = next.tv_sec + timerthread$$1$$interval.tv_sec;
  next.tv_nsec = next.tv_nsec + timerthread$$1$$interval.tv_nsec;
  tsnorm(&next);
  if(!(duration == 0))
  {
    memset((void *)&stop, 0, sizeof(struct timespec) /*16ul*/ );
    stop = now;
    stop.tv_sec = stop.tv_sec + (signed long int)duration;
  }

  if(par->mode == 0)
  {
    if(par->timermode == 1)
      tspec.it_value = next;

    else
      tspec.it_value = timerthread$$1$$interval;
    timer_settime(timer, par->timermode, &tspec, (struct itimerspec *)(void *)0);
  }

  if(par->mode == 2)
  {
    itimer.it_interval.tv_sec = timerthread$$1$$interval.tv_sec;
    itimer.it_interval.tv_usec = timerthread$$1$$interval.tv_nsec / (signed long int)1000;
    itimer.it_value = itimer.it_interval;
    setitimer((enum __itimer_which)ITIMER_REAL, &itimer, (struct itimerval *)(void *)0);
  }

  timerthread$$1$$stat->threadstarted = timerthread$$1$$stat->threadstarted + 1;
  signed int return_value_sigwait$4;
  signed int *return_value___errno_location$5;
  signed int *return_value___errno_location$6;
  char *return_value_strerror$7;
  signed int *return_value___errno_location$8;
  signed int *return_value___errno_location$9;
  signed int return_value_nanosleep$12;
  signed int *return_value___errno_location$10;
  signed int *return_value___errno_location$13;
  signed long int return_value_calcdiff_ns$14;
  signed long int return_value_calcdiff$15;
  signed long int return_value_calcdiff$17;
  signed long int tmp_post$18;
  signed int return_value_tsgreater$19;
  while(shutdown == 0)
  {
    unsigned long int diff;
    signed int sigs;
    signed int ret;
    switch(par->mode)
    {
      case 0:

      case 2:
      {
        return_value_sigwait$4=sigwait(&sigset, &sigs);
        if(!(return_value_sigwait$4 >= 0))
          goto out;

        break;
      }
      case 1:
      {
        if(par->timermode == 1)
        {
          ret=clock_nanosleep(par->clock, 1, &next, (struct timespec *)(void *)0);
          if(!(ret == 0))
          {
            if(!(ret == 4))
            {
              return_value___errno_location$5=__errno_location();
              warn("clock_nanosleep failed. errno: %d\n", *return_value___errno_location$5);
            }

            goto out;
          }

        }

        else
        {
          ret=clock_gettime(par->clock, &now);
          if(!(ret == 0))
          {
            if(!(ret == 4))
            {
              return_value___errno_location$6=__errno_location();
              return_value_strerror$7=strerror(*return_value___errno_location$6);
              warn("clock_gettime() failed: %s", return_value_strerror$7);
            }

            goto out;
          }

          ret=clock_nanosleep(par->clock, 0, &timerthread$$1$$interval, (struct timespec *)(void *)0);
          if(!(ret == 0))
          {
            if(!(ret == 4))
            {
              return_value___errno_location$8=__errno_location();
              warn("clock_nanosleep() failed. errno: %d\n", *return_value___errno_location$8);
            }

            goto out;
          }

          next.tv_sec = now.tv_sec + timerthread$$1$$interval.tv_sec;
          next.tv_nsec = now.tv_nsec + timerthread$$1$$interval.tv_nsec;
          tsnorm(&next);
        }
        break;
      }
      case 3:
      {
        ret=clock_gettime(par->clock, &now);
        if(!(ret == 0))
        {
          if(!(ret == 4))
          {
            return_value___errno_location$9=__errno_location();
            warn("clock_gettime() failed: errno %d\n", *return_value___errno_location$9);
          }

          goto out;
        }

        return_value_nanosleep$12=nanosleep(&timerthread$$1$$interval, (struct timespec *)(void *)0);
        if(!(return_value_nanosleep$12 == 0))
        {
          signed int *return_value___errno_location$11;
          return_value___errno_location$11=__errno_location();
          if(!(*return_value___errno_location$11 == 4))
          {
            return_value___errno_location$10=__errno_location();
            warn("nanosleep failed. errno: %d\n", *return_value___errno_location$10);
          }

          goto out;
        }

        next.tv_sec = now.tv_sec + timerthread$$1$$interval.tv_sec;
        next.tv_nsec = now.tv_nsec + timerthread$$1$$interval.tv_nsec;
        tsnorm(&next);
      }
    }
    ret=clock_gettime(par->clock, &now);
    if(!(ret == 0))
    {
      if(!(ret == 4))
      {
        return_value___errno_location$13=__errno_location();
        warn("clock_getttime() failed. errno: %d\n", *return_value___errno_location$13);
      }

      break;
    }

    if(!(use_nsecs == 0))
    {
      return_value_calcdiff_ns$14=calcdiff_ns(now, next);
      diff = (unsigned long int)return_value_calcdiff_ns$14;
    }

    else
    {
      return_value_calcdiff$15=calcdiff(now, next);
      diff = (unsigned long int)return_value_calcdiff$15;
    }
    if(!(diff >= (unsigned long int)timerthread$$1$$stat->min))
      timerthread$$1$$stat->min = (signed long int)diff;

    if(!((unsigned long int)timerthread$$1$$stat->max >= diff))
    {
      timerthread$$1$$stat->max = (signed long int)diff;
      if(!(refresh_on_max == 0))
        pthread_cond_signal(&refresh_on_max_cond);

    }

    timerthread$$1$$stat->avg = timerthread$$1$$stat->avg + (double)diff;
    if(!(trigger == 0) && !((unsigned long int)trigger >= diff))
    {
      signed long int return_value_calctime$16;
      return_value_calctime$16=calctime(now);
      trigger_update(par, (signed int)diff, return_value_calctime$16);
    }

    if(!(duration == 0))
    {
      return_value_calcdiff$17=calcdiff(now, stop);
      if(return_value_calcdiff$17 >= 0l)
        shutdown = shutdown + 1;

    }

    if(stopped == 0 && !(tracelimit == 0) && !((unsigned long int)tracelimit >= diff))
    {
      stopped = stopped + 1;
      tracemark("hit latency threshold (%llu > %d)", (unsigned long long int)diff, tracelimit);
      tracing(0);
      shutdown = shutdown + 1;
      pthread_mutex_lock(&break_thread_id_lock);
      if(break_thread_id == 0)
        break_thread_id = timerthread$$1$$stat->tid;

      break_thread_value = diff;
      pthread_mutex_unlock(&break_thread_id_lock);
    }

    timerthread$$1$$stat->act = (signed long int)diff;
    if(!(par->bufmsk == 0))
      timerthread$$1$$stat->values[(signed long int)(timerthread$$1$$stat->cycles & (unsigned long int)par->bufmsk)] = (signed long int)diff;

    if(!(histogram == 0))
    {
      if(diff >= (unsigned long int)histogram)
      {
        timerthread$$1$$stat->hist_overflow = timerthread$$1$$stat->hist_overflow + 1l;
        if(!(timerthread$$1$$stat->num_outliers >= (signed long int)histogram))
        {
          tmp_post$18 = timerthread$$1$$stat->num_outliers;
          timerthread$$1$$stat->num_outliers = timerthread$$1$$stat->num_outliers + 1l;
          timerthread$$1$$stat->outliers[tmp_post$18] = (signed long int)timerthread$$1$$stat->cycles;
        }

      }

      else
        timerthread$$1$$stat->hist_array[(signed long int)diff] = timerthread$$1$$stat->hist_array[(signed long int)diff] + 1l;
    }

    timerthread$$1$$stat->cycles = timerthread$$1$$stat->cycles + 1ul;
    next.tv_sec = next.tv_sec + timerthread$$1$$interval.tv_sec;
    next.tv_nsec = next.tv_nsec + timerthread$$1$$interval.tv_nsec;
    if(par->mode == 0)
    {
      signed int overrun_count;
      overrun_count=timer_getoverrun(timer);
      next.tv_sec = next.tv_sec + (signed long int)overrun_count * timerthread$$1$$interval.tv_sec;
      next.tv_nsec = next.tv_nsec + (signed long int)overrun_count * timerthread$$1$$interval.tv_nsec;
    }

    tsnorm(&next);
    do
    {
      return_value_tsgreater$19=tsgreater(&now, &next);
      if(return_value_tsgreater$19 == 0)
        break;

      next.tv_sec = next.tv_sec + timerthread$$1$$interval.tv_sec;
      next.tv_nsec = next.tv_nsec + timerthread$$1$$interval.tv_nsec;
      tsnorm(&next);
    }
    while((_Bool)1);
    if(!(par->max_cycles == 0ul))
    {
      if(par->max_cycles == timerthread$$1$$stat->cycles)
        break;

    }

  }

out:
  ;
  if(par->mode == 0)
    timer_delete(timer);

  if(par->mode == 2)
  {
    itimer.it_value.tv_sec = (signed long int)0;
    itimer.it_value.tv_usec = (signed long int)0;
    itimer.it_interval.tv_sec = (signed long int)0;
    itimer.it_interval.tv_usec = (signed long int)0;
    setitimer((enum __itimer_which)ITIMER_REAL, &itimer, (struct itimerval *)(void *)0);
  }

  schedp.__sched_priority = 0;
  sched_setscheduler(0, 0, &schedp);
  timerthread$$1$$stat->threadstarted = -1;
  return (void *)0;
}

// trace_file_exists
// file src/cyclictest/cyclictest.c line 449
static signed int trace_file_exists(char *name)
{
  struct stat sbuf;
  char *tracing_prefix;
  tracing_prefix=get_debugfileprefix();
  char path[256l];
  char *return_value_strcpy$1;
  return_value_strcpy$1=strcpy(path, tracing_prefix);
  strcat(return_value_strcpy$1, name);
  signed int return_value_stat$2;
  return_value_stat$2=stat(path, &sbuf);
  return return_value_stat$2 != 0 ? 0 : 1;
}

// tracemark
// file src/cyclictest/cyclictest.c line 462
static void tracemark(char *fmt, ...)
{
  void **ap;
  signed int len;
  if(tracemark_fd >= 0)
  {
    ap = (void **)&fmt;
    len=vsnprintf(tracebuf, (unsigned long int)1024, fmt, ap);
    ap = ((void **)NULL);
    write(tracemark_fd, (const void *)tracebuf, (unsigned long int)len);
  }

}

// traceopt
// file src/cyclictest/cyclictest.c line 430
static void traceopt(char *option)
{
  char *ptr;
  if(!(traceopt_size >= 1 + traceopt_count))
  {
    traceopt_size = traceopt_size + 16;
    printf("expanding traceopt buffer to %d entries\n", traceopt_size);
    void *return_value_realloc$1;
    return_value_realloc$1=realloc((void *)traceptr, sizeof(char *) /*8ul*/  * (unsigned long int)traceopt_size);
    traceptr = (char **)return_value_realloc$1;
    if(traceptr == ((char **)NULL))
      fatal("Error allocating space for %d trace options\n", traceopt_count + 1);

  }

  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(option);
  void *return_value_malloc$3;
  return_value_malloc$3=malloc(return_value_strlen$2 + (unsigned long int)1);
  ptr = (char *)return_value_malloc$3;
  if(ptr == ((char *)NULL))
    fatal("error allocating space for trace option %s\n", option);

  printf("adding traceopt %s\n", option);
  strcpy(ptr, option);
  signed int tmp_post$4 = traceopt_count;
  traceopt_count = traceopt_count + 1;
  traceptr[(signed long int)tmp_post$4] = ptr;
}

// tracing
// file src/cyclictest/cyclictest.c line 480
static void tracing(signed int on)
{
  if(!(on == 0))
    switch(kernelversion)
    {
      case 1:
      {
        gettimeofday(((struct timeval *)NULL), (struct timezone *)1);
        break;
      }
      case 2:
      {
        prctl(0, 1);
        break;
      }
      case 3:

      case 4:
        write(trace_fd, (const void *)"1", (unsigned long int)1);
      default:
        ;
    }

  else
    switch(kernelversion)
    {
      case 1:
      {
        gettimeofday(((struct timeval *)NULL), ((struct timezone *)NULL));
        break;
      }
      case 2:
      {
        prctl(0, 0);
        break;
      }
      case 3:

      case 4:
        write(trace_fd, (const void *)"0", (unsigned long int)1);
      default:
        ;
    }
}

// trigger_init
// file src/cyclictest/cyclictest.c line 1876
static signed int trigger_init()
{
  signed int i;
  signed int size = trigger_list_size;
  struct thread_trigger *trig = (struct thread_trigger *)(void *)0;
  i = 0;
  for( ; !(i >= size); i = i + 1)
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct thread_trigger) /*32ul*/ );
    trig = (struct thread_trigger *)return_value_malloc$1;
    if(!(trig == ((struct thread_trigger *)NULL)))
    {
      if(head == ((struct thread_trigger *)NULL))
      {
        head = trig;
        tail = trig;
      }

      else
      {
        tail->next = trig;
        tail = trig;
      }
      trig->tnum = i;
      trig->next = (struct thread_trigger *)(void *)0;
    }

    else
      return -1;
  }
  current = head;
  return 0;
}

// trigger_print
// file src/cyclictest/cyclictest.c line 1901
static void trigger_print()
{
  struct thread_trigger *trig = head;
  char *fmt = "T:%2d Spike:%8ld: TS: %12ld\n";
  if(!(current == head))
  {
    printf("\n");
    for( ; !(trig->next == current); trig = trig->next)
      fprintf(stdout, fmt, trig->tnum, trig->diff, trig->ts);
    fprintf(stdout, fmt, trig->tnum, trig->diff, trig->ts);
    printf("spikes = %d\n\n", spikes);
  }

}

// trigger_update
// file src/cyclictest/cyclictest.c line 1916
static void trigger_update(struct thread_param *par, signed int diff, signed long int ts)
{
  pthread_mutex_lock(&trigger_lock);
  if(!(current == ((struct thread_trigger *)NULL)))
  {
    current->tnum = par->tnum;
    current->ts = ts;
    current->diff = diff;
    current = current->next;
  }

  spikes = spikes + 1;
  pthread_mutex_unlock(&trigger_lock);
}

// tsgreater
// file src/cyclictest/cyclictest.c line 400
static inline signed int tsgreater(struct timespec *a, struct timespec *b)
{
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$1;
  if(!(b->tv_sec >= a->tv_sec))
    tmp_if_expr$2 = (_Bool)1;

  else
  {
    if(a->tv_sec == b->tv_sec)
      tmp_if_expr$1 = a->tv_nsec > b->tv_nsec ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$1 = (_Bool)0;
    tmp_if_expr$2 = tmp_if_expr$1 ? (_Bool)1 : (_Bool)0;
  }
  return (signed int)tmp_if_expr$2;
}

// tsnorm
// file src/cyclictest/cyclictest.c line 392
static inline void tsnorm(struct timespec *ts)
{
  for( ; ts->tv_nsec >= 1000000000l; ts->tv_sec = ts->tv_sec + 1l)
    ts->tv_nsec = ts->tv_nsec - (signed long int)1000000000;
}

// valid_tracer
// file src/include/rt-utils.h line 14
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

// warn
// file src/include/error.h line 15
void warn(char *fmt, ...)
{
  void **ap = (void **)&fmt;
  fputs("WARN: ", stderr);
  err_doit(0, fmt, ap);
  ap = ((void **)NULL);
}

