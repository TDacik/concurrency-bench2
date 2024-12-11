// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous;

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

// tag-blk_io_trace
// file blktrace_api.h line 96
struct blk_io_trace;

// tag-blkiomon_stat
// file blkiomon.h line 33
struct blkiomon_stat;

// tag-dstat
// file blkiomon.c line 61
struct dstat;

// tag-dstat_msg
// file blkiomon.c line 56
struct dstat_msg;

// tag-histlog2
// file stats.h line 103
struct histlog2;

// tag-minmax
// file stats.h line 28
struct minmax;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-output
// file blkiomon.c line 67
struct output;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rb_node
// file rbtree.h line 99
struct rb_node;

// tag-rb_root
// file rbtree.h line 108
struct rb_root;

// tag-rb_search
// file blkiomon.c line 51
struct rb_search;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-trace
// file blkiomon.c line 44
struct trace;

#ifndef NULL
#define NULL ((void*)0)
#endif

// __bswap_32
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32(unsigned int __bsx);
// __bswap_64
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 109
static inline unsigned long int __bswap_64(unsigned long int __bsx);
// __rb_erase_color
// file rbtree.c line 136
static void __rb_erase_color(struct rb_node *node, struct rb_node *parent, struct rb_root *root);
// __rb_rotate_left
// file rbtree.c line 25
static void __rb_rotate_left(struct rb_node *node, struct rb_root *root);
// __rb_rotate_right
// file rbtree.c line 48
static void __rb_rotate_right(struct rb_node *node, struct rb_root *root);
// action
// file blkiomon.c line 360
static signed int action(signed int a);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// blkiomon_account
// file blkiomon.c line 308
static signed int blkiomon_account(struct blk_io_trace *bit_d, struct blk_io_trace *bit_c);
// blkiomon_alloc_dstat
// file blkiomon.c line 156
static struct dstat * blkiomon_alloc_dstat(void);
// blkiomon_alloc_trace
// file blkiomon.c line 338
static struct trace * blkiomon_alloc_trace(void);
// blkiomon_debug
// file blkiomon.c line 577
static void blkiomon_debug(void);
// blkiomon_do_fifo
// file blkiomon.c line 451
static signed int blkiomon_do_fifo(void);
// blkiomon_do_trace
// file blkiomon.c line 394
static struct trace * blkiomon_do_trace(struct trace *t);
// blkiomon_dump_drvdata
// file blkiomon.c line 431
static signed int blkiomon_dump_drvdata(struct blk_io_trace *bit, void *pdu_buf);
// blkiomon_fetch_trace
// file blkiomon.c line 374
static struct trace * blkiomon_fetch_trace(struct blk_io_trace *bit);
// blkiomon_find_dstat
// file blkiomon.c line 175
static struct dstat * blkiomon_find_dstat(struct rb_search *search, unsigned int device);
// blkiomon_free_trace
// file blkiomon.c line 350
static void blkiomon_free_trace(struct trace *t);
// blkiomon_get_dstat
// file blkiomon.c line 198
static struct dstat * blkiomon_get_dstat(unsigned int device);
// blkiomon_interval
// file blkiomon.c line 270
static void * blkiomon_interval(void *data);
// blkiomon_open_msg_q
// file blkiomon.c line 558
static signed int blkiomon_open_msg_q(void);
// blkiomon_open_output
// file blkiomon.c line 526
static signed int blkiomon_open_output(struct output *out);
// blkiomon_output
// file blkiomon.c line 255
static struct dstat * blkiomon_output(struct dstat *head, struct timespec *ts);
// blkiomon_output_binary
// file blkiomon.c line 235
static signed int blkiomon_output_binary(struct dstat *dstat);
// blkiomon_output_msg_q
// file blkiomon.c line 226
static signed int blkiomon_output_msg_q(struct dstat *dstat);
// blkiomon_signal
// file blkiomon.c line 676
static void blkiomon_signal(signed int signal);
// blkiomon_stat_init
// file blkiomon.h line 59
static inline void blkiomon_stat_init(struct blkiomon_stat *bstat);
// blkiomon_stat_print
// file blkiomon.h line 99
static inline void blkiomon_stat_print(struct _IO_FILE *fp, struct blkiomon_stat *p);
// blkiomon_stat_to_be
// file blkiomon.h line 70
static inline void blkiomon_stat_to_be(struct blkiomon_stat *bstat);
// blkiomon_store_trace
// file blkiomon.c line 366
static void blkiomon_store_trace(struct trace *t);
// check_data_endianness
// file blktrace.h line 126
static inline signed int check_data_endianness(unsigned int magic);
// clearerr
// file /usr/include/stdio.h line 826
extern void clearerr(struct _IO_FILE *);
// clock_gettime
// file /usr/include/time.h line 342
extern signed int clock_gettime(signed int, struct timespec *);
// clock_nanosleep
// file /usr/include/time.h line 353
extern signed int clock_nanosleep(signed int, signed int, struct timespec *, struct timespec *);
// ctime
// file /usr/include/time.h line 264
extern char * ctime(const signed long int *);
// dump_bit
// file blkiomon.c line 106
static void dump_bit(struct trace *t, const char *descr);
// dump_bits
// file blkiomon.c line 129
static void dump_bits(struct trace *t1, struct trace *t2, const char *descr);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fdopen
// file /usr/include/stdio.h line 306
extern struct _IO_FILE * fdopen(signed int, const char *);
// feof
// file /usr/include/stdio.h line 828
extern signed int feof(struct _IO_FILE *);
// ferror
// file /usr/include/stdio.h line 830
extern signed int ferror(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fopen
// file /usr/include/stdio.h line 283
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// ftok
// file /usr/include/x86_64-linux-gnu/sys/ipc.h line 54
extern signed int ftok(const char *, signed int);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// histlog2_account
// file stats.h line 122
static inline void histlog2_account(unsigned int *bucket, unsigned int val, struct histlog2 *h);
// histlog2_index
// file stats.h line 114
static inline signed int histlog2_index(unsigned long long int val, struct histlog2 *h);
// histlog2_print
// file stats.h line 145
static inline void histlog2_print(struct _IO_FILE *fp, const char *s, unsigned int *a, struct histlog2 *h);
// histlog2_to_be
// file stats.h line 137
static inline void histlog2_to_be(unsigned int *a, struct histlog2 *h);
// histlog2_upper_limit
// file stats.h line 109
static inline unsigned long long int histlog2_upper_limit(signed int index, struct histlog2 *h);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// minmax_account
// file stats.h line 45
static inline void minmax_account(struct minmax *mm, unsigned long long int value);
// minmax_avg
// file stats.h line 76
static inline double minmax_avg(struct minmax *mm);
// minmax_init
// file stats.h line 36
static inline void minmax_init(struct minmax *mm);
// minmax_print
// file stats.h line 94
static inline signed int minmax_print(struct _IO_FILE *fp, const char *s, struct minmax *mm);
// minmax_to_be
// file stats.h line 67
static inline void minmax_to_be(struct minmax *mm);
// minmax_var
// file stats.h line 84
static inline double minmax_var(struct minmax *mm);
// msgget
// file /usr/include/x86_64-linux-gnu/sys/msg.h line 65
extern signed int msgget(signed int, signed int);
// msgsnd
// file /usr/include/x86_64-linux-gnu/sys/msg.h line 78
extern signed int msgsnd(signed int, const void *, unsigned long int, signed int);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// rb_erase
// file rbtree.c line 222
extern void rb_erase(struct rb_node *node, struct rb_root *root);
// rb_first
// file rbtree.c line 292
extern struct rb_node * rb_first(struct rb_root *root);
// rb_insert_color
// file rbtree.h line 143
extern void rb_insert_color(struct rb_node *node, struct rb_root *root);
// rb_last
// file rbtree.c line 304
extern struct rb_node * rb_last(struct rb_root *root);
// rb_link_node
// file rbtree.h line 156
static inline void rb_link_node(struct rb_node *node, struct rb_node *parent, struct rb_node **rb_link);
// rb_next
// file rbtree.c line 316
extern struct rb_node * rb_next(struct rb_node *node);
// rb_prev
// file rbtree.c line 344
extern struct rb_node * rb_prev(struct rb_node *node);
// rb_replace_node
// file rbtree.c line 368
extern void rb_replace_node(struct rb_node *victim, struct rb_node *new, struct rb_root *root);
// rb_set_color
// file rbtree.h line 135
static inline void rb_set_color(struct rb_node *rb, signed int color);
// rb_set_parent
// file rbtree.h line 131
static inline void rb_set_parent(struct rb_node *rb, struct rb_node *p);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// setvbuf
// file /usr/include/stdio.h line 336
extern signed int setvbuf(struct _IO_FILE *, char *, signed int, unsigned long int);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// trace_to_cpu
// file blktrace.h line 105
static inline void trace_to_cpu(struct blk_io_trace *t);
// verify_trace
// file blktrace.h line 90
static inline signed int verify_trace(struct blk_io_trace *t);

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

struct blk_io_trace
{
  // magic
  unsigned int magic;
  // sequence
  unsigned int sequence;
  // time
  unsigned long long int time;
  // sector
  unsigned long long int sector;
  // bytes
  unsigned int bytes;
  // action
  unsigned int action;
  // pid
  unsigned int pid;
  // device
  unsigned int device;
  // cpu
  unsigned int cpu;
  // error
  unsigned short int error;
  // pdu_len
  unsigned short int pdu_len;
};

struct minmax
{
  // min
  unsigned long long int min;
  // max
  unsigned long long int max;
  // sum
  unsigned long long int sum;
  // sos
  unsigned long long int sos;
  // num
  unsigned long long int num;
};

struct blkiomon_stat
{
  // time
  unsigned long long int time;
  // size_hist
  unsigned int size_hist[16l];
  // d2c_hist
  unsigned int d2c_hist[25l];
  // device
  unsigned int device;
  // size_r
  struct minmax size_r;
  // size_w
  struct minmax size_w;
  // d2c_r
  struct minmax d2c_r;
  // d2c_w
  struct minmax d2c_w;
  // thrput_r
  struct minmax thrput_r;
  // thrput_w
  struct minmax thrput_w;
  // bidir
  unsigned long long int bidir;
};

struct dstat_msg
{
  // mtype
  signed long int mtype;
  // stat
  struct blkiomon_stat stat;
};

struct rb_node
{
  // rb_parent_color
  unsigned long int rb_parent_color;
  // rb_right
  struct rb_node *rb_right;
  // rb_left
  struct rb_node *rb_left;
};

struct dstat
{
  // msg
  struct dstat_msg msg;
  // node
  struct rb_node node;
  // next
  struct dstat *next;
};

struct histlog2
{
  // first
  signed int first;
  // delta
  signed int delta;
  // num
  signed int num;
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

struct output
{
  // fn
  char *fn;
  // fp
  struct _IO_FILE *fp;
  // buf
  char *buf;
  // pipe
  signed int pipe;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct rb_root
{
  // rb_node
  struct rb_node *rb_node;
};

struct rb_search
{
  // node_ptr
  struct rb_node **node_ptr;
  // parent
  struct rb_node *parent;
};

struct timespec
{
  // tv_sec
  signed long int tv_sec;
  // tv_nsec
  signed long int tv_nsec;
};

struct trace
{
  // bit
  struct blk_io_trace bit;
  // node
  struct rb_node node;
  // next
  struct trace *next;
  // sequence
  signed long int sequence;
};


// binary
// file blkiomon.c line 90
static struct output binary;
// blkiomon_version
// file blkiomon.c line 74
static char blkiomon_version[4l] = { '0', '.', '3', 0 };
// d2c_hist
// file blkiomon.h line 53
static struct histlog2 d2c_hist = { .first=0, .delta=8, .num=25 };
// data_is_native
// file blkiomon.c line 99
signed int data_is_native = -1;
// debug
// file blkiomon.c line 90
static struct output debug;
// driverdata
// file blkiomon.c line 104
static signed long int driverdata = (signed long int)0;
// drvdata
// file blkiomon.c line 90
static struct output drvdata;
// dstat_curr
// file blkiomon.c line 88
static signed int dstat_curr = 0;
// dstat_list
// file blkiomon.c line 87
static struct dstat *dstat_list[2l] = { ((struct dstat *)NULL), ((struct dstat *)NULL) };
// dstat_mutex
// file blkiomon.c line 97
static union anonymous dstat_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// dstat_tree
// file blkiomon.c line 86
static struct rb_root dstat_tree[2l] = { { .rb_node=(struct rb_node *)(void *)0 },
    { .rb_node=(struct rb_node *)(void *)0 } };
// human
// file blkiomon.c line 90
static struct output human;
// ifp
// file blkiomon.c line 76
static struct _IO_FILE *ifp;
// interval
// file blkiomon.c line 77
static signed int interval = -1;
// interval_thread
// file blkiomon.c line 96
static unsigned long int interval_thread;
// l_opts
// file blkiomon.c line 616
static struct option l_opts[10l] = { { .name="human-readable", .has_arg=1, .flag=(signed int *)(void *)0, .val=104 },
    { .name="binary", .has_arg=1, .flag=(signed int *)(void *)0, .val=98 },
    { .name="dump-lldd", .has_arg=1, .flag=(signed int *)(void *)0, .val=100 },
    { .name="debug", .has_arg=1, .flag=(signed int *)(void *)0, .val=68 },
    { .name="interval", .has_arg=1, .flag=(signed int *)(void *)0, .val=73 },
    { .name="msg-queue", .has_arg=1, .flag=(signed int *)(void *)0, .val=81 },
    { .name="msg-queue-id", .has_arg=1, .flag=(signed int *)(void *)0, .val=113 },
    { .name="msg-id", .has_arg=1, .flag=(signed int *)(void *)0, .val=109 },
    { .name="version", .has_arg=0, .flag=(signed int *)(void *)0, .val=86 },
    { .name=(const char *)(void *)0, .has_arg=0, .flag=((signed int *)NULL),
    .val=0 } };
// leftover
// file blkiomon.c line 104
static signed long int leftover = (signed long int)0;
// match
// file blkiomon.c line 104
static signed long int match = (signed long int)0;
// mismatch
// file blkiomon.c line 104
static signed long int mismatch = (signed long int)0;
// msg_id
// file blkiomon.c line 94
static signed long int msg_id = (signed long int)-1;
// msg_q
// file blkiomon.c line 93
static signed int msg_q = -1;
// msg_q_id
// file blkiomon.c line 93
static signed int msg_q_id = -1;
// msg_q_name
// file blkiomon.c line 92
static char *msg_q_name = (char *)(void *)0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// sequence
// file blkiomon.c line 104
static signed long int sequence = (signed long int)0;
// size_hist
// file blkiomon.h line 47
static struct histlog2 size_hist = { .first=0, .delta=1024, .num=16 };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// thash
// file blkiomon.c line 83
struct trace *thash[128l] = { ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL), ((struct trace *)NULL) };
// up
// file blkiomon.c line 101
static signed int up = 1;
// usage_str
// file blkiomon.c line 598
static char usage_str[675l] = { '\n', '\n', 'b', 'l', 'k', 'i', 'o', 'm', 'o', 'n', ' ', '-', 'I', ' ', '<', 'i', 'n', 't', 'e', 'r', 'v', 'a', 'l', '>', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', ' ', '-', '-', 'i', 'n', 't', 'e', 'r', 'v', 'a', 'l', '=', '<', 'i', 'n', 't', 'e', 'r', 'v', 'a', 'l', '>', '\n', '[', ' ', '-', 'h', ' ', '<', 'f', 'i', 'l', 'e', '>', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', ' ', '-', '-', 'h', 'u', 'm', 'a', 'n', '-', 'r', 'e', 'a', 'd', 'a', 'b', 'l', 'e', '=', '<', 'f', 'i', 'l', 'e', '>', ' ', ']', '\n', '[', ' ', '-', 'b', ' ', '<', 'f', 'i', 'l', 'e', '>', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', ' ', '-', '-', 'b', 'i', 'n', 'a', 'r', 'y', '=', '<', 'f', 'i', 'l', 'e', '>', ' ', ']', '\n', '[', ' ', '-', 'd', ' ', '<', 'f', 'i', 'l', 'e', '>', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', ' ', '-', '-', 'd', 'u', 'm', 'p', '-', 'l', 'l', 'd', 'd', '=', '<', 'f', 'i', 'l', 'e', '>', ' ', ']', '\n', '[', ' ', '-', 'D', ' ', '<', 'f', 'i', 'l', 'e', '>', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', ' ', '-', '-', 'd', 'e', 'b', 'u', 'g', '=', '<', 'f', 'i', 'l', 'e', '>', ' ', ']', '\n', '[', ' ', '-', 'Q', ' ', '<', 'p', 'a', 't', 'h', ' ', 'n', 'a', 'm', 'e', '>', ' ', ' ', ' ', ' ', '|', ' ', '-', '-', 'm', 's', 'g', '-', 'q', 'u', 'e', 'u', 'e', '=', '<', 'p', 'a', 't', 'h', ' ', 'n', 'a', 'm', 'e', '>', ']', '\n', '[', ' ', '-', 'q', ' ', '<', 'm', 's', 'g', ' ', 'q', 'u', 'e', 'u', 'e', ' ', 'i', 'd', '>', ' ', '|', ' ', '-', '-', 'm', 's', 'g', '-', 'q', 'u', 'e', 'u', 'e', '-', 'i', 'd', '=', '<', 'm', 's', 'g', ' ', 'q', 'u', 'e', 'u', 'e', ' ', 'i', 'd', '>', ']', '\n', '[', ' ', '-', 'm', ' ', '<', 'm', 's', 'g', ' ', 'i', 'd', '>', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', ' ', '-', '-', 'm', 's', 'g', '-', 'i', 'd', '=', '<', 'm', 's', 'g', ' ', 'i', 'd', '>', ']', '\n', '[', ' ', '-', 'V', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', ' ', '-', '-', 'v', 'e', 'r', 's', 'i', 'o', 'n', ' ', ']', '\n', '\n', '\t', '-', 'I', ' ', ' ', ' ', 'S', 'a', 'm', 'p', 'l', 'e', ' ', 'i', 'n', 't', 'e', 'r', 'v', 'a', 'l', '.', '\n', '\t', '-', 'h', ' ', ' ', ' ', 'H', 'u', 'm', 'a', 'n', '-', 'r', 'e', 'a', 'd', 'a', 'b', 'l', 'e', ' ', 'o', 'u', 't', 'p', 'u', 't', ' ', 'f', 'i', 'l', 'e', '.', '\n', '\t', '-', 'b', ' ', ' ', ' ', 'B', 'i', 'n', 'a', 'r', 'y', ' ', 'o', 'u', 't', 'p', 'u', 't', ' ', 'f', 'i', 'l', 'e', '.', '\n', '\t', '-', 'd', ' ', ' ', ' ', 'O', 'u', 't', 'p', 'u', 't', ' ', 'f', 'i', 'l', 'e', ' ', 'f', 'o', 'r', ' ', 'd', 'a', 't', 'a', ' ', 'e', 'm', 'i', 't', 't', 'e', 'd', ' ', 'b', 'y', ' ', 'l', 'o', 'w', ' ', 'l', 'e', 'v', 'e', 'l', ' ', 'd', 'e', 'v', 'i', 'c', 'e', ' ', 'd', 'r', 'i', 'v', 'e', 'r', '.', '\n', '\t', '-', 'D', ' ', ' ', ' ', 'O', 'u', 't', 'p', 'u', 't', ' ', 'f', 'i', 'l', 'e', ' ', 'f', 'o', 'r', ' ', 'd', 'e', 'b', 'u', 'g', 'g', 'i', 'n', 'g', ' ', 'd', 'a', 't', 'a', '.', '\n', '\t', '-', 'Q', 'q', 'm', ' ', 'O', 'u', 't', 'p', 'u', 't', ' ', 't', 'o', ' ', 'm', 'e', 's', 's', 'a', 'g', 'e', ' ', 'q', 'u', 'e', 'u', 'e', ' ', 'u', 's', 'i', 'n', 'g', ' ', 'g', 'i', 'v', 'e', 'n', ' ', 'I', 'D', ' ', 'f', 'o', 'r', ' ', 'm', 'e', 's', 's', 'a', 'g', 'e', 's', '.', '\n', '\t', '-', 'V', ' ', ' ', ' ', 'P', 'r', 'i', 'n', 't', ' ', 'p', 'r', 'o', 'g', 'r', 'a', 'm', ' ', 'v', 'e', 'r', 's', 'i', 'o', 'n', '.', '\n', '\n', 0 };
// vacant_dstats_list
// file blkiomon.c line 85
static struct dstat *vacant_dstats_list = (struct dstat *)(void *)0;
// vacant_traces
// file blkiomon.c line 80
static signed int vacant_traces = 0;
// vacant_traces_list
// file blkiomon.c line 79
static struct trace *vacant_traces_list = (struct trace *)(void *)0;

// __bswap_32
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 45
static inline unsigned int __bswap_32(unsigned int __bsx)
{
  signed long int return_value___builtin_bswap32$1;
  return_value___builtin_bswap32$1=__builtin_bswap32((signed long int)__bsx);
  return (unsigned int)return_value___builtin_bswap32$1;
}

// __bswap_64
// file /usr/include/x86_64-linux-gnu/bits/byteswap.h line 109
static inline unsigned long int __bswap_64(unsigned long int __bsx)
{
  signed long long int return_value___builtin_bswap64$1;
  return_value___builtin_bswap64$1=__builtin_bswap64((signed long long int)__bsx);
  return (unsigned long int)return_value___builtin_bswap64$1;
}

// __rb_erase_color
// file rbtree.c line 136
static void __rb_erase_color(struct rb_node *node, struct rb_node *parent, struct rb_root *root)
{
  struct rb_node *other;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$5;
  while((_Bool)1)
  {
    if(!(node == ((struct rb_node *)NULL)))
    {
      if((1ul & node->rb_parent_color) == 0ul)
        goto __CPROVER_DUMP_L44;

    }

    if(node == root->rb_node)
      break;

    if(parent->rb_left == node)
    {
      other = parent->rb_right;
      if((1ul & other->rb_parent_color) == 0ul)
      {
        do
          other->rb_parent_color = other->rb_parent_color | (unsigned long int)1;
        while((_Bool)0);
        do
          parent->rb_parent_color = parent->rb_parent_color & (unsigned long int)~1;
        while((_Bool)0);
        __rb_rotate_left(parent, root);
        other = parent->rb_right;
      }

      if(other->rb_left == ((struct rb_node *)NULL))
        tmp_if_expr$2 = (_Bool)1;

      else
        tmp_if_expr$2 = (other->rb_left->rb_parent_color & (unsigned long int)1) != 0ul ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$2)
      {
        if(other->rb_right == ((struct rb_node *)NULL))
          tmp_if_expr$3 = (_Bool)1;

        else
          tmp_if_expr$3 = (other->rb_right->rb_parent_color & (unsigned long int)1) != 0ul ? (_Bool)1 : (_Bool)0;
        tmp_if_expr$4 = tmp_if_expr$3 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$4 = (_Bool)0;
      if(tmp_if_expr$4)
      {
        do
          other->rb_parent_color = other->rb_parent_color & (unsigned long int)~1;
        while((_Bool)0);
        node = parent;
        parent = (struct rb_node *)(node->rb_parent_color & (unsigned long int)~3);
      }

      else
      {
        if(other->rb_right == ((struct rb_node *)NULL))
          tmp_if_expr$1 = (_Bool)1;

        else
          tmp_if_expr$1 = (other->rb_right->rb_parent_color & (unsigned long int)1) != 0ul ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$1)
        {
          struct rb_node *o_left = other->rb_left;
          if(!(o_left == ((struct rb_node *)NULL)))
            do
              o_left->rb_parent_color = o_left->rb_parent_color | (unsigned long int)1;
            while((_Bool)0);

          do
            other->rb_parent_color = other->rb_parent_color & (unsigned long int)~1;
          while((_Bool)0);
          __rb_rotate_right(other, root);
          other = parent->rb_right;
        }

        rb_set_color(other, (signed int)(parent->rb_parent_color & (unsigned long int)1));
        do
          parent->rb_parent_color = parent->rb_parent_color | (unsigned long int)1;
        while((_Bool)0);
        if(!(other->rb_right == ((struct rb_node *)NULL)))
          do
            other->rb_right->rb_parent_color = other->rb_right->rb_parent_color | (unsigned long int)1;
          while((_Bool)0);

        __rb_rotate_left(parent, root);
        node = root->rb_node;
        break;
      }
    }

    else
    {
      other = parent->rb_left;
      if((1ul & other->rb_parent_color) == 0ul)
      {
        do
          other->rb_parent_color = other->rb_parent_color | (unsigned long int)1;
        while((_Bool)0);
        do
          parent->rb_parent_color = parent->rb_parent_color & (unsigned long int)~1;
        while((_Bool)0);
        __rb_rotate_right(parent, root);
        other = parent->rb_left;
      }

      if(other->rb_left == ((struct rb_node *)NULL))
        tmp_if_expr$6 = (_Bool)1;

      else
        tmp_if_expr$6 = (other->rb_left->rb_parent_color & (unsigned long int)1) != 0ul ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$6)
      {
        if(other->rb_right == ((struct rb_node *)NULL))
          tmp_if_expr$7 = (_Bool)1;

        else
          tmp_if_expr$7 = (other->rb_right->rb_parent_color & (unsigned long int)1) != 0ul ? (_Bool)1 : (_Bool)0;
        tmp_if_expr$8 = tmp_if_expr$7 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$8 = (_Bool)0;
      if(tmp_if_expr$8)
      {
        do
          other->rb_parent_color = other->rb_parent_color & (unsigned long int)~1;
        while((_Bool)0);
        node = parent;
        parent = (struct rb_node *)(node->rb_parent_color & (unsigned long int)~3);
      }

      else
      {
        if(other->rb_left == ((struct rb_node *)NULL))
          tmp_if_expr$5 = (_Bool)1;

        else
          tmp_if_expr$5 = (other->rb_left->rb_parent_color & (unsigned long int)1) != 0ul ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$5)
        {
          struct rb_node *o_right = other->rb_right;
          if(!(o_right == ((struct rb_node *)NULL)))
            do
              o_right->rb_parent_color = o_right->rb_parent_color | (unsigned long int)1;
            while((_Bool)0);

          do
            other->rb_parent_color = other->rb_parent_color & (unsigned long int)~1;
          while((_Bool)0);
          __rb_rotate_left(other, root);
          other = parent->rb_left;
        }

        rb_set_color(other, (signed int)(parent->rb_parent_color & (unsigned long int)1));
        do
          parent->rb_parent_color = parent->rb_parent_color | (unsigned long int)1;
        while((_Bool)0);
        if(!(other->rb_left == ((struct rb_node *)NULL)))
          do
            other->rb_left->rb_parent_color = other->rb_left->rb_parent_color | (unsigned long int)1;
          while((_Bool)0);

        __rb_rotate_right(parent, root);
        node = root->rb_node;
        break;
      }
    }
  }

__CPROVER_DUMP_L44:
  ;
  if(!(node == ((struct rb_node *)NULL)))
    do
      node->rb_parent_color = node->rb_parent_color | (unsigned long int)1;
    while((_Bool)0);

}

// __rb_rotate_left
// file rbtree.c line 25
static void __rb_rotate_left(struct rb_node *node, struct rb_root *root)
{
  struct rb_node *right = node->rb_right;
  struct rb_node *parent = (struct rb_node *)(node->rb_parent_color & (unsigned long int)~3);
  node->rb_right = right->rb_left;
  if(!(node->rb_right == ((struct rb_node *)NULL)))
    rb_set_parent(right->rb_left, node);

  right->rb_left = node;
  rb_set_parent(right, parent);
  if(!(parent == ((struct rb_node *)NULL)))
  {
    if(node == parent->rb_left)
      parent->rb_left = right;

    else
      parent->rb_right = right;
  }

  else
    root->rb_node = right;
  rb_set_parent(node, right);
}

// __rb_rotate_right
// file rbtree.c line 48
static void __rb_rotate_right(struct rb_node *node, struct rb_root *root)
{
  struct rb_node *left = node->rb_left;
  struct rb_node *parent = (struct rb_node *)(node->rb_parent_color & (unsigned long int)~3);
  node->rb_left = left->rb_right;
  if(!(node->rb_left == ((struct rb_node *)NULL)))
    rb_set_parent(left->rb_right, node);

  left->rb_right = node;
  rb_set_parent(left, parent);
  if(!(parent == ((struct rb_node *)NULL)))
  {
    if(node == parent->rb_right)
      parent->rb_right = left;

    else
      parent->rb_left = left;
  }

  else
    root->rb_node = left;
  rb_set_parent(node, left);
}

// action
// file blkiomon.c line 360
static signed int action(signed int a)
{
  signed int bits = 2 | 1 | 256 | 512;
  return a & bits << 16;
}

// blkiomon_account
// file blkiomon.c line 308
static signed int blkiomon_account(struct blk_io_trace *bit_d, struct blk_io_trace *bit_c)
{
  struct dstat *dstat;
  struct blkiomon_stat *p;
  unsigned long long int d2c = (bit_c->time - bit_d->time) / (unsigned long int)1000;
  unsigned int size = bit_d->bytes;
  unsigned long long int thrput = (unsigned long int)(size * (unsigned int)1000) / d2c;
  dstat=blkiomon_get_dstat(bit_d->device);
  if(dstat == ((struct dstat *)NULL))
    return 1;

  else
  {
    p = &dstat->msg.stat;
    if(!((1u & bit_c->action >> 16) == 0u))
    {
      minmax_account(&p->thrput_r, thrput);
      minmax_account(&p->size_r, (unsigned long long int)size);
      minmax_account(&p->d2c_r, d2c);
    }

    else
      if(!((2u & bit_c->action >> 16) == 0u))
      {
        minmax_account(&p->thrput_w, thrput);
        minmax_account(&p->size_w, (unsigned long long int)size);
        minmax_account(&p->d2c_w, d2c);
      }

      else
        p->bidir = p->bidir + 1ull;
    histlog2_account(p->size_hist, size, &size_hist);
    histlog2_account(p->d2c_hist, (unsigned int)d2c, &d2c_hist);
    return 0;
  }
}

// blkiomon_alloc_dstat
// file blkiomon.c line 156
static struct dstat * blkiomon_alloc_dstat(void)
{
  struct dstat *dstat;
  void *return_value_malloc$1;
  if(!(vacant_dstats_list == ((struct dstat *)NULL)))
  {
    dstat = vacant_dstats_list;
    vacant_dstats_list = dstat->next;
  }

  else
  {
    return_value_malloc$1=malloc(sizeof(struct dstat) /*464ul*/ );
    dstat = (struct dstat *)return_value_malloc$1;
  }
  if(dstat == ((struct dstat *)NULL))
  {
    fprintf(stderr, "blkiomon: could not allocate device statistic");
    return (struct dstat *)(void *)0;
  }

  else
  {
    blkiomon_stat_init(&dstat->msg.stat);
    return dstat;
  }
}

// blkiomon_alloc_trace
// file blkiomon.c line 338
static struct trace * blkiomon_alloc_trace(void)
{
  struct trace *t = vacant_traces_list;
  void *return_value_malloc$1;
  if(!(t == ((struct trace *)NULL)))
  {
    vacant_traces_list = t->next;
    vacant_traces = vacant_traces - 1;
  }

  else
  {
    return_value_malloc$1=malloc(sizeof(struct trace) /*88ul*/ );
    t = (struct trace *)return_value_malloc$1;
  }
  memset((void *)t, 0, sizeof(struct trace) /*88ul*/ );
  return t;
}

// blkiomon_debug
// file blkiomon.c line 577
static void blkiomon_debug(void)
{
  signed int i;
  struct trace *t;
  if(!(debug.fn == ((char *)NULL)))
  {
    i = 0;
    for( ; !(i >= 128); i = i + 1)
    {
      t = thash[(signed long int)i];
      for( ; !(t == ((struct trace *)NULL)); t = t->next)
      {
        dump_bit(t, "leftover");
        leftover = leftover + 1l;
      }
    }
    fprintf(debug.fp, "%ld leftover, %ld match, %ld mismatch, %ld driverdata, %ld overall\n", leftover, match, mismatch, driverdata, sequence);
  }

}

// blkiomon_do_fifo
// file blkiomon.c line 451
static signed int blkiomon_do_fifo(void)
{
  struct trace *t;
  struct blk_io_trace *bit;
  void *pdu_buf = (void *)0;
  t=blkiomon_alloc_trace();
  signed int return_value_check_data_endianness$4;
  signed long int tmp_post$7;
  if(t == ((struct trace *)NULL))
    return 1;

  else
  {
    bit = &t->bit;
    while(!(up == 0))
    {
      unsigned long int return_value_fread$2;
      return_value_fread$2=fread((void *)bit, sizeof(struct blk_io_trace) /*48ul*/ , (unsigned long int)1, ifp);
      if(!(return_value_fread$2 == 1ul))
      {
        signed int return_value_feof$1;
        return_value_feof$1=feof(ifp);
        if(return_value_feof$1 == 0)
          fprintf(stderr, "blkiomon: could not read trace");

        break;
      }

      signed int return_value_ferror$3;
      return_value_ferror$3=ferror(ifp);
      if(!(return_value_ferror$3 == 0))
      {
        clearerr(ifp);
        fprintf(stderr, "blkiomon: error while reading trace");
        break;
      }

      if(data_is_native == -1)
      {
        return_value_check_data_endianness$4=check_data_endianness(bit->magic);
        if(!(return_value_check_data_endianness$4 == 0))
        {
          fprintf(stderr, "blkiomon: endianness problem\n");
          break;
        }

      }

      trace_to_cpu(bit);
      signed int return_value_verify_trace$5;
      return_value_verify_trace$5=verify_trace(bit);
      if(!(return_value_verify_trace$5 == 0))
      {
        fprintf(stderr, "blkiomon: bad trace\n");
        break;
      }

      if(!(bit->pdu_len == 0))
      {
        pdu_buf=realloc(pdu_buf, (unsigned long int)bit->pdu_len);
        unsigned long int return_value_fread$6;
        return_value_fread$6=fread(pdu_buf, (unsigned long int)bit->pdu_len, (unsigned long int)1, ifp);
        if(!(return_value_fread$6 == 1ul))
        {
          clearerr(ifp);
          fprintf(stderr, "blkiomon: could not read payload\n");
          break;
        }

      }

      tmp_post$7 = sequence;
      sequence = sequence + 1l;
      t->sequence = tmp_post$7;
      if(!((1073741824u & bit->action) == 0u))
      {
        driverdata = driverdata + 1l;
        signed int return_value_blkiomon_dump_drvdata$8;
        return_value_blkiomon_dump_drvdata$8=blkiomon_dump_drvdata(bit, pdu_buf);
        if(!(return_value_blkiomon_dump_drvdata$8 == 0))
        {
          fprintf(stderr, "blkiomon: could not send trace\n");
          break;
        }

        continue;
      }

      if(!((12582912u & bit->action) == 0u))
      {
        t=blkiomon_do_trace(t);
        if(t == ((struct trace *)NULL))
        {
          fprintf(stderr, "blkiomon: could not alloc trace\n");
          break;
        }

        bit = &t->bit;
      }

    }
    blkiomon_free_trace(t);
    free(pdu_buf);
    return 0;
  }
}

// blkiomon_do_trace
// file blkiomon.c line 394
static struct trace * blkiomon_do_trace(struct trace *t)
{
  struct trace *t_stored;
  struct trace *t_old;
  struct trace *t_young;
  t_stored=blkiomon_fetch_trace(&t->bit);
  if(t_stored == ((struct trace *)NULL))
  {
    blkiomon_store_trace(t);
    struct trace *return_value_blkiomon_alloc_trace$1;
    return_value_blkiomon_alloc_trace$1=blkiomon_alloc_trace();
    return return_value_blkiomon_alloc_trace$1;
  }

  if(!(t_stored->bit.time >= t->bit.time))
  {
    t_old = t_stored;
    t_young = t;
  }

  else
  {
    t_old = t;
    t_young = t_stored;
  }
  if(!((4194304u & t_old->bit.action) == 0u))
  {
    if((8388608u & t_young->bit.action) == 0u)
      goto __CPROVER_DUMP_L4;

    match = match + 1l;
    blkiomon_account(&t_old->bit, &t_young->bit);
    blkiomon_free_trace(t_stored);
    return t;
  }

  else
  {

  __CPROVER_DUMP_L4:
    ;
    dump_bits(t_old, t_young, "mismatch");
    mismatch = mismatch + 1l;
    blkiomon_store_trace(t_young);
    return t_old;
  }
}

// blkiomon_dump_drvdata
// file blkiomon.c line 431
static signed int blkiomon_dump_drvdata(struct blk_io_trace *bit, void *pdu_buf)
{
  unsigned long int return_value_fwrite$2;
  signed int return_value_fflush$3;
  if(drvdata.fn == ((char *)NULL))
    return 0;

  else
  {
    unsigned long int return_value_fwrite$1;
    return_value_fwrite$1=fwrite((const void *)bit, sizeof(struct blk_io_trace) /*48ul*/ , (unsigned long int)1, drvdata.fp);
    if(return_value_fwrite$1 == 1ul)
    {
      return_value_fwrite$2=fwrite(pdu_buf, (unsigned long int)bit->pdu_len, (unsigned long int)1, drvdata.fp);
      if(!(return_value_fwrite$2 == 1ul))
        goto failed;

      if(!(drvdata.pipe == 0))
      {
        return_value_fflush$3=fflush(drvdata.fp);
        if(!(return_value_fflush$3 == 0))
          goto failed;

      }

      return 0;
    }

    else
    {

    failed:
      ;
      fprintf(stderr, "blkiomon: could not write to %s\n", drvdata.fn);
      fclose(drvdata.fp);
      drvdata.fn = (char *)(void *)0;
      return 1;
    }
  }
}

// blkiomon_fetch_trace
// file blkiomon.c line 374
static struct trace * blkiomon_fetch_trace(struct blk_io_trace *bit)
{
  signed int i = (signed int)(bit->sector % (unsigned long int)128);
  struct trace *t;
  struct trace *prev = (struct trace *)(void *)0;
  t = thash[(signed long int)i];
  signed int return_value_action$1;
  signed int return_value_action$2;
  for( ; !(t == ((struct trace *)NULL)); t = t->next)
  {
    if(t->bit.device == bit->device)
    {
      if(t->bit.sector == bit->sector)
      {
        return_value_action$1=action((signed int)t->bit.action);
        return_value_action$2=action((signed int)bit->action);
        if(return_value_action$1 == return_value_action$2)
        {
          if(!(prev == ((struct trace *)NULL)))
            prev->next = t->next;

          else
            thash[(signed long int)i] = t->next;
          return t;
        }

      }

    }

    prev = t;
  }
  return (struct trace *)(void *)0;
}

// blkiomon_find_dstat
// file blkiomon.c line 175
static struct dstat * blkiomon_find_dstat(struct rb_search *search, unsigned int device)
{
  struct rb_node **p = &dstat_tree[(signed long int)dstat_curr].rb_node;
  struct rb_node *parent = (struct rb_node *)(void *)0;
  struct dstat *dstat;
  struct dstat *tmp_statement_expression$1;
  while(!(*p == ((struct rb_node *)NULL)))
  {
    parent = *p;
    const struct rb_node *__mptr = parent;
    tmp_statement_expression$1 = (struct dstat *)((char *)__mptr - (signed long int)(unsigned long int)&((struct dstat *)0)->node);
    dstat = tmp_statement_expression$1;
    if(!(dstat->msg.stat.device >= device))
      p = &(*p)->rb_left;

    else
      if(!(device >= dstat->msg.stat.device))
        p = &(*p)->rb_right;

      else
        return dstat;
  }
  search->node_ptr = p;
  search->parent = parent;
  return (struct dstat *)(void *)0;
}

// blkiomon_free_trace
// file blkiomon.c line 350
static void blkiomon_free_trace(struct trace *t)
{
  if(!(vacant_traces >= 256))
  {
    t->next = vacant_traces_list;
    vacant_traces_list = t;
    vacant_traces = vacant_traces + 1;
  }

  else
    free((void *)t);
}

// blkiomon_get_dstat
// file blkiomon.c line 198
static struct dstat * blkiomon_get_dstat(unsigned int device)
{
  struct dstat *dstat;
  struct rb_search search;
  pthread_mutex_lock(&dstat_mutex);
  dstat=blkiomon_find_dstat(&search, device);
  if(dstat == ((struct dstat *)NULL))
  {
    dstat=blkiomon_alloc_dstat();
    if(!(dstat == ((struct dstat *)NULL)))
    {
      dstat->msg.stat.device = device;
      rb_link_node(&dstat->node, search.parent, search.node_ptr);
      rb_insert_color(&dstat->node, &dstat_tree[(signed long int)dstat_curr]);
      dstat->next = dstat_list[(signed long int)dstat_curr];
      dstat_list[(signed long int)dstat_curr] = dstat;
    }

  }


out:
  ;
  pthread_mutex_unlock(&dstat_mutex);
  return dstat;
}

// blkiomon_interval
// file blkiomon.c line 270
static void * blkiomon_interval(void *data)
{
  struct timespec wake;
  struct timespec r;
  struct dstat *head;
  struct dstat *tail;
  signed int finished;
  clock_gettime(0, &wake);
  while((_Bool)1)
  {
    wake.tv_sec = wake.tv_sec + (signed long int)interval;
    signed int return_value_clock_nanosleep$1;
    return_value_clock_nanosleep$1=clock_nanosleep(0, 1, &wake, &r);
    if(!(return_value_clock_nanosleep$1 == 0))
      fprintf(stderr, "blkiomon: interrupted sleep");

    else
    {
      pthread_mutex_lock(&dstat_mutex);
      finished = dstat_curr;
      dstat_curr = dstat_curr != 0 ? 0 : 1;
      pthread_mutex_unlock(&dstat_mutex);
      head = dstat_list[(signed long int)finished];
      if(!(head == ((struct dstat *)NULL)))
      {
        dstat_list[(signed long int)finished] = (struct dstat *)(void *)0;
        dstat_tree[(signed long int)finished] = (struct rb_root){ .rb_node=(struct rb_node *)(void *)0 };
        tail=blkiomon_output(head, &wake);
        pthread_mutex_lock(&dstat_mutex);
        tail->next = vacant_dstats_list;
        vacant_dstats_list = head;
        pthread_mutex_unlock(&dstat_mutex);
      }

    }
  }
  return data;
}

// blkiomon_open_msg_q
// file blkiomon.c line 558
static signed int blkiomon_open_msg_q(void)
{
  signed int key;
  if(msg_q_name == ((char *)NULL))
    return 0;

  else
    if(msg_q_id == 0 || !(msg_id >= 1l))
      return 1;

    else
    {
      key=ftok(msg_q_name, msg_q_id);
      if(key == -1)
        return 1;

      else
      {
        while(!(up == 0))
        {
          msg_q=msgget(key, 0400 | 0200 | 0100);
          if(msg_q >= 0)
            break;

        }
        return msg_q >= 0 ? 0 : -1;
      }
    }
}

// blkiomon_open_output
// file blkiomon.c line 526
static signed int blkiomon_open_output(struct output *out)
{
  signed int mode;
  signed int vbuf_size;
  void *return_value_malloc$2;
  signed int return_value_setvbuf$3;
  if(out->fn == ((char *)NULL))
    return 0;

  else
  {
    signed int return_value_strcmp$1;
    return_value_strcmp$1=strcmp(out->fn, "-");
    if(return_value_strcmp$1 == 0)
    {
      out->fp=fdopen(1, "w");
      mode = 1;
      vbuf_size = 4096;
      out->pipe = 1;
    }

    else
    {
      out->fp=fopen(out->fn, "w");
      mode = 0;
      vbuf_size = 128 * 1024;
      out->pipe = 0;
    }
    if(!(out->fp == ((struct _IO_FILE *)NULL)))
    {
      return_value_malloc$2=malloc((unsigned long int)(128 * 1024));
      out->buf = (char *)return_value_malloc$2;
      return_value_setvbuf$3=setvbuf(out->fp, out->buf, mode, (unsigned long int)vbuf_size);
      if(!(return_value_setvbuf$3 == 0))
        goto failed;

      return 0;
    }

    else
    {

    failed:
      ;
      fprintf(stderr, "blkiomon: could not write to %s\n", out->fn);
      out->fn = (char *)(void *)0;
      free((void *)out->buf);
      return 1;
    }
  }
}

// blkiomon_output
// file blkiomon.c line 255
static struct dstat * blkiomon_output(struct dstat *head, struct timespec *ts)
{
  struct dstat *dstat;
  struct dstat *tail = (struct dstat *)(void *)0;
  dstat = head;
  for( ; !(dstat == ((struct dstat *)NULL)); dstat = dstat->next)
  {
    dstat->msg.stat.time = (unsigned long long int)ts->tv_sec;
    blkiomon_stat_print(human.fp, &dstat->msg.stat);
    blkiomon_stat_to_be(&dstat->msg.stat);
    blkiomon_output_binary(dstat);
    blkiomon_output_msg_q(dstat);
    tail = dstat;
  }
  return tail;
}

// blkiomon_output_binary
// file blkiomon.c line 235
static signed int blkiomon_output_binary(struct dstat *dstat)
{
  struct blkiomon_stat *p = &dstat->msg.stat;
  signed int return_value_fflush$2;
  if(binary.fn == ((char *)NULL))
    return 0;

  else
  {
    unsigned long int return_value_fwrite$1;
    return_value_fwrite$1=fwrite((const void *)p, sizeof(struct blkiomon_stat) /*424ul*/ , (unsigned long int)1, binary.fp);
    if(return_value_fwrite$1 == 1ul)
    {
      if(!(binary.pipe == 0))
      {
        return_value_fflush$2=fflush(binary.fp);
        if(!(return_value_fflush$2 == 0))
          goto failed;

      }

      return 0;
    }

    else
    {

    failed:
      ;
      fprintf(stderr, "blkiomon: could not write to %s\n", binary.fn);
      fclose(binary.fp);
      binary.fn = (char *)(void *)0;
      return 1;
    }
  }
}

// blkiomon_output_msg_q
// file blkiomon.c line 226
static signed int blkiomon_output_msg_q(struct dstat *dstat)
{
  if(msg_q_name == ((char *)NULL))
    return 0;

  else
  {
    dstat->msg.mtype = msg_id;
    signed int return_value_msgsnd$1;
    return_value_msgsnd$1=msgsnd(msg_q, (const void *)&dstat->msg, sizeof(struct blkiomon_stat) /*424ul*/ , 0);
    return return_value_msgsnd$1;
  }
}

// blkiomon_signal
// file blkiomon.c line 676
static void blkiomon_signal(signed int signal)
{
  fprintf(stderr, "blkiomon: terminated by signal\n");
  up = signal & 0;
}

// blkiomon_stat_init
// file blkiomon.h line 59
static inline void blkiomon_stat_init(struct blkiomon_stat *bstat)
{
  memset((void *)bstat, 0, sizeof(struct blkiomon_stat) /*424ul*/ );
  minmax_init(&bstat->size_r);
  minmax_init(&bstat->size_w);
  minmax_init(&bstat->d2c_r);
  minmax_init(&bstat->d2c_w);
  minmax_init(&bstat->thrput_r);
  minmax_init(&bstat->thrput_w);
}

// blkiomon_stat_print
// file blkiomon.h line 99
static inline void blkiomon_stat_print(struct _IO_FILE *fp, struct blkiomon_stat *p)
{
  if(!(fp == ((struct _IO_FILE *)NULL)))
  {
    char *return_value_ctime$1;
    return_value_ctime$1=ctime((const signed long int *)(void *)&p->time);
    fprintf(fp, "\ntime: %s", return_value_ctime$1);
    fprintf(fp, "device: %d,%d\n", (unsigned int)(p->device >> 20), (unsigned int)(p->device & (1U << 20) - (unsigned int)1));
    minmax_print(fp, "sizes read (bytes)", &p->size_r);
    minmax_print(fp, "sizes write (bytes)", &p->size_w);
    minmax_print(fp, "d2c read (usec)", &p->d2c_r);
    minmax_print(fp, "d2c write (usec)", &p->d2c_w);
    minmax_print(fp, "throughput read (bytes/msec)", &p->thrput_r);
    minmax_print(fp, "throughput write (bytes/msec)", &p->thrput_w);
    histlog2_print(fp, "sizes histogram (bytes)", p->size_hist, &size_hist);
    histlog2_print(fp, "d2c histogram (usec)", p->d2c_hist, &d2c_hist);
    fprintf(fp, "bidirectional requests: %ld\n", (unsigned long int)p->bidir);
  }

}

// blkiomon_stat_to_be
// file blkiomon.h line 70
static inline void blkiomon_stat_to_be(struct blkiomon_stat *bstat)
{
  histlog2_to_be(bstat->size_hist, &size_hist);
  histlog2_to_be(bstat->d2c_hist, &d2c_hist);
  minmax_to_be(&bstat->size_r);
  minmax_to_be(&bstat->size_w);
  minmax_to_be(&bstat->d2c_r);
  minmax_to_be(&bstat->d2c_w);
  minmax_to_be(&bstat->thrput_r);
  minmax_to_be(&bstat->thrput_w);
  bstat->bidir=__bswap_64(bstat->bidir);
  bstat->time=__bswap_64(bstat->time);
  bstat->device=__bswap_32(bstat->device);
}

// blkiomon_store_trace
// file blkiomon.c line 366
static void blkiomon_store_trace(struct trace *t)
{
  signed int i = (signed int)(t->bit.sector % (unsigned long int)128);
  t->next = thash[(signed long int)i];
  thash[(signed long int)i] = t;
}

// check_data_endianness
// file blktrace.h line 126
static inline signed int check_data_endianness(unsigned int magic)
{
  if((0xffffff00 & magic) == 1700885504u)
  {
    data_is_native = 1;
    return 0;
  }

  else
  {
    magic=__bswap_32(magic);
    if((0xffffff00 & magic) == 1700885504u)
    {
      data_is_native = 0;
      return 0;
    }

    else
      return 1;
  }
}

// dump_bit
// file blkiomon.c line 106
static void dump_bit(struct trace *t, const char *descr)
{
  struct blk_io_trace *bit = &t->bit;
  if(!(debug.fn == ((char *)NULL)))
  {
    fprintf(debug.fp, "--- %s ---\n", descr);
    fprintf(debug.fp, "magic    %16d\n", bit->magic);
    fprintf(debug.fp, "sequence %16d\n", bit->sequence);
    fprintf(debug.fp, "time     %16ld\n", (unsigned long int)bit->time);
    fprintf(debug.fp, "sector   %16ld\n", (unsigned long int)bit->sector);
    fprintf(debug.fp, "bytes    %16d\n", bit->bytes);
    fprintf(debug.fp, "action   %16x\n", bit->action);
    fprintf(debug.fp, "pid      %16d\n", bit->pid);
    fprintf(debug.fp, "device   %16d\n", bit->device);
    fprintf(debug.fp, "cpu      %16d\n", bit->cpu);
    fprintf(debug.fp, "error    %16d\n", bit->error);
    fprintf(debug.fp, "pdu_len  %16d\n", bit->pdu_len);
    fprintf(debug.fp, "order    %16ld\n", t->sequence);
  }

}

// dump_bits
// file blkiomon.c line 129
static void dump_bits(struct trace *t1, struct trace *t2, const char *descr)
{
  struct blk_io_trace *bit1 = &t1->bit;
  struct blk_io_trace *bit2 = &t2->bit;
  if(!(debug.fn == ((char *)NULL)))
  {
    fprintf(debug.fp, "--- %s ---\n", descr);
    fprintf(debug.fp, "magic    %16d %16d\n", bit1->magic, bit2->magic);
    fprintf(debug.fp, "sequence %16d %16d\n", bit1->sequence, bit2->sequence);
    fprintf(debug.fp, "time     %16ld %16ld\n", (unsigned long int)bit1->time, (unsigned long int)bit2->time);
    fprintf(debug.fp, "sector   %16ld %16ld\n", (unsigned long int)bit1->sector, (unsigned long int)bit2->sector);
    fprintf(debug.fp, "bytes    %16d %16d\n", bit1->bytes, bit2->bytes);
    fprintf(debug.fp, "action   %16x %16x\n", bit1->action, bit2->action);
    fprintf(debug.fp, "pid      %16d %16d\n", bit1->pid, bit2->pid);
    fprintf(debug.fp, "device   %16d %16d\n", bit1->device, bit2->device);
    fprintf(debug.fp, "cpu      %16d %16d\n", bit1->cpu, bit2->cpu);
    fprintf(debug.fp, "error    %16d %16d\n", bit1->error, bit2->error);
    fprintf(debug.fp, "pdu_len  %16d %16d\n", bit1->pdu_len, bit2->pdu_len);
    fprintf(debug.fp, "order    %16ld %16ld\n", t1->sequence, t2->sequence);
  }

}

// histlog2_account
// file stats.h line 122
static inline void histlog2_account(unsigned int *bucket, unsigned int val, struct histlog2 *h)
{
  signed int index;
  index=histlog2_index((unsigned long long int)val, h);
  bucket[(signed long int)index] = bucket[(signed long int)index] + 1u;
}

// histlog2_index
// file stats.h line 114
static inline signed int histlog2_index(unsigned long long int val, struct histlog2 *h)
{
  signed int i = 0;
  _Bool tmp_if_expr$2;
  unsigned long long int return_value_histlog2_upper_limit$1;
  do
  {
    if(!(i >= h->num + -1))
    {
      return_value_histlog2_upper_limit$1=histlog2_upper_limit(i, h);
      tmp_if_expr$2 = val > return_value_histlog2_upper_limit$1 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
    if(!tmp_if_expr$2)
      break;

    i = i + 1;
  }
  while((_Bool)1);
  return i;
}

// histlog2_print
// file stats.h line 145
static inline void histlog2_print(struct _IO_FILE *fp, const char *s, unsigned int *a, struct histlog2 *h)
{
  signed int i;
  fprintf(fp, "%s:\n", s);
  i = 0;
  for( ; !(i >= h->num + -1); i = i + 1)
  {
    unsigned long long int return_value_histlog2_upper_limit$1;
    return_value_histlog2_upper_limit$1=histlog2_upper_limit(i, h);
    fprintf(fp, "   %10ld:%6d", (unsigned long int)return_value_histlog2_upper_limit$1, a[(signed long int)i]);
    if((1 + i) % 4 == 0)
      fprintf(fp, "\n");

  }
  unsigned long long int return_value_histlog2_upper_limit$2;
  return_value_histlog2_upper_limit$2=histlog2_upper_limit(i - 1, h);
  fprintf(fp, "    >%8ld:%6d\n", (unsigned long int)return_value_histlog2_upper_limit$2, a[(signed long int)i]);
}

// histlog2_to_be
// file stats.h line 137
static inline void histlog2_to_be(unsigned int *a, struct histlog2 *h)
{
  signed int i = 0;
  for( ; !(i >= h->num); i = i + 1)
    a[(signed long int)i]=__bswap_32(a[(signed long int)i]);
}

// histlog2_upper_limit
// file stats.h line 109
static inline unsigned long long int histlog2_upper_limit(signed int index, struct histlog2 *h)
{
  signed int tmp_if_expr$1;
  if(!(index == 0))
    tmp_if_expr$1 = h->delta << index - 1;

  else
    tmp_if_expr$1 = 0;
  return (unsigned long long int)(h->first + tmp_if_expr$1);
}

// main
// file blkiomon.c line 682
signed int main(signed int argc, char **argv)
{
  signed int c;
  signal(14, blkiomon_signal);
  signal(2, blkiomon_signal);
  signal(15, blkiomon_signal);
  signal(3, blkiomon_signal);
  signed int return_value_atoi$1;
  do
  {
    c=getopt_long(argc, argv, "b:d:D:h:I:Q:q:m:V", l_opts, (signed int *)(void *)0);
    if(c == -1)
      break;

    switch(c)
    {
      case 104:
      {
        human.fn = optarg;
        break;
      }
      case 98:
      {
        binary.fn = optarg;
        break;
      }
      case 100:
      {
        drvdata.fn = optarg;
        break;
      }
      case 68:
      {
        debug.fn = optarg;
        break;
      }
      case 73:
      {
        interval=atoi(optarg);
        break;
      }
      case 81:
      {
        msg_q_name = optarg;
        break;
      }
      case 113:
      {
        msg_q_id=atoi(optarg);
        break;
      }
      case 109:
      {
        return_value_atoi$1=atoi(optarg);
        msg_id = (signed long int)return_value_atoi$1;
        break;
      }
      case 86:
      {
        printf("%s version %s\n", argv[(signed long int)0], (const void *)blkiomon_version);
        return 0;
      }
      default:
      {
        fprintf(stderr, "Usage: %s", (const void *)usage_str);
        return 1;
      }
    }
  }
  while((_Bool)1);
  if(!(interval >= 1))
  {
    fprintf(stderr, "Usage: %s", (const void *)usage_str);
    return 1;
  }

  else
  {
    ifp=fdopen(0, "r");
    if(ifp == ((struct _IO_FILE *)NULL))
    {
      perror("blkiomon: could not open stdin for reading");
      return 1;
    }

    else
    {
      signed int return_value_blkiomon_open_output$2;
      return_value_blkiomon_open_output$2=blkiomon_open_output(&human);
      if(!(return_value_blkiomon_open_output$2 == 0))
        return 1;

      else
      {
        signed int return_value_blkiomon_open_output$3;
        return_value_blkiomon_open_output$3=blkiomon_open_output(&binary);
        if(!(return_value_blkiomon_open_output$3 == 0))
          return 1;

        else
        {
          signed int return_value_blkiomon_open_output$4;
          return_value_blkiomon_open_output$4=blkiomon_open_output(&drvdata);
          if(!(return_value_blkiomon_open_output$4 == 0))
            return 1;

          else
          {
            signed int return_value_blkiomon_open_output$5;
            return_value_blkiomon_open_output$5=blkiomon_open_output(&debug);
            if(!(return_value_blkiomon_open_output$5 == 0))
              return 1;

            else
            {
              signed int return_value_blkiomon_open_msg_q$6;
              return_value_blkiomon_open_msg_q$6=blkiomon_open_msg_q();
              if(!(return_value_blkiomon_open_msg_q$6 == 0))
                return 1;

              else
              {
                signed int return_value_pthread_create$7;
                return_value_pthread_create$7=pthread_create(&interval_thread, (const union pthread_attr_t *)(void *)0, blkiomon_interval, (void *)0);
                if(!(return_value_pthread_create$7 == 0))
                {
                  fprintf(stderr, "blkiomon: could not create thread");
                  return 1;
                }

                else
                {
                  blkiomon_do_fifo();
                  blkiomon_debug();
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

// minmax_account
// file stats.h line 45
static inline void minmax_account(struct minmax *mm, unsigned long long int value)
{
  mm->sum = mm->sum + value;
  mm->sos = mm->sos + value * value;
  if(!(value >= mm->min))
    mm->min = value;

  if(!(mm->max >= value))
    mm->max = value;

  mm->num = mm->num + 1ull;
}

// minmax_avg
// file stats.h line 76
static inline double minmax_avg(struct minmax *mm)
{
  if(mm->num == 0ull)
    return (double)0;

  else
    return (double)mm->sum / (double)mm->num;
}

// minmax_init
// file stats.h line 36
static inline void minmax_init(struct minmax *mm)
{
  mm->min = -1ULL;
  mm->max = (unsigned long long int)0;
  mm->sum = (unsigned long long int)0;
  mm->sos = (unsigned long long int)0;
  mm->num = (unsigned long long int)0;
}

// minmax_print
// file stats.h line 94
static inline signed int minmax_print(struct _IO_FILE *fp, const char *s, struct minmax *mm)
{
  double return_value_minmax_avg$1;
  return_value_minmax_avg$1=minmax_avg(mm);
  double return_value_minmax_var$2;
  return_value_minmax_var$2=minmax_var(mm);
  signed int return_value_fprintf$3;
  return_value_fprintf$3=fprintf(fp, "%s: num %Ld, min %Ld, max %Ld, sum %Ld, squ %Ld, avg %.1f, var %.1f\n", s, (unsigned long long int)mm->num, (unsigned long long int)mm->min, (unsigned long long int)mm->max, (unsigned long long int)mm->sum, (unsigned long long int)mm->sos, return_value_minmax_avg$1, return_value_minmax_var$2);
  return return_value_fprintf$3;
}

// minmax_to_be
// file stats.h line 67
static inline void minmax_to_be(struct minmax *mm)
{
  mm->sum=__bswap_64(mm->sum);
  mm->sos=__bswap_64(mm->sos);
  mm->min=__bswap_64(mm->min);
  mm->max=__bswap_64(mm->max);
  mm->num=__bswap_64(mm->num);
}

// minmax_var
// file stats.h line 84
static inline double minmax_var(struct minmax *mm)
{
  double num = (double)mm->num;
  if(mm->num == 0ull)
    return (double)0;

  else
    return ((double)mm->sos - (double)(mm->sum * mm->sum) / num) / num;
}

// rb_erase
// file rbtree.c line 222
extern void rb_erase(struct rb_node *node, struct rb_root *root)
{
  struct rb_node *child;
  struct rb_node *parent;
  signed int color;
  if(node->rb_left == ((struct rb_node *)NULL))
    child = node->rb_right;

  else
    if(node->rb_right == ((struct rb_node *)NULL))
      child = node->rb_left;

    else
    {
      struct rb_node *old = node;
      struct rb_node *left;
      node = node->rb_right;
      do
      {
        left = node->rb_left;
        if(left == ((struct rb_node *)NULL))
          break;

        node = left;
      }
      while((_Bool)1);
      child = node->rb_right;
      parent = (struct rb_node *)(node->rb_parent_color & (unsigned long int)~3);
      color = (signed int)(node->rb_parent_color & (unsigned long int)1);
      if(!(child == ((struct rb_node *)NULL)))
        rb_set_parent(child, parent);

      if(parent == old)
      {
        parent->rb_right = child;
        parent = node;
      }

      else
        parent->rb_left = child;
      node->rb_parent_color = old->rb_parent_color;
      node->rb_right = old->rb_right;
      node->rb_left = old->rb_left;
      if(!((18446744073709551612ul & old->rb_parent_color) == 0ul))
      {
        if(((struct rb_node *)(18446744073709551612ul & old->rb_parent_color))->rb_left == old)
          ((struct rb_node *)(old->rb_parent_color & (unsigned long int)~3))->rb_left = node;

        else
          ((struct rb_node *)(old->rb_parent_color & (unsigned long int)~3))->rb_right = node;
      }

      else
        root->rb_node = node;
      rb_set_parent(old->rb_left, node);
      if(!(old->rb_right == ((struct rb_node *)NULL)))
        rb_set_parent(old->rb_right, node);

      goto color;
    }
  parent = (struct rb_node *)(node->rb_parent_color & (unsigned long int)~3);
  color = (signed int)(node->rb_parent_color & (unsigned long int)1);
  if(!(child == ((struct rb_node *)NULL)))
    rb_set_parent(child, parent);

  if(!(parent == ((struct rb_node *)NULL)))
  {
    if(parent->rb_left == node)
      parent->rb_left = child;

    else
      parent->rb_right = child;
  }

  else
    root->rb_node = child;

color:
  ;
  if(color == 1)
    __rb_erase_color(child, parent, root);

}

// rb_first
// file rbtree.c line 292
extern struct rb_node * rb_first(struct rb_root *root)
{
  struct rb_node *n = root->rb_node;
  if(n == ((struct rb_node *)NULL))
    return (struct rb_node *)(void *)0;

  else
  {
    for( ; !(n->rb_left == ((struct rb_node *)NULL)); n = n->rb_left)
      ;
    return n;
  }
}

// rb_insert_color
// file rbtree.h line 143
extern void rb_insert_color(struct rb_node *node, struct rb_root *root)
{
  struct rb_node *parent;
  struct rb_node *gparent;
  do
  {
    parent = (struct rb_node *)(node->rb_parent_color & (unsigned long int)~3);
    if(parent == ((struct rb_node *)NULL))
      break;

    if(!((1ul & parent->rb_parent_color) == 0ul))
      break;

    gparent = (struct rb_node *)(parent->rb_parent_color & (unsigned long int)~3);
    if(parent == gparent->rb_left)
    {
      struct rb_node *rb_insert_color$$1$$1$$1$$1$$uncle = gparent->rb_right;
      if(!(rb_insert_color$$1$$1$$1$$1$$uncle == ((struct rb_node *)NULL)))
      {
        if((1ul & rb_insert_color$$1$$1$$1$$1$$uncle->rb_parent_color) == 0ul)
        {
          do
            rb_insert_color$$1$$1$$1$$1$$uncle->rb_parent_color = rb_insert_color$$1$$1$$1$$1$$uncle->rb_parent_color | (unsigned long int)1;
          while((_Bool)0);
          do
            parent->rb_parent_color = parent->rb_parent_color | (unsigned long int)1;
          while((_Bool)0);
          do
            gparent->rb_parent_color = gparent->rb_parent_color & (unsigned long int)~1;
          while((_Bool)0);
          node = gparent;
          continue;
        }

      }

      if(parent->rb_right == node)
      {
        struct rb_node *rb_insert_color$$1$$1$$1$$2$$tmp;
        __rb_rotate_left(parent, root);
        rb_insert_color$$1$$1$$1$$2$$tmp = parent;
        parent = node;
        node = rb_insert_color$$1$$1$$1$$2$$tmp;
      }

      do
        parent->rb_parent_color = parent->rb_parent_color | (unsigned long int)1;
      while((_Bool)0);
      do
        gparent->rb_parent_color = gparent->rb_parent_color & (unsigned long int)~1;
      while((_Bool)0);
      __rb_rotate_right(gparent, root);
    }

    else
    {
      struct rb_node *uncle = gparent->rb_left;
      if(!(uncle == ((struct rb_node *)NULL)))
      {
        if(!((1ul & uncle->rb_parent_color) == 0ul))
          goto __CPROVER_DUMP_L12;

        do
          uncle->rb_parent_color = uncle->rb_parent_color | (unsigned long int)1;
        while((_Bool)0);
        do
          parent->rb_parent_color = parent->rb_parent_color | (unsigned long int)1;
        while((_Bool)0);
        do
          gparent->rb_parent_color = gparent->rb_parent_color & (unsigned long int)~1;
        while((_Bool)0);
        node = gparent;
      }

      else
      {

      __CPROVER_DUMP_L12:
        ;
        if(parent->rb_left == node)
        {
          struct rb_node *tmp;
          __rb_rotate_right(parent, root);
          tmp = parent;
          parent = node;
          node = tmp;
        }

        do
          parent->rb_parent_color = parent->rb_parent_color | (unsigned long int)1;
        while((_Bool)0);
        do
          gparent->rb_parent_color = gparent->rb_parent_color & (unsigned long int)~1;
        while((_Bool)0);
        __rb_rotate_left(gparent, root);
      }
    }
  }
  while((_Bool)1);
  do
    root->rb_node->rb_parent_color = root->rb_node->rb_parent_color | (unsigned long int)1;
  while((_Bool)0);
}

// rb_last
// file rbtree.c line 304
extern struct rb_node * rb_last(struct rb_root *root)
{
  struct rb_node *n = root->rb_node;
  if(n == ((struct rb_node *)NULL))
    return (struct rb_node *)(void *)0;

  else
  {
    for( ; !(n->rb_right == ((struct rb_node *)NULL)); n = n->rb_right)
      ;
    return n;
  }
}

// rb_link_node
// file rbtree.h line 156
static inline void rb_link_node(struct rb_node *node, struct rb_node *parent, struct rb_node **rb_link)
{
  node->rb_parent_color = (unsigned long int)parent;
  node->rb_right = (struct rb_node *)(void *)0;
  node->rb_left = node->rb_right;
  *rb_link = node;
}

// rb_next
// file rbtree.c line 316
extern struct rb_node * rb_next(struct rb_node *node)
{
  struct rb_node *parent;
  if((struct rb_node *)(18446744073709551612ul & node->rb_parent_color) == node)
    return (struct rb_node *)(void *)0;

  else
    if(!(node->rb_right == ((struct rb_node *)NULL)))
    {
      node = node->rb_right;
      for( ; !(node->rb_left == ((struct rb_node *)NULL)); node = node->rb_left)
        ;
      return node;
    }

    else
    {
      do
      {
        parent = (struct rb_node *)(node->rb_parent_color & (unsigned long int)~3);
        if(parent == ((struct rb_node *)NULL))
          break;

        if(!(node == parent->rb_right))
          break;

        node = parent;
      }
      while((_Bool)1);
      return parent;
    }
}

// rb_prev
// file rbtree.c line 344
extern struct rb_node * rb_prev(struct rb_node *node)
{
  struct rb_node *parent;
  if((struct rb_node *)(18446744073709551612ul & node->rb_parent_color) == node)
    return (struct rb_node *)(void *)0;

  else
    if(!(node->rb_left == ((struct rb_node *)NULL)))
    {
      node = node->rb_left;
      for( ; !(node->rb_right == ((struct rb_node *)NULL)); node = node->rb_right)
        ;
      return node;
    }

    else
    {
      do
      {
        parent = (struct rb_node *)(node->rb_parent_color & (unsigned long int)~3);
        if(parent == ((struct rb_node *)NULL))
          break;

        if(!(node == parent->rb_left))
          break;

        node = parent;
      }
      while((_Bool)1);
      return parent;
    }
}

// rb_replace_node
// file rbtree.c line 368
extern void rb_replace_node(struct rb_node *victim, struct rb_node *new, struct rb_root *root)
{
  struct rb_node *parent = (struct rb_node *)(victim->rb_parent_color & (unsigned long int)~3);
  if(!(parent == ((struct rb_node *)NULL)))
  {
    if(victim == parent->rb_left)
      parent->rb_left = new;

    else
      parent->rb_right = new;
  }

  else
    root->rb_node = new;
  if(!(victim->rb_left == ((struct rb_node *)NULL)))
    rb_set_parent(victim->rb_left, new);

  if(!(victim->rb_right == ((struct rb_node *)NULL)))
    rb_set_parent(victim->rb_right, new);

  *new = *victim;
}

// rb_set_color
// file rbtree.h line 135
static inline void rb_set_color(struct rb_node *rb, signed int color)
{
  rb->rb_parent_color = rb->rb_parent_color & (unsigned long int)~1 | (unsigned long int)color;
}

// rb_set_parent
// file rbtree.h line 131
static inline void rb_set_parent(struct rb_node *rb, struct rb_node *p)
{
  rb->rb_parent_color = rb->rb_parent_color & (unsigned long int)3 | (unsigned long int)p;
}

// trace_to_cpu
// file blktrace.h line 105
static inline void trace_to_cpu(struct blk_io_trace *t)
{
  unsigned short int tmp_statement_expression$1;
  unsigned short int tmp_statement_expression$2;
  if(data_is_native == 0)
  {
    t->magic=__bswap_32(t->magic);
    t->sequence=__bswap_32(t->sequence);
    t->time=__bswap_64(t->time);
    t->sector=__bswap_64(t->sector);
    t->bytes=__bswap_32(t->bytes);
    t->action=__bswap_32(t->action);
    t->pid=__bswap_32(t->pid);
    t->device=__bswap_32(t->device);
    t->cpu=__bswap_32(t->cpu);
    unsigned short int __v;
    unsigned short int trace_to_cpu$$1$$1$$__x = (unsigned short int)t->error;
    asm("rorw $8, %w0" : "=r"(__v) : "0"(trace_to_cpu$$1$$1$$__x) : "cc");
    tmp_statement_expression$1 = __v;
    t->error = tmp_statement_expression$1;
    unsigned short int trace_to_cpu$$1$$2$$__v;
    unsigned short int __x = (unsigned short int)t->pdu_len;
    asm("rorw $8, %w0" : "=r"(trace_to_cpu$$1$$2$$__v) : "0"(__x) : "cc");
    tmp_statement_expression$2 = trace_to_cpu$$1$$2$$__v;
    t->pdu_len = tmp_statement_expression$2;
  }

}

// verify_trace
// file blktrace.h line 90
static inline signed int verify_trace(struct blk_io_trace *t)
{
  if(!((0xffffff00 & t->magic) == 1700885504u))
  {
    fprintf(stderr, "bad trace magic %x\n", t->magic);
    return 1;
  }

  else
    if(!((255u & t->magic) == 7u))
    {
      fprintf(stderr, "unsupported trace version %x\n", t->magic & (unsigned int)0xff);
      return 1;
    }

    else
      return 0;
}

