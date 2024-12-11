// #anon_enum_KERNEL_UNSUPPORTED=0_KERNEL_LINUX_24=1_KERNEL_LINUX_26=2
// file util.h line 31
enum anonymous_0 { KERNEL_UNSUPPORTED=0, KERNEL_LINUX_24=1, KERNEL_LINUX_26=2 };

// #anon_enum_RNGD_ENTSOURCE_NONE=0_RNGD_ENTSOURCE_UNIXSTREAM=1_RNGD_ENTSOURCE_VIAPADLOCK=2
// file rngd_entsource.h line 31
enum anonymous_20 { RNGD_ENTSOURCE_NONE=0, RNGD_ENTSOURCE_UNIXSTREAM=1, RNGD_ENTSOURCE_VIAPADLOCK=2 };

// #anon_enum_VIAPADLOCK_RNG1_SOURCE_A=0_VIAPADLOCK_RNG1_SOURCE_B=1_VIAPADLOCK_RNG1_SOURCE_AB=2
// file viapadlock_engine.h line 33
enum anonymous_16 { VIAPADLOCK_RNG1_SOURCE_A=0, VIAPADLOCK_RNG1_SOURCE_B=1, VIAPADLOCK_RNG1_SOURCE_AB=2 };

// #anon_enum_VIA_RNG_NONE=0_VIA_RNG_TYPE1_ONESRC=1_VIA_RNG_TYPE1_TWOSRC=2
// file viapadlock_engine.c line 53
enum anonymous_17 { VIA_RNG_NONE=0, VIA_RNG_TYPE1_ONESRC=1, VIA_RNG_TYPE1_TWOSRC=2 };

// tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 121
struct anonymous_13;

// tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 107
struct anonymous_11;

// tag-#anon#ST[ARR16{U64}_U64_'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_14;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 74
struct anonymous_7;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 97
struct anonymous_10;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 89
struct anonymous_9;

// tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 62
struct anonymous_4;

// tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 81
struct anonymous_8;

// tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 114
struct anonymous_12;

// tag-#anon#ST[U32'MSR_LSW'||U32'MSR_LSW_MASK'||EN#anon_enum_VIA_RNG_NONE=0_VIA_RNG_TYPE1_ONESRC=1_VIA_RNG_TYPE1_TWOSRC=2#{U32}_U32_'rng_type'||ARR32{S32}_S32_'msr_fd'||U32'divisor'|]
// file viapadlock_engine.c line 126
struct anonymous_18;

// tag-#anon#ST[U32'dc_bias'||U32'string_filter'||EN#anon_enum_VIAPADLOCK_RNG1_SOURCE_A=0_VIAPADLOCK_RNG1_SOURCE_B=1_VIAPADLOCK_RNG1_SOURCE_AB=2#{U32}_U32_'noise_source'||U32'whitener'||U32'divisor'|]
// file viapadlock_engine.h line 39
struct anonymous_1;

// tag-#anon#UN[*{V(S32)->V}_V(S32)->V_'sa_handler'||*{V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}_SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#_|*{V}_V_)->V}_V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}_SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'_pad0'||SYM#tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#_|*{V}_V_)->V_'sa_sigaction'|]
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 28
union anonymous_5;

// tag-#anon#UN[ARR28{S32}_S32_'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'_pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}_V_'si_addr'||S16'si_addr_lsb'||U48'_pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'_pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}_V_'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 69
union anonymous_3;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_6;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_15;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_2;

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

// tag-argp
// file /usr/include/argp.h line 141
struct argp;

// tag-argp_child
// file /usr/include/argp.h line 143
struct argp_child;

// tag-argp_option
// file /usr/include/argp.h line 76
struct argp_option;

// tag-argp_state
// file /usr/include/argp.h line 142
struct argp_state;

// tag-arguments
// file rngd.h line 47
struct arguments;

// tag-buf_fifo
// file rngd_threads.h line 46
struct buf_fifo;

// tag-buffer_queues
// file rngd_threads.h line 52
struct buffer_queues;

// tag-fips_ctx
// file fips.h line 28
struct fips_ctx;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rng_stat
// file stats.h line 29
struct rng_stat;

// tag-rng_stats
// file rngd.h line 71
struct rng_stats;

// tag-sigaction
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 24
struct sigaction;

// tag-sigval
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 32
union sigval;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

// tag-trng_params
// file rngd.c line 207
struct trng_params;

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
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// alarm
// file /usr/include/unistd.h line 432
extern unsigned int alarm(unsigned int);
// argp_failure
// file /usr/include/argp.h line 518
extern void argp_failure(struct argp_state *, signed int, signed int, const char *, ...);
// argp_parse
// file /usr/include/argp.h line 403
extern signed int argp_parse(struct argp *, signed int, char ** restrict , unsigned int, signed int *, void *);
// argp_usage
// file /usr/include/argp.h line 497
extern void argp_usage(struct argp_state *);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// daemon
// file /usr/include/unistd.h line 937
extern signed int daemon(signed int, signed int);
// decode_cpu_revision
// file viapadlock_engine.c line 142
static unsigned int decode_cpu_revision(unsigned int tfms);
// detect_via_padlock_rng
// file viapadlock_engine.c line 167
static signed int detect_via_padlock_rng(signed int cpuid_fd, struct anonymous_18 *rng, signed int is_first_rng);
// die
// file rngd.c line 481
extern void die(signed int status);
// disable_sigalrm
// file rngd_signals.c line 98
extern signed int disable_sigalrm(void);
// do_rng_data_sink_loop
// file rngd_linux.h line 44
extern void * do_rng_data_sink_loop(void *trash);
// do_rng_data_source_loop
// file rngd_entsource.h line 49
extern void * do_rng_data_source_loop(void *trash);
// do_rng_fips_test_loop
// file rngd_entsource.h line 60
extern void * do_rng_fips_test_loop(void *trash);
// dump_rng_stats
// file rngd.c line 597
static void dump_rng_stats(void);
// dump_stat_bw
// file stats.h line 63
extern char * dump_stat_bw(char *buf, unsigned long int size, const char *msg, const char *unit, struct rng_stat *stat, unsigned long int blocksize);
// dump_stat_counter
// file stats.h line 52
extern char * dump_stat_counter(char *buf, unsigned long int size, const char *msg, unsigned long int value);
// dump_stat_stat
// file stats.h line 56
extern char * dump_stat_stat(char *buf, unsigned long int size, const char *msg, const char *unit, struct rng_stat *stat);
// elapsed_time
// file util.h line 28
extern unsigned long int elapsed_time(struct timeval *start, struct timeval *stop);
// enable_sigalrm
// file rngd_signals.c line 62
extern signed int enable_sigalrm(unsigned int seconds);
// entropy_source_driver_name
// file rngd_entsource.h line 36
extern const char * entropy_source_driver_name(enum anonymous_20 driver);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// fdopen
// file /usr/include/stdio.h line 306
extern struct _IO_FILE * fdopen(signed int, const char *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fileno
// file /usr/include/stdio.h line 858
extern signed int fileno(struct _IO_FILE *);
// fips_init
// file fips.h line 36
extern void fips_init(struct fips_ctx *ctx, unsigned int last32);
// fips_run_rng_test
// file fips.h line 69
extern signed int fips_run_rng_test(struct fips_ctx *ctx, const void *buf);
// fips_test_store
// file fips.c line 82
static void fips_test_store(struct fips_ctx *ctx, unsigned int rng_data);
// flock
// file /usr/include/x86_64-linux-gnu/sys/file.h line 51
extern signed int flock(signed int, signed int);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// fscanf
// file /usr/include/stdio.h line 425
extern signed int fscanf(struct _IO_FILE *, const char *, ...);
// ftell
// file /usr/include/stdio.h line 754
extern signed long int ftell(struct _IO_FILE *);
// ftruncate
// file /usr/include/unistd.h line 1016
extern signed int ftruncate(signed int, signed long int);
// get_lock
// file rngd.c line 540
static void get_lock(const char *pidfile_name);
// get_rng_proc_parameter
// file rngd_linux.c line 76
static signed int get_rng_proc_parameter(const char *param, signed long int *value);
// getbuffifo_count
// file rngd_threads.c line 58
extern signed int getbuffifo_count(struct buf_fifo *fifo);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// init_entropy_source
// file rngd_entsource.h line 41
extern void init_entropy_source(void);
// init_kernel_rng
// file rngd_linux.h line 34
extern void init_kernel_rng(void);
// init_rng_buffers
// file rngd_threads.h line 41
extern void init_rng_buffers(signed int n);
// init_rng_stats
// file rngd.c line 585
static void init_rng_stats(signed int n);
// init_sighandlers
// file rngd_signals.h line 38
extern void init_sighandlers(void);
// ioctl
// file /usr/include/x86_64-linux-gnu/sys/ioctl.h line 41
extern signed int ioctl(signed int, unsigned long int, ...);
// kernel_mode
// file util.h line 38
extern enum anonymous_0 kernel_mode(void);
// kill
// file /usr/include/signal.h line 127
extern signed int kill(signed int, signed int);
// llabs
// file /usr/include/stdlib.h line 779
extern signed long long int llabs(signed long long int);
// lseek
// file /usr/include/unistd.h line 334
extern signed long int lseek(signed int, signed long int, signed int);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// message
// file rngd.c line 487
extern void message(signed int priority, const char *fmt, ...);
// message_strerr
// file rngd.c line 501
extern void message_strerr(signed int priority, signed int errornumber, const char *fmt, ...);
// mlock
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 103
extern signed int mlock(const void *, unsigned long int);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// openlog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 181
extern void openlog(const char *, signed int, signed int);
// parse_opt
// file rngd.c line 278
static signed int parse_opt(signed int key, char *arg, struct argp_state *state);
// poll
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 57
extern signed int poll(struct pollfd *, unsigned long int, signed int);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_15 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_15 *, union anonymous_2 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_equal
// file /usr/include/pthread.h line 280
extern signed int pthread_equal(unsigned long int, unsigned long int);
// pthread_exit
// file /usr/include/pthread.h line 244
extern void pthread_exit(void *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_2 *, const union anonymous_6 *);
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
extern signed int pthread_sigmask(signed int, const struct anonymous *, struct anonymous *);
// random_add_entropy
// file rngd_linux.c line 186
static void random_add_entropy(void *buf, unsigned long int size);
// random_sleep
// file rngd_linux.c line 221
static void random_sleep(void);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// rewind
// file /usr/include/stdio.h line 759
extern void rewind(struct _IO_FILE *);
// rng_data_source_work
// file rngd_entsource.c line 265
static void rng_data_source_work(signed int i, struct timeval *start, struct timeval *stop);
// scale_mult_unit
// file stats.c line 57
static void scale_mult_unit(char *unit, unsigned long int unitsize, const char *baseunit, double *value_min, double *value_avg, double *value_max);
// sched_yield
// file /usr/include/sched.h line 65
extern signed int sched_yield(void);
// set_stat_prefix
// file stats.h line 37
extern void set_stat_prefix(const char *prefix);
// sigaction
// file /usr/include/signal.h line 259
extern signed int sigaction(signed int, struct sigaction *, struct sigaction *);
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous *, signed int);
// sigalrm_handler
// file rngd_signals.c line 56
static void sigalrm_handler(signed int sig);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous *);
// sigterm_handler
// file rngd_signals.c line 46
static void sigterm_handler(signed int sig);
// sigusr1_handler
// file rngd_signals.c line 51
static void sigusr1_handler(signed int sig);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// strcasecmp
// file /usr/include/string.h line 533
extern signed int strcasecmp(const char *, const char *);
// strerror_r
// file /usr/include/string.h line 437
extern char * strerror_r(signed int, char *, unsigned long int);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncat
// file /usr/include/string.h line 140
extern char * strncat(char *, const char *, unsigned long int);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strtof
// file /usr/include/stdlib.h line 172
extern float strtof(const char *, char ** restrict );
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// syslog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 190
extern void syslog(signed int, const char *, ...);
// test_malloc
// file rngd_threads.c line 74
void * test_malloc(void *p);
// uname
// file /usr/include/x86_64-linux-gnu/sys/utsname.h line 81
extern signed int uname(struct utsname *);
// update_stat
// file stats.h line 40
extern void update_stat(struct rng_stat *stat, unsigned long int value);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// via_xstore
// file viapadlock_engine.c line 456
static inline unsigned int via_xstore(unsigned long int *addr, unsigned int edx_in);
// viapadlock_rng_enable
// file viapadlock_engine.h line 107
extern signed int viapadlock_rng_enable(unsigned int enable, struct anonymous_1 *cfg);
// viapadlock_rng_free
// file viapadlock_engine.c line 334
extern void viapadlock_rng_free(void);
// viapadlock_rng_generate_config
// file viapadlock_engine.h line 94
extern double viapadlock_rng_generate_config(unsigned int quality, struct anonymous_1 *cfg);
// viapadlock_rng_init
// file viapadlock_engine.h line 64
extern signed int viapadlock_rng_init(const char *devicepath);
// viapadlock_rng_read
// file viapadlock_engine.h line 116
extern signed long int viapadlock_rng_read(void *buf, unsigned long int size);
// vsyslog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 200
extern void vsyslog(signed int, const char *, void **);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// xread
// file rngd_entsource.c line 110
static signed int xread(void *buf, unsigned long int size, unsigned int abortonsigalrm);

struct anonymous_13
{
  // _call_addr
  void *_call_addr;
  // _syscall
  signed int _syscall;
  // _arch
  unsigned int _arch;
};

struct anonymous_11
{
  // si_addr
  void *si_addr;
  // si_addr_lsb
  signed short int si_addr_lsb;
};

struct anonymous
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous_14
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

struct anonymous_7
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
};

struct anonymous_10
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

struct anonymous_9
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous_8
{
  // si_tid
  signed int si_tid;
  // si_overrun
  signed int si_overrun;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous_12
{
  // si_band
  signed long int si_band;
  // si_fd
  signed int si_fd;
};

union anonymous_3
{
  // _pad
  signed int _pad[28l];
  // _kill
  struct anonymous_7 _kill;
  // _timer
  struct anonymous_8 _timer;
  // _rt
  struct anonymous_9 _rt;
  // _sigchld
  struct anonymous_10 _sigchld;
  // _sigfault
  struct anonymous_11 _sigfault;
  // _sigpoll
  struct anonymous_12 _sigpoll;
  // _sigsys
  struct anonymous_13 _sigsys;
};

struct anonymous_4
{
  // si_signo
  signed int si_signo;
  // si_errno
  signed int si_errno;
  // si_code
  signed int si_code;
  // _sifields
  union anonymous_3 _sifields;
};

struct anonymous_18
{
  // MSR_LSW
  unsigned int MSR_LSW;
  // MSR_LSW_MASK
  unsigned int MSR_LSW_MASK;
  // rng_type
  enum anonymous_17 rng_type;
  // msr_fd
  signed int msr_fd[32l];
  // divisor
  unsigned int divisor;
};

struct anonymous_1
{
  // dc_bias
  unsigned int dc_bias;
  // string_filter
  unsigned int string_filter;
  // noise_source
  enum anonymous_16 noise_source;
  // whitener
  unsigned int whitener;
  // divisor
  unsigned int divisor;
};

union anonymous_5
{
  // sa_handler
  void (*sa_handler)(signed int);
  // sa_sigaction
  void (*sa_sigaction)(signed int, struct anonymous_4 *, void *);
};

union anonymous_6
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_15
{
  // __data
  struct anonymous_14 __data;
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

union anonymous_2
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

struct argp
{
  // options
  struct argp_option *options;
  // parser
  signed int (*parser)(signed int, char *, struct argp_state *);
  // args_doc
  const char *args_doc;
  // doc
  const char *doc;
  // children
  struct argp_child *children;
  // help_filter
  char * (*help_filter)(signed int, const char *, void *);
  // argp_domain
  const char *argp_domain;
};

struct argp_child
{
  // argp
  struct argp *argp;
  // flags
  signed int flags;
  // header
  const char *header;
  // group
  signed int group;
};

struct argp_option
{
  // name
  const char *name;
  // key
  signed int key;
  // arg
  const char *arg;
  // flags
  signed int flags;
  // doc
  const char *doc;
  // group
  signed int group;
};

struct argp_state
{
  // root_argp
  struct argp *root_argp;
  // argc
  signed int argc;
  // argv
  char **argv;
  // next
  signed int next;
  // flags
  unsigned int flags;
  // arg_num
  unsigned int arg_num;
  // quoted
  signed int quoted;
  // input
  void *input;
  // child_inputs
  void **child_inputs;
  // hook
  void *hook;
  // name
  char *name;
  // err_stream
  struct _IO_FILE *err_stream;
  // out_stream
  struct _IO_FILE *out_stream;
  // pstate
  void *pstate;
};

struct arguments
{
  // random_name
  char *random_name;
  // rng_name
  char *rng_name;
  // pidfile_name
  char *pidfile_name;
  // random_step
  signed int random_step;
  // fill_watermark
  signed int fill_watermark;
  // feed_interval
  signed int feed_interval;
  // rng_timeout
  signed int rng_timeout;
  // rng_quality
  signed int rng_quality;
  // daemon
  signed int daemon;
  // rng_entropy
  double rng_entropy;
  // rng_buffers
  signed int rng_buffers;
  // rng_driver
  enum anonymous_20 rng_driver;
};

struct buf_fifo
{
  // mutex
  union anonymous_2 mutex;
  // data
  volatile signed int *data;
  // head
  volatile signed int head;
  // tail
  volatile signed int tail;
};

struct buffer_queues
{
  // empty
  struct buf_fifo empty;
  // full
  struct buf_fifo full;
  // accepted
  struct buf_fifo accepted;
  // rejected
  struct buf_fifo rejected;
};

struct fips_ctx
{
  // poker
  signed int poker[16l];
  // runs
  signed int runs[12l];
  // ones
  signed int ones;
  // rlength
  signed int rlength;
  // current_bit
  signed int current_bit;
  // last_bit
  signed int last_bit;
  // longrun
  signed int longrun;
  // last32
  unsigned int last32;
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

struct rng_stat
{
  // max
  unsigned long int max;
  // min
  unsigned long int min;
  // num_samples
  unsigned long int num_samples;
  // sum
  unsigned long int sum;
};

struct rng_stats
{
  // group1_mutex
  union anonymous_2 group1_mutex;
  // bytes_received
  unsigned long int bytes_received;
  // source_blockfill
  struct rng_stat source_blockfill;
  // group2_mutex
  union anonymous_2 group2_mutex;
  // fips_blockfill
  struct rng_stat fips_blockfill;
  // bad_fips_blocks
  unsigned long int bad_fips_blocks;
  // good_fips_blocks
  unsigned long int good_fips_blocks;
  // fips_failures
  unsigned long int fips_failures[5l];
  // group3_mutex
  union anonymous_2 group3_mutex;
  // bytes_sent
  unsigned long int bytes_sent;
  // entropy_sent
  unsigned long int entropy_sent;
  // sink_starved
  unsigned long int sink_starved;
  // buffer_lowmark
  unsigned long int buffer_lowmark;
  // sink_wait
  struct rng_stat sink_wait;
};

struct sigaction
{
  // __sigaction_handler
  union anonymous_5 __sigaction_handler;
  // sa_mask
  struct anonymous sa_mask;
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

struct trng_params
{
  // tag
  char *tag;
  // name
  char *name;
  // width
  signed int width;
  // buffers
  signed int buffers;
  // entropy
  double entropy;
  // driver
  enum anonymous_20 driver;
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


// am_daemon
// file rngd.c line 82
signed int am_daemon;
// argp
// file rngd.c line 476
static struct argp argp;
// doc
// file rngd.c line 104
static char doc[73l] = { 'C', 'h', 'e', 'c', 'k', ' ', 'a', 'n', 'd', ' ', 'f', 'e', 'e', 'd', ' ', 'r', 'a', 'n', 'd', 'o', 'm', ' ', 'd', 'a', 't', 'a', ' ', 'f', 'r', 'o', 'm', ' ', 'h', 'a', 'r', 'd', 'w', 'a', 'r', 'e', ' ', 'd', 'e', 'v', 'i', 'c', 'e', ' ', 't', 'o', ' ', 'k', 'e', 'r', 'n', 'e', 'l', ' ', 'e', 'n', 't', 'r', 'o', 'p', 'y', ' ', 'p', 'o', 'o', 'l', '.', '\n', 0 };
// options
// file rngd.c line 110
static struct argp_option options[19l] = { { .name=((const char *)NULL), .key=0, .arg=((const char *)NULL), .flags=0,
    .doc="Program control", .group=0 },
    { .name="foreground", .key=102, .arg=((const char *)NULL), .flags=0,
    .doc="Do not fork and become a daemon", .group=0 },
    { .name="background", .key=98, .arg=((const char *)NULL), .flags=0,
    .doc="Become a daemon (default)", .group=0 },
    { .name="pidfile", .key=112, .arg="file", .flags=0,
    .doc="Path to file to write PID to in daemon mode (default: /var/run/rngd.pid)", .group=0 },
    { .name="rng-buffers", .key=66, .arg="n", .flags=0,
    .doc="Number of buffers (default: 3),  0 < n <= 1000", .group=0 },
    { .name=((const char *)NULL), .key=0, .arg=((const char *)NULL), .flags=0,
    .doc="Input (entropy source) control", .group=0 },
    { .name="rng-driver", .key=82, .arg="name", .flags=0,
    .doc="Select the entropy source driver: \"stream\" or \"viapadlock\" (default: stream). \"stream\" is a general purpose Unix stream input driver, and honours rng-device, rng-timeout, and rng-entropy; \"viapadlock\" is a driver for the VIA PadLock TRNG. It honours rng-entropy and rng-timeout", .group=0 },
    { .name="rng-device", .key=114, .arg="file", .flags=0,
    .doc="Entropy source (default: /dev/hwrng)", .group=0 },
    { .name="rng-timeout", .key=84, .arg="n", .flags=0,
    .doc="Wait at most \"n\" seconds for the entropy source to provide some initial data. Set to zero to wait forever (default: 10s)", .group=0 },
    { .name="rng-entropy", .key=72, .arg="n", .flags=0,
    .doc="Entropy per bit of data received from entropy source (default: 1.0 for the \"stream\" entropy source driver, automatic for other entropy source drivers), 0 < n <= 1.0", .group=0 },
    { .name="rng-quality", .key=81, .arg="quality", .flags=0,
    .doc="If the entropy source supports it, selects the quality of the random data it will generate. Quality is: \"default\", \"low\", \"medium\" or \"high\". Do not use anything but \"high\" if the entropy sink will use the random data directly, instead of using it to seed a PRNG/entropy pool. Ignored by the \"stream\" entropy source driver", .group=0 },
    { .name="hrng", .key=0x81, .arg="name", .flags=0, .doc="Selects known-good defaults for rng-driver, rng-timeout and rng-entropy, for a given TRNG. These can be overriden by specifying one of those options explicitly. Use --hrng=help to get a list of known TRNGs",
    .group=0 },
    { .name=((const char *)NULL), .key=0, .arg=((const char *)NULL), .flags=0,
    .doc="Output (entropy sink) control", .group=0 },
    { .name="random-device", .key=111, .arg="file", .flags=0,
    .doc="Kernel device used for entropy output (default: /dev/random)", .group=0 },
    { .name="random-step", .key=115, .arg="n", .flags=0,
    .doc="Number of bytes written to random-device at a time (default: 64), 8 <= n <= 2500, \"n\" must be even", .group=0 },
    { .name="timeout", .key=0x82, .arg="n", .flags=0, .doc="Deprecated, same as --feed-interval",
    .group=0 },
    { .name="feed-interval", .key=116, .arg="n", .flags=0,
    .doc="When the entropy pool is full, write to random-device every \"n\" seconds. Set to zero to disable (default: 60)", .group=0 },
    { .name="fill-watermark", .key=87, .arg="n[%]", .flags=0,
    .doc="Do not stop feeding entropy to random-device until at least \"n\" bits of entropy are available in the pool. \"n\" can be the absolute number of bits, or a percentage of the pool size (default: 50%), 0 <= n <= kernel random pool size, or 0% <= n <= 100%", .group=0 },
    { .name=((const char *)NULL), .key=0, .arg=((const char *)NULL), .flags=0,
    .doc=((const char *)NULL), .group=0 } };
// argp
// file rngd.c line 476
static struct argp argp = { .options=options, .parser=parse_opt, .args_doc=(const char *)(void *)0, .doc=doc,
    .children=((struct argp_child *)NULL), .help_filter=((char * (*)(signed int, const char *, void *))NULL),
    .argp_domain=((const char *)NULL) };
// argp_err_exit_status
// file rngd.c line 102
signed int argp_err_exit_status = 10;
// argp_program_bug_address
// file rngd.c line 101
const char *argp_program_bug_address = "rng-tools@packages.debian.org";
// argp_program_version
// file rngd.c line 90
const char *argp_program_version = "rngd 2-unofficial-mt.14\nCopyright (c) 2001-2004 by Jeff Garzik\nCopyright (c) 2004,2005 by Henrique de Moraes Holschuh\nCopyright (c) 2001 by Philipp Rumpf\nVIA PadLock RNG code based on work by Martin Peck\nThis is free software; see the source for copying conditions.  There is NO warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.";
// arguments
// file rngd.c line 204
struct arguments *arguments;
// default_arguments
// file rngd.c line 190
static struct arguments default_arguments = { .random_name="/dev/random", .rng_name="/dev/hwrng", .pidfile_name="/var/run/rngd.pid",
    .random_step=64, .fill_watermark=-50,
    .feed_interval=60, .rng_timeout=10,
    .rng_quality=0, .daemon=1, .rng_entropy=1.0,
    .rng_buffers=3, .rng_driver=(enum anonymous_20)RNGD_ENTSOURCE_UNIXSTREAM };
// arguments
// file rngd.c line 204
struct arguments *arguments = &default_arguments;
// buffer_queues
// file rngd_threads.c line 52
struct buffer_queues buffer_queues;
// cpudev_default_path
// file viapadlock_engine.c line 137
static const char * const cpudev_default_path = "/dev/cpu/%u";
// cpudev_path
// file viapadlock_engine.c line 136
static char cpudev_path[4097l];
// daemon_lockfd
// file rngd.c line 85
static signed int daemon_lockfd;
// daemon_lockfp
// file rngd.c line 84
static struct _IO_FILE *daemon_lockfp = (struct _IO_FILE *)(void *)0;
// entropy_source_driver
// file rngd_entsource.c line 66
static enum anonymous_20 entropy_source_driver = (enum anonymous_20)RNGD_ENTSOURCE_NONE;
// exitstatus
// file rngd.c line 83
signed int exitstatus = 0;
// fips_test_mask
// file fips.c line 44
const unsigned int fips_test_mask[5l] = { (const unsigned int)0x0001, (const unsigned int)0x0002, (const unsigned int)0x0004, (const unsigned int)0x0008, (const unsigned int)0x0010 };
// fips_test_names
// file fips.c line 37
const char *fips_test_names[5l] = { "FIPS 140-2(2001-10-10) Monobit", "FIPS 140-2(2001-10-10) Poker", "FIPS 140-2(2001-10-10) Runs", "FIPS 140-2(2001-10-10) Long run", "FIPS 140-2(2001-10-10) Continuous run" };
// fipsctx
// file rngd_entsource.c line 62
static struct fips_ctx fipsctx;
// gotsigalrm
// file rngd_signals.c line 38
volatile signed int gotsigalrm = 0;
// gotsigterm
// file rngd_signals.c line 36
volatile signed int gotsigterm = 0;
// gotsigusr1
// file rngd_signals.c line 37
volatile signed int gotsigusr1 = 0;
// kernel
// file rngd.c line 87
enum anonymous_0 kernel;
// masterprocess
// file rngd.c line 81
signed int masterprocess;
// pausesource
// file rngd_entsource.c line 61
static volatile signed int pausesource = 0;
// random_device_timeout
// file rngd_linux.c line 66
static signed int random_device_timeout;
// random_fd
// file rngd_linux.c line 61
static signed int random_fd = -1;
// random_pool_fill_watermark
// file rngd_linux.c line 65
static signed long int random_pool_fill_watermark = (signed long int)2048;
// random_pool_size
// file rngd_linux.c line 64
static signed long int random_pool_size = (signed long int)4096;
// rng_buf
// file rngd_threads.c line 47
unsigned char (**rng_buf)[2500l] = (unsigned char (**)[2500l])(void *)0;
// rng_buffer_empty
// file rngd_entsource.c line 71
union anonymous_15 rng_buffer_empty = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// rng_buffer_empty_mutex
// file rngd_entsource.c line 72
union anonymous_2 rng_buffer_empty_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// rng_buffer_raw
// file rngd_entsource.c line 75
union anonymous_15 rng_buffer_raw = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// rng_buffer_raw_mutex
// file rngd_entsource.c line 76
union anonymous_2 rng_buffer_raw_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// rng_buffer_ready
// file rngd_linux.c line 69
union anonymous_15 rng_buffer_ready = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// rng_buffer_ready_mutex
// file rngd_linux.c line 70
union anonymous_2 rng_buffer_ready_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// rng_buffers
// file rngd_threads.c line 46
signed int rng_buffers = 0;
// rng_fd
// file rngd_entsource.c line 67
static signed int rng_fd = -1;
// rng_source_timeout
// file rngd_entsource.c line 68
static signed int rng_source_timeout = 10;
// rng_stats
// file rngd.c line 78
struct rng_stats rng_stats;
// sigalrm_installed
// file rngd_signals.c line 43
static unsigned int sigalrm_installed = (unsigned int)0;
// sigalrm_mutex
// file rngd_signals.c line 41
static union anonymous_2 sigalrm_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// sigalrm_owner
// file rngd_signals.c line 42
static unsigned long int sigalrm_owner;
// stat_prefix
// file stats.c line 47
static char stat_prefix[20l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// throttling
// file rngd_entsource.c line 60
static volatile signed int throttling = 0;
// trng_parameters
// file rngd.c line 215
static struct trng_params trng_parameters[4l] = { { .tag="intelfwh", .name="Intel FWH (82802AB/AC) RNG", .width=32,
    .buffers=5, .entropy=0.998, .driver=(enum anonymous_20)RNGD_ENTSOURCE_UNIXSTREAM },
    { .tag="viakernel", .name="VIA Padlock RNG (Kernel driver, deprecated)", .width=64,
    .buffers=3, .entropy=0.75, .driver=(enum anonymous_20)RNGD_ENTSOURCE_UNIXSTREAM },
    { .tag="viapadlock", .name="VIA Padlock RNG", .width=64,
    .buffers=3, .entropy=0.0, .driver=(enum anonymous_20)RNGD_ENTSOURCE_VIAPADLOCK },
    { .tag=(char *)(void *)0, .name=((char *)NULL), .width=0,
    .buffers=0, .entropy=0.000000, .driver=(enum anonymous_20)0 } };
// viapadlock_engines_detected
// file viapadlock_engine.c line 123
static unsigned int viapadlock_engines_detected = (unsigned int)0;
// viapadlock_state
// file viapadlock_engine.c line 133
static struct anonymous_18 viapadlock_state;

// decode_cpu_revision
// file viapadlock_engine.c line 142
static unsigned int decode_cpu_revision(unsigned int tfms)
{
  unsigned int family;
  unsigned int model;
  unsigned int stepping;
  family = tfms >> 8 & (unsigned int)0xf;
  model = tfms >> 4 & (unsigned int)0xf;
  if((3840u & tfms) == 3840u)
  {
    family = family + (tfms >> 20 & (unsigned int)0xff);
    model = model | tfms >> 12 & (unsigned int)0xf0;
  }

  stepping = tfms & (unsigned int)0xf;
  return family << 16 | model << 8 | stepping;
}

// detect_via_padlock_rng
// file viapadlock_engine.c line 167
static signed int detect_via_padlock_rng(signed int cpuid_fd, struct anonymous_18 *rng, signed int is_first_rng)
{
  unsigned int cpuid_buf[8l];
  unsigned int CPU_revision;
  unsigned int msr_lsw_mask;
  enum anonymous_17 rng_type;
  /* assertion rng != ((void *)0) */
  assert(rng != (struct anonymous_18 *)(void *)0);
  /* assertion cpuid_fd != -1 */
  assert(cpuid_fd != -1);
  signed int *return_value___errno_location_1;
  signed int *return_value___errno_location_3;
  do
  {
    signed long int return_value_lseek_2;
    return_value_lseek_2=lseek(cpuid_fd, (signed long int)0, 0);
    if(!(return_value_lseek_2 == 0l))
    {
      return_value___errno_location_1=__errno_location();
      return *return_value___errno_location_1;
    }

    signed long int return_value_read_4;
    return_value_read_4=read(cpuid_fd, (void *)&cpuid_buf, (unsigned long int)32);
    if(return_value_read_4 == -1l)
    {
      return_value___errno_location_3=__errno_location();
      return *return_value___errno_location_3;
    }

  }
  while((_Bool)0);
  _Bool tmp_if_expr_5;
  if(cpuid_buf[0l] == 0u)
    tmp_if_expr_5 = (_Bool)1;

  else
    tmp_if_expr_5 = cpuid_buf[(signed long int)1] != (unsigned int)0x746e6543 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_6;
  if(tmp_if_expr_5)
    tmp_if_expr_6 = (_Bool)1;

  else
    tmp_if_expr_6 = cpuid_buf[(signed long int)3] != (unsigned int)0x48727561 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr_7;
  if(tmp_if_expr_6)
    tmp_if_expr_7 = (_Bool)1;

  else
    tmp_if_expr_7 = cpuid_buf[(signed long int)2] != (unsigned int)0x736c7561 ? (_Bool)1 : (_Bool)0;
  signed int *return_value___errno_location_8;
  signed int *return_value___errno_location_10;
  _Bool tmp_if_expr_12;
  if(tmp_if_expr_7)
    return -1;

  else
  {
    CPU_revision=decode_cpu_revision(cpuid_buf[(signed long int)4]);
    do
    {
      signed long int return_value_lseek_9;
      return_value_lseek_9=lseek(cpuid_fd, (signed long int)-1073741824, 0);
      if(!(return_value_lseek_9 == -1073741824l))
      {
        return_value___errno_location_8=__errno_location();
        return *return_value___errno_location_8;
      }

      signed long int return_value_read_11;
      return_value_read_11=read(cpuid_fd, (void *)&cpuid_buf, (unsigned long int)32);
      if(return_value_read_11 == -1l)
      {
        return_value___errno_location_10=__errno_location();
        return *return_value___errno_location_10;
      }

    }
    while((_Bool)0);
    if(!(cpuid_buf[0l] >= 3221225473u))
      return -1;

    else
      if((4u & cpuid_buf[7l]) == 0u)
        return -1;

      else
        if(!(CPU_revision >= 395523u))
          return -1;

        else
        {
          msr_lsw_mask = (unsigned int)(16384 | 8192 | 7168 | 64);
          if(!(CPU_revision >= 395528u))
            rng_type = (enum anonymous_17)VIA_RNG_TYPE1_ONESRC;

          else
          {
            rng_type = (enum anonymous_17)VIA_RNG_TYPE1_TWOSRC;
            msr_lsw_mask = msr_lsw_mask | (unsigned int)768;
          }
          if(is_first_rng == 0)
          {
            if(!(rng_type == rng->rng_type))
              tmp_if_expr_12 = (_Bool)1;

            else
              tmp_if_expr_12 = msr_lsw_mask != rng->MSR_LSW_MASK ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr_12)
              return -1;

          }

          else
          {
            rng->rng_type = rng_type;
            rng->MSR_LSW_MASK = msr_lsw_mask;
            rng->MSR_LSW = (unsigned int)0;
            rng->divisor = (unsigned int)0;
          }
          return 0;
        }
  }
}

// die
// file rngd.c line 481
extern void die(signed int status)
{
  if(!(am_daemon == 0))
    syslog(3, "Exiting with status %d...", status);

  exit(status);
}

// disable_sigalrm
// file rngd_signals.c line 98
extern signed int disable_sigalrm(void)
{
  struct anonymous sig;
  sigemptyset(&sig);
  sigaddset(&sig, 14);
  pthread_sigmask(0, &sig, (struct anonymous *)(void *)0);
  pthread_mutex_lock(&sigalrm_mutex);
  unsigned long int return_value_pthread_self_1;
  signed int return_value_pthread_equal_2;
  if(!(sigalrm_installed == 0u))
  {
    return_value_pthread_self_1=pthread_self();
    return_value_pthread_equal_2=pthread_equal(return_value_pthread_self_1, sigalrm_owner);
    if(!(return_value_pthread_equal_2 == 0))
    {
      alarm((unsigned int)0);
      sigalrm_installed = (unsigned int)0;
    }

  }

  pthread_mutex_unlock(&sigalrm_mutex);
  return 0;
}

// do_rng_data_sink_loop
// file rngd_linux.h line 44
extern void * do_rng_data_sink_loop(void *trash)
{
  signed int i;
  signed int s;
  signed int r;
  signed int starving = 0;
  signed int nready;
  unsigned char *p;
  struct timeval start;
  struct timeval stop;
  if((signed int)kernel == KERNEL_LINUX_24)
    message(6, "Activating Linux kernel 2.4 entropy accounting bug workaround");

  while(buffer_queues.accepted.head == buffer_queues.accepted.tail)
  {
    if(!(gotsigterm == 0))
      pthread_exit((void *)0);

    pthread_mutex_lock(&rng_buffer_ready_mutex);
    pthread_cond_wait(&rng_buffer_ready, &rng_buffer_ready_mutex);
    pthread_mutex_unlock(&rng_buffer_ready_mutex);
  }
  message(6, "entropy feed to the kernel ready");
  while((_Bool)1)
  {
    if(!(gotsigterm == 0))
      pthread_exit((void *)0);

    if(!(buffer_queues.accepted.head == buffer_queues.accepted.tail))
    {
      do
      {
        pthread_mutex_lock(&buffer_queues.accepted.mutex);
        i = buffer_queues.accepted.data[(signed long int)buffer_queues.accepted.tail];
        buffer_queues.accepted.tail = (buffer_queues.accepted.tail + 1) % (rng_buffers + 1);
        pthread_mutex_unlock(&buffer_queues.accepted.mutex);
      }
      while((_Bool)0);
      if(!(starving == 0))
      {
        gettimeofday(&stop, ((struct timezone *)NULL));
        pthread_mutex_lock(&rng_stats.group3_mutex);
        unsigned long int return_value_elapsed_time_1;
        return_value_elapsed_time_1=elapsed_time(&start, &stop);
        update_stat(&rng_stats.sink_wait, return_value_elapsed_time_1);
        pthread_mutex_unlock(&rng_stats.group3_mutex);
        starving = 0;
      }

      p = (unsigned char *)rng_buf[(signed long int)i];
      r = 2500;
      while(r >= 1)
      {
        if(!(gotsigterm == 0))
          pthread_exit((void *)0);

        s = arguments->random_step;
        if(!(r >= s))
          s = r;

        random_add_entropy((void *)p, (unsigned long int)s);
        r = r - s;
        p = p + (signed long int)s;
        random_sleep();
      }
      nready=getbuffifo_count(&buffer_queues.accepted);
      pthread_mutex_lock(&rng_stats.group3_mutex);
      if(!((unsigned long int)nready >= rng_stats.buffer_lowmark))
        rng_stats.buffer_lowmark = (unsigned long int)nready;

      pthread_mutex_unlock(&rng_stats.group3_mutex);
      do
      {
        pthread_mutex_lock(&buffer_queues.empty.mutex);
        buffer_queues.empty.data[(signed long int)buffer_queues.empty.head] = i;
        buffer_queues.empty.head = (buffer_queues.empty.head + 1) % (rng_buffers + 1);
        pthread_mutex_unlock(&buffer_queues.empty.mutex);
      }
      while((_Bool)0);
      pthread_mutex_lock(&rng_buffer_empty_mutex);
      pthread_cond_signal(&rng_buffer_empty);
      pthread_mutex_unlock(&rng_buffer_empty_mutex);
    }

    else
    {
      gettimeofday(&start, ((struct timezone *)NULL));
      starving = 1;
      pthread_mutex_lock(&rng_stats.group3_mutex);
      rng_stats.sink_starved = rng_stats.sink_starved + 1ul;
      pthread_mutex_unlock(&rng_stats.group3_mutex);
      pthread_mutex_lock(&rng_buffer_ready_mutex);
      pthread_cond_wait(&rng_buffer_ready, &rng_buffer_ready_mutex);
      pthread_mutex_unlock(&rng_buffer_ready_mutex);
    }
  }
}

// do_rng_data_source_loop
// file rngd_entsource.h line 49
extern void * do_rng_data_source_loop(void *trash)
{
  signed int i;
  struct timeval start;
  struct timeval stop;
  while((_Bool)1)
  {
    if(!(gotsigterm == 0))
      pthread_exit((void *)0);

    if(pausesource == 0 && !(buffer_queues.empty.head == buffer_queues.empty.tail))
    {
      if(!(throttling == 0))
        sleep((unsigned int)(1 << throttling));

      if(!(gotsigterm == 0))
        pthread_exit((void *)0);

      do
      {
        pthread_mutex_lock(&buffer_queues.empty.mutex);
        i = buffer_queues.empty.data[(signed long int)buffer_queues.empty.tail];
        buffer_queues.empty.tail = (buffer_queues.empty.tail + 1) % (rng_buffers + 1);
        pthread_mutex_unlock(&buffer_queues.empty.mutex);
      }
      while((_Bool)0);
      rng_data_source_work(i, &start, &stop);
    }

    else
      if(pausesource == 0 && !(buffer_queues.rejected.head == buffer_queues.rejected.tail))
      {
        if(!(throttling == 0))
          sleep((unsigned int)(1 << throttling));

        if(!(gotsigterm == 0))
          pthread_exit((void *)0);

        do
        {
          pthread_mutex_lock(&buffer_queues.rejected.mutex);
          i = buffer_queues.rejected.data[(signed long int)buffer_queues.rejected.tail];
          buffer_queues.rejected.tail = (buffer_queues.rejected.tail + 1) % (rng_buffers + 1);
          pthread_mutex_unlock(&buffer_queues.rejected.mutex);
        }
        while((_Bool)0);
        rng_data_source_work(i, &start, &stop);
      }

      else
      {
        pthread_mutex_lock(&rng_buffer_empty_mutex);
        pthread_cond_wait(&rng_buffer_empty, &rng_buffer_empty_mutex);
        pthread_mutex_unlock(&rng_buffer_empty_mutex);
      }
  }
}

// do_rng_fips_test_loop
// file rngd_entsource.h line 60
extern void * do_rng_fips_test_loop(void *trash)
{
  signed int i;
  signed int j;
  signed int fips_result;
  struct timeval start;
  struct timeval stop;
  signed int bad_run;
  signed int warnuser;
  while(buffer_queues.full.head == buffer_queues.full.tail)
  {
    if(!(gotsigterm == 0))
      pthread_exit((void *)0);

    pthread_mutex_lock(&rng_buffer_raw_mutex);
    pthread_cond_wait(&rng_buffer_raw, &rng_buffer_raw_mutex);
    pthread_mutex_unlock(&rng_buffer_raw_mutex);
  }
  bad_run = 0;
  warnuser = 1;
  while((_Bool)1)
  {
    if(!(gotsigterm == 0))
      pthread_exit((void *)0);

    if(!(buffer_queues.full.head == buffer_queues.full.tail))
    {
      do
      {
        pthread_mutex_lock(&buffer_queues.full.mutex);
        i = buffer_queues.full.data[(signed long int)buffer_queues.full.tail];
        buffer_queues.full.tail = (buffer_queues.full.tail + 1) % (rng_buffers + 1);
        pthread_mutex_unlock(&buffer_queues.full.mutex);
      }
      while((_Bool)0);
      gettimeofday(&start, ((struct timezone *)NULL));
      fips_result=fips_run_rng_test(&fipsctx, (const void *)rng_buf[(signed long int)i]);
      if(fips_result == 0)
      {
        do
        {
          pthread_mutex_lock(&buffer_queues.accepted.mutex);
          buffer_queues.accepted.data[(signed long int)buffer_queues.accepted.head] = i;
          buffer_queues.accepted.head = (buffer_queues.accepted.head + 1) % (rng_buffers + 1);
          pthread_mutex_unlock(&buffer_queues.accepted.mutex);
        }
        while((_Bool)0);
        bad_run = 0;
      }

      else
      {
        bad_run = bad_run + 1;
        if(bad_run >= 4)
        {
          if(pausesource == 0)
            throttling = throttling + 1;

          pausesource = (volatile signed int)(buffer_queues.full.head != buffer_queues.full.tail);
        }

        do
        {
          pthread_mutex_lock(&buffer_queues.rejected.mutex);
          buffer_queues.rejected.data[(signed long int)buffer_queues.rejected.head] = i;
          buffer_queues.rejected.head = (buffer_queues.rejected.head + 1) % (rng_buffers + 1);
          pthread_mutex_unlock(&buffer_queues.rejected.mutex);
        }
        while((_Bool)0);
      }
      gettimeofday(&stop, ((struct timezone *)NULL));
      pthread_mutex_lock(&rng_stats.group2_mutex);
      unsigned long int return_value_elapsed_time_1;
      return_value_elapsed_time_1=elapsed_time(&start, &stop);
      update_stat(&rng_stats.fips_blockfill, return_value_elapsed_time_1);
      pthread_mutex_unlock(&rng_stats.group2_mutex);
      if(!(fips_result == 0))
      {
        if(pausesource == 0)
        {
          pthread_mutex_lock(&rng_buffer_empty_mutex);
          pthread_cond_signal(&rng_buffer_empty);
          pthread_mutex_unlock(&rng_buffer_empty_mutex);
        }

        pthread_mutex_lock(&rng_stats.group2_mutex);
        rng_stats.bad_fips_blocks = rng_stats.bad_fips_blocks + 1ul;
        j = 0;
        for( ; !(j >= 5); j = j + 1)
          if(!((fips_test_mask[(signed long int)j] & (unsigned int)fips_result) == 0u))
            rng_stats.fips_failures[(signed long int)j] = rng_stats.fips_failures[(signed long int)j] + 1ul;

        pthread_mutex_unlock(&rng_stats.group2_mutex);
        message(5, "block failed FIPS test: 0x%02x", fips_result);
        if(!(warnuser == 0) && !(throttling == 0))
        {
          warnuser = 0;
          message(4, "Too many consecutive bad blocks of data, check entropy source!");
          message(5, "Throttling down entropy source read speed...");
        }

        if(throttling >= 7)
        {
          message(2, "Too many bad blocks, entropy source malfunction assumed");
          exitstatus = 1;
          kill(masterprocess, 15);
          pthread_exit((void *)0);
        }

      }

      else
      {
        pausesource = 0;
        if(!(throttling == 0))
        {
          throttling = 0;
          warnuser = 1;
          message(5, "entropy source recovered");
        }

        pthread_mutex_lock(&rng_buffer_ready_mutex);
        pthread_cond_signal(&rng_buffer_ready);
        pthread_mutex_unlock(&rng_buffer_ready_mutex);
        pthread_mutex_lock(&rng_stats.group2_mutex);
        rng_stats.good_fips_blocks = rng_stats.good_fips_blocks + 1ul;
        pthread_mutex_unlock(&rng_stats.group2_mutex);
      }
    }

    else
    {
      pausesource = 0;
      pthread_mutex_lock(&rng_buffer_raw_mutex);
      pthread_cond_wait(&rng_buffer_raw, &rng_buffer_raw_mutex);
      pthread_mutex_unlock(&rng_buffer_raw_mutex);
    }
  }
}

// dump_rng_stats
// file rngd.c line 597
static void dump_rng_stats(void)
{
  signed int j;
  char buf[256l];
  pthread_mutex_lock(&rng_stats.group1_mutex);
  char *return_value_dump_stat_counter_1;
  return_value_dump_stat_counter_1=dump_stat_counter(buf, sizeof(char [256l]) /*256ul*/ , "bits received from HRNG source", rng_stats.bytes_received * (unsigned long int)8);
  message(6, return_value_dump_stat_counter_1);
  pthread_mutex_unlock(&rng_stats.group1_mutex);
  pthread_mutex_lock(&rng_stats.group3_mutex);
  char *return_value_dump_stat_counter_2;
  return_value_dump_stat_counter_2=dump_stat_counter(buf, sizeof(char [256l]) /*256ul*/ , "bits sent to kernel pool", rng_stats.bytes_sent * (unsigned long int)8);
  message(6, return_value_dump_stat_counter_2);
  char *return_value_dump_stat_counter_3;
  return_value_dump_stat_counter_3=dump_stat_counter(buf, sizeof(char [256l]) /*256ul*/ , "entropy added to kernel pool", rng_stats.entropy_sent);
  message(6, return_value_dump_stat_counter_3);
  pthread_mutex_unlock(&rng_stats.group3_mutex);
  pthread_mutex_lock(&rng_stats.group2_mutex);
  char *return_value_dump_stat_counter_4;
  return_value_dump_stat_counter_4=dump_stat_counter(buf, sizeof(char [256l]) /*256ul*/ , "FIPS 140-2 successes", rng_stats.good_fips_blocks);
  message(6, return_value_dump_stat_counter_4);
  char *return_value_dump_stat_counter_5;
  return_value_dump_stat_counter_5=dump_stat_counter(buf, sizeof(char [256l]) /*256ul*/ , "FIPS 140-2 failures", rng_stats.bad_fips_blocks);
  message(6, return_value_dump_stat_counter_5);
  j = 0;
  char *return_value_dump_stat_counter_6;
  for( ; !(j >= 5); j = j + 1)
  {
    return_value_dump_stat_counter_6=dump_stat_counter(buf, sizeof(char [256l]) /*256ul*/ , fips_test_names[(signed long int)j], rng_stats.fips_failures[(signed long int)j]);
    message(6, return_value_dump_stat_counter_6);
  }
  pthread_mutex_unlock(&rng_stats.group2_mutex);
  pthread_mutex_lock(&rng_stats.group1_mutex);
  char *return_value_dump_stat_bw_7;
  return_value_dump_stat_bw_7=dump_stat_bw(buf, sizeof(char [256l]) /*256ul*/ , "HRNG source speed", "bits", &rng_stats.source_blockfill, (unsigned long int)(2500 * 8));
  message(6, return_value_dump_stat_bw_7);
  pthread_mutex_unlock(&rng_stats.group1_mutex);
  pthread_mutex_lock(&rng_stats.group2_mutex);
  char *return_value_dump_stat_bw_8;
  return_value_dump_stat_bw_8=dump_stat_bw(buf, sizeof(char [256l]) /*256ul*/ , "FIPS tests speed", "bits", &rng_stats.fips_blockfill, (unsigned long int)(2500 * 8));
  message(6, return_value_dump_stat_bw_8);
  pthread_mutex_unlock(&rng_stats.group2_mutex);
  pthread_mutex_lock(&rng_stats.group3_mutex);
  char *return_value_dump_stat_counter_9;
  return_value_dump_stat_counter_9=dump_stat_counter(buf, sizeof(char [256l]) /*256ul*/ , "Lowest ready-buffers level", rng_stats.buffer_lowmark);
  message(6, return_value_dump_stat_counter_9);
  char *return_value_dump_stat_counter_10;
  return_value_dump_stat_counter_10=dump_stat_counter(buf, sizeof(char [256l]) /*256ul*/ , "Entropy starvations", rng_stats.sink_starved);
  message(6, return_value_dump_stat_counter_10);
  char *return_value_dump_stat_stat_11;
  return_value_dump_stat_stat_11=dump_stat_stat(buf, sizeof(char [256l]) /*256ul*/ , "Time spent starving for entropy", "us", &rng_stats.sink_wait);
  message(6, return_value_dump_stat_stat_11);
  pthread_mutex_unlock(&rng_stats.group3_mutex);
}

// dump_stat_bw
// file stats.h line 63
extern char * dump_stat_bw(char *buf, unsigned long int size, const char *msg, const char *unit, struct rng_stat *stat, unsigned long int blocksize)
{
  char unitscaled[20l];
  double bw_avg = 0.0;
  double bw_min = 0.0;
  double bw_max = 0.0;
  /* assertion stat != ((void *)0) && msg != ((void *)0) && unit != ((void *)0) */
  assert(stat != (struct rng_stat *)(void *)0 && msg != (const char *)(void *)0 && unit != (const char *)(void *)0);
  if(stat->max >= 1ul)
    bw_min = (1000000.0 * (double)blocksize) / (double)stat->max;

  if(stat->min >= 1ul)
    bw_max = (1000000.0 * (double)blocksize) / (double)stat->min;

  if(stat->num_samples >= 1ul)
    bw_avg = (1000000.0 * (double)blocksize * (double)stat->num_samples) / (double)stat->sum;

  scale_mult_unit(unitscaled, sizeof(char [20l]) /*20ul*/ , unit, &bw_min, &bw_avg, &bw_max);
  buf[(signed long int)(size - (unsigned long int)1)] = (char)0;
  snprintf(buf, size - (unsigned long int)1, "%s%s: (min=%.3f; avg=%.3f; max=%.3f)%s/s", (const void *)stat_prefix, msg, bw_min, bw_avg, bw_max, (const void *)unitscaled);
  return buf;
}

// dump_stat_counter
// file stats.h line 52
extern char * dump_stat_counter(char *buf, unsigned long int size, const char *msg, unsigned long int value)
{
  /* assertion buf != ((void *)0) && msg != ((void *)0) */
  assert(buf != (char *)(void *)0 && msg != (const char *)(void *)0);
  snprintf(buf, size - (unsigned long int)1, "%s%s: %lu", (const void *)stat_prefix, msg, value);
  buf[(signed long int)(size - (unsigned long int)1)] = (char)0;
  return buf;
}

// dump_stat_stat
// file stats.h line 56
extern char * dump_stat_stat(char *buf, unsigned long int size, const char *msg, const char *unit, struct rng_stat *stat)
{
  double avg = 0.0;
  /* assertion stat != ((void *)0) && msg != ((void *)0) && unit != ((void *)0) && buf != ((void *)0) */
  assert(stat != (struct rng_stat *)(void *)0 && msg != (const char *)(void *)0 && unit != (const char *)(void *)0 && buf != (char *)(void *)0);
  if(stat->num_samples >= 1ul)
    avg = (double)stat->sum / (double)stat->num_samples;

  buf[(signed long int)(size - (unsigned long int)1)] = (char)0;
  snprintf(buf, size - (unsigned long int)1, "%s%s: (min=%lu; avg=%.3f; max=%lu)%s", (const void *)stat_prefix, msg, stat->min, avg, stat->max, unit);
  return buf;
}

// elapsed_time
// file util.h line 28
extern unsigned long int elapsed_time(struct timeval *start, struct timeval *stop)
{
  signed long int diff;
  /* assertion start != ((void *)0) && stop != ((void *)0) */
  assert(start != (struct timeval *)(void *)0 && stop != (struct timeval *)(void *)0);
  diff = (signed long int)(((unsigned long int)(stop->tv_sec - start->tv_sec) * 1000000ULL + (unsigned long int)stop->tv_usec) - (unsigned long int)start->tv_usec);
  signed long long int return_value_llabs_1;
  return_value_llabs_1=llabs(diff);
  return (unsigned long int)return_value_llabs_1;
}

// enable_sigalrm
// file rngd_signals.c line 62
extern signed int enable_sigalrm(unsigned int seconds)
{
  struct anonymous sigs;
  struct sigaction action;
  signed int result = 0;
  pthread_mutex_lock(&sigalrm_mutex);
  _Bool tmp_if_expr_5;
  unsigned long int return_value_pthread_self_3;
  signed int return_value_pthread_equal_4;
  if(sigalrm_installed == 0u)
    tmp_if_expr_5 = (_Bool)1;

  else
  {
    return_value_pthread_self_3=pthread_self();
    return_value_pthread_equal_4=pthread_equal(return_value_pthread_self_3, sigalrm_owner);
    tmp_if_expr_5 = return_value_pthread_equal_4 != 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr_5)
  {
    sigemptyset(&action.sa_mask);
    action.sa_flags = 0;
    action.__sigaction_handler.sa_handler = sigalrm_handler;
    signed int return_value_sigaction_2;
    return_value_sigaction_2=sigaction(14, &action, (struct sigaction *)(void *)0);
    if(!(return_value_sigaction_2 >= 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      message_strerr(3, *return_value___errno_location_1, "unable to install signal handler for SIGARLM");
      result = -1;
    }

    else
    {
      sigemptyset(&sigs);
      sigaddset(&sigs, 14);
      pthread_sigmask(1, &sigs, (struct anonymous *)(void *)0);
      sigalrm_installed = (unsigned int)1;
      sigalrm_owner=pthread_self();
      gotsigalrm = 0;
      alarm(seconds);
    }
  }

  else
  {
    message(3, "PROGRAM FAILURE DETECTED: two threads trying to use SIGARLM at the same time");
    result = -1;
  }
  pthread_mutex_unlock(&sigalrm_mutex);
  return result;
}

// entropy_source_driver_name
// file rngd_entsource.h line 36
extern const char * entropy_source_driver_name(enum anonymous_20 driver)
{
  switch((signed int)driver)
  {
    case RNGD_ENTSOURCE_NONE:
      return "(none)";
    case RNGD_ENTSOURCE_UNIXSTREAM:
      return "UNIX stream";
    case RNGD_ENTSOURCE_VIAPADLOCK:
      return "VIA PadLock TRNG";
    default:
      return "(unknown)";
  }
}

// fips_init
// file fips.h line 36
extern void fips_init(struct fips_ctx *ctx, unsigned int last32)
{
  if(!(ctx == ((struct fips_ctx *)NULL)))
  {
    memset((void *)ctx->poker, 0, sizeof(signed int [16l]) /*64ul*/ );
    memset((void *)ctx->runs, 0, sizeof(signed int [12l]) /*48ul*/ );
    ctx->longrun = 0;
    ctx->ones = 0;
    ctx->rlength = -1;
    ctx->current_bit = 0;
    ctx->last_bit = 0;
    ctx->last32 = last32;
  }

}

// fips_run_rng_test
// file fips.h line 69
extern signed int fips_run_rng_test(struct fips_ctx *ctx, const void *buf)
{
  signed int i;
  signed int j;
  signed int rng_test = 0;
  const unsigned char *rngdatabuf;
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
  _Bool tmp_if_expr_12;
  _Bool tmp_if_expr_13;
  _Bool tmp_if_expr_14;
  _Bool tmp_if_expr_15;
  _Bool tmp_if_expr_16;
  _Bool tmp_if_expr_17;
  _Bool tmp_if_expr_18;
  _Bool tmp_if_expr_19;
  _Bool tmp_if_expr_20;
  _Bool tmp_if_expr_21;
  _Bool tmp_if_expr_22;
  _Bool tmp_if_expr_23;
  _Bool tmp_if_expr_24;
  if(ctx == ((struct fips_ctx *)NULL))
    return -1;

  else
    if(buf == NULL)
      return -1;

    else
    {
      rngdatabuf = (const unsigned char *)buf;
      i = 0;
      for( ; !(i >= 2500); i = i + 4)
      {
        signed int new32 = (signed int)rngdatabuf[(signed long int)i] | (signed int)rngdatabuf[(signed long int)(i + 1)] << 8 | (signed int)rngdatabuf[(signed long int)(i + 2)] << 16 | (signed int)rngdatabuf[(signed long int)(i + 3)] << 24;
        if((unsigned int)new32 == ctx->last32)
          rng_test = rng_test | 0x0010;

        ctx->last32 = (unsigned int)new32;
        fips_test_store(ctx, (unsigned int)rngdatabuf[(signed long int)i]);
        fips_test_store(ctx, (unsigned int)rngdatabuf[(signed long int)(i + 1)]);
        fips_test_store(ctx, (unsigned int)rngdatabuf[(signed long int)(i + 2)]);
        fips_test_store(ctx, (unsigned int)rngdatabuf[(signed long int)(i + 3)]);
      }
      if(!(ctx->rlength >= 5))
        ctx->runs[(signed long int)(ctx->rlength + 6 * ctx->current_bit)] = ctx->runs[(signed long int)(ctx->rlength + 6 * ctx->current_bit)] + 1;

      else
      {
        ctx->runs[(signed long int)(5 + 6 * ctx->current_bit)] = ctx->runs[(signed long int)(5 + 6 * ctx->current_bit)] + 1;
        if(ctx->rlength >= 25)
          rng_test = rng_test | 0x0008;

      }
      if(!(ctx->longrun == 0))
      {
        rng_test = rng_test | 0x0008;
        ctx->longrun = 0;
      }

      if(ctx->ones >= 10275)
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = ctx->ones <= 9725 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_1)
        rng_test = rng_test | 0x0001;

      i = 0;
      j = 0;
      for( ; !(i >= 16); i = i + 1)
        j = j + ctx->poker[(signed long int)i] * ctx->poker[(signed long int)i];
      if(j >= 1576929 || !(j >= 1563176))
        rng_test = rng_test | 0x0002;

      if(!(ctx->runs[0l] >= 2315))
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = ctx->runs[(signed long int)0] > 2685 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = ctx->runs[(signed long int)1] < 1114 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_3)
        tmp_if_expr_4 = (_Bool)1;

      else
        tmp_if_expr_4 = ctx->runs[(signed long int)1] > 1386 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_4)
        tmp_if_expr_5 = (_Bool)1;

      else
        tmp_if_expr_5 = ctx->runs[(signed long int)2] < 527 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_5)
        tmp_if_expr_6 = (_Bool)1;

      else
        tmp_if_expr_6 = ctx->runs[(signed long int)2] > 723 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_6)
        tmp_if_expr_7 = (_Bool)1;

      else
        tmp_if_expr_7 = ctx->runs[(signed long int)3] < 240 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_7)
        tmp_if_expr_8 = (_Bool)1;

      else
        tmp_if_expr_8 = ctx->runs[(signed long int)3] > 384 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_8)
        tmp_if_expr_9 = (_Bool)1;

      else
        tmp_if_expr_9 = ctx->runs[(signed long int)4] < 103 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_9)
        tmp_if_expr_10 = (_Bool)1;

      else
        tmp_if_expr_10 = ctx->runs[(signed long int)4] > 209 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_10)
        tmp_if_expr_11 = (_Bool)1;

      else
        tmp_if_expr_11 = ctx->runs[(signed long int)5] < 103 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_11)
        tmp_if_expr_12 = (_Bool)1;

      else
        tmp_if_expr_12 = ctx->runs[(signed long int)5] > 209 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_12)
        tmp_if_expr_13 = (_Bool)1;

      else
        tmp_if_expr_13 = ctx->runs[(signed long int)6] < 2315 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_13)
        tmp_if_expr_14 = (_Bool)1;

      else
        tmp_if_expr_14 = ctx->runs[(signed long int)6] > 2685 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_14)
        tmp_if_expr_15 = (_Bool)1;

      else
        tmp_if_expr_15 = ctx->runs[(signed long int)7] < 1114 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_15)
        tmp_if_expr_16 = (_Bool)1;

      else
        tmp_if_expr_16 = ctx->runs[(signed long int)7] > 1386 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_16)
        tmp_if_expr_17 = (_Bool)1;

      else
        tmp_if_expr_17 = ctx->runs[(signed long int)8] < 527 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_17)
        tmp_if_expr_18 = (_Bool)1;

      else
        tmp_if_expr_18 = ctx->runs[(signed long int)8] > 723 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_18)
        tmp_if_expr_19 = (_Bool)1;

      else
        tmp_if_expr_19 = ctx->runs[(signed long int)9] < 240 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_19)
        tmp_if_expr_20 = (_Bool)1;

      else
        tmp_if_expr_20 = ctx->runs[(signed long int)9] > 384 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_20)
        tmp_if_expr_21 = (_Bool)1;

      else
        tmp_if_expr_21 = ctx->runs[(signed long int)10] < 103 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_21)
        tmp_if_expr_22 = (_Bool)1;

      else
        tmp_if_expr_22 = ctx->runs[(signed long int)10] > 209 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_22)
        tmp_if_expr_23 = (_Bool)1;

      else
        tmp_if_expr_23 = ctx->runs[(signed long int)11] < 103 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_23)
        tmp_if_expr_24 = (_Bool)1;

      else
        tmp_if_expr_24 = ctx->runs[(signed long int)11] > 209 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_24)
        rng_test = rng_test | 0x0004;

      memset((void *)ctx->poker, 0, sizeof(signed int [16l]) /*64ul*/ );
      memset((void *)ctx->runs, 0, sizeof(signed int [12l]) /*48ul*/ );
      ctx->ones = 0;
      ctx->rlength = -1;
      ctx->current_bit = 0;
      return rng_test;
    }
}

// fips_test_store
// file fips.c line 82
static void fips_test_store(struct fips_ctx *ctx, unsigned int rng_data)
{
  signed int j;
  ctx->poker[(signed long int)(rng_data >> 4)] = ctx->poker[(signed long int)(rng_data >> 4)] + 1;
  ctx->poker[(signed long int)(rng_data & (unsigned int)15)] = ctx->poker[(signed long int)(rng_data & (unsigned int)15)] + 1;
  j = 7;
  for( ; j >= 0; j = j - 1)
  {
    ctx->current_bit = (signed int)(rng_data >> j & (unsigned int)1);
    ctx->ones = ctx->ones + ctx->current_bit;
    if(!(ctx->current_bit == ctx->last_bit))
    {
      if(!(ctx->rlength >= 5))
        ctx->runs[(signed long int)(ctx->rlength + 6 * ctx->current_bit)] = ctx->runs[(signed long int)(ctx->rlength + 6 * ctx->current_bit)] + 1;

      else
        ctx->runs[(signed long int)(5 + 6 * ctx->current_bit)] = ctx->runs[(signed long int)(5 + 6 * ctx->current_bit)] + 1;
      if(ctx->rlength >= 25)
        ctx->longrun = 1;

      ctx->rlength = 0;
      ctx->last_bit = ctx->current_bit;
    }

    else
      ctx->rlength = ctx->rlength + 1;
  }
}

// get_lock
// file rngd.c line 540
static void get_lock(const char *pidfile_name)
{
  signed int otherpid = 0;
  signed int r;
  /* assertion pidfile_name != ((void *)0) */
  assert(pidfile_name != (const char *)(void *)0);
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_4;
  signed int *return_value___errno_location_3;
  if(daemon_lockfp == ((struct _IO_FILE *)NULL))
  {
    daemon_lockfd=open(pidfile_name, 02 | 0100, 0644);
    if(daemon_lockfd == -1)
      tmp_if_expr_2 = (_Bool)1;

    else
    {
      daemon_lockfp=fdopen(daemon_lockfd, "r+");
      tmp_if_expr_2 = daemon_lockfp == (struct _IO_FILE *)(void *)0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_2)
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      message_strerr(3, *return_value___errno_location_1, "can't open or create %s", pidfile_name);
      die(10);
    }

    fcntl(daemon_lockfd, 2, 1);
    do
    {
      r=flock(daemon_lockfd, 2 | 4);
      if(!(r == 0))
      {
        return_value___errno_location_3=__errno_location();
        tmp_if_expr_4 = *return_value___errno_location_3 == 4 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_4 = (_Bool)0;
    }
    while(tmp_if_expr_4);
    if(!(r == 0))
    {
      signed int *return_value___errno_location_6;
      return_value___errno_location_6=__errno_location();
      if(*return_value___errno_location_6 == 11)
      {
        rewind(daemon_lockfp);
        fscanf(daemon_lockfp, "%d", &otherpid);
        message(3, "can't lock %s, running daemon's pid may be %d", pidfile_name, otherpid);
      }

      else
      {
        signed int *return_value___errno_location_5;
        return_value___errno_location_5=__errno_location();
        message_strerr(3, *return_value___errno_location_5, "can't lock %s", pidfile_name);
      }
      die(10);
    }

  }

  rewind(daemon_lockfp);
  signed int return_value_getpid_7;
  return_value_getpid_7=getpid();
  fprintf(daemon_lockfp, "%ld\n", (signed long int)return_value_getpid_7);
  fflush(daemon_lockfp);
  signed int return_value_fileno_8;
  return_value_fileno_8=fileno(daemon_lockfp);
  signed long int return_value_ftell_9;
  return_value_ftell_9=ftell(daemon_lockfp);
  ftruncate(return_value_fileno_8, return_value_ftell_9);
}

// get_rng_proc_parameter
// file rngd_linux.c line 76
static signed int get_rng_proc_parameter(const char *param, signed long int *value)
{
  struct _IO_FILE *fp = (struct _IO_FILE *)(void *)0;
  signed int error = 0;
  signed long int curvalue;
  char procname[512l];
  /* assertion param != ((void *)0) && value != ((void *)0) */
  assert(param != (const char *)(void *)0 && value != (signed long int *)(void *)0);
  snprintf(procname, sizeof(char [512l]) /*512ul*/ , "/proc/sys/kernel/random/%s", param);
  procname[(signed long int)(sizeof(char [512l]) /*512ul*/  - (unsigned long int)1)] = (char)0;
  fp=fopen(procname, "r");
  _Bool tmp_if_expr_2;
  signed int return_value_fscanf_1;
  if(!(fp == ((struct _IO_FILE *)NULL)))
  {
    return_value_fscanf_1=fscanf(fp, "%ld", &curvalue);
    tmp_if_expr_2 = return_value_fscanf_1 == 1 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr_2 = (_Bool)0;
  if(tmp_if_expr_2)
    *value = curvalue;

  else
    error = 1;
  signed int return_value_fclose_3;
  if(!(fp == ((struct _IO_FILE *)NULL)))
  {
    return_value_fclose_3=fclose(fp);
    error = error | return_value_fclose_3;
  }

  if(!(error == 0))
  {
    message_strerr(4, error, "Cannot read %s", (const void *)procname);
    return -1;
  }

  else
    return 0;
}

// getbuffifo_count
// file rngd_threads.c line 58
extern signed int getbuffifo_count(struct buf_fifo *fifo)
{
  signed int count;
  /* assertion fifo != ((void *)0) */
  assert(fifo != (struct buf_fifo *)(void *)0);
  pthread_mutex_lock(&fifo->mutex);
  volatile signed int tmp_if_expr_1;
  if(fifo->head >= fifo->tail)
    tmp_if_expr_1 = fifo->head - fifo->tail;

  else
    tmp_if_expr_1 = (rng_buffers + 1 + fifo->head) - fifo->tail;
  count = tmp_if_expr_1;
  pthread_mutex_unlock(&fifo->mutex);
  return count;
}

// init_entropy_source
// file rngd_entsource.h line 41
extern void init_entropy_source(void)
{
  unsigned char tempbuf[4l];
  /* assertion entropy_source_driver == RNGD_ENTSOURCE_NONE */
  assert((signed int)entropy_source_driver == RNGD_ENTSOURCE_NONE);
  entropy_source_driver = arguments->rng_driver;
  struct anonymous_1 viacfg;
  double viarng_entropy;
  signed int return_value_viapadlock_rng_init_2;
  signed int return_value_viapadlock_rng_enable_5;
  switch((signed int)entropy_source_driver)
  {
    case RNGD_ENTSOURCE_UNIXSTREAM:
    {
      rng_fd=open(arguments->rng_name, 00);
      if(rng_fd == -1)
      {
        signed int *return_value___errno_location_1;
        return_value___errno_location_1=__errno_location();
        message_strerr(3, *return_value___errno_location_1, "can't open %s", arguments->rng_name);
        die(1);
      }

      break;
    }
    case RNGD_ENTSOURCE_VIAPADLOCK:
    {
      return_value_viapadlock_rng_init_2=viapadlock_rng_init((const char *)(void *)0);
      switch(return_value_viapadlock_rng_init_2)
      {
        case 0:
        {
          message(3, "Could not detect a set of functional, identical VIA PadLock RNGs on every CPU.");
          die(12);
        }
        case 1:
          break;
        default:
        {
          signed int *return_value___errno_location_3;
          return_value___errno_location_3=__errno_location();
          message_strerr(3, *return_value___errno_location_3, "Could not initialize VIA PadLock RNG set");
          die(12);
        }
      }
      viarng_entropy=viapadlock_rng_generate_config((unsigned int)arguments->rng_quality, &viacfg);
      if(IEEE_FLOAT_EQUAL(arguments->rng_entropy, 0.0))
        arguments->rng_entropy = viarng_entropy;

      return_value_viapadlock_rng_enable_5=viapadlock_rng_enable((unsigned int)1, &viacfg);
      if(!(return_value_viapadlock_rng_enable_5 == 0))
      {
        signed int *return_value___errno_location_4;
        return_value___errno_location_4=__errno_location();
        message_strerr(3, *return_value___errno_location_4, "Error while trying to enable the VIA Padlock RNG");
        die(12);
      }

      break;
    }
    default:
    {
      message(3, "Unknown entropy source driver, internal program error!");
      die(10);
    }
  }
  rng_source_timeout = arguments->rng_timeout;
  signed int return_value_enable_sigalrm_6;
  return_value_enable_sigalrm_6=enable_sigalrm((unsigned int)rng_source_timeout);
  if(!(return_value_enable_sigalrm_6 == 0))
    die(1);

  signed int return_value_xread_7;
  return_value_xread_7=xread((void *)tempbuf, sizeof(unsigned char [4l]) /*4ul*/ , (unsigned int)1);
  if(!(return_value_xread_7 == 0))
    die(1);

  signed int return_value_xread_8;
  return_value_xread_8=xread((void *)tempbuf, sizeof(unsigned char [4l]) /*4ul*/ , (unsigned int)1);
  if(!(return_value_xread_8 == 0))
    die(1);

  disable_sigalrm();
  fips_init(&fipsctx, (unsigned int)((signed int)tempbuf[(signed long int)0] | (signed int)tempbuf[(signed long int)1] << 8 | (signed int)tempbuf[(signed long int)2] << 16 | (signed int)tempbuf[(signed long int)3] << 24));
}

// init_kernel_rng
// file rngd_linux.h line 34
extern void init_kernel_rng(void)
{
  /* assertion random_fd == -1 */
  assert(random_fd == -1);
  random_fd=open(arguments->random_name, 02);
  if(random_fd == -1)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    message_strerr(3, *return_value___errno_location_1, "can't open %s", arguments->random_name);
    die(10);
  }

  random_device_timeout = arguments->feed_interval;
  get_rng_proc_parameter("poolsize", &random_pool_size);
  if(arguments->fill_watermark >= 0)
    random_pool_fill_watermark = (signed long int)arguments->fill_watermark;

  else
    random_pool_fill_watermark = (signed long int)((double)((signed long int)random_pool_size * (signed long int)-arguments->fill_watermark) / 100.0);
  if(!(random_pool_size + -1l >= random_pool_fill_watermark))
    random_pool_fill_watermark = random_pool_size - (signed long int)1;

}

// init_rng_buffers
// file rngd_threads.h line 41
extern void init_rng_buffers(signed int n)
{
  signed int i;
  /* assertion n <= 1000 */
  assert(n <= 1000);
  rng_buffers = n;
  do
  {
    pthread_mutex_init(&buffer_queues.empty.mutex, (const union anonymous_6 *)(void *)0);
    buffer_queues.empty.tail = 0;
    buffer_queues.empty.head = buffer_queues.empty.tail;
    void *return_value_calloc_1;
    return_value_calloc_1=calloc((unsigned long int)(rng_buffers + 1), sizeof(volatile signed int) /*4ul*/ );
    void *return_value_test_malloc_2;
    return_value_test_malloc_2=test_malloc(return_value_calloc_1);
    buffer_queues.empty.data = (volatile signed int *)return_value_test_malloc_2;
  }
  while((_Bool)0);
  do
  {
    pthread_mutex_init(&buffer_queues.full.mutex, (const union anonymous_6 *)(void *)0);
    buffer_queues.full.tail = 0;
    buffer_queues.full.head = buffer_queues.full.tail;
    void *return_value_calloc_3;
    return_value_calloc_3=calloc((unsigned long int)(rng_buffers + 1), sizeof(volatile signed int) /*4ul*/ );
    void *return_value_test_malloc_4;
    return_value_test_malloc_4=test_malloc(return_value_calloc_3);
    buffer_queues.full.data = (volatile signed int *)return_value_test_malloc_4;
  }
  while((_Bool)0);
  do
  {
    pthread_mutex_init(&buffer_queues.accepted.mutex, (const union anonymous_6 *)(void *)0);
    buffer_queues.accepted.tail = 0;
    buffer_queues.accepted.head = buffer_queues.accepted.tail;
    void *return_value_calloc_5;
    return_value_calloc_5=calloc((unsigned long int)(rng_buffers + 1), sizeof(volatile signed int) /*4ul*/ );
    void *return_value_test_malloc_6;
    return_value_test_malloc_6=test_malloc(return_value_calloc_5);
    buffer_queues.accepted.data = (volatile signed int *)return_value_test_malloc_6;
  }
  while((_Bool)0);
  do
  {
    pthread_mutex_init(&buffer_queues.rejected.mutex, (const union anonymous_6 *)(void *)0);
    buffer_queues.rejected.tail = 0;
    buffer_queues.rejected.head = buffer_queues.rejected.tail;
    void *return_value_calloc_7;
    return_value_calloc_7=calloc((unsigned long int)(rng_buffers + 1), sizeof(volatile signed int) /*4ul*/ );
    void *return_value_test_malloc_8;
    return_value_test_malloc_8=test_malloc(return_value_calloc_7);
    buffer_queues.rejected.data = (volatile signed int *)return_value_test_malloc_8;
  }
  while((_Bool)0);
  void *return_value_calloc_9;
  return_value_calloc_9=calloc((unsigned long int)rng_buffers, sizeof(unsigned char *[2500l]) /*8ul*/ );
  void *return_value_test_malloc_10;
  return_value_test_malloc_10=test_malloc(return_value_calloc_9);
  rng_buf = (unsigned char (**)[2500l])return_value_test_malloc_10;
  i = 0;
  for( ; !(i >= rng_buffers); i = i + 1)
  {
    do
    {
      pthread_mutex_lock(&buffer_queues.empty.mutex);
      buffer_queues.empty.data[(signed long int)buffer_queues.empty.head] = i;
      buffer_queues.empty.head = (buffer_queues.empty.head + 1) % (rng_buffers + 1);
      pthread_mutex_unlock(&buffer_queues.empty.mutex);
    }
    while((_Bool)0);
    void *return_value_malloc_11;
    return_value_malloc_11=malloc((unsigned long int)2500);
    void *return_value_test_malloc_12;
    return_value_test_malloc_12=test_malloc(return_value_malloc_11);
    rng_buf[(signed long int)i] = (unsigned char (*)[2500l])return_value_test_malloc_12;
    signed int return_value_mlock_14;
    return_value_mlock_14=mlock((const void *)rng_buf[(signed long int)i], (unsigned long int)2500);
    if(!(return_value_mlock_14 == 0))
    {
      signed int *return_value___errno_location_13;
      return_value___errno_location_13=__errno_location();
      message_strerr(3, *return_value___errno_location_13, "cannot lock buffers");
      die(12);
    }

  }
}

// init_rng_stats
// file rngd.c line 585
static void init_rng_stats(signed int n)
{
  set_stat_prefix("stats: ");
  memset((void *)&rng_stats, 0, sizeof(struct rng_stats) /*312ul*/ );
  rng_stats.buffer_lowmark = (unsigned long int)(n - 1);
  pthread_mutex_init(&rng_stats.group1_mutex, (const union anonymous_6 *)(void *)0);
  pthread_mutex_init(&rng_stats.group2_mutex, (const union anonymous_6 *)(void *)0);
  pthread_mutex_init(&rng_stats.group3_mutex, (const union anonymous_6 *)(void *)0);
}

// init_sighandlers
// file rngd_signals.h line 38
extern void init_sighandlers(void)
{
  struct anonymous sigs;
  struct sigaction action;
  sigemptyset(&sigs);
  pthread_sigmask(2, &sigs, (struct anonymous *)(void *)0);
  sigemptyset(&action.sa_mask);
  action.sa_flags = 0;
  action.__sigaction_handler.sa_handler = sigterm_handler;
  signed int return_value_sigaction_2;
  return_value_sigaction_2=sigaction(15, &action, (struct sigaction *)(void *)0);
  if(!(return_value_sigaction_2 >= 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    message_strerr(3, *return_value___errno_location_1, "unable to install signal handler for SIGTERM");
    die(12);
  }

  signed int return_value_sigaction_4;
  return_value_sigaction_4=sigaction(2, &action, (struct sigaction *)(void *)0);
  if(!(return_value_sigaction_4 >= 0))
  {
    signed int *return_value___errno_location_3;
    return_value___errno_location_3=__errno_location();
    message_strerr(3, *return_value___errno_location_3, "unable to install signal handler for SIGINT");
    die(12);
  }

  action.sa_flags = 0x10000000;
  action.__sigaction_handler.sa_handler = sigusr1_handler;
  signed int return_value_sigaction_6;
  return_value_sigaction_6=sigaction(10, &action, (struct sigaction *)(void *)0);
  if(!(return_value_sigaction_6 >= 0))
  {
    signed int *return_value___errno_location_5;
    return_value___errno_location_5=__errno_location();
    message_strerr(3, *return_value___errno_location_5, "unable to install signal handler for SIGUSR1");
    die(12);
  }

  gotsigusr1 = 0;
  gotsigterm = gotsigusr1;
  sigemptyset(&sigs);
  sigaddset(&sigs, 15);
  sigaddset(&sigs, 2);
  sigaddset(&sigs, 10);
  pthread_sigmask(1, &sigs, (struct anonymous *)(void *)0);
}

// kernel_mode
// file util.h line 38
extern enum anonymous_0 kernel_mode(void)
{
  struct utsname buf;
  signed long int i;
  char *p;
  char *q;
  signed int return_value_uname_1;
  return_value_uname_1=uname(&buf);
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_3;
  if(!(return_value_uname_1 == 0))
    return (enum anonymous_0)KERNEL_UNSUPPORTED;

  else
  {
    signed int return_value_strncmp_4;
    return_value_strncmp_4=strncmp(buf.sysname, "Linux", (unsigned long int)6);
    if(return_value_strncmp_4 == 0)
    {
      i=strtol(buf.release, &p, 10);
      if(!(i >= 2l))
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = (signed int)*p != 46 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
        return (enum anonymous_0)KERNEL_UNSUPPORTED;

      if(i >= 3l)
        return (enum anonymous_0)KERNEL_LINUX_26;

      p = p + 1l;
      q = p;
      i=strtol(p, &q, 10);
      if(p == q)
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = (signed int)*q != 46 ? (_Bool)1 : (_Bool)0;
      if(!(i >= 4l) || tmp_if_expr_3)
        return (enum anonymous_0)KERNEL_UNSUPPORTED;

      if(!(i >= 6l))
        return (enum anonymous_0)KERNEL_LINUX_24;

      return (enum anonymous_0)KERNEL_LINUX_26;
    }

    else
      return (enum anonymous_0)KERNEL_UNSUPPORTED;
  }
}

// main
// file rngd.c line 650
signed int main(signed int argc, char **argv)
{
  signed int fd;
  unsigned long int t1;
  unsigned long int t2;
  unsigned long int t3;
  signed int sleeptime;
  kernel=kernel_mode();
  argp_parse(&argp, argc, argv, (unsigned int)0, ((signed int *)NULL), (void *)arguments);
  if((signed int)kernel == KERNEL_UNSUPPORTED)
  {
    message(3, "Unsupported kernel detected, exiting...");
    die(12);
  }

  fd = 3;
  for( ; !(fd >= 250); fd = fd + 1)
    close(fd);
  init_rng_stats(arguments->rng_buffers);
  init_sighandlers();
  init_entropy_source();
  init_kernel_rng();
  if(!(arguments->daemon == 0))
  {
    get_lock(arguments->pidfile_name);
    signed int return_value_daemon_2;
    return_value_daemon_2=daemon(0, 0);
    if(!(return_value_daemon_2 >= 0))
    {
      signed int *return_value___errno_location_1;
      return_value___errno_location_1=__errno_location();
      message_strerr(3, *return_value___errno_location_1, "can't daemonize");
      return 12;
    }

    openlog("rngd", 0x01, 3 << 3);
    am_daemon = 1;
    get_lock(arguments->pidfile_name);
  }

  masterprocess=getpid();
  message(6, "rngd 2-unofficial-mt.14 starting up...");
  init_rng_buffers(arguments->rng_buffers);
  init_sighandlers();
  signed int return_value_pthread_create_3;
  return_value_pthread_create_3=pthread_create(&t1, (const union pthread_attr_t *)(void *)0, do_rng_data_source_loop, (void *)0);
  signed int return_value_pthread_create_4;
  return_value_pthread_create_4=pthread_create(&t2, (const union pthread_attr_t *)(void *)0, do_rng_fips_test_loop, (void *)0);
  signed int return_value_pthread_create_5;
  return_value_pthread_create_5=pthread_create(&t3, (const union pthread_attr_t *)(void *)0, do_rng_data_sink_loop, (void *)0);
  if(!((return_value_pthread_create_3 | return_value_pthread_create_4 | return_value_pthread_create_5) == 0))
  {
    message(3, "Insufficient resources to start threads");
    die(12);
  }

  sleeptime = 3600;
  while(gotsigterm == 0)
  {
    unsigned int return_value_sleep_6;
    return_value_sleep_6=sleep((unsigned int)sleeptime);
    sleeptime = (signed int)return_value_sleep_6;
    if(sleeptime == 0 || !(gotsigterm == 0) || !(gotsigusr1 == 0))
    {
      dump_rng_stats();
      sleeptime = 3600;
      gotsigusr1 = 0;
    }

  }
  if(exitstatus == 0)
    message(6, "Exiting...");

  else
    message(3, "Exiting with status %d", exitstatus);
  exit(exitstatus);
}

// message
// file rngd.c line 487
extern void message(signed int priority, const char *fmt, ...)
{
  void **ap = (void **)&fmt;
  if(!(am_daemon == 0))
    vsyslog(priority, fmt, ap);

  else
  {
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, "\n");
  }
  ap = ((void **)NULL);
}

// message_strerr
// file rngd.c line 501
extern void message_strerr(signed int priority, signed int errornumber, const char *fmt, ...)
{
  void **ap;
  char errbuf[1024l];
  char *strerrbuf = errbuf;
  char *errfmt = (char *)(void *)0;
  signed int s;
  ap = (void **)&fmt;
  memset((void *)errbuf, 0, sizeof(char [1024l]) /*1024ul*/ );
  if(!(errornumber == 0))
    strerrbuf=strerror_r(errornumber, errbuf, sizeof(char [1024l]) /*1024ul*/  - (unsigned long int)1);

  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(fmt);
  unsigned long int return_value_strlen_2;
  return_value_strlen_2=strlen(strerrbuf);
  s = (signed int)(return_value_strlen_1 + return_value_strlen_2 + (unsigned long int)3);
  void *return_value_malloc_3;
  return_value_malloc_3=malloc((unsigned long int)s);
  errfmt = (char *)return_value_malloc_3;
  if(!(errfmt == ((char *)NULL)))
  {
    snprintf(errfmt, (unsigned long int)s, "%s: %s", fmt, strerrbuf);
    errfmt[(signed long int)(s - 1)] = (char)0;
  }

  else
    errfmt = (char *)fmt;
  if(!(am_daemon == 0))
    vsyslog(priority, errfmt, ap);

  else
  {
    vfprintf(stderr, errfmt, ap);
    fprintf(stderr, "\n");
  }
  if(!(errfmt == fmt))
    free((void *)errfmt);

  ap = ((void **)NULL);
}

// parse_opt
// file rngd.c line 278
static signed int parse_opt(signed int key, char *arg, struct argp_state *state)
{
  struct arguments *parse_opt__1__arguments = (struct arguments *)state->input;
  signed long int n;
  char *p;
  _Bool tmp_if_expr_1;
  signed long int parse_opt__1__1__2__n;
  char *parse_opt__1__1__2__p;
  _Bool tmp_if_expr_2;
  signed long int parse_opt__1__1__3__n;
  char *parse_opt__1__1__3__p;
  _Bool tmp_if_expr_3;
  signed long int parse_opt__1__1__4__n;
  char *parse_opt__1__1__4__p;
  _Bool tmp_if_expr_5;
  _Bool tmp_if_expr_4;
  float H;
  char *parse_opt__1__1__5__p;
  _Bool tmp_if_expr_6;
  signed long int parse_opt__1__1__6__n;
  char *parse_opt__1__1__6__p;
  _Bool tmp_if_expr_7;
  signed int return_value_strcasecmp_9;
  signed int return_value_strcasecmp_8;
  signed int i;
  signed int parse_opt__1__1__9__i;
  signed int return_value_strcasecmp_13;
  switch(key)
  {
    case 111:
    {
      parse_opt__1__arguments->random_name = arg;
      break;
    }
    case 114:
    {
      parse_opt__1__arguments->rng_name = arg;
      break;
    }
    case 112:
    {
      parse_opt__1__arguments->pidfile_name = arg;
      break;
    }
    case 0x82:
      message(4, "Warning: --timeout is deprecated, use --feed-interval instead");
    case 116:
    {
      n=strtol(arg, &p, 10);
      if(p == arg)
        tmp_if_expr_1 = (_Bool)1;

      else
        tmp_if_expr_1 = (signed int)*p != 0 ? (_Bool)1 : (_Bool)0;
      if(n >= 2147483647l || !(n >= 0l) || tmp_if_expr_1)
        argp_usage(state);

      else
        parse_opt__1__arguments->feed_interval = (signed int)n;
      break;
    }
    case 84:
    {
      parse_opt__1__1__2__n=strtol(arg, &parse_opt__1__1__2__p, 10);
      if(parse_opt__1__1__2__p == arg)
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = (signed int)*parse_opt__1__1__2__p != 0 ? (_Bool)1 : (_Bool)0;
      if(parse_opt__1__1__2__n >= 2147483647l || !(parse_opt__1__1__2__n >= 0l) || tmp_if_expr_2)
        argp_usage(state);

      else
        parse_opt__1__arguments->rng_timeout = (signed int)parse_opt__1__1__2__n;
      break;
    }
    case 102:
    {
      parse_opt__1__arguments->daemon = 0;
      break;
    }
    case 98:
    {
      parse_opt__1__arguments->daemon = 1;
      break;
    }
    case 115:
    {
      parse_opt__1__1__3__n=strtol(arg, &parse_opt__1__1__3__p, 10);
      if(parse_opt__1__1__3__p == arg)
        tmp_if_expr_3 = (_Bool)1;

      else
        tmp_if_expr_3 = (signed int)*parse_opt__1__1__3__p != 0 ? (_Bool)1 : (_Bool)0;
      if(parse_opt__1__1__3__n >= 2501l || !((1l & parse_opt__1__1__3__n) == 0l) || !(parse_opt__1__1__3__n >= 8l) || tmp_if_expr_3)
        argp_usage(state);

      else
        parse_opt__1__arguments->random_step = (signed int)parse_opt__1__1__3__n;
      break;
    }
    case 87:
    {
      parse_opt__1__1__4__n=strtol(arg, &parse_opt__1__1__4__p, 10);
      if(!(parse_opt__1__1__4__p == arg))
        tmp_if_expr_5 = (signed int)*parse_opt__1__1__4__p == 37 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_5 = (_Bool)0;
      if(tmp_if_expr_5)
      {
        parse_opt__1__1__4__p = parse_opt__1__1__4__p + 1l;
        if(parse_opt__1__1__4__n >= 101l || !((signed int)*parse_opt__1__1__4__p == 0) || !(parse_opt__1__1__4__n >= 0l))
          argp_usage(state);

        else
          parse_opt__1__arguments->fill_watermark = (signed int)-parse_opt__1__1__4__n;
      }

      else
      {
        if(parse_opt__1__1__4__p == arg)
          tmp_if_expr_4 = (_Bool)1;

        else
          tmp_if_expr_4 = (signed int)*parse_opt__1__1__4__p != 0 ? (_Bool)1 : (_Bool)0;
        if(parse_opt__1__1__4__n >= 131072l || tmp_if_expr_4)
          argp_usage(state);

        else
          parse_opt__1__arguments->fill_watermark = (signed int)parse_opt__1__1__4__n;
      }
      break;
    }    static unsigned int seen_opt = (unsigned int)0;
    case 72:
    {
      H=strtof(arg, &parse_opt__1__1__5__p);
      if(parse_opt__1__1__5__p == arg)
        tmp_if_expr_6 = (_Bool)1;

      else
        tmp_if_expr_6 = (signed int)*parse_opt__1__1__5__p != 0 ? (_Bool)1 : (_Bool)0;
      if(H <= 0.000000f || H > 1.000000f || tmp_if_expr_6)
        argp_usage(state);

      else
      {
        parse_opt__1__arguments->rng_entropy = (double)H;
        seen_opt = seen_opt | (unsigned int)0x02;
      }
      break;
    }
    case 66:
    {
      parse_opt__1__1__6__n=strtol(arg, &parse_opt__1__1__6__p, 10);
      if(parse_opt__1__1__6__p == arg)
        tmp_if_expr_7 = (_Bool)1;

      else
        tmp_if_expr_7 = (signed int)*parse_opt__1__1__6__p != 0 ? (_Bool)1 : (_Bool)0;
      if(parse_opt__1__1__6__n >= 1001l || !(parse_opt__1__1__6__n >= 1l) || tmp_if_expr_7)
        argp_usage(state);

      else
      {
        parse_opt__1__arguments->rng_buffers = (signed int)parse_opt__1__1__6__n;
        seen_opt = seen_opt | (unsigned int)0x01;
      }
      break;
    }
    case 82:
    {
      if(!((4u & seen_opt) == 0u))
        argp_usage(state);

      else
      {
        return_value_strcasecmp_9=strcasecmp(arg, "stream");
        if(return_value_strcasecmp_9 == 0)
        {
          parse_opt__1__arguments->rng_driver = (enum anonymous_20)RNGD_ENTSOURCE_UNIXSTREAM;
          seen_opt = seen_opt | (unsigned int)0x04;
        }

        else
        {
          return_value_strcasecmp_8=strcasecmp(arg, "viapadlock");
          if(return_value_strcasecmp_8 == 0)
          {
            parse_opt__1__arguments->rng_driver = (enum anonymous_20)RNGD_ENTSOURCE_VIAPADLOCK;
            if((2u & seen_opt) == 0u)
              parse_opt__1__arguments->rng_entropy = 0.0;

            seen_opt = seen_opt | (unsigned int)0x04;
          }

          else
            argp_usage(state);
        }
      }
      break;
    }
    case 81:
    {
      i = 0;
      for( ; !(i >= 4); i = i + 1)
      {
        signed int return_value_strcasecmp_10;
        static const char * const quality_names[4l] = { "default", "low", "medium", "high" };
        return_value_strcasecmp_10=strcasecmp(arg, quality_names[(signed long int)i]);
        if(return_value_strcasecmp_10 == 0)
        {
          parse_opt__1__arguments->rng_quality = i;
          break;
        }

      }
      if(i >= 4)
        argp_usage(state);

      break;
    }
    case 0x81:
    {
      parse_opt__1__1__9__i = 0;
      return_value_strcasecmp_13=strcasecmp(arg, "help");
      if(return_value_strcasecmp_13 == 0)
      {
        fprintf(state->out_stream, "RNG         Description\n");
        for( ; !(trng_parameters[(signed long int)parse_opt__1__1__9__i].tag == ((char *)NULL)); parse_opt__1__1__9__i = parse_opt__1__1__9__i + 1)
        {
          fprintf(state->out_stream, "%-10s  \"%s\"\n", trng_parameters[(signed long int)parse_opt__1__1__9__i].tag, trng_parameters[(signed long int)parse_opt__1__1__9__i].name);
          if(IEEE_FLOAT_NOTEQUAL(trng_parameters[(signed long int)parse_opt__1__1__9__i].entropy, 0.0))
          {
            const char *return_value_entropy_source_driver_name_11;
            return_value_entropy_source_driver_name_11=entropy_source_driver_name(trng_parameters[(signed long int)parse_opt__1__1__9__i].driver);
            fprintf(state->out_stream, "%-12srng-driver=%s, rng-entropy=%0.3f, rng-buffers=%d;\n", (const void *)" ", return_value_entropy_source_driver_name_11, trng_parameters[(signed long int)parse_opt__1__1__9__i].entropy, trng_parameters[(signed long int)parse_opt__1__1__9__i].buffers);
          }

          else
          {
            const char *return_value_entropy_source_driver_name_12;
            return_value_entropy_source_driver_name_12=entropy_source_driver_name(trng_parameters[(signed long int)parse_opt__1__1__9__i].driver);
            fprintf(state->out_stream, "%-12srng-driver=%s, rng-entropy=auto, rng-buffers=%d;\n", (const void *)" ", return_value_entropy_source_driver_name_12, trng_parameters[(signed long int)parse_opt__1__1__9__i].buffers);
          }
        }
        exit(0);
      }

      while(!(trng_parameters[(signed long int)parse_opt__1__1__9__i].tag == ((char *)NULL)))
      {
        signed int return_value_strcasecmp_14;
        return_value_strcasecmp_14=strcasecmp(arg, trng_parameters[(signed long int)parse_opt__1__1__9__i].tag);
        if(return_value_strcasecmp_14 == 0)
        {
          if((2u & seen_opt) == 0u)
            parse_opt__1__arguments->rng_entropy = trng_parameters[(signed long int)parse_opt__1__1__9__i].entropy;

          if((1u & seen_opt) == 0u)
            parse_opt__1__arguments->rng_buffers = trng_parameters[(signed long int)parse_opt__1__1__9__i].buffers;

          if((4u & seen_opt) == 0u)
            parse_opt__1__arguments->rng_driver = trng_parameters[(signed long int)parse_opt__1__1__9__i].driver;

          break;
        }

        parse_opt__1__1__9__i = parse_opt__1__1__9__i + 1;
      }
      if(trng_parameters[(signed long int)parse_opt__1__1__9__i].tag == ((char *)NULL))
        argp_failure(state, argp_err_exit_status, 0, "Unknown RNG, try --hrng=help");

      break;
    }
    default:
      return 7;
  }
  return 0;
}

// random_add_entropy
// file rngd_linux.c line 186
static void random_add_entropy(void *buf, unsigned long int size)
{
  const signed long int random_add_entropy_array_size0 = (signed long int)size;
  /* tag-#anon#lST[S32'ent_count'||S32'size'||lARR?{U8}_U8_'data'|] */
struct anonymous_19
{
  // ent_count
  signed int ent_count;
  // size
  signed int size;
  // data
  unsigned char data[random_add_entropy_array_size0];
};

/* */
  ;
  struct anonymous_19 entropy;
  /* assertion buf != ((void *)0) */
  assert(buf != (void *)0);
  entropy.ent_count = (signed int)(arguments->rng_entropy * (double)size * (double)8);
  if((signed int)kernel == KERNEL_LINUX_24)
    entropy.ent_count = entropy.ent_count / 4;

  entropy.size = (signed int)size;
  memcpy((void *)entropy.data, buf, size);
  signed int return_value_ioctl_2;
  return_value_ioctl_2=ioctl(random_fd, (unsigned long int)(1U << 0 + 8 + 8 + 14 | (unsigned int)(82 << 0 + 8) | (unsigned int)(0x03 << 0)) | sizeof(signed int [2l]) /*8ul*/  << 0 + 8 + 8, &entropy);
  if(!(return_value_ioctl_2 == 0))
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    message_strerr(3, *return_value___errno_location_1, "RNDADDENTROPY failed");
    exitstatus = 12;
    kill(masterprocess, 15);
    pthread_exit((void *)0);
  }

  memset((void *)entropy.data, 0, size);
  pthread_mutex_lock(&rng_stats.group3_mutex);
  rng_stats.bytes_sent = rng_stats.bytes_sent + size;
  rng_stats.entropy_sent = rng_stats.entropy_sent + (unsigned long int)entropy.ent_count;
  pthread_mutex_unlock(&rng_stats.group3_mutex);
}

// random_sleep
// file rngd_linux.c line 221
static void random_sleep(void)
{
  signed int ent_count;
  struct pollfd pfd = { .fd=random_fd, .events=(signed short int)0x004, .revents=0 };
  struct timeval start;
  struct timeval now;
  signed long int timeout_usec;
  signed int return_value_ioctl_1;
  return_value_ioctl_1=ioctl(random_fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(82 << 0 + 8) | (unsigned int)(0x00 << 0)) | sizeof(signed int) /*4ul*/  << 0 + 8 + 8, &ent_count);
  signed int return_value_poll_2;
  signed int *return_value___errno_location_3;
  signed int return_value_poll_5;
  if(return_value_ioctl_1 == 0)
  {
    if((signed long int)ent_count >= random_pool_fill_watermark)
      goto __CPROVER_DUMP_L1;

  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    if(random_device_timeout >= 1)
    {
      timeout_usec = (signed long int)(random_device_timeout * 1000);
      gettimeofday(&start, (struct timezone *)(void *)0);
      while(gotsigterm == 0)
      {
        if(!(timeout_usec >= 1l))
          break;

        return_value_poll_2=poll(&pfd, (unsigned long int)1, (signed int)timeout_usec);
        if(return_value_poll_2 >= 0)
          break;

        return_value___errno_location_3=__errno_location();
        if(*return_value___errno_location_3 == 4)
          break;

        gettimeofday(&now, (struct timezone *)(void *)0);
        unsigned long int return_value_elapsed_time_4;
        return_value_elapsed_time_4=elapsed_time(&start, &now);
        timeout_usec = timeout_usec - (signed long int)return_value_elapsed_time_4;
        start = now;
      }
    }

    else
      while(gotsigterm == 0)
      {
        return_value_poll_5=poll(&pfd, (unsigned long int)1, -1);
        if(return_value_poll_5 >= 0)
          break;

        signed int *return_value___errno_location_6;
        return_value___errno_location_6=__errno_location();
        if(!(*return_value___errno_location_6 == 4))
          break;

      }
  }
}

// rng_data_source_work
// file rngd_entsource.c line 265
static void rng_data_source_work(signed int i, struct timeval *start, struct timeval *stop)
{
  gettimeofday(start, ((struct timezone *)NULL));
  signed int return_value_xread_1;
  return_value_xread_1=xread((void *)rng_buf[(signed long int)i], (unsigned long int)2500, (unsigned int)0);
  if(return_value_xread_1 == -1)
  {
    kill(masterprocess, 15);
    pthread_exit((void *)0);
  }

  gettimeofday(stop, ((struct timezone *)NULL));
  do
  {
    pthread_mutex_lock(&buffer_queues.full.mutex);
    buffer_queues.full.data[(signed long int)buffer_queues.full.head] = i;
    buffer_queues.full.head = (buffer_queues.full.head + 1) % (rng_buffers + 1);
    pthread_mutex_unlock(&buffer_queues.full.mutex);
  }
  while((_Bool)0);
  pthread_mutex_lock(&rng_buffer_raw_mutex);
  pthread_cond_signal(&rng_buffer_raw);
  pthread_mutex_unlock(&rng_buffer_raw_mutex);
  pthread_mutex_lock(&rng_stats.group1_mutex);
  unsigned long int return_value_elapsed_time_2;
  return_value_elapsed_time_2=elapsed_time(start, stop);
  update_stat(&rng_stats.source_blockfill, return_value_elapsed_time_2);
  pthread_mutex_unlock(&rng_stats.group1_mutex);
}

// scale_mult_unit
// file stats.c line 57
static void scale_mult_unit(char *unit, unsigned long int unitsize, const char *baseunit, double *value_min, double *value_avg, double *value_max)
{
  unsigned int mult = (unsigned int)0;
  char multchar[7l] = { 'K', 'M', 'G', 'T', 'P', 'E', 0 };
  for( ; *value_min >= 1024.0; *value_avg = *value_avg / 1024.0)
  {
    if(!(*value_avg >= 1024.0))
      break;

    if(!(*value_max >= 1024.0))
      break;

    if((unsigned long int)mult >= sizeof(char [7l]) /*7ul*/ )
      break;

    mult = mult + 1u;
    *value_min = *value_min / 1024.0;
    *value_max = *value_max / 1024.0;
  }
  if(!(mult == 0u))
    snprintf(unit, unitsize, "%ci%s", multchar[(signed long int)(mult - (unsigned int)1)], baseunit);

  else
    strncpy(unit, baseunit, unitsize);
  unit[(signed long int)(unitsize - (unsigned long int)1)] = (char)0;
}

// set_stat_prefix
// file stats.h line 37
extern void set_stat_prefix(const char *prefix)
{
  if(!(prefix == ((const char *)NULL)))
  {
    strncpy(stat_prefix, prefix, sizeof(char [20l]) /*20ul*/  - (unsigned long int)1);
    stat_prefix[(signed long int)(sizeof(char [20l]) /*20ul*/  - (unsigned long int)1)] = (char)0;
  }

  else
    stat_prefix[(signed long int)0] = (char)0;
}

// sigalrm_handler
// file rngd_signals.c line 56
static void sigalrm_handler(signed int sig)
{
  gotsigalrm = 1;
}

// sigterm_handler
// file rngd_signals.c line 46
static void sigterm_handler(signed int sig)
{
  gotsigterm = 128 | sig;
}

// sigusr1_handler
// file rngd_signals.c line 51
static void sigusr1_handler(signed int sig)
{
  gotsigusr1 = 1;
}

// test_malloc
// file rngd_threads.c line 74
void * test_malloc(void *p)
{
  if(p == NULL)
  {
    message(3, "cannot allocate buffers");
    die(12);
  }

  return p;
}

// update_stat
// file stats.h line 40
extern void update_stat(struct rng_stat *stat, unsigned long int value)
{
  unsigned long int overflow = stat->num_samples;
  /* assertion stat != ((void *)0) */
  assert(stat != (struct rng_stat *)(void *)0);
  _Bool tmp_if_expr_1;
  if(stat->min == 0ul)
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = value < stat->min ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr_1)
    stat->min = value;

  if(!(stat->max >= value))
    stat->max = value;

  stat->num_samples = stat->num_samples + 1ul;
  if(!(overflow >= stat->num_samples))
    stat->sum = stat->sum + value;

  else
  {
    stat->sum = value;
    stat->num_samples = (unsigned long int)1;
  }
}

// via_xstore
// file viapadlock_engine.c line 456
static inline unsigned int via_xstore(unsigned long int *addr, unsigned int edx_in)
{
  unsigned int eax_out;
  unsigned int edi_out;
  asm(".byte 0x0F,0xA7,0xC0 /* xstore %%edi (addr=%0) */" : "=m"(*addr), "=a"(eax_out), "=D"(edi_out) : "D"(addr), "d"(edx_in) : );
  return eax_out;
}

// viapadlock_rng_enable
// file viapadlock_engine.h line 107
extern signed int viapadlock_rng_enable(unsigned int enable, struct anonymous_1 *cfg)
{
  signed int error;
  signed int i;
  unsigned int buf[2l];
  if(viapadlock_engines_detected == 0u)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 6;
    return -1;
  }

  unsigned int tmp_if_expr_2;
  if(!(cfg == ((struct anonymous_1 *)NULL)))
  {
    if(cfg->dc_bias >= 8u)
      cfg->dc_bias = (unsigned int)7;

    if(!(cfg->string_filter == 0u))
    {
      if(!(cfg->string_filter >= 8u))
        cfg->string_filter = (unsigned int)8;

    }

    if(cfg->string_filter >= 64u)
      cfg->string_filter = (unsigned int)63;

    if(cfg->string_filter >= 1u)
      tmp_if_expr_2 = (unsigned int)16384 | cfg->string_filter << 16;

    else
      tmp_if_expr_2 = (unsigned int)0;
    viapadlock_state.MSR_LSW = ((unsigned int)(cfg->whitener != 0u ? 0 : 8192) | cfg->dc_bias << 10 | (unsigned int)((signed int)cfg->noise_source << 8) | tmp_if_expr_2 | (unsigned int)64) & viapadlock_state.MSR_LSW_MASK;
    viapadlock_state.divisor = cfg->divisor;
  }

  else
    if(viapadlock_state.MSR_LSW == 0u)
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      *return_value___errno_location_3 = 22;
      return -1;
    }

  buf[(signed long int)0] = viapadlock_state.MSR_LSW;
  if(enable == 0u)
    buf[(signed long int)0] = buf[(signed long int)0] & (unsigned int)~64;

  buf[(signed long int)1] = (unsigned int)0;
  error = 0;
  i = 0;
  _Bool tmp_if_expr_7;
  signed long int return_value_write_6;
  for( ; !((unsigned int)i >= viapadlock_engines_detected); i = i + 1)
  {
    signed long int return_value_lseek_5;
    return_value_lseek_5=lseek(viapadlock_state.msr_fd[(signed long int)i], (signed long int)4363, 0);
    if(!(return_value_lseek_5 == 4363l))
      tmp_if_expr_7 = (_Bool)1;

    else
    {
      return_value_write_6=write(viapadlock_state.msr_fd[(signed long int)i], (const void *)&buf, (unsigned long int)8);
      tmp_if_expr_7 = return_value_write_6 == (signed long int)-1 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr_7)
    {
      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      error = *return_value___errno_location_4;
      break;
    }

  }
  signed int *return_value___errno_location_8;
  return_value___errno_location_8=__errno_location();
  *return_value___errno_location_8 = error;
  if(!(error == 0))
    return -1;

  else
    return 0;
}

// viapadlock_rng_free
// file viapadlock_engine.c line 334
extern void viapadlock_rng_free(void)
{
  for( ; viapadlock_engines_detected >= 1u; viapadlock_engines_detected = viapadlock_engines_detected - 1u)
    if(!(viapadlock_state.msr_fd[(signed long int)(viapadlock_engines_detected + 4294967295u)] == -1))
      close(viapadlock_state.msr_fd[(signed long int)(viapadlock_engines_detected - (unsigned int)1)]);

}

// viapadlock_rng_generate_config
// file viapadlock_engine.h line 94
extern double viapadlock_rng_generate_config(unsigned int quality, struct anonymous_1 *cfg)
{
  /* assertion cfg != ((void *)0) */
  assert(cfg != (struct anonymous_1 *)(void *)0);
  cfg->dc_bias = (unsigned int)0;
  cfg->whitener = (unsigned int)1;
  cfg->string_filter = (unsigned int)0;
  cfg->noise_source = (enum anonymous_16)VIAPADLOCK_RNG1_SOURCE_AB;
  if(quality == 0u || quality >= 3u)
    cfg->divisor = (unsigned int)3;

  else
    cfg->divisor = quality;
  return 0.75;
}

// viapadlock_rng_init
// file viapadlock_engine.h line 64
extern signed int viapadlock_rng_init(const char *devicepath)
{
  signed int msr_fd;
  signed int cpuid_fd;
  char devpath[4097l];
  signed int i;
  signed int error;
  if(!(viapadlock_engines_detected == 0u))
    viapadlock_rng_free();

  if(devicepath == ((const char *)NULL))
    devicepath = cpudev_default_path;

  strncpy(cpudev_path, devicepath, sizeof(char [4097l]) /*4097ul*/ );
  cpudev_path[(signed long int)(sizeof(char [4097l]) /*4097ul*/  - (unsigned long int)1)] = (char)0;
  cpuid_fd = -1;
  msr_fd = cpuid_fd;
  error = 0;
  i = 0;
  signed int *return_value___errno_location_2;
  signed int *return_value___errno_location_1;
  for( ; !(i >= 32); i = i + 1)
  {
    snprintf(devpath, sizeof(char [4097l]) /*4097ul*/ , cpudev_path, i);
    devpath[(signed long int)(sizeof(char [4097l]) /*4097ul*/  - (unsigned long int)1)] = (char)0;
    strncat(devpath, "/msr", sizeof(char [4097l]) /*4097ul*/  - (unsigned long int)1);
    msr_fd=open(devpath, 02);
    if(msr_fd == -1)
    {
      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      if(!(*return_value___errno_location_3 == 6))
      {
        return_value___errno_location_2=__errno_location();
        if(!(*return_value___errno_location_2 == 2))
        {
          return_value___errno_location_1=__errno_location();
          error = *return_value___errno_location_1;
        }

      }

      signed int *return_value___errno_location_4;
      return_value___errno_location_4=__errno_location();
      if(*return_value___errno_location_4 == 5)
        error = -1;

      break;
    }

    snprintf(devpath, sizeof(char [4097l]) /*4097ul*/ , cpudev_path, i);
    devpath[(signed long int)(sizeof(char [4097l]) /*4097ul*/  - (unsigned long int)1)] = (char)0;
    strncat(devpath, "/cpuid", sizeof(char [4097l]) /*4097ul*/  - (unsigned long int)1);
    cpuid_fd=open(devpath, 00);
    if(cpuid_fd == -1)
    {
      signed int *return_value___errno_location_5;
      return_value___errno_location_5=__errno_location();
      error = *return_value___errno_location_5;
      signed int *return_value___errno_location_6;
      return_value___errno_location_6=__errno_location();
      if(*return_value___errno_location_6 == 5)
        error = -1;

      break;
    }

    error=detect_via_padlock_rng(cpuid_fd, &viapadlock_state, (signed int)(viapadlock_engines_detected == (unsigned int)0));
    if(!(error == 0))
      break;

    viapadlock_state.msr_fd[(signed long int)viapadlock_engines_detected] = msr_fd;
    viapadlock_engines_detected = viapadlock_engines_detected + 1u;
    close(cpuid_fd);
    cpuid_fd = -1;
    msr_fd = cpuid_fd;
  }
  if(!(msr_fd == -1))
    close(msr_fd);

  if(!(cpuid_fd == -1))
    close(cpuid_fd);

  if(!(error == 0))
  {
    viapadlock_rng_free();
    if(!(error == -1))
    {
      signed int *return_value___errno_location_7;
      return_value___errno_location_7=__errno_location();
      *return_value___errno_location_7 = error;
      return -1;
    }

    return 0;
  }

  else
    return viapadlock_engines_detected > (unsigned int)0 ? 1 : 0;
}

// viapadlock_rng_read
// file viapadlock_engine.h line 116
extern signed long int viapadlock_rng_read(void *buf, unsigned long int size)
{
  unsigned long int bytes_read = (unsigned long int)0;
  unsigned int xstore_divisor;
  unsigned int xstore_flags;
  unsigned int s;
  unsigned int i;
  struct timespec ts;
  /* assertion buf != ((void *)0) */
  assert(buf != (void *)0);
  if(viapadlock_engines_detected == 0u)
  {
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    *return_value___errno_location_1 = 6;
    return (signed long int)-1;
  }

  xstore_divisor = viapadlock_state.divisor;
  s = (unsigned int)(8 >> (xstore_divisor & (unsigned int)3));
  ts.tv_sec = (signed long int)0;
  ts.tv_nsec = (signed long int)((signed int)viapadlock_state.rng_type == VIA_RNG_TYPE1_ONESRC ? 20000 : 10000);
  while(size >= 1ul)
  {
    i = (unsigned int)0;
    static unsigned long int xstore_buffer[16l];
    for( ; !(i >= 2u); i = i + 1u)
    {
      xstore_flags=via_xstore(xstore_buffer, xstore_divisor);
      if(!((viapadlock_state.MSR_LSW_MASK & xstore_flags) == viapadlock_state.MSR_LSW))
      {
        signed int return_value_viapadlock_rng_enable_2;
        return_value_viapadlock_rng_enable_2=viapadlock_rng_enable((unsigned int)1, (struct anonymous_1 *)(void *)0);
        if(return_value_viapadlock_rng_enable_2 == 0)
          return (signed long int)-1;

        signed int *return_value___errno_location_3;
        return_value___errno_location_3=__errno_location();
        *return_value___errno_location_3 = 11;
        return (signed long int)-1;
      }

      if((15u & xstore_flags) == s)
        break;

    }
    if(!((15u & xstore_flags) == s))
      sched_yield();

    else
    {
      if(!(size >= (unsigned long int)s))
        s = (unsigned int)size;

      memcpy((void *)((unsigned char *)buf + (signed long int)bytes_read), (const void *)&xstore_buffer, (unsigned long int)s);
      size = size - (unsigned long int)s;
      bytes_read = bytes_read + (unsigned long int)s;
    }
  }
  signed int *return_value___errno_location_4;
  return_value___errno_location_4=__errno_location();
  *return_value___errno_location_4 = 0;
  return (signed long int)bytes_read;
}

// xread
// file rngd_entsource.c line 110
static signed int xread(void *buf, unsigned long int size, unsigned int abortonsigalrm)
{
  unsigned long int off = (unsigned long int)0;
  signed long int r;
  /* assertion buf != ((void *)0) */
  assert(buf != (void *)0);
  signed int *return_value___errno_location_5;
  signed int *return_value___errno_location_6;
  _Bool tmp_if_expr_4;
  signed int *return_value___errno_location_1;
  _Bool tmp_if_expr_3;
  signed int *return_value___errno_location_2;
  while(size >= 1ul)
  {
    while((_Bool)1)
    {
      switch((signed int)entropy_source_driver)
      {
        case RNGD_ENTSOURCE_UNIXSTREAM:
        {
          r=read(rng_fd, (void *)((unsigned char *)buf + (signed long int)off), size);
          break;
        }
        case RNGD_ENTSOURCE_VIAPADLOCK:
        {
          r=viapadlock_rng_read((void *)((unsigned char *)buf + (signed long int)off), size);
          if(r == -1l)
          {
            return_value___errno_location_5=__errno_location();
            if(*return_value___errno_location_5 == 11)
              message(4, "VIA PadLock RNG configuration changed. Reconfigured.");

          }

          break;
        }
        default:
        {
          return_value___errno_location_6=__errno_location();
          *return_value___errno_location_6 = 6;
          return -1;
        }
      }
      if(!(gotsigalrm == 0) && !(abortonsigalrm == 0u) || !(gotsigterm == 0))
        return -1;

      if(r == -1l)
      {
        return_value___errno_location_1=__errno_location();
        if(*return_value___errno_location_1 == 4)
          tmp_if_expr_3 = (_Bool)1;

        else
        {
          return_value___errno_location_2=__errno_location();
          tmp_if_expr_3 = *return_value___errno_location_2 == 11 ? (_Bool)1 : (_Bool)0;
        }
        tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_4 = (_Bool)0;
      if(!tmp_if_expr_4)
        break;

    }
    if(!(r >= 0l))
      break;

    if(r == 0l)
    {
      message(3, "entropy source exhausted!");
      return -1;
    }

    off = off + (unsigned long int)r;
    size = size - (unsigned long int)r;
    pthread_mutex_lock(&rng_stats.group1_mutex);
    rng_stats.bytes_received = rng_stats.bytes_received + (unsigned long int)r;
    pthread_mutex_unlock(&rng_stats.group1_mutex);
  }
  if(!(size == 0ul))
  {
    signed int *return_value___errno_location_7;
    return_value___errno_location_7=__errno_location();
    message_strerr(3, *return_value___errno_location_7, "error reading from entropy source:");
    exitstatus = 11;
    return -1;
  }

  return 0;
}

