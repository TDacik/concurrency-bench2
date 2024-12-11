// tag-#anon#ST[*{SYM#tag-work#}_SYM#tag-work#_'stqe_next'|]
// file testing/witem_cache/../../src/private.h line 138
struct anonymous_4;

// tag-#anon#ST[*{SYM#tag-work#}_SYM#tag-work#_'stqh_first'||*{*{SYM#tag-work#}_SYM#tag-work#_}_*{SYM#tag-work#}_SYM#tag-work#__'stqh_last'|]
// file testing/witem_cache/../../src/private.h line 154
struct anonymous_2;

// tag-#anon#ST[ARR16{U64}_U64_'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous_6;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_0;

// tag-#anon#ST[U32'sig'||S32'queueprio'||S32'overcommit'||ARR13{U32}_U32_'pad'|]
// file ./include/pthread_workqueue.h line 43
struct anonymous;

// tag-#anon#ST[vU32'runqueue_length'||vU32'count'||vU32'idle'||U32'_pad0'||SYM#tag-#anon#UN[ARR32{S8}_S8_'__size'||S64'__align'|]#'sb_sem'||U32'sb_suspend'||U32'_pad1'|]
// file src/posix/manager.c line 78
struct anonymous_5;

// tag-#anon#UN[ARR32{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 239
union anonymous_3;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_8;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_1;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_7;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__dirstream
// file /usr/include/dirent.h line 127
struct __dirstream;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-__rlimit_resource
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 31
enum __rlimit_resource { RLIMIT_CPU=0, RLIMIT_FSIZE=1, RLIMIT_DATA=2, RLIMIT_STACK=3, RLIMIT_CORE=4, __RLIMIT_RSS=5, RLIMIT_NOFILE=7, __RLIMIT_OFILE=7, RLIMIT_AS=9, __RLIMIT_NPROC=6, __RLIMIT_MEMLOCK=8, __RLIMIT_LOCKS=10, __RLIMIT_SIGPENDING=11, __RLIMIT_MSGQUEUE=12, __RLIMIT_NICE=13, __RLIMIT_RTPRIO=14, __RLIMIT_RTTIME=15, __RLIMIT_NLIMITS=16, __RLIM_NLIMITS=16 };

// tag-_pthread_workqueue
// file ./include/pthread_workqueue.h line 39
struct _pthread_workqueue;

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rlimit
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 139
struct rlimit;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

// tag-work
// file testing/witem_cache/../../src/private.h line 137
struct work;

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef FENCE
#define FENCE(x) ((void)0)
#endif

// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __sync_add_and_fetch
// file gcc_builtin_headers_generic.h line 99
signed int __sync_add_and_fetch();
// __sync_and_and_fetch
// file gcc_builtin_headers_generic.h line 102
signed int __sync_and_and_fetch();
// __sync_or_and_fetch
// file gcc_builtin_headers_generic.h line 101
signed int __sync_or_and_fetch();
// __sync_sub_and_fetch
// file gcc_builtin_headers_generic.h line 100
signed int __sync_sub_and_fetch();
// __sync_synchronize
// file gcc_builtin_headers_generic.h line 107
void __sync_synchronize();
// _read_file
// file src/linux/thread_info.c line 75
static signed int _read_file(const char *path, char *result);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// additem
// file testing/witem_cache/test.c line 50
void additem(void (*func)(void *), void *arg);
// additem::func_object
//
void func_object(void *);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// clock_gettime
// file /usr/include/time.h line 342
extern signed int clock_gettime(signed int, struct timespec *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closedir
// file /usr/include/dirent.h line 149
extern signed int closedir(struct __dirstream *);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// feedback
// file testing/witem_cache/test.c line 62
void feedback(void *arg);
// ffs
// file /usr/include/string.h line 522
extern signed int ffs(signed int);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// get_process_limit
// file src/posix/manager.c line 795
static unsigned int get_process_limit(void);
// get_runqueue_length
// file src/posix/manager.c line 854
static unsigned int get_runqueue_length(void);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// getloadavg
// file /usr/include/stdlib.h line 950
extern signed int getloadavg(double *, signed int);
// getrlimit
// file /usr/include/x86_64-linux-gnu/sys/resource.h line 50
extern signed int getrlimit(enum __rlimit_resource, struct rlimit *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// linux_get_runqueue_length
// file ./src/linux/platform.h line 35
unsigned int linux_get_runqueue_length(void);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// manager_init
// file src/private.h line 162
signed int manager_init(void);
// manager_main
// file src/posix/manager.c line 539
static void * manager_main(void *unused);
// manager_peek
// file src/private.h line 163
unsigned long int manager_peek(const char *key);
// manager_reinit
// file src/posix/manager.c line 127
static void manager_reinit(void);
// manager_resume
// file src/private.h line 165
void manager_resume(void);
// manager_start
// file src/posix/manager.c line 694
static void manager_start(void);
// manager_suspend
// file src/private.h line 164
void manager_suspend(void);
// manager_workqueue_additem
// file src/private.h line 167
void manager_workqueue_additem(struct _pthread_workqueue *workq, struct work *witem);
// manager_workqueue_create
// file src/private.h line 166
void manager_workqueue_create(struct _pthread_workqueue *workq);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// nanosleep
// file /usr/include/time.h line 334
extern signed int nanosleep(struct timespec *, struct timespec *);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// overcommit_worker_main
// file src/posix/manager.c line 244
static void * overcommit_worker_main(void *unused);
// overcommit_worker_main::1::func_object
//
void func_object(void *);
// pause
// file /usr/include/unistd.h line 469
extern signed int pause(void);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_atfork
// file /usr/include/pthread.h line 1147
extern signed int pthread_atfork(void (*)(void), void (*)(void), void (*)(void));
// pthread_attr_init
// file /usr/include/pthread.h line 289
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_attr_setdetachstate
// file /usr/include/pthread.h line 301
extern signed int pthread_attr_setdetachstate(union pthread_attr_t *, signed int);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous_1 *, const union anonymous_8 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_1 *);
// pthread_cond_timedwait
// file /usr/include/pthread.h line 1002
extern signed int pthread_cond_timedwait(union anonymous_1 *, union anonymous_7 *, struct timespec *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_1 *, union anonymous_7 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_exit
// file /usr/include/pthread.h line 244
extern void pthread_exit(void *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_7 *, const union anonymous_8 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_7 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_7 *);
// pthread_sigmask
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 30
extern signed int pthread_sigmask(signed int, const struct anonymous_6 *, struct anonymous_6 *);
// pthread_spin_init
// file /usr/include/pthread.h line 1046
extern signed int pthread_spin_init(volatile signed int *, signed int);
// pthread_spin_lock
// file /usr/include/pthread.h line 1054
extern signed int pthread_spin_lock(volatile signed int *);
// pthread_spin_unlock
// file /usr/include/pthread.h line 1062
extern signed int pthread_spin_unlock(volatile signed int *);
// pthread_workqueue_additem_np
// file ./include/pthread_workqueue.h line 63
signed int pthread_workqueue_additem_np(struct _pthread_workqueue *workq, void (*workitem_func)(void *), void *workitem_arg, void **itemhandlep, unsigned int *gencountp);
// pthread_workqueue_additem_np::workitem_func_object
//
void workitem_func_object(void *);
// pthread_workqueue_attr_destroy_np
// file src/api.c line 151
signed int pthread_workqueue_attr_destroy_np(struct anonymous *attr);
// pthread_workqueue_attr_getovercommit_np
// file src/api.c line 160
signed int pthread_workqueue_attr_getovercommit_np(const struct anonymous *attr, signed int *ocommp);
// pthread_workqueue_attr_getqueuepriority_np
// file src/api.c line 182
signed int pthread_workqueue_attr_getqueuepriority_np(struct anonymous *attr, signed int *qpriop);
// pthread_workqueue_attr_init_np
// file src/api.c line 142
signed int pthread_workqueue_attr_init_np(struct anonymous *attr);
// pthread_workqueue_attr_setovercommit_np
// file src/api.c line 171
signed int pthread_workqueue_attr_setovercommit_np(struct anonymous *attr, signed int ocomm);
// pthread_workqueue_attr_setqueuepriority_np
// file src/api.c line 193
signed int pthread_workqueue_attr_setqueuepriority_np(struct anonymous *attr, signed int qprio);
// pthread_workqueue_create_np
// file ./include/pthread_workqueue.h line 60
signed int pthread_workqueue_create_np(struct _pthread_workqueue **workqp, const struct anonymous *attr);
// pthread_workqueue_init_np
// file src/api.c line 46
signed int pthread_workqueue_init_np(void);
// pthread_workqueue_peek_np
// file src/api.c line 212
unsigned long int pthread_workqueue_peek_np(const char *key);
// pthread_workqueue_resume_np
// file src/api.c line 226
void pthread_workqueue_resume_np(void);
// pthread_workqueue_suspend_np
// file src/api.c line 218
void pthread_workqueue_suspend_np(void);
// ptwq_set_current_thread_priority
// file ./src/thread_rt.h line 32
void ptwq_set_current_thread_priority(signed int priority);
// puts
// file /usr/include/stdio.h line 695
extern signed int puts(const char *);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// readdir
// file /usr/include/dirent.h line 162
extern struct dirent * readdir(struct __dirstream *);
// reset_queue_mask
// file src/posix/manager.c line 313
static inline void reset_queue_mask(unsigned int wqlist_index);
// sem_init
// file /usr/include/semaphore.h line 36
extern signed int sem_init(union anonymous_3 *, signed int, unsigned int);
// sem_post
// file /usr/include/semaphore.h line 69
extern signed int sem_post(union anonymous_3 *);
// sem_timedwait
// file /usr/include/semaphore.h line 61
extern signed int sem_timedwait(union anonymous_3 *, struct timespec *);
// sem_wait
// file /usr/include/semaphore.h line 54
extern signed int sem_wait(union anonymous_3 *);
// sigfillset
// file /usr/include/signal.h line 218
extern signed int sigfillset(struct anonymous_6 *);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// syscall
// file /usr/include/unistd.h line 1058
extern signed long int syscall(signed long int, ...);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// threads_runnable
// file ./src/thread_info.h line 32
signed int threads_runnable(unsigned int *threads_running, unsigned int *threads_total);
// valid_workq
// file src/api.c line 37
static signed int valid_workq(struct _pthread_workqueue *workq);
// witem_alloc
// file src/private.h line 169
struct work * witem_alloc(void (*func)(void *), void *func_arg);
// witem_alloc::func_object
//
void func_object(void *);
// witem_cache_cleanup
// file src/witem_cache.c line 68
void witem_cache_cleanup(void *value);
// witem_cache_init
// file src/witem_cache.c line 37
signed int witem_cache_init(void);
// witem_free
// file src/witem_cache.c line 61
void witem_free(struct work *wi);
// worker_idle_threshold_per_cpu
// file src/posix/manager.c line 98
static unsigned int worker_idle_threshold_per_cpu(void);
// worker_main
// file src/posix/manager.c line 430
static void * worker_main(void *unused);
// worker_start
// file src/posix/manager.c line 473
static signed int worker_start(void);
// worker_stop
// file src/posix/manager.c line 494
static signed int worker_stop(void);
// wqlist_scan
// file src/posix/manager.c line 335
static struct work * wqlist_scan(signed int *queue_priority, signed int skip_thread_exit_events);
// wqlist_scan_spin
// file src/posix/manager.c line 377
static struct work * wqlist_scan_spin(signed int *queue_priority);
// wqlist_scan_wait
// file src/posix/manager.c line 401
static struct work * wqlist_scan_wait(signed int *queue_priority);

struct anonymous_4
{
  // stqe_next
  struct work *stqe_next;
};

struct anonymous_2
{
  // stqh_first
  struct work *stqh_first;
  // stqh_last
  struct work **stqh_last;
};

struct anonymous_6
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous_0
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

struct anonymous
{
  // sig
  unsigned int sig;
  // queueprio
  signed int queueprio;
  // overcommit
  signed int overcommit;
  // pad
  unsigned int pad[13l];
};

union anonymous_3
{
  // __size
  char __size[32l];
  // __align
  signed long int __align;
};

struct anonymous_5
{
  // runqueue_length
  volatile unsigned int runqueue_length;
  // count
  volatile unsigned int count;
  // idle
  volatile unsigned int idle;
  // sb_sem
  union anonymous_3 sb_sem;
  // sb_suspend
  unsigned int sb_suspend;
};

union anonymous_8
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_1
{
  // __data
  struct anonymous_0 __data;
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

union anonymous_7
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

struct _pthread_workqueue
{
  // sig
  unsigned int sig;
  // flags
  unsigned int flags;
  // queueprio
  signed int queueprio;
  // overcommit
  signed int overcommit;
  // wqlist_index
  unsigned int wqlist_index;
  // item_listhead
  struct anonymous_2 item_listhead;
  // mtx
  volatile signed int mtx;
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

struct work
{
  // item_entry
  struct anonymous_4 item_entry;
  // func
  void (*func)(void *);
  // func_arg
  void *func_arg;
  // flags
  unsigned int flags;
  // gencount
  unsigned int gencount;
};


// DEBUG_WORKQUEUE
// file src/api.c line 33
signed int DEBUG_WORKQUEUE = 0;
// PWQ_ACTIVE_CPU
// file src/api.c line 32
unsigned int PWQ_ACTIVE_CPU = (unsigned int)0;
// PWQ_RT_THREADS
// file src/posix/manager.c line 41
unsigned int PWQ_RT_THREADS = (unsigned int)0;
// PWQ_SPIN_THREADS
// file src/posix/manager.c line 42
unsigned int PWQ_SPIN_THREADS = (unsigned int)0;
// WORKQUEUE_DEBUG_IDENT
// file src/api.c line 34
char *WORKQUEUE_DEBUG_IDENT = "WQ";
// cpu_count
// file src/posix/manager.c line 56
static unsigned int cpu_count;
// current_threads_spinning
// file src/posix/manager.c line 43
volatile unsigned int current_threads_spinning = (volatile unsigned int)0;
// detached_attr
// file src/posix/manager.c line 76
static union pthread_attr_t detached_attr;
// ocwq
// file src/posix/manager.c line 62
static struct _pthread_workqueue *ocwq[31l];
// ocwq_has_work
// file src/posix/manager.c line 65
static union anonymous_1 ocwq_has_work;
// ocwq_idle_threads
// file src/posix/manager.c line 66
static unsigned int ocwq_idle_threads;
// ocwq_mask
// file src/posix/manager.c line 63
static signed int ocwq_mask;
// ocwq_mtx
// file src/posix/manager.c line 64
static union anonymous_7 ocwq_mtx;
// ocwq_signal_count
// file src/posix/manager.c line 67
static unsigned int ocwq_signal_count;
// pending_thread_create
// file src/posix/manager.c line 59
static unsigned int pending_thread_create;
// scoreboard
// file src/posix/manager.c line 84
static struct anonymous_5 scoreboard;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// worker_idle_threshold
// file src/posix/manager.c line 58
static unsigned int worker_idle_threshold;
// worker_min
// file src/posix/manager.c line 57
static unsigned int worker_min;
// wq
// file testing/witem_cache/test.c line 48
struct _pthread_workqueue *wq;
// wqlist
// file src/posix/manager.c line 70
static struct _pthread_workqueue *wqlist[31l];
// wqlist_has_manager
// file src/posix/manager.c line 75
static signed int wqlist_has_manager;
// wqlist_has_work
// file src/posix/manager.c line 74
static union anonymous_1 wqlist_has_work;
// wqlist_mask
// file src/posix/manager.c line 71
static volatile unsigned int wqlist_mask;
// wqlist_mtx
// file src/posix/manager.c line 72
static union anonymous_7 wqlist_mtx;

// _read_file
// file src/linux/thread_info.c line 75
static signed int _read_file(const char *path, char *result)
{
  signed int read_fd;
  signed int retval = -1;
  signed long int actual_read;
  read_fd=open(path, 00);
  signed long int return_value_syscall_1;
  signed int *return_value___errno_location_2;
  char *return_value_strerror_3;
  signed int *return_value___errno_location_4;
  signed long int return_value_syscall_5;
  signed int *return_value___errno_location_6;
  char *return_value_strerror_7;
  signed int *return_value___errno_location_8;
  signed long int return_value_syscall_10;
  signed long int return_value_syscall_11;
  signed int *return_value___errno_location_12;
  char *return_value_strerror_13;
  signed int *return_value___errno_location_14;
  if(read_fd == -1)
  {
    do
      if(!(DEBUG_WORKQUEUE == 0))
      {
        return_value_syscall_1=syscall((signed long int)186);
        return_value___errno_location_2=__errno_location();
        return_value_strerror_3=strerror(*return_value___errno_location_2);
        return_value___errno_location_4=__errno_location();
        fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_1, (const void *)"_read_file", (const void *)"open()", return_value_strerror_3, *return_value___errno_location_4);
      }

    while((_Bool)0);
    return retval;
  }

  else
  {
    signed int return_value_fcntl_9;
    return_value_fcntl_9=fcntl(read_fd, 4, 04000);
    if(!(return_value_fcntl_9 == 0))
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall_5=syscall((signed long int)186);
          return_value___errno_location_6=__errno_location();
          return_value_strerror_7=strerror(*return_value___errno_location_6);
          return_value___errno_location_8=__errno_location();
          fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_5, (const void *)"_read_file", (const void *)"fcntl()", return_value_strerror_7, *return_value___errno_location_8);
        }

      while((_Bool)0);

    else
    {
      actual_read=read(read_fd, (void *)result, (unsigned long int)4096);
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall_10=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): read %zu from %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_10, (const void *)"_read_file", (unsigned long int)actual_read, path);
        }

      while((_Bool)0);
      if(!(actual_read == 0l))
        retval = 0;

    }

  errout:
    ;
    signed int return_value_close_15;
    return_value_close_15=close(read_fd);
    if(!(return_value_close_15 == 0))
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall_11=syscall((signed long int)186);
          return_value___errno_location_12=__errno_location();
          return_value_strerror_13=strerror(*return_value___errno_location_12);
          return_value___errno_location_14=__errno_location();
          fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_11, (const void *)"_read_file", (const void *)"close()", return_value_strerror_13, *return_value___errno_location_14);
        }

      while((_Bool)0);

    return retval;
  }
}

// additem
// file testing/witem_cache/test.c line 50
void additem(void (*func)(void *), void *arg)
{
  signed int rv;
  rv=pthread_workqueue_additem_np(wq, (func), arg, (void **)(void *)0, (unsigned int *)(void *)0);
  if(!(rv == 0))
    do
    {
      puts("unable to add item: %s");
      exit(1);
    }
    while((_Bool)0);

}

// feedback
// file testing/witem_cache/test.c line 62
void feedback(void *arg)
{
  signed int *i = (signed int *)arg;
  struct timespec tv;
  *i = *i - 1;
  if(!(*i >= 1))
  {
    puts("All tests completed.\n");
    exit(0);
  }

  else
  {
    additem(feedback, arg);
    tv.tv_sec = (signed long int)0;
    tv.tv_nsec = (signed long int)750;
    nanosleep(&tv, (struct timespec *)(void *)0);
  }
}

// get_process_limit
// file src/posix/manager.c line 795
static unsigned int get_process_limit(void)
{
  struct rlimit rlim;
  signed int return_value_getrlimit_5;
  return_value_getrlimit_5=getrlimit((enum __rlimit_resource)__RLIMIT_NPROC, &rlim);
  signed long int return_value_syscall_1;
  signed int *return_value___errno_location_2;
  char *return_value_strerror_3;
  signed int *return_value___errno_location_4;
  if(!(return_value_getrlimit_5 >= 0))
  {
    do
      if(!(DEBUG_WORKQUEUE == 0))
      {
        return_value_syscall_1=syscall((signed long int)186);
        return_value___errno_location_2=__errno_location();
        return_value_strerror_3=strerror(*return_value___errno_location_2);
        return_value___errno_location_4=__errno_location();
        fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_1, (const void *)"get_process_limit", (const void *)"getrlimit(2)", return_value_strerror_3, *return_value___errno_location_4);
      }

    while((_Bool)0);
    return (unsigned int)100;
  }

  else
    return (unsigned int)rlim.rlim_max;
}

// get_runqueue_length
// file src/posix/manager.c line 854
static unsigned int get_runqueue_length(void)
{
  double loadavg;
  unsigned int return_value_linux_get_runqueue_length_1;
  return_value_linux_get_runqueue_length_1=linux_get_runqueue_length();
  return return_value_linux_get_runqueue_length_1;
  signed int return_value_getloadavg_6;
  return_value_getloadavg_6=getloadavg(&loadavg, 1);
  signed long int return_value_syscall_2;
  signed int *return_value___errno_location_3;
  char *return_value_strerror_4;
  signed int *return_value___errno_location_5;
  if(!(return_value_getloadavg_6 == 1))
  {
    if(!(DEBUG_WORKQUEUE == 0))
    {
      return_value_syscall_2=syscall((signed long int)186);
      return_value___errno_location_3=__errno_location();
      return_value_strerror_4=strerror(*return_value___errno_location_3);
      return_value___errno_location_5=__errno_location();
      fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_2, (const void *)"get_runqueue_length", (const void *)"getloadavg(3)", return_value_strerror_4, *return_value___errno_location_5);
    }

    return (unsigned int)1;
  }

  else
  {
    if(loadavg < 0.000000 || loadavg > 2.147484e+9)
      loadavg = (double)1;

    return (unsigned int)(signed int)loadavg;
  }
}

// linux_get_runqueue_length
// file ./src/linux/platform.h line 35
unsigned int linux_get_runqueue_length(void)
{
  signed int fd;
  char buf[16384l];
  char *p;
  signed long int len = (signed long int)0;
  unsigned int runqsz = (unsigned int)0;
  fd=open("/proc/stat", 00);
  signed long int return_value_syscall_1;
  signed int *return_value___errno_location_2;
  char *return_value_strerror_3;
  signed int *return_value___errno_location_4;
  signed long int return_value_syscall_5;
  signed int *return_value___errno_location_6;
  char *return_value_strerror_7;
  signed int *return_value___errno_location_8;
  if(!(fd >= 0))
  {
    do
      if(!(DEBUG_WORKQUEUE == 0))
      {
        return_value_syscall_1=syscall((signed long int)186);
        return_value___errno_location_2=__errno_location();
        return_value_strerror_3=strerror(*return_value___errno_location_2);
        return_value___errno_location_4=__errno_location();
        fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_1, (const void *)"linux_get_runqueue_length", (const void *)"open() of /proc/stat", return_value_strerror_3, *return_value___errno_location_4);
      }

    while((_Bool)0);
    return (unsigned int)1;
  }

  else
  {
    len=read(fd, (void *)&buf, sizeof(char [16384l]) /*16384ul*/  - (unsigned long int)1);
    if(!(len >= 0l))
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall_5=syscall((signed long int)186);
          return_value___errno_location_6=__errno_location();
          return_value_strerror_7=strerror(*return_value___errno_location_6);
          return_value___errno_location_8=__errno_location();
          fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_5, (const void *)"linux_get_runqueue_length", (const void *)"read failed", return_value_strerror_7, *return_value___errno_location_8);
        }

      while((_Bool)0);

    else
    {
      p=strstr(buf, "procs_running");
      if(!(p == ((char *)NULL)))
      {
        signed int return_value_atoi_9;
        return_value_atoi_9=atoi(p + (signed long int)14);
        runqsz = (unsigned int)return_value_atoi_9;
      }

    }

  out:
    ;
    if(runqsz == 0u)
      runqsz = (unsigned int)1;

    close(fd);
    return runqsz;
  }
}

// main
// file testing/witem_cache/test.c line 79
signed int main()
{
  signed int i = 10000;
  pthread_workqueue_create_np(&wq, (const struct anonymous *)(void *)0);
  additem(feedback, (void *)&i);
  pause();
}

// manager_init
// file src/private.h line 162
signed int manager_init(void)
{
  wqlist_has_manager = 0;
  pthread_cond_init(&wqlist_has_work, (const union anonymous_8 *)(void *)0);
  pthread_mutex_init(&wqlist_mtx, (const union anonymous_8 *)(void *)0);
  wqlist_mask = (volatile unsigned int)0;
  pending_thread_create = (unsigned int)0;
  pthread_cond_init(&ocwq_has_work, (const union anonymous_8 *)(void *)0);
  pthread_mutex_init(&ocwq_mtx, (const union anonymous_8 *)(void *)0);
  ocwq_mask = 0;
  ocwq_idle_threads = (unsigned int)0;
  ocwq_signal_count = (unsigned int)0;
  witem_cache_init();
  unsigned int tmp_if_expr_2;
  signed long int return_value_sysconf_1;
  if(PWQ_ACTIVE_CPU >= 1u)
    tmp_if_expr_2 = PWQ_ACTIVE_CPU;

  else
  {
    return_value_sysconf_1=sysconf(84);
    tmp_if_expr_2 = (unsigned int)return_value_sysconf_1;
  }
  cpu_count = tmp_if_expr_2;
  pthread_attr_init(&detached_attr);
  pthread_attr_setdetachstate(&detached_attr, 1);
  signed int return_value_sem_init_7;
  return_value_sem_init_7=sem_init(&scoreboard.sb_sem, 0, (unsigned int)0);
  signed long int return_value_syscall_3;
  signed int *return_value___errno_location_4;
  char *return_value_strerror_5;
  signed int *return_value___errno_location_6;
  unsigned int tmp_if_expr_9;
  unsigned int return_value_worker_idle_threshold_per_cpu_8;
  signed long int return_value_syscall_10;
  signed int *return_value___errno_location_11;
  char *return_value_strerror_12;
  signed int *return_value___errno_location_13;
  if(!(return_value_sem_init_7 == 0))
  {
    do
      if(!(DEBUG_WORKQUEUE == 0))
      {
        return_value_syscall_3=syscall((signed long int)186);
        return_value___errno_location_4=__errno_location();
        return_value_strerror_5=strerror(*return_value___errno_location_4);
        return_value___errno_location_6=__errno_location();
        fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_3, (const void *)"manager_init", (const void *)"sem_init()", return_value_strerror_5, *return_value___errno_location_6);
      }

    while((_Bool)0);
    return -1;
  }

  else
  {
    scoreboard.count = (volatile unsigned int)0;
    scoreboard.idle = (volatile unsigned int)0;
    scoreboard.sb_suspend = (unsigned int)0;
    worker_min = (unsigned int)2;
    if(PWQ_ACTIVE_CPU >= 1u)
      tmp_if_expr_9 = PWQ_ACTIVE_CPU;

    else
    {
      return_value_worker_idle_threshold_per_cpu_8=worker_idle_threshold_per_cpu();
      tmp_if_expr_9 = return_value_worker_idle_threshold_per_cpu_8;
    }
    worker_idle_threshold = tmp_if_expr_9;
    signed int return_value_pthread_atfork_14;
    return_value_pthread_atfork_14=pthread_atfork((void (*)(void))(void *)0, (void (*)(void))(void *)0, manager_reinit);
    if(!(return_value_pthread_atfork_14 >= 0))
    {
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall_10=syscall((signed long int)186);
          return_value___errno_location_11=__errno_location();
          return_value_strerror_12=strerror(*return_value___errno_location_11);
          return_value___errno_location_13=__errno_location();
          fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_10, (const void *)"manager_init", (const void *)"pthread_atfork()", return_value_strerror_12, *return_value___errno_location_13);
        }

      while((_Bool)0);
      return -1;
    }

    else
      return 0;
  }
}

// manager_main
// file src/posix/manager.c line 539
static void * manager_main(void *unused)
{
  unsigned int runqueue_length_max = cpu_count;
  unsigned int worker_max;
  unsigned int threads_total = (unsigned int)0;
  unsigned int current_thread_count = (unsigned int)0;
  unsigned int worker_idle_seconds_accumulated = (unsigned int)0;
  unsigned int max_threads_to_stop = (unsigned int)0;
  unsigned int i;
  unsigned int idle_surplus_threads = (unsigned int)0;
  signed int sem_timedwait_rv = 0;
  struct anonymous_6 sigmask;
  struct timespec ts;
  struct timeval tp;
  worker_max=get_process_limit();
  scoreboard.runqueue_length=get_runqueue_length();
  sigfillset(&sigmask);
  pthread_sigmask(0, &sigmask, (struct anonymous_6 *)(void *)0);
  i = (unsigned int)0;
  for( ; !(i >= worker_min); i = i + 1u)
    worker_start();
  signed long int return_value_syscall_1;
  signed long int return_value_syscall_2;
  signed int *return_value___errno_location_3;
  char *return_value_strerror_4;
  signed int *return_value___errno_location_5;
  signed long int return_value_syscall_8;
  signed int *return_value___errno_location_9;
  char *return_value_strerror_10;
  signed int *return_value___errno_location_11;
  signed long int return_value_syscall_13;
  signed long int return_value_syscall_14;
  signed long int return_value_syscall_15;
  signed int *return_value___errno_location_16;
  char *return_value_strerror_17;
  signed int *return_value___errno_location_18;
  signed long int return_value_syscall_20;
  signed long int return_value_syscall_21;
  signed long int return_value_syscall_23;
  signed long int return_value_syscall_24;
  signed long int return_value_syscall_25;
  signed long int return_value_syscall_26;
  signed long int return_value_syscall_27;
  signed long int return_value_syscall_28;
  signed long int return_value_syscall_29;
  while((_Bool)1)
  {
    if(scoreboard.sb_suspend == 0u)
    {
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall_1=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_1, (const void *)"manager_main", (const void *)"manager is sleeping");
        }

      while((_Bool)0);
      signed int return_value_gettimeofday_6;
      return_value_gettimeofday_6=gettimeofday(&tp, (struct timezone *)(void *)0);
      if(!(return_value_gettimeofday_6 == 0))
        do
          if(!(DEBUG_WORKQUEUE == 0))
          {
            return_value_syscall_2=syscall((signed long int)186);
            return_value___errno_location_3=__errno_location();
            return_value_strerror_4=strerror(*return_value___errno_location_3);
            return_value___errno_location_5=__errno_location();
            fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_2, (const void *)"manager_main", (const void *)"gettimeofday()", return_value_strerror_4, *return_value___errno_location_5);
          }

        while((_Bool)0);

      ts.tv_sec = tp.tv_sec;
      ts.tv_nsec = tp.tv_usec * (signed long int)1000;
      ts.tv_sec = ts.tv_sec + (signed long int)1;
      sem_timedwait_rv=sem_timedwait(&scoreboard.sb_sem, &ts);
      if(!(sem_timedwait_rv == 0))
      {
        signed int *return_value___errno_location_7;
        return_value___errno_location_7=__errno_location();
        sem_timedwait_rv = *return_value___errno_location_7;
        signed int *return_value___errno_location_12;
        return_value___errno_location_12=__errno_location();
        if(!(*return_value___errno_location_12 == 110))
          do
            if(!(DEBUG_WORKQUEUE == 0))
            {
              return_value_syscall_8=syscall((signed long int)186);
              return_value___errno_location_9=__errno_location();
              return_value_strerror_10=strerror(*return_value___errno_location_9);
              return_value___errno_location_11=__errno_location();
              fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_8, (const void *)"manager_main", (const void *)"sem_timedwait()", return_value_strerror_10, *return_value___errno_location_11);
            }

          while((_Bool)0);

      }

      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall_13=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_13, (const void *)"manager_main", (const void *)"manager is awake");
        }

      while((_Bool)0);
    }

    else
    {
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall_14=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_14, (const void *)"manager_main", (const void *)"manager is suspending");
        }

      while((_Bool)0);
      signed int return_value_sem_wait_19;
      return_value_sem_wait_19=sem_wait(&scoreboard.sb_sem);
      if(!(return_value_sem_wait_19 == 0))
        do
          if(!(DEBUG_WORKQUEUE == 0))
          {
            return_value_syscall_15=syscall((signed long int)186);
            return_value___errno_location_16=__errno_location();
            return_value_strerror_17=strerror(*return_value___errno_location_16);
            return_value___errno_location_18=__errno_location();
            fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_15, (const void *)"manager_main", (const void *)"sem_wait()", return_value_strerror_17, *return_value___errno_location_18);
          }

        while((_Bool)0);

      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall_20=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_20, (const void *)"manager_main", (const void *)"manager is resuming");
        }

      while((_Bool)0);
    }
    do
      if(!(DEBUG_WORKQUEUE == 0))
      {
        return_value_syscall_21=syscall((signed long int)186);
        fprintf(stderr, "%s [%d]: %s(): idle=%u workers=%u max_workers=%u worker_min = %u\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_21, (const void *)"manager_main", scoreboard.idle, scoreboard.count, worker_max, worker_min);
      }

    while((_Bool)0);
    if(scoreboard.idle == 0u && pending_thread_create == 0u && scoreboard.count >= 1u)
    {
      if(!(scoreboard.count >= worker_idle_threshold))
        worker_start();

      else
        if(!(scoreboard.count >= worker_max))
        {
          signed int return_value_threads_runnable_22;
          return_value_threads_runnable_22=threads_runnable(&current_thread_count, &threads_total);
          if(!(return_value_threads_runnable_22 == 0))
            current_thread_count = (unsigned int)0;

          if(cpu_count >= current_thread_count)
          {
            scoreboard.runqueue_length=get_runqueue_length();
            if(runqueue_length_max >= scoreboard.runqueue_length)
            {
              if(scoreboard.idle == 0u)
                worker_start();

              else
                do
                  if(!(DEBUG_WORKQUEUE == 0))
                  {
                    return_value_syscall_23=syscall((signed long int)186);
                    fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_23, (const void *)"manager_main", (const void *)"skipped thread creation as we got an idle one racing us");
                  }

                while((_Bool)0);
            }

            else
              do
                if(!(DEBUG_WORKQUEUE == 0))
                {
                  return_value_syscall_24=syscall((signed long int)186);
                  fprintf(stderr, "%s [%d]: %s(): Not spawning worker thread, scoreboard.runqueue_length = %d > runqueue_length_max = %d\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_24, (const void *)"manager_main", scoreboard.runqueue_length, runqueue_length_max);
                }

              while((_Bool)0);
          }

          else
            do
              if(!(DEBUG_WORKQUEUE == 0))
              {
                return_value_syscall_25=syscall((signed long int)186);
                fprintf(stderr, "%s [%d]: %s(): Not spawning worker thread, thread_runnable = %d > cpu_count = %d\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_25, (const void *)"manager_main", current_thread_count, cpu_count);
              }

            while((_Bool)0);
        }

        else
          do
            if(!(DEBUG_WORKQUEUE == 0))
            {
              return_value_syscall_26=syscall((signed long int)186);
              fprintf(stderr, "%s [%d]: %s(): Not spawning worker thread, scoreboard.count = %d >= worker_max = %d\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_26, (const void *)"manager_main", scoreboard.count, worker_max);
            }

          while((_Bool)0);
    }

    else
      if(sem_timedwait_rv == 110)
      {
        if(!(worker_idle_threshold >= scoreboard.idle))
        {
          worker_idle_seconds_accumulated = worker_idle_seconds_accumulated + scoreboard.idle;
          do
            if(!(DEBUG_WORKQUEUE == 0))
            {
              return_value_syscall_27=syscall((signed long int)186);
              fprintf(stderr, "%s [%d]: %s(): worker_idle_seconds_accumulated = %d, scoreboard.idle = %d, scoreboard.count = %d\n\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_27, (const void *)"manager_main", worker_idle_seconds_accumulated, scoreboard.idle, scoreboard.count);
            }

          while((_Bool)0);
        }

        else
        {
          do
            if(!(DEBUG_WORKQUEUE == 0))
            {
              return_value_syscall_28=syscall((signed long int)186);
              fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_28, (const void *)"manager_main", (const void *)"Resetting worker_idle_seconds_accumulated");
            }

          while((_Bool)0);
          worker_idle_seconds_accumulated = (unsigned int)0;
        }
        max_threads_to_stop = worker_idle_seconds_accumulated / (unsigned int)15;
        if(max_threads_to_stop >= 1u)
        {
          worker_idle_seconds_accumulated = (unsigned int)0;
          idle_surplus_threads = scoreboard.idle - worker_idle_threshold;
          if(!(idle_surplus_threads >= max_threads_to_stop))
            max_threads_to_stop = idle_surplus_threads;

          i = (unsigned int)0;
          for( ; !(i >= max_threads_to_stop); i = i + 1u)
            if(!(worker_idle_threshold >= scoreboard.idle))
            {
              do
                if(!(DEBUG_WORKQUEUE == 0))
                {
                  return_value_syscall_29=syscall((signed long int)186);
                  fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_29, (const void *)"manager_main", (const void *)"Removing one thread from the thread pool");
                }

              while((_Bool)0);
              worker_stop();
            }

        }

      }

  }
  return (void *)0;
}

// manager_peek
// file src/private.h line 163
unsigned long int manager_peek(const char *key)
{
  unsigned long int rv;
  signed int return_value_strcmp_4;
  return_value_strcmp_4=strcmp(key, "combined_idle");
  signed int return_value_strcmp_3;
  signed int return_value_strcmp_2;
  signed long int return_value_syscall_1;
  if(return_value_strcmp_4 == 0)
  {
    rv = (unsigned long int)scoreboard.idle;
    if(!(worker_min >= scoreboard.idle))
      rv = rv - (unsigned long int)worker_min;

    rv = rv + (unsigned long int)ocwq_idle_threads;
  }

  else
  {
    return_value_strcmp_3=strcmp(key, "idle");
    if(return_value_strcmp_3 == 0)
    {
      rv = (unsigned long int)scoreboard.idle;
      if(!(worker_min >= scoreboard.idle))
        rv = rv - (unsigned long int)worker_min;

    }

    else
    {
      return_value_strcmp_2=strcmp(key, "ocomm_idle");
      if(return_value_strcmp_2 == 0)
        rv = (unsigned long int)ocwq_idle_threads;

      else
      {
        do
          if(!(DEBUG_WORKQUEUE == 0))
          {
            return_value_syscall_1=syscall((signed long int)186);
            fprintf(stderr, "%s [%d]: %s(): invalid key: %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_1, (const void *)"manager_peek", key);
          }

        while((_Bool)0);
        abort();
      }
    }
  }
  return rv;
}

// manager_reinit
// file src/posix/manager.c line 127
static void manager_reinit(void)
{
  signed int return_value_manager_init_1;
  return_value_manager_init_1=manager_init();
  if(!(return_value_manager_init_1 >= 0))
    abort();

}

// manager_resume
// file src/private.h line 165
void manager_resume(void)
{
  if(!(scoreboard.sb_suspend == 0u))
  {
    scoreboard.sb_suspend = (unsigned int)0;
    __sync_synchronize();
    sem_post(&scoreboard.sb_sem);
  }

}

// manager_start
// file src/posix/manager.c line 694
static void manager_start(void)
{
  unsigned long int tid;
  signed int rv;
  signed long int return_value_syscall_1;
  do
    if(!(DEBUG_WORKQUEUE == 0))
    {
      return_value_syscall_1=syscall((signed long int)186);
      fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_1, (const void *)"manager_start", (const void *)"starting the manager thread");
    }

  while((_Bool)0);
  signed long int return_value_syscall_2;
  do
  {
    rv=pthread_create(&tid, &detached_attr, manager_main, (void *)0);
    if(rv == 11)
      sleep((unsigned int)1);

    else
      if(!(rv == 0))
      {
        do
          if(!(DEBUG_WORKQUEUE == 0))
          {
            return_value_syscall_2=syscall((signed long int)186);
            fprintf(stderr, "%s [%d]: %s(): thread creation failed, rv=%d\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_2, (const void *)"manager_start", rv);
          }

        while((_Bool)0);
        abort();
      }

  }
  while(!(rv == 0));
  wqlist_has_manager = 1;
}

// manager_suspend
// file src/private.h line 164
void manager_suspend(void)
{
  while(wqlist_has_manager == 0)
    sleep((unsigned int)1);
  if(scoreboard.sb_suspend == 0u)
    scoreboard.sb_suspend = (unsigned int)1;

}

// manager_workqueue_additem
// file src/private.h line 167
void manager_workqueue_additem(struct _pthread_workqueue *workq, struct work *witem)
{
  unsigned int wqlist_index_bit = (unsigned int)(0x1 << workq->wqlist_index);
  signed long int return_value_syscall_1;
  if(!(workq->overcommit == 0))
  {
    unsigned long int tid;
    pthread_mutex_lock(&ocwq_mtx);
    pthread_spin_lock(&workq->mtx);
    do
    {
      witem->item_entry.stqe_next = (struct work *)(void *)0;
      *(&workq->item_listhead)->stqh_last = witem;
      (&workq->item_listhead)->stqh_last = &witem->item_entry.stqe_next;
    }
    while((_Bool)0);
    pthread_spin_unlock(&workq->mtx);
    ocwq_mask = ocwq_mask | (signed int)wqlist_index_bit;
    if(ocwq_idle_threads >= 1u)
    {
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall_1=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_1, (const void *)"manager_workqueue_additem", (const void *)"signaling an idle worker");
        }

      while((_Bool)0);
      pthread_cond_signal(&ocwq_has_work);
      ocwq_idle_threads = ocwq_idle_threads - 1u;
      ocwq_signal_count = ocwq_signal_count + 1u;
    }

    else
      pthread_create(&tid, &detached_attr, overcommit_worker_main, (void *)0);
    pthread_mutex_unlock(&ocwq_mtx);
  }

  else
  {
    pthread_spin_lock(&workq->mtx);
    if(workq->item_listhead.stqh_first == ((struct work *)NULL))
    {
      unsigned int new_mask;
      __CPROVER_atomic_begin();
      *(&wqlist_mask) = *(&wqlist_mask) | wqlist_index_bit;
      new_mask = *(&wqlist_mask);
      FENCE(WRfence);
      __CPROVER_atomic_end();
      while((new_mask & wqlist_index_bit) == 0u)
      {
        asm("pause");
        __CPROVER_atomic_begin();
        *(&wqlist_mask) = *(&wqlist_mask) | wqlist_index_bit;
        new_mask = *(&wqlist_mask);
        FENCE(WRfence);
        __CPROVER_atomic_end();
      }
    }

    do
    {
      witem->item_entry.stqe_next = (struct work *)(void *)0;
      *(&workq->item_listhead)->stqh_last = witem;
      (&workq->item_listhead)->stqh_last = &witem->item_entry.stqe_next;
    }
    while((_Bool)0);
    pthread_spin_unlock(&workq->mtx);
    if(scoreboard.idle >= 1u)
      pthread_cond_signal(&wqlist_has_work);

  }
}

// manager_workqueue_create
// file src/private.h line 166
void manager_workqueue_create(struct _pthread_workqueue *workq)
{
  pthread_mutex_lock(&wqlist_mtx);
  if(workq->overcommit == 0)
  {
    if(wqlist_has_manager == 0)
      manager_start();

  }

  signed long int return_value_syscall_1;
  signed long int return_value_syscall_2;
  if(!(workq->overcommit == 0))
  {
    if(ocwq[(signed long int)workq->queueprio] == ((struct _pthread_workqueue *)NULL))
    {
      ocwq[(signed long int)workq->queueprio] = workq;
      workq->wqlist_index = (unsigned int)workq->queueprio;
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall_1=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): created workqueue (ocommit=1, prio=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_1, (const void *)"manager_workqueue_create", workq->queueprio);
        }

      while((_Bool)0);
    }

    else
    {
      printf("oc queue %d already exists\n", workq->queueprio);
      abort();
    }
  }

  else
    if(wqlist[(signed long int)workq->queueprio] == ((struct _pthread_workqueue *)NULL))
    {
      wqlist[(signed long int)workq->queueprio] = workq;
      workq->wqlist_index = (unsigned int)workq->queueprio;
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall_2=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): created workqueue (ocommit=0, prio=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_2, (const void *)"manager_workqueue_create", workq->queueprio);
        }

      while((_Bool)0);
    }

    else
    {
      printf("queue %d already exists\n", workq->queueprio);
      abort();
    }
  pthread_mutex_unlock(&wqlist_mtx);
}

// overcommit_worker_main
// file src/posix/manager.c line 244
static void * overcommit_worker_main(void *unused)
{
  struct timespec ts;
  struct _pthread_workqueue *workq;
  void (*func)(void *);
  void *func_arg;
  struct work *witem;
  signed int rv;
  signed int idx;
  struct anonymous_6 sigmask;
  sigfillset(&sigmask);
  pthread_sigmask(0, &sigmask, (struct anonymous_6 *)(void *)0);
  pthread_mutex_lock(&ocwq_mtx);
  signed long int return_value_syscall_1;
  signed long int return_value_syscall_2;
  signed int *return_value___errno_location_3;
  char *return_value_strerror_4;
  signed int *return_value___errno_location_5;
  do
  {
    idx=ffs(ocwq_mask);
    if(idx >= 1)
    {
      workq = ocwq[(signed long int)(idx - 1)];
      witem = (&workq->item_listhead)->stqh_first;
      if(witem == ((struct work *)NULL))
        goto __CPROVER_DUMP_L5;

      do
      {
        (&workq->item_listhead)->stqh_first = (&workq->item_listhead)->stqh_first->item_entry.stqe_next;
        if(workq->item_listhead.stqh_first == ((struct work *)NULL))
          (&workq->item_listhead)->stqh_last = &(&workq->item_listhead)->stqh_first;

      }
      while((_Bool)0);
      if(workq->item_listhead.stqh_first == ((struct work *)NULL))
        ocwq_mask = ocwq_mask & ~(0x1 << workq->wqlist_index);

      pthread_mutex_unlock(&ocwq_mtx);
      func = witem->func;
      func_arg = witem->func_arg;
      witem_free(witem);
      func(func_arg);
      pthread_mutex_lock(&ocwq_mtx);
    }

    else
    {

    __CPROVER_DUMP_L5:
      ;
      clock_gettime(0, &ts);
      ts.tv_sec = ts.tv_sec + (signed long int)15;
      ocwq_idle_threads = ocwq_idle_threads + 1u;
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall_1=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): waiting for work (idle=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_1, (const void *)"overcommit_worker_main", ocwq_idle_threads);
        }

      while((_Bool)0);
      rv=pthread_cond_timedwait(&ocwq_has_work, &ocwq_mtx, &ts);
      if(ocwq_signal_count >= 1u)
        ocwq_signal_count = ocwq_signal_count - 1u;

      else
      {
        if(rv == 0 || rv == 110)
        {
          ocwq_idle_threads = ocwq_idle_threads - 1u;
          pthread_mutex_unlock(&ocwq_mtx);
          break;
        }

        do
          if(!(DEBUG_WORKQUEUE == 0))
          {
            return_value_syscall_2=syscall((signed long int)186);
            return_value___errno_location_3=__errno_location();
            return_value_strerror_4=strerror(*return_value___errno_location_3);
            return_value___errno_location_5=__errno_location();
            fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_2, (const void *)"overcommit_worker_main", (const void *)"pthread_cond_timedwait", return_value_strerror_4, *return_value___errno_location_5);
          }

        while((_Bool)0);
        abort();
        break;
      }
    }
  }
  while((_Bool)1);
  signed long int return_value_syscall_6;
  do
    if(!(DEBUG_WORKQUEUE == 0))
    {
      return_value_syscall_6=syscall((signed long int)186);
      fprintf(stderr, "%s [%d]: %s(): worker exiting (idle=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_6, (const void *)"overcommit_worker_main", ocwq_idle_threads);
    }

  while((_Bool)0);
  pthread_exit((void *)0);
  return (void *)0;
}

// pthread_workqueue_additem_np
// file ./include/pthread_workqueue.h line 63
signed int pthread_workqueue_additem_np(struct _pthread_workqueue *workq, void (*workitem_func)(void *), void *workitem_arg, void **itemhandlep, unsigned int *gencountp)
{
  struct work *witem;
  signed int return_value_valid_workq_1;
  return_value_valid_workq_1=valid_workq(workq);
  signed long int return_value_syscall_2;
  if(workitem_func == ((void (*)(void *))NULL) || return_value_valid_workq_1 == 0)
    return 22;

  else
  {
    witem=witem_alloc(workitem_func, workitem_arg);
    if(!(itemhandlep == ((void **)NULL)))
      *itemhandlep = (void *)(void **)witem;

    if(!(gencountp == ((unsigned int *)NULL)))
      *gencountp = witem->gencount;

    manager_workqueue_additem(workq, witem);
    do
      if(!(DEBUG_WORKQUEUE == 0))
      {
        return_value_syscall_2=syscall((signed long int)186);
        fprintf(stderr, "%s [%d]: %s(): added item %p to queue %p\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_2, (const void *)"pthread_workqueue_additem_np", (void *)witem, (void *)workq);
      }

    while((_Bool)0);
    return 0;
  }
}

// pthread_workqueue_attr_destroy_np
// file src/api.c line 151
signed int pthread_workqueue_attr_destroy_np(struct anonymous *attr)
{
  if(attr->sig == 0xBEBEBEBE)
    return 0;

  else
    return 22;
}

// pthread_workqueue_attr_getovercommit_np
// file src/api.c line 160
signed int pthread_workqueue_attr_getovercommit_np(const struct anonymous *attr, signed int *ocommp)
{
  if(attr->sig == 0xBEBEBEBE)
  {
    *ocommp = attr->overcommit;
    return 0;
  }

  else
    return 22;
}

// pthread_workqueue_attr_getqueuepriority_np
// file src/api.c line 182
signed int pthread_workqueue_attr_getqueuepriority_np(struct anonymous *attr, signed int *qpriop)
{
  if(attr->sig == 0xBEBEBEBE)
  {
    *qpriop = attr->queueprio;
    return 0;
  }

  else
    return 22;
}

// pthread_workqueue_attr_init_np
// file src/api.c line 142
signed int pthread_workqueue_attr_init_np(struct anonymous *attr)
{
  attr->queueprio = 1;
  attr->sig = 0xBEBEBEBE;
  attr->overcommit = 0;
  return 0;
}

// pthread_workqueue_attr_setovercommit_np
// file src/api.c line 171
signed int pthread_workqueue_attr_setovercommit_np(struct anonymous *attr, signed int ocomm)
{
  if(attr->sig == 0xBEBEBEBE)
  {
    attr->overcommit = ocomm;
    return 0;
  }

  else
    return 22;
}

// pthread_workqueue_attr_setqueuepriority_np
// file src/api.c line 193
signed int pthread_workqueue_attr_setqueuepriority_np(struct anonymous *attr, signed int qprio)
{
  if(attr->sig == 0xBEBEBEBE)
  {
    if(qprio == 0 || qprio == 1 || qprio == 2 || qprio == 3)
    {
      attr->queueprio = qprio;
      return 0;
    }

    return 22;
  }

  else
    return 22;
}

// pthread_workqueue_create_np
// file ./include/pthread_workqueue.h line 60
signed int pthread_workqueue_create_np(struct _pthread_workqueue **workqp, const struct anonymous *attr)
{
  struct _pthread_workqueue *workq;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_2;
  signed long int return_value_syscall_4;
  if(!(attr == ((const struct anonymous *)NULL)))
  {
    if(!(attr->sig == 0xBEBEBEBE))
      tmp_if_expr_1 = (_Bool)1;

    else
      tmp_if_expr_1 = attr->queueprio < 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr_1)
      tmp_if_expr_2 = (_Bool)1;

    else
      tmp_if_expr_2 = attr->queueprio >= 4 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr_2)
      goto __CPROVER_DUMP_L5;

    return 22;
  }

  else
  {

  __CPROVER_DUMP_L5:
    ;
    void *return_value_calloc_3;
    return_value_calloc_3=calloc((unsigned long int)1, sizeof(struct _pthread_workqueue) /*48ul*/ );
    workq = (struct _pthread_workqueue *)return_value_calloc_3;
    if(workq == ((struct _pthread_workqueue *)NULL))
      return 12;

    else
    {
      workq->sig = 0xBEBEBEBE;
      workq->flags = (unsigned int)0;
      do
      {
        (&workq->item_listhead)->stqh_first = (struct work *)(void *)0;
        (&workq->item_listhead)->stqh_last = &(&workq->item_listhead)->stqh_first;
      }
      while((_Bool)0);
      pthread_spin_init(&workq->mtx, 0);
      if(attr == ((const struct anonymous *)NULL))
      {
        workq->queueprio = 1;
        workq->overcommit = 0;
      }

      else
      {
        workq->queueprio = attr->queueprio;
        workq->overcommit = attr->overcommit;
      }
      manager_workqueue_create(workq);
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall_4=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): created queue %p\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_4, (const void *)"pthread_workqueue_create_np", (void *)workq);
        }

      while((_Bool)0);
      *workqp = workq;
      return 0;
    }
  }
}

// pthread_workqueue_init_np
// file src/api.c line 46
signed int pthread_workqueue_init_np(void)
{
  signed int tmp_if_expr_6;
  char *return_value_getenv_4;
  signed int return_value_atoi_5;
  char *return_value_getenv_7;
  signed int return_value_atoi_8;
  signed long int return_value_syscall_11;
  static signed int pwq_initialized = 0;
  if(!(pwq_initialized == 0))
    return 0;

  else
  {
    char *return_value_getenv_1;
    return_value_getenv_1=getenv("PWQ_DEBUG");
    DEBUG_WORKQUEUE = return_value_getenv_1 == (char *)(void *)0 ? 0 : 1;
    char *return_value_getenv_2;
    return_value_getenv_2=getenv("PWQ_RT_THREADS");
    PWQ_RT_THREADS = (unsigned int)(return_value_getenv_2 == (char *)(void *)0 ? 0 : 1);
    char *return_value_getenv_3;
    return_value_getenv_3=getenv("PWQ_ACTIVE_CPU");
    if(return_value_getenv_3 == ((char *)NULL))
      tmp_if_expr_6 = 0;

    else
    {
      return_value_getenv_4=getenv("PWQ_ACTIVE_CPU");
      return_value_atoi_5=atoi(return_value_getenv_4);
      tmp_if_expr_6 = return_value_atoi_5;
    }
    PWQ_ACTIVE_CPU = (unsigned int)tmp_if_expr_6;
    char *return_value_getenv_9;
    return_value_getenv_9=getenv("PWQ_SPIN_THREADS");
    if(!(return_value_getenv_9 == ((char *)NULL)))
    {
      return_value_getenv_7=getenv("PWQ_SPIN_THREADS");
      return_value_atoi_8=atoi(return_value_getenv_7);
      PWQ_SPIN_THREADS = (unsigned int)return_value_atoi_8;
    }

    signed int return_value_manager_init_10;
    return_value_manager_init_10=manager_init();
    if(!(return_value_manager_init_10 >= 0))
      return -1;

    else
    {
      pwq_initialized = 1;
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall_11=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_11, (const void *)"pthread_workqueue_init_np", (const void *)"pthread_workqueue library initialized");
        }

      while((_Bool)0);
      return 0;
    }
  }
}

// pthread_workqueue_peek_np
// file src/api.c line 212
unsigned long int pthread_workqueue_peek_np(const char *key)
{
  unsigned long int return_value_manager_peek_1;
  return_value_manager_peek_1=manager_peek(key);
  return return_value_manager_peek_1;
}

// pthread_workqueue_resume_np
// file src/api.c line 226
void pthread_workqueue_resume_np(void)
{
  manager_resume();
}

// pthread_workqueue_suspend_np
// file src/api.c line 218
void pthread_workqueue_suspend_np(void)
{
  manager_suspend();
}

// ptwq_set_current_thread_priority
// file ./src/thread_rt.h line 32
void ptwq_set_current_thread_priority(signed int priority)
{
  ;
}

// reset_queue_mask
// file src/posix/manager.c line 313
static inline void reset_queue_mask(unsigned int wqlist_index)
{
  unsigned int wqlist_index_bit = (unsigned int)(0x1 << wqlist_index);
  unsigned int new_mask;
  __CPROVER_atomic_begin();
  *(&wqlist_mask) = *(&wqlist_mask) & ~wqlist_index_bit;
  new_mask = *(&wqlist_mask);
  FENCE(WRfence);
  __CPROVER_atomic_end();
  while(!((unsigned int)(signed long int)(new_mask & wqlist_index_bit) == 0u))
  {
    asm("pause");
    __CPROVER_atomic_begin();
    *(&wqlist_mask) = *(&wqlist_mask) & ~wqlist_index_bit;
    new_mask = *(&wqlist_mask);
    FENCE(WRfence);
    __CPROVER_atomic_end();
  }
  goto __CPROVER_DUMP_L3;

__CPROVER_DUMP_L3:
  ;
}

// threads_runnable
// file ./src/thread_info.h line 32
signed int threads_runnable(unsigned int *threads_running, unsigned int *threads_total)
{
  struct __dirstream *dip;
  struct dirent *dit;
  const char *task_path = "/proc/self/task";
  char thread_path[1024l];
  char thread_data[4097l];
  char dummy[4097l];
  char state;
  signed int pid;
  unsigned int running_count = (unsigned int)0;
  unsigned int total_count = (unsigned int)0;
  signed long int return_value_syscall_1;
  do
    if(!(DEBUG_WORKQUEUE == 0))
    {
      return_value_syscall_1=syscall((signed long int)186);
      fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_1, (const void *)"threads_runnable", (const void *)"Checking threads_runnable()");
    }

  while((_Bool)0);
  dip=opendir(task_path);
  signed long int return_value_syscall_2;
  signed int *return_value___errno_location_3;
  char *return_value_strerror_4;
  signed int *return_value___errno_location_5;
  signed long int return_value_syscall_6;
  signed long int return_value_syscall_7;
  signed long int return_value_syscall_11;
  if(dip == ((struct __dirstream *)NULL))
  {
    do
      if(!(DEBUG_WORKQUEUE == 0))
      {
        return_value_syscall_2=syscall((signed long int)186);
        return_value___errno_location_3=__errno_location();
        return_value_strerror_4=strerror(*return_value___errno_location_3);
        return_value___errno_location_5=__errno_location();
        fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_2, (const void *)"threads_runnable", (const void *)"opendir", return_value_strerror_4, *return_value___errno_location_5);
      }

    while((_Bool)0);
    return -1;
  }

  else
  {
    do
    {
      dit=readdir(dip);
      if(dit == ((struct dirent *)NULL))
        break;

      memset((void *)thread_data, 0, sizeof(char [4097l]) /*4097ul*/ );
      sprintf(thread_path, "%s/%s/stat", task_path, (const void *)dit->d_name);
      signed int return_value__read_file_9;
      return_value__read_file_9=_read_file(thread_path, thread_data);
      if(return_value__read_file_9 == 0)
      {
        signed int return_value_sscanf_8;
        return_value_sscanf_8=sscanf(thread_data, "%d %s %c", &pid, (const void *)dummy, &state);
        if(return_value_sscanf_8 == 3)
        {
          total_count = total_count + 1u;
          do
            if(!(DEBUG_WORKQUEUE == 0))
            {
              return_value_syscall_6=syscall((signed long int)186);
              fprintf(stderr, "%s [%d]: %s(): The state for thread %s is %c\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_6, (const void *)"threads_runnable", (const void *)dit->d_name, state);
            }

          while((_Bool)0);
          if((signed int)state == 82)
            running_count = running_count + 1u;

        }

        else
          do
            if(!(DEBUG_WORKQUEUE == 0))
            {
              return_value_syscall_7=syscall((signed long int)186);
              fprintf(stderr, "%s [%d]: %s(): Failed to scan state for thread %s (%s)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_7, (const void *)"threads_runnable", (const void *)dit->d_name, (const void *)thread_data);
            }

          while((_Bool)0);
      }

    }
    while((_Bool)1);
    signed int return_value_closedir_10;
    return_value_closedir_10=closedir(dip);
    if(return_value_closedir_10 == -1)
      perror("closedir");

    do
      if(!(DEBUG_WORKQUEUE == 0))
      {
        return_value_syscall_11=syscall((signed long int)186);
        fprintf(stderr, "%s [%d]: %s(): Running count is %d\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_11, (const void *)"threads_runnable", running_count);
      }

    while((_Bool)0);
    *threads_running = running_count;
    *threads_total = total_count;
    return 0;
  }
}

// valid_workq
// file src/api.c line 37
static signed int valid_workq(struct _pthread_workqueue *workq)
{
  if(workq->sig == 0xBEBEBEBE)
    return 1;

  else
    return 0;
}

// witem_alloc
// file src/private.h line 169
struct work * witem_alloc(void (*func)(void *), void *func_arg)
{
  struct work *witem;
  void *return_value_malloc_1;
  do
  {
    return_value_malloc_1=malloc(sizeof(struct work) /*32ul*/  + (unsigned long int)(64 - 1) & (unsigned long int)~(64 - 1));
    witem = (struct work *)(void *)(signed long int)return_value_malloc_1;
    if(!(witem == ((struct work *)NULL)))
      break;

    sleep((unsigned int)1);
  }
  while((_Bool)1);
  witem->gencount = (unsigned int)0;
  witem->flags = (unsigned int)0;
  witem->item_entry.stqe_next = ((struct work *)NULL);
  witem->func = func;
  witem->func_arg = func_arg;
  return witem;
}

// witem_cache_cleanup
// file src/witem_cache.c line 68
void witem_cache_cleanup(void *value)
{
  (void)value;
}

// witem_cache_init
// file src/witem_cache.c line 37
signed int witem_cache_init(void)
{
  return 0;
}

// witem_free
// file src/witem_cache.c line 61
void witem_free(struct work *wi)
{
  signed long int return_value_syscall_1;
  do
    if(!(DEBUG_WORKQUEUE == 0))
    {
      return_value_syscall_1=syscall((signed long int)186);
      fprintf(stderr, "%s [%d]: %s(): freed work item %p\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_1, (const void *)"witem_free", wi);
    }

  while((_Bool)0);
  free((void *)wi);
}

// worker_idle_threshold_per_cpu
// file src/posix/manager.c line 98
static unsigned int worker_idle_threshold_per_cpu(void)
{
  switch(cpu_count)
  {
    case (unsigned int)0:

    case (unsigned int)1:

    case (unsigned int)2:

    case (unsigned int)4:
      return (unsigned int)2;
    case (unsigned int)6:
      return (unsigned int)4;
    case (unsigned int)8:

    case (unsigned int)12:
      return (unsigned int)6;
    case (unsigned int)16:

    case (unsigned int)24:
      return (unsigned int)8;
    case (unsigned int)32:

    case (unsigned int)64:
      return (unsigned int)12;
    default:
      return cpu_count / (unsigned int)4;
  }
  return (unsigned int)2;
}

// worker_main
// file src/posix/manager.c line 430
static void * worker_main(void *unused)
{
  struct work *witem;
  signed int current_thread_priority = 1;
  signed int queue_priority = 1;
  signed long int return_value_syscall_1;
  do
    if(!(DEBUG_WORKQUEUE == 0))
    {
      return_value_syscall_1=syscall((signed long int)186);
      fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_1, (const void *)"worker_main", (const void *)"worker thread started");
    }

  while((_Bool)0);
  __CPROVER_atomic_begin();
  *(&pending_thread_create) = *(&pending_thread_create) - (unsigned int)1;
  FENCE(WRfence);
  __CPROVER_atomic_end();
  witem=wqlist_scan(&queue_priority, 1);
  if(witem == ((struct work *)NULL))
  {
    witem=wqlist_scan_spin(&queue_priority);
    if(witem == ((struct work *)NULL))
      witem=wqlist_scan_wait(&queue_priority);

  }

  if(!(current_thread_priority == queue_priority) && !(PWQ_RT_THREADS == 0u))
  {
    current_thread_priority = queue_priority;
    ptwq_set_current_thread_priority(current_thread_priority);
  }

  __CPROVER_atomic_begin();
  *(&scoreboard.idle) = *(&scoreboard.idle) - (volatile unsigned int)1;
  FENCE(WRfence);
  __CPROVER_atomic_end();
  witem->func(witem->func_arg);
  __CPROVER_atomic_begin();
  *(&scoreboard.idle) = *(&scoreboard.idle) + (volatile unsigned int)1;
  FENCE(WRfence);
  __CPROVER_atomic_end();
  witem_free(witem);
  return (void *)0;
}

// worker_start
// file src/posix/manager.c line 473
static signed int worker_start(void)
{
  unsigned long int tid;
  signed long int return_value_syscall_1;
  do
    if(!(DEBUG_WORKQUEUE == 0))
    {
      return_value_syscall_1=syscall((signed long int)186);
      fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_1, (const void *)"worker_start", (const void *)"Spawning another worker");
    }

  while((_Bool)0);
  __CPROVER_atomic_begin();
  *(&pending_thread_create) = *(&pending_thread_create) + (unsigned int)1;
  FENCE(WRfence);
  __CPROVER_atomic_end();
  __CPROVER_atomic_begin();
  *(&scoreboard.idle) = *(&scoreboard.idle) + (volatile unsigned int)1;
  FENCE(WRfence);
  __CPROVER_atomic_end();
  __CPROVER_atomic_begin();
  *(&scoreboard.count) = *(&scoreboard.count) + (volatile unsigned int)1;
  FENCE(WRfence);
  __CPROVER_atomic_end();
  signed int return_value_pthread_create_6;
  return_value_pthread_create_6=pthread_create(&tid, &detached_attr, worker_main, (void *)0);
  signed long int return_value_syscall_2;
  signed int *return_value___errno_location_3;
  char *return_value_strerror_4;
  signed int *return_value___errno_location_5;
  if(!(return_value_pthread_create_6 == 0))
  {
    do
      if(!(DEBUG_WORKQUEUE == 0))
      {
        return_value_syscall_2=syscall((signed long int)186);
        return_value___errno_location_3=__errno_location();
        return_value_strerror_4=strerror(*return_value___errno_location_3);
        return_value___errno_location_5=__errno_location();
        fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_2, (const void *)"worker_start", (const void *)"pthread_create(3)", return_value_strerror_4, *return_value___errno_location_5);
      }

    while((_Bool)0);
    __CPROVER_atomic_begin();
    *(&scoreboard.idle) = *(&scoreboard.idle) - (volatile unsigned int)1;
    FENCE(WRfence);
    __CPROVER_atomic_end();
    __CPROVER_atomic_begin();
    *(&scoreboard.count) = *(&scoreboard.count) - (volatile unsigned int)1;
    FENCE(WRfence);
    __CPROVER_atomic_end();
    return -1;
  }

  else
    return 0;
}

// worker_stop
// file src/posix/manager.c line 494
static signed int worker_stop(void)
{
  struct work *witem;
  struct _pthread_workqueue *workq;
  signed int i;
  unsigned int wqlist_index_bit;
  unsigned int new_mask;
  witem=witem_alloc((void (*)(void *))(void *)0, (void *)0);
  pthread_mutex_lock(&wqlist_mtx);
  i = 0;
  for( ; !(i >= 31); i = i + 1)
  {
    workq = wqlist[(signed long int)i];
    if(!(workq == ((struct _pthread_workqueue *)NULL)))
    {
      wqlist_index_bit = (unsigned int)(0x1 << workq->wqlist_index);
      pthread_spin_lock(&workq->mtx);
      __CPROVER_atomic_begin();
      *(&wqlist_mask) = *(&wqlist_mask) | wqlist_index_bit;
      new_mask = *(&wqlist_mask);
      FENCE(WRfence);
      __CPROVER_atomic_end();
      while((new_mask & wqlist_index_bit) == 0u)
      {
        asm("pause");
        __CPROVER_atomic_begin();
        *(&wqlist_mask) = *(&wqlist_mask) | wqlist_index_bit;
        new_mask = *(&wqlist_mask);
        FENCE(WRfence);
        __CPROVER_atomic_end();
      }
      do
      {
        witem->item_entry.stqe_next = (struct work *)(void *)0;
        *(&workq->item_listhead)->stqh_last = witem;
        (&workq->item_listhead)->stqh_last = &witem->item_entry.stqe_next;
      }
      while((_Bool)0);
      pthread_spin_unlock(&workq->mtx);
      pthread_cond_signal(&wqlist_has_work);
      pthread_mutex_unlock(&wqlist_mtx);
      return 0;
    }

  }
  signed long int return_value_syscall_1;
  do
    if(!(DEBUG_WORKQUEUE == 0))
    {
      return_value_syscall_1=syscall((signed long int)186);
      fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_1, (const void *)"worker_stop", (const void *)"Attempting to add a workitem without a workqueue");
    }

  while((_Bool)0);
  abort();
  return -1;
}

// wqlist_scan
// file src/posix/manager.c line 335
static struct work * wqlist_scan(signed int *queue_priority, signed int skip_thread_exit_events)
{
  struct _pthread_workqueue *workq;
  struct work *witem = (struct work *)(void *)0;
  signed int idx;
  idx=ffs((signed int)wqlist_mask);
  _Bool tmp_if_expr_1;
  if(idx == 0)
    return (struct work *)(void *)0;

  else
  {
    workq = wqlist[(signed long int)(idx - 1)];
    pthread_spin_lock(&workq->mtx);
    witem = (&workq->item_listhead)->stqh_first;
    if(!(witem == ((struct work *)NULL)))
    {
      if(!(skip_thread_exit_events == 0))
        tmp_if_expr_1 = witem->func == (void (*)(void *))(void *)0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      if(!tmp_if_expr_1)
      {
        do
        {
          (&workq->item_listhead)->stqh_first = (&workq->item_listhead)->stqh_first->item_entry.stqe_next;
          if(workq->item_listhead.stqh_first == ((struct work *)NULL))
            (&workq->item_listhead)->stqh_last = &(&workq->item_listhead)->stqh_first;

        }
        while((_Bool)0);
        if(workq->item_listhead.stqh_first == ((struct work *)NULL))
          reset_queue_mask(workq->wqlist_index);

        *queue_priority = workq->queueprio;
      }

      else
        witem = (struct work *)(void *)0;
    }

    pthread_spin_unlock(&workq->mtx);
    return witem;
  }
}

// wqlist_scan_spin
// file src/posix/manager.c line 377
static struct work * wqlist_scan_spin(signed int *queue_priority)
{
  struct work *witem = (struct work *)(void *)0;
  volatile unsigned int return_value___sync_add_and_fetch_1;
  __CPROVER_atomic_begin();
  *(&current_threads_spinning) = *(&current_threads_spinning) + (volatile unsigned int)1;
  return_value___sync_add_and_fetch_1 = *(&current_threads_spinning);
  FENCE(WRfence);
  __CPROVER_atomic_end();
  if(PWQ_SPIN_THREADS >= return_value___sync_add_and_fetch_1)
  {
    do
    {
      witem=wqlist_scan(queue_priority, 1);
      if(!(witem == ((struct work *)NULL)))
        break;

      asm("pause");
    }
    while((_Bool)1);
    if(scoreboard.idle == 1u)
      sem_post(&scoreboard.sb_sem);

  }

  __CPROVER_atomic_begin();
  *(&current_threads_spinning) = *(&current_threads_spinning) - (volatile unsigned int)1;
  FENCE(WRfence);
  __CPROVER_atomic_end();
  return witem;
}

// wqlist_scan_wait
// file src/posix/manager.c line 401
static struct work * wqlist_scan_wait(signed int *queue_priority)
{
  struct work *witem = (struct work *)(void *)0;
  pthread_mutex_lock(&wqlist_mtx);
  do
  {
    witem=wqlist_scan(queue_priority, 0);
    if(!(witem == ((struct work *)NULL)))
      break;

    pthread_cond_wait(&wqlist_has_work, &wqlist_mtx);
  }
  while((_Bool)1);
  pthread_mutex_unlock(&wqlist_mtx);
  if(scoreboard.idle == 1u)
    sem_post(&scoreboard.sb_sem);

  signed long int return_value_syscall_1;
  if(witem->func == ((void (*)(void *))NULL))
  {
    do
      if(!(DEBUG_WORKQUEUE == 0))
      {
        return_value_syscall_1=syscall((signed long int)186);
        fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall_1, (const void *)"wqlist_scan_wait", (const void *)"worker exiting..");
      }

    while((_Bool)0);
    __CPROVER_atomic_begin();
    *(&scoreboard.idle) = *(&scoreboard.idle) - (volatile unsigned int)1;
    FENCE(WRfence);
    __CPROVER_atomic_end();
    __CPROVER_atomic_begin();
    *(&scoreboard.count) = *(&scoreboard.count) - (volatile unsigned int)1;
    FENCE(WRfence);
    __CPROVER_atomic_end();
    witem_free(witem);
    pthread_exit(NULL);
  }

  return witem;
}

