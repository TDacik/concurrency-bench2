// #anon_enum$EMPTY=0$FULL=1
// file ior-thread.c line 69
enum anonymous$8 { EMPTY=0, FULL=1 };

// #anon_enum$LZMA_CHECK_NONE=0$LZMA_CHECK_CRC32=1$LZMA_CHECK_CRC64=4$LZMA_CHECK_SHA256=10
// file /usr/include/lzma/check.h line 27
enum anonymous { LZMA_CHECK_NONE=0, LZMA_CHECK_CRC32=1, LZMA_CHECK_CRC64=4, LZMA_CHECK_SHA256=10 };

// #anon_enum$LZMA_OK=0$LZMA_STREAM_END=1$LZMA_NO_CHECK=2$LZMA_UNSUPPORTED_CHECK=3$LZMA_GET_CHECK=4$LZMA_MEM_ERROR=5$LZMA_MEMLIMIT_ERROR=6$LZMA_FORMAT_ERROR=7$LZMA_OPTIONS_ERROR=8$LZMA_DATA_ERROR=9$LZMA_BUF_ERROR=10$LZMA_PROG_ERROR=11
// file /usr/include/lzma/base.h line 57
enum anonymous$11 { LZMA_OK=0, LZMA_STREAM_END=1, LZMA_NO_CHECK=2, LZMA_UNSUPPORTED_CHECK=3, LZMA_GET_CHECK=4, LZMA_MEM_ERROR=5, LZMA_MEMLIMIT_ERROR=6, LZMA_FORMAT_ERROR=7, LZMA_OPTIONS_ERROR=8, LZMA_DATA_ERROR=9, LZMA_BUF_ERROR=10, LZMA_PROG_ERROR=11 };

// #anon_enum$LZMA_RESERVED_ENUM=0
// file /usr/include/lzma/base.h line 44
enum anonymous$3 { LZMA_RESERVED_ENUM=0 };

// #anon_enum$LZMA_RUN=0$LZMA_SYNC_FLUSH=1$LZMA_FULL_FLUSH=2$LZMA_FINISH=3
// file /usr/include/lzma/base.h line 250
enum anonymous$12 { LZMA_RUN=0, LZMA_SYNC_FLUSH=1, LZMA_FULL_FLUSH=2, LZMA_FINISH=3 };

// tag-#anon#ST[*{*{V}$V$(*{V}$V$|U64|U64)->*{V}$V$}$*{V}$V$(*{V}$V$|U64|U64)->*{V}$V$$'alloc'||*{V(*{V}$V$|*{V}$V$)->V}$V(*{V}$V$|*{V}$V$)->V$'free'||*{V}$V$'opaque'|]
// file /usr/include/lzma/base.h line 349
struct anonymous$2;

// tag-#anon#ST[*{S8}$S8$'next_in'||U32'avail_in'||U32'total_in_lo32'||U32'total_in_hi32'||U32'$pad0'||*{S8}$S8$'next_out'||U32'avail_out'||U32'total_out_lo32'||U32'total_out_hi32'||U32'$pad1'||*{V}$V$'state'||*{*{V}$V$(*{V}$V$|S32|S32)->*{V}$V$}$*{V}$V$(*{V}$V$|S32|S32)->*{V}$V$$'bzalloc'||*{V(*{V}$V$|*{V}$V$)->V}$V(*{V}$V$|*{V}$V$)->V$'bzfree'||*{V}$V$'opaque'|]
// file /usr/include/bzlib.h line 49
struct anonymous$1;

// tag-#anon#ST[*{cS8}$cS8$'name'||*{S64(*{SYM#tag-io_t#}$SYM#tag-io_t#$|*{V}$V$|S64)->S64}$S64(*{SYM#tag-io_t#}$SYM#tag-io_t#$|*{V}$V$|S64)->S64$'read'||*{S64(*{SYM#tag-io_t#}$SYM#tag-io_t#$|*{V}$V$|S64)->S64}$S64(*{SYM#tag-io_t#}$SYM#tag-io_t#$|*{V}$V$|S64)->S64$'peek'||*{S64(*{SYM#tag-io_t#}$SYM#tag-io_t#$)->S64}$S64(*{SYM#tag-io_t#}$SYM#tag-io_t#$)->S64$'tell'||*{S64(*{SYM#tag-io_t#}$SYM#tag-io_t#$|S64|S32)->S64}$S64(*{SYM#tag-io_t#}$SYM#tag-io_t#$|S64|S32)->S64$'seek'||*{V(*{SYM#tag-io_t#}$SYM#tag-io_t#$)->V}$V(*{SYM#tag-io_t#}$SYM#tag-io_t#$)->V$'close'|]
// file ../../../libwandio/wandio.h line 82
struct anonymous$10;

// tag-#anon#ST[*{cS8}$cS8$'name'||*{S64(*{SYM#tag-iow_t#}$SYM#tag-iow_t#$|*{cS8}$cS8$|S64)->S64}$S64(*{SYM#tag-iow_t#}$SYM#tag-iow_t#$|*{cS8}$cS8$|S64)->S64$'write'||*{V(*{SYM#tag-iow_t#}$SYM#tag-iow_t#$)->V}$V(*{SYM#tag-iow_t#}$SYM#tag-iow_t#$)->V$'close'|]
// file ../../../libwandio/wandio.h line 134
struct anonymous$0;

// tag-#anon#ST[*{cU8}$cU8$'next_in'||U64'avail_in'||U64'total_in'||*{U8}$U8$'next_out'||U64'avail_out'||U64'total_out'||*{SYM#tag-#anon#ST[*{*{V}$V$(*{V}$V$|U64|U64)->*{V}$V$}$*{V}$V$(*{V}$V$|U64|U64)->*{V}$V$$'alloc'||*{V(*{V}$V$|*{V}$V$)->V}$V(*{V}$V$|*{V}$V$)->V$'free'||*{V}$V$'opaque'|]#}$SYM#tag-#anon#ST[*{*{V}$V$(*{V}$V$|U64|U64)->*{V}$V$}$*{V}$V$(*{V}$V$|U64|U64)->*{V}$V$$'alloc'||*{V(*{V}$V$|*{V}$V$)->V}$V(*{V}$V$|*{V}$V$)->V$'free'||*{V}$V$'opaque'|]#$'allocator'||*{SYM#tag-lzma_internal_s#}$SYM#tag-lzma_internal_s#$'internal'||*{V}$V$'reserved_ptr1'||*{V}$V$'reserved_ptr2'||*{V}$V$'reserved_ptr3'||*{V}$V$'reserved_ptr4'||U64'reserved_int1'||U64'reserved_int2'||U64'reserved_int3'||U64'reserved_int4'||EN#anon_enum$LZMA_RESERVED_ENUM=0#{U32}$U32$'reserved_enum1'||EN#anon_enum$LZMA_RESERVED_ENUM=0#{U32}$U32$'reserved_enum2'|]
// file /usr/include/lzma/base.h line 461
struct anonymous$9;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$6;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$4;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$7;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$5;

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

// tag-buffer_t
// file ior-thread.c line 66
struct buffer_t;

// tag-bz_t
// file ior-bzip.c line 52
struct bz_t;

// tag-bzw_t
// file iow-bzip.c line 50
struct bzw_t;

// tag-err_t
// file ior-zlib.c line 46
enum err_t { ERR_OK=1, ERR_EOF=0, ERR_ERROR=-1 };

// tag-internal_state
// file /usr/include/zlib.h line 83
struct internal_state;

// tag-io_t
// file ../../../libwandio/wandio.h line 64
struct io_t;

// tag-iovec
// file /usr/include/x86_64-linux-gnu/bits/uio.h line 43
struct iovec;

// tag-iow_t
// file ../../../libwandio/wandio.h line 65
struct iow_t;

// tag-lzma_internal_s
// file /usr/include/lzma/base.h line 419
struct lzma_internal_s;

// tag-lzma_t
// file ior-lzma.c line 52
struct lzma_t;

// tag-lzmaw_t
// file iow-lzma.c line 51
struct lzmaw_t;

// tag-peek_t
// file ior-peek.c line 61
struct peek_t;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-state_t
// file ior-thread.c line 72
struct state_t;

// tag-state_t$link1
// file iow-thread.c line 72
struct state_t$0;

// tag-stdio_t
// file ior-stdio.c line 48
struct stdio_t;

// tag-stdiow_t
// file iow-stdio.c line 52
struct stdiow_t;

// tag-wandio_compression_type
// file ../../../libwandio/wandio.h line 68
struct wandio_compression_type;

// tag-z_stream_s
// file /usr/include/zlib.h line 85
struct z_stream_s;

// tag-zlib_t
// file ior-zlib.c line 52
struct zlib_t;

// tag-zlibw_t
// file iow-zlib.c line 52
struct zlibw_t;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// BZ2_bzCompress
// file /usr/include/bzlib.h line 107
extern signed int BZ2_bzCompress(struct anonymous$1 *, signed int);
// BZ2_bzCompressEnd
// file /usr/include/bzlib.h line 112
extern signed int BZ2_bzCompressEnd(struct anonymous$1 *);
// BZ2_bzCompressInit
// file /usr/include/bzlib.h line 100
extern signed int BZ2_bzCompressInit(struct anonymous$1 *, signed int, signed int, signed int);
// BZ2_bzDecompress
// file /usr/include/bzlib.h line 122
extern signed int BZ2_bzDecompress(struct anonymous$1 *);
// BZ2_bzDecompressEnd
// file /usr/include/bzlib.h line 126
extern signed int BZ2_bzDecompressEnd(struct anonymous$1 *);
// BZ2_bzDecompressInit
// file /usr/include/bzlib.h line 116
extern signed int BZ2_bzDecompressInit(struct anonymous$1 *, signed int, signed int);
// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// alignedrealloc
// file ior-peek.c line 223
static void * alignedrealloc(void *old, unsigned long int oldsize, unsigned long int size, signed int *res);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// bz_close
// file ior-bzip.c line 144
static void bz_close(struct io_t *io);
// bz_open
// file wandio.h line 194
struct io_t * bz_open(struct io_t *parent);
// bz_read
// file ior-bzip.c line 94
static signed long int bz_read(struct io_t *io, void *buffer, signed long int len);
// bz_wclose
// file iow-bzip.c line 138
static void bz_wclose(struct iow_t *iow);
// bz_wopen
// file wandio.h line 202
struct iow_t * bz_wopen(struct iow_t *child, signed int compress_level);
// bz_wwrite
// file iow-bzip.c line 93
static signed long int bz_wwrite(struct iow_t *iow, const char *buffer, signed long int len);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// create_io_reader
// file wandio.c line 134
static struct io_t * create_io_reader(const char *filename, signed int autodetect);
// deflate
// file /usr/include/zlib.h line 246
extern signed int deflate(struct z_stream_s *, signed int);
// deflateEnd
// file /usr/include/zlib.h line 353
extern signed int deflateEnd(struct z_stream_s *);
// deflateInit2_
// file /usr/include/zlib.h line 1637
extern signed int deflateInit2_(struct z_stream_s *, signed int, signed int, signed int, signed int, signed int, const char *, signed int);
// do_option
// file wandio.c line 75
static void do_option(const char *option);
// fchown
// file /usr/include/unistd.h line 478
extern signed int fchown(signed int, unsigned int, unsigned int);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// inflate
// file /usr/include/zlib.h line 392
extern signed int inflate(struct z_stream_s *, signed int);
// inflateEnd
// file /usr/include/zlib.h line 508
extern signed int inflateEnd(struct z_stream_s *);
// inflateInit2_
// file /usr/include/zlib.h line 1641
extern signed int inflateInit2_(struct z_stream_s *, signed int, const char *, signed int);
// lseek
// file /usr/include/unistd.h line 334
extern signed long int lseek(signed int, signed long int, signed int);
// lzma_auto_decoder
// file /usr/include/lzma/container.h line 361
extern enum anonymous$11 lzma_auto_decoder(struct anonymous$9 *, unsigned long int, unsigned int);
// lzma_close
// file ior-lzma.c line 149
static void lzma_close(struct io_t *io);
// lzma_code
// file /usr/include/lzma/base.h line 537
extern enum anonymous$11 lzma_code(struct anonymous$9 *, enum anonymous$12);
// lzma_easy_encoder
// file /usr/include/lzma/container.h line 133
extern enum anonymous$11 lzma_easy_encoder(struct anonymous$9 *, unsigned int, enum anonymous);
// lzma_end
// file /usr/include/lzma/base.h line 554
extern void lzma_end(struct anonymous$9 *);
// lzma_open
// file wandio.h line 197
struct io_t * lzma_open(struct io_t *parent);
// lzma_read
// file ior-lzma.c line 91
static signed long int lzma_read(struct io_t *io, void *buffer, signed long int len);
// lzma_wclose
// file iow-lzma.c line 137
static void lzma_wclose(struct iow_t *iow);
// lzma_wopen
// file wandio.h line 204
struct iow_t * lzma_wopen(struct iow_t *child, signed int compress_level);
// lzma_wwrite
// file iow-lzma.c line 93
static signed long int lzma_wwrite(struct iow_t *iow, const char *buffer, signed long int len);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memmove
// file /usr/include/string.h line 50
extern void * memmove(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// parse_env
// file wandio.c line 100
static void parse_env(void);
// peek_close
// file ior-peek.c line 304
static void peek_close(struct io_t *io);
// peek_open
// file wandio.h line 198
struct io_t * peek_open(struct io_t *child);
// peek_peek
// file ior-peek.c line 250
static signed long int peek_peek(struct io_t *io, void *buffer, signed long int len);
// peek_read
// file ior-peek.c line 152
static signed long int peek_read(struct io_t *io, void *buffer, signed long int len);
// peek_seek
// file ior-peek.c line 297
static signed long int peek_seek(struct io_t *io, signed long int offset, signed int whence);
// peek_tell
// file ior-peek.c line 290
static signed long int peek_tell(struct io_t *io);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// posix_memalign
// file /usr/include/stdlib.h line 503
extern signed int posix_memalign(void **, unsigned long int, unsigned long int);
// prctl
// file /usr/include/x86_64-linux-gnu/sys/prctl.h line 27
extern signed int prctl(signed int, ...);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// printhelp
// file wcat.c line 8
static void printhelp();
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous$7 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous$7 *, const union anonymous$4 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous$7 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous$7 *, union anonymous$5 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous$5 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$5 *, const union anonymous$4 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$5 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$5 *);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// refill_buffer
// file ior-peek.c line 94
static signed long int refill_buffer(struct io_t *io, signed long int len);
// safe_open
// file iow-stdio.c line 62
static signed int safe_open(const char *filename, signed int flags);
// stdio_close
// file ior-stdio.c line 95
static void stdio_close(struct io_t *io);
// stdio_open
// file wandio.h line 199
struct io_t * stdio_open(const char *filename);
// stdio_read
// file ior-stdio.c line 80
static signed long int stdio_read(struct io_t *io, void *buffer, signed long int len);
// stdio_seek
// file ior-stdio.c line 90
static signed long int stdio_seek(struct io_t *io, signed long int offset, signed int whence);
// stdio_tell
// file ior-stdio.c line 85
static signed long int stdio_tell(struct io_t *io);
// stdio_wclose
// file iow-stdio.c line 214
static void stdio_wclose(struct iow_t *iow);
// stdio_wopen
// file wandio.h line 206
struct iow_t * stdio_wopen(const char *filename, signed int flags);
// stdio_wwrite
// file iow-stdio.c line 146
static signed long int stdio_wwrite(struct iow_t *iow, const char *buffer, signed long int len);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncat
// file /usr/include/string.h line 140
extern char * strncat(char *, const char *, unsigned long int);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// thread_close
// file ior-thread.c line 260
static void thread_close(struct io_t *io);
// thread_consumer
// file iow-thread.c line 98
static void * thread_consumer(void *userdata);
// thread_open
// file wandio.h line 196
struct io_t * thread_open(struct io_t *parent);
// thread_producer
// file ior-thread.c line 98
static void * thread_producer(void *userdata);
// thread_read
// file ior-thread.c line 196
static signed long int thread_read(struct io_t *state, void *buffer, signed long int len);
// thread_wclose
// file iow-thread.c line 242
static void thread_wclose(struct iow_t *iow);
// thread_wopen
// file wandio.h line 205
struct iow_t * thread_wopen(struct iow_t *child);
// thread_wwrite
// file iow-thread.c line 188
static signed long int thread_wwrite(struct iow_t *state, const char *buffer, signed long int len);
// wandio_create
// file ../../../libwandio/wandio.h line 241
struct io_t * wandio_create(const char *filename);
// wandio_create_uncompressed
// file wandio.c line 229
struct io_t * wandio_create_uncompressed(const char *filename);
// wandio_destroy
// file ../../../libwandio/wandio.h line 302
void wandio_destroy(struct io_t *io);
// wandio_lookup_compression_type
// file ../../../libwandio/wandio.h line 229
struct wandio_compression_type * wandio_lookup_compression_type(const char *name);
// wandio_peek
// file wandio.c line 263
signed long int wandio_peek(struct io_t *io, void *buffer, signed long int len);
// wandio_read
// file ../../../libwandio/wandio.h line 285
signed long int wandio_read(struct io_t *io, void *buffer, signed long int len);
// wandio_seek
// file wandio.c line 244
signed long int wandio_seek(struct io_t *io, signed long int offset, signed int whence);
// wandio_tell
// file wandio.c line 235
signed long int wandio_tell(struct io_t *io);
// wandio_wcreate
// file ../../../libwandio/wandio.h line 313
struct iow_t * wandio_wcreate(const char *filename, signed int compress_type, signed int compression_level, signed int flags);
// wandio_wdestroy
// file ../../../libwandio/wandio.h line 329
void wandio_wdestroy(struct iow_t *iow);
// wandio_wwrite
// file ../../../libwandio/wandio.h line 322
signed long int wandio_wwrite(struct iow_t *iow, const void *buffer, signed long int len);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// writev
// file /usr/include/x86_64-linux-gnu/sys/uio.h line 50
extern signed long int writev(signed int, struct iovec *, signed int);
// zlib_close
// file ior-zlib.c line 156
static void zlib_close(struct io_t *io);
// zlib_open
// file wandio.h line 195
struct io_t * zlib_open(struct io_t *parent);
// zlib_read
// file ior-zlib.c line 92
static signed long int zlib_read(struct io_t *io, void *buffer, signed long int len);
// zlib_wclose
// file iow-zlib.c line 143
static void zlib_wclose(struct iow_t *iow);
// zlib_wopen
// file wandio.h line 201
struct iow_t * zlib_wopen(struct iow_t *child, signed int compress_level);
// zlib_wwrite
// file iow-zlib.c line 98
static signed long int zlib_wwrite(struct iow_t *iow, const char *buffer, signed long int len);

struct anonymous$2
{
  // alloc
  void * (*alloc)(void *, unsigned long int, unsigned long int);
  // free
  void (*free)(void *, void *);
  // opaque
  void *opaque;
};

struct anonymous$1
{
  // next_in
  char *next_in;
  // avail_in
  unsigned int avail_in;
  // total_in_lo32
  unsigned int total_in_lo32;
  // total_in_hi32
  unsigned int total_in_hi32;
  // next_out
  char *next_out;
  // avail_out
  unsigned int avail_out;
  // total_out_lo32
  unsigned int total_out_lo32;
  // total_out_hi32
  unsigned int total_out_hi32;
  // state
  void *state;
  // bzalloc
  void * (*bzalloc)(void *, signed int, signed int);
  // bzfree
  void (*bzfree)(void *, void *);
  // opaque
  void *opaque;
};

struct anonymous$10
{
  // name
  const char *name;
  // read
  signed long int (*read)(struct io_t *, void *, signed long int);
  // peek
  signed long int (*peek)(struct io_t *, void *, signed long int);
  // tell
  signed long int (*tell)(struct io_t *);
  // seek
  signed long int (*seek)(struct io_t *, signed long int, signed int);
  // close
  void (*close)(struct io_t *);
};

struct anonymous$0
{
  // name
  const char *name;
  // write
  signed long int (*write)(struct iow_t *, const char *, signed long int);
  // close
  void (*close)(struct iow_t *);
};

struct anonymous$9
{
  // next_in
  const unsigned char *next_in;
  // avail_in
  unsigned long int avail_in;
  // total_in
  unsigned long int total_in;
  // next_out
  unsigned char *next_out;
  // avail_out
  unsigned long int avail_out;
  // total_out
  unsigned long int total_out;
  // allocator
  struct anonymous$2 *allocator;
  // internal
  struct lzma_internal_s *internal;
  // reserved_ptr1
  void *reserved_ptr1;
  // reserved_ptr2
  void *reserved_ptr2;
  // reserved_ptr3
  void *reserved_ptr3;
  // reserved_ptr4
  void *reserved_ptr4;
  // reserved_int1
  unsigned long int reserved_int1;
  // reserved_int2
  unsigned long int reserved_int2;
  // reserved_int3
  unsigned long int reserved_int3;
  // reserved_int4
  unsigned long int reserved_int4;
  // reserved_enum1
  enum anonymous$3 reserved_enum1;
  // reserved_enum2
  enum anonymous$3 reserved_enum2;
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

union anonymous$4
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous$7
{
  // __data
  struct anonymous$6 __data;
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

union anonymous$5
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

struct buffer_t
{
  // buffer
  char buffer[1048576l];
  // len
  signed int len;
  // state
  enum anonymous$8 state;
};

struct bz_t
{
  // strm
  struct anonymous$1 strm;
  // inbuff
  char inbuff[1048576l];
  // outoffset
  signed int outoffset;
  // parent
  struct io_t *parent;
  // err
  enum err_t err;
};

struct bzw_t
{
  // strm
  struct anonymous$1 strm;
  // outbuff
  char outbuff[1048576l];
  // inoffset
  signed int inoffset;
  // child
  struct iow_t *child;
  // err
  enum err_t err;
};

struct internal_state
{
  // dummy
  signed int dummy;
};

struct io_t
{
  // source
  struct anonymous$10 *source;
  // data
  void *data;
};

struct iovec
{
  // iov_base
  void *iov_base;
  // iov_len
  unsigned long int iov_len;
};

struct iow_t
{
  // source
  struct anonymous$0 *source;
  // data
  void *data;
};

struct lzma_t
{
  // inbuff
  unsigned char inbuff[1048576l];
  // strm
  struct anonymous$9 strm;
  // parent
  struct io_t *parent;
  // outoffset
  signed int outoffset;
  // err
  enum err_t err;
};

struct lzmaw_t
{
  // strm
  struct anonymous$9 strm;
  // outbuff
  unsigned char outbuff[1048576l];
  // child
  struct iow_t *child;
  // err
  enum err_t err;
  // inoffset
  signed int inoffset;
};

struct peek_t
{
  // child
  struct io_t *child;
  // buffer
  char *buffer;
  // length
  signed long int length;
  // offset
  signed long int offset;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct state_t
{
  // buffer
  struct buffer_t *buffer;
  // in_buffer
  signed int in_buffer;
  // offset
  signed long int offset;
  // producer
  unsigned long int producer;
  // space_avail
  union anonymous$7 space_avail;
  // data_ready
  union anonymous$7 data_ready;
  // mutex
  union anonymous$5 mutex;
  // io
  struct io_t *io;
  // closing
  _Bool closing;
};

struct state_t$0
{
  // buffer
  struct buffer_t buffer[5l];
  // offset
  signed long int offset;
  // consumer
  unsigned long int consumer;
  // iow
  struct iow_t *iow;
  // data_ready
  union anonymous$7 data_ready;
  // space_avail
  union anonymous$7 space_avail;
  // mutex
  union anonymous$5 mutex;
  // out_buffer
  signed int out_buffer;
  // closing
  _Bool closing;
};

struct stdio_t
{
  // fd
  signed int fd;
};

struct stdiow_t
{
  // buffer
  char buffer[4096l];
  // offset
  signed int offset;
  // fd
  signed int fd;
};

struct wandio_compression_type
{
  // name
  const char *name;
  // ext
  const char *ext;
  // compress_type
  signed int compress_type;
};

struct z_stream_s
{
  // next_in
  unsigned char *next_in;
  // avail_in
  unsigned int avail_in;
  // total_in
  unsigned long int total_in;
  // next_out
  unsigned char *next_out;
  // avail_out
  unsigned int avail_out;
  // total_out
  unsigned long int total_out;
  // msg
  char *msg;
  // state
  struct internal_state *state;
  // zalloc
  void * (*zalloc)(void *, unsigned int, unsigned int);
  // zfree
  void (*zfree)(void *, void *);
  // opaque
  void *opaque;
  // data_type
  signed int data_type;
  // adler
  unsigned long int adler;
  // reserved
  unsigned long int reserved;
};

struct zlib_t
{
  // inbuff
  unsigned char inbuff[1048576l];
  // strm
  struct z_stream_s strm;
  // parent
  struct io_t *parent;
  // outoffset
  signed int outoffset;
  // err
  enum err_t err;
};

struct zlibw_t
{
  // strm
  struct z_stream_s strm;
  // outbuff
  unsigned char outbuff[1048576l];
  // child
  struct iow_t *child;
  // err
  enum err_t err;
  // inoffset
  signed int inoffset;
};


// bz_source
// file ior-bzip.c line 152
struct anonymous$10 bz_source;
// bz_source
// file ior-bzip.c line 152
struct anonymous$10 bz_source = { .name="bzip", .read=bz_read, .peek=(signed long int (*)(struct io_t *, void *, signed long int))(void *)0, .tell=(signed long int (*)(struct io_t *))(void *)0,
    .seek=(signed long int (*)(struct io_t *, signed long int, signed int))(void *)0,
    .close=bz_close };
// bz_wsource
// file iow-bzip.c line 157
struct anonymous$0 bz_wsource;
// bz_wsource
// file iow-bzip.c line 157
struct anonymous$0 bz_wsource = { .name="bzw", .write=bz_wwrite, .close=bz_wclose };
// compression_type
// file wandio.c line 48
struct wandio_compression_type compression_type[5l] = { { .name="gzip", .ext="gz", .compress_type=1 },
    { .name="bzip2", .ext="bz2", .compress_type=2 },
    { .name="lzo", .ext="lzo", .compress_type=3 },
    { .name="lzma", .ext="xz", .compress_type=4 },
    { .name="NONE", .ext="", .compress_type=0 } };
// force_directio_read
// file wandio.c line 58
signed int force_directio_read = 0;
// force_directio_write
// file wandio.c line 57
signed int force_directio_write = 0;
// keep_stats
// file wandio.c line 56
signed int keep_stats = 0;
// lzma_source
// file ior-lzma.c line 157
struct anonymous$10 lzma_source;
// lzma_source
// file ior-lzma.c line 157
struct anonymous$10 lzma_source = { .name="lzma", .read=lzma_read, .peek=(signed long int (*)(struct io_t *, void *, signed long int))(void *)0, .tell=(signed long int (*)(struct io_t *))(void *)0,
    .seek=(signed long int (*)(struct io_t *, signed long int, signed int))(void *)0,
    .close=lzma_close };
// lzma_wsource
// file iow-lzma.c line 166
struct anonymous$0 lzma_wsource;
// lzma_wsource
// file iow-lzma.c line 166
struct anonymous$0 lzma_wsource = { .name="xz", .write=lzma_wwrite, .close=lzma_wclose };
// max_buffers
// file wandio.c line 61
unsigned int max_buffers = (unsigned int)50;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// optopt
// file /usr/include/getopt.h line 80
extern signed int optopt;
// peek_source
// file ior-peek.c line 314
struct anonymous$10 peek_source;
// peek_source
// file ior-peek.c line 314
struct anonymous$10 peek_source = { .name="peek", .read=peek_read, .peek=peek_peek, .tell=peek_tell,
    .seek=peek_seek, .close=peek_close };
// read_waits
// file wandio.c line 63
unsigned long int read_waits = (unsigned long int)0;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdio_source
// file ior-stdio.c line 102
struct anonymous$10 stdio_source;
// stdio_source
// file ior-stdio.c line 102
struct anonymous$10 stdio_source = { .name="stdio", .read=stdio_read, .peek=(signed long int (*)(struct io_t *, void *, signed long int))(void *)0, .tell=stdio_tell,
    .seek=stdio_seek, .close=stdio_close };
// stdio_wsource
// file iow-stdio.c line 233
struct anonymous$0 stdio_wsource;
// stdio_wsource
// file iow-stdio.c line 233
struct anonymous$0 stdio_wsource = { .name="stdiow", .write=stdio_wwrite, .close=stdio_wclose };
// thread_source
// file ior-thread.c line 279
struct anonymous$10 thread_source;
// thread_source
// file ior-thread.c line 279
struct anonymous$10 thread_source = { .name="thread", .read=thread_read, .peek=(signed long int (*)(struct io_t *, void *, signed long int))(void *)0, .tell=(signed long int (*)(struct io_t *))(void *)0,
    .seek=(signed long int (*)(struct io_t *, signed long int, signed int))(void *)0,
    .close=thread_close };
// thread_wsource
// file iow-thread.c line 258
struct anonymous$0 thread_wsource;
// thread_wsource
// file iow-thread.c line 258
struct anonymous$0 thread_wsource = { .name="threadw", .write=thread_wwrite, .close=thread_wclose };
// use_autodetect
// file wandio.c line 59
signed int use_autodetect = 1;
// use_threads
// file wandio.c line 60
unsigned int use_threads = (unsigned int)-1;
// write_waits
// file wandio.c line 64
unsigned long int write_waits = (unsigned long int)0;
// zlib_source
// file ior-zlib.c line 164
struct anonymous$10 zlib_source;
// zlib_source
// file ior-zlib.c line 164
struct anonymous$10 zlib_source = { .name="zlib", .read=zlib_read, .peek=(signed long int (*)(struct io_t *, void *, signed long int))(void *)0, .tell=(signed long int (*)(struct io_t *))(void *)0,
    .seek=(signed long int (*)(struct io_t *, signed long int, signed int))(void *)0,
    .close=zlib_close };
// zlib_wsource
// file iow-zlib.c line 173
struct anonymous$0 zlib_wsource;
// zlib_wsource
// file iow-zlib.c line 173
struct anonymous$0 zlib_wsource = { .name="zlibw", .write=zlib_wwrite, .close=zlib_wclose };

// alignedrealloc
// file ior-peek.c line 223
static void * alignedrealloc(void *old, unsigned long int oldsize, unsigned long int size, signed int *res)
{
  void *new;
  if(!(size >= oldsize))
    return old;

  else
  {
    *res=posix_memalign(&new, (unsigned long int)4096, size);
    if(!(*res == 0))
    {
      fprintf(stderr, "Error aligning IO buffer: %d\n", *res);
      return (void *)0;
    }

    else
    {
      /* assertion oldsize<size */
      assert(oldsize < size);
      memcpy(new, old, oldsize);
      free(old);
      return new;
    }
  }
}

// bz_close
// file ior-bzip.c line 144
static void bz_close(struct io_t *io)
{
  BZ2_bzDecompressEnd(&((struct bz_t *)io->data)->strm);
  wandio_destroy(((struct bz_t *)io->data)->parent);
  free(io->data);
  free((void *)io);
}

// bz_open
// file wandio.h line 194
struct io_t * bz_open(struct io_t *parent)
{
  struct io_t *io;
  if(parent == ((struct io_t *)NULL))
    return (struct io_t *)(void *)0;

  else
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct io_t) /*16ul*/ );
    io = (struct io_t *)return_value_malloc$1;
    io->source = &bz_source;
    io->data=malloc(sizeof(struct bz_t) /*1048680ul*/ );
    ((struct bz_t *)io->data)->parent = parent;
    ((struct bz_t *)io->data)->strm.next_in = (char *)(void *)0;
    ((struct bz_t *)io->data)->strm.avail_in = (unsigned int)0;
    ((struct bz_t *)io->data)->strm.next_out = (char *)(void *)0;
    ((struct bz_t *)io->data)->strm.avail_out = (unsigned int)0;
    ((struct bz_t *)io->data)->strm.bzalloc = (void * (*)(void *, signed int, signed int))(void *)0;
    ((struct bz_t *)io->data)->strm.bzfree = (void (*)(void *, void *))(void *)0;
    ((struct bz_t *)io->data)->strm.opaque = (void *)0;
    ((struct bz_t *)io->data)->err = (enum err_t)ERR_OK;
    BZ2_bzDecompressInit(&((struct bz_t *)io->data)->strm, 0, 0);
    return io;
  }
}

// bz_read
// file ior-bzip.c line 94
static signed long int bz_read(struct io_t *io, void *buffer, signed long int len)
{
  if((signed int)((struct bz_t *)io->data)->err == ERR_EOF)
    return (signed long int)0;

  else
  {
    if((signed int)((struct bz_t *)io->data)->err == ERR_ERROR)
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      *return_value___errno_location$1 = 5;
      return (signed long int)-1;
    }

    ((struct bz_t *)io->data)->strm.avail_out = (unsigned int)len;
    ((struct bz_t *)io->data)->strm.next_out = (char *)buffer;
    while((signed int)((struct bz_t *)io->data)->err == ERR_OK)
    {
      if(!(((struct bz_t *)io->data)->strm.avail_out >= 1u))
        break;

      while(!(((struct bz_t *)io->data)->strm.avail_in >= 1u))
      {
        signed int bytes_read;
        signed long int return_value_wandio_read$2;
        return_value_wandio_read$2=wandio_read(((struct bz_t *)io->data)->parent, (void *)((struct bz_t *)io->data)->inbuff, (signed long int)sizeof(char [1048576l]) /*1048576ul*/ );
        bytes_read = (signed int)return_value_wandio_read$2;
        if(bytes_read == 0)
          return len - (signed long int)((struct bz_t *)io->data)->strm.avail_out;

        if(!(bytes_read >= 0))
        {
          ((struct bz_t *)io->data)->err = (enum err_t)ERR_ERROR;
          if(!(((struct bz_t *)io->data)->strm.avail_out == (unsigned int)len))
            return len - (signed long int)((struct bz_t *)io->data)->strm.avail_out;

          return (signed long int)-1;
        }

        ((struct bz_t *)io->data)->strm.next_in = ((struct bz_t *)io->data)->inbuff;
        ((struct bz_t *)io->data)->strm.avail_in = (unsigned int)bytes_read;
      }
      signed int err;
      err=BZ2_bzDecompress(&((struct bz_t *)io->data)->strm);
      switch(err)
      {
        case 0:
        {
          ((struct bz_t *)io->data)->err = (enum err_t)ERR_OK;
          break;
        }
        case 4:
        {
          ((struct bz_t *)io->data)->err = (enum err_t)ERR_EOF;
          break;
        }
        default:
        {
          signed int *return_value___errno_location$3;
          return_value___errno_location$3=__errno_location();
          *return_value___errno_location$3 = 5;
          ((struct bz_t *)io->data)->err = (enum err_t)ERR_ERROR;
        }
      }
    }
    return len - (signed long int)((struct bz_t *)io->data)->strm.avail_out;
  }
}

// bz_wclose
// file iow-bzip.c line 138
static void bz_wclose(struct iow_t *iow)
{
  signed int return_value_BZ2_bzCompress$1;
  do
  {
    return_value_BZ2_bzCompress$1=BZ2_bzCompress(&((struct bzw_t *)iow->data)->strm, 2);
    if(!(return_value_BZ2_bzCompress$1 == 0))
      break;

    wandio_wwrite(((struct bzw_t *)iow->data)->child, (const void *)((struct bzw_t *)iow->data)->outbuff, (signed long int)(sizeof(char [1048576l]) /*1048576ul*/  - (unsigned long int)((struct bzw_t *)iow->data)->strm.avail_out));
    ((struct bzw_t *)iow->data)->strm.next_out = ((struct bzw_t *)iow->data)->outbuff;
    ((struct bzw_t *)iow->data)->strm.avail_out = (unsigned int)sizeof(char [1048576l]) /*1048576ul*/ ;
  }
  while((_Bool)1);
  BZ2_bzCompressEnd(&((struct bzw_t *)iow->data)->strm);
  wandio_wwrite(((struct bzw_t *)iow->data)->child, (const void *)((struct bzw_t *)iow->data)->outbuff, (signed long int)(sizeof(char [1048576l]) /*1048576ul*/  - (unsigned long int)((struct bzw_t *)iow->data)->strm.avail_out));
  wandio_wdestroy(((struct bzw_t *)iow->data)->child);
  free(iow->data);
  free((void *)iow);
}

// bz_wopen
// file wandio.h line 202
struct iow_t * bz_wopen(struct iow_t *child, signed int compress_level)
{
  struct iow_t *iow;
  if(child == ((struct iow_t *)NULL))
    return (struct iow_t *)(void *)0;

  else
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct iow_t) /*16ul*/ );
    iow = (struct iow_t *)return_value_malloc$1;
    iow->source = &bz_wsource;
    iow->data=malloc(sizeof(struct bzw_t) /*1048680ul*/ );
    ((struct bzw_t *)iow->data)->child = child;
    ((struct bzw_t *)iow->data)->strm.next_in = (char *)(void *)0;
    ((struct bzw_t *)iow->data)->strm.avail_in = (unsigned int)0;
    ((struct bzw_t *)iow->data)->strm.next_out = ((struct bzw_t *)iow->data)->outbuff;
    ((struct bzw_t *)iow->data)->strm.avail_out = (unsigned int)sizeof(char [1048576l]) /*1048576ul*/ ;
    ((struct bzw_t *)iow->data)->strm.bzalloc = (void * (*)(void *, signed int, signed int))(void *)0;
    ((struct bzw_t *)iow->data)->strm.bzfree = (void (*)(void *, void *))(void *)0;
    ((struct bzw_t *)iow->data)->strm.opaque = (void *)0;
    ((struct bzw_t *)iow->data)->err = (enum err_t)ERR_OK;
    BZ2_bzCompressInit(&((struct bzw_t *)iow->data)->strm, compress_level, 0, 30);
    return iow;
  }
}

// bz_wwrite
// file iow-bzip.c line 93
static signed long int bz_wwrite(struct iow_t *iow, const char *buffer, signed long int len)
{
  if((signed int)((struct bzw_t *)iow->data)->err == ERR_EOF)
    return (signed long int)0;

  else
    if((signed int)((struct bzw_t *)iow->data)->err == ERR_ERROR)
      return (signed long int)-1;

    else
    {
      ((struct bzw_t *)iow->data)->strm.next_in = (char *)buffer;
      ((struct bzw_t *)iow->data)->strm.avail_in = (unsigned int)len;
      while((signed int)((struct bzw_t *)iow->data)->err == ERR_OK)
      {
        if(!(((struct bzw_t *)iow->data)->strm.avail_in >= 1u))
          break;

        while(!(((struct bzw_t *)iow->data)->strm.avail_out >= 1u))
        {
          signed int bytes_written;
          signed long int return_value_wandio_wwrite$1;
          return_value_wandio_wwrite$1=wandio_wwrite(((struct bzw_t *)iow->data)->child, (const void *)((struct bzw_t *)iow->data)->outbuff, (signed long int)sizeof(char [1048576l]) /*1048576ul*/ );
          bytes_written = (signed int)return_value_wandio_wwrite$1;
          if(!(bytes_written >= 1))
          {
            ((struct bzw_t *)iow->data)->err = (enum err_t)ERR_ERROR;
            if(!(((struct bzw_t *)iow->data)->strm.avail_in == (unsigned int)len))
              return len - (signed long int)((struct bzw_t *)iow->data)->strm.avail_in;

            return (signed long int)-1;
          }

          ((struct bzw_t *)iow->data)->strm.next_out = ((struct bzw_t *)iow->data)->outbuff;
          ((struct bzw_t *)iow->data)->strm.avail_out = (unsigned int)sizeof(char [1048576l]) /*1048576ul*/ ;
        }
        signed int err;
        err=BZ2_bzCompress(&((struct bzw_t *)iow->data)->strm, 0);
        if(err == 0 || err == 1)
        {
          ((struct bzw_t *)iow->data)->err = (enum err_t)ERR_OK;
          goto __CPROVER_DUMP_L10;
        }

        ((struct bzw_t *)iow->data)->err = (enum err_t)ERR_ERROR;

      __CPROVER_DUMP_L10:
        ;
      }
      return len - (signed long int)((struct bzw_t *)iow->data)->strm.avail_in;
    }
}

// create_io_reader
// file wandio.c line 134
static struct io_t * create_io_reader(const char *filename, signed int autodetect)
{
  struct io_t *io;
  struct io_t *return_value_stdio_open$1;
  return_value_stdio_open$1=stdio_open(filename);
  io=peek_open(return_value_stdio_open$1);
  unsigned char buffer[1024l];
  signed int len;
  if(io == ((struct io_t *)NULL))
    return (struct io_t *)(void *)0;

  else
  {
    signed long int return_value_wandio_peek$2;
    return_value_wandio_peek$2=wandio_peek(io, (void *)buffer, (signed long int)sizeof(unsigned char [1024l]) /*1024ul*/ );
    len = (signed int)return_value_wandio_peek$2;
    if(!(autodetect == 0))
    {
      if(len >= 3)
      {
        if((signed int)buffer[0l] == 0x1f)
        {
          if((signed int)buffer[1l] == 0x8b)
          {
            if((signed int)buffer[2l] == 0x08)
              io=zlib_open(io);

          }

        }

      }

      if(len >= 2)
      {
        if((signed int)buffer[0l] == 0x1f)
        {
          if((signed int)buffer[1l] == 0x9d)
            io=zlib_open(io);

        }

      }

      if(len >= 3)
      {
        if((signed int)buffer[0l] == 66)
        {
          if((signed int)buffer[1l] == 90)
          {
            if((signed int)buffer[2l] == 104)
              io=bz_open(io);

          }

        }

      }

      if(len >= 5)
      {
        if((signed int)buffer[0l] == 0xfd)
        {
          if((signed int)buffer[1l] == 55)
          {
            if((signed int)buffer[2l] == 122)
            {
              if((signed int)buffer[3l] == 88)
              {
                if((signed int)buffer[4l] == 90)
                  io=lzma_open(io);

              }

            }

          }

        }

      }

    }

    if(!(use_threads == 0u))
      io=thread_open(io);

    struct io_t *return_value_peek_open$3;
    return_value_peek_open$3=peek_open(io);
    return return_value_peek_open$3;
  }
}

// do_option
// file wandio.c line 75
static void do_option(const char *option)
{
  signed int return_value_strcmp$7;
  signed int return_value_strcmp$6;
  signed int return_value_strcmp$5;
  signed int return_value_strncmp$4;
  signed int return_value_atoi$1;
  signed int return_value_strncmp$3;
  signed int return_value_atoi$2;
  if(!((signed int)*option == 0))
  {
    return_value_strcmp$7=strcmp(option, "stats");
    if(return_value_strcmp$7 == 0)
      keep_stats = 1;

    else
    {
      return_value_strcmp$6=strcmp(option, "nothreads");
      if(return_value_strcmp$6 == 0)
        use_threads = (unsigned int)0;

      else
      {
        return_value_strcmp$5=strcmp(option, "noautodetect");
        if(return_value_strcmp$5 == 0)
          use_autodetect = 0;

        else
        {
          return_value_strncmp$4=strncmp(option, "threads=", (unsigned long int)8);
          if(return_value_strncmp$4 == 0)
          {
            return_value_atoi$1=atoi(option + (signed long int)8);
            use_threads = (unsigned int)return_value_atoi$1;
          }

          else
          {
            return_value_strncmp$3=strncmp(option, "buffers=", (unsigned long int)8);
            if(return_value_strncmp$3 == 0)
            {
              return_value_atoi$2=atoi(option + (signed long int)8);
              max_buffers = (unsigned int)return_value_atoi$2;
            }

            else
              fprintf(stderr, "Unknown libtraceio debug option '%s'\n", option);
          }
        }
      }
    }
  }

}

// lzma_close
// file ior-lzma.c line 149
static void lzma_close(struct io_t *io)
{
  lzma_end(&((struct lzma_t *)io->data)->strm);
  wandio_destroy(((struct lzma_t *)io->data)->parent);
  free(io->data);
  free((void *)io);
}

// lzma_open
// file wandio.h line 197
struct io_t * lzma_open(struct io_t *parent)
{
  struct io_t *io;
  if(parent == ((struct io_t *)NULL))
    return (struct io_t *)(void *)0;

  else
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct io_t) /*16ul*/ );
    io = (struct io_t *)return_value_malloc$1;
    io->source = &lzma_source;
    io->data=malloc(sizeof(struct lzma_t) /*1048728ul*/ );
    ((struct lzma_t *)io->data)->parent = parent;
    memset((void *)&((struct lzma_t *)io->data)->strm, 0, sizeof(struct anonymous$9) /*136ul*/ );
    ((struct lzma_t *)io->data)->err = (enum err_t)ERR_OK;
    enum anonymous$11 return_value_lzma_auto_decoder$2;
    return_value_lzma_auto_decoder$2=lzma_auto_decoder(&((struct lzma_t *)io->data)->strm, 18446744073709551615UL, (unsigned int)0);
    if(!((signed int)return_value_lzma_auto_decoder$2 == LZMA_OK))
    {
      free(io->data);
      free((void *)io);
      fprintf(stderr, "auto decoder failed\n");
      return (struct io_t *)(void *)0;
    }

    else
      return io;
  }
}

// lzma_read
// file ior-lzma.c line 91
static signed long int lzma_read(struct io_t *io, void *buffer, signed long int len)
{
  if((signed int)((struct lzma_t *)io->data)->err == ERR_EOF)
    return (signed long int)0;

  else
  {
    if((signed int)((struct lzma_t *)io->data)->err == ERR_ERROR)
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      *return_value___errno_location$1 = 5;
      return (signed long int)-1;
    }

    ((struct lzma_t *)io->data)->strm.avail_out = (unsigned long int)len;
    ((struct lzma_t *)io->data)->strm.next_out = (unsigned char *)buffer;
    while((signed int)((struct lzma_t *)io->data)->err == ERR_OK)
    {
      if(!(((struct lzma_t *)io->data)->strm.avail_out >= 1ul))
        break;

      while(!(((struct lzma_t *)io->data)->strm.avail_in >= 1ul))
      {
        signed int bytes_read;
        signed long int return_value_wandio_read$2;
        return_value_wandio_read$2=wandio_read(((struct lzma_t *)io->data)->parent, (void *)(char *)((struct lzma_t *)io->data)->inbuff, (signed long int)sizeof(unsigned char [1048576l]) /*1048576ul*/ );
        bytes_read = (signed int)return_value_wandio_read$2;
        if(bytes_read == 0)
        {
          if(((struct lzma_t *)io->data)->strm.avail_out == (unsigned long int)(unsigned int)len)
          {
            ((struct lzma_t *)io->data)->err = (enum err_t)ERR_EOF;
            return (signed long int)0;
          }

          return (signed long int)((unsigned long int)len - ((struct lzma_t *)io->data)->strm.avail_out);
        }

        if(!(bytes_read >= 0))
        {
          ((struct lzma_t *)io->data)->err = (enum err_t)ERR_ERROR;
          if(!(((struct lzma_t *)io->data)->strm.avail_out == (unsigned long int)(unsigned int)len))
            return (signed long int)((unsigned long int)len - ((struct lzma_t *)io->data)->strm.avail_out);

          return (signed long int)-1;
        }

        ((struct lzma_t *)io->data)->strm.next_in = ((struct lzma_t *)io->data)->inbuff;
        ((struct lzma_t *)io->data)->strm.avail_in = (unsigned long int)bytes_read;
      }
      enum anonymous$11 err;
      err=lzma_code(&((struct lzma_t *)io->data)->strm, (enum anonymous$12)LZMA_RUN);
      switch((signed int)err)
      {
        case LZMA_OK:
        {
          ((struct lzma_t *)io->data)->err = (enum err_t)ERR_OK;
          break;
        }
        case LZMA_STREAM_END:
        {
          ((struct lzma_t *)io->data)->err = (enum err_t)ERR_EOF;
          break;
        }
        default:
        {
          signed int *return_value___errno_location$3;
          return_value___errno_location$3=__errno_location();
          *return_value___errno_location$3 = 5;
          ((struct lzma_t *)io->data)->err = (enum err_t)ERR_ERROR;
        }
      }
    }
    return (signed long int)((unsigned long int)len - ((struct lzma_t *)io->data)->strm.avail_out);
  }
}

// lzma_wclose
// file iow-lzma.c line 137
static void lzma_wclose(struct iow_t *iow)
{
  enum anonymous$11 res;
  for( ; (_Bool)1; ((struct lzmaw_t *)iow->data)->strm.avail_out = sizeof(unsigned char [1048576l]) /*1048576ul*/ )
  {
    res=lzma_code(&((struct lzmaw_t *)iow->data)->strm, (enum anonymous$12)LZMA_FINISH);
    if((signed int)res == LZMA_STREAM_END)
      break;

    if(!((signed int)res == LZMA_OK))
    {
      fprintf(stderr, "Z_STREAM_ERROR while closing output\n");
      break;
    }

    wandio_wwrite(((struct lzmaw_t *)iow->data)->child, (const void *)(char *)((struct lzmaw_t *)iow->data)->outbuff, (signed long int)(sizeof(unsigned char [1048576l]) /*1048576ul*/  - ((struct lzmaw_t *)iow->data)->strm.avail_out));
    ((struct lzmaw_t *)iow->data)->strm.next_out = ((struct lzmaw_t *)iow->data)->outbuff;
  }
  wandio_wwrite(((struct lzmaw_t *)iow->data)->child, (const void *)(char *)((struct lzmaw_t *)iow->data)->outbuff, (signed long int)(sizeof(unsigned char [1048576l]) /*1048576ul*/  - ((struct lzmaw_t *)iow->data)->strm.avail_out));
  lzma_end(&((struct lzmaw_t *)iow->data)->strm);
  wandio_wdestroy(((struct lzmaw_t *)iow->data)->child);
  free(iow->data);
  free((void *)iow);
}

// lzma_wopen
// file wandio.h line 204
struct iow_t * lzma_wopen(struct iow_t *child, signed int compress_level)
{
  struct iow_t *iow;
  if(child == ((struct iow_t *)NULL))
    return (struct iow_t *)(void *)0;

  else
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct iow_t) /*16ul*/ );
    iow = (struct iow_t *)return_value_malloc$1;
    iow->source = &lzma_wsource;
    iow->data=malloc(sizeof(struct lzmaw_t) /*1048728ul*/ );
    ((struct lzmaw_t *)iow->data)->child = child;
    memset((void *)&((struct lzmaw_t *)iow->data)->strm, 0, sizeof(struct anonymous$9) /*136ul*/ );
    ((struct lzmaw_t *)iow->data)->strm.next_out = ((struct lzmaw_t *)iow->data)->outbuff;
    ((struct lzmaw_t *)iow->data)->strm.avail_out = sizeof(unsigned char [1048576l]) /*1048576ul*/ ;
    ((struct lzmaw_t *)iow->data)->err = (enum err_t)ERR_OK;
    enum anonymous$11 return_value_lzma_easy_encoder$2;
    return_value_lzma_easy_encoder$2=lzma_easy_encoder(&((struct lzmaw_t *)iow->data)->strm, (unsigned int)compress_level, (enum anonymous)LZMA_CHECK_CRC64);
    if(!((signed int)return_value_lzma_easy_encoder$2 == LZMA_OK))
    {
      free(iow->data);
      free((void *)iow);
      return (struct iow_t *)(void *)0;
    }

    else
      return iow;
  }
}

// lzma_wwrite
// file iow-lzma.c line 93
static signed long int lzma_wwrite(struct iow_t *iow, const char *buffer, signed long int len)
{
  if((signed int)((struct lzmaw_t *)iow->data)->err == ERR_EOF)
    return (signed long int)0;

  else
    if((signed int)((struct lzmaw_t *)iow->data)->err == ERR_ERROR)
      return (signed long int)-1;

    else
    {
      ((struct lzmaw_t *)iow->data)->strm.next_in = (const unsigned char *)buffer;
      ((struct lzmaw_t *)iow->data)->strm.avail_in = (unsigned long int)len;
      while((signed int)((struct lzmaw_t *)iow->data)->err == ERR_OK)
      {
        if(!(((struct lzmaw_t *)iow->data)->strm.avail_in >= 1ul))
          break;

        while(!(((struct lzmaw_t *)iow->data)->strm.avail_out >= 1ul))
        {
          signed int bytes_written;
          signed long int return_value_wandio_wwrite$1;
          return_value_wandio_wwrite$1=wandio_wwrite(((struct lzmaw_t *)iow->data)->child, (const void *)((struct lzmaw_t *)iow->data)->outbuff, (signed long int)sizeof(unsigned char [1048576l]) /*1048576ul*/ );
          bytes_written = (signed int)return_value_wandio_wwrite$1;
          if(!(bytes_written >= 1))
          {
            ((struct lzmaw_t *)iow->data)->err = (enum err_t)ERR_ERROR;
            if(!(((struct lzmaw_t *)iow->data)->strm.avail_in == (unsigned long int)(unsigned int)len))
              return (signed long int)((unsigned long int)len - ((struct lzmaw_t *)iow->data)->strm.avail_in);

            return (signed long int)-1;
          }

          ((struct lzmaw_t *)iow->data)->strm.next_out = ((struct lzmaw_t *)iow->data)->outbuff;
          ((struct lzmaw_t *)iow->data)->strm.avail_out = sizeof(unsigned char [1048576l]) /*1048576ul*/ ;
        }
        enum anonymous$11 err;
        err=lzma_code(&((struct lzmaw_t *)iow->data)->strm, (enum anonymous$12)LZMA_RUN);
        if((signed int)err == LZMA_OK)
        {
          ((struct lzmaw_t *)iow->data)->err = (enum err_t)ERR_OK;
          goto __CPROVER_DUMP_L10;
        }

        ((struct lzmaw_t *)iow->data)->err = (enum err_t)ERR_ERROR;

      __CPROVER_DUMP_L10:
        ;
      }
      return (signed long int)((unsigned long int)len - ((struct lzmaw_t *)iow->data)->strm.avail_in);
    }
}

// main
// file wcat.c line 26
signed int main(signed int argc, char **argv)
{
  signed int compress_level = 0;
  signed int compress_type = 0;
  char *output = "-";
  char c;
  signed int return_value_getopt$1;
  struct wandio_compression_type *return_value_wandio_lookup_compression_type$2;
  const unsigned short int **return_value___ctype_b_loc$3;
  do
  {
    return_value_getopt$1=getopt(argc, argv, "Z:z:o:h");
    c = (char)return_value_getopt$1;
    if((signed int)c == -1)
      break;

    switch((signed int)c)
    {
      case 90:
      {
        return_value_wandio_lookup_compression_type$2=wandio_lookup_compression_type(optarg);
        compress_type = return_value_wandio_lookup_compression_type$2->compress_type;
        break;
      }
      case 122:
      {
        compress_level=atoi(optarg);
        break;
      }
      case 111:
      {
        output = optarg;
        break;
      }
      case 104:
      {
        printhelp();
        return 0;
      }
      case 63:
      {
        if(optopt == 90 || optopt == 111 || optopt == 122)
          fprintf(stderr, "Option -%c requires an argument.\n", optopt);

        else
        {
          return_value___ctype_b_loc$3=__ctype_b_loc();
          if(!((16384 & (signed int)(*return_value___ctype_b_loc$3)[(signed long int)optopt]) == 0))
            fprintf(stderr, "Unknown option `-%c'.\n", optopt);

          else
            fprintf(stderr, "Unknown option character `\\x%x'.\n", optopt);
        }
        return 1;
      }
      default:
        abort();
    }
  }
  while((_Bool)1);
  struct iow_t *iow;
  iow=wandio_wcreate(output, compress_type, compress_level, 0);
  signed int i = optind;
  for( ; !(i >= argc); i = i + 1)
  {
    char buffer[1048576l];
    struct io_t *ior;
    ior=wandio_create(argv[(signed long int)i]);
    if(ior == ((struct io_t *)NULL))
      fprintf(stderr, "Failed to open %s\n", argv[(signed long int)i]);

    else
    {
      signed long int len;
      do
      {
        len=wandio_read(ior, (void *)buffer, (signed long int)sizeof(char [1048576l]) /*1048576ul*/ );
        if(len >= 1l)
          wandio_wwrite(iow, (const void *)buffer, len);

      }
      while(len >= 1l);
      wandio_destroy(ior);
    }
  }
  wandio_wdestroy(iow);
  return 0;
}

// parse_env
// file wandio.c line 100
static void parse_env(void)
{
  const char *str;
  str=getenv("LIBTRACEIO");
  char option[1024l];
  const char *ip;
  char *op;
  _Bool tmp_if_expr$1;
  char *tmp_post$2;
  if(!(str == ((const char *)NULL)))
  {
    ip = str;
    op = option;
    do
    {
      if(!((signed int)*ip == 0))
        tmp_if_expr$1 = op < option + (signed long int)sizeof(char [1024l]) /*1024ul*/  ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$1 = (_Bool)0;
      if(!tmp_if_expr$1)
        break;

      if((signed int)*ip == 44)
      {
        *op = (char)0;
        do_option(option);
        op = option;
      }

      else
      {
        tmp_post$2 = op;
        op = op + 1l;
        *tmp_post$2 = *ip;
      }
      ip = ip + 1l;
    }
    while((_Bool)1);
    *op = (char)0;
    do_option(option);
  }

}

// peek_close
// file ior-peek.c line 304
static void peek_close(struct io_t *io)
{
  wandio_destroy(((struct peek_t *)io->data)->child);
  if(!(((struct peek_t *)io->data)->buffer == ((char *)NULL)))
    free((void *)((struct peek_t *)io->data)->buffer);

  free(io->data);
  free((void *)io);
}

// peek_open
// file wandio.h line 198
struct io_t * peek_open(struct io_t *child)
{
  struct io_t *io;
  if(child == ((struct io_t *)NULL))
    return (struct io_t *)(void *)0;

  else
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct io_t) /*16ul*/ );
    io = (struct io_t *)return_value_malloc$1;
    io->data=malloc(sizeof(struct peek_t) /*32ul*/ );
    io->source = &peek_source;
    ((struct peek_t *)io->data)->child = child;
    ((struct peek_t *)io->data)->buffer = (char *)(void *)0;
    ((struct peek_t *)io->data)->length = (signed long int)0;
    ((struct peek_t *)io->data)->offset = (signed long int)0;
    return io;
  }
}

// peek_peek
// file ior-peek.c line 250
static signed long int peek_peek(struct io_t *io, void *buffer, signed long int len)
{
  signed long int ret = (signed long int)0;
  signed int res = 0;
  if(!(((struct peek_t *)io->data)->length + -((struct peek_t *)io->data)->offset >= len))
  {
    signed long int read_amount = len - (((struct peek_t *)io->data)->length - ((struct peek_t *)io->data)->offset);
    read_amount = read_amount + ((signed long int)(1024 * 1024) - (((struct peek_t *)io->data)->length + read_amount) % (signed long int)(1024 * 1024));
    void *return_value_alignedrealloc$1;
    return_value_alignedrealloc$1=alignedrealloc((void *)((struct peek_t *)io->data)->buffer, (unsigned long int)((struct peek_t *)io->data)->length, (unsigned long int)(((struct peek_t *)io->data)->length + read_amount), &res);
    ((struct peek_t *)io->data)->buffer = (char *)return_value_alignedrealloc$1;
    if(((struct peek_t *)io->data)->buffer == ((char *)NULL))
      return (signed long int)res;

    read_amount=wandio_read(((struct peek_t *)io->data)->child, (void *)(((struct peek_t *)io->data)->buffer + ((struct peek_t *)io->data)->length), read_amount);
    if(!(read_amount >= 0l))
      return read_amount;

    ((struct peek_t *)io->data)->length = ((struct peek_t *)io->data)->length + read_amount;
  }

  signed long int tmp_if_expr$2;
  if(!(len >= ((struct peek_t *)io->data)->length + -((struct peek_t *)io->data)->offset))
    tmp_if_expr$2 = len;

  else
    tmp_if_expr$2 = ((struct peek_t *)io->data)->length - ((struct peek_t *)io->data)->offset;
  ret = tmp_if_expr$2;
  memcpy(buffer, (const void *)(((struct peek_t *)io->data)->buffer + ((struct peek_t *)io->data)->offset), (unsigned long int)ret);
  return ret;
}

// peek_read
// file ior-peek.c line 152
static signed long int peek_read(struct io_t *io, void *buffer, signed long int len)
{
  signed long int ret = (signed long int)0;
  signed long int tmp_if_expr$1;
  if(!(((struct peek_t *)io->data)->buffer == ((char *)NULL)))
  {
    if(!(len >= ((struct peek_t *)io->data)->length + -((struct peek_t *)io->data)->offset))
      tmp_if_expr$1 = len;

    else
      tmp_if_expr$1 = ((struct peek_t *)io->data)->length - ((struct peek_t *)io->data)->offset;
    ret = tmp_if_expr$1;
    memcpy(buffer, (const void *)(((struct peek_t *)io->data)->buffer + ((struct peek_t *)io->data)->offset), (unsigned long int)ret);
    buffer = buffer + ret;
    ((struct peek_t *)io->data)->offset = ((struct peek_t *)io->data)->offset + ret;
    len = len - ret;
  }

  if(len >= 1l)
  {
    /* assertion ((struct peek_t *)((io)->data))->length-((struct peek_t *)((io)->data))->offset == 0 */
    assert(((struct peek_t *)io->data)->length - ((struct peek_t *)io->data)->offset == (signed long int)0);
    signed long int bytes_read;
    if(len % 4096l == 0l && (signed long int)buffer % 4096l == 0l)
    {
      /* assertion ((ptrdiff_t)buffer % 4096) == 0 */
      assert((signed long int)buffer % (signed long int)4096 == (signed long int)0);
      bytes_read=((struct peek_t *)io->data)->child->source->read(((struct peek_t *)io->data)->child, buffer, len);
      if(!(bytes_read >= 1l))
      {
        if(ret >= 1l)
          return ret;

        return bytes_read;
      }

    }

    else
    {
      bytes_read=refill_buffer(io, len);
      if(!(bytes_read >= 1l))
      {
        if(ret >= 1l)
          return ret;

        return bytes_read;
      }

      len = len < bytes_read ? len : bytes_read;
      memcpy(buffer, (const void *)((struct peek_t *)io->data)->buffer, (unsigned long int)len);
      ((struct peek_t *)io->data)->offset = len;
      bytes_read = len;
    }
    ret = ret + bytes_read;
  }

  if(!(((struct peek_t *)io->data)->buffer == ((char *)NULL)))
  {
    if(((struct peek_t *)io->data)->offset >= ((struct peek_t *)io->data)->length)
    {
      free((void *)((struct peek_t *)io->data)->buffer);
      ((struct peek_t *)io->data)->buffer = (char *)(void *)0;
      ((struct peek_t *)io->data)->offset = (signed long int)0;
      ((struct peek_t *)io->data)->length = (signed long int)0;
    }

  }

  return ret;
}

// peek_seek
// file ior-peek.c line 297
static signed long int peek_seek(struct io_t *io, signed long int offset, signed int whence)
{
  signed long int return_value_wandio_seek$1;
  return_value_wandio_seek$1=wandio_seek(((struct peek_t *)io->data)->child, offset, whence);
  return return_value_wandio_seek$1;
}

// peek_tell
// file ior-peek.c line 290
static signed long int peek_tell(struct io_t *io)
{
  signed long int return_value_wandio_tell$1;
  return_value_wandio_tell$1=wandio_tell(((struct peek_t *)io->data)->child);
  return return_value_wandio_tell$1;
}

// printhelp
// file wcat.c line 8
static void printhelp()
{
  printf("wandiocat: concatenate files into a single compressed file\n");
  printf("\n");
  printf("Available options:\n\n");
  printf(" -z <level>\n");
  printf("    Sets a compression level for the output file, must be \n");
  printf("    between 0 (uncompressed) and 9 (max compression)\n");
  printf("    Default is 0.\n");
  printf(" -Z <method>\n");
  printf("    Set the compression method. Must be one of 'gzip', \n");
  printf("    'bzip2', 'lzo' or 'lzma'. If not specified, no\n");
  printf("    compression is performed.\n");
  printf(" -o <file>\n");
  printf("    The name of the output file. If not specified, output\n");
  printf("    is written to standard output.\n");
}

// refill_buffer
// file ior-peek.c line 94
static signed long int refill_buffer(struct io_t *io, signed long int len)
{
  signed long int bytes_read;
  /* assertion ((struct peek_t *)((io)->data))->length - ((struct peek_t *)((io)->data))->offset == 0 */
  assert(((struct peek_t *)io->data)->length - ((struct peek_t *)io->data)->offset == (signed long int)0);
  bytes_read = len < (signed long int)(1024 * 1024) ? (signed long int)(1024 * 1024) : len;
  signed long int tmp_if_expr$1;
  if(!(bytes_read >= ((struct peek_t *)io->data)->length))
    tmp_if_expr$1 = ((struct peek_t *)io->data)->length;

  else
    tmp_if_expr$1 = bytes_read;
  bytes_read = tmp_if_expr$1;
  bytes_read = bytes_read + ((signed long int)4096 - bytes_read % (signed long int)4096);
  if(!(((struct peek_t *)io->data)->length >= bytes_read))
  {
    signed int res = 0;
    void *buf_ptr = (void *)((struct peek_t *)io->data)->buffer;
    if(!(buf_ptr == NULL))
      free(buf_ptr);

    ((struct peek_t *)io->data)->length = bytes_read;
    ((struct peek_t *)io->data)->offset = (signed long int)0;
    res=posix_memalign(&buf_ptr, (unsigned long int)4096, (unsigned long int)((struct peek_t *)io->data)->length);
    if(!(res == 0))
    {
      fprintf(stderr, "Error aligning IO buffer: %d\n", res);
      return (signed long int)res;
    }

    ((struct peek_t *)io->data)->buffer = (char *)buf_ptr;
  }

  else
    ((struct peek_t *)io->data)->length = bytes_read;
  /* assertion ((struct peek_t *)((io)->data))->buffer */
  assert(((struct peek_t *)io->data)->buffer != ((char *)NULL));
  bytes_read=((struct peek_t *)io->data)->child->source->read(((struct peek_t *)io->data)->child, (void *)((struct peek_t *)io->data)->buffer, bytes_read);
  ((struct peek_t *)io->data)->offset = (signed long int)0;
  ((struct peek_t *)io->data)->length = bytes_read;
  if(!(bytes_read >= 1l))
    return bytes_read;

  else
    return bytes_read;
}

// safe_open
// file iow-stdio.c line 62
static signed int safe_open(const char *filename, signed int flags)
{
  signed int fd = -1;
  unsigned int userid = (unsigned int)0;
  unsigned int groupid = (unsigned int)0;
  char *sudoenv = (char *)(void *)0;
  fd=open(filename, flags | 01 | 0100 | 01000 | (force_directio_write != 0 ? 040000 : 0), 0666);
  if(fd == -1)
    fd=open(filename, flags | 01 | 0100 | 01000, 0666);

  signed int return_value_fchown$3;
  if(fd == -1)
    return fd;

  else
  {
    sudoenv=getenv("SUDO_UID");
    if(!(sudoenv == ((char *)NULL)))
    {
      signed long int return_value_strtol$1;
      return_value_strtol$1=strtol(sudoenv, (char ** restrict )(void *)0, 10);
      userid = (unsigned int)return_value_strtol$1;
    }

    sudoenv=getenv("SUDO_GID");
    if(!(sudoenv == ((char *)NULL)))
    {
      signed long int return_value_strtol$2;
      return_value_strtol$2=strtol(sudoenv, (char ** restrict )(void *)0, 10);
      groupid = (unsigned int)return_value_strtol$2;
    }

    if(!(userid == 0u))
    {
      return_value_fchown$3=fchown(fd, userid, groupid);
      if(!(return_value_fchown$3 == -1))
        goto __CPROVER_DUMP_L5;

      perror("fchown");
      return -1;
    }

    else
    {

    __CPROVER_DUMP_L5:
      ;
      return fd;
    }
  }
}

// stdio_close
// file ior-stdio.c line 95
static void stdio_close(struct io_t *io)
{
  close(((struct stdio_t *)io->data)->fd);
  free(io->data);
  free((void *)io);
}

// stdio_open
// file wandio.h line 199
struct io_t * stdio_open(const char *filename)
{
  struct io_t *io;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct io_t) /*16ul*/ );
  io = (struct io_t *)return_value_malloc$1;
  io->data=malloc(sizeof(struct stdio_t) /*4ul*/ );
  signed int return_value_strcmp$2;
  return_value_strcmp$2=strcmp(filename, "-");
  if(return_value_strcmp$2 == 0)
    ((struct stdio_t *)io->data)->fd = 0;

  else
    ((struct stdio_t *)io->data)->fd=open(filename, 00 | (force_directio_read != 0 ? 040000 : 0));
  io->source = &stdio_source;
  if(((struct stdio_t *)io->data)->fd == -1)
  {
    free((void *)io);
    return (struct io_t *)(void *)0;
  }

  else
    return io;
}

// stdio_read
// file ior-stdio.c line 80
static signed long int stdio_read(struct io_t *io, void *buffer, signed long int len)
{
  signed long int return_value_read$1;
  return_value_read$1=read(((struct stdio_t *)io->data)->fd, buffer, (unsigned long int)len);
  return return_value_read$1;
}

// stdio_seek
// file ior-stdio.c line 90
static signed long int stdio_seek(struct io_t *io, signed long int offset, signed int whence)
{
  signed long int return_value_lseek$1;
  return_value_lseek$1=lseek(((struct stdio_t *)io->data)->fd, offset, whence);
  return return_value_lseek$1;
}

// stdio_tell
// file ior-stdio.c line 85
static signed long int stdio_tell(struct io_t *io)
{
  signed long int return_value_lseek$1;
  return_value_lseek$1=lseek(((struct stdio_t *)io->data)->fd, (signed long int)0, 1);
  return return_value_lseek$1;
}

// stdio_wclose
// file iow-stdio.c line 214
static void stdio_wclose(struct iow_t *iow)
{
  signed long int err;
  signed int return_value_fcntl$1;
  return_value_fcntl$1=fcntl(((struct stdiow_t *)iow->data)->fd, 3);
  err = (signed long int)return_value_fcntl$1;
  if(!((16384l & err) == 0l) && !(err == -1l))
    fcntl(((struct stdiow_t *)iow->data)->fd, 4, err & (signed long int)~040000);

  err=write(((struct stdiow_t *)iow->data)->fd, (const void *)((struct stdiow_t *)iow->data)->buffer, (unsigned long int)((struct stdiow_t *)iow->data)->offset);
  ((struct stdiow_t *)iow->data)->offset = 0;
  close(((struct stdiow_t *)iow->data)->fd);
  free(iow->data);
  free((void *)iow);
}

// stdio_wopen
// file wandio.h line 206
struct iow_t * stdio_wopen(const char *filename, signed int flags)
{
  struct iow_t *iow;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct iow_t) /*16ul*/ );
  iow = (struct iow_t *)return_value_malloc$1;
  iow->source = &stdio_wsource;
  iow->data=malloc(sizeof(struct stdiow_t) /*4104ul*/ );
  signed int return_value_strcmp$2;
  return_value_strcmp$2=strcmp(filename, "-");
  if(return_value_strcmp$2 == 0)
    ((struct stdiow_t *)iow->data)->fd = 1;

  else
    ((struct stdiow_t *)iow->data)->fd=safe_open(filename, flags);
  if(((struct stdiow_t *)iow->data)->fd == -1)
  {
    free((void *)iow);
    return (struct iow_t *)(void *)0;
  }

  else
  {
    ((struct stdiow_t *)iow->data)->offset = 0;
    return iow;
  }
}

// stdio_wwrite
// file iow-stdio.c line 146
static signed long int stdio_wwrite(struct iow_t *iow, const char *buffer, signed long int len)
{
  signed int towrite = (signed int)len;
  /* assertion towrite >= 0 */
  assert(towrite >= 0);
  signed int tmp_if_expr$1;
  signed int tmp_if_expr$3;
  while(((struct stdiow_t *)iow->data)->offset + towrite >= 4096)
  {
    signed int err;
    struct iovec iov[2l];
    signed int total = ((struct stdiow_t *)iow->data)->offset + towrite;
    signed int amount;
    signed int count = 0;
    total = total - total % 4096;
    amount = total;
    if(!(((struct stdiow_t *)iow->data)->offset == 0))
    {
      iov[(signed long int)count].iov_base = (void *)((struct stdiow_t *)iow->data)->buffer;
      if(!(((struct stdiow_t *)iow->data)->offset >= amount))
        tmp_if_expr$1 = ((struct stdiow_t *)iow->data)->offset;

      else
        tmp_if_expr$1 = amount;
      iov[(signed long int)count].iov_len = (unsigned long int)tmp_if_expr$1;
      amount = amount - (signed int)iov[(signed long int)count].iov_len;
      count = count + 1;
    }

    if(!(towrite == 0))
    {
      iov[(signed long int)count].iov_base = (void *)buffer;
      iov[(signed long int)count].iov_len = (unsigned long int)amount;
      amount = amount - (signed int)iov[(signed long int)count].iov_len;
      count = count + 1;
    }

    /* assertion amount == 0 */
    assert(amount == 0);
    signed long int return_value_writev$2;
    return_value_writev$2=writev(((struct stdiow_t *)iow->data)->fd, iov, count);
    err = (signed int)return_value_writev$2;
    if(err == -1)
      return (signed long int)-1;

    if(!(((struct stdiow_t *)iow->data)->offset >= err))
      tmp_if_expr$3 = ((struct stdiow_t *)iow->data)->offset;

    else
      tmp_if_expr$3 = err;
    amount = tmp_if_expr$3;
    memmove((void *)((struct stdiow_t *)iow->data)->buffer, (const void *)(((struct stdiow_t *)iow->data)->buffer + (signed long int)amount), (unsigned long int)(((struct stdiow_t *)iow->data)->offset - amount));
    ((struct stdiow_t *)iow->data)->offset = ((struct stdiow_t *)iow->data)->offset - amount;
    err = err - amount;
    /* assertion err <= towrite */
    assert(err <= towrite);
    buffer = buffer + (signed long int)err;
    towrite = towrite - err;
    /* assertion ((struct stdiow_t *)((iow)->data))->offset == 0 */
    assert(((struct stdiow_t *)iow->data)->offset == 0);
  }
  /* assertion ((struct stdiow_t *)((iow)->data))->offset + towrite <= MIN_WRITE_SIZE */
  assert(((struct stdiow_t *)iow->data)->offset + towrite <= 4096);
  /* assertion towrite >= 0 */
  assert(towrite >= 0);
  if(towrite >= 1)
  {
    memcpy((void *)(((struct stdiow_t *)iow->data)->buffer + (signed long int)((struct stdiow_t *)iow->data)->offset), (const void *)buffer, (unsigned long int)towrite);
    ((struct stdiow_t *)iow->data)->offset = ((struct stdiow_t *)iow->data)->offset + towrite;
  }

  return len;
}

// thread_close
// file ior-thread.c line 260
static void thread_close(struct io_t *io)
{
  pthread_mutex_lock(&((struct state_t *)io->data)->mutex);
  ((struct state_t *)io->data)->closing = (_Bool)1;
  pthread_cond_signal(&((struct state_t *)io->data)->space_avail);
  pthread_mutex_unlock(&((struct state_t *)io->data)->mutex);
  pthread_join(((struct state_t *)io->data)->producer, (void **)(void *)0);
  pthread_mutex_destroy(&((struct state_t *)io->data)->mutex);
  pthread_cond_destroy(&((struct state_t *)io->data)->space_avail);
  pthread_cond_destroy(&((struct state_t *)io->data)->data_ready);
  free((void *)((struct state_t *)io->data)->buffer);
  free((void *)(struct state_t *)io->data);
  free((void *)io);
}

// thread_consumer
// file iow-thread.c line 98
static void * thread_consumer(void *userdata)
{
  signed int buffer = 0;
  _Bool running = (_Bool)1;
  struct iow_t *state = (struct iow_t *)userdata;
  char namebuf[17l];
  signed int return_value_prctl$2;
  return_value_prctl$2=prctl(16, (const void *)namebuf, 0, 0, 0);
  if(return_value_prctl$2 == 0)
  {
    namebuf[(signed long int)16] = (char)0;
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(namebuf);
    if(return_value_strlen$1 >= 10ul)
      strcpy(namebuf + (signed long int)10, "[iow]");

    else
      strncat(namebuf, " [iow]", (unsigned long int)16);
    prctl(15, (const void *)namebuf, 0, 0, 0);
  }

  pthread_mutex_lock(&((struct state_t$0 *)state->data)->mutex);

__CPROVER_DUMP_L4:
  ;
  while((_Bool)1)
  {
    if((signed int)((struct state_t$0 *)state->data)->buffer[(signed long int)buffer].state == EMPTY)
    {
      if(((struct state_t$0 *)state->data)->closing == (_Bool)0)
      {
        pthread_cond_wait(&((struct state_t$0 *)state->data)->data_ready, &((struct state_t$0 *)state->data)->mutex);
        goto __CPROVER_DUMP_L4;
      }

    }

    pthread_mutex_unlock(&((struct state_t$0 *)state->data)->mutex);
    wandio_wwrite(((struct state_t$0 *)state->data)->iow, (const void *)((struct state_t$0 *)state->data)->buffer[(signed long int)buffer].buffer, (signed long int)((struct state_t$0 *)state->data)->buffer[(signed long int)buffer].len);
    pthread_mutex_lock(&((struct state_t$0 *)state->data)->mutex);
    running = ((struct state_t$0 *)state->data)->buffer[(signed long int)buffer].len > 0;
    ((struct state_t$0 *)state->data)->buffer[(signed long int)buffer].len = 0;
    ((struct state_t$0 *)state->data)->buffer[(signed long int)buffer].state = (enum anonymous$8)EMPTY;
    pthread_cond_signal(&((struct state_t$0 *)state->data)->space_avail);
    buffer = (buffer + 1) % 5;
    if(running == (_Bool)0)
      break;

  }
  wandio_wdestroy(((struct state_t$0 *)state->data)->iow);
  pthread_mutex_unlock(&((struct state_t$0 *)state->data)->mutex);
  return (void *)0;
}

// thread_open
// file wandio.h line 196
struct io_t * thread_open(struct io_t *parent)
{
  struct io_t *state;
  if(parent == ((struct io_t *)NULL))
    return (struct io_t *)(void *)0;

  else
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct io_t) /*16ul*/ );
    state = (struct io_t *)return_value_malloc$1;
    state->data=calloc((unsigned long int)1, sizeof(struct state_t) /*184ul*/ );
    state->source = &thread_source;
    void *return_value_malloc$2;
    return_value_malloc$2=malloc(sizeof(struct buffer_t) /*1048584ul*/  * (unsigned long int)max_buffers);
    ((struct state_t *)state->data)->buffer = (struct buffer_t *)return_value_malloc$2;
    memset((void *)((struct state_t *)state->data)->buffer, 0, sizeof(struct buffer_t) /*1048584ul*/  * (unsigned long int)max_buffers);
    ((struct state_t *)state->data)->in_buffer = 0;
    ((struct state_t *)state->data)->offset = (signed long int)0;
    pthread_mutex_init(&((struct state_t *)state->data)->mutex, (const union anonymous$4 *)(void *)0);
    pthread_cond_init(&((struct state_t *)state->data)->data_ready, (const union anonymous$4 *)(void *)0);
    pthread_cond_init(&((struct state_t *)state->data)->space_avail, (const union anonymous$4 *)(void *)0);
    ((struct state_t *)state->data)->io = parent;
    ((struct state_t *)state->data)->closing = (_Bool)0;
    pthread_create(&((struct state_t *)state->data)->producer, (const union pthread_attr_t *)(void *)0, thread_producer, (void *)state);
    return state;
  }
}

// thread_producer
// file ior-thread.c line 98
static void * thread_producer(void *userdata)
{
  struct io_t *state = (struct io_t *)userdata;
  signed int buffer = 0;
  _Bool running = (_Bool)1;
  char namebuf[17l];
  signed int return_value_prctl$2;
  return_value_prctl$2=prctl(16, (const void *)namebuf, 0, 0, 0);
  if(return_value_prctl$2 == 0)
  {
    namebuf[(signed long int)16] = (char)0;
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(namebuf);
    if(return_value_strlen$1 >= 10ul)
      strcpy(namebuf + (signed long int)10, "[ior]");

    else
      strncat(namebuf, " [ior]", (unsigned long int)16);
    prctl(15, (const void *)namebuf, 0, 0, 0);
  }

  pthread_mutex_lock(&((struct state_t *)state->data)->mutex);

__CPROVER_DUMP_L4:
  ;
  while((_Bool)1)
  {
    if((signed int)(((struct state_t *)state->data)->buffer + (signed long int)buffer)->state == FULL)
    {
      if(((struct state_t *)state->data)->closing == (_Bool)0)
      {
        pthread_cond_wait(&((struct state_t *)state->data)->space_avail, &((struct state_t *)state->data)->mutex);
        goto __CPROVER_DUMP_L4;
      }

    }

    if(((struct state_t *)state->data)->closing != (_Bool)0)
      break;

    pthread_mutex_unlock(&((struct state_t *)state->data)->mutex);
    signed long int return_value_wandio_read$3;
    return_value_wandio_read$3=wandio_read(((struct state_t *)state->data)->io, (void *)(((struct state_t *)state->data)->buffer + (signed long int)buffer)->buffer, (signed long int)sizeof(char [1048576l]) /*1048576ul*/ );
    (((struct state_t *)state->data)->buffer + (signed long int)buffer)->len = (signed int)return_value_wandio_read$3;
    pthread_mutex_lock(&((struct state_t *)state->data)->mutex);
    (((struct state_t *)state->data)->buffer + (signed long int)buffer)->state = (enum anonymous$8)FULL;
    running = (((struct state_t *)state->data)->buffer + (signed long int)buffer)->len > 0;
    pthread_cond_signal(&((struct state_t *)state->data)->data_ready);
    buffer = (signed int)((unsigned int)(buffer + 1) % max_buffers);
    if(running == (_Bool)0)
      break;

  }
  wandio_destroy(((struct state_t *)state->data)->io);
  pthread_cond_signal(&((struct state_t *)state->data)->data_ready);
  pthread_mutex_unlock(&((struct state_t *)state->data)->mutex);
  return (void *)0;
}

// thread_read
// file ior-thread.c line 196
static signed long int thread_read(struct io_t *state, void *buffer, signed long int len)
{
  signed int slice;
  signed int copied = 0;
  signed int newbuffer;
  signed long int tmp_if_expr$2;
  for( ; len >= 1l; ((struct state_t *)state->data)->in_buffer = newbuffer)
  {
    pthread_mutex_lock(&((struct state_t *)state->data)->mutex);
    while((signed int)(((struct state_t *)state->data)->buffer + (signed long int)((struct state_t *)state->data)->in_buffer)->state == EMPTY)
    {
      read_waits = read_waits + 1ul;
      pthread_cond_wait(&((struct state_t *)state->data)->data_ready, &((struct state_t *)state->data)->mutex);
    }
    if(!((((struct state_t *)state->data)->buffer + (signed long int)((struct state_t *)state->data)->in_buffer)->len >= 1))
    {
      if(!(copied >= 1))
      {
        signed int *return_value___errno_location$1;
        return_value___errno_location$1=__errno_location();
        *return_value___errno_location$1 = 5;
        copied = (((struct state_t *)state->data)->buffer + (signed long int)((struct state_t *)state->data)->in_buffer)->len;
      }

      pthread_mutex_unlock(&((struct state_t *)state->data)->mutex);
      return (signed long int)copied;
    }

    if(!((signed long int)(((struct state_t *)state->data)->buffer + (signed long int)((struct state_t *)state->data)->in_buffer)->len + -((struct state_t *)state->data)->offset >= len))
      tmp_if_expr$2 = (signed long int)(((struct state_t *)state->data)->buffer + (signed long int)((struct state_t *)state->data)->in_buffer)->len - ((struct state_t *)state->data)->offset;

    else
      tmp_if_expr$2 = len;
    slice = (signed int)tmp_if_expr$2;
    pthread_mutex_unlock(&((struct state_t *)state->data)->mutex);
    memcpy(buffer, (const void *)((((struct state_t *)state->data)->buffer + (signed long int)((struct state_t *)state->data)->in_buffer)->buffer + ((struct state_t *)state->data)->offset), (unsigned long int)slice);
    buffer = buffer + (signed long int)slice;
    len = len - (signed long int)slice;
    copied = copied + slice;
    pthread_mutex_lock(&((struct state_t *)state->data)->mutex);
    ((struct state_t *)state->data)->offset = ((struct state_t *)state->data)->offset + (signed long int)slice;
    newbuffer = ((struct state_t *)state->data)->in_buffer;
    if(((struct state_t *)state->data)->offset >= (signed long int)(((struct state_t *)state->data)->buffer + (signed long int)((struct state_t *)state->data)->in_buffer)->len)
    {
      (((struct state_t *)state->data)->buffer + (signed long int)((struct state_t *)state->data)->in_buffer)->state = (enum anonymous$8)EMPTY;
      pthread_cond_signal(&((struct state_t *)state->data)->space_avail);
      newbuffer = (signed int)((unsigned int)(newbuffer + 1) % max_buffers);
      ((struct state_t *)state->data)->offset = (signed long int)0;
    }

    pthread_mutex_unlock(&((struct state_t *)state->data)->mutex);
  }
  return (signed long int)copied;
}

// thread_wclose
// file iow-thread.c line 242
static void thread_wclose(struct iow_t *iow)
{
  pthread_mutex_lock(&((struct state_t$0 *)iow->data)->mutex);
  ((struct state_t$0 *)iow->data)->closing = (_Bool)1;
  pthread_cond_signal(&((struct state_t$0 *)iow->data)->data_ready);
  pthread_mutex_unlock(&((struct state_t$0 *)iow->data)->mutex);
  pthread_join(((struct state_t$0 *)iow->data)->consumer, (void **)(void *)0);
  pthread_mutex_destroy(&((struct state_t$0 *)iow->data)->mutex);
  pthread_cond_destroy(&((struct state_t$0 *)iow->data)->data_ready);
  pthread_cond_destroy(&((struct state_t$0 *)iow->data)->space_avail);
  free(iow->data);
  free((void *)iow);
}

// thread_wopen
// file wandio.h line 205
struct iow_t * thread_wopen(struct iow_t *child)
{
  struct iow_t *state;
  if(child == ((struct iow_t *)NULL))
    return (struct iow_t *)(void *)0;

  else
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct iow_t) /*16ul*/ );
    state = (struct iow_t *)return_value_malloc$1;
    state->data=calloc((unsigned long int)1, sizeof(struct state_t$0) /*5243088ul*/ );
    state->source = &thread_wsource;
    ((struct state_t$0 *)state->data)->out_buffer = 0;
    ((struct state_t$0 *)state->data)->offset = (signed long int)0;
    pthread_mutex_init(&((struct state_t$0 *)state->data)->mutex, (const union anonymous$4 *)(void *)0);
    pthread_cond_init(&((struct state_t$0 *)state->data)->data_ready, (const union anonymous$4 *)(void *)0);
    pthread_cond_init(&((struct state_t$0 *)state->data)->space_avail, (const union anonymous$4 *)(void *)0);
    ((struct state_t$0 *)state->data)->iow = child;
    ((struct state_t$0 *)state->data)->closing = (_Bool)0;
    pthread_create(&((struct state_t$0 *)state->data)->consumer, (const union pthread_attr_t *)(void *)0, thread_consumer, (void *)state);
    return state;
  }
}

// thread_wwrite
// file iow-thread.c line 188
static signed long int thread_wwrite(struct iow_t *state, const char *buffer, signed long int len)
{
  signed int slice;
  signed int copied = 0;
  signed int newbuffer;
  pthread_mutex_lock(&((struct state_t$0 *)state->data)->mutex);
  signed long int tmp_if_expr$1;
  for( ; len >= 1l; ((struct state_t$0 *)state->data)->out_buffer = newbuffer)
  {
    while((signed int)((struct state_t$0 *)state->data)->buffer[(signed long int)((struct state_t$0 *)state->data)->out_buffer].state == FULL)
    {
      write_waits = write_waits + 1ul;
      pthread_cond_wait(&((struct state_t$0 *)state->data)->space_avail, &((struct state_t$0 *)state->data)->mutex);
    }
    if(!((signed long int)sizeof(char [1048576l]) /*1048576l*/  + -((struct state_t$0 *)state->data)->offset >= len))
      tmp_if_expr$1 = (signed long int)sizeof(char [1048576l]) /*1048576ul*/  - ((struct state_t$0 *)state->data)->offset;

    else
      tmp_if_expr$1 = len;
    slice = (signed int)tmp_if_expr$1;
    pthread_mutex_unlock(&((struct state_t$0 *)state->data)->mutex);
    memcpy((void *)(((struct state_t$0 *)state->data)->buffer[(signed long int)((struct state_t$0 *)state->data)->out_buffer].buffer + ((struct state_t$0 *)state->data)->offset), (const void *)buffer, (unsigned long int)slice);
    pthread_mutex_lock(&((struct state_t$0 *)state->data)->mutex);
    ((struct state_t$0 *)state->data)->offset = ((struct state_t$0 *)state->data)->offset + (signed long int)slice;
    ((struct state_t$0 *)state->data)->buffer[(signed long int)((struct state_t$0 *)state->data)->out_buffer].len = ((struct state_t$0 *)state->data)->buffer[(signed long int)((struct state_t$0 *)state->data)->out_buffer].len + slice;
    buffer = buffer + (signed long int)slice;
    len = len - (signed long int)slice;
    copied = copied + slice;
    newbuffer = ((struct state_t$0 *)state->data)->out_buffer;
    if(((struct state_t$0 *)state->data)->offset >= (signed long int)sizeof(char [1048576l]) /*1048576l*/ )
    {
      ((struct state_t$0 *)state->data)->buffer[(signed long int)((struct state_t$0 *)state->data)->out_buffer].state = (enum anonymous$8)FULL;
      pthread_cond_signal(&((struct state_t$0 *)state->data)->data_ready);
      ((struct state_t$0 *)state->data)->offset = (signed long int)0;
      newbuffer = (newbuffer + 1) % 5;
    }

  }
  pthread_mutex_unlock(&((struct state_t$0 *)state->data)->mutex);
  return (signed long int)copied;
}

// wandio_create
// file ../../../libwandio/wandio.h line 241
struct io_t * wandio_create(const char *filename)
{
  parse_env();
  struct io_t *return_value_create_io_reader$1;
  return_value_create_io_reader$1=create_io_reader(filename, use_autodetect);
  return return_value_create_io_reader$1;
}

// wandio_create_uncompressed
// file wandio.c line 229
struct io_t * wandio_create_uncompressed(const char *filename)
{
  parse_env();
  struct io_t *return_value_create_io_reader$1;
  return_value_create_io_reader$1=create_io_reader(filename, 0);
  return return_value_create_io_reader$1;
}

// wandio_destroy
// file ../../../libwandio/wandio.h line 302
void wandio_destroy(struct io_t *io)
{
  if(!(io == ((struct io_t *)NULL)))
  {
    if(!(keep_stats == 0))
      fprintf(stderr, "LIBTRACEIO STATS: %lu blocks on read\n", read_waits);

    io->source->close(io);
  }

}

// wandio_lookup_compression_type
// file ../../../libwandio/wandio.h line 229
struct wandio_compression_type * wandio_lookup_compression_type(const char *name)
{
  struct wandio_compression_type *wct = compression_type;
  signed int return_value_strcmp$1;
  do
  {
    return_value_strcmp$1=strcmp(wct->name, "NONE");
    if(return_value_strcmp$1 == 0)
      break;

    signed int return_value_strcmp$2;
    return_value_strcmp$2=strcmp(wct->name, name);
    if(return_value_strcmp$2 == 0)
      return wct;

    wct = wct + 1l;
  }
  while((_Bool)1);
  return (struct wandio_compression_type *)(void *)0;
}

// wandio_peek
// file wandio.c line 263
signed long int wandio_peek(struct io_t *io, void *buffer, signed long int len)
{
  signed long int ret;
  /* assertion io->source->peek */
  assert(io->source->peek != ((signed long int (*)(struct io_t *, void *, signed long int))NULL));
  ret=io->source->peek(io, buffer, len);
  return ret;
}

// wandio_read
// file ../../../libwandio/wandio.h line 285
signed long int wandio_read(struct io_t *io, void *buffer, signed long int len)
{
  signed long int ret;
  ret=io->source->read(io, buffer, len);
  return ret;
}

// wandio_seek
// file wandio.c line 244
signed long int wandio_seek(struct io_t *io, signed long int offset, signed int whence)
{
  if(io->source->seek == ((signed long int (*)(struct io_t *, signed long int, signed int))NULL))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = -38;
    return (signed long int)-1;
  }

  signed long int return_value;
  return_value=io->source->seek(io, offset, whence);
  return return_value;
}

// wandio_tell
// file wandio.c line 235
signed long int wandio_tell(struct io_t *io)
{
  if(io->source->tell == ((signed long int (*)(struct io_t *))NULL))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = -38;
    return (signed long int)-1;
  }

  signed long int return_value;
  return_value=io->source->tell(io);
  return return_value;
}

// wandio_wcreate
// file ../../../libwandio/wandio.h line 313
struct iow_t * wandio_wcreate(const char *filename, signed int compress_type, signed int compression_level, signed int flags)
{
  struct iow_t *iow;
  parse_env();
  /* assertion compression_level >= 0 && compression_level <= 9 */
  assert(compression_level >= 0 && compression_level <= 9);
  /* assertion compress_type != WANDIO_COMPRESS_MASK */
  assert(compress_type != 7);
  iow=stdio_wopen(filename, flags);
  struct iow_t *return_value_thread_wopen$1;
  if(iow == ((struct iow_t *)NULL))
    return (struct iow_t *)(void *)0;

  else
  {
    if(compress_type == 1 && !(compression_level == 0))
      iow=zlib_wopen(iow, compression_level);

    else
      if(compress_type == 2 && !(compression_level == 0))
        iow=bz_wopen(iow, compression_level);

      else
        if(compress_type == 4 && !(compression_level == 0))
          iow=lzma_wopen(iow, compression_level);

    if(!(use_threads == 0u))
    {
      return_value_thread_wopen$1=thread_wopen(iow);
      return return_value_thread_wopen$1;
    }

    else
      return iow;
  }
}

// wandio_wdestroy
// file ../../../libwandio/wandio.h line 329
void wandio_wdestroy(struct iow_t *iow)
{
  iow->source->close(iow);
  if(!(keep_stats == 0))
    fprintf(stderr, "LIBTRACEIO STATS: %lu blocks on write\n", write_waits);

}

// wandio_wwrite
// file ../../../libwandio/wandio.h line 322
signed long int wandio_wwrite(struct iow_t *iow, const void *buffer, signed long int len)
{
  signed long int return_value;
  return_value=iow->source->write(iow, (const char *)buffer, len);
  return return_value;
}

// zlib_close
// file ior-zlib.c line 156
static void zlib_close(struct io_t *io)
{
  inflateEnd(&((struct zlib_t *)io->data)->strm);
  wandio_destroy(((struct zlib_t *)io->data)->parent);
  free(io->data);
  free((void *)io);
}

// zlib_open
// file wandio.h line 195
struct io_t * zlib_open(struct io_t *parent)
{
  struct io_t *io;
  if(parent == ((struct io_t *)NULL))
    return (struct io_t *)(void *)0;

  else
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct io_t) /*16ul*/ );
    io = (struct io_t *)return_value_malloc$1;
    io->source = &zlib_source;
    io->data=malloc(sizeof(struct zlib_t) /*1048704ul*/ );
    ((struct zlib_t *)io->data)->parent = parent;
    ((struct zlib_t *)io->data)->strm.next_in = (unsigned char *)(void *)0;
    ((struct zlib_t *)io->data)->strm.avail_in = (unsigned int)0;
    ((struct zlib_t *)io->data)->strm.next_out = (unsigned char *)(void *)0;
    ((struct zlib_t *)io->data)->strm.avail_out = (unsigned int)0;
    ((struct zlib_t *)io->data)->strm.zalloc = ((void * (*)(void *, unsigned int, unsigned int))NULL);
    ((struct zlib_t *)io->data)->strm.zfree = ((void (*)(void *, void *))NULL);
    ((struct zlib_t *)io->data)->strm.opaque = (void *)0;
    ((struct zlib_t *)io->data)->err = (enum err_t)ERR_OK;
    inflateInit2_(&((struct zlib_t *)io->data)->strm, 15 | 32, "1.2.8", (signed int)sizeof(struct z_stream_s) /*112ul*/ );
    return io;
  }
}

// zlib_read
// file ior-zlib.c line 92
static signed long int zlib_read(struct io_t *io, void *buffer, signed long int len)
{
  if((signed int)((struct zlib_t *)io->data)->err == ERR_EOF)
    return (signed long int)0;

  else
  {
    if((signed int)((struct zlib_t *)io->data)->err == ERR_ERROR)
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      *return_value___errno_location$1 = 5;
      return (signed long int)-1;
    }

    ((struct zlib_t *)io->data)->strm.avail_out = (unsigned int)len;
    ((struct zlib_t *)io->data)->strm.next_out = (unsigned char *)buffer;
    while((signed int)((struct zlib_t *)io->data)->err == ERR_OK)
    {
      if(!(((struct zlib_t *)io->data)->strm.avail_out >= 1u))
        break;

      while(!(((struct zlib_t *)io->data)->strm.avail_in >= 1u))
      {
        signed int bytes_read;
        signed long int return_value_wandio_read$2;
        return_value_wandio_read$2=wandio_read(((struct zlib_t *)io->data)->parent, (void *)(char *)((struct zlib_t *)io->data)->inbuff, (signed long int)sizeof(unsigned char [1048576l]) /*1048576ul*/ );
        bytes_read = (signed int)return_value_wandio_read$2;
        if(bytes_read == 0)
        {
          if(((struct zlib_t *)io->data)->strm.avail_out == (unsigned int)len)
          {
            ((struct zlib_t *)io->data)->err = (enum err_t)ERR_EOF;
            return (signed long int)0;
          }

          return len - (signed long int)((struct zlib_t *)io->data)->strm.avail_out;
        }

        if(!(bytes_read >= 0))
        {
          ((struct zlib_t *)io->data)->err = (enum err_t)ERR_ERROR;
          if(!(((struct zlib_t *)io->data)->strm.avail_out == (unsigned int)len))
            return len - (signed long int)((struct zlib_t *)io->data)->strm.avail_out;

          return (signed long int)-1;
        }

        ((struct zlib_t *)io->data)->strm.next_in = ((struct zlib_t *)io->data)->inbuff;
        ((struct zlib_t *)io->data)->strm.avail_in = (unsigned int)bytes_read;
      }
      signed int err;
      err=inflate(&((struct zlib_t *)io->data)->strm, 0);
      switch(err)
      {
        case 0:
        {
          ((struct zlib_t *)io->data)->err = (enum err_t)ERR_OK;
          break;
        }
        case 1:
        {
          inflateEnd(&((struct zlib_t *)io->data)->strm);
          inflateInit2_(&((struct zlib_t *)io->data)->strm, 15 | 32, "1.2.8", (signed int)sizeof(struct z_stream_s) /*112ul*/ );
          ((struct zlib_t *)io->data)->err = (enum err_t)ERR_OK;
          break;
        }
        default:
        {
          signed int *return_value___errno_location$3;
          return_value___errno_location$3=__errno_location();
          *return_value___errno_location$3 = 5;
          ((struct zlib_t *)io->data)->err = (enum err_t)ERR_ERROR;
        }
      }
    }
    return len - (signed long int)((struct zlib_t *)io->data)->strm.avail_out;
  }
}

// zlib_wclose
// file iow-zlib.c line 143
static void zlib_wclose(struct iow_t *iow)
{
  signed int res;
  for( ; (_Bool)1; ((struct zlibw_t *)iow->data)->strm.avail_out = (unsigned int)sizeof(unsigned char [1048576l]) /*1048576ul*/ )
  {
    res=deflate(&((struct zlibw_t *)iow->data)->strm, 4);
    if(res == 1)
      break;

    if(res == -2)
    {
      fprintf(stderr, "Z_STREAM_ERROR while closing output\n");
      break;
    }

    wandio_wwrite(((struct zlibw_t *)iow->data)->child, (const void *)(char *)((struct zlibw_t *)iow->data)->outbuff, (signed long int)(sizeof(unsigned char [1048576l]) /*1048576ul*/  - (unsigned long int)((struct zlibw_t *)iow->data)->strm.avail_out));
    ((struct zlibw_t *)iow->data)->strm.next_out = ((struct zlibw_t *)iow->data)->outbuff;
  }
  deflateEnd(&((struct zlibw_t *)iow->data)->strm);
  wandio_wwrite(((struct zlibw_t *)iow->data)->child, (const void *)(char *)((struct zlibw_t *)iow->data)->outbuff, (signed long int)(sizeof(unsigned char [1048576l]) /*1048576ul*/  - (unsigned long int)((struct zlibw_t *)iow->data)->strm.avail_out));
  wandio_wdestroy(((struct zlibw_t *)iow->data)->child);
  free(iow->data);
  free((void *)iow);
}

// zlib_wopen
// file wandio.h line 201
struct iow_t * zlib_wopen(struct iow_t *child, signed int compress_level)
{
  struct iow_t *iow;
  if(child == ((struct iow_t *)NULL))
    return (struct iow_t *)(void *)0;

  else
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct iow_t) /*16ul*/ );
    iow = (struct iow_t *)return_value_malloc$1;
    iow->source = &zlib_wsource;
    iow->data=malloc(sizeof(struct zlibw_t) /*1048704ul*/ );
    ((struct zlibw_t *)iow->data)->child = child;
    ((struct zlibw_t *)iow->data)->strm.next_in = (unsigned char *)(void *)0;
    ((struct zlibw_t *)iow->data)->strm.avail_in = (unsigned int)0;
    ((struct zlibw_t *)iow->data)->strm.next_out = ((struct zlibw_t *)iow->data)->outbuff;
    ((struct zlibw_t *)iow->data)->strm.avail_out = (unsigned int)sizeof(unsigned char [1048576l]) /*1048576ul*/ ;
    ((struct zlibw_t *)iow->data)->strm.zalloc = ((void * (*)(void *, unsigned int, unsigned int))NULL);
    ((struct zlibw_t *)iow->data)->strm.zfree = ((void (*)(void *, void *))NULL);
    ((struct zlibw_t *)iow->data)->strm.opaque = (void *)0;
    ((struct zlibw_t *)iow->data)->err = (enum err_t)ERR_OK;
    deflateInit2_(&((struct zlibw_t *)iow->data)->strm, compress_level, 8, 15 | 16, 9, 0, "1.2.8", (signed int)sizeof(struct z_stream_s) /*112ul*/ );
    return iow;
  }
}

// zlib_wwrite
// file iow-zlib.c line 98
static signed long int zlib_wwrite(struct iow_t *iow, const char *buffer, signed long int len)
{
  if((signed int)((struct zlibw_t *)iow->data)->err == ERR_EOF)
    return (signed long int)0;

  else
    if((signed int)((struct zlibw_t *)iow->data)->err == ERR_ERROR)
      return (signed long int)-1;

    else
    {
      ((struct zlibw_t *)iow->data)->strm.next_in = (unsigned char *)buffer;
      ((struct zlibw_t *)iow->data)->strm.avail_in = (unsigned int)len;
      while((signed int)((struct zlibw_t *)iow->data)->err == ERR_OK)
      {
        if(!(((struct zlibw_t *)iow->data)->strm.avail_in >= 1u))
          break;

        while(!(((struct zlibw_t *)iow->data)->strm.avail_out >= 1u))
        {
          signed int bytes_written;
          signed long int return_value_wandio_wwrite$1;
          return_value_wandio_wwrite$1=wandio_wwrite(((struct zlibw_t *)iow->data)->child, (const void *)(char *)((struct zlibw_t *)iow->data)->outbuff, (signed long int)sizeof(unsigned char [1048576l]) /*1048576ul*/ );
          bytes_written = (signed int)return_value_wandio_wwrite$1;
          if(!(bytes_written >= 1))
          {
            ((struct zlibw_t *)iow->data)->err = (enum err_t)ERR_ERROR;
            if(!(((struct zlibw_t *)iow->data)->strm.avail_in == (unsigned int)len))
              return len - (signed long int)((struct zlibw_t *)iow->data)->strm.avail_in;

            return (signed long int)-1;
          }

          ((struct zlibw_t *)iow->data)->strm.next_out = ((struct zlibw_t *)iow->data)->outbuff;
          ((struct zlibw_t *)iow->data)->strm.avail_out = (unsigned int)sizeof(unsigned char [1048576l]) /*1048576ul*/ ;
        }
        signed int err;
        err=deflate(&((struct zlibw_t *)iow->data)->strm, 0);
        if(err == 0)
        {
          ((struct zlibw_t *)iow->data)->err = (enum err_t)ERR_OK;
          goto __CPROVER_DUMP_L10;
        }

        ((struct zlibw_t *)iow->data)->err = (enum err_t)ERR_ERROR;

      __CPROVER_DUMP_L10:
        ;
      }
      return len - (signed long int)((struct zlibw_t *)iow->data)->strm.avail_in;
    }
}

