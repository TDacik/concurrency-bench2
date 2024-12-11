// tag-#anon#ST[ARR16{U64}_U64_'__bits'|]
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 125
struct anonymous;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_1;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_0;

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

// tag-clock_entry
// file gettime.c line 460
struct clock_entry;

// tag-clock_thread
// file gettime.c line 466
struct clock_thread;

// tag-fio_cs
// file gettime.h line 9
enum fio_cs { CS_GTOD=1, CS_CGETTIME=2, CS_CPUCLOCK=3, CS_INVAL=4 };

// tag-fio_lfsr
// file t/../lib/lfsr.h line 14
struct fio_lfsr;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

// tag-tv_valid
// file gettime.c line 28
struct tv_valid;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef FENCE
#define FENCE(x) ((void)0)
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
// __dprint
// file debug.h line 40
void __dprint(signed int type, const char *str, ...);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __fio_gettime
// file gettime.c line 146
static void __fio_gettime(struct timeval *tp);
// __fprintf_chk
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 85
extern signed int __fprintf_chk(struct _IO_FILE *, signed int, const char *, ...);
// __lfsr_next
// file lib/lfsr.c line 84
static inline void __lfsr_next(struct fio_lfsr *fl, unsigned int spin);
// __printf_chk
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 87
extern signed int __printf_chk(signed int, const char *, ...);
// __sync_fetch_and_add
// file gcc_builtin_headers_generic.h line 93
signed int __sync_fetch_and_add();
// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr);
// atol
// file /usr/include/stdlib.h line 283
static inline signed long int atol(const char *__nptr);
// atomic32_inc_return
// file gettime.c line 477
static inline unsigned int atomic32_inc_return(unsigned int *seq);
// calibrate_cpu_clock
// file gettime.c line 262
static signed int calibrate_cpu_clock(void);
// clock_cmp
// file gettime.c line 549
static signed int clock_cmp(const void *p1, const void *p2);
// clock_gettime
// file /usr/include/time.h line 342
extern signed int clock_gettime(signed int, struct timespec *);
// clock_thread_fn
// file gettime.c line 482
static void * clock_thread_fn(void *data);
// cpus_online
// file os/os.h line 342
static inline unsigned int cpus_online(void);
// debug_init
// file t/debug.c line 11
void debug_init(void);
// fill_clock_gettime
// file gettime.c line 134
static signed int fill_clock_gettime(struct timespec *ts);
// find_lfsr
// file lib/lfsr.c line 155
static unsigned char * find_lfsr(unsigned long int size);
// fio_clock_init
// file gettime.c line 361
extern void fio_clock_init(void);
// fio_cpuset_exit
// file os/os-linux.h line 74
static inline signed int fio_cpuset_exit(struct anonymous *mask);
// fio_cpuset_init
// file os/os-linux.h line 68
static inline signed int fio_cpuset_init(struct anonymous *mask);
// fio_gettime
// file t/../gettime.h line 16
extern void fio_gettime(struct timeval *tp, void *caller);
// fio_gettime_offload
// file gettime.h line 25
static inline signed int fio_gettime_offload(struct timeval *tv);
// fio_local_clock_init
// file gettime.c line 356
extern void fio_local_clock_init(signed int is_thread);
// fio_monotonic_clocktest
// file gettime.c line 560
extern signed int fio_monotonic_clocktest(signed int debug);
// fmax
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 340
extern double fmax(double, double);
// fmin
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 343
extern double fmin(double, double);
// fprintf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 95
static inline signed int fprintf(struct _IO_FILE * restrict __stream, const char * restrict __fmt, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// get_cpu_clock
// file arch/arch-x86_64.h line 51
static inline unsigned long long int get_cpu_clock(void);
// get_cycles_per_usec
// file gettime.c line 230
static unsigned long int get_cycles_per_usec(void);
// gettid
// file os/os-linux.h line 109
static inline signed int gettid(void);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// lfsr_create_xormask
// file lib/lfsr.c line 144
static unsigned long int lfsr_create_xormask(unsigned char *taps);
// lfsr_init
// file t/../lib/lfsr.h line 26
signed int lfsr_init(struct fio_lfsr *fl, unsigned long int nums, unsigned long int seed, unsigned int spin);
// lfsr_next
// file t/../lib/lfsr.h line 25
signed int lfsr_next(struct fio_lfsr *fl, unsigned long int *off);
// lfsr_reset
// file lib/lfsr.c line 220
signed int lfsr_reset(struct fio_lfsr *fl, unsigned long int seed);
// log_err
// file t/log.c line 5
signed int log_err(const char *format, ...);
// log_info
// file t/log.c line 19
signed int log_info(const char *format, ...);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memset
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset(void *__dest, signed int __ch, unsigned long int __len);
// mtime_since
// file gettime.c line 419
extern unsigned long int mtime_since(struct timeval *s, struct timeval *e);
// mtime_since_now
// file gettime.c line 440
extern unsigned long int mtime_since_now(struct timeval *s);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// pow
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 153
extern double pow(double, double);
// prepare_spin
// file lib/lfsr.c line 189
static signed int prepare_spin(struct fio_lfsr *fl, unsigned int spin);
// printf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf(const char * restrict __fmt, ...);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_0 *, const union anonymous_1 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_0 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_0 *);
// qsort
// file /usr/include/stdlib.h line 764
extern void qsort(void *, unsigned long int, unsigned long int, signed int (*)(const void *, const void *));
// sched_setaffinity
// file /usr/include/sched.h line 118
extern signed int sched_setaffinity(signed int, unsigned long int, const struct anonymous *);
// sqrt
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 156
extern double sqrt(double);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// syscall
// file /usr/include/unistd.h line 1058
extern signed long int syscall(signed long int, ...);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// time_since_now
// file gettime.c line 449
extern unsigned long int time_since_now(struct timeval *s);
// usage
// file t/lfsr-test.c line 14
void usage();
// utime_since
// file t/../fio_time.h line 5
extern unsigned long int utime_since(struct timeval *s, struct timeval *e);
// utime_since_now
// file gettime.c line 411
extern unsigned long int utime_since_now(struct timeval *s);
// vsnprintf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 74
static inline signed int vsnprintf(char * restrict __s, unsigned long int __n, const char * restrict __fmt, void **__ap);

struct anonymous
{
  // __bits
  unsigned long int __bits[16l];
};

union anonymous_1
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

union anonymous_0
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

struct clock_entry
{
  // seq
  unsigned int seq;
  // cpu
  unsigned int cpu;
  // tsc
  unsigned long int tsc;
};

struct clock_thread
{
  // thread
  unsigned long int thread;
  // cpu
  signed int cpu;
  // debug
  signed int debug;
  // lock
  union anonymous_0 lock;
  // started
  union anonymous_0 started;
  // nr_entries
  unsigned long int nr_entries;
  // seq
  unsigned int *seq;
  // entries
  struct clock_entry *entries;
};

struct fio_lfsr
{
  // xormask
  unsigned long int xormask;
  // last_val
  unsigned long int last_val;
  // cached_bit
  unsigned long int cached_bit;
  // max_val
  unsigned long int max_val;
  // num_vals
  unsigned long int num_vals;
  // cycle_length
  unsigned long int cycle_length;
  // cached_cycle_length
  unsigned long int cached_cycle_length;
  // spin
  unsigned int spin;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
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

struct tv_valid
{
  // last_cycles
  unsigned long int last_cycles;
  // last_tv_valid
  signed int last_tv_valid;
  // warned
  signed int warned;
};


// cycles_per_usec
// file gettime.c line 18
static unsigned long int cycles_per_usec;
// cycles_start
// file gettime.c line 23
static unsigned long long int cycles_start;
// cycles_wrap
// file gettime.c line 23
static unsigned long long int cycles_wrap;
// f_err
// file t/debug.c line 3
struct _IO_FILE *f_err;
// fio_clock_source
// file gettime.c line 41
enum fio_cs fio_clock_source = (enum fio_cs)2;
// fio_clock_source_inited
// file gettime.c line 43
static enum fio_cs fio_clock_source_inited = (enum fio_cs)4;
// fio_clock_source_set
// file gettime.c line 42
signed int fio_clock_source_set = 0;
// fio_debug
// file t/debug.c line 5
unsigned long int fio_debug = (unsigned long int)0;
// fio_tv
// file t/debug.c line 4
struct timeval *fio_tv = (struct timeval *)(void *)0;
// inv_cycles_per_usec
// file gettime.c line 19
static unsigned long int inv_cycles_per_usec;
// lfsr_taps
// file lib/lfsr.c line 14
static unsigned char lfsr_taps[64l][6l] = { { (unsigned char)0, 0, 0, 0, 0, 0 }, { (unsigned char)0, 0, 0, 0, 0, 0 }, { (unsigned char)0, 0, 0, 0, 0, 0 }, { (unsigned char)3, (unsigned char)2, 0, 0, 0, 0 },
    { (unsigned char)4, (unsigned char)3, 0, 0, 0, 0 },
    { (unsigned char)5, (unsigned char)3, 0, 0, 0, 0 },
    { (unsigned char)6, (unsigned char)5, 0, 0, 0, 0 },
    { (unsigned char)7, (unsigned char)6, 0, 0, 0, 0 },
    { (unsigned char)8, (unsigned char)6, (unsigned char)5, (unsigned char)4, 0, 0 },
    { (unsigned char)9, (unsigned char)5, 0, 0, 0, 0 },
    { (unsigned char)10, (unsigned char)7, 0, 0, 0, 0 },
    { (unsigned char)11, (unsigned char)9, 0, 0, 0, 0 },
    { (unsigned char)12, (unsigned char)6, (unsigned char)4, (unsigned char)1, 0, 0 },
    { (unsigned char)13, (unsigned char)4, (unsigned char)3, (unsigned char)1, 0, 0 },
    { (unsigned char)14, (unsigned char)5, (unsigned char)3, (unsigned char)1, 0, 0 },
    { (unsigned char)15, (unsigned char)14, 0, 0, 0, 0 },
    { (unsigned char)16, (unsigned char)15, (unsigned char)13, (unsigned char)4, 0, 0 },
    { (unsigned char)17, (unsigned char)14, 0, 0, 0, 0 },
    { (unsigned char)18, (unsigned char)11, 0, 0, 0, 0 },
    { (unsigned char)19, (unsigned char)6, (unsigned char)2, (unsigned char)1, 0, 0 },
    { (unsigned char)20, (unsigned char)17, 0, 0, 0, 0 },
    { (unsigned char)21, (unsigned char)19, 0, 0, 0, 0 },
    { (unsigned char)22, (unsigned char)21, 0, 0, 0, 0 },
    { (unsigned char)23, (unsigned char)18, 0, 0, 0, 0 },
    { (unsigned char)24, (unsigned char)23, (unsigned char)22, (unsigned char)17, 0, 0 },
    { (unsigned char)25, (unsigned char)22, 0, 0, 0, 0 },
    { (unsigned char)26, (unsigned char)6, (unsigned char)2, (unsigned char)1, 0, 0 },
    { (unsigned char)27, (unsigned char)5, (unsigned char)2, (unsigned char)1, 0, 0 },
    { (unsigned char)28, (unsigned char)25, 0, 0, 0, 0 },
    { (unsigned char)29, (unsigned char)27, 0, 0, 0, 0 },
    { (unsigned char)30, (unsigned char)6, (unsigned char)4, (unsigned char)1, 0, 0 },
    { (unsigned char)31, (unsigned char)28, 0, 0, 0, 0 },
    { (unsigned char)32, (unsigned char)31, (unsigned char)29, (unsigned char)1, 0, 0 },
    { (unsigned char)33, (unsigned char)20, 0, 0, 0, 0 },
    { (unsigned char)34, (unsigned char)27, (unsigned char)2, (unsigned char)1, 0, 0 },
    { (unsigned char)35, (unsigned char)33, 0, 0, 0, 0 },
    { (unsigned char)36, (unsigned char)25, 0, 0, 0, 0 },
    { (unsigned char)37, (unsigned char)5, (unsigned char)4, (unsigned char)3, (unsigned char)2, (unsigned char)1 },
    { (unsigned char)38, (unsigned char)6, (unsigned char)5, (unsigned char)1, 0, 0 },
    { (unsigned char)39, (unsigned char)35, 0, 0, 0, 0 },
    { (unsigned char)40, (unsigned char)38, (unsigned char)21, (unsigned char)19, 0, 0 },
    { (unsigned char)41, (unsigned char)38, 0, 0, 0, 0 },
    { (unsigned char)42, (unsigned char)41, (unsigned char)20, (unsigned char)19, 0, 0 },
    { (unsigned char)43, (unsigned char)42, (unsigned char)38, (unsigned char)37, 0, 0 },
    { (unsigned char)44, (unsigned char)43, (unsigned char)18, (unsigned char)17, 0, 0 },
    { (unsigned char)45, (unsigned char)44, (unsigned char)42, (unsigned char)41, 0, 0 },
    { (unsigned char)46, (unsigned char)45, (unsigned char)26, (unsigned char)25, 0, 0 },
    { (unsigned char)47, (unsigned char)42, 0, 0, 0, 0 },
    { (unsigned char)48, (unsigned char)47, (unsigned char)21, (unsigned char)20, 0, 0 },
    { (unsigned char)49, (unsigned char)40, 0, 0, 0, 0 },
    { (unsigned char)50, (unsigned char)49, (unsigned char)24, (unsigned char)23, 0, 0 },
    { (unsigned char)51, (unsigned char)50, (unsigned char)36, (unsigned char)35, 0, 0 },
    { (unsigned char)52, (unsigned char)49, 0, 0, 0, 0 },
    { (unsigned char)53, (unsigned char)52, (unsigned char)38, (unsigned char)37, 0, 0 },
    { (unsigned char)54, (unsigned char)53, (unsigned char)18, (unsigned char)17, 0, 0 },
    { (unsigned char)55, (unsigned char)31, 0, 0, 0, 0 },
    { (unsigned char)56, (unsigned char)55, (unsigned char)35, (unsigned char)34, 0, 0 },
    { (unsigned char)57, (unsigned char)50, 0, 0, 0, 0 },
    { (unsigned char)58, (unsigned char)39, 0, 0, 0, 0 },
    { (unsigned char)59, (unsigned char)58, (unsigned char)38, (unsigned char)37, 0, 0 },
    { (unsigned char)60, (unsigned char)59, 0, 0, 0, 0 },
    { (unsigned char)61, (unsigned char)60, (unsigned char)46, (unsigned char)45, 0, 0 },
    { (unsigned char)62, (unsigned char)61, (unsigned char)6, (unsigned char)5, 0, 0 },
    { (unsigned char)63, (unsigned char)62, 0, 0, 0, 0 } };
// max_cycles_for_mult
// file gettime.c line 20
static unsigned long int max_cycles_for_mult;
// static_tv_valid
// file gettime.c line 35
static struct tv_valid static_tv_valid;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// tsc_reliable
// file gettime.c line 26
signed int tsc_reliable = 0;

// __dprint
// file debug.h line 40
void __dprint(signed int type, const char *str, ...)
{
  ;
}

// __fio_gettime
// file gettime.c line 146
static void __fio_gettime(struct timeval *tp)
{
  struct timespec ts;
  signed int return_value_fill_clock_gettime_1;
  unsigned long int usecs;
  unsigned long int t;
  struct tv_valid *tv;
  switch((signed int)fio_clock_source)
  {
    case CS_GTOD:
    {
      gettimeofday(tp, (struct timezone *)(void *)0);
      break;
    }
    case CS_CGETTIME:
    {
      return_value_fill_clock_gettime_1=fill_clock_gettime(&ts);
      if(!(return_value_fill_clock_gettime_1 >= 0))
      {
        log_err("fio: clock_gettime fails\n");
        /* assertion 0 */
        assert(0 != 0);
      }

      tp->tv_sec = ts.tv_sec;
      tp->tv_usec = ts.tv_nsec / (signed long int)1000;
      break;
    }
    case CS_CPUCLOCK:
    {
      tv = &static_tv_valid;
      t=get_cpu_clock();
      if(cycles_wrap == 0ull && !(t >= cycles_start))
        cycles_wrap = (unsigned long long int)1;

      else
        if(t >= cycles_start && !(cycles_wrap == 0ull))
        {
          if(tv->warned == 0)
          {
            log_err("fio: double CPU clock wrap\n");
            tv->warned = 1;
          }

        }

      t = t - cycles_start;
      tv->last_cycles = t;
      tv->last_tv_valid = 1;
      if(!(t >= max_cycles_for_mult))
        usecs = (t * inv_cycles_per_usec) / 16777216UL;

      else
        usecs = t / cycles_per_usec;
      tp->tv_sec = (signed long int)(usecs / (unsigned long int)1000000);
      tp->tv_usec = (signed long int)(usecs % (unsigned long int)1000000);
      break;
    }
    default:
      log_err("fio: invalid clock source %d\n", fio_clock_source);
  }
}

// __lfsr_next
// file lib/lfsr.c line 84
static inline void __lfsr_next(struct fio_lfsr *fl, unsigned int spin)
{
  switch(spin)
  {
    case (unsigned int)15:
      fl->last_val = (fl->last_val >> 1 | fl->cached_bit) ^ (fl->last_val & 1UL) - 1UL & fl->xormask;
    case (unsigned int)14:
      fl->last_val = (fl->last_val >> 1 | fl->cached_bit) ^ (fl->last_val & 1UL) - 1UL & fl->xormask;
    case (unsigned int)13:
      fl->last_val = (fl->last_val >> 1 | fl->cached_bit) ^ (fl->last_val & 1UL) - 1UL & fl->xormask;
    case (unsigned int)12:
      fl->last_val = (fl->last_val >> 1 | fl->cached_bit) ^ (fl->last_val & 1UL) - 1UL & fl->xormask;
    case (unsigned int)11:
      fl->last_val = (fl->last_val >> 1 | fl->cached_bit) ^ (fl->last_val & 1UL) - 1UL & fl->xormask;
    case (unsigned int)10:
      fl->last_val = (fl->last_val >> 1 | fl->cached_bit) ^ (fl->last_val & 1UL) - 1UL & fl->xormask;
    case (unsigned int)9:
      fl->last_val = (fl->last_val >> 1 | fl->cached_bit) ^ (fl->last_val & 1UL) - 1UL & fl->xormask;
    case (unsigned int)8:
      fl->last_val = (fl->last_val >> 1 | fl->cached_bit) ^ (fl->last_val & 1UL) - 1UL & fl->xormask;
    case (unsigned int)7:
      fl->last_val = (fl->last_val >> 1 | fl->cached_bit) ^ (fl->last_val & 1UL) - 1UL & fl->xormask;
    case (unsigned int)6:
      fl->last_val = (fl->last_val >> 1 | fl->cached_bit) ^ (fl->last_val & 1UL) - 1UL & fl->xormask;
    case (unsigned int)5:
      fl->last_val = (fl->last_val >> 1 | fl->cached_bit) ^ (fl->last_val & 1UL) - 1UL & fl->xormask;
    case (unsigned int)4:
      fl->last_val = (fl->last_val >> 1 | fl->cached_bit) ^ (fl->last_val & 1UL) - 1UL & fl->xormask;
    case (unsigned int)3:
      fl->last_val = (fl->last_val >> 1 | fl->cached_bit) ^ (fl->last_val & 1UL) - 1UL & fl->xormask;
    case (unsigned int)2:
      fl->last_val = (fl->last_val >> 1 | fl->cached_bit) ^ (fl->last_val & 1UL) - 1UL & fl->xormask;
    case (unsigned int)1:
      fl->last_val = (fl->last_val >> 1 | fl->cached_bit) ^ (fl->last_val & 1UL) - 1UL & fl->xormask;
    case (unsigned int)0:
      fl->last_val = (fl->last_val >> 1 | fl->cached_bit) ^ (fl->last_val & 1UL) - 1UL & fl->xormask;
  }
}

// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr)
{
  signed long int return_value_strtol_1;
  return_value_strtol_1=strtol(__nptr, (char **)(void *)0, 10);
  return (signed int)return_value_strtol_1;
}

// atol
// file /usr/include/stdlib.h line 283
static inline signed long int atol(const char *__nptr)
{
  signed long int return_value_strtol_1;
  return_value_strtol_1=strtol(__nptr, (char **)(void *)0, 10);
  return return_value_strtol_1;
}

// atomic32_inc_return
// file gettime.c line 477
static inline unsigned int atomic32_inc_return(unsigned int *seq)
{
  unsigned int return_value___sync_fetch_and_add_1;
  __CPROVER_atomic_begin();
  return_value___sync_fetch_and_add_1 = *seq;
  *seq = *seq + (unsigned int)1;
  FENCE(WRfence);
  __CPROVER_atomic_end();
  return (unsigned int)1 + return_value___sync_fetch_and_add_1;
}

// calibrate_cpu_clock
// file gettime.c line 262
static signed int calibrate_cpu_clock(void)
{
  double delta;
  double mean;
  double S;
  unsigned long int minc;
  unsigned long int maxc;
  unsigned long int avg;
  unsigned long int cycles[50l];
  signed int i;
  signed int samples;
  cycles[(signed long int)0]=get_cycles_per_usec();
  mean = 0.0;
  delta = mean;
  S = delta;
  i = 0;
  for( ; !(i >= 50); i = i + 1)
  {
    cycles[(signed long int)i]=get_cycles_per_usec();
    delta = (double)cycles[(signed long int)i] - mean;
    if(IEEE_FLOAT_NOTEQUAL(delta, 0.000000))
    {
      mean = mean + delta / ((double)i + 1.0);
      S = S + delta * ((double)cycles[(signed long int)i] - mean);
    }

  }
  unsigned long int tmp_statement_expression_1;
  unsigned long int tmp_statement_expression_2;
  if(cycles[0l] == 0ul)
  {
    if(!(cycles[49l] == 0ul))
      goto __CPROVER_DUMP_L4;

    return 1;
  }

  else
  {

  __CPROVER_DUMP_L4:
    ;
    S=sqrt(S / ((double)50 - 1.0));
    minc = -1ULL;
    avg = (unsigned long int)0;
    samples = (signed int)avg;
    maxc = (unsigned long int)samples;
    i = 0;
    for( ; !(i >= 50); i = i + 1)
    {
      double this = (double)cycles[(signed long int)i];
      unsigned long int _x = cycles[(signed long int)i];
      unsigned long int _y = minc;
      (void)(&_x == &_y);
      tmp_statement_expression_1 = _x < _y ? _x : _y;
      minc = tmp_statement_expression_1;
      unsigned long int calibrate_cpu_clock__1__2__1__2___x = cycles[(signed long int)i];
      unsigned long int calibrate_cpu_clock__1__2__1__2___y = maxc;
      (void)(&calibrate_cpu_clock__1__2__1__2___x == &calibrate_cpu_clock__1__2__1__2___y);
      tmp_statement_expression_2 = calibrate_cpu_clock__1__2__1__2___x > calibrate_cpu_clock__1__2__1__2___y ? calibrate_cpu_clock__1__2__1__2___x : calibrate_cpu_clock__1__2__1__2___y;
      maxc = tmp_statement_expression_2;
      double return_value_fmax_3;
      return_value_fmax_3=fmax(this, mean);
      double return_value_fmin_4;
      return_value_fmin_4=fmin(this, mean);
      if(!(return_value_fmax_3 + -return_value_fmin_4 > S))
      {
        samples = samples + 1;
        avg = avg + (unsigned long int)this;
      }

    }
    S = S / (double)50;
    mean = mean / 10.0;
    i = 0;
    for( ; !(i >= 50); i = i + 1)
      while(!((4096ul & fio_debug) == 0ul))
      {
        __dprint(12, "cycles[%d]=%llu\n", i, (unsigned long long int)cycles[(signed long int)i] / (unsigned long int)10);
        break;
      }
    avg = avg / (unsigned long int)samples;
    avg = (avg + (unsigned long int)5) / (unsigned long int)10;
    minc = minc / (unsigned long int)10;
    maxc = maxc / (unsigned long int)10;
    while(!((4096ul & fio_debug) == 0ul))
    {
      __dprint(12, "avg: %llu\n", (unsigned long long int)avg);
      break;
    }
    while(!((4096ul & fio_debug) == 0ul))
    {
      __dprint(12, "min=%llu, max=%llu, mean=%f, S=%f\n", (unsigned long long int)minc, (unsigned long long int)maxc, mean, S);
      break;
    }
    cycles_per_usec = avg;
    inv_cycles_per_usec = 16777216UL / cycles_per_usec;
    max_cycles_for_mult = ~0ULL / inv_cycles_per_usec;
    while(!((4096ul & fio_debug) == 0ul))
    {
      __dprint(12, "inv_cycles_per_usec=%lu\n", inv_cycles_per_usec);
      break;
    }
    cycles_start=get_cpu_clock();
    while(!((4096ul & fio_debug) == 0ul))
    {
      __dprint(12, "cycles_start=%llu\n", cycles_start);
      break;
    }
    return 0;
  }
}

// clock_cmp
// file gettime.c line 549
static signed int clock_cmp(const void *p1, const void *p2)
{
  struct clock_entry *c1 = (struct clock_entry *)p1;
  struct clock_entry *c2 = (struct clock_entry *)p2;
  if(c1->seq == c2->seq)
    log_err("cs: bug in atomic sequence!\n");

  return (signed int)(c1->seq - c2->seq);
}

// clock_thread_fn
// file gettime.c line 482
static void * clock_thread_fn(void *data)
{
  struct clock_thread *t = (struct clock_thread *)data;
  struct clock_entry *c;
  struct anonymous cpu_mask;
  unsigned int last_seq;
  signed int i;
  signed int return_value_fio_cpuset_init_3;
  return_value_fio_cpuset_init_3=fio_cpuset_init(&cpu_mask);
  if(!(return_value_fio_cpuset_init_3 == 0))
  {
    signed int __err;
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    __err = *return_value___errno_location_1;
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(__err);
    log_err("clock cpuset init failed: %s\n", return_value_strerror_2);
    goto err_out;
  }

  unsigned long int __cpu = (unsigned long int)t->cpu;
  if(!(__cpu / 8ul >= sizeof(struct anonymous) /*128ul*/ ))
    ((unsigned long int *)(&cpu_mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] = ((unsigned long int *)(&cpu_mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] | (unsigned long int)1 << __cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ );

  else
    (unsigned long int)0;
  signed int return_value_gettid_6;
  return_value_gettid_6=gettid();
  signed int return_value_sched_setaffinity_7;
  return_value_sched_setaffinity_7=sched_setaffinity(return_value_gettid_6, sizeof(struct anonymous) /*128ul*/ , &cpu_mask);
  if(return_value_sched_setaffinity_7 == -1)
  {
    signed int clock_thread_fn__1__3____err;
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    clock_thread_fn__1__3____err = *return_value___errno_location_4;
    char *return_value_strerror_5;
    return_value_strerror_5=strerror(clock_thread_fn__1__3____err);
    log_err("clock setaffinity failed: %s\n", return_value_strerror_5);
    goto err;
  }

  pthread_mutex_lock(&t->lock);
  pthread_mutex_unlock(&t->started);
  last_seq = (unsigned int)0;
  c = &t->entries[(signed long int)0];
  i = 0;
  for( ; !((unsigned long int)i >= t->nr_entries); c = c + 1l)
  {
    unsigned int seq;
    unsigned long int tsc;
    c->cpu = (unsigned int)t->cpu;
    do
    {
      seq=atomic32_inc_return(t->seq);
      if(!(seq >= last_seq))
        break;

      tsc=get_cpu_clock();
    }
    while(!(seq == *t->seq));
    c->seq = seq;
    c->tsc = tsc;
    i = i + 1;
  }
  if(!(t->debug == 0))
  {
    unsigned long long int clocks = (t->entries + (signed long int)(i - 1))->tsc - (t->entries + (signed long int)0)->tsc;
    log_info("cs: cpu%3d: %llu clocks seen\n", t->cpu, clocks);
  }

  if((t->entries + (signed long int)(i + -1))->tsc == 0ul)
  {
    if(t->entries->tsc == 0ul)
      goto err;

  }

  fio_cpuset_exit(&cpu_mask);
  return (void *)0;

err:
  ;
  fio_cpuset_exit(&cpu_mask);

err_out:
  ;
  return (void *)1;
}

// cpus_online
// file os/os.h line 342
static inline unsigned int cpus_online(void)
{
  signed long int return_value_sysconf_1;
  return_value_sysconf_1=sysconf(84);
  return (unsigned int)return_value_sysconf_1;
}

// debug_init
// file t/debug.c line 11
void debug_init(void)
{
  f_err = stderr;
}

// fill_clock_gettime
// file gettime.c line 134
static signed int fill_clock_gettime(struct timespec *ts)
{
  signed int return_value_clock_gettime_1;
  return_value_clock_gettime_1=clock_gettime(4, ts);
  return return_value_clock_gettime_1;
}

// find_lfsr
// file lib/lfsr.c line 155
static unsigned char * find_lfsr(unsigned long int size)
{
  signed int i = 3;
  for( ; !(i >= 64); i = i + 1)
    if(!(size >= 1UL << i))
      return lfsr_taps[(signed long int)i];

  return (unsigned char *)(void *)0;
}

// fio_clock_init
// file gettime.c line 361
extern void fio_clock_init(void)
{
  signed int return_value_fio_monotonic_clocktest_2;
  if(!(fio_clock_source == fio_clock_source_inited))
  {
    fio_clock_source_inited = fio_clock_source;
    signed int return_value_calibrate_cpu_clock_1;
    return_value_calibrate_cpu_clock_1=calibrate_cpu_clock();
    if(!(return_value_calibrate_cpu_clock_1 == 0))
      tsc_reliable = 0;

    if(!(tsc_reliable == 0))
    {
      if(fio_clock_source_set == 0)
      {
        return_value_fio_monotonic_clocktest_2=fio_monotonic_clocktest(0);
        if(return_value_fio_monotonic_clocktest_2 == 0)
          fio_clock_source = (enum fio_cs)CS_CPUCLOCK;

      }

    }

    else
      if((signed int)fio_clock_source == CS_CPUCLOCK)
        log_info("fio: clocksource=cpu may not be reliable\n");

  }

}

// fio_cpuset_exit
// file os/os-linux.h line 74
static inline signed int fio_cpuset_exit(struct anonymous *mask)
{
  return 0;
}

// fio_cpuset_init
// file os/os-linux.h line 68
static inline signed int fio_cpuset_init(struct anonymous *mask)
{
  do
    __builtin_memset((void *)mask, 0, sizeof(struct anonymous) /*128ul*/ );
  while((_Bool)0);
  return 0;
}

// fio_gettime
// file t/../gettime.h line 16
extern void fio_gettime(struct timeval *tp, void *caller)
{
  signed int return_value_fio_gettime_offload_1;
  return_value_fio_gettime_offload_1=fio_gettime_offload(tp);
  if(return_value_fio_gettime_offload_1 == 0)
    __fio_gettime(tp);

}

// fio_gettime_offload
// file gettime.h line 25
static inline signed int fio_gettime_offload(struct timeval *tv)
{
  signed long int last_sec;
  if(fio_tv == ((struct timeval *)NULL))
    return 0;

  else
  {
    do
    {
      asm("lfence" :  :  : "memory");
      tv->tv_sec = fio_tv->tv_sec;
      last_sec = tv->tv_sec;
      tv->tv_usec = fio_tv->tv_usec;
    }
    while(!(fio_tv->tv_sec == last_sec));
    return 1;
  }
}

// fio_local_clock_init
// file gettime.c line 356
extern void fio_local_clock_init(signed int is_thread)
{
  ;
}

// fio_monotonic_clocktest
// file gettime.c line 560
extern signed int fio_monotonic_clocktest(signed int debug)
{
  struct clock_thread *cthreads;
  unsigned int nr_cpus;
  nr_cpus=cpus_online();
  struct clock_entry *entries;
  unsigned long int nr_entries;
  unsigned long int tentries;
  unsigned long int failed = (unsigned long int)0;
  struct clock_entry *prev;
  struct clock_entry *this;
  unsigned int seq = (unsigned int)0;
  unsigned int i;
  if(!(debug == 0))
  {
    log_info("cs: reliable_tsc: %s\n", tsc_reliable != 0 ? "yes" : "no");
    fio_debug = fio_debug | (unsigned long int)(1U << 12);
    nr_entries = (unsigned long int)100000;
  }

  else
    nr_entries = (unsigned long int)10000;
  calibrate_cpu_clock();
  if(!(debug == 0))
    fio_debug = fio_debug & (unsigned long int)~(1U << 12);

  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)nr_cpus * sizeof(struct clock_thread) /*120ul*/ );
  cthreads = (struct clock_thread *)return_value_malloc_1;
  tentries = nr_entries * (unsigned long int)nr_cpus;
  void *return_value_malloc_2;
  return_value_malloc_2=malloc(tentries * sizeof(struct clock_entry) /*16ul*/ );
  entries = (struct clock_entry *)return_value_malloc_2;
  if(!(debug == 0))
    log_info("cs: Testing %u CPUs\n", nr_cpus);

  i = (unsigned int)0;
  for( ; !(i >= nr_cpus); i = i + 1u)
  {
    struct clock_thread *t = &cthreads[(signed long int)i];
    t->cpu = (signed int)i;
    t->debug = debug;
    t->seq = &seq;
    t->nr_entries = nr_entries;
    t->entries = &entries[(signed long int)((unsigned long int)i * nr_entries)];
    pthread_mutex_init(&t->lock, (const union anonymous_1 *)(void *)0);
    pthread_mutex_init(&t->started, (const union anonymous_1 *)(void *)0);
    pthread_mutex_lock(&t->lock);
    signed int return_value_pthread_create_3;
    return_value_pthread_create_3=pthread_create(&t->thread, (const union pthread_attr_t *)(void *)0, clock_thread_fn, (void *)t);
    if(!(return_value_pthread_create_3 == 0))
    {
      failed = failed + 1ul;
      nr_cpus = i;
      break;
    }

  }
  i = (unsigned int)0;
  for( ; !(i >= nr_cpus); i = i + 1u)
  {
    struct clock_thread *fio_monotonic_clocktest__1__4__1__t = &cthreads[(signed long int)i];
    pthread_mutex_lock(&fio_monotonic_clocktest__1__4__1__t->started);
  }
  i = (unsigned int)0;
  for( ; !(i >= nr_cpus); i = i + 1u)
  {
    struct clock_thread *fio_monotonic_clocktest__1__5__1__t = &cthreads[(signed long int)i];
    pthread_mutex_unlock(&fio_monotonic_clocktest__1__5__1__t->lock);
  }
  i = (unsigned int)0;
  for( ; !(i >= nr_cpus); i = i + 1u)
  {
    struct clock_thread *fio_monotonic_clocktest__1__6__1__t = &cthreads[(signed long int)i];
    void *ret;
    pthread_join(fio_monotonic_clocktest__1__6__1__t->thread, &ret);
    if(!(ret == NULL))
      failed = failed + 1ul;

  }
  free((void *)cthreads);
  if(!(failed == 0ul))
  {
    if(!(debug == 0))
      log_err("Clocksource test: %lu threads failed\n", failed);

  }

  else
  {
    qsort((void *)entries, tentries, sizeof(struct clock_entry) /*16ul*/ , clock_cmp);
    prev = (struct clock_entry *)(void *)0;
    i = (unsigned int)0;
    failed = (unsigned long int)i;
    for( ; !((unsigned long int)i >= tentries); i = i + 1u)
    {
      this = &entries[(signed long int)i];
      if(i == 0u)
        prev = this;

      else
      {
        if(!(this->tsc >= prev->tsc))
        {
          unsigned long int diff = prev->tsc - this->tsc;
          if(debug == 0)
          {
            failed = failed + 1ul;
            break;
          }

          log_info("cs: CPU clock mismatch (diff=%llu):\n", (unsigned long long int)diff);
          log_info("\t CPU%3u: TSC=%llu, SEQ=%u\n", prev->cpu, (unsigned long long int)prev->tsc, prev->seq);
          log_info("\t CPU%3u: TSC=%llu, SEQ=%u\n", this->cpu, (unsigned long long int)this->tsc, this->seq);
          failed = failed + 1ul;
        }

        prev = this;
      }
    }
    if(!(debug == 0))
    {
      if(!(failed == 0ul))
        log_info("cs: Failed: %lu\n", failed);

      else
        log_info("cs: Pass!\n");
    }

  }

err:
  ;
  free((void *)entries);
  return (signed int)!(!(failed != 0ul));
}

// fprintf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 95
static inline signed int fprintf(struct _IO_FILE * restrict __stream, const char * restrict __fmt, ...)
{
  void *return_value___builtin_va_arg_pack_1;
  return_value___builtin_va_arg_pack_1=__builtin_va_arg_pack();
  signed int return_value___fprintf_chk_2;
  return_value___fprintf_chk_2=__fprintf_chk(__stream, 2 - 1, __fmt, return_value___builtin_va_arg_pack_1);
  return return_value___fprintf_chk_2;
}

// get_cpu_clock
// file arch/arch-x86_64.h line 51
static inline unsigned long long int get_cpu_clock(void)
{
  unsigned int lo;
  unsigned int hi;
  asm("rdtsc" : "=a"(lo), "=d"(hi) :  : );
  return (unsigned long long int)hi << 32ULL | (unsigned long int)lo;
}

// get_cycles_per_usec
// file gettime.c line 230
static unsigned long int get_cycles_per_usec(void)
{
  struct timeval s;
  struct timeval e;
  unsigned long int c_s;
  unsigned long int c_e;
  enum fio_cs old_cs = fio_clock_source;
  fio_clock_source = (enum fio_cs)CS_CGETTIME;
  __fio_gettime(&s);
  c_s=get_cpu_clock();
  do
  {
    unsigned long int elapsed;
    __fio_gettime(&e);
    elapsed=utime_since(&s, &e);
    if(elapsed >= 1280ul)
    {
      c_e=get_cpu_clock();
      break;
    }

  }
  while((_Bool)1);
  fio_clock_source = old_cs;
  return (c_e - c_s) + (unsigned long int)127 >> 7;
}

// gettid
// file os/os-linux.h line 109
static inline signed int gettid(void)
{
  signed long int return_value_syscall_1;
  return_value_syscall_1=syscall((signed long int)186);
  return (signed int)return_value_syscall_1;
}

// lfsr_create_xormask
// file lib/lfsr.c line 144
static unsigned long int lfsr_create_xormask(unsigned char *taps)
{
  signed int i;
  unsigned long int xormask = (unsigned long int)0;
  i = 0;
  _Bool tmp_if_expr_1;
  do
  {
    if(!(i >= 6))
      tmp_if_expr_1 = (signed int)taps[(signed long int)i] != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr_1 = (_Bool)0;
    if(!tmp_if_expr_1)
      break;

    xormask = xormask | 1UL << (signed int)taps[(signed long int)i] - 1;
    i = i + 1;
  }
  while((_Bool)1);
  return xormask;
}

// lfsr_init
// file t/../lib/lfsr.h line 26
signed int lfsr_init(struct fio_lfsr *fl, unsigned long int nums, unsigned long int seed, unsigned int spin)
{
  unsigned char *taps;
  taps=find_lfsr(nums);
  if(taps == ((unsigned char *)NULL))
    return 1;

  else
  {
    fl->max_val = nums - (unsigned long int)1;
    fl->xormask=lfsr_create_xormask(taps);
    fl->cached_bit = 1UL << (signed int)taps[(signed long int)0] - 1;
    signed int return_value_prepare_spin_1;
    return_value_prepare_spin_1=prepare_spin(fl, spin);
    if(!(return_value_prepare_spin_1 == 0))
      return 1;

    else
    {
      signed int return_value_lfsr_reset_2;
      return_value_lfsr_reset_2=lfsr_reset(fl, seed);
      if(!(return_value_lfsr_reset_2 == 0))
        return 1;

      else
        return 0;
    }
  }
}

// lfsr_next
// file t/../lib/lfsr.h line 25
signed int lfsr_next(struct fio_lfsr *fl, unsigned long int *off)
{
  unsigned long int tmp_post_1 = fl->num_vals;
  fl->num_vals = fl->num_vals + 1ul;
  _Bool tmp_if_expr_2;
  if(!(fl->max_val >= tmp_post_1))
    return 1;

  else
  {
    do
    {
      if(!(fl->cycle_length == 0ul))
      {
        fl->cycle_length = fl->cycle_length - 1ul;
        tmp_if_expr_2 = !(fl->cycle_length != 0ul) ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_2 = (_Bool)0;
      if(tmp_if_expr_2)
      {
        __lfsr_next(fl, fl->spin + (unsigned int)1);
        fl->cycle_length = fl->cached_cycle_length;
      }

      else
        __lfsr_next(fl, fl->spin);
    }
    while(!(fl->max_val >= fl->last_val));
    *off = fl->last_val;
    return 0;
  }
}

// lfsr_reset
// file lib/lfsr.c line 220
signed int lfsr_reset(struct fio_lfsr *fl, unsigned long int seed)
{
  unsigned long int bitmask = (fl->cached_bit << 1) - (unsigned long int)1;
  fl->num_vals = (unsigned long int)0;
  fl->last_val = seed & bitmask;
  if(fl->last_val == bitmask)
    return 1;

  else
    return 0;
}

// log_err
// file t/log.c line 5
signed int log_err(const char *format, ...)
{
  char buffer[1024l];
  void **args;
  unsigned long int len;
  args = (void **)&format;
  signed int return_value_vsnprintf_1;
  return_value_vsnprintf_1=vsnprintf(buffer, sizeof(char [1024l]) /*1024ul*/ , format, args);
  len = (unsigned long int)return_value_vsnprintf_1;
  args = ((void **)NULL);
  unsigned long int tmp_statement_expression_2;
  unsigned long int _x = len;
  unsigned long int _y = sizeof(char [1024l]) /*1024ul*/  - (unsigned long int)1;
  (void)(&_x == &_y);
  tmp_statement_expression_2 = _x < _y ? _x : _y;
  len = tmp_statement_expression_2;
  unsigned long int return_value_fwrite_3;
  return_value_fwrite_3=fwrite((const void *)buffer, len, (unsigned long int)1, stderr);
  return (signed int)return_value_fwrite_3;
}

// log_info
// file t/log.c line 19
signed int log_info(const char *format, ...)
{
  char buffer[1024l];
  void **args;
  unsigned long int len;
  args = (void **)&format;
  signed int return_value_vsnprintf_1;
  return_value_vsnprintf_1=vsnprintf(buffer, sizeof(char [1024l]) /*1024ul*/ , format, args);
  len = (unsigned long int)return_value_vsnprintf_1;
  args = ((void **)NULL);
  unsigned long int tmp_statement_expression_2;
  unsigned long int _x = len;
  unsigned long int _y = sizeof(char [1024l]) /*1024ul*/  - (unsigned long int)1;
  (void)(&_x == &_y);
  tmp_statement_expression_2 = _x < _y ? _x : _y;
  len = tmp_statement_expression_2;
  unsigned long int return_value_fwrite_3;
  return_value_fwrite_3=fwrite((const void *)buffer, len, (unsigned long int)1, stdout);
  return (signed int)return_value_fwrite_3;
}

// main
// file t/lfsr-test.c line 27
signed int main(signed int argc, char **argv)
{
  signed int r;
  struct timeval start;
  struct timeval end;
  struct fio_lfsr *fl;
  signed int verify = 0;
  unsigned int spin = (unsigned int)0;
  unsigned long int seed = (unsigned long int)0;
  unsigned long int numbers;
  unsigned long int v_size;
  unsigned long int i;
  void *v = (void *)0;
  void *v_start;
  double total;
  double mean;
  signed int return_value_strncmp_1;
  signed int return_value_atoi_2;
  signed long int return_value_atol_3;
  signed long int return_value_strtol_4;
  switch(argc)
  {
    case 5:
    {
      return_value_strncmp_1=strncmp(argv[(signed long int)4], "verify", (unsigned long int)7);
      if(return_value_strncmp_1 == 0)
        verify = 1;

    }
    case 4:
    {
      return_value_atoi_2=atoi(argv[(signed long int)3]);
      spin = (unsigned int)return_value_atoi_2;
    }
    case 3:
    {
      return_value_atol_3=atol(argv[(signed long int)2]);
      seed = (unsigned long int)return_value_atol_3;
    }
    case 2:
    {
      return_value_strtol_4=strtol(argv[(signed long int)1], (char ** restrict )(void *)0, 16);
      numbers = (unsigned long int)return_value_strtol_4;
      break;
    }
    default:
    {
      usage();
      return 1;
    }
  }
  void *return_value_malloc_5;
  return_value_malloc_5=malloc(sizeof(struct fio_lfsr) /*64ul*/ );
  fl = (struct fio_lfsr *)return_value_malloc_5;
  signed int return_value_lfsr_next_7;
  if(fl == ((struct fio_lfsr *)NULL))
  {
    perror("malloc");
    return 1;
  }

  else
  {
    r=lfsr_init(fl, numbers, seed, spin);
    if(!(r == 0))
    {
      printf("Initialization failed.\n");
      return r;
    }

    else
    {
      printf("LFSR specs\n");
      printf("==========================\n");
      signed int return_value___builtin_clzl_6;
      return_value___builtin_clzl_6=__builtin_clzl(fl->cached_bit);
      printf("Size is         %u\n", 64 - return_value___builtin_clzl_6);
      printf("Max val is      %lu\n", (unsigned long int)fl->max_val);
      printf("XOR-mask is     0x%lX\n", (unsigned long int)fl->xormask);
      printf("Seed is         %lu\n", (unsigned long int)fl->last_val);
      printf("Spin is         %u\n", fl->spin);
      printf("Cycle length is %lu\n", (unsigned long int)fl->cycle_length);
      if(!(verify == 0))
      {
        v_size = numbers * sizeof(unsigned char) /*1ul*/ ;
        v=malloc(v_size);
        memset(v, 0, v_size);
        printf("\nVerification table is %lf KBs\n", (double)v_size / (double)1024);
      }

      v_start = v;
      fprintf(stderr, "\nTest initiated... ");
      fio_gettime(&start, (void *)0);
      do
      {
        return_value_lfsr_next_7=lfsr_next(fl, &i);
        if(!(return_value_lfsr_next_7 == 0))
          break;

        if(!(verify == 0))
          *((unsigned char *)(v + (signed long int)i)) = *((unsigned char *)(v + (signed long int)i)) + (unsigned char)1;

      }
      while((_Bool)1);
      fio_gettime(&end, (void *)0);
      fprintf(stderr, "finished.\n");
      r = 0;
      if(!(verify == 0))
      {
        fprintf(stderr, "Verifying results... ");
        i = (unsigned long int)0;
        for( ; !(i >= numbers); i = i + 1ul)
          if(!((signed int)*((unsigned char *)(v + (signed long int)i)) == 1))
          {
            fprintf(stderr, "failed (%lu = %d).\n", (unsigned long int)i, *((unsigned char *)(v + (signed long int)i)));
            r = 1;
            break;
          }

        if(r == 0)
          fprintf(stderr, "OK!\n");

      }

      unsigned long int return_value_utime_since_8;
      return_value_utime_since_8=utime_since(&start, &end);
      total = (double)return_value_utime_since_8;
      mean = total / (double)fl->num_vals;
      printf("\nTime results ");
      if(!(verify == 0))
        printf("(slower due to verification)");

      printf("\n==============================\n");
      double return_value_pow_9;
      return_value_pow_9=pow((double)10, (double)6);
      printf("Elapsed: %lf s\n", total / return_value_pow_9);
      printf("Mean:    %lf us\n", mean);
      free(v_start);
      free((void *)fl);
      return r;
    }
  }
}

// memset
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset(void *__dest, signed int __ch, unsigned long int __len)
{
  void *return_value___builtin___memset_chk_1;
  return_value___builtin___memset_chk_1=__builtin___memset_chk(__dest, __ch, __len, 18446744073709551615ul);
  return return_value___builtin___memset_chk_1;
}

// mtime_since
// file gettime.c line 419
extern unsigned long int mtime_since(struct timeval *s, struct timeval *e)
{
  signed long int sec;
  signed long int usec;
  signed long int ret;
  sec = e->tv_sec - s->tv_sec;
  usec = e->tv_usec - s->tv_usec;
  if(sec >= 1l && !(usec >= 0l))
  {
    sec = sec - 1l;
    usec = usec + (signed long int)1000000;
  }

  if(sec == 0l && !(usec >= 0l) || !(sec >= 0l))
    return (unsigned long int)0;

  else
  {
    sec = sec * (signed long int)1000UL;
    usec = usec / (signed long int)1000UL;
    ret = sec + usec;
    return (unsigned long int)ret;
  }
}

// mtime_since_now
// file gettime.c line 440
extern unsigned long int mtime_since_now(struct timeval *s)
{
  struct timeval t;
  void *p;
  p=__builtin_return_address((unsigned int)0);
  fio_gettime(&t, p);
  unsigned long int return_value_mtime_since_1;
  return_value_mtime_since_1=mtime_since(s, &t);
  return return_value_mtime_since_1;
}

// prepare_spin
// file lib/lfsr.c line 189
static signed int prepare_spin(struct fio_lfsr *fl, unsigned int spin)
{
  unsigned long int max = (fl->cached_bit << 1) - (unsigned long int)1;
  unsigned long int x;
  unsigned long int y;
  signed int i;
  if(spin >= 16u)
    return 1;

  else
  {
    x = max / (unsigned long int)(spin + (unsigned int)1);
    y = max % (unsigned long int)(spin + (unsigned int)1);
    fl->cycle_length = (unsigned long int)0;
    fl->spin = spin;
    i = 1;
    for( ; spin >= (unsigned int)i; i = i + 1)
      if((y * (unsigned long int)i) % (unsigned long int)(1u + spin) == 0ul)
      {
        fl->cycle_length = x * (unsigned long int)i + (y * (unsigned long int)i) / (unsigned long int)(spin + (unsigned int)1);
        break;
      }

    fl->cached_cycle_length = fl->cycle_length;
    fl->cycle_length = fl->cycle_length + 1ul;
    return 0;
  }
}

// printf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf(const char * restrict __fmt, ...)
{
  void *return_value___builtin_va_arg_pack_1;
  return_value___builtin_va_arg_pack_1=__builtin_va_arg_pack();
  signed int return_value___printf_chk_2;
  return_value___printf_chk_2=__printf_chk(2 - 1, __fmt, return_value___builtin_va_arg_pack_1);
  return return_value___printf_chk_2;
}

// time_since_now
// file gettime.c line 449
extern unsigned long int time_since_now(struct timeval *s)
{
  unsigned long int return_value_mtime_since_now_1;
  return_value_mtime_since_now_1=mtime_since_now(s);
  return return_value_mtime_since_now_1 / (unsigned long int)1000;
}

// usage
// file t/lfsr-test.c line 14
void usage()
{
  printf("Usage: lfsr-test 0x<numbers> [seed] [spin] [verify]\n");
  printf("-------------------------------------------------------------\n");
  printf("*numbers: how many random numbers to produce (in hex)\nseed:     initial value\nspin:     how many iterations before we produce a number\nverify:   check if LFSR has iterated correctly\n\nOnly <numbers> is required. The rest are evaluated to 0 or false\nElapsed/mean time and verification results are printed at theend of the test\n");
}

// utime_since
// file t/../fio_time.h line 5
extern unsigned long int utime_since(struct timeval *s, struct timeval *e)
{
  signed long int sec;
  signed long int usec;
  unsigned long int ret;
  sec = e->tv_sec - s->tv_sec;
  usec = e->tv_usec - s->tv_usec;
  if(sec >= 1l && !(usec >= 0l))
  {
    sec = sec - 1l;
    usec = usec + (signed long int)1000000;
  }

  if(sec == 0l && !(usec >= 0l) || !(sec >= 0l))
    return (unsigned long int)0;

  else
  {
    ret = (unsigned long int)sec * 1000000ULL + (unsigned long int)usec;
    return ret;
  }
}

// utime_since_now
// file gettime.c line 411
extern unsigned long int utime_since_now(struct timeval *s)
{
  struct timeval t;
  fio_gettime(&t, (void *)0);
  unsigned long int return_value_utime_since_1;
  return_value_utime_since_1=utime_since(s, &t);
  return return_value_utime_since_1;
}

// vsnprintf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 74
static inline signed int vsnprintf(char * restrict __s, unsigned long int __n, const char * restrict __fmt, void **__ap)
{
  signed int return_value___builtin___vsnprintf_chk_1;
  return_value___builtin___vsnprintf_chk_1=__builtin___vsnprintf_chk(__s, __n, 2 - 1, 18446744073709551615ul, __fmt, __ap);
  return return_value___builtin___vsnprintf_chk_1;
}

