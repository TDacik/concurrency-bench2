// #anon_enum$AO_BYTE_TS_clear=0$AO_BYTE_TS_set=255
// file atomic_ops/sysdeps/gcc/../test_and_set_t_is_char.h line 30
enum anonymous$2 { AO_BYTE_TS_clear=0, AO_BYTE_TS_set=255 };

// #anon_enum$AO_TS_clear=0$AO_TS_set=1
// file ../src/atomic_ops/sysdeps/test_and_set_t_is_ao_t.h line 29
enum anonymous$1 { AO_TS_clear=0, AO_TS_set=1 };

// tag-#anon#ST[ARR16{S64}$S64$'__fds_bits'|]
// file /usr/include/x86_64-linux-gnu/sys/select.h line 64
struct anonymous$5;

// tag-#anon#ST[ARR16{U64}$U64$'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous$3;

// tag-#anon#ST[U64'AO_v1'||U64'AO_v2'|]
// file atomic_ops/sysdeps/standard_ao_double_t.h line 43
struct anonymous$6;

// tag-#anon#ST[U64'AO_val1'||U64'AO_val2'|]
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 365
struct anonymous;

// tag-#anon#UN[SYM#tag-#anon#ST[U64'AO_v1'||U64'AO_v2'|]#'AO_parts'||VECconstant{F32}$F32$'AO_whole'|]
// file atomic_ops/sysdeps/standard_ao_double_t.h line 42
union anonymous$4;

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

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

#ifndef NULL
#define NULL ((void*)0)
#endif

// AO_and_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 194
static inline void AO_and_full(volatile unsigned long int *p, unsigned long int value);
// AO_char_compare_and_swap
// file ../src/atomic_ops/generalize-arithm.h line 87
static inline signed int AO_char_compare_and_swap(volatile unsigned char *addr, unsigned char old_val, unsigned char new_val);
// AO_char_compare_and_swap_acquire
// file ../src/atomic_ops/generalize-arithm.h line 39
static inline signed int AO_char_compare_and_swap_acquire(volatile unsigned char *addr, unsigned char old_val, unsigned char new_val);
// AO_char_compare_and_swap_release
// file ../src/atomic_ops/generalize-arithm.h line 51
static inline signed int AO_char_compare_and_swap_release(volatile unsigned char *addr, unsigned char old_val, unsigned char new_val);
// AO_char_fetch_and_add
// file ../src/atomic_ops/generalize-arithm.h line 191
static inline unsigned char AO_char_fetch_and_add(volatile unsigned char *addr, unsigned char incr);
// AO_char_fetch_and_add_acquire
// file ../src/atomic_ops/generalize-arithm.h line 155
static inline unsigned char AO_char_fetch_and_add_acquire(volatile unsigned char *addr, unsigned char incr);
// AO_char_fetch_and_add_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 155
static inline unsigned char AO_char_fetch_and_add_full(volatile unsigned char *p, unsigned char incr);
// AO_char_fetch_and_add_release
// file ../src/atomic_ops/generalize-arithm.h line 173
static inline unsigned char AO_char_fetch_and_add_release(volatile unsigned char *addr, unsigned char incr);
// AO_char_fetch_compare_and_swap_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 317
static inline unsigned char AO_char_fetch_compare_and_swap_full(volatile unsigned char *addr, unsigned char old_val, unsigned char new_val);
// AO_char_load_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 69
static inline unsigned char AO_char_load_full(const volatile unsigned char *addr);
// AO_char_store
// file atomic_ops/sysdeps/gcc/../loadstore/char_atomic_store.h line 28
static inline void AO_char_store(volatile unsigned char *addr, unsigned char new_val);
// AO_char_store_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 80
static inline void AO_char_store_full(volatile unsigned char *addr, unsigned char val);
// AO_compare_and_swap
// file ../src/atomic_ops/generalize-arithm.h line 2622
static inline signed int AO_compare_and_swap(volatile unsigned long int *addr, unsigned long int old_val, unsigned long int new_val);
// AO_compare_and_swap_acquire
// file ../src/atomic_ops/generalize-arithm.h line 2574
static inline signed int AO_compare_and_swap_acquire(volatile unsigned long int *addr, unsigned long int old_val, unsigned long int new_val);
// AO_compare_and_swap_acquire_read
// file ../src/atomic_ops/generalize-arithm.h line 2645
static inline signed int AO_compare_and_swap_acquire_read(volatile unsigned long int *addr, unsigned long int old_val, unsigned long int new_val);
// AO_compare_and_swap_double_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 416
static inline signed int AO_compare_and_swap_double_full(volatile struct anonymous *addr, unsigned long int old1, unsigned long int new1, unsigned long int new2);
// AO_compare_and_swap_full
// file ../src/atomic_ops/generalize-arithm.h line 2562
static inline signed int AO_compare_and_swap_full(volatile unsigned long int *addr, unsigned long int old_val, unsigned long int new_val);
// AO_compare_and_swap_read
// file ../src/atomic_ops/generalize-arithm.h line 2610
static inline signed int AO_compare_and_swap_read(volatile unsigned long int *addr, unsigned long int old_val, unsigned long int new_val);
// AO_compare_and_swap_release
// file ../src/atomic_ops/generalize-arithm.h line 2586
static inline signed int AO_compare_and_swap_release(volatile unsigned long int *addr, unsigned long int old_val, unsigned long int new_val);
// AO_compare_and_swap_release_write
// file ../src/atomic_ops/generalize-arithm.h line 2633
static inline signed int AO_compare_and_swap_release_write(volatile unsigned long int *addr, unsigned long int old_val, unsigned long int new_val);
// AO_compare_and_swap_write
// file ../src/atomic_ops/generalize-arithm.h line 2598
static inline signed int AO_compare_and_swap_write(volatile unsigned long int *addr, unsigned long int old_val, unsigned long int new_val);
// AO_compare_double_and_swap_double_emulation
// file atomic_ops.c line 172
signed int AO_compare_double_and_swap_double_emulation(volatile union anonymous$4 *addr, unsigned long int old_val1, unsigned long int old_val2, unsigned long int new_val1, unsigned long int new_val2);
// AO_compare_double_and_swap_double_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 397
static inline signed int AO_compare_double_and_swap_double_full(volatile struct anonymous *addr, unsigned long int old1, unsigned long int old2, unsigned long int new1, unsigned long int new2);
// AO_double_compare_and_swap
// file ../src/atomic_ops/generalize.h line 584
static inline signed int AO_double_compare_and_swap(volatile struct anonymous *addr, struct anonymous old_val, struct anonymous new_val);
// AO_double_compare_and_swap_acquire
// file ../src/atomic_ops/generalize.h line 608
static inline signed int AO_double_compare_and_swap_acquire(volatile struct anonymous *addr, struct anonymous old_val, struct anonymous new_val);
// AO_double_compare_and_swap_acquire_read
// file ../src/atomic_ops/generalize.h line 656
static inline signed int AO_double_compare_and_swap_acquire_read(volatile struct anonymous *addr, struct anonymous old_val, struct anonymous new_val);
// AO_double_compare_and_swap_full
// file ../src/atomic_ops/generalize.h line 668
static inline signed int AO_double_compare_and_swap_full(volatile struct anonymous *addr, struct anonymous old_val, struct anonymous new_val);
// AO_double_compare_and_swap_read
// file ../src/atomic_ops/generalize.h line 620
static inline signed int AO_double_compare_and_swap_read(volatile struct anonymous *addr, struct anonymous old_val, struct anonymous new_val);
// AO_double_compare_and_swap_release
// file ../src/atomic_ops/generalize.h line 596
static inline signed int AO_double_compare_and_swap_release(volatile struct anonymous *addr, struct anonymous old_val, struct anonymous new_val);
// AO_double_compare_and_swap_release_write
// file ../src/atomic_ops/generalize.h line 644
static inline signed int AO_double_compare_and_swap_release_write(volatile struct anonymous *addr, struct anonymous old_val, struct anonymous new_val);
// AO_double_compare_and_swap_write
// file ../src/atomic_ops/generalize.h line 632
static inline signed int AO_double_compare_and_swap_write(volatile struct anonymous *addr, struct anonymous old_val, struct anonymous new_val);
// AO_double_load_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 374
static inline struct anonymous AO_double_load_full(const volatile struct anonymous *addr);
// AO_double_store_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 387
static inline void AO_double_store_full(volatile struct anonymous *addr, struct anonymous value);
// AO_fetch_and_add
// file ../src/atomic_ops/generalize-arithm.h line 2726
static inline unsigned long int AO_fetch_and_add(volatile unsigned long int *addr, unsigned long int incr);
// AO_fetch_and_add_acquire
// file ../src/atomic_ops/generalize-arithm.h line 2690
static inline unsigned long int AO_fetch_and_add_acquire(volatile unsigned long int *addr, unsigned long int incr);
// AO_fetch_and_add_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 142
static inline unsigned long int AO_fetch_and_add_full(volatile unsigned long int *p, unsigned long int incr);
// AO_fetch_and_add_release
// file ../src/atomic_ops/generalize-arithm.h line 2708
static inline unsigned long int AO_fetch_and_add_release(volatile unsigned long int *addr, unsigned long int incr);
// AO_fetch_compare_and_swap_emulation
// file atomic_ops.c line 151
unsigned long int AO_fetch_compare_and_swap_emulation(volatile unsigned long int *addr, unsigned long int old_val, unsigned long int new_val);
// AO_fetch_compare_and_swap_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 302
static inline unsigned long int AO_fetch_compare_and_swap_full(volatile unsigned long int *addr, unsigned long int old_val, unsigned long int new_val);
// AO_int_compare_and_swap
// file ../src/atomic_ops/generalize-arithm.h line 1777
static inline signed int AO_int_compare_and_swap(volatile unsigned int *addr, unsigned int old_val, unsigned int new_val);
// AO_int_compare_and_swap_acquire
// file ../src/atomic_ops/generalize-arithm.h line 1729
static inline signed int AO_int_compare_and_swap_acquire(volatile unsigned int *addr, unsigned int old_val, unsigned int new_val);
// AO_int_compare_and_swap_release
// file ../src/atomic_ops/generalize-arithm.h line 1741
static inline signed int AO_int_compare_and_swap_release(volatile unsigned int *addr, unsigned int old_val, unsigned int new_val);
// AO_int_fetch_and_add
// file ../src/atomic_ops/generalize-arithm.h line 1881
static inline unsigned int AO_int_fetch_and_add(volatile unsigned int *addr, unsigned int incr);
// AO_int_fetch_and_add_acquire
// file ../src/atomic_ops/generalize-arithm.h line 1845
static inline unsigned int AO_int_fetch_and_add_acquire(volatile unsigned int *addr, unsigned int incr);
// AO_int_fetch_and_add_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 181
static inline unsigned int AO_int_fetch_and_add_full(volatile unsigned int *p, unsigned int incr);
// AO_int_fetch_and_add_release
// file ../src/atomic_ops/generalize-arithm.h line 1863
static inline unsigned int AO_int_fetch_and_add_release(volatile unsigned int *addr, unsigned int incr);
// AO_int_fetch_compare_and_swap_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 349
static inline unsigned int AO_int_fetch_compare_and_swap_full(volatile unsigned int *addr, unsigned int old_val, unsigned int new_val);
// AO_int_load_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 109
static inline unsigned int AO_int_load_full(const volatile unsigned int *addr);
// AO_int_store_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 120
static inline void AO_int_store_full(volatile unsigned int *addr, unsigned int val);
// AO_load
// file atomic_ops/sysdeps/gcc/../loadstore/atomic_load.h line 28
static inline unsigned long int AO_load(const volatile unsigned long int *addr);
// AO_load_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 49
static inline unsigned long int AO_load_full(const volatile unsigned long int *addr);
// AO_load_read
// file atomic_ops/generalize-small.h line 1856
static inline unsigned long int AO_load_read(const volatile unsigned long int *addr);
// AO_nop
// file ../src/atomic_ops/generalize.h line 176
static inline void AO_nop(void);
// AO_nop_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 41
static inline void AO_nop_full(void);
// AO_nop_read
// file atomic_ops/sysdeps/gcc/../read_ordered.h line 31
static inline void AO_nop_read(void);
// AO_nop_write
// file atomic_ops/sysdeps/gcc/../ordered_except_wr.h line 33
static inline void AO_nop_write(void);
// AO_or_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 203
static inline void AO_or_full(volatile unsigned long int *p, unsigned long int value);
// AO_pause
// file atomic_ops.c line 232
void AO_pause(signed int n);
// AO_short_compare_and_swap
// file ../src/atomic_ops/generalize-arithm.h line 932
static inline signed int AO_short_compare_and_swap(volatile unsigned short int *addr, unsigned short int old_val, unsigned short int new_val);
// AO_short_compare_and_swap_acquire
// file ../src/atomic_ops/generalize-arithm.h line 884
static inline signed int AO_short_compare_and_swap_acquire(volatile unsigned short int *addr, unsigned short int old_val, unsigned short int new_val);
// AO_short_compare_and_swap_release
// file ../src/atomic_ops/generalize-arithm.h line 896
static inline signed int AO_short_compare_and_swap_release(volatile unsigned short int *addr, unsigned short int old_val, unsigned short int new_val);
// AO_short_fetch_and_add
// file ../src/atomic_ops/generalize-arithm.h line 1036
static inline unsigned short int AO_short_fetch_and_add(volatile unsigned short int *addr, unsigned short int incr);
// AO_short_fetch_and_add_acquire
// file ../src/atomic_ops/generalize-arithm.h line 1000
static inline unsigned short int AO_short_fetch_and_add_acquire(volatile unsigned short int *addr, unsigned short int incr);
// AO_short_fetch_and_add_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 168
static inline unsigned short int AO_short_fetch_and_add_full(volatile unsigned short int *p, unsigned short int incr);
// AO_short_fetch_and_add_release
// file ../src/atomic_ops/generalize-arithm.h line 1018
static inline unsigned short int AO_short_fetch_and_add_release(volatile unsigned short int *addr, unsigned short int incr);
// AO_short_fetch_compare_and_swap_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 333
static inline unsigned short int AO_short_fetch_compare_and_swap_full(volatile unsigned short int *addr, unsigned short int old_val, unsigned short int new_val);
// AO_short_load_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 89
static inline unsigned short int AO_short_load_full(const volatile unsigned short int *addr);
// AO_short_store_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 100
static inline void AO_short_store_full(volatile unsigned short int *addr, unsigned short int val);
// AO_spin
// file atomic_ops.c line 221
static void AO_spin(signed int n);
// AO_store
// file atomic_ops/sysdeps/gcc/../loadstore/atomic_store.h line 28
static inline void AO_store(volatile unsigned long int *addr, unsigned long int new_val);
// AO_store_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 60
static inline void AO_store_full(volatile unsigned long int *addr, unsigned long int val);
// AO_store_full_emulation
// file atomic_ops.c line 199
void AO_store_full_emulation(volatile unsigned long int *addr, unsigned long int val);
// AO_test_and_set_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 129
static inline enum anonymous$1 AO_test_and_set_full(volatile unsigned long int *addr);
// AO_test_and_set_full$link1
// file atomic_ops/sysdeps/gcc/x86.h line 124
static inline enum anonymous$2 AO_test_and_set_full$link1(volatile unsigned char *addr$link1);
// AO_xor_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 212
static inline void AO_xor_full(volatile unsigned long int *p, unsigned long int value);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// acqrel_test
// file test_atomic.c line 126
signed int acqrel_test(void);
// acqrel_thr
// file test_atomic.c line 78
void * acqrel_thr(void *id);
// add1sub1_test
// file test_atomic.c line 65
signed int add1sub1_test(void);
// add1sub1_thr
// file test_atomic.c line 50
void * add1sub1_thr(void *id);
// block_all_signals
// file atomic_ops.c line 130
static inline void block_all_signals(struct anonymous$3 *old_sigs_ptr);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// lock$link1
// file atomic_ops.c line 114
static inline void lock$link1(volatile unsigned char *l);
// lock_ool
// file atomic_ops.c line 106
static void lock_ool(volatile unsigned char *l);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_attr_init
// file /usr/include/pthread.h line 298
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_create
// file /usr/include/pthread.h line 244
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 261
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_lock
// file /usr/include/pthread.h line 773
extern signed int pthread_mutex_lock(union anonymous$0 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 784
extern signed int pthread_mutex_unlock(union anonymous$0 *);
// run_parallel
// file run_parallel.h line 55
void * run_parallel(signed int nthreads, void * (*f1)(void *), signed int (*t)(void), const char *name);
// run_parallel::f1$object
//
void * f1$object(void *);
// run_parallel::t$object
//
signed int t$object(void);
// select
// file /usr/include/x86_64-linux-gnu/sys/select.h line 106
extern signed int select(signed int, struct anonymous$5 *, struct anonymous$5 *, struct anonymous$5 *, struct timeval *);
// sigfillset
// file /usr/include/signal.h line 218
extern signed int sigfillset(struct anonymous$3 *);
// sigprocmask
// file /usr/include/signal.h line 248
extern signed int sigprocmask(signed int, const struct anonymous$3 *, struct anonymous$3 *);
// test_and_set_test
// file test_atomic.c line 173
signed int test_and_set_test(void);
// test_and_set_thr
// file test_atomic.c line 140
void * test_and_set_thr(void *id);
// test_atomic
// file test_atomic_include.h line 19
void test_atomic(void);
// test_atomic_acquire
// file test_atomic_include.h line 721
void test_atomic_acquire(void);
// test_atomic_acquire_read
// file test_atomic_include.h line 2476
void test_atomic_acquire_read(void);
// test_atomic_full
// file test_atomic_include.h line 1774
void test_atomic_full(void);
// test_atomic_read
// file test_atomic_include.h line 1072
void test_atomic_read(void);
// test_atomic_release
// file test_atomic_include.h line 370
void test_atomic_release(void);
// test_atomic_release_write
// file test_atomic_include.h line 2125
void test_atomic_release_write(void);
// test_atomic_write
// file test_atomic_include.h line 1423
void test_atomic_write(void);
// unlock
// file atomic_ops.c line 120
static inline void unlock(volatile unsigned char *l);

struct anonymous$5
{
  // __fds_bits
  signed long int __fds_bits[16l];
};

struct anonymous$3
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous$6
{
  // AO_v1
  unsigned long int AO_v1;
  // AO_v2
  unsigned long int AO_v2;
};

struct anonymous
{
  // AO_val1
  unsigned long int AO_val1;
  // AO_val2
  unsigned long int AO_val2;
};

union anonymous$4
{
  // AO_parts
  struct anonymous$6 AO_parts;
  // AO_whole
  __gcc_v4sf AO_whole;
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


// AO_locks
// file atomic_ops.c line 97
unsigned char AO_locks[16l] = { (unsigned char)(unsigned long int)AO_BYTE_TS_clear,
    (unsigned char)(unsigned long int)AO_BYTE_TS_clear,
    (unsigned char)(unsigned long int)AO_BYTE_TS_clear,
    (unsigned char)(unsigned long int)AO_BYTE_TS_clear,
    (unsigned char)(unsigned long int)AO_BYTE_TS_clear,
    (unsigned char)(unsigned long int)AO_BYTE_TS_clear,
    (unsigned char)(unsigned long int)AO_BYTE_TS_clear,
    (unsigned char)(unsigned long int)AO_BYTE_TS_clear,
    (unsigned char)(unsigned long int)AO_BYTE_TS_clear,
    (unsigned char)(unsigned long int)AO_BYTE_TS_clear,
    (unsigned char)(unsigned long int)AO_BYTE_TS_clear,
    (unsigned char)(unsigned long int)AO_BYTE_TS_clear,
    (unsigned char)(unsigned long int)AO_BYTE_TS_clear,
    (unsigned char)(unsigned long int)AO_BYTE_TS_clear,
    (unsigned char)(unsigned long int)AO_BYTE_TS_clear,
    (unsigned char)(unsigned long int)AO_BYTE_TS_clear };
// AO_pt_lock
// file atomic_ops.c line 78
union anonymous$0 AO_pt_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// all_sigs
// file atomic_ops.c line 126
static struct anonymous$3 all_sigs;
// counter
// file test_atomic.c line 48
unsigned long int counter = (unsigned long int)0;
// counter1
// file test_atomic.c line 75
unsigned long int counter1 = (unsigned long int)0;
// counter2
// file test_atomic.c line 76
unsigned long int counter2 = (unsigned long int)0;
// init_lock
// file atomic_ops.c line 128
static volatile unsigned char init_lock = (volatile unsigned char)(unsigned long int)AO_BYTE_TS_clear;
// initialized
// file atomic_ops.c line 127
static volatile unsigned long int initialized = (volatile unsigned long int)0;
// junk
// file test_atomic.c line 138
volatile unsigned long int junk = (volatile unsigned long int)13;
// lock
// file test_atomic.c line 135
unsigned long int lock = (unsigned long int)AO_TS_clear;
// locked_counter
// file test_atomic.c line 137
unsigned long int locked_counter;
// spin_dummy
// file atomic_ops.c line 218
static unsigned long int spin_dummy = (unsigned long int)1;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;

// AO_and_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 194
static inline void AO_and_full(volatile unsigned long int *p, unsigned long int value)
{
  pthread_mutex_lock(&AO_pt_lock);
  *p = *p & value;
  pthread_mutex_unlock(&AO_pt_lock);
}

// AO_char_compare_and_swap
// file ../src/atomic_ops/generalize-arithm.h line 87
static inline signed int AO_char_compare_and_swap(volatile unsigned char *addr, unsigned char old_val, unsigned char new_val)
{
  unsigned char return_value_AO_char_fetch_compare_and_swap_full$1;
  return_value_AO_char_fetch_compare_and_swap_full$1=AO_char_fetch_compare_and_swap_full(addr, old_val, new_val);
  return (signed int)(return_value_AO_char_fetch_compare_and_swap_full$1 == old_val);
}

// AO_char_compare_and_swap_acquire
// file ../src/atomic_ops/generalize-arithm.h line 39
static inline signed int AO_char_compare_and_swap_acquire(volatile unsigned char *addr, unsigned char old_val, unsigned char new_val)
{
  unsigned char return_value_AO_char_fetch_compare_and_swap_full$1;
  return_value_AO_char_fetch_compare_and_swap_full$1=AO_char_fetch_compare_and_swap_full(addr, old_val, new_val);
  return (signed int)(return_value_AO_char_fetch_compare_and_swap_full$1 == old_val);
}

// AO_char_compare_and_swap_release
// file ../src/atomic_ops/generalize-arithm.h line 51
static inline signed int AO_char_compare_and_swap_release(volatile unsigned char *addr, unsigned char old_val, unsigned char new_val)
{
  unsigned char return_value_AO_char_fetch_compare_and_swap_full$1;
  return_value_AO_char_fetch_compare_and_swap_full$1=AO_char_fetch_compare_and_swap_full(addr, old_val, new_val);
  return (signed int)(return_value_AO_char_fetch_compare_and_swap_full$1 == old_val);
}

// AO_char_fetch_and_add
// file ../src/atomic_ops/generalize-arithm.h line 191
static inline unsigned char AO_char_fetch_and_add(volatile unsigned char *addr, unsigned char incr)
{
  unsigned char old;
  signed int return_value_AO_char_compare_and_swap$1;
  do
  {
    old = *((unsigned char *)addr);
    return_value_AO_char_compare_and_swap$1=AO_char_compare_and_swap(addr, old, (unsigned char)((signed int)old + (signed int)incr));
  }
  while(return_value_AO_char_compare_and_swap$1 == 0);
  return old;
}

// AO_char_fetch_and_add_acquire
// file ../src/atomic_ops/generalize-arithm.h line 155
static inline unsigned char AO_char_fetch_and_add_acquire(volatile unsigned char *addr, unsigned char incr)
{
  unsigned char old;
  signed int return_value_AO_char_compare_and_swap_acquire$1;
  do
  {
    old = *((unsigned char *)addr);
    return_value_AO_char_compare_and_swap_acquire$1=AO_char_compare_and_swap_acquire(addr, old, (unsigned char)((signed int)old + (signed int)incr));
  }
  while(return_value_AO_char_compare_and_swap_acquire$1 == 0);
  return old;
}

// AO_char_fetch_and_add_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 155
static inline unsigned char AO_char_fetch_and_add_full(volatile unsigned char *p, unsigned char incr)
{
  unsigned char old_val;
  pthread_mutex_lock(&AO_pt_lock);
  old_val = *p;
  *p = (volatile unsigned char)((signed int)old_val + (signed int)incr);
  pthread_mutex_unlock(&AO_pt_lock);
  return old_val;
}

// AO_char_fetch_and_add_release
// file ../src/atomic_ops/generalize-arithm.h line 173
static inline unsigned char AO_char_fetch_and_add_release(volatile unsigned char *addr, unsigned char incr)
{
  unsigned char old;
  signed int return_value_AO_char_compare_and_swap_release$1;
  do
  {
    old = *((unsigned char *)addr);
    return_value_AO_char_compare_and_swap_release$1=AO_char_compare_and_swap_release(addr, old, (unsigned char)((signed int)old + (signed int)incr));
  }
  while(return_value_AO_char_compare_and_swap_release$1 == 0);
  return old;
}

// AO_char_fetch_compare_and_swap_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 317
static inline unsigned char AO_char_fetch_compare_and_swap_full(volatile unsigned char *addr, unsigned char old_val, unsigned char new_val)
{
  unsigned char fetched_val;
  pthread_mutex_lock(&AO_pt_lock);
  fetched_val = *addr;
  if(fetched_val == old_val)
    *addr = new_val;

  pthread_mutex_unlock(&AO_pt_lock);
  return fetched_val;
}

// AO_char_load_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 69
static inline unsigned char AO_char_load_full(const volatile unsigned char *addr)
{
  unsigned char result;
  pthread_mutex_lock(&AO_pt_lock);
  result = *addr;
  pthread_mutex_unlock(&AO_pt_lock);
  return result;
}

// AO_char_store
// file atomic_ops/sysdeps/gcc/../loadstore/char_atomic_store.h line 28
static inline void AO_char_store(volatile unsigned char *addr, unsigned char new_val)
{
  *((unsigned char *)addr) = new_val;
}

// AO_char_store_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 80
static inline void AO_char_store_full(volatile unsigned char *addr, unsigned char val)
{
  pthread_mutex_lock(&AO_pt_lock);
  *addr = val;
  pthread_mutex_unlock(&AO_pt_lock);
}

// AO_compare_and_swap
// file ../src/atomic_ops/generalize-arithm.h line 2622
static inline signed int AO_compare_and_swap(volatile unsigned long int *addr, unsigned long int old_val, unsigned long int new_val)
{
  unsigned long int return_value_AO_fetch_compare_and_swap_full$1;
  return_value_AO_fetch_compare_and_swap_full$1=AO_fetch_compare_and_swap_full(addr, old_val, new_val);
  return (signed int)(return_value_AO_fetch_compare_and_swap_full$1 == old_val);
}

// AO_compare_and_swap_acquire
// file ../src/atomic_ops/generalize-arithm.h line 2574
static inline signed int AO_compare_and_swap_acquire(volatile unsigned long int *addr, unsigned long int old_val, unsigned long int new_val)
{
  unsigned long int return_value_AO_fetch_compare_and_swap_full$1;
  return_value_AO_fetch_compare_and_swap_full$1=AO_fetch_compare_and_swap_full(addr, old_val, new_val);
  return (signed int)(return_value_AO_fetch_compare_and_swap_full$1 == old_val);
}

// AO_compare_and_swap_acquire_read
// file ../src/atomic_ops/generalize-arithm.h line 2645
static inline signed int AO_compare_and_swap_acquire_read(volatile unsigned long int *addr, unsigned long int old_val, unsigned long int new_val)
{
  unsigned long int return_value_AO_fetch_compare_and_swap_full$1;
  return_value_AO_fetch_compare_and_swap_full$1=AO_fetch_compare_and_swap_full(addr, old_val, new_val);
  return (signed int)(return_value_AO_fetch_compare_and_swap_full$1 == old_val);
}

// AO_compare_and_swap_double_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 416
static inline signed int AO_compare_and_swap_double_full(volatile struct anonymous *addr, unsigned long int old1, unsigned long int new1, unsigned long int new2)
{
  pthread_mutex_lock(&AO_pt_lock);
  if(addr->AO_val1 == old1)
  {
    addr->AO_val1 = new1;
    addr->AO_val2 = new2;
    pthread_mutex_unlock(&AO_pt_lock);
    return 1;
  }

  else
    pthread_mutex_unlock(&AO_pt_lock);
  return 0;
}

// AO_compare_and_swap_full
// file ../src/atomic_ops/generalize-arithm.h line 2562
static inline signed int AO_compare_and_swap_full(volatile unsigned long int *addr, unsigned long int old_val, unsigned long int new_val)
{
  unsigned long int return_value_AO_fetch_compare_and_swap_full$1;
  return_value_AO_fetch_compare_and_swap_full$1=AO_fetch_compare_and_swap_full(addr, old_val, new_val);
  return (signed int)(return_value_AO_fetch_compare_and_swap_full$1 == old_val);
}

// AO_compare_and_swap_read
// file ../src/atomic_ops/generalize-arithm.h line 2610
static inline signed int AO_compare_and_swap_read(volatile unsigned long int *addr, unsigned long int old_val, unsigned long int new_val)
{
  unsigned long int return_value_AO_fetch_compare_and_swap_full$1;
  return_value_AO_fetch_compare_and_swap_full$1=AO_fetch_compare_and_swap_full(addr, old_val, new_val);
  return (signed int)(return_value_AO_fetch_compare_and_swap_full$1 == old_val);
}

// AO_compare_and_swap_release
// file ../src/atomic_ops/generalize-arithm.h line 2586
static inline signed int AO_compare_and_swap_release(volatile unsigned long int *addr, unsigned long int old_val, unsigned long int new_val)
{
  unsigned long int return_value_AO_fetch_compare_and_swap_full$1;
  return_value_AO_fetch_compare_and_swap_full$1=AO_fetch_compare_and_swap_full(addr, old_val, new_val);
  return (signed int)(return_value_AO_fetch_compare_and_swap_full$1 == old_val);
}

// AO_compare_and_swap_release_write
// file ../src/atomic_ops/generalize-arithm.h line 2633
static inline signed int AO_compare_and_swap_release_write(volatile unsigned long int *addr, unsigned long int old_val, unsigned long int new_val)
{
  unsigned long int return_value_AO_fetch_compare_and_swap_full$1;
  return_value_AO_fetch_compare_and_swap_full$1=AO_fetch_compare_and_swap_full(addr, old_val, new_val);
  return (signed int)(return_value_AO_fetch_compare_and_swap_full$1 == old_val);
}

// AO_compare_and_swap_write
// file ../src/atomic_ops/generalize-arithm.h line 2598
static inline signed int AO_compare_and_swap_write(volatile unsigned long int *addr, unsigned long int old_val, unsigned long int new_val)
{
  unsigned long int return_value_AO_fetch_compare_and_swap_full$1;
  return_value_AO_fetch_compare_and_swap_full$1=AO_fetch_compare_and_swap_full(addr, old_val, new_val);
  return (signed int)(return_value_AO_fetch_compare_and_swap_full$1 == old_val);
}

// AO_compare_double_and_swap_double_emulation
// file atomic_ops.c line 172
signed int AO_compare_double_and_swap_double_emulation(volatile union anonymous$4 *addr, unsigned long int old_val1, unsigned long int old_val2, unsigned long int new_val1, unsigned long int new_val2)
{
  unsigned char *my_lock = AO_locks + (signed long int)((unsigned long int)addr >> 12 & (unsigned long int)(16 - 1));
  signed int result;
  struct anonymous$3 old_sigs;
  block_all_signals(&old_sigs);
  lock$link1(my_lock);
  _Bool tmp_if_expr$1;
  if(addr->AO_parts.AO_v1 == old_val1)
    tmp_if_expr$1 = addr->AO_parts.AO_v2 == old_val2 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  if(tmp_if_expr$1)
  {
    addr->AO_parts.AO_v1 = new_val1;
    addr->AO_parts.AO_v2 = new_val2;
    result = 1;
  }

  else
    result = 0;
  unlock(my_lock);
  sigprocmask(2, &old_sigs, (struct anonymous$3 *)(void *)0);
  return result;
}

// AO_compare_double_and_swap_double_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 397
static inline signed int AO_compare_double_and_swap_double_full(volatile struct anonymous *addr, unsigned long int old1, unsigned long int old2, unsigned long int new1, unsigned long int new2)
{
  pthread_mutex_lock(&AO_pt_lock);
  _Bool tmp_if_expr$1;
  if(addr->AO_val1 == old1)
    tmp_if_expr$1 = addr->AO_val2 == old2 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  if(tmp_if_expr$1)
  {
    addr->AO_val1 = new1;
    addr->AO_val2 = new2;
    pthread_mutex_unlock(&AO_pt_lock);
    return 1;
  }

  else
    pthread_mutex_unlock(&AO_pt_lock);
  return 0;
}

// AO_double_compare_and_swap
// file ../src/atomic_ops/generalize.h line 584
static inline signed int AO_double_compare_and_swap(volatile struct anonymous *addr, struct anonymous old_val, struct anonymous new_val)
{
  signed int return_value_AO_compare_double_and_swap_double_full$1;
  return_value_AO_compare_double_and_swap_double_full$1=AO_compare_double_and_swap_double_full(addr, old_val.AO_val1, old_val.AO_val2, new_val.AO_val1, new_val.AO_val2);
  return return_value_AO_compare_double_and_swap_double_full$1;
}

// AO_double_compare_and_swap_acquire
// file ../src/atomic_ops/generalize.h line 608
static inline signed int AO_double_compare_and_swap_acquire(volatile struct anonymous *addr, struct anonymous old_val, struct anonymous new_val)
{
  signed int return_value_AO_compare_double_and_swap_double_full$1;
  return_value_AO_compare_double_and_swap_double_full$1=AO_compare_double_and_swap_double_full(addr, old_val.AO_val1, old_val.AO_val2, new_val.AO_val1, new_val.AO_val2);
  return return_value_AO_compare_double_and_swap_double_full$1;
}

// AO_double_compare_and_swap_acquire_read
// file ../src/atomic_ops/generalize.h line 656
static inline signed int AO_double_compare_and_swap_acquire_read(volatile struct anonymous *addr, struct anonymous old_val, struct anonymous new_val)
{
  signed int return_value_AO_compare_double_and_swap_double_full$1;
  return_value_AO_compare_double_and_swap_double_full$1=AO_compare_double_and_swap_double_full(addr, old_val.AO_val1, old_val.AO_val2, new_val.AO_val1, new_val.AO_val2);
  return return_value_AO_compare_double_and_swap_double_full$1;
}

// AO_double_compare_and_swap_full
// file ../src/atomic_ops/generalize.h line 668
static inline signed int AO_double_compare_and_swap_full(volatile struct anonymous *addr, struct anonymous old_val, struct anonymous new_val)
{
  signed int return_value_AO_compare_double_and_swap_double_full$1;
  return_value_AO_compare_double_and_swap_double_full$1=AO_compare_double_and_swap_double_full(addr, old_val.AO_val1, old_val.AO_val2, new_val.AO_val1, new_val.AO_val2);
  return return_value_AO_compare_double_and_swap_double_full$1;
}

// AO_double_compare_and_swap_read
// file ../src/atomic_ops/generalize.h line 620
static inline signed int AO_double_compare_and_swap_read(volatile struct anonymous *addr, struct anonymous old_val, struct anonymous new_val)
{
  signed int return_value_AO_compare_double_and_swap_double_full$1;
  return_value_AO_compare_double_and_swap_double_full$1=AO_compare_double_and_swap_double_full(addr, old_val.AO_val1, old_val.AO_val2, new_val.AO_val1, new_val.AO_val2);
  return return_value_AO_compare_double_and_swap_double_full$1;
}

// AO_double_compare_and_swap_release
// file ../src/atomic_ops/generalize.h line 596
static inline signed int AO_double_compare_and_swap_release(volatile struct anonymous *addr, struct anonymous old_val, struct anonymous new_val)
{
  signed int return_value_AO_compare_double_and_swap_double_full$1;
  return_value_AO_compare_double_and_swap_double_full$1=AO_compare_double_and_swap_double_full(addr, old_val.AO_val1, old_val.AO_val2, new_val.AO_val1, new_val.AO_val2);
  return return_value_AO_compare_double_and_swap_double_full$1;
}

// AO_double_compare_and_swap_release_write
// file ../src/atomic_ops/generalize.h line 644
static inline signed int AO_double_compare_and_swap_release_write(volatile struct anonymous *addr, struct anonymous old_val, struct anonymous new_val)
{
  signed int return_value_AO_compare_double_and_swap_double_full$1;
  return_value_AO_compare_double_and_swap_double_full$1=AO_compare_double_and_swap_double_full(addr, old_val.AO_val1, old_val.AO_val2, new_val.AO_val1, new_val.AO_val2);
  return return_value_AO_compare_double_and_swap_double_full$1;
}

// AO_double_compare_and_swap_write
// file ../src/atomic_ops/generalize.h line 632
static inline signed int AO_double_compare_and_swap_write(volatile struct anonymous *addr, struct anonymous old_val, struct anonymous new_val)
{
  signed int return_value_AO_compare_double_and_swap_double_full$1;
  return_value_AO_compare_double_and_swap_double_full$1=AO_compare_double_and_swap_double_full(addr, old_val.AO_val1, old_val.AO_val2, new_val.AO_val1, new_val.AO_val2);
  return return_value_AO_compare_double_and_swap_double_full$1;
}

// AO_double_load_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 374
static inline struct anonymous AO_double_load_full(const volatile struct anonymous *addr)
{
  struct anonymous result;
  pthread_mutex_lock(&AO_pt_lock);
  result.AO_val1 = addr->AO_val1;
  result.AO_val2 = addr->AO_val2;
  pthread_mutex_unlock(&AO_pt_lock);
  return result;
}

// AO_double_store_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 387
static inline void AO_double_store_full(volatile struct anonymous *addr, struct anonymous value)
{
  pthread_mutex_lock(&AO_pt_lock);
  addr->AO_val1 = value.AO_val1;
  addr->AO_val2 = value.AO_val2;
  pthread_mutex_unlock(&AO_pt_lock);
}

// AO_fetch_and_add
// file ../src/atomic_ops/generalize-arithm.h line 2726
static inline unsigned long int AO_fetch_and_add(volatile unsigned long int *addr, unsigned long int incr)
{
  unsigned long int old;
  signed int return_value_AO_compare_and_swap$1;
  do
  {
    old = *((unsigned long int *)addr);
    return_value_AO_compare_and_swap$1=AO_compare_and_swap(addr, old, old + incr);
  }
  while(return_value_AO_compare_and_swap$1 == 0);
  return old;
}

// AO_fetch_and_add_acquire
// file ../src/atomic_ops/generalize-arithm.h line 2690
static inline unsigned long int AO_fetch_and_add_acquire(volatile unsigned long int *addr, unsigned long int incr)
{
  unsigned long int old;
  signed int return_value_AO_compare_and_swap_acquire$1;
  do
  {
    old = *((unsigned long int *)addr);
    return_value_AO_compare_and_swap_acquire$1=AO_compare_and_swap_acquire(addr, old, old + incr);
  }
  while(return_value_AO_compare_and_swap_acquire$1 == 0);
  return old;
}

// AO_fetch_and_add_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 142
static inline unsigned long int AO_fetch_and_add_full(volatile unsigned long int *p, unsigned long int incr)
{
  unsigned long int old_val;
  pthread_mutex_lock(&AO_pt_lock);
  old_val = *p;
  *p = old_val + incr;
  pthread_mutex_unlock(&AO_pt_lock);
  return old_val;
}

// AO_fetch_and_add_release
// file ../src/atomic_ops/generalize-arithm.h line 2708
static inline unsigned long int AO_fetch_and_add_release(volatile unsigned long int *addr, unsigned long int incr)
{
  unsigned long int old;
  signed int return_value_AO_compare_and_swap_release$1;
  do
  {
    old = *((unsigned long int *)addr);
    return_value_AO_compare_and_swap_release$1=AO_compare_and_swap_release(addr, old, old + incr);
  }
  while(return_value_AO_compare_and_swap_release$1 == 0);
  return old;
}

// AO_fetch_compare_and_swap_emulation
// file atomic_ops.c line 151
unsigned long int AO_fetch_compare_and_swap_emulation(volatile unsigned long int *addr, unsigned long int old_val, unsigned long int new_val)
{
  unsigned char *my_lock = AO_locks + (signed long int)((unsigned long int)addr >> 12 & (unsigned long int)(16 - 1));
  unsigned long int fetched_val;
  struct anonymous$3 old_sigs;
  block_all_signals(&old_sigs);
  lock$link1(my_lock);
  fetched_val = *addr;
  if(fetched_val == old_val)
    *addr = new_val;

  unlock(my_lock);
  sigprocmask(2, &old_sigs, (struct anonymous$3 *)(void *)0);
  return fetched_val;
}

// AO_fetch_compare_and_swap_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 302
static inline unsigned long int AO_fetch_compare_and_swap_full(volatile unsigned long int *addr, unsigned long int old_val, unsigned long int new_val)
{
  unsigned long int fetched_val;
  pthread_mutex_lock(&AO_pt_lock);
  fetched_val = *addr;
  if(fetched_val == old_val)
    *addr = new_val;

  pthread_mutex_unlock(&AO_pt_lock);
  return fetched_val;
}

// AO_int_compare_and_swap
// file ../src/atomic_ops/generalize-arithm.h line 1777
static inline signed int AO_int_compare_and_swap(volatile unsigned int *addr, unsigned int old_val, unsigned int new_val)
{
  unsigned int return_value_AO_int_fetch_compare_and_swap_full$1;
  return_value_AO_int_fetch_compare_and_swap_full$1=AO_int_fetch_compare_and_swap_full(addr, old_val, new_val);
  return (signed int)(return_value_AO_int_fetch_compare_and_swap_full$1 == old_val);
}

// AO_int_compare_and_swap_acquire
// file ../src/atomic_ops/generalize-arithm.h line 1729
static inline signed int AO_int_compare_and_swap_acquire(volatile unsigned int *addr, unsigned int old_val, unsigned int new_val)
{
  unsigned int return_value_AO_int_fetch_compare_and_swap_full$1;
  return_value_AO_int_fetch_compare_and_swap_full$1=AO_int_fetch_compare_and_swap_full(addr, old_val, new_val);
  return (signed int)(return_value_AO_int_fetch_compare_and_swap_full$1 == old_val);
}

// AO_int_compare_and_swap_release
// file ../src/atomic_ops/generalize-arithm.h line 1741
static inline signed int AO_int_compare_and_swap_release(volatile unsigned int *addr, unsigned int old_val, unsigned int new_val)
{
  unsigned int return_value_AO_int_fetch_compare_and_swap_full$1;
  return_value_AO_int_fetch_compare_and_swap_full$1=AO_int_fetch_compare_and_swap_full(addr, old_val, new_val);
  return (signed int)(return_value_AO_int_fetch_compare_and_swap_full$1 == old_val);
}

// AO_int_fetch_and_add
// file ../src/atomic_ops/generalize-arithm.h line 1881
static inline unsigned int AO_int_fetch_and_add(volatile unsigned int *addr, unsigned int incr)
{
  unsigned int old;
  signed int return_value_AO_int_compare_and_swap$1;
  do
  {
    old = *((unsigned int *)addr);
    return_value_AO_int_compare_and_swap$1=AO_int_compare_and_swap(addr, old, old + incr);
  }
  while(return_value_AO_int_compare_and_swap$1 == 0);
  return old;
}

// AO_int_fetch_and_add_acquire
// file ../src/atomic_ops/generalize-arithm.h line 1845
static inline unsigned int AO_int_fetch_and_add_acquire(volatile unsigned int *addr, unsigned int incr)
{
  unsigned int old;
  signed int return_value_AO_int_compare_and_swap_acquire$1;
  do
  {
    old = *((unsigned int *)addr);
    return_value_AO_int_compare_and_swap_acquire$1=AO_int_compare_and_swap_acquire(addr, old, old + incr);
  }
  while(return_value_AO_int_compare_and_swap_acquire$1 == 0);
  return old;
}

// AO_int_fetch_and_add_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 181
static inline unsigned int AO_int_fetch_and_add_full(volatile unsigned int *p, unsigned int incr)
{
  unsigned int old_val;
  pthread_mutex_lock(&AO_pt_lock);
  old_val = *p;
  *p = old_val + incr;
  pthread_mutex_unlock(&AO_pt_lock);
  return old_val;
}

// AO_int_fetch_and_add_release
// file ../src/atomic_ops/generalize-arithm.h line 1863
static inline unsigned int AO_int_fetch_and_add_release(volatile unsigned int *addr, unsigned int incr)
{
  unsigned int old;
  signed int return_value_AO_int_compare_and_swap_release$1;
  do
  {
    old = *((unsigned int *)addr);
    return_value_AO_int_compare_and_swap_release$1=AO_int_compare_and_swap_release(addr, old, old + incr);
  }
  while(return_value_AO_int_compare_and_swap_release$1 == 0);
  return old;
}

// AO_int_fetch_compare_and_swap_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 349
static inline unsigned int AO_int_fetch_compare_and_swap_full(volatile unsigned int *addr, unsigned int old_val, unsigned int new_val)
{
  unsigned int fetched_val;
  pthread_mutex_lock(&AO_pt_lock);
  fetched_val = *addr;
  if(fetched_val == old_val)
    *addr = new_val;

  pthread_mutex_unlock(&AO_pt_lock);
  return fetched_val;
}

// AO_int_load_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 109
static inline unsigned int AO_int_load_full(const volatile unsigned int *addr)
{
  unsigned int result;
  pthread_mutex_lock(&AO_pt_lock);
  result = *addr;
  pthread_mutex_unlock(&AO_pt_lock);
  return result;
}

// AO_int_store_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 120
static inline void AO_int_store_full(volatile unsigned int *addr, unsigned int val)
{
  pthread_mutex_lock(&AO_pt_lock);
  *addr = val;
  pthread_mutex_unlock(&AO_pt_lock);
}

// AO_load
// file atomic_ops/sysdeps/gcc/../loadstore/atomic_load.h line 28
static inline unsigned long int AO_load(const volatile unsigned long int *addr)
{
  return *((const unsigned long int *)addr);
}

// AO_load_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 49
static inline unsigned long int AO_load_full(const volatile unsigned long int *addr)
{
  unsigned long int result;
  pthread_mutex_lock(&AO_pt_lock);
  result = *addr;
  pthread_mutex_unlock(&AO_pt_lock);
  return result;
}

// AO_load_read
// file atomic_ops/generalize-small.h line 1856
static inline unsigned long int AO_load_read(const volatile unsigned long int *addr)
{
  unsigned long int result;
  result=AO_load(addr);
  AO_nop_read();
  return result;
}

// AO_nop
// file ../src/atomic_ops/generalize.h line 176
static inline void AO_nop(void)
{
  ;
}

// AO_nop_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 41
static inline void AO_nop_full(void)
{
  pthread_mutex_lock(&AO_pt_lock);
  pthread_mutex_unlock(&AO_pt_lock);
}

// AO_nop_read
// file atomic_ops/sysdeps/gcc/../read_ordered.h line 31
static inline void AO_nop_read(void)
{
  asm("" :  :  : "memory");
}

// AO_nop_write
// file atomic_ops/sysdeps/gcc/../ordered_except_wr.h line 33
static inline void AO_nop_write(void)
{
  asm("" :  :  : "memory");
}

// AO_or_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 203
static inline void AO_or_full(volatile unsigned long int *p, unsigned long int value)
{
  pthread_mutex_lock(&AO_pt_lock);
  *p = *p | value;
  pthread_mutex_unlock(&AO_pt_lock);
}

// AO_pause
// file atomic_ops.c line 232
void AO_pause(signed int n)
{
  if(!(n >= 12))
    AO_spin(n);

  else
  {
    struct timeval tv;
    tv.tv_sec = (signed long int)0;
    tv.tv_usec = (signed long int)(n > 28 ? 100000 : 1 << n - 12);
    select(0, ((struct anonymous$5 *)NULL), ((struct anonymous$5 *)NULL), ((struct anonymous$5 *)NULL), &tv);
  }
}

// AO_short_compare_and_swap
// file ../src/atomic_ops/generalize-arithm.h line 932
static inline signed int AO_short_compare_and_swap(volatile unsigned short int *addr, unsigned short int old_val, unsigned short int new_val)
{
  unsigned short int return_value_AO_short_fetch_compare_and_swap_full$1;
  return_value_AO_short_fetch_compare_and_swap_full$1=AO_short_fetch_compare_and_swap_full(addr, old_val, new_val);
  return (signed int)(return_value_AO_short_fetch_compare_and_swap_full$1 == old_val);
}

// AO_short_compare_and_swap_acquire
// file ../src/atomic_ops/generalize-arithm.h line 884
static inline signed int AO_short_compare_and_swap_acquire(volatile unsigned short int *addr, unsigned short int old_val, unsigned short int new_val)
{
  unsigned short int return_value_AO_short_fetch_compare_and_swap_full$1;
  return_value_AO_short_fetch_compare_and_swap_full$1=AO_short_fetch_compare_and_swap_full(addr, old_val, new_val);
  return (signed int)(return_value_AO_short_fetch_compare_and_swap_full$1 == old_val);
}

// AO_short_compare_and_swap_release
// file ../src/atomic_ops/generalize-arithm.h line 896
static inline signed int AO_short_compare_and_swap_release(volatile unsigned short int *addr, unsigned short int old_val, unsigned short int new_val)
{
  unsigned short int return_value_AO_short_fetch_compare_and_swap_full$1;
  return_value_AO_short_fetch_compare_and_swap_full$1=AO_short_fetch_compare_and_swap_full(addr, old_val, new_val);
  return (signed int)(return_value_AO_short_fetch_compare_and_swap_full$1 == old_val);
}

// AO_short_fetch_and_add
// file ../src/atomic_ops/generalize-arithm.h line 1036
static inline unsigned short int AO_short_fetch_and_add(volatile unsigned short int *addr, unsigned short int incr)
{
  unsigned short int old;
  signed int return_value_AO_short_compare_and_swap$1;
  do
  {
    old = *((unsigned short int *)addr);
    return_value_AO_short_compare_and_swap$1=AO_short_compare_and_swap(addr, old, (unsigned short int)((signed int)old + (signed int)incr));
  }
  while(return_value_AO_short_compare_and_swap$1 == 0);
  return old;
}

// AO_short_fetch_and_add_acquire
// file ../src/atomic_ops/generalize-arithm.h line 1000
static inline unsigned short int AO_short_fetch_and_add_acquire(volatile unsigned short int *addr, unsigned short int incr)
{
  unsigned short int old;
  signed int return_value_AO_short_compare_and_swap_acquire$1;
  do
  {
    old = *((unsigned short int *)addr);
    return_value_AO_short_compare_and_swap_acquire$1=AO_short_compare_and_swap_acquire(addr, old, (unsigned short int)((signed int)old + (signed int)incr));
  }
  while(return_value_AO_short_compare_and_swap_acquire$1 == 0);
  return old;
}

// AO_short_fetch_and_add_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 168
static inline unsigned short int AO_short_fetch_and_add_full(volatile unsigned short int *p, unsigned short int incr)
{
  unsigned short int old_val;
  pthread_mutex_lock(&AO_pt_lock);
  old_val = *p;
  *p = (volatile unsigned short int)((signed int)old_val + (signed int)incr);
  pthread_mutex_unlock(&AO_pt_lock);
  return old_val;
}

// AO_short_fetch_and_add_release
// file ../src/atomic_ops/generalize-arithm.h line 1018
static inline unsigned short int AO_short_fetch_and_add_release(volatile unsigned short int *addr, unsigned short int incr)
{
  unsigned short int old;
  signed int return_value_AO_short_compare_and_swap_release$1;
  do
  {
    old = *((unsigned short int *)addr);
    return_value_AO_short_compare_and_swap_release$1=AO_short_compare_and_swap_release(addr, old, (unsigned short int)((signed int)old + (signed int)incr));
  }
  while(return_value_AO_short_compare_and_swap_release$1 == 0);
  return old;
}

// AO_short_fetch_compare_and_swap_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 333
static inline unsigned short int AO_short_fetch_compare_and_swap_full(volatile unsigned short int *addr, unsigned short int old_val, unsigned short int new_val)
{
  unsigned short int fetched_val;
  pthread_mutex_lock(&AO_pt_lock);
  fetched_val = *addr;
  if(fetched_val == old_val)
    *addr = new_val;

  pthread_mutex_unlock(&AO_pt_lock);
  return fetched_val;
}

// AO_short_load_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 89
static inline unsigned short int AO_short_load_full(const volatile unsigned short int *addr)
{
  unsigned short int result;
  pthread_mutex_lock(&AO_pt_lock);
  result = *addr;
  pthread_mutex_unlock(&AO_pt_lock);
  return result;
}

// AO_short_store_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 100
static inline void AO_short_store_full(volatile unsigned short int *addr, unsigned short int val)
{
  pthread_mutex_lock(&AO_pt_lock);
  *addr = val;
  pthread_mutex_unlock(&AO_pt_lock);
}

// AO_spin
// file atomic_ops.c line 221
static void AO_spin(signed int n)
{
  unsigned long int j;
  j=AO_load(&spin_dummy);
  signed int i = 2 << n;
  signed int tmp_post$1;
  do
  {
    tmp_post$1 = i;
    i = i - 1;
    if(!(tmp_post$1 >= 1))
      break;

    j = j + (j - (unsigned long int)1 << 2);
  }
  while((_Bool)1);
  AO_store(&spin_dummy, j);
}

// AO_store
// file atomic_ops/sysdeps/gcc/../loadstore/atomic_store.h line 28
static inline void AO_store(volatile unsigned long int *addr, unsigned long int new_val)
{
  *((unsigned long int *)addr) = new_val;
}

// AO_store_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 60
static inline void AO_store_full(volatile unsigned long int *addr, unsigned long int val)
{
  pthread_mutex_lock(&AO_pt_lock);
  *addr = val;
  pthread_mutex_unlock(&AO_pt_lock);
}

// AO_store_full_emulation
// file atomic_ops.c line 199
void AO_store_full_emulation(volatile unsigned long int *addr, unsigned long int val)
{
  unsigned char *my_lock = AO_locks + (signed long int)((unsigned long int)addr >> 12 & (unsigned long int)(16 - 1));
  lock$link1(my_lock);
  *addr = val;
  unlock(my_lock);
}

// AO_test_and_set_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 129
static inline enum anonymous$1 AO_test_and_set_full(volatile unsigned long int *addr)
{
  enum anonymous$1 result;
  pthread_mutex_lock(&AO_pt_lock);
  result = (enum anonymous$1)*addr;
  *addr = (volatile unsigned long int)AO_TS_set;
  pthread_mutex_unlock(&AO_pt_lock);
  return result;
}

// AO_test_and_set_full$link1
// file atomic_ops/sysdeps/gcc/x86.h line 124
static inline enum anonymous$2 AO_test_and_set_full$link1(volatile unsigned char *addr$link1)
{
  unsigned char oldval;
  asm("xchgb %0, %1" : "=q"(oldval), "=m"(*addr$link1) : "0"((unsigned char)0xff), "m"(*addr$link1) : "memory");
  return (enum anonymous$2)oldval;
}

// AO_xor_full
// file ../src/atomic_ops/sysdeps/generic_pthread.h line 212
static inline void AO_xor_full(volatile unsigned long int *p, unsigned long int value)
{
  pthread_mutex_lock(&AO_pt_lock);
  *p = *p ^ value;
  pthread_mutex_unlock(&AO_pt_lock);
}

// acqrel_test
// file test_atomic.c line 126
signed int acqrel_test(void)
{
  return (signed int)(counter1 == (unsigned long int)100000 && counter2 == (unsigned long int)100000);
}

// acqrel_thr
// file test_atomic.c line 78
void * acqrel_thr(void *id)
{
  signed int me = (signed int)(signed long int)id;
  signed int i = 0;
  for( ; !(i >= 100000); i = i + 1)
    if(!((1 & me) == 0))
    {
      unsigned long int my_counter1;
      if(!(me == 1))
      {
        fprintf(stderr, "acqrel test: too many threads\n");
        abort();
      }

      my_counter1=AO_load_full(&counter1);
      AO_store_full(&counter1, my_counter1 + (unsigned long int)1);
      AO_store_full(&counter2, my_counter1 + (unsigned long int)1);
    }

    else
    {
      unsigned long int my_counter1a;
      unsigned long int my_counter2a;
      unsigned long int my_counter1b;
      unsigned long int my_counter2b;
      my_counter2a=AO_load_full(&counter2);
      my_counter1a=AO_load_full(&counter1);
      my_counter2b=AO_load_full(&counter2);
      my_counter1b=AO_load_full(&counter1);
      if(!(my_counter1a >= my_counter2a))
      {
        fprintf(stderr, "Saw release store out of order: %lu < %lu\n", (unsigned long int)my_counter1a, (unsigned long int)my_counter2a);
        abort();
      }

      if(!(my_counter1b >= my_counter2b))
      {
        fprintf(stderr, "Saw release store out of order (bad CSE?): %lu < %lu\n", (unsigned long int)my_counter1b, (unsigned long int)my_counter2b);
        abort();
      }

    }
  return NULL;
}

// add1sub1_test
// file test_atomic.c line 65
signed int add1sub1_test(void)
{
  return (signed int)(counter == (unsigned long int)0);
}

// add1sub1_thr
// file test_atomic.c line 50
void * add1sub1_thr(void *id)
{
  signed int me = (signed int)(signed long int)id;
  signed int i = 0;
  for( ; !(i >= 100000); i = i + 1)
    if(!((1 & me) == 0))
      AO_fetch_and_add(&counter, (unsigned long int)-1);

    else
      AO_fetch_and_add(&counter, (unsigned long int)1);
  return NULL;
}

// block_all_signals
// file atomic_ops.c line 130
static inline void block_all_signals(struct anonymous$3 *old_sigs_ptr)
{
  unsigned long int return_value_AO_load_read$1;
  return_value_AO_load_read$1=AO_load_read(&initialized);
  if(return_value_AO_load_read$1 == 0ul)
  {
    lock$link1(&init_lock);
    if(initialized == 0ul)
      sigfillset(&all_sigs);

    unlock(&init_lock);
    AO_nop_write();
    AO_store(&initialized, (unsigned long int)1);
  }

  sigprocmask(0, &all_sigs, old_sigs_ptr);
}

// lock$link1
// file atomic_ops.c line 114
static inline void lock$link1(volatile unsigned char *l)
{
  enum anonymous$2 return_value_AO_test_and_set_full$1;
  return_value_AO_test_and_set_full$1=AO_test_and_set_full$link1(l);
  if((signed int)return_value_AO_test_and_set_full$1 == AO_BYTE_TS_set)
    lock_ool(l);

}

// lock_ool
// file atomic_ops.c line 106
static void lock_ool(volatile unsigned char *l)
{
  signed int i = 0;
  enum anonymous$2 return_value_AO_test_and_set_full$1;
  do
  {
    return_value_AO_test_and_set_full$1=AO_test_and_set_full$link1(l);
    if(!((signed int)return_value_AO_test_and_set_full$1 == AO_BYTE_TS_set))
      break;

    i = i + 1;
    AO_pause(i);
  }
  while((_Bool)1);
}

// main
// file test_atomic.c line 180
signed int main(void)
{
  test_atomic();
  test_atomic_acquire();
  test_atomic_release();
  test_atomic_read();
  test_atomic_write();
  test_atomic_full();
  test_atomic_release_write();
  test_atomic_acquire_read();
  run_parallel(4, add1sub1_thr, add1sub1_test, "add1/sub1");
  run_parallel(3, acqrel_thr, acqrel_test, "store_release_write/load_acquire_read");
  run_parallel(5, test_and_set_thr, test_and_set_test, "test_and_set");
  return 0;
}

// run_parallel
// file run_parallel.h line 55
void * run_parallel(signed int nthreads, void * (*f1)(void *), signed int (*t)(void), const char *name)
{
  union pthread_attr_t attr;
  unsigned long int thr[100l];
  signed int i;
  signed int code;
  printf("Testing %s\n", name);
  if(nthreads >= 101)
  {
    fprintf(stderr, "run_parallel: requested too many threads\n");
    abort();
  }

  pthread_attr_init(&attr);
  i = 0;
  for( ; !(i >= nthreads); i = i + 1)
  {
    code=pthread_create(thr + (signed long int)i, &attr, f1, (void *)(signed long int)i);
    if(!(code == 0))
    {
      fprintf(stderr, "pthread_create returned %d, thread %d\n", code, i);
      abort();
    }

  }
  i = 0;
  for( ; !(i >= nthreads); i = i + 1)
  {
    code=pthread_join(thr[(signed long int)i], (void **)(void *)0);
    if(!(code == 0))
    {
      fprintf(stderr, "pthread_join returned %d, thread %d\n", code, i);
      abort();
    }

  }
  signed int return_value;
  return_value=t();
  if(!(return_value == 0))
    printf("Succeeded\n");

  else
  {
    fprintf(stderr, "Failed\n");
    abort();
  }
  return NULL;
}

// test_and_set_test
// file test_atomic.c line 173
signed int test_and_set_test(void)
{
  return (signed int)(locked_counter == (unsigned long int)0);
}

// test_and_set_thr
// file test_atomic.c line 140
void * test_and_set_thr(void *id)
{
  unsigned long int i = (unsigned long int)0;
  enum anonymous$1 return_value_AO_test_and_set_full$1;
  for( ; !(i >= 10000ul); i = i + 1ul)
  {
    do
    {
      return_value_AO_test_and_set_full$1=AO_test_and_set_full(&lock);
      if((signed int)return_value_AO_test_and_set_full$1 == AO_TS_clear)
        break;

    }
    while((_Bool)1);
    locked_counter = locked_counter + 1ul;
    if(!(locked_counter == 1ul))
    {
      fprintf(stderr, "Test and set failure 1, counter = %ld, id = %d\n", locked_counter, (signed int)(signed long int)id);
      abort();
    }

    locked_counter = locked_counter * (unsigned long int)2;
    locked_counter = locked_counter - (unsigned long int)1;
    locked_counter = locked_counter * (unsigned long int)5;
    locked_counter = locked_counter - (unsigned long int)4;
    if(!(locked_counter == 1ul))
    {
      fprintf(stderr, "Test and set failure 2, counter = %ld, id = %d\n", locked_counter, (signed int)(signed long int)id);
      abort();
    }

    locked_counter = locked_counter - 1ul;
    AO_store_full((unsigned long int *)&lock, (unsigned long int)AO_TS_clear);
    junk = junk * (volatile unsigned long int)17;
    junk = junk * (volatile unsigned long int)17;
  }
  return NULL;
}

// test_atomic
// file test_atomic_include.h line 19
void test_atomic(void)
{
  unsigned long int x;
  unsigned char b;
  unsigned short int s;
  unsigned int zz;
  unsigned long int z = (unsigned long int)AO_TS_clear;
  struct anonymous old_w;
  struct anonymous new_w;
  struct anonymous w;
  w.AO_val1 = (unsigned long int)0;
  w.AO_val2 = (unsigned long int)0;
  AO_nop();
  AO_store_full(&x, (unsigned long int)13);
  if(!(x == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 50);
    exit(1);
  }

  unsigned long int return_value_AO_load_full$1;
  return_value_AO_load_full$1=AO_load_full(&x);
  if(!(return_value_AO_load_full$1 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 61);
    exit(1);
  }

  AO_store_full((unsigned long int *)&z, (unsigned long int)AO_TS_clear);
  unsigned long int return_value_AO_fetch_and_add$2;
  return_value_AO_fetch_and_add$2=AO_fetch_and_add(&x, (unsigned long int)42);
  if(!(return_value_AO_fetch_and_add$2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 77);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add$3;
  return_value_AO_fetch_and_add$3=AO_fetch_and_add(&x, (unsigned long int)-42);
  if(!(return_value_AO_fetch_and_add$3 == 55ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 78);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add$4;
  return_value_AO_fetch_and_add$4=AO_fetch_and_add(&x, (unsigned long int)1);
  if(!(return_value_AO_fetch_and_add$4 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 83);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add$5;
  return_value_AO_fetch_and_add$5=AO_fetch_and_add(&x, (unsigned long int)-1);
  if(!(return_value_AO_fetch_and_add$5 == 14ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 89);
    exit(1);
  }

  AO_short_store_full(&s, (unsigned short int)13);
  unsigned short int return_value_AO_short_load_full$6;
  return_value_AO_short_load_full$6=AO_short_load_full(&s);
  if(!((signed int)return_value_AO_short_load_full$6 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 106);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add$7;
  return_value_AO_short_fetch_and_add$7=AO_short_fetch_and_add(&s, (unsigned short int)42);
  if(!((signed int)return_value_AO_short_fetch_and_add$7 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 115);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add$8;
  return_value_AO_short_fetch_and_add$8=AO_short_fetch_and_add(&s, (unsigned short int)-42);
  if(!((signed int)return_value_AO_short_fetch_and_add$8 == 55))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 116);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add$9;
  return_value_AO_short_fetch_and_add$9=AO_short_fetch_and_add(&s, (unsigned short int)1);
  if(!((signed int)return_value_AO_short_fetch_and_add$9 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 121);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add$10;
  return_value_AO_short_fetch_and_add$10=AO_short_fetch_and_add(&s, (unsigned short int)-1);
  if(!((signed int)return_value_AO_short_fetch_and_add$10 == 14))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 127);
    exit(1);
  }

  AO_char_store_full(&b, (unsigned char)13);
  unsigned char return_value_AO_char_load_full$11;
  return_value_AO_char_load_full$11=AO_char_load_full(&b);
  if(!((signed int)return_value_AO_char_load_full$11 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 144);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add$12;
  return_value_AO_char_fetch_and_add$12=AO_char_fetch_and_add(&b, (unsigned char)42);
  if(!((signed int)return_value_AO_char_fetch_and_add$12 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 152);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add$13;
  return_value_AO_char_fetch_and_add$13=AO_char_fetch_and_add(&b, (unsigned char)-42);
  if(!((signed int)return_value_AO_char_fetch_and_add$13 == 55))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 153);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add$14;
  return_value_AO_char_fetch_and_add$14=AO_char_fetch_and_add(&b, (unsigned char)1);
  if(!((signed int)return_value_AO_char_fetch_and_add$14 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 158);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add$15;
  return_value_AO_char_fetch_and_add$15=AO_char_fetch_and_add(&b, (unsigned char)-1);
  if(!((signed int)return_value_AO_char_fetch_and_add$15 == 14))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 164);
    exit(1);
  }

  AO_int_store_full(&zz, (unsigned int)13);
  unsigned int return_value_AO_int_load_full$16;
  return_value_AO_int_load_full$16=AO_int_load_full(&zz);
  if(!(return_value_AO_int_load_full$16 == 13u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 181);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add$17;
  return_value_AO_int_fetch_and_add$17=AO_int_fetch_and_add(&zz, (unsigned int)42);
  if(!(return_value_AO_int_fetch_and_add$17 == 13u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 189);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add$18;
  return_value_AO_int_fetch_and_add$18=AO_int_fetch_and_add(&zz, (unsigned int)-42);
  if(!(return_value_AO_int_fetch_and_add$18 == 55u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 190);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add$19;
  return_value_AO_int_fetch_and_add$19=AO_int_fetch_and_add(&zz, (unsigned int)1);
  if(!(return_value_AO_int_fetch_and_add$19 == 13u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 195);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add$20;
  return_value_AO_int_fetch_and_add$20=AO_int_fetch_and_add(&zz, (unsigned int)-1);
  if(!(return_value_AO_int_fetch_and_add$20 == 14u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 201);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap$21;
  return_value_AO_compare_and_swap$21=AO_compare_and_swap(&x, (unsigned long int)14, (unsigned long int)42);
  if(!(return_value_AO_compare_and_swap$21 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 207);
    exit(1);
  }

  if(!(x == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 208);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap$22;
  return_value_AO_compare_and_swap$22=AO_compare_and_swap(&x, (unsigned long int)13, (unsigned long int)42);
  if(return_value_AO_compare_and_swap$22 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 209);
    exit(1);
  }

  if(!(x == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 210);
    exit(1);
  }

  AO_or_full(&x, (unsigned long int)66);
  if(!(x == 106ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 217);
    exit(1);
  }

  AO_xor_full(&x, (unsigned long int)181);
  if(!(x == 223ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 224);
    exit(1);
  }

  AO_and_full(&x, (unsigned long int)57);
  if(!(x == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 231);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_compare_and_swap_full$23;
  return_value_AO_fetch_compare_and_swap_full$23=AO_fetch_compare_and_swap_full(&x, (unsigned long int)14, (unsigned long int)117);
  if(!(return_value_AO_fetch_compare_and_swap_full$23 == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 237);
    exit(1);
  }

  if(!(x == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 238);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_compare_and_swap_full$24;
  return_value_AO_fetch_compare_and_swap_full$24=AO_fetch_compare_and_swap_full(&x, (unsigned long int)25, (unsigned long int)117);
  if(!(return_value_AO_fetch_compare_and_swap_full$24 == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 239);
    exit(1);
  }

  if(!(x == 117ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 240);
    exit(1);
  }

  old_w.AO_val1 = (unsigned long int)3316;
  old_w.AO_val2 = (unsigned long int)2921;
  new_w=AO_double_load_full(&old_w);
  if(!(new_w.AO_val1 == 3316ul) || !(new_w.AO_val2 == 2921ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 249);
    exit(1);
  }

  new_w.AO_val1 = (unsigned long int)1375;
  new_w.AO_val2 = (unsigned long int)8243;
  AO_double_store_full(&old_w, new_w);
  if(!(old_w.AO_val1 == 1375ul) || !(old_w.AO_val2 == 8243ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 262);
    exit(1);
  }

  AO_double_store_full(&old_w, new_w);
  if(!(old_w.AO_val1 == 1375ul) || !(old_w.AO_val2 == 8243ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 264);
    exit(1);
  }

  new_w.AO_val1 = new_w.AO_val1 ^ old_w.AO_val1;
  new_w.AO_val2 = new_w.AO_val2 ^ old_w.AO_val2;
  AO_double_store_full(&old_w, new_w);
  if(!(old_w.AO_val1 == 0ul) || !(old_w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 268);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$25;
  return_value_AO_compare_double_and_swap_double_full$25=AO_compare_double_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)42, (unsigned long int)12, (unsigned long int)13);
  if(!(return_value_AO_compare_double_and_swap_double_full$25 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 277);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 278);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$26;
  return_value_AO_compare_double_and_swap_double_full$26=AO_compare_double_and_swap_double_full(&w, (unsigned long int)0, (unsigned long int)0, (unsigned long int)12, (unsigned long int)13);
  if(return_value_AO_compare_double_and_swap_double_full$26 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 279);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 280);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$27;
  return_value_AO_compare_double_and_swap_double_full$27=AO_compare_double_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)14, (unsigned long int)64, (unsigned long int)33);
  if(!(return_value_AO_compare_double_and_swap_double_full$27 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 281);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 282);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$28;
  return_value_AO_compare_double_and_swap_double_full$28=AO_compare_double_and_swap_double_full(&w, (unsigned long int)11, (unsigned long int)13, (unsigned long int)85, (unsigned long int)82);
  if(!(return_value_AO_compare_double_and_swap_double_full$28 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 283);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 284);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$29;
  return_value_AO_compare_double_and_swap_double_full$29=AO_compare_double_and_swap_double_full(&w, (unsigned long int)13, (unsigned long int)12, (unsigned long int)17, (unsigned long int)42);
  if(!(return_value_AO_compare_double_and_swap_double_full$29 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 285);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 286);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$30;
  return_value_AO_compare_double_and_swap_double_full$30=AO_compare_double_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)13, (unsigned long int)17, (unsigned long int)42);
  if(return_value_AO_compare_double_and_swap_double_full$30 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 287);
    exit(1);
  }

  if(!(w.AO_val1 == 17ul) || !(w.AO_val2 == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 288);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$31;
  return_value_AO_compare_double_and_swap_double_full$31=AO_compare_double_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)42, (unsigned long int)0, (unsigned long int)0);
  if(return_value_AO_compare_double_and_swap_double_full$31 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 289);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 290);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$32;
  return_value_AO_compare_and_swap_double_full$32=AO_compare_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)12, (unsigned long int)13);
  if(!(return_value_AO_compare_and_swap_double_full$32 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 295);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 296);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$33;
  return_value_AO_compare_and_swap_double_full$33=AO_compare_and_swap_double_full(&w, (unsigned long int)0, (unsigned long int)12, (unsigned long int)13);
  if(return_value_AO_compare_and_swap_double_full$33 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 297);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 298);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$34;
  return_value_AO_compare_and_swap_double_full$34=AO_compare_and_swap_double_full(&w, (unsigned long int)13, (unsigned long int)12, (unsigned long int)33);
  if(!(return_value_AO_compare_and_swap_double_full$34 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 299);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 300);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$35;
  return_value_AO_compare_and_swap_double_full$35=AO_compare_and_swap_double_full(&w, (unsigned long int)1213, (unsigned long int)48, (unsigned long int)86);
  if(!(return_value_AO_compare_and_swap_double_full$35 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 301);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 302);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$36;
  return_value_AO_compare_and_swap_double_full$36=AO_compare_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)17, (unsigned long int)42);
  if(return_value_AO_compare_and_swap_double_full$36 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 303);
    exit(1);
  }

  if(!(w.AO_val1 == 17ul) || !(w.AO_val2 == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 304);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$37;
  return_value_AO_compare_and_swap_double_full$37=AO_compare_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)0, (unsigned long int)0);
  if(return_value_AO_compare_and_swap_double_full$37 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 305);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 306);
    exit(1);
  }

  old_w.AO_val1 = (unsigned long int)4116;
  old_w.AO_val2 = (unsigned long int)2121;
  new_w.AO_val1 = (unsigned long int)8537;
  new_w.AO_val2 = (unsigned long int)6410;
  signed int return_value_AO_double_compare_and_swap$38;
  return_value_AO_double_compare_and_swap$38=AO_double_compare_and_swap(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap$38 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 315);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 316);
    exit(1);
  }

  signed int return_value_AO_double_compare_and_swap$39;
  return_value_AO_double_compare_and_swap$39=AO_double_compare_and_swap(&w, w, new_w);
  if(return_value_AO_double_compare_and_swap$39 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 317);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 318);
    exit(1);
  }

  old_w.AO_val1 = new_w.AO_val1;
  old_w.AO_val2 = (unsigned long int)29;
  new_w.AO_val1 = (unsigned long int)820;
  new_w.AO_val2 = (unsigned long int)5917;
  signed int return_value_AO_double_compare_and_swap$40;
  return_value_AO_double_compare_and_swap$40=AO_double_compare_and_swap(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap$40 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 323);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 324);
    exit(1);
  }

  old_w.AO_val1 = (unsigned long int)11;
  old_w.AO_val2 = (unsigned long int)6410;
  new_w.AO_val1 = (unsigned long int)3552;
  new_w.AO_val2 = (unsigned long int)1746;
  signed int return_value_AO_double_compare_and_swap$41;
  return_value_AO_double_compare_and_swap$41=AO_double_compare_and_swap(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap$41 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 329);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 330);
    exit(1);
  }

  old_w.AO_val1 = old_w.AO_val2;
  old_w.AO_val2 = (unsigned long int)8537;
  new_w.AO_val1 = (unsigned long int)4116;
  new_w.AO_val2 = (unsigned long int)2121;
  signed int return_value_AO_double_compare_and_swap$42;
  return_value_AO_double_compare_and_swap$42=AO_double_compare_and_swap(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap$42 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 335);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 336);
    exit(1);
  }

  old_w.AO_val1 = old_w.AO_val2;
  old_w.AO_val2 = (unsigned long int)6410;
  new_w.AO_val1 = (unsigned long int)1;
  signed int return_value_AO_double_compare_and_swap$43;
  return_value_AO_double_compare_and_swap$43=AO_double_compare_and_swap(&w, old_w, new_w);
  if(return_value_AO_double_compare_and_swap$43 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 340);
    exit(1);
  }

  if(!(w.AO_val1 == 1ul) || !(w.AO_val2 == 2121ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 341);
    exit(1);
  }

  old_w.AO_val1 = new_w.AO_val1;
  old_w.AO_val2 = w.AO_val2;
  new_w.AO_val1 = new_w.AO_val1 - 1ul;
  new_w.AO_val2 = (unsigned long int)0;
  signed int return_value_AO_double_compare_and_swap$44;
  return_value_AO_double_compare_and_swap$44=AO_double_compare_and_swap(&w, old_w, new_w);
  if(return_value_AO_double_compare_and_swap$44 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 346);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: )\n", (const void *)"test_atomic_include.h", 347);
    exit(1);
  }

}

// test_atomic_acquire
// file test_atomic_include.h line 721
void test_atomic_acquire(void)
{
  unsigned long int x;
  unsigned char b;
  unsigned short int s;
  unsigned int zz;
  unsigned long int z = (unsigned long int)AO_TS_clear;
  struct anonymous old_w;
  struct anonymous new_w;
  struct anonymous w;
  w.AO_val1 = (unsigned long int)0;
  w.AO_val2 = (unsigned long int)0;
  x = (unsigned long int)13;
  unsigned long int return_value_AO_load_full$1;
  return_value_AO_load_full$1=AO_load_full(&x);
  if(!(return_value_AO_load_full$1 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 763);
    exit(1);
  }

  AO_store_full((unsigned long int *)&z, (unsigned long int)AO_TS_clear);
  unsigned long int return_value_AO_fetch_and_add_acquire$2;
  return_value_AO_fetch_and_add_acquire$2=AO_fetch_and_add_acquire(&x, (unsigned long int)42);
  if(!(return_value_AO_fetch_and_add_acquire$2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 779);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add_acquire$3;
  return_value_AO_fetch_and_add_acquire$3=AO_fetch_and_add_acquire(&x, (unsigned long int)-42);
  if(!(return_value_AO_fetch_and_add_acquire$3 == 55ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 780);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add_acquire$4;
  return_value_AO_fetch_and_add_acquire$4=AO_fetch_and_add_acquire(&x, (unsigned long int)1);
  if(!(return_value_AO_fetch_and_add_acquire$4 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 785);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add_acquire$5;
  return_value_AO_fetch_and_add_acquire$5=AO_fetch_and_add_acquire(&x, (unsigned long int)-1);
  if(!(return_value_AO_fetch_and_add_acquire$5 == 14ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 791);
    exit(1);
  }

  s = (unsigned short int)13;
  unsigned short int return_value_AO_short_load_full$6;
  return_value_AO_short_load_full$6=AO_short_load_full(&s);
  if(!((signed int)return_value_AO_short_load_full$6 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 808);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_acquire$7;
  return_value_AO_short_fetch_and_add_acquire$7=AO_short_fetch_and_add_acquire(&s, (unsigned short int)42);
  if(!((signed int)return_value_AO_short_fetch_and_add_acquire$7 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 817);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_acquire$8;
  return_value_AO_short_fetch_and_add_acquire$8=AO_short_fetch_and_add_acquire(&s, (unsigned short int)-42);
  if(!((signed int)return_value_AO_short_fetch_and_add_acquire$8 == 55))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 818);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_acquire$9;
  return_value_AO_short_fetch_and_add_acquire$9=AO_short_fetch_and_add_acquire(&s, (unsigned short int)1);
  if(!((signed int)return_value_AO_short_fetch_and_add_acquire$9 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 823);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_acquire$10;
  return_value_AO_short_fetch_and_add_acquire$10=AO_short_fetch_and_add_acquire(&s, (unsigned short int)-1);
  if(!((signed int)return_value_AO_short_fetch_and_add_acquire$10 == 14))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 829);
    exit(1);
  }

  b = (unsigned char)13;
  unsigned char return_value_AO_char_load_full$11;
  return_value_AO_char_load_full$11=AO_char_load_full(&b);
  if(!((signed int)return_value_AO_char_load_full$11 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 846);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_acquire$12;
  return_value_AO_char_fetch_and_add_acquire$12=AO_char_fetch_and_add_acquire(&b, (unsigned char)42);
  if(!((signed int)return_value_AO_char_fetch_and_add_acquire$12 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 854);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_acquire$13;
  return_value_AO_char_fetch_and_add_acquire$13=AO_char_fetch_and_add_acquire(&b, (unsigned char)-42);
  if(!((signed int)return_value_AO_char_fetch_and_add_acquire$13 == 55))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 855);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_acquire$14;
  return_value_AO_char_fetch_and_add_acquire$14=AO_char_fetch_and_add_acquire(&b, (unsigned char)1);
  if(!((signed int)return_value_AO_char_fetch_and_add_acquire$14 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 860);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_acquire$15;
  return_value_AO_char_fetch_and_add_acquire$15=AO_char_fetch_and_add_acquire(&b, (unsigned char)-1);
  if(!((signed int)return_value_AO_char_fetch_and_add_acquire$15 == 14))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 866);
    exit(1);
  }

  zz = (unsigned int)13;
  unsigned int return_value_AO_int_load_full$16;
  return_value_AO_int_load_full$16=AO_int_load_full(&zz);
  if(!(return_value_AO_int_load_full$16 == 13u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 883);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_acquire$17;
  return_value_AO_int_fetch_and_add_acquire$17=AO_int_fetch_and_add_acquire(&zz, (unsigned int)42);
  if(!(return_value_AO_int_fetch_and_add_acquire$17 == 13u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 891);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_acquire$18;
  return_value_AO_int_fetch_and_add_acquire$18=AO_int_fetch_and_add_acquire(&zz, (unsigned int)-42);
  if(!(return_value_AO_int_fetch_and_add_acquire$18 == 55u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 892);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_acquire$19;
  return_value_AO_int_fetch_and_add_acquire$19=AO_int_fetch_and_add_acquire(&zz, (unsigned int)1);
  if(!(return_value_AO_int_fetch_and_add_acquire$19 == 13u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 897);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_acquire$20;
  return_value_AO_int_fetch_and_add_acquire$20=AO_int_fetch_and_add_acquire(&zz, (unsigned int)-1);
  if(!(return_value_AO_int_fetch_and_add_acquire$20 == 14u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 903);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_acquire$21;
  return_value_AO_compare_and_swap_acquire$21=AO_compare_and_swap_acquire(&x, (unsigned long int)14, (unsigned long int)42);
  if(!(return_value_AO_compare_and_swap_acquire$21 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 909);
    exit(1);
  }

  if(!(x == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 910);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_acquire$22;
  return_value_AO_compare_and_swap_acquire$22=AO_compare_and_swap_acquire(&x, (unsigned long int)13, (unsigned long int)42);
  if(return_value_AO_compare_and_swap_acquire$22 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 911);
    exit(1);
  }

  if(!(x == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 912);
    exit(1);
  }

  AO_or_full(&x, (unsigned long int)66);
  if(!(x == 106ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 919);
    exit(1);
  }

  AO_xor_full(&x, (unsigned long int)181);
  if(!(x == 223ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 926);
    exit(1);
  }

  AO_and_full(&x, (unsigned long int)57);
  if(!(x == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 933);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_compare_and_swap_full$23;
  return_value_AO_fetch_compare_and_swap_full$23=AO_fetch_compare_and_swap_full(&x, (unsigned long int)14, (unsigned long int)117);
  if(!(return_value_AO_fetch_compare_and_swap_full$23 == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 939);
    exit(1);
  }

  if(!(x == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 940);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_compare_and_swap_full$24;
  return_value_AO_fetch_compare_and_swap_full$24=AO_fetch_compare_and_swap_full(&x, (unsigned long int)25, (unsigned long int)117);
  if(!(return_value_AO_fetch_compare_and_swap_full$24 == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 941);
    exit(1);
  }

  if(!(x == 117ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 942);
    exit(1);
  }

  old_w.AO_val1 = (unsigned long int)3316;
  old_w.AO_val2 = (unsigned long int)2921;
  new_w=AO_double_load_full(&old_w);
  if(!(new_w.AO_val1 == 3316ul) || !(new_w.AO_val2 == 2921ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 951);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$25;
  return_value_AO_compare_double_and_swap_double_full$25=AO_compare_double_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)42, (unsigned long int)12, (unsigned long int)13);
  if(!(return_value_AO_compare_double_and_swap_double_full$25 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 979);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 980);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$26;
  return_value_AO_compare_double_and_swap_double_full$26=AO_compare_double_and_swap_double_full(&w, (unsigned long int)0, (unsigned long int)0, (unsigned long int)12, (unsigned long int)13);
  if(return_value_AO_compare_double_and_swap_double_full$26 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 981);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 982);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$27;
  return_value_AO_compare_double_and_swap_double_full$27=AO_compare_double_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)14, (unsigned long int)64, (unsigned long int)33);
  if(!(return_value_AO_compare_double_and_swap_double_full$27 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 983);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 984);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$28;
  return_value_AO_compare_double_and_swap_double_full$28=AO_compare_double_and_swap_double_full(&w, (unsigned long int)11, (unsigned long int)13, (unsigned long int)85, (unsigned long int)82);
  if(!(return_value_AO_compare_double_and_swap_double_full$28 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 985);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 986);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$29;
  return_value_AO_compare_double_and_swap_double_full$29=AO_compare_double_and_swap_double_full(&w, (unsigned long int)13, (unsigned long int)12, (unsigned long int)17, (unsigned long int)42);
  if(!(return_value_AO_compare_double_and_swap_double_full$29 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 987);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 988);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$30;
  return_value_AO_compare_double_and_swap_double_full$30=AO_compare_double_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)13, (unsigned long int)17, (unsigned long int)42);
  if(return_value_AO_compare_double_and_swap_double_full$30 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 989);
    exit(1);
  }

  if(!(w.AO_val1 == 17ul) || !(w.AO_val2 == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 990);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$31;
  return_value_AO_compare_double_and_swap_double_full$31=AO_compare_double_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)42, (unsigned long int)0, (unsigned long int)0);
  if(return_value_AO_compare_double_and_swap_double_full$31 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 991);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 992);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$32;
  return_value_AO_compare_and_swap_double_full$32=AO_compare_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)12, (unsigned long int)13);
  if(!(return_value_AO_compare_and_swap_double_full$32 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 997);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 998);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$33;
  return_value_AO_compare_and_swap_double_full$33=AO_compare_and_swap_double_full(&w, (unsigned long int)0, (unsigned long int)12, (unsigned long int)13);
  if(return_value_AO_compare_and_swap_double_full$33 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 999);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1000);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$34;
  return_value_AO_compare_and_swap_double_full$34=AO_compare_and_swap_double_full(&w, (unsigned long int)13, (unsigned long int)12, (unsigned long int)33);
  if(!(return_value_AO_compare_and_swap_double_full$34 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1001);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1002);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$35;
  return_value_AO_compare_and_swap_double_full$35=AO_compare_and_swap_double_full(&w, (unsigned long int)1213, (unsigned long int)48, (unsigned long int)86);
  if(!(return_value_AO_compare_and_swap_double_full$35 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1003);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1004);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$36;
  return_value_AO_compare_and_swap_double_full$36=AO_compare_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)17, (unsigned long int)42);
  if(return_value_AO_compare_and_swap_double_full$36 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1005);
    exit(1);
  }

  if(!(w.AO_val1 == 17ul) || !(w.AO_val2 == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1006);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$37;
  return_value_AO_compare_and_swap_double_full$37=AO_compare_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)0, (unsigned long int)0);
  if(return_value_AO_compare_and_swap_double_full$37 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1007);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1008);
    exit(1);
  }

  old_w.AO_val1 = (unsigned long int)4116;
  old_w.AO_val2 = (unsigned long int)2121;
  new_w.AO_val1 = (unsigned long int)8537;
  new_w.AO_val2 = (unsigned long int)6410;
  signed int return_value_AO_double_compare_and_swap_acquire$38;
  return_value_AO_double_compare_and_swap_acquire$38=AO_double_compare_and_swap_acquire(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_acquire$38 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1017);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1018);
    exit(1);
  }

  signed int return_value_AO_double_compare_and_swap_acquire$39;
  return_value_AO_double_compare_and_swap_acquire$39=AO_double_compare_and_swap_acquire(&w, w, new_w);
  if(return_value_AO_double_compare_and_swap_acquire$39 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1019);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1020);
    exit(1);
  }

  old_w.AO_val1 = new_w.AO_val1;
  old_w.AO_val2 = (unsigned long int)29;
  new_w.AO_val1 = (unsigned long int)820;
  new_w.AO_val2 = (unsigned long int)5917;
  signed int return_value_AO_double_compare_and_swap_acquire$40;
  return_value_AO_double_compare_and_swap_acquire$40=AO_double_compare_and_swap_acquire(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_acquire$40 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1025);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1026);
    exit(1);
  }

  old_w.AO_val1 = (unsigned long int)11;
  old_w.AO_val2 = (unsigned long int)6410;
  new_w.AO_val1 = (unsigned long int)3552;
  new_w.AO_val2 = (unsigned long int)1746;
  signed int return_value_AO_double_compare_and_swap_acquire$41;
  return_value_AO_double_compare_and_swap_acquire$41=AO_double_compare_and_swap_acquire(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_acquire$41 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1031);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1032);
    exit(1);
  }

  old_w.AO_val1 = old_w.AO_val2;
  old_w.AO_val2 = (unsigned long int)8537;
  new_w.AO_val1 = (unsigned long int)4116;
  new_w.AO_val2 = (unsigned long int)2121;
  signed int return_value_AO_double_compare_and_swap_acquire$42;
  return_value_AO_double_compare_and_swap_acquire$42=AO_double_compare_and_swap_acquire(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_acquire$42 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1037);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1038);
    exit(1);
  }

  old_w.AO_val1 = old_w.AO_val2;
  old_w.AO_val2 = (unsigned long int)6410;
  new_w.AO_val1 = (unsigned long int)1;
  signed int return_value_AO_double_compare_and_swap_acquire$43;
  return_value_AO_double_compare_and_swap_acquire$43=AO_double_compare_and_swap_acquire(&w, old_w, new_w);
  if(return_value_AO_double_compare_and_swap_acquire$43 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1042);
    exit(1);
  }

  if(!(w.AO_val1 == 1ul) || !(w.AO_val2 == 2121ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1043);
    exit(1);
  }

  old_w.AO_val1 = new_w.AO_val1;
  old_w.AO_val2 = w.AO_val2;
  new_w.AO_val1 = new_w.AO_val1 - 1ul;
  new_w.AO_val2 = (unsigned long int)0;
  signed int return_value_AO_double_compare_and_swap_acquire$44;
  return_value_AO_double_compare_and_swap_acquire$44=AO_double_compare_and_swap_acquire(&w, old_w, new_w);
  if(return_value_AO_double_compare_and_swap_acquire$44 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1048);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire)\n", (const void *)"test_atomic_include.h", 1049);
    exit(1);
  }

}

// test_atomic_acquire_read
// file test_atomic_include.h line 2476
void test_atomic_acquire_read(void)
{
  unsigned long int x;
  unsigned char b;
  unsigned short int s;
  unsigned int zz;
  unsigned long int z = (unsigned long int)AO_TS_clear;
  struct anonymous old_w;
  struct anonymous new_w;
  struct anonymous w;
  w.AO_val1 = (unsigned long int)0;
  w.AO_val2 = (unsigned long int)0;
  x = (unsigned long int)13;
  unsigned long int return_value_AO_load_full$1;
  return_value_AO_load_full$1=AO_load_full(&x);
  if(!(return_value_AO_load_full$1 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2518);
    exit(1);
  }

  AO_store_full((unsigned long int *)&z, (unsigned long int)AO_TS_clear);
  unsigned long int return_value_AO_fetch_and_add_full$2;
  return_value_AO_fetch_and_add_full$2=AO_fetch_and_add_full(&x, (unsigned long int)42);
  if(!(return_value_AO_fetch_and_add_full$2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2534);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add_full$3;
  return_value_AO_fetch_and_add_full$3=AO_fetch_and_add_full(&x, (unsigned long int)-42);
  if(!(return_value_AO_fetch_and_add_full$3 == 55ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2535);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add_full$4;
  return_value_AO_fetch_and_add_full$4=AO_fetch_and_add_full(&x, (unsigned long int)1);
  if(!(return_value_AO_fetch_and_add_full$4 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2540);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add_full$5;
  return_value_AO_fetch_and_add_full$5=AO_fetch_and_add_full(&x, (unsigned long int)-1);
  if(!(return_value_AO_fetch_and_add_full$5 == 14ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2546);
    exit(1);
  }

  s = (unsigned short int)13;
  unsigned short int return_value_AO_short_load_full$6;
  return_value_AO_short_load_full$6=AO_short_load_full(&s);
  if(!((signed int)return_value_AO_short_load_full$6 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2563);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_full$7;
  return_value_AO_short_fetch_and_add_full$7=AO_short_fetch_and_add_full(&s, (unsigned short int)42);
  if(!((signed int)return_value_AO_short_fetch_and_add_full$7 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2572);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_full$8;
  return_value_AO_short_fetch_and_add_full$8=AO_short_fetch_and_add_full(&s, (unsigned short int)-42);
  if(!((signed int)return_value_AO_short_fetch_and_add_full$8 == 55))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2573);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_full$9;
  return_value_AO_short_fetch_and_add_full$9=AO_short_fetch_and_add_full(&s, (unsigned short int)1);
  if(!((signed int)return_value_AO_short_fetch_and_add_full$9 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2578);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_full$10;
  return_value_AO_short_fetch_and_add_full$10=AO_short_fetch_and_add_full(&s, (unsigned short int)-1);
  if(!((signed int)return_value_AO_short_fetch_and_add_full$10 == 14))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2584);
    exit(1);
  }

  b = (unsigned char)13;
  unsigned char return_value_AO_char_load_full$11;
  return_value_AO_char_load_full$11=AO_char_load_full(&b);
  if(!((signed int)return_value_AO_char_load_full$11 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2601);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_full$12;
  return_value_AO_char_fetch_and_add_full$12=AO_char_fetch_and_add_full(&b, (unsigned char)42);
  if(!((signed int)return_value_AO_char_fetch_and_add_full$12 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2609);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_full$13;
  return_value_AO_char_fetch_and_add_full$13=AO_char_fetch_and_add_full(&b, (unsigned char)-42);
  if(!((signed int)return_value_AO_char_fetch_and_add_full$13 == 55))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2610);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_full$14;
  return_value_AO_char_fetch_and_add_full$14=AO_char_fetch_and_add_full(&b, (unsigned char)1);
  if(!((signed int)return_value_AO_char_fetch_and_add_full$14 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2615);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_full$15;
  return_value_AO_char_fetch_and_add_full$15=AO_char_fetch_and_add_full(&b, (unsigned char)-1);
  if(!((signed int)return_value_AO_char_fetch_and_add_full$15 == 14))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2621);
    exit(1);
  }

  zz = (unsigned int)13;
  unsigned int return_value_AO_int_load_full$16;
  return_value_AO_int_load_full$16=AO_int_load_full(&zz);
  if(!(return_value_AO_int_load_full$16 == 13u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2638);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_full$17;
  return_value_AO_int_fetch_and_add_full$17=AO_int_fetch_and_add_full(&zz, (unsigned int)42);
  if(!(return_value_AO_int_fetch_and_add_full$17 == 13u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2646);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_full$18;
  return_value_AO_int_fetch_and_add_full$18=AO_int_fetch_and_add_full(&zz, (unsigned int)-42);
  if(!(return_value_AO_int_fetch_and_add_full$18 == 55u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2647);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_full$19;
  return_value_AO_int_fetch_and_add_full$19=AO_int_fetch_and_add_full(&zz, (unsigned int)1);
  if(!(return_value_AO_int_fetch_and_add_full$19 == 13u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2652);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_full$20;
  return_value_AO_int_fetch_and_add_full$20=AO_int_fetch_and_add_full(&zz, (unsigned int)-1);
  if(!(return_value_AO_int_fetch_and_add_full$20 == 14u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2658);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_acquire_read$21;
  return_value_AO_compare_and_swap_acquire_read$21=AO_compare_and_swap_acquire_read(&x, (unsigned long int)14, (unsigned long int)42);
  if(!(return_value_AO_compare_and_swap_acquire_read$21 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2664);
    exit(1);
  }

  if(!(x == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2665);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_acquire_read$22;
  return_value_AO_compare_and_swap_acquire_read$22=AO_compare_and_swap_acquire_read(&x, (unsigned long int)13, (unsigned long int)42);
  if(return_value_AO_compare_and_swap_acquire_read$22 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2666);
    exit(1);
  }

  if(!(x == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2667);
    exit(1);
  }

  AO_or_full(&x, (unsigned long int)66);
  if(!(x == 106ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2674);
    exit(1);
  }

  AO_xor_full(&x, (unsigned long int)181);
  if(!(x == 223ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2681);
    exit(1);
  }

  AO_and_full(&x, (unsigned long int)57);
  if(!(x == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2688);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_compare_and_swap_full$23;
  return_value_AO_fetch_compare_and_swap_full$23=AO_fetch_compare_and_swap_full(&x, (unsigned long int)14, (unsigned long int)117);
  if(!(return_value_AO_fetch_compare_and_swap_full$23 == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2694);
    exit(1);
  }

  if(!(x == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2695);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_compare_and_swap_full$24;
  return_value_AO_fetch_compare_and_swap_full$24=AO_fetch_compare_and_swap_full(&x, (unsigned long int)25, (unsigned long int)117);
  if(!(return_value_AO_fetch_compare_and_swap_full$24 == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2696);
    exit(1);
  }

  if(!(x == 117ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2697);
    exit(1);
  }

  old_w.AO_val1 = (unsigned long int)3316;
  old_w.AO_val2 = (unsigned long int)2921;
  new_w=AO_double_load_full(&old_w);
  if(!(new_w.AO_val1 == 3316ul) || !(new_w.AO_val2 == 2921ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2706);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$25;
  return_value_AO_compare_double_and_swap_double_full$25=AO_compare_double_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)42, (unsigned long int)12, (unsigned long int)13);
  if(!(return_value_AO_compare_double_and_swap_double_full$25 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2734);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2735);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$26;
  return_value_AO_compare_double_and_swap_double_full$26=AO_compare_double_and_swap_double_full(&w, (unsigned long int)0, (unsigned long int)0, (unsigned long int)12, (unsigned long int)13);
  if(return_value_AO_compare_double_and_swap_double_full$26 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2736);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2737);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$27;
  return_value_AO_compare_double_and_swap_double_full$27=AO_compare_double_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)14, (unsigned long int)64, (unsigned long int)33);
  if(!(return_value_AO_compare_double_and_swap_double_full$27 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2738);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2739);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$28;
  return_value_AO_compare_double_and_swap_double_full$28=AO_compare_double_and_swap_double_full(&w, (unsigned long int)11, (unsigned long int)13, (unsigned long int)85, (unsigned long int)82);
  if(!(return_value_AO_compare_double_and_swap_double_full$28 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2740);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2741);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$29;
  return_value_AO_compare_double_and_swap_double_full$29=AO_compare_double_and_swap_double_full(&w, (unsigned long int)13, (unsigned long int)12, (unsigned long int)17, (unsigned long int)42);
  if(!(return_value_AO_compare_double_and_swap_double_full$29 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2742);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2743);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$30;
  return_value_AO_compare_double_and_swap_double_full$30=AO_compare_double_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)13, (unsigned long int)17, (unsigned long int)42);
  if(return_value_AO_compare_double_and_swap_double_full$30 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2744);
    exit(1);
  }

  if(!(w.AO_val1 == 17ul) || !(w.AO_val2 == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2745);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$31;
  return_value_AO_compare_double_and_swap_double_full$31=AO_compare_double_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)42, (unsigned long int)0, (unsigned long int)0);
  if(return_value_AO_compare_double_and_swap_double_full$31 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2746);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2747);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$32;
  return_value_AO_compare_and_swap_double_full$32=AO_compare_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)12, (unsigned long int)13);
  if(!(return_value_AO_compare_and_swap_double_full$32 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2752);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2753);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$33;
  return_value_AO_compare_and_swap_double_full$33=AO_compare_and_swap_double_full(&w, (unsigned long int)0, (unsigned long int)12, (unsigned long int)13);
  if(return_value_AO_compare_and_swap_double_full$33 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2754);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2755);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$34;
  return_value_AO_compare_and_swap_double_full$34=AO_compare_and_swap_double_full(&w, (unsigned long int)13, (unsigned long int)12, (unsigned long int)33);
  if(!(return_value_AO_compare_and_swap_double_full$34 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2756);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2757);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$35;
  return_value_AO_compare_and_swap_double_full$35=AO_compare_and_swap_double_full(&w, (unsigned long int)1213, (unsigned long int)48, (unsigned long int)86);
  if(!(return_value_AO_compare_and_swap_double_full$35 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2758);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2759);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$36;
  return_value_AO_compare_and_swap_double_full$36=AO_compare_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)17, (unsigned long int)42);
  if(return_value_AO_compare_and_swap_double_full$36 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2760);
    exit(1);
  }

  if(!(w.AO_val1 == 17ul) || !(w.AO_val2 == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2761);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$37;
  return_value_AO_compare_and_swap_double_full$37=AO_compare_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)0, (unsigned long int)0);
  if(return_value_AO_compare_and_swap_double_full$37 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2762);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2763);
    exit(1);
  }

  old_w.AO_val1 = (unsigned long int)4116;
  old_w.AO_val2 = (unsigned long int)2121;
  new_w.AO_val1 = (unsigned long int)8537;
  new_w.AO_val2 = (unsigned long int)6410;
  signed int return_value_AO_double_compare_and_swap_acquire_read$38;
  return_value_AO_double_compare_and_swap_acquire_read$38=AO_double_compare_and_swap_acquire_read(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_acquire_read$38 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2772);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2773);
    exit(1);
  }

  signed int return_value_AO_double_compare_and_swap_acquire_read$39;
  return_value_AO_double_compare_and_swap_acquire_read$39=AO_double_compare_and_swap_acquire_read(&w, w, new_w);
  if(return_value_AO_double_compare_and_swap_acquire_read$39 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2774);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2775);
    exit(1);
  }

  old_w.AO_val1 = new_w.AO_val1;
  old_w.AO_val2 = (unsigned long int)29;
  new_w.AO_val1 = (unsigned long int)820;
  new_w.AO_val2 = (unsigned long int)5917;
  signed int return_value_AO_double_compare_and_swap_acquire_read$40;
  return_value_AO_double_compare_and_swap_acquire_read$40=AO_double_compare_and_swap_acquire_read(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_acquire_read$40 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2780);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2781);
    exit(1);
  }

  old_w.AO_val1 = (unsigned long int)11;
  old_w.AO_val2 = (unsigned long int)6410;
  new_w.AO_val1 = (unsigned long int)3552;
  new_w.AO_val2 = (unsigned long int)1746;
  signed int return_value_AO_double_compare_and_swap_acquire_read$41;
  return_value_AO_double_compare_and_swap_acquire_read$41=AO_double_compare_and_swap_acquire_read(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_acquire_read$41 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2786);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2787);
    exit(1);
  }

  old_w.AO_val1 = old_w.AO_val2;
  old_w.AO_val2 = (unsigned long int)8537;
  new_w.AO_val1 = (unsigned long int)4116;
  new_w.AO_val2 = (unsigned long int)2121;
  signed int return_value_AO_double_compare_and_swap_acquire_read$42;
  return_value_AO_double_compare_and_swap_acquire_read$42=AO_double_compare_and_swap_acquire_read(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_acquire_read$42 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2792);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2793);
    exit(1);
  }

  old_w.AO_val1 = old_w.AO_val2;
  old_w.AO_val2 = (unsigned long int)6410;
  new_w.AO_val1 = (unsigned long int)1;
  signed int return_value_AO_double_compare_and_swap_acquire_read$43;
  return_value_AO_double_compare_and_swap_acquire_read$43=AO_double_compare_and_swap_acquire_read(&w, old_w, new_w);
  if(return_value_AO_double_compare_and_swap_acquire_read$43 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2797);
    exit(1);
  }

  if(!(w.AO_val1 == 1ul) || !(w.AO_val2 == 2121ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2798);
    exit(1);
  }

  old_w.AO_val1 = new_w.AO_val1;
  old_w.AO_val2 = w.AO_val2;
  new_w.AO_val1 = new_w.AO_val1 - 1ul;
  new_w.AO_val2 = (unsigned long int)0;
  signed int return_value_AO_double_compare_and_swap_acquire_read$44;
  return_value_AO_double_compare_and_swap_acquire_read$44=AO_double_compare_and_swap_acquire_read(&w, old_w, new_w);
  if(return_value_AO_double_compare_and_swap_acquire_read$44 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2803);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _acquire_read)\n", (const void *)"test_atomic_include.h", 2804);
    exit(1);
  }

}

// test_atomic_full
// file test_atomic_include.h line 1774
void test_atomic_full(void)
{
  unsigned long int x;
  unsigned char b;
  unsigned short int s;
  unsigned int zz;
  unsigned long int z = (unsigned long int)AO_TS_clear;
  struct anonymous old_w;
  struct anonymous new_w;
  struct anonymous w;
  w.AO_val1 = (unsigned long int)0;
  w.AO_val2 = (unsigned long int)0;
  AO_nop_full();
  AO_store_full(&x, (unsigned long int)13);
  if(!(x == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1805);
    exit(1);
  }

  unsigned long int return_value_AO_load_full$1;
  return_value_AO_load_full$1=AO_load_full(&x);
  if(!(return_value_AO_load_full$1 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1816);
    exit(1);
  }

  AO_store_full((unsigned long int *)&z, (unsigned long int)AO_TS_clear);
  unsigned long int return_value_AO_fetch_and_add_full$2;
  return_value_AO_fetch_and_add_full$2=AO_fetch_and_add_full(&x, (unsigned long int)42);
  if(!(return_value_AO_fetch_and_add_full$2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1832);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add_full$3;
  return_value_AO_fetch_and_add_full$3=AO_fetch_and_add_full(&x, (unsigned long int)-42);
  if(!(return_value_AO_fetch_and_add_full$3 == 55ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1833);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add_full$4;
  return_value_AO_fetch_and_add_full$4=AO_fetch_and_add_full(&x, (unsigned long int)1);
  if(!(return_value_AO_fetch_and_add_full$4 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1838);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add_full$5;
  return_value_AO_fetch_and_add_full$5=AO_fetch_and_add_full(&x, (unsigned long int)-1);
  if(!(return_value_AO_fetch_and_add_full$5 == 14ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1844);
    exit(1);
  }

  AO_short_store_full(&s, (unsigned short int)13);
  unsigned short int return_value_AO_short_load_full$6;
  return_value_AO_short_load_full$6=AO_short_load_full(&s);
  if(!((signed int)return_value_AO_short_load_full$6 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1861);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_full$7;
  return_value_AO_short_fetch_and_add_full$7=AO_short_fetch_and_add_full(&s, (unsigned short int)42);
  if(!((signed int)return_value_AO_short_fetch_and_add_full$7 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1870);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_full$8;
  return_value_AO_short_fetch_and_add_full$8=AO_short_fetch_and_add_full(&s, (unsigned short int)-42);
  if(!((signed int)return_value_AO_short_fetch_and_add_full$8 == 55))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1871);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_full$9;
  return_value_AO_short_fetch_and_add_full$9=AO_short_fetch_and_add_full(&s, (unsigned short int)1);
  if(!((signed int)return_value_AO_short_fetch_and_add_full$9 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1876);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_full$10;
  return_value_AO_short_fetch_and_add_full$10=AO_short_fetch_and_add_full(&s, (unsigned short int)-1);
  if(!((signed int)return_value_AO_short_fetch_and_add_full$10 == 14))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1882);
    exit(1);
  }

  AO_char_store_full(&b, (unsigned char)13);
  unsigned char return_value_AO_char_load_full$11;
  return_value_AO_char_load_full$11=AO_char_load_full(&b);
  if(!((signed int)return_value_AO_char_load_full$11 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1899);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_full$12;
  return_value_AO_char_fetch_and_add_full$12=AO_char_fetch_and_add_full(&b, (unsigned char)42);
  if(!((signed int)return_value_AO_char_fetch_and_add_full$12 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1907);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_full$13;
  return_value_AO_char_fetch_and_add_full$13=AO_char_fetch_and_add_full(&b, (unsigned char)-42);
  if(!((signed int)return_value_AO_char_fetch_and_add_full$13 == 55))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1908);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_full$14;
  return_value_AO_char_fetch_and_add_full$14=AO_char_fetch_and_add_full(&b, (unsigned char)1);
  if(!((signed int)return_value_AO_char_fetch_and_add_full$14 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1913);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_full$15;
  return_value_AO_char_fetch_and_add_full$15=AO_char_fetch_and_add_full(&b, (unsigned char)-1);
  if(!((signed int)return_value_AO_char_fetch_and_add_full$15 == 14))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1919);
    exit(1);
  }

  AO_int_store_full(&zz, (unsigned int)13);
  unsigned int return_value_AO_int_load_full$16;
  return_value_AO_int_load_full$16=AO_int_load_full(&zz);
  if(!(return_value_AO_int_load_full$16 == 13u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1936);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_full$17;
  return_value_AO_int_fetch_and_add_full$17=AO_int_fetch_and_add_full(&zz, (unsigned int)42);
  if(!(return_value_AO_int_fetch_and_add_full$17 == 13u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1944);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_full$18;
  return_value_AO_int_fetch_and_add_full$18=AO_int_fetch_and_add_full(&zz, (unsigned int)-42);
  if(!(return_value_AO_int_fetch_and_add_full$18 == 55u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1945);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_full$19;
  return_value_AO_int_fetch_and_add_full$19=AO_int_fetch_and_add_full(&zz, (unsigned int)1);
  if(!(return_value_AO_int_fetch_and_add_full$19 == 13u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1950);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_full$20;
  return_value_AO_int_fetch_and_add_full$20=AO_int_fetch_and_add_full(&zz, (unsigned int)-1);
  if(!(return_value_AO_int_fetch_and_add_full$20 == 14u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1956);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_full$21;
  return_value_AO_compare_and_swap_full$21=AO_compare_and_swap_full(&x, (unsigned long int)14, (unsigned long int)42);
  if(!(return_value_AO_compare_and_swap_full$21 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1962);
    exit(1);
  }

  if(!(x == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1963);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_full$22;
  return_value_AO_compare_and_swap_full$22=AO_compare_and_swap_full(&x, (unsigned long int)13, (unsigned long int)42);
  if(return_value_AO_compare_and_swap_full$22 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1964);
    exit(1);
  }

  if(!(x == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1965);
    exit(1);
  }

  AO_or_full(&x, (unsigned long int)66);
  if(!(x == 106ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1972);
    exit(1);
  }

  AO_xor_full(&x, (unsigned long int)181);
  if(!(x == 223ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1979);
    exit(1);
  }

  AO_and_full(&x, (unsigned long int)57);
  if(!(x == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1986);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_compare_and_swap_full$23;
  return_value_AO_fetch_compare_and_swap_full$23=AO_fetch_compare_and_swap_full(&x, (unsigned long int)14, (unsigned long int)117);
  if(!(return_value_AO_fetch_compare_and_swap_full$23 == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1992);
    exit(1);
  }

  if(!(x == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1993);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_compare_and_swap_full$24;
  return_value_AO_fetch_compare_and_swap_full$24=AO_fetch_compare_and_swap_full(&x, (unsigned long int)25, (unsigned long int)117);
  if(!(return_value_AO_fetch_compare_and_swap_full$24 == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1994);
    exit(1);
  }

  if(!(x == 117ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 1995);
    exit(1);
  }

  old_w.AO_val1 = (unsigned long int)3316;
  old_w.AO_val2 = (unsigned long int)2921;
  new_w=AO_double_load_full(&old_w);
  if(!(new_w.AO_val1 == 3316ul) || !(new_w.AO_val2 == 2921ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2004);
    exit(1);
  }

  new_w.AO_val1 = (unsigned long int)1375;
  new_w.AO_val2 = (unsigned long int)8243;
  AO_double_store_full(&old_w, new_w);
  if(!(old_w.AO_val1 == 1375ul) || !(old_w.AO_val2 == 8243ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2017);
    exit(1);
  }

  AO_double_store_full(&old_w, new_w);
  if(!(old_w.AO_val1 == 1375ul) || !(old_w.AO_val2 == 8243ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2019);
    exit(1);
  }

  new_w.AO_val1 = new_w.AO_val1 ^ old_w.AO_val1;
  new_w.AO_val2 = new_w.AO_val2 ^ old_w.AO_val2;
  AO_double_store_full(&old_w, new_w);
  if(!(old_w.AO_val1 == 0ul) || !(old_w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2023);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$25;
  return_value_AO_compare_double_and_swap_double_full$25=AO_compare_double_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)42, (unsigned long int)12, (unsigned long int)13);
  if(!(return_value_AO_compare_double_and_swap_double_full$25 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2032);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2033);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$26;
  return_value_AO_compare_double_and_swap_double_full$26=AO_compare_double_and_swap_double_full(&w, (unsigned long int)0, (unsigned long int)0, (unsigned long int)12, (unsigned long int)13);
  if(return_value_AO_compare_double_and_swap_double_full$26 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2034);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2035);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$27;
  return_value_AO_compare_double_and_swap_double_full$27=AO_compare_double_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)14, (unsigned long int)64, (unsigned long int)33);
  if(!(return_value_AO_compare_double_and_swap_double_full$27 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2036);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2037);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$28;
  return_value_AO_compare_double_and_swap_double_full$28=AO_compare_double_and_swap_double_full(&w, (unsigned long int)11, (unsigned long int)13, (unsigned long int)85, (unsigned long int)82);
  if(!(return_value_AO_compare_double_and_swap_double_full$28 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2038);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2039);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$29;
  return_value_AO_compare_double_and_swap_double_full$29=AO_compare_double_and_swap_double_full(&w, (unsigned long int)13, (unsigned long int)12, (unsigned long int)17, (unsigned long int)42);
  if(!(return_value_AO_compare_double_and_swap_double_full$29 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2040);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2041);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$30;
  return_value_AO_compare_double_and_swap_double_full$30=AO_compare_double_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)13, (unsigned long int)17, (unsigned long int)42);
  if(return_value_AO_compare_double_and_swap_double_full$30 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2042);
    exit(1);
  }

  if(!(w.AO_val1 == 17ul) || !(w.AO_val2 == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2043);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$31;
  return_value_AO_compare_double_and_swap_double_full$31=AO_compare_double_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)42, (unsigned long int)0, (unsigned long int)0);
  if(return_value_AO_compare_double_and_swap_double_full$31 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2044);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2045);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$32;
  return_value_AO_compare_and_swap_double_full$32=AO_compare_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)12, (unsigned long int)13);
  if(!(return_value_AO_compare_and_swap_double_full$32 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2050);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2051);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$33;
  return_value_AO_compare_and_swap_double_full$33=AO_compare_and_swap_double_full(&w, (unsigned long int)0, (unsigned long int)12, (unsigned long int)13);
  if(return_value_AO_compare_and_swap_double_full$33 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2052);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2053);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$34;
  return_value_AO_compare_and_swap_double_full$34=AO_compare_and_swap_double_full(&w, (unsigned long int)13, (unsigned long int)12, (unsigned long int)33);
  if(!(return_value_AO_compare_and_swap_double_full$34 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2054);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2055);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$35;
  return_value_AO_compare_and_swap_double_full$35=AO_compare_and_swap_double_full(&w, (unsigned long int)1213, (unsigned long int)48, (unsigned long int)86);
  if(!(return_value_AO_compare_and_swap_double_full$35 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2056);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2057);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$36;
  return_value_AO_compare_and_swap_double_full$36=AO_compare_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)17, (unsigned long int)42);
  if(return_value_AO_compare_and_swap_double_full$36 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2058);
    exit(1);
  }

  if(!(w.AO_val1 == 17ul) || !(w.AO_val2 == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2059);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$37;
  return_value_AO_compare_and_swap_double_full$37=AO_compare_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)0, (unsigned long int)0);
  if(return_value_AO_compare_and_swap_double_full$37 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2060);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2061);
    exit(1);
  }

  old_w.AO_val1 = (unsigned long int)4116;
  old_w.AO_val2 = (unsigned long int)2121;
  new_w.AO_val1 = (unsigned long int)8537;
  new_w.AO_val2 = (unsigned long int)6410;
  signed int return_value_AO_double_compare_and_swap_full$38;
  return_value_AO_double_compare_and_swap_full$38=AO_double_compare_and_swap_full(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_full$38 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2070);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2071);
    exit(1);
  }

  signed int return_value_AO_double_compare_and_swap_full$39;
  return_value_AO_double_compare_and_swap_full$39=AO_double_compare_and_swap_full(&w, w, new_w);
  if(return_value_AO_double_compare_and_swap_full$39 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2072);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2073);
    exit(1);
  }

  old_w.AO_val1 = new_w.AO_val1;
  old_w.AO_val2 = (unsigned long int)29;
  new_w.AO_val1 = (unsigned long int)820;
  new_w.AO_val2 = (unsigned long int)5917;
  signed int return_value_AO_double_compare_and_swap_full$40;
  return_value_AO_double_compare_and_swap_full$40=AO_double_compare_and_swap_full(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_full$40 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2078);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2079);
    exit(1);
  }

  old_w.AO_val1 = (unsigned long int)11;
  old_w.AO_val2 = (unsigned long int)6410;
  new_w.AO_val1 = (unsigned long int)3552;
  new_w.AO_val2 = (unsigned long int)1746;
  signed int return_value_AO_double_compare_and_swap_full$41;
  return_value_AO_double_compare_and_swap_full$41=AO_double_compare_and_swap_full(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_full$41 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2084);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2085);
    exit(1);
  }

  old_w.AO_val1 = old_w.AO_val2;
  old_w.AO_val2 = (unsigned long int)8537;
  new_w.AO_val1 = (unsigned long int)4116;
  new_w.AO_val2 = (unsigned long int)2121;
  signed int return_value_AO_double_compare_and_swap_full$42;
  return_value_AO_double_compare_and_swap_full$42=AO_double_compare_and_swap_full(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_full$42 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2090);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2091);
    exit(1);
  }

  old_w.AO_val1 = old_w.AO_val2;
  old_w.AO_val2 = (unsigned long int)6410;
  new_w.AO_val1 = (unsigned long int)1;
  signed int return_value_AO_double_compare_and_swap_full$43;
  return_value_AO_double_compare_and_swap_full$43=AO_double_compare_and_swap_full(&w, old_w, new_w);
  if(return_value_AO_double_compare_and_swap_full$43 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2095);
    exit(1);
  }

  if(!(w.AO_val1 == 1ul) || !(w.AO_val2 == 2121ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2096);
    exit(1);
  }

  old_w.AO_val1 = new_w.AO_val1;
  old_w.AO_val2 = w.AO_val2;
  new_w.AO_val1 = new_w.AO_val1 - 1ul;
  new_w.AO_val2 = (unsigned long int)0;
  signed int return_value_AO_double_compare_and_swap_full$44;
  return_value_AO_double_compare_and_swap_full$44=AO_double_compare_and_swap_full(&w, old_w, new_w);
  if(return_value_AO_double_compare_and_swap_full$44 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2101);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _full)\n", (const void *)"test_atomic_include.h", 2102);
    exit(1);
  }

}

// test_atomic_read
// file test_atomic_include.h line 1072
void test_atomic_read(void)
{
  unsigned long int x;
  unsigned char b;
  unsigned short int s;
  unsigned int zz;
  unsigned long int z = (unsigned long int)AO_TS_clear;
  struct anonymous old_w;
  struct anonymous new_w;
  struct anonymous w;
  w.AO_val1 = (unsigned long int)0;
  w.AO_val2 = (unsigned long int)0;
  AO_nop_full();
  x = (unsigned long int)13;
  unsigned long int return_value_AO_load_full$1;
  return_value_AO_load_full$1=AO_load_full(&x);
  if(!(return_value_AO_load_full$1 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1114);
    exit(1);
  }

  AO_store_full((unsigned long int *)&z, (unsigned long int)AO_TS_clear);
  unsigned long int return_value_AO_fetch_and_add_full$2;
  return_value_AO_fetch_and_add_full$2=AO_fetch_and_add_full(&x, (unsigned long int)42);
  if(!(return_value_AO_fetch_and_add_full$2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1130);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add_full$3;
  return_value_AO_fetch_and_add_full$3=AO_fetch_and_add_full(&x, (unsigned long int)-42);
  if(!(return_value_AO_fetch_and_add_full$3 == 55ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1131);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add_full$4;
  return_value_AO_fetch_and_add_full$4=AO_fetch_and_add_full(&x, (unsigned long int)1);
  if(!(return_value_AO_fetch_and_add_full$4 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1136);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add_full$5;
  return_value_AO_fetch_and_add_full$5=AO_fetch_and_add_full(&x, (unsigned long int)-1);
  if(!(return_value_AO_fetch_and_add_full$5 == 14ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1142);
    exit(1);
  }

  s = (unsigned short int)13;
  unsigned short int return_value_AO_short_load_full$6;
  return_value_AO_short_load_full$6=AO_short_load_full(&s);
  if(!((signed int)return_value_AO_short_load_full$6 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1159);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_full$7;
  return_value_AO_short_fetch_and_add_full$7=AO_short_fetch_and_add_full(&s, (unsigned short int)42);
  if(!((signed int)return_value_AO_short_fetch_and_add_full$7 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1168);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_full$8;
  return_value_AO_short_fetch_and_add_full$8=AO_short_fetch_and_add_full(&s, (unsigned short int)-42);
  if(!((signed int)return_value_AO_short_fetch_and_add_full$8 == 55))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1169);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_full$9;
  return_value_AO_short_fetch_and_add_full$9=AO_short_fetch_and_add_full(&s, (unsigned short int)1);
  if(!((signed int)return_value_AO_short_fetch_and_add_full$9 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1174);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_full$10;
  return_value_AO_short_fetch_and_add_full$10=AO_short_fetch_and_add_full(&s, (unsigned short int)-1);
  if(!((signed int)return_value_AO_short_fetch_and_add_full$10 == 14))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1180);
    exit(1);
  }

  b = (unsigned char)13;
  unsigned char return_value_AO_char_load_full$11;
  return_value_AO_char_load_full$11=AO_char_load_full(&b);
  if(!((signed int)return_value_AO_char_load_full$11 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1197);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_full$12;
  return_value_AO_char_fetch_and_add_full$12=AO_char_fetch_and_add_full(&b, (unsigned char)42);
  if(!((signed int)return_value_AO_char_fetch_and_add_full$12 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1205);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_full$13;
  return_value_AO_char_fetch_and_add_full$13=AO_char_fetch_and_add_full(&b, (unsigned char)-42);
  if(!((signed int)return_value_AO_char_fetch_and_add_full$13 == 55))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1206);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_full$14;
  return_value_AO_char_fetch_and_add_full$14=AO_char_fetch_and_add_full(&b, (unsigned char)1);
  if(!((signed int)return_value_AO_char_fetch_and_add_full$14 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1211);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_full$15;
  return_value_AO_char_fetch_and_add_full$15=AO_char_fetch_and_add_full(&b, (unsigned char)-1);
  if(!((signed int)return_value_AO_char_fetch_and_add_full$15 == 14))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1217);
    exit(1);
  }

  zz = (unsigned int)13;
  unsigned int return_value_AO_int_load_full$16;
  return_value_AO_int_load_full$16=AO_int_load_full(&zz);
  if(!(return_value_AO_int_load_full$16 == 13u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1234);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_full$17;
  return_value_AO_int_fetch_and_add_full$17=AO_int_fetch_and_add_full(&zz, (unsigned int)42);
  if(!(return_value_AO_int_fetch_and_add_full$17 == 13u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1242);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_full$18;
  return_value_AO_int_fetch_and_add_full$18=AO_int_fetch_and_add_full(&zz, (unsigned int)-42);
  if(!(return_value_AO_int_fetch_and_add_full$18 == 55u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1243);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_full$19;
  return_value_AO_int_fetch_and_add_full$19=AO_int_fetch_and_add_full(&zz, (unsigned int)1);
  if(!(return_value_AO_int_fetch_and_add_full$19 == 13u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1248);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_full$20;
  return_value_AO_int_fetch_and_add_full$20=AO_int_fetch_and_add_full(&zz, (unsigned int)-1);
  if(!(return_value_AO_int_fetch_and_add_full$20 == 14u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1254);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_read$21;
  return_value_AO_compare_and_swap_read$21=AO_compare_and_swap_read(&x, (unsigned long int)14, (unsigned long int)42);
  if(!(return_value_AO_compare_and_swap_read$21 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1260);
    exit(1);
  }

  if(!(x == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1261);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_read$22;
  return_value_AO_compare_and_swap_read$22=AO_compare_and_swap_read(&x, (unsigned long int)13, (unsigned long int)42);
  if(return_value_AO_compare_and_swap_read$22 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1262);
    exit(1);
  }

  if(!(x == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1263);
    exit(1);
  }

  AO_or_full(&x, (unsigned long int)66);
  if(!(x == 106ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1270);
    exit(1);
  }

  AO_xor_full(&x, (unsigned long int)181);
  if(!(x == 223ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1277);
    exit(1);
  }

  AO_and_full(&x, (unsigned long int)57);
  if(!(x == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1284);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_compare_and_swap_full$23;
  return_value_AO_fetch_compare_and_swap_full$23=AO_fetch_compare_and_swap_full(&x, (unsigned long int)14, (unsigned long int)117);
  if(!(return_value_AO_fetch_compare_and_swap_full$23 == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1290);
    exit(1);
  }

  if(!(x == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1291);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_compare_and_swap_full$24;
  return_value_AO_fetch_compare_and_swap_full$24=AO_fetch_compare_and_swap_full(&x, (unsigned long int)25, (unsigned long int)117);
  if(!(return_value_AO_fetch_compare_and_swap_full$24 == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1292);
    exit(1);
  }

  if(!(x == 117ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1293);
    exit(1);
  }

  old_w.AO_val1 = (unsigned long int)3316;
  old_w.AO_val2 = (unsigned long int)2921;
  new_w=AO_double_load_full(&old_w);
  if(!(new_w.AO_val1 == 3316ul) || !(new_w.AO_val2 == 2921ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1302);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$25;
  return_value_AO_compare_double_and_swap_double_full$25=AO_compare_double_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)42, (unsigned long int)12, (unsigned long int)13);
  if(!(return_value_AO_compare_double_and_swap_double_full$25 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1330);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1331);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$26;
  return_value_AO_compare_double_and_swap_double_full$26=AO_compare_double_and_swap_double_full(&w, (unsigned long int)0, (unsigned long int)0, (unsigned long int)12, (unsigned long int)13);
  if(return_value_AO_compare_double_and_swap_double_full$26 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1332);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1333);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$27;
  return_value_AO_compare_double_and_swap_double_full$27=AO_compare_double_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)14, (unsigned long int)64, (unsigned long int)33);
  if(!(return_value_AO_compare_double_and_swap_double_full$27 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1334);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1335);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$28;
  return_value_AO_compare_double_and_swap_double_full$28=AO_compare_double_and_swap_double_full(&w, (unsigned long int)11, (unsigned long int)13, (unsigned long int)85, (unsigned long int)82);
  if(!(return_value_AO_compare_double_and_swap_double_full$28 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1336);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1337);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$29;
  return_value_AO_compare_double_and_swap_double_full$29=AO_compare_double_and_swap_double_full(&w, (unsigned long int)13, (unsigned long int)12, (unsigned long int)17, (unsigned long int)42);
  if(!(return_value_AO_compare_double_and_swap_double_full$29 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1338);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1339);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$30;
  return_value_AO_compare_double_and_swap_double_full$30=AO_compare_double_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)13, (unsigned long int)17, (unsigned long int)42);
  if(return_value_AO_compare_double_and_swap_double_full$30 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1340);
    exit(1);
  }

  if(!(w.AO_val1 == 17ul) || !(w.AO_val2 == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1341);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$31;
  return_value_AO_compare_double_and_swap_double_full$31=AO_compare_double_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)42, (unsigned long int)0, (unsigned long int)0);
  if(return_value_AO_compare_double_and_swap_double_full$31 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1342);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1343);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$32;
  return_value_AO_compare_and_swap_double_full$32=AO_compare_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)12, (unsigned long int)13);
  if(!(return_value_AO_compare_and_swap_double_full$32 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1348);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1349);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$33;
  return_value_AO_compare_and_swap_double_full$33=AO_compare_and_swap_double_full(&w, (unsigned long int)0, (unsigned long int)12, (unsigned long int)13);
  if(return_value_AO_compare_and_swap_double_full$33 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1350);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1351);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$34;
  return_value_AO_compare_and_swap_double_full$34=AO_compare_and_swap_double_full(&w, (unsigned long int)13, (unsigned long int)12, (unsigned long int)33);
  if(!(return_value_AO_compare_and_swap_double_full$34 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1352);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1353);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$35;
  return_value_AO_compare_and_swap_double_full$35=AO_compare_and_swap_double_full(&w, (unsigned long int)1213, (unsigned long int)48, (unsigned long int)86);
  if(!(return_value_AO_compare_and_swap_double_full$35 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1354);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1355);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$36;
  return_value_AO_compare_and_swap_double_full$36=AO_compare_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)17, (unsigned long int)42);
  if(return_value_AO_compare_and_swap_double_full$36 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1356);
    exit(1);
  }

  if(!(w.AO_val1 == 17ul) || !(w.AO_val2 == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1357);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$37;
  return_value_AO_compare_and_swap_double_full$37=AO_compare_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)0, (unsigned long int)0);
  if(return_value_AO_compare_and_swap_double_full$37 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1358);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1359);
    exit(1);
  }

  old_w.AO_val1 = (unsigned long int)4116;
  old_w.AO_val2 = (unsigned long int)2121;
  new_w.AO_val1 = (unsigned long int)8537;
  new_w.AO_val2 = (unsigned long int)6410;
  signed int return_value_AO_double_compare_and_swap_read$38;
  return_value_AO_double_compare_and_swap_read$38=AO_double_compare_and_swap_read(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_read$38 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1368);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1369);
    exit(1);
  }

  signed int return_value_AO_double_compare_and_swap_read$39;
  return_value_AO_double_compare_and_swap_read$39=AO_double_compare_and_swap_read(&w, w, new_w);
  if(return_value_AO_double_compare_and_swap_read$39 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1370);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1371);
    exit(1);
  }

  old_w.AO_val1 = new_w.AO_val1;
  old_w.AO_val2 = (unsigned long int)29;
  new_w.AO_val1 = (unsigned long int)820;
  new_w.AO_val2 = (unsigned long int)5917;
  signed int return_value_AO_double_compare_and_swap_read$40;
  return_value_AO_double_compare_and_swap_read$40=AO_double_compare_and_swap_read(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_read$40 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1376);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1377);
    exit(1);
  }

  old_w.AO_val1 = (unsigned long int)11;
  old_w.AO_val2 = (unsigned long int)6410;
  new_w.AO_val1 = (unsigned long int)3552;
  new_w.AO_val2 = (unsigned long int)1746;
  signed int return_value_AO_double_compare_and_swap_read$41;
  return_value_AO_double_compare_and_swap_read$41=AO_double_compare_and_swap_read(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_read$41 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1382);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1383);
    exit(1);
  }

  old_w.AO_val1 = old_w.AO_val2;
  old_w.AO_val2 = (unsigned long int)8537;
  new_w.AO_val1 = (unsigned long int)4116;
  new_w.AO_val2 = (unsigned long int)2121;
  signed int return_value_AO_double_compare_and_swap_read$42;
  return_value_AO_double_compare_and_swap_read$42=AO_double_compare_and_swap_read(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_read$42 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1388);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1389);
    exit(1);
  }

  old_w.AO_val1 = old_w.AO_val2;
  old_w.AO_val2 = (unsigned long int)6410;
  new_w.AO_val1 = (unsigned long int)1;
  signed int return_value_AO_double_compare_and_swap_read$43;
  return_value_AO_double_compare_and_swap_read$43=AO_double_compare_and_swap_read(&w, old_w, new_w);
  if(return_value_AO_double_compare_and_swap_read$43 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1393);
    exit(1);
  }

  if(!(w.AO_val1 == 1ul) || !(w.AO_val2 == 2121ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1394);
    exit(1);
  }

  old_w.AO_val1 = new_w.AO_val1;
  old_w.AO_val2 = w.AO_val2;
  new_w.AO_val1 = new_w.AO_val1 - 1ul;
  new_w.AO_val2 = (unsigned long int)0;
  signed int return_value_AO_double_compare_and_swap_read$44;
  return_value_AO_double_compare_and_swap_read$44=AO_double_compare_and_swap_read(&w, old_w, new_w);
  if(return_value_AO_double_compare_and_swap_read$44 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1399);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _read)\n", (const void *)"test_atomic_include.h", 1400);
    exit(1);
  }

}

// test_atomic_release
// file test_atomic_include.h line 370
void test_atomic_release(void)
{
  unsigned long int x;
  unsigned char b;
  unsigned short int s;
  unsigned int zz;
  unsigned long int z = (unsigned long int)AO_TS_clear;
  struct anonymous old_w;
  struct anonymous new_w;
  struct anonymous w;
  w.AO_val1 = (unsigned long int)0;
  w.AO_val2 = (unsigned long int)0;
  AO_store_full(&x, (unsigned long int)13);
  if(!(x == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 401);
    exit(1);
  }

  AO_store_full((unsigned long int *)&z, (unsigned long int)AO_TS_clear);
  unsigned long int return_value_AO_fetch_and_add_release$1;
  return_value_AO_fetch_and_add_release$1=AO_fetch_and_add_release(&x, (unsigned long int)42);
  if(!(return_value_AO_fetch_and_add_release$1 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 428);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add_release$2;
  return_value_AO_fetch_and_add_release$2=AO_fetch_and_add_release(&x, (unsigned long int)-42);
  if(!(return_value_AO_fetch_and_add_release$2 == 55ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 429);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add_release$3;
  return_value_AO_fetch_and_add_release$3=AO_fetch_and_add_release(&x, (unsigned long int)1);
  if(!(return_value_AO_fetch_and_add_release$3 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 434);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add_release$4;
  return_value_AO_fetch_and_add_release$4=AO_fetch_and_add_release(&x, (unsigned long int)-1);
  if(!(return_value_AO_fetch_and_add_release$4 == 14ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 440);
    exit(1);
  }

  AO_short_store_full(&s, (unsigned short int)13);
  unsigned short int return_value_AO_short_fetch_and_add_release$5;
  return_value_AO_short_fetch_and_add_release$5=AO_short_fetch_and_add_release(&s, (unsigned short int)42);
  if(!((signed int)return_value_AO_short_fetch_and_add_release$5 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 466);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_release$6;
  return_value_AO_short_fetch_and_add_release$6=AO_short_fetch_and_add_release(&s, (unsigned short int)-42);
  if(!((signed int)return_value_AO_short_fetch_and_add_release$6 == 55))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 467);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_release$7;
  return_value_AO_short_fetch_and_add_release$7=AO_short_fetch_and_add_release(&s, (unsigned short int)1);
  if(!((signed int)return_value_AO_short_fetch_and_add_release$7 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 472);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_release$8;
  return_value_AO_short_fetch_and_add_release$8=AO_short_fetch_and_add_release(&s, (unsigned short int)-1);
  if(!((signed int)return_value_AO_short_fetch_and_add_release$8 == 14))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 478);
    exit(1);
  }

  AO_char_store_full(&b, (unsigned char)13);
  unsigned char return_value_AO_char_fetch_and_add_release$9;
  return_value_AO_char_fetch_and_add_release$9=AO_char_fetch_and_add_release(&b, (unsigned char)42);
  if(!((signed int)return_value_AO_char_fetch_and_add_release$9 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 503);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_release$10;
  return_value_AO_char_fetch_and_add_release$10=AO_char_fetch_and_add_release(&b, (unsigned char)-42);
  if(!((signed int)return_value_AO_char_fetch_and_add_release$10 == 55))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 504);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_release$11;
  return_value_AO_char_fetch_and_add_release$11=AO_char_fetch_and_add_release(&b, (unsigned char)1);
  if(!((signed int)return_value_AO_char_fetch_and_add_release$11 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 509);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_release$12;
  return_value_AO_char_fetch_and_add_release$12=AO_char_fetch_and_add_release(&b, (unsigned char)-1);
  if(!((signed int)return_value_AO_char_fetch_and_add_release$12 == 14))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 515);
    exit(1);
  }

  AO_int_store_full(&zz, (unsigned int)13);
  unsigned int return_value_AO_int_fetch_and_add_release$13;
  return_value_AO_int_fetch_and_add_release$13=AO_int_fetch_and_add_release(&zz, (unsigned int)42);
  if(!(return_value_AO_int_fetch_and_add_release$13 == 13u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 540);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_release$14;
  return_value_AO_int_fetch_and_add_release$14=AO_int_fetch_and_add_release(&zz, (unsigned int)-42);
  if(!(return_value_AO_int_fetch_and_add_release$14 == 55u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 541);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_release$15;
  return_value_AO_int_fetch_and_add_release$15=AO_int_fetch_and_add_release(&zz, (unsigned int)1);
  if(!(return_value_AO_int_fetch_and_add_release$15 == 13u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 546);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_release$16;
  return_value_AO_int_fetch_and_add_release$16=AO_int_fetch_and_add_release(&zz, (unsigned int)-1);
  if(!(return_value_AO_int_fetch_and_add_release$16 == 14u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 552);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_release$17;
  return_value_AO_compare_and_swap_release$17=AO_compare_and_swap_release(&x, (unsigned long int)14, (unsigned long int)42);
  if(!(return_value_AO_compare_and_swap_release$17 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 558);
    exit(1);
  }

  if(!(x == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 559);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_release$18;
  return_value_AO_compare_and_swap_release$18=AO_compare_and_swap_release(&x, (unsigned long int)13, (unsigned long int)42);
  if(return_value_AO_compare_and_swap_release$18 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 560);
    exit(1);
  }

  if(!(x == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 561);
    exit(1);
  }

  AO_or_full(&x, (unsigned long int)66);
  if(!(x == 106ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 568);
    exit(1);
  }

  AO_xor_full(&x, (unsigned long int)181);
  if(!(x == 223ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 575);
    exit(1);
  }

  AO_and_full(&x, (unsigned long int)57);
  if(!(x == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 582);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_compare_and_swap_full$19;
  return_value_AO_fetch_compare_and_swap_full$19=AO_fetch_compare_and_swap_full(&x, (unsigned long int)14, (unsigned long int)117);
  if(!(return_value_AO_fetch_compare_and_swap_full$19 == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 588);
    exit(1);
  }

  if(!(x == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 589);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_compare_and_swap_full$20;
  return_value_AO_fetch_compare_and_swap_full$20=AO_fetch_compare_and_swap_full(&x, (unsigned long int)25, (unsigned long int)117);
  if(!(return_value_AO_fetch_compare_and_swap_full$20 == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 590);
    exit(1);
  }

  if(!(x == 117ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 591);
    exit(1);
  }

  new_w.AO_val1 = (unsigned long int)1375;
  new_w.AO_val2 = (unsigned long int)8243;
  AO_double_store_full(&old_w, new_w);
  if(!(old_w.AO_val1 == 1375ul) || !(old_w.AO_val2 == 8243ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 613);
    exit(1);
  }

  AO_double_store_full(&old_w, new_w);
  if(!(old_w.AO_val1 == 1375ul) || !(old_w.AO_val2 == 8243ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 615);
    exit(1);
  }

  new_w.AO_val1 = new_w.AO_val1 ^ old_w.AO_val1;
  new_w.AO_val2 = new_w.AO_val2 ^ old_w.AO_val2;
  AO_double_store_full(&old_w, new_w);
  if(!(old_w.AO_val1 == 0ul) || !(old_w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 619);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$21;
  return_value_AO_compare_double_and_swap_double_full$21=AO_compare_double_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)42, (unsigned long int)12, (unsigned long int)13);
  if(!(return_value_AO_compare_double_and_swap_double_full$21 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 628);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 629);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$22;
  return_value_AO_compare_double_and_swap_double_full$22=AO_compare_double_and_swap_double_full(&w, (unsigned long int)0, (unsigned long int)0, (unsigned long int)12, (unsigned long int)13);
  if(return_value_AO_compare_double_and_swap_double_full$22 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 630);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 631);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$23;
  return_value_AO_compare_double_and_swap_double_full$23=AO_compare_double_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)14, (unsigned long int)64, (unsigned long int)33);
  if(!(return_value_AO_compare_double_and_swap_double_full$23 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 632);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 633);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$24;
  return_value_AO_compare_double_and_swap_double_full$24=AO_compare_double_and_swap_double_full(&w, (unsigned long int)11, (unsigned long int)13, (unsigned long int)85, (unsigned long int)82);
  if(!(return_value_AO_compare_double_and_swap_double_full$24 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 634);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 635);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$25;
  return_value_AO_compare_double_and_swap_double_full$25=AO_compare_double_and_swap_double_full(&w, (unsigned long int)13, (unsigned long int)12, (unsigned long int)17, (unsigned long int)42);
  if(!(return_value_AO_compare_double_and_swap_double_full$25 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 636);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 637);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$26;
  return_value_AO_compare_double_and_swap_double_full$26=AO_compare_double_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)13, (unsigned long int)17, (unsigned long int)42);
  if(return_value_AO_compare_double_and_swap_double_full$26 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 638);
    exit(1);
  }

  if(!(w.AO_val1 == 17ul) || !(w.AO_val2 == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 639);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$27;
  return_value_AO_compare_double_and_swap_double_full$27=AO_compare_double_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)42, (unsigned long int)0, (unsigned long int)0);
  if(return_value_AO_compare_double_and_swap_double_full$27 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 640);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 641);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$28;
  return_value_AO_compare_and_swap_double_full$28=AO_compare_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)12, (unsigned long int)13);
  if(!(return_value_AO_compare_and_swap_double_full$28 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 646);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 647);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$29;
  return_value_AO_compare_and_swap_double_full$29=AO_compare_and_swap_double_full(&w, (unsigned long int)0, (unsigned long int)12, (unsigned long int)13);
  if(return_value_AO_compare_and_swap_double_full$29 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 648);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 649);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$30;
  return_value_AO_compare_and_swap_double_full$30=AO_compare_and_swap_double_full(&w, (unsigned long int)13, (unsigned long int)12, (unsigned long int)33);
  if(!(return_value_AO_compare_and_swap_double_full$30 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 650);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 651);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$31;
  return_value_AO_compare_and_swap_double_full$31=AO_compare_and_swap_double_full(&w, (unsigned long int)1213, (unsigned long int)48, (unsigned long int)86);
  if(!(return_value_AO_compare_and_swap_double_full$31 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 652);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 653);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$32;
  return_value_AO_compare_and_swap_double_full$32=AO_compare_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)17, (unsigned long int)42);
  if(return_value_AO_compare_and_swap_double_full$32 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 654);
    exit(1);
  }

  if(!(w.AO_val1 == 17ul) || !(w.AO_val2 == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 655);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$33;
  return_value_AO_compare_and_swap_double_full$33=AO_compare_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)0, (unsigned long int)0);
  if(return_value_AO_compare_and_swap_double_full$33 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 656);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 657);
    exit(1);
  }

  old_w.AO_val1 = (unsigned long int)4116;
  old_w.AO_val2 = (unsigned long int)2121;
  new_w.AO_val1 = (unsigned long int)8537;
  new_w.AO_val2 = (unsigned long int)6410;
  signed int return_value_AO_double_compare_and_swap_release$34;
  return_value_AO_double_compare_and_swap_release$34=AO_double_compare_and_swap_release(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_release$34 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 666);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 667);
    exit(1);
  }

  signed int return_value_AO_double_compare_and_swap_release$35;
  return_value_AO_double_compare_and_swap_release$35=AO_double_compare_and_swap_release(&w, w, new_w);
  if(return_value_AO_double_compare_and_swap_release$35 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 668);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 669);
    exit(1);
  }

  old_w.AO_val1 = new_w.AO_val1;
  old_w.AO_val2 = (unsigned long int)29;
  new_w.AO_val1 = (unsigned long int)820;
  new_w.AO_val2 = (unsigned long int)5917;
  signed int return_value_AO_double_compare_and_swap_release$36;
  return_value_AO_double_compare_and_swap_release$36=AO_double_compare_and_swap_release(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_release$36 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 674);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 675);
    exit(1);
  }

  old_w.AO_val1 = (unsigned long int)11;
  old_w.AO_val2 = (unsigned long int)6410;
  new_w.AO_val1 = (unsigned long int)3552;
  new_w.AO_val2 = (unsigned long int)1746;
  signed int return_value_AO_double_compare_and_swap_release$37;
  return_value_AO_double_compare_and_swap_release$37=AO_double_compare_and_swap_release(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_release$37 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 680);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 681);
    exit(1);
  }

  old_w.AO_val1 = old_w.AO_val2;
  old_w.AO_val2 = (unsigned long int)8537;
  new_w.AO_val1 = (unsigned long int)4116;
  new_w.AO_val2 = (unsigned long int)2121;
  signed int return_value_AO_double_compare_and_swap_release$38;
  return_value_AO_double_compare_and_swap_release$38=AO_double_compare_and_swap_release(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_release$38 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 686);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 687);
    exit(1);
  }

  old_w.AO_val1 = old_w.AO_val2;
  old_w.AO_val2 = (unsigned long int)6410;
  new_w.AO_val1 = (unsigned long int)1;
  signed int return_value_AO_double_compare_and_swap_release$39;
  return_value_AO_double_compare_and_swap_release$39=AO_double_compare_and_swap_release(&w, old_w, new_w);
  if(return_value_AO_double_compare_and_swap_release$39 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 691);
    exit(1);
  }

  if(!(w.AO_val1 == 1ul) || !(w.AO_val2 == 2121ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 692);
    exit(1);
  }

  old_w.AO_val1 = new_w.AO_val1;
  old_w.AO_val2 = w.AO_val2;
  new_w.AO_val1 = new_w.AO_val1 - 1ul;
  new_w.AO_val2 = (unsigned long int)0;
  signed int return_value_AO_double_compare_and_swap_release$40;
  return_value_AO_double_compare_and_swap_release$40=AO_double_compare_and_swap_release(&w, old_w, new_w);
  if(return_value_AO_double_compare_and_swap_release$40 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 697);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release)\n", (const void *)"test_atomic_include.h", 698);
    exit(1);
  }

}

// test_atomic_release_write
// file test_atomic_include.h line 2125
void test_atomic_release_write(void)
{
  unsigned long int x;
  unsigned char b;
  unsigned short int s;
  unsigned int zz;
  unsigned long int z = (unsigned long int)AO_TS_clear;
  struct anonymous old_w;
  struct anonymous new_w;
  struct anonymous w;
  w.AO_val1 = (unsigned long int)0;
  w.AO_val2 = (unsigned long int)0;
  AO_store_full(&x, (unsigned long int)13);
  if(!(x == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2156);
    exit(1);
  }

  AO_store_full((unsigned long int *)&z, (unsigned long int)AO_TS_clear);
  unsigned long int return_value_AO_fetch_and_add_full$1;
  return_value_AO_fetch_and_add_full$1=AO_fetch_and_add_full(&x, (unsigned long int)42);
  if(!(return_value_AO_fetch_and_add_full$1 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2183);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add_full$2;
  return_value_AO_fetch_and_add_full$2=AO_fetch_and_add_full(&x, (unsigned long int)-42);
  if(!(return_value_AO_fetch_and_add_full$2 == 55ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2184);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add_full$3;
  return_value_AO_fetch_and_add_full$3=AO_fetch_and_add_full(&x, (unsigned long int)1);
  if(!(return_value_AO_fetch_and_add_full$3 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2189);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add_full$4;
  return_value_AO_fetch_and_add_full$4=AO_fetch_and_add_full(&x, (unsigned long int)-1);
  if(!(return_value_AO_fetch_and_add_full$4 == 14ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2195);
    exit(1);
  }

  AO_short_store_full(&s, (unsigned short int)13);
  unsigned short int return_value_AO_short_fetch_and_add_full$5;
  return_value_AO_short_fetch_and_add_full$5=AO_short_fetch_and_add_full(&s, (unsigned short int)42);
  if(!((signed int)return_value_AO_short_fetch_and_add_full$5 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2221);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_full$6;
  return_value_AO_short_fetch_and_add_full$6=AO_short_fetch_and_add_full(&s, (unsigned short int)-42);
  if(!((signed int)return_value_AO_short_fetch_and_add_full$6 == 55))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2222);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_full$7;
  return_value_AO_short_fetch_and_add_full$7=AO_short_fetch_and_add_full(&s, (unsigned short int)1);
  if(!((signed int)return_value_AO_short_fetch_and_add_full$7 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2227);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_full$8;
  return_value_AO_short_fetch_and_add_full$8=AO_short_fetch_and_add_full(&s, (unsigned short int)-1);
  if(!((signed int)return_value_AO_short_fetch_and_add_full$8 == 14))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2233);
    exit(1);
  }

  AO_char_store_full(&b, (unsigned char)13);
  unsigned char return_value_AO_char_fetch_and_add_full$9;
  return_value_AO_char_fetch_and_add_full$9=AO_char_fetch_and_add_full(&b, (unsigned char)42);
  if(!((signed int)return_value_AO_char_fetch_and_add_full$9 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2258);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_full$10;
  return_value_AO_char_fetch_and_add_full$10=AO_char_fetch_and_add_full(&b, (unsigned char)-42);
  if(!((signed int)return_value_AO_char_fetch_and_add_full$10 == 55))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2259);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_full$11;
  return_value_AO_char_fetch_and_add_full$11=AO_char_fetch_and_add_full(&b, (unsigned char)1);
  if(!((signed int)return_value_AO_char_fetch_and_add_full$11 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2264);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_full$12;
  return_value_AO_char_fetch_and_add_full$12=AO_char_fetch_and_add_full(&b, (unsigned char)-1);
  if(!((signed int)return_value_AO_char_fetch_and_add_full$12 == 14))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2270);
    exit(1);
  }

  AO_int_store_full(&zz, (unsigned int)13);
  unsigned int return_value_AO_int_fetch_and_add_full$13;
  return_value_AO_int_fetch_and_add_full$13=AO_int_fetch_and_add_full(&zz, (unsigned int)42);
  if(!(return_value_AO_int_fetch_and_add_full$13 == 13u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2295);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_full$14;
  return_value_AO_int_fetch_and_add_full$14=AO_int_fetch_and_add_full(&zz, (unsigned int)-42);
  if(!(return_value_AO_int_fetch_and_add_full$14 == 55u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2296);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_full$15;
  return_value_AO_int_fetch_and_add_full$15=AO_int_fetch_and_add_full(&zz, (unsigned int)1);
  if(!(return_value_AO_int_fetch_and_add_full$15 == 13u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2301);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_full$16;
  return_value_AO_int_fetch_and_add_full$16=AO_int_fetch_and_add_full(&zz, (unsigned int)-1);
  if(!(return_value_AO_int_fetch_and_add_full$16 == 14u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2307);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_release_write$17;
  return_value_AO_compare_and_swap_release_write$17=AO_compare_and_swap_release_write(&x, (unsigned long int)14, (unsigned long int)42);
  if(!(return_value_AO_compare_and_swap_release_write$17 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2313);
    exit(1);
  }

  if(!(x == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2314);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_release_write$18;
  return_value_AO_compare_and_swap_release_write$18=AO_compare_and_swap_release_write(&x, (unsigned long int)13, (unsigned long int)42);
  if(return_value_AO_compare_and_swap_release_write$18 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2315);
    exit(1);
  }

  if(!(x == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2316);
    exit(1);
  }

  AO_or_full(&x, (unsigned long int)66);
  if(!(x == 106ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2323);
    exit(1);
  }

  AO_xor_full(&x, (unsigned long int)181);
  if(!(x == 223ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2330);
    exit(1);
  }

  AO_and_full(&x, (unsigned long int)57);
  if(!(x == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2337);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_compare_and_swap_full$19;
  return_value_AO_fetch_compare_and_swap_full$19=AO_fetch_compare_and_swap_full(&x, (unsigned long int)14, (unsigned long int)117);
  if(!(return_value_AO_fetch_compare_and_swap_full$19 == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2343);
    exit(1);
  }

  if(!(x == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2344);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_compare_and_swap_full$20;
  return_value_AO_fetch_compare_and_swap_full$20=AO_fetch_compare_and_swap_full(&x, (unsigned long int)25, (unsigned long int)117);
  if(!(return_value_AO_fetch_compare_and_swap_full$20 == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2345);
    exit(1);
  }

  if(!(x == 117ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2346);
    exit(1);
  }

  new_w.AO_val1 = (unsigned long int)1375;
  new_w.AO_val2 = (unsigned long int)8243;
  AO_double_store_full(&old_w, new_w);
  if(!(old_w.AO_val1 == 1375ul) || !(old_w.AO_val2 == 8243ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2368);
    exit(1);
  }

  AO_double_store_full(&old_w, new_w);
  if(!(old_w.AO_val1 == 1375ul) || !(old_w.AO_val2 == 8243ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2370);
    exit(1);
  }

  new_w.AO_val1 = new_w.AO_val1 ^ old_w.AO_val1;
  new_w.AO_val2 = new_w.AO_val2 ^ old_w.AO_val2;
  AO_double_store_full(&old_w, new_w);
  if(!(old_w.AO_val1 == 0ul) || !(old_w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2374);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$21;
  return_value_AO_compare_double_and_swap_double_full$21=AO_compare_double_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)42, (unsigned long int)12, (unsigned long int)13);
  if(!(return_value_AO_compare_double_and_swap_double_full$21 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2383);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2384);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$22;
  return_value_AO_compare_double_and_swap_double_full$22=AO_compare_double_and_swap_double_full(&w, (unsigned long int)0, (unsigned long int)0, (unsigned long int)12, (unsigned long int)13);
  if(return_value_AO_compare_double_and_swap_double_full$22 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2385);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2386);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$23;
  return_value_AO_compare_double_and_swap_double_full$23=AO_compare_double_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)14, (unsigned long int)64, (unsigned long int)33);
  if(!(return_value_AO_compare_double_and_swap_double_full$23 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2387);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2388);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$24;
  return_value_AO_compare_double_and_swap_double_full$24=AO_compare_double_and_swap_double_full(&w, (unsigned long int)11, (unsigned long int)13, (unsigned long int)85, (unsigned long int)82);
  if(!(return_value_AO_compare_double_and_swap_double_full$24 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2389);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2390);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$25;
  return_value_AO_compare_double_and_swap_double_full$25=AO_compare_double_and_swap_double_full(&w, (unsigned long int)13, (unsigned long int)12, (unsigned long int)17, (unsigned long int)42);
  if(!(return_value_AO_compare_double_and_swap_double_full$25 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2391);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2392);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$26;
  return_value_AO_compare_double_and_swap_double_full$26=AO_compare_double_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)13, (unsigned long int)17, (unsigned long int)42);
  if(return_value_AO_compare_double_and_swap_double_full$26 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2393);
    exit(1);
  }

  if(!(w.AO_val1 == 17ul) || !(w.AO_val2 == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2394);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$27;
  return_value_AO_compare_double_and_swap_double_full$27=AO_compare_double_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)42, (unsigned long int)0, (unsigned long int)0);
  if(return_value_AO_compare_double_and_swap_double_full$27 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2395);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2396);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$28;
  return_value_AO_compare_and_swap_double_full$28=AO_compare_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)12, (unsigned long int)13);
  if(!(return_value_AO_compare_and_swap_double_full$28 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2401);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2402);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$29;
  return_value_AO_compare_and_swap_double_full$29=AO_compare_and_swap_double_full(&w, (unsigned long int)0, (unsigned long int)12, (unsigned long int)13);
  if(return_value_AO_compare_and_swap_double_full$29 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2403);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2404);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$30;
  return_value_AO_compare_and_swap_double_full$30=AO_compare_and_swap_double_full(&w, (unsigned long int)13, (unsigned long int)12, (unsigned long int)33);
  if(!(return_value_AO_compare_and_swap_double_full$30 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2405);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2406);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$31;
  return_value_AO_compare_and_swap_double_full$31=AO_compare_and_swap_double_full(&w, (unsigned long int)1213, (unsigned long int)48, (unsigned long int)86);
  if(!(return_value_AO_compare_and_swap_double_full$31 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2407);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2408);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$32;
  return_value_AO_compare_and_swap_double_full$32=AO_compare_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)17, (unsigned long int)42);
  if(return_value_AO_compare_and_swap_double_full$32 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2409);
    exit(1);
  }

  if(!(w.AO_val1 == 17ul) || !(w.AO_val2 == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2410);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$33;
  return_value_AO_compare_and_swap_double_full$33=AO_compare_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)0, (unsigned long int)0);
  if(return_value_AO_compare_and_swap_double_full$33 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2411);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2412);
    exit(1);
  }

  old_w.AO_val1 = (unsigned long int)4116;
  old_w.AO_val2 = (unsigned long int)2121;
  new_w.AO_val1 = (unsigned long int)8537;
  new_w.AO_val2 = (unsigned long int)6410;
  signed int return_value_AO_double_compare_and_swap_release_write$34;
  return_value_AO_double_compare_and_swap_release_write$34=AO_double_compare_and_swap_release_write(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_release_write$34 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2421);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2422);
    exit(1);
  }

  signed int return_value_AO_double_compare_and_swap_release_write$35;
  return_value_AO_double_compare_and_swap_release_write$35=AO_double_compare_and_swap_release_write(&w, w, new_w);
  if(return_value_AO_double_compare_and_swap_release_write$35 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2423);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2424);
    exit(1);
  }

  old_w.AO_val1 = new_w.AO_val1;
  old_w.AO_val2 = (unsigned long int)29;
  new_w.AO_val1 = (unsigned long int)820;
  new_w.AO_val2 = (unsigned long int)5917;
  signed int return_value_AO_double_compare_and_swap_release_write$36;
  return_value_AO_double_compare_and_swap_release_write$36=AO_double_compare_and_swap_release_write(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_release_write$36 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2429);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2430);
    exit(1);
  }

  old_w.AO_val1 = (unsigned long int)11;
  old_w.AO_val2 = (unsigned long int)6410;
  new_w.AO_val1 = (unsigned long int)3552;
  new_w.AO_val2 = (unsigned long int)1746;
  signed int return_value_AO_double_compare_and_swap_release_write$37;
  return_value_AO_double_compare_and_swap_release_write$37=AO_double_compare_and_swap_release_write(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_release_write$37 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2435);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2436);
    exit(1);
  }

  old_w.AO_val1 = old_w.AO_val2;
  old_w.AO_val2 = (unsigned long int)8537;
  new_w.AO_val1 = (unsigned long int)4116;
  new_w.AO_val2 = (unsigned long int)2121;
  signed int return_value_AO_double_compare_and_swap_release_write$38;
  return_value_AO_double_compare_and_swap_release_write$38=AO_double_compare_and_swap_release_write(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_release_write$38 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2441);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2442);
    exit(1);
  }

  old_w.AO_val1 = old_w.AO_val2;
  old_w.AO_val2 = (unsigned long int)6410;
  new_w.AO_val1 = (unsigned long int)1;
  signed int return_value_AO_double_compare_and_swap_release_write$39;
  return_value_AO_double_compare_and_swap_release_write$39=AO_double_compare_and_swap_release_write(&w, old_w, new_w);
  if(return_value_AO_double_compare_and_swap_release_write$39 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2446);
    exit(1);
  }

  if(!(w.AO_val1 == 1ul) || !(w.AO_val2 == 2121ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2447);
    exit(1);
  }

  old_w.AO_val1 = new_w.AO_val1;
  old_w.AO_val2 = w.AO_val2;
  new_w.AO_val1 = new_w.AO_val1 - 1ul;
  new_w.AO_val2 = (unsigned long int)0;
  signed int return_value_AO_double_compare_and_swap_release_write$40;
  return_value_AO_double_compare_and_swap_release_write$40=AO_double_compare_and_swap_release_write(&w, old_w, new_w);
  if(return_value_AO_double_compare_and_swap_release_write$40 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2452);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _release_write)\n", (const void *)"test_atomic_include.h", 2453);
    exit(1);
  }

}

// test_atomic_write
// file test_atomic_include.h line 1423
void test_atomic_write(void)
{
  unsigned long int x;
  unsigned char b;
  unsigned short int s;
  unsigned int zz;
  unsigned long int z = (unsigned long int)AO_TS_clear;
  struct anonymous old_w;
  struct anonymous new_w;
  struct anonymous w;
  w.AO_val1 = (unsigned long int)0;
  w.AO_val2 = (unsigned long int)0;
  AO_nop_full();
  AO_store_full(&x, (unsigned long int)13);
  if(!(x == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1454);
    exit(1);
  }

  AO_store_full((unsigned long int *)&z, (unsigned long int)AO_TS_clear);
  unsigned long int return_value_AO_fetch_and_add_full$1;
  return_value_AO_fetch_and_add_full$1=AO_fetch_and_add_full(&x, (unsigned long int)42);
  if(!(return_value_AO_fetch_and_add_full$1 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1481);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add_full$2;
  return_value_AO_fetch_and_add_full$2=AO_fetch_and_add_full(&x, (unsigned long int)-42);
  if(!(return_value_AO_fetch_and_add_full$2 == 55ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1482);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add_full$3;
  return_value_AO_fetch_and_add_full$3=AO_fetch_and_add_full(&x, (unsigned long int)1);
  if(!(return_value_AO_fetch_and_add_full$3 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1487);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_and_add_full$4;
  return_value_AO_fetch_and_add_full$4=AO_fetch_and_add_full(&x, (unsigned long int)-1);
  if(!(return_value_AO_fetch_and_add_full$4 == 14ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1493);
    exit(1);
  }

  AO_short_store_full(&s, (unsigned short int)13);
  unsigned short int return_value_AO_short_fetch_and_add_full$5;
  return_value_AO_short_fetch_and_add_full$5=AO_short_fetch_and_add_full(&s, (unsigned short int)42);
  if(!((signed int)return_value_AO_short_fetch_and_add_full$5 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1519);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_full$6;
  return_value_AO_short_fetch_and_add_full$6=AO_short_fetch_and_add_full(&s, (unsigned short int)-42);
  if(!((signed int)return_value_AO_short_fetch_and_add_full$6 == 55))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1520);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_full$7;
  return_value_AO_short_fetch_and_add_full$7=AO_short_fetch_and_add_full(&s, (unsigned short int)1);
  if(!((signed int)return_value_AO_short_fetch_and_add_full$7 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1525);
    exit(1);
  }

  unsigned short int return_value_AO_short_fetch_and_add_full$8;
  return_value_AO_short_fetch_and_add_full$8=AO_short_fetch_and_add_full(&s, (unsigned short int)-1);
  if(!((signed int)return_value_AO_short_fetch_and_add_full$8 == 14))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1531);
    exit(1);
  }

  AO_char_store_full(&b, (unsigned char)13);
  unsigned char return_value_AO_char_fetch_and_add_full$9;
  return_value_AO_char_fetch_and_add_full$9=AO_char_fetch_and_add_full(&b, (unsigned char)42);
  if(!((signed int)return_value_AO_char_fetch_and_add_full$9 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1556);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_full$10;
  return_value_AO_char_fetch_and_add_full$10=AO_char_fetch_and_add_full(&b, (unsigned char)-42);
  if(!((signed int)return_value_AO_char_fetch_and_add_full$10 == 55))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1557);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_full$11;
  return_value_AO_char_fetch_and_add_full$11=AO_char_fetch_and_add_full(&b, (unsigned char)1);
  if(!((signed int)return_value_AO_char_fetch_and_add_full$11 == 13))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1562);
    exit(1);
  }

  unsigned char return_value_AO_char_fetch_and_add_full$12;
  return_value_AO_char_fetch_and_add_full$12=AO_char_fetch_and_add_full(&b, (unsigned char)-1);
  if(!((signed int)return_value_AO_char_fetch_and_add_full$12 == 14))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1568);
    exit(1);
  }

  AO_int_store_full(&zz, (unsigned int)13);
  unsigned int return_value_AO_int_fetch_and_add_full$13;
  return_value_AO_int_fetch_and_add_full$13=AO_int_fetch_and_add_full(&zz, (unsigned int)42);
  if(!(return_value_AO_int_fetch_and_add_full$13 == 13u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1593);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_full$14;
  return_value_AO_int_fetch_and_add_full$14=AO_int_fetch_and_add_full(&zz, (unsigned int)-42);
  if(!(return_value_AO_int_fetch_and_add_full$14 == 55u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1594);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_full$15;
  return_value_AO_int_fetch_and_add_full$15=AO_int_fetch_and_add_full(&zz, (unsigned int)1);
  if(!(return_value_AO_int_fetch_and_add_full$15 == 13u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1599);
    exit(1);
  }

  unsigned int return_value_AO_int_fetch_and_add_full$16;
  return_value_AO_int_fetch_and_add_full$16=AO_int_fetch_and_add_full(&zz, (unsigned int)-1);
  if(!(return_value_AO_int_fetch_and_add_full$16 == 14u))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1605);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_write$17;
  return_value_AO_compare_and_swap_write$17=AO_compare_and_swap_write(&x, (unsigned long int)14, (unsigned long int)42);
  if(!(return_value_AO_compare_and_swap_write$17 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1611);
    exit(1);
  }

  if(!(x == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1612);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_write$18;
  return_value_AO_compare_and_swap_write$18=AO_compare_and_swap_write(&x, (unsigned long int)13, (unsigned long int)42);
  if(return_value_AO_compare_and_swap_write$18 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1613);
    exit(1);
  }

  if(!(x == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1614);
    exit(1);
  }

  AO_or_full(&x, (unsigned long int)66);
  if(!(x == 106ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1621);
    exit(1);
  }

  AO_xor_full(&x, (unsigned long int)181);
  if(!(x == 223ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1628);
    exit(1);
  }

  AO_and_full(&x, (unsigned long int)57);
  if(!(x == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1635);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_compare_and_swap_full$19;
  return_value_AO_fetch_compare_and_swap_full$19=AO_fetch_compare_and_swap_full(&x, (unsigned long int)14, (unsigned long int)117);
  if(!(return_value_AO_fetch_compare_and_swap_full$19 == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1641);
    exit(1);
  }

  if(!(x == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1642);
    exit(1);
  }

  unsigned long int return_value_AO_fetch_compare_and_swap_full$20;
  return_value_AO_fetch_compare_and_swap_full$20=AO_fetch_compare_and_swap_full(&x, (unsigned long int)25, (unsigned long int)117);
  if(!(return_value_AO_fetch_compare_and_swap_full$20 == 25ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1643);
    exit(1);
  }

  if(!(x == 117ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1644);
    exit(1);
  }

  new_w.AO_val1 = (unsigned long int)1375;
  new_w.AO_val2 = (unsigned long int)8243;
  AO_double_store_full(&old_w, new_w);
  if(!(old_w.AO_val1 == 1375ul) || !(old_w.AO_val2 == 8243ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1666);
    exit(1);
  }

  AO_double_store_full(&old_w, new_w);
  if(!(old_w.AO_val1 == 1375ul) || !(old_w.AO_val2 == 8243ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1668);
    exit(1);
  }

  new_w.AO_val1 = new_w.AO_val1 ^ old_w.AO_val1;
  new_w.AO_val2 = new_w.AO_val2 ^ old_w.AO_val2;
  AO_double_store_full(&old_w, new_w);
  if(!(old_w.AO_val1 == 0ul) || !(old_w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1672);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$21;
  return_value_AO_compare_double_and_swap_double_full$21=AO_compare_double_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)42, (unsigned long int)12, (unsigned long int)13);
  if(!(return_value_AO_compare_double_and_swap_double_full$21 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1681);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1682);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$22;
  return_value_AO_compare_double_and_swap_double_full$22=AO_compare_double_and_swap_double_full(&w, (unsigned long int)0, (unsigned long int)0, (unsigned long int)12, (unsigned long int)13);
  if(return_value_AO_compare_double_and_swap_double_full$22 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1683);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1684);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$23;
  return_value_AO_compare_double_and_swap_double_full$23=AO_compare_double_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)14, (unsigned long int)64, (unsigned long int)33);
  if(!(return_value_AO_compare_double_and_swap_double_full$23 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1685);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1686);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$24;
  return_value_AO_compare_double_and_swap_double_full$24=AO_compare_double_and_swap_double_full(&w, (unsigned long int)11, (unsigned long int)13, (unsigned long int)85, (unsigned long int)82);
  if(!(return_value_AO_compare_double_and_swap_double_full$24 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1687);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1688);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$25;
  return_value_AO_compare_double_and_swap_double_full$25=AO_compare_double_and_swap_double_full(&w, (unsigned long int)13, (unsigned long int)12, (unsigned long int)17, (unsigned long int)42);
  if(!(return_value_AO_compare_double_and_swap_double_full$25 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1689);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1690);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$26;
  return_value_AO_compare_double_and_swap_double_full$26=AO_compare_double_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)13, (unsigned long int)17, (unsigned long int)42);
  if(return_value_AO_compare_double_and_swap_double_full$26 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1691);
    exit(1);
  }

  if(!(w.AO_val1 == 17ul) || !(w.AO_val2 == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1692);
    exit(1);
  }

  signed int return_value_AO_compare_double_and_swap_double_full$27;
  return_value_AO_compare_double_and_swap_double_full$27=AO_compare_double_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)42, (unsigned long int)0, (unsigned long int)0);
  if(return_value_AO_compare_double_and_swap_double_full$27 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1693);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1694);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$28;
  return_value_AO_compare_and_swap_double_full$28=AO_compare_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)12, (unsigned long int)13);
  if(!(return_value_AO_compare_and_swap_double_full$28 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1699);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1700);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$29;
  return_value_AO_compare_and_swap_double_full$29=AO_compare_and_swap_double_full(&w, (unsigned long int)0, (unsigned long int)12, (unsigned long int)13);
  if(return_value_AO_compare_and_swap_double_full$29 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1701);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1702);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$30;
  return_value_AO_compare_and_swap_double_full$30=AO_compare_and_swap_double_full(&w, (unsigned long int)13, (unsigned long int)12, (unsigned long int)33);
  if(!(return_value_AO_compare_and_swap_double_full$30 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1703);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1704);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$31;
  return_value_AO_compare_and_swap_double_full$31=AO_compare_and_swap_double_full(&w, (unsigned long int)1213, (unsigned long int)48, (unsigned long int)86);
  if(!(return_value_AO_compare_and_swap_double_full$31 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1705);
    exit(1);
  }

  if(!(w.AO_val1 == 12ul) || !(w.AO_val2 == 13ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1706);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$32;
  return_value_AO_compare_and_swap_double_full$32=AO_compare_and_swap_double_full(&w, (unsigned long int)12, (unsigned long int)17, (unsigned long int)42);
  if(return_value_AO_compare_and_swap_double_full$32 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1707);
    exit(1);
  }

  if(!(w.AO_val1 == 17ul) || !(w.AO_val2 == 42ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1708);
    exit(1);
  }

  signed int return_value_AO_compare_and_swap_double_full$33;
  return_value_AO_compare_and_swap_double_full$33=AO_compare_and_swap_double_full(&w, (unsigned long int)17, (unsigned long int)0, (unsigned long int)0);
  if(return_value_AO_compare_and_swap_double_full$33 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1709);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1710);
    exit(1);
  }

  old_w.AO_val1 = (unsigned long int)4116;
  old_w.AO_val2 = (unsigned long int)2121;
  new_w.AO_val1 = (unsigned long int)8537;
  new_w.AO_val2 = (unsigned long int)6410;
  signed int return_value_AO_double_compare_and_swap_write$34;
  return_value_AO_double_compare_and_swap_write$34=AO_double_compare_and_swap_write(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_write$34 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1719);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1720);
    exit(1);
  }

  signed int return_value_AO_double_compare_and_swap_write$35;
  return_value_AO_double_compare_and_swap_write$35=AO_double_compare_and_swap_write(&w, w, new_w);
  if(return_value_AO_double_compare_and_swap_write$35 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1721);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1722);
    exit(1);
  }

  old_w.AO_val1 = new_w.AO_val1;
  old_w.AO_val2 = (unsigned long int)29;
  new_w.AO_val1 = (unsigned long int)820;
  new_w.AO_val2 = (unsigned long int)5917;
  signed int return_value_AO_double_compare_and_swap_write$36;
  return_value_AO_double_compare_and_swap_write$36=AO_double_compare_and_swap_write(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_write$36 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1727);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1728);
    exit(1);
  }

  old_w.AO_val1 = (unsigned long int)11;
  old_w.AO_val2 = (unsigned long int)6410;
  new_w.AO_val1 = (unsigned long int)3552;
  new_w.AO_val2 = (unsigned long int)1746;
  signed int return_value_AO_double_compare_and_swap_write$37;
  return_value_AO_double_compare_and_swap_write$37=AO_double_compare_and_swap_write(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_write$37 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1733);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1734);
    exit(1);
  }

  old_w.AO_val1 = old_w.AO_val2;
  old_w.AO_val2 = (unsigned long int)8537;
  new_w.AO_val1 = (unsigned long int)4116;
  new_w.AO_val2 = (unsigned long int)2121;
  signed int return_value_AO_double_compare_and_swap_write$38;
  return_value_AO_double_compare_and_swap_write$38=AO_double_compare_and_swap_write(&w, old_w, new_w);
  if(!(return_value_AO_double_compare_and_swap_write$38 == 0))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1739);
    exit(1);
  }

  if(!(w.AO_val1 == 8537ul) || !(w.AO_val2 == 6410ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1740);
    exit(1);
  }

  old_w.AO_val1 = old_w.AO_val2;
  old_w.AO_val2 = (unsigned long int)6410;
  new_w.AO_val1 = (unsigned long int)1;
  signed int return_value_AO_double_compare_and_swap_write$39;
  return_value_AO_double_compare_and_swap_write$39=AO_double_compare_and_swap_write(&w, old_w, new_w);
  if(return_value_AO_double_compare_and_swap_write$39 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1744);
    exit(1);
  }

  if(!(w.AO_val1 == 1ul) || !(w.AO_val2 == 2121ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1745);
    exit(1);
  }

  old_w.AO_val1 = new_w.AO_val1;
  old_w.AO_val2 = w.AO_val2;
  new_w.AO_val1 = new_w.AO_val1 - 1ul;
  new_w.AO_val2 = (unsigned long int)0;
  signed int return_value_AO_double_compare_and_swap_write$40;
  return_value_AO_double_compare_and_swap_write$40=AO_double_compare_and_swap_write(&w, old_w, new_w);
  if(return_value_AO_double_compare_and_swap_write$40 == 0)
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1750);
    exit(1);
  }

  if(!(w.AO_val1 == 0ul) || !(w.AO_val2 == 0ul))
  {
    fprintf(stderr, "Assertion failed %s:%d (barrier: _write)\n", (const void *)"test_atomic_include.h", 1751);
    exit(1);
  }

}

// unlock
// file atomic_ops.c line 120
static inline void unlock(volatile unsigned char *l)
{
  AO_nop_write();
  AO_char_store((unsigned char *)l, (unsigned char)AO_BYTE_TS_clear);
}

