// tag-#anon#ST[ARR16{U64}_U64_'__bits'|]
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 125
struct anonymous_1;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_2;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_0;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_3;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous;

// tag-#anon#UN[SYM#tag-io_iocb_common#'c'||SYM#tag-io_iocb_vector#'v'||SYM#tag-io_iocb_poll#'poll'||SYM#tag-io_iocb_sockaddr#'saddr'|]
// file /usr/include/libaio.h line 126
union anonymous_4;

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

// tag-dev_info
// file btreplay.c line 74
struct dev_info;

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-io_bunch
// file btrecord.h line 58
struct io_bunch;

// tag-io_bunch_hdr
// file btrecord.h line 34
struct io_bunch_hdr;

// tag-io_context
// file /usr/include/libaio.h line 37
struct io_context;

// tag-io_event
// file /usr/include/libaio.h line 134
struct io_event;

// tag-io_file_hdr
// file btrecord.h line 71
struct io_file_hdr;

// tag-io_iocb_common
// file /usr/include/libaio.h line 103
struct io_iocb_common;

// tag-io_iocb_poll
// file /usr/include/libaio.h line 94
struct io_iocb_poll;

// tag-io_iocb_sockaddr
// file /usr/include/libaio.h line 98
struct io_iocb_sockaddr;

// tag-io_iocb_vector
// file /usr/include/libaio.h line 112
struct io_iocb_vector;

// tag-io_pkt
// file btrecord.h line 46
struct io_pkt;

// tag-iocb
// file /usr/include/libaio.h line 118
struct iocb;

// tag-iocb_pkt
// file btreplay.c line 125
struct iocb_pkt;

// tag-iovec
// file /usr/include/x86_64-linux-gnu/bits/uio.h line 43
struct iovec;

// tag-list_head
// file ../btt/list.h line 34
struct list_head;

// tag-map_dev
// file btreplay.c line 63
struct map_dev;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-sockaddr
// file /usr/include/libaio.h line 34
struct sockaddr;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-thr_info
// file btreplay.c line 104
struct thr_info;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

#ifndef NULL
#define NULL ((void*)0)
#endif

// INIT_LIST_HEAD
// file ../btt/list.h line 43
static inline void INIT_LIST_HEAD(struct list_head *list);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __find_input_files
// file btreplay.c line 978
static void __find_input_files(struct dev_info *dip);
// __list_add
// file ../btt/list.h line 55
static inline void __list_add(struct list_head *new, struct list_head *prev, struct list_head *next);
// __list_del
// file ../btt/list.h line 98
static inline void __list_del(struct list_head *prev, struct list_head *next);
// __list_splice
// file ../btt/list.h line 191
static inline void __list_splice(struct list_head *list, struct list_head *head);
// __sched_cpualloc
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 205
extern struct anonymous_1 * __sched_cpualloc(unsigned long int);
// __set_cv
// file btreplay.c line 390
static inline void __set_cv(union anonymous *pmp, union anonymous_3 *pcp, volatile signed int *vp, signed int mxv);
// __wait_cv
// file btreplay.c line 408
static inline void __wait_cv(union anonymous *pmp, union anonymous_3 *pcp, volatile signed int *vp, signed int mxv);
// access
// file /usr/include/unistd.h line 287
extern signed int access(const char *, signed int);
// add_input_dev
// file btreplay.c line 581
static void add_input_dev(char *devnm);
// add_input_file
// file btreplay.c line 875
static void add_input_file(signed int cpu, char *devnm, char *file_name);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// buf_alloc
// file btreplay.c line 323
static inline void * buf_alloc(unsigned long int nbytes);
// clock_getres
// file /usr/include/time.h line 339
extern signed int clock_getres(signed int, struct timespec *);
// clock_gettime
// file /usr/include/time.h line 342
extern signed int clock_gettime(signed int, struct timespec *);
// clock_settime
// file /usr/include/time.h line 345
extern signed int clock_settime(signed int, struct timespec *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closedir
// file /usr/include/dirent.h line 149
extern signed int closedir(struct __dirstream *);
// du64_to_nsec
// file btreplay.c line 233
static inline unsigned long long int du64_to_nsec(unsigned long long int du64);
// du64_to_sec
// file btreplay.c line 228
static inline unsigned long long int du64_to_sec(unsigned long long int du64);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fatal
// file btreplay.c line 212
static inline void fatal(const char *errstring, const signed int exitval, const char *fmt, ...);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// find_input_devs
// file btreplay.c line 607
static void find_input_devs(char *idir);
// find_input_files
// file btreplay.c line 1005
static void find_input_files(void);
// fopen
// file /usr/include/stdio.h line 283
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
// fstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 219
extern signed int fstat(signed int, struct stat *);
// get_ncpus
// file btreplay.c line 503
static void get_ncpus(void);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// getpagesize
// file /usr/include/unistd.h line 978
extern signed int getpagesize(void);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// gettime
// file btreplay.c line 338
static inline unsigned long long int gettime(void);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// handle_args
// file btreplay.c line 1490
static void handle_args(signed int argc, char **argv);
// index
// file /usr/include/string.h line 488
extern char * index(const char *, signed int);
// io_destroy
// file /usr/include/libaio.h line 156
extern signed int io_destroy(struct io_context *);
// io_getevents
// file /usr/include/libaio.h line 159
extern signed int io_getevents(struct io_context *, signed long int, signed long int, struct io_event *, struct timespec *);
// io_prep_pread
// file /usr/include/libaio.h line 167
static inline void io_prep_pread(struct iocb *iocb, signed int fd, void *buf, unsigned long int count, signed long long int offset);
// io_prep_pwrite
// file /usr/include/libaio.h line 178
static inline void io_prep_pwrite(struct iocb *iocb, signed int fd, void *buf, unsigned long int count, signed long long int offset);
// io_setup
// file /usr/include/libaio.h line 155
extern signed int io_setup(signed int, struct io_context **);
// io_submit
// file /usr/include/libaio.h line 157
extern signed int io_submit(struct io_context *, signed long int, struct iocb **);
// iocb_init
// file btreplay.c line 717
static void iocb_init(struct thr_info *tip, struct iocb_pkt *iocbp);
// iocb_setup
// file btreplay.c line 731
static void iocb_setup(struct iocb_pkt *iocbp, signed int rw, signed int n, signed long long int off);
// iocbs_map
// file btreplay.c line 1230
static void iocbs_map(struct thr_info *tip, struct iocb **list, struct io_pkt *pkts, signed int ntodo);
// is_reap_done
// file btreplay.c line 276
static inline signed int is_reap_done(struct thr_info *tip);
// is_send_done
// file btreplay.c line 267
static inline signed int is_send_done(struct thr_info *tip);
// labs
// file /usr/include/stdlib.h line 775
extern signed long int labs(signed long int);
// list_add_tail
// file ../btt/list.h line 86
static inline void list_add_tail(struct list_head *new, struct list_head *head);
// list_del
// file ../btt/list.h line 110
static inline void list_del(struct list_head *entry);
// list_empty
// file ../btt/list.h line 165
static inline signed int list_empty(struct list_head *head);
// list_len
// file ../btt/list.h line 149
static inline signed int list_len(struct list_head *head_p);
// list_move_tail
// file ../btt/list.h line 184
static inline void list_move_tail(struct list_head *list, struct list_head *head);
// list_splice
// file ../btt/list.h line 210
static inline void list_splice(struct list_head *list, struct list_head *head);
// llabs
// file /usr/include/stdlib.h line 779
extern signed long long int llabs(signed long long int);
// lseek
// file /usr/include/unistd.h line 337
extern signed long int lseek(signed int, signed long int, signed int);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// map_dev
// file btreplay.c line 692
static char * map_dev(char *from_dev);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// min
// file btreplay.c line 241
static inline signed int min(signed int a, signed int b);
// minl
// file btreplay.c line 249
static inline signed long int minl(signed long int a, signed long int b);
// mk_btversion
// file btrecord.h line 78
static inline unsigned long long int mk_btversion(signed int mjr, signed int mnr, signed int sub);
// nanosleep
// file /usr/include/time.h line 334
extern signed int nanosleep(struct timespec *, struct timespec *);
// next_bunch
// file btreplay.c line 1137
static signed int next_bunch(struct thr_info *tip, struct io_bunch *bunch);
// nfree_current
// file btreplay.c line 1170
static signed int nfree_current(struct thr_info *tip);
// open
// file /usr/include/fcntl.h line 149
extern signed int open(const char *, signed int, ...);
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// pin_to_cpu
// file btreplay.c line 543
static void pin_to_cpu(struct thr_info *tip);
// posix_memalign
// file /usr/include/stdlib.h line 503
extern signed int posix_memalign(void **, unsigned long int, unsigned long int);
// process_bunch
// file btreplay.c line 1271
static void process_bunch(struct thr_info *tip, struct io_bunch *bunch);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous_3 *);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous_3 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous_3 *, const union anonymous_0 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_3 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_3 *, union anonymous *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous *, const union anonymous_0 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// read_map_devs
// file btreplay.c line 646
static void read_map_devs(char *file_name);
// readdir
// file /usr/include/dirent.h line 165
extern struct dirent * readdir(struct __dirstream *);
// reap_wait_aios
// file btreplay.c line 1025
static signed int reap_wait_aios(struct thr_info *tip);
// reclaim_ios
// file btreplay.c line 1052
static void reclaim_ios(struct thr_info *tip, signed long int naios_out);
// release_map_devs
// file btreplay.c line 671
static void release_map_devs(void);
// rem_input_dev
// file btreplay.c line 600
static void rem_input_dev(struct dev_info *dip);
// rem_input_file
// file btreplay.c line 950
static void rem_input_file(struct thr_info *tip);
// rem_input_files
// file btreplay.c line 966
static void rem_input_files(void);
// replay_rec
// file btreplay.c line 1109
static void * replay_rec(void *arg);
// replay_sub
// file btreplay.c line 1334
static void * replay_sub(void *arg);
// reset_input_file
// file btreplay.c line 1319
static void reset_input_file(struct thr_info *tip);
// sched_getaffinity
// file /usr/include/sched.h line 122
extern signed int sched_getaffinity(signed int, unsigned long int, struct anonymous_1 *);
// sched_setaffinity
// file /usr/include/sched.h line 118
extern signed int sched_setaffinity(signed int, unsigned long int, const struct anonymous_1 *);
// set_iter_done
// file btreplay.c line 454
static inline void set_iter_done(void);
// set_reclaim_done
// file btreplay.c line 418
static inline void set_reclaim_done(void);
// set_replay_done
// file btreplay.c line 442
static inline void set_replay_done(void);
// set_replay_ready
// file btreplay.c line 430
static inline void set_replay_ready(void);
// set_signal_done
// file btreplay.c line 1606
static void set_signal_done(signed int signum);
// setlinebuf
// file /usr/include/stdio.h line 347
extern void setlinebuf(struct _IO_FILE *);
// setup_signal
// file btreplay.c line 368
static inline void setup_signal(signed int signum, void (*handler)(signed int));
// setup_signal::_tmp::return_value_signal_1_object
//
void return_value_signal_1_object(signed int);
// setup_signal::handler_object
//
void handler_object(signed int);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// stall
// file btreplay.c line 1193
static void stall(struct thr_info *tip, signed long long int oclock);
// start_iter
// file btreplay.c line 485
static inline void start_iter(void);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// tip_init
// file btreplay.c line 774
static void tip_init(struct thr_info *tip);
// tip_release
// file btreplay.c line 835
static void tip_release(struct thr_info *tip);
// touch_memory
// file btreplay.c line 307
static inline void touch_memory(char *buf, unsigned long int bsize);
// ts2ns
// file btreplay.c line 285
static inline unsigned long long int ts2ns(struct timespec *ts);
// tv2ns
// file btreplay.c line 293
static inline unsigned long long int tv2ns(struct timeval *tp);
// usage
// file btreplay.c line 257
static inline void usage(void);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// wait_iter_start
// file btreplay.c line 472
static inline void wait_iter_start(void);
// wait_iters_done
// file btreplay.c line 460
static inline void wait_iters_done(void);
// wait_reclaims_done
// file btreplay.c line 424
static inline void wait_reclaims_done(void);
// wait_replays_done
// file btreplay.c line 448
static inline void wait_replays_done(void);
// wait_replays_ready
// file btreplay.c line 436
static inline void wait_replays_ready(void);

struct anonymous_1
{
  // __bits
  unsigned long int __bits[16l];
};

struct anonymous_2
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

union anonymous_0
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_3
{
  // __data
  struct anonymous_2 __data;
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

union anonymous
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct io_iocb_common
{
  // buf
  void *buf;
  // nbytes
  unsigned long int nbytes;
  // offset
  signed long long int offset;
  // __pad3
  signed long long int __pad3;
  // flags
  unsigned int flags;
  // resfd
  unsigned int resfd;
};

struct io_iocb_vector
{
  // vec
  struct iovec *vec;
  // nr
  signed int nr;
  // offset
  signed long long int offset;
};

struct io_iocb_poll
{
  // events
  signed int events;
  // __pad1
  signed int __pad1;
};

struct io_iocb_sockaddr
{
  // addr
  struct sockaddr *addr;
  // len
  signed int len;
};

union anonymous_4
{
  // c
  struct io_iocb_common c;
  // v
  struct io_iocb_vector v;
  // poll
  struct io_iocb_poll poll;
  // saddr
  struct io_iocb_sockaddr saddr;
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

struct list_head
{
  // next
  struct list_head *next;
  // prev
  struct list_head *prev;
};

struct dev_info
{
  // head
  struct list_head head;
  // devnm
  char *devnm;
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

struct io_bunch_hdr
{
  // npkts
  unsigned long long int npkts;
  // time_stamp
  unsigned long long int time_stamp;
};

struct io_pkt
{
  // sector
  unsigned long long int sector;
  // nbytes
  unsigned long long int nbytes;
  // rw
  unsigned int rw;
};

struct io_bunch
{
  // hdr
  struct io_bunch_hdr hdr;
  // pkts
  struct io_pkt pkts[512l];
};

struct io_event
{
  // data
  void *data;
  // obj
  struct iocb *obj;
  // res
  unsigned long int res;
  // res2
  unsigned long int res2;
};

struct io_file_hdr
{
  // version
  unsigned long long int version;
  // genesis
  unsigned long long int genesis;
  // nbunches
  unsigned long long int nbunches;
  // total_pkts
  unsigned long long int total_pkts;
};

struct iocb
{
  // data
  void *data;
  // key
  unsigned int key;
  // __pad2
  unsigned int __pad2;
  // aio_lio_opcode
  signed short int aio_lio_opcode;
  // aio_reqprio
  signed short int aio_reqprio;
  // aio_fildes
  signed int aio_fildes;
  // u
  union anonymous_4 u;
};

struct iocb_pkt
{
  // iocb
  struct iocb iocb;
  // head
  struct list_head head;
  // tip
  struct thr_info *tip;
  // nbytes
  signed int nbytes;
};

struct iovec
{
  // iov_base
  void *iov_base;
  // iov_len
  unsigned long int iov_len;
};

struct map_dev
{
  // head
  struct list_head head;
  // from_dev
  char *from_dev;
  // to_dev
  char *to_dev;
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

struct thr_info
{
  // head
  struct list_head head;
  // free_iocbs
  struct list_head free_iocbs;
  // used_iocbs
  struct list_head used_iocbs;
  // mutex
  union anonymous mutex;
  // cond
  union anonymous_3 cond;
  // naios_out
  volatile signed long int naios_out;
  // naios_free
  volatile signed long int naios_free;
  // send_wait
  volatile signed int send_wait;
  // reap_wait
  volatile signed int reap_wait;
  // send_done
  volatile signed int send_done;
  // reap_done
  volatile signed int reap_done;
  // sub_thread
  unsigned long int sub_thread;
  // rec_thread
  unsigned long int rec_thread;
  // ctx
  struct io_context *ctx;
  // devnm
  char *devnm;
  // file_name
  char *file_name;
  // cpu
  signed int cpu;
  // ifd
  signed int ifd;
  // ofd
  signed int ofd;
  // iterations
  signed int iterations;
  // vfp
  struct _IO_FILE *vfp;
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


// acc_factor
// file btreplay.c line 157
static unsigned int acc_factor = (unsigned int)1;
// btver_mjr
// file btrecord.h line 91
static signed int btver_mjr = 1;
// btver_mnr
// file btrecord.h line 92
static signed int btver_mnr = 0;
// btver_sub
// file btrecord.h line 93
static signed int btver_sub = 0;
// build_date
// file btreplay.c line 21
static char build_date[24l] = { 'J', 'a', 'n', ' ', '2', '5', ' ', '2', '0', '1', '6', ' ', 'a', 't', ' ', '1', '8', ':', '2', '3', ':', '0', '8', 0 };
// cpus_to_use
// file btreplay.c line 142
static signed int cpus_to_use = -1;
// def_iterations
// file btreplay.c line 143
static signed int def_iterations = 1;
// find_records
// file btreplay.c line 158
static signed int find_records = 0;
// genesis
// file btreplay.c line 148
static unsigned long long int genesis = (unsigned long long int)~0;
// ibase
// file btreplay.c line 140
static char *ibase = "replay";
// idir
// file btreplay.c line 141
static char *idir = ".";
// input_devs
// file btreplay.c line 152
static struct list_head input_devs;
// input_devs
// file btreplay.c line 152
static struct list_head input_devs = { .next=&input_devs, .prev=&input_devs };
// input_files
// file btreplay.c line 153
static struct list_head input_files;
// input_files
// file btreplay.c line 153
static struct list_head input_files = { .next=&input_files, .prev=&input_files };
// iter_done_cond
// file btreplay.c line 183
static union anonymous_3 iter_done_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// iter_done_mutex
// file btreplay.c line 182
static union anonymous iter_done_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// iter_start
// file btreplay.c line 185
static volatile signed int iter_start = 0;
// iter_start_cond
// file btreplay.c line 187
static union anonymous_3 iter_start_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// iter_start_mutex
// file btreplay.c line 186
static union anonymous iter_start_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// l_opts
// file btreplay.c line 1405
static struct option l_opts[13l] = { { .name="cpus", .has_arg=1, .flag=(signed int *)(void *)0, .val=99 },
    { .name="input-directory", .has_arg=1, .flag=(signed int *)(void *)0, .val=100 },
    { .name="find-records", .has_arg=0, .flag=(signed int *)(void *)0, .val=70 },
    { .name="help", .has_arg=0, .flag=(signed int *)(void *)0, .val=104 },
    { .name="input-base", .has_arg=1, .flag=(signed int *)(void *)0, .val=105 },
    { .name="iterations", .has_arg=1, .flag=(signed int *)(void *)0, .val=73 },
    { .name="map-devs", .has_arg=1, .flag=(signed int *)(void *)0, .val=77 },
    { .name="no-stalls", .has_arg=0, .flag=(signed int *)(void *)0, .val=78 },
    { .name="acc-factor", .has_arg=1, .flag=(signed int *)(void *)0, .val=120 },
    { .name="verbose", .has_arg=0, .flag=(signed int *)(void *)0, .val=118 },
    { .name="version", .has_arg=0, .flag=(signed int *)(void *)0, .val=86 },
    { .name="write-enable", .has_arg=0, .flag=(signed int *)(void *)0, .val=87 },
    { .name=(const char *)(void *)0, .has_arg=0, .flag=((signed int *)NULL),
    .val=0 } };
// map_devs
// file btreplay.c line 154
static struct list_head map_devs;
// map_devs
// file btreplay.c line 154
static struct list_head map_devs = { .next=&map_devs, .prev=&map_devs };
// my_btversion
// file btrecord.h line 90
static char my_btversion[6l] = { '1', '.', '0', '.', '0', 0 };
// n_iters_done
// file btreplay.c line 181
static volatile signed int n_iters_done = 0;
// n_reclaims_done
// file btreplay.c line 169
static volatile signed int n_reclaims_done = 0;
// n_replays_done
// file btreplay.c line 173
static volatile signed int n_replays_done = 0;
// n_replays_ready
// file btreplay.c line 177
static volatile signed int n_replays_ready = 0;
// naios
// file btreplay.c line 144
static signed int naios = 512;
// nb_sec
// file btreplay.c line 151
static signed int nb_sec = 512;
// ncpus
// file btreplay.c line 145
static signed int ncpus = 0;
// nfiles
// file btreplay.c line 155
static signed int nfiles = 0;
// no_stalls
// file btreplay.c line 156
static signed int no_stalls = 0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// pgsize
// file btreplay.c line 150
static unsigned long int pgsize;
// reclaim_done_cond
// file btreplay.c line 171
static union anonymous_3 reclaim_done_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// reclaim_done_mutex
// file btreplay.c line 170
static union anonymous reclaim_done_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// replay_done_cond
// file btreplay.c line 175
static union anonymous_3 replay_done_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// replay_done_mutex
// file btreplay.c line 174
static union anonymous replay_done_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// replay_ready_cond
// file btreplay.c line 179
static union anonymous_3 replay_ready_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// replay_ready_mutex
// file btreplay.c line 178
static union anonymous replay_ready_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// rgenesis
// file btreplay.c line 149
static unsigned long long int rgenesis;
// signal_done
// file btreplay.c line 138
static volatile signed int signal_done = 0;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// usage_str
// file btreplay.c line 197
static char usage_str[702l] = { '\n', '\t', '[', ' ', '-', 'c', ' ', '<', 'c', 'p', 'u', 's', '>', ' ', ':', ' ', '-', '-', 'c', 'p', 'u', 's', '=', '<', 'c', 'p', 'u', 's', '>', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ']', ' ', 'D', 'e', 'f', 'a', 'u', 'l', 't', ':', ' ', '1', '\n', '\t', '[', ' ', '-', 'd', ' ', '<', 'd', 'i', 'r', '>', ' ', ' ', ':', ' ', '-', '-', 'i', 'n', 'p', 'u', 't', '-', 'd', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'y', '=', '<', 'd', 'i', 'r', '>', ' ', ']', ' ', 'D', 'e', 'f', 'a', 'u', 'l', 't', ':', ' ', '.', '\n', '\t', '[', ' ', '-', 'F', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ':', ' ', '-', '-', 'f', 'i', 'n', 'd', '-', 'r', 'e', 'c', 'o', 'r', 'd', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ']', ' ', 'D', 'e', 'f', 'a', 'u', 'l', 't', ':', ' ', 'O', 'f', 'f', '\n', '\t', '[', ' ', '-', 'h', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ':', ' ', '-', '-', 'h', 'e', 'l', 'p', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ']', ' ', 'D', 'e', 'f', 'a', 'u', 'l', 't', ':', ' ', 'O', 'f', 'f', '\n', '\t', '[', ' ', '-', 'i', ' ', '<', 'b', 'a', 's', 'e', '>', ' ', ':', ' ', '-', '-', 'i', 'n', 'p', 'u', 't', '-', 'b', 'a', 's', 'e', '=', '<', 'b', 'a', 's', 'e', '>', ' ', ' ', ' ', ' ', ' ', ']', ' ', 'D', 'e', 'f', 'a', 'u', 'l', 't', ':', ' ', 'r', 'e', 'p', 'l', 'a', 'y', '\n', '\t', '[', ' ', '-', 'I', ' ', '<', 'i', 't', 'e', 'r', 's', '>', ':', ' ', '-', '-', 'i', 't', 'e', 'r', 'a', 't', 'i', 'o', 'n', 's', '=', '<', 'i', 't', 'e', 'r', 's', '>', ' ', ' ', ' ', ' ', ']', ' ', 'D', 'e', 'f', 'a', 'u', 'l', 't', ':', ' ', '1', '\n', '\t', '[', ' ', '-', 'M', ' ', '<', 'f', 'i', 'l', 'e', '>', ' ', ':', ' ', '-', '-', 'm', 'a', 'p', '-', 'd', 'e', 'v', 's', '=', '<', 'f', 'i', 'l', 'e', '>', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ']', ' ', 'D', 'e', 'f', 'a', 'u', 'l', 't', ':', ' ', 'N', 'o', 'n', 'e', '\n', '\t', '[', ' ', '-', 'N', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ':', ' ', '-', '-', 'n', 'o', '-', 's', 't', 'a', 'l', 'l', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ']', ' ', 'D', 'e', 'f', 'a', 'u', 'l', 't', ':', ' ', 'O', 'f', 'f', '\n', '\t', '[', ' ', '-', 'x', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ':', ' ', '-', '-', 'a', 'c', 'c', '-', 'f', 'a', 'c', 't', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ']', ' ', 'D', 'e', 'f', 'a', 'u', 'l', 't', ':', ' ', '1', '\n', '\t', '[', ' ', '-', 'v', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ':', ' ', '-', '-', 'v', 'e', 'r', 'b', 'o', 's', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ']', ' ', 'D', 'e', 'f', 'a', 'u', 'l', 't', ':', ' ', 'O', 'f', 'f', '\n', '\t', '[', ' ', '-', 'V', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ':', ' ', '-', '-', 'v', 'e', 'r', 's', 'i', 'o', 'n', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ']', ' ', 'D', 'e', 'f', 'a', 'u', 'l', 't', ':', ' ', 'O', 'f', 'f', '\n', '\t', '[', ' ', '-', 'W', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ':', ' ', '-', '-', 'w', 'r', 'i', 't', 'e', '-', 'e', 'n', 'a', 'b', 'l', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ']', ' ', 'D', 'e', 'f', 'a', 'u', 'l', 't', ':', ' ', 'O', 'f', 'f', '\n', '\t', '<', 'd', 'e', 'v', '.', '.', '.', '>', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'D', 'e', 'f', 'a', 'u', 'l', 't', ':', ' ', 'N', 'o', 'n', 'e', '\n', '\n', 0 };
// verbose
// file btreplay.c line 146
static signed int verbose = 0;
// write_enabled
// file btreplay.c line 147
static signed int write_enabled = 0;

// INIT_LIST_HEAD
// file ../btt/list.h line 43
static inline void INIT_LIST_HEAD(struct list_head *list)
{
  list->next = list;
  list->prev = list;
}

// __find_input_files
// file btreplay.c line 978
static void __find_input_files(struct dev_info *dip)
{
  signed int cpu = 0;
  do
  {
    char full_name[4096l];
    sprintf(full_name, "%s/%s.%s.%d", idir, dip->devnm, ibase, cpu);
    signed int return_value_access_1;
    return_value_access_1=access(full_name, 4);
    if(!(return_value_access_1 == 0))
      break;

    add_input_file(cpu, dip->devnm, full_name);
    cpu = cpu + 1;
  }
  while((_Bool)1);
  if(cpu == 0)
    fatal((const char *)(void *)0, 1, "No traces found for %s\n", dip->devnm);

  rem_input_dev(dip);
}

// __list_add
// file ../btt/list.h line 55
static inline void __list_add(struct list_head *new, struct list_head *prev, struct list_head *next)
{
  next->prev = new;
  new->next = next;
  new->prev = prev;
  prev->next = new;
}

// __list_del
// file ../btt/list.h line 98
static inline void __list_del(struct list_head *prev, struct list_head *next)
{
  next->prev = prev;
  prev->next = next;
}

// __list_splice
// file ../btt/list.h line 191
static inline void __list_splice(struct list_head *list, struct list_head *head)
{
  struct list_head *first = list->next;
  struct list_head *last = list->prev;
  struct list_head *at = head->next;
  first->prev = head;
  head->next = first;
  last->next = at;
  at->prev = last;
}

// __set_cv
// file btreplay.c line 390
static inline void __set_cv(union anonymous *pmp, union anonymous_3 *pcp, volatile signed int *vp, signed int mxv)
{
  pthread_mutex_lock(pmp);
  *vp = *vp + 1;
  pthread_cond_signal(pcp);
  pthread_mutex_unlock(pmp);
}

// __wait_cv
// file btreplay.c line 408
static inline void __wait_cv(union anonymous *pmp, union anonymous_3 *pcp, volatile signed int *vp, signed int mxv)
{
  pthread_mutex_lock(pmp);
  while(!(*vp >= mxv))
    pthread_cond_wait(pcp, pmp);
  *vp = 0;
  pthread_mutex_unlock(pmp);
}

// add_input_dev
// file btreplay.c line 581
static void add_input_dev(char *devnm)
{
  struct list_head *p;
  struct dev_info *dip;
  p = (&input_devs)->next;
  struct dev_info *tmp_statement_expression_1;
  for( ; !(p == &input_devs); p = p->next)
  {
    const struct list_head *__mptr = p;
    tmp_statement_expression_1 = (struct dev_info *)((char *)__mptr - (signed long int)(unsigned long int)&((struct dev_info *)0)->head);
    dip = tmp_statement_expression_1;
    signed int return_value_strcmp_2;
    return_value_strcmp_2=strcmp(dip->devnm, devnm);
    if(return_value_strcmp_2 == 0)
      goto __CPROVER_DUMP_L4;

  }
  void *return_value_malloc_3;
  return_value_malloc_3=malloc(sizeof(struct dev_info) /*24ul*/ );
  dip = (struct dev_info *)return_value_malloc_3;
  dip->devnm=strdup(devnm);
  list_add_tail(&dip->head, &input_devs);

__CPROVER_DUMP_L4:
  ;
}

// add_input_file
// file btreplay.c line 875
static void add_input_file(signed int cpu, char *devnm, char *file_name)
{
  struct stat buf;
  struct io_file_hdr hdr;
  struct thr_info *tip;
  void *return_value_buf_alloc_1;
  return_value_buf_alloc_1=buf_alloc(sizeof(struct thr_info) /*232ul*/ );
  tip = (struct thr_info *)return_value_buf_alloc_1;
  unsigned long long int my_version;
  my_version=mk_btversion(btver_mjr, btver_mnr, btver_sub);
  memset((void *)&hdr, 0, sizeof(struct io_file_hdr) /*32ul*/ );
  memset((void *)tip, 0, sizeof(struct thr_info) /*232ul*/ );
  tip->cpu = cpu % cpus_to_use;
  tip->iterations = def_iterations;
  tip->ifd=open(file_name, 00);
  if(!(tip->ifd >= 0))
    fatal(file_name, 1, "Unable to open\n");

  signed int return_value_fstat_2;
  return_value_fstat_2=fstat(tip->ifd, &buf);
  if(!(return_value_fstat_2 >= 0))
    fatal(file_name, 2, "fstat failed\n");

  signed long int return_value_read_3;
  if(!(buf.st_size >= (signed long int)sizeof(struct io_file_hdr) /*32l*/ ))
  {
    if(!(verbose == 0))
      fprintf(stderr, "\t%s empty\n", file_name);

  }

  else
  {
    return_value_read_3=read(tip->ifd, (void *)&hdr, sizeof(struct io_file_hdr) /*32ul*/ );
    if(!((unsigned long int)return_value_read_3 == sizeof(struct io_file_hdr) /*32ul*/ ))
      fatal(file_name, 1, "Header read failed\n");

    if(!(hdr.version == my_version))
    {
      fprintf(stderr, "%llx %llx %llx %llx\n", (unsigned long long int)hdr.version, (unsigned long long int)hdr.genesis, (unsigned long long int)hdr.nbunches, (unsigned long long int)hdr.total_pkts);
      fatal((const char *)(void *)0, 1, "BT version mismatch: %lx versus my %lx\n", (signed long int)hdr.version, (signed long int)my_version);
    }

    if(!(hdr.nbunches == 0ul))
      goto __CPROVER_DUMP_L8;

  }

empty_file:
  ;
  close(tip->ifd);
  free((void *)tip);
  goto __CPROVER_DUMP_L12;

__CPROVER_DUMP_L8:
  ;
  unsigned long long int return_value_du64_to_sec_4;
  unsigned long long int return_value_du64_to_nsec_5;
  if(!(hdr.genesis >= genesis))
  {
    if(verbose >= 2)
    {
      return_value_du64_to_sec_4=du64_to_sec(hdr.genesis);
      return_value_du64_to_nsec_5=du64_to_nsec(hdr.genesis);
      fprintf(stderr, "Setting genesis to %llu.%llu\n", return_value_du64_to_sec_4, return_value_du64_to_nsec_5);
    }

    genesis = hdr.genesis;
  }

  tip->devnm=strdup(devnm);
  tip->file_name=strdup(file_name);
  list_add_tail(&tip->head, &input_files);
  if(!(verbose == 0))
    fprintf(stderr, "Added %s %llu\n", file_name, (signed long long int)hdr.genesis);


__CPROVER_DUMP_L12:
  ;
}

// buf_alloc
// file btreplay.c line 323
static inline void * buf_alloc(unsigned long int nbytes)
{
  void *buf;
  signed int return_value_posix_memalign_1;
  return_value_posix_memalign_1=posix_memalign(&buf, pgsize, nbytes);
  if(!(return_value_posix_memalign_1 == 0))
    fatal("posix_memalign", 2, "Allocation failed\n");

  return buf;
}

// du64_to_nsec
// file btreplay.c line 233
static inline unsigned long long int du64_to_nsec(unsigned long long int du64)
{
  signed long long int return_value_llabs_1;
  return_value_llabs_1=llabs((signed long long int)du64);
  return (unsigned long long int)(return_value_llabs_1 % (signed long int)(1000 * 1000 * 1000));
}

// du64_to_sec
// file btreplay.c line 228
static inline unsigned long long int du64_to_sec(unsigned long long int du64)
{
  return (unsigned long long int)du64 / (unsigned long int)(1000 * 1000 * 1000);
}

// fatal
// file btreplay.c line 212
static inline void fatal(const char *errstring, const signed int exitval, const char *fmt, ...)
{
  void **ap;
  if(!(errstring == ((const char *)NULL)))
    perror(errstring);

  ap = (void **)&fmt;
  vfprintf(stderr, fmt, ap);
  ap = ((void **)NULL);
  exit(exitval);
}

// find_input_devs
// file btreplay.c line 607
static void find_input_devs(char *idir)
{
  struct dirent *ent;
  struct __dirstream *dir;
  dir=opendir(idir);
  if(dir == ((struct __dirstream *)NULL))
    fatal(idir, 1, "Unable to open %s\n", idir);

  do
  {
    ent=readdir(dir);
    if(ent == ((struct dirent *)NULL))
      break;

    char *p;
    char *dsf;
    char *return_value_strstr_1;
    return_value_strstr_1=strstr(ent->d_name, ".replay.");
    if(!(return_value_strstr_1 == ((char *)NULL)))
    {
      dsf=strdup(ent->d_name);
      p=index(dsf, 46);
      *p = (char)0;
      add_input_dev(dsf);
      free((void *)dsf);
    }

  }
  while((_Bool)1);
  closedir(dir);
}

// find_input_files
// file btreplay.c line 1005
static void find_input_files(void)
{
  struct list_head *p;
  struct list_head *q;
  p = (&input_devs)->next;
  q = p->next;
  struct dev_info *tmp_statement_expression_1;
  for( ; !(p == &input_devs); q = p->next)
  {
    const struct list_head *__mptr = p;
    tmp_statement_expression_1 = (struct dev_info *)((char *)__mptr - (signed long int)(unsigned long int)&((struct dev_info *)0)->head);
    __find_input_files(tmp_statement_expression_1);
    p = q;
  }
}

// get_ncpus
// file btreplay.c line 503
static void get_ncpus(void)
{
  signed long int return_value_sysconf_1;
  return_value_sysconf_1=sysconf(83);
  ncpus = (signed int)return_value_sysconf_1;
  if(ncpus == 0)
    fatal((const char *)(void *)0, 2, "Insufficient number of CPUs\n");

}

// gettime
// file btreplay.c line 338
static inline unsigned long long int gettime(void)
{
  static signed int use_clock_gettime = -1;
  if(!(use_clock_gettime >= 0))
  {
    signed int return_value_clock_getres_1;
    return_value_clock_getres_1=clock_getres(1, (struct timespec *)(void *)0);
    use_clock_gettime = (signed int)(return_value_clock_getres_1 == 0);
    if(!(use_clock_gettime == 0))
    {
      struct timespec ts = { .tv_sec=(signed long int)0, .tv_nsec=(signed long int)0 };
      clock_settime(1, &ts);
    }

  }

  if(!(use_clock_gettime == 0))
  {
    struct timespec gettime__1__2__ts;
    clock_gettime(1, &gettime__1__2__ts);
    unsigned long long int return_value_ts2ns_2;
    return_value_ts2ns_2=ts2ns(&gettime__1__2__ts);
    return return_value_ts2ns_2;
  }

  else
  {
    struct timeval tp;
    gettimeofday(&tp, (struct timezone *)(void *)0);
    unsigned long long int return_value_tv2ns_3;
    return_value_tv2ns_3=tv2ns(&tp);
    return return_value_tv2ns_3;
  }
}

// handle_args
// file btreplay.c line 1490
static void handle_args(signed int argc, char **argv)
{
  signed int c;
  signed int r;
  signed int return_value_access_1;
  do
  {
    c=getopt_long(argc, argv, "c:d:Fhi:I:M:Nx:t:vVW", l_opts, (signed int *)(void *)0);
    if(c == -1)
      break;

    switch(c)
    {
      case 99:
      {
        cpus_to_use=atoi(optarg);
        if(!(cpus_to_use >= 1) || !(ncpus >= cpus_to_use))
          fatal((const char *)(void *)0, 1, "Invalid number of cpus %d (0<x<%d)\n", cpus_to_use, ncpus);

        break;
      }
      case 100:
      {
        idir = optarg;
        return_value_access_1=access(idir, 4 | 1);
        if(!(return_value_access_1 == 0))
          fatal(idir, 1, "Invalid input directory specified\n");

        break;
      }
      case 70:
      {
        find_records = 1;
        break;
      }
      case 104:
      {
        usage();
        exit(0);
      }
      case 105:
      {
        ibase = optarg;
        break;
      }
      case 73:
      {
        def_iterations=atoi(optarg);
        if(!(def_iterations >= 1))
        {
          fprintf(stderr, "Invalid number of iterations %d\n", def_iterations);
          exit(1);
        }

        break;
      }
      case 77:
      {
        read_map_devs(optarg);
        break;
      }
      case 78:
      {
        no_stalls = 1;
        break;
      }
      case 120:
      {
        r=sscanf(optarg, "%u", &acc_factor);
        if(!(r == 1))
        {
          fprintf(stderr, "Invalid acceleration factor\n");
          exit(1);
        }

        break;
      }
      case 86:
      {
        fprintf(stderr, "btreplay -- version %s\n", (const void *)my_btversion);
        fprintf(stderr, "            Built on %s\n", (const void *)build_date);
        exit(0);
      }
      case 118:
      {
        verbose = verbose + 1;
        break;
      }
      case 87:
      {
        write_enabled = 1;
        break;
      }
      default:
      {
        usage();
        fatal((const char *)(void *)0, 1, "Invalid command line argument %c\n", c);
      }
    }
  }
  while((_Bool)1);
  signed int tmp_post_2;
  while(!(optind >= argc))
  {
    tmp_post_2 = optind;
    optind = optind + 1;
    add_input_dev(argv[(signed long int)tmp_post_2]);
  }
  if(!(find_records == 0))
    find_input_devs(idir);

  signed int return_value_list_len_3;
  return_value_list_len_3=list_len(&input_devs);
  if(return_value_list_len_3 == 0)
    fatal((const char *)(void *)0, 1, "Missing required input dev name(s)\n");

  if(!(cpus_to_use >= 0))
    cpus_to_use = ncpus;

}

// io_prep_pread
// file /usr/include/libaio.h line 167
static inline void io_prep_pread(struct iocb *iocb, signed int fd, void *buf, unsigned long int count, signed long long int offset)
{
  memset((void *)iocb, 0, sizeof(struct iocb) /*64ul*/ );
  iocb->aio_fildes = fd;
  iocb->aio_lio_opcode = (signed short int)0;
  iocb->aio_reqprio = (signed short int)0;
  iocb->u.c.buf = buf;
  iocb->u.c.nbytes = count;
  iocb->u.c.offset = offset;
}

// io_prep_pwrite
// file /usr/include/libaio.h line 178
static inline void io_prep_pwrite(struct iocb *iocb, signed int fd, void *buf, unsigned long int count, signed long long int offset)
{
  memset((void *)iocb, 0, sizeof(struct iocb) /*64ul*/ );
  iocb->aio_fildes = fd;
  iocb->aio_lio_opcode = (signed short int)1;
  iocb->aio_reqprio = (signed short int)0;
  iocb->u.c.buf = buf;
  iocb->u.c.nbytes = count;
  iocb->u.c.offset = offset;
}

// iocb_init
// file btreplay.c line 717
static void iocb_init(struct thr_info *tip, struct iocb_pkt *iocbp)
{
  iocbp->tip = tip;
  iocbp->nbytes = 0;
  iocbp->iocb.u.c.buf = (void *)0;
}

// iocb_setup
// file btreplay.c line 731
static void iocb_setup(struct iocb_pkt *iocbp, signed int rw, signed int n, signed long long int off)
{
  char *buf;
  struct iocb *iop = &iocbp->iocb;
  if(!(iocbp->nbytes == 0))
  {
    if(iocbp->nbytes >= n)
    {
      buf = (char *)iop->u.c.buf;
      goto prep;
    }

    free(iop->u.c.buf);
  }

  void *return_value_buf_alloc_1;
  return_value_buf_alloc_1=buf_alloc((unsigned long int)n);
  buf = (char *)return_value_buf_alloc_1;
  iocbp->nbytes = n;

prep:
  ;
  if(!(rw == 0))
    io_prep_pread(iop, iocbp->tip->ofd, (void *)buf, (unsigned long int)n, off);

  else
  {
    io_prep_pwrite(iop, iocbp->tip->ofd, (void *)buf, (unsigned long int)n, off);
    touch_memory(buf, (unsigned long int)n);
  }
  iop->data = (void *)iocbp;
}

// iocbs_map
// file btreplay.c line 1230
static void iocbs_map(struct thr_info *tip, struct iocb **list, struct io_pkt *pkts, signed int ntodo)
{
  signed int i;
  struct io_pkt *pkt;
  pthread_mutex_lock(&tip->mutex);
  i = 0;
  pkt = pkts;
  _Bool tmp_if_expr_1;
  struct iocb_pkt *tmp_statement_expression_2;
  for( ; !(i >= ntodo); pkt = pkt + 1l)
  {
    unsigned int rw = pkt->rw;
    struct iocb_pkt *iocbp;
    if(pkt->rw == 0u)
    {
      if(write_enabled == 0)
        rw = (unsigned int)1;

    }

    if(verbose >= 2)
    {
      if(rw == 1u)
        tmp_if_expr_1 = pkt->rw == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr_1 = (_Bool)0;
      fprintf(tip->vfp, "\t%10llu + %10llu %c%c\n", (unsigned long long int)pkt->sector, (unsigned long long int)pkt->nbytes / (unsigned long int)nb_sec, rw != 0u ? 82 : 87, tmp_if_expr_1 ? 33 : 32);
    }

    const struct list_head *__mptr = tip->free_iocbs.next;
    tmp_statement_expression_2 = (struct iocb_pkt *)((char *)__mptr - (signed long int)(unsigned long int)&((struct iocb_pkt *)0)->head);
    iocbp = tmp_statement_expression_2;
    iocb_setup(iocbp, (signed int)rw, (signed int)pkt->nbytes, (signed long long int)(pkt->sector * (unsigned long int)nb_sec));
    list_move_tail(&iocbp->head, &tip->used_iocbs);
    list[(signed long int)i] = &iocbp->iocb;
    i = i + 1;
  }
  tip->naios_free = tip->naios_free - (volatile signed long int)ntodo;
  pthread_mutex_unlock(&tip->mutex);
}

// is_reap_done
// file btreplay.c line 276
static inline signed int is_reap_done(struct thr_info *tip)
{
  _Bool tmp_if_expr_1;
  if(!(tip->send_done == 0))
    tmp_if_expr_1 = tip->naios_out == (signed long int)0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  return (signed int)tmp_if_expr_1;
}

// is_send_done
// file btreplay.c line 267
static inline signed int is_send_done(struct thr_info *tip)
{
  _Bool tmp_if_expr_1;
  if(!(signal_done == 0))
    tmp_if_expr_1 = (_Bool)1;

  else
    tmp_if_expr_1 = tip->send_done != 0 ? (_Bool)1 : (_Bool)0;
  return (signed int)tmp_if_expr_1;
}

// list_add_tail
// file ../btt/list.h line 86
static inline void list_add_tail(struct list_head *new, struct list_head *head)
{
  __list_add(new, head->prev, head);
}

// list_del
// file ../btt/list.h line 110
static inline void list_del(struct list_head *entry)
{
  __list_del(entry->prev, entry->next);
  entry->next = (struct list_head *)(void *)0x00100100;
  entry->prev = (struct list_head *)(void *)0x00200200;
}

// list_empty
// file ../btt/list.h line 165
static inline signed int list_empty(struct list_head *head)
{
  return (signed int)(head->next == head);
}

// list_len
// file ../btt/list.h line 149
static inline signed int list_len(struct list_head *head_p)
{
  struct list_head *p;
  signed int n = 0;
  p = head_p->next;
  for( ; !(p == head_p); p = p->next)
    n = n + 1;
  return n;
}

// list_move_tail
// file ../btt/list.h line 184
static inline void list_move_tail(struct list_head *list, struct list_head *head)
{
  __list_del(list->prev, list->next);
  list_add_tail(list, head);
}

// list_splice
// file ../btt/list.h line 210
static inline void list_splice(struct list_head *list, struct list_head *head)
{
  signed int return_value_list_empty_1;
  return_value_list_empty_1=list_empty(list);
  if(return_value_list_empty_1 == 0)
    __list_splice(list, head);

}

// main
// file btreplay.c line 1616
signed int main(signed int argc, char **argv)
{
  signed int i;
  struct list_head *p;
  signed int return_value_getpagesize_1;
  return_value_getpagesize_1=getpagesize();
  pgsize = (unsigned long int)return_value_getpagesize_1;
  setup_signal(2, set_signal_done);
  setup_signal(15, set_signal_done);
  get_ncpus();
  handle_args(argc, argv);
  find_input_files();
  nfiles=list_len(&input_files);
  p = (&input_files)->next;
  struct thr_info *tmp_statement_expression_2;
  for( ; !(p == &input_files); p = p->next)
  {
    const struct list_head *__mptr = p;
    tmp_statement_expression_2 = (struct thr_info *)((char *)__mptr - (signed long int)(unsigned long int)&((struct thr_info *)0)->head);
    tip_init(tmp_statement_expression_2);
  }
  wait_replays_ready();
  i = 0;
  for( ; !(i >= def_iterations); i = i + 1)
  {
    rgenesis=gettime();
    start_iter();
    if(!(verbose == 0))
      fprintf(stderr, "I");

    wait_iters_done();
  }
  wait_replays_done();
  wait_reclaims_done();
  if(!(verbose == 0))
    fprintf(stderr, "\n");

  rem_input_files();
  release_map_devs();
  return 0;
}

// map_dev
// file btreplay.c line 692
static char * map_dev(char *from_dev)
{
  struct list_head *p = (&map_devs)->next;
  struct map_dev *tmp_statement_expression_1;
  for( ; !(p == &map_devs); p = p->next)
  {
    struct map_dev *mdp;
    const struct list_head *__mptr = p;
    tmp_statement_expression_1 = (struct map_dev *)((char *)__mptr - (signed long int)(unsigned long int)&((struct map_dev *)0)->head);
    mdp = tmp_statement_expression_1;
    signed int return_value_strcmp_2;
    return_value_strcmp_2=strcmp(from_dev, mdp->from_dev);
    if(return_value_strcmp_2 == 0)
      return mdp->to_dev;

  }
  return from_dev;
}

// min
// file btreplay.c line 241
static inline signed int min(signed int a, signed int b)
{
  return a < b ? a : b;
}

// minl
// file btreplay.c line 249
static inline signed long int minl(signed long int a, signed long int b)
{
  return a < b ? a : b;
}

// mk_btversion
// file btrecord.h line 78
static inline unsigned long long int mk_btversion(signed int mjr, signed int mnr, signed int sub)
{
  return (unsigned long long int)((mjr & 0xff) << 16 | (mnr & 0xff) << 8 | sub & 0xff);
}

// next_bunch
// file btreplay.c line 1137
static signed int next_bunch(struct thr_info *tip, struct io_bunch *bunch)
{
  unsigned long int count;
  unsigned long int result;
  signed long int return_value_read_1;
  return_value_read_1=read(tip->ifd, (void *)&bunch->hdr, sizeof(struct io_bunch_hdr) /*16ul*/ );
  result = (unsigned long int)return_value_read_1;
  if(!(result == sizeof(struct io_bunch_hdr) /*16ul*/ ))
  {
    if(result == 0ul)
      return 0;

    fatal(tip->file_name, 2, "Short hdr(%ld)\n", (signed long int)result);
  }

  count = bunch->hdr.npkts * sizeof(struct io_pkt) /*24ul*/ ;
  signed long int return_value_read_2;
  return_value_read_2=read(tip->ifd, (void *)&bunch->pkts, count);
  result = (unsigned long int)return_value_read_2;
  if(!(result == count))
    fatal(tip->file_name, 2, "Short pkts(%ld/%ld)\n", (signed long int)result, (signed long int)count);

  return 1;
}

// nfree_current
// file btreplay.c line 1170
static signed int nfree_current(struct thr_info *tip)
{
  signed int nfree = 0;
  pthread_mutex_lock(&tip->mutex);
  signed int return_value_is_send_done_1;
  do
  {
    return_value_is_send_done_1=is_send_done(tip);
    if(!(return_value_is_send_done_1 == 0))
      break;

    nfree = (signed int)tip->naios_free;
    if(!(nfree == 0))
      break;

    tip->send_wait = 1;
    signed int return_value_pthread_cond_wait_2;
    return_value_pthread_cond_wait_2=pthread_cond_wait(&tip->cond, &tip->mutex);
    if(!(return_value_pthread_cond_wait_2 == 0))
      fatal("pthread_cond_wait", 2, "nfree_current cond wait failed\n");

  }
  while((_Bool)1);
  pthread_mutex_unlock(&tip->mutex);
  return nfree;
}

// pin_to_cpu
// file btreplay.c line 543
static void pin_to_cpu(struct thr_info *tip)
{
  struct anonymous_1 *cpus;
  unsigned long int size;
  cpus=__sched_cpualloc((unsigned long int)ncpus);
  size = ((((unsigned long int)ncpus + (unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ) - (unsigned long int)1) / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ )) * sizeof(unsigned long int) /*8ul*/ ;
  do
    __builtin_memset((void *)cpus, 0, (unsigned long int)ncpus);
  while((_Bool)0);
  unsigned long int __cpu = (unsigned long int)tip->cpu;
  if(!(__cpu / 8ul >= size))
    ((unsigned long int *)cpus->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] = ((unsigned long int *)cpus->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] | (unsigned long int)1 << __cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ );

  else
    (unsigned long int)0;
  signed int return_value_getpid_1;
  return_value_getpid_1=getpid();
  signed int return_value_sched_setaffinity_2;
  return_value_sched_setaffinity_2=sched_setaffinity(return_value_getpid_1, size, cpus);
  if(!(return_value_sched_setaffinity_2 == 0))
    fatal("sched_setaffinity", 2, "Failed to pin CPU\n");

  signed int tmp_statement_expression_4;
  signed int tmp_if_expr_5;
  if(verbose >= 2)
  {
    signed int i;
    struct anonymous_1 *now;
    now=__sched_cpualloc((unsigned long int)ncpus);
    signed int return_value_getpid_3;
    return_value_getpid_3=getpid();
    sched_getaffinity(return_value_getpid_3, size, now);
    fprintf(tip->vfp, "Pinned to CPU %02d ", tip->cpu);
    i = 0;
    for( ; !(i >= ncpus); i = i + 1)
    {
      unsigned long int pin_to_cpu__1__3__1__1____cpu = (unsigned long int)i;
      if(!(pin_to_cpu__1__3__1__1____cpu / 8ul >= size))
        tmp_if_expr_5 = (signed int)((((const unsigned long int *)now->__bits)[(signed long int)(pin_to_cpu__1__3__1__1____cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] & (unsigned long int)1 << pin_to_cpu__1__3__1__1____cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ )) != (unsigned long int)0);

      else
        tmp_if_expr_5 = 0;
      tmp_statement_expression_4 = tmp_if_expr_5;
      fprintf(tip->vfp, "%1d", tmp_statement_expression_4);
    }
    fprintf(tip->vfp, "\n");
  }

}

// process_bunch
// file btreplay.c line 1271
static void process_bunch(struct thr_info *tip, struct io_bunch *bunch)
{
  unsigned long long int i = (unsigned long long int)0;
  const signed long int i_array_size0 = (signed long int)bunch->hdr.npkts;
  struct iocb *list[i_array_size0];
  signed int return_value_is_send_done_1;
  do
  {
    return_value_is_send_done_1=is_send_done(tip);
    if(!(return_value_is_send_done_1 == 0))
      break;

    if(i >= bunch->hdr.npkts)
      break;

    signed long int ndone;
    signed int ntodo;
    signed int return_value_nfree_current_2;
    return_value_nfree_current_2=nfree_current(tip);
    ntodo=min(return_value_nfree_current_2, (signed int)(bunch->hdr.npkts - i));
    iocbs_map(tip, list, &bunch->pkts[(signed long int)i], ntodo);
    if(no_stalls == 0)
      stall(tip, (signed long long int)(bunch->hdr.time_stamp - genesis));

    if(!(ntodo == 0))
    {
      if(verbose >= 2)
        fprintf(tip->vfp, "submit(%d)\n", ntodo);

      signed int return_value_io_submit_3;
      return_value_io_submit_3=io_submit(tip->ctx, (signed long int)ntodo, list);
      ndone = (signed long int)return_value_io_submit_3;
      if(!(ndone == (signed long int)ntodo))
      {
        signed long int return_value_labs_4;
        return_value_labs_4=labs(ndone);
        char *return_value_strerror_5;
        return_value_strerror_5=strerror((signed int)return_value_labs_4);
        fatal("io_submit", 2, "%d: io_submit(%d:%ld) failed (%s)\n", tip->cpu, ntodo, ndone, return_value_strerror_5);
      }

      pthread_mutex_lock(&tip->mutex);
      tip->naios_out = tip->naios_out + ndone;
      if(!(tip->reap_wait == 0))
      {
        tip->reap_wait = 0;
        pthread_cond_signal(&tip->cond);
      }

      pthread_mutex_unlock(&tip->mutex);
      i = i + (unsigned long long int)ndone;
    }

  }
  while((_Bool)1);
}

// read_map_devs
// file btreplay.c line 646
static void read_map_devs(char *file_name)
{
  struct _IO_FILE *fp;
  char *from_dev;
  char *to_dev;
  fp=fopen(file_name, "r");
  if(fp == ((struct _IO_FILE *)NULL))
    fatal(file_name, 2, "Could not open map devs file\n");

  signed int return_value_fscanf_1;
  do
  {
    return_value_fscanf_1=fscanf(fp, "%as %as", &from_dev, &to_dev);
    if(!(return_value_fscanf_1 == 2))
      break;

    struct map_dev *mdp;
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct map_dev) /*32ul*/ );
    mdp = (struct map_dev *)return_value_malloc_2;
    mdp->from_dev = from_dev;
    mdp->to_dev = to_dev;
    list_add_tail(&mdp->head, &map_devs);
  }
  while((_Bool)1);
  fclose(fp);
}

// reap_wait_aios
// file btreplay.c line 1025
static signed int reap_wait_aios(struct thr_info *tip)
{
  signed int reap_wait_aios__1__naios = 0;
  signed int return_value_is_reap_done_2;
  return_value_is_reap_done_2=is_reap_done(tip);
  if(return_value_is_reap_done_2 == 0)
  {
    pthread_mutex_lock(&tip->mutex);
    while(tip->naios_out == 0l)
    {
      tip->reap_wait = 1;
      signed int return_value_pthread_cond_wait_1;
      return_value_pthread_cond_wait_1=pthread_cond_wait(&tip->cond, &tip->mutex);
      if(!(return_value_pthread_cond_wait_1 == 0))
        fatal("pthread_cond_wait", 2, "nfree_current cond wait failed\n");

    }
    reap_wait_aios__1__naios = (signed int)tip->naios_out;
    pthread_mutex_unlock(&tip->mutex);
  }

  signed int return_value_is_reap_done_3;
  return_value_is_reap_done_3=is_reap_done(tip);
  return return_value_is_reap_done_3 != 0 ? 0 : reap_wait_aios__1__naios;
}

// reclaim_ios
// file btreplay.c line 1052
static void reclaim_ios(struct thr_info *tip, signed long int naios_out)
{
  signed long int i;
  signed long int ndone;
  const signed long int evp_array_size0 = naios_out;
  struct io_event *evp;
  struct io_event events[evp_array_size0];
  signed int *return_value___errno_location_2;
  do
  {

  again:
    ;
    (void)0;
    do
    {
      signed int return_value_io_getevents_1;
      return_value_io_getevents_1=io_getevents(tip->ctx, (signed long int)1, naios_out, events, (struct timespec *)(void *)0);
      ndone = (signed long int)return_value_io_getevents_1;
      if(ndone >= 1l)
        break;

      signed int *return_value___errno_location_3;
      return_value___errno_location_3=__errno_location();
      if(!(*return_value___errno_location_3 == 0))
      {
        return_value___errno_location_2=__errno_location();
        if(!(*return_value___errno_location_2 == 4))
          fatal("io_getevents", 2, "io_getevents failed\n");

      }

    }
    while((_Bool)1);
    pthread_mutex_lock(&tip->mutex);
    i = (signed long int)0;
    evp = events;
    for( ; !(i >= ndone); evp = evp + 1l)
    {
      struct iocb_pkt *iocbp = (struct iocb_pkt *)evp->data;
      if(!(evp->res == iocbp->iocb.u.c.nbytes))
        fatal((const char *)(void *)0, 2, "Event failure %ld/%ld\t(%ld + %ld)\n", (signed long int)evp->res, (signed long int)evp->res2, (signed long int)iocbp->iocb.u.c.offset / (signed long int)nb_sec, (signed long int)iocbp->iocb.u.c.nbytes / (signed long int)nb_sec);

      list_move_tail(&iocbp->head, &tip->free_iocbs);
      i = i + 1l;
    }
    tip->naios_free = tip->naios_free + ndone;
    tip->naios_out = tip->naios_out - ndone;
    naios_out=minl(naios_out, tip->naios_out);
    if(!(tip->send_wait == 0))
    {
      tip->send_wait = 0;
      pthread_cond_signal(&tip->cond);
    }

    pthread_mutex_unlock(&tip->mutex);
  }
  while(!(naios_out == 0l));
}

// release_map_devs
// file btreplay.c line 671
static void release_map_devs(void)
{
  struct list_head *p;
  struct list_head *q;
  p = (&map_devs)->next;
  q = p->next;
  struct map_dev *tmp_statement_expression_1;
  for( ; !(p == &map_devs); q = p->next)
  {
    struct map_dev *mdp;
    const struct list_head *__mptr = p;
    tmp_statement_expression_1 = (struct map_dev *)((char *)__mptr - (signed long int)(unsigned long int)&((struct map_dev *)0)->head);
    mdp = tmp_statement_expression_1;
    list_del(&mdp->head);
    free((void *)mdp->from_dev);
    free((void *)mdp->to_dev);
    free((void *)mdp);
    p = q;
  }
}

// rem_input_dev
// file btreplay.c line 600
static void rem_input_dev(struct dev_info *dip)
{
  list_del(&dip->head);
  free((void *)dip->devnm);
  free((void *)dip);
}

// rem_input_file
// file btreplay.c line 950
static void rem_input_file(struct thr_info *tip)
{
  list_del(&tip->head);
  tip_release(tip);
  close(tip->ofd);
  close(tip->ifd);
  free((void *)tip->file_name);
  free((void *)tip->devnm);
  free((void *)tip);
}

// rem_input_files
// file btreplay.c line 966
static void rem_input_files(void)
{
  struct list_head *p;
  struct list_head *q;
  p = (&input_files)->next;
  q = p->next;
  struct thr_info *tmp_statement_expression_1;
  for( ; !(p == &input_files); q = p->next)
  {
    const struct list_head *__mptr = p;
    tmp_statement_expression_1 = (struct thr_info *)((char *)__mptr - (signed long int)(unsigned long int)&((struct thr_info *)0)->head);
    rem_input_file(tmp_statement_expression_1);
    p = q;
  }
}

// replay_rec
// file btreplay.c line 1109
static void * replay_rec(void *arg)
{
  signed long int naios_out;
  struct thr_info *tip = (struct thr_info *)arg;
  signed int return_value_reap_wait_aios_1;
  do
  {
    return_value_reap_wait_aios_1=reap_wait_aios(tip);
    naios_out = (signed long int)return_value_reap_wait_aios_1;
    if(!(naios_out >= 1l))
      break;

    reclaim_ios(tip, naios_out);
  }
  while((_Bool)1);
  tip->reap_done = 1;
  set_reclaim_done();
  return (void *)0;
}

// replay_sub
// file btreplay.c line 1334
static void * replay_sub(void *arg)
{
  unsigned int i;
  char *mdev;
  char path[4096l];
  struct io_bunch bunch;
  struct thr_info *tip = (struct thr_info *)arg;
  signed int oflags;
  pin_to_cpu(tip);
  mdev=map_dev(tip->devnm);
  sprintf(path, "/dev/%s", mdev);
  i = (unsigned int)0;
  unsigned long int return_value_strlen_1;
  unsigned long int return_value_strlen_3;
  unsigned long int return_value_strlen_2;
  do
  {
    return_value_strlen_1=strlen(mdev);
    if((unsigned long int)i >= return_value_strlen_1)
      break;

    return_value_strlen_3=strlen("/dev/");
    if((signed int)path[(signed long int)return_value_strlen_3 + (signed long int)(unsigned long int)i] == 95)
    {
      return_value_strlen_2=strlen("/dev/");
      path[(signed long int)(return_value_strlen_2 + (unsigned long int)i)] = (char)47;
    }

    i = i + 1u;
  }
  while((_Bool)1);
  oflags = 01000000;
  tip->ofd=open(path, 02 | 040000 | oflags);
  if(!(tip->ofd >= 0))
    fatal(path, 2, "Failed device open\n");

  set_replay_ready();
  signed int return_value_is_send_done_4;
  signed int tmp_post_5;
  signed int return_value_is_send_done_6;
  signed int return_value_next_bunch_7;
  do
  {
    return_value_is_send_done_4=is_send_done(tip);
    if(!(return_value_is_send_done_4 == 0))
      break;

    tmp_post_5 = tip->iterations;
    tip->iterations = tip->iterations - 1;
    if(tmp_post_5 == 0)
      break;

    wait_iter_start();
    if(verbose >= 2)
      fprintf(tip->vfp, "\n=== %d ===\n", tip->iterations);

    do
    {
      return_value_is_send_done_6=is_send_done(tip);
      if(!(return_value_is_send_done_6 == 0))
        break;

      return_value_next_bunch_7=next_bunch(tip, &bunch);
      if(return_value_next_bunch_7 == 0)
        break;

      process_bunch(tip, &bunch);
    }
    while((_Bool)1);
    set_iter_done();
    reset_input_file(tip);
  }
  while((_Bool)1);
  tip->send_done = 1;
  set_replay_done();
  return (void *)0;
}

// reset_input_file
// file btreplay.c line 1319
static void reset_input_file(struct thr_info *tip)
{
  struct io_file_hdr hdr;
  lseek(tip->ifd, (signed long int)0, 0);
  signed long int return_value_read_1;
  return_value_read_1=read(tip->ifd, (void *)&hdr, sizeof(struct io_file_hdr) /*32ul*/ );
  if(!((unsigned long int)return_value_read_1 == sizeof(struct io_file_hdr) /*32ul*/ ))
    fatal(tip->file_name, 1, "Header reread failed\n");

}

// set_iter_done
// file btreplay.c line 454
static inline void set_iter_done(void)
{
  __set_cv(&iter_done_mutex, &iter_done_cond, &n_iters_done, nfiles);
}

// set_reclaim_done
// file btreplay.c line 418
static inline void set_reclaim_done(void)
{
  __set_cv(&reclaim_done_mutex, &reclaim_done_cond, &n_reclaims_done, nfiles);
}

// set_replay_done
// file btreplay.c line 442
static inline void set_replay_done(void)
{
  __set_cv(&replay_done_mutex, &replay_done_cond, &n_replays_done, nfiles);
}

// set_replay_ready
// file btreplay.c line 430
static inline void set_replay_ready(void)
{
  __set_cv(&replay_ready_mutex, &replay_ready_cond, &n_replays_ready, nfiles);
}

// set_signal_done
// file btreplay.c line 1606
static void set_signal_done(signed int signum)
{
  signal_done = 1;
}

// setup_signal
// file btreplay.c line 368
static inline void setup_signal(signed int signum, void (*handler)(signed int))
{
  void (*return_value_signal_1)(signed int);
  return_value_signal_1=signal(signum, handler);
  if(return_value_signal_1 == (void (*)(signed int))-1)
    fatal("signal", 2, "Failed to set signal %d\n", signum);

}

// stall
// file btreplay.c line 1193
static void stall(struct thr_info *tip, signed long long int oclock)
{
  struct timespec req;
  signed long long int dreal;
  signed long long int tclock;
  unsigned long long int return_value_gettime_1;
  return_value_gettime_1=gettime();
  tclock = (signed long long int)(return_value_gettime_1 - rgenesis);
  oclock = oclock / (signed long long int)acc_factor;
  unsigned long long int return_value_du64_to_sec_2;
  unsigned long long int return_value_du64_to_nsec_3;
  unsigned long long int return_value_du64_to_sec_4;
  unsigned long long int return_value_du64_to_nsec_5;
  if(verbose >= 2)
  {
    return_value_du64_to_sec_2=du64_to_sec((unsigned long long int)oclock);
    return_value_du64_to_nsec_3=du64_to_nsec((unsigned long long int)oclock);
    return_value_du64_to_sec_4=du64_to_sec((unsigned long long int)tclock);
    return_value_du64_to_nsec_5=du64_to_nsec((unsigned long long int)tclock);
    fprintf(tip->vfp, "   stall(%lld.%09lld, %lld.%09lld)\n", return_value_du64_to_sec_2, return_value_du64_to_nsec_3, return_value_du64_to_sec_4, return_value_du64_to_nsec_5);
  }

  signed int return_value_is_send_done_6;
  do
  {
    return_value_is_send_done_6=is_send_done(tip);
    if(!(return_value_is_send_done_6 == 0))
      break;

    if(tclock >= oclock)
      break;

    dreal = oclock - tclock;
    req.tv_sec = dreal / (signed long int)(1000 * 1000 * 1000);
    req.tv_nsec = dreal % (signed long int)(1000 * 1000 * 1000);
    if(verbose >= 2)
      fprintf(tip->vfp, "++ stall(%lld.%09lld) ++\n", (signed long long int)req.tv_sec, (signed long long int)req.tv_nsec);

    signed int return_value_nanosleep_7;
    return_value_nanosleep_7=nanosleep(&req, (struct timespec *)(void *)0);
    if(!(return_value_nanosleep_7 >= 0))
    {
      if(!(signal_done == 0))
        break;

    }

    unsigned long long int return_value_gettime_8;
    return_value_gettime_8=gettime();
    tclock = (signed long long int)(return_value_gettime_8 - rgenesis);
  }
  while((_Bool)1);
}

// start_iter
// file btreplay.c line 485
static inline void start_iter(void)
{
  pthread_mutex_lock(&iter_start_mutex);
  iter_start = nfiles;
  pthread_cond_broadcast(&iter_start_cond);
  pthread_mutex_unlock(&iter_start_mutex);
}

// tip_init
// file btreplay.c line 774
static void tip_init(struct thr_info *tip)
{
  signed int i;
  INIT_LIST_HEAD(&tip->free_iocbs);
  INIT_LIST_HEAD(&tip->used_iocbs);
  pthread_mutex_init(&tip->mutex, (const union anonymous_0 *)(void *)0);
  pthread_cond_init(&tip->cond, (const union anonymous_0 *)(void *)0);
  signed int return_value_io_setup_1;
  return_value_io_setup_1=io_setup(naios, &tip->ctx);
  if(!(return_value_io_setup_1 == 0))
    fatal("io_setup", 2, "io_setup failed\n");

  tip->ofd = -1;
  tip->naios_out = (volatile signed long int)0;
  tip->reap_done = 0;
  tip->send_done = tip->reap_done;
  tip->reap_wait = 0;
  tip->send_wait = tip->reap_wait;
  memset((void *)&tip->sub_thread, 0, sizeof(unsigned long int) /*8ul*/ );
  memset((void *)&tip->rec_thread, 0, sizeof(unsigned long int) /*8ul*/ );
  i = 0;
  for( ; !(i >= naios); i = i + 1)
  {
    struct iocb_pkt *iocbp;
    void *return_value_buf_alloc_2;
    return_value_buf_alloc_2=buf_alloc(sizeof(struct iocb_pkt) /*96ul*/ );
    iocbp = (struct iocb_pkt *)return_value_buf_alloc_2;
    iocb_init(tip, iocbp);
    list_add_tail(&iocbp->head, &tip->free_iocbs);
  }
  tip->naios_free = (volatile signed long int)naios;
  if(verbose >= 2)
  {
    char fn[4096l];
    sprintf(fn, "%s/%s.%s.%d.rep", idir, tip->devnm, ibase, tip->cpu);
    tip->vfp=fopen(fn, "w");
    if(tip->vfp == ((struct _IO_FILE *)NULL))
      fatal(fn, 2, "Failed to open report\n");

    setlinebuf(tip->vfp);
  }

  signed int return_value_pthread_create_3;
  return_value_pthread_create_3=pthread_create(&tip->sub_thread, (const union pthread_attr_t *)(void *)0, replay_sub, (void *)tip);
  if(!(return_value_pthread_create_3 == 0))
    fatal("pthread_create", 2, "thread create failed\n");

  signed int return_value_pthread_create_4;
  return_value_pthread_create_4=pthread_create(&tip->rec_thread, (const union pthread_attr_t *)(void *)0, replay_rec, (void *)tip);
  if(!(return_value_pthread_create_4 == 0))
    fatal("pthread_create", 2, "thread create failed\n");

}

// tip_release
// file btreplay.c line 835
static void tip_release(struct thr_info *tip)
{
  struct list_head *p;
  struct list_head *q;
  signed int return_value_pthread_join_1;
  return_value_pthread_join_1=pthread_join(tip->sub_thread, (void **)(void *)0);
  if(!(return_value_pthread_join_1 == 0))
    fatal("pthread_join", 2, "pthread sub join failed\n");

  signed int return_value_pthread_join_2;
  return_value_pthread_join_2=pthread_join(tip->rec_thread, (void **)(void *)0);
  if(!(return_value_pthread_join_2 == 0))
    fatal("pthread_join", 2, "pthread rec join failed\n");

  io_destroy(tip->ctx);
  list_splice(&tip->used_iocbs, &tip->free_iocbs);
  p = (&tip->free_iocbs)->next;
  q = p->next;
  struct iocb_pkt *tmp_statement_expression_3;
  for( ; !(p == &tip->free_iocbs); q = p->next)
  {
    struct iocb_pkt *iocbp;
    const struct list_head *__mptr = p;
    tmp_statement_expression_3 = (struct iocb_pkt *)((char *)__mptr - (signed long int)(unsigned long int)&((struct iocb_pkt *)0)->head);
    iocbp = tmp_statement_expression_3;
    list_del(&iocbp->head);
    if(!(iocbp->nbytes == 0))
      free(iocbp->iocb.u.c.buf);

    free((void *)iocbp);
    p = q;
  }
  pthread_cond_destroy(&tip->cond);
  pthread_mutex_destroy(&tip->mutex);
}

// touch_memory
// file btreplay.c line 307
static inline void touch_memory(char *buf, unsigned long int bsize)
{
  unsigned long int i = (unsigned long int)0;
  for( ; !(i >= bsize); i = i + pgsize)
    buf[(signed long int)i] = (char)0;
}

// ts2ns
// file btreplay.c line 285
static inline unsigned long long int ts2ns(struct timespec *ts)
{
  return (unsigned long long int)ts->tv_sec * (unsigned long long int)1000 * (unsigned long long int)1000 * (unsigned long long int)1000 + (unsigned long long int)ts->tv_nsec;
}

// tv2ns
// file btreplay.c line 293
static inline unsigned long long int tv2ns(struct timeval *tp)
{
  return (unsigned long long int)tp->tv_sec + (unsigned long long int)tp->tv_usec * (unsigned long long int)1000;
}

// usage
// file btreplay.c line 257
static inline void usage(void)
{
  fprintf(stderr, "Usage: btreplay -- version %s\n%s", (const void *)my_btversion, (const void *)usage_str);
}

// wait_iter_start
// file btreplay.c line 472
static inline void wait_iter_start(void)
{
  pthread_mutex_lock(&iter_start_mutex);
  while(iter_start == 0)
    pthread_cond_wait(&iter_start_cond, &iter_start_mutex);
  iter_start = iter_start - 1;
  pthread_mutex_unlock(&iter_start_mutex);
}

// wait_iters_done
// file btreplay.c line 460
static inline void wait_iters_done(void)
{
  __wait_cv(&iter_done_mutex, &iter_done_cond, &n_iters_done, nfiles);
}

// wait_reclaims_done
// file btreplay.c line 424
static inline void wait_reclaims_done(void)
{
  __wait_cv(&reclaim_done_mutex, &reclaim_done_cond, &n_reclaims_done, nfiles);
}

// wait_replays_done
// file btreplay.c line 448
static inline void wait_replays_done(void)
{
  __wait_cv(&replay_done_mutex, &replay_done_cond, &n_replays_done, nfiles);
}

// wait_replays_ready
// file btreplay.c line 436
static inline void wait_replays_ready(void)
{
  __wait_cv(&replay_ready_mutex, &replay_ready_cond, &n_replays_ready, nfiles);
}

