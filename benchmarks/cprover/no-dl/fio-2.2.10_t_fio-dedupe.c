// #anon_enum_XXH_OK=0_XXH_ERROR=1
// file crc/xxhash.h line 83
enum anonymous_13 { XXH_OK=0, XXH_ERROR=1 };

// #anon_enum_XXH_aligned=0_XXH_unaligned=1
// file crc/xxhash.c line 149
enum anonymous_4 { XXH_aligned=0, XXH_unaligned=1 };

// #anon_enum_XXH_bigEndian=0_XXH_littleEndian=1
// file crc/xxhash.c line 133
enum anonymous_3 { XXH_bigEndian=0, XXH_littleEndian=1 };

// tag-#anon#ST[ARR16{U64}_U64_'__bits'|]
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 125
struct anonymous_5;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous_11;

// tag-#anon#ST[S32'__lock'||U32'__nr_readers'||U32'__readers_wakeup'||U32'__writer_wakeup'||U32'__nr_readers_queued'||U32'__nr_writers_queued'||S32'__writer'||S32'__shared'||S8'__rwelision'||ARR7{U8}_U8_'__pad1'||U64'__pad2'||U32'__flags'||U32'_pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 177
struct anonymous_12;

// tag-#anon#UN[*{SYM#tag-axmap#}_SYM#tag-axmap#_'io_axmap'||SYM#tag-fio_lfsr#'lfsr'|]
// file t/../os/../file.h line 116
union anonymous_0;

// tag-#anon#UN[*{SYM#tag-fio_mutex#}_SYM#tag-fio_mutex#_'lock'||*{SYM#tag-fio_rwlock#}_SYM#tag-fio_rwlock#_'rwlock'|]
// file t/../os/../file.h line 108
union anonymous;

// tag-#anon#UN[ARR4{S8}_S8_'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous_6;

// tag-#anon#UN[ARR8{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 224
union anonymous_7;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}_V_'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous_9;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__nr_readers'||U32'__readers_wakeup'||U32'__writer_wakeup'||U32'__nr_readers_queued'||U32'__nr_writers_queued'||S32'__writer'||S32'__shared'||S8'__rwelision'||ARR7{U8}_U8_'__pad1'||U64'__pad2'||U32'__flags'||U32'_pad0'|]#'__data'||ARR56{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 174
union anonymous_8;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}_S8_'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous_10;

// tag-#anon#UN[SYM#tag-taus88_state#'state32'||SYM#tag-taus258_state#'state64'|]
// file t/../os/../lib/rand.h line 20
union anonymous_2;

// tag-#anon#UN[SYM#tag-zipf_state#'zipf'||SYM#tag-gauss_state#'gauss'|]
// file t/../os/../file.h line 124
union anonymous_1;

// tag-XXH_state32_t
// file crc/xxhash.h line 68
struct XXH_state32_t;

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

// tag-_uint32_t_S
// file crc/xxhash.c line 84
struct _uint32_t_S;

// tag-align_footer
// file memalign.c line 7
struct align_footer;

// tag-axmap
// file t/../os/../lib/axmap.h line 6
struct axmap;

// tag-block_hdr
// file smalloc.c line 49
struct block_hdr;

// tag-bloom
// file lib/bloom.h line 6
struct bloom;

// tag-bloom_hash
// file lib/bloom.c line 21
struct bloom_hash;

// tag-chunk
// file t/dedupe.c line 51
struct chunk;

// tag-clock_entry
// file gettime.c line 460
struct clock_entry;

// tag-clock_thread
// file gettime.c line 466
struct clock_thread;

// tag-disk_util
// file t/../os/../file.h line 132
struct disk_util;

// tag-extent
// file t/dedupe.c line 46
struct extent;

// tag-fio_cs
// file gettime.h line 9
enum fio_cs { CS_GTOD=1, CS_CGETTIME=2, CS_CPUCLOCK=3, CS_INVAL=4 };

// tag-fio_file
// file t/../os/../file.h line 65
struct fio_file;

// tag-fio_file_flags
// file t/../os/../file.h line 23
enum fio_file_flags { FIO_FILE_open=1, FIO_FILE_closing=2, FIO_FILE_extend=4, FIO_FILE_done=8, FIO_FILE_size_known=16, FIO_FILE_hashed=32, FIO_FILE_partial_mmap=64, FIO_FILE_axmap=128, FIO_FILE_lfsr=256 };

// tag-fio_filetype
// file t/../os/../file.h line 16
enum fio_filetype { FIO_TYPE_FILE=1, FIO_TYPE_BD=2, FIO_TYPE_CHAR=3, FIO_TYPE_PIPE=4 };

// tag-fio_lfsr
// file t/../os/../lib/lfsr.h line 14
struct fio_lfsr;

// tag-fio_md5_ctx
// file t/../crc/md5.h line 19
struct fio_md5_ctx;

// tag-fio_mutex
// file t/../mutex.h line 9
struct fio_mutex;

// tag-fio_rwlock
// file t/../mutex.h line 17
struct fio_rwlock;

// tag-flist_head
// file t/../flist.h line 27
struct flist_head;

// tag-frand_state
// file t/../os/../lib/rand.h line 18
struct frand_state;

// tag-gauss_state
// file t/../os/../lib/gauss.h line 7
struct gauss_state;

// tag-item
// file t/dedupe.c line 58
struct item;

// tag-pool
// file smalloc.c line 39
struct pool;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rb_node
// file t/../lib/rbtree.h line 100
struct rb_node;

// tag-rb_root
// file t/../lib/rbtree.h line 110
struct rb_root;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-taus258_state
// file t/../os/../lib/rand.h line 14
struct taus258_state;

// tag-taus88_state
// file t/../os/../lib/rand.h line 10
struct taus88_state;

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

// tag-worker_thread
// file t/dedupe.c line 32
struct worker_thread;

// tag-zipf_state
// file t/../os/../lib/zipf.h line 7
struct zipf_state;

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

// XXH32
// file lib/../crc/xxhash.h line 91
unsigned int XXH32(const void *input, unsigned int len, unsigned int seed);
// XXH32_digest
// file crc/xxhash.c line 414
unsigned int XXH32_digest(void *state_in);
// XXH32_endian_align
// file crc/xxhash.c line 165
static unsigned int XXH32_endian_align(const void *input, signed int len, unsigned int seed, enum anonymous_3 endian, enum anonymous_4 align);
// XXH32_init
// file crc/xxhash.c line 277
void * XXH32_init(unsigned int seed);
// XXH32_intermediateDigest
// file crc/xxhash.c line 403
unsigned int XXH32_intermediateDigest(void *state_in);
// XXH32_intermediateDigest_endian
// file crc/xxhash.c line 361
static unsigned int XXH32_intermediateDigest_endian(void *state_in, enum anonymous_3 endian);
// XXH32_resetState
// file crc/xxhash.c line 263
enum anonymous_13 XXH32_resetState(void *state_in, unsigned int seed);
// XXH32_sizeofState
// file crc/xxhash.c line 256
signed int XXH32_sizeofState(void);
// XXH32_update
// file crc/xxhash.c line 349
enum anonymous_13 XXH32_update(void *state_in, const void *input, signed int len);
// XXH32_update_endian
// file crc/xxhash.c line 285
static enum anonymous_13 XXH32_update_endian(void *state_in, const void *input, signed int len, enum anonymous_3 endian);
// XXH_readLE32
// file crc/xxhash.c line 159
static unsigned int XXH_readLE32(const unsigned int *ptr, enum anonymous_3 endian);
// XXH_readLE32_align
// file crc/xxhash.c line 151
static unsigned int XXH_readLE32_align(const unsigned int *ptr, enum anonymous_3 endian, enum anonymous_4 align);
// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __bloom_check
// file lib/bloom.c line 91
static signed int __bloom_check(struct bloom *b, unsigned int *data, unsigned int nwords, signed int set);
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
// __fxstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 409
extern signed int __fxstat(signed int, signed int, struct stat *);
// __open_2
// file /usr/include/x86_64-linux-gnu/bits/fcntl2.h line 30
extern signed int __open_2(const char *, signed int);
// __open_alias
// file /usr/include/x86_64-linux-gnu/bits/fcntl2.h line 32
extern signed int __open_alias(const char *, signed int, ...);
// __open_missing_mode
// file /usr/include/x86_64-linux-gnu/bits/fcntl2.h line 37
extern void __open_missing_mode(void);
// __open_too_many_args
// file /usr/include/x86_64-linux-gnu/bits/fcntl2.h line 35
extern void __open_too_many_args(void);
// __pread64_alias
// file /usr/include/x86_64-linux-gnu/bits/unistd.h line 55
extern signed long int __pread64_alias(signed int, void *, unsigned long int, signed long int);
// __pread64_chk
// file /usr/include/x86_64-linux-gnu/bits/unistd.h line 50
extern signed long int __pread64_chk(signed int, void *, unsigned long int, signed long int, unsigned long int);
// __pread64_chk_warn
// file /usr/include/x86_64-linux-gnu/bits/unistd.h line 63
extern signed long int __pread64_chk_warn(signed int, void *, unsigned long int, signed long int, unsigned long int);
// __printf_chk
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 87
extern signed int __printf_chk(signed int, const char *, ...);
// __rb_erase_color
// file lib/rbtree.c line 136
static void __rb_erase_color(struct rb_node *node, struct rb_node *parent, struct rb_root *root);
// __rb_rotate_left
// file lib/rbtree.c line 25
static void __rb_rotate_left(struct rb_node *node, struct rb_root *root);
// __rb_rotate_right
// file lib/rbtree.c line 48
static void __rb_rotate_right(struct rb_node *node, struct rb_root *root);
// __read_block
// file t/dedupe.c line 119
static signed int __read_block(signed int fd, void *buf, signed long int offset, unsigned long int count);
// __smalloc_pool
// file smalloc.c line 376
static void * __smalloc_pool(struct pool *pool, unsigned long int size);
// __strdup
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1278
extern char * __strdup(const char *);
// __sync_fetch_and_add
// file gcc_builtin_headers_generic.h line 93
signed int __sync_fetch_and_add();
// add_item
// file t/dedupe.c line 142
static void add_item(struct chunk *c, struct item *i);
// add_pool
// file smalloc.c line 183
static signed int add_pool(struct pool *pool, unsigned int alloc_size);
// alloc_chunk
// file t/dedupe.c line 182
static struct chunk * alloc_chunk(void);
// arch_ffz
// file arch/arch-x86_64.h line 45
static inline unsigned long int arch_ffz(unsigned long int bitmask);
// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr);
// atomic32_inc_return
// file gettime.c line 477
static inline unsigned int atomic32_inc_return(unsigned int *seq);
// blockdev_size
// file t/../os/os-linux.h line 133
static inline signed int blockdev_size(struct fio_file *f, unsigned long long int *bytes);
// blocks_free
// file smalloc.c line 158
static signed int blocks_free(struct pool *pool, unsigned int pool_idx, unsigned int idx, unsigned long int nr_blocks);
// blocks_iter
// file smalloc.c line 103
static signed int blocks_iter(struct pool *pool, unsigned int pool_idx, unsigned int idx, unsigned long int nr_blocks, signed int (*func)(unsigned int *, unsigned int));
// blocks_iter::func_object
//
signed int func_object(unsigned int *, unsigned int);
// bloom_crc32c
// file lib/bloom.c line 26
static unsigned int bloom_crc32c(const void *buf, unsigned int len, unsigned int seed);
// bloom_fnv
// file lib/bloom.c line 31
static unsigned int bloom_fnv(const void *buf, unsigned int len, unsigned int seed);
// bloom_free
// file t/../lib/bloom.h line 9
void bloom_free(struct bloom *b);
// bloom_new
// file t/../lib/bloom.h line 8
struct bloom * bloom_new(unsigned long int entries);
// bloom_set
// file t/../lib/bloom.h line 10
signed int bloom_set(struct bloom *b, unsigned int *data, unsigned int nwords);
// calibrate_cpu_clock
// file gettime.c line 262
static signed int calibrate_cpu_clock(void);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
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
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// col_check
// file t/dedupe.c line 159
static signed int col_check(struct chunk *c, struct item *i);
// cpus_online
// file t/../os/os.h line 342
static inline unsigned int cpus_online(void);
// cpus_online_link1
// file os/os.h line 342
static inline unsigned int cpus_online_link1(void);
// crc32c_intel
// file lib/../crc/crc32c.h line 27
extern unsigned int crc32c_intel(const unsigned char *data, unsigned long int length);
// crc32c_intel_le_hw_byte
// file crc/crc32c-intel.c line 35
static unsigned int crc32c_intel_le_hw_byte(unsigned int crc, const unsigned char *data, unsigned long int length);
// crc32c_intel_probe
// file lib/../crc/crc32c.h line 28
extern void crc32c_intel_probe(void);
// crc32c_sw
// file lib/../crc/crc32c.h line 23
extern unsigned int crc32c_sw(const unsigned char *data, unsigned long int length);
// crc_buf
// file t/dedupe.c line 261
static void crc_buf(void *buf, unsigned int *hash);
// debug_init
// file t/debug.c line 11
void debug_init(void);
// dedupe_check
// file t/dedupe.c line 422
static signed int dedupe_check(const char *filename, unsigned long int *nextents, unsigned long int *nchunks);
// do_cpuid
// file crc/../arch/arch-x86_64.h line 4
static inline void do_cpuid(unsigned int *eax, unsigned int *ebx, unsigned int *ecx, unsigned int *edx);
// do_work
// file t/dedupe.c line 278
static signed int do_work(struct worker_thread *thread, void *buf);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
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
static inline signed int fio_cpuset_exit(struct anonymous_5 *mask);
// fio_cpuset_init
// file os/os-linux.h line 68
static inline signed int fio_cpuset_init(struct anonymous_5 *mask);
// fio_crc32c
// file lib/../crc/crc32c.h line 36
static inline unsigned int fio_crc32c(const unsigned char *buf, unsigned long int len);
// fio_gettime
// file t/../gettime.h line 16
extern void fio_gettime(struct timeval *tp, void *caller);
// fio_gettime_offload
// file gettime.h line 25
static inline signed int fio_gettime_offload(struct timeval *tv);
// fio_local_clock_init
// file gettime.c line 356
extern void fio_local_clock_init(signed int is_thread);
// fio_md5_final
// file t/../crc/md5.h line 26
extern void fio_md5_final(struct fio_md5_ctx *mctx);
// fio_md5_init
// file t/../crc/md5.h line 27
extern void fio_md5_init(struct fio_md5_ctx *mctx);
// fio_md5_update
// file t/../crc/md5.h line 25
extern void fio_md5_update(struct fio_md5_ctx *mctx, const unsigned char *data, unsigned int len);
// fio_memalign
// file t/../memalign.h line 4
extern void * fio_memalign(unsigned long int alignment, unsigned long int size);
// fio_memfree
// file t/../memalign.h line 5
extern void fio_memfree(void *ptr, unsigned long int size);
// fio_monotonic_clocktest
// file gettime.c line 560
extern signed int fio_monotonic_clocktest(signed int debug);
// fio_mutex_down
// file t/../mutex.h line 32
extern void fio_mutex_down(struct fio_mutex *mutex);
// fio_mutex_down_timeout
// file mutex.c line 100
extern signed int fio_mutex_down_timeout(struct fio_mutex *mutex, unsigned int seconds);
// fio_mutex_down_trylock
// file mutex.c line 136
extern signed int fio_mutex_down_trylock(struct fio_mutex *mutex);
// fio_mutex_init
// file t/../mutex.h line 28
extern struct fio_mutex * fio_mutex_init(signed int value);
// fio_mutex_remove
// file t/../mutex.h line 30
extern void fio_mutex_remove(struct fio_mutex *mutex);
// fio_mutex_up
// file t/../mutex.h line 31
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
// fmax
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 340
extern double fmax(double, double);
// fmin
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 343
extern double fmin(double, double);
// fmix32
// file crc/murmur3.c line 11
static inline unsigned int fmix32(unsigned int h);
// fnv
// file lib/../crc/fnv.h line 6
unsigned long int fnv(const void *buf, unsigned int len, unsigned long int hval);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// fstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 466
static inline signed int fstat(signed int __fd, struct stat *__statbuf);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// get_cpu_clock
// file arch/arch-x86_64.h line 51
static inline unsigned long long int get_cpu_clock(void);
// get_cycles_per_usec
// file gettime.c line 230
static unsigned long int get_cycles_per_usec(void);
// get_size
// file t/dedupe.c line 82
static unsigned long int get_size(struct fio_file *f, struct stat *sb);
// get_work
// file t/dedupe.c line 100
static signed int get_work(unsigned long int *offset, unsigned long int *size);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
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
// insert_chunk
// file t/dedupe.c line 195
static void insert_chunk(struct item *i);
// insert_chunks
// file t/dedupe.c line 239
static void insert_chunks(struct item *items, unsigned int nitems, unsigned long int *ndupes);
// ioctl
// file /usr/include/x86_64-linux-gnu/sys/ioctl.h line 41
extern signed int ioctl(signed int, unsigned long int, ...);
// iter_rb_tree
// file t/dedupe.c line 498
static void iter_rb_tree(unsigned long int *nextents, unsigned long int *nchunks);
// jhash
// file lib/../hash.h line 110
static inline unsigned int jhash(const void *key, unsigned int length, unsigned int initval);
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
// md5_transform
// file crc/md5.c line 8
static void md5_transform(unsigned int *hash, const unsigned int *in);
// memcmp
// file /usr/include/string.h line 69
extern signed int memcmp(const void *, const void *, unsigned long int);
// memcpy
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy(void * restrict __dest, const void * restrict __src, unsigned long int __len);
// memcpy_link1
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy_link1(void * restrict __dest_link1, const void * restrict __src_link1, unsigned long int __len_link1);
// memcpy_link2
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy_link2(void * restrict __dest_link2, const void * restrict __src_link2, unsigned long int __len_link2);
// memset
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset(void *__dest, signed int __ch, unsigned long int __len);
// memset_link1
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset_link1(void *__dest_link1, signed int __ch_link1, unsigned long int __len_link1);
// memset_link2
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset_link2(void *__dest_link2, signed int __ch_link2, unsigned long int __len_link2);
// mmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 61
extern void * mmap(void *, unsigned long int, signed int, signed int, signed int, signed long int);
// mtime_since
// file gettime.c line 419
extern unsigned long int mtime_since(struct timeval *s, struct timeval *e);
// mtime_since_now
// file t/../fio_time.h line 8
extern unsigned long int mtime_since_now(struct timeval *s);
// munmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 76
extern signed int munmap(void *, unsigned long int);
// murmur3_tail
// file crc/murmur3.c line 22
static unsigned int murmur3_tail(const unsigned char *data, const signed int nblocks, unsigned int len, const unsigned int c1, const unsigned int c2, unsigned int h1);
// murmurhash3
// file lib/../crc/murmur3.h line 6
unsigned int murmurhash3(const void *key, unsigned int len, unsigned int seed);
// mutex_timed_out
// file mutex.c line 95
static signed int mutex_timed_out(struct timeval *t, unsigned int seconds);
// open
// file /usr/include/x86_64-linux-gnu/bits/fcntl2.h line 41
static inline signed int open(const char *__path, signed int __oflag, ...);
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
// pread
// file /usr/include/x86_64-linux-gnu/bits/unistd.h line 87
static inline signed long int pread(signed int __fd, void *__buf, unsigned long int __nbytes, signed long int __offset);
// printf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 102
static inline signed int printf(const char * restrict __fmt, ...);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous_9 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous_9 *, const union anonymous_6 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous_9 *);
// pthread_cond_timedwait
// file /usr/include/pthread.h line 1002
extern signed int pthread_cond_timedwait(union anonymous_9 *, union anonymous_10 *, struct timespec *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous_9 *, union anonymous_10 *);
// pthread_condattr_destroy
// file /usr/include/pthread.h line 1014
extern signed int pthread_condattr_destroy(union anonymous_6 *);
// pthread_condattr_init
// file /usr/include/pthread.h line 1010
extern signed int pthread_condattr_init(union anonymous_6 *);
// pthread_condattr_setpshared
// file /usr/include/pthread.h line 1024
extern signed int pthread_condattr_setpshared(union anonymous_6 *, signed int);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous_10 *, const union anonymous_6 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous_10 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous_10 *);
// pthread_mutexattr_destroy
// file /usr/include/pthread.h line 812
extern signed int pthread_mutexattr_destroy(union anonymous_6 *);
// pthread_mutexattr_init
// file /usr/include/pthread.h line 808
extern signed int pthread_mutexattr_init(union anonymous_6 *);
// pthread_mutexattr_setpshared
// file /usr/include/pthread.h line 822
extern signed int pthread_mutexattr_setpshared(union anonymous_6 *, signed int);
// pthread_rwlock_init
// file /usr/include/pthread.h line 890
extern signed int pthread_rwlock_init(union anonymous_8 *, const union anonymous_7 *);
// pthread_rwlock_rdlock
// file /usr/include/pthread.h line 899
extern signed int pthread_rwlock_rdlock(union anonymous_8 *);
// pthread_rwlock_unlock
// file /usr/include/pthread.h line 929
extern signed int pthread_rwlock_unlock(union anonymous_8 *);
// pthread_rwlock_wrlock
// file /usr/include/pthread.h line 914
extern signed int pthread_rwlock_wrlock(union anonymous_8 *);
// pthread_rwlockattr_destroy
// file /usr/include/pthread.h line 940
extern signed int pthread_rwlockattr_destroy(union anonymous_7 *);
// pthread_rwlockattr_init
// file /usr/include/pthread.h line 936
extern signed int pthread_rwlockattr_init(union anonymous_7 *);
// pthread_rwlockattr_setpshared
// file /usr/include/pthread.h line 950
extern signed int pthread_rwlockattr_setpshared(union anonymous_7 *, signed int);
// ptr_valid
// file smalloc.c line 91
static inline signed int ptr_valid(struct pool *pool, void *ptr);
// qsort
// file /usr/include/stdlib.h line 764
extern void qsort(void *, unsigned long int, unsigned long int, signed int (*)(const void *, const void *));
// rb_erase
// file lib/rbtree.c line 222
extern void rb_erase(struct rb_node *node, struct rb_root *root);
// rb_first
// file t/../lib/rbtree.h line 143
extern struct rb_node * rb_first(struct rb_root *root);
// rb_insert_color
// file t/../lib/rbtree.h line 139
extern void rb_insert_color(struct rb_node *node, struct rb_root *root);
// rb_link_node
// file t/../lib/rbtree.h line 146
static inline void rb_link_node(struct rb_node *node, struct rb_node *parent, struct rb_node **rb_link);
// rb_next
// file t/../lib/rbtree.h line 144
extern struct rb_node * rb_next(struct rb_node *node);
// rb_set_color
// file lib/rbtree.h line 127
static inline void rb_set_color(struct rb_node *rb, signed int color);
// rb_set_parent
// file t/../lib/rbtree.h line 123
static inline void rb_set_parent(struct rb_node *rb, struct rb_node *p);
// rb_set_parent_link1
// file lib/rbtree.h line 123
static inline void rb_set_parent_link1(struct rb_node *rb_link1, struct rb_node *p_link1);
// read_block
// file t/dedupe.c line 137
static signed int read_block(signed int fd, void *buf, signed long int offset);
// read_blocks
// file t/dedupe.c line 270
static unsigned int read_blocks(signed int fd, void *buf, signed long int offset, unsigned long int size);
// rol32
// file lib/../hash.h line 82
static inline unsigned int rol32(unsigned int word, unsigned int shift);
// rotl32
// file crc/murmur3.c line 3
static inline unsigned int rotl32(unsigned int x, signed char r);
// run_dedupe_threads
// file t/dedupe.c line 376
static signed int run_dedupe_threads(struct fio_file *f, unsigned long int dev_size, unsigned long int *nextents, unsigned long int *nchunks);
// scalloc
// file smalloc.c line 493
extern void * scalloc(unsigned long int nmemb, unsigned long int size);
// sched_setaffinity
// file /usr/include/sched.h line 118
extern signed int sched_setaffinity(signed int, unsigned long int, const struct anonymous_5 *);
// scleanup
// file t/../smalloc.h line 9
extern void scleanup(void);
// set_blocks
// file smalloc.c line 164
static void set_blocks(struct pool *pool, unsigned int pool_idx, unsigned int idx, unsigned long int nr_blocks);
// sfree
// file smalloc.c line 349
extern void sfree(void *ptr);
// sfree_check_redzone
// file smalloc.c line 294
static void sfree_check_redzone(struct block_hdr *hdr);
// sfree_pool
// file smalloc.c line 321
static void sfree_pool(struct pool *pool, void *ptr);
// show_chunk
// file t/dedupe.c line 468
static void show_chunk(struct chunk *c);
// show_progress
// file t/dedupe.c line 334
static void show_progress(struct worker_thread *threads, unsigned long int total);
// show_stat
// file t/dedupe.c line 480
static void show_stat(unsigned long int nextents, unsigned long int nchunks);
// sinit
// file t/../smalloc.h line 8
extern void sinit(void);
// size_to_blocks
// file smalloc.c line 98
static inline unsigned long int size_to_blocks(unsigned long int size);
// smalloc
// file smalloc.c line 459
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
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// syscall
// file /usr/include/unistd.h line 1058
extern signed long int syscall(signed long int, ...);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// thread_fn
// file t/dedupe.c line 311
static void * thread_fn(void *data);
// time_since_now
// file gettime.c line 449
extern unsigned long int time_since_now(struct timeval *s);
// usage
// file t/dedupe.c line 521
static signed int usage(char **argv);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// utime_since
// file gettime.c line 388
extern unsigned long int utime_since(struct timeval *s, struct timeval *e);
// utime_since_now
// file gettime.c line 411
extern unsigned long int utime_since_now(struct timeval *s);
// vsnprintf
// file /usr/include/x86_64-linux-gnu/bits/stdio2.h line 74
static inline signed int vsnprintf(char * restrict __s, unsigned long int __n, const char * restrict __fmt, void **__ap);

struct anonymous_5
{
  // __bits
  unsigned long int __bits[16l];
};

struct anonymous_11
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

struct anonymous_12
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

union anonymous_0
{
  // io_axmap
  struct axmap *io_axmap;
  // lfsr
  struct fio_lfsr lfsr;
};

union anonymous
{
  // lock
  struct fio_mutex *lock;
  // rwlock
  struct fio_rwlock *rwlock;
};

union anonymous_6
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous_7
{
  // __size
  char __size[8l];
  // __align
  signed long int __align;
};

union anonymous_9
{
  // __data
  struct anonymous_11 __data;
  // __size
  char __size[48l];
  // __align
  signed long long int __align;
};

union anonymous_8
{
  // __data
  struct anonymous_12 __data;
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

union anonymous_10
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct taus88_state
{
  // s1
  unsigned int s1;
  // s2
  unsigned int s2;
  // s3
  unsigned int s3;
};

struct taus258_state
{
  // s1
  unsigned long int s1;
  // s2
  unsigned long int s2;
  // s3
  unsigned long int s3;
  // s4
  unsigned long int s4;
  // s5
  unsigned long int s5;
};

union anonymous_2
{
  // state32
  struct taus88_state state32;
  // state64
  struct taus258_state state64;
};

struct frand_state
{
  // use64
  unsigned int use64;
  // _anon0
  union anonymous_2 _anon0;
};

struct zipf_state
{
  // nranges
  unsigned long int nranges;
  // theta
  double theta;
  // zeta2
  double zeta2;
  // zetan
  double zetan;
  // pareto_pow
  double pareto_pow;
  // rand
  struct frand_state rand;
  // rand_off
  unsigned long int rand_off;
};

struct gauss_state
{
  // r
  struct frand_state r;
  // nranges
  unsigned long int nranges;
  // stddev
  unsigned int stddev;
};

union anonymous_1
{
  // zipf
  struct zipf_state zipf;
  // gauss
  struct gauss_state gauss;
};

struct XXH_state32_t
{
  // total_len
  unsigned long int total_len;
  // seed
  unsigned int seed;
  // v1
  unsigned int v1;
  // v2
  unsigned int v2;
  // v3
  unsigned int v3;
  // v4
  unsigned int v4;
  // memsize
  signed int memsize;
  // memory
  char memory[16l];
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

struct _uint32_t_S
{
  // v
  unsigned int v;
};

struct align_footer
{
  // offset
  unsigned int offset;
};

struct block_hdr
{
  // size
  unsigned long int size;
  // prered
  unsigned int prered;
};

struct bloom
{
  // nentries
  unsigned long int nentries;
  // map
  unsigned int *map;
};

struct bloom_hash
{
  // seed
  unsigned int seed;
  // fn
  unsigned int (*fn)(const void *, unsigned int, unsigned int);
};

struct rb_node
{
  // rb_parent_color
  signed long int rb_parent_color;
  // rb_right
  struct rb_node *rb_right;
  // rb_left
  struct rb_node *rb_left;
};

struct flist_head
{
  // next
  struct flist_head *next;
  // prev
  struct flist_head *prev;
};

struct chunk
{
  // rb_node
  struct rb_node rb_node;
  // count
  unsigned long int count;
  // hash
  unsigned int hash[4l];
  // extent_list
  struct flist_head extent_list[0l];
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
  union anonymous_10 lock;
  // started
  union anonymous_10 started;
  // nr_entries
  unsigned long int nr_entries;
  // seq
  unsigned int *seq;
  // entries
  struct clock_entry *entries;
};

struct extent
{
  // list
  struct flist_head list;
  // offset
  unsigned long int offset;
};

struct fio_file
{
  // hash_list
  struct flist_head hash_list;
  // filetype
  enum fio_filetype filetype;
  // fd
  signed int fd;
  // shadow_fd
  signed int shadow_fd;
  // major
  unsigned int major;
  // minor
  unsigned int minor;
  // fileno
  signed int fileno;
  // bs
  signed int bs;
  // file_name
  char *file_name;
  // real_file_size
  unsigned long int real_file_size;
  // file_offset
  unsigned long int file_offset;
  // io_size
  unsigned long int io_size;
  // last_pos
  unsigned long int last_pos[3l];
  // last_start
  unsigned long int last_start[3l];
  // first_write
  unsigned long int first_write;
  // last_write
  unsigned long int last_write;
  // engine_data
  unsigned long int engine_data;
  // _anon0
  union anonymous _anon0;
  // _anon1
  union anonymous_0 _anon1;
  // _anon2
  union anonymous_1 _anon2;
  // references
  signed int references;
  // flags
  enum fio_file_flags flags;
  // du
  struct disk_util *du;
};

struct fio_md5_ctx
{
  // hash
  unsigned int *hash;
  // block
  unsigned int block[16l];
  // byte_count
  unsigned long int byte_count;
};

struct fio_mutex
{
  // lock
  union anonymous_10 lock;
  // cond
  union anonymous_9 cond;
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
  union anonymous_8 lock;
  // magic
  signed int magic;
};

struct item
{
  // offset
  unsigned long int offset;
  // hash
  unsigned int hash[4l];
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

struct rb_root
{
  // rb_node
  struct rb_node *rb_node;
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

struct worker_thread
{
  // thread
  unsigned long int thread;
  // done
  volatile signed int done;
  // fd
  signed int fd;
  // cur_offset
  unsigned long int cur_offset;
  // size
  unsigned long int size;
  // items
  unsigned long int items;
  // dupes
  unsigned long int dupes;
  // err
  signed int err;
};


// blocksize
// file t/dedupe.c line 67
static unsigned int blocksize = (unsigned int)4096;
// bloom
// file t/dedupe.c line 64
static struct bloom *bloom;
// chunk_size
// file t/dedupe.c line 69
static unsigned int chunk_size = (unsigned int)1048576;
// collision_check
// file t/dedupe.c line 72
static unsigned int collision_check;
// crc32c_intel_available
// file crc/crc32c-intel.c line 21
signed int crc32c_intel_available = 0;
// crc32c_probed
// file crc/crc32c-intel.c line 33
static signed int crc32c_probed;
// crc32c_table
// file crc/crc32c.c line 46
static const unsigned int crc32c_table[256l] = { (const unsigned int)0x00000000L, (const unsigned int)0xF26B8303L, (const unsigned int)0xE13B70F7L, (const unsigned int)0x1350F3F4L, (const unsigned int)0xC79A971FL, (const unsigned int)0x35F1141CL, (const unsigned int)0x26A1E7E8L, (const unsigned int)0xD4CA64EBL, (const unsigned int)0x8AD958CFL, (const unsigned int)0x78B2DBCCL, (const unsigned int)0x6BE22838L, (const unsigned int)0x9989AB3BL, (const unsigned int)0x4D43CFD0L, (const unsigned int)0xBF284CD3L, (const unsigned int)0xAC78BF27L, (const unsigned int)0x5E133C24L, (const unsigned int)0x105EC76FL, (const unsigned int)0xE235446CL, (const unsigned int)0xF165B798L, (const unsigned int)0x030E349BL, (const unsigned int)0xD7C45070L, (const unsigned int)0x25AFD373L, (const unsigned int)0x36FF2087L, (const unsigned int)0xC494A384L, (const unsigned int)0x9A879FA0L, (const unsigned int)0x68EC1CA3L, (const unsigned int)0x7BBCEF57L, (const unsigned int)0x89D76C54L, (const unsigned int)0x5D1D08BFL, (const unsigned int)0xAF768BBCL, (const unsigned int)0xBC267848L, (const unsigned int)0x4E4DFB4BL, (const unsigned int)0x20BD8EDEL, (const unsigned int)0xD2D60DDDL, (const unsigned int)0xC186FE29L, (const unsigned int)0x33ED7D2AL, (const unsigned int)0xE72719C1L, (const unsigned int)0x154C9AC2L, (const unsigned int)0x061C6936L, (const unsigned int)0xF477EA35L, (const unsigned int)0xAA64D611L, (const unsigned int)0x580F5512L, (const unsigned int)0x4B5FA6E6L, (const unsigned int)0xB93425E5L, (const unsigned int)0x6DFE410EL, (const unsigned int)0x9F95C20DL, (const unsigned int)0x8CC531F9L, (const unsigned int)0x7EAEB2FAL, (const unsigned int)0x30E349B1L, (const unsigned int)0xC288CAB2L, (const unsigned int)0xD1D83946L, (const unsigned int)0x23B3BA45L, (const unsigned int)0xF779DEAEL, (const unsigned int)0x05125DADL, (const unsigned int)0x1642AE59L, (const unsigned int)0xE4292D5AL, (const unsigned int)0xBA3A117EL, (const unsigned int)0x4851927DL, (const unsigned int)0x5B016189L, (const unsigned int)0xA96AE28AL, (const unsigned int)0x7DA08661L, (const unsigned int)0x8FCB0562L, (const unsigned int)0x9C9BF696L, (const unsigned int)0x6EF07595L, (const unsigned int)0x417B1DBCL, (const unsigned int)0xB3109EBFL, (const unsigned int)0xA0406D4BL, (const unsigned int)0x522BEE48L, (const unsigned int)0x86E18AA3L, (const unsigned int)0x748A09A0L, (const unsigned int)0x67DAFA54L, (const unsigned int)0x95B17957L, (const unsigned int)0xCBA24573L, (const unsigned int)0x39C9C670L, (const unsigned int)0x2A993584L, (const unsigned int)0xD8F2B687L, (const unsigned int)0x0C38D26CL, (const unsigned int)0xFE53516FL, (const unsigned int)0xED03A29BL, (const unsigned int)0x1F682198L, (const unsigned int)0x5125DAD3L, (const unsigned int)0xA34E59D0L, (const unsigned int)0xB01EAA24L, (const unsigned int)0x42752927L, (const unsigned int)0x96BF4DCCL, (const unsigned int)0x64D4CECFL, (const unsigned int)0x77843D3BL, (const unsigned int)0x85EFBE38L, (const unsigned int)0xDBFC821CL, (const unsigned int)0x2997011FL, (const unsigned int)0x3AC7F2EBL, (const unsigned int)0xC8AC71E8L, (const unsigned int)0x1C661503L, (const unsigned int)0xEE0D9600L, (const unsigned int)0xFD5D65F4L, (const unsigned int)0x0F36E6F7L, (const unsigned int)0x61C69362L, (const unsigned int)0x93AD1061L, (const unsigned int)0x80FDE395L, (const unsigned int)0x72966096L, (const unsigned int)0xA65C047DL, (const unsigned int)0x5437877EL, (const unsigned int)0x4767748AL, (const unsigned int)0xB50CF789L, (const unsigned int)0xEB1FCBADL, (const unsigned int)0x197448AEL, (const unsigned int)0x0A24BB5AL, (const unsigned int)0xF84F3859L, (const unsigned int)0x2C855CB2L, (const unsigned int)0xDEEEDFB1L, (const unsigned int)0xCDBE2C45L, (const unsigned int)0x3FD5AF46L, (const unsigned int)0x7198540DL, (const unsigned int)0x83F3D70EL, (const unsigned int)0x90A324FAL, (const unsigned int)0x62C8A7F9L, (const unsigned int)0xB602C312L, (const unsigned int)0x44694011L, (const unsigned int)0x5739B3E5L, (const unsigned int)0xA55230E6L, (const unsigned int)0xFB410CC2L, (const unsigned int)0x092A8FC1L, (const unsigned int)0x1A7A7C35L, (const unsigned int)0xE811FF36L, (const unsigned int)0x3CDB9BDDL, (const unsigned int)0xCEB018DEL, (const unsigned int)0xDDE0EB2AL, (const unsigned int)0x2F8B6829L, (const unsigned int)0x82F63B78L, (const unsigned int)0x709DB87BL, (const unsigned int)0x63CD4B8FL, (const unsigned int)0x91A6C88CL, (const unsigned int)0x456CAC67L, (const unsigned int)0xB7072F64L, (const unsigned int)0xA457DC90L, (const unsigned int)0x563C5F93L, (const unsigned int)0x082F63B7L, (const unsigned int)0xFA44E0B4L, (const unsigned int)0xE9141340L, (const unsigned int)0x1B7F9043L, (const unsigned int)0xCFB5F4A8L, (const unsigned int)0x3DDE77ABL, (const unsigned int)0x2E8E845FL, (const unsigned int)0xDCE5075CL, (const unsigned int)0x92A8FC17L, (const unsigned int)0x60C37F14L, (const unsigned int)0x73938CE0L, (const unsigned int)0x81F80FE3L, (const unsigned int)0x55326B08L, (const unsigned int)0xA759E80BL, (const unsigned int)0xB4091BFFL, (const unsigned int)0x466298FCL, (const unsigned int)0x1871A4D8L, (const unsigned int)0xEA1A27DBL, (const unsigned int)0xF94AD42FL, (const unsigned int)0x0B21572CL, (const unsigned int)0xDFEB33C7L, (const unsigned int)0x2D80B0C4L, (const unsigned int)0x3ED04330L, (const unsigned int)0xCCBBC033L, (const unsigned int)0xA24BB5A6L, (const unsigned int)0x502036A5L, (const unsigned int)0x4370C551L, (const unsigned int)0xB11B4652L, (const unsigned int)0x65D122B9L, (const unsigned int)0x97BAA1BAL, (const unsigned int)0x84EA524EL, (const unsigned int)0x7681D14DL, (const unsigned int)0x2892ED69L, (const unsigned int)0xDAF96E6AL, (const unsigned int)0xC9A99D9EL, (const unsigned int)0x3BC21E9DL, (const unsigned int)0xEF087A76L, (const unsigned int)0x1D63F975L, (const unsigned int)0x0E330A81L, (const unsigned int)0xFC588982L, (const unsigned int)0xB21572C9L, (const unsigned int)0x407EF1CAL, (const unsigned int)0x532E023EL, (const unsigned int)0xA145813DL, (const unsigned int)0x758FE5D6L, (const unsigned int)0x87E466D5L, (const unsigned int)0x94B49521L, (const unsigned int)0x66DF1622L, (const unsigned int)0x38CC2A06L, (const unsigned int)0xCAA7A905L, (const unsigned int)0xD9F75AF1L, (const unsigned int)0x2B9CD9F2L, (const unsigned int)0xFF56BD19L, (const unsigned int)0x0D3D3E1AL, (const unsigned int)0x1E6DCDEEL, (const unsigned int)0xEC064EEDL, (const unsigned int)0xC38D26C4L, (const unsigned int)0x31E6A5C7L, (const unsigned int)0x22B65633L, (const unsigned int)0xD0DDD530L, (const unsigned int)0x0417B1DBL, (const unsigned int)0xF67C32D8L, (const unsigned int)0xE52CC12CL, (const unsigned int)0x1747422FL, (const unsigned int)0x49547E0BL, (const unsigned int)0xBB3FFD08L, (const unsigned int)0xA86F0EFCL, (const unsigned int)0x5A048DFFL, (const unsigned int)0x8ECEE914L, (const unsigned int)0x7CA56A17L, (const unsigned int)0x6FF599E3L, (const unsigned int)0x9D9E1AE0L, (const unsigned int)0xD3D3E1ABL, (const unsigned int)0x21B862A8L, (const unsigned int)0x32E8915CL, (const unsigned int)0xC083125FL, (const unsigned int)0x144976B4L, (const unsigned int)0xE622F5B7L, (const unsigned int)0xF5720643L, (const unsigned int)0x07198540L, (const unsigned int)0x590AB964L, (const unsigned int)0xAB613A67L, (const unsigned int)0xB831C993L, (const unsigned int)0x4A5A4A90L, (const unsigned int)0x9E902E7BL, (const unsigned int)0x6CFBAD78L, (const unsigned int)0x7FAB5E8CL, (const unsigned int)0x8DC0DD8FL, (const unsigned int)0xE330A81AL, (const unsigned int)0x115B2B19L, (const unsigned int)0x020BD8EDL, (const unsigned int)0xF0605BEEL, (const unsigned int)0x24AA3F05L, (const unsigned int)0xD6C1BC06L, (const unsigned int)0xC5914FF2L, (const unsigned int)0x37FACCF1L, (const unsigned int)0x69E9F0D5L, (const unsigned int)0x9B8273D6L, (const unsigned int)0x88D28022L, (const unsigned int)0x7AB90321L, (const unsigned int)0xAE7367CAL, (const unsigned int)0x5C18E4C9L, (const unsigned int)0x4F48173DL, (const unsigned int)0xBD23943EL, (const unsigned int)0xF36E6F75L, (const unsigned int)0x0105EC76L, (const unsigned int)0x12551F82L, (const unsigned int)0xE03E9C81L, (const unsigned int)0x34F4F86AL, (const unsigned int)0xC69F7B69L, (const unsigned int)0xD5CF889DL, (const unsigned int)0x27A40B9EL, (const unsigned int)0x79B737BAL, (const unsigned int)0x8BDCB4B9L, (const unsigned int)0x988C474DL, (const unsigned int)0x6AE7C44EL, (const unsigned int)0xBE2DA0A5L, (const unsigned int)0x4C4623A6L, (const unsigned int)0x5F16D052L, (const unsigned int)0xAD7D5351L };
// cur_offset
// file t/dedupe.c line 77
static unsigned long int cur_offset;
// cycles_per_usec
// file gettime.c line 18
static unsigned long int cycles_per_usec;
// cycles_start
// file gettime.c line 23
static unsigned long long int cycles_start;
// cycles_wrap
// file gettime.c line 23
static unsigned long long int cycles_wrap;
// dump_output
// file t/dedupe.c line 70
static unsigned int dump_output;
// f_err
// file t/debug.c line 3
struct _IO_FILE *f_err;
// file
// file t/dedupe.c line 80
static struct fio_file file;
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
// hashes
// file lib/bloom.c line 38
struct bloom_hash hashes[5l];
// hashes
// file lib/bloom.c line 38
struct bloom_hash hashes[5l] = { { .seed=(unsigned int)0x8989, .fn=jhash },
    { .seed=(unsigned int)0x8989, .fn=XXH32 },
    { .seed=(unsigned int)0x8989, .fn=murmurhash3 },
    { .seed=(unsigned int)0x8989, .fn=bloom_crc32c },
    { .seed=(unsigned int)0x8989, .fn=bloom_fnv } };
// int_mask
// file smalloc.c line 36
static const signed int int_mask = (const signed int)(sizeof(signed int) /*4ul*/  - (unsigned long int)1);
// inv_cycles_per_usec
// file gettime.c line 19
static unsigned long int inv_cycles_per_usec;
// last_pool
// file smalloc.c line 58
static unsigned int last_pool;
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
// num_threads
// file t/dedupe.c line 68
static unsigned int num_threads;
// odirect
// file t/dedupe.c line 71
static unsigned int odirect;
// one
// file crc/xxhash.c line 135
static const signed int one = 1;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// print_progress
// file t/dedupe.c line 73
static unsigned int print_progress = (unsigned int)1;
// rb_lock
// file t/dedupe.c line 65
static struct fio_mutex *rb_lock;
// rb_root
// file t/dedupe.c line 63
static struct rb_root rb_root;
// size_lock
// file t/dedupe.c line 78
static struct fio_mutex *size_lock;
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
// total_size
// file t/dedupe.c line 76
static unsigned long int total_size;
// tsc_reliable
// file gettime.c line 26
signed int tsc_reliable = 0;
// use_bloom
// file t/dedupe.c line 74
static unsigned int use_bloom = (unsigned int)1;

// XXH32
// file lib/../crc/xxhash.h line 91
unsigned int XXH32(const void *input, unsigned int len, unsigned int seed)
{
  enum anonymous_3 endian_detected = (enum anonymous_3)*((char *)&one);
  unsigned int return_value_XXH32_endian_align_1;
  unsigned int return_value_XXH32_endian_align_2;
  if((signed int)endian_detected == XXH_littleEndian)
  {
    return_value_XXH32_endian_align_1=XXH32_endian_align(input, (signed int)len, seed, (enum anonymous_3)XXH_littleEndian, (enum anonymous_4)XXH_unaligned);
    return return_value_XXH32_endian_align_1;
  }

  else
  {
    return_value_XXH32_endian_align_2=XXH32_endian_align(input, (signed int)len, seed, (enum anonymous_3)XXH_bigEndian, (enum anonymous_4)XXH_unaligned);
    return return_value_XXH32_endian_align_2;
  }
}

// XXH32_digest
// file crc/xxhash.c line 414
unsigned int XXH32_digest(void *state_in)
{
  unsigned int h32;
  h32=XXH32_intermediateDigest(state_in);
  free(state_in);
  return h32;
}

// XXH32_endian_align
// file crc/xxhash.c line 165
static unsigned int XXH32_endian_align(const void *input, signed int len, unsigned int seed, enum anonymous_3 endian, enum anonymous_4 align)
{
  const unsigned char *p = (const unsigned char *)input;
  const unsigned char * const bEnd = p + (signed long int)len;
  unsigned int h32;
  if(len >= 16)
  {
    const unsigned char * const limit = bEnd - (signed long int)16;
    unsigned int v1 = seed + 2654435761U + 2246822519U;
    unsigned int v2 = seed + 2246822519U;
    unsigned int v3 = seed + (unsigned int)0;
    unsigned int v4 = seed - 2654435761U;
    do
    {
      unsigned int return_value_XXH_readLE32_align_1;
      return_value_XXH_readLE32_align_1=XXH_readLE32_align((const unsigned int *)p, endian, align);
      v1 = v1 + return_value_XXH_readLE32_align_1 * 2246822519U;
      v1 = v1 << 13 | v1 >> 32 - 13;
      v1 = v1 * 2654435761U;
      p = p + (signed long int)4;
      unsigned int return_value_XXH_readLE32_align_2;
      return_value_XXH_readLE32_align_2=XXH_readLE32_align((const unsigned int *)p, endian, align);
      v2 = v2 + return_value_XXH_readLE32_align_2 * 2246822519U;
      v2 = v2 << 13 | v2 >> 32 - 13;
      v2 = v2 * 2654435761U;
      p = p + (signed long int)4;
      unsigned int return_value_XXH_readLE32_align_3;
      return_value_XXH_readLE32_align_3=XXH_readLE32_align((const unsigned int *)p, endian, align);
      v3 = v3 + return_value_XXH_readLE32_align_3 * 2246822519U;
      v3 = v3 << 13 | v3 >> 32 - 13;
      v3 = v3 * 2654435761U;
      p = p + (signed long int)4;
      unsigned int return_value_XXH_readLE32_align_4;
      return_value_XXH_readLE32_align_4=XXH_readLE32_align((const unsigned int *)p, endian, align);
      v4 = v4 + return_value_XXH_readLE32_align_4 * 2246822519U;
      v4 = v4 << 13 | v4 >> 32 - 13;
      v4 = v4 * 2654435761U;
      p = p + (signed long int)4;
    }
    while(limit >= p);
    h32 = (v1 << 1 | v1 >> 32 - 1) + (v2 << 7 | v2 >> 32 - 7) + (v3 << 12 | v3 >> 32 - 12) + (v4 << 18 | v4 >> 32 - 18);
  }

  else
    h32 = seed + 374761393U;
  h32 = h32 + (unsigned int)len;
  while(bEnd + -4l >= p)
  {
    unsigned int return_value_XXH_readLE32_align_5;
    return_value_XXH_readLE32_align_5=XXH_readLE32_align((const unsigned int *)p, endian, align);
    h32 = h32 + return_value_XXH_readLE32_align_5 * 3266489917U;
    h32 = (h32 << 17 | h32 >> 32 - 17) * 668265263U;
    p = p + (signed long int)4;
  }
  for( ; !(p >= bEnd); p = p + 1l)
  {
    h32 = h32 + (unsigned int)*p * 374761393U;
    h32 = (h32 << 11 | h32 >> 32 - 11) * 2654435761U;
  }
  h32 = h32 ^ h32 >> 15;
  h32 = h32 * 2246822519U;
  h32 = h32 ^ h32 >> 13;
  h32 = h32 * 3266489917U;
  h32 = h32 ^ h32 >> 16;
  return h32;
}

// XXH32_init
// file crc/xxhash.c line 277
void * XXH32_init(unsigned int seed)
{
  void *state;
  state=malloc(sizeof(struct XXH_state32_t) /*48ul*/ );
  XXH32_resetState(state, seed);
  return state;
}

// XXH32_intermediateDigest
// file crc/xxhash.c line 403
unsigned int XXH32_intermediateDigest(void *state_in)
{
  enum anonymous_3 endian_detected = (enum anonymous_3)*((char *)&one);
  unsigned int return_value_XXH32_intermediateDigest_endian_1;
  unsigned int return_value_XXH32_intermediateDigest_endian_2;
  if((signed int)endian_detected == XXH_littleEndian)
  {
    return_value_XXH32_intermediateDigest_endian_1=XXH32_intermediateDigest_endian(state_in, (enum anonymous_3)XXH_littleEndian);
    return return_value_XXH32_intermediateDigest_endian_1;
  }

  else
  {
    return_value_XXH32_intermediateDigest_endian_2=XXH32_intermediateDigest_endian(state_in, (enum anonymous_3)XXH_bigEndian);
    return return_value_XXH32_intermediateDigest_endian_2;
  }
}

// XXH32_intermediateDigest_endian
// file crc/xxhash.c line 361
static unsigned int XXH32_intermediateDigest_endian(void *state_in, enum anonymous_3 endian)
{
  struct XXH_state32_t *state = (struct XXH_state32_t *)state_in;
  const unsigned char *p = (const unsigned char *)state->memory;
  unsigned char *bEnd = (unsigned char *)state->memory + (signed long int)state->memsize;
  unsigned int h32;
  if(state->total_len >= 16ul)
    h32 = (state->v1 << 1 | state->v1 >> 32 - 1) + (state->v2 << 7 | state->v2 >> 32 - 7) + (state->v3 << 12 | state->v3 >> 32 - 12) + (state->v4 << 18 | state->v4 >> 32 - 18);

  else
    h32 = state->seed + 374761393U;
  h32 = h32 + (unsigned int)state->total_len;
  while(bEnd + -4l >= p)
  {
    unsigned int return_value_XXH_readLE32_1;
    return_value_XXH_readLE32_1=XXH_readLE32((const unsigned int *)p, endian);
    h32 = h32 + return_value_XXH_readLE32_1 * 3266489917U;
    h32 = (h32 << 17 | h32 >> 32 - 17) * 668265263U;
    p = p + (signed long int)4;
  }
  for( ; !(p >= bEnd); p = p + 1l)
  {
    h32 = h32 + (unsigned int)*p * 374761393U;
    h32 = (h32 << 11 | h32 >> 32 - 11) * 2654435761U;
  }
  h32 = h32 ^ h32 >> 15;
  h32 = h32 * 2246822519U;
  h32 = h32 ^ h32 >> 13;
  h32 = h32 * 3266489917U;
  h32 = h32 ^ h32 >> 16;
  return h32;
}

// XXH32_resetState
// file crc/xxhash.c line 263
enum anonymous_13 XXH32_resetState(void *state_in, unsigned int seed)
{
  struct XXH_state32_t *state = (struct XXH_state32_t *)state_in;
  state->seed = seed;
  state->v1 = seed + 2654435761U + 2246822519U;
  state->v2 = seed + 2246822519U;
  state->v3 = seed + (unsigned int)0;
  state->v4 = seed - 2654435761U;
  state->total_len = (unsigned long int)0;
  state->memsize = 0;
  return (enum anonymous_13)XXH_OK;
}

// XXH32_sizeofState
// file crc/xxhash.c line 256
signed int XXH32_sizeofState(void)
{
  return (signed int)sizeof(struct XXH_state32_t) /*48ul*/ ;
}

// XXH32_update
// file crc/xxhash.c line 349
enum anonymous_13 XXH32_update(void *state_in, const void *input, signed int len)
{
  enum anonymous_3 endian_detected = (enum anonymous_3)*((char *)&one);
  enum anonymous_13 return_value_XXH32_update_endian_1;
  enum anonymous_13 return_value_XXH32_update_endian_2;
  if((signed int)endian_detected == XXH_littleEndian)
  {
    return_value_XXH32_update_endian_1=XXH32_update_endian(state_in, input, len, (enum anonymous_3)XXH_littleEndian);
    return return_value_XXH32_update_endian_1;
  }

  else
  {
    return_value_XXH32_update_endian_2=XXH32_update_endian(state_in, input, len, (enum anonymous_3)XXH_bigEndian);
    return return_value_XXH32_update_endian_2;
  }
}

// XXH32_update_endian
// file crc/xxhash.c line 285
static enum anonymous_13 XXH32_update_endian(void *state_in, const void *input, signed int len, enum anonymous_3 endian)
{
  struct XXH_state32_t *state = (struct XXH_state32_t *)state_in;
  const unsigned char *p = (const unsigned char *)input;
  const unsigned char * const bEnd = p + (signed long int)len;
  state->total_len = state->total_len + (unsigned long int)len;
  if(!(state->memsize + len >= 16))
  {
    memcpy_link2((void *)(state->memory + (signed long int)state->memsize), input, (unsigned long int)len);
    state->memsize = state->memsize + len;
    return (enum anonymous_13)XXH_OK;
  }

  else
  {
    if(!(state->memsize == 0))
    {
      memcpy_link2((void *)(state->memory + (signed long int)state->memsize), input, (unsigned long int)(16 - state->memsize));
      const unsigned int *p32 = (const unsigned int *)state->memory;
      unsigned int return_value_XXH_readLE32_1;
      return_value_XXH_readLE32_1=XXH_readLE32(p32, endian);
      state->v1 = state->v1 + return_value_XXH_readLE32_1 * 2246822519U;
      state->v1 = state->v1 << 13 | state->v1 >> 32 - 13;
      state->v1 = state->v1 * 2654435761U;
      p32 = p32 + 1l;
      unsigned int return_value_XXH_readLE32_2;
      return_value_XXH_readLE32_2=XXH_readLE32(p32, endian);
      state->v2 = state->v2 + return_value_XXH_readLE32_2 * 2246822519U;
      state->v2 = state->v2 << 13 | state->v2 >> 32 - 13;
      state->v2 = state->v2 * 2654435761U;
      p32 = p32 + 1l;
      unsigned int return_value_XXH_readLE32_3;
      return_value_XXH_readLE32_3=XXH_readLE32(p32, endian);
      state->v3 = state->v3 + return_value_XXH_readLE32_3 * 2246822519U;
      state->v3 = state->v3 << 13 | state->v3 >> 32 - 13;
      state->v3 = state->v3 * 2654435761U;
      p32 = p32 + 1l;
      unsigned int return_value_XXH_readLE32_4;
      return_value_XXH_readLE32_4=XXH_readLE32(p32, endian);
      state->v4 = state->v4 + return_value_XXH_readLE32_4 * 2246822519U;
      state->v4 = state->v4 << 13 | state->v4 >> 32 - 13;
      state->v4 = state->v4 * 2654435761U;
      p32 = p32 + 1l;
      p = p + (signed long int)(16 - state->memsize);
      state->memsize = 0;
    }

    if(bEnd + -16l >= p)
    {
      const unsigned char * const limit = bEnd - (signed long int)16;
      unsigned int v1 = state->v1;
      unsigned int v2 = state->v2;
      unsigned int v3 = state->v3;
      unsigned int v4 = state->v4;
      do
      {
        unsigned int return_value_XXH_readLE32_5;
        return_value_XXH_readLE32_5=XXH_readLE32((const unsigned int *)p, endian);
        v1 = v1 + return_value_XXH_readLE32_5 * 2246822519U;
        v1 = v1 << 13 | v1 >> 32 - 13;
        v1 = v1 * 2654435761U;
        p = p + (signed long int)4;
        unsigned int return_value_XXH_readLE32_6;
        return_value_XXH_readLE32_6=XXH_readLE32((const unsigned int *)p, endian);
        v2 = v2 + return_value_XXH_readLE32_6 * 2246822519U;
        v2 = v2 << 13 | v2 >> 32 - 13;
        v2 = v2 * 2654435761U;
        p = p + (signed long int)4;
        unsigned int return_value_XXH_readLE32_7;
        return_value_XXH_readLE32_7=XXH_readLE32((const unsigned int *)p, endian);
        v3 = v3 + return_value_XXH_readLE32_7 * 2246822519U;
        v3 = v3 << 13 | v3 >> 32 - 13;
        v3 = v3 * 2654435761U;
        p = p + (signed long int)4;
        unsigned int return_value_XXH_readLE32_8;
        return_value_XXH_readLE32_8=XXH_readLE32((const unsigned int *)p, endian);
        v4 = v4 + return_value_XXH_readLE32_8 * 2246822519U;
        v4 = v4 << 13 | v4 >> 32 - 13;
        v4 = v4 * 2654435761U;
        p = p + (signed long int)4;
      }
      while(limit >= p);
      state->v1 = v1;
      state->v2 = v2;
      state->v3 = v3;
      state->v4 = v4;
    }

    if(!(p >= bEnd))
    {
      memcpy_link2((void *)state->memory, (const void *)p, (unsigned long int)(bEnd - p));
      state->memsize = (signed int)(bEnd - p);
    }

    return (enum anonymous_13)XXH_OK;
  }
}

// XXH_readLE32
// file crc/xxhash.c line 159
static unsigned int XXH_readLE32(const unsigned int *ptr, enum anonymous_3 endian)
{
  unsigned int return_value_XXH_readLE32_align_1;
  return_value_XXH_readLE32_align_1=XXH_readLE32_align(ptr, endian, (enum anonymous_4)XXH_unaligned);
  return return_value_XXH_readLE32_align_1;
}

// XXH_readLE32_align
// file crc/xxhash.c line 151
static unsigned int XXH_readLE32_align(const unsigned int *ptr, enum anonymous_3 endian, enum anonymous_4 align)
{
  signed long int tmp_if_expr_2;
  signed long int return_value___builtin_bswap32_1;
  signed long int tmp_if_expr_4;
  signed long int return_value___builtin_bswap32_3;
  if((signed int)align == XXH_unaligned)
  {
    if((signed int)endian == XXH_littleEndian)
      tmp_if_expr_2 = (signed long int)((struct _uint32_t_S *)ptr)->v;

    else
    {
      return_value___builtin_bswap32_1=__builtin_bswap32((signed long int)((struct _uint32_t_S *)ptr)->v);
      tmp_if_expr_2 = return_value___builtin_bswap32_1;
    }
    return (unsigned int)tmp_if_expr_2;
  }

  else
  {
    if((signed int)endian == XXH_littleEndian)
      tmp_if_expr_4 = (signed long int)*ptr;

    else
    {
      return_value___builtin_bswap32_3=__builtin_bswap32((signed long int)*ptr);
      tmp_if_expr_4 = return_value___builtin_bswap32_3;
    }
    return (unsigned int)tmp_if_expr_4;
  }
}

// __bloom_check
// file lib/bloom.c line 91
static signed int __bloom_check(struct bloom *b, unsigned int *data, unsigned int nwords, signed int set)
{
  unsigned int hash[5l];
  signed int i;
  signed int was_set;
  i = 0;
  if(!(i >= 5))
  {
    hash[(signed long int)i]=hashes[(signed long int)i].fn((const void *)data, nwords, hashes[(signed long int)i].seed);
    hash[(signed long int)i] = (unsigned int)((unsigned long int)hash[(signed long int)i] % b->nentries);
    i = i + 1;
  }

  was_set = 0;
  i = 0;
  for( ; !(i >= 5); i = i + 1)
  {
    const unsigned int index = (const unsigned int)((unsigned long int)hash[(signed long int)i] / (sizeof(unsigned int) /*4ul*/  * (unsigned long int)8));
    const unsigned int bit = (const unsigned int)((unsigned long int)hash[(signed long int)i] & sizeof(unsigned int) /*4ul*/  * (unsigned long int)8 - (unsigned long int)1);
    if(!((b->map[(signed long int)index] & 1U << bit) == 0u))
      was_set = was_set + 1;

    if(!(set == 0))
      b->map[(signed long int)index] = b->map[(signed long int)index] | 1U << bit;

  }
  return (signed int)(was_set == 5);
}

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

// __fio_mutex_init
// file mutex.c line 33
extern signed int __fio_mutex_init(struct fio_mutex *mutex, signed int value)
{
  union anonymous_6 attr;
  union anonymous_6 cond;
  signed int ret;
  mutex->value = value;
  mutex->magic = (signed int)0x4d555445U;
  ret=pthread_mutexattr_init(&attr);
  if(!(ret == 0))
  {
    char *return_value_strerror_1;
    return_value_strerror_1=strerror(ret);
    log_err("pthread_mutexattr_init: %s\n", return_value_strerror_1);
    return ret;
  }

  ret=pthread_mutexattr_setpshared(&attr, 1);
  if(!(ret == 0))
  {
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(ret);
    log_err("pthread_mutexattr_setpshared: %s\n", return_value_strerror_2);
    return ret;
  }

  pthread_condattr_init(&cond);
  pthread_condattr_setpshared(&cond, 1);
  pthread_cond_init(&mutex->cond, &cond);
  ret=pthread_mutex_init(&mutex->lock, &attr);
  if(!(ret == 0))
  {
    char *return_value_strerror_3;
    return_value_strerror_3=strerror(ret);
    log_err("pthread_mutex_init: %s\n", return_value_strerror_3);
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

// __rb_erase_color
// file lib/rbtree.c line 136
static void __rb_erase_color(struct rb_node *node, struct rb_node *parent, struct rb_root *root)
{
  struct rb_node *other;
  _Bool tmp_if_expr_2;
  _Bool tmp_if_expr_4;
  _Bool tmp_if_expr_3;
  _Bool tmp_if_expr_1;
  _Bool tmp_if_expr_6;
  _Bool tmp_if_expr_8;
  _Bool tmp_if_expr_7;
  _Bool tmp_if_expr_5;
  while((_Bool)1)
  {
    if(!(node == ((struct rb_node *)NULL)))
    {
      if((1l & node->rb_parent_color) == 0l)
        goto __CPROVER_DUMP_L44;

    }

    if(node == root->rb_node)
      break;

    if(parent->rb_left == node)
    {
      other = parent->rb_right;
      if((1l & other->rb_parent_color) == 0l)
      {
        do
          other->rb_parent_color = other->rb_parent_color | (signed long int)1;
        while((_Bool)0);
        do
          parent->rb_parent_color = parent->rb_parent_color & (signed long int)~1;
        while((_Bool)0);
        __rb_rotate_left(parent, root);
        other = parent->rb_right;
      }

      if(other->rb_left == ((struct rb_node *)NULL))
        tmp_if_expr_2 = (_Bool)1;

      else
        tmp_if_expr_2 = (other->rb_left->rb_parent_color & (signed long int)1) != 0l ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_2)
      {
        if(other->rb_right == ((struct rb_node *)NULL))
          tmp_if_expr_3 = (_Bool)1;

        else
          tmp_if_expr_3 = (other->rb_right->rb_parent_color & (signed long int)1) != 0l ? (_Bool)1 : (_Bool)0;
        tmp_if_expr_4 = tmp_if_expr_3 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_4 = (_Bool)0;
      if(tmp_if_expr_4)
      {
        do
          other->rb_parent_color = other->rb_parent_color & (signed long int)~1;
        while((_Bool)0);
        node = parent;
        parent = (struct rb_node *)(node->rb_parent_color & (signed long int)~3);
      }

      else
      {
        if(other->rb_right == ((struct rb_node *)NULL))
          tmp_if_expr_1 = (_Bool)1;

        else
          tmp_if_expr_1 = (other->rb_right->rb_parent_color & (signed long int)1) != 0l ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_1)
        {
          struct rb_node *o_left = other->rb_left;
          if(!(o_left == ((struct rb_node *)NULL)))
            do
              o_left->rb_parent_color = o_left->rb_parent_color | (signed long int)1;
            while((_Bool)0);

          do
            other->rb_parent_color = other->rb_parent_color & (signed long int)~1;
          while((_Bool)0);
          __rb_rotate_right(other, root);
          other = parent->rb_right;
        }

        rb_set_color(other, (signed int)(parent->rb_parent_color & (signed long int)1));
        do
          parent->rb_parent_color = parent->rb_parent_color | (signed long int)1;
        while((_Bool)0);
        if(!(other->rb_right == ((struct rb_node *)NULL)))
          do
            other->rb_right->rb_parent_color = other->rb_right->rb_parent_color | (signed long int)1;
          while((_Bool)0);

        __rb_rotate_left(parent, root);
        node = root->rb_node;
        break;
      }
    }

    else
    {
      other = parent->rb_left;
      if((1l & other->rb_parent_color) == 0l)
      {
        do
          other->rb_parent_color = other->rb_parent_color | (signed long int)1;
        while((_Bool)0);
        do
          parent->rb_parent_color = parent->rb_parent_color & (signed long int)~1;
        while((_Bool)0);
        __rb_rotate_right(parent, root);
        other = parent->rb_left;
      }

      if(other->rb_left == ((struct rb_node *)NULL))
        tmp_if_expr_6 = (_Bool)1;

      else
        tmp_if_expr_6 = (other->rb_left->rb_parent_color & (signed long int)1) != 0l ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr_6)
      {
        if(other->rb_right == ((struct rb_node *)NULL))
          tmp_if_expr_7 = (_Bool)1;

        else
          tmp_if_expr_7 = (other->rb_right->rb_parent_color & (signed long int)1) != 0l ? (_Bool)1 : (_Bool)0;
        tmp_if_expr_8 = tmp_if_expr_7 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr_8 = (_Bool)0;
      if(tmp_if_expr_8)
      {
        do
          other->rb_parent_color = other->rb_parent_color & (signed long int)~1;
        while((_Bool)0);
        node = parent;
        parent = (struct rb_node *)(node->rb_parent_color & (signed long int)~3);
      }

      else
      {
        if(other->rb_left == ((struct rb_node *)NULL))
          tmp_if_expr_5 = (_Bool)1;

        else
          tmp_if_expr_5 = (other->rb_left->rb_parent_color & (signed long int)1) != 0l ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr_5)
        {
          struct rb_node *o_right = other->rb_right;
          if(!(o_right == ((struct rb_node *)NULL)))
            do
              o_right->rb_parent_color = o_right->rb_parent_color | (signed long int)1;
            while((_Bool)0);

          do
            other->rb_parent_color = other->rb_parent_color & (signed long int)~1;
          while((_Bool)0);
          __rb_rotate_left(other, root);
          other = parent->rb_left;
        }

        rb_set_color(other, (signed int)(parent->rb_parent_color & (signed long int)1));
        do
          parent->rb_parent_color = parent->rb_parent_color | (signed long int)1;
        while((_Bool)0);
        if(!(other->rb_left == ((struct rb_node *)NULL)))
          do
            other->rb_left->rb_parent_color = other->rb_left->rb_parent_color | (signed long int)1;
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
      node->rb_parent_color = node->rb_parent_color | (signed long int)1;
    while((_Bool)0);

}

// __rb_rotate_left
// file lib/rbtree.c line 25
static void __rb_rotate_left(struct rb_node *node, struct rb_root *root)
{
  struct rb_node *right = node->rb_right;
  struct rb_node *parent = (struct rb_node *)(node->rb_parent_color & (signed long int)~3);
  node->rb_right = right->rb_left;
  if(!(node->rb_right == ((struct rb_node *)NULL)))
    rb_set_parent_link1(right->rb_left, node);

  right->rb_left = node;
  rb_set_parent_link1(right, parent);
  if(!(parent == ((struct rb_node *)NULL)))
  {
    if(node == parent->rb_left)
      parent->rb_left = right;

    else
      parent->rb_right = right;
  }

  else
    root->rb_node = right;
  rb_set_parent_link1(node, right);
}

// __rb_rotate_right
// file lib/rbtree.c line 48
static void __rb_rotate_right(struct rb_node *node, struct rb_root *root)
{
  struct rb_node *left = node->rb_left;
  struct rb_node *parent = (struct rb_node *)(node->rb_parent_color & (signed long int)~3);
  node->rb_left = left->rb_right;
  if(!(node->rb_left == ((struct rb_node *)NULL)))
    rb_set_parent_link1(left->rb_right, node);

  left->rb_right = node;
  rb_set_parent_link1(left, parent);
  if(!(parent == ((struct rb_node *)NULL)))
  {
    if(node == parent->rb_right)
      parent->rb_right = left;

    else
      parent->rb_left = left;
  }

  else
    root->rb_node = left;
  rb_set_parent_link1(node, left);
}

// __read_block
// file t/dedupe.c line 119
static signed int __read_block(signed int fd, void *buf, signed long int offset, unsigned long int count)
{
  signed long int ret;
  ret=pread(fd, buf, count, offset);
  if(!(ret >= 0l))
  {
    perror("pread");
    return 1;
  }

  else
    if(ret == 0l)
      return 1;

    else
      if(!((unsigned long int)ret == count))
      {
        log_err("dedupe: short read on block\n");
        return 1;
      }

  return 0;
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
        signed int return_value_find_next_zero_1;
        return_value_find_next_zero_1=find_next_zero((signed int)pool->bitmap[(signed long int)i], (signed int)last_idx);
        idx = (unsigned int)return_value_find_next_zero_1;
        signed int return_value_blocks_free_2;
        return_value_blocks_free_2=blocks_free(pool, i, idx, nr_blocks);
        if(return_value_blocks_free_2 == 0)
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

// add_item
// file t/dedupe.c line 142
static void add_item(struct chunk *c, struct item *i)
{
  if(!(collision_check == 0u) || !(dump_output == 0u))
  {
    struct extent *e;
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct extent) /*24ul*/ );
    e = (struct extent *)return_value_malloc_1;
    e->offset = i->offset;
    flist_add_tail(&e->list, &c->extent_list[(signed long int)0]);
  }

  c->count = c->count + 1ul;
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
    memset_link1(ptr, 0, (unsigned long int)alloc_size);
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

// alloc_chunk
// file t/dedupe.c line 182
static struct chunk * alloc_chunk(void)
{
  struct chunk *c;
  void *return_value_malloc_2;
  if(!(collision_check == 0u) || !(dump_output == 0u))
  {
    void *return_value_malloc_1;
    return_value_malloc_1=malloc(sizeof(struct chunk) /*48ul*/  + sizeof(struct flist_head) /*16ul*/ );
    c = (struct chunk *)return_value_malloc_1;
    do
    {
      (&c->extent_list[(signed long int)0])->next = &c->extent_list[(signed long int)0];
      (&c->extent_list[(signed long int)0])->prev = &c->extent_list[(signed long int)0];
    }
    while((_Bool)0);
  }

  else
  {
    return_value_malloc_2=malloc(sizeof(struct chunk) /*48ul*/ );
    c = (struct chunk *)return_value_malloc_2;
  }
  return c;
}

// arch_ffz
// file arch/arch-x86_64.h line 45
static inline unsigned long int arch_ffz(unsigned long int bitmask)
{
  asm("bsf %1,%0" : "=r"(bitmask) : "r"(~bitmask) : );
  return bitmask;
}

// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr)
{
  signed long int return_value_strtol_1;
  return_value_strtol_1=strtol(__nptr, (char **)(void *)0, 10);
  return (signed int)return_value_strtol_1;
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

// blockdev_size
// file t/../os/os-linux.h line 133
static inline signed int blockdev_size(struct fio_file *f, unsigned long long int *bytes)
{
  signed int return_value_ioctl_1;
  return_value_ioctl_1=ioctl(f->fd, (unsigned long int)(2U << 0 + 8 + 8 + 14 | (unsigned int)(0x12 << 0 + 8) | (unsigned int)(114 << 0)) | sizeof(unsigned long int) /*8ul*/  << 0 + 8 + 8, bytes);
  if(return_value_ioctl_1 == 0)
    return 0;

  else
  {
    signed int *return_value___errno_location_2;
    return_value___errno_location_2=__errno_location();
    return *return_value___errno_location_2;
  }
}

// blocks_free
// file smalloc.c line 158
static signed int blocks_free(struct pool *pool, unsigned int pool_idx, unsigned int idx, unsigned long int nr_blocks)
{
  signed int return_value_blocks_iter_1;
  return_value_blocks_iter_1=blocks_iter(pool, pool_idx, idx, nr_blocks, mask_cmp);
  return return_value_blocks_iter_1;
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

// bloom_crc32c
// file lib/bloom.c line 26
static unsigned int bloom_crc32c(const void *buf, unsigned int len, unsigned int seed)
{
  unsigned int return_value_fio_crc32c_1;
  return_value_fio_crc32c_1=fio_crc32c((const unsigned char *)buf, (unsigned long int)len);
  return return_value_fio_crc32c_1;
}

// bloom_fnv
// file lib/bloom.c line 31
static unsigned int bloom_fnv(const void *buf, unsigned int len, unsigned int seed)
{
  unsigned long int return_value_fnv_1;
  return_value_fnv_1=fnv(buf, len, (unsigned long int)seed);
  return (unsigned int)return_value_fnv_1;
}

// bloom_free
// file t/../lib/bloom.h line 9
void bloom_free(struct bloom *b)
{
  free((void *)b->map);
  free((void *)b);
}

// bloom_new
// file t/../lib/bloom.h line 8
struct bloom * bloom_new(unsigned long int entries)
{
  struct bloom *b;
  unsigned long int no_uints;
  crc32c_intel_probe();
  void *return_value_malloc_1;
  return_value_malloc_1=malloc(sizeof(struct bloom) /*16ul*/ );
  b = (struct bloom *)return_value_malloc_1;
  b->nentries = entries;
  no_uints = ((entries + sizeof(unsigned int) /*4ul*/  * (unsigned long int)8) - (unsigned long int)1) / (sizeof(unsigned int) /*4ul*/  * (unsigned long int)8);
  unsigned long int tmp_statement_expression_2;
  unsigned long int _x = (unsigned long int)no_uints;
  unsigned long int _y = 1073741824UL;
  (void)(&_x == &_y);
  tmp_statement_expression_2 = _x > _y ? _x : _y;
  no_uints = tmp_statement_expression_2;
  void *return_value_calloc_3;
  return_value_calloc_3=calloc(no_uints, sizeof(unsigned int) /*4ul*/ );
  b->map = (unsigned int *)return_value_calloc_3;
  if(b->map == ((unsigned int *)NULL))
  {
    free((void *)b);
    return (struct bloom *)(void *)0;
  }

  else
    return b;
}

// bloom_set
// file t/../lib/bloom.h line 10
signed int bloom_set(struct bloom *b, unsigned int *data, unsigned int nwords)
{
  signed int return_value___bloom_check_1;
  return_value___bloom_check_1=__bloom_check(b, data, nwords, 1);
  return return_value___bloom_check_1;
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
  struct anonymous_5 cpu_mask;
  unsigned int last_seq;
  signed int i;
  signed int return_value_fio_cpuset_init_3;
  return_value_fio_cpuset_init_3=fio_cpuset_init(&cpu_mask);
  if(!(return_value_fio_cpuset_init_3 == 0))
  {
    signed int clock_thread_fn__1__1____err;
    signed int *return_value___errno_location_1;
    return_value___errno_location_1=__errno_location();
    clock_thread_fn__1__1____err = *return_value___errno_location_1;
    char *return_value_strerror_2;
    return_value_strerror_2=strerror(clock_thread_fn__1__1____err);
    log_err("clock cpuset init failed: %s\n", return_value_strerror_2);
    goto err_out;
  }

  unsigned long int __cpu = (unsigned long int)t->cpu;
  if(!(__cpu / 8ul >= sizeof(struct anonymous_5) /*128ul*/ ))
    ((unsigned long int *)(&cpu_mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] = ((unsigned long int *)(&cpu_mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] | (unsigned long int)1 << __cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ );

  else
    (unsigned long int)0;
  signed int return_value_gettid_6;
  return_value_gettid_6=gettid();
  signed int return_value_sched_setaffinity_7;
  return_value_sched_setaffinity_7=sched_setaffinity(return_value_gettid_6, sizeof(struct anonymous_5) /*128ul*/ , &cpu_mask);
  if(return_value_sched_setaffinity_7 == -1)
  {
    signed int __err;
    signed int *return_value___errno_location_4;
    return_value___errno_location_4=__errno_location();
    __err = *return_value___errno_location_4;
    char *return_value_strerror_5;
    return_value_strerror_5=strerror(__err);
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

// col_check
// file t/dedupe.c line 159
static signed int col_check(struct chunk *c, struct item *i)
{
  struct extent *e;
  char *cbuf;
  char *ibuf;
  signed int ret = 1;
  void *return_value_fio_memalign_1;
  return_value_fio_memalign_1=fio_memalign((unsigned long int)blocksize, (unsigned long int)blocksize);
  cbuf = (char *)return_value_fio_memalign_1;
  void *return_value_fio_memalign_2;
  return_value_fio_memalign_2=fio_memalign((unsigned long int)blocksize, (unsigned long int)blocksize);
  ibuf = (char *)return_value_fio_memalign_2;
  struct extent *tmp_statement_expression_3;
  const struct flist_head *__mptr = c->extent_list[(signed long int)0].next;
  tmp_statement_expression_3 = (struct extent *)((char *)__mptr - (signed long int)(unsigned long int)&((struct extent *)0)->list);
  e = tmp_statement_expression_3;
  signed int return_value_read_block_4;
  return_value_read_block_4=read_block(file.fd, (void *)cbuf, (signed long int)e->offset);
  signed int return_value_read_block_5;
  if(return_value_read_block_4 == 0)
  {
    return_value_read_block_5=read_block(file.fd, (void *)ibuf, (signed long int)i->offset);
    if(return_value_read_block_5 == 0)
      ret=memcmp((const void *)ibuf, (const void *)cbuf, (unsigned long int)blocksize);

  }


out:
  ;
  fio_memfree((void *)cbuf, (unsigned long int)blocksize);
  fio_memfree((void *)ibuf, (unsigned long int)blocksize);
  return ret;
}

// cpus_online
// file t/../os/os.h line 342
static inline unsigned int cpus_online(void)
{
  signed long int return_value_sysconf_1;
  return_value_sysconf_1=sysconf(84);
  return (unsigned int)return_value_sysconf_1;
}

// cpus_online_link1
// file os/os.h line 342
static inline unsigned int cpus_online_link1(void)
{
  signed long int return_value_sysconf_1_link1;
  return_value_sysconf_1_link1=sysconf(84);
  return (unsigned int)return_value_sysconf_1_link1;
}

// crc32c_intel
// file lib/../crc/crc32c.h line 27
extern unsigned int crc32c_intel(const unsigned char *data, unsigned long int length)
{
  unsigned int iquotient = (unsigned int)(length / (unsigned long int)8);
  unsigned int iremainder = (unsigned int)(length % (unsigned long int)8);
  unsigned long int *ptmp = (unsigned long int *)data;
  unsigned int crc = (unsigned int)~0;
  unsigned int tmp_post_1;
  do
  {
    tmp_post_1 = iquotient;
    iquotient = iquotient - 1u;
    if(tmp_post_1 == 0u)
      break;

    asm(".byte 0xf2, 0x48, 0xf, 0x38, 0xf1, 0xf1;" : "=S"(crc) : "0"(crc), "c"(*ptmp) : );
    ptmp = ptmp + 1l;
  }
  while((_Bool)1);
  if(!(iremainder == 0u))
    crc=crc32c_intel_le_hw_byte(crc, (unsigned char *)ptmp, (unsigned long int)iremainder);

  return crc;
}

// crc32c_intel_le_hw_byte
// file crc/crc32c-intel.c line 35
static unsigned int crc32c_intel_le_hw_byte(unsigned int crc, const unsigned char *data, unsigned long int length)
{
  unsigned long int tmp_post_1;
  do
  {
    tmp_post_1 = length;
    length = length - 1ul;
    if(tmp_post_1 == 0ul)
      break;

    asm(".byte 0xf2, 0xf, 0x38, 0xf0, 0xf1" : "=S"(crc) : "0"(crc), "c"(*data) : );
    data = data + 1l;
  }
  while((_Bool)1);
  return crc;
}

// crc32c_intel_probe
// file lib/../crc/crc32c.h line 28
extern void crc32c_intel_probe(void)
{
  if(crc32c_probed == 0)
  {
    unsigned int eax;
    unsigned int ebx;
    unsigned int ecx = (unsigned int)0;
    unsigned int edx;
    eax = (unsigned int)1;
    do_cpuid(&eax, &ebx, &ecx, &edx);
    crc32c_intel_available = (signed int)((ecx & (unsigned int)(1 << 20)) != (unsigned int)0);
    crc32c_probed = 1;
  }

}

// crc32c_sw
// file lib/../crc/crc32c.h line 23
extern unsigned int crc32c_sw(const unsigned char *data, unsigned long int length)
{
  unsigned int crc = (unsigned int)~0;
  unsigned long int tmp_post_1;
  const unsigned char *tmp_post_2;
  do
  {
    tmp_post_1 = length;
    length = length - 1ul;
    if(tmp_post_1 == 0ul)
      break;

    tmp_post_2 = data;
    data = data + 1l;
    crc = crc32c_table[(signed long int)(crc ^ (unsigned int)*tmp_post_2) & 0xFFL] ^ crc >> 8;
  }
  while((_Bool)1);
  return crc;
}

// crc_buf
// file t/dedupe.c line 261
static void crc_buf(void *buf, unsigned int *hash)
{
  struct fio_md5_ctx ctx = { .hash=hash, .block={ 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u, 0u }, .byte_count=0ul };
  fio_md5_init(&ctx);
  fio_md5_update(&ctx, (const unsigned char *)buf, blocksize);
  fio_md5_final(&ctx);
}

// debug_init
// file t/debug.c line 11
void debug_init(void)
{
  f_err = stderr;
}

// dedupe_check
// file t/dedupe.c line 422
static signed int dedupe_check(const char *filename, unsigned long int *nextents, unsigned long int *nchunks)
{
  unsigned long int dev_size;
  struct stat sb;
  signed int flags = 00;
  if(!(odirect == 0u))
    flags = flags | 040000;

  memset((void *)&file, 0, sizeof(struct fio_file) /*336ul*/ );
  char *return_value___strdup_1;
  return_value___strdup_1=__strdup(filename);
  file.file_name = return_value___strdup_1;
  file.fd=open(filename, flags);
  signed int return_value_fstat_2;
  signed int return_value_run_dedupe_threads_3;
  if(file.fd == -1)
    perror("open");

  else
  {
    return_value_fstat_2=fstat(file.fd, &sb);
    if(!(return_value_fstat_2 >= 0))
      perror("fstat");

    else
    {
      dev_size=get_size(&file, &sb);
      if(!(dev_size == 0ul))
      {
        if(!(use_bloom == 0u))
        {
          unsigned long int bloom_entries = (unsigned long int)8 * (dev_size / (unsigned long int)blocksize);
          bloom=bloom_new(bloom_entries);
        }

        printf("Will check <%s>, size <%llu>, using %u threads\n", filename, (unsigned long long int)dev_size, num_threads);
        return_value_run_dedupe_threads_3=run_dedupe_threads(&file, dev_size, nextents, nchunks);
        return return_value_run_dedupe_threads_3;
      }

    }
  }

err:
  ;
  if(!(file.fd == -1))
    close(file.fd);

  free((void *)file.file_name);
  return 1;
}

// do_cpuid
// file crc/../arch/arch-x86_64.h line 4
static inline void do_cpuid(unsigned int *eax, unsigned int *ebx, unsigned int *ecx, unsigned int *edx)
{
  asm("cpuid" : "=a"(*eax), "=b"(*ebx), "=c"(*ecx), "=d"(*edx) : "0"(*eax), "2"(*ecx) : "memory");
}

// do_work
// file t/dedupe.c line 278
static signed int do_work(struct worker_thread *thread, void *buf)
{
  unsigned int nblocks;
  unsigned int i;
  signed long int offset;
  signed int nitems = 0;
  unsigned long int ndupes = (unsigned long int)0;
  struct item *items;
  offset = (signed long int)thread->cur_offset;
  unsigned long int tmp_statement_expression_1;
  unsigned long int _x = thread->size;
  unsigned long int _y = (unsigned long int)chunk_size;
  (void)(&_x == &_y);
  tmp_statement_expression_1 = _x < _y ? _x : _y;
  nblocks=read_blocks(thread->fd, buf, offset, tmp_statement_expression_1);
  if(nblocks == 0u)
    return 1;

  else
  {
    void *return_value_malloc_2;
    return_value_malloc_2=malloc(sizeof(struct item) /*24ul*/  * (unsigned long int)nblocks);
    items = (struct item *)return_value_malloc_2;
    i = (unsigned int)0;
    for( ; !(i >= nblocks); i = i + 1u)
    {
      void *thisptr = buf + (signed long int)(i * blocksize);
      (items + (signed long int)i)->offset = (unsigned long int)offset;
      crc_buf(thisptr, (items + (signed long int)i)->hash);
      offset = offset + (signed long int)blocksize;
      nitems = nitems + 1;
    }
    insert_chunks(items, (unsigned int)nitems, &ndupes);
    free((void *)items);
    thread->items = thread->items + (unsigned long int)nitems;
    thread->dupes = thread->dupes + ndupes;
    return 0;
  }
}

// fill_clock_gettime
// file gettime.c line 134
static signed int fill_clock_gettime(struct timespec *ts)
{
  signed int return_value_clock_gettime_1;
  return_value_clock_gettime_1=clock_gettime(4, ts);
  return return_value_clock_gettime_1;
}

// fill_redzone
// file smalloc.c line 286
static void fill_redzone(struct block_hdr *hdr)
{
  unsigned int *postred;
  void *return_value_postred_ptr_1;
  return_value_postred_ptr_1=postred_ptr(hdr);
  postred = (unsigned int *)return_value_postred_ptr_1;
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
  unsigned long int return_value_arch_ffz_1;
  return_value_arch_ffz_1=arch_ffz((unsigned long int)word);
  return (signed int)(return_value_arch_ffz_1 + (unsigned long int)start);
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
static inline signed int fio_cpuset_exit(struct anonymous_5 *mask)
{
  return 0;
}

// fio_cpuset_init
// file os/os-linux.h line 68
static inline signed int fio_cpuset_init(struct anonymous_5 *mask)
{
  do
    __builtin_memset((void *)mask, 0, sizeof(struct anonymous_5) /*128ul*/ );
  while((_Bool)0);
  return 0;
}

// fio_crc32c
// file lib/../crc/crc32c.h line 36
static inline unsigned int fio_crc32c(const unsigned char *buf, unsigned long int len)
{
  unsigned int return_value_crc32c_intel_1;
  if(!(crc32c_intel_available == 0))
  {
    return_value_crc32c_intel_1=crc32c_intel(buf, len);
    return return_value_crc32c_intel_1;
  }

  else
  {
    unsigned int return_value_crc32c_sw_2;
    return_value_crc32c_sw_2=crc32c_sw(buf, len);
    return return_value_crc32c_sw_2;
  }
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

// fio_md5_final
// file t/../crc/md5.h line 26
extern void fio_md5_final(struct fio_md5_ctx *mctx)
{
  const unsigned int offset = (const unsigned int)(mctx->byte_count & (unsigned long int)0x3f);
  char *p = (char *)mctx->block + (signed long int)offset;
  signed int padding = (signed int)((unsigned int)56 - (offset + (unsigned int)1));
  char *tmp_post_1 = p;
  p = p + 1l;
  *tmp_post_1 = (char)0x80;
  if(!(padding >= 0))
  {
    memset_link2((void *)p, 0x00, (unsigned long int)padding + sizeof(unsigned long int) /*8ul*/ );
    md5_transform(mctx->hash, mctx->block);
    p = (char *)mctx->block;
    padding = 56;
  }

  memset_link2((void *)p, 0, (unsigned long int)padding);
  mctx->block[(signed long int)14] = (unsigned int)(mctx->byte_count << 3);
  mctx->block[(signed long int)15] = (unsigned int)(mctx->byte_count >> 29);
  md5_transform(mctx->hash, mctx->block);
}

// fio_md5_init
// file t/../crc/md5.h line 27
extern void fio_md5_init(struct fio_md5_ctx *mctx)
{
  mctx->hash[(signed long int)0] = (unsigned int)0x67452301;
  mctx->hash[(signed long int)1] = 0xefcdab89;
  mctx->hash[(signed long int)2] = 0x98badcfe;
  mctx->hash[(signed long int)3] = (unsigned int)0x10325476;
}

// fio_md5_update
// file t/../crc/md5.h line 25
extern void fio_md5_update(struct fio_md5_ctx *mctx, const unsigned char *data, unsigned int len)
{
  const unsigned int avail = (const unsigned int)(sizeof(unsigned int [16l]) /*64ul*/  - (mctx->byte_count & (unsigned long int)0x3f));
  mctx->byte_count = mctx->byte_count + (unsigned long int)len;
  if(!(len >= avail))
    memcpy_link1((void *)((char *)mctx->block + (signed long int)(sizeof(unsigned int [16l]) /*64ul*/  - (unsigned long int)avail)), (const void *)data, (unsigned long int)len);

  else
  {
    memcpy_link1((void *)((char *)mctx->block + (signed long int)(sizeof(unsigned int [16l]) /*64ul*/  - (unsigned long int)avail)), (const void *)data, (unsigned long int)avail);
    md5_transform(mctx->hash, mctx->block);
    data = data + (signed long int)avail;
    len = len - avail;
    for( ; (unsigned long int)len >= sizeof(unsigned int [16l]) /*64ul*/ ; len = len - (unsigned int)sizeof(unsigned int [16l]) /*64ul*/ )
    {
      memcpy_link1((void *)mctx->block, (const void *)data, sizeof(unsigned int [16l]) /*64ul*/ );
      md5_transform(mctx->hash, mctx->block);
      data = data + (signed long int)sizeof(unsigned int [16l]) /*64ul*/ ;
    }
    memcpy_link1((void *)mctx->block, (const void *)data, (unsigned long int)len);
  }
}

// fio_memalign
// file t/../memalign.h line 4
extern void * fio_memalign(unsigned long int alignment, unsigned long int size)
{
  struct align_footer *f;
  void *ptr;
  void *ret = (void *)0;
  /* assertion !(alignment & (alignment - 1)) */
  assert(!((alignment & alignment - (unsigned long int)1) != 0ul));
  ptr=malloc((size + alignment + size + sizeof(struct align_footer) /*4ul*/ ) - (unsigned long int)1);
  if(!(ptr == NULL))
  {
    ret = (void *)(char *)((unsigned long int)(ptr + (signed long int)(alignment - (unsigned long int)1)) & ~(alignment - (unsigned long int)1));
    f = (struct align_footer *)(ret + (signed long int)size);
    f->offset = (unsigned int)((unsigned long int)ret - (unsigned long int)ptr);
  }

  return ret;
}

// fio_memfree
// file t/../memalign.h line 5
extern void fio_memfree(void *ptr, unsigned long int size)
{
  struct align_footer *f = (struct align_footer *)(ptr + (signed long int)size);
  free(ptr - (signed long int)f->offset);
}

// fio_monotonic_clocktest
// file gettime.c line 560
extern signed int fio_monotonic_clocktest(signed int debug)
{
  struct clock_thread *cthreads;
  unsigned int nr_cpus;
  nr_cpus=cpus_online_link1();
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
    pthread_mutex_init(&t->lock, (const union anonymous_6 *)(void *)0);
    pthread_mutex_init(&t->started, (const union anonymous_6 *)(void *)0);
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

// fio_mutex_down
// file t/../mutex.h line 32
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
  signed int return_value_mutex_timed_out_1;
  while(mutex->value == 0)
  {
    if(!(ret == 0))
      break;

    mutex->waiters = mutex->waiters + 1;
    ret=pthread_cond_timedwait(&mutex->cond, &mutex->lock, &t);
    if(ret == 110)
    {
      return_value_mutex_timed_out_1=mutex_timed_out(&tv_s, seconds);
      if(return_value_mutex_timed_out_1 == 0)
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
// file t/../mutex.h line 28
extern struct fio_mutex * fio_mutex_init(signed int value)
{
  struct fio_mutex *mutex = (struct fio_mutex *)(void *)0;
  void *return_value_mmap_1;
  return_value_mmap_1=mmap((void *)0, sizeof(struct fio_mutex) /*104ul*/ , 0x1 | 0x2, 0x20 | 0x01, -1, (signed long int)0);
  mutex = (struct fio_mutex *)(void *)return_value_mmap_1;
  if(mutex == (struct fio_mutex *)-1)
  {
    perror("mmap mutex");
    return (struct fio_mutex *)(void *)0;
  }

  else
  {
    signed int return_value___fio_mutex_init_2;
    return_value___fio_mutex_init_2=__fio_mutex_init(mutex, value);
    if(return_value___fio_mutex_init_2 == 0)
      return mutex;

    else
    {
      fio_mutex_remove(mutex);
      return (struct fio_mutex *)(void *)0;
    }
  }
}

// fio_mutex_remove
// file t/../mutex.h line 30
extern void fio_mutex_remove(struct fio_mutex *mutex)
{
  __fio_mutex_remove(mutex);
  munmap((void *)mutex, sizeof(struct fio_mutex) /*104ul*/ );
}

// fio_mutex_up
// file t/../mutex.h line 31
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
  struct fio_rwlock *fio_rwlock_init__1__lock;
  union anonymous_7 attr;
  signed int ret;
  void *return_value_mmap_1;
  return_value_mmap_1=mmap((void *)0, sizeof(struct fio_rwlock) /*64ul*/ , 0x1 | 0x2, 0x20 | 0x01, -1, (signed long int)0);
  fio_rwlock_init__1__lock = (struct fio_rwlock *)(void *)return_value_mmap_1;
  if(fio_rwlock_init__1__lock == (struct fio_rwlock *)-1)
  {
    perror("mmap rwlock");
    fio_rwlock_init__1__lock = (struct fio_rwlock *)(void *)0;
  }

  else
  {
    fio_rwlock_init__1__lock->magic = (signed int)0x52574c4fU;
    ret=pthread_rwlockattr_init(&attr);
    if(!(ret == 0))
    {
      char *return_value_strerror_2;
      return_value_strerror_2=strerror(ret);
      log_err("pthread_rwlockattr_init: %s\n", return_value_strerror_2);
      goto err;
    }

    ret=pthread_rwlockattr_setpshared(&attr, 1);
    if(!(ret == 0))
    {
      char *return_value_strerror_3;
      return_value_strerror_3=strerror(ret);
      log_err("pthread_rwlockattr_setpshared: %s\n", return_value_strerror_3);
      goto destroy_attr;
    }

    ret=pthread_rwlock_init(&fio_rwlock_init__1__lock->lock, &attr);
    if(!(ret == 0))
    {
      char *return_value_strerror_4;
      return_value_strerror_4=strerror(ret);
      log_err("pthread_rwlock_init: %s\n", return_value_strerror_4);
      goto destroy_attr;
    }

    pthread_rwlockattr_destroy(&attr);
    return fio_rwlock_init__1__lock;

  destroy_attr:
    ;
    pthread_rwlockattr_destroy(&attr);
  }

err:
  ;
  if(!(fio_rwlock_init__1__lock == ((struct fio_rwlock *)NULL)))
    fio_rwlock_remove(fio_rwlock_init__1__lock);

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

// fmix32
// file crc/murmur3.c line 11
static inline unsigned int fmix32(unsigned int h)
{
  h = h ^ h >> 16;
  h = h * 0x85ebca6b;
  h = h ^ h >> 13;
  h = h * 0xc2b2ae35;
  h = h ^ h >> 16;
  return h;
}

// fnv
// file lib/../crc/fnv.h line 6
unsigned long int fnv(const void *buf, unsigned int len, unsigned long int hval)
{
  const unsigned long int *ptr = (const unsigned long int *)buf;
  const unsigned long int *end = (const unsigned long int *)((void *)buf + (signed long int)len);
  const unsigned long int *tmp_post_1;
  for( ; !(ptr >= end); hval = hval ^ (unsigned long int)*tmp_post_1)
  {
    hval = hval * 0x100000001b3ULL;
    tmp_post_1 = ptr;
    ptr = ptr + 1l;
  }
  return hval;
}

// fstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 466
static inline signed int fstat(signed int __fd, struct stat *__statbuf)
{
  signed int return_value___fxstat_1;
  return_value___fxstat_1=__fxstat(1, __fd, __statbuf);
  return return_value___fxstat_1;
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

// get_size
// file t/dedupe.c line 82
static unsigned long int get_size(struct fio_file *f, struct stat *sb)
{
  unsigned long int ret;
  if((61440u & sb->st_mode) == 24576u)
  {
    unsigned long long int bytes;
    signed int return_value_blockdev_size_1;
    return_value_blockdev_size_1=blockdev_size(f, &bytes);
    if(!(return_value_blockdev_size_1 == 0))
    {
      log_err("dedupe: failed getting bdev size\n");
      return (unsigned long int)0;
    }

    ret = bytes;
  }

  else
    ret = (unsigned long int)sb->st_size;
  return ret & ~((unsigned long int)blocksize - (unsigned long int)1);
}

// get_work
// file t/dedupe.c line 100
static signed int get_work(unsigned long int *offset, unsigned long int *size)
{
  unsigned long int this_chunk;
  signed int ret = 1;
  fio_mutex_down(size_lock);
  unsigned long int tmp_statement_expression_1;
  if(!(cur_offset >= total_size))
  {
    *offset = cur_offset;
    unsigned long int _x = (unsigned long int)chunk_size;
    unsigned long int _y = total_size - cur_offset;
    (void)(&_x == &_y);
    tmp_statement_expression_1 = _x < _y ? _x : _y;
    this_chunk = tmp_statement_expression_1;
    *size = this_chunk;
    cur_offset = cur_offset + this_chunk;
    ret = 0;
  }

  fio_mutex_up(size_lock);
  return ret;
}

// gettid
// file os/os-linux.h line 109
static inline signed int gettid(void)
{
  signed long int return_value_syscall_1;
  return_value_syscall_1=syscall((signed long int)186);
  return (signed int)return_value_syscall_1;
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

// insert_chunk
// file t/dedupe.c line 195
static void insert_chunk(struct item *i)
{
  struct rb_node **p;
  struct rb_node *parent;
  struct chunk *c;
  signed int diff;
  p = &rb_root.rb_node;
  parent = (struct rb_node *)(void *)0;
  struct chunk *tmp_statement_expression_1;
  while(!(*p == ((struct rb_node *)NULL)))
  {
    parent = *p;
    const struct rb_node *__mptr = parent;
    tmp_statement_expression_1 = (struct chunk *)((char *)__mptr - (signed long int)(unsigned long int)&((struct chunk *)0)->rb_node);
    c = tmp_statement_expression_1;
    diff=memcmp((const void *)i->hash, (const void *)c->hash, sizeof(unsigned int [4l]) /*16ul*/ );
    if(!(diff >= 0))
      p = &(*p)->rb_left;

    else
      if(diff >= 1)
        p = &(*p)->rb_right;

      else
      {
        signed int ret;
        if(collision_check == 0u)
          goto add;

        fio_mutex_up(rb_lock);
        ret=col_check(c, i);
        fio_mutex_down(rb_lock);
        if(ret == 0)
          goto add;

        p = &(*p)->rb_right;
      }
  }
  c=alloc_chunk();
  rb_set_parent(&c->rb_node, &c->rb_node);
  c->count = (unsigned long int)0;
  memcpy((void *)c->hash, (const void *)i->hash, sizeof(unsigned int [4l]) /*16ul*/ );
  rb_link_node(&c->rb_node, parent, p);
  rb_insert_color(&c->rb_node, &rb_root);

add:
  ;
  add_item(c, i);
}

// insert_chunks
// file t/dedupe.c line 239
static void insert_chunks(struct item *items, unsigned int nitems, unsigned long int *ndupes)
{
  signed int i;
  fio_mutex_down(rb_lock);
  i = 0;
  for( ; !((unsigned int)i >= nitems); i = i + 1)
    if(!(bloom == ((struct bloom *)NULL)))
    {
      unsigned int s;
      signed int r;
      s = (unsigned int)(sizeof(unsigned int [4l]) /*16ul*/  / sizeof(unsigned int) /*4ul*/ );
      r=bloom_set(bloom, (items + (signed long int)i)->hash, s);
      *ndupes = *ndupes + (unsigned long int)r;
    }

    else
      insert_chunk(&items[(signed long int)i]);
  fio_mutex_up(rb_lock);
}

// iter_rb_tree
// file t/dedupe.c line 498
static void iter_rb_tree(unsigned long int *nextents, unsigned long int *nchunks)
{
  struct rb_node *n;
  *nextents = (unsigned long int)0;
  *nchunks = *nextents;
  n=rb_first(&rb_root);
  struct chunk *tmp_statement_expression_1;
  if(!(n == ((struct rb_node *)NULL)))
    do
    {
      struct chunk *c;
      const struct rb_node *__mptr = n;
      tmp_statement_expression_1 = (struct chunk *)((char *)__mptr - (signed long int)(unsigned long int)&((struct chunk *)0)->rb_node);
      c = tmp_statement_expression_1;
      *nchunks = *nchunks + 1ul;
      *nextents = *nextents + c->count;
      if(!(dump_output == 0u))
        show_chunk(c);

      n=rb_next(n);
    }
    while(!(n == ((struct rb_node *)NULL)));

}

// jhash
// file lib/../hash.h line 110
static inline unsigned int jhash(const void *key, unsigned int length, unsigned int initval)
{
  const unsigned char *k = (const unsigned char *)key;
  unsigned int a;
  unsigned int b;
  unsigned int c = (unsigned int)(0x9e37fffffffc0001UL + (unsigned long int)length + (unsigned long int)initval);
  b = c;
  a = b;
  for( ; length >= 13u; k = k + (signed long int)12)
  {
    a = a + (unsigned int)*k;
    b = b + (unsigned int)k[(signed long int)4];
    c = c + (unsigned int)k[(signed long int)8];
    a = a - c;
    unsigned int return_value_rol32_1;
    return_value_rol32_1=rol32(c, (unsigned int)4);
    a = a ^ return_value_rol32_1;
    c = c + b;
    b = b - a;
    unsigned int return_value_rol32_2;
    return_value_rol32_2=rol32(a, (unsigned int)6);
    b = b ^ return_value_rol32_2;
    a = a + c;
    c = c - b;
    unsigned int return_value_rol32_3;
    return_value_rol32_3=rol32(b, (unsigned int)8);
    c = c ^ return_value_rol32_3;
    b = b + a;
    a = a - c;
    unsigned int return_value_rol32_4;
    return_value_rol32_4=rol32(c, (unsigned int)16);
    a = a ^ return_value_rol32_4;
    c = c + b;
    b = b - a;
    unsigned int return_value_rol32_5;
    return_value_rol32_5=rol32(a, (unsigned int)19);
    b = b ^ return_value_rol32_5;
    a = a + c;
    c = c - b;
    unsigned int return_value_rol32_6;
    return_value_rol32_6=rol32(b, (unsigned int)4);
    c = c ^ return_value_rol32_6;
    b = b + a;
    length = length - (unsigned int)12;
  }
  switch(length)
  {
    case (unsigned int)12:
      c = c + ((unsigned int)k[(signed long int)11] << 24);
    case (unsigned int)11:
      c = c + ((unsigned int)k[(signed long int)10] << 16);
    case (unsigned int)10:
      c = c + ((unsigned int)k[(signed long int)9] << 8);
    case (unsigned int)9:
      c = c + (unsigned int)k[(signed long int)8];
    case (unsigned int)8:
      b = b + ((unsigned int)k[(signed long int)7] << 24);
    case (unsigned int)7:
      b = b + ((unsigned int)k[(signed long int)6] << 16);
    case (unsigned int)6:
      b = b + ((unsigned int)k[(signed long int)5] << 8);
    case (unsigned int)5:
      b = b + (unsigned int)k[(signed long int)4];
    case (unsigned int)4:
      a = a + ((unsigned int)k[(signed long int)3] << 24);
    case (unsigned int)3:
      a = a + ((unsigned int)k[(signed long int)2] << 16);
    case (unsigned int)2:
      a = a + ((unsigned int)k[(signed long int)1] << 8);
    case (unsigned int)1:
    {
      a = a + (unsigned int)k[(signed long int)0];
      c = c ^ b;
      unsigned int return_value_rol32_7;
      return_value_rol32_7=rol32(b, (unsigned int)14);
      c = c - return_value_rol32_7;
      a = a ^ c;
      unsigned int return_value_rol32_8;
      return_value_rol32_8=rol32(c, (unsigned int)11);
      a = a - return_value_rol32_8;
      b = b ^ a;
      unsigned int return_value_rol32_9;
      return_value_rol32_9=rol32(a, (unsigned int)25);
      b = b - return_value_rol32_9;
      c = c ^ b;
      unsigned int return_value_rol32_10;
      return_value_rol32_10=rol32(b, (unsigned int)16);
      c = c - return_value_rol32_10;
      a = a ^ c;
      unsigned int return_value_rol32_11;
      return_value_rol32_11=rol32(c, (unsigned int)4);
      a = a - return_value_rol32_11;
      b = b ^ a;
      unsigned int return_value_rol32_12;
      return_value_rol32_12=rol32(a, (unsigned int)14);
      b = b - return_value_rol32_12;
      c = c ^ b;
      unsigned int return_value_rol32_13;
      return_value_rol32_13=rol32(b, (unsigned int)24);
      c = c - return_value_rol32_13;
    }
    case (unsigned int)0:

    default:
      return c;
  }
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
// file t/dedupe.c line 535
signed int main(signed int argc, char **argv)
{
  unsigned long int nextents = (unsigned long int)0;
  unsigned long int nchunks = (unsigned long int)0;
  signed int c;
  signed int ret;
  debug_init();
  signed int return_value_atoi_1;
  signed int return_value_atoi_2;
  signed int return_value_atoi_3;
  signed int return_value_atoi_4;
  signed int return_value_atoi_5;
  signed int return_value_atoi_6;
  signed int return_value_atoi_7;
  signed int return_value_usage_8;
  do
  {
    c=getopt(argc, argv, "b:t:d:o:c:p:B:");
    if(c == -1)
      break;

    switch(c)
    {
      case 98:
      {
        return_value_atoi_1=atoi(optarg);
        blocksize = (unsigned int)return_value_atoi_1;
        break;
      }
      case 116:
      {
        return_value_atoi_2=atoi(optarg);
        num_threads = (unsigned int)return_value_atoi_2;
        break;
      }
      case 100:
      {
        return_value_atoi_3=atoi(optarg);
        dump_output = (unsigned int)return_value_atoi_3;
        break;
      }
      case 111:
      {
        return_value_atoi_4=atoi(optarg);
        odirect = (unsigned int)return_value_atoi_4;
        break;
      }
      case 99:
      {
        return_value_atoi_5=atoi(optarg);
        collision_check = (unsigned int)return_value_atoi_5;
        break;
      }
      case 112:
      {
        return_value_atoi_6=atoi(optarg);
        print_progress = (unsigned int)return_value_atoi_6;
        break;
      }
      case 66:
      {
        return_value_atoi_7=atoi(optarg);
        use_bloom = (unsigned int)return_value_atoi_7;
        break;
      }
      case 63:

      default:
      {
        return_value_usage_8=usage(argv);
        return return_value_usage_8;
      }
    }
  }
  while((_Bool)1);
  if(!(collision_check == 0u) || !(dump_output == 0u))
    use_bloom = (unsigned int)0;

  if(num_threads == 0u)
    num_threads=cpus_online();

  signed int return_value_usage_9;
  if(argc == optind)
  {
    return_value_usage_9=usage(argv);
    return return_value_usage_9;
  }

  else
  {
    sinit();
    rb_root = (struct rb_root){ .rb_node=(struct rb_node *)(void *)0 };
    rb_lock=fio_mutex_init(1);
    ret=dedupe_check(argv[(signed long int)optind], &nextents, &nchunks);
    if(ret == 0)
    {
      if(bloom == ((struct bloom *)NULL))
        iter_rb_tree(&nextents, &nchunks);

      show_stat(nextents, nchunks);
    }

    fio_mutex_remove(rb_lock);
    if(!(bloom == ((struct bloom *)NULL)))
      bloom_free(bloom);

    scleanup();
    return ret;
  }
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

// md5_transform
// file crc/md5.c line 8
static void md5_transform(unsigned int *hash, const unsigned int *in)
{
  unsigned int a;
  unsigned int b;
  unsigned int c;
  unsigned int d;
  a = hash[(signed long int)0];
  b = hash[(signed long int)1];
  c = hash[(signed long int)2];
  d = hash[(signed long int)3];
  a = a + (d ^ b & (c ^ d)) + in[(signed long int)0] + 0xd76aa478;
  a = (a << 7 | a >> 32 - 7) + b;
  d = d + (c ^ a & (b ^ c)) + in[(signed long int)1] + 0xe8c7b756;
  d = (d << 12 | d >> 32 - 12) + a;
  c = c + (b ^ d & (a ^ b)) + in[(signed long int)2] + (unsigned int)0x242070db;
  c = (c << 17 | c >> 32 - 17) + d;
  b = b + (a ^ c & (d ^ a)) + in[(signed long int)3] + 0xc1bdceee;
  b = (b << 22 | b >> 32 - 22) + c;
  a = a + (d ^ b & (c ^ d)) + in[(signed long int)4] + 0xf57c0faf;
  a = (a << 7 | a >> 32 - 7) + b;
  d = d + (c ^ a & (b ^ c)) + in[(signed long int)5] + (unsigned int)0x4787c62a;
  d = (d << 12 | d >> 32 - 12) + a;
  c = c + (b ^ d & (a ^ b)) + in[(signed long int)6] + 0xa8304613;
  c = (c << 17 | c >> 32 - 17) + d;
  b = b + (a ^ c & (d ^ a)) + in[(signed long int)7] + 0xfd469501;
  b = (b << 22 | b >> 32 - 22) + c;
  a = a + (d ^ b & (c ^ d)) + in[(signed long int)8] + (unsigned int)0x698098d8;
  a = (a << 7 | a >> 32 - 7) + b;
  d = d + (c ^ a & (b ^ c)) + in[(signed long int)9] + 0x8b44f7af;
  d = (d << 12 | d >> 32 - 12) + a;
  c = c + (b ^ d & (a ^ b)) + in[(signed long int)10] + 0xffff5bb1;
  c = (c << 17 | c >> 32 - 17) + d;
  b = b + (a ^ c & (d ^ a)) + in[(signed long int)11] + 0x895cd7be;
  b = (b << 22 | b >> 32 - 22) + c;
  a = a + (d ^ b & (c ^ d)) + in[(signed long int)12] + (unsigned int)0x6b901122;
  a = (a << 7 | a >> 32 - 7) + b;
  d = d + (c ^ a & (b ^ c)) + in[(signed long int)13] + 0xfd987193;
  d = (d << 12 | d >> 32 - 12) + a;
  c = c + (b ^ d & (a ^ b)) + in[(signed long int)14] + 0xa679438e;
  c = (c << 17 | c >> 32 - 17) + d;
  b = b + (a ^ c & (d ^ a)) + in[(signed long int)15] + (unsigned int)0x49b40821;
  b = (b << 22 | b >> 32 - 22) + c;
  a = a + (c ^ d & (b ^ c)) + in[(signed long int)1] + 0xf61e2562;
  a = (a << 5 | a >> 32 - 5) + b;
  d = d + (b ^ c & (a ^ b)) + in[(signed long int)6] + 0xc040b340;
  d = (d << 9 | d >> 32 - 9) + a;
  c = c + (a ^ b & (d ^ a)) + in[(signed long int)11] + (unsigned int)0x265e5a51;
  c = (c << 14 | c >> 32 - 14) + d;
  b = b + (d ^ a & (c ^ d)) + in[(signed long int)0] + 0xe9b6c7aa;
  b = (b << 20 | b >> 32 - 20) + c;
  a = a + (c ^ d & (b ^ c)) + in[(signed long int)5] + 0xd62f105d;
  a = (a << 5 | a >> 32 - 5) + b;
  d = d + (b ^ c & (a ^ b)) + in[(signed long int)10] + (unsigned int)0x02441453;
  d = (d << 9 | d >> 32 - 9) + a;
  c = c + (a ^ b & (d ^ a)) + in[(signed long int)15] + 0xd8a1e681;
  c = (c << 14 | c >> 32 - 14) + d;
  b = b + (d ^ a & (c ^ d)) + in[(signed long int)4] + 0xe7d3fbc8;
  b = (b << 20 | b >> 32 - 20) + c;
  a = a + (c ^ d & (b ^ c)) + in[(signed long int)9] + (unsigned int)0x21e1cde6;
  a = (a << 5 | a >> 32 - 5) + b;
  d = d + (b ^ c & (a ^ b)) + in[(signed long int)14] + 0xc33707d6;
  d = (d << 9 | d >> 32 - 9) + a;
  c = c + (a ^ b & (d ^ a)) + in[(signed long int)3] + 0xf4d50d87;
  c = (c << 14 | c >> 32 - 14) + d;
  b = b + (d ^ a & (c ^ d)) + in[(signed long int)8] + (unsigned int)0x455a14ed;
  b = (b << 20 | b >> 32 - 20) + c;
  a = a + (c ^ d & (b ^ c)) + in[(signed long int)13] + 0xa9e3e905;
  a = (a << 5 | a >> 32 - 5) + b;
  d = d + (b ^ c & (a ^ b)) + in[(signed long int)2] + 0xfcefa3f8;
  d = (d << 9 | d >> 32 - 9) + a;
  c = c + (a ^ b & (d ^ a)) + in[(signed long int)7] + (unsigned int)0x676f02d9;
  c = (c << 14 | c >> 32 - 14) + d;
  b = b + (d ^ a & (c ^ d)) + in[(signed long int)12] + 0x8d2a4c8a;
  b = (b << 20 | b >> 32 - 20) + c;
  a = a + (b ^ c ^ d) + in[(signed long int)5] + 0xfffa3942;
  a = (a << 4 | a >> 32 - 4) + b;
  d = d + (a ^ b ^ c) + in[(signed long int)8] + 0x8771f681;
  d = (d << 11 | d >> 32 - 11) + a;
  c = c + (d ^ a ^ b) + in[(signed long int)11] + (unsigned int)0x6d9d6122;
  c = (c << 16 | c >> 32 - 16) + d;
  b = b + (c ^ d ^ a) + in[(signed long int)14] + 0xfde5380c;
  b = (b << 23 | b >> 32 - 23) + c;
  a = a + (b ^ c ^ d) + in[(signed long int)1] + 0xa4beea44;
  a = (a << 4 | a >> 32 - 4) + b;
  d = d + (a ^ b ^ c) + in[(signed long int)4] + (unsigned int)0x4bdecfa9;
  d = (d << 11 | d >> 32 - 11) + a;
  c = c + (d ^ a ^ b) + in[(signed long int)7] + 0xf6bb4b60;
  c = (c << 16 | c >> 32 - 16) + d;
  b = b + (c ^ d ^ a) + in[(signed long int)10] + 0xbebfbc70;
  b = (b << 23 | b >> 32 - 23) + c;
  a = a + (b ^ c ^ d) + in[(signed long int)13] + (unsigned int)0x289b7ec6;
  a = (a << 4 | a >> 32 - 4) + b;
  d = d + (a ^ b ^ c) + in[(signed long int)0] + 0xeaa127fa;
  d = (d << 11 | d >> 32 - 11) + a;
  c = c + (d ^ a ^ b) + in[(signed long int)3] + 0xd4ef3085;
  c = (c << 16 | c >> 32 - 16) + d;
  b = b + (c ^ d ^ a) + in[(signed long int)6] + (unsigned int)0x04881d05;
  b = (b << 23 | b >> 32 - 23) + c;
  a = a + (b ^ c ^ d) + in[(signed long int)9] + 0xd9d4d039;
  a = (a << 4 | a >> 32 - 4) + b;
  d = d + (a ^ b ^ c) + in[(signed long int)12] + 0xe6db99e5;
  d = (d << 11 | d >> 32 - 11) + a;
  c = c + (d ^ a ^ b) + in[(signed long int)15] + (unsigned int)0x1fa27cf8;
  c = (c << 16 | c >> 32 - 16) + d;
  b = b + (c ^ d ^ a) + in[(signed long int)2] + 0xc4ac5665;
  b = (b << 23 | b >> 32 - 23) + c;
  a = a + (c ^ (b | ~d)) + in[(signed long int)0] + 0xf4292244;
  a = (a << 6 | a >> 32 - 6) + b;
  d = d + (b ^ (a | ~c)) + in[(signed long int)7] + (unsigned int)0x432aff97;
  d = (d << 10 | d >> 32 - 10) + a;
  c = c + (a ^ (d | ~b)) + in[(signed long int)14] + 0xab9423a7;
  c = (c << 15 | c >> 32 - 15) + d;
  b = b + (d ^ (c | ~a)) + in[(signed long int)5] + 0xfc93a039;
  b = (b << 21 | b >> 32 - 21) + c;
  a = a + (c ^ (b | ~d)) + in[(signed long int)12] + (unsigned int)0x655b59c3;
  a = (a << 6 | a >> 32 - 6) + b;
  d = d + (b ^ (a | ~c)) + in[(signed long int)3] + 0x8f0ccc92;
  d = (d << 10 | d >> 32 - 10) + a;
  c = c + (a ^ (d | ~b)) + in[(signed long int)10] + 0xffeff47d;
  c = (c << 15 | c >> 32 - 15) + d;
  b = b + (d ^ (c | ~a)) + in[(signed long int)1] + 0x85845dd1;
  b = (b << 21 | b >> 32 - 21) + c;
  a = a + (c ^ (b | ~d)) + in[(signed long int)8] + (unsigned int)0x6fa87e4f;
  a = (a << 6 | a >> 32 - 6) + b;
  d = d + (b ^ (a | ~c)) + in[(signed long int)15] + 0xfe2ce6e0;
  d = (d << 10 | d >> 32 - 10) + a;
  c = c + (a ^ (d | ~b)) + in[(signed long int)6] + 0xa3014314;
  c = (c << 15 | c >> 32 - 15) + d;
  b = b + (d ^ (c | ~a)) + in[(signed long int)13] + (unsigned int)0x4e0811a1;
  b = (b << 21 | b >> 32 - 21) + c;
  a = a + (c ^ (b | ~d)) + in[(signed long int)4] + 0xf7537e82;
  a = (a << 6 | a >> 32 - 6) + b;
  d = d + (b ^ (a | ~c)) + in[(signed long int)11] + 0xbd3af235;
  d = (d << 10 | d >> 32 - 10) + a;
  c = c + (a ^ (d | ~b)) + in[(signed long int)2] + (unsigned int)0x2ad7d2bb;
  c = (c << 15 | c >> 32 - 15) + d;
  b = b + (d ^ (c | ~a)) + in[(signed long int)9] + 0xeb86d391;
  b = (b << 21 | b >> 32 - 21) + c;
  hash[(signed long int)0] = hash[(signed long int)0] + a;
  hash[(signed long int)1] = hash[(signed long int)1] + b;
  hash[(signed long int)2] = hash[(signed long int)2] + c;
  hash[(signed long int)3] = hash[(signed long int)3] + d;
}

// memcpy
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy(void * restrict __dest, const void * restrict __src, unsigned long int __len)
{
  void *return_value___builtin___memcpy_chk_1;
  return_value___builtin___memcpy_chk_1=__builtin___memcpy_chk(__dest, __src, __len, 18446744073709551615ul);
  return return_value___builtin___memcpy_chk_1;
}

// memcpy_link1
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy_link1(void * restrict __dest_link1, const void * restrict __src_link1, unsigned long int __len_link1)
{
  void *return_value___builtin___memcpy_chk_1_link1;
  return_value___builtin___memcpy_chk_1_link1=__builtin___memcpy_chk(__dest_link1, __src_link1, __len_link1, 18446744073709551615ul);
  return return_value___builtin___memcpy_chk_1_link1;
}

// memcpy_link2
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 50
static inline void * memcpy_link2(void * restrict __dest_link2, const void * restrict __src_link2, unsigned long int __len_link2)
{
  void *return_value___builtin___memcpy_chk_1_link2;
  return_value___builtin___memcpy_chk_1_link2=__builtin___memcpy_chk(__dest_link2, __src_link2, __len_link2, 18446744073709551615ul);
  return return_value___builtin___memcpy_chk_1_link2;
}

// memset
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset(void *__dest, signed int __ch, unsigned long int __len)
{
  void *return_value___builtin___memset_chk_1;
  return_value___builtin___memset_chk_1=__builtin___memset_chk(__dest, __ch, __len, 18446744073709551615ul);
  return return_value___builtin___memset_chk_1;
}

// memset_link1
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset_link1(void *__dest_link1, signed int __ch_link1, unsigned long int __len_link1)
{
  void *return_value___builtin___memset_chk_1_link1;
  return_value___builtin___memset_chk_1_link1=__builtin___memset_chk(__dest_link1, __ch_link1, __len_link1, 18446744073709551615ul);
  return return_value___builtin___memset_chk_1_link1;
}

// memset_link2
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 78
static inline void * memset_link2(void *__dest_link2, signed int __ch_link2, unsigned long int __len_link2)
{
  void *return_value___builtin___memset_chk_1_link2;
  return_value___builtin___memset_chk_1_link2=__builtin___memset_chk(__dest_link2, __ch_link2, __len_link2, 18446744073709551615ul);
  return return_value___builtin___memset_chk_1_link2;
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
// file t/../fio_time.h line 8
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

// murmur3_tail
// file crc/murmur3.c line 22
static unsigned int murmur3_tail(const unsigned char *data, const signed int nblocks, unsigned int len, const unsigned int c1, const unsigned int c2, unsigned int h1)
{
  const unsigned char *tail = (const unsigned char *)(data + (signed long int)(nblocks * 4));
  unsigned int k1 = (unsigned int)0;
  switch(len & (unsigned int)3)
  {
    case (unsigned int)3:
      k1 = k1 ^ (unsigned int)((signed int)tail[(signed long int)2] << 16);
    case (unsigned int)2:
      k1 = k1 ^ (unsigned int)((signed int)tail[(signed long int)1] << 8);
    case (unsigned int)1:
    {
      k1 = k1 ^ (unsigned int)tail[(signed long int)0];
      k1 = k1 * c1;
      k1=rotl32(k1, (signed char)15);
      k1 = k1 * c2;
      h1 = h1 ^ k1;
    }
  }
  unsigned int return_value_fmix32_1;
  return_value_fmix32_1=fmix32(h1 ^ len);
  return return_value_fmix32_1;
}

// murmurhash3
// file lib/../crc/murmur3.h line 6
unsigned int murmurhash3(const void *key, unsigned int len, unsigned int seed)
{
  const unsigned char *data = (const unsigned char *)key;
  const signed int nblocks = (const signed int)(len / (unsigned int)4);
  unsigned int h1 = seed;
  const unsigned int c1 = 0xcc9e2d51;
  const unsigned int c2 = (const unsigned int)0x1b873593;
  const unsigned int *blocks = (const unsigned int *)(data + (signed long int)(nblocks * 4));
  signed int i = -nblocks;
  for( ; !(i == 0); i = i + 1)
  {
    unsigned int k1 = blocks[(signed long int)i];
    k1 = k1 * c1;
    k1=rotl32(k1, (signed char)15);
    k1 = k1 * c2;
    h1 = h1 ^ k1;
    h1=rotl32(h1, (signed char)13);
    h1 = h1 * (unsigned int)5 + 0xe6546b64;
  }
  unsigned int return_value_murmur3_tail_1;
  return_value_murmur3_tail_1=murmur3_tail(data, nblocks, len, c1, c2, h1);
  return return_value_murmur3_tail_1;
}

// mutex_timed_out
// file mutex.c line 95
static signed int mutex_timed_out(struct timeval *t, unsigned int seconds)
{
  unsigned long int return_value_mtime_since_now_1;
  return_value_mtime_since_now_1=mtime_since_now(t);
  return (signed int)(return_value_mtime_since_now_1 >= (unsigned long int)(seconds * (unsigned int)1000));
}

// open
// file /usr/include/x86_64-linux-gnu/bits/fcntl2.h line 41
static inline signed int open(const char *__path, signed int __oflag, ...)
{
  signed int return_value___builtin_va_arg_pack_len_1;
  return_value___builtin_va_arg_pack_len_1=__builtin_va_arg_pack_len();
  if(return_value___builtin_va_arg_pack_len_1 >= 2)
    __open_too_many_args();

  signed int return_value___builtin_va_arg_pack_len_3;
  signed int return_value___builtin_va_arg_pack_len_7;
  return_value___builtin_va_arg_pack_len_7=__builtin_va_arg_pack_len();
  signed int return_value___open_2_6;
  if(!(return_value___builtin_va_arg_pack_len_7 >= 1))
  {
    return_value___open_2_6=__open_2(__path, __oflag);
    return return_value___open_2_6;
  }

  else
  {
    void *return_value___builtin_va_arg_pack_8;
    return_value___builtin_va_arg_pack_8=__builtin_va_arg_pack();
    signed int return_value___open_alias_9;
    return_value___open_alias_9=__open_alias(__path, __oflag, return_value___builtin_va_arg_pack_8);
    return return_value___open_alias_9;
  }
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

// pread
// file /usr/include/x86_64-linux-gnu/bits/unistd.h line 87
static inline signed long int pread(signed int __fd, void *__buf, unsigned long int __nbytes, signed long int __offset)
{
  signed long int return_value___pread64_chk_1;
  signed long int return_value___pread64_chk_warn_2;
  signed long int return_value___pread64_alias_3;
  return_value___pread64_alias_3=__pread64_alias(__fd, __buf, __nbytes, __offset);
  return return_value___pread64_alias_3;
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

// ptr_valid
// file smalloc.c line 91
static inline signed int ptr_valid(struct pool *pool, void *ptr)
{
  unsigned int pool_size = (unsigned int)(pool->nr_blocks * (unsigned long int)32 * sizeof(unsigned int) /*4ul*/  * (unsigned long int)8);
  _Bool tmp_if_expr_1;
  if(ptr >= pool->map)
    tmp_if_expr_1 = ptr < pool->map + (signed long int)pool_size ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr_1 = (_Bool)0;
  return (signed int)tmp_if_expr_1;
}

// rb_erase
// file lib/rbtree.c line 222
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
      parent = (struct rb_node *)(node->rb_parent_color & (signed long int)~3);
      color = (signed int)(node->rb_parent_color & (signed long int)1);
      if(!(child == ((struct rb_node *)NULL)))
        rb_set_parent_link1(child, parent);

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
      if(!((-4l & old->rb_parent_color) == 0l))
      {
        if(((struct rb_node *)(-4l & old->rb_parent_color))->rb_left == old)
          ((struct rb_node *)(old->rb_parent_color & (signed long int)~3))->rb_left = node;

        else
          ((struct rb_node *)(old->rb_parent_color & (signed long int)~3))->rb_right = node;
      }

      else
        root->rb_node = node;
      rb_set_parent_link1(old->rb_left, node);
      if(!(old->rb_right == ((struct rb_node *)NULL)))
        rb_set_parent_link1(old->rb_right, node);

      goto color;
    }
  parent = (struct rb_node *)(node->rb_parent_color & (signed long int)~3);
  color = (signed int)(node->rb_parent_color & (signed long int)1);
  if(!(child == ((struct rb_node *)NULL)))
    rb_set_parent_link1(child, parent);

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
// file t/../lib/rbtree.h line 143
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
// file t/../lib/rbtree.h line 139
extern void rb_insert_color(struct rb_node *node, struct rb_root *root)
{
  struct rb_node *parent;
  struct rb_node *gparent;
  do
  {
    parent = (struct rb_node *)(node->rb_parent_color & (signed long int)~3);
    if(parent == ((struct rb_node *)NULL))
      break;

    if(!((1l & parent->rb_parent_color) == 0l))
      break;

    gparent = (struct rb_node *)(parent->rb_parent_color & (signed long int)~3);
    if(parent == gparent->rb_left)
    {
      struct rb_node *uncle = gparent->rb_right;
      if(!(uncle == ((struct rb_node *)NULL)))
      {
        if((1l & uncle->rb_parent_color) == 0l)
        {
          do
            uncle->rb_parent_color = uncle->rb_parent_color | (signed long int)1;
          while((_Bool)0);
          do
            parent->rb_parent_color = parent->rb_parent_color | (signed long int)1;
          while((_Bool)0);
          do
            gparent->rb_parent_color = gparent->rb_parent_color & (signed long int)~1;
          while((_Bool)0);
          node = gparent;
          continue;
        }

      }

      if(parent->rb_right == node)
      {
        struct rb_node *rb_insert_color__1__1__1__2__tmp;
        __rb_rotate_left(parent, root);
        rb_insert_color__1__1__1__2__tmp = parent;
        parent = node;
        node = rb_insert_color__1__1__1__2__tmp;
      }

      do
        parent->rb_parent_color = parent->rb_parent_color | (signed long int)1;
      while((_Bool)0);
      do
        gparent->rb_parent_color = gparent->rb_parent_color & (signed long int)~1;
      while((_Bool)0);
      __rb_rotate_right(gparent, root);
    }

    else
    {
      struct rb_node *rb_insert_color__1__1__2__1__uncle = gparent->rb_left;
      if(!(rb_insert_color__1__1__2__1__uncle == ((struct rb_node *)NULL)))
      {
        if(!((1l & rb_insert_color__1__1__2__1__uncle->rb_parent_color) == 0l))
          goto __CPROVER_DUMP_L12;

        do
          rb_insert_color__1__1__2__1__uncle->rb_parent_color = rb_insert_color__1__1__2__1__uncle->rb_parent_color | (signed long int)1;
        while((_Bool)0);
        do
          parent->rb_parent_color = parent->rb_parent_color | (signed long int)1;
        while((_Bool)0);
        do
          gparent->rb_parent_color = gparent->rb_parent_color & (signed long int)~1;
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
          parent->rb_parent_color = parent->rb_parent_color | (signed long int)1;
        while((_Bool)0);
        do
          gparent->rb_parent_color = gparent->rb_parent_color & (signed long int)~1;
        while((_Bool)0);
        __rb_rotate_left(gparent, root);
      }
    }
  }
  while((_Bool)1);
  do
    root->rb_node->rb_parent_color = root->rb_node->rb_parent_color | (signed long int)1;
  while((_Bool)0);
}

// rb_link_node
// file t/../lib/rbtree.h line 146
static inline void rb_link_node(struct rb_node *node, struct rb_node *parent, struct rb_node **rb_link)
{
  node->rb_parent_color = (signed long int)(unsigned long int)parent;
  node->rb_right = (struct rb_node *)(void *)0;
  node->rb_left = node->rb_right;
  *rb_link = node;
}

// rb_next
// file t/../lib/rbtree.h line 144
extern struct rb_node * rb_next(struct rb_node *node)
{
  struct rb_node *parent;
  if((struct rb_node *)(-4l & node->rb_parent_color) == node)
    return (struct rb_node *)(void *)0;

  else
    if(!(node->rb_right == ((struct rb_node *)NULL)))
    {
      node = node->rb_right;
      for( ; !(node->rb_left == ((struct rb_node *)NULL)); node = node->rb_left)
        ;
      return (struct rb_node *)node;
    }

    else
    {
      do
      {
        parent = (struct rb_node *)(node->rb_parent_color & (signed long int)~3);
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

// rb_set_color
// file lib/rbtree.h line 127
static inline void rb_set_color(struct rb_node *rb, signed int color)
{
  rb->rb_parent_color = rb->rb_parent_color & (signed long int)~1 | (signed long int)color;
}

// rb_set_parent
// file t/../lib/rbtree.h line 123
static inline void rb_set_parent(struct rb_node *rb, struct rb_node *p)
{
  rb->rb_parent_color = (signed long int)((unsigned long int)(rb->rb_parent_color & (signed long int)3) | (unsigned long int)p);
}

// rb_set_parent_link1
// file lib/rbtree.h line 123
static inline void rb_set_parent_link1(struct rb_node *rb_link1, struct rb_node *p_link1)
{
  rb_link1->rb_parent_color = (signed long int)((unsigned long int)(rb_link1->rb_parent_color & (signed long int)3) | (unsigned long int)p_link1);
}

// read_block
// file t/dedupe.c line 137
static signed int read_block(signed int fd, void *buf, signed long int offset)
{
  signed int return_value___read_block_1;
  return_value___read_block_1=__read_block(fd, buf, offset, (unsigned long int)blocksize);
  return return_value___read_block_1;
}

// read_blocks
// file t/dedupe.c line 270
static unsigned int read_blocks(signed int fd, void *buf, signed long int offset, unsigned long int size)
{
  signed int return_value___read_block_1;
  return_value___read_block_1=__read_block(fd, buf, offset, size);
  if(!(return_value___read_block_1 == 0))
    return (unsigned int)0;

  else
    return (unsigned int)(size / (unsigned long int)blocksize);
}

// rol32
// file lib/../hash.h line 82
static inline unsigned int rol32(unsigned int word, unsigned int shift)
{
  return word << shift | word >> (unsigned int)32 - shift;
}

// rotl32
// file crc/murmur3.c line 3
static inline unsigned int rotl32(unsigned int x, signed char r)
{
  return x << (signed int)r | x >> 32 - (signed int)r;
}

// run_dedupe_threads
// file t/dedupe.c line 376
static signed int run_dedupe_threads(struct fio_file *f, unsigned long int dev_size, unsigned long int *nextents, unsigned long int *nchunks)
{
  struct worker_thread *threads;
  unsigned long int nitems;
  unsigned long int total_items;
  signed int i;
  signed int err = 0;
  total_size = dev_size;
  total_items = dev_size / (unsigned long int)blocksize;
  cur_offset = (unsigned long int)0;
  size_lock=fio_mutex_init(1);
  void *return_value_malloc_1;
  return_value_malloc_1=malloc((unsigned long int)num_threads * sizeof(struct worker_thread) /*56ul*/ );
  threads = (struct worker_thread *)return_value_malloc_1;
  i = 0;
  for( ; !((unsigned int)i >= num_threads); i = i + 1)
  {
    memset((void *)&threads[(signed long int)i], 0, sizeof(struct worker_thread) /*56ul*/ );
    (threads + (signed long int)i)->fd = f->fd;
    err=pthread_create(&(threads + (signed long int)i)->thread, (const union pthread_attr_t *)(void *)0, thread_fn, (void *)&threads[(signed long int)i]);
    if(!(err == 0))
    {
      log_err("fio: thread startup failed\n");
      break;
    }

  }
  show_progress(threads, total_items);
  nitems = (unsigned long int)0;
  *nextents = (unsigned long int)0;
  *nchunks = (unsigned long int)1;
  i = 0;
  for( ; !((unsigned int)i >= num_threads); i = i + 1)
  {
    void *ret;
    pthread_join((threads + (signed long int)i)->thread, &ret);
    nitems = nitems + (threads + (signed long int)i)->items;
    *nchunks = *nchunks + (threads + (signed long int)i)->dupes;
  }
  printf("Threads(%u): %lu items processed\n", num_threads, nitems);
  *nextents = nitems;
  *nchunks = nitems - *nchunks;
  fio_mutex_remove(size_lock);
  free((void *)threads);
  return err;
}

// scalloc
// file smalloc.c line 493
extern void * scalloc(unsigned long int nmemb, unsigned long int size)
{
  void *return_value_smalloc_1;
  return_value_smalloc_1=smalloc(nmemb * size);
  return return_value_smalloc_1;
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
// file smalloc.c line 349
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
      signed int return_value_ptr_valid_1;
      return_value_ptr_valid_1=ptr_valid(&mp[(signed long int)i], ptr);
      if(!(return_value_ptr_valid_1 == 0))
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
  void *return_value_postred_ptr_1;
  return_value_postred_ptr_1=postred_ptr(hdr);
  postred = (unsigned int *)return_value_postred_ptr_1;
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
    signed int return_value_ptr_valid_1;
    return_value_ptr_valid_1=ptr_valid(pool, ptr);
    /* assertion ptr_valid(pool, ptr) */
    assert(return_value_ptr_valid_1 != 0);
    sfree_check_redzone(hdr);
    offset = (unsigned long int)(ptr - pool->map);
    i = (unsigned int)(offset / ((unsigned long int)32 * sizeof(unsigned int) /*4ul*/  * (unsigned long int)8));
    idx = (unsigned int)((offset % ((unsigned long int)32 * sizeof(unsigned int) /*4ul*/  * (unsigned long int)8)) / (unsigned long int)32);
    pool_lock(pool);
    unsigned long int return_value_size_to_blocks_2;
    return_value_size_to_blocks_2=size_to_blocks(hdr->size);
    clear_blocks(pool, i, idx, return_value_size_to_blocks_2);
    if(!((unsigned long int)i >= pool->next_non_full))
      pool->next_non_full = (unsigned long int)i;

    unsigned long int return_value_size_to_blocks_3;
    return_value_size_to_blocks_3=size_to_blocks(hdr->size);
    pool->free_blocks = pool->free_blocks + return_value_size_to_blocks_3;
    pool_unlock(pool);
  }

}

// show_chunk
// file t/dedupe.c line 468
static void show_chunk(struct chunk *c)
{
  struct flist_head *n;
  struct extent *e;
  printf("c hash %8x %8x %8x %8x, count %lu\n", c->hash[(signed long int)0], c->hash[(signed long int)1], c->hash[(signed long int)2], c->hash[(signed long int)3], (unsigned long int)c->count);
  n = (&c->extent_list[(signed long int)0])->next;
  struct extent *tmp_statement_expression_1;
  for( ; !(n == c->extent_list); n = n->next)
  {
    const struct flist_head *__mptr = n;
    tmp_statement_expression_1 = (struct extent *)((char *)__mptr - (signed long int)(unsigned long int)&((struct extent *)0)->list);
    e = tmp_statement_expression_1;
    printf("\toffset %llu\n", (unsigned long long int)e->offset);
  }
}

// show_progress
// file t/dedupe.c line 334
static void show_progress(struct worker_thread *threads, unsigned long int total)
{
  unsigned long int last_nitems = (unsigned long int)0;
  struct timeval last_tv;
  fio_gettime(&last_tv, (void *)0);
  while(!(print_progress == 0u))
  {
    unsigned long int this_items;
    unsigned long int nitems = (unsigned long int)0;
    unsigned long int tdiff;
    float perc;
    signed int some_done = 0;
    signed int i = 0;
    for( ; !((unsigned int)i >= num_threads); i = i + 1)
    {
      nitems = nitems + (threads + (signed long int)i)->items;
      some_done = (threads + (signed long int)i)->done;
      if(!(some_done == 0))
        break;

    }
    if(!(some_done == 0))
      break;

    perc = (float)nitems / (float)total;
    perc = perc * (float)100.0;
    this_items = nitems - last_nitems;
    this_items = this_items * (unsigned long int)blocksize;
    tdiff=mtime_since_now(&last_tv);
    if(!(tdiff == 0ul))
    {
      this_items = (this_items * (unsigned long int)1000) / (tdiff * (unsigned long int)1024);
      printf("%3.2f%% done (%luKB/sec)\r", perc, this_items);
      last_nitems = nitems;
      fio_gettime(&last_tv, (void *)0);
    }

    else
      printf("%3.2f%% done\r", perc);
    fflush(stdout);
    usleep((unsigned int)250000);
  }
}

// show_stat
// file t/dedupe.c line 480
static void show_stat(unsigned long int nextents, unsigned long int nchunks)
{
  double perc;
  double ratio;
  printf("Extents=%lu, Unique extents=%lu\n", (unsigned long int)nextents, (unsigned long int)nchunks);
  if(!(nchunks == 0ul))
  {
    ratio = (double)nextents / (double)nchunks;
    printf("De-dupe ratio: 1:%3.2f\n", ratio - 1.0);
  }

  else
    printf("De-dupe ratio: 1:infinite\n");
  perc = 1.00 - (double)nchunks / (double)nextents;
  perc = perc * 100.0;
  printf("Fio setting: dedupe_percentage=%u\n", (signed int)(perc + 0.50));
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
// file smalloc.c line 459
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
    memset_link1(ptr, 0, size);
  }

  return ptr;
}

// smalloc_strdup
// file smalloc.c line 498
extern char * smalloc_strdup(const char *str)
{
  char *ptr = (char *)(void *)0;
  unsigned long int return_value_strlen_1;
  return_value_strlen_1=strlen(str);
  void *return_value_smalloc_2;
  return_value_smalloc_2=smalloc(return_value_strlen_1 + (unsigned long int)1);
  ptr = (char *)return_value_smalloc_2;
  if(!(ptr == ((char *)NULL)))
    strcpy(ptr, str);

  return ptr;
}

// strcpy
// file /usr/include/x86_64-linux-gnu/bits/string3.h line 108
static inline char * strcpy(char * restrict __dest, const char * restrict __src)
{
  char *return_value___builtin___strcpy_chk_1;
  return_value___builtin___strcpy_chk_1=__builtin___strcpy_chk(__dest, __src, 18446744073709551615ul);
  return return_value___builtin___strcpy_chk_1;
}

// thread_fn
// file t/dedupe.c line 311
static void * thread_fn(void *data)
{
  struct worker_thread *thread = (struct worker_thread *)data;
  void *buf;
  buf=fio_memalign((unsigned long int)blocksize, (unsigned long int)chunk_size);
  do
  {
    signed int return_value_get_work_1;
    return_value_get_work_1=get_work(&thread->cur_offset, &thread->size);
    if(!(return_value_get_work_1 == 0))
    {
      thread->err = 1;
      break;
    }

    signed int return_value_do_work_2;
    return_value_do_work_2=do_work(thread, buf);
    if(!(return_value_do_work_2 == 0))
    {
      thread->err = 1;
      break;
    }

  }
  while((_Bool)1);
  thread->done = 1;
  fio_memfree(buf, (unsigned long int)chunk_size);
  return (void *)0;
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
// file t/dedupe.c line 521
static signed int usage(char **argv)
{
  log_err("Check for dedupable blocks on a device/file\n\n");
  log_err("%s: [options] <device or file>\n", argv[(signed long int)0]);
  log_err("\t-b\tChunk size to use\n");
  log_err("\t-t\tNumber of threads to use\n");
  log_err("\t-d\tFull extent/chunk debug output\n");
  log_err("\t-o\tUse O_DIRECT\n");
  log_err("\t-c\tFull collision check\n");
  log_err("\t-B\tUse probabilistic bloom filter\n");
  log_err("\t-p\tPrint progress indicator\n");
  return 1;
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

