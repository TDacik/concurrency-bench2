// tag-#anon#ST[ARR16{U64}$U64$'__bits'|]
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 125
struct anonymous$5;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$6;

// tag-#anon#ST[S32'__lock'||U32'__nr_readers'||U32'__readers_wakeup'||U32'__writer_wakeup'||U32'__nr_readers_queued'||U32'__nr_writers_queued'||S32'__writer'||S32'__shared'||S8'__rwelision'||ARR7{U8}$U8$'__pad1'||U64'__pad2'||U32'__flags'||U32'$pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 177
struct anonymous$2;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous;

// tag-#anon#UN[ARR8{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 224
union anonymous$4;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$1;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__nr_readers'||U32'__readers_wakeup'||U32'__writer_wakeup'||U32'__nr_readers_queued'||U32'__nr_writers_queued'||S32'__writer'||S32'__shared'||S8'__rwelision'||ARR7{U8}$U8$'__pad1'||U64'__pad2'||U32'__flags'||U32'$pad0'|]#'__data'||ARR56{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 174
union anonymous$3;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$0;

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

// tag-block_hdr
// file smalloc.c line 49
struct block_hdr;

// tag-clock_entry
// file gettime.c line 460
struct clock_entry;

// tag-clock_thread
// file gettime.c line 466
struct clock_thread;

// tag-elem
// file t/stest.c line 14
struct elem;

// tag-fio_cs
// file gettime.h line 9
enum fio_cs { CS_GTOD=1, CS_CGETTIME=2, CS_CPUCLOCK=3, CS_INVAL=4 };

// tag-fio_mutex
// file os/../file.h line 109
struct fio_mutex;

// tag-fio_rwlock
// file os/../file.h line 110
struct fio_rwlock;

// tag-flist_head
// file t/../flist.h line 27
struct flist_head;

// tag-pool
// file smalloc.c line 39
struct pool;

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
// __fio_mutex_init
// file mutex.c line 33
extern signed int __fio_mutex_init(struct fio_mutex *mutex, signed int value);
// __fio_mutex_remove
// file mutex.c line 21
extern void __fio_mutex_remove(struct fio_mutex *mutex);
// __flist_add
// file t/../flist.h line 46
static inline void __flist_add(struct flist_head *new_entry, struct flist_head *prev, struct flist_head *next);
// __flist_del
// file t/../flist.h line 83
static inline void __flist_del(struct flist_head *prev, struct flist_head *next);
// __printf_chk
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 87
extern signed int __printf_chk(signed int, const char *, ...);
// __smalloc_pool
// file smalloc.c line 376
static void * __smalloc_pool(struct pool *pool, unsigned long int size);
// __sync_fetch_and_add
// file gcc_builtin_headers_generic.h line 93
signed int __sync_fetch_and_add();
// add_pool
// file smalloc.c line 183
static signed int add_pool(struct pool *pool, unsigned int alloc_size);
// arch_ffz
// file arch/arch-x86_64.h line 45
static inline unsigned long int arch_ffz(unsigned long int bitmask);
// atomic32_inc_return
// file gettime.c line 477
static inline unsigned int atomic32_inc_return(unsigned int *seq);
// blocks_free
// file smalloc.c line 158
static signed int blocks_free(struct pool *pool, unsigned int pool_idx, unsigned int idx, unsigned long int nr_blocks);
// blocks_iter
// file smalloc.c line 103
static signed int blocks_iter(struct pool *pool, unsigned int pool_idx, unsigned int idx, unsigned long int nr_blocks, signed int (*func)(unsigned int *, unsigned int));
// blocks_iter::func$object
//
signed int func$object(unsigned int *, unsigned int);
// calibrate_cpu_clock
// file gettime.c line 262
static signed int calibrate_cpu_clock(void);
// cleanup_pool
// file smalloc.c line 252
static void cleanup_pool(struct pool *pool);
// clear_blocks
// file smalloc.c line 170
static void clear_blocks(struct pool *pool, unsigned int pool_idx, unsigned int idx, unsigned long int nr_blocks);
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
// do_rand_allocs
// file t/stest.c line 22
static signed int do_rand_allocs(void);
// do_specific_alloc
// file t/stest.c line 61
static signed int do_specific_alloc(unsigned long int size);
// fill_clock_gettime
// file gettime.c line 134
static signed int fill_clock_gettime(struct timespec *ts);
// fill_redzone
// file smalloc.c line 286
static void fill_redzone(struct block_hdr *hdr);
// find_next_zero
// file smalloc.c line 176
static signed int find_next_zero(signed int word, signed int start);
// fio_clock_init
// file gettime.c line 361
extern void fio_clock_init(void);
// fio_cpuset_exit
// file os/os-linux.h line 74
static inline signed int fio_cpuset_exit(struct anonymous$5 *mask);
// fio_cpuset_init
// file os/os-linux.h line 68
static inline signed int fio_cpuset_init(struct anonymous$5 *mask);
// fio_gettime
// file gettime.c line 214
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
// fio_mutex_down
// file mutex.c line 152
extern void fio_mutex_down(struct fio_mutex *mutex);
// fio_mutex_down_timeout
// file mutex.c line 100
extern signed int fio_mutex_down_timeout(struct fio_mutex *mutex, unsigned int seconds);
// fio_mutex_down_trylock
// file mutex.c line 136
extern signed int fio_mutex_down_trylock(struct fio_mutex *mutex);
// fio_mutex_init
// file mutex.c line 76
extern struct fio_mutex * fio_mutex_init(signed int value);
// fio_mutex_remove
// file mutex.c line 27
extern void fio_mutex_remove(struct fio_mutex *mutex);
// fio_mutex_up
// file mutex.c line 168
extern void fio_mutex_up(struct fio_mutex *mutex);
// fio_rwlock_init
// file mutex.c line 209
extern struct fio_rwlock * fio_rwlock_init(void);
// fio_rwlock_read
// file mutex.c line 191
extern void fio_rwlock_read(struct fio_rwlock *lock);
// fio_rwlock_remove
// file mutex.c line 203
extern void fio_rwlock_remove(struct fio_rwlock *lock);
// fio_rwlock_unlock
// file mutex.c line 197
extern void fio_rwlock_unlock(struct fio_rwlock *lock);
// fio_rwlock_write
// file mutex.c line 185
extern void fio_rwlock_write(struct fio_rwlock *lock);
// flist_add_tail
// file t/../flist.h line 70
static inline void flist_add_tail(struct flist_head *new_entry, struct flist_head *head);
// flist_del
// file t/../flist.h line 96
static inline void flist_del(struct flist_head *entry);
// flist_empty
// file t/../flist.h line 117
static inline signed int flist_empty(struct flist_head *head);
// fmax
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 340
extern double fmax(double, double);
// fmin
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 343
extern double fmin(double, double);
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
// global_read_lock
// file smalloc.c line 71
static inline void global_read_lock(void);
// global_read_unlock
// file smalloc.c line 76
static inline void global_read_unlock(void);
// global_write_lock
// file smalloc.c line 81
static inline void global_write_lock(void);
// global_write_unlock
// file smalloc.c line 86
static inline void global_write_unlock(void);
// log_err
// file t/log.c line 5
signed int log_err(const char *format, ...);
// log_info
// file t/log.c line 19
signed int log_info(const char *format, ...);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// mask_clear
// file smalloc.c line 144
static signed int mask_clear(unsigned int *map, unsigned int mask);
// mask_cmp
// file smalloc.c line 139
static signed int mask_cmp(unsigned int *map, unsigned int mask);
// mask_set
// file smalloc.c line 151
static signed int mask_set(unsigned int *map, unsigned int mask);
// memset
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset(void *__dest, signed int __ch, unsigned long int __len);
// mmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 61
extern void * mmap(void *, unsigned long int, signed int, signed int, signed int, signed long int);
// mtime_since
// file gettime.c line 419
extern unsigned long int mtime_since(struct timeval *s, struct timeval *e);
// mtime_since_now
// file gettime.c line 440
extern unsigned long int mtime_since_now(struct timeval *s);
// munmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 76
extern signed int munmap(void *, unsigned long int);
// mutex_timed_out
// file mutex.c line 95
static signed int mutex_timed_out(struct timeval *t, unsigned int seconds);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// pool_lock
// file smalloc.c line 61
static inline void pool_lock(struct pool *pool);
// pool_unlock
// file smalloc.c line 66
static inline void pool_unlock(struct pool *pool);
// postred_ptr
// file smalloc.c line 276
static void * postred_ptr(struct block_hdr *hdr);
// printf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf(const char * restrict __fmt, ...);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous$1 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous$1 *, const union anonymous *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous$1 *);
// pthread_cond_timedwait
// file /usr/include/pthread.h line 1002
extern signed int pthread_cond_timedwait(union anonymous$1 *, union anonymous$0 *, struct timespec *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous$1 *, union anonymous$0 *);
// pthread_condattr_destroy
// file /usr/include/pthread.h line 1014
extern signed int pthread_condattr_destroy(union anonymous *);
// pthread_condattr_init
// file /usr/include/pthread.h line 1010
extern signed int pthread_condattr_init(union anonymous *);
// pthread_condattr_setpshared
// file /usr/include/pthread.h line 1024
extern signed int pthread_condattr_setpshared(union anonymous *, signed int);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$0 *, const union anonymous *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$0 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$0 *);
// pthread_mutexattr_destroy
// file /usr/include/pthread.h line 812
extern signed int pthread_mutexattr_destroy(union anonymous *);
// pthread_mutexattr_init
// file /usr/include/pthread.h line 808
extern signed int pthread_mutexattr_init(union anonymous *);
// pthread_mutexattr_setpshared
// file /usr/include/pthread.h line 822
extern signed int pthread_mutexattr_setpshared(union anonymous *, signed int);
// pthread_rwlock_init
// file /usr/include/pthread.h line 890
extern signed int pthread_rwlock_init(union anonymous$3 *, const union anonymous$4 *);
// pthread_rwlock_rdlock
// file /usr/include/pthread.h line 899
extern signed int pthread_rwlock_rdlock(union anonymous$3 *);
// pthread_rwlock_unlock
// file /usr/include/pthread.h line 929
extern signed int pthread_rwlock_unlock(union anonymous$3 *);
// pthread_rwlock_wrlock
// file /usr/include/pthread.h line 914
extern signed int pthread_rwlock_wrlock(union anonymous$3 *);
// pthread_rwlockattr_destroy
// file /usr/include/pthread.h line 940
extern signed int pthread_rwlockattr_destroy(union anonymous$4 *);
// pthread_rwlockattr_init
// file /usr/include/pthread.h line 936
extern signed int pthread_rwlockattr_init(union anonymous$4 *);
// pthread_rwlockattr_setpshared
// file /usr/include/pthread.h line 950
extern signed int pthread_rwlockattr_setpshared(union anonymous$4 *, signed int);
// ptr_valid
// file smalloc.c line 91
static inline signed int ptr_valid(struct pool *pool, void *ptr);
// qsort
// file /usr/include/stdlib.h line 764
extern void qsort(void *, unsigned long int, unsigned long int, signed int (*)(const void *, const void *));
// rand
// file /usr/include/stdlib.h line 374
extern signed int rand(void);
// scalloc
// file smalloc.c line 493
extern void * scalloc(unsigned long int nmemb, unsigned long int size);
// sched_setaffinity
// file /usr/include/sched.h line 118
extern signed int sched_setaffinity(signed int, unsigned long int, const struct anonymous$5 *);
// scleanup
// file t/../smalloc.h line 9
extern void scleanup(void);
// set_blocks
// file smalloc.c line 164
static void set_blocks(struct pool *pool, unsigned int pool_idx, unsigned int idx, unsigned long int nr_blocks);
// sfree
// file t/../smalloc.h line 6
extern void sfree(void *ptr);
// sfree_check_redzone
// file smalloc.c line 294
static void sfree_check_redzone(struct block_hdr *hdr);
// sfree_pool
// file smalloc.c line 321
static void sfree_pool(struct pool *pool, void *ptr);
// sinit
// file t/../smalloc.h line 8
extern void sinit(void);
// size_to_blocks
// file smalloc.c line 98
static inline unsigned long int size_to_blocks(unsigned long int size);
// smalloc
// file t/../smalloc.h line 4
extern void * smalloc(unsigned long int size);
// smalloc_pool
// file smalloc.c line 431
static void * smalloc_pool(struct pool *pool, unsigned long int size);
// smalloc_strdup
// file smalloc.c line 498
extern char * smalloc_strdup(const char *str);
// sqrt
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 156
extern double sqrt(double);
// strcpy
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 108
static inline char * strcpy(char * restrict __dest, const char * restrict __src);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// syscall
// file /usr/include/unistd.h line 1058
extern signed long int syscall(signed long int, ...);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// time_since_now
// file gettime.c line 449
extern unsigned long int time_since_now(struct timeval *s);
// utime_since
// file gettime.c line 388
extern unsigned long int utime_since(struct timeval *s, struct timeval *e);
// utime_since_now
// file gettime.c line 411
extern unsigned long int utime_since_now(struct timeval *s);
// vsnprintf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 74
static inline signed int vsnprintf(char * restrict __s, unsigned long int __n, const char * restrict __fmt, void **__ap);

struct anonymous$5
{
  // __bits
  unsigned long int __bits[16l];
};

struct anonymous$6
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

struct anonymous$2
{
  // __lock
  signed int __lock;
  // __nr_readers
  unsigned int __nr_readers;
  // __readers_wakeup
  unsigned int __readers_wakeup;
  // __writer_wakeup
  unsigned int __writer_wakeup;
  // __nr_readers_queued
  unsigned int __nr_readers_queued;
  // __nr_writers_queued
  unsigned int __nr_writers_queued;
  // __writer
  signed int __writer;
  // __shared
  signed int __shared;
  // __rwelision
  signed char __rwelision;
  // __pad1
  unsigned char __pad1[7l];
  // __pad2
  unsigned long int __pad2;
  // __flags
  unsigned int __flags;
};

union anonymous
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous$4
{
  // __size
  char __size[8l];
  // __align
  signed long int __align;
};

union anonymous$1
{
  // __data
  struct anonymous$6 __data;
  // __size
  char __size[48l];
  // __align
  signed long long int __align;
};

union anonymous$3
{
  // __data
  struct anonymous$2 __data;
  // __size
  char __size[56l];
  // __align
  signed long int __align;
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

union anonymous$0
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

struct block_hdr
{
  // size
  unsigned long int size;
  // prered
  unsigned int prered;
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
  union anonymous$0 lock;
  // started
  union anonymous$0 started;
  // nr_entries
  unsigned long int nr_entries;
  // seq
  unsigned int *seq;
  // entries
  struct clock_entry *entries;
};

struct flist_head
{
  // next
  struct flist_head *next;
  // prev
  struct flist_head *prev;
};

struct elem
{
  // magic1
  unsigned int magic1;
  // list
  struct flist_head list;
  // magic2
  unsigned int magic2;
};

struct fio_mutex
{
  // lock
  union anonymous$0 lock;
  // cond
  union anonymous$1 cond;
  // value
  signed int value;
  // waiters
  signed int waiters;
  // magic
  signed int magic;
};

struct fio_rwlock
{
  // lock
  union anonymous$3 lock;
  // magic
  signed int magic;
};

struct pool
{
  // lock
  struct fio_mutex *lock;
  // map
  void *map;
  // bitmap
  unsigned int *bitmap;
  // free_blocks
  unsigned long int free_blocks;
  // nr_blocks
  unsigned long int nr_blocks;
  // next_non_full
  unsigned long int next_non_full;
  // mmap_size
  unsigned long int mmap_size;
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
// int_mask
// file smalloc.c line 36
static const signed int int_mask = (const signed int)(sizeof(signed int) /*4ul*/  - (unsigned long int)1);
// inv_cycles_per_usec
// file gettime.c line 19
static unsigned long int inv_cycles_per_usec;
// last_pool
// file smalloc.c line 58
static unsigned int last_pool;
// list
// file t/stest.c line 20
struct flist_head list;
// list
// file t/stest.c line 20
struct flist_head list = { .next=&list, .prev=&list };
// lock
// file smalloc.c line 59
static struct fio_rwlock *lock;
// max_cycles_for_mult
// file gettime.c line 20
static unsigned long int max_cycles_for_mult;
// mp
// file smalloc.c line 56
static struct pool mp[8l];
// nr_pools
// file smalloc.c line 57
static unsigned int nr_pools;
// smalloc_pool_size
// file smalloc.c line 34
unsigned int smalloc_pool_size = (unsigned int)(16 * 1024 * 1024);
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
  signed int return_value_fill_clock_gettime$1;
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
      return_value_fill_clock_gettime$1=fill_clock_gettime(&ts);
      if(!(return_value_fill_clock_gettime$1 >= 0))
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

// __fio_mutex_init
// file mutex.c line 33
extern signed int __fio_mutex_init(struct fio_mutex *mutex, signed int value)
{
  union anonymous attr;
  union anonymous cond;
  signed int ret;
  mutex->value = value;
  mutex->magic = (signed int)0x4d555445U;
  ret=pthread_mutexattr_init(&attr);
  if(!(ret == 0))
  {
    char *return_value_strerror$1;
    return_value_strerror$1=strerror(ret);
    log_err("pthread_mutexattr_init: %s\n", return_value_strerror$1);
    return ret;
  }

  ret=pthread_mutexattr_setpshared(&attr, 1);
  if(!(ret == 0))
  {
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(ret);
    log_err("pthread_mutexattr_setpshared: %s\n", return_value_strerror$2);
    return ret;
  }

  pthread_condattr_init(&cond);
  pthread_condattr_setpshared(&cond, 1);
  pthread_cond_init(&mutex->cond, &cond);
  ret=pthread_mutex_init(&mutex->lock, &attr);
  if(!(ret == 0))
  {
    char *return_value_strerror$3;
    return_value_strerror$3=strerror(ret);
    log_err("pthread_mutex_init: %s\n", return_value_strerror$3);
    return ret;
  }

  pthread_condattr_destroy(&cond);
  pthread_mutexattr_destroy(&attr);
  return 0;
}

// __fio_mutex_remove
// file mutex.c line 21
extern void __fio_mutex_remove(struct fio_mutex *mutex)
{
  /* assertion mutex->magic == 0x4d555445U */
  assert((unsigned int)mutex->magic == 0x4d555445U);
  pthread_cond_destroy(&mutex->cond);
}

// __flist_add
// file t/../flist.h line 46
static inline void __flist_add(struct flist_head *new_entry, struct flist_head *prev, struct flist_head *next)
{
  next->prev = new_entry;
  new_entry->next = next;
  new_entry->prev = prev;
  prev->next = new_entry;
}

// __flist_del
// file t/../flist.h line 83
static inline void __flist_del(struct flist_head *prev, struct flist_head *next)
{
  next->prev = prev;
  prev->next = next;
}

// __smalloc_pool
// file smalloc.c line 376
static void * __smalloc_pool(struct pool *pool, unsigned long int size)
{
  unsigned long int nr_blocks;
  unsigned int i;
  unsigned int offset;
  unsigned int last_idx;
  void *ret = (void *)0;
  pool_lock(pool);
  nr_blocks=size_to_blocks(size);
  if(pool->free_blocks >= nr_blocks)
  {
    i = (unsigned int)pool->next_non_full;
    last_idx = (unsigned int)0;
    offset = -1U;
    while(!((unsigned long int)i >= pool->nr_blocks))
    {
      unsigned int idx;
      if(pool->bitmap[(signed long int)i] == 4294967295u)
      {
        i = i + 1u;
        pool->next_non_full = (unsigned long int)i;
        last_idx = (unsigned int)0;
      }

      else
      {
        signed int return_value_find_next_zero$1;
        return_value_find_next_zero$1=find_next_zero((signed int)pool->bitmap[(signed long int)i], (signed int)last_idx);
        idx = (unsigned int)return_value_find_next_zero$1;
        signed int return_value_blocks_free$2;
        return_value_blocks_free$2=blocks_free(pool, i, idx, nr_blocks);
        if(return_value_blocks_free$2 == 0)
        {
          idx = idx + (unsigned int)nr_blocks;
          if(!((unsigned long int)idx >= sizeof(unsigned int) * 8 /*32ul*/ ))
            last_idx = idx;

          else
          {
            last_idx = (unsigned int)0;
            for( ; (unsigned long int)idx >= sizeof(unsigned int) * 8 /*32ul*/ ; idx = idx - (unsigned int)(sizeof(unsigned int) /*4ul*/  * (unsigned long int)8))
              i = i + 1u;
          }
        }

        else
        {
          set_blocks(pool, i, idx, nr_blocks);
          offset = (unsigned int)((unsigned long int)i * (unsigned long int)32 * sizeof(unsigned int) /*4ul*/  * (unsigned long int)8 + (unsigned long int)(idx * (unsigned int)32));
          break;
        }
      }
    }
    if(!((unsigned long int)i >= pool->nr_blocks))
    {
      pool->free_blocks = pool->free_blocks - nr_blocks;
      ret = pool->map + (signed long int)offset;
    }

  }


fail:
  ;
  pool_unlock(pool);
  return ret;
}

// add_pool
// file smalloc.c line 183
static signed int add_pool(struct pool *pool, unsigned int alloc_size)
{
  signed int bitmap_blocks;
  signed int mmap_flags;
  void *ptr;
  alloc_size = alloc_size + (unsigned int)sizeof(unsigned int) /*4ul*/ ;
  alloc_size = alloc_size + (unsigned int)sizeof(struct block_hdr) /*16ul*/ ;
  if(!(alloc_size >= 16777216u))
    alloc_size = (unsigned int)(16 * 1024 * 1024);

  alloc_size = (unsigned int)(((unsigned long int)alloc_size + (unsigned long int)32 * sizeof(unsigned int) /*4ul*/  * (unsigned long int)8) - (unsigned long int)1 & ~((unsigned long int)32 * sizeof(unsigned int) /*4ul*/  * (unsigned long int)8 - (unsigned long int)1));
  bitmap_blocks = (signed int)((unsigned long int)alloc_size / ((unsigned long int)32 * sizeof(unsigned int) /*4ul*/  * (unsigned long int)8));
  alloc_size = alloc_size + (unsigned int)((unsigned long int)bitmap_blocks * sizeof(unsigned int) /*4ul*/ );
  pool->mmap_size = (unsigned long int)alloc_size;
  pool->nr_blocks = (unsigned long int)bitmap_blocks;
  pool->free_blocks = (unsigned long int)(bitmap_blocks * 32);
  mmap_flags = 0x20;
  mmap_flags = mmap_flags | 0x01;
  ptr=mmap((void *)0, (unsigned long int)alloc_size, 0x1 | 0x2, mmap_flags, -1, (signed long int)0);
  if(!(ptr == (void *)-1))
  {
    memset(ptr, 0, (unsigned long int)alloc_size);
    pool->map = ptr;
    pool->bitmap = (unsigned int *)((void *)ptr + (signed long int)(pool->nr_blocks * (unsigned long int)32 * sizeof(unsigned int) /*4ul*/  * (unsigned long int)8));
    pool->lock=fio_mutex_init(1);
    if(pool->lock == ((struct fio_mutex *)NULL))
      goto out_fail;

    nr_pools = nr_pools + 1u;
    return 0;
  }

  else
  {

  out_fail:
    ;
    log_err("smalloc: failed adding pool\n");
    if(!(pool->map == NULL))
      munmap(pool->map, pool->mmap_size);

    return 1;
  }
}

// arch_ffz
// file arch/arch-x86_64.h line 45
static inline unsigned long int arch_ffz(unsigned long int bitmask)
{
  asm("bsf %1,%0" : "=r"(bitmask) : "r"(~bitmask) : );
  return bitmask;
}

// atomic32_inc_return
// file gettime.c line 477
static inline unsigned int atomic32_inc_return(unsigned int *seq)
{
  unsigned int return_value___sync_fetch_and_add$1;
  __CPROVER_atomic_begin();
  return_value___sync_fetch_and_add$1 = *seq;
  *seq = *seq + (unsigned int)1;
  FENCE(WRfence);
  __CPROVER_atomic_end();
  return (unsigned int)1 + return_value___sync_fetch_and_add$1;
}

// blocks_free
// file smalloc.c line 158
static signed int blocks_free(struct pool *pool, unsigned int pool_idx, unsigned int idx, unsigned long int nr_blocks)
{
  signed int return_value_blocks_iter$1;
  return_value_blocks_iter$1=blocks_iter(pool, pool_idx, idx, nr_blocks, mask_cmp);
  return return_value_blocks_iter$1;
}

// blocks_iter
// file smalloc.c line 103
static signed int blocks_iter(struct pool *pool, unsigned int pool_idx, unsigned int idx, unsigned long int nr_blocks, signed int (*func)(unsigned int *, unsigned int))
{
  if(!(nr_blocks == 0ul))
  {
    unsigned int this_blocks;
    unsigned int mask;
    unsigned int *map;
    if((unsigned long int)pool_idx >= pool->nr_blocks)
      return 0;

    map = &pool->bitmap[(signed long int)pool_idx];
    this_blocks = (unsigned int)nr_blocks;
    if((unsigned long int)(this_blocks + idx) >= 33ul)
    {
      this_blocks = (unsigned int)(sizeof(unsigned int) /*4ul*/  * (unsigned long int)8 - (unsigned long int)idx);
      idx = (unsigned int)(sizeof(unsigned int) /*4ul*/  * (unsigned long int)8 - (unsigned long int)this_blocks);
    }

    if((unsigned long int)this_blocks == sizeof(unsigned int) * 8 /*32ul*/ )
      mask = -1U;

    else
      mask = (1U << this_blocks) - (unsigned int)1 << idx;
    signed int return_value;
    return_value=func(map, mask);
    if(return_value == 0)
      return 0;

    nr_blocks = nr_blocks - (unsigned long int)this_blocks;
    idx = (unsigned int)0;
    pool_idx = pool_idx + 1u;
  }

  return 1;
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
  unsigned long int tmp_statement_expression$1;
  unsigned long int tmp_statement_expression$2;
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
      tmp_statement_expression$1 = _x < _y ? _x : _y;
      minc = tmp_statement_expression$1;
      unsigned long int calibrate_cpu_clock$$1$$2$$1$$2$$_x = cycles[(signed long int)i];
      unsigned long int calibrate_cpu_clock$$1$$2$$1$$2$$_y = maxc;
      (void)(&calibrate_cpu_clock$$1$$2$$1$$2$$_x == &calibrate_cpu_clock$$1$$2$$1$$2$$_y);
      tmp_statement_expression$2 = calibrate_cpu_clock$$1$$2$$1$$2$$_x > calibrate_cpu_clock$$1$$2$$1$$2$$_y ? calibrate_cpu_clock$$1$$2$$1$$2$$_x : calibrate_cpu_clock$$1$$2$$1$$2$$_y;
      maxc = tmp_statement_expression$2;
      double return_value_fmax$3;
      return_value_fmax$3=fmax(this, mean);
      double return_value_fmin$4;
      return_value_fmin$4=fmin(this, mean);
      if(!(return_value_fmax$3 + -return_value_fmin$4 > S))
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

// cleanup_pool
// file smalloc.c line 252
static void cleanup_pool(struct pool *pool)
{
  munmap(pool->map, pool->mmap_size);
  if(!(pool->lock == ((struct fio_mutex *)NULL)))
    fio_mutex_remove(pool->lock);

}

// clear_blocks
// file smalloc.c line 170
static void clear_blocks(struct pool *pool, unsigned int pool_idx, unsigned int idx, unsigned long int nr_blocks)
{
  blocks_iter(pool, pool_idx, idx, nr_blocks, mask_clear);
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
  struct anonymous$5 cpu_mask;
  unsigned int last_seq;
  signed int i;
  signed int return_value_fio_cpuset_init$3;
  return_value_fio_cpuset_init$3=fio_cpuset_init(&cpu_mask);
  if(!(return_value_fio_cpuset_init$3 == 0))
  {
    signed int __err;
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    __err = *return_value___errno_location$1;
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(__err);
    log_err("clock cpuset init failed: %s\n", return_value_strerror$2);
    goto err_out;
  }

  unsigned long int __cpu = (unsigned long int)t->cpu;
  if(!(__cpu / 8ul >= sizeof(struct anonymous$5) /*128ul*/ ))
    ((unsigned long int *)(&cpu_mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] = ((unsigned long int *)(&cpu_mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] | (unsigned long int)1 << __cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ );

  else
    (unsigned long int)0;
  signed int return_value_gettid$6;
  return_value_gettid$6=gettid();
  signed int return_value_sched_setaffinity$7;
  return_value_sched_setaffinity$7=sched_setaffinity(return_value_gettid$6, sizeof(struct anonymous$5) /*128ul*/ , &cpu_mask);
  if(return_value_sched_setaffinity$7 == -1)
  {
    signed int clock_thread_fn$$1$$3$$__err;
    signed int *return_value___errno_location$4;
    return_value___errno_location$4=__errno_location();
    clock_thread_fn$$1$$3$$__err = *return_value___errno_location$4;
    char *return_value_strerror$5;
    return_value_strerror$5=strerror(clock_thread_fn$$1$$3$$__err);
    log_err("clock setaffinity failed: %s\n", return_value_strerror$5);
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
  signed long int return_value_sysconf$1;
  return_value_sysconf$1=sysconf(84);
  return (unsigned int)return_value_sysconf$1;
}

// debug_init
// file t/debug.c line 11
void debug_init(void)
{
  f_err = stderr;
}

// do_rand_allocs
// file t/stest.c line 22
static signed int do_rand_allocs(void)
{
  unsigned int size;
  unsigned int nr;
  unsigned int rounds = (unsigned int)0;
  unsigned long int total;
  struct elem *e;
  unsigned int tmp_post$1;
  signed int return_value_flist_empty$4;
  struct elem *tmp_statement_expression$5;
  do
  {
    tmp_post$1 = rounds;
    rounds = rounds + 1u;
    if(tmp_post$1 >= 32u)
      break;

    total = (unsigned long int)0;
    nr = (unsigned int)total;
    while(!(total >= 1024UL))
    {
      signed int return_value_rand$2;
      return_value_rand$2=rand();
      size = (unsigned int)((unsigned long int)8 * sizeof(struct elem) /*32ul*/  + (unsigned long int)(signed int)(999.0 * ((double)return_value_rand$2 / ((double)2147483647 + 1.0))));
      void *return_value_smalloc$3;
      return_value_smalloc$3=smalloc((unsigned long int)size);
      e = (struct elem *)return_value_smalloc$3;
      if(e == ((struct elem *)NULL))
      {
        printf("fail at %lu, size %u\n", total, size);
        break;
      }

      e->magic1 = 0xa9b1c8d2;
      e->magic2 = 0xf0a1e9b3;
      total = total + (unsigned long int)size;
      flist_add_tail(&e->list, &list);
      nr = nr + 1u;
    }
    printf("Got items: %u\n", nr);
    do
    {
      return_value_flist_empty$4=flist_empty(&list);
      if(!(return_value_flist_empty$4 == 0))
        break;

      const struct flist_head *__mptr = list.next;
      tmp_statement_expression$5 = (struct elem *)((char *)__mptr - (signed long int)(unsigned long int)&((struct elem *)0)->list);
      e = tmp_statement_expression$5;
      /* assertion e->magic1 == 0xa9b1c8d2 */
      assert(e->magic1 == 0xa9b1c8d2);
      /* assertion e->magic2 == 0xf0a1e9b3 */
      assert(e->magic2 == 0xf0a1e9b3);
      flist_del(&e->list);
      sfree((void *)e);
    }
    while((_Bool)1);
  }
  while((_Bool)1);
  return 0;
}

// do_specific_alloc
// file t/stest.c line 61
static signed int do_specific_alloc(unsigned long int size)
{
  void *ptr;
  ptr=smalloc(size);
  sfree(ptr);
  return 0;
}

// fill_clock_gettime
// file gettime.c line 134
static signed int fill_clock_gettime(struct timespec *ts)
{
  signed int return_value_clock_gettime$1;
  return_value_clock_gettime$1=clock_gettime(4, ts);
  return return_value_clock_gettime$1;
}

// fill_redzone
// file smalloc.c line 286
static void fill_redzone(struct block_hdr *hdr)
{
  unsigned int *postred;
  void *return_value_postred_ptr$1;
  return_value_postred_ptr$1=postred_ptr(hdr);
  postred = (unsigned int *)return_value_postred_ptr$1;
  hdr->prered = 0xdeadbeefU;
  *postred = 0x5aa55aa5U;
}

// find_next_zero
// file smalloc.c line 176
static signed int find_next_zero(signed int word, signed int start)
{
  /* assertion word != -1U */
  assert((unsigned int)word != -1U);
  word = word >> start;
  unsigned long int return_value_arch_ffz$1;
  return_value_arch_ffz$1=arch_ffz((unsigned long int)word);
  return (signed int)(return_value_arch_ffz$1 + (unsigned long int)start);
}

// fio_clock_init
// file gettime.c line 361
extern void fio_clock_init(void)
{
  signed int return_value_fio_monotonic_clocktest$2;
  if(!(fio_clock_source == fio_clock_source_inited))
  {
    fio_clock_source_inited = fio_clock_source;
    signed int return_value_calibrate_cpu_clock$1;
    return_value_calibrate_cpu_clock$1=calibrate_cpu_clock();
    if(!(return_value_calibrate_cpu_clock$1 == 0))
      tsc_reliable = 0;

    if(!(tsc_reliable == 0))
    {
      if(fio_clock_source_set == 0)
      {
        return_value_fio_monotonic_clocktest$2=fio_monotonic_clocktest(0);
        if(return_value_fio_monotonic_clocktest$2 == 0)
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
static inline signed int fio_cpuset_exit(struct anonymous$5 *mask)
{
  return 0;
}

// fio_cpuset_init
// file os/os-linux.h line 68
static inline signed int fio_cpuset_init(struct anonymous$5 *mask)
{
  do
    __builtin_memset((void *)mask, 0, sizeof(struct anonymous$5) /*128ul*/ );
  while((_Bool)0);
  return 0;
}

// fio_gettime
// file gettime.c line 214
extern void fio_gettime(struct timeval *tp, void *caller)
{
  signed int return_value_fio_gettime_offload$1;
  return_value_fio_gettime_offload$1=fio_gettime_offload(tp);
  if(return_value_fio_gettime_offload$1 == 0)
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

  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)nr_cpus * sizeof(struct clock_thread) /*120ul*/ );
  cthreads = (struct clock_thread *)return_value_malloc$1;
  tentries = nr_entries * (unsigned long int)nr_cpus;
  void *return_value_malloc$2;
  return_value_malloc$2=malloc(tentries * sizeof(struct clock_entry) /*16ul*/ );
  entries = (struct clock_entry *)return_value_malloc$2;
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
    pthread_mutex_init(&t->lock, (const union anonymous *)(void *)0);
    pthread_mutex_init(&t->started, (const union anonymous *)(void *)0);
    pthread_mutex_lock(&t->lock);
    signed int return_value_pthread_create$3;
    return_value_pthread_create$3=pthread_create(&t->thread, (const union pthread_attr_t *)(void *)0, clock_thread_fn, (void *)t);
    if(!(return_value_pthread_create$3 == 0))
    {
      failed = failed + 1ul;
      nr_cpus = i;
      break;
    }

  }
  i = (unsigned int)0;
  for( ; !(i >= nr_cpus); i = i + 1u)
  {
    struct clock_thread *fio_monotonic_clocktest$$1$$4$$1$$t = &cthreads[(signed long int)i];
    pthread_mutex_lock(&fio_monotonic_clocktest$$1$$4$$1$$t->started);
  }
  i = (unsigned int)0;
  for( ; !(i >= nr_cpus); i = i + 1u)
  {
    struct clock_thread *fio_monotonic_clocktest$$1$$5$$1$$t = &cthreads[(signed long int)i];
    pthread_mutex_unlock(&fio_monotonic_clocktest$$1$$5$$1$$t->lock);
  }
  i = (unsigned int)0;
  for( ; !(i >= nr_cpus); i = i + 1u)
  {
    struct clock_thread *fio_monotonic_clocktest$$1$$6$$1$$t = &cthreads[(signed long int)i];
    void *ret;
    pthread_join(fio_monotonic_clocktest$$1$$6$$1$$t->thread, &ret);
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

// fio_mutex_down
// file mutex.c line 152
extern void fio_mutex_down(struct fio_mutex *mutex)
{
  /* assertion mutex->magic == 0x4d555445U */
  assert((unsigned int)mutex->magic == 0x4d555445U);
  pthread_mutex_lock(&mutex->lock);
  for( ; mutex->value == 0; mutex->waiters = mutex->waiters - 1)
  {
    mutex->waiters = mutex->waiters + 1;
    pthread_cond_wait(&mutex->cond, &mutex->lock);
  }
  mutex->value = mutex->value - 1;
  pthread_mutex_unlock(&mutex->lock);
}

// fio_mutex_down_timeout
// file mutex.c line 100
extern signed int fio_mutex_down_timeout(struct fio_mutex *mutex, unsigned int seconds)
{
  struct timeval tv_s;
  struct timespec t;
  signed int ret = 0;
  /* assertion mutex->magic == 0x4d555445U */
  assert((unsigned int)mutex->magic == 0x4d555445U);
  gettimeofday(&tv_s, (struct timezone *)(void *)0);
  t.tv_sec = tv_s.tv_sec + (signed long int)seconds;
  t.tv_nsec = tv_s.tv_usec * (signed long int)1000;
  pthread_mutex_lock(&mutex->lock);
  signed int return_value_mutex_timed_out$1;
  while(mutex->value == 0)
  {
    if(!(ret == 0))
      break;

    mutex->waiters = mutex->waiters + 1;
    ret=pthread_cond_timedwait(&mutex->cond, &mutex->lock, &t);
    if(ret == 110)
    {
      return_value_mutex_timed_out$1=mutex_timed_out(&tv_s, seconds);
      if(return_value_mutex_timed_out$1 == 0)
        ret = 0;

    }

    mutex->waiters = mutex->waiters - 1;
  }
  if(ret == 0)
  {
    mutex->value = mutex->value - 1;
    pthread_mutex_unlock(&mutex->lock);
  }

  return ret;
}

// fio_mutex_down_trylock
// file mutex.c line 136
extern signed int fio_mutex_down_trylock(struct fio_mutex *mutex)
{
  signed int ret = 1;
  /* assertion mutex->magic == 0x4d555445U */
  assert((unsigned int)mutex->magic == 0x4d555445U);
  pthread_mutex_lock(&mutex->lock);
  if(!(mutex->value == 0))
  {
    mutex->value = mutex->value - 1;
    ret = 0;
  }

  pthread_mutex_unlock(&mutex->lock);
  return ret;
}

// fio_mutex_init
// file mutex.c line 76
extern struct fio_mutex * fio_mutex_init(signed int value)
{
  struct fio_mutex *mutex = (struct fio_mutex *)(void *)0;
  void *return_value_mmap$1;
  return_value_mmap$1=mmap((void *)0, sizeof(struct fio_mutex) /*104ul*/ , 0x1 | 0x2, 0x20 | 0x01, -1, (signed long int)0);
  mutex = (struct fio_mutex *)(void *)return_value_mmap$1;
  if(mutex == (struct fio_mutex *)-1)
  {
    perror("mmap mutex");
    return (struct fio_mutex *)(void *)0;
  }

  else
  {
    signed int return_value___fio_mutex_init$2;
    return_value___fio_mutex_init$2=__fio_mutex_init(mutex, value);
    if(return_value___fio_mutex_init$2 == 0)
      return mutex;

    else
    {
      fio_mutex_remove(mutex);
      return (struct fio_mutex *)(void *)0;
    }
  }
}

// fio_mutex_remove
// file mutex.c line 27
extern void fio_mutex_remove(struct fio_mutex *mutex)
{
  __fio_mutex_remove(mutex);
  munmap((void *)mutex, sizeof(struct fio_mutex) /*104ul*/ );
}

// fio_mutex_up
// file mutex.c line 168
extern void fio_mutex_up(struct fio_mutex *mutex)
{
  signed int do_wake = 0;
  /* assertion mutex->magic == 0x4d555445U */
  assert((unsigned int)mutex->magic == 0x4d555445U);
  pthread_mutex_lock(&mutex->lock);
  asm("lfence" :  :  : "memory");
  if(mutex->value == 0)
  {
    if(!(mutex->waiters == 0))
      do_wake = 1;

  }

  mutex->value = mutex->value + 1;
  pthread_mutex_unlock(&mutex->lock);
  if(!(do_wake == 0))
    pthread_cond_signal(&mutex->cond);

}

// fio_rwlock_init
// file mutex.c line 209
extern struct fio_rwlock * fio_rwlock_init(void)
{
  struct fio_rwlock *fio_rwlock_init$$1$$lock;
  union anonymous$4 attr;
  signed int ret;
  void *return_value_mmap$1;
  return_value_mmap$1=mmap((void *)0, sizeof(struct fio_rwlock) /*64ul*/ , 0x1 | 0x2, 0x20 | 0x01, -1, (signed long int)0);
  fio_rwlock_init$$1$$lock = (struct fio_rwlock *)(void *)return_value_mmap$1;
  if(fio_rwlock_init$$1$$lock == (struct fio_rwlock *)-1)
  {
    perror("mmap rwlock");
    fio_rwlock_init$$1$$lock = (struct fio_rwlock *)(void *)0;
  }

  else
  {
    fio_rwlock_init$$1$$lock->magic = (signed int)0x52574c4fU;
    ret=pthread_rwlockattr_init(&attr);
    if(!(ret == 0))
    {
      char *return_value_strerror$2;
      return_value_strerror$2=strerror(ret);
      log_err("pthread_rwlockattr_init: %s\n", return_value_strerror$2);
      goto err;
    }

    ret=pthread_rwlockattr_setpshared(&attr, 1);
    if(!(ret == 0))
    {
      char *return_value_strerror$3;
      return_value_strerror$3=strerror(ret);
      log_err("pthread_rwlockattr_setpshared: %s\n", return_value_strerror$3);
      goto destroy_attr;
    }

    ret=pthread_rwlock_init(&fio_rwlock_init$$1$$lock->lock, &attr);
    if(!(ret == 0))
    {
      char *return_value_strerror$4;
      return_value_strerror$4=strerror(ret);
      log_err("pthread_rwlock_init: %s\n", return_value_strerror$4);
      goto destroy_attr;
    }

    pthread_rwlockattr_destroy(&attr);
    return fio_rwlock_init$$1$$lock;

  destroy_attr:
    ;
    pthread_rwlockattr_destroy(&attr);
  }

err:
  ;
  if(!(fio_rwlock_init$$1$$lock == ((struct fio_rwlock *)NULL)))
    fio_rwlock_remove(fio_rwlock_init$$1$$lock);

  return (struct fio_rwlock *)(void *)0;
}

// fio_rwlock_read
// file mutex.c line 191
extern void fio_rwlock_read(struct fio_rwlock *lock)
{
  /* assertion lock->magic == 0x52574c4fU */
  assert((unsigned int)lock->magic == 0x52574c4fU);
  pthread_rwlock_rdlock(&lock->lock);
}

// fio_rwlock_remove
// file mutex.c line 203
extern void fio_rwlock_remove(struct fio_rwlock *lock)
{
  /* assertion lock->magic == 0x52574c4fU */
  assert((unsigned int)lock->magic == 0x52574c4fU);
  munmap((void *)lock, sizeof(struct fio_rwlock) /*64ul*/ );
}

// fio_rwlock_unlock
// file mutex.c line 197
extern void fio_rwlock_unlock(struct fio_rwlock *lock)
{
  /* assertion lock->magic == 0x52574c4fU */
  assert((unsigned int)lock->magic == 0x52574c4fU);
  pthread_rwlock_unlock(&lock->lock);
}

// fio_rwlock_write
// file mutex.c line 185
extern void fio_rwlock_write(struct fio_rwlock *lock)
{
  /* assertion lock->magic == 0x52574c4fU */
  assert((unsigned int)lock->magic == 0x52574c4fU);
  pthread_rwlock_wrlock(&lock->lock);
}

// flist_add_tail
// file t/../flist.h line 70
static inline void flist_add_tail(struct flist_head *new_entry, struct flist_head *head)
{
  __flist_add(new_entry, head->prev, head);
}

// flist_del
// file t/../flist.h line 96
static inline void flist_del(struct flist_head *entry)
{
  __flist_del(entry->prev, entry->next);
  entry->next = (struct flist_head *)(void *)0;
  entry->prev = (struct flist_head *)(void *)0;
}

// flist_empty
// file t/../flist.h line 117
static inline signed int flist_empty(struct flist_head *head)
{
  return (signed int)(head->next == head);
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
  signed long int return_value_syscall$1;
  return_value_syscall$1=syscall((signed long int)186);
  return (signed int)return_value_syscall$1;
}

// global_read_lock
// file smalloc.c line 71
static inline void global_read_lock(void)
{
  fio_rwlock_read(lock);
}

// global_read_unlock
// file smalloc.c line 76
static inline void global_read_unlock(void)
{
  fio_rwlock_unlock(lock);
}

// global_write_lock
// file smalloc.c line 81
static inline void global_write_lock(void)
{
  fio_rwlock_write(lock);
}

// global_write_unlock
// file smalloc.c line 86
static inline void global_write_unlock(void)
{
  fio_rwlock_unlock(lock);
}

// log_err
// file t/log.c line 5
signed int log_err(const char *format, ...)
{
  char buffer[1024l];
  void **args;
  unsigned long int len;
  args = (void **)&format;
  signed int return_value_vsnprintf$1;
  return_value_vsnprintf$1=vsnprintf(buffer, sizeof(char [1024l]) /*1024ul*/ , format, args);
  len = (unsigned long int)return_value_vsnprintf$1;
  args = ((void **)NULL);
  unsigned long int tmp_statement_expression$2;
  unsigned long int _x = len;
  unsigned long int _y = sizeof(char [1024l]) /*1024ul*/  - (unsigned long int)1;
  (void)(&_x == &_y);
  tmp_statement_expression$2 = _x < _y ? _x : _y;
  len = tmp_statement_expression$2;
  unsigned long int return_value_fwrite$3;
  return_value_fwrite$3=fwrite((const void *)buffer, len, (unsigned long int)1, stderr);
  return (signed int)return_value_fwrite$3;
}

// log_info
// file t/log.c line 19
signed int log_info(const char *format, ...)
{
  char buffer[1024l];
  void **args;
  unsigned long int len;
  args = (void **)&format;
  signed int return_value_vsnprintf$1;
  return_value_vsnprintf$1=vsnprintf(buffer, sizeof(char [1024l]) /*1024ul*/ , format, args);
  len = (unsigned long int)return_value_vsnprintf$1;
  args = ((void **)NULL);
  unsigned long int tmp_statement_expression$2;
  unsigned long int _x = len;
  unsigned long int _y = sizeof(char [1024l]) /*1024ul*/  - (unsigned long int)1;
  (void)(&_x == &_y);
  tmp_statement_expression$2 = _x < _y ? _x : _y;
  len = tmp_statement_expression$2;
  unsigned long int return_value_fwrite$3;
  return_value_fwrite$3=fwrite((const void *)buffer, len, (unsigned long int)1, stdout);
  return (signed int)return_value_fwrite$3;
}

// main
// file t/stest.c line 70
signed int main(signed int argc, char **argv)
{
  sinit();
  debug_init();
  do_rand_allocs();
  do_specific_alloc((unsigned long int)671386584);
  scleanup();
  return 0;
}

// mask_clear
// file smalloc.c line 144
static signed int mask_clear(unsigned int *map, unsigned int mask)
{
  /* assertion (*map & mask) == mask */
  assert((*map & mask) == mask);
  *map = *map & ~mask;
  return 1;
}

// mask_cmp
// file smalloc.c line 139
static signed int mask_cmp(unsigned int *map, unsigned int mask)
{
  return (signed int)!((*map & mask) != 0u);
}

// mask_set
// file smalloc.c line 151
static signed int mask_set(unsigned int *map, unsigned int mask)
{
  /* assertion !(*map & mask) */
  assert(!((*map & mask) != 0u));
  *map = *map | mask;
  return 1;
}

// memset
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset(void *__dest, signed int __ch, unsigned long int __len)
{
  void *return_value___builtin___memset_chk$1;
  return_value___builtin___memset_chk$1=__builtin___memset_chk(__dest, __ch, __len, 18446744073709551615ul);
  return return_value___builtin___memset_chk$1;
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
  unsigned long int return_value_mtime_since$1;
  return_value_mtime_since$1=mtime_since(s, &t);
  return return_value_mtime_since$1;
}

// mutex_timed_out
// file mutex.c line 95
static signed int mutex_timed_out(struct timeval *t, unsigned int seconds)
{
  unsigned long int return_value_mtime_since_now$1;
  return_value_mtime_since_now$1=mtime_since_now(t);
  return (signed int)(return_value_mtime_since_now$1 >= (unsigned long int)(seconds * (unsigned int)1000));
}

// pool_lock
// file smalloc.c line 61
static inline void pool_lock(struct pool *pool)
{
  fio_mutex_down(pool->lock);
}

// pool_unlock
// file smalloc.c line 66
static inline void pool_unlock(struct pool *pool)
{
  fio_mutex_up(pool->lock);
}

// postred_ptr
// file smalloc.c line 276
static void * postred_ptr(struct block_hdr *hdr)
{
  unsigned long int ptr = ((unsigned long int)hdr + hdr->size) - sizeof(unsigned int) /*4ul*/ ;
  ptr = ptr + (unsigned long int)int_mask & (unsigned long int)~int_mask;
  return (void *)ptr;
}

// printf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf(const char * restrict __fmt, ...)
{
  void *return_value___builtin_va_arg_pack$1;
  return_value___builtin_va_arg_pack$1=__builtin_va_arg_pack();
  signed int return_value___printf_chk$2;
  return_value___printf_chk$2=__printf_chk(2 - 1, __fmt, return_value___builtin_va_arg_pack$1);
  return return_value___printf_chk$2;
}

// ptr_valid
// file smalloc.c line 91
static inline signed int ptr_valid(struct pool *pool, void *ptr)
{
  unsigned int pool_size = (unsigned int)(pool->nr_blocks * (unsigned long int)32 * sizeof(unsigned int) /*4ul*/  * (unsigned long int)8);
  _Bool tmp_if_expr$1;
  if(ptr >= pool->map)
    tmp_if_expr$1 = ptr < pool->map + (signed long int)pool_size ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  return (signed int)tmp_if_expr$1;
}

// scalloc
// file smalloc.c line 493
extern void * scalloc(unsigned long int nmemb, unsigned long int size)
{
  void *return_value_smalloc$1;
  return_value_smalloc$1=smalloc(nmemb * size);
  return return_value_smalloc$1;
}

// scleanup
// file t/../smalloc.h line 9
extern void scleanup(void)
{
  unsigned int i = (unsigned int)0;
  for( ; !(i >= nr_pools); i = i + 1u)
    cleanup_pool(&mp[(signed long int)i]);
  if(!(lock == ((struct fio_rwlock *)NULL)))
    fio_rwlock_remove(lock);

}

// set_blocks
// file smalloc.c line 164
static void set_blocks(struct pool *pool, unsigned int pool_idx, unsigned int idx, unsigned long int nr_blocks)
{
  blocks_iter(pool, pool_idx, idx, nr_blocks, mask_set);
}

// sfree
// file t/../smalloc.h line 6
extern void sfree(void *ptr)
{
  struct pool *pool = (struct pool *)(void *)0;
  unsigned int i;
  if(!(ptr == NULL))
  {
    global_read_lock();
    i = (unsigned int)0;
    for( ; !(i >= nr_pools); i = i + 1u)
    {
      signed int return_value_ptr_valid$1;
      return_value_ptr_valid$1=ptr_valid(&mp[(signed long int)i], ptr);
      if(!(return_value_ptr_valid$1 == 0))
      {
        pool = &mp[(signed long int)i];
        break;
      }

    }
    global_read_unlock();
    if(!(pool == ((struct pool *)NULL)))
      sfree_pool(pool, ptr);

    else
      log_err("smalloc: ptr %p not from smalloc pool\n", ptr);
  }

}

// sfree_check_redzone
// file smalloc.c line 294
static void sfree_check_redzone(struct block_hdr *hdr)
{
  unsigned int *postred;
  void *return_value_postred_ptr$1;
  return_value_postred_ptr$1=postred_ptr(hdr);
  postred = (unsigned int *)return_value_postred_ptr$1;
  if(!(hdr->prered == 0xdeadbeefU))
  {
    log_err("smalloc pre redzone destroyed!\n ptr=%p, prered=%x, expected %x\n", hdr, hdr->prered, 0xdeadbeefU);
    /* assertion 0 */
    assert(0 != 0);
  }

  if(!(*postred == 0x5aa55aa5U))
  {
    log_err("smalloc post redzone destroyed!\n  ptr=%p, postred=%x, expected %x\n", hdr, *postred, 0x5aa55aa5U);
    /* assertion 0 */
    assert(0 != 0);
  }

}

// sfree_pool
// file smalloc.c line 321
static void sfree_pool(struct pool *pool, void *ptr)
{
  struct block_hdr *hdr;
  unsigned int i;
  unsigned int idx;
  unsigned long int offset;
  if(!(ptr == NULL))
  {
    ptr = ptr - (signed long int)sizeof(struct block_hdr) /*16ul*/ ;
    hdr = (struct block_hdr *)ptr;
    signed int return_value_ptr_valid$1;
    return_value_ptr_valid$1=ptr_valid(pool, ptr);
    /* assertion ptr_valid(pool, ptr) */
    assert(return_value_ptr_valid$1 != 0);
    sfree_check_redzone(hdr);
    offset = (unsigned long int)(ptr - pool->map);
    i = (unsigned int)(offset / ((unsigned long int)32 * sizeof(unsigned int) /*4ul*/  * (unsigned long int)8));
    idx = (unsigned int)((offset % ((unsigned long int)32 * sizeof(unsigned int) /*4ul*/  * (unsigned long int)8)) / (unsigned long int)32);
    pool_lock(pool);
    unsigned long int return_value_size_to_blocks$2;
    return_value_size_to_blocks$2=size_to_blocks(hdr->size);
    clear_blocks(pool, i, idx, return_value_size_to_blocks$2);
    if(!((unsigned long int)i >= pool->next_non_full))
      pool->next_non_full = (unsigned long int)i;

    unsigned long int return_value_size_to_blocks$3;
    return_value_size_to_blocks$3=size_to_blocks(hdr->size);
    pool->free_blocks = pool->free_blocks + return_value_size_to_blocks$3;
    pool_unlock(pool);
  }

}

// sinit
// file t/../smalloc.h line 8
extern void sinit(void)
{
  signed int i;
  signed int ret;
  lock=fio_rwlock_init();
  i = 0;
  for( ; !(i >= 8); i = i + 1)
  {
    ret=add_pool(&mp[(signed long int)i], (unsigned int)(16 * 1024 * 1024));
    if(!(ret == 0))
      break;

  }
  /* assertion i */
  assert(i != 0);
}

// size_to_blocks
// file smalloc.c line 98
static inline unsigned long int size_to_blocks(unsigned long int size)
{
  return ((size + (unsigned long int)32) - (unsigned long int)1) / (unsigned long int)32;
}

// smalloc
// file t/../smalloc.h line 4
extern void * smalloc(unsigned long int size)
{
  unsigned int i;
  unsigned int end_pool;
  if(!(size == (unsigned long int)(unsigned int)size))
    return (void *)0;

  else
  {
    global_write_lock();
    i = last_pool;
    end_pool = nr_pools;

  __CPROVER_DUMP_L2:
    ;
    while((_Bool)1)
    {
      if(!(i >= end_pool))
      {
        void *ptr;
        ptr=smalloc_pool(&mp[(signed long int)i], size);
        if(!(ptr == NULL))
        {
          last_pool = i;
          global_write_unlock();
          return ptr;
        }

        i = i + 1u;
        goto __CPROVER_DUMP_L2;
      }

      if(!(last_pool == 0u))
      {
        end_pool = last_pool;
        i = (unsigned int)0;
        last_pool = i;
      }

      else
        break;
    }
    global_write_unlock();
    return (void *)0;
  }
}

// smalloc_pool
// file smalloc.c line 431
static void * smalloc_pool(struct pool *pool, unsigned long int size)
{
  unsigned long int alloc_size = size + sizeof(struct block_hdr) /*16ul*/ ;
  void *ptr;
  alloc_size = alloc_size + sizeof(unsigned int) /*4ul*/ ;
  alloc_size = alloc_size + (unsigned long int)int_mask & (unsigned long int)~int_mask;
  ptr=__smalloc_pool(pool, alloc_size);
  if(!(ptr == NULL))
  {
    struct block_hdr *hdr = (struct block_hdr *)ptr;
    hdr->size = alloc_size;
    fill_redzone(hdr);
    ptr = ptr + (signed long int)sizeof(struct block_hdr) /*16ul*/ ;
    memset(ptr, 0, size);
  }

  return ptr;
}

// smalloc_strdup
// file smalloc.c line 498
extern char * smalloc_strdup(const char *str)
{
  char *ptr = (char *)(void *)0;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  void *return_value_smalloc$2;
  return_value_smalloc$2=smalloc(return_value_strlen$1 + (unsigned long int)1);
  ptr = (char *)return_value_smalloc$2;
  if(!(ptr == ((char *)NULL)))
    strcpy(ptr, str);

  return ptr;
}

// strcpy
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 108
static inline char * strcpy(char * restrict __dest, const char * restrict __src)
{
  char *return_value___builtin___strcpy_chk$1;
  return_value___builtin___strcpy_chk$1=__builtin___strcpy_chk(__dest, __src, 18446744073709551615ul);
  return return_value___builtin___strcpy_chk$1;
}

// time_since_now
// file gettime.c line 449
extern unsigned long int time_since_now(struct timeval *s)
{
  unsigned long int return_value_mtime_since_now$1;
  return_value_mtime_since_now$1=mtime_since_now(s);
  return return_value_mtime_since_now$1 / (unsigned long int)1000;
}

// utime_since
// file gettime.c line 388
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
  unsigned long int return_value_utime_since$1;
  return_value_utime_since$1=utime_since(s, &t);
  return return_value_utime_since$1;
}

// vsnprintf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 74
static inline signed int vsnprintf(char * restrict __s, unsigned long int __n, const char * restrict __fmt, void **__ap)
{
  signed int return_value___builtin___vsnprintf_chk$1;
  return_value___builtin___vsnprintf_chk$1=__builtin___vsnprintf_chk(__s, __n, 2 - 1, 18446744073709551615ul, __fmt, __ap);
  return return_value___builtin___vsnprintf_chk$1;
}

